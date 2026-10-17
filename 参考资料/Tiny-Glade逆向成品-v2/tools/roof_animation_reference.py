"""Recovered roof animation and simulation initialization, standard library.
Numeric animation update is the per-entity core of VA 0x142808270; ECS iteration
and component change ticks are outside this portable state model.
"""
from dataclasses import dataclass
import struct
import math
import recovered_roof as r

@dataclass
class RoofAnimation:
    primary_t: float=0.
    secondary_t: float=0.
    def is_being_animated(self):return r.f32(self.primary_t)!=1.
    def step(self,dt,is_flat=False,deleted=False):
        dt=r.f32(dt);old=r.f32(self.primary_t)
        if deleted:a=r.mul(dt,-4.);b=r.mul(dt,-10.)
        else:
            mult=2. if is_flat else 1.
            a=r.mul(r.mul(dt,r.f32(2.857142925262451)),mult)
            b=r.mul(r.mul(dt,r.f32(3.3333332538604736)),mult) if old>r.f32(.99) else 0.
        if a!=0.:self.primary_t=r.clamp(r.add(old,a))
        if b!=0.:self.secondary_t=r.clamp(r.add(r.f32(self.secondary_t),b))
        return self
    def pack(self):return struct.pack('<ff',self.primary_t,self.secondary_t)

@dataclass
class RoofTileSimulation:
    wall_height_delta:float=0.
    previous_pivot_y:float=0.
    simulated_height:float=0.
    velocity:float=0.
    falling_duration:float=0.
    was_falling:bool=False
    def pack(self):
        return struct.pack('<fffffB3x',self.wall_height_delta,self.previous_pivot_y,
                           self.simulated_height,self.velocity,self.falling_duration,self.was_falling)
    @classmethod
    def new(cls,pivot_y):return cls(previous_pivot_y=r.f32(pivot_y))
    def advance_audio(self,dt,pivot_y):
        """VA 0x142808f1e..0x1428091df numerical/audio-request state.

        Returned tags are Rust sound-request discriminants, not FMOD event IDs.
        Original ECS event writer metadata/position payload is kept separate.
        """
        dt,pivot=map(r.f32,(dt,pivot_y));delta=r.f32(self.wall_height_delta)
        if dt==0.:return []
        current=r.f32(self.simulated_height);speed=r.div(delta,dt)
        pull=delta<0. and speed>r.f32(-120.) and current<=r.sub(pivot,delta)
        velocity=r.add(r.mul(dt,r.f32(-45.12600326538086)),r.f32(self.velocity))
        height=r.add(r.mul(dt,velocity),pivot if pull else current)
        if height<=pivot:
            if velocity>15.:raise ValueError('Original audio simulation panic: velocity exceeds 15')
            height=max(pivot,height);velocity=min(15.,max(velocity,r.mul(speed,r.f32(.166))))
        fade=r.f32(math.pow(2.,r.mul(dt,r.f32(-13.300004005432129))))
        w=r.sub(1.,fade)
        height=r.add(r.mul(w,pivot),r.mul(r.sub(1.,w),height))
        self.simulated_height=height;self.velocity=velocity
        distance=abs(r.sub(height,pivot));events=[]
        if self.was_falling:
            if distance<=r.f32(.1):
                if r.f32(self.falling_duration)>r.f32(.01):
                    gain=r.clamp(r.div(r.add(r.f32(self.falling_duration),r.f32(-.01)),r.f32(.19)))
                    events.append({'tag':4,'gain':gain})
                self.was_falling=False
            else:
                self.was_falling=True
                if velocity<0.:self.falling_duration=r.add(r.f32(self.falling_duration),dt)
        elif distance<r.f32(.1):
            self.falling_duration=0.;self.was_falling=False
        else:
            events.append({'tag':5});self.was_falling=True
        return events
