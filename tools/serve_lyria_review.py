#!/usr/bin/env python3
"""Serve a local listening batch with byte ranges so WAV seeking works."""
import argparse
from functools import partial
from http.server import SimpleHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path
import re


class RangeHandler(SimpleHTTPRequestHandler):
    def send_head(self):
        self.remaining = None
        path = Path(self.translate_path(self.path))
        if not path.is_file():
            return super().send_head()
        stream = path.open('rb')
        size = path.stat().st_size
        start, end = 0, size - 1
        requested = self.headers.get('Range')
        if requested:
            match = re.fullmatch(r'bytes=(\d*)-(\d*)', requested)
            if match and any(match.groups()):
                left, right = match.groups()
                start = int(left) if left else max(0, size - int(right))
                end = min(int(right), size - 1) if left and right else size - 1
            else:
                start = size
            if not 0 <= start <= end < size:
                stream.close()
                self.send_response(416)
                self.send_header('Content-Range', f'bytes */{size}')
                self.send_header('Content-Length', '0')
                self.end_headers()
                return None
        self.send_response(206 if requested else 200)
        self.send_header('Content-Type', self.guess_type(str(path)))
        self.send_header('Accept-Ranges', 'bytes')
        self.send_header('Content-Length', str(end - start + 1))
        if requested:
            self.send_header('Content-Range', f'bytes {start}-{end}/{size}')
        self.end_headers()
        stream.seek(start)
        self.remaining = end - start + 1
        return stream

    def copyfile(self, source, outputfile):
        if self.remaining is None:
            return super().copyfile(source, outputfile)
        try:
            while self.remaining:
                block = source.read(min(256 * 1024, self.remaining))
                if not block:
                    break
                outputfile.write(block)
                self.remaining -= len(block)
        except (ConnectionAbortedError, ConnectionResetError, BrokenPipeError):
            pass  # Media controls cancel obsolete range requests during seeking.


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--batch-root', type=Path, required=True)
    parser.add_argument('--port', type=int, default=8765)
    args = parser.parse_args()
    root = args.batch_root.resolve()
    if not (root / 'listening/listen.html').is_file():
        parser.error('Expected an existing listening batch')
    server = ThreadingHTTPServer(('127.0.0.1', args.port), partial(RangeHandler, directory=str(root)))
    print(f'http://127.0.0.1:{args.port}/listening/listen.html', flush=True)
    try:
        server.serve_forever()
    except KeyboardInterrupt:
        pass
    finally:
        server.server_close()


if __name__ == '__main__':
    main()
