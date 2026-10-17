"""Recovered roof-gravity push constants and portable roof frame state.

CPU kernel preparation takes delta from RoofTileSimulation+0, pivot_y from
Roof+0x4c, animation_t from RoofAnimation+0. Sparse draw gives first/count.
World tile y is base_position.y + current_height (vertex source authority).
"""
from dataclasses import dataclass,field
import struct
import recovered_roof as r
import recovered_roof_tiles as tiles
from roof_animation_reference import RoofAnimation,RoofTileSimulation
from roof_sparse_reference import SparseRoofStorage,SparseRoofWriter
import roof_gpu_reference as gpu

@dataclass
class PushConstants:
    first_instance:int
    instance_count:int
    wall_height_delta:float
    roof_pivot_y:float
    animation_t:float
    def pack(self):return struct.pack('<IIfff',self.first_instance,self.instance_count,self.wall_height_delta,self.roof_pivot_y,self.animation_t)
    def workgroups(self):return ((self.instance_count+63)//64,1,1)

def prepare_dispatches(writer,simulation,roof,animation):
    return [{'page':d['page'],'push_constants':PushConstants(d['first_instance'],d['instance_count'],
                simulation.wall_height_delta,roof.pivot_y,animation.primary_t)} for d in writer.dispatch_ranges()]

@dataclass
class RoofState:
    roof:r.Roof
    records:list=field(default_factory=list)
    animation:RoofAnimation=field(default_factory=RoofAnimation)
    simulation:RoofTileSimulation|None=None
    @classmethod
    def create(cls,roof,render_id=0):
        return cls(roof,tiles.generate(roof,render_id),RoofAnimation(),RoofTileSimulation.new(roof.pivot_y))
    def advance(self,dt,deleted=False):
        # Caller already supplies current roof pivot; delta may be observed from
        # previous CPU pivot. This interface makes the source state explicit.
        sim=self.simulation
        sim.wall_height_delta=r.sub(r.f32(self.roof.pivot_y),r.f32(sim.previous_pivot_y))
        self.animation.step(dt,self.roof.is_flat(),deleted)
        requests=[] if self.roof.is_flat() else sim.advance_audio(dt,self.roof.pivot_y)
        self.records=gpu.update(self.records,dt,sim.wall_height_delta,self.roof.pivot_y,self.animation.primary_t)
        sim.previous_pivot_y=r.f32(self.roof.pivot_y)
        return requests
    def settle(self):
        """Explicit steady-state helper; not a claim of original frame loop."""
        self.animation=RoofAnimation(1.,1.);sim=self.simulation
        sim.wall_height_delta=0.;sim.previous_pivot_y=r.f32(self.roof.pivot_y)
        sim.simulated_height=r.f32(self.roof.pivot_y);sim.velocity=0.;sim.was_falling=False
        settled=[]
        for rec in self.records:
            b=bytearray(rec);struct.pack_into('<f',b,12,self.roof.pivot_y)
            struct.pack_into('<I',b,44,0);struct.pack_into('<f',b,48,1.);settled.append(bytes(b))
        self.records=settled;return self
    def world_positions(self):
        return [(x,r.add(y,struct.unpack_from('<f',rec,12)[0]),z)
          for rec in self.records for x,y,z in [struct.unpack_from('<3f',rec)]]
