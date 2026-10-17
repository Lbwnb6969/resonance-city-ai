// Project-bound MCP client. Never changes the desktop app's global connection.
import fs from 'node:fs';
import path from 'node:path';
import { fileURLToPath, pathToFileURL } from 'node:url';

const project = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const installation = 'C:/Users/Administrator/.codex/tools/godot-mcp-server/node_modules';
const serverFile = path.join(installation, '@npgamedev/godot-mcp-server/dist/index.js');
const sdk = path.join(installation, '@modelcontextprotocol/sdk/dist/esm');
const { Client } = await import(pathToFileURL(path.join(sdk, 'client/index.js')));
const { StdioClientTransport } = await import(pathToFileURL(path.join(sdk, 'client/stdio.js')));
const requestFile = process.argv[2];
if (!requestFile) throw new Error('Usage: node tools/godot_mcp.mjs requests.json');
const requests = JSON.parse(fs.readFileSync(requestFile, 'utf8').replace(/^\uFEFF/, ''));
const client = new Client({name: 'resonant-city-workspace', version: '1.0.0'});
const transport = new StdioClientTransport({
  command: process.execPath,
  args: [serverFile],
  env: {...process.env, GODOT_MCP_PROJECT_PATH: project, GODOT_MCP_CONFIG_VERSION: '1'},
  stderr: 'pipe',
});
let failed = false;
try {
  await client.connect(transport);
  for (const request of requests) {
    const result = await client.callTool(request, undefined, {timeout: 60000});
    const content = result.content?.filter(item => item.type === 'text').map(item => item.text).join('\n');
    console.log(JSON.stringify({tool: request.name, isError: Boolean(result.isError), content}));
    if (result.isError) { failed = true; break; }
    try {
      const parsed = JSON.parse(content);
      if (parsed.valid === false) { failed = true; break; }
    } catch { /* Some successful tools return text instead of JSON. */ }
  }
} finally {
  await client.close();
}
process.exitCode = failed ? 1 : 0;
