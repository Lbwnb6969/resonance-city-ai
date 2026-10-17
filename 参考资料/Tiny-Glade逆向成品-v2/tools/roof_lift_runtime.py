"""Portable scalar runtime for recovered roof basic-block Python source.

No native instructions, EXE, Capstone, or Unicorn at runtime. Registers are
named temporary values reflecting the decompiler's SSA boundary; scratch
addresses reproduce pointer relationships in the lifted original algorithm.
"""
import math,struct
import recovered_roof as roof_math

MASK64=(1<<64)-1
ALIASES={}
for base,aliases in [('rax',['eax','ax','al','ah']),('rbx',['ebx','bx','bl','bh']),
 ('rcx',['ecx','cx','cl','ch']),('rdx',['edx','dx','dl','dh']),
 ('rsp',['esp','sp','spl']),('rbp',['ebp','bp','bpl']),('rsi',['esi','si','sil']),('rdi',['edi','di','dil'])]:
    ALIASES[base]=(base,64,0)
    for a,b in zip(aliases,[32,16,8,8]):ALIASES[a]=(base,b,8 if a in ['ah','bh','ch','dh'] else 0)
for i in range(8,16):
    for tail,b in [('',64),('d',32),('w',16),('b',8)]:ALIASES[f'r{i}{tail}']=(f'r{i}',b,0)

def bitsf(v):return struct.unpack('<f',struct.pack('<I',v&0xffffffff))[0]
def fbits(v):
    try:return struct.unpack('<I',struct.pack('<f',v))[0]
    except OverflowError:return 0xff800000 if v<0 else 0x7f800000
def signed(v,bits):return v-(1<<bits) if v>>(bits-1)&1 else v

class State:
    def __init__(self,constants):
        self.reg={};self.v={};self.flags={};self.pc=0;self.heap=0x300000;self.records=[]
        self.memory=bytearray(0x1200000);self.readonly={}
        for a,h in constants.items():
            b=bytes.fromhex(h)
            for i,c in enumerate(b):self.readonly[a+i]=c
    def readbytes(self,a,n):
        if 0x100000<=a and a+n<=0x1300000:return bytes(self.memory[a-0x100000:a-0x100000+n])
        return bytes(self.readonly[a+i] for i in range(n))
    def writebytes(self,a,b):
        if not 0x100000<=a or a+len(b)>0x1300000:raise RuntimeError(f'Unexpected memory write {a:#x}')
        self.memory[a-0x100000:a-0x100000+len(b)]=b
    def address(self,o):
        _,base,index,scale,disp,n=o
        return ((self.reg.get(base,0) if base else 0)+(self.reg.get(index,0) if index else 0)*scale+disp)&MASK64
    def read(self,o):
        if o[0]=='i':return o[1]&((1<<(o[2]*8))-1)
        if o[0]=='m':return int.from_bytes(self.readbytes(self.address(o),o[-1]),'little')
        name=o[1]
        if name.startswith('xmm'):return self.v.get(name,0)
        base,bits,shift=ALIASES[name];return (self.reg.get(base,0)>>shift)&((1<<bits)-1)
    def write(self,o,value):
        if o[0]=='m':self.writebytes(self.address(o),(value&((1<<(o[-1]*8))-1)).to_bytes(o[-1],'little'));return
        name=o[1]
        if name.startswith('xmm'):self.v[name]=value&((1<<128)-1);return
        base,bits,shift=ALIASES[name];mask=(1<<bits)-1;value&=mask
        if bits in [32,64]:self.reg[base]=value
        else:self.reg[base]=(self.reg.get(base,0)&~(mask<<shift))|(value<<shift)
    def regop(self,name):return ('r',name,16 if name.startswith('xmm') else ALIASES[name][1]//8)
    def lane(self,name,i=0):return bitsf(self.v.get(name,0)>>(32*i))
    def setlane(self,name,v,i=0):
        mask=0xffffffff<<(32*i)
        self.v[name]=(self.v.get(name,0)&~mask)|(fbits(v)<<(32*i))
    def push(self,value):
        self.reg['rsp']-=8;self.writebytes(self.reg['rsp'],(value&MASK64).to_bytes(8,'little'))
    def pop(self):
        a=self.reg['rsp'];v=int.from_bytes(self.readbytes(a,8),'little');self.reg['rsp']+=8;return v
    def condition(self,name):
        f=self.flags;z=f.get('z',False);s=f.get('s',False);o=f.get('o',False);c=f.get('c',False);p=f.get('p',False)
        return {'e':z,'z':z,'ne':not z,'nz':not z,'a':not c and not z,'ae':not c,'b':c,
          'be':c or z,'g':not z and s==o,'ge':s==o,'l':s!=o,'le':z or s!=o,
          'p':p,'np':not p,'s':s,'ns':not s,'o':o,'no':not o}[name]
    def flagresult(self,v,bits):
        v&=(1<<bits)-1;self.flags.update(z=v==0,s=bool(v>>(bits-1)),p=(v&255).bit_count()%2==0)
    def integer(self,name,ops):
        d=ops[0];bits=d[-1]*8;a=self.read(d);mask=(1<<bits)-1
        b=self.read(ops[1]) if len(ops)>1 else 0
        if name in ['cmp','sub','sbb','dec','neg']:
            if name=='neg':b=a;a=0
            if name=='dec':b=1
            if name=='sbb':b+=int(self.flags.get('c',False))
            value=a-b;carry=a<b;overflow=bool(((a^b)&(a^value))>>(bits-1)&1)
        elif name in ['add','adc','inc']:
            if name=='inc':b=1
            if name=='adc':b+=int(self.flags.get('c',False))
            value=a+b;carry=value>mask;overflow=bool((~(a^b)&(a^value))>>(bits-1)&1)
        elif name in ['and','test','or','xor']:
            value={'and':lambda:a&b,'test':lambda:a&b,'or':lambda:a|b,'xor':lambda:a^b}[name]();carry=overflow=False
        elif name=='not':self.write(d,~a);return
        elif name in ['shl','shr','sar']:
            b&=63 if bits==64 else 31
            if b==0:return
            if name=='shl':value=a<<b;carry=bool(a>>(bits-b)&1);overflow=bool((value>>(bits-1)&1)^carry)
            else:
                value=(signed(a,bits)>>b) if name=='sar' else a>>b;carry=bool(a>>(b-1)&1);overflow=bool(a>>(bits-1)) if name=='shr' else False
        elif name=='imul':
            value=signed(a,bits)*signed(b,bits);carry=overflow=value!=signed(value&mask,bits)
        else:raise NotImplementedError(name)
        oldc=self.flags.get('c',False);self.flagresult(value,bits);self.flags.update(c=carry,o=overflow)
        if name in ['inc','dec']:self.flags['c']=oldc
        if name not in ['cmp','test']:self.write(d,value)
    def multiply(self,o):
        b=o[-1]*8;p=(self.reg.get('rax',0)&((1<<b)-1))*self.read(o)
        self.reg['rax']=p&((1<<b)-1);self.reg['rdx']=p>>b;self.flags.update(c=bool(p>>b),o=bool(p>>b))
    def simd_move(self,name,d,s):
        value=self.read(s);prior=self.read(d)
        if name in ['movaps','movups','movdqa']:self.write(d,value);return
        if name in ['movd','movq']:
            value&=(1<<(32 if name=='movd' else 64))-1;self.write(d,value);return
        if name=='movss':
            if d[0]=='r':value=(value&0xffffffff)|((prior&~0xffffffff) if s[0]=='r' else 0)
        elif name=='movsd':
            if d[0]=='r':value=(value&((1<<64)-1))|((prior&~((1<<64)-1)) if s[0]=='r' else 0)
        elif name=='movlps':
            if d[0]=='r':value=(prior&~((1<<64)-1))|(value&((1<<64)-1))
        elif name=='movhps':
            value=((prior&((1<<64)-1))|(value<<64)) if d[0]=='r' else value>>64
        elif name=='movlhps':value=(prior&((1<<64)-1))|((value&((1<<64)-1))<<64)
        elif name=='movhlps':value=(prior&~((1<<64)-1))|(value>>64)
        elif name=='movddup':value=(value&((1<<64)-1))*((1<<64)+1)
        elif name in ['movshdup','movsldup']:
            lanes=[(value>>(32*i))&0xffffffff for i in range(4)]
            idx=[1,1,3,3] if name=='movshdup' else [0,0,2,2]
            value=sum(lanes[j]<<(32*i) for i,j in enumerate(idx))
        else:raise NotImplementedError(name)
        self.write(d,value)
    def float_op(self,name,d,s):
        old=self.read(d);sv=self.read(s)
        if name in ['xorps','orps','andps','andnps']:
            v={'xorps':old^sv,'orps':old|sv,'andps':old&sv,'andnps':(~old)&sv}[name];self.write(d,v);return
        scalar=name.endswith('ss');n=1 if scalar else 4;out=old if scalar else 0
        for i in range(n):
            a=bitsf(old>>(32*i));b=bitsf(sv>>(32*i))
            if name.startswith('add'):v=a+b
            elif name.startswith('sub'):v=a-b
            elif name.startswith('mul'):v=a*b
            elif name.startswith('div'):
                v=a/b if b else (float('nan') if not a else math.copysign(float('inf'),a)*math.copysign(1.,b))
            elif name.startswith('sqrt'):v=math.sqrt(b) if b>=0 else float('nan')
            elif name.startswith('max'):v=a if a>b else b
            elif name.startswith('min'):v=a if a<b else b
            elif name=='cmpunordss':v=0xffffffff if math.isnan(a) or math.isnan(b) else 0
            elif name=='cmpeqss':v=0xffffffff if a==b else 0
            elif name=='cmpltss':v=0xffffffff if a<b else 0
            elif name=='cmpnless':v=0xffffffff if not a<=b else 0
            else:raise NotImplementedError(name)
            bits=v if name.startswith('cmp') else fbits(v)
            out=(out&~(0xffffffff<<(32*i)))|(bits<<(32*i))
        self.write(d,out)
    def compare_float(self,a,b):
        a,b=bitsf(self.read(a)),bitsf(self.read(b))
        nan=math.isnan(a) or math.isnan(b)
        self.flags.update(z=nan or a==b,c=nan or a<b,p=nan,s=False,o=False)
    def shuffle(self,name,d,s,imm=0):
        a,b=self.read(d),self.read(s)
        aa=[(a>>(32*i))&0xffffffff for i in range(4)];bb=[(b>>(32*i))&0xffffffff for i in range(4)]
        if name=='shufps':rr=[aa[imm&3],aa[imm>>2&3],bb[imm>>4&3],bb[imm>>6&3]]
        elif name=='pshufd':rr=[bb[imm>>(i*2)&3] for i in range(4)]
        elif name=='shufpd':
            self.write(d,((a>>(64*(imm&1)))&MASK64)|(((b>>(64*(imm>>1&1)))&MASK64)<<64));return
        else:
            idx={'unpcklps':[0,0,1,1],'unpckhps':[2,2,3,3],'unpcklpd':[0,1,0,1],'unpckhpd':[2,3,2,3]}[name]
            rr=[aa[idx[0]],bb[idx[1]],aa[idx[2]],bb[idx[3]]] if name.endswith('ps') else [aa[idx[0]],aa[idx[1]],bb[idx[2]],bb[idx[3]]]
        self.write(d,sum(v<<(32*i) for i,v in enumerate(rr)))
    def packed_shift(self,name,d,imm):
        value=self.read(d);rr=[]
        for i in range(4):
            a=(value>>(32*i))&0xffffffff
            rr.append((a<<imm)&0xffffffff if name=='pslld' else (signed(a,32)>>min(imm,31))&0xffffffff)
        self.write(d,sum(v<<(32*i) for i,v in enumerate(rr)))

def hooks(s,pc):
    if pc in [0x14007ee60,0x1406abac0]:s.pc=s.pop();return True
    if pc in [0x1406abab0,0x1406abad0]:
        n=s.reg.get('rcx',0) if pc==0x1406abab0 else s.reg.get('r9',0);ptr=s.heap;s.heap+=(n+15)&~15
        if s.heap>=0x1300000:raise MemoryError('reconstruction scratch heap exceeded')
        if pc==0x1406abad0:s.writebytes(ptr,s.readbytes(s.reg['rcx'],min(n,s.reg['rdx'])))
        s.reg['rax']=ptr;s.pc=s.pop();return True
    if pc in [0x142817e20,0x142816720]:s.records.append(s.readbytes(s.reg['rdx'],64));s.pc=s.pop();return True
    mathmap={0x142e32ad0:'powf',0x142e329e0:'cosf',0x142e32b30:'sinf',0x142e32990:'atanf',
             0x142e32a70:'fmodf',0x142e329c0:'ceilf',0x142e32b00:'roundf'}
    if pc in mathmap:
        name=mathmap[pc];a=s.lane('xmm0');b=s.lane('xmm1')
        v={'powf':lambda:math.pow(a,b),'cosf':lambda:math.cos(a),'sinf':lambda:math.sin(a),
            'atanf':lambda:math.atan(a),'fmodf':lambda:math.fmod(a,b),'ceilf':lambda:math.ceil(a),
            'roundf':lambda:math.copysign(math.floor(abs(a)+.5),a)}[name]()
        s.setlane('xmm0',v);s.pc=s.pop();return True
    if pc in [0x1424e5b90,0x140df4560,0x141e3c420,0x141e3c580,0x141e3c5c0]:
        if pc==0x141e3c420:packed=struct.pack('<e',s.lane('xmm0'))
        else:
            n={0x1424e5b90:4,0x140df4560:3,0x141e3c580:3,0x141e3c5c0:4}[pc]
            fs=struct.unpack('<'+'f'*n,s.readbytes(s.reg['rcx'],n*4));packed=struct.pack('<'+'e'*n,*fs)
        s.reg['rax']=int.from_bytes(packed,'little');s.pc=s.pop();return True
    return False

def execute(roof,blocks,constants,render_id=0,flag=0,trace=False):
    if roof.is_flat():return []
    s=State(constants);w=roof.wall;b=bytearray(0x58)
    if w.kind=='circle':struct.pack_into('<Iffff',b,8,0,w.pivot_x,w.pivot_z,w.radius,w.yaw)
    else:struct.pack_into('<Iffffff',b,8,1,w.axis_x,w.axis_z,w.pivot_x,w.pivot_z,w.width,w.length)
    struct.pack_into('<ffffffB',b,0x24,roof.tip_offset_x,roof.tip_offset_z,roof.profile_01,roof.height_01,
        roof.ridge_length_01,roof.eave_length_01,roof.ridge_direction)
    struct.pack_into('<f',b,0x4c,roof.pivot_y);s.writebytes(0x200000,b)
    s.writebytes(0x220000,struct.pack('<ffff',w.pivot_x,w.pivot_z,w.radius,w.yaw) if w.kind=='circle'
      else struct.pack('<ffffff',w.axis_x,w.axis_z,w.pivot_x,w.pivot_z,w.width,w.length))
    s.reg.update(rsp=0x110000,rcx=0x220000,rdx=0x200000,r8=render_id,r9=flag)
    s.push(0x10000);s.pc=0x142816ba0 if w.kind=='circle' else 0x142812c70
    for step in range(1000000):
        if s.pc==0x10000:return s.records
        if hooks(s,s.pc):continue
        block=blocks.get(s.pc)
        if block is None:raise RuntimeError(f'Unexpected reconstructed block {s.pc:#x}')
        if trace:print(hex(s.pc))
        block(s)
    raise RuntimeError('Reconstructed source exceeded block budget')
