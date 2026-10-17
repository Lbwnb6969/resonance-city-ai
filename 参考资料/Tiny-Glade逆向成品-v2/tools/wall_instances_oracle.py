import sys,pathlib,struct
sys.path.insert(0,'work/python-deps');sys.path.insert(0,'outputs/tiny-glade-analysis/tools')
from wall_mapping_oracle import MappingOracle
class InstOracle(MappingOracle):
 def __init__(self,exe):
  super().__init__(pathlib.Path(exe))
  import math
  self.hooks[0x142e329c0]=('imported_ceilf_finite',lambda:self.set_float(self.x.UC_X86_REG_XMM0,math.ceil(self.read_float(self.x.UC_X86_REG_XMM0))))
  self.hooks[0x142d8db00]=('grow_ssbo_stride80',lambda:self.grow(80))
  self.hooks[0x142d8da20]=('grow_ssbo_stride96',lambda:self.grow(96))
  self.hooks[0x142d8d5c0]=('grow_sampler_stride20',lambda:self.grow(20))
  self.hooks[0x142d7ef80]=('grow_range_stride8',lambda:self.grow(8))
 def ranges(self,out=0x200000):
  cap,ptr,n=struct.unpack('<3Q',self.cpu.mem_read(out,24))
  return [struct.unpack('<2f',self.cpu.mem_read(ptr+i*8,8)) for i in range(n)]

 def rectangle_regions(self,rectangle,length,bottom,top,wallmax,sides=(),separate=False):
     self.reset();self.put_boardspace(length,length,None,rectangle)
     self.cpu.mem_write(0x200208,bytes([1]));self.cpu.mem_write(0x20020c,struct.pack('<f',wallmax))
     self.cpu.mem_write(0x200378,struct.pack('<f',bottom))
     self.cpu.mem_write(0x200800,struct.pack('<3Q',bool(sides),*(sides if sides else (0,0))))
     self.run(0x141489480,0x200000,0x200100,0x200500,xmm={3:top},
              stack={0x28:struct.pack('<Q',separate),0x30:struct.pack('<Q',0x200800),0x38:struct.pack('<Q',0)})
     return self.get_pieces(0x200000)

 def gable_ranges(self,rectangle,length,sides):
     self.reset();self.put_boardspace(length,length,None,rectangle)
     self.cpu.mem_write(0x200800,struct.pack('<3Q',bool(sides),*(sides if sides else (0,0))))
     self.run(0x141489790,0x200000,0x200500,0x200800)
     return self.ranges()

 def emit_curved(self,walltag,index,circle,circumference,start,end,bottom,height,width):
     self.reset();self.cpu.mem_write(0x200100,struct.pack('<4f',*circle));self.cpu.mem_write(0x200500,struct.pack('<3Q',0,80,0))
     self.run(0x1414530c0,walltag,index,0x200100,xmm={3:circumference},
       stack={0x28:struct.pack('<f',start),0x30:struct.pack('<f',end),0x38:struct.pack('<f',bottom),
       0x40:struct.pack('<f',height),0x48:struct.pack('<f',width),0x50:struct.pack('<Q',0x200300),0x58:struct.pack('<Q',0x200500)})
     cap,ptr,n=struct.unpack('<3Q',self.cpu.mem_read(0x200500,24))
     return bytes(self.cpu.mem_read(ptr,80)) if n else None
