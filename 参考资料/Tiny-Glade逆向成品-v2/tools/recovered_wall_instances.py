"""Recovered Tiny Glade wooden wall instance records and top-rim layout.
Bound to SHA-256 Tiny Glade EXE; all scalar writes are IEEE f32.
"""
import math,struct,dataclasses
EXE_SHA256='4627ec9f9a8abe03dd30751f6a8e22868e0dfddf9f40029a1b848a3773495fe5'
def f32(x): return struct.unpack('<f',struct.pack('<f',x))[0]
def curved_half_timber(position, base_radius, radial_width, style, start_angle, end_angle, scalar):
    """Reconstruct CurvedHalfTimberInstanceData::new_curved_xy (0x140aaa870).
    Record is 80 bytes: pos xyz/pad, inner/outer radii, angles, seed=0,
    scalar, style, segment exponent [2,5], and 28 bytes zero.
    """
    base_radius=f32(base_radius); radial_width=f32(radial_width)
    w=f32(radial_width*f32(.5)); outer=f32(base_radius+w); inner=f32(base_radius-w)
    seg=f32(f32(f32(abs(f32(f32(end_angle)-f32(start_angle))))*outer)+f32(1.0))
    seg=f32(seg/f32(.6))
    n=max(0,math.ceil(seg)); n+= [0,2,2,4][int(style)]
    if n<2: exp=2
    else: exp=(n-1).bit_length()
    exp=max(2,min(5,exp))
    out=bytearray(80)
    struct.pack_into('<3f',out,0,*map(f32,position)); struct.pack_into('<f',out,12,0)
    struct.pack_into('<4f',out,16,inner,outer,f32(start_angle),f32(end_angle))
    struct.pack_into('<QfIII',out,32,0,f32(scalar),int(style)&255,exp,0)
    return bytes(out)
def wooden_plank_default():
    out=bytearray(80)
    for off in (0,16,32): struct.pack_into('<f',out,off,1.0)
    struct.pack_into('<I',out,60,1)
    return bytes(out)
def wooden_gable_plank_default():
    out=bytearray(96)
    for off in (0,16,32): struct.pack_into('<f',out,off,1.0)
    struct.pack_into('<I',out,56,1)
    struct.pack_into('<2f',out,72,1.0,1.0)
    return bytes(out)
def top_rim_merlon_ranges(start,end,mode):
    """0x1414851c0: mode 0 regular, mode 1 alternating with fixed end."""
    start,end=f32(start),f32(end); span=f32(end-start)
    if span<=0:return []
    round_positive=lambda x: int(math.floor(x+.5))
    if mode==0:
        count=max(1,round_positive(f32(span/f32(1.9999998807907104))))
        step=f32(span/f32(count)); width=f32(step*f32(.5)); stride=1
    else:
        count=max(2,round_positive(f32(f32(f32(span/f32(.9999999403953552))+f32(1.0))*f32(.5))))
        step=f32(span/f32(count*2-1)); width=step; stride=2
    result=[]
    for i in range(count):
        off=f32(f32(i)*step)
        if mode:off=f32(off+off)
        lo=f32(off+start); hi=end if mode and i==count-1 else f32(lo+width)
        if f32(hi-lo)>=f32(.05):result.append((lo,hi))
    return result
@dataclasses.dataclass(frozen=True)
class InstanceLayout:
    plank_stride:int=80; gable_stride:int=96; curved_stride:int=80


def rectangle_gable_wallspace_ranges(rectangle, expanded_length, gable_sides=()):
    """0x141489790: selected sides mapped to absolute perimeter distance."""
    import recovered_wall_stairs as r
    length=f32(expanded_length)
    return [(f32(r.rectangle_point_u(*rectangle.dimensions,i)*length),
             f32(r.rectangle_point_u(*rectangle.dimensions,i+1)*length)) for i in gable_sides]

def plan_rectangle_wallspace_regions(rectangle, expanded_length, bottom_y, top_y,
                                     wall_max_y, gable_sides=(), separate_gables=False):
    """0x141489480: produce side-tagged regions before board subdivision.
    rectangle=None is generic freeform region. bottom_y is resolved foundation
    top or wall bottom (foundation resolution is a separate public-state helper).
    """
    import recovered_wall_planners as p
    import recovered_wall_stairs as r
    bottom_y,top_y,wall_max_y=map(f32,(bottom_y,top_y,wall_max_y))
    if rectangle is None:
        return [p.Piece((0.0,bottom_y,f32(expanded_length),top_y))] if top_y>f32(bottom_y+f32(.05)) else []
    length=f32(expanded_length); result=[]
    for i in range(4):
        lo=f32(r.rectangle_point_u(*rectangle.dimensions,i)*length)
        hi=f32(r.rectangle_point_u(*rectangle.dimensions,i+1)*length)
        split=separate_gables and i in gable_sides and top_y>wall_max_y
        cap=wall_max_y if split else top_y
        if cap>f32(bottom_y+f32(.05)):result.append(p.Piece((lo,bottom_y,hi,cap),1,i,0))
        if split:result.append(p.Piece((lo,max(bottom_y,wall_max_y),hi,top_y),1,i,1))
    return result

def emit_curved_horizontal_wall_board_piece(wall_tag,piece_index,circle,
        circumference,start,end,bottom,height,radial_width,window_cut_list=0,window_count=0):
    """0x1414530c0: exact curved SSBO assembly; explicit window provider output.
    circle=(center_x,center_z,base_radius,angle_offset). Heights below .05 and
    circumference <= .01 emit no record. Provider returns packed list and count.
    """
    circumference,start,end,bottom,height,radial_width=map(f32,(circumference,start,end,bottom,height,radial_width))
    if circumference<=f32(.01) or height<f32(.05):return None
    circle=tuple(map(f32,circle));tau=f32(6.2831854820251465)
    wrap=lambda value,period: f32(f32(math.fmod(value,period))+period) if math.fmod(value,period)<0 else f32(math.fmod(value,period))
    a=f32(wrap(f32(start/circumference),f32(1))*circumference)
    b=f32(wrap(f32(end/circumference),f32(1))*circumference)
    offset=wrap(circle[3],tau);scale=f32(tau/circumference)
    angle_a=f32(f32(scale*a)-offset);angle_b=f32(f32(scale*b)-offset)
    if not angle_a<angle_b:angle_b=f32(angle_b+tau)
    out=bytearray(curved_half_timber((circle[0],bottom,circle[1]),circle[2],radial_width,3,angle_a,angle_b,height))
    struct.pack_into('<III',out,52,((wall_tag^piece_index)+window_count*10)&0xffffffff,2,0)
    struct.pack_into('<I',out,72,window_cut_list&0xffffffff)
    return bytes(out)
