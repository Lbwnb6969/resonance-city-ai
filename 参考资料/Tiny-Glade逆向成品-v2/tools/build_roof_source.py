"""Build readable basic-block Python reconstruction from matched static evidence.
This is a one-time reconstruction builder, not a runtime native-code oracle.
"""
import sys,pathlib,collections,json,sqlite3,argparse,hashlib
import pefile,capstone,roof_tile_oracle as o
args=argparse.ArgumentParser(description=__doc__)
args.add_argument('--exe',type=pathlib.Path,required=True)
args.add_argument('--db',type=pathlib.Path,default=pathlib.Path(__file__).resolve().parents[1]/'evidence/native_callgraph.sqlite')
args.add_argument('--source',type=pathlib.Path,required=True)
args.add_argument('--manifest',type=pathlib.Path,required=True)
args=args.parse_args()
with args.exe.open('rb') as f:sha=hashlib.file_digest(f,'sha256').hexdigest()
if sha!=o.r.EXE_SHA256:raise ValueError('EXE identity differs from recovered ranges')
if args.source.exists() or args.manifest.exists():raise FileExistsError('Use new source and manifest paths')
p=pefile.PE(str(args.exe),fast_load=True)
md=capstone.Cs(capstone.CS_ARCH_X86,capstone.CS_MODE_64);md.detail=True
db=sqlite3.connect(args.db.resolve().as_uri()+'?mode=ro',uri=True)
const={};allinst={};leaders=set(o.SIZES)
for a,n in o.SIZES.items():
 for i in md.disasm(p.get_data(a-p.OPTIONAL_HEADER.ImageBase,n),a):
  allinst[i.address]=i
  if i.mnemonic.startswith('j') or i.mnemonic in ['call','ret','int3','ud2']:
   leaders.add(i.address+i.size)
   if i.mnemonic.startswith('j') and i.operands[0].type==capstone.CS_OP_IMM:leaders.add(i.operands[0].imm)
def operand(op,i):
 if op.type==capstone.CS_OP_REG:return ('r',i.reg_name(op.reg),op.size)
 if op.type==capstone.CS_OP_IMM:return ('i',op.imm,op.size)
 m=op.mem;base=i.reg_name(m.base) if m.base else None;idx=i.reg_name(m.index) if m.index else None;disp=m.disp
 if base=='rip':
  disp=i.address+i.size+disp;base=None
  if i.mnemonic!='lea':const[disp]=p.get_data(disp-p.OPTIONAL_HEADER.ImageBase,op.size).hex()
 return ('m',base,idx,m.scale,disp,op.size)
def statement(i):
 name=i.mnemonic;ops=[operand(op,i) for op in i.operands];d=repr(ops[0]) if ops else '';s=repr(ops[1]) if len(ops)>1 else ''
 line=''
 if name in ['nop']:return []
 if name in ['int3','ud2']:return [f"raise RuntimeError('Original unreachable/panic {i.address:#x}')"]
 if name in ['mov','movabs','movzx']:line=f's.write({d},s.read({s}))'
 elif name=='movsxd':line=f's.write({d},signed(s.read({s}),32))'
 elif name=='lea':line=f's.write({d},s.address({s}))'
 elif name=='push':line=f's.push(s.read({d}))'
 elif name=='pop':line=f's.write({d},s.pop())'
 elif name=='call':return [f's.push({i.address+i.size})',f's.pc=s.read({d})', 'return']
 elif name=='ret':return ['s.pc=s.pop()','return']
 elif name=='jmp':return [f's.pc=s.read({d})','return']
 elif name.startswith('j'):return [f"s.pc=s.read({d}) if s.condition('{name[1:]}') else {i.address+i.size}",'return']
 elif name.startswith('cmov'):line=f"s.write({d},s.read({s})) if s.condition('{name[4:]}') else None"
 elif name.startswith('set'):line=f"s.write({d},int(s.condition('{name[3:]}')))"
 elif name=='mul':line=f's.multiply({d})'
 elif name in ['add','sub','and','or','xor','cmp','test','inc','dec','neg','not','shl','shr','sar','adc','sbb','imul']:
  line=f"s.integer('{name}',{ops!r})"
 elif name in ['movaps','movups','movdqa','movss','movsd','movlps','movhps','movlhps','movhlps','movshdup','movsldup','movddup','movd','movq']:
  line=f"s.simd_move('{name}',{d},{s})"
 elif name in ['ucomiss']:line=f's.compare_float({d},{s})'
 elif name in ['cvtsi2ss']:
  line=f"s.setlane({ops[0][1]!r},float(signed(s.read({s}),{ops[1][-1]*8})))"
 elif name=='cvttss2si':
  bits=ops[0][-1]*8
  line=f"s.write({d},math.trunc(bitsf(s.read({s}))) if math.isfinite(bitsf(s.read({s}))) and -(1<<{bits-1})<=bitsf(s.read({s}))<(1<<{bits-1}) else (1<<{bits-1}))"
 elif name in ['shufps','shufpd','pshufd','unpcklps','unpckhps','unpcklpd','unpckhpd']:
  imm=ops[2][1] if len(ops)>2 else 0;line=f"s.shuffle('{name}',{d},{s},{imm})"
 elif name in ['pslld','psrad']:line=f"s.packed_shift('{name}',{d},{ops[1][1]})"
 elif name.endswith(('ss','ps')):line=f"s.float_op('{name}',{d},{s})"
 else:raise ValueError(name)
 return [line]
lines=['"""Generated low-level Python source for original roof algorithm basic blocks.',
 'Runtime has no EXE, native bytecode, Capstone, or Unicorn dependency.',
 'Temporary names and basic-block labels retain original instruction provenance.',
 'This is lifted source reconstruction, not the game author\'s original Rust source.',
 'Generated from digest-matched PDB ranges; scalar runtime documents f32 behavior.',
 '"""','import math','from roof_lift_runtime import execute, signed, bitsf','','CONSTANTS={']
blocknames=[]
body=[]
for entry in sorted(leaders):
 if entry not in allinst:continue
 blocknames.append(entry);body.extend(['',f'def b_{entry:x}(s):'])
 pc=entry
 while pc in allinst:
  i=allinst[pc]
  body.append(f'    # {i.address:#x}: {i.mnemonic} {i.op_str}')
  ss=statement(i);body.extend('    '+x for x in ss)
  nextpc=pc+i.size
  if ss and ss[-1]=='return':break
  if nextpc in leaders or nextpc not in allinst:
   body.extend([f'    s.pc={nextpc}','    return']);break
  pc=nextpc
lines.extend(f'    {a}: {h!r},' for a,h in sorted(const.items()));lines.extend(['}',*body,'','BLOCKS={'])
lines.extend(f'    {a}: b_{a:x},' for a in blocknames)
lines.extend(['}','','def generate(roof,render_id=0,flag=0):','    return execute(roof,BLOCKS,CONSTANTS,render_id,flag)',''])
file=args.source;file.parent.mkdir(parents=True,exist_ok=True)
with file.open('x',encoding='utf-8') as f:f.write('\n'.join(lines))
manifest={'exe_sha256':o.r.EXE_SHA256,'original_functions':len(o.SIZES),'basic_blocks':len(blocknames),'constant_ranges':len(const),
 'instructions':len(allinst),'source_bytes':file.stat().st_size,
 'function_ranges':[{'va':hex(a),'size':n,'name':db.execute('select name from functions where va=?',(a,)).fetchone()[0]} for a,n in o.SIZES.items()]}
args.manifest.parent.mkdir(parents=True,exist_ok=True)
with args.manifest.open('x',encoding='utf-8') as f:json.dump(manifest,f,indent=2)
print({k:v for k,v in manifest.items() if k!='function_ranges'})
