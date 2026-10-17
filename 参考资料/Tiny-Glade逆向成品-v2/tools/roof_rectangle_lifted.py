"""Generated low-level Python source for original roof algorithm basic blocks.
Runtime has no EXE, native bytecode, Capstone, or Unicorn dependency.
Temporary names and basic-block labels retain original instruction provenance.
This is lifted source reconstruction, not the game author's original Rust source.
Generated from digest-matched PDB ranges; scalar runtime documents f32 behavior.
"""
import math
from roof_lift_runtime import execute, signed, bitsf

CONSTANTS={
    5417168680: '0000803f',
    5417168684: '0000005f',
    5417168688: 'ffff7f5f',
    5417168692: '000080bf',
    5417168696: '000000bf',
    5417168704: '0000003f0000003f0000003f0000003f',
    5417168720: '0000003f',
    5417168736: '0000003f0000003f0000000000000000',
    5417170928: '00000080',
    5417170976: '00000080000000800000008000000080',
    5417170992: '00000040',
    5417170996: '0000a040',
    5417171000: '0000c03f',
    5417171068: 'cdcc4c3e',
    5417171084: '00004040',
    5417171168: '000000000000803f0000000000000000',
    5417171280: '0000803f0000803f0000000000000000',
    5417171336: '9a99993e',
    5417171340: 'cdcccc3e',
    5417171344: '9a99993f',
    5417171664: '0ad7a33c',
    5417171668: 'cdcc4c3d',
    5417171672: '00004041',
    5417171684: '0000803e',
    5417173708: 'ffffff4e',
    5417185752: 'cdcccc3d',
    5417190920: '9a99193e',
    5417190948: '295c0f3f',
    5417190976: '0000803f0000803f0000803f0000803f',
    5417191024: 'cdcc4c3f',
    5417264720: '0000000000000000000000000000803f',
    5418351560: '00000041',
    5418351564: 'db0fc940',
    5418389568: '00000080000080bf0000000000000000',
    5418389600: '295c0f3f295c0f3f0000000000000000',
    5418427952: '00000000cdcc4c3e0000000000000000',
    5418554876: '00001041',
    5418554944: '000000000000003f0000000000000000',
    5419071896: '6666663f',
    5419080640: 'cdcc4cbf',
    5419086128: '295c8f3e295c8f3e0000000000000000',
    5419086144: '295c8f3e',
    5419086160: '00000000000000000000000000000080',
    5419090576: '0000203f',
    5419091808: '00000000000000800000000000000000',
    5419091824: '0000803f000000000000000000000000',
    5419122928: '000000800000803f0000000000000000',
    5419127120: '0000003e',
    5419127200: '00000000000080bf0000000000000000',
    5419158424: '0ad7a33d',
    5419261600: '00000080000000000000803f00000000',
    5419261680: '0000003f0000003f0000003f00000000',
    5419288176: '676666bf',
    5419288180: '3333e340',
    5419288208: '000010c0',
    5419288216: '00004c41',
    5419417320: '3694573d',
    5419417324: '3694d73d',
    5419417328: '28af213e',
    5419417332: '3694573e',
    5419417336: 'a2bc863e',
    5419417340: '28afa13e',
    5419417344: 'afa1bc3e',
    5419417348: '3694d73e',
    5419417352: 'bd86f23e',
    5419417356: 'a2bc063f',
    5419417360: 'e535143f',
    5419417364: '28af213f',
    5419417368: '6c282f3f',
    5419417372: 'afa13c3f',
    5419417376: 'f31a4a3f',
    5419417380: '3694573f',
    5419417384: '790d653f',
    5419417388: 'bd86723f',
    5419465124: '3333b33f',
    5421132928: 'a470fd3e',
    5421629104: '0000803f0000000000000000000080bf',
    5422222704: '000000000000803f000000000000803f',
    5422236944: '9a9999bd',
    5422271936: '0000003f0000003f0000003f00000080',
    5424923136: '0000803f00000080',
    5424925648: '295c4f3f',
    5424925652: 'cccc4c3e',
    5424925656: '0000e03e',
    5424925660: '6edbb63f',
    5424925664: '2ebdbbb3',
    5424925680: '2ebdbbb32ebdbb330000000000000000',
    5424925696: '2ebdbb33',
    5424925712: '9a99993e9a99993e9a99993e00000080',
    5424925728: 'cdcc4cbdcdcc4cbdcdcc4cbd00000080',
    5424926712: 'c2b832be',
}

def b_140080c90(s):
    # 0x140080c90: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x140080c91: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x140080c93: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x140080c95: push r12
    s.push(s.read(('r', 'r12', 8)))
    # 0x140080c97: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x140080c98: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x140080c99: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x140080c9a: sub rsp, 0x30
    s.integer('sub',[('r', 'rsp', 8), ('i', 48, 8)])
    # 0x140080c9e: lea rbp, [rsp + 0x30]
    s.write(('r', 'rbp', 8),s.address(('m', 'rsp', None, 1, 48, 8)))
    # 0x140080ca3: mov qword ptr [rbp - 8], 0xfffffffffffffffe
    s.write(('m', 'rbp', None, 1, -8, 8),s.read(('i', -2, 8)))
    # 0x140080cab: mov r12, rdx
    s.write(('r', 'r12', 8),s.read(('r', 'rdx', 8)))
    # 0x140080cae: mov rsi, rcx
    s.write(('r', 'rsi', 8),s.read(('r', 'rcx', 8)))
    # 0x140080cb1: mov r15, qword ptr [rdx + 0x10]
    s.write(('r', 'r15', 8),s.read(('m', 'rdx', None, 1, 16, 8)))
    # 0x140080cb5: cmp r15, 2
    s.integer('cmp',[('r', 'r15', 8), ('i', 2, 8)])
    # 0x140080cb9: jae 0x140080cf1
    s.pc=s.read(('i', 5369236721, 8)) if s.condition('ae') else 5369236667
    return

def b_140080cbb(s):
    # 0x140080cbb: mov byte ptr [rsi + 8], 0
    s.write(('m', 'rsi', None, 1, 8, 1),s.read(('i', 0, 1)))
    # 0x140080cbf: mov byte ptr [rsi + 9], r15b
    s.write(('m', 'rsi', None, 1, 9, 1),s.read(('r', 'r15b', 1)))
    # 0x140080cc3: movabs rax, 0x8000000000000000
    s.write(('r', 'rax', 8),s.read(('i', -9223372036854775808, 8)))
    # 0x140080ccd: mov qword ptr [rsi], rax
    s.write(('m', 'rsi', None, 1, 0, 8),s.read(('r', 'rax', 8)))
    # 0x140080cd0: mov rdx, qword ptr [r12]
    s.write(('r', 'rdx', 8),s.read(('m', 'r12', None, 1, 0, 8)))
    # 0x140080cd4: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x140080cd7: je 0x140080e29
    s.pc=s.read(('i', 5369237033, 8)) if s.condition('e') else 5369236701
    return

def b_140080cdd(s):
    # 0x140080cdd: mov rcx, qword ptr [r12 + 8]
    s.write(('r', 'rcx', 8),s.read(('m', 'r12', None, 1, 8, 8)))
    # 0x140080ce2: shl rdx, 3
    s.integer('shl',[('r', 'rdx', 8), ('i', 3, 1)])
    # 0x140080ce6: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x140080cec: jmp 0x140080e24
    s.pc=s.read(('i', 5369237028, 8))
    return

def b_140080cf1(s):
    # 0x140080cf1: mov r14d, r8d
    s.write(('r', 'r14d', 4),s.read(('r', 'r8d', 4)))
    # 0x140080cf4: lea rdi, [r15*4]
    s.write(('r', 'rdi', 8),s.address(('m', None, 'r15', 4, 0, 8)))
    # 0x140080cfc: call 0x14007ee60
    s.push(5369236737)
    s.pc=s.read(('i', 5369228896, 8))
    return

def b_140080d01(s):
    # 0x140080d01: mov edx, 4
    s.write(('r', 'edx', 4),s.read(('i', 4, 4)))
    # 0x140080d06: mov rcx, rdi
    s.write(('r', 'rcx', 8),s.read(('r', 'rdi', 8)))
    # 0x140080d09: call 0x1406abab0
    s.push(5369236750)
    s.pc=s.read(('i', 5375703728, 8))
    return

def b_140080d0e(s):
    # 0x140080d0e: test rax, rax
    s.integer('test',[('r', 'rax', 8), ('r', 'rax', 8)])
    # 0x140080d11: je 0x140080ed5
    s.pc=s.read(('i', 5369237205, 8)) if s.condition('e') else 5369236759
    return

def b_140080d17(s):
    # 0x140080d17: mov rbx, qword ptr [r12 + 8]
    s.write(('r', 'rbx', 8),s.read(('m', 'r12', None, 1, 8, 8)))
    # 0x140080d1c: movsd xmm1, qword ptr [rbx]
    s.simd_move('movsd',('r', 'xmm1', 16),('m', 'rbx', None, 1, 0, 8))
    # 0x140080d20: mov rdx, rdi
    s.write(('r', 'rdx', 8),s.read(('r', 'rdi', 8)))
    # 0x140080d23: and rdx, 0xfffffffffffffff8
    s.integer('and',[('r', 'rdx', 8), ('i', -8, 8)])
    # 0x140080d27: xorps xmm0, xmm0
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x140080d2a: xor ecx, ecx
    s.integer('xor',[('r', 'ecx', 4), ('r', 'ecx', 4)])
    # 0x140080d2c: movaps xmm2, xmm1
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x140080d2f: nop 
    s.pc=5369236784
    return

def b_140080d30(s):
    # 0x140080d30: movsd xmm3, qword ptr [rbx + rcx*2]
    s.simd_move('movsd',('r', 'xmm3', 16),('m', 'rbx', 'rcx', 2, 0, 8))
    # 0x140080d35: subps xmm2, xmm3
    s.float_op('subps',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x140080d38: mulps xmm2, xmm2
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm2', 16))
    # 0x140080d3b: movshdup xmm4, xmm2
    s.simd_move('movshdup',('r', 'xmm4', 16),('r', 'xmm2', 16))
    # 0x140080d3f: addss xmm4, xmm2
    s.float_op('addss',('r', 'xmm4', 16),('r', 'xmm2', 16))
    # 0x140080d43: sqrtss xmm4, xmm4
    s.float_op('sqrtss',('r', 'xmm4', 16),('r', 'xmm4', 16))
    # 0x140080d47: addss xmm4, xmm0
    s.float_op('addss',('r', 'xmm4', 16),('r', 'xmm0', 16))
    # 0x140080d4b: movss dword ptr [rax + rcx], xmm4
    s.simd_move('movss',('m', 'rax', 'rcx', 1, 0, 4),('r', 'xmm4', 16))
    # 0x140080d50: movsd xmm2, qword ptr [rbx + rcx*2 + 8]
    s.simd_move('movsd',('r', 'xmm2', 16),('m', 'rbx', 'rcx', 2, 8, 8))
    # 0x140080d56: subps xmm3, xmm2
    s.float_op('subps',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x140080d59: mulps xmm3, xmm3
    s.float_op('mulps',('r', 'xmm3', 16),('r', 'xmm3', 16))
    # 0x140080d5c: movshdup xmm0, xmm3
    s.simd_move('movshdup',('r', 'xmm0', 16),('r', 'xmm3', 16))
    # 0x140080d60: addss xmm0, xmm3
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm3', 16))
    # 0x140080d64: sqrtss xmm0, xmm0
    s.float_op('sqrtss',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x140080d68: addss xmm0, xmm4
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm4', 16))
    # 0x140080d6c: movss dword ptr [rax + rcx + 4], xmm0
    s.simd_move('movss',('m', 'rax', 'rcx', 1, 4, 4),('r', 'xmm0', 16))
    # 0x140080d72: add rcx, 8
    s.integer('add',[('r', 'rcx', 8), ('i', 8, 8)])
    # 0x140080d76: cmp rdx, rcx
    s.integer('cmp',[('r', 'rdx', 8), ('r', 'rcx', 8)])
    # 0x140080d79: jne 0x140080d30
    s.pc=s.read(('i', 5369236784, 8)) if s.condition('ne') else 5369236859
    return

def b_140080d7b(s):
    # 0x140080d7b: test r15b, 1
    s.integer('test',[('r', 'r15b', 1), ('i', 1, 1)])
    # 0x140080d7f: je 0x140080da4
    s.pc=s.read(('i', 5369236900, 8)) if s.condition('e') else 5369236865
    return

def b_140080d81(s):
    # 0x140080d81: movsd xmm3, qword ptr [rbx + rcx*2]
    s.simd_move('movsd',('r', 'xmm3', 16),('m', 'rbx', 'rcx', 2, 0, 8))
    # 0x140080d86: subps xmm2, xmm3
    s.float_op('subps',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x140080d89: mulps xmm2, xmm2
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm2', 16))
    # 0x140080d8c: movshdup xmm3, xmm2
    s.simd_move('movshdup',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x140080d90: addss xmm3, xmm2
    s.float_op('addss',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x140080d94: xorps xmm2, xmm2
    s.float_op('xorps',('r', 'xmm2', 16),('r', 'xmm2', 16))
    # 0x140080d97: sqrtss xmm2, xmm3
    s.float_op('sqrtss',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x140080d9b: addss xmm0, xmm2
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x140080d9f: movss dword ptr [rax + rcx], xmm0
    s.simd_move('movss',('m', 'rax', 'rcx', 1, 0, 4),('r', 'xmm0', 16))
    s.pc=5369236900
    return

def b_140080da4(s):
    # 0x140080da4: xorps xmm2, xmm2
    s.float_op('xorps',('r', 'xmm2', 16),('r', 'xmm2', 16))
    # 0x140080da7: ucomiss xmm0, xmm2
    s.compare_float(('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x140080daa: jne 0x140080dae
    s.pc=s.read(('i', 5369236910, 8)) if s.condition('ne') else 5369236908
    return

def b_140080dac(s):
    # 0x140080dac: jnp 0x140080dec
    s.pc=s.read(('i', 5369236972, 8)) if s.condition('np') else 5369236910
    return

def b_140080dae(s):
    # 0x140080dae: lea rcx, [r15*8]
    s.write(('r', 'rcx', 8),s.address(('m', None, 'r15', 8, 0, 8)))
    # 0x140080db6: xor edx, edx
    s.integer('xor',[('r', 'edx', 4), ('r', 'edx', 4)])
    # 0x140080db8: nop dword ptr [rax + rax]
    s.pc=5369236928
    return

def b_140080dc0(s):
    # 0x140080dc0: cmp rdi, rdx
    s.integer('cmp',[('r', 'rdi', 8), ('r', 'rdx', 8)])
    # 0x140080dc3: je 0x140080e3b
    s.pc=s.read(('i', 5369237051, 8)) if s.condition('e') else 5369236933
    return

def b_140080dc5(s):
    # 0x140080dc5: movss xmm2, dword ptr [rax + rdx]
    s.simd_move('movss',('r', 'xmm2', 16),('m', 'rax', 'rdx', 1, 0, 4))
    # 0x140080dca: divss xmm2, xmm0
    s.float_op('divss',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x140080dce: movd r8d, xmm2
    s.simd_move('movd',('r', 'r8d', 4),('r', 'xmm2', 16))
    # 0x140080dd3: movss dword ptr [rax + rdx], xmm2
    s.simd_move('movss',('m', 'rax', 'rdx', 1, 0, 4),('r', 'xmm2', 16))
    # 0x140080dd8: and r8d, 0x7fffffff
    s.integer('and',[('r', 'r8d', 4), ('i', 2147483647, 4)])
    # 0x140080ddf: add rdx, 4
    s.integer('add',[('r', 'rdx', 8), ('i', 4, 8)])
    # 0x140080de3: cmp r8d, 0x7f7fffff
    s.integer('cmp',[('r', 'r8d', 4), ('i', 2139095039, 4)])
    # 0x140080dea: jle 0x140080dc0
    s.pc=s.read(('i', 5369236928, 8)) if s.condition('le') else 5369236972
    return

def b_140080dec(s):
    # 0x140080dec: mov byte ptr [rsi + 8], 1
    s.write(('m', 'rsi', None, 1, 8, 1),s.read(('i', 1, 1)))
    s.pc=5369236976
    return

def b_140080df0(s):
    # 0x140080df0: movabs rcx, 0x8000000000000000
    s.write(('r', 'rcx', 8),s.read(('i', -9223372036854775808, 8)))
    # 0x140080dfa: mov qword ptr [rsi], rcx
    s.write(('m', 'rsi', None, 1, 0, 8),s.read(('r', 'rcx', 8)))
    # 0x140080dfd: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x140080e03: mov rcx, rax
    s.write(('r', 'rcx', 8),s.read(('r', 'rax', 8)))
    # 0x140080e06: mov rdx, rdi
    s.write(('r', 'rdx', 8),s.read(('r', 'rdi', 8)))
    # 0x140080e09: call 0x1406abac0
    s.push(5369237006)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_140080e0e(s):
    # 0x140080e0e: mov rdx, qword ptr [r12]
    s.write(('r', 'rdx', 8),s.read(('m', 'r12', None, 1, 0, 8)))
    # 0x140080e12: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x140080e15: je 0x140080e29
    s.pc=s.read(('i', 5369237033, 8)) if s.condition('e') else 5369237015
    return

def b_140080e17(s):
    # 0x140080e17: shl rdx, 3
    s.integer('shl',[('r', 'rdx', 8), ('i', 3, 1)])
    # 0x140080e1b: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x140080e21: mov rcx, rbx
    s.write(('r', 'rcx', 8),s.read(('r', 'rbx', 8)))
    s.pc=5369237028
    return

def b_140080e24(s):
    # 0x140080e24: call 0x1406abac0
    s.push(5369237033)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_140080e29(s):
    # 0x140080e29: mov rax, rsi
    s.write(('r', 'rax', 8),s.read(('r', 'rsi', 8)))
    # 0x140080e2c: add rsp, 0x30
    s.integer('add',[('r', 'rsp', 8), ('i', 48, 8)])
    # 0x140080e30: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x140080e31: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x140080e32: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x140080e33: pop r12
    s.write(('r', 'r12', 8),s.pop())
    # 0x140080e35: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x140080e37: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x140080e39: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x140080e3a: ret 
    s.pc=s.pop()
    return

def b_140080e3b(s):
    # 0x140080e3b: test r14b, 1
    s.integer('test',[('r', 'r14b', 1), ('i', 1, 1)])
    # 0x140080e3f: jne 0x140080e65
    s.pc=s.read(('i', 5369237093, 8)) if s.condition('ne') else 5369237057
    return

def b_140080e41(s):
    # 0x140080e41: mov rcx, qword ptr [r12 + 0x10]
    s.write(('r', 'rcx', 8),s.read(('m', 'r12', None, 1, 16, 8)))
    # 0x140080e46: mov qword ptr [rsi + 0x10], rcx
    s.write(('m', 'rsi', None, 1, 16, 8),s.read(('r', 'rcx', 8)))
    # 0x140080e4a: movups xmm1, xmmword ptr [r12]
    s.simd_move('movups',('r', 'xmm1', 16),('m', 'r12', None, 1, 0, 16))
    # 0x140080e4f: movups xmmword ptr [rsi], xmm1
    s.simd_move('movups',('m', 'rsi', None, 1, 0, 16),('r', 'xmm1', 16))
    # 0x140080e52: mov qword ptr [rsi + 0x18], r15
    s.write(('m', 'rsi', None, 1, 24, 8),s.read(('r', 'r15', 8)))
    # 0x140080e56: mov qword ptr [rsi + 0x20], rax
    s.write(('m', 'rsi', None, 1, 32, 8),s.read(('r', 'rax', 8)))
    # 0x140080e5a: mov qword ptr [rsi + 0x28], r15
    s.write(('m', 'rsi', None, 1, 40, 8),s.read(('r', 'r15', 8)))
    # 0x140080e5e: movss dword ptr [rsi + 0x30], xmm0
    s.simd_move('movss',('m', 'rsi', None, 1, 48, 4),('r', 'xmm0', 16))
    # 0x140080e63: jmp 0x140080e29
    s.pc=s.read(('i', 5369237033, 8))
    return

def b_140080e65(s):
    # 0x140080e65: movss xmm2, dword ptr [rbx + 8]
    s.simd_move('movss',('r', 'xmm2', 16),('m', 'rbx', None, 1, 8, 4))
    # 0x140080e6a: movss xmm3, dword ptr [rbx + 0xc]
    s.simd_move('movss',('r', 'xmm3', 16),('m', 'rbx', None, 1, 12, 4))
    # 0x140080e6f: ucomiss xmm1, xmm2
    s.compare_float(('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x140080e72: jne 0x140080e85
    s.pc=s.read(('i', 5369237125, 8)) if s.condition('ne') else 5369237108
    return

def b_140080e74(s):
    # 0x140080e74: jp 0x140080e85
    s.pc=s.read(('i', 5369237125, 8)) if s.condition('p') else 5369237110
    return

def b_140080e76(s):
    # 0x140080e76: movshdup xmm1, xmm1
    s.simd_move('movshdup',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x140080e7a: ucomiss xmm1, xmm3
    s.compare_float(('r', 'xmm1', 16),('r', 'xmm3', 16))
    # 0x140080e7d: jne 0x140080e85
    s.pc=s.read(('i', 5369237125, 8)) if s.condition('ne') else 5369237119
    return

def b_140080e7f(s):
    # 0x140080e7f: jp 0x140080e85
    s.pc=s.read(('i', 5369237125, 8)) if s.condition('p') else 5369237121
    return

def b_140080e81(s):
    # 0x140080e81: xor edx, edx
    s.integer('xor',[('r', 'edx', 4), ('r', 'edx', 4)])
    # 0x140080e83: jmp 0x140080ec8
    s.pc=s.read(('i', 5369237192, 8))
    return

def b_140080e85(s):
    # 0x140080e85: lea r8, [rbx + 0x10]
    s.write(('r', 'r8', 8),s.address(('m', 'rbx', None, 1, 16, 8)))
    # 0x140080e89: add rcx, -0x10
    s.integer('add',[('r', 'rcx', 8), ('i', -16, 8)])
    # 0x140080e8d: xor edx, edx
    s.integer('xor',[('r', 'edx', 4), ('r', 'edx', 4)])
    # 0x140080e8f: nop 
    s.pc=5369237136
    return

def b_140080e90(s):
    # 0x140080e90: test rcx, rcx
    s.integer('test',[('r', 'rcx', 8), ('r', 'rcx', 8)])
    # 0x140080e93: je 0x140080e41
    s.pc=s.read(('i', 5369237057, 8)) if s.condition('e') else 5369237141
    return

def b_140080e95(s):
    # 0x140080e95: movaps xmm1, xmm3
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm3', 16))
    # 0x140080e98: lea r9, [r8 + 8]
    s.write(('r', 'r9', 8),s.address(('m', 'r8', None, 1, 8, 8)))
    # 0x140080e9c: movss xmm4, dword ptr [r8]
    s.simd_move('movss',('r', 'xmm4', 16),('m', 'r8', None, 1, 0, 4))
    # 0x140080ea1: movss xmm3, dword ptr [r8 + 4]
    s.simd_move('movss',('r', 'xmm3', 16),('m', 'r8', None, 1, 4, 4))
    # 0x140080ea7: inc rdx
    s.integer('inc',[('r', 'rdx', 8)])
    # 0x140080eaa: add rcx, -8
    s.integer('add',[('r', 'rcx', 8), ('i', -8, 8)])
    # 0x140080eae: ucomiss xmm2, xmm4
    s.compare_float(('r', 'xmm2', 16),('r', 'xmm4', 16))
    # 0x140080eb1: movaps xmm2, xmm4
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm4', 16))
    # 0x140080eb4: mov r8, r9
    s.write(('r', 'r8', 8),s.read(('r', 'r9', 8)))
    # 0x140080eb7: jne 0x140080e90
    s.pc=s.read(('i', 5369237136, 8)) if s.condition('ne') else 5369237177
    return

def b_140080eb9(s):
    # 0x140080eb9: jp 0x140080e90
    s.pc=s.read(('i', 5369237136, 8)) if s.condition('p') else 5369237179
    return

def b_140080ebb(s):
    # 0x140080ebb: ucomiss xmm1, xmm3
    s.compare_float(('r', 'xmm1', 16),('r', 'xmm3', 16))
    # 0x140080ebe: movaps xmm2, xmm4
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm4', 16))
    # 0x140080ec1: mov r8, r9
    s.write(('r', 'r8', 8),s.read(('r', 'r9', 8)))
    # 0x140080ec4: jne 0x140080e90
    s.pc=s.read(('i', 5369237136, 8)) if s.condition('ne') else 5369237190
    return

def b_140080ec6(s):
    # 0x140080ec6: jp 0x140080e90
    s.pc=s.read(('i', 5369237136, 8)) if s.condition('p') else 5369237192
    return

def b_140080ec8(s):
    # 0x140080ec8: mov byte ptr [rsi + 8], 2
    s.write(('m', 'rsi', None, 1, 8, 1),s.read(('i', 2, 1)))
    # 0x140080ecc: mov qword ptr [rsi + 0x10], rdx
    s.write(('m', 'rsi', None, 1, 16, 8),s.read(('r', 'rdx', 8)))
    # 0x140080ed0: jmp 0x140080df0
    s.pc=s.read(('i', 5369236976, 8))
    return

def b_140080ed5(s):
    # 0x140080ed5: mov qword ptr [rbp - 0x10], r12
    s.write(('m', 'rbp', None, 1, -16, 8),s.read(('r', 'r12', 8)))
    # 0x140080ed9: mov ecx, 4
    s.write(('r', 'ecx', 4),s.read(('i', 4, 4)))
    # 0x140080ede: mov rdx, rdi
    s.write(('r', 'rdx', 8),s.read(('r', 'rdi', 8)))
    # 0x140080ee1: call 0x142dc7e2a
    s.push(5369237222)
    s.pc=s.read(('i', 5416713770, 8))
    return

def b_140080ee6(s):
    # 0x140080ee6: nop 
    # 0x140080ee7: ud2 
    raise RuntimeError('Original unreachable/panic 0x140080ee7')
    s.pc=5369237225
    return

def b_140080ee9(s):
    # 0x140080ee9: nop dword ptr [rax]
    # 0x140080ef0: mov qword ptr [rsp + 0x10], rdx
    s.write(('m', 'rsp', None, 1, 16, 8),s.read(('r', 'rdx', 8)))
    # 0x140080ef5: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x140080ef6: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x140080ef8: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x140080efa: push r12
    s.push(s.read(('r', 'r12', 8)))
    # 0x140080efc: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x140080efd: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x140080efe: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x140080eff: sub rsp, 0x20
    s.integer('sub',[('r', 'rsp', 8), ('i', 32, 8)])
    # 0x140080f03: lea rbp, [rdx + 0x30]
    s.write(('r', 'rbp', 8),s.address(('m', 'rdx', None, 1, 48, 8)))
    # 0x140080f07: mov rax, qword ptr [rbp - 0x10]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, -16, 8)))
    # 0x140080f0b: mov rdx, qword ptr [rax]
    s.write(('r', 'rdx', 8),s.read(('m', 'rax', None, 1, 0, 8)))
    # 0x140080f0e: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x140080f11: je 0x140080f2b
    s.pc=s.read(('i', 5369237291, 8)) if s.condition('e') else 5369237267
    return

def b_140080f13(s):
    # 0x140080f13: mov rax, qword ptr [rbp - 0x10]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, -16, 8)))
    # 0x140080f17: mov rcx, qword ptr [rax + 8]
    s.write(('r', 'rcx', 8),s.read(('m', 'rax', None, 1, 8, 8)))
    # 0x140080f1b: shl rdx, 3
    s.integer('shl',[('r', 'rdx', 8), ('i', 3, 1)])
    # 0x140080f1f: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x140080f25: call 0x1406abac0
    s.push(5369237290)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_140080f2a(s):
    # 0x140080f2a: nop 
    s.pc=5369237291
    return

def b_140080f2b(s):
    # 0x140080f2b: add rsp, 0x20
    s.integer('add',[('r', 'rsp', 8), ('i', 32, 8)])
    # 0x140080f2f: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x140080f30: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x140080f31: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x140080f32: pop r12
    s.write(('r', 'r12', 8),s.pop())
    # 0x140080f34: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x140080f36: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x140080f38: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x140080f39: ret 
    s.pc=s.pop()
    return

def b_140ac5730(s):
    # 0x140ac5730: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x140ac5731: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x140ac5732: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x140ac5733: sub rsp, 0x150
    s.integer('sub',[('r', 'rsp', 8), ('i', 336, 8)])
    # 0x140ac573a: movaps xmmword ptr [rsp + 0x140], xmm15
    s.simd_move('movaps',('m', 'rsp', None, 1, 320, 16),('r', 'xmm15', 16))
    # 0x140ac5743: movaps xmmword ptr [rsp + 0x130], xmm14
    s.simd_move('movaps',('m', 'rsp', None, 1, 304, 16),('r', 'xmm14', 16))
    # 0x140ac574c: movaps xmmword ptr [rsp + 0x120], xmm13
    s.simd_move('movaps',('m', 'rsp', None, 1, 288, 16),('r', 'xmm13', 16))
    # 0x140ac5755: movaps xmmword ptr [rsp + 0x110], xmm12
    s.simd_move('movaps',('m', 'rsp', None, 1, 272, 16),('r', 'xmm12', 16))
    # 0x140ac575e: movaps xmmword ptr [rsp + 0x100], xmm11
    s.simd_move('movaps',('m', 'rsp', None, 1, 256, 16),('r', 'xmm11', 16))
    # 0x140ac5767: movaps xmmword ptr [rsp + 0xf0], xmm10
    s.simd_move('movaps',('m', 'rsp', None, 1, 240, 16),('r', 'xmm10', 16))
    # 0x140ac5770: movaps xmmword ptr [rsp + 0xe0], xmm9
    s.simd_move('movaps',('m', 'rsp', None, 1, 224, 16),('r', 'xmm9', 16))
    # 0x140ac5779: movaps xmmword ptr [rsp + 0xd0], xmm8
    s.simd_move('movaps',('m', 'rsp', None, 1, 208, 16),('r', 'xmm8', 16))
    # 0x140ac5782: movaps xmmword ptr [rsp + 0xc0], xmm7
    s.simd_move('movaps',('m', 'rsp', None, 1, 192, 16),('r', 'xmm7', 16))
    # 0x140ac578a: movaps xmmword ptr [rsp + 0xb0], xmm6
    s.simd_move('movaps',('m', 'rsp', None, 1, 176, 16),('r', 'xmm6', 16))
    # 0x140ac5792: mov rdi, r8
    s.write(('r', 'rdi', 8),s.read(('r', 'r8', 8)))
    # 0x140ac5795: mov rsi, rcx
    s.write(('r', 'rsi', 8),s.read(('r', 'rcx', 8)))
    # 0x140ac5798: movss xmm14, dword ptr [rdx]
    s.simd_move('movss',('r', 'xmm14', 16),('m', 'rdx', None, 1, 0, 4))
    # 0x140ac579d: movss xmm13, dword ptr [rdx + 4]
    s.simd_move('movss',('r', 'xmm13', 16),('m', 'rdx', None, 1, 4, 4))
    # 0x140ac57a3: movaps xmm0, xmm14
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm14', 16))
    # 0x140ac57a7: cmpunordss xmm0, xmm14
    s.float_op('cmpunordss',('r', 'xmm0', 16),('r', 'xmm14', 16))
    # 0x140ac57ad: movaps xmm1, xmm0
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x140ac57b0: andps xmm1, xmm13
    s.float_op('andps',('r', 'xmm1', 16),('r', 'xmm13', 16))
    # 0x140ac57b4: movaps xmm2, xmm13
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm13', 16))
    # 0x140ac57b8: maxss xmm2, xmm14
    s.float_op('maxss',('r', 'xmm2', 16),('r', 'xmm14', 16))
    # 0x140ac57bd: andnps xmm0, xmm2
    s.float_op('andnps',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x140ac57c0: orps xmm0, xmm1
    s.float_op('orps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x140ac57c3: movss xmm12, dword ptr [rip + 0x2375a0c]
    s.simd_move('movss',('r', 'xmm12', 16),('m', None, None, 1, 5417185752, 4))
    # 0x140ac57cc: ucomiss xmm12, xmm0
    s.compare_float(('r', 'xmm12', 16),('r', 'xmm0', 16))
    # 0x140ac57d0: jae 0x140ac5add
    s.pc=s.read(('i', 5380004573, 8)) if s.condition('ae') else 5380003798
    return

def b_140ac57d6(s):
    # 0x140ac57d6: cmp byte ptr [rdi + 8], 0
    s.integer('cmp',[('m', 'rdi', None, 1, 8, 1), ('i', 0, 1)])
    # 0x140ac57da: je 0x140ac5ff3
    s.pc=s.read(('i', 5380005875, 8)) if s.condition('e') else 5380003808
    return

def b_140ac57e0(s):
    # 0x140ac57e0: mov rax, qword ptr [rdi + 0x1c]
    s.write(('r', 'rax', 8),s.read(('m', 'rdi', None, 1, 28, 8)))
    # 0x140ac57e4: mov qword ptr [rsp + 0x80], rax
    s.write(('m', 'rsp', None, 1, 128, 8),s.read(('r', 'rax', 8)))
    # 0x140ac57ec: movups xmm0, xmmword ptr [rdi + 0xc]
    s.simd_move('movups',('r', 'xmm0', 16),('m', 'rdi', None, 1, 12, 16))
    # 0x140ac57f0: movaps xmmword ptr [rsp + 0x70], xmm0
    s.simd_move('movaps',('m', 'rsp', None, 1, 112, 16),('r', 'xmm0', 16))
    # 0x140ac57f5: movsd xmm8, qword ptr [rdi + 0x1c]
    s.simd_move('movsd',('r', 'xmm8', 16),('m', 'rdi', None, 1, 28, 8))
    # 0x140ac57fb: movsd xmm9, qword ptr [rdi + 0x24]
    s.simd_move('movsd',('r', 'xmm9', 16),('m', 'rdi', None, 1, 36, 8))
    # 0x140ac5801: mulps xmm9, xmm8
    s.float_op('mulps',('r', 'xmm9', 16),('r', 'xmm8', 16))
    # 0x140ac5805: xorps xmm6, xmm6
    s.float_op('xorps',('r', 'xmm6', 16),('r', 'xmm6', 16))
    # 0x140ac5808: mulps xmm9, xmm6
    s.float_op('mulps',('r', 'xmm9', 16),('r', 'xmm6', 16))
    # 0x140ac580c: cmp byte ptr [rdi + 0x3c], 0
    s.integer('cmp',[('m', 'rdi', None, 1, 60, 1), ('i', 0, 1)])
    # 0x140ac5810: je 0x140ac5be9
    s.pc=s.read(('i', 5380004841, 8)) if s.condition('e') else 5380003862
    return

def b_140ac5816(s):
    # 0x140ac5816: lea rcx, [rsp + 0x60]
    s.write(('r', 'rcx', 8),s.address(('m', 'rsp', None, 1, 96, 8)))
    # 0x140ac581b: lea rdx, [rsp + 0x70]
    s.write(('r', 'rdx', 8),s.address(('m', 'rsp', None, 1, 112, 8)))
    # 0x140ac5820: call 0x140df1c10
    s.push(5380003877)
    s.pc=s.read(('i', 5383330832, 8))
    return

def b_140ac5825(s):
    # 0x140ac5825: mulss xmm13, dword ptr [rip + 0x2371722]
    s.float_op('mulss',('r', 'xmm13', 16),('m', None, None, 1, 5417168720, 4))
    # 0x140ac582e: xorps xmm10, xmm10
    s.float_op('xorps',('r', 'xmm10', 16),('r', 'xmm10', 16))
    # 0x140ac5832: movshdup xmm7, xmm9
    s.simd_move('movshdup',('r', 'xmm7', 16),('r', 'xmm9', 16))
    # 0x140ac5837: addss xmm9, xmm10
    s.float_op('addss',('r', 'xmm9', 16),('r', 'xmm10', 16))
    # 0x140ac583c: movaps xmm0, xmm7
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm7', 16))
    # 0x140ac583f: subss xmm0, xmm13
    s.float_op('subss',('r', 'xmm0', 16),('r', 'xmm13', 16))
    # 0x140ac5844: movaps xmm1, xmm9
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm9', 16))
    # 0x140ac5848: shufps xmm1, xmm0, 0
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm0', 16),0)
    # 0x140ac584c: mulps xmm1, xmmword ptr [rsp + 0x60]
    s.float_op('mulps',('r', 'xmm1', 16),('m', 'rsp', None, 1, 96, 16))
    # 0x140ac5851: movaps xmm0, xmm1
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x140ac5854: unpckhpd xmm0, xmm1
    s.shuffle('unpckhpd',('r', 'xmm0', 16),('r', 'xmm1', 16),0)
    # 0x140ac5858: addps xmm0, xmm1
    s.float_op('addps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x140ac585b: movlps qword ptr [rsp + 0x58], xmm0
    s.simd_move('movlps',('m', 'rsp', None, 1, 88, 8),('r', 'xmm0', 16))
    # 0x140ac5860: lea rcx, [rsp + 0x30]
    s.write(('r', 'rcx', 8),s.address(('m', 'rsp', None, 1, 48, 8)))
    # 0x140ac5865: lea rdx, [rsp + 0x58]
    s.write(('r', 'rdx', 8),s.address(('m', 'rsp', None, 1, 88, 8)))
    # 0x140ac586a: call 0x140df4520
    s.push(5380003951)
    s.pc=s.read(('i', 5383341344, 8))
    return

def b_140ac586f(s):
    # 0x140ac586f: movsd xmm4, qword ptr [rsp + 0x30]
    s.simd_move('movsd',('r', 'xmm4', 16),('m', 'rsp', None, 1, 48, 8))
    # 0x140ac5875: movss xmm6, dword ptr [rdi + 0x14]
    s.simd_move('movss',('r', 'xmm6', 16),('m', 'rdi', None, 1, 20, 4))
    # 0x140ac587a: movss xmm3, dword ptr [rdi + 0x18]
    s.simd_move('movss',('r', 'xmm3', 16),('m', 'rdi', None, 1, 24, 4))
    # 0x140ac587f: movaps xmm0, xmm12
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm12', 16))
    # 0x140ac5883: movss xmm12, dword ptr [rdi + 0x4c]
    s.simd_move('movss',('r', 'xmm12', 16),('m', 'rdi', None, 1, 76, 4))
    # 0x140ac5889: movss xmm11, dword ptr [rsp + 0x38]
    s.simd_move('movss',('r', 'xmm11', 16),('m', 'rsp', None, 1, 56, 4))
    # 0x140ac5890: addss xmm11, xmm3
    s.float_op('addss',('r', 'xmm11', 16),('r', 'xmm3', 16))
    # 0x140ac5895: movss xmm15, dword ptr [rdi + 0x30]
    s.simd_move('movss',('r', 'xmm15', 16),('m', 'rdi', None, 1, 48, 4))
    # 0x140ac589b: ucomiss xmm0, xmm15
    s.compare_float(('r', 'xmm0', 16),('r', 'xmm15', 16))
    # 0x140ac589f: xorps xmm14, xmm14
    s.float_op('xorps',('r', 'xmm14', 16),('r', 'xmm14', 16))
    # 0x140ac58a3: jae 0x140ac5967
    s.pc=s.read(('i', 5380004199, 8)) if s.condition('ae') else 5380004009
    return

def b_140ac58a9(s):
    # 0x140ac58a9: movshdup xmm0, xmm8
    s.simd_move('movshdup',('r', 'xmm0', 16),('r', 'xmm8', 16))
    # 0x140ac58ae: movaps xmm1, xmm8
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm8', 16))
    # 0x140ac58b2: cmpunordss xmm1, xmm8
    s.float_op('cmpunordss',('r', 'xmm1', 16),('r', 'xmm8', 16))
    # 0x140ac58b8: movaps xmm2, xmm1
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x140ac58bb: andps xmm2, xmm0
    s.float_op('andps',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x140ac58be: maxss xmm0, xmm8
    s.float_op('maxss',('r', 'xmm0', 16),('r', 'xmm8', 16))
    # 0x140ac58c3: andnps xmm1, xmm0
    s.float_op('andnps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x140ac58c6: orps xmm1, xmm2
    s.float_op('orps',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x140ac58c9: addss xmm1, dword ptr [rip + 0x2576dbf]
    s.float_op('addss',('r', 'xmm1', 16),('m', None, None, 1, 5419288208, 4))
    # 0x140ac58d1: divss xmm1, dword ptr [rip + 0x2576dbf]
    s.float_op('divss',('r', 'xmm1', 16),('m', None, None, 1, 5419288216, 4))
    # 0x140ac58d9: divss xmm1, dword ptr [rip + 0x23720ab]
    s.float_op('divss',('r', 'xmm1', 16),('m', None, None, 1, 5417171340, 4))
    # 0x140ac58e1: xorps xmm2, xmm2
    s.float_op('xorps',('r', 'xmm2', 16),('r', 'xmm2', 16))
    # 0x140ac58e4: maxss xmm2, xmm1
    s.float_op('maxss',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x140ac58e8: movss xmm0, dword ptr [rip + 0x2371638]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5417168680, 4))
    # 0x140ac58f0: movaps xmm1, xmm0
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x140ac58f3: minss xmm1, xmm2
    s.float_op('minss',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x140ac58f7: movaps xmm2, xmm1
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x140ac58fa: mulss xmm2, xmm1
    s.float_op('mulss',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x140ac58fe: addss xmm1, xmm1
    s.float_op('addss',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x140ac5902: movss xmm14, dword ptr [rip + 0x2371f81]
    s.simd_move('movss',('r', 'xmm14', 16),('m', None, None, 1, 5417171084, 4))
    # 0x140ac590b: subss xmm14, xmm1
    s.float_op('subss',('r', 'xmm14', 16),('r', 'xmm1', 16))
    # 0x140ac5910: mulss xmm14, xmm2
    s.float_op('mulss',('r', 'xmm14', 16),('r', 'xmm2', 16))
    # 0x140ac5915: movaps xmm2, xmm0
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x140ac5918: subss xmm2, xmm14
    s.float_op('subss',('r', 'xmm2', 16),('r', 'xmm14', 16))
    # 0x140ac591d: mulss xmm2, dword ptr [rip + 0x24c3cd7]
    s.float_op('mulss',('r', 'xmm2', 16),('m', None, None, 1, 5418554876, 4))
    # 0x140ac5925: mulss xmm14, dword ptr [rip + 0x23721aa]
    s.float_op('mulss',('r', 'xmm14', 16),('m', None, None, 1, 5417171672, 4))
    # 0x140ac592e: xorps xmm1, xmm1
    s.float_op('xorps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x140ac5931: addss xmm14, xmm2
    s.float_op('addss',('r', 'xmm14', 16),('r', 'xmm2', 16))
    # 0x140ac5936: ucomiss xmm14, xmm1
    s.compare_float(('r', 'xmm14', 16),('r', 'xmm1', 16))
    # 0x140ac593a: jb 0x140ac6036
    s.pc=s.read(('i', 5380005942, 8)) if s.condition('b') else 5380004160
    return

def b_140ac5940(s):
    # 0x140ac5940: subss xmm0, xmm15
    s.float_op('subss',('r', 'xmm0', 16),('r', 'xmm15', 16))
    # 0x140ac5945: mulss xmm0, dword ptr [rip + 0x237203f]
    s.float_op('mulss',('r', 'xmm0', 16),('m', None, None, 1, 5417171340, 4))
    # 0x140ac594d: movss xmm2, dword ptr [rip + 0x2372183]
    s.simd_move('movss',('r', 'xmm2', 16),('m', None, None, 1, 5417171672, 4))
    # 0x140ac5955: mulss xmm2, xmm15
    s.float_op('mulss',('r', 'xmm2', 16),('r', 'xmm15', 16))
    # 0x140ac595a: addss xmm2, xmm0
    s.float_op('addss',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x140ac595e: maxss xmm1, xmm2
    s.float_op('maxss',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x140ac5962: minss xmm14, xmm1
    s.float_op('minss',('r', 'xmm14', 16),('r', 'xmm1', 16))
    s.pc=5380004199
    return

def b_140ac5967(s):
    # 0x140ac5967: movaps xmmword ptr [rsp + 0x90], xmm4
    s.simd_move('movaps',('m', 'rsp', None, 1, 144, 16),('r', 'xmm4', 16))
    # 0x140ac596f: movaps xmmword ptr [rsp + 0xa0], xmm3
    s.simd_move('movaps',('m', 'rsp', None, 1, 160, 16),('r', 'xmm3', 16))
    # 0x140ac5977: shufps xmm9, xmm9, 0
    s.shuffle('shufps',('r', 'xmm9', 16),('r', 'xmm9', 16),0)
    # 0x140ac597c: lea rcx, [rsp + 0x60]
    s.write(('r', 'rcx', 8),s.address(('m', 'rsp', None, 1, 96, 8)))
    # 0x140ac5981: lea rdx, [rsp + 0x70]
    s.write(('r', 'rdx', 8),s.address(('m', 'rsp', None, 1, 112, 8)))
    # 0x140ac5986: call 0x140df1c10
    s.push(5380004235)
    s.pc=s.read(('i', 5383330832, 8))
    return

def b_140ac598b(s):
    # 0x140ac598b: addss xmm13, xmm7
    s.float_op('addss',('r', 'xmm13', 16),('r', 'xmm7', 16))
    # 0x140ac5990: shufps xmm9, xmm13, 4
    s.shuffle('shufps',('r', 'xmm9', 16),('r', 'xmm13', 16),4)
    # 0x140ac5995: mulps xmm9, xmmword ptr [rsp + 0x60]
    s.float_op('mulps',('r', 'xmm9', 16),('m', 'rsp', None, 1, 96, 16))
    # 0x140ac599b: movaps xmm0, xmm9
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm9', 16))
    # 0x140ac599f: unpckhpd xmm0, xmm9
    s.shuffle('unpckhpd',('r', 'xmm0', 16),('r', 'xmm9', 16),0)
    # 0x140ac59a4: addps xmm0, xmm9
    s.float_op('addps',('r', 'xmm0', 16),('r', 'xmm9', 16))
    # 0x140ac59a8: movlps qword ptr [rsp + 0x58], xmm0
    s.simd_move('movlps',('m', 'rsp', None, 1, 88, 8),('r', 'xmm0', 16))
    # 0x140ac59ad: lea rcx, [rsp + 0x30]
    s.write(('r', 'rcx', 8),s.address(('m', 'rsp', None, 1, 48, 8)))
    # 0x140ac59b2: lea rdx, [rsp + 0x58]
    s.write(('r', 'rdx', 8),s.address(('m', 'rsp', None, 1, 88, 8)))
    # 0x140ac59b7: call 0x140df4520
    s.push(5380004284)
    s.pc=s.read(('i', 5383341344, 8))
    return

def b_140ac59bc(s):
    # 0x140ac59bc: movss xmm0, dword ptr [rip + 0x2375814]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5417185752, 4))
    # 0x140ac59c4: ucomiss xmm0, xmm15
    s.compare_float(('r', 'xmm0', 16),('r', 'xmm15', 16))
    # 0x140ac59c8: movsd xmm1, qword ptr [rsp + 0x34]
    s.simd_move('movsd',('r', 'xmm1', 16),('m', 'rsp', None, 1, 52, 8))
    # 0x140ac59ce: movss xmm0, dword ptr [rsp + 0x30]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rsp', None, 1, 48, 4))
    # 0x140ac59d4: jae 0x140ac5a96
    s.pc=s.read(('i', 5380004502, 8)) if s.condition('ae') else 5380004314
    return

def b_140ac59da(s):
    # 0x140ac59da: movshdup xmm2, xmm8
    s.simd_move('movshdup',('r', 'xmm2', 16),('r', 'xmm8', 16))
    # 0x140ac59df: movaps xmm3, xmm8
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm8', 16))
    # 0x140ac59e3: cmpunordss xmm3, xmm8
    s.float_op('cmpunordss',('r', 'xmm3', 16),('r', 'xmm8', 16))
    # 0x140ac59e9: movaps xmm4, xmm3
    s.simd_move('movaps',('r', 'xmm4', 16),('r', 'xmm3', 16))
    # 0x140ac59ec: andps xmm4, xmm2
    s.float_op('andps',('r', 'xmm4', 16),('r', 'xmm2', 16))
    # 0x140ac59ef: maxss xmm2, xmm8
    s.float_op('maxss',('r', 'xmm2', 16),('r', 'xmm8', 16))
    # 0x140ac59f4: andnps xmm3, xmm2
    s.float_op('andnps',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x140ac59f7: orps xmm3, xmm4
    s.float_op('orps',('r', 'xmm3', 16),('r', 'xmm4', 16))
    # 0x140ac59fa: addss xmm3, dword ptr [rip + 0x2576c8e]
    s.float_op('addss',('r', 'xmm3', 16),('m', None, None, 1, 5419288208, 4))
    # 0x140ac5a02: divss xmm3, dword ptr [rip + 0x2576c8e]
    s.float_op('divss',('r', 'xmm3', 16),('m', None, None, 1, 5419288216, 4))
    # 0x140ac5a0a: divss xmm3, dword ptr [rip + 0x2371f7a]
    s.float_op('divss',('r', 'xmm3', 16),('m', None, None, 1, 5417171340, 4))
    # 0x140ac5a12: xorps xmm4, xmm4
    s.float_op('xorps',('r', 'xmm4', 16),('r', 'xmm4', 16))
    # 0x140ac5a15: maxss xmm4, xmm3
    s.float_op('maxss',('r', 'xmm4', 16),('r', 'xmm3', 16))
    # 0x140ac5a19: movss xmm2, dword ptr [rip + 0x2371507]
    s.simd_move('movss',('r', 'xmm2', 16),('m', None, None, 1, 5417168680, 4))
    # 0x140ac5a21: movaps xmm3, xmm2
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x140ac5a24: minss xmm3, xmm4
    s.float_op('minss',('r', 'xmm3', 16),('r', 'xmm4', 16))
    # 0x140ac5a28: movaps xmm4, xmm3
    s.simd_move('movaps',('r', 'xmm4', 16),('r', 'xmm3', 16))
    # 0x140ac5a2b: mulss xmm4, xmm3
    s.float_op('mulss',('r', 'xmm4', 16),('r', 'xmm3', 16))
    # 0x140ac5a2f: addss xmm3, xmm3
    s.float_op('addss',('r', 'xmm3', 16),('r', 'xmm3', 16))
    # 0x140ac5a33: movss xmm10, dword ptr [rip + 0x2371e50]
    s.simd_move('movss',('r', 'xmm10', 16),('m', None, None, 1, 5417171084, 4))
    # 0x140ac5a3c: subss xmm10, xmm3
    s.float_op('subss',('r', 'xmm10', 16),('r', 'xmm3', 16))
    # 0x140ac5a41: mulss xmm10, xmm4
    s.float_op('mulss',('r', 'xmm10', 16),('r', 'xmm4', 16))
    # 0x140ac5a46: movaps xmm4, xmm2
    s.simd_move('movaps',('r', 'xmm4', 16),('r', 'xmm2', 16))
    # 0x140ac5a49: subss xmm4, xmm10
    s.float_op('subss',('r', 'xmm4', 16),('r', 'xmm10', 16))
    # 0x140ac5a4e: mulss xmm4, dword ptr [rip + 0x24c3ba6]
    s.float_op('mulss',('r', 'xmm4', 16),('m', None, None, 1, 5418554876, 4))
    # 0x140ac5a56: mulss xmm10, dword ptr [rip + 0x2372079]
    s.float_op('mulss',('r', 'xmm10', 16),('m', None, None, 1, 5417171672, 4))
    # 0x140ac5a5f: xorps xmm3, xmm3
    s.float_op('xorps',('r', 'xmm3', 16),('r', 'xmm3', 16))
    # 0x140ac5a62: addss xmm10, xmm4
    s.float_op('addss',('r', 'xmm10', 16),('r', 'xmm4', 16))
    # 0x140ac5a67: ucomiss xmm10, xmm3
    s.compare_float(('r', 'xmm10', 16),('r', 'xmm3', 16))
    # 0x140ac5a6b: jb 0x140ac6058
    s.pc=s.read(('i', 5380005976, 8)) if s.condition('b') else 5380004465
    return

def b_140ac5a71(s):
    # 0x140ac5a71: subss xmm2, xmm15
    s.float_op('subss',('r', 'xmm2', 16),('r', 'xmm15', 16))
    # 0x140ac5a76: mulss xmm2, dword ptr [rip + 0x2371f0e]
    s.float_op('mulss',('r', 'xmm2', 16),('m', None, None, 1, 5417171340, 4))
    # 0x140ac5a7e: mulss xmm15, dword ptr [rip + 0x2372051]
    s.float_op('mulss',('r', 'xmm15', 16),('m', None, None, 1, 5417171672, 4))
    # 0x140ac5a87: addss xmm15, xmm2
    s.float_op('addss',('r', 'xmm15', 16),('r', 'xmm2', 16))
    # 0x140ac5a8c: maxss xmm3, xmm15
    s.float_op('maxss',('r', 'xmm3', 16),('r', 'xmm15', 16))
    # 0x140ac5a91: minss xmm10, xmm3
    s.float_op('minss',('r', 'xmm10', 16),('r', 'xmm3', 16))
    s.pc=5380004502
    return

def b_140ac5a96(s):
    # 0x140ac5a96: unpcklps xmm11, xmm6
    s.shuffle('unpcklps',('r', 'xmm11', 16),('r', 'xmm6', 16),0)
    # 0x140ac5a9a: unpcklps xmm6, xmm12
    s.shuffle('unpcklps',('r', 'xmm6', 16),('r', 'xmm12', 16),0)
    # 0x140ac5a9e: addps xmm6, xmmword ptr [rsp + 0x90]
    s.float_op('addps',('r', 'xmm6', 16),('m', 'rsp', None, 1, 144, 16))
    # 0x140ac5aa6: movsldup xmm2, xmm14
    s.simd_move('movsldup',('r', 'xmm2', 16),('r', 'xmm14', 16))
    # 0x140ac5aab: mulps xmm2, xmmword ptr [rip + 0x2371e2e]
    s.float_op('mulps',('r', 'xmm2', 16),('m', None, None, 1, 5417171168, 16))
    # 0x140ac5ab2: addps xmm6, xmm2
    s.float_op('addps',('r', 'xmm6', 16),('r', 'xmm2', 16))
    # 0x140ac5ab5: unpcklps xmm12, xmmword ptr [rsp + 0xa0]
    s.shuffle('unpcklps',('r', 'xmm12', 16),('m', 'rsp', None, 1, 160, 16),0)
    # 0x140ac5abe: movlhps xmm11, xmm12
    s.simd_move('movlhps',('r', 'xmm11', 16),('r', 'xmm12', 16))
    # 0x140ac5ac2: movlhps xmm0, xmm2
    s.simd_move('movlhps',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x140ac5ac5: shufps xmm0, xmm1, 0x42
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm1', 16),66)
    # 0x140ac5ac9: addps xmm0, xmm11
    s.float_op('addps',('r', 'xmm0', 16),('r', 'xmm11', 16))
    # 0x140ac5acd: movaps xmm1, xmmword ptr [rip + 0x2546c9c]
    s.simd_move('movaps',('r', 'xmm1', 16),('m', None, None, 1, 5419091824, 16))
    # 0x140ac5ad4: unpcklps xmm1, xmm10
    s.shuffle('unpcklps',('r', 'xmm1', 16),('r', 'xmm10', 16),0)
    # 0x140ac5ad8: jmp 0x140ac5e9b
    s.pc=s.read(('i', 5380005531, 8))
    return

def b_140ac5add(s):
    # 0x140ac5add: mov ebx, dword ptr [rdi + 8]
    s.write(('r', 'ebx', 4),s.read(('m', 'rdi', None, 1, 8, 4)))
    # 0x140ac5ae0: cmp ebx, 1
    s.integer('cmp',[('r', 'ebx', 4), ('i', 1, 4)])
    # 0x140ac5ae3: jne 0x140ac5b38
    s.pc=s.read(('i', 5380004664, 8)) if s.condition('ne') else 5380004581
    return

def b_140ac5ae5(s):
    # 0x140ac5ae5: mov rax, qword ptr [rdi + 0x1c]
    s.write(('r', 'rax', 8),s.read(('m', 'rdi', None, 1, 28, 8)))
    # 0x140ac5ae9: mov qword ptr [rsp + 0x40], rax
    s.write(('m', 'rsp', None, 1, 64, 8),s.read(('r', 'rax', 8)))
    # 0x140ac5aee: movups xmm0, xmmword ptr [rdi + 0xc]
    s.simd_move('movups',('r', 'xmm0', 16),('m', 'rdi', None, 1, 12, 16))
    # 0x140ac5af2: movaps xmmword ptr [rsp + 0x30], xmm0
    s.simd_move('movaps',('m', 'rsp', None, 1, 48, 16),('r', 'xmm0', 16))
    # 0x140ac5af7: lea rcx, [rsp + 0x70]
    s.write(('r', 'rcx', 8),s.address(('m', 'rsp', None, 1, 112, 8)))
    # 0x140ac5afc: lea rdx, [rsp + 0x30]
    s.write(('r', 'rdx', 8),s.address(('m', 'rsp', None, 1, 48, 8)))
    # 0x140ac5b01: call 0x140df1c10
    s.push(5380004614)
    s.pc=s.read(('i', 5383330832, 8))
    return

def b_140ac5b06(s):
    # 0x140ac5b06: movsd xmm0, qword ptr [rdi + 0x1c]
    s.simd_move('movsd',('r', 'xmm0', 16),('m', 'rdi', None, 1, 28, 8))
    # 0x140ac5b0b: movsd xmm1, qword ptr [rdi + 0x24]
    s.simd_move('movsd',('r', 'xmm1', 16),('m', 'rdi', None, 1, 36, 8))
    # 0x140ac5b10: mulps xmm1, xmm0
    s.float_op('mulps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x140ac5b13: unpcklps xmm1, xmm1
    s.shuffle('unpcklps',('r', 'xmm1', 16),('r', 'xmm1', 16),0)
    # 0x140ac5b16: mulps xmm1, xmmword ptr [rip + 0x2371423]
    s.float_op('mulps',('r', 'xmm1', 16),('m', None, None, 1, 5417168704, 16))
    # 0x140ac5b1d: mulps xmm1, xmmword ptr [rsp + 0x70]
    s.float_op('mulps',('r', 'xmm1', 16),('m', 'rsp', None, 1, 112, 16))
    # 0x140ac5b22: movaps xmm0, xmm1
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x140ac5b25: unpckhpd xmm0, xmm1
    s.shuffle('unpckhpd',('r', 'xmm0', 16),('r', 'xmm1', 16),0)
    # 0x140ac5b29: addps xmm0, xmm1
    s.float_op('addps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x140ac5b2c: mov eax, 0x10
    s.write(('r', 'eax', 4),s.read(('i', 16, 4)))
    # 0x140ac5b31: mov ecx, 0xc
    s.write(('r', 'ecx', 4),s.read(('i', 12, 4)))
    # 0x140ac5b36: jmp 0x140ac5b5e
    s.pc=s.read(('i', 5380004702, 8))
    return

def b_140ac5b38(s):
    # 0x140ac5b38: movss xmm0, dword ptr [rdi + 0x14]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rdi', None, 1, 20, 4))
    # 0x140ac5b3d: addss xmm0, xmm0
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x140ac5b41: movsd xmm1, qword ptr [rdi + 0x24]
    s.simd_move('movsd',('r', 'xmm1', 16),('m', 'rdi', None, 1, 36, 8))
    # 0x140ac5b46: movsldup xmm0, xmm0
    s.simd_move('movsldup',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x140ac5b4a: mulps xmm0, xmm1
    s.float_op('mulps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x140ac5b4d: mulps xmm0, xmmword ptr [rip + 0x237140c]
    s.float_op('mulps',('r', 'xmm0', 16),('m', None, None, 1, 5417168736, 16))
    # 0x140ac5b54: mov eax, 8
    s.write(('r', 'eax', 4),s.read(('i', 8, 4)))
    # 0x140ac5b59: mov ecx, 4
    s.write(('r', 'ecx', 4),s.read(('i', 4, 4)))
    s.pc=5380004702
    return

def b_140ac5b5e(s):
    # 0x140ac5b5e: movlps qword ptr [rsp + 0x70], xmm0
    s.simd_move('movlps',('m', 'rsp', None, 1, 112, 8),('r', 'xmm0', 16))
    # 0x140ac5b63: movss xmm6, dword ptr [rdi + rax + 8]
    s.simd_move('movss',('r', 'xmm6', 16),('m', 'rdi', 'rax', 1, 8, 4))
    # 0x140ac5b69: movss xmm8, dword ptr [rdi + rcx + 8]
    s.simd_move('movss',('r', 'xmm8', 16),('m', 'rdi', 'rcx', 1, 8, 4))
    # 0x140ac5b70: movss xmm7, dword ptr [rdi + 0x4c]
    s.simd_move('movss',('r', 'xmm7', 16),('m', 'rdi', None, 1, 76, 4))
    # 0x140ac5b75: lea rcx, [rsp + 0x30]
    s.write(('r', 'rcx', 8),s.address(('m', 'rsp', None, 1, 48, 8)))
    # 0x140ac5b7a: lea rdx, [rsp + 0x70]
    s.write(('r', 'rdx', 8),s.address(('m', 'rsp', None, 1, 112, 8)))
    # 0x140ac5b7f: call 0x140df4520
    s.push(5380004740)
    s.pc=s.read(('i', 5383341344, 8))
    return

def b_140ac5b84(s):
    # 0x140ac5b84: movsd xmm0, qword ptr [rsp + 0x30]
    s.simd_move('movsd',('r', 'xmm0', 16),('m', 'rsp', None, 1, 48, 8))
    # 0x140ac5b8a: addss xmm6, dword ptr [rsp + 0x38]
    s.float_op('addss',('r', 'xmm6', 16),('m', 'rsp', None, 1, 56, 4))
    # 0x140ac5b90: movss xmm1, dword ptr [rdi + 0x30]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rdi', None, 1, 48, 4))
    # 0x140ac5b95: xorps xmm2, xmm2
    s.float_op('xorps',('r', 'xmm2', 16),('r', 'xmm2', 16))
    # 0x140ac5b98: ucomiss xmm12, xmm1
    s.compare_float(('r', 'xmm12', 16),('r', 'xmm1', 16))
    # 0x140ac5b9c: jae 0x140ac5f62
    s.pc=s.read(('i', 5380005730, 8)) if s.condition('ae') else 5380004770
    return

def b_140ac5ba2(s):
    # 0x140ac5ba2: test bl, bl
    s.integer('test',[('r', 'bl', 1), ('r', 'bl', 1)])
    # 0x140ac5ba4: je 0x140ac5ebc
    s.pc=s.read(('i', 5380005564, 8)) if s.condition('e') else 5380004778
    return

def b_140ac5baa(s):
    # 0x140ac5baa: movss xmm3, dword ptr [rdi + 0x1c]
    s.simd_move('movss',('r', 'xmm3', 16),('m', 'rdi', None, 1, 28, 4))
    # 0x140ac5baf: movss xmm4, dword ptr [rdi + 0x20]
    s.simd_move('movss',('r', 'xmm4', 16),('m', 'rdi', None, 1, 32, 4))
    # 0x140ac5bb4: movaps xmm2, xmm3
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x140ac5bb7: cmpunordss xmm2, xmm3
    s.float_op('cmpunordss',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x140ac5bbc: movaps xmm5, xmm2
    s.simd_move('movaps',('r', 'xmm5', 16),('r', 'xmm2', 16))
    # 0x140ac5bbf: andps xmm5, xmm4
    s.float_op('andps',('r', 'xmm5', 16),('r', 'xmm4', 16))
    # 0x140ac5bc2: maxss xmm4, xmm3
    s.float_op('maxss',('r', 'xmm4', 16),('r', 'xmm3', 16))
    # 0x140ac5bc6: andnps xmm2, xmm4
    s.float_op('andnps',('r', 'xmm2', 16),('r', 'xmm4', 16))
    # 0x140ac5bc9: orps xmm2, xmm5
    s.float_op('orps',('r', 'xmm2', 16),('r', 'xmm5', 16))
    # 0x140ac5bcc: addss xmm2, dword ptr [rip + 0x2576abc]
    s.float_op('addss',('r', 'xmm2', 16),('m', None, None, 1, 5419288208, 4))
    # 0x140ac5bd4: divss xmm2, dword ptr [rip + 0x2576abc]
    s.float_op('divss',('r', 'xmm2', 16),('m', None, None, 1, 5419288216, 4))
    # 0x140ac5bdc: movss xmm4, dword ptr [rip + 0x24c3a18]
    s.simd_move('movss',('r', 'xmm4', 16),('m', None, None, 1, 5418554876, 4))
    # 0x140ac5be4: jmp 0x140ac5ed9
    s.pc=s.read(('i', 5380005593, 8))
    return

def b_140ac5be9(s):
    # 0x140ac5be9: lea rcx, [rsp + 0x60]
    s.write(('r', 'rcx', 8),s.address(('m', 'rsp', None, 1, 96, 8)))
    # 0x140ac5bee: lea rdx, [rsp + 0x70]
    s.write(('r', 'rdx', 8),s.address(('m', 'rsp', None, 1, 112, 8)))
    # 0x140ac5bf3: call 0x140df1c10
    s.push(5380004856)
    s.pc=s.read(('i', 5383330832, 8))
    return

def b_140ac5bf8(s):
    # 0x140ac5bf8: mulss xmm14, dword ptr [rip + 0x237134f]
    s.float_op('mulss',('r', 'xmm14', 16),('m', None, None, 1, 5417168720, 4))
    # 0x140ac5c01: movaps xmm7, xmm9
    s.simd_move('movaps',('r', 'xmm7', 16),('r', 'xmm9', 16))
    # 0x140ac5c05: subps xmm7, xmm14
    s.float_op('subps',('r', 'xmm7', 16),('r', 'xmm14', 16))
    # 0x140ac5c09: addps xmm6, xmm9
    s.float_op('addps',('r', 'xmm6', 16),('r', 'xmm9', 16))
    # 0x140ac5c0d: shufps xmm7, xmm6, 0x50
    s.shuffle('shufps',('r', 'xmm7', 16),('r', 'xmm6', 16),80)
    # 0x140ac5c11: movaps xmm0, xmmword ptr [rsp + 0x60]
    s.simd_move('movaps',('r', 'xmm0', 16),('m', 'rsp', None, 1, 96, 16))
    # 0x140ac5c16: mulps xmm0, xmm7
    s.float_op('mulps',('r', 'xmm0', 16),('r', 'xmm7', 16))
    # 0x140ac5c19: movaps xmm1, xmm0
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x140ac5c1c: unpckhpd xmm1, xmm0
    s.shuffle('unpckhpd',('r', 'xmm1', 16),('r', 'xmm0', 16),0)
    # 0x140ac5c20: addps xmm1, xmm0
    s.float_op('addps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x140ac5c23: movlps qword ptr [rsp + 0x58], xmm1
    s.simd_move('movlps',('m', 'rsp', None, 1, 88, 8),('r', 'xmm1', 16))
    # 0x140ac5c28: lea rcx, [rsp + 0x30]
    s.write(('r', 'rcx', 8),s.address(('m', 'rsp', None, 1, 48, 8)))
    # 0x140ac5c2d: lea rdx, [rsp + 0x58]
    s.write(('r', 'rdx', 8),s.address(('m', 'rsp', None, 1, 88, 8)))
    # 0x140ac5c32: call 0x140df4520
    s.push(5380004919)
    s.pc=s.read(('i', 5383341344, 8))
    return

def b_140ac5c37(s):
    # 0x140ac5c37: movsd xmm4, qword ptr [rsp + 0x30]
    s.simd_move('movsd',('r', 'xmm4', 16),('m', 'rsp', None, 1, 48, 8))
    # 0x140ac5c3d: movss xmm6, dword ptr [rdi + 0x14]
    s.simd_move('movss',('r', 'xmm6', 16),('m', 'rdi', None, 1, 20, 4))
    # 0x140ac5c42: movss xmm3, dword ptr [rdi + 0x18]
    s.simd_move('movss',('r', 'xmm3', 16),('m', 'rdi', None, 1, 24, 4))
    # 0x140ac5c47: movss xmm11, dword ptr [rdi + 0x4c]
    s.simd_move('movss',('r', 'xmm11', 16),('m', 'rdi', None, 1, 76, 4))
    # 0x140ac5c4d: movss xmm10, dword ptr [rsp + 0x38]
    s.simd_move('movss',('r', 'xmm10', 16),('m', 'rsp', None, 1, 56, 4))
    # 0x140ac5c54: addss xmm10, xmm3
    s.float_op('addss',('r', 'xmm10', 16),('r', 'xmm3', 16))
    # 0x140ac5c59: movss xmm13, dword ptr [rdi + 0x30]
    s.simd_move('movss',('r', 'xmm13', 16),('m', 'rdi', None, 1, 48, 4))
    # 0x140ac5c5f: xorps xmm15, xmm15
    s.float_op('xorps',('r', 'xmm15', 16),('r', 'xmm15', 16))
    # 0x140ac5c63: ucomiss xmm12, xmm13
    s.compare_float(('r', 'xmm12', 16),('r', 'xmm13', 16))
    # 0x140ac5c67: xorps xmm12, xmm12
    s.float_op('xorps',('r', 'xmm12', 16),('r', 'xmm12', 16))
    # 0x140ac5c6b: jae 0x140ac5d2f
    s.pc=s.read(('i', 5380005167, 8)) if s.condition('ae') else 5380004977
    return

def b_140ac5c71(s):
    # 0x140ac5c71: movshdup xmm0, xmm8
    s.simd_move('movshdup',('r', 'xmm0', 16),('r', 'xmm8', 16))
    # 0x140ac5c76: movaps xmm1, xmm8
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm8', 16))
    # 0x140ac5c7a: cmpunordss xmm1, xmm8
    s.float_op('cmpunordss',('r', 'xmm1', 16),('r', 'xmm8', 16))
    # 0x140ac5c80: movaps xmm2, xmm1
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x140ac5c83: andps xmm2, xmm0
    s.float_op('andps',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x140ac5c86: maxss xmm0, xmm8
    s.float_op('maxss',('r', 'xmm0', 16),('r', 'xmm8', 16))
    # 0x140ac5c8b: andnps xmm1, xmm0
    s.float_op('andnps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x140ac5c8e: orps xmm1, xmm2
    s.float_op('orps',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x140ac5c91: addss xmm1, dword ptr [rip + 0x25769f7]
    s.float_op('addss',('r', 'xmm1', 16),('m', None, None, 1, 5419288208, 4))
    # 0x140ac5c99: divss xmm1, dword ptr [rip + 0x25769f7]
    s.float_op('divss',('r', 'xmm1', 16),('m', None, None, 1, 5419288216, 4))
    # 0x140ac5ca1: divss xmm1, dword ptr [rip + 0x2371ce3]
    s.float_op('divss',('r', 'xmm1', 16),('m', None, None, 1, 5417171340, 4))
    # 0x140ac5ca9: xorps xmm2, xmm2
    s.float_op('xorps',('r', 'xmm2', 16),('r', 'xmm2', 16))
    # 0x140ac5cac: maxss xmm2, xmm1
    s.float_op('maxss',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x140ac5cb0: movss xmm0, dword ptr [rip + 0x2371270]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5417168680, 4))
    # 0x140ac5cb8: movaps xmm1, xmm0
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x140ac5cbb: minss xmm1, xmm2
    s.float_op('minss',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x140ac5cbf: movaps xmm2, xmm1
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x140ac5cc2: mulss xmm2, xmm1
    s.float_op('mulss',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x140ac5cc6: addss xmm1, xmm1
    s.float_op('addss',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x140ac5cca: movss xmm12, dword ptr [rip + 0x2371bb9]
    s.simd_move('movss',('r', 'xmm12', 16),('m', None, None, 1, 5417171084, 4))
    # 0x140ac5cd3: subss xmm12, xmm1
    s.float_op('subss',('r', 'xmm12', 16),('r', 'xmm1', 16))
    # 0x140ac5cd8: mulss xmm12, xmm2
    s.float_op('mulss',('r', 'xmm12', 16),('r', 'xmm2', 16))
    # 0x140ac5cdd: movaps xmm2, xmm0
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x140ac5ce0: subss xmm2, xmm12
    s.float_op('subss',('r', 'xmm2', 16),('r', 'xmm12', 16))
    # 0x140ac5ce5: mulss xmm2, dword ptr [rip + 0x24c390f]
    s.float_op('mulss',('r', 'xmm2', 16),('m', None, None, 1, 5418554876, 4))
    # 0x140ac5ced: mulss xmm12, dword ptr [rip + 0x2371de2]
    s.float_op('mulss',('r', 'xmm12', 16),('m', None, None, 1, 5417171672, 4))
    # 0x140ac5cf6: xorps xmm1, xmm1
    s.float_op('xorps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x140ac5cf9: addss xmm12, xmm2
    s.float_op('addss',('r', 'xmm12', 16),('r', 'xmm2', 16))
    # 0x140ac5cfe: ucomiss xmm12, xmm1
    s.compare_float(('r', 'xmm12', 16),('r', 'xmm1', 16))
    # 0x140ac5d02: jb 0x140ac6047
    s.pc=s.read(('i', 5380005959, 8)) if s.condition('b') else 5380005128
    return

def b_140ac5d08(s):
    # 0x140ac5d08: subss xmm0, xmm13
    s.float_op('subss',('r', 'xmm0', 16),('r', 'xmm13', 16))
    # 0x140ac5d0d: mulss xmm0, dword ptr [rip + 0x2371c77]
    s.float_op('mulss',('r', 'xmm0', 16),('m', None, None, 1, 5417171340, 4))
    # 0x140ac5d15: movss xmm2, dword ptr [rip + 0x2371dbb]
    s.simd_move('movss',('r', 'xmm2', 16),('m', None, None, 1, 5417171672, 4))
    # 0x140ac5d1d: mulss xmm2, xmm13
    s.float_op('mulss',('r', 'xmm2', 16),('r', 'xmm13', 16))
    # 0x140ac5d22: addss xmm2, xmm0
    s.float_op('addss',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x140ac5d26: maxss xmm1, xmm2
    s.float_op('maxss',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x140ac5d2a: minss xmm12, xmm1
    s.float_op('minss',('r', 'xmm12', 16),('r', 'xmm1', 16))
    s.pc=5380005167
    return

def b_140ac5d2f(s):
    # 0x140ac5d2f: movaps xmmword ptr [rsp + 0x90], xmm4
    s.simd_move('movaps',('m', 'rsp', None, 1, 144, 16),('r', 'xmm4', 16))
    # 0x140ac5d37: movaps xmmword ptr [rsp + 0xa0], xmm3
    s.simd_move('movaps',('m', 'rsp', None, 1, 160, 16),('r', 'xmm3', 16))
    # 0x140ac5d3f: lea rcx, [rsp + 0x60]
    s.write(('r', 'rcx', 8),s.address(('m', 'rsp', None, 1, 96, 8)))
    # 0x140ac5d44: lea rdx, [rsp + 0x70]
    s.write(('r', 'rdx', 8),s.address(('m', 'rsp', None, 1, 112, 8)))
    # 0x140ac5d49: call 0x140df1c10
    s.push(5380005198)
    s.pc=s.read(('i', 5383330832, 8))
    return

def b_140ac5d4e(s):
    # 0x140ac5d4e: addss xmm14, xmm9
    s.float_op('addss',('r', 'xmm14', 16),('r', 'xmm9', 16))
    # 0x140ac5d53: shufps xmm14, xmm7, 0xa0
    s.shuffle('shufps',('r', 'xmm14', 16),('r', 'xmm7', 16),160)
    # 0x140ac5d58: mulps xmm14, xmmword ptr [rsp + 0x60]
    s.float_op('mulps',('r', 'xmm14', 16),('m', 'rsp', None, 1, 96, 16))
    # 0x140ac5d5e: movaps xmm0, xmm14
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm14', 16))
    # 0x140ac5d62: unpckhpd xmm0, xmm14
    s.shuffle('unpckhpd',('r', 'xmm0', 16),('r', 'xmm14', 16),0)
    # 0x140ac5d67: addps xmm0, xmm14
    s.float_op('addps',('r', 'xmm0', 16),('r', 'xmm14', 16))
    # 0x140ac5d6b: movlps qword ptr [rsp + 0x58], xmm0
    s.simd_move('movlps',('m', 'rsp', None, 1, 88, 8),('r', 'xmm0', 16))
    # 0x140ac5d70: lea rcx, [rsp + 0x30]
    s.write(('r', 'rcx', 8),s.address(('m', 'rsp', None, 1, 48, 8)))
    # 0x140ac5d75: lea rdx, [rsp + 0x58]
    s.write(('r', 'rdx', 8),s.address(('m', 'rsp', None, 1, 88, 8)))
    # 0x140ac5d7a: call 0x140df4520
    s.push(5380005247)
    s.pc=s.read(('i', 5383341344, 8))
    return

def b_140ac5d7f(s):
    # 0x140ac5d7f: movss xmm0, dword ptr [rip + 0x2375451]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5417185752, 4))
    # 0x140ac5d87: ucomiss xmm0, xmm13
    s.compare_float(('r', 'xmm0', 16),('r', 'xmm13', 16))
    # 0x140ac5d8b: movsd xmm1, qword ptr [rsp + 0x34]
    s.simd_move('movsd',('r', 'xmm1', 16),('m', 'rsp', None, 1, 52, 8))
    # 0x140ac5d91: movss xmm0, dword ptr [rsp + 0x30]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rsp', None, 1, 48, 4))
    # 0x140ac5d97: jae 0x140ac5e59
    s.pc=s.read(('i', 5380005465, 8)) if s.condition('ae') else 5380005277
    return

def b_140ac5d9d(s):
    # 0x140ac5d9d: movshdup xmm2, xmm8
    s.simd_move('movshdup',('r', 'xmm2', 16),('r', 'xmm8', 16))
    # 0x140ac5da2: movaps xmm3, xmm8
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm8', 16))
    # 0x140ac5da6: cmpunordss xmm3, xmm8
    s.float_op('cmpunordss',('r', 'xmm3', 16),('r', 'xmm8', 16))
    # 0x140ac5dac: movaps xmm4, xmm3
    s.simd_move('movaps',('r', 'xmm4', 16),('r', 'xmm3', 16))
    # 0x140ac5daf: andps xmm4, xmm2
    s.float_op('andps',('r', 'xmm4', 16),('r', 'xmm2', 16))
    # 0x140ac5db2: maxss xmm2, xmm8
    s.float_op('maxss',('r', 'xmm2', 16),('r', 'xmm8', 16))
    # 0x140ac5db7: andnps xmm3, xmm2
    s.float_op('andnps',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x140ac5dba: orps xmm3, xmm4
    s.float_op('orps',('r', 'xmm3', 16),('r', 'xmm4', 16))
    # 0x140ac5dbd: addss xmm3, dword ptr [rip + 0x25768cb]
    s.float_op('addss',('r', 'xmm3', 16),('m', None, None, 1, 5419288208, 4))
    # 0x140ac5dc5: divss xmm3, dword ptr [rip + 0x25768cb]
    s.float_op('divss',('r', 'xmm3', 16),('m', None, None, 1, 5419288216, 4))
    # 0x140ac5dcd: divss xmm3, dword ptr [rip + 0x2371bb7]
    s.float_op('divss',('r', 'xmm3', 16),('m', None, None, 1, 5417171340, 4))
    # 0x140ac5dd5: xorps xmm4, xmm4
    s.float_op('xorps',('r', 'xmm4', 16),('r', 'xmm4', 16))
    # 0x140ac5dd8: maxss xmm4, xmm3
    s.float_op('maxss',('r', 'xmm4', 16),('r', 'xmm3', 16))
    # 0x140ac5ddc: movss xmm2, dword ptr [rip + 0x2371144]
    s.simd_move('movss',('r', 'xmm2', 16),('m', None, None, 1, 5417168680, 4))
    # 0x140ac5de4: movaps xmm3, xmm2
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x140ac5de7: minss xmm3, xmm4
    s.float_op('minss',('r', 'xmm3', 16),('r', 'xmm4', 16))
    # 0x140ac5deb: movaps xmm4, xmm3
    s.simd_move('movaps',('r', 'xmm4', 16),('r', 'xmm3', 16))
    # 0x140ac5dee: mulss xmm4, xmm3
    s.float_op('mulss',('r', 'xmm4', 16),('r', 'xmm3', 16))
    # 0x140ac5df2: addss xmm3, xmm3
    s.float_op('addss',('r', 'xmm3', 16),('r', 'xmm3', 16))
    # 0x140ac5df6: movss xmm15, dword ptr [rip + 0x2371a8d]
    s.simd_move('movss',('r', 'xmm15', 16),('m', None, None, 1, 5417171084, 4))
    # 0x140ac5dff: subss xmm15, xmm3
    s.float_op('subss',('r', 'xmm15', 16),('r', 'xmm3', 16))
    # 0x140ac5e04: mulss xmm15, xmm4
    s.float_op('mulss',('r', 'xmm15', 16),('r', 'xmm4', 16))
    # 0x140ac5e09: movaps xmm4, xmm2
    s.simd_move('movaps',('r', 'xmm4', 16),('r', 'xmm2', 16))
    # 0x140ac5e0c: subss xmm4, xmm15
    s.float_op('subss',('r', 'xmm4', 16),('r', 'xmm15', 16))
    # 0x140ac5e11: mulss xmm4, dword ptr [rip + 0x24c37e3]
    s.float_op('mulss',('r', 'xmm4', 16),('m', None, None, 1, 5418554876, 4))
    # 0x140ac5e19: mulss xmm15, dword ptr [rip + 0x2371cb6]
    s.float_op('mulss',('r', 'xmm15', 16),('m', None, None, 1, 5417171672, 4))
    # 0x140ac5e22: xorps xmm3, xmm3
    s.float_op('xorps',('r', 'xmm3', 16),('r', 'xmm3', 16))
    # 0x140ac5e25: addss xmm15, xmm4
    s.float_op('addss',('r', 'xmm15', 16),('r', 'xmm4', 16))
    # 0x140ac5e2a: ucomiss xmm15, xmm3
    s.compare_float(('r', 'xmm15', 16),('r', 'xmm3', 16))
    # 0x140ac5e2e: jb 0x140ac6069
    s.pc=s.read(('i', 5380005993, 8)) if s.condition('b') else 5380005428
    return

def b_140ac5e34(s):
    # 0x140ac5e34: subss xmm2, xmm13
    s.float_op('subss',('r', 'xmm2', 16),('r', 'xmm13', 16))
    # 0x140ac5e39: mulss xmm2, dword ptr [rip + 0x2371b4b]
    s.float_op('mulss',('r', 'xmm2', 16),('m', None, None, 1, 5417171340, 4))
    # 0x140ac5e41: mulss xmm13, dword ptr [rip + 0x2371c8e]
    s.float_op('mulss',('r', 'xmm13', 16),('m', None, None, 1, 5417171672, 4))
    # 0x140ac5e4a: addss xmm13, xmm2
    s.float_op('addss',('r', 'xmm13', 16),('r', 'xmm2', 16))
    # 0x140ac5e4f: maxss xmm3, xmm13
    s.float_op('maxss',('r', 'xmm3', 16),('r', 'xmm13', 16))
    # 0x140ac5e54: minss xmm15, xmm3
    s.float_op('minss',('r', 'xmm15', 16),('r', 'xmm3', 16))
    s.pc=5380005465
    return

def b_140ac5e59(s):
    # 0x140ac5e59: unpcklps xmm10, xmm6
    s.shuffle('unpcklps',('r', 'xmm10', 16),('r', 'xmm6', 16),0)
    # 0x140ac5e5d: unpcklps xmm6, xmm11
    s.shuffle('unpcklps',('r', 'xmm6', 16),('r', 'xmm11', 16),0)
    # 0x140ac5e61: addps xmm6, xmmword ptr [rsp + 0x90]
    s.float_op('addps',('r', 'xmm6', 16),('m', 'rsp', None, 1, 144, 16))
    # 0x140ac5e69: movsldup xmm2, xmm12
    s.simd_move('movsldup',('r', 'xmm2', 16),('r', 'xmm12', 16))
    # 0x140ac5e6e: mulps xmm2, xmmword ptr [rip + 0x2371a6b]
    s.float_op('mulps',('r', 'xmm2', 16),('m', None, None, 1, 5417171168, 16))
    # 0x140ac5e75: addps xmm6, xmm2
    s.float_op('addps',('r', 'xmm6', 16),('r', 'xmm2', 16))
    # 0x140ac5e78: unpcklps xmm11, xmmword ptr [rsp + 0xa0]
    s.shuffle('unpcklps',('r', 'xmm11', 16),('m', 'rsp', None, 1, 160, 16),0)
    # 0x140ac5e81: movlhps xmm10, xmm11
    s.simd_move('movlhps',('r', 'xmm10', 16),('r', 'xmm11', 16))
    # 0x140ac5e85: movlhps xmm0, xmm2
    s.simd_move('movlhps',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x140ac5e88: shufps xmm0, xmm1, 0x42
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm1', 16),66)
    # 0x140ac5e8c: addps xmm0, xmm10
    s.float_op('addps',('r', 'xmm0', 16),('r', 'xmm10', 16))
    # 0x140ac5e90: movaps xmm1, xmmword ptr [rip + 0x25468d9]
    s.simd_move('movaps',('r', 'xmm1', 16),('m', None, None, 1, 5419091824, 16))
    # 0x140ac5e97: unpcklps xmm1, xmm15
    s.shuffle('unpcklps',('r', 'xmm1', 16),('r', 'xmm15', 16),0)
    s.pc=5380005531
    return

def b_140ac5e9b(s):
    # 0x140ac5e9b: shufps xmm1, xmm1, 0x54
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm1', 16),84)
    # 0x140ac5e9f: mulps xmm1, xmmword ptr [rip + 0x256fffa]
    s.float_op('mulps',('r', 'xmm1', 16),('m', None, None, 1, 5419261600, 16))
    # 0x140ac5ea6: addps xmm1, xmm0
    s.float_op('addps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x140ac5ea9: movlps qword ptr [rsi + 4], xmm6
    s.simd_move('movlps',('m', 'rsi', None, 1, 4, 8),('r', 'xmm6', 16))
    # 0x140ac5ead: movups xmmword ptr [rsi + 0xc], xmm1
    s.simd_move('movups',('m', 'rsi', None, 1, 12, 16),('r', 'xmm1', 16))
    # 0x140ac5eb1: mov dword ptr [rsi], 1
    s.write(('m', 'rsi', None, 1, 0, 4),s.read(('i', 1, 4)))
    # 0x140ac5eb7: jmp 0x140ac5f8d
    s.pc=s.read(('i', 5380005773, 8))
    return

def b_140ac5ebc(s):
    # 0x140ac5ebc: movss xmm2, dword ptr [rdi + 0x14]
    s.simd_move('movss',('r', 'xmm2', 16),('m', 'rdi', None, 1, 20, 4))
    # 0x140ac5ec1: addss xmm2, dword ptr [rip + 0x25767a7]
    s.float_op('addss',('r', 'xmm2', 16),('m', None, None, 1, 5419288176, 4))
    # 0x140ac5ec9: divss xmm2, dword ptr [rip + 0x25767a3]
    s.float_op('divss',('r', 'xmm2', 16),('m', None, None, 1, 5419288180, 4))
    # 0x140ac5ed1: movss xmm4, dword ptr [rip + 0x2491cef]
    s.simd_move('movss',('r', 'xmm4', 16),('m', None, None, 1, 5418351560, 4))
    s.pc=5380005593
    return

def b_140ac5ed9(s):
    # 0x140ac5ed9: divss xmm2, dword ptr [rip + 0x2371aab]
    s.float_op('divss',('r', 'xmm2', 16),('m', None, None, 1, 5417171340, 4))
    # 0x140ac5ee1: xorps xmm3, xmm3
    s.float_op('xorps',('r', 'xmm3', 16),('r', 'xmm3', 16))
    # 0x140ac5ee4: xorps xmm9, xmm9
    s.float_op('xorps',('r', 'xmm9', 16),('r', 'xmm9', 16))
    # 0x140ac5ee8: maxss xmm9, xmm2
    s.float_op('maxss',('r', 'xmm9', 16),('r', 'xmm2', 16))
    # 0x140ac5eed: movss xmm5, dword ptr [rip + 0x2371033]
    s.simd_move('movss',('r', 'xmm5', 16),('m', None, None, 1, 5417168680, 4))
    # 0x140ac5ef5: movaps xmm10, xmm5
    s.simd_move('movaps',('r', 'xmm10', 16),('r', 'xmm5', 16))
    # 0x140ac5ef9: minss xmm10, xmm9
    s.float_op('minss',('r', 'xmm10', 16),('r', 'xmm9', 16))
    # 0x140ac5efe: movaps xmm9, xmm10
    s.simd_move('movaps',('r', 'xmm9', 16),('r', 'xmm10', 16))
    # 0x140ac5f02: mulss xmm9, xmm10
    s.float_op('mulss',('r', 'xmm9', 16),('r', 'xmm10', 16))
    # 0x140ac5f07: addss xmm10, xmm10
    s.float_op('addss',('r', 'xmm10', 16),('r', 'xmm10', 16))
    # 0x140ac5f0c: movss xmm2, dword ptr [rip + 0x2371978]
    s.simd_move('movss',('r', 'xmm2', 16),('m', None, None, 1, 5417171084, 4))
    # 0x140ac5f14: subss xmm2, xmm10
    s.float_op('subss',('r', 'xmm2', 16),('r', 'xmm10', 16))
    # 0x140ac5f19: mulss xmm2, xmm9
    s.float_op('mulss',('r', 'xmm2', 16),('r', 'xmm9', 16))
    # 0x140ac5f1e: movaps xmm9, xmm5
    s.simd_move('movaps',('r', 'xmm9', 16),('r', 'xmm5', 16))
    # 0x140ac5f22: subss xmm9, xmm2
    s.float_op('subss',('r', 'xmm9', 16),('r', 'xmm2', 16))
    # 0x140ac5f27: mulss xmm2, dword ptr [rip + 0x2371ba9]
    s.float_op('mulss',('r', 'xmm2', 16),('m', None, None, 1, 5417171672, 4))
    # 0x140ac5f2f: mulss xmm9, xmm4
    s.float_op('mulss',('r', 'xmm9', 16),('r', 'xmm4', 16))
    # 0x140ac5f34: addss xmm2, xmm9
    s.float_op('addss',('r', 'xmm2', 16),('r', 'xmm9', 16))
    # 0x140ac5f39: ucomiss xmm2, xmm3
    s.compare_float(('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x140ac5f3c: jb 0x140ac600b
    s.pc=s.read(('i', 5380005899, 8)) if s.condition('b') else 5380005698
    return

def b_140ac5f42(s):
    # 0x140ac5f42: subss xmm5, xmm1
    s.float_op('subss',('r', 'xmm5', 16),('r', 'xmm1', 16))
    # 0x140ac5f46: mulss xmm5, dword ptr [rip + 0x2371a3e]
    s.float_op('mulss',('r', 'xmm5', 16),('m', None, None, 1, 5417171340, 4))
    # 0x140ac5f4e: mulss xmm1, dword ptr [rip + 0x2371b82]
    s.float_op('mulss',('r', 'xmm1', 16),('m', None, None, 1, 5417171672, 4))
    # 0x140ac5f56: addss xmm1, xmm5
    s.float_op('addss',('r', 'xmm1', 16),('r', 'xmm5', 16))
    # 0x140ac5f5a: maxss xmm3, xmm1
    s.float_op('maxss',('r', 'xmm3', 16),('r', 'xmm1', 16))
    # 0x140ac5f5e: minss xmm2, xmm3
    s.float_op('minss',('r', 'xmm2', 16),('r', 'xmm3', 16))
    s.pc=5380005730
    return

def b_140ac5f62(s):
    # 0x140ac5f62: unpcklps xmm8, xmm7
    s.shuffle('unpcklps',('r', 'xmm8', 16),('r', 'xmm7', 16),0)
    # 0x140ac5f66: addps xmm8, xmm0
    s.float_op('addps',('r', 'xmm8', 16),('r', 'xmm0', 16))
    # 0x140ac5f6a: movsldup xmm0, xmm2
    s.simd_move('movsldup',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x140ac5f6e: mulps xmm0, xmmword ptr [rip + 0x237196b]
    s.float_op('mulps',('r', 'xmm0', 16),('m', None, None, 1, 5417171168, 16))
    # 0x140ac5f75: addps xmm8, xmm0
    s.float_op('addps',('r', 'xmm8', 16),('r', 'xmm0', 16))
    # 0x140ac5f79: addss xmm6, xmm0
    s.float_op('addss',('r', 'xmm6', 16),('r', 'xmm0', 16))
    # 0x140ac5f7d: movlps qword ptr [rsi + 4], xmm8
    s.simd_move('movlps',('m', 'rsi', None, 1, 4, 8),('r', 'xmm8', 16))
    # 0x140ac5f82: movss dword ptr [rsi + 0xc], xmm6
    s.simd_move('movss',('m', 'rsi', None, 1, 12, 4),('r', 'xmm6', 16))
    # 0x140ac5f87: mov dword ptr [rsi], 0
    s.write(('m', 'rsi', None, 1, 0, 4),s.read(('i', 0, 4)))
    s.pc=5380005773
    return

def b_140ac5f8d(s):
    # 0x140ac5f8d: mov rax, rsi
    s.write(('r', 'rax', 8),s.read(('r', 'rsi', 8)))
    # 0x140ac5f90: movaps xmm6, xmmword ptr [rsp + 0xb0]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rsp', None, 1, 176, 16))
    # 0x140ac5f98: movaps xmm7, xmmword ptr [rsp + 0xc0]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rsp', None, 1, 192, 16))
    # 0x140ac5fa0: movaps xmm8, xmmword ptr [rsp + 0xd0]
    s.simd_move('movaps',('r', 'xmm8', 16),('m', 'rsp', None, 1, 208, 16))
    # 0x140ac5fa9: movaps xmm9, xmmword ptr [rsp + 0xe0]
    s.simd_move('movaps',('r', 'xmm9', 16),('m', 'rsp', None, 1, 224, 16))
    # 0x140ac5fb2: movaps xmm10, xmmword ptr [rsp + 0xf0]
    s.simd_move('movaps',('r', 'xmm10', 16),('m', 'rsp', None, 1, 240, 16))
    # 0x140ac5fbb: movaps xmm11, xmmword ptr [rsp + 0x100]
    s.simd_move('movaps',('r', 'xmm11', 16),('m', 'rsp', None, 1, 256, 16))
    # 0x140ac5fc4: movaps xmm12, xmmword ptr [rsp + 0x110]
    s.simd_move('movaps',('r', 'xmm12', 16),('m', 'rsp', None, 1, 272, 16))
    # 0x140ac5fcd: movaps xmm13, xmmword ptr [rsp + 0x120]
    s.simd_move('movaps',('r', 'xmm13', 16),('m', 'rsp', None, 1, 288, 16))
    # 0x140ac5fd6: movaps xmm14, xmmword ptr [rsp + 0x130]
    s.simd_move('movaps',('r', 'xmm14', 16),('m', 'rsp', None, 1, 304, 16))
    # 0x140ac5fdf: movaps xmm15, xmmword ptr [rsp + 0x140]
    s.simd_move('movaps',('r', 'xmm15', 16),('m', 'rsp', None, 1, 320, 16))
    # 0x140ac5fe8: add rsp, 0x150
    s.integer('add',[('r', 'rsp', 8), ('i', 336, 8)])
    # 0x140ac5fef: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x140ac5ff0: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x140ac5ff1: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x140ac5ff2: ret 
    s.pc=s.pop()
    return

def b_140ac5ff3(s):
    # 0x140ac5ff3: lea rcx, [rip + 0x2586316]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5419352848, 8)))
    # 0x140ac5ffa: lea r8, [rip + 0x258636f]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5419352944, 8)))
    # 0x140ac6001: mov edx, 0x53
    s.write(('r', 'edx', 4),s.read(('i', 83, 4)))
    # 0x140ac6006: call 0x142dc83d0
    s.push(5380005899)
    s.pc=s.read(('i', 5416715216, 8))
    return

def b_140ac600b(s):
    # 0x140ac600b: mov dword ptr [rsp + 0x58], 0
    s.write(('m', 'rsp', None, 1, 88, 4),s.read(('i', 0, 4)))
    # 0x140ac6013: movss dword ptr [rsp + 0x60], xmm2
    s.simd_move('movss',('m', 'rsp', None, 1, 96, 4),('r', 'xmm2', 16))
    # 0x140ac6019: lea rax, [rsp + 0x58]
    s.write(('r', 'rax', 8),s.address(('m', 'rsp', None, 1, 88, 8)))
    # 0x140ac601e: mov qword ptr [rsp + 0x30], rax
    s.write(('m', 'rsp', None, 1, 48, 8),s.read(('r', 'rax', 8)))
    # 0x140ac6023: lea rax, [rip + 0x4aa5a6]
    s.write(('r', 'rax', 8),s.address(('m', None, None, 1, 5384898000, 8)))
    # 0x140ac602a: mov qword ptr [rsp + 0x38], rax
    s.write(('m', 'rsp', None, 1, 56, 8),s.read(('r', 'rax', 8)))
    # 0x140ac602f: lea rcx, [rsp + 0x60]
    s.write(('r', 'rcx', 8),s.address(('m', 'rsp', None, 1, 96, 8)))
    # 0x140ac6034: jmp 0x140ac6093
    s.pc=s.read(('i', 5380006035, 8))
    return

def b_140ac6036(s):
    # 0x140ac6036: mov dword ptr [rsp + 0x28], 0
    s.write(('m', 'rsp', None, 1, 40, 4),s.read(('i', 0, 4)))
    # 0x140ac603e: movss dword ptr [rsp + 0x2c], xmm14
    s.simd_move('movss',('m', 'rsp', None, 1, 44, 4),('r', 'xmm14', 16))
    # 0x140ac6045: jmp 0x140ac6078
    s.pc=s.read(('i', 5380006008, 8))
    return

def b_140ac6047(s):
    # 0x140ac6047: mov dword ptr [rsp + 0x28], 0
    s.write(('m', 'rsp', None, 1, 40, 4),s.read(('i', 0, 4)))
    # 0x140ac604f: movss dword ptr [rsp + 0x2c], xmm12
    s.simd_move('movss',('m', 'rsp', None, 1, 44, 4),('r', 'xmm12', 16))
    # 0x140ac6056: jmp 0x140ac6078
    s.pc=s.read(('i', 5380006008, 8))
    return

def b_140ac6058(s):
    # 0x140ac6058: mov dword ptr [rsp + 0x28], 0
    s.write(('m', 'rsp', None, 1, 40, 4),s.read(('i', 0, 4)))
    # 0x140ac6060: movss dword ptr [rsp + 0x2c], xmm10
    s.simd_move('movss',('m', 'rsp', None, 1, 44, 4),('r', 'xmm10', 16))
    # 0x140ac6067: jmp 0x140ac6078
    s.pc=s.read(('i', 5380006008, 8))
    return

def b_140ac6069(s):
    # 0x140ac6069: mov dword ptr [rsp + 0x28], 0
    s.write(('m', 'rsp', None, 1, 40, 4),s.read(('i', 0, 4)))
    # 0x140ac6071: movss dword ptr [rsp + 0x2c], xmm15
    s.simd_move('movss',('m', 'rsp', None, 1, 44, 4),('r', 'xmm15', 16))
    s.pc=5380006008
    return

def b_140ac6078(s):
    # 0x140ac6078: lea rax, [rsp + 0x28]
    s.write(('r', 'rax', 8),s.address(('m', 'rsp', None, 1, 40, 8)))
    # 0x140ac607d: mov qword ptr [rsp + 0x30], rax
    s.write(('m', 'rsp', None, 1, 48, 8),s.read(('r', 'rax', 8)))
    # 0x140ac6082: lea rax, [rip + 0x4aa547]
    s.write(('r', 'rax', 8),s.address(('m', None, None, 1, 5384898000, 8)))
    # 0x140ac6089: mov qword ptr [rsp + 0x38], rax
    s.write(('m', 'rsp', None, 1, 56, 8),s.read(('r', 'rax', 8)))
    # 0x140ac608e: lea rcx, [rsp + 0x2c]
    s.write(('r', 'rcx', 8),s.address(('m', 'rsp', None, 1, 44, 8)))
    s.pc=5380006035
    return

def b_140ac6093(s):
    # 0x140ac6093: mov qword ptr [rsp + 0x40], rcx
    s.write(('m', 'rsp', None, 1, 64, 8),s.read(('r', 'rcx', 8)))
    # 0x140ac6098: mov qword ptr [rsp + 0x48], rax
    s.write(('m', 'rsp', None, 1, 72, 8),s.read(('r', 'rax', 8)))
    # 0x140ac609d: lea rcx, [rip + 0x2595eb8]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5419417436, 8)))
    # 0x140ac60a4: lea r8, [rip + 0x2595f4d]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5419417592, 8)))
    # 0x140ac60ab: lea rdx, [rsp + 0x30]
    s.write(('r', 'rdx', 8),s.address(('m', 'rsp', None, 1, 48, 8)))
    # 0x140ac60b0: call 0x142dc83d0
    s.push(5380006069)
    s.pc=s.read(('i', 5416715216, 8))
    return

def b_140ac60b5(s):
    # 0x140ac60b5: int3 
    raise RuntimeError('Original unreachable/panic 0x140ac60b5')
    s.pc=5380006070
    return

def b_140ac6110(s):
    # 0x140ac6110: cmp dword ptr [rcx + 8], 1
    s.integer('cmp',[('m', 'rcx', None, 1, 8, 4), ('i', 1, 4)])
    # 0x140ac6114: jne 0x140ac616c
    s.pc=s.read(('i', 5380006252, 8)) if s.condition('ne') else 5380006166
    return

def b_140ac6116(s):
    # 0x140ac6116: movss xmm0, dword ptr [rcx + 0x34]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rcx', None, 1, 52, 4))
    # 0x140ac611b: lea rax, [rcx + 0x1c]
    s.write(('r', 'rax', 8),s.address(('m', 'rcx', None, 1, 28, 8)))
    # 0x140ac611f: movzx edx, byte ptr [rcx + 0x3c]
    s.write(('r', 'edx', 4),s.read(('m', 'rcx', None, 1, 60, 1)))
    # 0x140ac6123: add rcx, 0x20
    s.integer('add',[('r', 'rcx', 8), ('i', 32, 8)])
    # 0x140ac6127: test dl, dl
    s.integer('test',[('r', 'dl', 1), ('r', 'dl', 1)])
    # 0x140ac6129: cmove rcx, rax
    s.write(('r', 'rcx', 8),s.read(('r', 'rax', 8))) if s.condition('e') else None
    # 0x140ac612d: movss xmm1, dword ptr [rip + 0x2370df3]
    s.simd_move('movss',('r', 'xmm1', 16),('m', None, None, 1, 5417168680, 4))
    # 0x140ac6135: subss xmm1, xmm0
    s.float_op('subss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x140ac6139: mulss xmm1, dword ptr [rip + 0x2375097]
    s.float_op('mulss',('r', 'xmm1', 16),('m', None, None, 1, 5417185752, 4))
    # 0x140ac6141: mulss xmm0, dword ptr [rcx]
    s.float_op('mulss',('r', 'xmm0', 16),('m', 'rcx', None, 1, 0, 4))
    # 0x140ac6145: addss xmm0, xmm1
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x140ac6149: movd ecx, xmm0
    s.simd_move('movd',('r', 'ecx', 4),('r', 'xmm0', 16))
    # 0x140ac614d: movabs rax, 0x3dcccccd00000000
    s.write(('r', 'rax', 8),s.read(('i', 4453159312402939904, 8)))
    # 0x140ac6157: or rax, rcx
    s.integer('or',[('r', 'rax', 8), ('r', 'rcx', 8)])
    # 0x140ac615a: shl rcx, 0x20
    s.integer('shl',[('r', 'rcx', 8), ('i', 32, 1)])
    # 0x140ac615e: or rcx, 0x3dcccccd
    s.integer('or',[('r', 'rcx', 8), ('i', 1036831949, 8)])
    # 0x140ac6165: test dl, dl
    s.integer('test',[('r', 'dl', 1), ('r', 'dl', 1)])
    # 0x140ac6167: cmovne rax, rcx
    s.write(('r', 'rax', 8),s.read(('r', 'rcx', 8))) if s.condition('ne') else None
    # 0x140ac616b: ret 
    s.pc=s.pop()
    return

def b_140ac616c(s):
    # 0x140ac616c: movabs rax, 0x3dcccccd3dcccccd
    s.write(('r', 'rax', 8),s.read(('i', 4453159313439771853, 8)))
    # 0x140ac6176: ret 
    s.pc=s.pop()
    return

def b_140ac6200(s):
    # 0x140ac6200: movaps xmm0, xmm1
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x140ac6203: cmp byte ptr [rcx + 8], 0
    s.integer('cmp',[('m', 'rcx', None, 1, 8, 1), ('i', 0, 1)])
    # 0x140ac6207: jne 0x140ac6217
    s.pc=s.read(('i', 5380006423, 8)) if s.condition('ne') else 5380006409
    return

def b_140ac6209(s):
    # 0x140ac6209: movss xmm1, dword ptr [rcx + 0x14]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rcx', None, 1, 20, 4))
    # 0x140ac620e: addss xmm1, xmm1
    s.float_op('addss',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x140ac6212: movaps xmm3, xmm1
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm1', 16))
    # 0x140ac6215: jmp 0x140ac6221
    s.pc=s.read(('i', 5380006433, 8))
    return

def b_140ac6217(s):
    # 0x140ac6217: movss xmm1, dword ptr [rcx + 0x1c]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rcx', None, 1, 28, 4))
    # 0x140ac621c: movss xmm3, dword ptr [rcx + 0x20]
    s.simd_move('movss',('r', 'xmm3', 16),('m', 'rcx', None, 1, 32, 4))
    s.pc=5380006433
    return

def b_140ac6221(s):
    # 0x140ac6221: mulss xmm1, dword ptr [rcx + 0x24]
    s.float_op('mulss',('r', 'xmm1', 16),('m', 'rcx', None, 1, 36, 4))
    # 0x140ac6226: mulss xmm3, dword ptr [rcx + 0x28]
    s.float_op('mulss',('r', 'xmm3', 16),('m', 'rcx', None, 1, 40, 4))
    # 0x140ac622b: mulss xmm0, xmm1
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x140ac622f: mulss xmm2, xmm3
    s.float_op('mulss',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x140ac6233: movaps xmm1, xmm2
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x140ac6236: ret 
    s.pc=s.pop()
    return

def b_140b73b00(s):
    # 0x140b73b00: sub rsp, 0x28
    s.integer('sub',[('r', 'rsp', 8), ('i', 40, 8)])
    # 0x140b73b04: cmp dword ptr [rdx], 1
    s.integer('cmp',[('m', 'rdx', None, 1, 0, 4), ('i', 1, 4)])
    # 0x140b73b07: jne 0x140b73b18
    s.pc=s.read(('i', 5380717336, 8)) if s.condition('ne') else 5380717321
    return

def b_140b73b09(s):
    # 0x140b73b09: movups xmm0, xmmword ptr [rdx + 4]
    s.simd_move('movups',('r', 'xmm0', 16),('m', 'rdx', None, 1, 4, 16))
    # 0x140b73b0d: movups xmmword ptr [rcx], xmm0
    s.simd_move('movups',('m', 'rcx', None, 1, 0, 16),('r', 'xmm0', 16))
    # 0x140b73b10: mov rax, rcx
    s.write(('r', 'rax', 8),s.read(('r', 'rcx', 8)))
    # 0x140b73b13: add rsp, 0x28
    s.integer('add',[('r', 'rsp', 8), ('i', 40, 8)])
    # 0x140b73b17: ret 
    s.pc=s.pop()
    return

def b_140b73b18(s):
    # 0x140b73b18: lea rcx, [rip + 0x24e7b9f]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5419415230, 8)))
    # 0x140b73b1f: lea r8, [rip + 0x24e7e62]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5419415944, 8)))
    # 0x140b73b26: mov edx, 0x28
    s.write(('r', 'edx', 4),s.read(('i', 40, 4)))
    # 0x140b73b2b: call 0x142dc83b0
    s.push(5380717360)
    s.pc=s.read(('i', 5416715184, 8))
    return

def b_140b73b30(s):
    # 0x140b73b30: int3 
    raise RuntimeError('Original unreachable/panic 0x140b73b30')
    s.pc=5380717361
    return

def b_140b73b40(s):
    # 0x140b73b40: sub rsp, 0x28
    s.integer('sub',[('r', 'rsp', 8), ('i', 40, 8)])
    # 0x140b73b44: cmp dword ptr [rcx], 1
    s.integer('cmp',[('m', 'rcx', None, 1, 0, 4), ('i', 1, 4)])
    # 0x140b73b47: je 0x140b73b58
    s.pc=s.read(('i', 5380717400, 8)) if s.condition('e') else 5380717385
    return

def b_140b73b49(s):
    # 0x140b73b49: movss xmm0, dword ptr [rcx + 4]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rcx', None, 1, 4, 4))
    # 0x140b73b4e: movss xmm1, dword ptr [rcx + 8]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rcx', None, 1, 8, 4))
    # 0x140b73b53: add rsp, 0x28
    s.integer('add',[('r', 'rsp', 8), ('i', 40, 8)])
    # 0x140b73b57: ret 
    s.pc=s.pop()
    return

def b_140b73b58(s):
    # 0x140b73b58: lea rcx, [rip + 0x24e7b5f]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5419415230, 8)))
    # 0x140b73b5f: lea r8, [rip + 0x24e7e3a]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5419415968, 8)))
    # 0x140b73b66: mov edx, 0x28
    s.write(('r', 'edx', 4),s.read(('i', 40, 4)))
    # 0x140b73b6b: call 0x142dc83b0
    s.push(5380717424)
    s.pc=s.read(('i', 5416715184, 8))
    return

def b_140b73b70(s):
    # 0x140b73b70: int3 
    raise RuntimeError('Original unreachable/panic 0x140b73b70')
    s.pc=5380717425
    return

def b_140b73b80(s):
    # 0x140b73b80: mov rax, rcx
    s.write(('r', 'rax', 8),s.read(('r', 'rcx', 8)))
    # 0x140b73b83: cmp dword ptr [rdx + 8], 1
    s.integer('cmp',[('m', 'rdx', None, 1, 8, 4), ('i', 1, 4)])
    # 0x140b73b87: jne 0x140b73ba0
    s.pc=s.read(('i', 5380717472, 8)) if s.condition('ne') else 5380717449
    return

def b_140b73b89(s):
    # 0x140b73b89: movsd xmm0, qword ptr [rdx + 0x1c]
    s.simd_move('movsd',('r', 'xmm0', 16),('m', 'rdx', None, 1, 28, 8))
    # 0x140b73b8e: movss xmm1, dword ptr [rdx + 0x34]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rdx', None, 1, 52, 4))
    # 0x140b73b93: movzx ecx, byte ptr [rdx + 0x3c]
    s.write(('r', 'ecx', 4),s.read(('m', 'rdx', None, 1, 60, 1)))
    # 0x140b73b97: test cl, cl
    s.integer('test',[('r', 'cl', 1), ('r', 'cl', 1)])
    # 0x140b73b99: jne 0x140b73c0e
    s.pc=s.read(('i', 5380717582, 8)) if s.condition('ne') else 5380717467
    return

def b_140b73b9b(s):
    # 0x140b73b9b: movaps xmm2, xmm0
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x140b73b9e: jmp 0x140b73c12
    s.pc=s.read(('i', 5380717586, 8))
    return

def b_140b73ba0(s):
    # 0x140b73ba0: movss xmm0, dword ptr [rdx + 0x2c]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rdx', None, 1, 44, 4))
    # 0x140b73ba5: movss xmm1, dword ptr [rdx + 0x38]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rdx', None, 1, 56, 4))
    # 0x140b73baa: movss xmm2, dword ptr [rip + 0x22c3c86]
    s.simd_move('movss',('r', 'xmm2', 16),('m', None, None, 1, 5417171000, 4))
    # 0x140b73bb2: mulss xmm2, xmm1
    s.float_op('mulss',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x140b73bb6: sqrtss xmm0, xmm0
    s.float_op('sqrtss',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x140b73bba: unpcklps xmm1, xmm0
    s.shuffle('unpcklps',('r', 'xmm1', 16),('r', 'xmm0', 16),0)
    # 0x140b73bbd: movaps xmm0, xmmword ptr [rip + 0x22c3d8c]
    s.simd_move('movaps',('r', 'xmm0', 16),('m', None, None, 1, 5417171280, 16))
    # 0x140b73bc4: subps xmm0, xmm1
    s.float_op('subps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x140b73bc7: mulps xmm0, xmmword ptr [rip + 0x2415a72]
    s.float_op('mulps',('r', 'xmm0', 16),('m', None, None, 1, 5418554944, 16))
    # 0x140b73bce: movss xmm1, xmm2
    s.simd_move('movss',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x140b73bd2: addps xmm1, xmm0
    s.float_op('addps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x140b73bd5: movshdup xmm0, xmm1
    s.simd_move('movshdup',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x140b73bd9: mulss xmm0, xmm1
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x140b73bdd: mulss xmm0, dword ptr [rip + 0x22c3dab]
    s.float_op('mulss',('r', 'xmm0', 16),('m', None, None, 1, 5417171344, 4))
    # 0x140b73be5: addss xmm0, dword ptr [rip + 0x2497553]
    s.float_op('addss',('r', 'xmm0', 16),('m', None, None, 1, 5419086144, 4))
    # 0x140b73bed: mulss xmm0, dword ptr [rip + 0x22c335b]
    s.float_op('mulss',('r', 'xmm0', 16),('m', None, None, 1, 5417168720, 4))
    # 0x140b73bf5: addss xmm0, dword ptr [rdx + 0x14]
    s.float_op('addss',('r', 'xmm0', 16),('m', 'rdx', None, 1, 20, 4))
    # 0x140b73bfa: movaps xmm1, xmmword ptr [rip + 0x23f6a2f]
    s.simd_move('movaps',('r', 'xmm1', 16),('m', None, None, 1, 5418427952, 16))
    # 0x140b73c01: movss xmm1, xmm0
    s.simd_move('movss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x140b73c05: xor ecx, ecx
    s.integer('xor',[('r', 'ecx', 4), ('r', 'ecx', 4)])
    # 0x140b73c07: movlps qword ptr [rax + 4], xmm1
    s.simd_move('movlps',('m', 'rax', None, 1, 4, 8),('r', 'xmm1', 16))
    # 0x140b73c0b: mov dword ptr [rax], ecx
    s.write(('m', 'rax', None, 1, 0, 4),s.read(('r', 'ecx', 4)))
    # 0x140b73c0d: ret 
    s.pc=s.pop()
    return

def b_140b73c0e(s):
    # 0x140b73c0e: movshdup xmm2, xmm0
    s.simd_move('movshdup',('r', 'xmm2', 16),('r', 'xmm0', 16))
    s.pc=5380717586
    return

def b_140b73c12(s):
    # 0x140b73c12: movss xmm3, dword ptr [rip + 0x22c330e]
    s.simd_move('movss',('r', 'xmm3', 16),('m', None, None, 1, 5417168680, 4))
    # 0x140b73c1a: subss xmm3, xmm1
    s.float_op('subss',('r', 'xmm3', 16),('r', 'xmm1', 16))
    # 0x140b73c1e: mulss xmm3, dword ptr [rip + 0x22c75b2]
    s.float_op('mulss',('r', 'xmm3', 16),('m', None, None, 1, 5417185752, 4))
    # 0x140b73c26: mulss xmm2, xmm1
    s.float_op('mulss',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x140b73c2a: addss xmm2, xmm3
    s.float_op('addss',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x140b73c2e: movd r9d, xmm2
    s.simd_move('movd',('r', 'r9d', 4),('r', 'xmm2', 16))
    # 0x140b73c33: movabs r8, 0x3dcccccd00000000
    s.write(('r', 'r8', 8),s.read(('i', 4453159312402939904, 8)))
    # 0x140b73c3d: or r8, r9
    s.integer('or',[('r', 'r8', 8), ('r', 'r9', 8)])
    # 0x140b73c40: shl r9, 0x20
    s.integer('shl',[('r', 'r9', 8), ('i', 32, 1)])
    # 0x140b73c44: or r9, 0x3dcccccd
    s.integer('or',[('r', 'r9', 8), ('i', 1036831949, 8)])
    # 0x140b73c4b: test cl, cl
    s.integer('test',[('r', 'cl', 1), ('r', 'cl', 1)])
    # 0x140b73c4d: movss xmm1, dword ptr [rdx + 0x38]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rdx', None, 1, 56, 4))
    # 0x140b73c52: movss xmm2, dword ptr [rip + 0x22c3bde]
    s.simd_move('movss',('r', 'xmm2', 16),('m', None, None, 1, 5417171000, 4))
    # 0x140b73c5a: mulss xmm2, xmm1
    s.float_op('mulss',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x140b73c5e: movss xmm3, dword ptr [rdx + 0x2c]
    s.simd_move('movss',('r', 'xmm3', 16),('m', 'rdx', None, 1, 44, 4))
    # 0x140b73c63: sqrtss xmm3, xmm3
    s.float_op('sqrtss',('r', 'xmm3', 16),('r', 'xmm3', 16))
    # 0x140b73c67: unpcklps xmm1, xmm3
    s.shuffle('unpcklps',('r', 'xmm1', 16),('r', 'xmm3', 16),0)
    # 0x140b73c6a: movaps xmm3, xmmword ptr [rip + 0x22c3cdf]
    s.simd_move('movaps',('r', 'xmm3', 16),('m', None, None, 1, 5417171280, 16))
    # 0x140b73c71: subps xmm3, xmm1
    s.float_op('subps',('r', 'xmm3', 16),('r', 'xmm1', 16))
    # 0x140b73c74: mulps xmm3, xmmword ptr [rip + 0x24159c5]
    s.float_op('mulps',('r', 'xmm3', 16),('m', None, None, 1, 5418554944, 16))
    # 0x140b73c7b: movss xmm1, xmm2
    s.simd_move('movss',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x140b73c7f: addps xmm1, xmm3
    s.float_op('addps',('r', 'xmm1', 16),('r', 'xmm3', 16))
    # 0x140b73c82: addps xmm0, xmmword ptr [rip + 0x24974a7]
    s.float_op('addps',('r', 'xmm0', 16),('m', None, None, 1, 5419086128, 16))
    # 0x140b73c89: movsldup xmm2, xmm1
    s.simd_move('movsldup',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x140b73c8d: movshdup xmm1, xmm1
    s.simd_move('movshdup',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x140b73c91: mulps xmm1, xmm2
    s.float_op('mulps',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x140b73c94: addps xmm1, xmm0
    s.float_op('addps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x140b73c97: cmovne r8, r9
    s.write(('r', 'r8', 8),s.read(('r', 'r9', 8))) if s.condition('ne') else None
    # 0x140b73c9b: mov qword ptr [rax + 0xc], r8
    s.write(('m', 'rax', None, 1, 12, 8),s.read(('r', 'r8', 8)))
    # 0x140b73c9f: mov ecx, 1
    s.write(('r', 'ecx', 4),s.read(('i', 1, 4)))
    # 0x140b73ca4: movlps qword ptr [rax + 4], xmm1
    s.simd_move('movlps',('m', 'rax', None, 1, 4, 8),('r', 'xmm1', 16))
    # 0x140b73ca8: mov dword ptr [rax], ecx
    s.write(('m', 'rax', None, 1, 0, 4),s.read(('r', 'ecx', 4)))
    # 0x140b73caa: ret 
    s.pc=s.pop()
    return

def b_140b76870(s):
    # 0x140b76870: movss xmm0, dword ptr [rcx + 8]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rcx', None, 1, 8, 4))
    # 0x140b76875: movss xmm1, dword ptr [rcx + 0x14]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rcx', None, 1, 20, 4))
    # 0x140b7687a: movss xmm2, dword ptr [rip + 0x22c0fb6]
    s.simd_move('movss',('r', 'xmm2', 16),('m', None, None, 1, 5417171000, 4))
    # 0x140b76882: mulss xmm2, xmm1
    s.float_op('mulss',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x140b76886: sqrtss xmm0, xmm0
    s.float_op('sqrtss',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x140b7688a: unpcklps xmm1, xmm0
    s.shuffle('unpcklps',('r', 'xmm1', 16),('r', 'xmm0', 16),0)
    # 0x140b7688d: movaps xmm0, xmmword ptr [rip + 0x22c10bc]
    s.simd_move('movaps',('r', 'xmm0', 16),('m', None, None, 1, 5417171280, 16))
    # 0x140b76894: subps xmm0, xmm1
    s.float_op('subps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x140b76897: mulps xmm0, xmmword ptr [rip + 0x2412da2]
    s.float_op('mulps',('r', 'xmm0', 16),('m', None, None, 1, 5418554944, 16))
    # 0x140b7689e: movss xmm1, xmm2
    s.simd_move('movss',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x140b768a2: addps xmm1, xmm0
    s.float_op('addps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x140b768a5: movshdup xmm0, xmm1
    s.simd_move('movshdup',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x140b768a9: mulss xmm0, xmm1
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x140b768ad: ret 
    s.pc=s.pop()
    return

def b_140b768b0(s):
    # 0x140b768b0: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x140b768b2: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x140b768b3: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x140b768b4: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x140b768b5: sub rsp, 0xc8
    s.integer('sub',[('r', 'rsp', 8), ('i', 200, 8)])
    # 0x140b768bc: movaps xmmword ptr [rsp + 0xb0], xmm9
    s.simd_move('movaps',('m', 'rsp', None, 1, 176, 16),('r', 'xmm9', 16))
    # 0x140b768c5: movaps xmmword ptr [rsp + 0xa0], xmm8
    s.simd_move('movaps',('m', 'rsp', None, 1, 160, 16),('r', 'xmm8', 16))
    # 0x140b768ce: movaps xmmword ptr [rsp + 0x90], xmm7
    s.simd_move('movaps',('m', 'rsp', None, 1, 144, 16),('r', 'xmm7', 16))
    # 0x140b768d6: movaps xmmword ptr [rsp + 0x80], xmm6
    s.simd_move('movaps',('m', 'rsp', None, 1, 128, 16),('r', 'xmm6', 16))
    # 0x140b768de: mov rsi, rcx
    s.write(('r', 'rsi', 8),s.read(('r', 'rcx', 8)))
    # 0x140b768e1: mov rbx, qword ptr [rdx + 0x10]
    s.write(('r', 'rbx', 8),s.read(('m', 'rdx', None, 1, 16, 8)))
    # 0x140b768e5: test rbx, rbx
    s.integer('test',[('r', 'rbx', 8), ('r', 'rbx', 8)])
    # 0x140b768e8: je 0x140b76a0b
    s.pc=s.read(('i', 5380729355, 8)) if s.condition('e') else 5380729070
    return

def b_140b768ee(s):
    # 0x140b768ee: movaps xmm6, xmm3
    s.simd_move('movaps',('r', 'xmm6', 16),('r', 'xmm3', 16))
    # 0x140b768f1: movaps xmm7, xmm2
    s.simd_move('movaps',('r', 'xmm7', 16),('r', 'xmm2', 16))
    # 0x140b768f4: mov r14, qword ptr [rdx + 8]
    s.write(('r', 'r14', 8),s.read(('m', 'rdx', None, 1, 8, 8)))
    # 0x140b768f8: lea rdi, [rbx*8]
    s.write(('r', 'rdi', 8),s.address(('m', None, 'rbx', 8, 0, 8)))
    # 0x140b76900: call 0x14007ee60
    s.push(5380729093)
    s.pc=s.read(('i', 5369228896, 8))
    return

def b_140b76905(s):
    # 0x140b76905: mov edx, 4
    s.write(('r', 'edx', 4),s.read(('i', 4, 4)))
    # 0x140b7690a: mov rcx, rdi
    s.write(('r', 'rcx', 8),s.read(('r', 'rdi', 8)))
    # 0x140b7690d: call 0x1406abab0
    s.push(5380729106)
    s.pc=s.read(('i', 5375703728, 8))
    return

def b_140b76912(s):
    # 0x140b76912: test rax, rax
    s.integer('test',[('r', 'rax', 8), ('r', 'rax', 8)])
    # 0x140b76915: je 0x140b76b51
    s.pc=s.read(('i', 5380729681, 8)) if s.condition('e') else 5380729115
    return

def b_140b7691b(s):
    # 0x140b7691b: movss xmm0, dword ptr [rsp + 0x110]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rsp', None, 1, 272, 4))
    # 0x140b76924: cmp rbx, 4
    s.integer('cmp',[('r', 'rbx', 8), ('i', 4, 8)])
    # 0x140b76928: jb 0x140b76946
    s.pc=s.read(('i', 5380729158, 8)) if s.condition('b') else 5380729130
    return

def b_140b7692a(s):
    # 0x140b7692a: lea rcx, [rax + rbx*8]
    s.write(('r', 'rcx', 8),s.address(('m', 'rax', 'rbx', 8, 0, 8)))
    # 0x140b7692e: lea rdx, [r14 + rbx*8]
    s.write(('r', 'rdx', 8),s.address(('m', 'r14', 'rbx', 8, 0, 8)))
    # 0x140b76932: cmp rax, rdx
    s.integer('cmp',[('r', 'rax', 8), ('r', 'rdx', 8)])
    # 0x140b76935: setb dl
    s.write(('r', 'dl', 1),int(s.condition('b')))
    # 0x140b76938: cmp r14, rcx
    s.integer('cmp',[('r', 'r14', 8), ('r', 'rcx', 8)])
    # 0x140b7693b: setb cl
    s.write(('r', 'cl', 1),int(s.condition('b')))
    # 0x140b7693e: test dl, cl
    s.integer('test',[('r', 'dl', 1), ('r', 'cl', 1)])
    # 0x140b76940: je 0x140b76a93
    s.pc=s.read(('i', 5380729491, 8)) if s.condition('e') else 5380729158
    return

def b_140b76946(s):
    # 0x140b76946: xor ecx, ecx
    s.integer('xor',[('r', 'ecx', 4), ('r', 'ecx', 4)])
    s.pc=5380729160
    return

def b_140b76948(s):
    # 0x140b76948: mov rdx, rcx
    s.write(('r', 'rdx', 8),s.read(('r', 'rcx', 8)))
    # 0x140b7694b: or rdx, 1
    s.integer('or',[('r', 'rdx', 8), ('i', 1, 8)])
    # 0x140b7694f: test bl, 1
    s.integer('test',[('r', 'bl', 1), ('i', 1, 1)])
    # 0x140b76952: je 0x140b7698b
    s.pc=s.read(('i', 5380729227, 8)) if s.condition('e') else 5380729172
    return

def b_140b76954(s):
    # 0x140b76954: movss xmm1, dword ptr [r14 + rcx*8]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'r14', 'rcx', 8, 0, 4))
    # 0x140b7695a: movss xmm2, dword ptr [rip + 0x22c05c6]
    s.simd_move('movss',('r', 'xmm2', 16),('m', None, None, 1, 5417168680, 4))
    # 0x140b76962: subss xmm2, xmm1
    s.float_op('subss',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x140b76966: mulss xmm2, xmm7
    s.float_op('mulss',('r', 'xmm2', 16),('r', 'xmm7', 16))
    # 0x140b7696a: mulss xmm1, xmm6
    s.float_op('mulss',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x140b7696e: addss xmm1, xmm2
    s.float_op('addss',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x140b76972: movss xmm2, dword ptr [r14 + rcx*8 + 4]
    s.simd_move('movss',('r', 'xmm2', 16),('m', 'r14', 'rcx', 8, 4, 4))
    # 0x140b76979: mulss xmm2, xmm0
    s.float_op('mulss',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x140b7697d: movss dword ptr [rax + rcx*8], xmm1
    s.simd_move('movss',('m', 'rax', 'rcx', 8, 0, 4),('r', 'xmm1', 16))
    # 0x140b76982: movss dword ptr [rax + rcx*8 + 4], xmm2
    s.simd_move('movss',('m', 'rax', 'rcx', 8, 4, 4),('r', 'xmm2', 16))
    # 0x140b76988: mov rcx, rdx
    s.write(('r', 'rcx', 8),s.read(('r', 'rdx', 8)))
    s.pc=5380729227
    return

def b_140b7698b(s):
    # 0x140b7698b: cmp rbx, rdx
    s.integer('cmp',[('r', 'rbx', 8), ('r', 'rdx', 8)])
    # 0x140b7698e: je 0x140b76a10
    s.pc=s.read(('i', 5380729360, 8)) if s.condition('e') else 5380729236
    return

def b_140b76994(s):
    # 0x140b76994: movss xmm1, dword ptr [rip + 0x22c058c]
    s.simd_move('movss',('r', 'xmm1', 16),('m', None, None, 1, 5417168680, 4))
    # 0x140b7699c: nop dword ptr [rax]
    s.pc=5380729248
    return

def b_140b769a0(s):
    # 0x140b769a0: movss xmm2, dword ptr [r14 + rcx*8]
    s.simd_move('movss',('r', 'xmm2', 16),('m', 'r14', 'rcx', 8, 0, 4))
    # 0x140b769a6: movaps xmm3, xmm1
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm1', 16))
    # 0x140b769a9: subss xmm3, xmm2
    s.float_op('subss',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x140b769ad: mulss xmm3, xmm7
    s.float_op('mulss',('r', 'xmm3', 16),('r', 'xmm7', 16))
    # 0x140b769b1: mulss xmm2, xmm6
    s.float_op('mulss',('r', 'xmm2', 16),('r', 'xmm6', 16))
    # 0x140b769b5: addss xmm2, xmm3
    s.float_op('addss',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x140b769b9: movss xmm3, dword ptr [r14 + rcx*8 + 4]
    s.simd_move('movss',('r', 'xmm3', 16),('m', 'r14', 'rcx', 8, 4, 4))
    # 0x140b769c0: mulss xmm3, xmm0
    s.float_op('mulss',('r', 'xmm3', 16),('r', 'xmm0', 16))
    # 0x140b769c4: movss dword ptr [rax + rcx*8], xmm2
    s.simd_move('movss',('m', 'rax', 'rcx', 8, 0, 4),('r', 'xmm2', 16))
    # 0x140b769c9: movss dword ptr [rax + rcx*8 + 4], xmm3
    s.simd_move('movss',('m', 'rax', 'rcx', 8, 4, 4),('r', 'xmm3', 16))
    # 0x140b769cf: movss xmm2, dword ptr [r14 + rcx*8 + 8]
    s.simd_move('movss',('r', 'xmm2', 16),('m', 'r14', 'rcx', 8, 8, 4))
    # 0x140b769d6: movaps xmm3, xmm1
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm1', 16))
    # 0x140b769d9: subss xmm3, xmm2
    s.float_op('subss',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x140b769dd: mulss xmm3, xmm7
    s.float_op('mulss',('r', 'xmm3', 16),('r', 'xmm7', 16))
    # 0x140b769e1: mulss xmm2, xmm6
    s.float_op('mulss',('r', 'xmm2', 16),('r', 'xmm6', 16))
    # 0x140b769e5: addss xmm2, xmm3
    s.float_op('addss',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x140b769e9: movss xmm3, dword ptr [r14 + rcx*8 + 0xc]
    s.simd_move('movss',('r', 'xmm3', 16),('m', 'r14', 'rcx', 8, 12, 4))
    # 0x140b769f0: mulss xmm3, xmm0
    s.float_op('mulss',('r', 'xmm3', 16),('r', 'xmm0', 16))
    # 0x140b769f4: movss dword ptr [rax + rcx*8 + 8], xmm2
    s.simd_move('movss',('m', 'rax', 'rcx', 8, 8, 4),('r', 'xmm2', 16))
    # 0x140b769fa: movss dword ptr [rax + rcx*8 + 0xc], xmm3
    s.simd_move('movss',('m', 'rax', 'rcx', 8, 12, 4),('r', 'xmm3', 16))
    # 0x140b76a00: add rcx, 2
    s.integer('add',[('r', 'rcx', 8), ('i', 2, 8)])
    # 0x140b76a04: cmp rbx, rcx
    s.integer('cmp',[('r', 'rbx', 8), ('r', 'rcx', 8)])
    # 0x140b76a07: jne 0x140b769a0
    s.pc=s.read(('i', 5380729248, 8)) if s.condition('ne') else 5380729353
    return

def b_140b76a09(s):
    # 0x140b76a09: jmp 0x140b76a10
    s.pc=s.read(('i', 5380729360, 8))
    return

def b_140b76a0b(s):
    # 0x140b76a0b: mov eax, 4
    s.write(('r', 'eax', 4),s.read(('i', 4, 4)))
    s.pc=5380729360
    return

def b_140b76a10(s):
    # 0x140b76a10: mov qword ptr [rsp + 0x30], rbx
    s.write(('m', 'rsp', None, 1, 48, 8),s.read(('r', 'rbx', 8)))
    # 0x140b76a15: mov qword ptr [rsp + 0x38], rax
    s.write(('m', 'rsp', None, 1, 56, 8),s.read(('r', 'rax', 8)))
    # 0x140b76a1a: mov qword ptr [rsp + 0x40], rbx
    s.write(('m', 'rsp', None, 1, 64, 8),s.read(('r', 'rbx', 8)))
    # 0x140b76a1f: lea rcx, [rsp + 0x48]
    s.write(('r', 'rcx', 8),s.address(('m', 'rsp', None, 1, 72, 8)))
    # 0x140b76a24: lea rdx, [rsp + 0x30]
    s.write(('r', 'rdx', 8),s.address(('m', 'rsp', None, 1, 48, 8)))
    # 0x140b76a29: xor edi, edi
    s.integer('xor',[('r', 'edi', 4), ('r', 'edi', 4)])
    # 0x140b76a2b: xor r8d, r8d
    s.integer('xor',[('r', 'r8d', 4), ('r', 'r8d', 4)])
    # 0x140b76a2e: call 0x140080c90
    s.push(5380729395)
    s.pc=s.read(('i', 5369236624, 8))
    return

def b_140b76a33(s):
    # 0x140b76a33: cmp rdi, qword ptr [rsp + 0x48]
    s.integer('cmp',[('r', 'rdi', 8), ('m', 'rsp', None, 1, 72, 8)])
    # 0x140b76a38: jo 0x140b76b1e
    s.pc=s.read(('i', 5380729630, 8)) if s.condition('o') else 5380729406
    return

def b_140b76a3e(s):
    # 0x140b76a3e: mov rax, qword ptr [rsp + 0x78]
    s.write(('r', 'rax', 8),s.read(('m', 'rsp', None, 1, 120, 8)))
    # 0x140b76a43: mov qword ptr [rsi + 0x30], rax
    s.write(('m', 'rsi', None, 1, 48, 8),s.read(('r', 'rax', 8)))
    # 0x140b76a47: movups xmm0, xmmword ptr [rsp + 0x48]
    s.simd_move('movups',('r', 'xmm0', 16),('m', 'rsp', None, 1, 72, 16))
    # 0x140b76a4c: movups xmm1, xmmword ptr [rsp + 0x58]
    s.simd_move('movups',('r', 'xmm1', 16),('m', 'rsp', None, 1, 88, 16))
    # 0x140b76a51: movups xmm2, xmmword ptr [rsp + 0x68]
    s.simd_move('movups',('r', 'xmm2', 16),('m', 'rsp', None, 1, 104, 16))
    # 0x140b76a56: movups xmmword ptr [rsi + 0x20], xmm2
    s.simd_move('movups',('m', 'rsi', None, 1, 32, 16),('r', 'xmm2', 16))
    # 0x140b76a5a: movups xmmword ptr [rsi + 0x10], xmm1
    s.simd_move('movups',('m', 'rsi', None, 1, 16, 16),('r', 'xmm1', 16))
    # 0x140b76a5e: movups xmmword ptr [rsi], xmm0
    s.simd_move('movups',('m', 'rsi', None, 1, 0, 16),('r', 'xmm0', 16))
    # 0x140b76a61: mov rax, rsi
    s.write(('r', 'rax', 8),s.read(('r', 'rsi', 8)))
    # 0x140b76a64: movaps xmm6, xmmword ptr [rsp + 0x80]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rsp', None, 1, 128, 16))
    # 0x140b76a6c: movaps xmm7, xmmword ptr [rsp + 0x90]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rsp', None, 1, 144, 16))
    # 0x140b76a74: movaps xmm8, xmmword ptr [rsp + 0xa0]
    s.simd_move('movaps',('r', 'xmm8', 16),('m', 'rsp', None, 1, 160, 16))
    # 0x140b76a7d: movaps xmm9, xmmword ptr [rsp + 0xb0]
    s.simd_move('movaps',('r', 'xmm9', 16),('m', 'rsp', None, 1, 176, 16))
    # 0x140b76a86: add rsp, 0xc8
    s.integer('add',[('r', 'rsp', 8), ('i', 200, 8)])
    # 0x140b76a8d: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x140b76a8e: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x140b76a8f: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x140b76a90: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x140b76a92: ret 
    s.pc=s.pop()
    return

def b_140b76a93(s):
    # 0x140b76a93: mov rcx, rbx
    s.write(('r', 'rcx', 8),s.read(('r', 'rbx', 8)))
    # 0x140b76a96: and rcx, 0xfffffffffffffffc
    s.integer('and',[('r', 'rcx', 8), ('i', -4, 8)])
    # 0x140b76a9a: movaps xmm1, xmm7
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm7', 16))
    # 0x140b76a9d: shufps xmm1, xmm7, 0
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm7', 16),0)
    # 0x140b76aa1: movaps xmm2, xmm6
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm6', 16))
    # 0x140b76aa4: shufps xmm2, xmm6, 0
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm6', 16),0)
    # 0x140b76aa8: movaps xmm3, xmm0
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm0', 16))
    # 0x140b76aab: shufps xmm3, xmm0, 0
    s.shuffle('shufps',('r', 'xmm3', 16),('r', 'xmm0', 16),0)
    # 0x140b76aaf: xor edx, edx
    s.integer('xor',[('r', 'edx', 4), ('r', 'edx', 4)])
    # 0x140b76ab1: movaps xmm4, xmmword ptr [rip + 0x22c5b88]
    s.simd_move('movaps',('r', 'xmm4', 16),('m', None, None, 1, 5417190976, 16))
    # 0x140b76ab8: nop dword ptr [rax + rax]
    s.pc=5380729536
    return

def b_140b76ac0(s):
    # 0x140b76ac0: movups xmm5, xmmword ptr [r14 + rdx*8]
    s.simd_move('movups',('r', 'xmm5', 16),('m', 'r14', 'rdx', 8, 0, 16))
    # 0x140b76ac5: movups xmm8, xmmword ptr [r14 + rdx*8 + 0x10]
    s.simd_move('movups',('r', 'xmm8', 16),('m', 'r14', 'rdx', 8, 16, 16))
    # 0x140b76acb: movaps xmm9, xmm5
    s.simd_move('movaps',('r', 'xmm9', 16),('r', 'xmm5', 16))
    # 0x140b76acf: shufps xmm9, xmm8, 0x88
    s.shuffle('shufps',('r', 'xmm9', 16),('r', 'xmm8', 16),136)
    # 0x140b76ad4: shufps xmm5, xmm8, 0xdd
    s.shuffle('shufps',('r', 'xmm5', 16),('r', 'xmm8', 16),221)
    # 0x140b76ad9: mulps xmm5, xmm3
    s.float_op('mulps',('r', 'xmm5', 16),('r', 'xmm3', 16))
    # 0x140b76adc: movaps xmm8, xmm4
    s.simd_move('movaps',('r', 'xmm8', 16),('r', 'xmm4', 16))
    # 0x140b76ae0: subps xmm8, xmm9
    s.float_op('subps',('r', 'xmm8', 16),('r', 'xmm9', 16))
    # 0x140b76ae4: mulps xmm8, xmm1
    s.float_op('mulps',('r', 'xmm8', 16),('r', 'xmm1', 16))
    # 0x140b76ae8: mulps xmm9, xmm2
    s.float_op('mulps',('r', 'xmm9', 16),('r', 'xmm2', 16))
    # 0x140b76aec: addps xmm9, xmm8
    s.float_op('addps',('r', 'xmm9', 16),('r', 'xmm8', 16))
    # 0x140b76af0: movaps xmm8, xmm9
    s.simd_move('movaps',('r', 'xmm8', 16),('r', 'xmm9', 16))
    # 0x140b76af4: unpcklps xmm8, xmm5
    s.shuffle('unpcklps',('r', 'xmm8', 16),('r', 'xmm5', 16),0)
    # 0x140b76af8: unpckhps xmm9, xmm5
    s.shuffle('unpckhps',('r', 'xmm9', 16),('r', 'xmm5', 16),0)
    # 0x140b76afc: movups xmmword ptr [rax + rdx*8 + 0x10], xmm9
    s.simd_move('movups',('m', 'rax', 'rdx', 8, 16, 16),('r', 'xmm9', 16))
    # 0x140b76b02: movups xmmword ptr [rax + rdx*8], xmm8
    s.simd_move('movups',('m', 'rax', 'rdx', 8, 0, 16),('r', 'xmm8', 16))
    # 0x140b76b07: add rdx, 4
    s.integer('add',[('r', 'rdx', 8), ('i', 4, 8)])
    # 0x140b76b0b: cmp rcx, rdx
    s.integer('cmp',[('r', 'rcx', 8), ('r', 'rdx', 8)])
    # 0x140b76b0e: jne 0x140b76ac0
    s.pc=s.read(('i', 5380729536, 8)) if s.condition('ne') else 5380729616
    return

def b_140b76b10(s):
    # 0x140b76b10: cmp rbx, rcx
    s.integer('cmp',[('r', 'rbx', 8), ('r', 'rcx', 8)])
    # 0x140b76b13: je 0x140b76a10
    s.pc=s.read(('i', 5380729360, 8)) if s.condition('e') else 5380729625
    return

def b_140b76b19(s):
    # 0x140b76b19: jmp 0x140b76948
    s.pc=s.read(('i', 5380729160, 8))
    return

def b_140b76b1e(s):
    # 0x140b76b1e: movups xmm0, xmmword ptr [rsp + 0x50]
    s.simd_move('movups',('r', 'xmm0', 16),('m', 'rsp', None, 1, 80, 16))
    # 0x140b76b23: movaps xmmword ptr [rsp + 0x30], xmm0
    s.simd_move('movaps',('m', 'rsp', None, 1, 48, 16),('r', 'xmm0', 16))
    # 0x140b76b28: lea rax, [rip + 0x24e5839]
    s.write(('r', 'rax', 8),s.address(('m', None, None, 1, 5419418472, 8)))
    # 0x140b76b2f: mov qword ptr [rsp + 0x20], rax
    s.write(('m', 'rsp', None, 1, 32, 8),s.read(('r', 'rax', 8)))
    # 0x140b76b34: lea rcx, [rip + 0x27e773d]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5422572152, 8)))
    # 0x140b76b3b: lea r9, [rip + 0x27e7716]
    s.write(('r', 'r9', 8),s.address(('m', None, None, 1, 5422572120, 8)))
    # 0x140b76b42: lea r8, [rsp + 0x30]
    s.write(('r', 'r8', 8),s.address(('m', 'rsp', None, 1, 48, 8)))
    # 0x140b76b47: mov edx, 0x2b
    s.write(('r', 'edx', 4),s.read(('i', 43, 4)))
    # 0x140b76b4c: call 0x142dc8170
    s.push(5380729681)
    s.pc=s.read(('i', 5416714608, 8))
    return

def b_140b76b51(s):
    # 0x140b76b51: mov ecx, 4
    s.write(('r', 'ecx', 4),s.read(('i', 4, 4)))
    # 0x140b76b56: mov rdx, rdi
    s.write(('r', 'rdx', 8),s.read(('r', 'rdi', 8)))
    # 0x140b76b59: call 0x142dc7e2a
    s.push(5380729694)
    s.pc=s.read(('i', 5416713770, 8))
    return

def b_140b76b5e(s):
    # 0x140b76b5e: int3 
    raise RuntimeError('Original unreachable/panic 0x140b76b5e')
    s.pc=5380729695
    return

def b_140b77190(s):
    # 0x140b77190: mov rax, rcx
    s.write(('r', 'rax', 8),s.read(('r', 'rcx', 8)))
    # 0x140b77193: movss xmm0, dword ptr [rdx + 0x34]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rdx', None, 1, 52, 4))
    # 0x140b77198: xor ecx, ecx
    s.integer('xor',[('r', 'ecx', 4), ('r', 'ecx', 4)])
    # 0x140b7719a: ucomiss xmm0, dword ptr [rip + 0x22bfd87]
    s.compare_float(('r', 'xmm0', 16),('m', None, None, 1, 5417168680, 4))
    # 0x140b771a1: jne 0x140b771c8
    s.pc=s.read(('i', 5380731336, 8)) if s.condition('ne') else 5380731299
    return

def b_140b771a3(s):
    # 0x140b771a3: jp 0x140b771c8
    s.pc=s.read(('i', 5380731336, 8)) if s.condition('p') else 5380731301
    return

def b_140b771a5(s):
    # 0x140b771a5: movss xmm0, dword ptr [rip + 0x22c402b]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5417185752, 4))
    # 0x140b771ad: ucomiss xmm0, dword ptr [rdx + 0x30]
    s.compare_float(('r', 'xmm0', 16),('m', 'rdx', None, 1, 48, 4))
    # 0x140b771b1: jae 0x140b771c8
    s.pc=s.read(('i', 5380731336, 8)) if s.condition('ae') else 5380731315
    return

def b_140b771b3(s):
    # 0x140b771b3: movzx ecx, byte ptr [rdx + 0x3c]
    s.write(('r', 'ecx', 4),s.read(('m', 'rdx', None, 1, 60, 1)))
    # 0x140b771b7: mov qword ptr [rax + 8], rcx
    s.write(('m', 'rax', None, 1, 8, 8),s.read(('r', 'rcx', 8)))
    # 0x140b771bb: or rcx, 2
    s.integer('or',[('r', 'rcx', 8), ('i', 2, 8)])
    # 0x140b771bf: mov qword ptr [rax + 0x10], rcx
    s.write(('m', 'rax', None, 1, 16, 8),s.read(('r', 'rcx', 8)))
    # 0x140b771c3: mov ecx, 1
    s.write(('r', 'ecx', 4),s.read(('i', 1, 4)))
    s.pc=5380731336
    return

def b_140b771c8(s):
    # 0x140b771c8: mov qword ptr [rax], rcx
    s.write(('m', 'rax', None, 1, 0, 8),s.read(('r', 'rcx', 8)))
    # 0x140b771cb: ret 
    s.pc=s.pop()
    return

def b_140b771f0(s):
    # 0x140b771f0: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x140b771f1: sub rsp, 0x50
    s.integer('sub',[('r', 'rsp', 8), ('i', 80, 8)])
    # 0x140b771f5: cmp dword ptr [rcx + 8], 1
    s.integer('cmp',[('m', 'rcx', None, 1, 8, 4), ('i', 1, 4)])
    # 0x140b771f9: jne 0x140b77252
    s.pc=s.read(('i', 5380731474, 8)) if s.condition('ne') else 5380731387
    return

def b_140b771fb(s):
    # 0x140b771fb: mov rax, qword ptr [rcx + 0x1c]
    s.write(('r', 'rax', 8),s.read(('m', 'rcx', None, 1, 28, 8)))
    # 0x140b771ff: mov qword ptr [rsp + 0x30], rax
    s.write(('m', 'rsp', None, 1, 48, 8),s.read(('r', 'rax', 8)))
    # 0x140b77204: movups xmm0, xmmword ptr [rcx + 0xc]
    s.simd_move('movups',('r', 'xmm0', 16),('m', 'rcx', None, 1, 12, 16))
    # 0x140b77208: movaps xmmword ptr [rsp + 0x20], xmm0
    s.simd_move('movaps',('m', 'rsp', None, 1, 32, 16),('r', 'xmm0', 16))
    # 0x140b7720d: lea rax, [rsp + 0x40]
    s.write(('r', 'rax', 8),s.address(('m', 'rsp', None, 1, 64, 8)))
    # 0x140b77212: lea rdx, [rsp + 0x20]
    s.write(('r', 'rdx', 8),s.address(('m', 'rsp', None, 1, 32, 8)))
    # 0x140b77217: mov rsi, rcx
    s.write(('r', 'rsi', 8),s.read(('r', 'rcx', 8)))
    # 0x140b7721a: mov rcx, rax
    s.write(('r', 'rcx', 8),s.read(('r', 'rax', 8)))
    # 0x140b7721d: call 0x140df1c10
    s.push(5380731426)
    s.pc=s.read(('i', 5383330832, 8))
    return

def b_140b77222(s):
    # 0x140b77222: movsd xmm0, qword ptr [rsi + 0x1c]
    s.simd_move('movsd',('r', 'xmm0', 16),('m', 'rsi', None, 1, 28, 8))
    # 0x140b77227: movsd xmm1, qword ptr [rsi + 0x24]
    s.simd_move('movsd',('r', 'xmm1', 16),('m', 'rsi', None, 1, 36, 8))
    # 0x140b7722c: mulps xmm1, xmm0
    s.float_op('mulps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x140b7722f: unpcklps xmm1, xmm1
    s.shuffle('unpcklps',('r', 'xmm1', 16),('r', 'xmm1', 16),0)
    # 0x140b77232: mulps xmm1, xmmword ptr [rip + 0x22bfd07]
    s.float_op('mulps',('r', 'xmm1', 16),('m', None, None, 1, 5417168704, 16))
    # 0x140b77239: mulps xmm1, xmmword ptr [rsp + 0x40]
    s.float_op('mulps',('r', 'xmm1', 16),('m', 'rsp', None, 1, 64, 16))
    # 0x140b7723e: movaps xmm0, xmm1
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x140b77241: unpckhpd xmm0, xmm1
    s.shuffle('unpckhpd',('r', 'xmm0', 16),('r', 'xmm1', 16),0)
    # 0x140b77245: addps xmm0, xmm1
    s.float_op('addps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x140b77248: movshdup xmm1, xmm0
    s.simd_move('movshdup',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x140b7724c: add rsp, 0x50
    s.integer('add',[('r', 'rsp', 8), ('i', 80, 8)])
    # 0x140b77250: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x140b77251: ret 
    s.pc=s.pop()
    return

def b_140b77252(s):
    # 0x140b77252: movss xmm0, dword ptr [rcx + 0x14]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rcx', None, 1, 20, 4))
    # 0x140b77257: addss xmm0, xmm0
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x140b7725b: movsd xmm1, qword ptr [rcx + 0x24]
    s.simd_move('movsd',('r', 'xmm1', 16),('m', 'rcx', None, 1, 36, 8))
    # 0x140b77260: movsldup xmm0, xmm0
    s.simd_move('movsldup',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x140b77264: mulps xmm0, xmm1
    s.float_op('mulps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x140b77267: mulps xmm0, xmmword ptr [rip + 0x22bfcf2]
    s.float_op('mulps',('r', 'xmm0', 16),('m', None, None, 1, 5417168736, 16))
    # 0x140b7726e: movshdup xmm1, xmm0
    s.simd_move('movshdup',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x140b77272: add rsp, 0x50
    s.integer('add',[('r', 'rsp', 8), ('i', 80, 8)])
    # 0x140b77276: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x140b77277: ret 
    s.pc=s.pop()
    return

def b_140b772d0(s):
    # 0x140b772d0: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x140b772d1: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x140b772d2: sub rsp, 0xa8
    s.integer('sub',[('r', 'rsp', 8), ('i', 168, 8)])
    # 0x140b772d9: movaps xmmword ptr [rsp + 0x90], xmm7
    s.simd_move('movaps',('m', 'rsp', None, 1, 144, 16),('r', 'xmm7', 16))
    # 0x140b772e1: movaps xmmword ptr [rsp + 0x80], xmm6
    s.simd_move('movaps',('m', 'rsp', None, 1, 128, 16),('r', 'xmm6', 16))
    # 0x140b772e9: mov rsi, rcx
    s.write(('r', 'rsi', 8),s.read(('r', 'rcx', 8)))
    # 0x140b772ec: movss xmm7, dword ptr [rdx + 0x2c]
    s.simd_move('movss',('r', 'xmm7', 16),('m', 'rdx', None, 1, 44, 4))
    # 0x140b772f1: call 0x14007ee60
    s.push(5380731638)
    s.pc=s.read(('i', 5369228896, 8))
    return

def b_140b772f6(s):
    # 0x140b772f6: mov ecx, 0xa0
    s.write(('r', 'ecx', 4),s.read(('i', 160, 4)))
    # 0x140b772fb: mov edx, 4
    s.write(('r', 'edx', 4),s.read(('i', 4, 4)))
    # 0x140b77300: call 0x1406abab0
    s.push(5380731653)
    s.pc=s.read(('i', 5375703728, 8))
    return

def b_140b77305(s):
    # 0x140b77305: test rax, rax
    s.integer('test',[('r', 'rax', 8), ('r', 'rax', 8)])
    # 0x140b77308: je 0x140b7760a
    s.pc=s.read(('i', 5380732426, 8)) if s.condition('e') else 5380731662
    return

def b_140b7730e(s):
    # 0x140b7730e: mov rdi, rax
    s.write(('r', 'rdi', 8),s.read(('r', 'rax', 8)))
    # 0x140b77311: movss xmm0, dword ptr [rip + 0x22c051f]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5417171000, 4))
    # 0x140b77319: mulss xmm0, xmm7
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm7', 16))
    # 0x140b7731d: movss xmm6, dword ptr [rip + 0x22bfc03]
    s.simd_move('movss',('r', 'xmm6', 16),('m', None, None, 1, 5417168680, 4))
    # 0x140b77325: subss xmm6, xmm7
    s.float_op('subss',('r', 'xmm6', 16),('r', 'xmm7', 16))
    # 0x140b77329: mulss xmm6, dword ptr [rip + 0x22bfc1f]
    s.float_op('mulss',('r', 'xmm6', 16),('m', None, None, 1, 5417168720, 4))
    # 0x140b77331: addss xmm6, xmm0
    s.float_op('addss',('r', 'xmm6', 16),('r', 'xmm0', 16))
    # 0x140b77335: xorps xmm0, xmm0
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x140b77338: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x140b7733b: call 0x142e32ad0
    s.push(5380731712)
    s.pc=s.read(('i', 5417151184, 8))
    return

def b_140b77340(s):
    # 0x140b77340: mov dword ptr [rdi], 0
    s.write(('m', 'rdi', None, 1, 0, 4),s.read(('i', 0, 4)))
    # 0x140b77346: movss dword ptr [rdi + 4], xmm0
    s.simd_move('movss',('m', 'rdi', None, 1, 4, 4),('r', 'xmm0', 16))
    # 0x140b7734b: movss xmm0, dword ptr [rip + 0x24e4b95]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5419417320, 4))
    # 0x140b77353: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x140b77356: call 0x142e32ad0
    s.push(5380731739)
    s.pc=s.read(('i', 5417151184, 8))
    return

def b_140b7735b(s):
    # 0x140b7735b: mov dword ptr [rdi + 8], 0x3d579436
    s.write(('m', 'rdi', None, 1, 8, 4),s.read(('i', 1029149750, 4)))
    # 0x140b77362: movss dword ptr [rdi + 0xc], xmm0
    s.simd_move('movss',('m', 'rdi', None, 1, 12, 4),('r', 'xmm0', 16))
    # 0x140b77367: movss xmm0, dword ptr [rip + 0x24e4b7d]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5419417324, 4))
    # 0x140b7736f: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x140b77372: call 0x142e32ad0
    s.push(5380731767)
    s.pc=s.read(('i', 5417151184, 8))
    return

def b_140b77377(s):
    # 0x140b77377: mov dword ptr [rdi + 0x10], 0x3dd79436
    s.write(('m', 'rdi', None, 1, 16, 4),s.read(('i', 1037538358, 4)))
    # 0x140b7737e: movss dword ptr [rdi + 0x14], xmm0
    s.simd_move('movss',('m', 'rdi', None, 1, 20, 4),('r', 'xmm0', 16))
    # 0x140b77383: movss xmm0, dword ptr [rip + 0x24e4b65]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5419417328, 4))
    # 0x140b7738b: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x140b7738e: call 0x142e32ad0
    s.push(5380731795)
    s.pc=s.read(('i', 5417151184, 8))
    return

def b_140b77393(s):
    # 0x140b77393: mov dword ptr [rdi + 0x18], 0x3e21af28
    s.write(('m', 'rdi', None, 1, 24, 4),s.read(('i', 1042394920, 4)))
    # 0x140b7739a: movss dword ptr [rdi + 0x1c], xmm0
    s.simd_move('movss',('m', 'rdi', None, 1, 28, 4),('r', 'xmm0', 16))
    # 0x140b7739f: movss xmm0, dword ptr [rip + 0x24e4b4d]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5419417332, 4))
    # 0x140b773a7: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x140b773aa: call 0x142e32ad0
    s.push(5380731823)
    s.pc=s.read(('i', 5417151184, 8))
    return

def b_140b773af(s):
    # 0x140b773af: mov dword ptr [rdi + 0x20], 0x3e579436
    s.write(('m', 'rdi', None, 1, 32, 4),s.read(('i', 1045926966, 4)))
    # 0x140b773b6: movss dword ptr [rdi + 0x24], xmm0
    s.simd_move('movss',('m', 'rdi', None, 1, 36, 4),('r', 'xmm0', 16))
    # 0x140b773bb: movss xmm0, dword ptr [rip + 0x24e4b35]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5419417336, 4))
    # 0x140b773c3: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x140b773c6: call 0x142e32ad0
    s.push(5380731851)
    s.pc=s.read(('i', 5417151184, 8))
    return

def b_140b773cb(s):
    # 0x140b773cb: mov dword ptr [rdi + 0x28], 0x3e86bca2
    s.write(('m', 'rdi', None, 1, 40, 4),s.read(('i', 1049017506, 4)))
    # 0x140b773d2: movss dword ptr [rdi + 0x2c], xmm0
    s.simd_move('movss',('m', 'rdi', None, 1, 44, 4),('r', 'xmm0', 16))
    # 0x140b773d7: movss xmm0, dword ptr [rip + 0x24e4b1d]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5419417340, 4))
    # 0x140b773df: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x140b773e2: call 0x142e32ad0
    s.push(5380731879)
    s.pc=s.read(('i', 5417151184, 8))
    return

def b_140b773e7(s):
    # 0x140b773e7: mov dword ptr [rdi + 0x30], 0x3ea1af28
    s.write(('m', 'rdi', None, 1, 48, 4),s.read(('i', 1050783528, 4)))
    # 0x140b773ee: movss dword ptr [rdi + 0x34], xmm0
    s.simd_move('movss',('m', 'rdi', None, 1, 52, 4),('r', 'xmm0', 16))
    # 0x140b773f3: movss xmm0, dword ptr [rip + 0x24e4b05]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5419417344, 4))
    # 0x140b773fb: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x140b773fe: call 0x142e32ad0
    s.push(5380731907)
    s.pc=s.read(('i', 5417151184, 8))
    return

def b_140b77403(s):
    # 0x140b77403: mov dword ptr [rdi + 0x38], 0x3ebca1af
    s.write(('m', 'rdi', None, 1, 56, 4),s.read(('i', 1052549551, 4)))
    # 0x140b7740a: movss dword ptr [rdi + 0x3c], xmm0
    s.simd_move('movss',('m', 'rdi', None, 1, 60, 4),('r', 'xmm0', 16))
    # 0x140b7740f: movss xmm0, dword ptr [rip + 0x24e4aed]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5419417348, 4))
    # 0x140b77417: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x140b7741a: call 0x142e32ad0
    s.push(5380731935)
    s.pc=s.read(('i', 5417151184, 8))
    return

def b_140b7741f(s):
    # 0x140b7741f: mov dword ptr [rdi + 0x40], 0x3ed79436
    s.write(('m', 'rdi', None, 1, 64, 4),s.read(('i', 1054315574, 4)))
    # 0x140b77426: movss dword ptr [rdi + 0x44], xmm0
    s.simd_move('movss',('m', 'rdi', None, 1, 68, 4),('r', 'xmm0', 16))
    # 0x140b7742b: movss xmm0, dword ptr [rip + 0x24e4ad5]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5419417352, 4))
    # 0x140b77433: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x140b77436: call 0x142e32ad0
    s.push(5380731963)
    s.pc=s.read(('i', 5417151184, 8))
    return

def b_140b7743b(s):
    # 0x140b7743b: mov dword ptr [rdi + 0x48], 0x3ef286bd
    s.write(('m', 'rdi', None, 1, 72, 4),s.read(('i', 1056081597, 4)))
    # 0x140b77442: movss dword ptr [rdi + 0x4c], xmm0
    s.simd_move('movss',('m', 'rdi', None, 1, 76, 4),('r', 'xmm0', 16))
    # 0x140b77447: movss xmm0, dword ptr [rip + 0x24e4abd]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5419417356, 4))
    # 0x140b7744f: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x140b77452: call 0x142e32ad0
    s.push(5380731991)
    s.pc=s.read(('i', 5417151184, 8))
    return

def b_140b77457(s):
    # 0x140b77457: mov dword ptr [rdi + 0x50], 0x3f06bca2
    s.write(('m', 'rdi', None, 1, 80, 4),s.read(('i', 1057406114, 4)))
    # 0x140b7745e: movss dword ptr [rdi + 0x54], xmm0
    s.simd_move('movss',('m', 'rdi', None, 1, 84, 4),('r', 'xmm0', 16))
    # 0x140b77463: movss xmm0, dword ptr [rip + 0x24e4aa5]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5419417360, 4))
    # 0x140b7746b: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x140b7746e: call 0x142e32ad0
    s.push(5380732019)
    s.pc=s.read(('i', 5417151184, 8))
    return

def b_140b77473(s):
    # 0x140b77473: mov dword ptr [rdi + 0x58], 0x3f1435e5
    s.write(('m', 'rdi', None, 1, 88, 4),s.read(('i', 1058289125, 4)))
    # 0x140b7747a: movss dword ptr [rdi + 0x5c], xmm0
    s.simd_move('movss',('m', 'rdi', None, 1, 92, 4),('r', 'xmm0', 16))
    # 0x140b7747f: movss xmm0, dword ptr [rip + 0x24e4a8d]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5419417364, 4))
    # 0x140b77487: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x140b7748a: call 0x142e32ad0
    s.push(5380732047)
    s.pc=s.read(('i', 5417151184, 8))
    return

def b_140b7748f(s):
    # 0x140b7748f: mov dword ptr [rdi + 0x60], 0x3f21af28
    s.write(('m', 'rdi', None, 1, 96, 4),s.read(('i', 1059172136, 4)))
    # 0x140b77496: movss dword ptr [rdi + 0x64], xmm0
    s.simd_move('movss',('m', 'rdi', None, 1, 100, 4),('r', 'xmm0', 16))
    # 0x140b7749b: movss xmm0, dword ptr [rip + 0x24e4a75]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5419417368, 4))
    # 0x140b774a3: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x140b774a6: call 0x142e32ad0
    s.push(5380732075)
    s.pc=s.read(('i', 5417151184, 8))
    return

def b_140b774ab(s):
    # 0x140b774ab: mov dword ptr [rdi + 0x68], 0x3f2f286c
    s.write(('m', 'rdi', None, 1, 104, 4),s.read(('i', 1060055148, 4)))
    # 0x140b774b2: movss dword ptr [rdi + 0x6c], xmm0
    s.simd_move('movss',('m', 'rdi', None, 1, 108, 4),('r', 'xmm0', 16))
    # 0x140b774b7: movss xmm0, dword ptr [rip + 0x24e4a5d]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5419417372, 4))
    # 0x140b774bf: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x140b774c2: call 0x142e32ad0
    s.push(5380732103)
    s.pc=s.read(('i', 5417151184, 8))
    return

def b_140b774c7(s):
    # 0x140b774c7: mov dword ptr [rdi + 0x70], 0x3f3ca1af
    s.write(('m', 'rdi', None, 1, 112, 4),s.read(('i', 1060938159, 4)))
    # 0x140b774ce: movss dword ptr [rdi + 0x74], xmm0
    s.simd_move('movss',('m', 'rdi', None, 1, 116, 4),('r', 'xmm0', 16))
    # 0x140b774d3: movss xmm0, dword ptr [rip + 0x24e4a45]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5419417376, 4))
    # 0x140b774db: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x140b774de: call 0x142e32ad0
    s.push(5380732131)
    s.pc=s.read(('i', 5417151184, 8))
    return

def b_140b774e3(s):
    # 0x140b774e3: mov dword ptr [rdi + 0x78], 0x3f4a1af3
    s.write(('m', 'rdi', None, 1, 120, 4),s.read(('i', 1061821171, 4)))
    # 0x140b774ea: movss dword ptr [rdi + 0x7c], xmm0
    s.simd_move('movss',('m', 'rdi', None, 1, 124, 4),('r', 'xmm0', 16))
    # 0x140b774ef: movss xmm0, dword ptr [rip + 0x24e4a2d]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5419417380, 4))
    # 0x140b774f7: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x140b774fa: call 0x142e32ad0
    s.push(5380732159)
    s.pc=s.read(('i', 5417151184, 8))
    return

def b_140b774ff(s):
    # 0x140b774ff: mov dword ptr [rdi + 0x80], 0x3f579436
    s.write(('m', 'rdi', None, 1, 128, 4),s.read(('i', 1062704182, 4)))
    # 0x140b77509: movss dword ptr [rdi + 0x84], xmm0
    s.simd_move('movss',('m', 'rdi', None, 1, 132, 4),('r', 'xmm0', 16))
    # 0x140b77511: movss xmm0, dword ptr [rip + 0x24e4a0f]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5419417384, 4))
    # 0x140b77519: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x140b7751c: call 0x142e32ad0
    s.push(5380732193)
    s.pc=s.read(('i', 5417151184, 8))
    return

def b_140b77521(s):
    # 0x140b77521: mov dword ptr [rdi + 0x88], 0x3f650d79
    s.write(('m', 'rdi', None, 1, 136, 4),s.read(('i', 1063587193, 4)))
    # 0x140b7752b: movss dword ptr [rdi + 0x8c], xmm0
    s.simd_move('movss',('m', 'rdi', None, 1, 140, 4),('r', 'xmm0', 16))
    # 0x140b77533: movss xmm0, dword ptr [rip + 0x24e49f1]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5419417388, 4))
    # 0x140b7753b: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x140b7753e: call 0x142e32ad0
    s.push(5380732227)
    s.pc=s.read(('i', 5417151184, 8))
    return

def b_140b77543(s):
    # 0x140b77543: mov dword ptr [rdi + 0x90], 0x3f7286bd
    s.write(('m', 'rdi', None, 1, 144, 4),s.read(('i', 1064470205, 4)))
    # 0x140b7754d: movss dword ptr [rdi + 0x94], xmm0
    s.simd_move('movss',('m', 'rdi', None, 1, 148, 4),('r', 'xmm0', 16))
    # 0x140b77555: movsd xmm0, qword ptr [rip + 0x22c03f3]
    s.simd_move('movsd',('r', 'xmm0', 16),('m', None, None, 1, 5417171280, 8))
    # 0x140b7755d: movsd qword ptr [rdi + 0x98], xmm0
    s.simd_move('movsd',('m', 'rdi', None, 1, 152, 8),('r', 'xmm0', 16))
    # 0x140b77565: mov qword ptr [rsp + 0x30], 0x14
    s.write(('m', 'rsp', None, 1, 48, 8),s.read(('i', 20, 8)))
    # 0x140b7756e: mov qword ptr [rsp + 0x38], rdi
    s.write(('m', 'rsp', None, 1, 56, 8),s.read(('r', 'rdi', 8)))
    # 0x140b77573: mov qword ptr [rsp + 0x40], 0x14
    s.write(('m', 'rsp', None, 1, 64, 8),s.read(('i', 20, 8)))
    # 0x140b7757c: lea rcx, [rsp + 0x48]
    s.write(('r', 'rcx', 8),s.address(('m', 'rsp', None, 1, 72, 8)))
    # 0x140b77581: lea rdx, [rsp + 0x30]
    s.write(('r', 'rdx', 8),s.address(('m', 'rsp', None, 1, 48, 8)))
    # 0x140b77586: xor edi, edi
    s.integer('xor',[('r', 'edi', 4), ('r', 'edi', 4)])
    # 0x140b77588: xor r8d, r8d
    s.integer('xor',[('r', 'r8d', 4), ('r', 'r8d', 4)])
    # 0x140b7758b: call 0x140080c90
    s.push(5380732304)
    s.pc=s.read(('i', 5369236624, 8))
    return

def b_140b77590(s):
    # 0x140b77590: cmp rdi, qword ptr [rsp + 0x48]
    s.integer('cmp',[('r', 'rdi', 8), ('m', 'rsp', None, 1, 72, 8)])
    # 0x140b77595: jo 0x140b775d7
    s.pc=s.read(('i', 5380732375, 8)) if s.condition('o') else 5380732311
    return

def b_140b77597(s):
    # 0x140b77597: mov rax, qword ptr [rsp + 0x78]
    s.write(('r', 'rax', 8),s.read(('m', 'rsp', None, 1, 120, 8)))
    # 0x140b7759c: mov qword ptr [rsi + 0x30], rax
    s.write(('m', 'rsi', None, 1, 48, 8),s.read(('r', 'rax', 8)))
    # 0x140b775a0: movups xmm0, xmmword ptr [rsp + 0x48]
    s.simd_move('movups',('r', 'xmm0', 16),('m', 'rsp', None, 1, 72, 16))
    # 0x140b775a5: movups xmm1, xmmword ptr [rsp + 0x58]
    s.simd_move('movups',('r', 'xmm1', 16),('m', 'rsp', None, 1, 88, 16))
    # 0x140b775aa: movups xmm2, xmmword ptr [rsp + 0x68]
    s.simd_move('movups',('r', 'xmm2', 16),('m', 'rsp', None, 1, 104, 16))
    # 0x140b775af: movups xmmword ptr [rsi + 0x20], xmm2
    s.simd_move('movups',('m', 'rsi', None, 1, 32, 16),('r', 'xmm2', 16))
    # 0x140b775b3: movups xmmword ptr [rsi + 0x10], xmm1
    s.simd_move('movups',('m', 'rsi', None, 1, 16, 16),('r', 'xmm1', 16))
    # 0x140b775b7: movups xmmword ptr [rsi], xmm0
    s.simd_move('movups',('m', 'rsi', None, 1, 0, 16),('r', 'xmm0', 16))
    # 0x140b775ba: mov rax, rsi
    s.write(('r', 'rax', 8),s.read(('r', 'rsi', 8)))
    # 0x140b775bd: movaps xmm6, xmmword ptr [rsp + 0x80]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rsp', None, 1, 128, 16))
    # 0x140b775c5: movaps xmm7, xmmword ptr [rsp + 0x90]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rsp', None, 1, 144, 16))
    # 0x140b775cd: add rsp, 0xa8
    s.integer('add',[('r', 'rsp', 8), ('i', 168, 8)])
    # 0x140b775d4: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x140b775d5: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x140b775d6: ret 
    s.pc=s.pop()
    return

def b_140b775d7(s):
    # 0x140b775d7: movups xmm0, xmmword ptr [rsp + 0x50]
    s.simd_move('movups',('r', 'xmm0', 16),('m', 'rsp', None, 1, 80, 16))
    # 0x140b775dc: movaps xmmword ptr [rsp + 0x30], xmm0
    s.simd_move('movaps',('m', 'rsp', None, 1, 48, 16),('r', 'xmm0', 16))
    # 0x140b775e1: lea rax, [rip + 0x24e4da0]
    s.write(('r', 'rax', 8),s.address(('m', None, None, 1, 5419418504, 8)))
    # 0x140b775e8: mov qword ptr [rsp + 0x20], rax
    s.write(('m', 'rsp', None, 1, 32, 8),s.read(('r', 'rax', 8)))
    # 0x140b775ed: lea rcx, [rip + 0x27e6c84]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5422572152, 8)))
    # 0x140b775f4: lea r9, [rip + 0x27e6c5d]
    s.write(('r', 'r9', 8),s.address(('m', None, None, 1, 5422572120, 8)))
    # 0x140b775fb: lea r8, [rsp + 0x30]
    s.write(('r', 'r8', 8),s.address(('m', 'rsp', None, 1, 48, 8)))
    # 0x140b77600: mov edx, 0x2b
    s.write(('r', 'edx', 4),s.read(('i', 43, 4)))
    # 0x140b77605: call 0x142dc8170
    s.push(5380732426)
    s.pc=s.read(('i', 5416714608, 8))
    return

def b_140b7760a(s):
    # 0x140b7760a: mov ecx, 4
    s.write(('r', 'ecx', 4),s.read(('i', 4, 4)))
    # 0x140b7760f: mov edx, 0xa0
    s.write(('r', 'edx', 4),s.read(('i', 160, 4)))
    # 0x140b77614: call 0x142dc7e2a
    s.push(5380732441)
    s.pc=s.read(('i', 5416713770, 8))
    return

def b_140b77619(s):
    # 0x140b77619: int3 
    raise RuntimeError('Original unreachable/panic 0x140b77619')
    s.pc=5380732442
    return

def b_140b77a00(s):
    # 0x140b77a00: sub rsp, 0x68
    s.integer('sub',[('r', 'rsp', 8), ('i', 104, 8)])
    # 0x140b77a04: movaps xmmword ptr [rsp + 0x50], xmm6
    s.simd_move('movaps',('m', 'rsp', None, 1, 80, 16),('r', 'xmm6', 16))
    # 0x140b77a09: movss xmm1, dword ptr [rcx + 0x30]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rcx', None, 1, 48, 4))
    # 0x140b77a0e: xorps xmm0, xmm0
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x140b77a11: movss xmm2, dword ptr [rip + 0x22c37bf]
    s.simd_move('movss',('r', 'xmm2', 16),('m', None, None, 1, 5417185752, 4))
    # 0x140b77a19: ucomiss xmm2, xmm1
    s.compare_float(('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x140b77a1c: jae 0x140b77af9
    s.pc=s.read(('i', 5380733689, 8)) if s.condition('ae') else 5380733474
    return

def b_140b77a22(s):
    # 0x140b77a22: cmp dword ptr [rcx + 8], 1
    s.integer('cmp',[('m', 'rcx', None, 1, 8, 4), ('i', 1, 4)])
    # 0x140b77a26: jne 0x140b77a64
    s.pc=s.read(('i', 5380733540, 8)) if s.condition('ne') else 5380733480
    return

def b_140b77a28(s):
    # 0x140b77a28: movss xmm2, dword ptr [rcx + 0x1c]
    s.simd_move('movss',('r', 'xmm2', 16),('m', 'rcx', None, 1, 28, 4))
    # 0x140b77a2d: movss xmm3, dword ptr [rcx + 0x20]
    s.simd_move('movss',('r', 'xmm3', 16),('m', 'rcx', None, 1, 32, 4))
    # 0x140b77a32: movaps xmm0, xmm2
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x140b77a35: cmpunordss xmm0, xmm2
    s.float_op('cmpunordss',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x140b77a3a: movaps xmm4, xmm0
    s.simd_move('movaps',('r', 'xmm4', 16),('r', 'xmm0', 16))
    # 0x140b77a3d: andps xmm4, xmm3
    s.float_op('andps',('r', 'xmm4', 16),('r', 'xmm3', 16))
    # 0x140b77a40: maxss xmm3, xmm2
    s.float_op('maxss',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x140b77a44: andnps xmm0, xmm3
    s.float_op('andnps',('r', 'xmm0', 16),('r', 'xmm3', 16))
    # 0x140b77a47: orps xmm0, xmm4
    s.float_op('orps',('r', 'xmm0', 16),('r', 'xmm4', 16))
    # 0x140b77a4a: addss xmm0, dword ptr [rip + 0x24c4c3e]
    s.float_op('addss',('r', 'xmm0', 16),('m', None, None, 1, 5419288208, 4))
    # 0x140b77a52: divss xmm0, dword ptr [rip + 0x24c4c3e]
    s.float_op('divss',('r', 'xmm0', 16),('m', None, None, 1, 5419288216, 4))
    # 0x140b77a5a: movss xmm3, dword ptr [rip + 0x2411b9a]
    s.simd_move('movss',('r', 'xmm3', 16),('m', None, None, 1, 5418554876, 4))
    # 0x140b77a62: jmp 0x140b77a81
    s.pc=s.read(('i', 5380733569, 8))
    return

def b_140b77a64(s):
    # 0x140b77a64: movss xmm0, dword ptr [rcx + 0x14]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rcx', None, 1, 20, 4))
    # 0x140b77a69: addss xmm0, dword ptr [rip + 0x24c4bff]
    s.float_op('addss',('r', 'xmm0', 16),('m', None, None, 1, 5419288176, 4))
    # 0x140b77a71: divss xmm0, dword ptr [rip + 0x24c4bfb]
    s.float_op('divss',('r', 'xmm0', 16),('m', None, None, 1, 5419288180, 4))
    # 0x140b77a79: movss xmm3, dword ptr [rip + 0x23e0147]
    s.simd_move('movss',('r', 'xmm3', 16),('m', None, None, 1, 5418351560, 4))
    s.pc=5380733569
    return

def b_140b77a81(s):
    # 0x140b77a81: divss xmm0, dword ptr [rip + 0x22bff03]
    s.float_op('divss',('r', 'xmm0', 16),('m', None, None, 1, 5417171340, 4))
    # 0x140b77a89: xorps xmm2, xmm2
    s.float_op('xorps',('r', 'xmm2', 16),('r', 'xmm2', 16))
    # 0x140b77a8c: xorps xmm5, xmm5
    s.float_op('xorps',('r', 'xmm5', 16),('r', 'xmm5', 16))
    # 0x140b77a8f: maxss xmm5, xmm0
    s.float_op('maxss',('r', 'xmm5', 16),('r', 'xmm0', 16))
    # 0x140b77a93: movss xmm4, dword ptr [rip + 0x22bf48d]
    s.simd_move('movss',('r', 'xmm4', 16),('m', None, None, 1, 5417168680, 4))
    # 0x140b77a9b: movaps xmm6, xmm4
    s.simd_move('movaps',('r', 'xmm6', 16),('r', 'xmm4', 16))
    # 0x140b77a9e: minss xmm6, xmm5
    s.float_op('minss',('r', 'xmm6', 16),('r', 'xmm5', 16))
    # 0x140b77aa2: movaps xmm5, xmm6
    s.simd_move('movaps',('r', 'xmm5', 16),('r', 'xmm6', 16))
    # 0x140b77aa5: mulss xmm5, xmm6
    s.float_op('mulss',('r', 'xmm5', 16),('r', 'xmm6', 16))
    # 0x140b77aa9: addss xmm6, xmm6
    s.float_op('addss',('r', 'xmm6', 16),('r', 'xmm6', 16))
    # 0x140b77aad: movss xmm0, dword ptr [rip + 0x22bfdd7]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5417171084, 4))
    # 0x140b77ab5: subss xmm0, xmm6
    s.float_op('subss',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x140b77ab9: mulss xmm0, xmm5
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm5', 16))
    # 0x140b77abd: movaps xmm5, xmm4
    s.simd_move('movaps',('r', 'xmm5', 16),('r', 'xmm4', 16))
    # 0x140b77ac0: subss xmm5, xmm0
    s.float_op('subss',('r', 'xmm5', 16),('r', 'xmm0', 16))
    # 0x140b77ac4: mulss xmm0, dword ptr [rip + 0x22c000c]
    s.float_op('mulss',('r', 'xmm0', 16),('m', None, None, 1, 5417171672, 4))
    # 0x140b77acc: mulss xmm5, xmm3
    s.float_op('mulss',('r', 'xmm5', 16),('r', 'xmm3', 16))
    # 0x140b77ad0: addss xmm0, xmm5
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm5', 16))
    # 0x140b77ad4: ucomiss xmm0, xmm2
    s.compare_float(('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x140b77ad7: jb 0x140b77b03
    s.pc=s.read(('i', 5380733699, 8)) if s.condition('b') else 5380733657
    return

def b_140b77ad9(s):
    # 0x140b77ad9: subss xmm4, xmm1
    s.float_op('subss',('r', 'xmm4', 16),('r', 'xmm1', 16))
    # 0x140b77add: mulss xmm4, dword ptr [rip + 0x22bfea7]
    s.float_op('mulss',('r', 'xmm4', 16),('m', None, None, 1, 5417171340, 4))
    # 0x140b77ae5: mulss xmm1, dword ptr [rip + 0x22bffeb]
    s.float_op('mulss',('r', 'xmm1', 16),('m', None, None, 1, 5417171672, 4))
    # 0x140b77aed: addss xmm1, xmm4
    s.float_op('addss',('r', 'xmm1', 16),('r', 'xmm4', 16))
    # 0x140b77af1: maxss xmm2, xmm1
    s.float_op('maxss',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x140b77af5: minss xmm0, xmm2
    s.float_op('minss',('r', 'xmm0', 16),('r', 'xmm2', 16))
    s.pc=5380733689
    return

def b_140b77af9(s):
    # 0x140b77af9: movaps xmm6, xmmword ptr [rsp + 0x50]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rsp', None, 1, 80, 16))
    # 0x140b77afe: add rsp, 0x68
    s.integer('add',[('r', 'rsp', 8), ('i', 104, 8)])
    # 0x140b77b02: ret 
    s.pc=s.pop()
    return

def b_140b77b03(s):
    # 0x140b77b03: mov dword ptr [rsp + 0x28], 0
    s.write(('m', 'rsp', None, 1, 40, 4),s.read(('i', 0, 4)))
    # 0x140b77b0b: movss dword ptr [rsp + 0x2c], xmm0
    s.simd_move('movss',('m', 'rsp', None, 1, 44, 4),('r', 'xmm0', 16))
    # 0x140b77b11: lea rax, [rsp + 0x28]
    s.write(('r', 'rax', 8),s.address(('m', 'rsp', None, 1, 40, 8)))
    # 0x140b77b16: mov qword ptr [rsp + 0x30], rax
    s.write(('m', 'rsp', None, 1, 48, 8),s.read(('r', 'rax', 8)))
    # 0x140b77b1b: lea rax, [rip + 0x3f8aae]
    s.write(('r', 'rax', 8),s.address(('m', None, None, 1, 5384898000, 8)))
    # 0x140b77b22: mov qword ptr [rsp + 0x38], rax
    s.write(('m', 'rsp', None, 1, 56, 8),s.read(('r', 'rax', 8)))
    # 0x140b77b27: lea rcx, [rsp + 0x2c]
    s.write(('r', 'rcx', 8),s.address(('m', 'rsp', None, 1, 44, 8)))
    # 0x140b77b2c: mov qword ptr [rsp + 0x40], rcx
    s.write(('m', 'rsp', None, 1, 64, 8),s.read(('r', 'rcx', 8)))
    # 0x140b77b31: mov qword ptr [rsp + 0x48], rax
    s.write(('m', 'rsp', None, 1, 72, 8),s.read(('r', 'rax', 8)))
    # 0x140b77b36: lea rcx, [rip + 0x24e441f]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5419417436, 8)))
    # 0x140b77b3d: lea r8, [rip + 0x24e44b4]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5419417592, 8)))
    # 0x140b77b44: lea rdx, [rsp + 0x30]
    s.write(('r', 'rdx', 8),s.address(('m', 'rsp', None, 1, 48, 8)))
    # 0x140b77b49: call 0x142dc83d0
    s.push(5380733774)
    s.pc=s.read(('i', 5416715216, 8))
    return

def b_140b77b4e(s):
    # 0x140b77b4e: int3 
    raise RuntimeError('Original unreachable/panic 0x140b77b4e')
    s.pc=5380733775
    return

def b_140b77b60(s):
    # 0x140b77b60: movss xmm0, dword ptr [rcx + 0x30]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rcx', None, 1, 48, 4))
    # 0x140b77b65: movss xmm1, dword ptr [rip + 0x22bf3bb]
    s.simd_move('movss',('r', 'xmm1', 16),('m', None, None, 1, 5417168680, 4))
    # 0x140b77b6d: cmpeqss xmm1, dword ptr [rcx + 0x34]
    s.float_op('cmpeqss',('r', 'xmm1', 16),('m', 'rcx', None, 1, 52, 4))
    # 0x140b77b73: cmpnless xmm0, dword ptr [rip + 0x22c365c]
    s.float_op('cmpnless',('r', 'xmm0', 16),('m', None, None, 1, 5417185752, 4))
    # 0x140b77b7c: andps xmm0, xmm1
    s.float_op('andps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x140b77b7f: movd eax, xmm0
    s.simd_move('movd',('r', 'eax', 4),('r', 'xmm0', 16))
    # 0x140b77b83: and al, 1
    s.integer('and',[('r', 'al', 1), ('i', 1, 1)])
    # 0x140b77b85: ret 
    s.pc=s.pop()
    return

def b_140de8220(s):
    # 0x140de8220: subss xmm2, xmm0
    s.float_op('subss',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x140de8224: subss xmm1, xmm0
    s.float_op('subss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x140de8228: divss xmm2, xmm1
    s.float_op('divss',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x140de822c: movaps xmm0, xmm2
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x140de822f: ret 
    s.pc=s.pop()
    return

def b_140de8290(s):
    # 0x140de8290: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x140de8291: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x140de8293: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x140de8295: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x140de8296: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x140de8297: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x140de8298: sub rsp, 0x68
    s.integer('sub',[('r', 'rsp', 8), ('i', 104, 8)])
    # 0x140de829c: lea rbp, [rsp + 0x60]
    s.write(('r', 'rbp', 8),s.address(('m', 'rsp', None, 1, 96, 8)))
    # 0x140de82a1: movaps xmmword ptr [rbp - 0x10], xmm6
    s.simd_move('movaps',('m', 'rbp', None, 1, -16, 16),('r', 'xmm6', 16))
    # 0x140de82a5: mov qword ptr [rbp - 0x18], 0xfffffffffffffffe
    s.write(('m', 'rbp', None, 1, -24, 8),s.read(('i', -2, 8)))
    # 0x140de82ad: cmp rdx, 1
    s.integer('cmp',[('r', 'rdx', 8), ('i', 1, 8)])
    # 0x140de82b1: jbe 0x140de835a
    s.pc=s.read(('i', 5383291738, 8)) if s.condition('be') else 5383291575
    return

def b_140de82b7(s):
    # 0x140de82b7: mov rbx, rdx
    s.write(('r', 'rbx', 8),s.read(('r', 'rdx', 8)))
    # 0x140de82ba: mov rsi, rcx
    s.write(('r', 'rsi', 8),s.read(('r', 'rcx', 8)))
    # 0x140de82bd: lea r14, [rdx*4]
    s.write(('r', 'r14', 8),s.address(('m', None, 'rdx', 4, 0, 8)))
    # 0x140de82c5: mov rax, rdx
    s.write(('r', 'rax', 8),s.read(('r', 'rdx', 8)))
    # 0x140de82c8: shr rax, 0x3e
    s.integer('shr',[('r', 'rax', 8), ('i', 62, 1)])
    # 0x140de82cc: setne al
    s.write(('r', 'al', 1),int(s.condition('ne')))
    # 0x140de82cf: movabs rcx, 0x7ffffffffffffffc
    s.write(('r', 'rcx', 8),s.read(('i', 9223372036854775804, 8)))
    # 0x140de82d9: cmp r14, rcx
    s.integer('cmp',[('r', 'r14', 8), ('r', 'rcx', 8)])
    # 0x140de82dc: seta cl
    s.write(('r', 'cl', 1),int(s.condition('a')))
    # 0x140de82df: or cl, al
    s.integer('or',[('r', 'cl', 1), ('r', 'al', 1)])
    # 0x140de82e1: je 0x140de82f1
    s.pc=s.read(('i', 5383291633, 8)) if s.condition('e') else 5383291619
    return

def b_140de82e3(s):
    # 0x140de82e3: xor r15d, r15d
    s.integer('xor',[('r', 'r15d', 4), ('r', 'r15d', 4)])
    s.pc=5383291622
    return

def b_140de82e6(s):
    # 0x140de82e6: mov rcx, r15
    s.write(('r', 'rcx', 8),s.read(('r', 'r15', 8)))
    # 0x140de82e9: mov rdx, r14
    s.write(('r', 'rdx', 8),s.read(('r', 'r14', 8)))
    # 0x140de82ec: call 0x142dc7e2a
    s.push(5383291633)
    s.pc=s.read(('i', 5416713770, 8))
    return

def b_140de82f1(s):
    # 0x140de82f1: mov rdi, r9
    s.write(('r', 'rdi', 8),s.read(('r', 'r9', 8)))
    # 0x140de82f4: movaps xmm6, xmm2
    s.simd_move('movaps',('r', 'xmm6', 16),('r', 'xmm2', 16))
    # 0x140de82f7: call 0x14007ee60
    s.push(5383291644)
    s.pc=s.read(('i', 5369228896, 8))
    return

def b_140de82fc(s):
    # 0x140de82fc: mov r15d, 4
    s.write(('r', 'r15d', 4),s.read(('i', 4, 4)))
    # 0x140de8302: mov edx, 4
    s.write(('r', 'edx', 4),s.read(('i', 4, 4)))
    # 0x140de8307: mov rcx, r14
    s.write(('r', 'rcx', 8),s.read(('r', 'r14', 8)))
    # 0x140de830a: call 0x1406abab0
    s.push(5383291663)
    s.pc=s.read(('i', 5375703728, 8))
    return

def b_140de830f(s):
    # 0x140de830f: test rax, rax
    s.integer('test',[('r', 'rax', 8), ('r', 'rax', 8)])
    # 0x140de8312: je 0x140de82e6
    s.pc=s.read(('i', 5383291622, 8)) if s.condition('e') else 5383291668
    return

def b_140de8314(s):
    # 0x140de8314: mov qword ptr [rbp - 0x30], rbx
    s.write(('m', 'rbp', None, 1, -48, 8),s.read(('r', 'rbx', 8)))
    # 0x140de8318: mov qword ptr [rbp - 0x28], rax
    s.write(('m', 'rbp', None, 1, -40, 8),s.read(('r', 'rax', 8)))
    # 0x140de831c: mov qword ptr [rbp - 0x20], 0
    s.write(('m', 'rbp', None, 1, -32, 8),s.read(('i', 0, 8)))
    # 0x140de8324: lea r9, [rbp - 0x30]
    s.write(('r', 'r9', 8),s.address(('m', 'rbp', None, 1, -48, 8)))
    # 0x140de8328: mov rcx, rbx
    s.write(('r', 'rcx', 8),s.read(('r', 'rbx', 8)))
    # 0x140de832b: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x140de832e: mov r8, rdi
    s.write(('r', 'r8', 8),s.read(('r', 'rdi', 8)))
    # 0x140de8331: call 0x140de8bb0
    s.push(5383291702)
    s.pc=s.read(('i', 5383293872, 8))
    return

def b_140de8336(s):
    # 0x140de8336: nop 
    # 0x140de8337: mov rax, qword ptr [rbp - 0x20]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, -32, 8)))
    # 0x140de833b: mov qword ptr [rsi + 0x10], rax
    s.write(('m', 'rsi', None, 1, 16, 8),s.read(('r', 'rax', 8)))
    # 0x140de833f: movups xmm0, xmmword ptr [rbp - 0x30]
    s.simd_move('movups',('r', 'xmm0', 16),('m', 'rbp', None, 1, -48, 16))
    # 0x140de8343: movups xmmword ptr [rsi], xmm0
    s.simd_move('movups',('m', 'rsi', None, 1, 0, 16),('r', 'xmm0', 16))
    # 0x140de8346: mov rax, rsi
    s.write(('r', 'rax', 8),s.read(('r', 'rsi', 8)))
    # 0x140de8349: movaps xmm6, xmmword ptr [rbp - 0x10]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rbp', None, 1, -16, 16))
    # 0x140de834d: add rsp, 0x68
    s.integer('add',[('r', 'rsp', 8), ('i', 104, 8)])
    # 0x140de8351: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x140de8352: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x140de8353: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x140de8354: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x140de8356: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x140de8358: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x140de8359: ret 
    s.pc=s.pop()
    return

def b_140de835a(s):
    # 0x140de835a: mov r8, qword ptr [rbp + 0x60]
    s.write(('r', 'r8', 8),s.read(('m', 'rbp', None, 1, 96, 8)))
    # 0x140de835e: lea rcx, [rip + 0x241693f]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5421132964, 8)))
    # 0x140de8365: mov edx, 0x1d
    s.write(('r', 'edx', 4),s.read(('i', 29, 4)))
    # 0x140de836a: call 0x142dc83b0
    s.push(5383291759)
    s.pc=s.read(('i', 5416715184, 8))
    return

def b_140de836f(s):
    # 0x140de836f: int3 
    raise RuntimeError('Original unreachable/panic 0x140de836f')
    s.pc=5383291760
    return

def b_140de8370(s):
    # 0x140de8370: mov qword ptr [rsp + 0x10], rdx
    s.write(('m', 'rsp', None, 1, 16, 8),s.read(('r', 'rdx', 8)))
    # 0x140de8375: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x140de8376: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x140de8378: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x140de837a: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x140de837b: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x140de837c: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x140de837d: sub rsp, 0x38
    s.integer('sub',[('r', 'rsp', 8), ('i', 56, 8)])
    # 0x140de8381: lea rbp, [rdx + 0x60]
    s.write(('r', 'rbp', 8),s.address(('m', 'rdx', None, 1, 96, 8)))
    # 0x140de8385: movaps xmmword ptr [rsp + 0x20], xmm6
    s.simd_move('movaps',('m', 'rsp', None, 1, 32, 16),('r', 'xmm6', 16))
    # 0x140de838a: mov rdx, qword ptr [rbp - 0x30]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, -48, 8)))
    # 0x140de838e: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x140de8391: je 0x140de83a6
    s.pc=s.read(('i', 5383291814, 8)) if s.condition('e') else 5383291795
    return

def b_140de8393(s):
    # 0x140de8393: mov rcx, qword ptr [rbp - 0x28]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, -40, 8)))
    # 0x140de8397: shl rdx, 2
    s.integer('shl',[('r', 'rdx', 8), ('i', 2, 1)])
    # 0x140de839b: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x140de83a1: call 0x1406abac0
    s.push(5383291814)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_140de83a6(s):
    # 0x140de83a6: movaps xmm6, xmmword ptr [rsp + 0x20]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rsp', None, 1, 32, 16))
    # 0x140de83ab: add rsp, 0x38
    s.integer('add',[('r', 'rsp', 8), ('i', 56, 8)])
    # 0x140de83af: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x140de83b0: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x140de83b1: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x140de83b2: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x140de83b4: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x140de83b6: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x140de83b7: ret 
    s.pc=s.pop()
    return

def b_140de8bb0(s):
    # 0x140de8bb0: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x140de8bb1: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x140de8bb3: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x140de8bb5: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x140de8bb6: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x140de8bb7: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x140de8bb8: sub rsp, 0x98
    s.integer('sub',[('r', 'rsp', 8), ('i', 152, 8)])
    # 0x140de8bbf: lea rbp, [rsp + 0x80]
    s.write(('r', 'rbp', 8),s.address(('m', 'rsp', None, 1, 128, 8)))
    # 0x140de8bc7: movaps xmmword ptr [rbp], xmm9
    s.simd_move('movaps',('m', 'rbp', None, 1, 0, 16),('r', 'xmm9', 16))
    # 0x140de8bcc: movaps xmmword ptr [rbp - 0x10], xmm8
    s.simd_move('movaps',('m', 'rbp', None, 1, -16, 16),('r', 'xmm8', 16))
    # 0x140de8bd1: movaps xmmword ptr [rbp - 0x20], xmm7
    s.simd_move('movaps',('m', 'rbp', None, 1, -32, 16),('r', 'xmm7', 16))
    # 0x140de8bd5: movaps xmmword ptr [rbp - 0x30], xmm6
    s.simd_move('movaps',('m', 'rbp', None, 1, -48, 16),('r', 'xmm6', 16))
    # 0x140de8bd9: mov qword ptr [rbp - 0x38], 0xfffffffffffffffe
    s.write(('m', 'rbp', None, 1, -56, 8),s.read(('i', -2, 8)))
    # 0x140de8be1: cmp rcx, 3
    s.integer('cmp',[('r', 'rcx', 8), ('i', 3, 8)])
    # 0x140de8be5: jae 0x140de8c1a
    s.pc=s.read(('i', 5383293978, 8)) if s.condition('ae') else 5383293927
    return

def b_140de8be7(s):
    # 0x140de8be7: mov rax, qword ptr [r9]
    s.write(('r', 'rax', 8),s.read(('m', 'r9', None, 1, 0, 8)))
    # 0x140de8bea: mov rdx, qword ptr [r9 + 0x10]
    s.write(('r', 'rdx', 8),s.read(('m', 'r9', None, 1, 16, 8)))
    # 0x140de8bee: sub rax, rdx
    s.integer('sub',[('r', 'rax', 8), ('r', 'rdx', 8)])
    # 0x140de8bf1: cmp rax, 1
    s.integer('cmp',[('r', 'rax', 8), ('i', 1, 8)])
    # 0x140de8bf5: jbe 0x140de8dd3
    s.pc=s.read(('i', 5383294419, 8)) if s.condition('be') else 5383293947
    return

def b_140de8bfb(s):
    # 0x140de8bfb: mov rax, qword ptr [r9 + 8]
    s.write(('r', 'rax', 8),s.read(('m', 'r9', None, 1, 8, 8)))
    # 0x140de8bff: movabs rcx, 0x3f80000000000000
    s.write(('r', 'rcx', 8),s.read(('i', 4575657221408423936, 8)))
    # 0x140de8c09: mov qword ptr [rax + rdx*4], rcx
    s.write(('m', 'rax', 'rdx', 4, 0, 8),s.read(('r', 'rcx', 8)))
    # 0x140de8c0d: add rdx, 2
    s.integer('add',[('r', 'rdx', 8), ('i', 2, 8)])
    # 0x140de8c11: mov qword ptr [r9 + 0x10], rdx
    s.write(('m', 'r9', None, 1, 16, 8),s.read(('r', 'rdx', 8)))
    # 0x140de8c15: jmp 0x140de8db1
    s.pc=s.read(('i', 5383294385, 8))
    return

def b_140de8c1a(s):
    # 0x140de8c1a: mov rsi, r8
    s.write(('r', 'rsi', 8),s.read(('r', 'r8', 8)))
    # 0x140de8c1d: movaps xmm6, xmm1
    s.simd_move('movaps',('r', 'xmm6', 16),('r', 'xmm1', 16))
    # 0x140de8c20: mov rdi, rcx
    s.write(('r', 'rdi', 8),s.read(('r', 'rcx', 8)))
    # 0x140de8c23: mov rax, rcx
    s.write(('r', 'rax', 8),s.read(('r', 'rcx', 8)))
    # 0x140de8c26: dec rax
    s.integer('dec',[('r', 'rax', 8)])
    # 0x140de8c29: js 0x140de8c32
    s.pc=s.read(('i', 5383294002, 8)) if s.condition('s') else 5383293995
    return

def b_140de8c2b(s):
    # 0x140de8c2b: cvtsi2ss xmm0, rax
    s.setlane('xmm0',float(signed(s.read(('r', 'rax', 8)),64)))
    # 0x140de8c30: jmp 0x140de8c47
    s.pc=s.read(('i', 5383294023, 8))
    return

def b_140de8c32(s):
    # 0x140de8c32: mov rcx, rax
    s.write(('r', 'rcx', 8),s.read(('r', 'rax', 8)))
    # 0x140de8c35: shr rcx, 1
    s.integer('shr',[('r', 'rcx', 8), ('i', 1, 8)])
    # 0x140de8c38: and eax, 1
    s.integer('and',[('r', 'eax', 4), ('i', 1, 4)])
    # 0x140de8c3b: or rax, rcx
    s.integer('or',[('r', 'rax', 8), ('r', 'rcx', 8)])
    # 0x140de8c3e: cvtsi2ss xmm0, rax
    s.setlane('xmm0',float(signed(s.read(('r', 'rax', 8)),64)))
    # 0x140de8c43: addss xmm0, xmm0
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm0', 16))
    s.pc=5383294023
    return

def b_140de8c47(s):
    # 0x140de8c47: movss xmm7, dword ptr [rip + 0x204e2d9]
    s.simd_move('movss',('r', 'xmm7', 16),('m', None, None, 1, 5417168680, 4))
    # 0x140de8c4f: movaps xmm8, xmm7
    s.simd_move('movaps',('r', 'xmm8', 16),('r', 'xmm7', 16))
    # 0x140de8c53: divss xmm8, xmm0
    s.float_op('divss',('r', 'xmm8', 16),('r', 'xmm0', 16))
    # 0x140de8c58: mulss xmm8, dword ptr [rip + 0x241601f]
    s.float_op('mulss',('r', 'xmm8', 16),('m', None, None, 1, 5421132928, 4))
    # 0x140de8c61: movaps xmm9, xmm8
    s.simd_move('movaps',('r', 'xmm9', 16),('r', 'xmm8', 16))
    # 0x140de8c65: minss xmm9, xmm6
    s.float_op('minss',('r', 'xmm9', 16),('r', 'xmm6', 16))
    # 0x140de8c6a: cmpunordss xmm6, xmm6
    s.float_op('cmpunordss',('r', 'xmm6', 16),('r', 'xmm6', 16))
    # 0x140de8c6f: mov r14, qword ptr [r9 + 0x10]
    s.write(('r', 'r14', 8),s.read(('m', 'r9', None, 1, 16, 8)))
    # 0x140de8c73: cmp r14, qword ptr [r9]
    s.integer('cmp',[('r', 'r14', 8), ('m', 'r9', None, 1, 0, 8)])
    # 0x140de8c76: jne 0x140de8c86
    s.pc=s.read(('i', 5383294086, 8)) if s.condition('ne') else 5383294072
    return

def b_140de8c78(s):
    # 0x140de8c78: mov rcx, r9
    s.write(('r', 'rcx', 8),s.read(('r', 'r9', 8)))
    # 0x140de8c7b: mov rbx, r9
    s.write(('r', 'rbx', 8),s.read(('r', 'r9', 8)))
    # 0x140de8c7e: call 0x142d8d710
    s.push(5383294083)
    s.pc=s.read(('i', 5416474384, 8))
    return

def b_140de8c83(s):
    # 0x140de8c83: mov r9, rbx
    s.write(('r', 'r9', 8),s.read(('r', 'rbx', 8)))
    s.pc=5383294086
    return

def b_140de8c86(s):
    # 0x140de8c86: andps xmm8, xmm6
    s.float_op('andps',('r', 'xmm8', 16),('r', 'xmm6', 16))
    # 0x140de8c8a: andnps xmm6, xmm9
    s.float_op('andnps',('r', 'xmm6', 16),('r', 'xmm9', 16))
    # 0x140de8c8e: mov rax, qword ptr [r9 + 8]
    s.write(('r', 'rax', 8),s.read(('m', 'r9', None, 1, 8, 8)))
    # 0x140de8c92: mov dword ptr [rax + r14*4], 0
    s.write(('m', 'rax', 'r14', 4, 0, 4),s.read(('i', 0, 4)))
    # 0x140de8c9a: inc r14
    s.integer('inc',[('r', 'r14', 8)])
    # 0x140de8c9d: mov qword ptr [r9 + 0x10], r14
    s.write(('m', 'r9', None, 1, 16, 8),s.read(('r', 'r14', 8)))
    # 0x140de8ca1: test rdi, rdi
    s.integer('test',[('r', 'rdi', 8), ('r', 'rdi', 8)])
    # 0x140de8ca4: js 0x140de8cb1
    s.pc=s.read(('i', 5383294129, 8)) if s.condition('s') else 5383294118
    return

def b_140de8ca6(s):
    # 0x140de8ca6: xorps xmm9, xmm9
    s.float_op('xorps',('r', 'xmm9', 16),('r', 'xmm9', 16))
    # 0x140de8caa: cvtsi2ss xmm9, rdi
    s.setlane('xmm9',float(signed(s.read(('r', 'rdi', 8)),64)))
    # 0x140de8caf: jmp 0x140de8ccd
    s.pc=s.read(('i', 5383294157, 8))
    return

def b_140de8cb1(s):
    # 0x140de8cb1: mov rax, rdi
    s.write(('r', 'rax', 8),s.read(('r', 'rdi', 8)))
    # 0x140de8cb4: shr rax, 1
    s.integer('shr',[('r', 'rax', 8), ('i', 1, 8)])
    # 0x140de8cb7: mov ecx, edi
    s.write(('r', 'ecx', 4),s.read(('r', 'edi', 4)))
    # 0x140de8cb9: and ecx, 1
    s.integer('and',[('r', 'ecx', 4), ('i', 1, 4)])
    # 0x140de8cbc: or rcx, rax
    s.integer('or',[('r', 'rcx', 8), ('r', 'rax', 8)])
    # 0x140de8cbf: xorps xmm9, xmm9
    s.float_op('xorps',('r', 'xmm9', 16),('r', 'xmm9', 16))
    # 0x140de8cc3: cvtsi2ss xmm9, rcx
    s.setlane('xmm9',float(signed(s.read(('r', 'rcx', 8)),64)))
    # 0x140de8cc8: addss xmm9, xmm9
    s.float_op('addss',('r', 'xmm9', 16),('r', 'xmm9', 16))
    s.pc=5383294157
    return

def b_140de8ccd(s):
    # 0x140de8ccd: orps xmm6, xmm8
    s.float_op('orps',('r', 'xmm6', 16),('r', 'xmm8', 16))
    # 0x140de8cd1: addss xmm9, dword ptr [rip + 0x204e25a]
    s.float_op('addss',('r', 'xmm9', 16),('m', None, None, 1, 5417168692, 4))
    # 0x140de8cda: add rdi, -2
    s.integer('add',[('r', 'rdi', 8), ('i', -2, 8)])
    # 0x140de8cde: mov rax, qword ptr [r9]
    s.write(('r', 'rax', 8),s.read(('m', 'r9', None, 1, 0, 8)))
    # 0x140de8ce1: sub rax, r14
    s.integer('sub',[('r', 'rax', 8), ('r', 'r14', 8)])
    # 0x140de8ce4: cmp rdi, rax
    s.integer('cmp',[('r', 'rdi', 8), ('r', 'rax', 8)])
    # 0x140de8ce7: ja 0x140de8dff
    s.pc=s.read(('i', 5383294463, 8)) if s.condition('a') else 5383294189
    return

def b_140de8ced(s):
    # 0x140de8ced: divss xmm7, xmm9
    s.float_op('divss',('r', 'xmm7', 16),('r', 'xmm9', 16))
    # 0x140de8cf2: mov qword ptr [rbp - 0x40], r14
    s.write(('m', 'rbp', None, 1, -64, 8),s.read(('r', 'r14', 8)))
    # 0x140de8cf6: lea rbx, [r14*4]
    s.write(('r', 'rbx', 8),s.address(('m', None, 'r14', 4, 0, 8)))
    # 0x140de8cfe: mov qword ptr [rbp - 0x48], r9
    s.write(('m', 'rbp', None, 1, -72, 8),s.read(('r', 'r9', 8)))
    # 0x140de8d02: mov r14, qword ptr [r9 + 8]
    s.write(('r', 'r14', 8),s.read(('m', 'r9', None, 1, 8, 8)))
    # 0x140de8d06: add r14, rbx
    s.integer('add',[('r', 'r14', 8), ('r', 'rbx', 8)])
    # 0x140de8d09: xor eax, eax
    s.integer('xor',[('r', 'eax', 4), ('r', 'eax', 4)])
    # 0x140de8d0b: movss xmm8, dword ptr [rip + 0x204e224]
    s.simd_move('movss',('r', 'xmm8', 16),('m', None, None, 1, 5417168696, 4))
    # 0x140de8d14: jmp 0x140de8d47
    s.pc=s.read(('i', 5383294279, 8))
    return

def b_140de8d16(s):
    # 0x140de8d16: nop word ptr cs:[rax + rax]
    s.pc=5383294240
    return

def b_140de8d20(s):
    # 0x140de8d20: xorps xmm1, xmm1
    s.float_op('xorps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x140de8d23: cvtsi2ss xmm1, r15
    s.setlane('xmm1',float(signed(s.read(('r', 'r15', 8)),64)))
    s.pc=5383294248
    return

def b_140de8d28(s):
    # 0x140de8d28: mulss xmm1, xmm7
    s.float_op('mulss',('r', 'xmm1', 16),('r', 'xmm7', 16))
    # 0x140de8d2c: addss xmm0, xmm8
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm8', 16))
    # 0x140de8d31: mulss xmm0, xmm6
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x140de8d35: addss xmm0, xmm1
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x140de8d39: movss dword ptr [r14 + rdx*4], xmm0
    s.simd_move('movss',('m', 'r14', 'rdx', 4, 0, 4),('r', 'xmm0', 16))
    # 0x140de8d3f: mov rax, r15
    s.write(('r', 'rax', 8),s.read(('r', 'r15', 8)))
    # 0x140de8d42: cmp rdi, r15
    s.integer('cmp',[('r', 'rdi', 8), ('r', 'r15', 8)])
    # 0x140de8d45: je 0x140de8d7d
    s.pc=s.read(('i', 5383294333, 8)) if s.condition('e') else 5383294279
    return

def b_140de8d47(s):
    # 0x140de8d47: mov qword ptr [rbp - 0x50], rax
    s.write(('m', 'rbp', None, 1, -80, 8),s.read(('r', 'rax', 8)))
    # 0x140de8d4b: mov rcx, rsi
    s.write(('r', 'rcx', 8),s.read(('r', 'rsi', 8)))
    # 0x140de8d4e: call 0x140e02880
    s.push(5383294291)
    s.pc=s.read(('i', 5383399552, 8))
    return

def b_140de8d53(s):
    # 0x140de8d53: nop 
    # 0x140de8d54: mov rdx, qword ptr [rbp - 0x50]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, -80, 8)))
    # 0x140de8d58: mov r15, rdx
    s.write(('r', 'r15', 8),s.read(('r', 'rdx', 8)))
    # 0x140de8d5b: inc r15
    s.integer('inc',[('r', 'r15', 8)])
    # 0x140de8d5e: jns 0x140de8d20
    s.pc=s.read(('i', 5383294240, 8)) if s.condition('ns') else 5383294304
    return

def b_140de8d60(s):
    # 0x140de8d60: mov rax, r15
    s.write(('r', 'rax', 8),s.read(('r', 'r15', 8)))
    # 0x140de8d63: shr rax, 1
    s.integer('shr',[('r', 'rax', 8), ('i', 1, 8)])
    # 0x140de8d66: mov ecx, r15d
    s.write(('r', 'ecx', 4),s.read(('r', 'r15d', 4)))
    # 0x140de8d69: and ecx, 1
    s.integer('and',[('r', 'ecx', 4), ('i', 1, 4)])
    # 0x140de8d6c: or rcx, rax
    s.integer('or',[('r', 'rcx', 8), ('r', 'rax', 8)])
    # 0x140de8d6f: xorps xmm1, xmm1
    s.float_op('xorps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x140de8d72: cvtsi2ss xmm1, rcx
    s.setlane('xmm1',float(signed(s.read(('r', 'rcx', 8)),64)))
    # 0x140de8d77: addss xmm1, xmm1
    s.float_op('addss',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x140de8d7b: jmp 0x140de8d28
    s.pc=s.read(('i', 5383294248, 8))
    return

def b_140de8d7d(s):
    # 0x140de8d7d: mov rdi, qword ptr [rbp - 0x40]
    s.write(('r', 'rdi', 8),s.read(('m', 'rbp', None, 1, -64, 8)))
    # 0x140de8d81: lea rax, [rdi + r15]
    s.write(('r', 'rax', 8),s.address(('m', 'rdi', 'r15', 1, 0, 8)))
    # 0x140de8d85: mov rsi, qword ptr [rbp - 0x48]
    s.write(('r', 'rsi', 8),s.read(('m', 'rbp', None, 1, -72, 8)))
    # 0x140de8d89: mov qword ptr [rsi + 0x10], rax
    s.write(('m', 'rsi', None, 1, 16, 8),s.read(('r', 'rax', 8)))
    # 0x140de8d8d: cmp rax, qword ptr [rsi]
    s.integer('cmp',[('r', 'rax', 8), ('m', 'rsi', None, 1, 0, 8)])
    # 0x140de8d90: jne 0x140de8d9a
    s.pc=s.read(('i', 5383294362, 8)) if s.condition('ne') else 5383294354
    return

def b_140de8d92(s):
    # 0x140de8d92: mov rcx, rsi
    s.write(('r', 'rcx', 8),s.read(('r', 'rsi', 8)))
    # 0x140de8d95: call 0x142d8d710
    s.push(5383294362)
    s.pc=s.read(('i', 5416474384, 8))
    return

def b_140de8d9a(s):
    # 0x140de8d9a: add rbx, qword ptr [rsi + 8]
    s.integer('add',[('r', 'rbx', 8), ('m', 'rsi', None, 1, 8, 8)])
    # 0x140de8d9e: mov dword ptr [rbx + r15*4], 0x3f800000
    s.write(('m', 'rbx', 'r15', 4, 0, 4),s.read(('i', 1065353216, 4)))
    # 0x140de8da6: lea rax, [rdi + r15]
    s.write(('r', 'rax', 8),s.address(('m', 'rdi', 'r15', 1, 0, 8)))
    # 0x140de8daa: inc rax
    s.integer('inc',[('r', 'rax', 8)])
    # 0x140de8dad: mov qword ptr [rsi + 0x10], rax
    s.write(('m', 'rsi', None, 1, 16, 8),s.read(('r', 'rax', 8)))
    s.pc=5383294385
    return

def b_140de8db1(s):
    # 0x140de8db1: movaps xmm6, xmmword ptr [rbp - 0x30]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rbp', None, 1, -48, 16))
    # 0x140de8db5: movaps xmm7, xmmword ptr [rbp - 0x20]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rbp', None, 1, -32, 16))
    # 0x140de8db9: movaps xmm8, xmmword ptr [rbp - 0x10]
    s.simd_move('movaps',('r', 'xmm8', 16),('m', 'rbp', None, 1, -16, 16))
    # 0x140de8dbe: movaps xmm9, xmmword ptr [rbp]
    s.simd_move('movaps',('r', 'xmm9', 16),('m', 'rbp', None, 1, 0, 16))
    # 0x140de8dc3: add rsp, 0x98
    s.integer('add',[('r', 'rsp', 8), ('i', 152, 8)])
    # 0x140de8dca: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x140de8dcb: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x140de8dcc: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x140de8dcd: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x140de8dcf: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x140de8dd1: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x140de8dd2: ret 
    s.pc=s.pop()
    return

def b_140de8dd3(s):
    # 0x140de8dd3: mov qword ptr [rsp + 0x20], 4
    s.write(('m', 'rsp', None, 1, 32, 8),s.read(('i', 4, 8)))
    # 0x140de8ddc: mov r8d, 2
    s.write(('r', 'r8d', 4),s.read(('i', 2, 4)))
    # 0x140de8de2: mov rsi, r9
    s.write(('r', 'rsi', 8),s.read(('r', 'r9', 8)))
    # 0x140de8de5: mov r9d, 4
    s.write(('r', 'r9d', 4),s.read(('i', 4, 4)))
    # 0x140de8deb: mov rcx, rsi
    s.write(('r', 'rcx', 8),s.read(('r', 'rsi', 8)))
    # 0x140de8dee: call 0x142d7f1b0
    s.push(5383294451)
    s.pc=s.read(('i', 5416415664, 8))
    return

def b_140de8df3(s):
    # 0x140de8df3: mov r9, rsi
    s.write(('r', 'r9', 8),s.read(('r', 'rsi', 8)))
    # 0x140de8df6: mov rdx, qword ptr [rsi + 0x10]
    s.write(('r', 'rdx', 8),s.read(('m', 'rsi', None, 1, 16, 8)))
    # 0x140de8dfa: jmp 0x140de8bfb
    s.pc=s.read(('i', 5383293947, 8))
    return

def b_140de8dff(s):
    # 0x140de8dff: mov qword ptr [rsp + 0x20], 4
    s.write(('m', 'rsp', None, 1, 32, 8),s.read(('i', 4, 8)))
    # 0x140de8e08: mov rbx, r9
    s.write(('r', 'rbx', 8),s.read(('r', 'r9', 8)))
    # 0x140de8e0b: mov r9d, 4
    s.write(('r', 'r9d', 4),s.read(('i', 4, 4)))
    # 0x140de8e11: mov rcx, rbx
    s.write(('r', 'rcx', 8),s.read(('r', 'rbx', 8)))
    # 0x140de8e14: mov rdx, r14
    s.write(('r', 'rdx', 8),s.read(('r', 'r14', 8)))
    # 0x140de8e17: mov r8, rdi
    s.write(('r', 'r8', 8),s.read(('r', 'rdi', 8)))
    # 0x140de8e1a: call 0x142d7f1b0
    s.push(5383294495)
    s.pc=s.read(('i', 5416415664, 8))
    return

def b_140de8e1f(s):
    # 0x140de8e1f: mov r9, rbx
    s.write(('r', 'r9', 8),s.read(('r', 'rbx', 8)))
    # 0x140de8e22: mov r14, qword ptr [rbx + 0x10]
    s.write(('r', 'r14', 8),s.read(('m', 'rbx', None, 1, 16, 8)))
    # 0x140de8e26: jmp 0x140de8ced
    s.pc=s.read(('i', 5383294189, 8))
    return

def b_140de8e2b(s):
    # 0x140de8e2b: nop dword ptr [rax + rax]
    # 0x140de8e30: mov qword ptr [rsp + 0x10], rdx
    s.write(('m', 'rsp', None, 1, 16, 8),s.read(('r', 'rdx', 8)))
    # 0x140de8e35: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x140de8e36: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x140de8e38: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x140de8e3a: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x140de8e3b: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x140de8e3c: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x140de8e3d: sub rsp, 0x68
    s.integer('sub',[('r', 'rsp', 8), ('i', 104, 8)])
    # 0x140de8e41: lea rbp, [rdx + 0x80]
    s.write(('r', 'rbp', 8),s.address(('m', 'rdx', None, 1, 128, 8)))
    # 0x140de8e48: movaps xmmword ptr [rsp + 0x20], xmm9
    s.simd_move('movaps',('m', 'rsp', None, 1, 32, 16),('r', 'xmm9', 16))
    # 0x140de8e4e: movaps xmmword ptr [rsp + 0x30], xmm8
    s.simd_move('movaps',('m', 'rsp', None, 1, 48, 16),('r', 'xmm8', 16))
    # 0x140de8e54: movaps xmmword ptr [rsp + 0x40], xmm7
    s.simd_move('movaps',('m', 'rsp', None, 1, 64, 16),('r', 'xmm7', 16))
    # 0x140de8e59: movaps xmmword ptr [rsp + 0x50], xmm6
    s.simd_move('movaps',('m', 'rsp', None, 1, 80, 16),('r', 'xmm6', 16))
    # 0x140de8e5e: mov rcx, qword ptr [rbp - 0x40]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, -64, 8)))
    # 0x140de8e62: add rcx, qword ptr [rbp - 0x50]
    s.integer('add',[('r', 'rcx', 8), ('m', 'rbp', None, 1, -80, 8)])
    # 0x140de8e66: mov rax, qword ptr [rbp - 0x48]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, -72, 8)))
    # 0x140de8e6a: mov qword ptr [rax + 0x10], rcx
    s.write(('m', 'rax', None, 1, 16, 8),s.read(('r', 'rcx', 8)))
    # 0x140de8e6e: movaps xmm6, xmmword ptr [rsp + 0x50]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rsp', None, 1, 80, 16))
    # 0x140de8e73: movaps xmm7, xmmword ptr [rsp + 0x40]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rsp', None, 1, 64, 16))
    # 0x140de8e78: movaps xmm8, xmmword ptr [rsp + 0x30]
    s.simd_move('movaps',('r', 'xmm8', 16),('m', 'rsp', None, 1, 48, 16))
    # 0x140de8e7e: movaps xmm9, xmmword ptr [rsp + 0x20]
    s.simd_move('movaps',('r', 'xmm9', 16),('m', 'rsp', None, 1, 32, 16))
    # 0x140de8e84: add rsp, 0x68
    s.integer('add',[('r', 'rsp', 8), ('i', 104, 8)])
    # 0x140de8e88: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x140de8e89: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x140de8e8a: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x140de8e8b: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x140de8e8d: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x140de8e8f: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x140de8e90: ret 
    s.pc=s.pop()
    return

def b_140def2a0(s):
    # 0x140def2a0: mov rax, rcx
    s.write(('r', 'rax', 8),s.read(('r', 'rcx', 8)))
    # 0x140def2a3: movss xmm0, dword ptr [rsp + 0x28]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rsp', None, 1, 40, 4))
    # 0x140def2a9: movss dword ptr [rcx], xmm1
    s.simd_move('movss',('m', 'rcx', None, 1, 0, 4),('r', 'xmm1', 16))
    # 0x140def2ad: movss dword ptr [rcx + 4], xmm2
    s.simd_move('movss',('m', 'rcx', None, 1, 4, 4),('r', 'xmm2', 16))
    # 0x140def2b2: movss dword ptr [rcx + 8], xmm3
    s.simd_move('movss',('m', 'rcx', None, 1, 8, 4),('r', 'xmm3', 16))
    # 0x140def2b7: movss dword ptr [rcx + 0xc], xmm0
    s.simd_move('movss',('m', 'rcx', None, 1, 12, 4),('r', 'xmm0', 16))
    # 0x140def2bc: ret 
    s.pc=s.pop()
    return

def b_140def2c0(s):
    # 0x140def2c0: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x140def2c1: sub rsp, 0x60
    s.integer('sub',[('r', 'rsp', 8), ('i', 96, 8)])
    # 0x140def2c5: movaps xmmword ptr [rsp + 0x50], xmm9
    s.simd_move('movaps',('m', 'rsp', None, 1, 80, 16),('r', 'xmm9', 16))
    # 0x140def2cb: movaps xmmword ptr [rsp + 0x40], xmm8
    s.simd_move('movaps',('m', 'rsp', None, 1, 64, 16),('r', 'xmm8', 16))
    # 0x140def2d1: movaps xmmword ptr [rsp + 0x30], xmm7
    s.simd_move('movaps',('m', 'rsp', None, 1, 48, 16),('r', 'xmm7', 16))
    # 0x140def2d6: movaps xmmword ptr [rsp + 0x20], xmm6
    s.simd_move('movaps',('m', 'rsp', None, 1, 32, 16),('r', 'xmm6', 16))
    # 0x140def2db: mov rsi, rcx
    s.write(('r', 'rsi', 8),s.read(('r', 'rcx', 8)))
    # 0x140def2de: movss xmm9, dword ptr [rip + 0x2047c41]
    s.simd_move('movss',('r', 'xmm9', 16),('m', None, None, 1, 5417168680, 4))
    # 0x140def2e7: subss xmm9, xmm1
    s.float_op('subss',('r', 'xmm9', 16),('r', 'xmm1', 16))
    # 0x140def2ec: movss xmm7, dword ptr [rip + 0x21688d8]
    s.simd_move('movss',('r', 'xmm7', 16),('m', None, None, 1, 5418351564, 4))
    # 0x140def2f4: mulss xmm9, xmm7
    s.float_op('mulss',('r', 'xmm9', 16),('r', 'xmm7', 16))
    # 0x140def2f9: movss xmm6, dword ptr [rcx + 8]
    s.simd_move('movss',('r', 'xmm6', 16),('m', 'rcx', None, 1, 8, 4))
    # 0x140def2fe: movss xmm0, dword ptr [rcx + 0xc]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rcx', None, 1, 12, 4))
    # 0x140def303: movaps xmm1, xmm7
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm7', 16))
    # 0x140def306: call 0x142e32a70
    s.push(5383320331)
    s.pc=s.read(('i', 5417151088, 8))
    return

def b_140def30b(s):
    # 0x140def30b: addss xmm7, xmm0
    s.float_op('addss',('r', 'xmm7', 16),('r', 'xmm0', 16))
    # 0x140def30f: xorps xmm1, xmm1
    s.float_op('xorps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x140def312: movaps xmm8, xmm0
    s.simd_move('movaps',('r', 'xmm8', 16),('r', 'xmm0', 16))
    # 0x140def316: cmpltss xmm8, xmm1
    s.float_op('cmpltss',('r', 'xmm8', 16),('r', 'xmm1', 16))
    # 0x140def31c: andps xmm7, xmm8
    s.float_op('andps',('r', 'xmm7', 16),('r', 'xmm8', 16))
    # 0x140def320: andnps xmm8, xmm0
    s.float_op('andnps',('r', 'xmm8', 16),('r', 'xmm0', 16))
    # 0x140def324: orps xmm8, xmm7
    s.float_op('orps',('r', 'xmm8', 16),('r', 'xmm7', 16))
    # 0x140def328: addss xmm8, xmm9
    s.float_op('addss',('r', 'xmm8', 16),('r', 'xmm9', 16))
    # 0x140def32d: movaps xmm0, xmm8
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm8', 16))
    # 0x140def331: call 0x142e329e0
    s.push(5383320374)
    s.pc=s.read(('i', 5417150944, 8))
    return

def b_140def336(s):
    # 0x140def336: movaps xmm7, xmm0
    s.simd_move('movaps',('r', 'xmm7', 16),('r', 'xmm0', 16))
    # 0x140def339: movaps xmm0, xmm8
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm8', 16))
    # 0x140def33d: call 0x142e32b30
    s.push(5383320386)
    s.pc=s.read(('i', 5417151280, 8))
    return

def b_140def342(s):
    # 0x140def342: mulss xmm7, xmm6
    s.float_op('mulss',('r', 'xmm7', 16),('r', 'xmm6', 16))
    # 0x140def346: mulss xmm6, xmm0
    s.float_op('mulss',('r', 'xmm6', 16),('r', 'xmm0', 16))
    # 0x140def34a: addss xmm7, dword ptr [rsi]
    s.float_op('addss',('r', 'xmm7', 16),('m', 'rsi', None, 1, 0, 4))
    # 0x140def34e: addss xmm6, dword ptr [rsi + 4]
    s.float_op('addss',('r', 'xmm6', 16),('m', 'rsi', None, 1, 4, 4))
    # 0x140def353: movaps xmm0, xmm7
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm7', 16))
    # 0x140def356: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x140def359: movaps xmm6, xmmword ptr [rsp + 0x20]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rsp', None, 1, 32, 16))
    # 0x140def35e: movaps xmm7, xmmword ptr [rsp + 0x30]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rsp', None, 1, 48, 16))
    # 0x140def363: movaps xmm8, xmmword ptr [rsp + 0x40]
    s.simd_move('movaps',('r', 'xmm8', 16),('m', 'rsp', None, 1, 64, 16))
    # 0x140def369: movaps xmm9, xmmword ptr [rsp + 0x50]
    s.simd_move('movaps',('r', 'xmm9', 16),('m', 'rsp', None, 1, 80, 16))
    # 0x140def36f: add rsp, 0x60
    s.integer('add',[('r', 'rsp', 8), ('i', 96, 8)])
    # 0x140def373: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x140def374: ret 
    s.pc=s.pop()
    return

def b_140def5e0(s):
    # 0x140def5e0: sub rsp, 0x58
    s.integer('sub',[('r', 'rsp', 8), ('i', 88, 8)])
    # 0x140def5e4: movaps xmmword ptr [rsp + 0x40], xmm8
    s.simd_move('movaps',('m', 'rsp', None, 1, 64, 16),('r', 'xmm8', 16))
    # 0x140def5ea: movaps xmmword ptr [rsp + 0x30], xmm7
    s.simd_move('movaps',('m', 'rsp', None, 1, 48, 16),('r', 'xmm7', 16))
    # 0x140def5ef: movaps xmmword ptr [rsp + 0x20], xmm6
    s.simd_move('movaps',('m', 'rsp', None, 1, 32, 16),('r', 'xmm6', 16))
    # 0x140def5f4: movss xmm8, dword ptr [rip + 0x204792b]
    s.simd_move('movss',('r', 'xmm8', 16),('m', None, None, 1, 5417168680, 4))
    # 0x140def5fd: subss xmm8, xmm1
    s.float_op('subss',('r', 'xmm8', 16),('r', 'xmm1', 16))
    # 0x140def602: movss xmm6, dword ptr [rip + 0x21685c2]
    s.simd_move('movss',('r', 'xmm6', 16),('m', None, None, 1, 5418351564, 4))
    # 0x140def60a: mulss xmm8, xmm6
    s.float_op('mulss',('r', 'xmm8', 16),('r', 'xmm6', 16))
    # 0x140def60f: movss xmm0, dword ptr [rcx + 0xc]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rcx', None, 1, 12, 4))
    # 0x140def614: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x140def617: call 0x142e32a70
    s.push(5383321116)
    s.pc=s.read(('i', 5417151088, 8))
    return

def b_140def61c(s):
    # 0x140def61c: addss xmm6, xmm0
    s.float_op('addss',('r', 'xmm6', 16),('r', 'xmm0', 16))
    # 0x140def620: xorps xmm1, xmm1
    s.float_op('xorps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x140def623: movaps xmm7, xmm0
    s.simd_move('movaps',('r', 'xmm7', 16),('r', 'xmm0', 16))
    # 0x140def626: cmpltss xmm7, xmm1
    s.float_op('cmpltss',('r', 'xmm7', 16),('r', 'xmm1', 16))
    # 0x140def62b: andps xmm6, xmm7
    s.float_op('andps',('r', 'xmm6', 16),('r', 'xmm7', 16))
    # 0x140def62e: andnps xmm7, xmm0
    s.float_op('andnps',('r', 'xmm7', 16),('r', 'xmm0', 16))
    # 0x140def631: orps xmm7, xmm6
    s.float_op('orps',('r', 'xmm7', 16),('r', 'xmm6', 16))
    # 0x140def634: addss xmm7, xmm8
    s.float_op('addss',('r', 'xmm7', 16),('r', 'xmm8', 16))
    # 0x140def639: movaps xmm0, xmm7
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm7', 16))
    # 0x140def63c: call 0x142e329e0
    s.push(5383321153)
    s.pc=s.read(('i', 5417150944, 8))
    return

def b_140def641(s):
    # 0x140def641: movaps xmm6, xmm0
    s.simd_move('movaps',('r', 'xmm6', 16),('r', 'xmm0', 16))
    # 0x140def644: movaps xmm0, xmm7
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm7', 16))
    # 0x140def647: call 0x142e32b30
    s.push(5383321164)
    s.pc=s.read(('i', 5417151280, 8))
    return

def b_140def64c(s):
    # 0x140def64c: movaps xmm1, xmm0
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x140def64f: movaps xmm0, xmm6
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x140def652: movaps xmm6, xmmword ptr [rsp + 0x20]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rsp', None, 1, 32, 16))
    # 0x140def657: movaps xmm7, xmmword ptr [rsp + 0x30]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rsp', None, 1, 48, 16))
    # 0x140def65c: movaps xmm8, xmmword ptr [rsp + 0x40]
    s.simd_move('movaps',('r', 'xmm8', 16),('m', 'rsp', None, 1, 64, 16))
    # 0x140def662: add rsp, 0x58
    s.integer('add',[('r', 'rsp', 8), ('i', 88, 8)])
    # 0x140def666: ret 
    s.pc=s.pop()
    return

def b_140deff30(s):
    # 0x140deff30: movss xmm0, dword ptr [rcx + 8]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rcx', None, 1, 8, 4))
    # 0x140deff35: mulss xmm0, dword ptr [rip + 0x2167c8f]
    s.float_op('mulss',('r', 'xmm0', 16),('m', None, None, 1, 5418351564, 4))
    # 0x140deff3d: ret 
    s.pc=s.pop()
    return

def b_140df0010(s):
    # 0x140df0010: sub rsp, 0x48
    s.integer('sub',[('r', 'rsp', 8), ('i', 72, 8)])
    # 0x140df0014: movaps xmmword ptr [rsp + 0x30], xmm7
    s.simd_move('movaps',('m', 'rsp', None, 1, 48, 16),('r', 'xmm7', 16))
    # 0x140df0019: movaps xmmword ptr [rsp + 0x20], xmm6
    s.simd_move('movaps',('m', 'rsp', None, 1, 32, 16),('r', 'xmm6', 16))
    # 0x140df001e: movss xmm0, dword ptr [rdx + 0x10]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rdx', None, 1, 16, 4))
    # 0x140df0023: movss xmm1, dword ptr [rdx + 0x14]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rdx', None, 1, 20, 4))
    # 0x140df0028: movaps xmm2, xmm0
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x140df002b: mulss xmm2, xmm1
    s.float_op('mulss',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x140df002f: xorps xmm3, xmm3
    s.float_op('xorps',('r', 'xmm3', 16),('r', 'xmm3', 16))
    # 0x140df0032: ucomiss xmm2, xmm3
    s.compare_float(('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x140df0035: jbe 0x140df00d2
    s.pc=s.read(('i', 5383323858, 8)) if s.condition('be') else 5383323707
    return

def b_140df003b(s):
    # 0x140df003b: movsd xmm2, qword ptr [rdx]
    s.simd_move('movsd',('r', 'xmm2', 16),('m', 'rdx', None, 1, 0, 8))
    # 0x140df003f: movaps xmm3, xmmword ptr [rip + 0x20477da]
    s.simd_move('movaps',('r', 'xmm3', 16),('m', None, None, 1, 5417170976, 16))
    # 0x140df0046: xorps xmm3, xmm2
    s.float_op('xorps',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x140df0049: shufps xmm3, xmm2, 1
    s.shuffle('shufps',('r', 'xmm3', 16),('r', 'xmm2', 16),1)
    # 0x140df004d: shufps xmm2, xmm3, 0x84
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm3', 16),132)
    # 0x140df0051: movss xmm3, dword ptr [rip + 0x2046edf]
    s.simd_move('movss',('r', 'xmm3', 16),('m', None, None, 1, 5417168696, 4))
    # 0x140df0059: movaps xmm4, xmm0
    s.simd_move('movaps',('r', 'xmm4', 16),('r', 'xmm0', 16))
    # 0x140df005c: mulss xmm4, xmm3
    s.float_op('mulss',('r', 'xmm4', 16),('r', 'xmm3', 16))
    # 0x140df0060: mulss xmm3, xmm1
    s.float_op('mulss',('r', 'xmm3', 16),('r', 'xmm1', 16))
    # 0x140df0064: movss xmm5, dword ptr [rip + 0x2046ee4]
    s.simd_move('movss',('r', 'xmm5', 16),('m', None, None, 1, 5417168720, 4))
    # 0x140df006c: mulss xmm1, xmm5
    s.float_op('mulss',('r', 'xmm1', 16),('r', 'xmm5', 16))
    # 0x140df0070: mulss xmm0, xmm5
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm5', 16))
    # 0x140df0074: movaps xmm5, xmm4
    s.simd_move('movaps',('r', 'xmm5', 16),('r', 'xmm4', 16))
    # 0x140df0077: shufps xmm5, xmm3, 0
    s.shuffle('shufps',('r', 'xmm5', 16),('r', 'xmm3', 16),0)
    # 0x140df007b: mulps xmm5, xmm2
    s.float_op('mulps',('r', 'xmm5', 16),('r', 'xmm2', 16))
    # 0x140df007e: shufps xmm4, xmm1, 0
    s.shuffle('shufps',('r', 'xmm4', 16),('r', 'xmm1', 16),0)
    # 0x140df0082: mulps xmm4, xmm2
    s.float_op('mulps',('r', 'xmm4', 16),('r', 'xmm2', 16))
    # 0x140df0085: movddup xmm6, qword ptr [rdx + 8]
    s.simd_move('movddup',('r', 'xmm6', 16),('m', 'rdx', None, 1, 8, 8))
    # 0x140df008a: movaps xmm7, xmm5
    s.simd_move('movaps',('r', 'xmm7', 16),('r', 'xmm5', 16))
    # 0x140df008d: movlhps xmm7, xmm4
    s.simd_move('movlhps',('r', 'xmm7', 16),('r', 'xmm4', 16))
    # 0x140df0090: movhlps xmm4, xmm5
    s.simd_move('movhlps',('r', 'xmm4', 16),('r', 'xmm5', 16))
    # 0x140df0093: addps xmm4, xmm7
    s.float_op('addps',('r', 'xmm4', 16),('r', 'xmm7', 16))
    # 0x140df0096: addps xmm4, xmm6
    s.float_op('addps',('r', 'xmm4', 16),('r', 'xmm6', 16))
    # 0x140df0099: movups xmmword ptr [rcx], xmm4
    s.simd_move('movups',('m', 'rcx', None, 1, 0, 16),('r', 'xmm4', 16))
    # 0x140df009c: movaps xmm4, xmm0
    s.simd_move('movaps',('r', 'xmm4', 16),('r', 'xmm0', 16))
    # 0x140df009f: shufps xmm4, xmm1, 0
    s.shuffle('shufps',('r', 'xmm4', 16),('r', 'xmm1', 16),0)
    # 0x140df00a3: mulps xmm4, xmm2
    s.float_op('mulps',('r', 'xmm4', 16),('r', 'xmm2', 16))
    # 0x140df00a6: shufps xmm0, xmm3, 0
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm3', 16),0)
    # 0x140df00aa: mulps xmm0, xmm2
    s.float_op('mulps',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x140df00ad: movaps xmm1, xmm4
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm4', 16))
    # 0x140df00b0: movlhps xmm1, xmm0
    s.simd_move('movlhps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x140df00b3: movhlps xmm0, xmm4
    s.simd_move('movhlps',('r', 'xmm0', 16),('r', 'xmm4', 16))
    # 0x140df00b6: addps xmm0, xmm1
    s.float_op('addps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x140df00b9: addps xmm0, xmm6
    s.float_op('addps',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x140df00bc: movups xmmword ptr [rcx + 0x10], xmm0
    s.simd_move('movups',('m', 'rcx', None, 1, 16, 16),('r', 'xmm0', 16))
    # 0x140df00c0: mov rax, rcx
    s.write(('r', 'rax', 8),s.read(('r', 'rcx', 8)))
    # 0x140df00c3: movaps xmm6, xmmword ptr [rsp + 0x20]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rsp', None, 1, 32, 16))
    # 0x140df00c8: movaps xmm7, xmmword ptr [rsp + 0x30]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rsp', None, 1, 48, 16))
    # 0x140df00cd: add rsp, 0x48
    s.integer('add',[('r', 'rsp', 8), ('i', 72, 8)])
    # 0x140df00d1: ret 
    s.pc=s.pop()
    return

def b_140df00d2(s):
    # 0x140df00d2: lea rcx, [rip + 0x240f941]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5421136410, 8)))
    # 0x140df00d9: lea r8, [rip + 0x240f960]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5421136448, 8)))
    # 0x140df00e0: mov edx, 0x23
    s.write(('r', 'edx', 4),s.read(('i', 35, 4)))
    # 0x140df00e5: call 0x142dc83b0
    s.push(5383323882)
    s.pc=s.read(('i', 5416715184, 8))
    return

def b_140df00ea(s):
    # 0x140df00ea: int3 
    raise RuntimeError('Original unreachable/panic 0x140df00ea')
    s.pc=5383323883
    return

def b_140df1b90(s):
    # 0x140df1b90: sub rsp, 0x28
    s.integer('sub',[('r', 'rsp', 8), ('i', 40, 8)])
    # 0x140df1b94: movd eax, xmm1
    s.simd_move('movd',('r', 'eax', 4),('r', 'xmm1', 16))
    # 0x140df1b98: mov r8, qword ptr [rsp + 0x58]
    s.write(('r', 'r8', 8),s.read(('m', 'rsp', None, 1, 88, 8)))
    # 0x140df1b9d: and eax, 0x7fffffff
    s.integer('and',[('r', 'eax', 4), ('i', 2147483647, 4)])
    # 0x140df1ba2: cmp eax, 0x7f800000
    s.integer('cmp',[('r', 'eax', 4), ('i', 2139095040, 4)])
    # 0x140df1ba7: jge 0x140df1be6
    s.pc=s.read(('i', 5383330790, 8)) if s.condition('ge') else 5383330729
    return

def b_140df1ba9(s):
    # 0x140df1ba9: movd eax, xmm2
    s.simd_move('movd',('r', 'eax', 4),('r', 'xmm2', 16))
    # 0x140df1bad: and eax, 0x7fffffff
    s.integer('and',[('r', 'eax', 4), ('i', 2147483647, 4)])
    # 0x140df1bb2: cmp eax, 0x7f800000
    s.integer('cmp',[('r', 'eax', 4), ('i', 2139095040, 4)])
    # 0x140df1bb7: jge 0x140df1bf7
    s.pc=s.read(('i', 5383330807, 8)) if s.condition('ge') else 5383330745
    return

def b_140df1bb9(s):
    # 0x140df1bb9: movss xmm0, dword ptr [rsp + 0x50]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rsp', None, 1, 80, 4))
    # 0x140df1bbf: movss xmm4, dword ptr [rip + 0x2045361]
    s.simd_move('movss',('r', 'xmm4', 16),('m', None, None, 1, 5417168680, 4))
    # 0x140df1bc7: movlps qword ptr [rcx], xmm4
    s.simd_move('movlps',('m', 'rcx', None, 1, 0, 8),('r', 'xmm4', 16))
    # 0x140df1bca: movd dword ptr [rcx + 0x10], xmm1
    s.simd_move('movd',('m', 'rcx', None, 1, 16, 4),('r', 'xmm1', 16))
    # 0x140df1bcf: movd dword ptr [rcx + 0x14], xmm2
    s.simd_move('movd',('m', 'rcx', None, 1, 20, 4),('r', 'xmm2', 16))
    # 0x140df1bd4: movss dword ptr [rcx + 8], xmm3
    s.simd_move('movss',('m', 'rcx', None, 1, 8, 4),('r', 'xmm3', 16))
    # 0x140df1bd9: movss dword ptr [rcx + 0xc], xmm0
    s.simd_move('movss',('m', 'rcx', None, 1, 12, 4),('r', 'xmm0', 16))
    # 0x140df1bde: mov rax, rcx
    s.write(('r', 'rax', 8),s.read(('r', 'rcx', 8)))
    # 0x140df1be1: add rsp, 0x28
    s.integer('add',[('r', 'rsp', 8), ('i', 40, 8)])
    # 0x140df1be5: ret 
    s.pc=s.pop()
    return

def b_140df1be6(s):
    # 0x140df1be6: lea rcx, [rip + 0x240dfb3]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5421136800, 8)))
    # 0x140df1bed: mov edx, 0x23
    s.write(('r', 'edx', 4),s.read(('i', 35, 4)))
    # 0x140df1bf2: call 0x142dc83b0
    s.push(5383330807)
    s.pc=s.read(('i', 5416715184, 8))
    return

def b_140df1bf7(s):
    # 0x140df1bf7: lea rcx, [rip + 0x240dfc5]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5421136835, 8)))
    # 0x140df1bfe: mov edx, 0x24
    s.write(('r', 'edx', 4),s.read(('i', 36, 4)))
    # 0x140df1c03: call 0x142dc83b0
    s.push(5383330824)
    s.pc=s.read(('i', 5416715184, 8))
    return

def b_140df1c08(s):
    # 0x140df1c08: int3 
    raise RuntimeError('Original unreachable/panic 0x140df1c08')
    s.pc=5383330825
    return

def b_140df1c10(s):
    # 0x140df1c10: mov rax, rcx
    s.write(('r', 'rax', 8),s.read(('r', 'rcx', 8)))
    # 0x140df1c13: movsd xmm0, qword ptr [rdx]
    s.simd_move('movsd',('r', 'xmm0', 16),('m', 'rdx', None, 1, 0, 8))
    # 0x140df1c17: movaps xmm1, xmmword ptr [rip + 0x2045c02]
    s.simd_move('movaps',('r', 'xmm1', 16),('m', None, None, 1, 5417170976, 16))
    # 0x140df1c1e: xorps xmm1, xmm0
    s.float_op('xorps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x140df1c21: shufps xmm1, xmm0, 1
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm0', 16),1)
    # 0x140df1c25: shufps xmm0, xmm1, 0x84
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm1', 16),132)
    # 0x140df1c29: movaps xmmword ptr [rcx], xmm0
    s.simd_move('movaps',('m', 'rcx', None, 1, 0, 16),('r', 'xmm0', 16))
    # 0x140df1c2c: ret 
    s.pc=s.pop()
    return

def b_140df2970(s):
    # 0x140df2970: sub rsp, 0x28
    s.integer('sub',[('r', 'rsp', 8), ('i', 40, 8)])
    # 0x140df2974: movd eax, xmm1
    s.simd_move('movd',('r', 'eax', 4),('r', 'xmm1', 16))
    # 0x140df2978: and eax, 0x7fffffff
    s.integer('and',[('r', 'eax', 4), ('i', 2147483647, 4)])
    # 0x140df297d: cmp eax, 0x7f800000
    s.integer('cmp',[('r', 'eax', 4), ('i', 2139095040, 4)])
    # 0x140df2982: jge 0x140df29b1
    s.pc=s.read(('i', 5383334321, 8)) if s.condition('ge') else 5383334276
    return

def b_140df2984(s):
    # 0x140df2984: movd eax, xmm2
    s.simd_move('movd',('r', 'eax', 4),('r', 'xmm2', 16))
    # 0x140df2988: and eax, 0x7fffffff
    s.integer('and',[('r', 'eax', 4), ('i', 2147483647, 4)])
    # 0x140df298d: cmp eax, 0x7f800000
    s.integer('cmp',[('r', 'eax', 4), ('i', 2139095040, 4)])
    # 0x140df2992: jge 0x140df29c5
    s.pc=s.read(('i', 5383334341, 8)) if s.condition('ge') else 5383334292
    return

def b_140df2994(s):
    # 0x140df2994: movd dword ptr [rcx + 0x10], xmm1
    s.simd_move('movd',('m', 'rcx', None, 1, 16, 4),('r', 'xmm1', 16))
    # 0x140df2999: movd dword ptr [rcx + 0x14], xmm2
    s.simd_move('movd',('m', 'rcx', None, 1, 20, 4),('r', 'xmm2', 16))
    # 0x140df299e: movss xmm0, dword ptr [rip + 0x2044582]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5417168680, 4))
    # 0x140df29a6: movups xmmword ptr [rcx], xmm0
    s.simd_move('movups',('m', 'rcx', None, 1, 0, 16),('r', 'xmm0', 16))
    # 0x140df29a9: mov rax, rcx
    s.write(('r', 'rax', 8),s.read(('r', 'rcx', 8)))
    # 0x140df29ac: add rsp, 0x28
    s.integer('add',[('r', 'rsp', 8), ('i', 40, 8)])
    # 0x140df29b0: ret 
    s.pc=s.pop()
    return

def b_140df29b1(s):
    # 0x140df29b1: lea rcx, [rip + 0x240d1e8]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5421136800, 8)))
    # 0x140df29b8: mov edx, 0x23
    s.write(('r', 'edx', 4),s.read(('i', 35, 4)))
    # 0x140df29bd: mov r8, r9
    s.write(('r', 'r8', 8),s.read(('r', 'r9', 8)))
    # 0x140df29c0: call 0x142dc83b0
    s.push(5383334341)
    s.pc=s.read(('i', 5416715184, 8))
    return

def b_140df29c5(s):
    # 0x140df29c5: lea rcx, [rip + 0x240d1f7]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5421136835, 8)))
    # 0x140df29cc: mov edx, 0x24
    s.write(('r', 'edx', 4),s.read(('i', 36, 4)))
    # 0x140df29d1: mov r8, r9
    s.write(('r', 'r8', 8),s.read(('r', 'r9', 8)))
    # 0x140df29d4: call 0x142dc83b0
    s.push(5383334361)
    s.pc=s.read(('i', 5416715184, 8))
    return

def b_140df29d9(s):
    # 0x140df29d9: int3 
    raise RuntimeError('Original unreachable/panic 0x140df29d9')
    s.pc=5383334362
    return

def b_140df37e0(s):
    # 0x140df37e0: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x140df37e1: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x140df37e2: sub rsp, 0xf8
    s.integer('sub',[('r', 'rsp', 8), ('i', 248, 8)])
    # 0x140df37e9: lea rbp, [rsp + 0x80]
    s.write(('r', 'rbp', 8),s.address(('m', 'rsp', None, 1, 128, 8)))
    # 0x140df37f1: movaps xmmword ptr [rbp + 0x60], xmm10
    s.simd_move('movaps',('m', 'rbp', None, 1, 96, 16),('r', 'xmm10', 16))
    # 0x140df37f6: movaps xmmword ptr [rbp + 0x50], xmm9
    s.simd_move('movaps',('m', 'rbp', None, 1, 80, 16),('r', 'xmm9', 16))
    # 0x140df37fb: movaps xmmword ptr [rbp + 0x40], xmm8
    s.simd_move('movaps',('m', 'rbp', None, 1, 64, 16),('r', 'xmm8', 16))
    # 0x140df3800: movaps xmmword ptr [rbp + 0x30], xmm7
    s.simd_move('movaps',('m', 'rbp', None, 1, 48, 16),('r', 'xmm7', 16))
    # 0x140df3804: movaps xmmword ptr [rbp + 0x20], xmm6
    s.simd_move('movaps',('m', 'rbp', None, 1, 32, 16),('r', 'xmm6', 16))
    # 0x140df3808: mov qword ptr [rbp + 0x18], 0xfffffffffffffffe
    s.write(('m', 'rbp', None, 1, 24, 8),s.read(('i', -2, 8)))
    # 0x140df3810: movss xmm9, dword ptr [rdx + 0x10]
    s.simd_move('movss',('r', 'xmm9', 16),('m', 'rdx', None, 1, 16, 4))
    # 0x140df3816: movss xmm8, dword ptr [rdx + 0x14]
    s.simd_move('movss',('r', 'xmm8', 16),('m', 'rdx', None, 1, 20, 4))
    # 0x140df381c: movaps xmm0, xmm9
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm9', 16))
    # 0x140df3820: mulss xmm0, xmm8
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm8', 16))
    # 0x140df3825: xorps xmm1, xmm1
    s.float_op('xorps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x140df3828: ucomiss xmm0, xmm1
    s.compare_float(('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x140df382b: jbe 0x140df39e2
    s.pc=s.read(('i', 5383338466, 8)) if s.condition('be') else 5383338033
    return

def b_140df3831(s):
    # 0x140df3831: mov rsi, rcx
    s.write(('r', 'rsi', 8),s.read(('r', 'rcx', 8)))
    # 0x140df3834: movsd xmm10, qword ptr [rdx]
    s.simd_move('movsd',('r', 'xmm10', 16),('m', 'rdx', None, 1, 0, 8))
    # 0x140df3839: movsd xmm6, qword ptr [rdx + 8]
    s.simd_move('movsd',('r', 'xmm6', 16),('m', 'rdx', None, 1, 8, 8))
    # 0x140df383e: call 0x14007ee60
    s.push(5383338051)
    s.pc=s.read(('i', 5369228896, 8))
    return

def b_140df3843(s):
    # 0x140df3843: mov ecx, 0x20
    s.write(('r', 'ecx', 4),s.read(('i', 32, 4)))
    # 0x140df3848: mov edx, 4
    s.write(('r', 'edx', 4),s.read(('i', 4, 4)))
    # 0x140df384d: call 0x1406abab0
    s.push(5383338066)
    s.pc=s.read(('i', 5375703728, 8))
    return

def b_140df3852(s):
    # 0x140df3852: test rax, rax
    s.integer('test',[('r', 'rax', 8), ('r', 'rax', 8)])
    # 0x140df3855: je 0x140df39fa
    s.pc=s.read(('i', 5383338490, 8)) if s.condition('e') else 5383338075
    return

def b_140df385b(s):
    # 0x140df385b: movaps xmm0, xmmword ptr [rip + 0x2043fbe]
    s.simd_move('movaps',('r', 'xmm0', 16),('m', None, None, 1, 5417170976, 16))
    # 0x140df3862: xorps xmm0, xmm10
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm10', 16))
    # 0x140df3866: shufps xmm0, xmm10, 1
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm10', 16),1)
    # 0x140df386b: shufps xmm10, xmm0, 0x84
    s.shuffle('shufps',('r', 'xmm10', 16),('r', 'xmm0', 16),132)
    # 0x140df3870: movss xmm0, dword ptr [rip + 0x20436c0]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5417168696, 4))
    # 0x140df3878: movaps xmm1, xmm9
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm9', 16))
    # 0x140df387c: mulss xmm1, xmm0
    s.float_op('mulss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x140df3880: mulss xmm0, xmm8
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm8', 16))
    # 0x140df3885: movaps xmm2, xmm1
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x140df3888: shufps xmm2, xmm1, 0
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm1', 16),0)
    # 0x140df388c: shufps xmm1, xmm0, 0
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm0', 16),0)
    # 0x140df3890: mulps xmm1, xmm10
    s.float_op('mulps',('r', 'xmm1', 16),('r', 'xmm10', 16))
    # 0x140df3894: movaps xmm7, xmm1
    s.simd_move('movaps',('r', 'xmm7', 16),('r', 'xmm1', 16))
    # 0x140df3897: unpckhpd xmm7, xmm1
    s.shuffle('unpckhpd',('r', 'xmm7', 16),('r', 'xmm1', 16),0)
    # 0x140df389b: addps xmm7, xmm1
    s.float_op('addps',('r', 'xmm7', 16),('r', 'xmm1', 16))
    # 0x140df389e: addps xmm7, xmm6
    s.float_op('addps',('r', 'xmm7', 16),('r', 'xmm6', 16))
    # 0x140df38a1: movss xmm3, dword ptr [rip + 0x20436a7]
    s.simd_move('movss',('r', 'xmm3', 16),('m', None, None, 1, 5417168720, 4))
    # 0x140df38a9: mulss xmm9, xmm3
    s.float_op('mulss',('r', 'xmm9', 16),('r', 'xmm3', 16))
    # 0x140df38ae: movaps xmm1, xmm9
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm9', 16))
    # 0x140df38b2: shufps xmm1, xmm0, 0
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm0', 16),0)
    # 0x140df38b6: mulps xmm1, xmm10
    s.float_op('mulps',('r', 'xmm1', 16),('r', 'xmm10', 16))
    # 0x140df38ba: movaps xmm0, xmm1
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x140df38bd: unpckhpd xmm0, xmm1
    s.shuffle('unpckhpd',('r', 'xmm0', 16),('r', 'xmm1', 16),0)
    # 0x140df38c1: addps xmm0, xmm1
    s.float_op('addps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x140df38c4: movshdup xmm4, xmm0
    s.simd_move('movshdup',('r', 'xmm4', 16),('r', 'xmm0', 16))
    # 0x140df38c8: movshdup xmm1, xmm6
    s.simd_move('movshdup',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x140df38cc: addss xmm1, xmm4
    s.float_op('addss',('r', 'xmm1', 16),('r', 'xmm4', 16))
    # 0x140df38d0: mulss xmm8, xmm3
    s.float_op('mulss',('r', 'xmm8', 16),('r', 'xmm3', 16))
    # 0x140df38d5: shufps xmm9, xmm8, 0
    s.shuffle('shufps',('r', 'xmm9', 16),('r', 'xmm8', 16),0)
    # 0x140df38da: mulps xmm9, xmm10
    s.float_op('mulps',('r', 'xmm9', 16),('r', 'xmm10', 16))
    # 0x140df38de: movaps xmm3, xmm9
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm9', 16))
    # 0x140df38e2: unpckhpd xmm3, xmm9
    s.shuffle('unpckhpd',('r', 'xmm3', 16),('r', 'xmm9', 16),0)
    # 0x140df38e7: addps xmm3, xmm9
    s.float_op('addps',('r', 'xmm3', 16),('r', 'xmm9', 16))
    # 0x140df38eb: shufps xmm2, xmm8, 4
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm8', 16),4)
    # 0x140df38f0: mulps xmm2, xmm10
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm10', 16))
    # 0x140df38f4: movaps xmm4, xmm2
    s.simd_move('movaps',('r', 'xmm4', 16),('r', 'xmm2', 16))
    # 0x140df38f7: unpckhpd xmm4, xmm2
    s.shuffle('unpckhpd',('r', 'xmm4', 16),('r', 'xmm2', 16),0)
    # 0x140df38fb: addps xmm4, xmm2
    s.float_op('addps',('r', 'xmm4', 16),('r', 'xmm2', 16))
    # 0x140df38fe: movss dword ptr [rax], xmm7
    s.simd_move('movss',('m', 'rax', None, 1, 0, 4),('r', 'xmm7', 16))
    # 0x140df3902: movaps xmm2, xmm7
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm7', 16))
    # 0x140df3905: shufps xmm2, xmm6, 1
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm6', 16),1)
    # 0x140df3909: shufps xmm2, xmm6, 0x18
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm6', 16),24)
    # 0x140df390d: shufps xmm0, xmm3, 0x10
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm3', 16),16)
    # 0x140df3911: shufps xmm0, xmm3, 0xe2
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm3', 16),226)
    # 0x140df3915: shufps xmm3, xmm4, 0x10
    s.shuffle('shufps',('r', 'xmm3', 16),('r', 'xmm4', 16),16)
    # 0x140df3919: shufps xmm4, xmm3, 0x20
    s.shuffle('shufps',('r', 'xmm4', 16),('r', 'xmm3', 16),32)
    # 0x140df391d: movss xmm3, dword ptr [rip + 0x2043ecb]
    s.simd_move('movss',('r', 'xmm3', 16),('m', None, None, 1, 5417170928, 4))
    # 0x140df3925: movss xmm4, xmm3
    s.simd_move('movss',('r', 'xmm4', 16),('r', 'xmm3', 16))
    # 0x140df3929: addps xmm4, xmm2
    s.float_op('addps',('r', 'xmm4', 16),('r', 'xmm2', 16))
    # 0x140df392c: movups xmmword ptr [rax + 4], xmm4
    s.simd_move('movups',('m', 'rax', None, 1, 4, 16),('r', 'xmm4', 16))
    # 0x140df3930: shufps xmm6, xmm6, 0xe1
    s.shuffle('shufps',('r', 'xmm6', 16),('r', 'xmm6', 16),225)
    # 0x140df3934: addps xmm0, xmm6
    s.float_op('addps',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x140df3937: movlps qword ptr [rax + 0x14], xmm0
    s.simd_move('movlps',('m', 'rax', None, 1, 20, 8),('r', 'xmm0', 16))
    # 0x140df393b: movss dword ptr [rax + 0x1c], xmm1
    s.simd_move('movss',('m', 'rax', None, 1, 28, 4),('r', 'xmm1', 16))
    # 0x140df3940: mov qword ptr [rbp - 8], 4
    s.write(('m', 'rbp', None, 1, -8, 8),s.read(('i', 4, 8)))
    # 0x140df3948: mov qword ptr [rbp], rax
    s.write(('m', 'rbp', None, 1, 0, 8),s.read(('r', 'rax', 8)))
    # 0x140df394c: mov qword ptr [rbp + 8], 4
    s.write(('m', 'rbp', None, 1, 8, 8),s.read(('i', 4, 8)))
    # 0x140df3954: mov byte ptr [rbp + 0x17], 1
    s.write(('m', 'rbp', None, 1, 23, 1),s.read(('i', 1, 1)))
    # 0x140df3958: lea rcx, [rbp - 8]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, -8, 8)))
    # 0x140df395c: call 0x142d8d7f0
    s.push(5383338337)
    s.pc=s.read(('i', 5416474608, 8))
    return

def b_140df3961(s):
    # 0x140df3961: nop 
    # 0x140df3962: mov rax, qword ptr [rbp]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 0, 8)))
    # 0x140df3966: movlps qword ptr [rax + 0x20], xmm7
    s.simd_move('movlps',('m', 'rax', None, 1, 32, 8),('r', 'xmm7', 16))
    # 0x140df396a: mov qword ptr [rbp + 8], 5
    s.write(('m', 'rbp', None, 1, 8, 8),s.read(('i', 5, 8)))
    # 0x140df3972: movups xmm0, xmmword ptr [rbp - 8]
    s.simd_move('movups',('r', 'xmm0', 16),('m', 'rbp', None, 1, -8, 16))
    # 0x140df3976: movaps xmmword ptr [rbp - 0x20], xmm0
    s.simd_move('movaps',('m', 'rbp', None, 1, -32, 16),('r', 'xmm0', 16))
    # 0x140df397a: mov qword ptr [rbp - 0x10], 5
    s.write(('m', 'rbp', None, 1, -16, 8),s.read(('i', 5, 8)))
    # 0x140df3982: mov byte ptr [rbp + 0x17], 0
    s.write(('m', 'rbp', None, 1, 23, 1),s.read(('i', 0, 1)))
    # 0x140df3986: lea rcx, [rbp - 0x58]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, -88, 8)))
    # 0x140df398a: lea rdx, [rbp - 0x20]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, -32, 8)))
    # 0x140df398e: xor r8d, r8d
    s.integer('xor',[('r', 'r8d', 4), ('r', 'r8d', 4)])
    # 0x140df3991: call 0x140080c90
    s.push(5383338390)
    s.pc=s.read(('i', 5369236624, 8))
    return

def b_140df3996(s):
    # 0x140df3996: nop 
    # 0x140df3997: xor eax, eax
    s.integer('xor',[('r', 'eax', 4), ('r', 'eax', 4)])
    # 0x140df3999: cmp rax, qword ptr [rbp - 0x58]
    s.integer('cmp',[('r', 'rax', 8), ('m', 'rbp', None, 1, -88, 8)])
    # 0x140df399d: jo 0x140df3a09
    s.pc=s.read(('i', 5383338505, 8)) if s.condition('o') else 5383338399
    return

def b_140df399f(s):
    # 0x140df399f: mov rax, qword ptr [rbp - 0x28]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, -40, 8)))
    # 0x140df39a3: mov qword ptr [rsi + 0x30], rax
    s.write(('m', 'rsi', None, 1, 48, 8),s.read(('r', 'rax', 8)))
    # 0x140df39a7: movups xmm0, xmmword ptr [rbp - 0x58]
    s.simd_move('movups',('r', 'xmm0', 16),('m', 'rbp', None, 1, -88, 16))
    # 0x140df39ab: movups xmm1, xmmword ptr [rbp - 0x48]
    s.simd_move('movups',('r', 'xmm1', 16),('m', 'rbp', None, 1, -72, 16))
    # 0x140df39af: movups xmm2, xmmword ptr [rbp - 0x38]
    s.simd_move('movups',('r', 'xmm2', 16),('m', 'rbp', None, 1, -56, 16))
    # 0x140df39b3: movups xmmword ptr [rsi + 0x20], xmm2
    s.simd_move('movups',('m', 'rsi', None, 1, 32, 16),('r', 'xmm2', 16))
    # 0x140df39b7: movups xmmword ptr [rsi + 0x10], xmm1
    s.simd_move('movups',('m', 'rsi', None, 1, 16, 16),('r', 'xmm1', 16))
    # 0x140df39bb: movups xmmword ptr [rsi], xmm0
    s.simd_move('movups',('m', 'rsi', None, 1, 0, 16),('r', 'xmm0', 16))
    # 0x140df39be: mov rax, rsi
    s.write(('r', 'rax', 8),s.read(('r', 'rsi', 8)))
    # 0x140df39c1: movaps xmm6, xmmword ptr [rbp + 0x20]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rbp', None, 1, 32, 16))
    # 0x140df39c5: movaps xmm7, xmmword ptr [rbp + 0x30]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rbp', None, 1, 48, 16))
    # 0x140df39c9: movaps xmm8, xmmword ptr [rbp + 0x40]
    s.simd_move('movaps',('r', 'xmm8', 16),('m', 'rbp', None, 1, 64, 16))
    # 0x140df39ce: movaps xmm9, xmmword ptr [rbp + 0x50]
    s.simd_move('movaps',('r', 'xmm9', 16),('m', 'rbp', None, 1, 80, 16))
    # 0x140df39d3: movaps xmm10, xmmword ptr [rbp + 0x60]
    s.simd_move('movaps',('r', 'xmm10', 16),('m', 'rbp', None, 1, 96, 16))
    # 0x140df39d8: add rsp, 0xf8
    s.integer('add',[('r', 'rsp', 8), ('i', 248, 8)])
    # 0x140df39df: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x140df39e0: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x140df39e1: ret 
    s.pc=s.pop()
    return

def b_140df39e2(s):
    # 0x140df39e2: lea rcx, [rip + 0x240c031]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5421136410, 8)))
    # 0x140df39e9: lea r8, [rip + 0x240c2c0]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5421137072, 8)))
    # 0x140df39f0: mov edx, 0x23
    s.write(('r', 'edx', 4),s.read(('i', 35, 4)))
    # 0x140df39f5: call 0x142dc83b0
    s.push(5383338490)
    s.pc=s.read(('i', 5416715184, 8))
    return

def b_140df39fa(s):
    # 0x140df39fa: mov ecx, 4
    s.write(('r', 'ecx', 4),s.read(('i', 4, 4)))
    # 0x140df39ff: mov edx, 0x20
    s.write(('r', 'edx', 4),s.read(('i', 32, 4)))
    # 0x140df3a04: call 0x142dc7e11
    s.push(5383338505)
    s.pc=s.read(('i', 5416713745, 8))
    return

def b_140df3a09(s):
    # 0x140df3a09: movups xmm0, xmmword ptr [rbp - 0x50]
    s.simd_move('movups',('r', 'xmm0', 16),('m', 'rbp', None, 1, -80, 16))
    # 0x140df3a0d: movaps xmmword ptr [rbp - 0x20], xmm0
    s.simd_move('movaps',('m', 'rbp', None, 1, -32, 16),('r', 'xmm0', 16))
    # 0x140df3a11: mov byte ptr [rbp + 0x17], 0
    s.write(('m', 'rbp', None, 1, 23, 1),s.read(('i', 0, 1)))
    # 0x140df3a15: lea rax, [rip + 0x240c2ac]
    s.write(('r', 'rax', 8),s.address(('m', None, None, 1, 5421137096, 8)))
    # 0x140df3a1c: mov qword ptr [rsp + 0x20], rax
    s.write(('m', 'rsp', None, 1, 32, 8),s.read(('r', 'rax', 8)))
    # 0x140df3a21: lea rcx, [rip + 0x25f90e0]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5423155976, 8)))
    # 0x140df3a28: lea r9, [rip + 0x25f90b9]
    s.write(('r', 'r9', 8),s.address(('m', None, None, 1, 5423155944, 8)))
    # 0x140df3a2f: lea r8, [rbp - 0x20]
    s.write(('r', 'r8', 8),s.address(('m', 'rbp', None, 1, -32, 8)))
    # 0x140df3a33: mov edx, 0x2b
    s.write(('r', 'edx', 4),s.read(('i', 43, 4)))
    # 0x140df3a38: call 0x142dc8170
    s.push(5383338557)
    s.pc=s.read(('i', 5416714608, 8))
    return

def b_140df3a3d(s):
    # 0x140df3a3d: nop 
    # 0x140df3a3e: ud2 
    raise RuntimeError('Original unreachable/panic 0x140df3a3e')
    s.pc=5383338560
    return

def b_140df3a40(s):
    # 0x140df3a40: mov qword ptr [rsp + 0x10], rdx
    s.write(('m', 'rsp', None, 1, 16, 8),s.read(('r', 'rdx', 8)))
    # 0x140df3a45: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x140df3a46: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x140df3a47: sub rsp, 0x78
    s.integer('sub',[('r', 'rsp', 8), ('i', 120, 8)])
    # 0x140df3a4b: lea rbp, [rdx + 0x80]
    s.write(('r', 'rbp', 8),s.address(('m', 'rdx', None, 1, 128, 8)))
    # 0x140df3a52: movaps xmmword ptr [rsp + 0x20], xmm10
    s.simd_move('movaps',('m', 'rsp', None, 1, 32, 16),('r', 'xmm10', 16))
    # 0x140df3a58: movaps xmmword ptr [rsp + 0x30], xmm9
    s.simd_move('movaps',('m', 'rsp', None, 1, 48, 16),('r', 'xmm9', 16))
    # 0x140df3a5e: movaps xmmword ptr [rsp + 0x40], xmm8
    s.simd_move('movaps',('m', 'rsp', None, 1, 64, 16),('r', 'xmm8', 16))
    # 0x140df3a64: movaps xmmword ptr [rsp + 0x50], xmm7
    s.simd_move('movaps',('m', 'rsp', None, 1, 80, 16),('r', 'xmm7', 16))
    # 0x140df3a69: movaps xmmword ptr [rsp + 0x60], xmm6
    s.simd_move('movaps',('m', 'rsp', None, 1, 96, 16),('r', 'xmm6', 16))
    # 0x140df3a6e: cmp byte ptr [rbp + 0x17], 0
    s.integer('cmp',[('m', 'rbp', None, 1, 23, 1), ('i', 0, 1)])
    # 0x140df3a72: je 0x140df3a90
    s.pc=s.read(('i', 5383338640, 8)) if s.condition('e') else 5383338612
    return

def b_140df3a74(s):
    # 0x140df3a74: mov rdx, qword ptr [rbp - 8]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, -8, 8)))
    # 0x140df3a78: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x140df3a7b: je 0x140df3a90
    s.pc=s.read(('i', 5383338640, 8)) if s.condition('e') else 5383338621
    return

def b_140df3a7d(s):
    # 0x140df3a7d: mov rcx, qword ptr [rbp]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 0, 8)))
    # 0x140df3a81: shl rdx, 3
    s.integer('shl',[('r', 'rdx', 8), ('i', 3, 1)])
    # 0x140df3a85: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x140df3a8b: call 0x1406abac0
    s.push(5383338640)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_140df3a90(s):
    # 0x140df3a90: movaps xmm6, xmmword ptr [rsp + 0x60]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rsp', None, 1, 96, 16))
    # 0x140df3a95: movaps xmm7, xmmword ptr [rsp + 0x50]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rsp', None, 1, 80, 16))
    # 0x140df3a9a: movaps xmm8, xmmword ptr [rsp + 0x40]
    s.simd_move('movaps',('r', 'xmm8', 16),('m', 'rsp', None, 1, 64, 16))
    # 0x140df3aa0: movaps xmm9, xmmword ptr [rsp + 0x30]
    s.simd_move('movaps',('r', 'xmm9', 16),('m', 'rsp', None, 1, 48, 16))
    # 0x140df3aa6: movaps xmm10, xmmword ptr [rsp + 0x20]
    s.simd_move('movaps',('r', 'xmm10', 16),('m', 'rsp', None, 1, 32, 16))
    # 0x140df3aac: add rsp, 0x78
    s.integer('add',[('r', 'rsp', 8), ('i', 120, 8)])
    # 0x140df3ab0: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x140df3ab1: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x140df3ab2: ret 
    s.pc=s.pop()
    return

def b_140df4520(s):
    # 0x140df4520: mov rax, rcx
    s.write(('r', 'rax', 8),s.read(('r', 'rcx', 8)))
    # 0x140df4523: movss xmm0, dword ptr [rdx + 4]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rdx', None, 1, 4, 4))
    # 0x140df4528: movss xmm1, dword ptr [rdx]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rdx', None, 1, 0, 4))
    # 0x140df452c: movlps qword ptr [rcx], xmm1
    s.simd_move('movlps',('m', 'rcx', None, 1, 0, 8),('r', 'xmm1', 16))
    # 0x140df452f: movss dword ptr [rcx + 8], xmm0
    s.simd_move('movss',('m', 'rcx', None, 1, 8, 4),('r', 'xmm0', 16))
    # 0x140df4534: ret 
    s.pc=s.pop()
    return

def b_140df4540(s):
    # 0x140df4540: mov rax, rcx
    s.write(('r', 'rax', 8),s.read(('r', 'rcx', 8)))
    # 0x140df4543: movss xmm0, dword ptr [rdx]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rdx', None, 1, 0, 4))
    # 0x140df4547: movss xmm1, dword ptr [rdx + 4]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rdx', None, 1, 4, 4))
    # 0x140df454c: movss dword ptr [rcx], xmm0
    s.simd_move('movss',('m', 'rcx', None, 1, 0, 4),('r', 'xmm0', 16))
    # 0x140df4550: movss dword ptr [rcx + 4], xmm2
    s.simd_move('movss',('m', 'rcx', None, 1, 4, 4),('r', 'xmm2', 16))
    # 0x140df4555: movss dword ptr [rcx + 8], xmm1
    s.simd_move('movss',('m', 'rcx', None, 1, 8, 4),('r', 'xmm1', 16))
    # 0x140df455a: ret 
    s.pc=s.pop()
    return

def b_140e02880(s):
    # 0x140e02880: movabs rdx, 0xa0761d6478bd642f
    s.write(('r', 'rdx', 8),s.read(('i', -6884282663029611473, 8)))
    # 0x140e0288a: add rdx, qword ptr [rcx]
    s.integer('add',[('r', 'rdx', 8), ('m', 'rcx', None, 1, 0, 8)])
    # 0x140e0288d: mov qword ptr [rcx], rdx
    s.write(('m', 'rcx', None, 1, 0, 8),s.read(('r', 'rdx', 8)))
    # 0x140e02890: movabs rax, 0xe7037ed1a0b428db
    s.write(('r', 'rax', 8),s.read(('i', -1800455987208640293, 8)))
    # 0x140e0289a: xor rax, rdx
    s.integer('xor',[('r', 'rax', 8), ('r', 'rdx', 8)])
    # 0x140e0289d: mul rdx
    s.multiply(('r', 'rdx', 8))
    # 0x140e028a0: xor edx, eax
    s.integer('xor',[('r', 'edx', 4), ('r', 'eax', 4)])
    # 0x140e028a2: shr edx, 9
    s.integer('shr',[('r', 'edx', 4), ('i', 9, 1)])
    # 0x140e028a5: or edx, 0x3f800000
    s.integer('or',[('r', 'edx', 4), ('i', 1065353216, 4)])
    # 0x140e028ab: movd xmm0, edx
    s.simd_move('movd',('r', 'xmm0', 16),('r', 'edx', 4))
    # 0x140e028af: addss xmm0, dword ptr [rip + 0x203467d]
    s.float_op('addss',('r', 'xmm0', 16),('m', None, None, 1, 5417168692, 4))
    # 0x140e028b7: ret 
    s.pc=s.pop()
    return

def b_140fc8030(s):
    # 0x140fc8030: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x140fc8031: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x140fc8033: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x140fc8035: push r13
    s.push(s.read(('r', 'r13', 8)))
    # 0x140fc8037: push r12
    s.push(s.read(('r', 'r12', 8)))
    # 0x140fc8039: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x140fc803a: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x140fc803b: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x140fc803c: sub rsp, 0x98
    s.integer('sub',[('r', 'rsp', 8), ('i', 152, 8)])
    # 0x140fc8043: lea rbp, [rsp + 0x80]
    s.write(('r', 'rbp', 8),s.address(('m', 'rsp', None, 1, 128, 8)))
    # 0x140fc804b: mov qword ptr [rbp + 0x10], 0xfffffffffffffffe
    s.write(('m', 'rbp', None, 1, 16, 8),s.read(('i', -2, 8)))
    # 0x140fc8053: mov rsi, rcx
    s.write(('r', 'rsi', 8),s.read(('r', 'rcx', 8)))
    # 0x140fc8056: movsxd r14, dword ptr [rdx + 0x38]
    s.write(('r', 'r14', 8),signed(s.read(('m', 'rdx', None, 1, 56, 4)),32))
    # 0x140fc805a: movsxd r12, dword ptr [rdx + 0x3c]
    s.write(('r', 'r12', 8),signed(s.read(('m', 'rdx', None, 1, 60, 4)),32))
    # 0x140fc805e: mov r15d, r12d
    s.write(('r', 'r15d', 4),s.read(('r', 'r12d', 4)))
    # 0x140fc8061: sub r12, r14
    s.integer('sub',[('r', 'r12', 8), ('r', 'r14', 8)])
    # 0x140fc8064: xor edi, edi
    s.integer('xor',[('r', 'edi', 4), ('r', 'edi', 4)])
    # 0x140fc8066: cmp r14d, r15d
    s.integer('cmp',[('r', 'r14d', 4), ('r', 'r15d', 4)])
    # 0x140fc8069: mov eax, 0
    s.write(('r', 'eax', 4),s.read(('i', 0, 4)))
    # 0x140fc806e: cmovl rax, r12
    s.write(('r', 'rax', 8),s.read(('r', 'r12', 8))) if s.condition('l') else None
    # 0x140fc8072: movabs rcx, 0x555555555555555
    s.write(('r', 'rcx', 8),s.read(('i', 384307168202282325, 8)))
    # 0x140fc807c: cmp rax, rcx
    s.integer('cmp',[('r', 'rax', 8), ('r', 'rcx', 8)])
    # 0x140fc807f: jbe 0x140fc808c
    s.pc=s.read(('i', 5385257100, 8)) if s.condition('be') else 5385257089
    return

def b_140fc8081(s):
    # 0x140fc8081: mov rcx, rdi
    s.write(('r', 'rcx', 8),s.read(('r', 'rdi', 8)))
    # 0x140fc8084: mov rdx, rbx
    s.write(('r', 'rdx', 8),s.read(('r', 'rbx', 8)))
    # 0x140fc8087: call 0x142dc7e2a
    s.push(5385257100)
    s.pc=s.read(('i', 5416713770, 8))
    return

def b_140fc808c(s):
    # 0x140fc808c: test rax, rax
    s.integer('test',[('r', 'rax', 8), ('r', 'rax', 8)])
    # 0x140fc808f: je 0x140fc80bd
    s.pc=s.read(('i', 5385257149, 8)) if s.condition('e') else 5385257105
    return

def b_140fc8091(s):
    # 0x140fc8091: shl rax, 3
    s.integer('shl',[('r', 'rax', 8), ('i', 3, 1)])
    # 0x140fc8095: lea rbx, [rax + rax*2]
    s.write(('r', 'rbx', 8),s.address(('m', 'rax', 'rax', 2, 0, 8)))
    # 0x140fc8099: mov r13, rdx
    s.write(('r', 'r13', 8),s.read(('r', 'rdx', 8)))
    # 0x140fc809c: call 0x14007ee60
    s.push(5385257121)
    s.pc=s.read(('i', 5369228896, 8))
    return

def b_140fc80a1(s):
    # 0x140fc80a1: mov edi, 4
    s.write(('r', 'edi', 4),s.read(('i', 4, 4)))
    # 0x140fc80a6: mov edx, 4
    s.write(('r', 'edx', 4),s.read(('i', 4, 4)))
    # 0x140fc80ab: mov rcx, rbx
    s.write(('r', 'rcx', 8),s.read(('r', 'rbx', 8)))
    # 0x140fc80ae: call 0x1406abab0
    s.push(5385257139)
    s.pc=s.read(('i', 5375703728, 8))
    return

def b_140fc80b3(s):
    # 0x140fc80b3: test rax, rax
    s.integer('test',[('r', 'rax', 8), ('r', 'rax', 8)])
    # 0x140fc80b6: je 0x140fc8081
    s.pc=s.read(('i', 5385257089, 8)) if s.condition('e') else 5385257144
    return

def b_140fc80b8(s):
    # 0x140fc80b8: mov rdx, r13
    s.write(('r', 'rdx', 8),s.read(('r', 'r13', 8)))
    # 0x140fc80bb: jmp 0x140fc80c5
    s.pc=s.read(('i', 5385257157, 8))
    return

def b_140fc80bd(s):
    # 0x140fc80bd: mov eax, 4
    s.write(('r', 'eax', 4),s.read(('i', 4, 4)))
    # 0x140fc80c2: xor r12d, r12d
    s.integer('xor',[('r', 'r12d', 4), ('r', 'r12d', 4)])
    s.pc=5385257157
    return

def b_140fc80c5(s):
    # 0x140fc80c5: mov qword ptr [rbp - 8], r12
    s.write(('m', 'rbp', None, 1, -8, 8),s.read(('r', 'r12', 8)))
    # 0x140fc80c9: mov qword ptr [rbp], rax
    s.write(('m', 'rbp', None, 1, 0, 8),s.read(('r', 'rax', 8)))
    # 0x140fc80cd: lea rcx, [rbp + 8]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 8, 8)))
    # 0x140fc80d1: mov qword ptr [rbp + 8], 0
    s.write(('m', 'rbp', None, 1, 8, 8),s.read(('i', 0, 8)))
    # 0x140fc80d9: mov r8, qword ptr [rdx + 0x30]
    s.write(('r', 'r8', 8),s.read(('m', 'rdx', None, 1, 48, 8)))
    # 0x140fc80dd: mov qword ptr [rbp - 0x30], r8
    s.write(('m', 'rbp', None, 1, -48, 8),s.read(('r', 'r8', 8)))
    # 0x140fc80e1: movups xmm0, xmmword ptr [rdx]
    s.simd_move('movups',('r', 'xmm0', 16),('m', 'rdx', None, 1, 0, 16))
    # 0x140fc80e4: movups xmm1, xmmword ptr [rdx + 0x10]
    s.simd_move('movups',('r', 'xmm1', 16),('m', 'rdx', None, 1, 16, 16))
    # 0x140fc80e8: movups xmm2, xmmword ptr [rdx + 0x20]
    s.simd_move('movups',('r', 'xmm2', 16),('m', 'rdx', None, 1, 32, 16))
    # 0x140fc80ec: movaps xmmword ptr [rbp - 0x40], xmm2
    s.simd_move('movaps',('m', 'rbp', None, 1, -64, 16),('r', 'xmm2', 16))
    # 0x140fc80f0: movaps xmmword ptr [rbp - 0x50], xmm1
    s.simd_move('movaps',('m', 'rbp', None, 1, -80, 16),('r', 'xmm1', 16))
    # 0x140fc80f4: movaps xmmword ptr [rbp - 0x60], xmm0
    s.simd_move('movaps',('m', 'rbp', None, 1, -96, 16),('r', 'xmm0', 16))
    # 0x140fc80f8: mov dword ptr [rbp - 0x28], r14d
    s.write(('m', 'rbp', None, 1, -40, 4),s.read(('r', 'r14d', 4)))
    # 0x140fc80fc: mov dword ptr [rbp - 0x24], r15d
    s.write(('m', 'rbp', None, 1, -36, 4),s.read(('r', 'r15d', 4)))
    # 0x140fc8100: mov qword ptr [rbp - 0x20], rcx
    s.write(('m', 'rbp', None, 1, -32, 8),s.read(('r', 'rcx', 8)))
    # 0x140fc8104: mov qword ptr [rbp - 0x18], 0
    s.write(('m', 'rbp', None, 1, -24, 8),s.read(('i', 0, 8)))
    # 0x140fc810c: mov qword ptr [rbp - 0x10], rax
    s.write(('m', 'rbp', None, 1, -16, 8),s.read(('r', 'rax', 8)))
    # 0x140fc8110: lea rcx, [rbp - 0x60]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, -96, 8)))
    # 0x140fc8114: lea rdx, [rbp - 0x20]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, -32, 8)))
    # 0x140fc8118: call 0x141f100f0
    s.push(5385257245)
    s.pc=s.read(('i', 5401280752, 8))
    return

def b_140fc811d(s):
    # 0x140fc811d: nop 
    # 0x140fc811e: mov rax, qword ptr [rbp + 8]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 8, 8)))
    # 0x140fc8122: mov qword ptr [rsi + 0x10], rax
    s.write(('m', 'rsi', None, 1, 16, 8),s.read(('r', 'rax', 8)))
    # 0x140fc8126: movups xmm0, xmmword ptr [rbp - 8]
    s.simd_move('movups',('r', 'xmm0', 16),('m', 'rbp', None, 1, -8, 16))
    # 0x140fc812a: movups xmmword ptr [rsi], xmm0
    s.simd_move('movups',('m', 'rsi', None, 1, 0, 16),('r', 'xmm0', 16))
    # 0x140fc812d: mov rax, rsi
    s.write(('r', 'rax', 8),s.read(('r', 'rsi', 8)))
    # 0x140fc8130: add rsp, 0x98
    s.integer('add',[('r', 'rsp', 8), ('i', 152, 8)])
    # 0x140fc8137: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x140fc8138: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x140fc8139: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x140fc813a: pop r12
    s.write(('r', 'r12', 8),s.pop())
    # 0x140fc813c: pop r13
    s.write(('r', 'r13', 8),s.pop())
    # 0x140fc813e: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x140fc8140: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x140fc8142: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x140fc8143: ret 
    s.pc=s.pop()
    return

def b_140fc8144(s):
    # 0x140fc8144: nop word ptr cs:[rax + rax]
    # 0x140fc8150: mov qword ptr [rsp + 0x10], rdx
    s.write(('m', 'rsp', None, 1, 16, 8),s.read(('r', 'rdx', 8)))
    # 0x140fc8155: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x140fc8156: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x140fc8158: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x140fc815a: push r13
    s.push(s.read(('r', 'r13', 8)))
    # 0x140fc815c: push r12
    s.push(s.read(('r', 'r12', 8)))
    # 0x140fc815e: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x140fc815f: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x140fc8160: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x140fc8161: sub rsp, 0x28
    s.integer('sub',[('r', 'rsp', 8), ('i', 40, 8)])
    # 0x140fc8165: lea rbp, [rdx + 0x80]
    s.write(('r', 'rbp', 8),s.address(('m', 'rdx', None, 1, 128, 8)))
    # 0x140fc816c: mov rax, qword ptr [rbp - 8]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, -8, 8)))
    # 0x140fc8170: test rax, rax
    s.integer('test',[('r', 'rax', 8), ('r', 'rax', 8)])
    # 0x140fc8173: je 0x140fc818d
    s.pc=s.read(('i', 5385257357, 8)) if s.condition('e') else 5385257333
    return

def b_140fc8175(s):
    # 0x140fc8175: mov rcx, qword ptr [rbp]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 0, 8)))
    # 0x140fc8179: shl rax, 3
    s.integer('shl',[('r', 'rax', 8), ('i', 3, 1)])
    # 0x140fc817d: lea rdx, [rax + rax*2]
    s.write(('r', 'rdx', 8),s.address(('m', 'rax', 'rax', 2, 0, 8)))
    # 0x140fc8181: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x140fc8187: call 0x1406abac0
    s.push(5385257356)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_140fc818c(s):
    # 0x140fc818c: nop 
    s.pc=5385257357
    return

def b_140fc818d(s):
    # 0x140fc818d: add rsp, 0x28
    s.integer('add',[('r', 'rsp', 8), ('i', 40, 8)])
    # 0x140fc8191: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x140fc8192: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x140fc8193: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x140fc8194: pop r12
    s.write(('r', 'r12', 8),s.pop())
    # 0x140fc8196: pop r13
    s.write(('r', 'r13', 8),s.pop())
    # 0x140fc8198: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x140fc819a: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x140fc819c: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x140fc819d: ret 
    s.pc=s.pop()
    return

def b_141f100f0(s):
    # 0x141f100f0: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x141f100f1: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x141f100f3: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x141f100f5: push r13
    s.push(s.read(('r', 'r13', 8)))
    # 0x141f100f7: push r12
    s.push(s.read(('r', 'r12', 8)))
    # 0x141f100f9: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x141f100fa: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x141f100fb: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x141f100fc: sub rsp, 0x108
    s.integer('sub',[('r', 'rsp', 8), ('i', 264, 8)])
    # 0x141f10103: lea rbp, [rsp + 0x80]
    s.write(('r', 'rbp', 8),s.address(('m', 'rsp', None, 1, 128, 8)))
    # 0x141f1010b: movaps xmmword ptr [rbp + 0x70], xmm14
    s.simd_move('movaps',('m', 'rbp', None, 1, 112, 16),('r', 'xmm14', 16))
    # 0x141f10110: movaps xmmword ptr [rbp + 0x60], xmm13
    s.simd_move('movaps',('m', 'rbp', None, 1, 96, 16),('r', 'xmm13', 16))
    # 0x141f10115: movaps xmmword ptr [rbp + 0x50], xmm12
    s.simd_move('movaps',('m', 'rbp', None, 1, 80, 16),('r', 'xmm12', 16))
    # 0x141f1011a: movaps xmmword ptr [rbp + 0x40], xmm11
    s.simd_move('movaps',('m', 'rbp', None, 1, 64, 16),('r', 'xmm11', 16))
    # 0x141f1011f: movaps xmmword ptr [rbp + 0x30], xmm10
    s.simd_move('movaps',('m', 'rbp', None, 1, 48, 16),('r', 'xmm10', 16))
    # 0x141f10124: movaps xmmword ptr [rbp + 0x20], xmm9
    s.simd_move('movaps',('m', 'rbp', None, 1, 32, 16),('r', 'xmm9', 16))
    # 0x141f10129: movaps xmmword ptr [rbp + 0x10], xmm8
    s.simd_move('movaps',('m', 'rbp', None, 1, 16, 16),('r', 'xmm8', 16))
    # 0x141f1012e: movaps xmmword ptr [rbp], xmm7
    s.simd_move('movaps',('m', 'rbp', None, 1, 0, 16),('r', 'xmm7', 16))
    # 0x141f10132: movaps xmmword ptr [rbp - 0x10], xmm6
    s.simd_move('movaps',('m', 'rbp', None, 1, -16, 16),('r', 'xmm6', 16))
    # 0x141f10136: mov qword ptr [rbp - 0x18], 0xfffffffffffffffe
    s.write(('m', 'rbp', None, 1, -24, 8),s.read(('i', -2, 8)))
    # 0x141f1013e: mov ebx, dword ptr [rcx + 0x38]
    s.write(('r', 'ebx', 4),s.read(('m', 'rcx', None, 1, 56, 4)))
    # 0x141f10141: mov r14d, dword ptr [rcx + 0x3c]
    s.write(('r', 'r14d', 4),s.read(('m', 'rcx', None, 1, 60, 4)))
    # 0x141f10145: mov rax, qword ptr [rdx]
    s.write(('r', 'rax', 8),s.read(('m', 'rdx', None, 1, 0, 8)))
    # 0x141f10148: mov qword ptr [rbp - 0x30], rax
    s.write(('m', 'rbp', None, 1, -48, 8),s.read(('r', 'rax', 8)))
    # 0x141f1014c: mov rax, qword ptr [rdx + 8]
    s.write(('r', 'rax', 8),s.read(('m', 'rdx', None, 1, 8, 8)))
    # 0x141f10150: mov qword ptr [rbp - 0x20], rax
    s.write(('m', 'rbp', None, 1, -32, 8),s.read(('r', 'rax', 8)))
    # 0x141f10154: cmp ebx, r14d
    s.integer('cmp',[('r', 'ebx', 4), ('r', 'r14d', 4)])
    # 0x141f10157: jge 0x141f102ed
    s.pc=s.read(('i', 5401281261, 8)) if s.condition('ge') else 5401280861
    return

def b_141f1015d(s):
    # 0x141f1015d: mov rax, qword ptr [rcx]
    s.write(('r', 'rax', 8),s.read(('m', 'rcx', None, 1, 0, 8)))
    # 0x141f10160: mov qword ptr [rbp - 0x48], rax
    s.write(('m', 'rbp', None, 1, -72, 8),s.read(('r', 'rax', 8)))
    # 0x141f10164: mov rsi, qword ptr [rcx + 8]
    s.write(('r', 'rsi', 8),s.read(('m', 'rcx', None, 1, 8, 8)))
    # 0x141f10168: mov rax, qword ptr [rcx + 0x10]
    s.write(('r', 'rax', 8),s.read(('m', 'rcx', None, 1, 16, 8)))
    # 0x141f1016c: mov qword ptr [rbp - 0x40], rax
    s.write(('m', 'rbp', None, 1, -64, 8),s.read(('r', 'rax', 8)))
    # 0x141f10170: mov rax, qword ptr [rcx + 0x18]
    s.write(('r', 'rax', 8),s.read(('m', 'rcx', None, 1, 24, 8)))
    # 0x141f10174: mov qword ptr [rbp - 0x38], rax
    s.write(('m', 'rbp', None, 1, -56, 8),s.read(('r', 'rax', 8)))
    # 0x141f10178: mov r15, qword ptr [rcx + 0x20]
    s.write(('r', 'r15', 8),s.read(('m', 'rcx', None, 1, 32, 8)))
    # 0x141f1017c: mov r12, qword ptr [rcx + 0x28]
    s.write(('r', 'r12', 8),s.read(('m', 'rcx', None, 1, 40, 8)))
    # 0x141f10180: mov rdi, qword ptr [rcx + 0x30]
    s.write(('r', 'rdi', 8),s.read(('m', 'rcx', None, 1, 48, 8)))
    # 0x141f10184: mov r13, qword ptr [rdx + 0x10]
    s.write(('r', 'r13', 8),s.read(('m', 'rdx', None, 1, 16, 8)))
    # 0x141f10188: movss xmm8, dword ptr [rip + 0xf26da3]
    s.simd_move('movss',('r', 'xmm8', 16),('m', None, None, 1, 5417168692, 4))
    # 0x141f10191: xorps xmm9, xmm9
    s.float_op('xorps',('r', 'xmm9', 16),('r', 'xmm9', 16))
    # 0x141f10195: movss xmm10, dword ptr [rip + 0xf26d8a]
    s.simd_move('movss',('r', 'xmm10', 16),('m', None, None, 1, 5417168680, 4))
    # 0x141f1019e: nop 
    s.pc=5401280928
    return

def b_141f101a0(s):
    # 0x141f101a0: xorps xmm6, xmm6
    s.float_op('xorps',('r', 'xmm6', 16),('r', 'xmm6', 16))
    # 0x141f101a3: cvtsi2ss xmm6, ebx
    s.setlane('xmm6',float(signed(s.read(('r', 'ebx', 4)),32)))
    # 0x141f101a7: mov rax, qword ptr [rbp - 0x48]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, -72, 8)))
    # 0x141f101ab: movss xmm0, dword ptr [rax]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rax', None, 1, 0, 4))
    # 0x141f101af: addss xmm0, xmm8
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm8', 16))
    # 0x141f101b4: divss xmm6, xmm0
    s.float_op('divss',('r', 'xmm6', 16),('r', 'xmm0', 16))
    # 0x141f101b8: movss dword ptr [rbp - 0x24], xmm6
    s.simd_move('movss',('m', 'rbp', None, 1, -36, 4),('r', 'xmm6', 16))
    # 0x141f101bd: ucomiss xmm6, xmm9
    s.compare_float(('r', 'xmm6', 16),('r', 'xmm9', 16))
    # 0x141f101c1: jb 0x141f10337
    s.pc=s.read(('i', 5401281335, 8)) if s.condition('b') else 5401280967
    return

def b_141f101c7(s):
    # 0x141f101c7: ucomiss xmm10, xmm6
    s.compare_float(('r', 'xmm10', 16),('r', 'xmm6', 16))
    # 0x141f101cb: jb 0x141f10337
    s.pc=s.read(('i', 5401281335, 8)) if s.condition('b') else 5401280977
    return

def b_141f101d1(s):
    # 0x141f101d1: mov rcx, rsi
    s.write(('r', 'rcx', 8),s.read(('r', 'rsi', 8)))
    # 0x141f101d4: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x141f101d7: call 0x142802660
    s.push(5401280988)
    s.pc=s.read(('i', 5410661984, 8))
    return

def b_141f101dc(s):
    # 0x141f101dc: nop 
    # 0x141f101dd: mov rdx, qword ptr [rsi + 0x10]
    s.write(('r', 'rdx', 8),s.read(('m', 'rsi', None, 1, 16, 8)))
    # 0x141f101e1: mov ecx, eax
    s.write(('r', 'ecx', 4),s.read(('r', 'eax', 4)))
    # 0x141f101e3: cmp rdx, rcx
    s.integer('cmp',[('r', 'rdx', 8), ('r', 'rcx', 8)])
    # 0x141f101e6: jbe 0x141f10376
    s.pc=s.read(('i', 5401281398, 8)) if s.condition('be') else 5401281004
    return

def b_141f101ec(s):
    # 0x141f101ec: lea rax, [rcx + 1]
    s.write(('r', 'rax', 8),s.address(('m', 'rcx', None, 1, 1, 8)))
    # 0x141f101f0: cmp rax, rdx
    s.integer('cmp',[('r', 'rax', 8), ('r', 'rdx', 8)])
    # 0x141f101f3: jae 0x141f10364
    s.pc=s.read(('i', 5401281380, 8)) if s.condition('ae') else 5401281017
    return

def b_141f101f9(s):
    # 0x141f101f9: mov rax, qword ptr [rsi + 8]
    s.write(('r', 'rax', 8),s.read(('m', 'rsi', None, 1, 8, 8)))
    # 0x141f101fd: movaps xmm11, xmm10
    s.simd_move('movaps',('r', 'xmm11', 16),('r', 'xmm10', 16))
    # 0x141f10201: subss xmm11, xmm0
    s.float_op('subss',('r', 'xmm11', 16),('r', 'xmm0', 16))
    # 0x141f10206: mulss xmm11, dword ptr [rax + rcx*8]
    s.float_op('mulss',('r', 'xmm11', 16),('m', 'rax', 'rcx', 8, 0, 4))
    # 0x141f1020c: movss xmm14, dword ptr [rax + rcx*8 + 8]
    s.simd_move('movss',('r', 'xmm14', 16),('m', 'rax', 'rcx', 8, 8, 4))
    # 0x141f10213: mov rax, qword ptr [rbp - 0x40]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, -64, 8)))
    # 0x141f10217: movsd xmm12, qword ptr [rax]
    s.simd_move('movsd',('r', 'xmm12', 16),('m', 'rax', None, 1, 0, 8))
    # 0x141f1021c: movhps xmm12, qword ptr [r15]
    s.simd_move('movhps',('r', 'xmm12', 16),('m', 'r15', None, 1, 0, 8))
    # 0x141f10220: mulss xmm14, xmm0
    s.float_op('mulss',('r', 'xmm14', 16),('r', 'xmm0', 16))
    # 0x141f10225: mov rax, qword ptr [rbp - 0x38]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, -56, 8)))
    # 0x141f10229: movsd xmm13, qword ptr [rax]
    s.simd_move('movsd',('r', 'xmm13', 16),('m', 'rax', None, 1, 0, 8))
    # 0x141f1022e: movhps xmm13, qword ptr [r12]
    s.simd_move('movhps',('r', 'xmm13', 16),('m', 'r12', None, 1, 0, 8))
    # 0x141f10233: mov rcx, rdi
    s.write(('r', 'rcx', 8),s.read(('r', 'rdi', 8)))
    # 0x141f10236: call 0x140b77a00
    s.push(5401281083)
    s.pc=s.read(('i', 5380733440, 8))
    return

def b_141f1023b(s):
    # 0x141f1023b: nop 
    # 0x141f1023c: movaps xmm7, xmm0
    s.simd_move('movaps',('r', 'xmm7', 16),('r', 'xmm0', 16))
    # 0x141f1023f: mov rcx, rsi
    s.write(('r', 'rcx', 8),s.read(('r', 'rsi', 8)))
    # 0x141f10242: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x141f10245: call 0x142802660
    s.push(5401281098)
    s.pc=s.read(('i', 5410661984, 8))
    return

def b_141f1024a(s):
    # 0x141f1024a: nop 
    # 0x141f1024b: mov rdx, qword ptr [rsi + 0x10]
    s.write(('r', 'rdx', 8),s.read(('m', 'rsi', None, 1, 16, 8)))
    # 0x141f1024f: mov ecx, eax
    s.write(('r', 'ecx', 4),s.read(('r', 'eax', 4)))
    # 0x141f10251: cmp rdx, rcx
    s.integer('cmp',[('r', 'rdx', 8), ('r', 'rcx', 8)])
    # 0x141f10254: jbe 0x141f10397
    s.pc=s.read(('i', 5401281431, 8)) if s.condition('be') else 5401281114
    return

def b_141f1025a(s):
    # 0x141f1025a: lea rax, [rcx + 1]
    s.write(('r', 'rax', 8),s.address(('m', 'rcx', None, 1, 1, 8)))
    # 0x141f1025e: cmp rax, rdx
    s.integer('cmp',[('r', 'rax', 8), ('r', 'rdx', 8)])
    # 0x141f10261: jae 0x141f10385
    s.pc=s.read(('i', 5401281413, 8)) if s.condition('ae') else 5401281127
    return

def b_141f10267(s):
    # 0x141f10267: inc ebx
    s.integer('inc',[('r', 'ebx', 4)])
    # 0x141f10269: addss xmm11, xmm14
    s.float_op('addss',('r', 'xmm11', 16),('r', 'xmm14', 16))
    # 0x141f1026e: movaps xmm1, xmm10
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm10', 16))
    # 0x141f10272: subss xmm1, xmm11
    s.float_op('subss',('r', 'xmm1', 16),('r', 'xmm11', 16))
    # 0x141f10277: shufps xmm1, xmm1, 0
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm1', 16),0)
    # 0x141f1027b: mulps xmm12, xmm1
    s.float_op('mulps',('r', 'xmm12', 16),('r', 'xmm1', 16))
    # 0x141f1027f: shufps xmm11, xmm11, 0
    s.shuffle('shufps',('r', 'xmm11', 16),('r', 'xmm11', 16),0)
    # 0x141f10284: mulps xmm11, xmm13
    s.float_op('mulps',('r', 'xmm11', 16),('r', 'xmm13', 16))
    # 0x141f10288: addps xmm11, xmm12
    s.float_op('addps',('r', 'xmm11', 16),('r', 'xmm12', 16))
    # 0x141f1028c: mov rax, qword ptr [rsi + 8]
    s.write(('r', 'rax', 8),s.read(('m', 'rsi', None, 1, 8, 8)))
    # 0x141f10290: movaps xmm1, xmm10
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm10', 16))
    # 0x141f10294: subss xmm1, xmm0
    s.float_op('subss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x141f10298: mulss xmm1, dword ptr [rax + rcx*8 + 4]
    s.float_op('mulss',('r', 'xmm1', 16),('m', 'rax', 'rcx', 8, 4, 4))
    # 0x141f1029e: movss xmm2, dword ptr [rax + rcx*8 + 0xc]
    s.simd_move('movss',('r', 'xmm2', 16),('m', 'rax', 'rcx', 8, 12, 4))
    # 0x141f102a4: mulss xmm2, xmm0
    s.float_op('mulss',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x141f102a8: addss xmm2, xmm1
    s.float_op('addss',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x141f102ac: movaps xmm0, xmm10
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm10', 16))
    # 0x141f102b0: subss xmm0, xmm2
    s.float_op('subss',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x141f102b4: mulss xmm0, xmm9
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm9', 16))
    # 0x141f102b9: mulss xmm7, xmm2
    s.float_op('mulss',('r', 'xmm7', 16),('r', 'xmm2', 16))
    # 0x141f102bd: addss xmm7, xmm0
    s.float_op('addss',('r', 'xmm7', 16),('r', 'xmm0', 16))
    # 0x141f102c1: mov rcx, qword ptr [rbp - 0x20]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, -32, 8)))
    # 0x141f102c5: lea rax, [rcx + rcx*2]
    s.write(('r', 'rax', 8),s.address(('m', 'rcx', 'rcx', 2, 0, 8)))
    # 0x141f102c9: movups xmmword ptr [r13 + rax*8], xmm11
    s.simd_move('movups',('m', 'r13', 'rax', 8, 0, 16),('r', 'xmm11', 16))
    # 0x141f102cf: movss dword ptr [r13 + rax*8 + 0x10], xmm6
    s.simd_move('movss',('m', 'r13', 'rax', 8, 16, 4),('r', 'xmm6', 16))
    # 0x141f102d6: movss dword ptr [r13 + rax*8 + 0x14], xmm7
    s.simd_move('movss',('m', 'r13', 'rax', 8, 20, 4),('r', 'xmm7', 16))
    # 0x141f102dd: inc rcx
    s.integer('inc',[('r', 'rcx', 8)])
    # 0x141f102e0: mov qword ptr [rbp - 0x20], rcx
    s.write(('m', 'rbp', None, 1, -32, 8),s.read(('r', 'rcx', 8)))
    # 0x141f102e4: cmp ebx, r14d
    s.integer('cmp',[('r', 'ebx', 4), ('r', 'r14d', 4)])
    # 0x141f102e7: jne 0x141f101a0
    s.pc=s.read(('i', 5401280928, 8)) if s.condition('ne') else 5401281261
    return

def b_141f102ed(s):
    # 0x141f102ed: mov rax, qword ptr [rbp - 0x30]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, -48, 8)))
    # 0x141f102f1: mov rcx, qword ptr [rbp - 0x20]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, -32, 8)))
    # 0x141f102f5: mov qword ptr [rax], rcx
    s.write(('m', 'rax', None, 1, 0, 8),s.read(('r', 'rcx', 8)))
    # 0x141f102f8: movaps xmm6, xmmword ptr [rbp - 0x10]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rbp', None, 1, -16, 16))
    # 0x141f102fc: movaps xmm7, xmmword ptr [rbp]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rbp', None, 1, 0, 16))
    # 0x141f10300: movaps xmm8, xmmword ptr [rbp + 0x10]
    s.simd_move('movaps',('r', 'xmm8', 16),('m', 'rbp', None, 1, 16, 16))
    # 0x141f10305: movaps xmm9, xmmword ptr [rbp + 0x20]
    s.simd_move('movaps',('r', 'xmm9', 16),('m', 'rbp', None, 1, 32, 16))
    # 0x141f1030a: movaps xmm10, xmmword ptr [rbp + 0x30]
    s.simd_move('movaps',('r', 'xmm10', 16),('m', 'rbp', None, 1, 48, 16))
    # 0x141f1030f: movaps xmm11, xmmword ptr [rbp + 0x40]
    s.simd_move('movaps',('r', 'xmm11', 16),('m', 'rbp', None, 1, 64, 16))
    # 0x141f10314: movaps xmm12, xmmword ptr [rbp + 0x50]
    s.simd_move('movaps',('r', 'xmm12', 16),('m', 'rbp', None, 1, 80, 16))
    # 0x141f10319: movaps xmm13, xmmword ptr [rbp + 0x60]
    s.simd_move('movaps',('r', 'xmm13', 16),('m', 'rbp', None, 1, 96, 16))
    # 0x141f1031e: movaps xmm14, xmmword ptr [rbp + 0x70]
    s.simd_move('movaps',('r', 'xmm14', 16),('m', 'rbp', None, 1, 112, 16))
    # 0x141f10323: add rsp, 0x108
    s.integer('add',[('r', 'rsp', 8), ('i', 264, 8)])
    # 0x141f1032a: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x141f1032b: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x141f1032c: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x141f1032d: pop r12
    s.write(('r', 'r12', 8),s.pop())
    # 0x141f1032f: pop r13
    s.write(('r', 'r13', 8),s.pop())
    # 0x141f10331: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x141f10333: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x141f10335: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x141f10336: ret 
    s.pc=s.pop()
    return

def b_141f10337(s):
    # 0x141f10337: lea rax, [rbp - 0x24]
    s.write(('r', 'rax', 8),s.address(('m', 'rbp', None, 1, -36, 8)))
    # 0x141f1033b: mov qword ptr [rbp - 0x58], rax
    s.write(('m', 'rbp', None, 1, -88, 8),s.read(('r', 'rax', 8)))
    # 0x141f1033f: lea rax, [rip - 0xf9f386]
    s.write(('r', 'rax', 8),s.address(('m', None, None, 1, 5384900544, 8)))
    # 0x141f10346: mov qword ptr [rbp - 0x50], rax
    s.write(('m', 'rbp', None, 1, -80, 8),s.read(('r', 'rax', 8)))
    # 0x141f1034a: lea rcx, [rip + 0x168b01b]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5424919404, 8)))
    # 0x141f10351: lea r8, [rip + 0x15193e0]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5423404856, 8)))
    # 0x141f10358: lea rdx, [rbp - 0x58]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, -88, 8)))
    # 0x141f1035c: call 0x142dc83d0
    s.push(5401281377)
    s.pc=s.read(('i', 5416715216, 8))
    return

def b_141f10361(s):
    # 0x141f10361: nop 
    # 0x141f10362: jmp 0x141f103a4
    s.pc=s.read(('i', 5401281444, 8))
    return

def b_141f10364(s):
    # 0x141f10364: lea r8, [rip + 0x168af5d]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424919240, 8)))
    # 0x141f1036b: mov rcx, rax
    s.write(('r', 'rcx', 8),s.read(('r', 'rax', 8)))
    # 0x141f1036e: call 0x142dc81f2
    s.push(5401281395)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_141f10373(s):
    # 0x141f10373: nop 
    # 0x141f10374: jmp 0x141f103a4
    s.pc=s.read(('i', 5401281444, 8))
    return

def b_141f10376(s):
    # 0x141f10376: lea r8, [rip + 0x168af33]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424919216, 8)))
    # 0x141f1037d: call 0x142dc81f2
    s.push(5401281410)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_141f10382(s):
    # 0x141f10382: nop 
    # 0x141f10383: jmp 0x141f103a4
    s.pc=s.read(('i', 5401281444, 8))
    return

def b_141f10385(s):
    # 0x141f10385: lea r8, [rip + 0x168af3c]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424919240, 8)))
    # 0x141f1038c: mov rcx, rax
    s.write(('r', 'rcx', 8),s.read(('r', 'rax', 8)))
    # 0x141f1038f: call 0x142dc81f2
    s.push(5401281428)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_141f10394(s):
    # 0x141f10394: nop 
    # 0x141f10395: jmp 0x141f103a4
    s.pc=s.read(('i', 5401281444, 8))
    return

def b_141f10397(s):
    # 0x141f10397: lea r8, [rip + 0x168af12]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424919216, 8)))
    # 0x141f1039e: call 0x142dc81f2
    s.push(5401281443)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_141f103a3(s):
    # 0x141f103a3: nop 
    s.pc=5401281444
    return

def b_141f103a4(s):
    # 0x141f103a4: ud2 
    raise RuntimeError('Original unreachable/panic 0x141f103a4')
    s.pc=5401281446
    return

def b_141f103a6(s):
    # 0x141f103a6: nop word ptr cs:[rax + rax]
    # 0x141f103b0: mov qword ptr [rsp + 0x10], rdx
    s.write(('m', 'rsp', None, 1, 16, 8),s.read(('r', 'rdx', 8)))
    # 0x141f103b5: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x141f103b6: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x141f103b8: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x141f103ba: push r13
    s.push(s.read(('r', 'r13', 8)))
    # 0x141f103bc: push r12
    s.push(s.read(('r', 'r12', 8)))
    # 0x141f103be: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x141f103bf: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x141f103c0: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x141f103c1: sub rsp, 0xb8
    s.integer('sub',[('r', 'rsp', 8), ('i', 184, 8)])
    # 0x141f103c8: lea rbp, [rdx + 0x80]
    s.write(('r', 'rbp', 8),s.address(('m', 'rdx', None, 1, 128, 8)))
    # 0x141f103cf: movaps xmmword ptr [rsp + 0x20], xmm14
    s.simd_move('movaps',('m', 'rsp', None, 1, 32, 16),('r', 'xmm14', 16))
    # 0x141f103d5: movaps xmmword ptr [rsp + 0x30], xmm13
    s.simd_move('movaps',('m', 'rsp', None, 1, 48, 16),('r', 'xmm13', 16))
    # 0x141f103db: movaps xmmword ptr [rsp + 0x40], xmm12
    s.simd_move('movaps',('m', 'rsp', None, 1, 64, 16),('r', 'xmm12', 16))
    # 0x141f103e1: movaps xmmword ptr [rsp + 0x50], xmm11
    s.simd_move('movaps',('m', 'rsp', None, 1, 80, 16),('r', 'xmm11', 16))
    # 0x141f103e7: movaps xmmword ptr [rsp + 0x60], xmm10
    s.simd_move('movaps',('m', 'rsp', None, 1, 96, 16),('r', 'xmm10', 16))
    # 0x141f103ed: movaps xmmword ptr [rsp + 0x70], xmm9
    s.simd_move('movaps',('m', 'rsp', None, 1, 112, 16),('r', 'xmm9', 16))
    # 0x141f103f3: movaps xmmword ptr [rsp + 0x80], xmm8
    s.simd_move('movaps',('m', 'rsp', None, 1, 128, 16),('r', 'xmm8', 16))
    # 0x141f103fc: movaps xmmword ptr [rsp + 0x90], xmm7
    s.simd_move('movaps',('m', 'rsp', None, 1, 144, 16),('r', 'xmm7', 16))
    # 0x141f10404: movaps xmmword ptr [rsp + 0xa0], xmm6
    s.simd_move('movaps',('m', 'rsp', None, 1, 160, 16),('r', 'xmm6', 16))
    # 0x141f1040c: mov rax, qword ptr [rbp - 0x30]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, -48, 8)))
    # 0x141f10410: mov rcx, qword ptr [rbp - 0x20]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, -32, 8)))
    # 0x141f10414: mov qword ptr [rax], rcx
    s.write(('m', 'rax', None, 1, 0, 8),s.read(('r', 'rcx', 8)))
    # 0x141f10417: movaps xmm6, xmmword ptr [rsp + 0xa0]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rsp', None, 1, 160, 16))
    # 0x141f1041f: movaps xmm7, xmmword ptr [rsp + 0x90]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rsp', None, 1, 144, 16))
    # 0x141f10427: movaps xmm8, xmmword ptr [rsp + 0x80]
    s.simd_move('movaps',('r', 'xmm8', 16),('m', 'rsp', None, 1, 128, 16))
    # 0x141f10430: movaps xmm9, xmmword ptr [rsp + 0x70]
    s.simd_move('movaps',('r', 'xmm9', 16),('m', 'rsp', None, 1, 112, 16))
    # 0x141f10436: movaps xmm10, xmmword ptr [rsp + 0x60]
    s.simd_move('movaps',('r', 'xmm10', 16),('m', 'rsp', None, 1, 96, 16))
    # 0x141f1043c: movaps xmm11, xmmword ptr [rsp + 0x50]
    s.simd_move('movaps',('r', 'xmm11', 16),('m', 'rsp', None, 1, 80, 16))
    # 0x141f10442: movaps xmm12, xmmword ptr [rsp + 0x40]
    s.simd_move('movaps',('r', 'xmm12', 16),('m', 'rsp', None, 1, 64, 16))
    # 0x141f10448: movaps xmm13, xmmword ptr [rsp + 0x30]
    s.simd_move('movaps',('r', 'xmm13', 16),('m', 'rsp', None, 1, 48, 16))
    # 0x141f1044e: movaps xmm14, xmmword ptr [rsp + 0x20]
    s.simd_move('movaps',('r', 'xmm14', 16),('m', 'rsp', None, 1, 32, 16))
    # 0x141f10454: add rsp, 0xb8
    s.integer('add',[('r', 'rsp', 8), ('i', 184, 8)])
    # 0x141f1045b: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x141f1045c: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x141f1045d: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x141f1045e: pop r12
    s.write(('r', 'r12', 8),s.pop())
    # 0x141f10460: pop r13
    s.write(('r', 'r13', 8),s.pop())
    # 0x141f10462: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x141f10464: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x141f10466: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x141f10467: ret 
    s.pc=s.pop()
    return

def b_142802660(s):
    # 0x142802660: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x142802661: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x142802662: sub rsp, 0x88
    s.integer('sub',[('r', 'rsp', 8), ('i', 136, 8)])
    # 0x142802669: lea rbp, [rsp + 0x80]
    s.write(('r', 'rbp', 8),s.address(('m', 'rsp', None, 1, 128, 8)))
    # 0x142802671: mov qword ptr [rbp], 0xfffffffffffffffe
    s.write(('m', 'rbp', None, 1, 0, 8),s.read(('i', -2, 8)))
    # 0x142802679: movd eax, xmm1
    s.simd_move('movd',('r', 'eax', 4),('r', 'xmm1', 16))
    # 0x14280267d: and eax, 0x7fffffff
    s.integer('and',[('r', 'eax', 4), ('i', 2147483647, 4)])
    # 0x142802682: cmp eax, 0x7f800000
    s.integer('cmp',[('r', 'eax', 4), ('i', 2139095040, 4)])
    # 0x142802687: jge 0x14280275a
    s.pc=s.read(('i', 5410662234, 8)) if s.condition('ge') else 5410662029
    return

def b_14280268d(s):
    # 0x14280268d: movdqa xmm2, xmm1
    s.simd_move('movdqa',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x142802691: ucomiss xmm1, dword ptr [rip + 0x634890]
    s.compare_float(('r', 'xmm1', 16),('m', None, None, 1, 5417168680, 4))
    # 0x142802698: jae 0x1428026df
    s.pc=s.read(('i', 5410662111, 8)) if s.condition('ae') else 5410662042
    return

def b_14280269a(s):
    # 0x14280269a: xor eax, eax
    s.integer('xor',[('r', 'eax', 4), ('r', 'eax', 4)])
    # 0x14280269c: xorps xmm0, xmm0
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x14280269f: ucomiss xmm0, xmm2
    s.compare_float(('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x1428026a2: jae 0x1428026ed
    s.pc=s.read(('i', 5410662125, 8)) if s.condition('ae') else 5410662052
    return

def b_1428026a4(s):
    # 0x1428026a4: mov rdx, qword ptr [rcx + 0x20]
    s.write(('r', 'rdx', 8),s.read(('m', 'rcx', None, 1, 32, 8)))
    # 0x1428026a8: mov r8, qword ptr [rcx + 0x28]
    s.write(('r', 'r8', 8),s.read(('m', 'rcx', None, 1, 40, 8)))
    # 0x1428026ac: cmp r8, 1
    s.integer('cmp',[('r', 'r8', 8), ('i', 1, 8)])
    # 0x1428026b0: je 0x1428026f7
    s.pc=s.read(('i', 5410662135, 8)) if s.condition('e') else 5410662066
    return

def b_1428026b2(s):
    # 0x1428026b2: test r8, r8
    s.integer('test',[('r', 'r8', 8), ('r', 'r8', 8)])
    # 0x1428026b5: je 0x142802790
    s.pc=s.read(('i', 5410662288, 8)) if s.condition('e') else 5410662075
    return

def b_1428026bb(s):
    # 0x1428026bb: xor eax, eax
    s.integer('xor',[('r', 'eax', 4), ('r', 'eax', 4)])
    # 0x1428026bd: mov rcx, r8
    s.write(('r', 'rcx', 8),s.read(('r', 'r8', 8)))
    s.pc=5410662080
    return

def b_1428026c0(s):
    # 0x1428026c0: mov r9, rax
    s.write(('r', 'r9', 8),s.read(('r', 'rax', 8)))
    # 0x1428026c3: mov r10, rcx
    s.write(('r', 'r10', 8),s.read(('r', 'rcx', 8)))
    # 0x1428026c6: shr r10, 1
    s.integer('shr',[('r', 'r10', 8), ('i', 1, 8)])
    # 0x1428026c9: add rax, r10
    s.integer('add',[('r', 'rax', 8), ('r', 'r10', 8)])
    # 0x1428026cc: ucomiss xmm2, dword ptr [rdx + rax*4]
    s.compare_float(('r', 'xmm2', 16),('m', 'rdx', 'rax', 4, 0, 4))
    # 0x1428026d0: cmovb rax, r9
    s.write(('r', 'rax', 8),s.read(('r', 'r9', 8))) if s.condition('b') else None
    # 0x1428026d4: sub rcx, r10
    s.integer('sub',[('r', 'rcx', 8), ('r', 'r10', 8)])
    # 0x1428026d7: cmp rcx, 1
    s.integer('cmp',[('r', 'rcx', 8), ('i', 1, 8)])
    # 0x1428026db: ja 0x1428026c0
    s.pc=s.read(('i', 5410662080, 8)) if s.condition('a') else 5410662109
    return

def b_1428026dd(s):
    # 0x1428026dd: jmp 0x1428026f9
    s.pc=s.read(('i', 5410662137, 8))
    return

def b_1428026df(s):
    # 0x1428026df: mov eax, dword ptr [rcx + 0x10]
    s.write(('r', 'eax', 4),s.read(('m', 'rcx', None, 1, 16, 4)))
    # 0x1428026e2: add eax, -2
    s.integer('add',[('r', 'eax', 4), ('i', -2, 4)])
    # 0x1428026e5: movss xmm0, dword ptr [rip + 0x63483b]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5417168680, 4))
    s.pc=5410662125
    return

def b_1428026ed(s):
    # 0x1428026ed: add rsp, 0x88
    s.integer('add',[('r', 'rsp', 8), ('i', 136, 8)])
    # 0x1428026f4: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x1428026f5: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x1428026f6: ret 
    s.pc=s.pop()
    return

def b_1428026f7(s):
    # 0x1428026f7: xor eax, eax
    s.integer('xor',[('r', 'eax', 4), ('r', 'eax', 4)])
    s.pc=5410662137
    return

def b_1428026f9(s):
    # 0x1428026f9: ucomiss xmm2, dword ptr [rdx + rax*4]
    s.compare_float(('r', 'xmm2', 16),('m', 'rdx', 'rax', 4, 0, 4))
    # 0x1428026fd: sbb rax, -1
    s.integer('sbb',[('r', 'rax', 8), ('i', -1, 8)])
    # 0x142802701: cmp rax, r8
    s.integer('cmp',[('r', 'rax', 8), ('r', 'r8', 8)])
    # 0x142802704: jae 0x142802790
    s.pc=s.read(('i', 5410662288, 8)) if s.condition('ae') else 5410662154
    return

def b_14280270a(s):
    # 0x14280270a: mov rcx, rax
    s.write(('r', 'rcx', 8),s.read(('r', 'rax', 8)))
    # 0x14280270d: sub rcx, 1
    s.integer('sub',[('r', 'rcx', 8), ('i', 1, 8)])
    # 0x142802711: jb 0x1428027e1
    s.pc=s.read(('i', 5410662369, 8)) if s.condition('b') else 5410662167
    return

def b_142802717(s):
    # 0x142802717: movss xmm0, dword ptr [rdx + rcx*4]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rdx', 'rcx', 4, 0, 4))
    # 0x14280271c: movss dword ptr [rbp - 8], xmm0
    s.simd_move('movss',('m', 'rbp', None, 1, -8, 4),('r', 'xmm0', 16))
    # 0x142802721: movss xmm1, dword ptr [rdx + rax*4]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rdx', 'rax', 4, 0, 4))
    # 0x142802726: movss dword ptr [rbp - 0xc], xmm1
    s.simd_move('movss',('m', 'rbp', None, 1, -12, 4),('r', 'xmm1', 16))
    # 0x14280272b: ucomiss xmm0, xmm1
    s.compare_float(('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x14280272e: jne 0x142802732
    s.pc=s.read(('i', 5410662194, 8)) if s.condition('ne') else 5410662192
    return

def b_142802730(s):
    # 0x142802730: jnp 0x142802772
    s.pc=s.read(('i', 5410662258, 8)) if s.condition('np') else 5410662194
    return

def b_142802732(s):
    # 0x142802732: mov rsi, rcx
    s.write(('r', 'rsi', 8),s.read(('r', 'rcx', 8)))
    # 0x142802735: call 0x140de8220
    s.push(5410662202)
    s.pc=s.read(('i', 5383291424, 8))
    return

def b_14280273a(s):
    # 0x14280273a: mov rax, rsi
    s.write(('r', 'rax', 8),s.read(('r', 'rsi', 8)))
    # 0x14280273d: xorps xmm1, xmm1
    s.float_op('xorps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x142802740: maxss xmm1, xmm0
    s.float_op('maxss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142802744: movss xmm0, dword ptr [rip + 0x6347dc]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5417168680, 4))
    # 0x14280274c: minss xmm0, xmm1
    s.float_op('minss',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x142802750: add rsp, 0x88
    s.integer('add',[('r', 'rsp', 8), ('i', 136, 8)])
    # 0x142802757: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x142802758: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x142802759: ret 
    s.pc=s.pop()
    return

def b_14280275a(s):
    # 0x14280275a: lea rcx, [rip + 0xd98a80]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5424919009, 8)))
    # 0x142802761: lea r8, [rip + 0xd98aa0]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424919048, 8)))
    # 0x142802768: mov edx, 0x23
    s.write(('r', 'edx', 4),s.read(('i', 35, 4)))
    # 0x14280276d: call 0x142dc83b0
    s.push(5410662258)
    s.pc=s.read(('i', 5416715184, 8))
    return

def b_142802772(s):
    # 0x142802772: lea rax, [rip + 0xd98adf]
    s.write(('r', 'rax', 8),s.address(('m', None, None, 1, 5424919128, 8)))
    # 0x142802779: mov qword ptr [rsp + 0x28], rax
    s.write(('m', 'rsp', None, 1, 40, 8),s.read(('r', 'rax', 8)))
    # 0x14280277e: lea rdx, [rbp - 8]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, -8, 8)))
    # 0x142802782: lea r8, [rbp - 0xc]
    s.write(('r', 'r8', 8),s.address(('m', 'rbp', None, 1, -12, 8)))
    # 0x142802786: mov cl, 1
    s.write(('r', 'cl', 1),s.read(('i', 1, 1)))
    # 0x142802788: xor r9d, r9d
    s.integer('xor',[('r', 'r9d', 4), ('r', 'r9d', 4)])
    # 0x14280278b: call 0x142db0bc2
    s.push(5410662288)
    s.pc=s.read(('i', 5416618946, 8))
    return

def b_142802790(s):
    # 0x142802790: movss dword ptr [rbp - 4], xmm2
    s.simd_move('movss',('m', 'rbp', None, 1, -4, 4),('r', 'xmm2', 16))
    # 0x142802795: lea r8, [rdx + r8*4]
    s.write(('r', 'r8', 8),s.address(('m', 'rdx', 'r8', 4, 0, 8)))
    # 0x142802799: lea rsi, [rbp - 0x48]
    s.write(('r', 'rsi', 8),s.address(('m', 'rbp', None, 1, -72, 8)))
    # 0x14280279d: mov rcx, rsi
    s.write(('r', 'rcx', 8),s.read(('r', 'rsi', 8)))
    # 0x1428027a0: call 0x140567680
    s.push(5410662309)
    s.pc=s.read(('i', 5374375552, 8))
    return

def b_1428027a5(s):
    # 0x1428027a5: lea rax, [rbp - 4]
    s.write(('r', 'rax', 8),s.address(('m', 'rbp', None, 1, -4, 8)))
    # 0x1428027a9: mov qword ptr [rbp - 0x30], rax
    s.write(('m', 'rbp', None, 1, -48, 8),s.read(('r', 'rax', 8)))
    # 0x1428027ad: lea rax, [rip - 0x18917f4]
    s.write(('r', 'rax', 8),s.address(('m', None, None, 1, 5384900544, 8)))
    # 0x1428027b4: mov qword ptr [rbp - 0x28], rax
    s.write(('m', 'rbp', None, 1, -40, 8),s.read(('r', 'rax', 8)))
    # 0x1428027b8: mov qword ptr [rbp - 0x20], rsi
    s.write(('m', 'rbp', None, 1, -32, 8),s.read(('r', 'rsi', 8)))
    # 0x1428027bc: lea rax, [rip - 0x183a813]
    s.write(('r', 'rax', 8),s.address(('m', None, None, 1, 5385256880, 8)))
    # 0x1428027c3: mov qword ptr [rbp - 0x18], rax
    s.write(('m', 'rbp', None, 1, -24, 8),s.read(('r', 'rax', 8)))
    # 0x1428027c7: lea rcx, [rip + 0xd98a52]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5424919072, 8)))
    # 0x1428027ce: lea r8, [rip + 0xd98a6b]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424919104, 8)))
    # 0x1428027d5: lea rdx, [rbp - 0x30]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, -48, 8)))
    # 0x1428027d9: call 0x142dc83d0
    s.push(5410662366)
    s.pc=s.read(('i', 5416715216, 8))
    return

def b_1428027de(s):
    # 0x1428027de: nop 
    # 0x1428027df: ud2 
    raise RuntimeError('Original unreachable/panic 0x1428027df')
    s.pc=5410662369
    return

def b_1428027e1(s):
    # 0x1428027e1: movaps xmm0, xmm2
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x1428027e4: call 0x142e29250
    s.push(5410662377)
    s.pc=s.read(('i', 5417112144, 8))
    return

def b_1428027e9(s):
    # 0x1428027e9: int3 
    raise RuntimeError('Original unreachable/panic 0x1428027e9')
    s.pc=5410662378
    return

def b_1428027ea(s):
    # 0x1428027ea: nop word ptr [rax + rax]
    # 0x1428027f0: mov qword ptr [rsp + 0x10], rdx
    s.write(('m', 'rsp', None, 1, 16, 8),s.read(('r', 'rdx', 8)))
    # 0x1428027f5: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x1428027f6: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x1428027f7: sub rsp, 0x38
    s.integer('sub',[('r', 'rsp', 8), ('i', 56, 8)])
    # 0x1428027fb: lea rbp, [rdx + 0x80]
    s.write(('r', 'rbp', 8),s.address(('m', 'rdx', None, 1, 128, 8)))
    # 0x142802802: mov rdx, qword ptr [rbp - 0x48]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, -72, 8)))
    # 0x142802806: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x142802809: je 0x14280281f
    s.pc=s.read(('i', 5410662431, 8)) if s.condition('e') else 5410662411
    return

def b_14280280b(s):
    # 0x14280280b: mov rcx, qword ptr [rbp - 0x40]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, -64, 8)))
    # 0x14280280f: shl rdx, 2
    s.integer('shl',[('r', 'rdx', 8), ('i', 2, 1)])
    # 0x142802813: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x142802819: call 0x1406abac0
    s.push(5410662430)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_14280281e(s):
    # 0x14280281e: nop 
    s.pc=5410662431
    return

def b_14280281f(s):
    # 0x14280281f: add rsp, 0x38
    s.integer('add',[('r', 'rsp', 8), ('i', 56, 8)])
    # 0x142802823: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x142802824: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x142802825: ret 
    s.pc=s.pop()
    return

def b_142802830(s):
    # 0x142802830: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x142802831: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x142802833: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x142802835: push r12
    s.push(s.read(('r', 'r12', 8)))
    # 0x142802837: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x142802838: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x142802839: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x14280283a: sub rsp, 0x50
    s.integer('sub',[('r', 'rsp', 8), ('i', 80, 8)])
    # 0x14280283e: lea rbp, [rsp + 0x50]
    s.write(('r', 'rbp', 8),s.address(('m', 'rsp', None, 1, 80, 8)))
    # 0x142802843: mov qword ptr [rbp - 8], 0xfffffffffffffffe
    s.write(('m', 'rbp', None, 1, -8, 8),s.read(('i', -2, 8)))
    # 0x14280284b: mov rsi, r8
    s.write(('r', 'rsi', 8),s.read(('r', 'r8', 8)))
    # 0x14280284e: mov r12, qword ptr [rdx]
    s.write(('r', 'r12', 8),s.read(('m', 'rdx', None, 1, 0, 8)))
    # 0x142802851: mov r15, qword ptr [rdx + 8]
    s.write(('r', 'r15', 8),s.read(('m', 'rdx', None, 1, 8, 8)))
    # 0x142802855: mov r14, qword ptr [rdx + 0x10]
    s.write(('r', 'r14', 8),s.read(('m', 'rdx', None, 1, 16, 8)))
    # 0x142802859: cmp r14, 2
    s.integer('cmp',[('r', 'r14', 8), ('i', 2, 8)])
    # 0x14280285d: jb 0x1428029f7
    s.pc=s.read(('i', 5410662903, 8)) if s.condition('b') else 5410662499
    return

def b_142802863(s):
    # 0x142802863: mov rdi, rcx
    s.write(('r', 'rdi', 8),s.read(('r', 'rcx', 8)))
    # 0x142802866: lea rbx, [r14*4]
    s.write(('r', 'rbx', 8),s.address(('m', None, 'r14', 4, 0, 8)))
    # 0x14280286e: call 0x14007ee60
    s.push(5410662515)
    s.pc=s.read(('i', 5369228896, 8))
    return

def b_142802873(s):
    # 0x142802873: mov edx, 4
    s.write(('r', 'edx', 4),s.read(('i', 4, 4)))
    # 0x142802878: mov rcx, rbx
    s.write(('r', 'rcx', 8),s.read(('r', 'rbx', 8)))
    # 0x14280287b: call 0x1406abab0
    s.push(5410662528)
    s.pc=s.read(('i', 5375703728, 8))
    return

def b_142802880(s):
    # 0x142802880: test rax, rax
    s.integer('test',[('r', 'rax', 8), ('r', 'rax', 8)])
    # 0x142802883: je 0x142802a06
    s.pc=s.read(('i', 5410662918, 8)) if s.condition('e') else 5410662537
    return

def b_142802889(s):
    # 0x142802889: movsd xmm1, qword ptr [r15]
    s.simd_move('movsd',('r', 'xmm1', 16),('m', 'r15', None, 1, 0, 8))
    # 0x14280288e: mov rdx, rbx
    s.write(('r', 'rdx', 8),s.read(('r', 'rbx', 8)))
    # 0x142802891: and rdx, 0xfffffffffffffff8
    s.integer('and',[('r', 'rdx', 8), ('i', -8, 8)])
    # 0x142802895: xorps xmm0, xmm0
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x142802898: xor ecx, ecx
    s.integer('xor',[('r', 'ecx', 4), ('r', 'ecx', 4)])
    # 0x14280289a: nop word ptr [rax + rax]
    s.pc=5410662560
    return

def b_1428028a0(s):
    # 0x1428028a0: movsd xmm2, qword ptr [r15 + rcx*2]
    s.simd_move('movsd',('r', 'xmm2', 16),('m', 'r15', 'rcx', 2, 0, 8))
    # 0x1428028a6: subps xmm1, xmm2
    s.float_op('subps',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x1428028a9: mulps xmm1, xmm1
    s.float_op('mulps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x1428028ac: movshdup xmm3, xmm1
    s.simd_move('movshdup',('r', 'xmm3', 16),('r', 'xmm1', 16))
    # 0x1428028b0: addss xmm3, xmm1
    s.float_op('addss',('r', 'xmm3', 16),('r', 'xmm1', 16))
    # 0x1428028b4: sqrtss xmm3, xmm3
    s.float_op('sqrtss',('r', 'xmm3', 16),('r', 'xmm3', 16))
    # 0x1428028b8: addss xmm3, xmm0
    s.float_op('addss',('r', 'xmm3', 16),('r', 'xmm0', 16))
    # 0x1428028bc: movss dword ptr [rax + rcx], xmm3
    s.simd_move('movss',('m', 'rax', 'rcx', 1, 0, 4),('r', 'xmm3', 16))
    # 0x1428028c1: movsd xmm1, qword ptr [r15 + rcx*2 + 8]
    s.simd_move('movsd',('r', 'xmm1', 16),('m', 'r15', 'rcx', 2, 8, 8))
    # 0x1428028c8: subps xmm2, xmm1
    s.float_op('subps',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x1428028cb: mulps xmm2, xmm2
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm2', 16))
    # 0x1428028ce: movshdup xmm0, xmm2
    s.simd_move('movshdup',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x1428028d2: addss xmm0, xmm2
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x1428028d6: sqrtss xmm0, xmm0
    s.float_op('sqrtss',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x1428028da: addss xmm0, xmm3
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm3', 16))
    # 0x1428028de: movss dword ptr [rax + rcx + 4], xmm0
    s.simd_move('movss',('m', 'rax', 'rcx', 1, 4, 4),('r', 'xmm0', 16))
    # 0x1428028e4: add rcx, 8
    s.integer('add',[('r', 'rcx', 8), ('i', 8, 8)])
    # 0x1428028e8: cmp rdx, rcx
    s.integer('cmp',[('r', 'rdx', 8), ('r', 'rcx', 8)])
    # 0x1428028eb: jne 0x1428028a0
    s.pc=s.read(('i', 5410662560, 8)) if s.condition('ne') else 5410662637
    return

def b_1428028ed(s):
    # 0x1428028ed: test r14b, 1
    s.integer('test',[('r', 'r14b', 1), ('i', 1, 1)])
    # 0x1428028f1: je 0x142802917
    s.pc=s.read(('i', 5410662679, 8)) if s.condition('e') else 5410662643
    return

def b_1428028f3(s):
    # 0x1428028f3: movsd xmm2, qword ptr [r15 + rcx*2]
    s.simd_move('movsd',('r', 'xmm2', 16),('m', 'r15', 'rcx', 2, 0, 8))
    # 0x1428028f9: subps xmm1, xmm2
    s.float_op('subps',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x1428028fc: mulps xmm1, xmm1
    s.float_op('mulps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x1428028ff: movshdup xmm2, xmm1
    s.simd_move('movshdup',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x142802903: addss xmm2, xmm1
    s.float_op('addss',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x142802907: xorps xmm1, xmm1
    s.float_op('xorps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x14280290a: sqrtss xmm1, xmm2
    s.float_op('sqrtss',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x14280290e: addss xmm0, xmm1
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x142802912: movss dword ptr [rax + rcx], xmm0
    s.simd_move('movss',('m', 'rax', 'rcx', 1, 0, 4),('r', 'xmm0', 16))
    s.pc=5410662679
    return

def b_142802917(s):
    # 0x142802917: xorps xmm1, xmm1
    s.float_op('xorps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x14280291a: ucomiss xmm0, xmm1
    s.compare_float(('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x14280291d: jne 0x142802921
    s.pc=s.read(('i', 5410662689, 8)) if s.condition('ne') else 5410662687
    return

def b_14280291f(s):
    # 0x14280291f: jnp 0x14280295d
    s.pc=s.read(('i', 5410662749, 8)) if s.condition('np') else 5410662689
    return

def b_142802921(s):
    # 0x142802921: xor ecx, ecx
    s.integer('xor',[('r', 'ecx', 4), ('r', 'ecx', 4)])
    # 0x142802923: nop word ptr cs:[rax + rax]
    s.pc=5410662704
    return

def b_142802930(s):
    # 0x142802930: cmp rbx, rcx
    s.integer('cmp',[('r', 'rbx', 8), ('r', 'rcx', 8)])
    # 0x142802933: je 0x1428029c1
    s.pc=s.read(('i', 5410662849, 8)) if s.condition('e') else 5410662713
    return

def b_142802939(s):
    # 0x142802939: movss xmm1, dword ptr [rax + rcx]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rax', 'rcx', 1, 0, 4))
    # 0x14280293e: divss xmm1, xmm0
    s.float_op('divss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142802942: movd edx, xmm1
    s.simd_move('movd',('r', 'edx', 4),('r', 'xmm1', 16))
    # 0x142802946: movss dword ptr [rax + rcx], xmm1
    s.simd_move('movss',('m', 'rax', 'rcx', 1, 0, 4),('r', 'xmm1', 16))
    # 0x14280294b: and edx, 0x7fffffff
    s.integer('and',[('r', 'edx', 4), ('i', 2147483647, 4)])
    # 0x142802951: add rcx, 4
    s.integer('add',[('r', 'rcx', 8), ('i', 4, 8)])
    # 0x142802955: cmp edx, 0x7f800000
    s.integer('cmp',[('r', 'edx', 4), ('i', 2139095040, 4)])
    # 0x14280295b: jl 0x142802930
    s.pc=s.read(('i', 5410662704, 8)) if s.condition('l') else 5410662749
    return

def b_14280295d(s):
    # 0x14280295d: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x142802963: mov rcx, rax
    s.write(('r', 'rcx', 8),s.read(('r', 'rax', 8)))
    # 0x142802966: mov rdx, rbx
    s.write(('r', 'rdx', 8),s.read(('r', 'rbx', 8)))
    # 0x142802969: call 0x1406abac0
    s.push(5410662766)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_14280296e(s):
    # 0x14280296e: mov bl, 1
    s.write(('r', 'bl', 1),s.read(('i', 1, 1)))
    # 0x142802970: test r12, r12
    s.integer('test',[('r', 'r12', 8), ('r', 'r12', 8)])
    # 0x142802973: je 0x14280298a
    s.pc=s.read(('i', 5410662794, 8)) if s.condition('e') else 5410662773
    return

def b_142802975(s):
    # 0x142802975: mov rdx, r12
    s.write(('r', 'rdx', 8),s.read(('r', 'r12', 8)))
    # 0x142802978: shl rdx, 3
    s.integer('shl',[('r', 'rdx', 8), ('i', 3, 1)])
    # 0x14280297c: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x142802982: mov rcx, r15
    s.write(('r', 'rcx', 8),s.read(('r', 'r15', 8)))
    # 0x142802985: call 0x1406abac0
    s.push(5410662794)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_14280298a(s):
    # 0x14280298a: mov byte ptr [rbp - 0x20], bl
    s.write(('m', 'rbp', None, 1, -32, 1),s.read(('r', 'bl', 1)))
    # 0x14280298d: mov byte ptr [rbp - 0x1f], dil
    s.write(('m', 'rbp', None, 1, -31, 1),s.read(('r', 'dil', 1)))
    # 0x142802991: mov dword ptr [rbp - 0x1e], eax
    s.write(('m', 'rbp', None, 1, -30, 4),s.read(('r', 'eax', 4)))
    # 0x142802994: shr rax, 0x20
    s.integer('shr',[('r', 'rax', 8), ('i', 32, 1)])
    # 0x142802998: mov word ptr [rbp - 0x1a], ax
    s.write(('m', 'rbp', None, 1, -26, 2),s.read(('r', 'ax', 2)))
    # 0x14280299c: mov qword ptr [rbp - 0x18], r14
    s.write(('m', 'rbp', None, 1, -24, 8),s.read(('r', 'r14', 8)))
    # 0x1428029a0: mov qword ptr [rsp + 0x20], rsi
    s.write(('m', 'rsp', None, 1, 32, 8),s.read(('r', 'rsi', 8)))
    # 0x1428029a5: lea rcx, [rip + 0xd987ec]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5424918936, 8)))
    # 0x1428029ac: lea r9, [rip + 0xd987c5]
    s.write(('r', 'r9', 8),s.address(('m', None, None, 1, 5424918904, 8)))
    # 0x1428029b3: lea r8, [rbp - 0x20]
    s.write(('r', 'r8', 8),s.address(('m', 'rbp', None, 1, -32, 8)))
    # 0x1428029b7: mov edx, 0x2b
    s.write(('r', 'edx', 4),s.read(('i', 43, 4)))
    # 0x1428029bc: call 0x142dc8170
    s.push(5410662849)
    s.pc=s.read(('i', 5416714608, 8))
    return

def b_1428029c1(s):
    # 0x1428029c1: mov rcx, r12
    s.write(('r', 'rcx', 8),s.read(('r', 'r12', 8)))
    # 0x1428029c4: neg rcx
    s.integer('neg',[('r', 'rcx', 8)])
    # 0x1428029c7: jo 0x142802a1e
    s.pc=s.read(('i', 5410662942, 8)) if s.condition('o') else 5410662857
    return

def b_1428029c9(s):
    # 0x1428029c9: mov qword ptr [rdi], r12
    s.write(('m', 'rdi', None, 1, 0, 8),s.read(('r', 'r12', 8)))
    # 0x1428029cc: mov qword ptr [rdi + 8], r15
    s.write(('m', 'rdi', None, 1, 8, 8),s.read(('r', 'r15', 8)))
    # 0x1428029d0: mov qword ptr [rdi + 0x10], r14
    s.write(('m', 'rdi', None, 1, 16, 8),s.read(('r', 'r14', 8)))
    # 0x1428029d4: mov qword ptr [rdi + 0x18], r14
    s.write(('m', 'rdi', None, 1, 24, 8),s.read(('r', 'r14', 8)))
    # 0x1428029d8: mov qword ptr [rdi + 0x20], rax
    s.write(('m', 'rdi', None, 1, 32, 8),s.read(('r', 'rax', 8)))
    # 0x1428029dc: mov qword ptr [rdi + 0x28], r14
    s.write(('m', 'rdi', None, 1, 40, 8),s.read(('r', 'r14', 8)))
    # 0x1428029e0: movss dword ptr [rdi + 0x30], xmm0
    s.simd_move('movss',('m', 'rdi', None, 1, 48, 4),('r', 'xmm0', 16))
    # 0x1428029e5: mov rax, rdi
    s.write(('r', 'rax', 8),s.read(('r', 'rdi', 8)))
    # 0x1428029e8: add rsp, 0x50
    s.integer('add',[('r', 'rsp', 8), ('i', 80, 8)])
    # 0x1428029ec: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x1428029ed: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x1428029ee: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x1428029ef: pop r12
    s.write(('r', 'r12', 8),s.pop())
    # 0x1428029f1: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x1428029f3: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x1428029f5: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x1428029f6: ret 
    s.pc=s.pop()
    return

def b_1428029f7(s):
    # 0x1428029f7: xor ebx, ebx
    s.integer('xor',[('r', 'ebx', 4), ('r', 'ebx', 4)])
    # 0x1428029f9: mov edi, r14d
    s.write(('r', 'edi', 4),s.read(('r', 'r14d', 4)))
    # 0x1428029fc: test r12, r12
    s.integer('test',[('r', 'r12', 8), ('r', 'r12', 8)])
    # 0x1428029ff: je 0x14280298a
    s.pc=s.read(('i', 5410662794, 8)) if s.condition('e') else 5410662913
    return

def b_142802a01(s):
    # 0x142802a01: jmp 0x142802975
    s.pc=s.read(('i', 5410662773, 8))
    return

def b_142802a06(s):
    # 0x142802a06: mov qword ptr [rbp - 0x10], r12
    s.write(('m', 'rbp', None, 1, -16, 8),s.read(('r', 'r12', 8)))
    # 0x142802a0a: mov qword ptr [rbp - 0x28], r15
    s.write(('m', 'rbp', None, 1, -40, 8),s.read(('r', 'r15', 8)))
    # 0x142802a0e: mov ecx, 4
    s.write(('r', 'ecx', 4),s.read(('i', 4, 4)))
    # 0x142802a13: mov rdx, rbx
    s.write(('r', 'rdx', 8),s.read(('r', 'rbx', 8)))
    # 0x142802a16: call 0x142dc7e2a
    s.push(5410662939)
    s.pc=s.read(('i', 5416713770, 8))
    return

def b_142802a1b(s):
    # 0x142802a1b: nop 
    # 0x142802a1c: ud2 
    raise RuntimeError('Original unreachable/panic 0x142802a1c')
    s.pc=5410662942
    return

def b_142802a1e(s):
    # 0x142802a1e: mov edi, r15d
    s.write(('r', 'edi', 4),s.read(('r', 'r15d', 4)))
    # 0x142802a21: shr edi, 8
    s.integer('shr',[('r', 'edi', 4), ('i', 8, 1)])
    # 0x142802a24: mov rax, r15
    s.write(('r', 'rax', 8),s.read(('r', 'r15', 8)))
    # 0x142802a27: shr rax, 0x10
    s.integer('shr',[('r', 'rax', 8), ('i', 16, 1)])
    # 0x142802a2b: mov ebx, r15d
    s.write(('r', 'ebx', 4),s.read(('r', 'r15d', 4)))
    # 0x142802a2e: jmp 0x14280298a
    s.pc=s.read(('i', 5410662794, 8))
    return

def b_142802a33(s):
    # 0x142802a33: nop word ptr cs:[rax + rax]
    # 0x142802a40: mov qword ptr [rsp + 0x10], rdx
    s.write(('m', 'rsp', None, 1, 16, 8),s.read(('r', 'rdx', 8)))
    # 0x142802a45: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x142802a46: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x142802a48: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x142802a4a: push r12
    s.push(s.read(('r', 'r12', 8)))
    # 0x142802a4c: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x142802a4d: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x142802a4e: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x142802a4f: sub rsp, 0x30
    s.integer('sub',[('r', 'rsp', 8), ('i', 48, 8)])
    # 0x142802a53: lea rbp, [rdx + 0x50]
    s.write(('r', 'rbp', 8),s.address(('m', 'rdx', None, 1, 80, 8)))
    # 0x142802a57: cmp qword ptr [rbp - 0x10], 0
    s.integer('cmp',[('m', 'rbp', None, 1, -16, 8), ('i', 0, 8)])
    # 0x142802a5c: je 0x142802a76
    s.pc=s.read(('i', 5410663030, 8)) if s.condition('e') else 5410663006
    return

def b_142802a5e(s):
    # 0x142802a5e: mov rdx, qword ptr [rbp - 0x10]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, -16, 8)))
    # 0x142802a62: shl rdx, 3
    s.integer('shl',[('r', 'rdx', 8), ('i', 3, 1)])
    # 0x142802a66: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x142802a6c: mov rcx, qword ptr [rbp - 0x28]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, -40, 8)))
    # 0x142802a70: call 0x1406abac0
    s.push(5410663029)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_142802a75(s):
    # 0x142802a75: nop 
    s.pc=5410663030
    return

def b_142802a76(s):
    # 0x142802a76: add rsp, 0x30
    s.integer('add',[('r', 'rsp', 8), ('i', 48, 8)])
    # 0x142802a7a: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x142802a7b: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x142802a7c: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x142802a7d: pop r12
    s.write(('r', 'r12', 8),s.pop())
    # 0x142802a7f: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x142802a81: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x142802a83: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x142802a84: ret 
    s.pc=s.pop()
    return

def b_142812c70(s):
    # 0x142812c70: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x142812c71: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x142812c73: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x142812c75: push r13
    s.push(s.read(('r', 'r13', 8)))
    # 0x142812c77: push r12
    s.push(s.read(('r', 'r12', 8)))
    # 0x142812c79: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x142812c7a: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x142812c7b: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x142812c7c: sub rsp, 0x578
    s.integer('sub',[('r', 'rsp', 8), ('i', 1400, 8)])
    # 0x142812c83: lea rbp, [rsp + 0x80]
    s.write(('r', 'rbp', 8),s.address(('m', 'rsp', None, 1, 128, 8)))
    # 0x142812c8b: movaps xmmword ptr [rbp + 0x4e0], xmm15
    s.simd_move('movaps',('m', 'rbp', None, 1, 1248, 16),('r', 'xmm15', 16))
    # 0x142812c93: movaps xmmword ptr [rbp + 0x4d0], xmm14
    s.simd_move('movaps',('m', 'rbp', None, 1, 1232, 16),('r', 'xmm14', 16))
    # 0x142812c9b: movaps xmmword ptr [rbp + 0x4c0], xmm13
    s.simd_move('movaps',('m', 'rbp', None, 1, 1216, 16),('r', 'xmm13', 16))
    # 0x142812ca3: movaps xmmword ptr [rbp + 0x4b0], xmm12
    s.simd_move('movaps',('m', 'rbp', None, 1, 1200, 16),('r', 'xmm12', 16))
    # 0x142812cab: movaps xmmword ptr [rbp + 0x4a0], xmm11
    s.simd_move('movaps',('m', 'rbp', None, 1, 1184, 16),('r', 'xmm11', 16))
    # 0x142812cb3: movaps xmmword ptr [rbp + 0x490], xmm10
    s.simd_move('movaps',('m', 'rbp', None, 1, 1168, 16),('r', 'xmm10', 16))
    # 0x142812cbb: movaps xmmword ptr [rbp + 0x480], xmm9
    s.simd_move('movaps',('m', 'rbp', None, 1, 1152, 16),('r', 'xmm9', 16))
    # 0x142812cc3: movaps xmmword ptr [rbp + 0x470], xmm8
    s.simd_move('movaps',('m', 'rbp', None, 1, 1136, 16),('r', 'xmm8', 16))
    # 0x142812ccb: movaps xmmword ptr [rbp + 0x460], xmm7
    s.simd_move('movaps',('m', 'rbp', None, 1, 1120, 16),('r', 'xmm7', 16))
    # 0x142812cd2: movaps xmmword ptr [rbp + 0x450], xmm6
    s.simd_move('movaps',('m', 'rbp', None, 1, 1104, 16),('r', 'xmm6', 16))
    # 0x142812cd9: mov qword ptr [rbp + 0x448], 0xfffffffffffffffe
    s.write(('m', 'rbp', None, 1, 1096, 8),s.read(('i', -2, 8)))
    # 0x142812ce4: mov byte ptr [rbp + 0x447], r9b
    s.write(('m', 'rbp', None, 1, 1095, 1),s.read(('r', 'r9b', 1)))
    # 0x142812ceb: mov dword ptr [rbp + 0x3b4], r8d
    s.write(('m', 'rbp', None, 1, 948, 4),s.read(('r', 'r8d', 4)))
    # 0x142812cf2: mov rdi, rdx
    s.write(('r', 'rdi', 8),s.read(('r', 'rdx', 8)))
    # 0x142812cf5: mov qword ptr [rbp + 0x348], rcx
    s.write(('m', 'rbp', None, 1, 840, 8),s.read(('r', 'rcx', 8)))
    # 0x142812cfc: mov qword ptr [rbp + 0x340], 0
    s.write(('m', 'rbp', None, 1, 832, 8),s.read(('i', 0, 8)))
    # 0x142812d07: lea rsi, [rbp + 0x3d0]
    s.write(('r', 'rsi', 8),s.address(('m', 'rbp', None, 1, 976, 8)))
    # 0x142812d0e: mov rcx, rsi
    s.write(('r', 'rcx', 8),s.read(('r', 'rsi', 8)))
    # 0x142812d11: call 0x140b73b80
    s.push(5410729238)
    s.pc=s.read(('i', 5380717440, 8))
    return

def b_142812d16(s):
    # 0x142812d16: lea rcx, [rbp + 0x2e0]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 736, 8)))
    # 0x142812d1d: mov rdx, rsi
    s.write(('r', 'rdx', 8),s.read(('r', 'rsi', 8)))
    # 0x142812d20: call 0x140b73b00
    s.push(5410729253)
    s.pc=s.read(('i', 5380717312, 8))
    return

def b_142812d25(s):
    # 0x142812d25: movss xmm6, dword ptr [rbp + 0x2e0]
    s.simd_move('movss',('r', 'xmm6', 16),('m', 'rbp', None, 1, 736, 4))
    # 0x142812d2d: movss xmm7, dword ptr [rbp + 0x2e4]
    s.simd_move('movss',('r', 'xmm7', 16),('m', 'rbp', None, 1, 740, 4))
    # 0x142812d35: movss xmm9, dword ptr [rbp + 0x2e8]
    s.simd_move('movss',('r', 'xmm9', 16),('m', 'rbp', None, 1, 744, 4))
    # 0x142812d3e: movss xmm8, dword ptr [rbp + 0x2ec]
    s.simd_move('movss',('r', 'xmm8', 16),('m', 'rbp', None, 1, 748, 4))
    # 0x142812d47: lea rcx, [rbp + 0x120]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 288, 8)))
    # 0x142812d4e: mov qword ptr [rbp + 0x418], rdi
    s.write(('m', 'rbp', None, 1, 1048, 8),s.read(('r', 'rdi', 8)))
    # 0x142812d55: mov rdx, rdi
    s.write(('r', 'rdx', 8),s.read(('r', 'rdi', 8)))
    # 0x142812d58: call 0x140b772d0
    s.push(5410729309)
    s.pc=s.read(('i', 5380731600, 8))
    return

def b_142812d5d(s):
    # 0x142812d5d: nop 
    # 0x142812d5e: lea r9, [rip + 0xd89f0b]
    s.write(('r', 'r9', 8),s.address(('m', None, None, 1, 5424925808, 8)))
    # 0x142812d65: lea rcx, [rbp + 0x80]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 128, 8)))
    # 0x142812d6c: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x142812d6f: movaps xmm2, xmm7
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm7', 16))
    # 0x142812d72: call 0x140df2970
    s.push(5410729335)
    s.pc=s.read(('i', 5383334256, 8))
    return

def b_142812d77(s):
    # 0x142812d77: nop 
    # 0x142812d78: xorps xmm1, xmm1
    s.float_op('xorps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x142812d7b: xorps xmm2, xmm2
    s.float_op('xorps',('r', 'xmm2', 16),('r', 'xmm2', 16))
    # 0x142812d7e: mov rcx, qword ptr [rbp + 0x418]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 1048, 8)))
    # 0x142812d85: call 0x140ac6200
    s.push(5410729354)
    s.pc=s.read(('i', 5380006400, 8))
    return

def b_142812d8a(s):
    # 0x142812d8a: movaps xmmword ptr [rbp + 0x110], xmm0
    s.simd_move('movaps',('m', 'rbp', None, 1, 272, 16),('r', 'xmm0', 16))
    # 0x142812d91: movaps xmm7, xmm1
    s.simd_move('movaps',('r', 'xmm7', 16),('r', 'xmm1', 16))
    # 0x142812d94: lea rax, [rip + 0xd89eed]
    s.write(('r', 'rax', 8),s.address(('m', None, None, 1, 5424925832, 8)))
    # 0x142812d9b: mov qword ptr [rsp + 0x28], rax
    s.write(('m', 'rsp', None, 1, 40, 8),s.read(('r', 'rax', 8)))
    # 0x142812da0: movss dword ptr [rsp + 0x20], xmm1
    s.simd_move('movss',('m', 'rsp', None, 1, 32, 4),('r', 'xmm1', 16))
    # 0x142812da6: lea rcx, [rbp + 0x190]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 400, 8)))
    # 0x142812dad: movaps xmm1, xmm9
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm9', 16))
    # 0x142812db1: movaps xmm2, xmm8
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm8', 16))
    # 0x142812db5: movaps xmm3, xmmword ptr [rbp + 0x110]
    s.simd_move('movaps',('r', 'xmm3', 16),('m', 'rbp', None, 1, 272, 16))
    # 0x142812dbc: call 0x140df1b90
    s.push(5410729409)
    s.pc=s.read(('i', 5383330704, 8))
    return

def b_142812dc1(s):
    # 0x142812dc1: nop 
    # 0x142812dc2: lea rcx, [rbp + 0xd0]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 208, 8)))
    # 0x142812dc9: mov rdx, qword ptr [rbp + 0x348]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 840, 8)))
    # 0x142812dd0: call 0x140df1c10
    s.push(5410729429)
    s.pc=s.read(('i', 5383330832, 8))
    return

def b_142812dd5(s):
    # 0x142812dd5: nop 
    # 0x142812dd6: mov rcx, qword ptr [rbp + 0x418]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 1048, 8)))
    # 0x142812ddd: call 0x140b77b60
    s.push(5410729442)
    s.pc=s.read(('i', 5380733792, 8))
    return

def b_142812de2(s):
    # 0x142812de2: nop 
    # 0x142812de3: test al, al
    s.integer('test',[('r', 'al', 1), ('r', 'al', 1)])
    # 0x142812de5: je 0x142812e2d
    s.pc=s.read(('i', 5410729517, 8)) if s.condition('e') else 5410729447
    return

def b_142812de7(s):
    # 0x142812de7: mov rax, qword ptr [rbp + 0x418]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 1048, 8)))
    # 0x142812dee: movzx ebx, byte ptr [rax + 0x54]
    s.write(('r', 'ebx', 4),s.read(('m', 'rax', None, 1, 84, 1)))
    # 0x142812df2: test bl, bl
    s.integer('test',[('r', 'bl', 1), ('r', 'bl', 1)])
    # 0x142812df4: jne 0x142812e37
    s.pc=s.read(('i', 5410729527, 8)) if s.condition('ne') else 5410729462
    return

def b_142812df6(s):
    # 0x142812df6: movss xmm6, dword ptr [rip + 0xd89dd2]
    s.simd_move('movss',('r', 'xmm6', 16),('m', None, None, 1, 5424925648, 4))
    # 0x142812dfe: mov rax, qword ptr [rbp + 0x418]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 1048, 8)))
    # 0x142812e05: lea rcx, [rax + 0x24]
    s.write(('r', 'rcx', 8),s.address(('m', 'rax', None, 1, 36, 8)))
    # 0x142812e09: cmp byte ptr [rax + 0x3c], 0
    s.integer('cmp',[('m', 'rax', None, 1, 60, 1), ('i', 0, 1)])
    # 0x142812e0d: jne 0x142812e50
    s.pc=s.read(('i', 5410729552, 8)) if s.condition('ne') else 5410729487
    return

def b_142812e0f(s):
    # 0x142812e0f: call 0x140b76870
    s.push(5410729492)
    s.pc=s.read(('i', 5380728944, 8))
    return

def b_142812e14(s):
    # 0x142812e14: nop 
    # 0x142812e15: lea rax, [rbp + 0x90]
    s.write(('r', 'rax', 8),s.address(('m', 'rbp', None, 1, 144, 8)))
    # 0x142812e1c: lea rcx, [rbp + 0x1a0]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 416, 8)))
    # 0x142812e23: addss xmm6, xmm0
    s.float_op('addss',('r', 'xmm6', 16),('r', 'xmm0', 16))
    # 0x142812e27: test bl, bl
    s.integer('test',[('r', 'bl', 1), ('r', 'bl', 1)])
    # 0x142812e29: je 0x142812e6c
    s.pc=s.read(('i', 5410729580, 8)) if s.condition('e') else 5410729515
    return

def b_142812e2b(s):
    # 0x142812e2b: jmp 0x142812e73
    s.pc=s.read(('i', 5410729587, 8))
    return

def b_142812e2d(s):
    # 0x142812e2d: mov qword ptr [rbp - 0x38], 0
    s.write(('m', 'rbp', None, 1, -56, 8),s.read(('i', 0, 8)))
    # 0x142812e35: jmp 0x142812e90
    s.pc=s.read(('i', 5410729616, 8))
    return

def b_142812e37(s):
    # 0x142812e37: movss xmm6, dword ptr [rip + 0x624ca5]
    s.simd_move('movss',('r', 'xmm6', 16),('m', None, None, 1, 5417171684, 4))
    # 0x142812e3f: mov rax, qword ptr [rbp + 0x418]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 1048, 8)))
    # 0x142812e46: lea rcx, [rax + 0x24]
    s.write(('r', 'rcx', 8),s.address(('m', 'rax', None, 1, 36, 8)))
    # 0x142812e4a: cmp byte ptr [rax + 0x3c], 0
    s.integer('cmp',[('m', 'rax', None, 1, 60, 1), ('i', 0, 1)])
    # 0x142812e4e: je 0x142812e0f
    s.pc=s.read(('i', 5410729487, 8)) if s.condition('e') else 5410729552
    return

def b_142812e50(s):
    # 0x142812e50: call 0x140b76870
    s.push(5410729557)
    s.pc=s.read(('i', 5380728944, 8))
    return

def b_142812e55(s):
    # 0x142812e55: nop 
    # 0x142812e56: lea rax, [rbp + 0x94]
    s.write(('r', 'rax', 8),s.address(('m', 'rbp', None, 1, 148, 8)))
    # 0x142812e5d: lea rcx, [rbp + 0x1a4]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 420, 8)))
    # 0x142812e64: addss xmm6, xmm0
    s.float_op('addss',('r', 'xmm6', 16),('r', 'xmm0', 16))
    # 0x142812e68: test bl, bl
    s.integer('test',[('r', 'bl', 1), ('r', 'bl', 1)])
    # 0x142812e6a: jne 0x142812e73
    s.pc=s.read(('i', 5410729587, 8)) if s.condition('ne') else 5410729580
    return

def b_142812e6c(s):
    # 0x142812e6c: xorps xmm6, xmmword ptr [rip + 0x6249ad]
    s.float_op('xorps',('r', 'xmm6', 16),('m', None, None, 1, 5417170976, 16))
    s.pc=5410729587
    return

def b_142812e73(s):
    # 0x142812e73: addss xmm6, dword ptr [rax]
    s.float_op('addss',('r', 'xmm6', 16),('m', 'rax', None, 1, 0, 4))
    # 0x142812e77: movss dword ptr [rax], xmm6
    s.simd_move('movss',('m', 'rax', None, 1, 0, 4),('r', 'xmm6', 16))
    # 0x142812e7b: movss dword ptr [rcx], xmm6
    s.simd_move('movss',('m', 'rcx', None, 1, 0, 4),('r', 'xmm6', 16))
    # 0x142812e7f: lea rcx, [rbp - 0x38]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, -56, 8)))
    # 0x142812e83: mov rdx, qword ptr [rbp + 0x418]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 1048, 8)))
    # 0x142812e8a: call 0x140b77190
    s.push(5410729615)
    s.pc=s.read(('i', 5380731280, 8))
    return

def b_142812e8f(s):
    # 0x142812e8f: nop 
    s.pc=5410729616
    return

def b_142812e90(s):
    # 0x142812e90: lea rcx, [rbp + 0x18]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 24, 8)))
    # 0x142812e94: lea rdx, [rbp + 0x80]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 128, 8)))
    # 0x142812e9b: call 0x140df37e0
    s.push(5410729632)
    s.pc=s.read(('i', 5383337952, 8))
    return

def b_142812ea0(s):
    # 0x142812ea0: nop 
    # 0x142812ea1: movaps xmmword ptr [rbp + 0x100], xmm9
    s.simd_move('movaps',('m', 'rbp', None, 1, 256, 16),('r', 'xmm9', 16))
    # 0x142812ea9: movaps xmmword ptr [rbp + 0xe0], xmm8
    s.simd_move('movaps',('m', 'rbp', None, 1, 224, 16),('r', 'xmm8', 16))
    # 0x142812eb1: movaps xmmword ptr [rbp + 0xf0], xmm7
    s.simd_move('movaps',('m', 'rbp', None, 1, 240, 16),('r', 'xmm7', 16))
    # 0x142812eb8: lea rcx, [rbp - 0x20]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, -32, 8)))
    # 0x142812ebc: lea rdx, [rbp + 0x190]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 400, 8)))
    # 0x142812ec3: call 0x140df37e0
    s.push(5410729672)
    s.pc=s.read(('i', 5383337952, 8))
    return

def b_142812ec8(s):
    # 0x142812ec8: nop 
    # 0x142812ec9: movaps xmm0, xmmword ptr [rbp + 0xd0]
    s.simd_move('movaps',('r', 'xmm0', 16),('m', 'rbp', None, 1, 208, 16))
    # 0x142812ed0: movaps xmmword ptr [rbp + 0x200], xmm0
    s.simd_move('movaps',('m', 'rbp', None, 1, 512, 16),('r', 'xmm0', 16))
    # 0x142812ed7: mov rax, qword ptr [rbp + 0x348]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 840, 8)))
    # 0x142812ede: movsd xmm0, qword ptr [rax + 8]
    s.simd_move('movsd',('r', 'xmm0', 16),('m', 'rax', None, 1, 8, 8))
    # 0x142812ee3: movaps xmmword ptr [rbp + 0x210], xmm0
    s.simd_move('movaps',('m', 'rbp', None, 1, 528, 16),('r', 'xmm0', 16))
    # 0x142812eea: xor r13d, r13d
    s.integer('xor',[('r', 'r13d', 4), ('r', 'r13d', 4)])
    # 0x142812eed: lea rsi, [rbp + 0x2e0]
    s.write(('r', 'rsi', 8),s.address(('m', 'rbp', None, 1, 736, 8)))
    # 0x142812ef4: lea r14, [rbp + 0x3d0]
    s.write(('r', 'r14', 8),s.address(('m', 'rbp', None, 1, 976, 8)))
    # 0x142812efb: lea rdi, [rbp + 0x80]
    s.write(('r', 'rdi', 8),s.address(('m', 'rbp', None, 1, 128, 8)))
    # 0x142812f02: lea rbx, [rbp + 0x1c8]
    s.write(('r', 'rbx', 8),s.address(('m', 'rbp', None, 1, 456, 8)))
    # 0x142812f09: movss xmm14, dword ptr [rip + 0x624016]
    s.simd_move('movss',('r', 'xmm14', 16),('m', None, None, 1, 5417168680, 4))
    # 0x142812f12: xorps xmm13, xmm13
    s.float_op('xorps',('r', 'xmm13', 16),('r', 'xmm13', 16))
    # 0x142812f16: xor r15d, r15d
    s.integer('xor',[('r', 'r15d', 4), ('r', 'r15d', 4)])
    # 0x142812f19: jmp 0x142812f3c
    s.pc=s.read(('i', 5410729788, 8))
    return

def b_142812f1b(s):
    # 0x142812f1b: nop dword ptr [rax + rax]
    s.pc=5410729760
    return

def b_142812f20(s):
    # 0x142812f20: lea rsi, [rbp + 0x2e0]
    s.write(('r', 'rsi', 8),s.address(('m', 'rbp', None, 1, 736, 8)))
    # 0x142812f27: lea rdi, [rbp + 0x80]
    s.write(('r', 'rdi', 8),s.address(('m', 'rbp', None, 1, 128, 8)))
    # 0x142812f2e: lea rbx, [rbp + 0x1c8]
    s.write(('r', 'rbx', 8),s.address(('m', 'rbp', None, 1, 456, 8)))
    # 0x142812f35: mov r15, qword ptr [rbp + 0x220]
    s.write(('r', 'r15', 8),s.read(('m', 'rbp', None, 1, 544, 8)))
    s.pc=5410729788
    return

def b_142812f3c(s):
    # 0x142812f3c: cmp r15, 3
    s.integer('cmp',[('r', 'r15', 8), ('i', 3, 8)])
    # 0x142812f40: ja 0x1428138b3
    s.pc=s.read(('i', 5410732211, 8)) if s.condition('a') else 5410729798
    return

def b_142812f46(s):
    # 0x142812f46: mov rcx, qword ptr [rbp + 0x418]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 1048, 8)))
    # 0x142812f4d: call 0x140b77a00
    s.push(5410729810)
    s.pc=s.read(('i', 5380733440, 8))
    return

def b_142812f52(s):
    # 0x142812f52: nop 
    # 0x142812f53: movaps xmm10, xmm0
    s.simd_move('movaps',('r', 'xmm10', 16),('r', 'xmm0', 16))
    # 0x142812f57: movaps xmm7, xmmword ptr [rip + 0x624982]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', None, None, 1, 5417171168, 16))
    # 0x142812f5e: movss xmm7, xmm0
    s.simd_move('movss',('r', 'xmm7', 16),('r', 'xmm0', 16))
    # 0x142812f62: shufps xmm7, xmm7, 0x40
    s.shuffle('shufps',('r', 'xmm7', 16),('r', 'xmm7', 16),64)
    # 0x142812f66: mulps xmm7, xmmword ptr [rip + 0xaf5e03]
    s.float_op('mulps',('r', 'xmm7', 16),('m', None, None, 1, 5422222704, 16))
    # 0x142812f6d: mov rcx, rsi
    s.write(('r', 'rcx', 8),s.read(('r', 'rsi', 8)))
    # 0x142812f70: lea rdx, [rbp + 0x190]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 400, 8)))
    # 0x142812f77: call 0x140df0010
    s.push(5410729852)
    s.pc=s.read(('i', 5383323664, 8))
    return

def b_142812f7c(s):
    # 0x142812f7c: nop 
    # 0x142812f7d: movsd xmm8, qword ptr [rbp + r15*8 + 0x2e0]
    s.simd_move('movsd',('r', 'xmm8', 16),('m', 'rbp', 'r15', 8, 736, 8))
    # 0x142812f87: mov rcx, r14
    s.write(('r', 'rcx', 8),s.read(('r', 'r14', 8)))
    # 0x142812f8a: mov rdx, rdi
    s.write(('r', 'rdx', 8),s.read(('r', 'rdi', 8)))
    # 0x142812f8d: call 0x140df0010
    s.push(5410729874)
    s.pc=s.read(('i', 5383323664, 8))
    return

def b_142812f92(s):
    # 0x142812f92: nop 
    # 0x142812f93: unpcklps xmm8, xmm8
    s.shuffle('unpcklps',('r', 'xmm8', 16),('r', 'xmm8', 16),0)
    # 0x142812f97: movaps xmm1, xmmword ptr [rbp + 0x200]
    s.simd_move('movaps',('r', 'xmm1', 16),('m', 'rbp', None, 1, 512, 16))
    # 0x142812f9e: mulps xmm8, xmm1
    s.float_op('mulps',('r', 'xmm8', 16),('r', 'xmm1', 16))
    # 0x142812fa2: movsd xmm0, qword ptr [rbp + r15*8 + 0x3d0]
    s.simd_move('movsd',('r', 'xmm0', 16),('m', 'rbp', 'r15', 8, 976, 8))
    # 0x142812fac: unpcklps xmm0, xmm0
    s.shuffle('unpcklps',('r', 'xmm0', 16),('r', 'xmm0', 16),0)
    # 0x142812faf: mulps xmm0, xmm1
    s.float_op('mulps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x142812fb2: movaps xmm6, xmm8
    s.simd_move('movaps',('r', 'xmm6', 16),('r', 'xmm8', 16))
    # 0x142812fb6: unpckhpd xmm6, xmm8
    s.shuffle('unpckhpd',('r', 'xmm6', 16),('r', 'xmm8', 16),0)
    # 0x142812fbb: addps xmm6, xmm8
    s.float_op('addps',('r', 'xmm6', 16),('r', 'xmm8', 16))
    # 0x142812fbf: movaps xmm2, xmmword ptr [rbp + 0x210]
    s.simd_move('movaps',('r', 'xmm2', 16),('m', 'rbp', None, 1, 528, 16))
    # 0x142812fc6: addps xmm6, xmm2
    s.float_op('addps',('r', 'xmm6', 16),('r', 'xmm2', 16))
    # 0x142812fc9: movaps xmm1, xmm0
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142812fcc: unpckhpd xmm1, xmm0
    s.shuffle('unpckhpd',('r', 'xmm1', 16),('r', 'xmm0', 16),0)
    # 0x142812fd0: addps xmm1, xmm0
    s.float_op('addps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142812fd3: addps xmm1, xmm2
    s.float_op('addps',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x142812fd6: subps xmm6, xmm1
    s.float_op('subps',('r', 'xmm6', 16),('r', 'xmm1', 16))
    # 0x142812fd9: movlps qword ptr [rbp + 0x1c8], xmm6
    s.simd_move('movlps',('m', 'rbp', None, 1, 456, 8),('r', 'xmm6', 16))
    # 0x142812fe0: mov rcx, r14
    s.write(('r', 'rcx', 8),s.read(('r', 'r14', 8)))
    # 0x142812fe3: mov rdx, rbx
    s.write(('r', 'rdx', 8),s.read(('r', 'rbx', 8)))
    # 0x142812fe6: call 0x140df4520
    s.push(5410729963)
    s.pc=s.read(('i', 5383341344, 8))
    return

def b_142812feb(s):
    # 0x142812feb: nop 
    # 0x142812fec: movsd xmm12, qword ptr [rbp + 0x3d4]
    s.simd_move('movsd',('r', 'xmm12', 16),('m', 'rbp', None, 1, 980, 8))
    # 0x142812ff5: movss xmm11, dword ptr [rbp + 0x3d0]
    s.simd_move('movss',('r', 'xmm11', 16),('m', 'rbp', None, 1, 976, 4))
    # 0x142812ffe: movss xmm8, dword ptr [rbp + 0x3d8]
    s.simd_move('movss',('r', 'xmm8', 16),('m', 'rbp', None, 1, 984, 4))
    # 0x142813007: mulss xmm8, xmm7
    s.float_op('mulss',('r', 'xmm8', 16),('r', 'xmm7', 16))
    # 0x14281300c: mov rcx, r14
    s.write(('r', 'rcx', 8),s.read(('r', 'r14', 8)))
    # 0x14281300f: mov rdx, rbx
    s.write(('r', 'rdx', 8),s.read(('r', 'rbx', 8)))
    # 0x142813012: call 0x140df4520
    s.push(5410730007)
    s.pc=s.read(('i', 5383341344, 8))
    return

def b_142813017(s):
    # 0x142813017: nop 
    # 0x142813018: movsd xmm0, qword ptr [rbp + 0x3d4]
    s.simd_move('movsd',('r', 'xmm0', 16),('m', 'rbp', None, 1, 980, 8))
    # 0x142813020: movaps xmmword ptr [rbp + 0x390], xmm0
    s.simd_move('movaps',('m', 'rbp', None, 1, 912, 16),('r', 'xmm0', 16))
    # 0x142813027: movss xmm9, dword ptr [rbp + 0x3d0]
    s.simd_move('movss',('r', 'xmm9', 16),('m', 'rbp', None, 1, 976, 4))
    # 0x142813030: mov rcx, r14
    s.write(('r', 'rcx', 8),s.read(('r', 'r14', 8)))
    # 0x142813033: mov rdx, rdi
    s.write(('r', 'rdx', 8),s.read(('r', 'rdi', 8)))
    # 0x142813036: call 0x140df0010
    s.push(5410730043)
    s.pc=s.read(('i', 5383323664, 8))
    return

def b_14281303b(s):
    # 0x14281303b: nop 
    # 0x14281303c: movsd xmm0, qword ptr [rbp + r15*8 + 0x3d0]
    s.simd_move('movsd',('r', 'xmm0', 16),('m', 'rbp', 'r15', 8, 976, 8))
    # 0x142813046: unpcklps xmm0, xmm0
    s.shuffle('unpcklps',('r', 'xmm0', 16),('r', 'xmm0', 16),0)
    # 0x142813049: mulps xmm0, xmmword ptr [rbp + 0x200]
    s.float_op('mulps',('r', 'xmm0', 16),('m', 'rbp', None, 1, 512, 16))
    # 0x142813050: movaps xmm1, xmm0
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142813053: unpckhpd xmm1, xmm0
    s.shuffle('unpckhpd',('r', 'xmm1', 16),('r', 'xmm0', 16),0)
    # 0x142813057: addps xmm1, xmm0
    s.float_op('addps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x14281305a: addps xmm1, xmmword ptr [rbp + 0x210]
    s.float_op('addps',('r', 'xmm1', 16),('m', 'rbp', None, 1, 528, 16))
    # 0x142813061: movlps qword ptr [rbp + 0x258], xmm1
    s.simd_move('movlps',('m', 'rbp', None, 1, 600, 8),('r', 'xmm1', 16))
    # 0x142813068: mov rcx, rsi
    s.write(('r', 'rcx', 8),s.read(('r', 'rsi', 8)))
    # 0x14281306b: lea rdx, [rbp + 0x258]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 600, 8)))
    # 0x142813072: call 0x140df4520
    s.push(5410730103)
    s.pc=s.read(('i', 5383341344, 8))
    return

def b_142813077(s):
    # 0x142813077: nop 
    # 0x142813078: movsd xmm0, qword ptr [rbp + 0x2e4]
    s.simd_move('movsd',('r', 'xmm0', 16),('m', 'rbp', None, 1, 740, 8))
    # 0x142813080: movaps xmmword ptr [rbp + 0x2b0], xmm0
    s.simd_move('movaps',('m', 'rbp', None, 1, 688, 16),('r', 'xmm0', 16))
    # 0x142813087: movss xmm15, dword ptr [rbp + 0x2e0]
    s.simd_move('movss',('r', 'xmm15', 16),('m', 'rbp', None, 1, 736, 4))
    # 0x142813090: mulps xmm6, xmm6
    s.float_op('mulps',('r', 'xmm6', 16),('r', 'xmm6', 16))
    # 0x142813093: movshdup xmm0, xmm6
    s.simd_move('movshdup',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x142813097: addss xmm0, xmm6
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x14281309b: sqrtss xmm3, xmm0
    s.float_op('sqrtss',('r', 'xmm3', 16),('r', 'xmm0', 16))
    # 0x14281309f: movaps xmm0, xmm7
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm7', 16))
    # 0x1428130a2: mulss xmm0, xmm7
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm7', 16))
    # 0x1428130a6: movaps xmm1, xmm10
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm10', 16))
    # 0x1428130aa: mulss xmm1, xmm10
    s.float_op('mulss',('r', 'xmm1', 16),('r', 'xmm10', 16))
    # 0x1428130af: addss xmm1, xmm0
    s.float_op('addss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x1428130b3: addss xmm1, xmm0
    s.float_op('addss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x1428130b7: xorps xmm0, xmm0
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x1428130ba: sqrtss xmm0, xmm1
    s.float_op('sqrtss',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x1428130be: movss dword ptr [rsp + 0x20], xmm0
    s.simd_move('movss',('m', 'rsp', None, 1, 32, 4),('r', 'xmm0', 16))
    # 0x1428130c4: xorps xmm2, xmm2
    s.float_op('xorps',('r', 'xmm2', 16),('r', 'xmm2', 16))
    # 0x1428130c7: mov rcx, r14
    s.write(('r', 'rcx', 8),s.read(('r', 'r14', 8)))
    # 0x1428130ca: lea rdx, [rbp + 0x120]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 288, 8)))
    # 0x1428130d1: call 0x140b768b0
    s.push(5410730198)
    s.pc=s.read(('i', 5380729008, 8))
    return

def b_1428130d6(s):
    # 0x1428130d6: nop 
    # 0x1428130d7: movss xmm6, dword ptr [rbp + 0x400]
    s.simd_move('movss',('r', 'xmm6', 16),('m', 'rbp', None, 1, 1024, 4))
    # 0x1428130df: mov rdx, qword ptr [rbp + 0x3d0]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 976, 8)))
    # 0x1428130e6: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x1428130e9: je 0x142813101
    s.pc=s.read(('i', 5410730241, 8)) if s.condition('e') else 5410730219
    return

def b_1428130eb(s):
    # 0x1428130eb: mov rcx, qword ptr [rbp + 0x3d8]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 984, 8)))
    # 0x1428130f2: shl rdx, 3
    s.integer('shl',[('r', 'rdx', 8), ('i', 3, 1)])
    # 0x1428130f6: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x1428130fc: call 0x1406abac0
    s.push(5410730241)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_142813101(s):
    # 0x142813101: mov rdx, qword ptr [rbp + 0x3e8]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 1000, 8)))
    # 0x142813108: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x14281310b: je 0x142813123
    s.pc=s.read(('i', 5410730275, 8)) if s.condition('e') else 5410730253
    return

def b_14281310d(s):
    # 0x14281310d: mov rcx, qword ptr [rbp + 0x3f0]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 1008, 8)))
    # 0x142813114: shl rdx, 2
    s.integer('shl',[('r', 'rdx', 8), ('i', 2, 1)])
    # 0x142813118: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x14281311e: call 0x1406abac0
    s.push(5410730275)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_142813123(s):
    # 0x142813123: movaps xmm0, xmm6
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x142813126: divss xmm0, dword ptr [rip + 0x7f9162]
    s.float_op('divss',('r', 'xmm0', 16),('m', None, None, 1, 5419090576, 4))
    # 0x14281312e: call 0x142e32b00
    s.push(5410730291)
    s.pc=s.read(('i', 5417151232, 8))
    return

def b_142813133(s):
    # 0x142813133: maxss xmm0, dword ptr [rip + 0x6246f5]
    s.float_op('maxss',('r', 'xmm0', 16),('m', None, None, 1, 5417170992, 4))
    # 0x14281313b: cvttss2si rax, xmm0
    s.write(('r', 'rax', 8),math.trunc(bitsf(s.read(('r', 'xmm0', 16)))) if math.isfinite(bitsf(s.read(('r', 'xmm0', 16)))) and -(1<<63)<=bitsf(s.read(('r', 'xmm0', 16)))<(1<<63) else (1<<63))
    # 0x142813140: mov rcx, rax
    s.write(('r', 'rcx', 8),s.read(('r', 'rax', 8)))
    # 0x142813143: sar rcx, 0x3f
    s.integer('sar',[('r', 'rcx', 8), ('i', 63, 1)])
    # 0x142813147: movaps xmm1, xmm0
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x14281314a: subss xmm1, dword ptr [rip + 0x623dda]
    s.float_op('subss',('r', 'xmm1', 16),('m', None, None, 1, 5417168684, 4))
    # 0x142813152: cvttss2si r8, xmm1
    s.write(('r', 'r8', 8),math.trunc(bitsf(s.read(('r', 'xmm1', 16)))) if math.isfinite(bitsf(s.read(('r', 'xmm1', 16)))) and -(1<<63)<=bitsf(s.read(('r', 'xmm1', 16)))<(1<<63) else (1<<63))
    # 0x142813157: and r8, rcx
    s.integer('and',[('r', 'r8', 8), ('r', 'rcx', 8)])
    # 0x14281315a: or r8, rax
    s.integer('or',[('r', 'r8', 8), ('r', 'rax', 8)])
    # 0x14281315d: xorps xmm1, xmm1
    s.float_op('xorps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x142813160: ucomiss xmm0, xmm1
    s.compare_float(('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x142813163: mov edx, 0
    s.write(('r', 'edx', 4),s.read(('i', 0, 4)))
    # 0x142813168: cmovae rdx, r8
    s.write(('r', 'rdx', 8),s.read(('r', 'r8', 8))) if s.condition('ae') else None
    # 0x14281316c: ucomiss xmm0, dword ptr [rip + 0x623dbd]
    s.compare_float(('r', 'xmm0', 16),('m', None, None, 1, 5417168688, 4))
    # 0x142813173: mov rax, 0xffffffffffffffff
    s.write(('r', 'rax', 8),s.read(('i', -1, 8)))
    # 0x14281317a: cmova rdx, rax
    s.write(('r', 'rdx', 8),s.read(('r', 'rax', 8))) if s.condition('a') else None
    # 0x14281317e: movss xmm2, dword ptr [rip + 0x801fca]
    s.simd_move('movss',('r', 'xmm2', 16),('m', None, None, 1, 5419127120, 4))
    # 0x142813186: divss xmm2, xmm6
    s.float_op('divss',('r', 'xmm2', 16),('r', 'xmm6', 16))
    # 0x14281318a: lea rax, [rip + 0xd89bff]
    s.write(('r', 'rax', 8),s.address(('m', None, None, 1, 5424926096, 8)))
    # 0x142813191: mov qword ptr [rsp + 0x20], rax
    s.write(('m', 'rsp', None, 1, 32, 8),s.read(('r', 'rax', 8)))
    # 0x142813196: mov rcx, rsi
    s.write(('r', 'rcx', 8),s.read(('r', 'rsi', 8)))
    # 0x142813199: lea r9, [rbp + 0x340]
    s.write(('r', 'r9', 8),s.address(('m', 'rbp', None, 1, 832, 8)))
    # 0x1428131a0: call 0x140de8290
    s.push(5410730405)
    s.pc=s.read(('i', 5383291536, 8))
    return

def b_1428131a5(s):
    # 0x1428131a5: nop 
    # 0x1428131a6: inc r15
    s.integer('inc',[('r', 'r15', 8)])
    # 0x1428131a9: mov qword ptr [rbp + 0x220], r15
    s.write(('m', 'rbp', None, 1, 544, 8),s.read(('r', 'r15', 8)))
    # 0x1428131b0: movaps xmm0, xmm10
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm10', 16))
    # 0x1428131b4: mulss xmm0, xmm11
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm11', 16))
    # 0x1428131b9: shufps xmm11, xmmword ptr [rip + 0x63b48e], 0x30
    s.shuffle('shufps',('r', 'xmm11', 16),('m', None, None, 1, 5417264720, 16),48)
    # 0x1428131c2: shufps xmm12, xmm11, 0x84
    s.shuffle('shufps',('r', 'xmm12', 16),('r', 'xmm11', 16),132)
    # 0x1428131c7: mulps xmm12, xmm7
    s.float_op('mulps',('r', 'xmm12', 16),('r', 'xmm7', 16))
    # 0x1428131cb: unpcklps xmm0, xmm12
    s.shuffle('unpcklps',('r', 'xmm0', 16),('r', 'xmm12', 16),0)
    # 0x1428131cf: movq xmm1, xmm8
    s.simd_move('movq',('r', 'xmm1', 16),('r', 'xmm8', 16))
    # 0x1428131d4: shufps xmm0, xmm1, 0x84
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm1', 16),132)
    # 0x1428131d8: subps xmm12, xmm0
    s.float_op('subps',('r', 'xmm12', 16),('r', 'xmm0', 16))
    # 0x1428131dc: movaps xmm0, xmm12
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm12', 16))
    # 0x1428131e0: mulps xmm0, xmm12
    s.float_op('mulps',('r', 'xmm0', 16),('r', 'xmm12', 16))
    # 0x1428131e4: movaps xmm1, xmm0
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x1428131e7: unpckhpd xmm1, xmm0
    s.shuffle('unpckhpd',('r', 'xmm1', 16),('r', 'xmm0', 16),0)
    # 0x1428131eb: movshdup xmm2, xmm0
    s.simd_move('movshdup',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x1428131ef: addss xmm2, xmm1
    s.float_op('addss',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x1428131f3: addss xmm2, xmm0
    s.float_op('addss',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x1428131f7: xorps xmm0, xmm0
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x1428131fa: sqrtss xmm0, xmm2
    s.float_op('sqrtss',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x1428131fe: movaps xmm1, xmm14
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm14', 16))
    # 0x142813202: divss xmm1, xmm0
    s.float_op('divss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142813206: movaps xmm2, xmmword ptr [rip + 0x6246d3]
    s.simd_move('movaps',('r', 'xmm2', 16),('m', None, None, 1, 5417171168, 16))
    # 0x14281320d: movss xmm2, xmm1
    s.simd_move('movss',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x142813211: shufps xmm2, xmm2, 0x40
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm2', 16),64)
    # 0x142813215: mulps xmm2, xmm12
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm12', 16))
    # 0x142813219: xorps xmm0, xmm0
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x14281321c: movlhps xmm0, xmm2
    s.simd_move('movlhps',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x14281321f: movaps xmmword ptr [rbp + 0x1f0], xmm2
    s.simd_move('movaps',('m', 'rbp', None, 1, 496, 16),('r', 'xmm2', 16))
    # 0x142813226: shufps xmm2, xmm0, 0x29
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm0', 16),41)
    # 0x14281322a: xorps xmm0, xmm0
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x14281322d: movlhps xmm0, xmm7
    s.simd_move('movlhps',('r', 'xmm0', 16),('r', 'xmm7', 16))
    # 0x142813230: movlhps xmm10, xmm7
    s.simd_move('movlhps',('r', 'xmm10', 16),('r', 'xmm7', 16))
    # 0x142813234: shufps xmm10, xmm0, 0x22
    s.shuffle('shufps',('r', 'xmm10', 16),('r', 'xmm0', 16),34)
    # 0x142813239: movaps xmmword ptr [rbp + 0x360], xmm10
    s.simd_move('movaps',('m', 'rbp', None, 1, 864, 16),('r', 'xmm10', 16))
    # 0x142813241: shufps xmm9, xmmword ptr [rbp + 0x390], 0x4c
    s.shuffle('shufps',('r', 'xmm9', 16),('m', 'rbp', None, 1, 912, 16),76)
    # 0x14281324a: shufps xmm9, xmm9, 0x78
    s.shuffle('shufps',('r', 'xmm9', 16),('r', 'xmm9', 16),120)
    # 0x14281324f: movaps xmmword ptr [rbp + 0x320], xmm9
    s.simd_move('movaps',('m', 'rbp', None, 1, 800, 16),('r', 'xmm9', 16))
    # 0x142813257: shufpd xmm15, xmmword ptr [rip + 0x63b3ef], 2
    s.shuffle('shufpd',('r', 'xmm15', 16),('m', None, None, 1, 5417264720, 16),2)
    # 0x142813261: shufps xmm15, xmmword ptr [rbp + 0x2b0], 0x4c
    s.shuffle('shufps',('r', 'xmm15', 16),('m', 'rbp', None, 1, 688, 16),76)
    # 0x14281326a: shufps xmm15, xmm15, 0x78
    s.shuffle('shufps',('r', 'xmm15', 16),('r', 'xmm15', 16),120)
    # 0x14281326f: movaps xmmword ptr [rbp + 0x2b0], xmm15
    s.simd_move('movaps',('m', 'rbp', None, 1, 688, 16),('r', 'xmm15', 16))
    # 0x142813277: mov rdi, qword ptr [rbp + 0x2e8]
    s.write(('r', 'rdi', 8),s.read(('m', 'rbp', None, 1, 744, 8)))
    # 0x14281327e: mov rbx, qword ptr [rbp + 0x2f0]
    s.write(('r', 'rbx', 8),s.read(('m', 'rbp', None, 1, 752, 8)))
    # 0x142813285: mulps xmm2, xmm13
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm13', 16))
    # 0x142813289: movaps xmmword ptr [rbp + 0x2a0], xmm2
    s.simd_move('movaps',('m', 'rbp', None, 1, 672, 16),('r', 'xmm2', 16))
    # 0x142813290: xor r15d, r15d
    s.integer('xor',[('r', 'r15d', 4), ('r', 'r15d', 4)])
    # 0x142813293: xorps xmm9, xmm9
    s.float_op('xorps',('r', 'xmm9', 16),('r', 'xmm9', 16))
    # 0x142813297: lea rax, [rbx - 1]
    s.write(('r', 'rax', 8),s.address(('m', 'rbx', None, 1, -1, 8)))
    # 0x14281329b: cmp r15, rax
    s.integer('cmp',[('r', 'r15', 8), ('r', 'rax', 8)])
    # 0x14281329e: jae 0x142813888
    s.pc=s.read(('i', 5410732168, 8)) if s.condition('ae') else 5410730660
    return

def b_1428132a4(s):
    # 0x1428132a4: nop word ptr cs:[rax + rax]
    s.pc=5410730672
    return

def b_1428132b0(s):
    # 0x1428132b0: cmp r15, rbx
    s.integer('cmp',[('r', 'r15', 8), ('r', 'rbx', 8)])
    # 0x1428132b3: jae 0x142815c99
    s.pc=s.read(('i', 5410741401, 8)) if s.condition('ae') else 5410730681
    return

def b_1428132b9(s):
    # 0x1428132b9: movss xmm8, dword ptr [rdi + r15*4]
    s.simd_move('movss',('r', 'xmm8', 16),('m', 'rdi', 'r15', 4, 0, 4))
    # 0x1428132bf: movss dword ptr [rbp + 0x258], xmm8
    s.simd_move('movss',('m', 'rbp', None, 1, 600, 4),('r', 'xmm8', 16))
    # 0x1428132c8: ucomiss xmm8, xmm9
    s.compare_float(('r', 'xmm8', 16),('r', 'xmm9', 16))
    # 0x1428132cc: jb 0x142813936
    s.pc=s.read(('i', 5410732342, 8)) if s.condition('b') else 5410730706
    return

def b_1428132d2(s):
    # 0x1428132d2: ucomiss xmm14, xmm8
    s.compare_float(('r', 'xmm14', 16),('r', 'xmm8', 16))
    # 0x1428132d6: jb 0x142813936
    s.pc=s.read(('i', 5410732342, 8)) if s.condition('b') else 5410730716
    return

def b_1428132dc(s):
    # 0x1428132dc: inc r15
    s.integer('inc',[('r', 'r15', 8)])
    # 0x1428132df: cmp r15, rbx
    s.integer('cmp',[('r', 'r15', 8), ('r', 'rbx', 8)])
    # 0x1428132e2: jae 0x142815cb1
    s.pc=s.read(('i', 5410741425, 8)) if s.condition('ae') else 5410730728
    return

def b_1428132e8(s):
    # 0x1428132e8: movss xmm13, dword ptr [rdi + r15*4]
    s.simd_move('movss',('r', 'xmm13', 16),('m', 'rdi', 'r15', 4, 0, 4))
    # 0x1428132ee: movss dword ptr [rbp + 0x258], xmm13
    s.simd_move('movss',('m', 'rbp', None, 1, 600, 4),('r', 'xmm13', 16))
    # 0x1428132f7: ucomiss xmm13, xmm9
    s.compare_float(('r', 'xmm13', 16),('r', 'xmm9', 16))
    # 0x1428132fb: jb 0x142813972
    s.pc=s.read(('i', 5410732402, 8)) if s.condition('b') else 5410730753
    return

def b_142813301(s):
    # 0x142813301: ucomiss xmm14, xmm13
    s.compare_float(('r', 'xmm14', 16),('r', 'xmm13', 16))
    # 0x142813305: jb 0x142813972
    s.pc=s.read(('i', 5410732402, 8)) if s.condition('b') else 5410730763
    return

def b_14281330b(s):
    # 0x14281330b: lea rcx, [rbp + 0x120]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 288, 8)))
    # 0x142813312: movaps xmm1, xmm8
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm8', 16))
    # 0x142813316: call 0x142802660
    s.push(5410730779)
    s.pc=s.read(('i', 5410661984, 8))
    return

def b_14281331b(s):
    # 0x14281331b: nop 
    # 0x14281331c: mov rdx, qword ptr [rbp + 0x130]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 304, 8)))
    # 0x142813323: mov ecx, eax
    s.write(('r', 'ecx', 4),s.read(('r', 'eax', 4)))
    # 0x142813325: cmp rdx, rcx
    s.integer('cmp',[('r', 'rdx', 8), ('r', 'rcx', 8)])
    # 0x142813328: jbe 0x142815cde
    s.pc=s.read(('i', 5410741470, 8)) if s.condition('be') else 5410730798
    return

def b_14281332e(s):
    # 0x14281332e: lea rax, [rcx + 1]
    s.write(('r', 'rax', 8),s.address(('m', 'rcx', None, 1, 1, 8)))
    # 0x142813332: cmp rax, rdx
    s.integer('cmp',[('r', 'rax', 8), ('r', 'rdx', 8)])
    # 0x142813335: jae 0x142815cc9
    s.pc=s.read(('i', 5410741449, 8)) if s.condition('ae') else 5410730811
    return

def b_14281333b(s):
    # 0x14281333b: mov rax, qword ptr [rbp + 0x128]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 296, 8)))
    # 0x142813342: movaps xmm6, xmm14
    s.simd_move('movaps',('r', 'xmm6', 16),('r', 'xmm14', 16))
    # 0x142813346: subss xmm6, xmm0
    s.float_op('subss',('r', 'xmm6', 16),('r', 'xmm0', 16))
    # 0x14281334a: movss xmm7, dword ptr [rax + rcx*8]
    s.simd_move('movss',('r', 'xmm7', 16),('m', 'rax', 'rcx', 8, 0, 4))
    # 0x14281334f: mulss xmm7, xmm6
    s.float_op('mulss',('r', 'xmm7', 16),('r', 'xmm6', 16))
    # 0x142813353: mulss xmm6, dword ptr [rax + rcx*8 + 4]
    s.float_op('mulss',('r', 'xmm6', 16),('m', 'rax', 'rcx', 8, 4, 4))
    # 0x142813359: movss xmm10, dword ptr [rax + rcx*8 + 8]
    s.simd_move('movss',('r', 'xmm10', 16),('m', 'rax', 'rcx', 8, 8, 4))
    # 0x142813360: mulss xmm10, xmm0
    s.float_op('mulss',('r', 'xmm10', 16),('r', 'xmm0', 16))
    # 0x142813365: movss xmm11, dword ptr [rax + rcx*8 + 0xc]
    s.simd_move('movss',('r', 'xmm11', 16),('m', 'rax', 'rcx', 8, 12, 4))
    # 0x14281336c: mulss xmm11, xmm0
    s.float_op('mulss',('r', 'xmm11', 16),('r', 'xmm0', 16))
    # 0x142813371: lea rcx, [rbp + 0x120]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 288, 8)))
    # 0x142813378: movaps xmm1, xmm13
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm13', 16))
    # 0x14281337c: call 0x142802660
    s.push(5410730881)
    s.pc=s.read(('i', 5410661984, 8))
    return

def b_142813381(s):
    # 0x142813381: nop 
    # 0x142813382: mov rdx, qword ptr [rbp + 0x130]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 304, 8)))
    # 0x142813389: mov ecx, eax
    s.write(('r', 'ecx', 4),s.read(('r', 'eax', 4)))
    # 0x14281338b: cmp rdx, rcx
    s.integer('cmp',[('r', 'rdx', 8), ('r', 'rcx', 8)])
    # 0x14281338e: jbe 0x142815d05
    s.pc=s.read(('i', 5410741509, 8)) if s.condition('be') else 5410730900
    return

def b_142813394(s):
    # 0x142813394: lea rax, [rcx + 1]
    s.write(('r', 'rax', 8),s.address(('m', 'rcx', None, 1, 1, 8)))
    # 0x142813398: cmp rax, rdx
    s.integer('cmp',[('r', 'rax', 8), ('r', 'rdx', 8)])
    # 0x14281339b: jae 0x142815cf0
    s.pc=s.read(('i', 5410741488, 8)) if s.condition('ae') else 5410730913
    return

def b_1428133a1(s):
    # 0x1428133a1: movss dword ptr [rbp + 0x390], xmm8
    s.simd_move('movss',('m', 'rbp', None, 1, 912, 4),('r', 'xmm8', 16))
    # 0x1428133aa: addss xmm7, xmm10
    s.float_op('addss',('r', 'xmm7', 16),('r', 'xmm10', 16))
    # 0x1428133af: addss xmm6, xmm11
    s.float_op('addss',('r', 'xmm6', 16),('r', 'xmm11', 16))
    # 0x1428133b4: mov rax, qword ptr [rbp + 0x128]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 296, 8)))
    # 0x1428133bb: movaps xmm2, xmm14
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm14', 16))
    # 0x1428133bf: subss xmm2, xmm0
    s.float_op('subss',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x1428133c3: movss xmm3, dword ptr [rax + rcx*8]
    s.simd_move('movss',('r', 'xmm3', 16),('m', 'rax', 'rcx', 8, 0, 4))
    # 0x1428133c8: mulss xmm3, xmm2
    s.float_op('mulss',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x1428133cc: mulss xmm2, dword ptr [rax + rcx*8 + 4]
    s.float_op('mulss',('r', 'xmm2', 16),('m', 'rax', 'rcx', 8, 4, 4))
    # 0x1428133d2: movss xmm1, dword ptr [rax + rcx*8 + 8]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rax', 'rcx', 8, 8, 4))
    # 0x1428133d8: mulss xmm1, xmm0
    s.float_op('mulss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x1428133dc: movss xmm4, dword ptr [rax + rcx*8 + 0xc]
    s.simd_move('movss',('r', 'xmm4', 16),('m', 'rax', 'rcx', 8, 12, 4))
    # 0x1428133e2: mulss xmm4, xmm0
    s.float_op('mulss',('r', 'xmm4', 16),('r', 'xmm0', 16))
    # 0x1428133e6: addss xmm1, xmm3
    s.float_op('addss',('r', 'xmm1', 16),('r', 'xmm3', 16))
    # 0x1428133ea: addss xmm4, xmm2
    s.float_op('addss',('r', 'xmm4', 16),('r', 'xmm2', 16))
    # 0x1428133ee: shufps xmm6, xmm6, 0
    s.shuffle('shufps',('r', 'xmm6', 16),('r', 'xmm6', 16),0)
    # 0x1428133f2: movaps xmm0, xmmword ptr [rbp + 0x360]
    s.simd_move('movaps',('r', 'xmm0', 16),('m', 'rbp', None, 1, 864, 16))
    # 0x1428133f9: mulps xmm6, xmm0
    s.float_op('mulps',('r', 'xmm6', 16),('r', 'xmm0', 16))
    # 0x1428133fc: movaps xmm5, xmmword ptr [rbp + 0x2a0]
    s.simd_move('movaps',('r', 'xmm5', 16),('m', 'rbp', None, 1, 672, 16))
    # 0x142813403: addps xmm6, xmm5
    s.float_op('addps',('r', 'xmm6', 16),('r', 'xmm5', 16))
    # 0x142813406: shufps xmm7, xmm7, 0
    s.shuffle('shufps',('r', 'xmm7', 16),('r', 'xmm7', 16),0)
    # 0x14281340a: movaps xmm2, xmmword ptr [rbp + 0x320]
    s.simd_move('movaps',('r', 'xmm2', 16),('m', 'rbp', None, 1, 800, 16))
    # 0x142813411: mulps xmm7, xmm2
    s.float_op('mulps',('r', 'xmm7', 16),('r', 'xmm2', 16))
    # 0x142813414: addps xmm7, xmm6
    s.float_op('addps',('r', 'xmm7', 16),('r', 'xmm6', 16))
    # 0x142813417: movaps xmm3, xmmword ptr [rbp + 0x2b0]
    s.simd_move('movaps',('r', 'xmm3', 16),('m', 'rbp', None, 1, 688, 16))
    # 0x14281341e: addps xmm7, xmm3
    s.float_op('addps',('r', 'xmm7', 16),('r', 'xmm3', 16))
    # 0x142813421: shufps xmm4, xmm4, 0
    s.shuffle('shufps',('r', 'xmm4', 16),('r', 'xmm4', 16),0)
    # 0x142813425: mulps xmm4, xmm0
    s.float_op('mulps',('r', 'xmm4', 16),('r', 'xmm0', 16))
    # 0x142813428: addps xmm4, xmm5
    s.float_op('addps',('r', 'xmm4', 16),('r', 'xmm5', 16))
    # 0x14281342b: shufps xmm1, xmm1, 0
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm1', 16),0)
    # 0x14281342f: mulps xmm1, xmm2
    s.float_op('mulps',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x142813432: addps xmm1, xmm4
    s.float_op('addps',('r', 'xmm1', 16),('r', 'xmm4', 16))
    # 0x142813435: addps xmm1, xmm3
    s.float_op('addps',('r', 'xmm1', 16),('r', 'xmm3', 16))
    # 0x142813438: movaps xmm3, xmm7
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm7', 16))
    # 0x14281343b: subps xmm3, xmm1
    s.float_op('subps',('r', 'xmm3', 16),('r', 'xmm1', 16))
    # 0x14281343e: mulps xmm3, xmm3
    s.float_op('mulps',('r', 'xmm3', 16),('r', 'xmm3', 16))
    # 0x142813441: movshdup xmm0, xmm3
    s.simd_move('movshdup',('r', 'xmm0', 16),('r', 'xmm3', 16))
    # 0x142813445: addss xmm0, xmm3
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm3', 16))
    # 0x142813449: movhlps xmm3, xmm3
    s.simd_move('movhlps',('r', 'xmm3', 16),('r', 'xmm3', 16))
    # 0x14281344c: addss xmm3, xmm0
    s.float_op('addss',('r', 'xmm3', 16),('r', 'xmm0', 16))
    # 0x142813450: movaps xmm0, xmm1
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x142813453: movsd xmm0, xmm14
    s.simd_move('movsd',('r', 'xmm0', 16),('r', 'xmm14', 16))
    # 0x142813458: shufps xmm1, xmm0, 0x24
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm0', 16),36)
    # 0x14281345c: xorps xmm0, xmm0
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x14281345f: shufps xmm0, xmm7, 0x20
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm7', 16),32)
    # 0x142813463: shufps xmm7, xmm0, 0x24
    s.shuffle('shufps',('r', 'xmm7', 16),('r', 'xmm0', 16),36)
    # 0x142813467: subps xmm1, xmm7
    s.float_op('subps',('r', 'xmm1', 16),('r', 'xmm7', 16))
    # 0x14281346a: movaps xmm0, xmm1
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x14281346d: mulps xmm0, xmm1
    s.float_op('mulps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x142813470: movshdup xmm2, xmm0
    s.simd_move('movshdup',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x142813474: addss xmm2, xmm0
    s.float_op('addss',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x142813478: movhlps xmm0, xmm0
    s.simd_move('movhlps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x14281347b: addss xmm0, xmm2
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x14281347f: sqrtss xmm0, xmm0
    s.float_op('sqrtss',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x142813483: movaps xmm2, xmm14
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm14', 16))
    # 0x142813487: divss xmm2, xmm0
    s.float_op('divss',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x14281348b: xorps xmm12, xmm12
    s.float_op('xorps',('r', 'xmm12', 16),('r', 'xmm12', 16))
    # 0x14281348f: movaps xmm6, xmmword ptr [rip + 0x62444a]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', None, None, 1, 5417171168, 16))
    # 0x142813496: movss xmm6, xmm2
    s.simd_move('movss',('r', 'xmm6', 16),('r', 'xmm2', 16))
    # 0x14281349a: shufps xmm6, xmm6, 0x40
    s.shuffle('shufps',('r', 'xmm6', 16),('r', 'xmm6', 16),64)
    # 0x14281349e: mulps xmm6, xmm1
    s.float_op('mulps',('r', 'xmm6', 16),('r', 'xmm1', 16))
    # 0x1428134a1: movaps xmm0, xmm14
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm14', 16))
    # 0x1428134a5: movlhps xmm0, xmm6
    s.simd_move('movlhps',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x1428134a8: movaps xmm8, xmm6
    s.simd_move('movaps',('r', 'xmm8', 16),('r', 'xmm6', 16))
    # 0x1428134ac: shufps xmm8, xmm0, 0x29
    s.shuffle('shufps',('r', 'xmm8', 16),('r', 'xmm0', 16),41)
    # 0x1428134b1: movaps xmm2, xmmword ptr [rbp + 0x1f0]
    s.simd_move('movaps',('r', 'xmm2', 16),('m', 'rbp', None, 1, 496, 16))
    # 0x1428134b8: mulps xmm8, xmm2
    s.float_op('mulps',('r', 'xmm8', 16),('r', 'xmm2', 16))
    # 0x1428134bc: movshdup xmm0, xmm6
    s.simd_move('movshdup',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x1428134c0: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x1428134c3: unpckhpd xmm1, xmm6
    s.shuffle('unpckhpd',('r', 'xmm1', 16),('r', 'xmm6', 16),0)
    # 0x1428134c7: mulps xmm2, xmm6
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm6', 16))
    # 0x1428134ca: xorps xmm4, xmm4
    s.float_op('xorps',('r', 'xmm4', 16),('r', 'xmm4', 16))
    # 0x1428134cd: shufps xmm4, xmm2, 0x13
    s.shuffle('shufps',('r', 'xmm4', 16),('r', 'xmm2', 16),19)
    # 0x1428134d1: shufps xmm2, xmm4, 0x22
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm4', 16),34)
    # 0x1428134d5: subps xmm8, xmm2
    s.float_op('subps',('r', 'xmm8', 16),('r', 'xmm2', 16))
    # 0x1428134d9: movshdup xmm11, xmm8
    s.simd_move('movshdup',('r', 'xmm11', 16),('r', 'xmm8', 16))
    # 0x1428134de: movaps xmm10, xmm6
    s.simd_move('movaps',('r', 'xmm10', 16),('r', 'xmm6', 16))
    # 0x1428134e2: mulss xmm10, xmm11
    s.float_op('mulss',('r', 'xmm10', 16),('r', 'xmm11', 16))
    # 0x1428134e7: movaps xmm2, xmm0
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x1428134ea: movss xmm13, dword ptr [rip + 0xd896ed]
    s.simd_move('movss',('r', 'xmm13', 16),('m', None, None, 1, 5424925664, 4))
    # 0x1428134f3: mulss xmm2, xmm13
    s.float_op('mulss',('r', 'xmm2', 16),('r', 'xmm13', 16))
    # 0x1428134f8: movaps xmm15, xmm6
    s.simd_move('movaps',('r', 'xmm15', 16),('r', 'xmm6', 16))
    # 0x1428134fc: shufps xmm15, xmm6, 0xe9
    s.shuffle('shufps',('r', 'xmm15', 16),('r', 'xmm6', 16),233)
    # 0x142813501: movaps xmm4, xmm8
    s.simd_move('movaps',('r', 'xmm4', 16),('r', 'xmm8', 16))
    # 0x142813505: shufps xmm4, xmm8, 0xe2
    s.shuffle('shufps',('r', 'xmm4', 16),('r', 'xmm8', 16),226)
    # 0x14281350a: mulps xmm4, xmm15
    s.float_op('mulps',('r', 'xmm4', 16),('r', 'xmm15', 16))
    # 0x14281350e: movaps xmm5, xmm6
    s.simd_move('movaps',('r', 'xmm5', 16),('r', 'xmm6', 16))
    # 0x142813511: shufps xmm5, xmm6, 0xe2
    s.shuffle('shufps',('r', 'xmm5', 16),('r', 'xmm6', 16),226)
    # 0x142813515: movaps xmm14, xmm8
    s.simd_move('movaps',('r', 'xmm14', 16),('r', 'xmm8', 16))
    # 0x142813519: shufps xmm14, xmm8, 0xe9
    s.shuffle('shufps',('r', 'xmm14', 16),('r', 'xmm8', 16),233)
    # 0x14281351e: mulps xmm14, xmm5
    s.float_op('mulps',('r', 'xmm14', 16),('r', 'xmm5', 16))
    # 0x142813522: subps xmm4, xmm14
    s.float_op('subps',('r', 'xmm4', 16),('r', 'xmm14', 16))
    # 0x142813526: movshdup xmm5, xmm4
    s.simd_move('movshdup',('r', 'xmm5', 16),('r', 'xmm4', 16))
    # 0x14281352a: subss xmm2, xmm5
    s.float_op('subss',('r', 'xmm2', 16),('r', 'xmm5', 16))
    # 0x14281352e: movss xmm9, dword ptr [rip + 0xd896c9]
    s.simd_move('movss',('r', 'xmm9', 16),('m', None, None, 1, 5424925696, 4))
    # 0x142813537: mulss xmm5, xmm9
    s.float_op('mulss',('r', 'xmm5', 16),('r', 'xmm9', 16))
    # 0x14281353c: subss xmm5, xmm0
    s.float_op('subss',('r', 'xmm5', 16),('r', 'xmm0', 16))
    # 0x142813540: mulss xmm0, xmm8
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm8', 16))
    # 0x142813545: subss xmm10, xmm0
    s.float_op('subss',('r', 'xmm10', 16),('r', 'xmm0', 16))
    # 0x14281354a: movaps xmm14, xmm6
    s.simd_move('movaps',('r', 'xmm14', 16),('r', 'xmm6', 16))
    # 0x14281354e: mulss xmm14, xmm13
    s.float_op('mulss',('r', 'xmm14', 16),('r', 'xmm13', 16))
    # 0x142813553: movaps xmm0, xmm6
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x142813556: movsd xmm0, xmm10
    s.simd_move('movsd',('r', 'xmm0', 16),('r', 'xmm10', 16))
    # 0x14281355b: movss xmm15, xmm10
    s.simd_move('movss',('r', 'xmm15', 16),('r', 'xmm10', 16))
    # 0x142813560: mulss xmm10, xmm12
    s.float_op('mulss',('r', 'xmm10', 16),('r', 'xmm12', 16))
    # 0x142813565: mulss xmm1, xmm12
    s.float_op('mulss',('r', 'xmm1', 16),('r', 'xmm12', 16))
    # 0x14281356a: addss xmm1, xmm10
    s.float_op('addss',('r', 'xmm1', 16),('r', 'xmm10', 16))
    # 0x14281356f: movaps xmm13, xmm8
    s.simd_move('movaps',('r', 'xmm13', 16),('r', 'xmm8', 16))
    # 0x142813573: mulss xmm13, xmm12
    s.float_op('mulss',('r', 'xmm13', 16),('r', 'xmm12', 16))
    # 0x142813578: subss xmm14, xmm4
    s.float_op('subss',('r', 'xmm14', 16),('r', 'xmm4', 16))
    # 0x14281357d: addss xmm14, xmm13
    s.float_op('addss',('r', 'xmm14', 16),('r', 'xmm13', 16))
    # 0x142813582: shufps xmm0, xmm6, 0xe2
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm6', 16),226)
    # 0x142813586: mulps xmm0, xmmword ptr [rip + 0xd89663]
    s.float_op('mulps',('r', 'xmm0', 16),('m', None, None, 1, 5424925680, 16))
    # 0x14281358d: subps xmm0, xmm15
    s.float_op('subps',('r', 'xmm0', 16),('r', 'xmm15', 16))
    # 0x142813591: movaps xmm10, xmm4
    s.simd_move('movaps',('r', 'xmm10', 16),('r', 'xmm4', 16))
    # 0x142813595: mulss xmm10, xmm9
    s.float_op('mulss',('r', 'xmm10', 16),('r', 'xmm9', 16))
    # 0x14281359a: subss xmm10, xmm6
    s.float_op('subss',('r', 'xmm10', 16),('r', 'xmm6', 16))
    # 0x14281359f: addss xmm10, xmm13
    s.float_op('addss',('r', 'xmm10', 16),('r', 'xmm13', 16))
    # 0x1428135a4: xorps xmm15, xmm15
    s.float_op('xorps',('r', 'xmm15', 16),('r', 'xmm15', 16))
    # 0x1428135a8: sqrtss xmm15, xmm3
    s.float_op('sqrtss',('r', 'xmm15', 16),('r', 'xmm3', 16))
    # 0x1428135ad: addss xmm15, dword ptr [rip + 0x62451e]
    s.float_op('addss',('r', 'xmm15', 16),('m', None, None, 1, 5417171668, 4))
    # 0x1428135b6: mulss xmm11, xmm12
    s.float_op('mulss',('r', 'xmm11', 16),('r', 'xmm12', 16))
    # 0x1428135bb: addss xmm2, xmm11
    s.float_op('addss',('r', 'xmm2', 16),('r', 'xmm11', 16))
    # 0x1428135c0: addss xmm5, xmm11
    s.float_op('addss',('r', 'xmm5', 16),('r', 'xmm11', 16))
    # 0x1428135c5: movaps xmm3, xmm8
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm8', 16))
    # 0x1428135c9: unpckhpd xmm3, xmm8
    s.shuffle('unpckhpd',('r', 'xmm3', 16),('r', 'xmm8', 16),0)
    # 0x1428135ce: addss xmm1, xmm3
    s.float_op('addss',('r', 'xmm1', 16),('r', 'xmm3', 16))
    # 0x1428135d2: mulss xmm3, xmm12
    s.float_op('mulss',('r', 'xmm3', 16),('r', 'xmm12', 16))
    # 0x1428135d7: movsldup xmm3, xmm3
    s.simd_move('movsldup',('r', 'xmm3', 16),('r', 'xmm3', 16))
    # 0x1428135db: addps xmm3, xmm0
    s.float_op('addps',('r', 'xmm3', 16),('r', 'xmm0', 16))
    # 0x1428135de: movaps xmm11, xmmword ptr [rip + 0x6242fa]
    s.simd_move('movaps',('r', 'xmm11', 16),('m', None, None, 1, 5417171168, 16))
    # 0x1428135e6: movss xmm11, xmm15
    s.simd_move('movss',('r', 'xmm11', 16),('r', 'xmm15', 16))
    # 0x1428135eb: shufps xmm11, xmm11, 0x40
    s.shuffle('shufps',('r', 'xmm11', 16),('r', 'xmm11', 16),64)
    # 0x1428135f0: xorps xmm0, xmm0
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x1428135f3: mulps xmm4, xmm0
    s.float_op('mulps',('r', 'xmm4', 16),('r', 'xmm0', 16))
    # 0x1428135f6: mulps xmm11, xmm6
    s.float_op('mulps',('r', 'xmm11', 16),('r', 'xmm6', 16))
    # 0x1428135fa: xorps xmm13, xmm13
    s.float_op('xorps',('r', 'xmm13', 16),('r', 'xmm13', 16))
    # 0x1428135fe: mulps xmm6, xmm0
    s.float_op('mulps',('r', 'xmm6', 16),('r', 'xmm0', 16))
    # 0x142813601: addps xmm6, xmm4
    s.float_op('addps',('r', 'xmm6', 16),('r', 'xmm4', 16))
    # 0x142813604: addps xmm6, xmm8
    s.float_op('addps',('r', 'xmm6', 16),('r', 'xmm8', 16))
    # 0x142813608: mulps xmm11, xmmword ptr [rip + 0xd89600]
    s.float_op('mulps',('r', 'xmm11', 16),('m', None, None, 1, 5424925712, 16))
    # 0x142813610: mulps xmm8, xmmword ptr [rip + 0xd89608]
    s.float_op('mulps',('r', 'xmm8', 16),('m', None, None, 1, 5424925728, 16))
    # 0x142813618: ucomiss xmm12, xmm1
    s.compare_float(('r', 'xmm12', 16),('r', 'xmm1', 16))
    # 0x14281361c: jae 0x1428136c0
    s.pc=s.read(('i', 5410731712, 8)) if s.condition('ae') else 5410731554
    return

def b_142813622(s):
    # 0x142813622: addss xmm14, xmm5
    s.float_op('addss',('r', 'xmm14', 16),('r', 'xmm5', 16))
    # 0x142813627: movss xmm0, dword ptr [rip + 0x6238f9]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5417168680, 4))
    # 0x14281362f: addss xmm1, xmm0
    s.float_op('addss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142813633: ucomiss xmm12, xmm14
    s.compare_float(('r', 'xmm12', 16),('r', 'xmm14', 16))
    # 0x142813637: xorps xmm9, xmm9
    s.float_op('xorps',('r', 'xmm9', 16),('r', 'xmm9', 16))
    # 0x14281363b: jae 0x142813730
    s.pc=s.read(('i', 5410731824, 8)) if s.condition('ae') else 5410731585
    return

def b_142813641(s):
    # 0x142813641: movaps xmm0, xmm6
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x142813644: shufps xmm0, xmm3, 0x10
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm3', 16),16)
    # 0x142813648: movlhps xmm14, xmm2
    s.simd_move('movlhps',('r', 'xmm14', 16),('r', 'xmm2', 16))
    # 0x14281364c: shufps xmm2, xmm3, 0xf4
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm3', 16),244)
    # 0x142813650: movaps xmm5, xmm0
    s.simd_move('movaps',('r', 'xmm5', 16),('r', 'xmm0', 16))
    # 0x142813653: shufps xmm5, xmm2, 0x82
    s.shuffle('shufps',('r', 'xmm5', 16),('r', 'xmm2', 16),130)
    # 0x142813657: shufps xmm0, xmm14, 0x22
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm14', 16),34)
    # 0x14281365c: shufps xmm3, xmm6, 0x10
    s.shuffle('shufps',('r', 'xmm3', 16),('r', 'xmm6', 16),16)
    # 0x142813660: movlhps xmm1, xmm10
    s.simd_move('movlhps',('r', 'xmm1', 16),('r', 'xmm10', 16))
    # 0x142813664: shufps xmm10, xmm6, 0xf4
    s.shuffle('shufps',('r', 'xmm10', 16),('r', 'xmm6', 16),244)
    # 0x142813669: movaps xmm2, xmm3
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x14281366c: shufps xmm2, xmm10, 0x82
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm10', 16),130)
    # 0x142813671: subps xmm5, xmm2
    s.float_op('subps',('r', 'xmm5', 16),('r', 'xmm2', 16))
    # 0x142813674: shufps xmm3, xmm1, 0x22
    s.shuffle('shufps',('r', 'xmm3', 16),('r', 'xmm1', 16),34)
    # 0x142813678: addps xmm3, xmm0
    s.float_op('addps',('r', 'xmm3', 16),('r', 'xmm0', 16))
    # 0x14281367b: movaps xmm0, xmm3
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm3', 16))
    # 0x14281367e: shufps xmm0, xmm5, 0x23
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm5', 16),35)
    # 0x142813682: shufps xmm5, xmm0, 0x24
    s.shuffle('shufps',('r', 'xmm5', 16),('r', 'xmm0', 16),36)
    # 0x142813686: shufps xmm3, xmm3, 0xff
    s.shuffle('shufps',('r', 'xmm3', 16),('r', 'xmm3', 16),255)
    # 0x14281368a: xorps xmm0, xmm0
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x14281368d: sqrtss xmm0, xmm3
    s.float_op('sqrtss',('r', 'xmm0', 16),('r', 'xmm3', 16))
    # 0x142813691: movss xmm4, dword ptr [rip + 0x6238b7]
    s.simd_move('movss',('r', 'xmm4', 16),('m', None, None, 1, 5417168720, 4))
    # 0x142813699: divss xmm4, xmm0
    s.float_op('divss',('r', 'xmm4', 16),('r', 'xmm0', 16))
    # 0x14281369d: shufps xmm4, xmm4, 0
    s.shuffle('shufps',('r', 'xmm4', 16),('r', 'xmm4', 16),0)
    # 0x1428136a1: mulps xmm4, xmm5
    s.float_op('mulps',('r', 'xmm4', 16),('r', 'xmm5', 16))
    # 0x1428136a4: movss xmm14, dword ptr [rip + 0x62387b]
    s.simd_move('movss',('r', 'xmm14', 16),('m', None, None, 1, 5417168680, 4))
    # 0x1428136ad: jmp 0x1428137ab
    s.pc=s.read(('i', 5410731947, 8))
    return

def b_1428136b2(s):
    # 0x1428136b2: nop word ptr cs:[rax + rax]
    s.pc=5410731712
    return

def b_1428136c0(s):
    # 0x1428136c0: subss xmm5, xmm14
    s.float_op('subss',('r', 'xmm5', 16),('r', 'xmm14', 16))
    # 0x1428136c5: movss xmm0, dword ptr [rip + 0x62385b]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5417168680, 4))
    # 0x1428136cd: movaps xmm4, xmm0
    s.simd_move('movaps',('r', 'xmm4', 16),('r', 'xmm0', 16))
    # 0x1428136d0: subss xmm4, xmm1
    s.float_op('subss',('r', 'xmm4', 16),('r', 'xmm1', 16))
    # 0x1428136d4: ucomiss xmm12, xmm5
    s.compare_float(('r', 'xmm12', 16),('r', 'xmm5', 16))
    # 0x1428136d8: movaps xmm14, xmm0
    s.simd_move('movaps',('r', 'xmm14', 16),('r', 'xmm0', 16))
    # 0x1428136dc: jae 0x142813770
    s.pc=s.read(('i', 5410731888, 8)) if s.condition('ae') else 5410731746
    return

def b_1428136e2(s):
    # 0x1428136e2: unpcklps xmm2, xmm5
    s.shuffle('unpcklps',('r', 'xmm2', 16),('r', 'xmm5', 16),0)
    # 0x1428136e5: unpcklps xmm10, xmm4
    s.shuffle('unpcklps',('r', 'xmm10', 16),('r', 'xmm4', 16),0)
    # 0x1428136e9: addps xmm10, xmm2
    s.float_op('addps',('r', 'xmm10', 16),('r', 'xmm2', 16))
    # 0x1428136ed: movshdup xmm0, xmm10
    s.simd_move('movshdup',('r', 'xmm0', 16),('r', 'xmm10', 16))
    # 0x1428136f2: sqrtss xmm0, xmm0
    s.float_op('sqrtss',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x1428136f6: movss xmm1, dword ptr [rip + 0x623852]
    s.simd_move('movss',('r', 'xmm1', 16),('m', None, None, 1, 5417168720, 4))
    # 0x1428136fe: divss xmm1, xmm0
    s.float_op('divss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142813702: movaps xmm0, xmm6
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x142813705: addps xmm0, xmm3
    s.float_op('addps',('r', 'xmm0', 16),('r', 'xmm3', 16))
    # 0x142813708: subps xmm6, xmm3
    s.float_op('subps',('r', 'xmm6', 16),('r', 'xmm3', 16))
    # 0x14281370b: shufps xmm6, xmm0, 0x10
    s.shuffle('shufps',('r', 'xmm6', 16),('r', 'xmm0', 16),16)
    # 0x14281370f: shufps xmm1, xmm1, 0
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm1', 16),0)
    # 0x142813713: shufps xmm10, xmm6, 0x24
    s.shuffle('shufps',('r', 'xmm10', 16),('r', 'xmm6', 16),36)
    # 0x142813718: mulps xmm10, xmm1
    s.float_op('mulps',('r', 'xmm10', 16),('r', 'xmm1', 16))
    # 0x14281371c: movaps xmm4, xmm10
    s.simd_move('movaps',('r', 'xmm4', 16),('r', 'xmm10', 16))
    # 0x142813720: jmp 0x1428137a7
    s.pc=s.read(('i', 5410731943, 8))
    return

def b_142813725(s):
    # 0x142813725: nop word ptr cs:[rax + rax]
    s.pc=5410731824
    return

def b_142813730(s):
    # 0x142813730: subss xmm1, xmm14
    s.float_op('subss',('r', 'xmm1', 16),('r', 'xmm14', 16))
    # 0x142813735: xorps xmm0, xmm0
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x142813738: sqrtss xmm0, xmm1
    s.float_op('sqrtss',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x14281373c: movss xmm4, dword ptr [rip + 0x62380c]
    s.simd_move('movss',('r', 'xmm4', 16),('m', None, None, 1, 5417168720, 4))
    # 0x142813744: divss xmm4, xmm0
    s.float_op('divss',('r', 'xmm4', 16),('r', 'xmm0', 16))
    # 0x142813748: addps xmm3, xmm6
    s.float_op('addps',('r', 'xmm3', 16),('r', 'xmm6', 16))
    # 0x14281374b: subss xmm2, xmm10
    s.float_op('subss',('r', 'xmm2', 16),('r', 'xmm10', 16))
    # 0x142813750: movaps xmm0, xmm4
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm4', 16))
    # 0x142813753: unpcklps xmm0, xmm2
    s.shuffle('unpcklps',('r', 'xmm0', 16),('r', 'xmm2', 16),0)
    # 0x142813756: movlhps xmm3, xmm0
    s.simd_move('movlhps',('r', 'xmm3', 16),('r', 'xmm0', 16))
    # 0x142813759: unpcklps xmm4, xmm1
    s.shuffle('unpcklps',('r', 'xmm4', 16),('r', 'xmm1', 16),0)
    # 0x14281375c: shufps xmm4, xmm4, 0x10
    s.shuffle('shufps',('r', 'xmm4', 16),('r', 'xmm4', 16),16)
    # 0x142813760: mulps xmm4, xmm3
    s.float_op('mulps',('r', 'xmm4', 16),('r', 'xmm3', 16))
    # 0x142813763: movss xmm14, dword ptr [rip + 0x6237bc]
    s.simd_move('movss',('r', 'xmm14', 16),('m', None, None, 1, 5417168680, 4))
    # 0x14281376c: jmp 0x1428137ab
    s.pc=s.read(('i', 5410731947, 8))
    return

def b_14281376e(s):
    # 0x14281376e: nop 
    s.pc=5410731888
    return

def b_142813770(s):
    # 0x142813770: subss xmm4, xmm5
    s.float_op('subss',('r', 'xmm4', 16),('r', 'xmm5', 16))
    # 0x142813774: xorps xmm0, xmm0
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x142813777: sqrtss xmm0, xmm4
    s.float_op('sqrtss',('r', 'xmm0', 16),('r', 'xmm4', 16))
    # 0x14281377b: movss xmm1, dword ptr [rip + 0x6237cd]
    s.simd_move('movss',('r', 'xmm1', 16),('m', None, None, 1, 5417168720, 4))
    # 0x142813783: divss xmm1, xmm0
    s.float_op('divss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142813787: addss xmm2, xmm10
    s.float_op('addss',('r', 'xmm2', 16),('r', 'xmm10', 16))
    # 0x14281378c: movaps xmm0, xmm3
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm3', 16))
    # 0x14281378f: addps xmm0, xmm6
    s.float_op('addps',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x142813792: subps xmm3, xmm6
    s.float_op('subps',('r', 'xmm3', 16),('r', 'xmm6', 16))
    # 0x142813795: shufps xmm3, xmm0, 1
    s.shuffle('shufps',('r', 'xmm3', 16),('r', 'xmm0', 16),1)
    # 0x142813799: shufps xmm1, xmm1, 0
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm1', 16),0)
    # 0x14281379d: unpcklps xmm4, xmm2
    s.shuffle('unpcklps',('r', 'xmm4', 16),('r', 'xmm2', 16),0)
    # 0x1428137a0: shufps xmm4, xmm3, 0x24
    s.shuffle('shufps',('r', 'xmm4', 16),('r', 'xmm3', 16),36)
    # 0x1428137a4: mulps xmm4, xmm1
    s.float_op('mulps',('r', 'xmm4', 16),('r', 'xmm1', 16))
    s.pc=5410731943
    return

def b_1428137a7(s):
    # 0x1428137a7: xorps xmm9, xmm9
    s.float_op('xorps',('r', 'xmm9', 16),('r', 'xmm9', 16))
    s.pc=5410731947
    return

def b_1428137ab(s):
    # 0x1428137ab: movss xmm6, dword ptr [rbp + 0x390]
    s.simd_move('movss',('r', 'xmm6', 16),('m', 'rbp', None, 1, 912, 4))
    # 0x1428137b3: movaps xmmword ptr [rbp + 0x3d0], xmm4
    s.simd_move('movaps',('m', 'rbp', None, 1, 976, 16),('r', 'xmm4', 16))
    # 0x1428137ba: mov rcx, r14
    s.write(('r', 'rcx', 8),s.read(('r', 'r14', 8)))
    # 0x1428137bd: call 0x1424e5b90
    s.push(5410731970)
    s.pc=s.read(('i', 5407398800, 8))
    return

def b_1428137c2(s):
    # 0x1428137c2: nop 
    # 0x1428137c3: mov rsi, rax
    s.write(('r', 'rsi', 8),s.read(('r', 'rax', 8)))
    # 0x1428137c6: mov dword ptr [rbp + 0x3d0], 0x3e800000
    s.write(('m', 'rbp', None, 1, 976, 4),s.read(('i', 1048576000, 4)))
    # 0x1428137d0: movss dword ptr [rbp + 0x3d4], xmm15
    s.simd_move('movss',('m', 'rbp', None, 1, 980, 4),('r', 'xmm15', 16))
    # 0x1428137d9: mov dword ptr [rbp + 0x3d8], 0x3e3851ec
    s.write(('m', 'rbp', None, 1, 984, 4),s.read(('i', 1043878380, 4)))
    # 0x1428137e3: mov rcx, r14
    s.write(('r', 'rcx', 8),s.read(('r', 'r14', 8)))
    # 0x1428137e6: call 0x141e3c580
    s.push(5410732011)
    s.pc=s.read(('i', 5400413568, 8))
    return

def b_1428137eb(s):
    # 0x1428137eb: nop 
    # 0x1428137ec: mov r12, rax
    s.write(('r', 'r12', 8),s.read(('r', 'rax', 8)))
    # 0x1428137ef: movaps xmm0, xmm6
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x1428137f2: call 0x141e3c420
    s.push(5410732023)
    s.pc=s.read(('i', 5400413216, 8))
    return

def b_1428137f7(s):
    # 0x1428137f7: nop 
    # 0x1428137f8: addps xmm7, xmm11
    s.float_op('addps',('r', 'xmm7', 16),('r', 'xmm11', 16))
    # 0x1428137fc: addps xmm7, xmm8
    s.float_op('addps',('r', 'xmm7', 16),('r', 'xmm8', 16))
    # 0x142813800: movaps xmmword ptr [rbp + 0x3d0], xmm7
    s.simd_move('movaps',('m', 'rbp', None, 1, 976, 16),('r', 'xmm7', 16))
    # 0x142813807: movabs rcx, 0x7bff00003c000000
    s.write(('r', 'rcx', 8),s.read(('i', 8934860186732986368, 8)))
    # 0x142813811: mov qword ptr [rbp + 0x3e0], rcx
    s.write(('m', 'rbp', None, 1, 992, 8),s.read(('r', 'rcx', 8)))
    # 0x142813818: mov dword ptr [rbp + 0x3e8], r12d
    s.write(('m', 'rbp', None, 1, 1000, 4),s.read(('r', 'r12d', 4)))
    # 0x14281381f: shr r12, 0x20
    s.integer('shr',[('r', 'r12', 8), ('i', 32, 1)])
    # 0x142813823: mov word ptr [rbp + 0x3ec], r12w
    s.write(('m', 'rbp', None, 1, 1004, 2),s.read(('r', 'r12w', 2)))
    # 0x14281382b: mov word ptr [rbp + 0x3ee], ax
    s.write(('m', 'rbp', None, 1, 1006, 2),s.read(('r', 'ax', 2)))
    # 0x142813832: mov qword ptr [rbp + 0x3f0], rsi
    s.write(('m', 'rbp', None, 1, 1008, 8),s.read(('r', 'rsi', 8)))
    # 0x142813839: mov eax, dword ptr [rbp + 0x3b4]
    s.write(('r', 'eax', 4),s.read(('m', 'rbp', None, 1, 948, 4)))
    # 0x14281383f: mov dword ptr [rbp + 0x3f8], eax
    s.write(('m', 'rbp', None, 1, 1016, 4),s.read(('r', 'eax', 4)))
    # 0x142813845: mov qword ptr [rbp + 0x3fc], 0
    s.write(('m', 'rbp', None, 1, 1020, 8),s.read(('i', 0, 8)))
    # 0x142813850: mov dword ptr [rbp + 0x404], r13d
    s.write(('m', 'rbp', None, 1, 1028, 4),s.read(('r', 'r13d', 4)))
    # 0x142813857: movabs rax, 0x200000000
    s.write(('r', 'rax', 8),s.read(('i', 8589934592, 8)))
    # 0x142813861: mov qword ptr [rbp + 0x408], rax
    s.write(('m', 'rbp', None, 1, 1032, 8),s.read(('r', 'rax', 8)))
    # 0x142813868: mov rcx, qword ptr [rbp + 0x568]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 1384, 8)))
    # 0x14281386f: mov rdx, r14
    s.write(('r', 'rdx', 8),s.read(('r', 'r14', 8)))
    # 0x142813872: call 0x142816720
    s.push(5410732151)
    s.pc=s.read(('i', 5410744096, 8))
    return

def b_142813877(s):
    # 0x142813877: nop 
    # 0x142813878: inc r13d
    s.integer('inc',[('r', 'r13d', 4)])
    # 0x14281387b: lea rax, [rbx - 1]
    s.write(('r', 'rax', 8),s.address(('m', 'rbx', None, 1, -1, 8)))
    # 0x14281387f: cmp r15, rax
    s.integer('cmp',[('r', 'r15', 8), ('r', 'rax', 8)])
    # 0x142813882: jb 0x1428132b0
    s.pc=s.read(('i', 5410730672, 8)) if s.condition('b') else 5410732168
    return

def b_142813888(s):
    # 0x142813888: mov rdx, qword ptr [rbp + 0x2e0]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 736, 8)))
    # 0x14281388f: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x142813892: je 0x142812f20
    s.pc=s.read(('i', 5410729760, 8)) if s.condition('e') else 5410732184
    return

def b_142813898(s):
    # 0x142813898: mov rcx, qword ptr [rbp + 0x2e8]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 744, 8)))
    # 0x14281389f: shl rdx, 2
    s.integer('shl',[('r', 'rdx', 8), ('i', 2, 1)])
    # 0x1428138a3: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x1428138a9: call 0x1406abac0
    s.push(5410732206)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_1428138ae(s):
    # 0x1428138ae: jmp 0x142812f20
    s.pc=s.read(('i', 5410729760, 8))
    return

def b_1428138b3(s):
    # 0x1428138b3: mov rcx, qword ptr [rbp + 0x418]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 1048, 8)))
    # 0x1428138ba: call 0x140ac6110
    s.push(5410732223)
    s.pc=s.read(('i', 5380006160, 8))
    return

def b_1428138bf(s):
    # 0x1428138bf: nop 
    # 0x1428138c0: mov qword ptr [rbp + 0x1a8], rax
    s.write(('m', 'rbp', None, 1, 424, 8),s.read(('r', 'rax', 8)))
    # 0x1428138c7: lea rcx, [rbp + 0x2e0]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 736, 8)))
    # 0x1428138ce: lea rdx, [rbp + 0x1a8]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 424, 8)))
    # 0x1428138d5: mov r8, qword ptr [rbp + 0x418]
    s.write(('r', 'r8', 8),s.read(('m', 'rbp', None, 1, 1048, 8)))
    # 0x1428138dc: call 0x140ac5730
    s.push(5410732257)
    s.pc=s.read(('i', 5380003632, 8))
    return

def b_1428138e1(s):
    # 0x1428138e1: nop 
    # 0x1428138e2: cmp dword ptr [rbp + 0x2e0], 1
    s.integer('cmp',[('m', 'rbp', None, 1, 736, 4), ('i', 1, 4)])
    # 0x1428138e9: jne 0x14281425e
    s.pc=s.read(('i', 5410734686, 8)) if s.condition('ne') else 5410732271
    return

def b_1428138ef(s):
    # 0x1428138ef: movaps xmm2, xmmword ptr [rbp + 0xe0]
    s.simd_move('movaps',('r', 'xmm2', 16),('m', 'rbp', None, 1, 224, 16))
    # 0x1428138f6: movaps xmm1, xmmword ptr [rbp + 0x100]
    s.simd_move('movaps',('r', 'xmm1', 16),('m', 'rbp', None, 1, 256, 16))
    # 0x1428138fd: ucomiss xmm2, xmm1
    s.compare_float(('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x142813900: movsd xmm0, qword ptr [rbp + 0x190]
    s.simd_move('movsd',('r', 'xmm0', 16),('m', 'rbp', None, 1, 400, 8))
    # 0x142813908: movsd xmm6, qword ptr [rbp + 0x198]
    s.simd_move('movsd',('r', 'xmm6', 16),('m', 'rbp', None, 1, 408, 8))
    # 0x142813910: jbe 0x1428139ae
    s.pc=s.read(('i', 5410732462, 8)) if s.condition('be') else 5410732310
    return

def b_142813916(s):
    # 0x142813916: movss xmm1, dword ptr [rbp + 0x194]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rbp', None, 1, 404, 4))
    # 0x14281391e: xorps xmm1, xmmword ptr [rip + 0x623efb]
    s.float_op('xorps',('r', 'xmm1', 16),('m', None, None, 1, 5417170976, 16))
    # 0x142813925: movsldup xmm2, xmm2
    s.simd_move('movsldup',('r', 'xmm2', 16),('r', 'xmm2', 16))
    # 0x142813929: movsldup xmm7, xmm0
    s.simd_move('movsldup',('r', 'xmm7', 16),('r', 'xmm0', 16))
    # 0x14281392d: movss xmm7, xmm1
    s.simd_move('movss',('r', 'xmm7', 16),('r', 'xmm1', 16))
    # 0x142813931: mulps xmm7, xmm2
    s.float_op('mulps',('r', 'xmm7', 16),('r', 'xmm2', 16))
    # 0x142813934: jmp 0x1428139b5
    s.pc=s.read(('i', 5410732469, 8))
    return

def b_142813936(s):
    # 0x142813936: lea rax, [rbp + 0x258]
    s.write(('r', 'rax', 8),s.address(('m', 'rbp', None, 1, 600, 8)))
    # 0x14281393d: mov qword ptr [rbp + 0x3d0], rax
    s.write(('m', 'rbp', None, 1, 976, 8),s.read(('r', 'rax', 8)))
    # 0x142813944: lea rax, [rip - 0x18a298b]
    s.write(('r', 'rax', 8),s.address(('m', None, None, 1, 5384900544, 8)))
    # 0x14281394b: mov qword ptr [rbp + 0x3d8], rax
    s.write(('m', 'rbp', None, 1, 984, 8),s.read(('r', 'rax', 8)))
    # 0x142813952: lea rcx, [rip + 0xd87a13]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5424919404, 8)))
    # 0x142813959: lea r8, [rip + 0xd89460]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424926144, 8)))
    # 0x142813960: lea rdx, [rbp + 0x3d0]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 976, 8)))
    # 0x142813967: call 0x142dc83d0
    s.push(5410732396)
    s.pc=s.read(('i', 5416715216, 8))
    return

def b_14281396c(s):
    # 0x14281396c: nop 
    # 0x14281396d: jmp 0x142815e2b
    s.pc=s.read(('i', 5410741803, 8))
    return

def b_142813972(s):
    # 0x142813972: lea rax, [rbp + 0x258]
    s.write(('r', 'rax', 8),s.address(('m', 'rbp', None, 1, 600, 8)))
    # 0x142813979: mov qword ptr [rbp + 0x3d0], rax
    s.write(('m', 'rbp', None, 1, 976, 8),s.read(('r', 'rax', 8)))
    # 0x142813980: lea rax, [rip - 0x18a29c7]
    s.write(('r', 'rax', 8),s.address(('m', None, None, 1, 5384900544, 8)))
    # 0x142813987: mov qword ptr [rbp + 0x3d8], rax
    s.write(('m', 'rbp', None, 1, 984, 8),s.read(('r', 'rax', 8)))
    # 0x14281398e: lea rcx, [rip + 0xd879d7]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5424919404, 8)))
    # 0x142813995: lea r8, [rip + 0xd89454]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424926192, 8)))
    # 0x14281399c: lea rdx, [rbp + 0x3d0]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 976, 8)))
    # 0x1428139a3: call 0x142dc83d0
    s.push(5410732456)
    s.pc=s.read(('i', 5416715216, 8))
    return

def b_1428139a8(s):
    # 0x1428139a8: nop 
    # 0x1428139a9: jmp 0x142815e2b
    s.pc=s.read(('i', 5410741803, 8))
    return

def b_1428139ae(s):
    # 0x1428139ae: movsldup xmm7, xmm1
    s.simd_move('movsldup',('r', 'xmm7', 16),('r', 'xmm1', 16))
    # 0x1428139b2: mulps xmm7, xmm0
    s.float_op('mulps',('r', 'xmm7', 16),('r', 'xmm0', 16))
    s.pc=5410732469
    return

def b_1428139b5(s):
    # 0x1428139b5: mulps xmm7, xmmword ptr [rip + 0x6235a4]
    s.float_op('mulps',('r', 'xmm7', 16),('m', None, None, 1, 5417168736, 16))
    # 0x1428139bc: movaps xmm0, xmm6
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x1428139bf: subps xmm0, xmm7
    s.float_op('subps',('r', 'xmm0', 16),('r', 'xmm7', 16))
    # 0x1428139c2: unpcklps xmm0, xmm0
    s.shuffle('unpcklps',('r', 'xmm0', 16),('r', 'xmm0', 16),0)
    # 0x1428139c5: movaps xmm10, xmmword ptr [rbp + 0xd0]
    s.simd_move('movaps',('r', 'xmm10', 16),('m', 'rbp', None, 1, 208, 16))
    # 0x1428139cd: mulps xmm0, xmm10
    s.float_op('mulps',('r', 'xmm0', 16),('r', 'xmm10', 16))
    # 0x1428139d1: mov rax, qword ptr [rbp + 0x348]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 840, 8)))
    # 0x1428139d8: movsd xmm11, qword ptr [rax + 8]
    s.simd_move('movsd',('r', 'xmm11', 16),('m', 'rax', None, 1, 8, 8))
    # 0x1428139de: movaps xmm1, xmm0
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x1428139e1: unpckhpd xmm1, xmm0
    s.shuffle('unpckhpd',('r', 'xmm1', 16),('r', 'xmm0', 16),0)
    # 0x1428139e5: addps xmm1, xmm0
    s.float_op('addps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x1428139e8: addps xmm1, xmm11
    s.float_op('addps',('r', 'xmm1', 16),('r', 'xmm11', 16))
    # 0x1428139ec: movlps qword ptr [rbp + 0x258], xmm1
    s.simd_move('movlps',('m', 'rbp', None, 1, 600, 8),('r', 'xmm1', 16))
    # 0x1428139f3: lea rcx, [rbp + 0x3d0]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 976, 8)))
    # 0x1428139fa: lea rdx, [rbp + 0x258]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 600, 8)))
    # 0x142813a01: call 0x140df4520
    s.push(5410732550)
    s.pc=s.read(('i', 5383341344, 8))
    return

def b_142813a06(s):
    # 0x142813a06: nop 
    # 0x142813a07: mov rcx, qword ptr [rbp + 0x418]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 1048, 8)))
    # 0x142813a0e: call 0x140b77a00
    s.push(5410732563)
    s.pc=s.read(('i', 5380733440, 8))
    return

def b_142813a13(s):
    # 0x142813a13: nop 
    # 0x142813a14: movaps xmm12, xmm0
    s.simd_move('movaps',('r', 'xmm12', 16),('r', 'xmm0', 16))
    # 0x142813a18: addps xmm6, xmm7
    s.float_op('addps',('r', 'xmm6', 16),('r', 'xmm7', 16))
    # 0x142813a1b: unpcklps xmm6, xmm6
    s.shuffle('unpcklps',('r', 'xmm6', 16),('r', 'xmm6', 16),0)
    # 0x142813a1e: xorps xmm8, xmm8
    s.float_op('xorps',('r', 'xmm8', 16),('r', 'xmm8', 16))
    # 0x142813a22: mulss xmm8, xmm0
    s.float_op('mulss',('r', 'xmm8', 16),('r', 'xmm0', 16))
    # 0x142813a27: movss xmm13, dword ptr [rbp + 0x3d0]
    s.simd_move('movss',('r', 'xmm13', 16),('m', 'rbp', None, 1, 976, 4))
    # 0x142813a30: addss xmm13, xmm8
    s.float_op('addss',('r', 'xmm13', 16),('r', 'xmm8', 16))
    # 0x142813a35: movsd xmm9, qword ptr [rbp + 0x3d4]
    s.simd_move('movsd',('r', 'xmm9', 16),('m', 'rbp', None, 1, 980, 8))
    # 0x142813a3e: mulps xmm10, xmm6
    s.float_op('mulps',('r', 'xmm10', 16),('r', 'xmm6', 16))
    # 0x142813a42: movaps xmm0, xmm10
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm10', 16))
    # 0x142813a46: unpckhpd xmm0, xmm10
    s.shuffle('unpckhpd',('r', 'xmm0', 16),('r', 'xmm10', 16),0)
    # 0x142813a4b: addps xmm0, xmm10
    s.float_op('addps',('r', 'xmm0', 16),('r', 'xmm10', 16))
    # 0x142813a4f: addps xmm11, xmm0
    s.float_op('addps',('r', 'xmm11', 16),('r', 'xmm0', 16))
    # 0x142813a53: movlps qword ptr [rbp + 0x258], xmm11
    s.simd_move('movlps',('m', 'rbp', None, 1, 600, 8),('r', 'xmm11', 16))
    # 0x142813a5b: lea rcx, [rbp + 0x3d0]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 976, 8)))
    # 0x142813a62: lea rdx, [rbp + 0x258]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 600, 8)))
    # 0x142813a69: call 0x140df4520
    s.push(5410732654)
    s.pc=s.read(('i', 5383341344, 8))
    return

def b_142813a6e(s):
    # 0x142813a6e: nop 
    # 0x142813a6f: mov rcx, qword ptr [rbp + 0x418]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 1048, 8)))
    # 0x142813a76: call 0x140b77a00
    s.push(5410732667)
    s.pc=s.read(('i', 5380733440, 8))
    return

def b_142813a7b(s):
    # 0x142813a7b: nop 
    # 0x142813a7c: movaps xmm10, xmm0
    s.simd_move('movaps',('r', 'xmm10', 16),('r', 'xmm0', 16))
    # 0x142813a80: xorps xmm6, xmm6
    s.float_op('xorps',('r', 'xmm6', 16),('r', 'xmm6', 16))
    # 0x142813a83: mulss xmm6, xmm0
    s.float_op('mulss',('r', 'xmm6', 16),('r', 'xmm0', 16))
    # 0x142813a87: movss xmm11, dword ptr [rbp + 0x3d0]
    s.simd_move('movss',('r', 'xmm11', 16),('m', 'rbp', None, 1, 976, 4))
    # 0x142813a90: addss xmm11, xmm6
    s.float_op('addss',('r', 'xmm11', 16),('r', 'xmm6', 16))
    # 0x142813a95: movsd xmm7, qword ptr [rbp + 0x3d4]
    s.simd_move('movsd',('r', 'xmm7', 16),('m', 'rbp', None, 1, 980, 8))
    # 0x142813a9d: mov rcx, qword ptr [rbp + 0x418]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 1048, 8)))
    # 0x142813aa4: call 0x140b77b60
    s.push(5410732713)
    s.pc=s.read(('i', 5380733792, 8))
    return

def b_142813aa9(s):
    # 0x142813aa9: nop 
    # 0x142813aaa: unpcklps xmm12, xmm8
    s.shuffle('unpcklps',('r', 'xmm12', 16),('r', 'xmm8', 16),0)
    # 0x142813aae: addps xmm12, xmm9
    s.float_op('addps',('r', 'xmm12', 16),('r', 'xmm9', 16))
    # 0x142813ab2: unpcklps xmm10, xmm6
    s.shuffle('unpcklps',('r', 'xmm10', 16),('r', 'xmm6', 16),0)
    # 0x142813ab6: addps xmm10, xmm7
    s.float_op('addps',('r', 'xmm10', 16),('r', 'xmm7', 16))
    # 0x142813aba: test al, al
    s.integer('test',[('r', 'al', 1), ('r', 'al', 1)])
    # 0x142813abc: je 0x142813b6b
    s.pc=s.read(('i', 5410732907, 8)) if s.condition('e') else 5410732738
    return

def b_142813ac2(s):
    # 0x142813ac2: movaps xmm1, xmm11
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm11', 16))
    # 0x142813ac6: subss xmm1, xmm13
    s.float_op('subss',('r', 'xmm1', 16),('r', 'xmm13', 16))
    # 0x142813acb: movaps xmm0, xmm10
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm10', 16))
    # 0x142813acf: subps xmm0, xmm12
    s.float_op('subps',('r', 'xmm0', 16),('r', 'xmm12', 16))
    # 0x142813ad3: movaps xmm2, xmm1
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x142813ad6: mulss xmm2, xmm1
    s.float_op('mulss',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x142813ada: movaps xmm3, xmm0
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm0', 16))
    # 0x142813add: mulps xmm3, xmm0
    s.float_op('mulps',('r', 'xmm3', 16),('r', 'xmm0', 16))
    # 0x142813ae0: addss xmm2, xmm3
    s.float_op('addss',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x142813ae4: movshdup xmm3, xmm3
    s.simd_move('movshdup',('r', 'xmm3', 16),('r', 'xmm3', 16))
    # 0x142813ae8: addss xmm3, xmm2
    s.float_op('addss',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x142813aec: xorps xmm2, xmm2
    s.float_op('xorps',('r', 'xmm2', 16),('r', 'xmm2', 16))
    # 0x142813aef: sqrtss xmm2, xmm3
    s.float_op('sqrtss',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x142813af3: mov rax, qword ptr [rbp + 0x418]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 1048, 8)))
    # 0x142813afa: cmp byte ptr [rax + 0x54], 1
    s.integer('cmp',[('m', 'rax', None, 1, 84, 1), ('i', 1, 1)])
    # 0x142813afe: jne 0x142813b24
    s.pc=s.read(('i', 5410732836, 8)) if s.condition('ne') else 5410732800
    return

def b_142813b00(s):
    # 0x142813b00: movaps xmm3, xmm14
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm14', 16))
    # 0x142813b04: divss xmm3, xmm2
    s.float_op('divss',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x142813b08: mulss xmm1, xmm3
    s.float_op('mulss',('r', 'xmm1', 16),('r', 'xmm3', 16))
    # 0x142813b0c: mulss xmm1, dword ptr [rip + 0x628b10]
    s.float_op('mulss',('r', 'xmm1', 16),('m', None, None, 1, 5417190948, 4))
    # 0x142813b14: movsldup xmm2, xmm3
    s.simd_move('movsldup',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x142813b18: mulps xmm0, xmm2
    s.float_op('mulps',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x142813b1b: mulps xmm0, xmmword ptr [rip + 0x74d53e]
    s.float_op('mulps',('r', 'xmm0', 16),('m', None, None, 1, 5418389600, 16))
    # 0x142813b22: jmp 0x142813b59
    s.pc=s.read(('i', 5410732889, 8))
    return

def b_142813b24(s):
    # 0x142813b24: movss xmm3, dword ptr [rip + 0x623408]
    s.simd_move('movss',('r', 'xmm3', 16),('m', None, None, 1, 5417168692, 4))
    # 0x142813b2c: divss xmm3, xmm2
    s.float_op('divss',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x142813b30: mulss xmm1, xmm3
    s.float_op('mulss',('r', 'xmm1', 16),('r', 'xmm3', 16))
    # 0x142813b34: mulss xmm1, dword ptr [rip + 0x628ae8]
    s.float_op('mulss',('r', 'xmm1', 16),('m', None, None, 1, 5417190948, 4))
    # 0x142813b3c: mulss xmm1, dword ptr [rip + 0x62340c]
    s.float_op('mulss',('r', 'xmm1', 16),('m', None, None, 1, 5417168720, 4))
    # 0x142813b44: movsldup xmm2, xmm3
    s.simd_move('movsldup',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x142813b48: mulps xmm0, xmm2
    s.float_op('mulps',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x142813b4b: mulps xmm0, xmmword ptr [rip + 0x74d50e]
    s.float_op('mulps',('r', 'xmm0', 16),('m', None, None, 1, 5418389600, 16))
    # 0x142813b52: mulps xmm0, xmmword ptr [rip + 0x623407]
    s.float_op('mulps',('r', 'xmm0', 16),('m', None, None, 1, 5417168736, 16))
    s.pc=5410732889
    return

def b_142813b59(s):
    # 0x142813b59: subss xmm13, xmm1
    s.float_op('subss',('r', 'xmm13', 16),('r', 'xmm1', 16))
    # 0x142813b5e: subps xmm12, xmm0
    s.float_op('subps',('r', 'xmm12', 16),('r', 'xmm0', 16))
    # 0x142813b62: addss xmm11, xmm1
    s.float_op('addss',('r', 'xmm11', 16),('r', 'xmm1', 16))
    # 0x142813b67: addps xmm10, xmm0
    s.float_op('addps',('r', 'xmm10', 16),('r', 'xmm0', 16))
    s.pc=5410732907
    return

def b_142813b6b(s):
    # 0x142813b6b: movaps xmm8, xmm10
    s.simd_move('movaps',('r', 'xmm8', 16),('r', 'xmm10', 16))
    # 0x142813b6f: subps xmm8, xmm12
    s.float_op('subps',('r', 'xmm8', 16),('r', 'xmm12', 16))
    # 0x142813b73: movaps xmm6, xmm11
    s.simd_move('movaps',('r', 'xmm6', 16),('r', 'xmm11', 16))
    # 0x142813b77: subss xmm6, xmm13
    s.float_op('subss',('r', 'xmm6', 16),('r', 'xmm13', 16))
    # 0x142813b7c: movaps xmm0, xmm6
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x142813b7f: mulss xmm0, xmm6
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x142813b83: movaps xmm1, xmm8
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm8', 16))
    # 0x142813b87: mulps xmm1, xmm8
    s.float_op('mulps',('r', 'xmm1', 16),('r', 'xmm8', 16))
    # 0x142813b8b: addss xmm0, xmm1
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x142813b8f: movshdup xmm1, xmm1
    s.simd_move('movshdup',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x142813b93: addss xmm1, xmm0
    s.float_op('addss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142813b97: xorps xmm7, xmm7
    s.float_op('xorps',('r', 'xmm7', 16),('r', 'xmm7', 16))
    # 0x142813b9a: sqrtss xmm7, xmm1
    s.float_op('sqrtss',('r', 'xmm7', 16),('r', 'xmm1', 16))
    # 0x142813b9e: movaps xmm0, xmm7
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm7', 16))
    # 0x142813ba1: divss xmm0, dword ptr [rip + 0x7f86e7]
    s.float_op('divss',('r', 'xmm0', 16),('m', None, None, 1, 5419090576, 4))
    # 0x142813ba9: call 0x142e32b00
    s.push(5410732974)
    s.pc=s.read(('i', 5417151232, 8))
    return

def b_142813bae(s):
    # 0x142813bae: maxss xmm0, dword ptr [rip + 0x623c7a]
    s.float_op('maxss',('r', 'xmm0', 16),('m', None, None, 1, 5417170992, 4))
    # 0x142813bb6: cvttss2si rax, xmm0
    s.write(('r', 'rax', 8),math.trunc(bitsf(s.read(('r', 'xmm0', 16)))) if math.isfinite(bitsf(s.read(('r', 'xmm0', 16)))) and -(1<<63)<=bitsf(s.read(('r', 'xmm0', 16)))<(1<<63) else (1<<63))
    # 0x142813bbb: mov rcx, rax
    s.write(('r', 'rcx', 8),s.read(('r', 'rax', 8)))
    # 0x142813bbe: sar rcx, 0x3f
    s.integer('sar',[('r', 'rcx', 8), ('i', 63, 1)])
    # 0x142813bc2: movaps xmm1, xmm0
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142813bc5: subss xmm1, dword ptr [rip + 0x62335f]
    s.float_op('subss',('r', 'xmm1', 16),('m', None, None, 1, 5417168684, 4))
    # 0x142813bcd: cvttss2si rdx, xmm1
    s.write(('r', 'rdx', 8),math.trunc(bitsf(s.read(('r', 'xmm1', 16)))) if math.isfinite(bitsf(s.read(('r', 'xmm1', 16)))) and -(1<<63)<=bitsf(s.read(('r', 'xmm1', 16)))<(1<<63) else (1<<63))
    # 0x142813bd2: and rdx, rcx
    s.integer('and',[('r', 'rdx', 8), ('r', 'rcx', 8)])
    # 0x142813bd5: or rdx, rax
    s.integer('or',[('r', 'rdx', 8), ('r', 'rax', 8)])
    # 0x142813bd8: xor eax, eax
    s.integer('xor',[('r', 'eax', 4), ('r', 'eax', 4)])
    # 0x142813bda: xorps xmm15, xmm15
    s.float_op('xorps',('r', 'xmm15', 16),('r', 'xmm15', 16))
    # 0x142813bde: ucomiss xmm0, xmm15
    s.compare_float(('r', 'xmm0', 16),('r', 'xmm15', 16))
    # 0x142813be2: cmovae rax, rdx
    s.write(('r', 'rax', 8),s.read(('r', 'rdx', 8))) if s.condition('ae') else None
    # 0x142813be6: ucomiss xmm0, dword ptr [rip + 0x623343]
    s.compare_float(('r', 'xmm0', 16),('m', None, None, 1, 5417168688, 4))
    # 0x142813bed: mov rdx, 0xffffffffffffffff
    s.write(('r', 'rdx', 8),s.read(('i', -1, 8)))
    # 0x142813bf4: cmovbe rdx, rax
    s.write(('r', 'rdx', 8),s.read(('r', 'rax', 8))) if s.condition('be') else None
    # 0x142813bf8: movss xmm2, dword ptr [rip + 0x801550]
    s.simd_move('movss',('r', 'xmm2', 16),('m', None, None, 1, 5419127120, 4))
    # 0x142813c00: divss xmm2, xmm7
    s.float_op('divss',('r', 'xmm2', 16),('r', 'xmm7', 16))
    # 0x142813c04: lea rax, [rip + 0xd89095]
    s.write(('r', 'rax', 8),s.address(('m', None, None, 1, 5424925856, 8)))
    # 0x142813c0b: mov qword ptr [rsp + 0x20], rax
    s.write(('m', 'rsp', None, 1, 32, 8),s.read(('r', 'rax', 8)))
    # 0x142813c10: lea rcx, [rbp + 0x258]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 600, 8)))
    # 0x142813c17: lea r9, [rbp + 0x340]
    s.write(('r', 'r9', 8),s.address(('m', 'rbp', None, 1, 832, 8)))
    # 0x142813c1e: call 0x140de8290
    s.push(5410733091)
    s.pc=s.read(('i', 5383291536, 8))
    return

def b_142813c23(s):
    # 0x142813c23: nop 
    # 0x142813c24: movaps xmmword ptr [rbp + 0x2b0], xmm12
    s.simd_move('movaps',('m', 'rbp', None, 1, 688, 16),('r', 'xmm12', 16))
    # 0x142813c2c: mov r8, qword ptr [rbp + 0x260]
    s.write(('r', 'r8', 8),s.read(('m', 'rbp', None, 1, 608, 8)))
    # 0x142813c33: mov rdi, qword ptr [rbp + 0x268]
    s.write(('r', 'rdi', 8),s.read(('m', 'rbp', None, 1, 616, 8)))
    # 0x142813c3a: movaps xmm1, xmm14
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm14', 16))
    # 0x142813c3e: divss xmm1, xmm7
    s.float_op('divss',('r', 'xmm1', 16),('r', 'xmm7', 16))
    # 0x142813c42: movsldup xmm0, xmm1
    s.simd_move('movsldup',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x142813c46: mulps xmm8, xmm0
    s.float_op('mulps',('r', 'xmm8', 16),('r', 'xmm0', 16))
    # 0x142813c4a: movshdup xmm0, xmm8
    s.simd_move('movshdup',('r', 'xmm0', 16),('r', 'xmm8', 16))
    # 0x142813c4f: movsldup xmm2, xmm8
    s.simd_move('movsldup',('r', 'xmm2', 16),('r', 'xmm8', 16))
    # 0x142813c54: movss xmm2, xmm6
    s.simd_move('movss',('r', 'xmm2', 16),('r', 'xmm6', 16))
    # 0x142813c58: xorps xmm12, xmm12
    s.float_op('xorps',('r', 'xmm12', 16),('r', 'xmm12', 16))
    # 0x142813c5c: movss xmm12, xmm1
    s.simd_move('movss',('r', 'xmm12', 16),('r', 'xmm1', 16))
    # 0x142813c61: mulps xmm12, xmm2
    s.float_op('mulps',('r', 'xmm12', 16),('r', 'xmm2', 16))
    # 0x142813c65: movsd xmm2, qword ptr [rip + 0x74d3d3]
    s.simd_move('movsd',('r', 'xmm2', 16),('m', None, None, 1, 5418389568, 8))
    # 0x142813c6d: mulps xmm2, xmm8
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm8', 16))
    # 0x142813c71: movaps xmm3, xmm0
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm0', 16))
    # 0x142813c74: mulss xmm3, xmm15
    s.float_op('mulss',('r', 'xmm3', 16),('r', 'xmm15', 16))
    # 0x142813c79: movss xmm1, dword ptr [rip + 0x623b6f]
    s.simd_move('movss',('r', 'xmm1', 16),('m', None, None, 1, 5417170928, 4))
    # 0x142813c81: mulss xmm1, xmm12
    s.float_op('mulss',('r', 'xmm1', 16),('r', 'xmm12', 16))
    # 0x142813c86: addss xmm1, xmm3
    s.float_op('addss',('r', 'xmm1', 16),('r', 'xmm3', 16))
    # 0x142813c8a: addps xmm2, xmm12
    s.float_op('addps',('r', 'xmm2', 16),('r', 'xmm12', 16))
    # 0x142813c8e: movaps xmm3, xmm1
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm1', 16))
    # 0x142813c91: mulss xmm3, xmm1
    s.float_op('mulss',('r', 'xmm3', 16),('r', 'xmm1', 16))
    # 0x142813c95: movaps xmm4, xmm2
    s.simd_move('movaps',('r', 'xmm4', 16),('r', 'xmm2', 16))
    # 0x142813c98: mulps xmm4, xmm2
    s.float_op('mulps',('r', 'xmm4', 16),('r', 'xmm2', 16))
    # 0x142813c9b: movshdup xmm5, xmm4
    s.simd_move('movshdup',('r', 'xmm5', 16),('r', 'xmm4', 16))
    # 0x142813c9f: addss xmm5, xmm3
    s.float_op('addss',('r', 'xmm5', 16),('r', 'xmm3', 16))
    # 0x142813ca3: addss xmm5, xmm4
    s.float_op('addss',('r', 'xmm5', 16),('r', 'xmm4', 16))
    # 0x142813ca7: xorps xmm3, xmm3
    s.float_op('xorps',('r', 'xmm3', 16),('r', 'xmm3', 16))
    # 0x142813caa: sqrtss xmm3, xmm5
    s.float_op('sqrtss',('r', 'xmm3', 16),('r', 'xmm5', 16))
    # 0x142813cae: movaps xmm4, xmm14
    s.simd_move('movaps',('r', 'xmm4', 16),('r', 'xmm14', 16))
    # 0x142813cb2: divss xmm4, xmm3
    s.float_op('divss',('r', 'xmm4', 16),('r', 'xmm3', 16))
    # 0x142813cb6: movshdup xmm5, xmm2
    s.simd_move('movshdup',('r', 'xmm5', 16),('r', 'xmm2', 16))
    # 0x142813cba: mulss xmm5, xmm4
    s.float_op('mulss',('r', 'xmm5', 16),('r', 'xmm4', 16))
    # 0x142813cbe: movaps xmm3, xmm8
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm8', 16))
    # 0x142813cc2: subss xmm3, xmm5
    s.float_op('subss',('r', 'xmm3', 16),('r', 'xmm5', 16))
    # 0x142813cc6: xor eax, eax
    s.integer('xor',[('r', 'eax', 4), ('r', 'eax', 4)])
    # 0x142813cc8: ucomiss xmm15, xmm3
    s.compare_float(('r', 'xmm15', 16),('r', 'xmm3', 16))
    # 0x142813ccc: setb cl
    s.write(('r', 'cl', 1),int(s.condition('b')))
    # 0x142813ccf: test rdi, rdi
    s.integer('test',[('r', 'rdi', 8), ('r', 'rdi', 8)])
    # 0x142813cd2: mov qword ptr [rbp + 0x320], r8
    s.write(('m', 'rbp', None, 1, 800, 8),s.read(('r', 'r8', 8)))
    # 0x142813cd9: je 0x142814233
    s.pc=s.read(('i', 5410734643, 8)) if s.condition('e') else 5410733279
    return

def b_142813cdf(s):
    # 0x142813cdf: cmp rdi, 1
    s.integer('cmp',[('r', 'rdi', 8), ('i', 1, 8)])
    # 0x142813ce3: je 0x142814233
    s.pc=s.read(('i', 5410734643, 8)) if s.condition('e') else 5410733289
    return

def b_142813ce9(s):
    # 0x142813ce9: movss dword ptr [rbp + 0x390], xmm7
    s.simd_move('movss',('m', 'rbp', None, 1, 912, 4),('r', 'xmm7', 16))
    # 0x142813cf1: movaps xmmword ptr [rbp + 0x2a0], xmm11
    s.simd_move('movaps',('m', 'rbp', None, 1, 672, 16),('r', 'xmm11', 16))
    # 0x142813cf9: movaps xmmword ptr [rbp + 0x1f0], xmm13
    s.simd_move('movaps',('m', 'rbp', None, 1, 496, 16),('r', 'xmm13', 16))
    # 0x142813d01: mov rdx, qword ptr [rbp + 0x418]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 1048, 8)))
    # 0x142813d08: movss xmm5, dword ptr [rdx + 0x30]
    s.simd_move('movss',('r', 'xmm5', 16),('m', 'rdx', None, 1, 48, 4))
    # 0x142813d0d: movss xmm6, dword ptr [rdx + 0x2c]
    s.simd_move('movss',('r', 'xmm6', 16),('m', 'rdx', None, 1, 44, 4))
    # 0x142813d12: movaps xmmword ptr [rbp + 0x210], xmm5
    s.simd_move('movaps',('m', 'rbp', None, 1, 528, 16),('r', 'xmm5', 16))
    # 0x142813d19: mulss xmm6, xmm5
    s.float_op('mulss',('r', 'xmm6', 16),('r', 'xmm5', 16))
    # 0x142813d1d: movss dword ptr [rbp + 0x360], xmm6
    s.simd_move('movss',('m', 'rbp', None, 1, 864, 4),('r', 'xmm6', 16))
    # 0x142813d25: mulss xmm1, xmm4
    s.float_op('mulss',('r', 'xmm1', 16),('r', 'xmm4', 16))
    # 0x142813d29: mulss xmm2, xmm4
    s.float_op('mulss',('r', 'xmm2', 16),('r', 'xmm4', 16))
    # 0x142813d2d: movaps xmm5, xmm14
    s.simd_move('movaps',('r', 'xmm5', 16),('r', 'xmm14', 16))
    # 0x142813d31: subss xmm5, xmm3
    s.float_op('subss',('r', 'xmm5', 16),('r', 'xmm3', 16))
    # 0x142813d35: xorps xmm6, xmm6
    s.float_op('xorps',('r', 'xmm6', 16),('r', 'xmm6', 16))
    # 0x142813d38: sqrtss xmm6, xmm5
    s.float_op('sqrtss',('r', 'xmm6', 16),('r', 'xmm5', 16))
    # 0x142813d3c: movss xmm7, dword ptr [rip + 0x62320c]
    s.simd_move('movss',('r', 'xmm7', 16),('m', None, None, 1, 5417168720, 4))
    # 0x142813d44: movaps xmm4, xmm7
    s.simd_move('movaps',('r', 'xmm4', 16),('r', 'xmm7', 16))
    # 0x142813d47: divss xmm4, xmm6
    s.float_op('divss',('r', 'xmm4', 16),('r', 'xmm6', 16))
    # 0x142813d4b: movaps xmm6, xmm8
    s.simd_move('movaps',('r', 'xmm6', 16),('r', 'xmm8', 16))
    # 0x142813d4f: movss xmm6, xmm2
    s.simd_move('movss',('r', 'xmm6', 16),('r', 'xmm2', 16))
    # 0x142813d53: addps xmm6, xmmword ptr [rip + 0x801446]
    s.float_op('addps',('r', 'xmm6', 16),('m', None, None, 1, 5419127200, 16))
    # 0x142813d5a: addss xmm0, xmm14
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm14', 16))
    # 0x142813d5f: addss xmm1, xmm12
    s.float_op('addss',('r', 'xmm1', 16),('r', 'xmm12', 16))
    # 0x142813d64: unpcklps xmm5, xmm4
    s.shuffle('unpcklps',('r', 'xmm5', 16),('r', 'xmm4', 16),0)
    # 0x142813d67: movlhps xmm5, xmm6
    s.simd_move('movlhps',('r', 'xmm5', 16),('r', 'xmm6', 16))
    # 0x142813d6a: unpcklps xmm4, xmm1
    s.shuffle('unpcklps',('r', 'xmm4', 16),('r', 'xmm1', 16),0)
    # 0x142813d6d: shufps xmm4, xmm4, 4
    s.shuffle('shufps',('r', 'xmm4', 16),('r', 'xmm4', 16),4)
    # 0x142813d71: mulps xmm4, xmm5
    s.float_op('mulps',('r', 'xmm4', 16),('r', 'xmm5', 16))
    # 0x142813d74: addss xmm3, xmm14
    s.float_op('addss',('r', 'xmm3', 16),('r', 'xmm14', 16))
    # 0x142813d79: xorps xmm5, xmm5
    s.float_op('xorps',('r', 'xmm5', 16),('r', 'xmm5', 16))
    # 0x142813d7c: sqrtss xmm5, xmm3
    s.float_op('sqrtss',('r', 'xmm5', 16),('r', 'xmm3', 16))
    # 0x142813d80: movaps xmm6, xmm7
    s.simd_move('movaps',('r', 'xmm6', 16),('r', 'xmm7', 16))
    # 0x142813d83: divss xmm6, xmm5
    s.float_op('divss',('r', 'xmm6', 16),('r', 'xmm5', 16))
    # 0x142813d87: xorps xmm5, xmm5
    s.float_op('xorps',('r', 'xmm5', 16),('r', 'xmm5', 16))
    # 0x142813d8a: subss xmm5, xmm2
    s.float_op('subss',('r', 'xmm5', 16),('r', 'xmm2', 16))
    # 0x142813d8e: unpcklps xmm1, xmm3
    s.shuffle('unpcklps',('r', 'xmm1', 16),('r', 'xmm3', 16),0)
    # 0x142813d91: movaps xmm2, xmm6
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm6', 16))
    # 0x142813d94: unpcklps xmm2, xmm5
    s.shuffle('unpcklps',('r', 'xmm2', 16),('r', 'xmm5', 16),0)
    # 0x142813d97: movlhps xmm1, xmm2
    s.simd_move('movlhps',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x142813d9a: unpcklps xmm6, xmm0
    s.shuffle('unpcklps',('r', 'xmm6', 16),('r', 'xmm0', 16),0)
    # 0x142813d9d: shufps xmm6, xmm6, 0x10
    s.shuffle('shufps',('r', 'xmm6', 16),('r', 'xmm6', 16),16)
    # 0x142813da1: mulps xmm6, xmm1
    s.float_op('mulps',('r', 'xmm6', 16),('r', 'xmm1', 16))
    # 0x142813da4: mov al, cl
    s.write(('r', 'al', 1),s.read(('r', 'cl', 1)))
    # 0x142813da6: movd xmm0, eax
    s.simd_move('movd',('r', 'xmm0', 16),('r', 'eax', 4))
    # 0x142813daa: pshufd xmm13, xmm0, 0
    s.shuffle('pshufd',('r', 'xmm13', 16),('r', 'xmm0', 16),0)
    # 0x142813db0: pslld xmm13, 0x1f
    s.packed_shift('pslld',('r', 'xmm13', 16),31)
    # 0x142813db6: psrad xmm13, 0x1f
    s.packed_shift('psrad',('r', 'xmm13', 16),31)
    # 0x142813dbc: andps xmm6, xmm13
    s.float_op('andps',('r', 'xmm6', 16),('r', 'xmm13', 16))
    # 0x142813dc0: andnps xmm13, xmm4
    s.float_op('andnps',('r', 'xmm13', 16),('r', 'xmm4', 16))
    # 0x142813dc4: orps xmm13, xmm6
    s.float_op('orps',('r', 'xmm13', 16),('r', 'xmm6', 16))
    # 0x142813dc8: movss xmm9, dword ptr [r8]
    s.simd_move('movss',('r', 'xmm9', 16),('m', 'r8', None, 1, 0, 4))
    # 0x142813dcd: movss xmm6, dword ptr [r8 + 4]
    s.simd_move('movss',('r', 'xmm6', 16),('m', 'r8', None, 1, 4, 4))
    # 0x142813dd3: movss xmm0, dword ptr [r8]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'r8', None, 1, 0, 4))
    # 0x142813dd8: movaps xmmword ptr [rbp + 0x200], xmm0
    s.simd_move('movaps',('m', 'rbp', None, 1, 512, 16),('r', 'xmm0', 16))
    # 0x142813ddf: movaps xmmword ptr [rbp + 0x230], xmm13
    s.simd_move('movaps',('m', 'rbp', None, 1, 560, 16),('r', 'xmm13', 16))
    # 0x142813de7: lea rcx, [rbp + 0x230]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 560, 8)))
    # 0x142813dee: call 0x1424e5b90
    s.push(5410733555)
    s.pc=s.read(('i', 5407398800, 8))
    return

def b_142813df3(s):
    # 0x142813df3: nop 
    # 0x142813df4: mov rsi, rax
    s.write(('r', 'rsi', 8),s.read(('r', 'rax', 8)))
    # 0x142813df7: movss xmm2, dword ptr [rip + 0x623129]
    s.simd_move('movss',('r', 'xmm2', 16),('m', None, None, 1, 5417168680, 4))
    # 0x142813dff: movaps xmm11, xmm2
    s.simd_move('movaps',('r', 'xmm11', 16),('r', 'xmm2', 16))
    # 0x142813e03: subss xmm11, dword ptr [rbp + 0x360]
    s.float_op('subss',('r', 'xmm11', 16),('m', 'rbp', None, 1, 864, 4))
    # 0x142813e0c: movss xmm0, dword ptr [rip + 0x7f5dac]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5419080640, 4))
    # 0x142813e14: addss xmm0, xmm11
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm11', 16))
    # 0x142813e19: divss xmm0, dword ptr [rip + 0xd88db3]
    s.float_op('divss',('r', 'xmm0', 16),('m', None, None, 1, 5424925652, 4))
    # 0x142813e21: xorps xmm1, xmm1
    s.float_op('xorps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x142813e24: maxss xmm1, xmm0
    s.float_op('maxss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142813e28: movaps xmm0, xmm2
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x142813e2b: minss xmm0, xmm1
    s.float_op('minss',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x142813e2f: movaps xmm1, xmm0
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142813e32: mulss xmm1, xmm0
    s.float_op('mulss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142813e36: addss xmm0, xmm0
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x142813e3a: movss xmm14, dword ptr [rip + 0x623a49]
    s.simd_move('movss',('r', 'xmm14', 16),('m', None, None, 1, 5417171084, 4))
    # 0x142813e43: subss xmm14, xmm0
    s.float_op('subss',('r', 'xmm14', 16),('r', 'xmm0', 16))
    # 0x142813e48: mulss xmm14, xmm1
    s.float_op('mulss',('r', 'xmm14', 16),('r', 'xmm1', 16))
    # 0x142813e4d: movaps xmm0, xmm2
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x142813e50: subss xmm0, xmm14
    s.float_op('subss',('r', 'xmm0', 16),('r', 'xmm14', 16))
    # 0x142813e55: mulss xmm0, xmm15
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm15', 16))
    # 0x142813e5a: mulss xmm14, dword ptr [rip + 0x6287a5]
    s.float_op('mulss',('r', 'xmm14', 16),('m', None, None, 1, 5417190920, 4))
    # 0x142813e63: addss xmm14, xmm0
    s.float_op('addss',('r', 'xmm14', 16),('r', 'xmm0', 16))
    # 0x142813e68: addss xmm14, dword ptr [rip + 0x623b1b]
    s.float_op('addss',('r', 'xmm14', 16),('m', None, None, 1, 5417171340, 4))
    # 0x142813e71: subss xmm6, xmm9
    s.float_op('subss',('r', 'xmm6', 16),('r', 'xmm9', 16))
    # 0x142813e76: mulss xmm6, dword ptr [rbp + 0x390]
    s.float_op('mulss',('r', 'xmm6', 16),('m', 'rbp', None, 1, 912, 4))
    # 0x142813e7e: movss xmm0, dword ptr [rip + 0x853b1e]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5419465124, 4))
    # 0x142813e86: mulss xmm0, xmm6
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x142813e8a: movss dword ptr [rbp + 0x230], xmm14
    s.simd_move('movss',('m', 'rbp', None, 1, 560, 4),('r', 'xmm14', 16))
    # 0x142813e93: movss dword ptr [rbp + 0x234], xmm0
    s.simd_move('movss',('m', 'rbp', None, 1, 564, 4),('r', 'xmm0', 16))
    # 0x142813e9b: mov dword ptr [rbp + 0x238], 0x3e19999a
    s.write(('m', 'rbp', None, 1, 568, 4),s.read(('i', 1041865114, 4)))
    # 0x142813ea5: lea rcx, [rbp + 0x230]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 560, 8)))
    # 0x142813eac: call 0x141e3c580
    s.push(5410733745)
    s.pc=s.read(('i', 5400413568, 8))
    return

def b_142813eb1(s):
    # 0x142813eb1: nop 
    # 0x142813eb2: mov rbx, rax
    s.write(('r', 'rbx', 8),s.read(('r', 'rax', 8)))
    # 0x142813eb5: movaps xmm7, xmmword ptr [rip + 0x623a94]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', None, None, 1, 5417171280, 16))
    # 0x142813ebc: subps xmm7, xmmword ptr [rbp + 0x200]
    s.float_op('subps',('r', 'xmm7', 16),('m', 'rbp', None, 1, 512, 16))
    # 0x142813ec3: movss xmm0, dword ptr [rip + 0x7f3acd]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5419071896, 4))
    # 0x142813ecb: mulss xmm0, xmm7
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm7', 16))
    # 0x142813ecf: addss xmm0, xmm9
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm9', 16))
    # 0x142813ed4: call 0x141e3c420
    s.push(5410733785)
    s.pc=s.read(('i', 5400413216, 8))
    return

def b_142813ed9(s):
    # 0x142813ed9: nop 
    # 0x142813eda: mulss xmm11, dword ptr [rip + 0x6272f5]
    s.float_op('mulss',('r', 'xmm11', 16),('m', None, None, 1, 5417185752, 4))
    # 0x142813ee3: movss xmm1, dword ptr [rbp + 0x360]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rbp', None, 1, 864, 4))
    # 0x142813eeb: mulss xmm1, dword ptr [rip + 0x628715]
    s.float_op('mulss',('r', 'xmm1', 16),('m', None, None, 1, 5417190920, 4))
    # 0x142813ef3: addss xmm1, xmm11
    s.float_op('addss',('r', 'xmm1', 16),('r', 'xmm11', 16))
    # 0x142813ef8: movss xmm0, dword ptr [rip + 0x623028]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5417168680, 4))
    # 0x142813f00: movaps xmm4, xmmword ptr [rbp + 0x210]
    s.simd_move('movaps',('r', 'xmm4', 16),('m', 'rbp', None, 1, 528, 16))
    # 0x142813f07: subss xmm0, xmm4
    s.float_op('subss',('r', 'xmm0', 16),('r', 'xmm4', 16))
    # 0x142813f0b: mulss xmm0, dword ptr [rip + 0x623bbd]
    s.float_op('mulss',('r', 'xmm0', 16),('m', None, None, 1, 5417171664, 4))
    # 0x142813f13: mulss xmm4, dword ptr [rip + 0x808c7d]
    s.float_op('mulss',('r', 'xmm4', 16),('m', None, None, 1, 5419158424, 4))
    # 0x142813f1b: addss xmm4, xmm0
    s.float_op('addss',('r', 'xmm4', 16),('r', 'xmm0', 16))
    # 0x142813f1f: addss xmm4, xmm1
    s.float_op('addss',('r', 'xmm4', 16),('r', 'xmm1', 16))
    # 0x142813f23: shufps xmm7, xmm7, 0x40
    s.shuffle('shufps',('r', 'xmm7', 16),('r', 'xmm7', 16),64)
    # 0x142813f27: movss xmm0, dword ptr [rip + 0x6238c1]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5417170928, 4))
    # 0x142813f2f: movaps xmm1, xmm0
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142813f32: movaps xmm3, xmmword ptr [rbp + 0x2b0]
    s.simd_move('movaps',('r', 'xmm3', 16),('m', 'rbp', None, 1, 688, 16))
    # 0x142813f39: shufps xmm1, xmm3, 0xd4
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm3', 16),212)
    # 0x142813f3d: movaps xmm2, xmmword ptr [rbp + 0x1f0]
    s.simd_move('movaps',('r', 'xmm2', 16),('m', 'rbp', None, 1, 496, 16))
    # 0x142813f44: unpcklps xmm2, xmm3
    s.shuffle('unpcklps',('r', 'xmm2', 16),('r', 'xmm3', 16),0)
    # 0x142813f47: shufps xmm2, xmm1, 0x24
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm1', 16),36)
    # 0x142813f4b: mulps xmm2, xmm7
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm7', 16))
    # 0x142813f4e: xorps xmm1, xmm1
    s.float_op('xorps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x142813f51: shufps xmm1, xmm10, 0xd4
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm10', 16),212)
    # 0x142813f56: movaps xmm3, xmmword ptr [rbp + 0x2a0]
    s.simd_move('movaps',('r', 'xmm3', 16),('m', 'rbp', None, 1, 672, 16))
    # 0x142813f5d: unpcklps xmm3, xmm10
    s.shuffle('unpcklps',('r', 'xmm3', 16),('r', 'xmm10', 16),0)
    # 0x142813f61: shufps xmm3, xmm1, 0x24
    s.shuffle('shufps',('r', 'xmm3', 16),('r', 'xmm1', 16),36)
    # 0x142813f65: movss xmm7, dword ptr [rip + 0x622fbb]
    s.simd_move('movss',('r', 'xmm7', 16),('m', None, None, 1, 5417168680, 4))
    # 0x142813f6d: movaps xmm1, xmm7
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm7', 16))
    # 0x142813f70: movlhps xmm1, xmm9
    s.simd_move('movlhps',('r', 'xmm1', 16),('r', 'xmm9', 16))
    # 0x142813f74: shufps xmm9, xmm1, 0x20
    s.shuffle('shufps',('r', 'xmm9', 16),('r', 'xmm1', 16),32)
    # 0x142813f79: mulps xmm9, xmm3
    s.float_op('mulps',('r', 'xmm9', 16),('r', 'xmm3', 16))
    # 0x142813f7d: addps xmm9, xmm2
    s.float_op('addps',('r', 'xmm9', 16),('r', 'xmm2', 16))
    # 0x142813f81: mulss xmm6, dword ptr [rip + 0x622fc7]
    s.float_op('mulss',('r', 'xmm6', 16),('m', None, None, 1, 5417168720, 4))
    # 0x142813f89: movaps xmm1, xmmword ptr [rip + 0x623950]
    s.simd_move('movaps',('r', 'xmm1', 16),('m', None, None, 1, 5417171168, 16))
    # 0x142813f90: movss xmm1, xmm6
    s.simd_move('movss',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x142813f94: shufps xmm0, xmm8, 0xd4
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm8', 16),212)
    # 0x142813f99: movaps xmm2, xmm8
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm8', 16))
    # 0x142813f9d: shufps xmm2, xmm0, 0x20
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm0', 16),32)
    # 0x142813fa1: shufps xmm1, xmm1, 0x40
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm1', 16),64)
    # 0x142813fa5: movss xmm2, xmm12
    s.simd_move('movss',('r', 'xmm2', 16),('r', 'xmm12', 16))
    # 0x142813faa: mulps xmm2, xmm1
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x142813fad: addps xmm2, xmm9
    s.float_op('addps',('r', 'xmm2', 16),('r', 'xmm9', 16))
    # 0x142813fb1: mulss xmm15, xmm4
    s.float_op('mulss',('r', 'xmm15', 16),('r', 'xmm4', 16))
    # 0x142813fb6: unpcklps xmm15, xmm4
    s.shuffle('unpcklps',('r', 'xmm15', 16),('r', 'xmm4', 16),0)
    # 0x142813fba: movq xmm15, xmm15
    s.simd_move('movq',('r', 'xmm15', 16),('r', 'xmm15', 16))
    # 0x142813fbf: shufps xmm15, xmm15, 0xc4
    s.shuffle('shufps',('r', 'xmm15', 16),('r', 'xmm15', 16),196)
    # 0x142813fc4: subps xmm2, xmm15
    s.float_op('subps',('r', 'xmm2', 16),('r', 'xmm15', 16))
    # 0x142813fc8: movaps xmmword ptr [rbp + 0x3d0], xmm2
    s.simd_move('movaps',('m', 'rbp', None, 1, 976, 16),('r', 'xmm2', 16))
    # 0x142813fcf: movabs rcx, 0x7bff00003c000000
    s.write(('r', 'rcx', 8),s.read(('i', 8934860186732986368, 8)))
    # 0x142813fd9: mov qword ptr [rbp + 0x3e0], rcx
    s.write(('m', 'rbp', None, 1, 992, 8),s.read(('r', 'rcx', 8)))
    # 0x142813fe0: mov dword ptr [rbp + 0x3e8], ebx
    s.write(('m', 'rbp', None, 1, 1000, 4),s.read(('r', 'ebx', 4)))
    # 0x142813fe6: shr rbx, 0x20
    s.integer('shr',[('r', 'rbx', 8), ('i', 32, 1)])
    # 0x142813fea: mov word ptr [rbp + 0x3ec], bx
    s.write(('m', 'rbp', None, 1, 1004, 2),s.read(('r', 'bx', 2)))
    # 0x142813ff1: mov word ptr [rbp + 0x3ee], ax
    s.write(('m', 'rbp', None, 1, 1006, 2),s.read(('r', 'ax', 2)))
    # 0x142813ff8: mov qword ptr [rbp + 0x3f0], rsi
    s.write(('m', 'rbp', None, 1, 1008, 8),s.read(('r', 'rsi', 8)))
    # 0x142813fff: mov eax, dword ptr [rbp + 0x3b4]
    s.write(('r', 'eax', 4),s.read(('m', 'rbp', None, 1, 948, 4)))
    # 0x142814005: mov dword ptr [rbp + 0x3f8], eax
    s.write(('m', 'rbp', None, 1, 1016, 4),s.read(('r', 'eax', 4)))
    # 0x14281400b: mov qword ptr [rbp + 0x3fc], 0
    s.write(('m', 'rbp', None, 1, 1020, 8),s.read(('i', 0, 8)))
    # 0x142814016: mov dword ptr [rbp + 0x404], r13d
    s.write(('m', 'rbp', None, 1, 1028, 4),s.read(('r', 'r13d', 4)))
    # 0x14281401d: movabs rax, 0x200000000
    s.write(('r', 'rax', 8),s.read(('i', 8589934592, 8)))
    # 0x142814027: mov qword ptr [rbp + 0x408], rax
    s.write(('m', 'rbp', None, 1, 1032, 8),s.read(('r', 'rax', 8)))
    # 0x14281402e: lea rdx, [rbp + 0x3d0]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 976, 8)))
    # 0x142814035: mov rcx, qword ptr [rbp + 0x568]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 1384, 8)))
    # 0x14281403c: call 0x142816720
    s.push(5410734145)
    s.pc=s.read(('i', 5410744096, 8))
    return

def b_142814041(s):
    # 0x142814041: nop 
    # 0x142814042: inc r13d
    s.integer('inc',[('r', 'r13d', 4)])
    # 0x142814045: cmp rdi, 2
    s.integer('cmp',[('r', 'rdi', 8), ('i', 2, 8)])
    # 0x142814049: je 0x142814233
    s.pc=s.read(('i', 5410734643, 8)) if s.condition('e') else 5410734159
    return

def b_14281404f(s):
    # 0x14281404f: mov rax, qword ptr [rbp + 0x320]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 800, 8)))
    # 0x142814056: lea rcx, [rax + rdi*4]
    s.write(('r', 'rcx', 8),s.address(('m', 'rax', 'rdi', 4, 0, 8)))
    # 0x14281405a: mov qword ptr [rbp + 0x360], rcx
    s.write(('m', 'rbp', None, 1, 864, 8),s.read(('r', 'rcx', 8)))
    # 0x142814061: add rdi, -2
    s.integer('add',[('r', 'rdi', 8), ('i', -2, 8)])
    # 0x142814065: mov r12, rdi
    s.write(('r', 'r12', 8),s.read(('r', 'rdi', 8)))
    # 0x142814068: lea rbx, [rax + 4]
    s.write(('r', 'rbx', 8),s.address(('m', 'rax', None, 1, 4, 8)))
    # 0x14281406c: add rax, 8
    s.integer('add',[('r', 'rax', 8), ('i', 8, 8)])
    # 0x142814070: movaps xmm0, xmmword ptr [rip + 0x63a5d9]
    s.simd_move('movaps',('r', 'xmm0', 16),('m', None, None, 1, 5417264720, 16))
    # 0x142814077: movaps xmm9, xmmword ptr [rbp + 0x1f0]
    s.simd_move('movaps',('r', 'xmm9', 16),('m', 'rbp', None, 1, 496, 16))
    # 0x14281407f: shufps xmm9, xmm0, 0xe4
    s.shuffle('shufps',('r', 'xmm9', 16),('r', 'xmm0', 16),228)
    # 0x142814084: shufps xmm9, xmmword ptr [rbp + 0x2b0], 0x4c
    s.shuffle('shufps',('r', 'xmm9', 16),('m', 'rbp', None, 1, 688, 16),76)
    # 0x14281408d: shufps xmm9, xmm9, 0x78
    s.shuffle('shufps',('r', 'xmm9', 16),('r', 'xmm9', 16),120)
    # 0x142814092: movaps xmm1, xmmword ptr [rbp + 0x2a0]
    s.simd_move('movaps',('r', 'xmm1', 16),('m', 'rbp', None, 1, 672, 16))
    # 0x142814099: shufps xmm1, xmm0, 0xe4
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm0', 16),228)
    # 0x14281409d: shufps xmm1, xmm10, 0x4c
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm10', 16),76)
    # 0x1428140a2: shufps xmm1, xmm1, 0x78
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm1', 16),120)
    # 0x1428140a6: movaps xmm10, xmm1
    s.simd_move('movaps',('r', 'xmm10', 16),('r', 'xmm1', 16))
    # 0x1428140aa: shufps xmm12, xmm7, 0x24
    s.shuffle('shufps',('r', 'xmm12', 16),('r', 'xmm7', 16),36)
    # 0x1428140af: shufps xmm12, xmm8, 0x4c
    s.shuffle('shufps',('r', 'xmm12', 16),('r', 'xmm8', 16),76)
    # 0x1428140b4: shufps xmm12, xmm12, 0x78
    s.shuffle('shufps',('r', 'xmm12', 16),('r', 'xmm12', 16),120)
    # 0x1428140b9: mov edi, 1
    s.write(('r', 'edi', 4),s.read(('i', 1, 4)))
    # 0x1428140be: lea r15, [rbp + 0x230]
    s.write(('r', 'r15', 8),s.address(('m', 'rbp', None, 1, 560, 8)))
    # 0x1428140c5: nop word ptr cs:[rax + rax]
    s.pc=5410734288
    return

def b_1428140d0(s):
    # 0x1428140d0: movss xmm8, dword ptr [rbx]
    s.simd_move('movss',('r', 'xmm8', 16),('m', 'rbx', None, 1, 0, 4))
    # 0x1428140d5: movss xmm6, dword ptr [rbx]
    s.simd_move('movss',('r', 'xmm6', 16),('m', 'rbx', None, 1, 0, 4))
    # 0x1428140d9: mov rbx, rax
    s.write(('r', 'rbx', 8),s.read(('r', 'rax', 8)))
    # 0x1428140dc: movss xmm7, dword ptr [rax]
    s.simd_move('movss',('r', 'xmm7', 16),('m', 'rax', None, 1, 0, 4))
    # 0x1428140e0: subss xmm7, xmm8
    s.float_op('subss',('r', 'xmm7', 16),('r', 'xmm8', 16))
    # 0x1428140e5: mulss xmm7, dword ptr [rbp + 0x390]
    s.float_op('mulss',('r', 'xmm7', 16),('m', 'rbp', None, 1, 912, 4))
    # 0x1428140ed: movaps xmm11, xmm7
    s.simd_move('movaps',('r', 'xmm11', 16),('r', 'xmm7', 16))
    # 0x1428140f1: mulss xmm11, dword ptr [rip + 0x622e56]
    s.float_op('mulss',('r', 'xmm11', 16),('m', None, None, 1, 5417168720, 4))
    # 0x1428140fa: movaps xmmword ptr [rbp + 0x230], xmm13
    s.simd_move('movaps',('m', 'rbp', None, 1, 560, 16),('r', 'xmm13', 16))
    # 0x142814102: mov rcx, r15
    s.write(('r', 'rcx', 8),s.read(('r', 'r15', 8)))
    # 0x142814105: call 0x1424e5b90
    s.push(5410734346)
    s.pc=s.read(('i', 5407398800, 8))
    return

def b_14281410a(s):
    # 0x14281410a: nop 
    # 0x14281410b: mov rsi, rax
    s.write(('r', 'rsi', 8),s.read(('r', 'rax', 8)))
    # 0x14281410e: mulss xmm7, dword ptr [rip + 0x85388e]
    s.float_op('mulss',('r', 'xmm7', 16),('m', None, None, 1, 5419465124, 4))
    # 0x142814116: movss dword ptr [rbp + 0x230], xmm14
    s.simd_move('movss',('m', 'rbp', None, 1, 560, 4),('r', 'xmm14', 16))
    # 0x14281411f: movss dword ptr [rbp + 0x234], xmm7
    s.simd_move('movss',('m', 'rbp', None, 1, 564, 4),('r', 'xmm7', 16))
    # 0x142814127: mov dword ptr [rbp + 0x238], 0x3e19999a
    s.write(('m', 'rbp', None, 1, 568, 4),s.read(('i', 1041865114, 4)))
    # 0x142814131: mov rcx, r15
    s.write(('r', 'rcx', 8),s.read(('r', 'r15', 8)))
    # 0x142814134: call 0x141e3c580
    s.push(5410734393)
    s.pc=s.read(('i', 5400413568, 8))
    return

def b_142814139(s):
    # 0x142814139: nop 
    # 0x14281413a: mov r14, rax
    s.write(('r', 'r14', 8),s.read(('r', 'rax', 8)))
    # 0x14281413d: movsd xmm7, qword ptr [rip + 0xd880bb]
    s.simd_move('movsd',('r', 'xmm7', 16),('m', None, None, 1, 5424923136, 8))
    # 0x142814145: subps xmm7, xmm6
    s.float_op('subps',('r', 'xmm7', 16),('r', 'xmm6', 16))
    # 0x142814148: movaps xmm0, xmm7
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm7', 16))
    # 0x14281414b: mulss xmm0, dword ptr [rip + 0x7f3845]
    s.float_op('mulss',('r', 'xmm0', 16),('m', None, None, 1, 5419071896, 4))
    # 0x142814153: addss xmm8, xmm0
    s.float_op('addss',('r', 'xmm8', 16),('r', 'xmm0', 16))
    # 0x142814158: movaps xmm0, xmm8
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm8', 16))
    # 0x14281415c: call 0x141e3c420
    s.push(5410734433)
    s.pc=s.read(('i', 5400413216, 8))
    return

def b_142814161(s):
    # 0x142814161: nop 
    # 0x142814162: shufps xmm7, xmm7, 0x40
    s.shuffle('shufps',('r', 'xmm7', 16),('r', 'xmm7', 16),64)
    # 0x142814166: mulps xmm7, xmm9
    s.float_op('mulps',('r', 'xmm7', 16),('r', 'xmm9', 16))
    # 0x14281416a: shufps xmm6, xmm6, 0x40
    s.shuffle('shufps',('r', 'xmm6', 16),('r', 'xmm6', 16),64)
    # 0x14281416e: mulps xmm6, xmm10
    s.float_op('mulps',('r', 'xmm6', 16),('r', 'xmm10', 16))
    # 0x142814172: addps xmm6, xmm7
    s.float_op('addps',('r', 'xmm6', 16),('r', 'xmm7', 16))
    # 0x142814175: movaps xmm0, xmmword ptr [rip + 0x7f85e4]
    s.simd_move('movaps',('r', 'xmm0', 16),('m', None, None, 1, 5419091808, 16))
    # 0x14281417c: movss xmm0, xmm11
    s.simd_move('movss',('r', 'xmm0', 16),('r', 'xmm11', 16))
    # 0x142814181: shufps xmm0, xmm0, 0x40
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm0', 16),64)
    # 0x142814185: mulps xmm0, xmm12
    s.float_op('mulps',('r', 'xmm0', 16),('r', 'xmm12', 16))
    # 0x142814189: addps xmm0, xmm6
    s.float_op('addps',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x14281418c: subps xmm0, xmm15
    s.float_op('subps',('r', 'xmm0', 16),('r', 'xmm15', 16))
    # 0x142814190: cmp rdi, r12
    s.integer('cmp',[('r', 'rdi', 8), ('r', 'r12', 8)])
    # 0x142814193: sete cl
    s.write(('r', 'cl', 1),int(s.condition('e')))
    # 0x142814196: or cl, byte ptr [rbp + 0x447]
    s.integer('or',[('r', 'cl', 1), ('m', 'rbp', None, 1, 1095, 1)])
    # 0x14281419c: movzx ecx, cl
    s.write(('r', 'ecx', 4),s.read(('r', 'cl', 1)))
    # 0x14281419f: inc ecx
    s.integer('inc',[('r', 'ecx', 4)])
    # 0x1428141a1: movaps xmmword ptr [rbp + 0x3d0], xmm0
    s.simd_move('movaps',('m', 'rbp', None, 1, 976, 16),('r', 'xmm0', 16))
    # 0x1428141a8: movabs rdx, 0x7bff00003c000000
    s.write(('r', 'rdx', 8),s.read(('i', 8934860186732986368, 8)))
    # 0x1428141b2: mov qword ptr [rbp + 0x3e0], rdx
    s.write(('m', 'rbp', None, 1, 992, 8),s.read(('r', 'rdx', 8)))
    # 0x1428141b9: mov dword ptr [rbp + 0x3e8], r14d
    s.write(('m', 'rbp', None, 1, 1000, 4),s.read(('r', 'r14d', 4)))
    # 0x1428141c0: shr r14, 0x20
    s.integer('shr',[('r', 'r14', 8), ('i', 32, 1)])
    # 0x1428141c4: mov word ptr [rbp + 0x3ec], r14w
    s.write(('m', 'rbp', None, 1, 1004, 2),s.read(('r', 'r14w', 2)))
    # 0x1428141cc: mov word ptr [rbp + 0x3ee], ax
    s.write(('m', 'rbp', None, 1, 1006, 2),s.read(('r', 'ax', 2)))
    # 0x1428141d3: mov qword ptr [rbp + 0x3f0], rsi
    s.write(('m', 'rbp', None, 1, 1008, 8),s.read(('r', 'rsi', 8)))
    # 0x1428141da: mov eax, dword ptr [rbp + 0x3b4]
    s.write(('r', 'eax', 4),s.read(('m', 'rbp', None, 1, 948, 4)))
    # 0x1428141e0: mov dword ptr [rbp + 0x3f8], eax
    s.write(('m', 'rbp', None, 1, 1016, 4),s.read(('r', 'eax', 4)))
    # 0x1428141e6: mov qword ptr [rbp + 0x3fc], 0
    s.write(('m', 'rbp', None, 1, 1020, 8),s.read(('i', 0, 8)))
    # 0x1428141f1: mov dword ptr [rbp + 0x404], r13d
    s.write(('m', 'rbp', None, 1, 1028, 4),s.read(('r', 'r13d', 4)))
    # 0x1428141f8: mov dword ptr [rbp + 0x408], 0
    s.write(('m', 'rbp', None, 1, 1032, 4),s.read(('i', 0, 4)))
    # 0x142814202: mov dword ptr [rbp + 0x40c], ecx
    s.write(('m', 'rbp', None, 1, 1036, 4),s.read(('r', 'ecx', 4)))
    # 0x142814208: mov rcx, qword ptr [rbp + 0x568]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 1384, 8)))
    # 0x14281420f: lea rdx, [rbp + 0x3d0]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 976, 8)))
    # 0x142814216: call 0x142816720
    s.push(5410734619)
    s.pc=s.read(('i', 5410744096, 8))
    return

def b_14281421b(s):
    # 0x14281421b: nop 
    # 0x14281421c: lea rax, [rbx + 4]
    s.write(('r', 'rax', 8),s.address(('m', 'rbx', None, 1, 4, 8)))
    # 0x142814220: inc rdi
    s.integer('inc',[('r', 'rdi', 8)])
    # 0x142814223: inc r13d
    s.integer('inc',[('r', 'r13d', 4)])
    # 0x142814226: cmp rax, qword ptr [rbp + 0x360]
    s.integer('cmp',[('r', 'rax', 8), ('m', 'rbp', None, 1, 864, 8)])
    # 0x14281422d: jne 0x1428140d0
    s.pc=s.read(('i', 5410734288, 8)) if s.condition('ne') else 5410734643
    return

def b_142814233(s):
    # 0x142814233: mov rdx, qword ptr [rbp + 0x258]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 600, 8)))
    # 0x14281423a: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x14281423d: je 0x142814255
    s.pc=s.read(('i', 5410734677, 8)) if s.condition('e') else 5410734655
    return

def b_14281423f(s):
    # 0x14281423f: shl rdx, 2
    s.integer('shl',[('r', 'rdx', 8), ('i', 2, 1)])
    # 0x142814243: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x142814249: mov rcx, qword ptr [rbp + 0x320]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 800, 8)))
    # 0x142814250: call 0x1406abac0
    s.push(5410734677)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_142814255(s):
    # 0x142814255: movss xmm14, dword ptr [rip + 0x622cca]
    s.simd_move('movss',('r', 'xmm14', 16),('m', None, None, 1, 5417168680, 4))
    s.pc=5410734686
    return

def b_14281425e(s):
    # 0x14281425e: mov r10, qword ptr [rbp + 0x20]
    s.write(('r', 'r10', 8),s.read(('m', 'rbp', None, 1, 32, 8)))
    # 0x142814262: mov rcx, qword ptr [rbp + 0x28]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 40, 8)))
    # 0x142814266: lea rdx, [r10 + rcx*8]
    s.write(('r', 'rdx', 8),s.address(('m', 'r10', 'rcx', 8, 0, 8)))
    # 0x14281426a: cmp rcx, 1
    s.integer('cmp',[('r', 'rcx', 8), ('i', 1, 8)])
    # 0x14281426e: adc rcx, -1
    s.integer('adc',[('r', 'rcx', 8), ('i', -1, 8)])
    # 0x142814272: mov rbx, qword ptr [rbp - 0x18]
    s.write(('r', 'rbx', 8),s.read(('m', 'rbp', None, 1, -24, 8)))
    # 0x142814276: mov r8, qword ptr [rbp - 0x10]
    s.write(('r', 'r8', 8),s.read(('m', 'rbp', None, 1, -16, 8)))
    # 0x14281427a: lea r9, [rbx + r8*8]
    s.write(('r', 'r9', 8),s.address(('m', 'rbx', 'r8', 8, 0, 8)))
    # 0x14281427e: cmp r8, 1
    s.integer('cmp',[('r', 'r8', 8), ('i', 1, 8)])
    # 0x142814282: adc r8, -1
    s.integer('adc',[('r', 'r8', 8), ('i', -1, 8)])
    # 0x142814286: mov rax, qword ptr [rbp + 0x418]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 1048, 8)))
    # 0x14281428d: movzx eax, byte ptr [rax + 0x54]
    s.write(('r', 'eax', 4),s.read(('m', 'rax', None, 1, 84, 1)))
    # 0x142814291: mov byte ptr [rbp + 0xe0], al
    s.write(('m', 'rbp', None, 1, 224, 1),s.read(('r', 'al', 1)))
    # 0x142814297: mov r11, qword ptr [rbp - 0x38]
    s.write(('r', 'r11', 8),s.read(('m', 'rbp', None, 1, -56, 8)))
    # 0x14281429b: mov rax, qword ptr [rbp - 0x30]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, -48, 8)))
    # 0x14281429f: mov qword ptr [rbp + 0xb8], rax
    s.write(('m', 'rbp', None, 1, 184, 8),s.read(('r', 'rax', 8)))
    # 0x1428142a6: mov rax, qword ptr [rbp - 0x28]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, -40, 8)))
    # 0x1428142aa: mov qword ptr [rbp + 0xc0], rax
    s.write(('m', 'rbp', None, 1, 192, 8),s.read(('r', 'rax', 8)))
    # 0x1428142b1: movaps xmm0, xmmword ptr [rbp + 0x110]
    s.simd_move('movaps',('r', 'xmm0', 16),('m', 'rbp', None, 1, 272, 16))
    # 0x1428142b8: unpcklps xmm0, xmmword ptr [rbp + 0xf0]
    s.shuffle('unpcklps',('r', 'xmm0', 16),('m', 'rbp', None, 1, 240, 16),0)
    # 0x1428142bf: movaps xmmword ptr [rbp + 0x110], xmm0
    s.simd_move('movaps',('m', 'rbp', None, 1, 272, 16),('r', 'xmm0', 16))
    # 0x1428142c6: mov eax, 1
    s.write(('r', 'eax', 4),s.read(('i', 1, 4)))
    # 0x1428142cb: mov qword ptr [rbp + 0x420], rax
    s.write(('m', 'rbp', None, 1, 1056, 8),s.read(('r', 'rax', 8)))
    # 0x1428142d2: movaps xmm3, xmmword ptr [rip + 0x623547]
    s.simd_move('movaps',('r', 'xmm3', 16),('m', None, None, 1, 5417170976, 16))
    # 0x1428142d9: lea r14, [rbp + 0x3d0]
    s.write(('r', 'r14', 8),s.address(('m', 'rbp', None, 1, 976, 8)))
    # 0x1428142e0: mov qword ptr [rbp + 0x358], r10
    s.write(('m', 'rbp', None, 1, 856, 8),s.read(('r', 'r10', 8)))
    # 0x1428142e7: mov qword ptr [rbp + 0x380], r10
    s.write(('m', 'rbp', None, 1, 896, 8),s.read(('r', 'r10', 8)))
    # 0x1428142ee: mov qword ptr [rbp + 0x3a8], rbx
    s.write(('m', 'rbp', None, 1, 936, 8),s.read(('r', 'rbx', 8)))
    # 0x1428142f5: mov eax, 1
    s.write(('r', 'eax', 4),s.read(('i', 1, 4)))
    # 0x1428142fa: mov qword ptr [rbp + 0x388], rax
    s.write(('m', 'rbp', None, 1, 904, 8),s.read(('r', 'rax', 8)))
    # 0x142814301: mov qword ptr [rbp + 0x430], 0
    s.write(('m', 'rbp', None, 1, 1072, 8),s.read(('i', 0, 8)))
    # 0x14281430c: mov qword ptr [rbp + 0x298], rdx
    s.write(('m', 'rbp', None, 1, 664, 8),s.read(('r', 'rdx', 8)))
    # 0x142814313: mov qword ptr [rbp + 0x318], r9
    s.write(('m', 'rbp', None, 1, 792, 8),s.read(('r', 'r9', 8)))
    # 0x14281431a: mov qword ptr [rbp + 0xc8], r11
    s.write(('m', 'rbp', None, 1, 200, 8),s.read(('r', 'r11', 8)))
    # 0x142814321: test r11b, 1
    s.integer('test',[('r', 'r11b', 1), ('i', 1, 1)])
    # 0x142814325: je 0x142814590
    s.pc=s.read(('i', 5410735504, 8)) if s.condition('e') else 5410734891
    return

def b_14281432b(s):
    # 0x14281432b: mov rax, qword ptr [rbp + 0x358]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 856, 8)))
    # 0x142814332: jmp 0x14281436d
    s.pc=s.read(('i', 5410734957, 8))
    return

def b_142814334(s):
    # 0x142814334: nop word ptr cs:[rax + rax]
    s.pc=5410734912
    return

def b_142814340(s):
    # 0x142814340: mov rbx, rdi
    s.write(('r', 'rbx', 8),s.read(('r', 'rdi', 8)))
    # 0x142814343: mov qword ptr [rbp + 0x430], r8
    s.write(('m', 'rbp', None, 1, 1072, 8),s.read(('r', 'r8', 8)))
    # 0x14281434a: mov qword ptr [rbp + 0x438], rdx
    s.write(('m', 'rbp', None, 1, 1080, 8),s.read(('r', 'rdx', 8)))
    # 0x142814351: mov rdx, qword ptr [rbp + 0x298]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 664, 8)))
    # 0x142814358: mov r9, qword ptr [rbp + 0x318]
    s.write(('r', 'r9', 8),s.read(('m', 'rbp', None, 1, 792, 8)))
    # 0x14281435f: mov rcx, qword ptr [rbp + 0x350]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 848, 8)))
    # 0x142814366: mov r8, qword ptr [rbp + 0x3c8]
    s.write(('r', 'r8', 8),s.read(('m', 'rbp', None, 1, 968, 8)))
    s.pc=5410734957
    return

def b_14281436d(s):
    # 0x14281436d: test rcx, rcx
    s.integer('test',[('r', 'rcx', 8), ('r', 'rcx', 8)])
    # 0x142814370: je 0x142814450
    s.pc=s.read(('i', 5410735184, 8)) if s.condition('e') else 5410734966
    return

def b_142814376(s):
    # 0x142814376: dec rcx
    s.integer('dec',[('r', 'rcx', 8)])
    # 0x142814379: cmp rax, rdx
    s.integer('cmp',[('r', 'rax', 8), ('r', 'rdx', 8)])
    # 0x14281437c: mov qword ptr [rbp + 0x350], rcx
    s.write(('m', 'rbp', None, 1, 848, 8),s.read(('r', 'rcx', 8)))
    # 0x142814383: je 0x142814470
    s.pc=s.read(('i', 5410735216, 8)) if s.condition('e') else 5410734985
    return

def b_142814389(s):
    # 0x142814389: mov rsi, rax
    s.write(('r', 'rsi', 8),s.read(('r', 'rax', 8)))
    # 0x14281438c: add rax, 8
    s.integer('add',[('r', 'rax', 8), ('i', 8, 8)])
    # 0x142814390: cmp qword ptr [rbp + 0x420], 0
    s.integer('cmp',[('m', 'rbp', None, 1, 1056, 8), ('i', 0, 8)])
    # 0x142814398: jne 0x14281452d
    s.pc=s.read(('i', 5410735405, 8)) if s.condition('ne') else 5410735006
    return

def b_14281439e(s):
    # 0x14281439e: mov r10, qword ptr [rbp + 0x380]
    s.write(('r', 'r10', 8),s.read(('m', 'rbp', None, 1, 896, 8)))
    # 0x1428143a5: cmp r10, rdx
    s.integer('cmp',[('r', 'r10', 8), ('r', 'rdx', 8)])
    # 0x1428143a8: je 0x14281447c
    s.pc=s.read(('i', 5410735228, 8)) if s.condition('e') else 5410735022
    return

def b_1428143ae(s):
    # 0x1428143ae: mov rdx, r10
    s.write(('r', 'rdx', 8),s.read(('r', 'r10', 8)))
    # 0x1428143b1: add r10, 8
    s.integer('add',[('r', 'r10', 8), ('i', 8, 8)])
    # 0x1428143b5: mov qword ptr [rbp + 0x380], r10
    s.write(('m', 'rbp', None, 1, 896, 8),s.read(('r', 'r10', 8)))
    # 0x1428143bc: test r8, r8
    s.integer('test',[('r', 'r8', 8), ('r', 'r8', 8)])
    # 0x1428143bf: je 0x1428144e4
    s.pc=s.read(('i', 5410735332, 8)) if s.condition('e') else 5410735045
    return

def b_1428143c5(s):
    # 0x1428143c5: dec r8
    s.integer('dec',[('r', 'r8', 8)])
    # 0x1428143c8: cmp rbx, r9
    s.integer('cmp',[('r', 'rbx', 8), ('r', 'r9', 8)])
    # 0x1428143cb: mov qword ptr [rbp + 0x3c8], r8
    s.write(('m', 'rbp', None, 1, 968, 8),s.read(('r', 'r8', 8)))
    # 0x1428143d2: je 0x1428144ff
    s.pc=s.read(('i', 5410735359, 8)) if s.condition('e') else 5410735064
    return

def b_1428143d8(s):
    # 0x1428143d8: lea rdi, [rbx + 8]
    s.write(('r', 'rdi', 8),s.address(('m', 'rbx', None, 1, 8, 8)))
    # 0x1428143dc: cmp qword ptr [rbp + 0x388], 0
    s.integer('cmp',[('m', 'rbp', None, 1, 904, 8), ('i', 0, 8)])
    # 0x1428143e4: mov rcx, qword ptr [rbp + 0x430]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 1072, 8)))
    # 0x1428143eb: jne 0x14281455c
    s.pc=s.read(('i', 5410735452, 8)) if s.condition('ne') else 5410735089
    return

def b_1428143f1(s):
    # 0x1428143f1: mov r8, qword ptr [rbp + 0x3a8]
    s.write(('r', 'r8', 8),s.read(('m', 'rbp', None, 1, 936, 8)))
    # 0x1428143f8: cmp r8, r9
    s.integer('cmp',[('r', 'r8', 8), ('r', 'r9', 8)])
    # 0x1428143fb: je 0x14281450f
    s.pc=s.read(('i', 5410735375, 8)) if s.condition('e') else 5410735105
    return

def b_142814401(s):
    # 0x142814401: mov r9, r8
    s.write(('r', 'r9', 8),s.read(('r', 'r8', 8)))
    s.pc=5410735108
    return

def b_142814404(s):
    # 0x142814404: lea r8, [r9 + 8]
    s.write(('r', 'r8', 8),s.address(('m', 'r9', None, 1, 8, 8)))
    # 0x142814408: mov qword ptr [rbp + 0x3a8], r8
    s.write(('m', 'rbp', None, 1, 936, 8),s.read(('r', 'r8', 8)))
    # 0x14281440f: lea r8, [rcx + 1]
    s.write(('r', 'r8', 8),s.address(('m', 'rcx', None, 1, 1, 8)))
    # 0x142814413: mov qword ptr [rbp + 0x428], rsi
    s.write(('m', 'rbp', None, 1, 1064, 8),s.read(('r', 'rsi', 8)))
    # 0x14281441a: mov qword ptr [rbp + 0x420], 0
    s.write(('m', 'rbp', None, 1, 1056, 8),s.read(('i', 0, 8)))
    # 0x142814425: mov qword ptr [rbp + 0x388], 0
    s.write(('m', 'rbp', None, 1, 904, 8),s.read(('i', 0, 8)))
    # 0x142814430: mov qword ptr [rbp + 0x3c0], rcx
    s.write(('m', 'rbp', None, 1, 960, 8),s.read(('r', 'rcx', 8)))
    # 0x142814437: mov qword ptr [rbp + 0x3b8], rbx
    s.write(('m', 'rbp', None, 1, 952, 8),s.read(('r', 'rbx', 8)))
    # 0x14281443e: lea r10, [rbp + 0x1c0]
    s.write(('r', 'r10', 8),s.address(('m', 'rbp', None, 1, 448, 8)))
    # 0x142814445: jmp 0x1428144ab
    s.pc=s.read(('i', 5410735275, 8))
    return

def b_142814447(s):
    # 0x142814447: nop word ptr [rax + rax]
    s.pc=5410735184
    return

def b_142814450(s):
    # 0x142814450: mov qword ptr [rbp + 0x3c8], r8
    s.write(('m', 'rbp', None, 1, 968, 8),s.read(('r', 'r8', 8)))
    # 0x142814457: mov qword ptr [rbp + 0x350], 0
    s.write(('m', 'rbp', None, 1, 848, 8),s.read(('i', 0, 8)))
    # 0x142814462: jmp 0x142814490
    s.pc=s.read(('i', 5410735248, 8))
    return

def b_142814464(s):
    # 0x142814464: nop word ptr cs:[rax + rax]
    s.pc=5410735216
    return

def b_142814470(s):
    # 0x142814470: mov qword ptr [rbp + 0x3c8], r8
    s.write(('m', 'rbp', None, 1, 968, 8),s.read(('r', 'r8', 8)))
    # 0x142814477: mov rax, rdx
    s.write(('r', 'rax', 8),s.read(('r', 'rdx', 8)))
    # 0x14281447a: jmp 0x142814490
    s.pc=s.read(('i', 5410735248, 8))
    return

def b_14281447c(s):
    # 0x14281447c: mov qword ptr [rbp + 0x3c8], r8
    s.write(('m', 'rbp', None, 1, 968, 8),s.read(('r', 'r8', 8)))
    s.pc=5410735235
    return

def b_142814483(s):
    # 0x142814483: mov qword ptr [rbp + 0x420], 0
    s.write(('m', 'rbp', None, 1, 1056, 8),s.read(('i', 0, 8)))
    # 0x14281448e: nop 
    s.pc=5410735248
    return

def b_142814490(s):
    # 0x142814490: mov rdi, rbx
    s.write(('r', 'rdi', 8),s.read(('r', 'rbx', 8)))
    s.pc=5410735251
    return

def b_142814493(s):
    # 0x142814493: mov r8, qword ptr [rbp + 0x430]
    s.write(('r', 'r8', 8),s.read(('m', 'rbp', None, 1, 1072, 8)))
    s.pc=5410735258
    return

def b_14281449a(s):
    # 0x14281449a: mov rdx, qword ptr [rbp + 0x438]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 1080, 8)))
    # 0x1428144a1: lea r10, [rbp + 0x428]
    s.write(('r', 'r10', 8),s.address(('m', 'rbp', None, 1, 1064, 8)))
    # 0x1428144a8: xor r9d, r9d
    s.integer('xor',[('r', 'r9d', 4), ('r', 'r9d', 4)])
    s.pc=5410735275
    return

def b_1428144ab(s):
    # 0x1428144ab: mov qword ptr [r10], r9
    s.write(('m', 'r10', None, 1, 0, 8),s.read(('r', 'r9', 8)))
    # 0x1428144ae: mov rsi, qword ptr [rbp + 0x428]
    s.write(('r', 'rsi', 8),s.read(('m', 'rbp', None, 1, 1064, 8)))
    # 0x1428144b5: test rsi, rsi
    s.integer('test',[('r', 'rsi', 8), ('r', 'rsi', 8)])
    # 0x1428144b8: mov rcx, qword ptr [rbp + 0x3c0]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 960, 8)))
    # 0x1428144bf: je 0x142815af6
    s.pc=s.read(('i', 5410740982, 8)) if s.condition('e') else 5410735301
    return

def b_1428144c5(s):
    # 0x1428144c5: cmp qword ptr [rbp + 0xb8], rcx
    s.integer('cmp',[('m', 'rbp', None, 1, 184, 8), ('r', 'rcx', 8)])
    # 0x1428144cc: je 0x142814340
    s.pc=s.read(('i', 5410734912, 8)) if s.condition('e') else 5410735314
    return

def b_1428144d2(s):
    # 0x1428144d2: cmp qword ptr [rbp + 0xc0], rcx
    s.integer('cmp',[('m', 'rbp', None, 1, 192, 8), ('r', 'rcx', 8)])
    # 0x1428144d9: je 0x142814340
    s.pc=s.read(('i', 5410734912, 8)) if s.condition('e') else 5410735327
    return

def b_1428144df(s):
    # 0x1428144df: jmp 0x142814670
    s.pc=s.read(('i', 5410735728, 8))
    return

def b_1428144e4(s):
    # 0x1428144e4: mov qword ptr [rbp + 0x420], 0
    s.write(('m', 'rbp', None, 1, 1056, 8),s.read(('i', 0, 8)))
    # 0x1428144ef: mov rdi, rbx
    s.write(('r', 'rdi', 8),s.read(('r', 'rbx', 8)))
    # 0x1428144f2: mov qword ptr [rbp + 0x3c8], 0
    s.write(('m', 'rbp', None, 1, 968, 8),s.read(('i', 0, 8)))
    # 0x1428144fd: jmp 0x142814493
    s.pc=s.read(('i', 5410735251, 8))
    return

def b_1428144ff(s):
    # 0x1428144ff: mov qword ptr [rbp + 0x420], 0
    s.write(('m', 'rbp', None, 1, 1056, 8),s.read(('i', 0, 8)))
    # 0x14281450a: mov rdi, r9
    s.write(('r', 'rdi', 8),s.read(('r', 'r9', 8)))
    # 0x14281450d: jmp 0x142814493
    s.pc=s.read(('i', 5410735251, 8))
    return

def b_14281450f(s):
    # 0x14281450f: mov qword ptr [rbp + 0x420], 0
    s.write(('m', 'rbp', None, 1, 1056, 8),s.read(('i', 0, 8)))
    s.pc=5410735386
    return

def b_14281451a(s):
    # 0x14281451a: mov qword ptr [rbp + 0x388], 0
    s.write(('m', 'rbp', None, 1, 904, 8),s.read(('i', 0, 8)))
    # 0x142814525: mov r8, rcx
    s.write(('r', 'r8', 8),s.read(('r', 'rcx', 8)))
    # 0x142814528: jmp 0x14281449a
    s.pc=s.read(('i', 5410735258, 8))
    return

def b_14281452d(s):
    # 0x14281452d: mov rcx, rdx
    s.write(('r', 'rcx', 8),s.read(('r', 'rdx', 8)))
    # 0x142814530: mov r10, qword ptr [rbp + 0x380]
    s.write(('r', 'r10', 8),s.read(('m', 'rbp', None, 1, 896, 8)))
    # 0x142814537: sub rcx, r10
    s.integer('sub',[('r', 'rcx', 8), ('r', 'r10', 8)])
    # 0x14281453a: cmp rcx, 8
    s.integer('cmp',[('r', 'rcx', 8), ('i', 8, 8)])
    # 0x14281453e: jbe 0x142814549
    s.pc=s.read(('i', 5410735433, 8)) if s.condition('be') else 5410735424
    return

def b_142814540(s):
    # 0x142814540: add r10, 8
    s.integer('add',[('r', 'r10', 8), ('i', 8, 8)])
    # 0x142814544: jmp 0x1428143ae
    s.pc=s.read(('i', 5410735022, 8))
    return

def b_142814549(s):
    # 0x142814549: mov qword ptr [rbp + 0x3c8], r8
    s.write(('m', 'rbp', None, 1, 968, 8),s.read(('r', 'r8', 8)))
    # 0x142814550: mov qword ptr [rbp + 0x380], rdx
    s.write(('m', 'rbp', None, 1, 896, 8),s.read(('r', 'rdx', 8)))
    # 0x142814557: jmp 0x142814483
    s.pc=s.read(('i', 5410735235, 8))
    return

def b_14281455c(s):
    # 0x14281455c: mov r8, r9
    s.write(('r', 'r8', 8),s.read(('r', 'r9', 8)))
    # 0x14281455f: mov r10, qword ptr [rbp + 0x3a8]
    s.write(('r', 'r10', 8),s.read(('m', 'rbp', None, 1, 936, 8)))
    # 0x142814566: sub r8, r10
    s.integer('sub',[('r', 'r8', 8), ('r', 'r10', 8)])
    # 0x142814569: cmp r8, 8
    s.integer('cmp',[('r', 'r8', 8), ('i', 8, 8)])
    # 0x14281456d: jbe 0x14281457b
    s.pc=s.read(('i', 5410735483, 8)) if s.condition('be') else 5410735471
    return

def b_14281456f(s):
    # 0x14281456f: add r10, 8
    s.integer('add',[('r', 'r10', 8), ('i', 8, 8)])
    # 0x142814573: mov r9, r10
    s.write(('r', 'r9', 8),s.read(('r', 'r10', 8)))
    # 0x142814576: jmp 0x142814404
    s.pc=s.read(('i', 5410735108, 8))
    return

def b_14281457b(s):
    # 0x14281457b: mov qword ptr [rbp + 0x420], 0
    s.write(('m', 'rbp', None, 1, 1056, 8),s.read(('i', 0, 8)))
    # 0x142814586: mov qword ptr [rbp + 0x3a8], r9
    s.write(('m', 'rbp', None, 1, 936, 8),s.read(('r', 'r9', 8)))
    # 0x14281458d: jmp 0x14281451a
    s.pc=s.read(('i', 5410735386, 8))
    return

def b_14281458f(s):
    # 0x14281458f: nop 
    s.pc=5410735504
    return

def b_142814590(s):
    # 0x142814590: test rcx, rcx
    s.integer('test',[('r', 'rcx', 8), ('r', 'rcx', 8)])
    # 0x142814593: mov rax, qword ptr [rbp + 0x358]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 856, 8)))
    # 0x14281459a: je 0x14281468d
    s.pc=s.read(('i', 5410735757, 8)) if s.condition('e') else 5410735520
    return

def b_1428145a0(s):
    # 0x1428145a0: dec rcx
    s.integer('dec',[('r', 'rcx', 8)])
    # 0x1428145a3: cmp rax, rdx
    s.integer('cmp',[('r', 'rax', 8), ('r', 'rdx', 8)])
    # 0x1428145a6: mov qword ptr [rbp + 0x350], rcx
    s.write(('m', 'rbp', None, 1, 848, 8),s.read(('r', 'rcx', 8)))
    # 0x1428145ad: je 0x1428146a1
    s.pc=s.read(('i', 5410735777, 8)) if s.condition('e') else 5410735539
    return

def b_1428145b3(s):
    # 0x1428145b3: add rax, 8
    s.integer('add',[('r', 'rax', 8), ('i', 8, 8)])
    # 0x1428145b7: cmp qword ptr [rbp + 0x420], 0
    s.integer('cmp',[('m', 'rbp', None, 1, 1056, 8), ('i', 0, 8)])
    # 0x1428145bf: jne 0x1428159ef
    s.pc=s.read(('i', 5410740719, 8)) if s.condition('ne') else 5410735557
    return

def b_1428145c5(s):
    # 0x1428145c5: mov r10, qword ptr [rbp + 0x380]
    s.write(('r', 'r10', 8),s.read(('m', 'rbp', None, 1, 896, 8)))
    # 0x1428145cc: cmp r10, rdx
    s.integer('cmp',[('r', 'r10', 8), ('r', 'rdx', 8)])
    # 0x1428145cf: je 0x1428146ad
    s.pc=s.read(('i', 5410735789, 8)) if s.condition('e') else 5410735573
    return

def b_1428145d5(s):
    # 0x1428145d5: mov rdx, r10
    s.write(('r', 'rdx', 8),s.read(('r', 'r10', 8)))
    # 0x1428145d8: lea r10, [rdx + 8]
    s.write(('r', 'r10', 8),s.address(('m', 'rdx', None, 1, 8, 8)))
    # 0x1428145dc: mov qword ptr [rbp + 0x380], r10
    s.write(('m', 'rbp', None, 1, 896, 8),s.read(('r', 'r10', 8)))
    # 0x1428145e3: test r8, r8
    s.integer('test',[('r', 'r8', 8), ('r', 'r8', 8)])
    # 0x1428145e6: je 0x142815a2f
    s.pc=s.read(('i', 5410740783, 8)) if s.condition('e') else 5410735596
    return

def b_1428145ec(s):
    # 0x1428145ec: dec r8
    s.integer('dec',[('r', 'r8', 8)])
    # 0x1428145ef: cmp rbx, r9
    s.integer('cmp',[('r', 'rbx', 8), ('r', 'r9', 8)])
    # 0x1428145f2: mov qword ptr [rbp + 0x3c8], r8
    s.write(('m', 'rbp', None, 1, 968, 8),s.read(('r', 'r8', 8)))
    # 0x1428145f9: je 0x1428159be
    s.pc=s.read(('i', 5410740670, 8)) if s.condition('e') else 5410735615
    return

def b_1428145ff(s):
    # 0x1428145ff: lea rdi, [rbx + 8]
    s.write(('r', 'rdi', 8),s.address(('m', 'rbx', None, 1, 8, 8)))
    # 0x142814603: cmp qword ptr [rbp + 0x388], 0
    s.integer('cmp',[('m', 'rbp', None, 1, 904, 8), ('i', 0, 8)])
    # 0x14281460b: mov rcx, qword ptr [rbp + 0x430]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 1072, 8)))
    # 0x142814612: jne 0x142815a60
    s.pc=s.read(('i', 5410740832, 8)) if s.condition('ne') else 5410735640
    return

def b_142814618(s):
    # 0x142814618: mov r10, qword ptr [rbp + 0x3a8]
    s.write(('r', 'r10', 8),s.read(('m', 'rbp', None, 1, 936, 8)))
    # 0x14281461f: cmp r10, r9
    s.integer('cmp',[('r', 'r10', 8), ('r', 'r9', 8)])
    # 0x142814622: je 0x1428159d1
    s.pc=s.read(('i', 5410740689, 8)) if s.condition('e') else 5410735656
    return

def b_142814628(s):
    # 0x142814628: mov r9, r10
    s.write(('r', 'r9', 8),s.read(('r', 'r10', 8)))
    s.pc=5410735659
    return

def b_14281462b(s):
    # 0x14281462b: lea r8, [r9 + 8]
    s.write(('r', 'r8', 8),s.address(('m', 'r9', None, 1, 8, 8)))
    # 0x14281462f: mov qword ptr [rbp + 0x3a8], r8
    s.write(('m', 'rbp', None, 1, 936, 8),s.read(('r', 'r8', 8)))
    # 0x142814636: lea r8, [rcx + 1]
    s.write(('r', 'r8', 8),s.address(('m', 'rcx', None, 1, 1, 8)))
    # 0x14281463a: mov r10, qword ptr [rbp + 0x358]
    s.write(('r', 'r10', 8),s.read(('m', 'rbp', None, 1, 856, 8)))
    # 0x142814641: mov qword ptr [rbp + 0x428], r10
    s.write(('m', 'rbp', None, 1, 1064, 8),s.read(('r', 'r10', 8)))
    # 0x142814648: mov qword ptr [rbp + 0x420], 0
    s.write(('m', 'rbp', None, 1, 1056, 8),s.read(('i', 0, 8)))
    # 0x142814653: mov qword ptr [rbp + 0x388], 0
    s.write(('m', 'rbp', None, 1, 904, 8),s.read(('i', 0, 8)))
    # 0x14281465e: lea r10, [rbp + 0x1c0]
    s.write(('r', 'r10', 8),s.address(('m', 'rbp', None, 1, 448, 8)))
    # 0x142814665: jmp 0x1428146e9
    s.pc=s.read(('i', 5410735849, 8))
    return

def b_14281466a(s):
    # 0x14281466a: nop word ptr [rax + rax]
    s.pc=5410735728
    return

def b_142814670(s):
    # 0x142814670: mov qword ptr [rbp + 0x358], rax
    s.write(('m', 'rbp', None, 1, 856, 8),s.read(('r', 'rax', 8)))
    # 0x142814677: mov rax, rdi
    s.write(('r', 'rax', 8),s.read(('r', 'rdi', 8)))
    # 0x14281467a: mov qword ptr [rbp + 0x430], r8
    s.write(('m', 'rbp', None, 1, 1072, 8),s.read(('r', 'r8', 8)))
    # 0x142814681: mov qword ptr [rbp + 0x438], rdx
    s.write(('m', 'rbp', None, 1, 1080, 8),s.read(('r', 'rdx', 8)))
    # 0x142814688: jmp 0x14281471b
    s.pc=s.read(('i', 5410735899, 8))
    return

def b_14281468d(s):
    # 0x14281468d: mov qword ptr [rbp + 0x3c8], r8
    s.write(('m', 'rbp', None, 1, 968, 8),s.read(('r', 'r8', 8)))
    # 0x142814694: mov qword ptr [rbp + 0x350], 0
    s.write(('m', 'rbp', None, 1, 848, 8),s.read(('i', 0, 8)))
    # 0x14281469f: jmp 0x1428146c0
    s.pc=s.read(('i', 5410735808, 8))
    return

def b_1428146a1(s):
    # 0x1428146a1: mov qword ptr [rbp + 0x3c8], r8
    s.write(('m', 'rbp', None, 1, 968, 8),s.read(('r', 'r8', 8)))
    # 0x1428146a8: mov rax, rdx
    s.write(('r', 'rax', 8),s.read(('r', 'rdx', 8)))
    # 0x1428146ab: jmp 0x1428146c0
    s.pc=s.read(('i', 5410735808, 8))
    return

def b_1428146ad(s):
    # 0x1428146ad: mov qword ptr [rbp + 0x3c8], r8
    s.write(('m', 'rbp', None, 1, 968, 8),s.read(('r', 'r8', 8)))
    s.pc=5410735796
    return

def b_1428146b4(s):
    # 0x1428146b4: mov qword ptr [rbp + 0x420], 0
    s.write(('m', 'rbp', None, 1, 1056, 8),s.read(('i', 0, 8)))
    # 0x1428146bf: nop 
    s.pc=5410735808
    return

def b_1428146c0(s):
    # 0x1428146c0: mov rdi, rbx
    s.write(('r', 'rdi', 8),s.read(('r', 'rbx', 8)))
    s.pc=5410735811
    return

def b_1428146c3(s):
    # 0x1428146c3: mov r8, qword ptr [rbp + 0x430]
    s.write(('r', 'r8', 8),s.read(('m', 'rbp', None, 1, 1072, 8)))
    s.pc=5410735818
    return

def b_1428146ca(s):
    # 0x1428146ca: mov rcx, qword ptr [rbp + 0x3c0]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 960, 8)))
    # 0x1428146d1: mov rdx, qword ptr [rbp + 0x438]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 1080, 8)))
    # 0x1428146d8: mov rbx, qword ptr [rbp + 0x3b8]
    s.write(('r', 'rbx', 8),s.read(('m', 'rbp', None, 1, 952, 8)))
    # 0x1428146df: lea r10, [rbp + 0x428]
    s.write(('r', 'r10', 8),s.address(('m', 'rbp', None, 1, 1064, 8)))
    # 0x1428146e6: xor r9d, r9d
    s.integer('xor',[('r', 'r9d', 4), ('r', 'r9d', 4)])
    s.pc=5410735849
    return

def b_1428146e9(s):
    # 0x1428146e9: mov qword ptr [rbp + 0x3b8], rbx
    s.write(('m', 'rbp', None, 1, 952, 8),s.read(('r', 'rbx', 8)))
    # 0x1428146f0: mov qword ptr [r10], r9
    s.write(('m', 'r10', None, 1, 0, 8),s.read(('r', 'r9', 8)))
    # 0x1428146f3: mov rsi, qword ptr [rbp + 0x428]
    s.write(('r', 'rsi', 8),s.read(('m', 'rbp', None, 1, 1064, 8)))
    # 0x1428146fa: mov qword ptr [rbp + 0x358], rax
    s.write(('m', 'rbp', None, 1, 856, 8),s.read(('r', 'rax', 8)))
    # 0x142814701: mov rax, rdi
    s.write(('r', 'rax', 8),s.read(('r', 'rdi', 8)))
    # 0x142814704: mov qword ptr [rbp + 0x430], r8
    s.write(('m', 'rbp', None, 1, 1072, 8),s.read(('r', 'r8', 8)))
    # 0x14281470b: mov qword ptr [rbp + 0x438], rdx
    s.write(('m', 'rbp', None, 1, 1080, 8),s.read(('r', 'rdx', 8)))
    # 0x142814712: test rsi, rsi
    s.integer('test',[('r', 'rsi', 8), ('r', 'rsi', 8)])
    # 0x142814715: je 0x142815af6
    s.pc=s.read(('i', 5410740982, 8)) if s.condition('e') else 5410735899
    return

def b_14281471b(s):
    # 0x14281471b: mov rdi, qword ptr [rbp - 0x10]
    s.write(('r', 'rdi', 8),s.read(('m', 'rbp', None, 1, -16, 8)))
    # 0x14281471f: cmp rcx, rdi
    s.integer('cmp',[('r', 'rcx', 8), ('r', 'rdi', 8)])
    # 0x142814722: jae 0x142815de5
    s.pc=s.read(('i', 5410741733, 8)) if s.condition('ae') else 5410735912
    return

def b_142814728(s):
    # 0x142814728: mov qword ptr [rbp + 0x1d8], rax
    s.write(('m', 'rbp', None, 1, 472, 8),s.read(('r', 'rax', 8)))
    # 0x14281472f: mov rbx, qword ptr [rbp + 0x28]
    s.write(('r', 'rbx', 8),s.read(('m', 'rbp', None, 1, 40, 8)))
    # 0x142814733: cmp rcx, rbx
    s.integer('cmp',[('r', 'rcx', 8), ('r', 'rbx', 8)])
    # 0x142814736: jae 0x142815df7
    s.pc=s.read(('i', 5410741751, 8)) if s.condition('ae') else 5410735932
    return

def b_14281473c(s):
    # 0x14281473c: mov rax, qword ptr [rbp + 0x1c0]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 448, 8)))
    # 0x142814743: mov qword ptr [rbp + 0x390], rax
    s.write(('m', 'rbp', None, 1, 912, 8),s.read(('r', 'rax', 8)))
    # 0x14281474a: mov r12, qword ptr [rbp + 0x20]
    s.write(('r', 'r12', 8),s.read(('m', 'rbp', None, 1, 32, 8)))
    # 0x14281474e: mov r15, qword ptr [rbp - 0x18]
    s.write(('r', 'r15', 8),s.read(('m', 'rbp', None, 1, -24, 8)))
    # 0x142814752: movsd xmm0, qword ptr [r15 + rcx*8]
    s.simd_move('movsd',('r', 'xmm0', 16),('m', 'r15', 'rcx', 8, 0, 8))
    # 0x142814758: mov qword ptr [rbp + 0x3c0], rcx
    s.write(('m', 'rbp', None, 1, 960, 8),s.read(('r', 'rcx', 8)))
    # 0x14281475f: movsd xmm1, qword ptr [r12 + rcx*8]
    s.simd_move('movsd',('r', 'xmm1', 16),('m', 'r12', 'rcx', 8, 0, 8))
    # 0x142814765: subps xmm0, xmm1
    s.float_op('subps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x142814768: unpcklps xmm0, xmm0
    s.shuffle('unpcklps',('r', 'xmm0', 16),('r', 'xmm0', 16),0)
    # 0x14281476b: movaps xmm1, xmmword ptr [rbp + 0xd0]
    s.simd_move('movaps',('r', 'xmm1', 16),('m', 'rbp', None, 1, 208, 16))
    # 0x142814772: movaps xmmword ptr [rbp + 0x220], xmm1
    s.simd_move('movaps',('m', 'rbp', None, 1, 544, 16),('r', 'xmm1', 16))
    # 0x142814779: mulps xmm0, xmm1
    s.float_op('mulps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x14281477c: movaps xmm1, xmm0
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x14281477f: unpckhpd xmm1, xmm0
    s.shuffle('unpckhpd',('r', 'xmm1', 16),('r', 'xmm0', 16),0)
    # 0x142814783: addps xmm1, xmm0
    s.float_op('addps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142814786: movaps xmm0, xmm1
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x142814789: mulps xmm0, xmm1
    s.float_op('mulps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x14281478c: movshdup xmm2, xmm0
    s.simd_move('movshdup',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x142814790: addss xmm2, xmm0
    s.float_op('addss',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x142814794: xorps xmm0, xmm0
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x142814797: sqrtss xmm0, xmm2
    s.float_op('sqrtss',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x14281479b: movaps xmm2, xmm14
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm14', 16))
    # 0x14281479f: divss xmm2, xmm0
    s.float_op('divss',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x1428147a3: movaps xmm0, xmm2
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x1428147a6: xorps xmm0, xmm3
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm3', 16))
    # 0x1428147a9: unpcklps xmm0, xmm2
    s.shuffle('unpcklps',('r', 'xmm0', 16),('r', 'xmm2', 16),0)
    # 0x1428147ac: shufps xmm1, xmm1, 0xe1
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm1', 16),225)
    # 0x1428147b0: mulps xmm1, xmm0
    s.float_op('mulps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x1428147b3: movlps qword ptr [rbp + 0x3d0], xmm1
    s.simd_move('movlps',('m', 'rbp', None, 1, 976, 8),('r', 'xmm1', 16))
    # 0x1428147ba: lea rcx, [rbp + 0x74]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 116, 8)))
    # 0x1428147be: mov rdx, r14
    s.write(('r', 'rdx', 8),s.read(('r', 'r14', 8)))
    # 0x1428147c1: call 0x140df4520
    s.push(5410736070)
    s.pc=s.read(('i', 5383341344, 8))
    return

def b_1428147c6(s):
    # 0x1428147c6: nop 
    # 0x1428147c7: mov rax, qword ptr [rbp + 0x3c0]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 960, 8)))
    # 0x1428147ce: movsd xmm0, qword ptr [r12 + rax*8]
    s.simd_move('movsd',('r', 'xmm0', 16),('m', 'r12', 'rax', 8, 0, 8))
    # 0x1428147d4: unpcklps xmm0, xmm0
    s.shuffle('unpcklps',('r', 'xmm0', 16),('r', 'xmm0', 16),0)
    # 0x1428147d7: mulps xmm0, xmmword ptr [rbp + 0x220]
    s.float_op('mulps',('r', 'xmm0', 16),('m', 'rbp', None, 1, 544, 16))
    # 0x1428147de: mov rax, qword ptr [rbp + 0x348]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 840, 8)))
    # 0x1428147e5: movsd xmm7, qword ptr [rax + 8]
    s.simd_move('movsd',('r', 'xmm7', 16),('m', 'rax', None, 1, 8, 8))
    # 0x1428147ea: movaps xmm1, xmm0
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x1428147ed: unpckhpd xmm1, xmm0
    s.shuffle('unpckhpd',('r', 'xmm1', 16),('r', 'xmm0', 16),0)
    # 0x1428147f1: addps xmm1, xmm0
    s.float_op('addps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x1428147f4: addps xmm1, xmm7
    s.float_op('addps',('r', 'xmm1', 16),('r', 'xmm7', 16))
    # 0x1428147f7: movlps qword ptr [rbp + 0x3d0], xmm1
    s.simd_move('movlps',('m', 'rbp', None, 1, 976, 8),('r', 'xmm1', 16))
    # 0x1428147fe: lea rcx, [rbp + 0x68]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 104, 8)))
    # 0x142814802: mov rdx, r14
    s.write(('r', 'rdx', 8),s.read(('r', 'r14', 8)))
    # 0x142814805: call 0x140df4520
    s.push(5410736138)
    s.pc=s.read(('i', 5383341344, 8))
    return

def b_14281480a(s):
    # 0x14281480a: nop 
    # 0x14281480b: mov rax, qword ptr [rbp + 0x3c0]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 960, 8)))
    # 0x142814812: lea rcx, [rax + 1]
    s.write(('r', 'rcx', 8),s.address(('m', 'rax', None, 1, 1, 8)))
    # 0x142814816: cmp rcx, rbx
    s.integer('cmp',[('r', 'rcx', 8), ('r', 'rbx', 8)])
    # 0x142814819: jae 0x142815e09
    s.pc=s.read(('i', 5410741769, 8)) if s.condition('ae') else 5410736159
    return

def b_14281481f(s):
    # 0x14281481f: cmp rcx, rdi
    s.integer('cmp',[('r', 'rcx', 8), ('r', 'rdi', 8)])
    # 0x142814822: movaps xmm3, xmmword ptr [rip + 0x622ff7]
    s.simd_move('movaps',('r', 'xmm3', 16),('m', None, None, 1, 5417170976, 16))
    # 0x142814829: jae 0x142815e1b
    s.pc=s.read(('i', 5410741787, 8)) if s.condition('ae') else 5410736175
    return

def b_14281482f(s):
    # 0x14281482f: movss xmm6, dword ptr [rbp + 0x74]
    s.simd_move('movss',('r', 'xmm6', 16),('m', 'rbp', None, 1, 116, 4))
    # 0x142814834: movsd xmm8, qword ptr [rbp + 0x78]
    s.simd_move('movsd',('r', 'xmm8', 16),('m', 'rbp', None, 1, 120, 8))
    # 0x14281483a: movss xmm9, dword ptr [rbp + 0x68]
    s.simd_move('movss',('r', 'xmm9', 16),('m', 'rbp', None, 1, 104, 4))
    # 0x142814840: mulss xmm9, xmm6
    s.float_op('mulss',('r', 'xmm9', 16),('r', 'xmm6', 16))
    # 0x142814845: movsd xmm10, qword ptr [rbp + 0x6c]
    s.simd_move('movsd',('r', 'xmm10', 16),('m', 'rbp', None, 1, 108, 8))
    # 0x14281484b: movsd xmm0, qword ptr [r12 + rax*8 + 8]
    s.simd_move('movsd',('r', 'xmm0', 16),('m', 'r12', 'rax', 8, 8, 8))
    # 0x142814852: movsd xmm1, qword ptr [r15 + rax*8 + 8]
    s.simd_move('movsd',('r', 'xmm1', 16),('m', 'r15', 'rax', 8, 8, 8))
    # 0x142814859: subps xmm0, xmm1
    s.float_op('subps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x14281485c: unpcklps xmm0, xmm0
    s.shuffle('unpcklps',('r', 'xmm0', 16),('r', 'xmm0', 16),0)
    # 0x14281485f: mulps xmm0, xmmword ptr [rbp + 0x220]
    s.float_op('mulps',('r', 'xmm0', 16),('m', 'rbp', None, 1, 544, 16))
    # 0x142814866: movaps xmm1, xmm0
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142814869: unpckhpd xmm1, xmm0
    s.shuffle('unpckhpd',('r', 'xmm1', 16),('r', 'xmm0', 16),0)
    # 0x14281486d: addps xmm1, xmm0
    s.float_op('addps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142814870: movaps xmm0, xmm1
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x142814873: mulps xmm0, xmm1
    s.float_op('mulps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x142814876: movshdup xmm2, xmm0
    s.simd_move('movshdup',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x14281487a: addss xmm2, xmm0
    s.float_op('addss',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x14281487e: xorps xmm0, xmm0
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x142814881: sqrtss xmm0, xmm2
    s.float_op('sqrtss',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x142814885: movaps xmm2, xmm14
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm14', 16))
    # 0x142814889: divss xmm2, xmm0
    s.float_op('divss',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x14281488d: movaps xmm0, xmm2
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x142814890: xorps xmm0, xmm3
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm3', 16))
    # 0x142814893: unpcklps xmm0, xmm2
    s.shuffle('unpcklps',('r', 'xmm0', 16),('r', 'xmm2', 16),0)
    # 0x142814896: shufps xmm1, xmm1, 0xe1
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm1', 16),225)
    # 0x14281489a: mulps xmm1, xmm0
    s.float_op('mulps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x14281489d: movlps qword ptr [rbp + 0x3d0], xmm1
    s.simd_move('movlps',('m', 'rbp', None, 1, 976, 8),('r', 'xmm1', 16))
    # 0x1428148a4: lea rcx, [rbp + 0x5c]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 92, 8)))
    # 0x1428148a8: mov rdx, r14
    s.write(('r', 'rdx', 8),s.read(('r', 'r14', 8)))
    # 0x1428148ab: call 0x140df4520
    s.push(5410736304)
    s.pc=s.read(('i', 5383341344, 8))
    return

def b_1428148b0(s):
    # 0x1428148b0: nop 
    # 0x1428148b1: mov rax, qword ptr [rbp + 0x3c0]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 960, 8)))
    # 0x1428148b8: movsd xmm0, qword ptr [r12 + rax*8 + 8]
    s.simd_move('movsd',('r', 'xmm0', 16),('m', 'r12', 'rax', 8, 8, 8))
    # 0x1428148bf: unpcklps xmm0, xmm0
    s.shuffle('unpcklps',('r', 'xmm0', 16),('r', 'xmm0', 16),0)
    # 0x1428148c2: mulps xmm0, xmmword ptr [rbp + 0x220]
    s.float_op('mulps',('r', 'xmm0', 16),('m', 'rbp', None, 1, 544, 16))
    # 0x1428148c9: movaps xmm1, xmm0
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x1428148cc: unpckhpd xmm1, xmm0
    s.shuffle('unpckhpd',('r', 'xmm1', 16),('r', 'xmm0', 16),0)
    # 0x1428148d0: addps xmm1, xmm0
    s.float_op('addps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x1428148d3: addps xmm7, xmm1
    s.float_op('addps',('r', 'xmm7', 16),('r', 'xmm1', 16))
    # 0x1428148d6: movlps qword ptr [rbp + 0x3d0], xmm7
    s.simd_move('movlps',('m', 'rbp', None, 1, 976, 8),('r', 'xmm7', 16))
    # 0x1428148dd: lea rcx, [rbp + 0x50]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 80, 8)))
    # 0x1428148e1: mov rdx, r14
    s.write(('r', 'rdx', 8),s.read(('r', 'r14', 8)))
    # 0x1428148e4: call 0x140df4520
    s.push(5410736361)
    s.pc=s.read(('i', 5383341344, 8))
    return

def b_1428148e9(s):
    # 0x1428148e9: nop 
    # 0x1428148ea: mulps xmm10, xmm8
    s.float_op('mulps',('r', 'xmm10', 16),('r', 'xmm8', 16))
    # 0x1428148ee: addss xmm9, xmm10
    s.float_op('addss',('r', 'xmm9', 16),('r', 'xmm10', 16))
    # 0x1428148f3: movshdup xmm0, xmm10
    s.simd_move('movshdup',('r', 'xmm0', 16),('r', 'xmm10', 16))
    # 0x1428148f8: addss xmm0, xmm9
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm9', 16))
    # 0x1428148fd: movss xmm4, dword ptr [rip + 0xaf7c0b]
    s.simd_move('movss',('r', 'xmm4', 16),('m', None, None, 1, 5422236944, 4))
    # 0x142814905: movaps xmm1, xmm4
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm4', 16))
    # 0x142814908: subss xmm1, xmm0
    s.float_op('subss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x14281490c: movlhps xmm6, xmm8
    s.simd_move('movlhps',('r', 'xmm6', 16),('r', 'xmm8', 16))
    # 0x142814910: shufps xmm1, xmm8, 0xd4
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm8', 16),212)
    # 0x142814915: shufps xmm6, xmm1, 0x28
    s.shuffle('shufps',('r', 'xmm6', 16),('r', 'xmm1', 16),40)
    # 0x142814919: movss xmm0, dword ptr [rbp + 0x5c]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rbp', None, 1, 92, 4))
    # 0x14281491e: movsd xmm1, qword ptr [rbp + 0x60]
    s.simd_move('movsd',('r', 'xmm1', 16),('m', 'rbp', None, 1, 96, 8))
    # 0x142814923: movss xmm2, dword ptr [rbp + 0x50]
    s.simd_move('movss',('r', 'xmm2', 16),('m', 'rbp', None, 1, 80, 4))
    # 0x142814928: mulss xmm2, xmm0
    s.float_op('mulss',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x14281492c: movsd xmm3, qword ptr [rbp + 0x54]
    s.simd_move('movsd',('r', 'xmm3', 16),('m', 'rbp', None, 1, 84, 8))
    # 0x142814931: mulps xmm3, xmm1
    s.float_op('mulps',('r', 'xmm3', 16),('r', 'xmm1', 16))
    # 0x142814934: addss xmm2, xmm3
    s.float_op('addss',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x142814938: movshdup xmm3, xmm3
    s.simd_move('movshdup',('r', 'xmm3', 16),('r', 'xmm3', 16))
    # 0x14281493c: addss xmm3, xmm2
    s.float_op('addss',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x142814940: movaps xmm2, xmm4
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm4', 16))
    # 0x142814943: subss xmm2, xmm3
    s.float_op('subss',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x142814947: movlhps xmm0, xmm1
    s.simd_move('movlhps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x14281494a: shufps xmm2, xmm1, 0xd4
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm1', 16),212)
    # 0x14281494e: shufps xmm0, xmm2, 0x28
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm2', 16),40)
    # 0x142814952: movaps xmmword ptr [rbp + 0x230], xmm6
    s.simd_move('movaps',('m', 'rbp', None, 1, 560, 16),('r', 'xmm6', 16))
    # 0x142814959: movaps xmmword ptr [rbp + 0x240], xmm0
    s.simd_move('movaps',('m', 'rbp', None, 1, 576, 16),('r', 'xmm0', 16))
    # 0x142814960: movsd xmm6, qword ptr [rsi]
    s.simd_move('movsd',('r', 'xmm6', 16),('m', 'rsi', None, 1, 0, 8))
    # 0x142814964: mov rax, qword ptr [rbp + 0x438]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 1080, 8)))
    # 0x14281496b: movsd xmm7, qword ptr [rax]
    s.simd_move('movsd',('r', 'xmm7', 16),('m', 'rax', None, 1, 0, 8))
    # 0x14281496f: mov rax, qword ptr [rbp + 0x3b8]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 952, 8)))
    # 0x142814976: movsd xmm8, qword ptr [rax]
    s.simd_move('movsd',('r', 'xmm8', 16),('m', 'rax', None, 1, 0, 8))
    # 0x14281497b: mov rax, qword ptr [rbp + 0x390]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 912, 8)))
    # 0x142814982: movsd xmm9, qword ptr [rax]
    s.simd_move('movsd',('r', 'xmm9', 16),('m', 'rax', None, 1, 0, 8))
    # 0x142814987: mov rcx, qword ptr [rbp + 0x418]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 1048, 8)))
    # 0x14281498e: call 0x140b77a00
    s.push(5410736531)
    s.pc=s.read(('i', 5380733440, 8))
    return

def b_142814993(s):
    # 0x142814993: nop 
    # 0x142814994: addps xmm8, xmm9
    s.float_op('addps',('r', 'xmm8', 16),('r', 'xmm9', 16))
    # 0x142814998: movaps xmm5, xmmword ptr [rip + 0x6225c1]
    s.simd_move('movaps',('r', 'xmm5', 16),('m', None, None, 1, 5417168736, 16))
    # 0x14281499f: mulps xmm8, xmm5
    s.float_op('mulps',('r', 'xmm8', 16),('r', 'xmm5', 16))
    # 0x1428149a3: movaps xmm4, xmmword ptr [rbp + 0x110]
    s.simd_move('movaps',('r', 'xmm4', 16),('m', 'rbp', None, 1, 272, 16))
    # 0x1428149aa: movaps xmm1, xmm4
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm4', 16))
    # 0x1428149ad: subps xmm1, xmm8
    s.float_op('subps',('r', 'xmm1', 16),('r', 'xmm8', 16))
    # 0x1428149b1: mulps xmm1, xmm1
    s.float_op('mulps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x1428149b4: movshdup xmm2, xmm1
    s.simd_move('movshdup',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x1428149b8: addss xmm2, xmm1
    s.float_op('addss',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x1428149bc: xorps xmm3, xmm3
    s.float_op('xorps',('r', 'xmm3', 16),('r', 'xmm3', 16))
    # 0x1428149bf: sqrtss xmm3, xmm2
    s.float_op('sqrtss',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x1428149c3: addps xmm6, xmm7
    s.float_op('addps',('r', 'xmm6', 16),('r', 'xmm7', 16))
    # 0x1428149c6: mulps xmm6, xmm5
    s.float_op('mulps',('r', 'xmm6', 16),('r', 'xmm5', 16))
    # 0x1428149c9: movaps xmm1, xmm4
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm4', 16))
    # 0x1428149cc: subps xmm1, xmm6
    s.float_op('subps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x1428149cf: mulps xmm1, xmm1
    s.float_op('mulps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x1428149d2: movshdup xmm2, xmm1
    s.simd_move('movshdup',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x1428149d6: addss xmm2, xmm1
    s.float_op('addss',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x1428149da: sqrtss xmm2, xmm2
    s.float_op('sqrtss',('r', 'xmm2', 16),('r', 'xmm2', 16))
    # 0x1428149de: movss dword ptr [rsp + 0x20], xmm0
    s.simd_move('movss',('m', 'rsp', None, 1, 32, 4),('r', 'xmm0', 16))
    # 0x1428149e4: lea rcx, [rbp + 0x258]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 600, 8)))
    # 0x1428149eb: lea rdx, [rbp + 0x120]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 288, 8)))
    # 0x1428149f2: call 0x140b768b0
    s.push(5410736631)
    s.pc=s.read(('i', 5380729008, 8))
    return

def b_1428149f7(s):
    # 0x1428149f7: nop 
    # 0x1428149f8: movss xmm0, dword ptr [rbp + 0x288]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rbp', None, 1, 648, 4))
    # 0x142814a00: divss xmm0, dword ptr [rip + 0xd881d0]
    s.float_op('divss',('r', 'xmm0', 16),('m', None, None, 1, 5424925656, 4))
    # 0x142814a08: call 0x142e329c0
    s.push(5410736653)
    s.pc=s.read(('i', 5417150912, 8))
    return

def b_142814a0d(s):
    # 0x142814a0d: maxss xmm0, dword ptr [rip + 0x622e1b]
    s.float_op('maxss',('r', 'xmm0', 16),('m', None, None, 1, 5417170992, 4))
    # 0x142814a15: cvttss2si eax, xmm0
    s.write(('r', 'eax', 4),math.trunc(bitsf(s.read(('r', 'xmm0', 16)))) if math.isfinite(bitsf(s.read(('r', 'xmm0', 16)))) and -(1<<31)<=bitsf(s.read(('r', 'xmm0', 16)))<(1<<31) else (1<<31))
    # 0x142814a19: ucomiss xmm0, dword ptr [rip + 0x6238ac]
    s.compare_float(('r', 'xmm0', 16),('m', None, None, 1, 5417173708, 4))
    # 0x142814a20: mov ecx, 0x7fffffff
    s.write(('r', 'ecx', 4),s.read(('i', 2147483647, 4)))
    # 0x142814a25: cmova eax, ecx
    s.write(('r', 'eax', 4),s.read(('r', 'ecx', 4))) if s.condition('a') else None
    # 0x142814a28: movss dword ptr [rbp + 0x33c], xmm0
    s.simd_move('movss',('m', 'rbp', None, 1, 828, 4),('r', 'xmm0', 16))
    # 0x142814a30: ucomiss xmm0, xmm0
    s.compare_float(('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x142814a33: mov ecx, 0
    s.write(('r', 'ecx', 4),s.read(('i', 0, 4)))
    # 0x142814a38: cmovp eax, ecx
    s.write(('r', 'eax', 4),s.read(('r', 'ecx', 4))) if s.condition('p') else None
    # 0x142814a3b: dec eax
    s.integer('dec',[('r', 'eax', 4)])
    # 0x142814a3d: lea rcx, [rbp + 0x33c]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 828, 8)))
    # 0x142814a44: mov qword ptr [rbp + 0x3d0], rcx
    s.write(('m', 'rbp', None, 1, 976, 8),s.read(('r', 'rcx', 8)))
    # 0x142814a4b: lea rcx, [rbp + 0x120]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 288, 8)))
    # 0x142814a52: mov qword ptr [rbp + 0x3d8], rcx
    s.write(('m', 'rbp', None, 1, 984, 8),s.read(('r', 'rcx', 8)))
    # 0x142814a59: mov qword ptr [rbp + 0x3e0], rsi
    s.write(('m', 'rbp', None, 1, 992, 8),s.read(('r', 'rsi', 8)))
    # 0x142814a60: mov rcx, qword ptr [rbp + 0x3b8]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 952, 8)))
    # 0x142814a67: mov qword ptr [rbp + 0x3e8], rcx
    s.write(('m', 'rbp', None, 1, 1000, 8),s.read(('r', 'rcx', 8)))
    # 0x142814a6e: mov rcx, qword ptr [rbp + 0x438]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 1080, 8)))
    # 0x142814a75: mov qword ptr [rbp + 0x3f0], rcx
    s.write(('m', 'rbp', None, 1, 1008, 8),s.read(('r', 'rcx', 8)))
    # 0x142814a7c: mov rcx, qword ptr [rbp + 0x390]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 912, 8)))
    # 0x142814a83: mov qword ptr [rbp + 0x3f8], rcx
    s.write(('m', 'rbp', None, 1, 1016, 8),s.read(('r', 'rcx', 8)))
    # 0x142814a8a: mov rcx, qword ptr [rbp + 0x418]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 1048, 8)))
    # 0x142814a91: mov qword ptr [rbp + 0x400], rcx
    s.write(('m', 'rbp', None, 1, 1024, 8),s.read(('r', 'rcx', 8)))
    # 0x142814a98: mov dword ptr [rbp + 0x408], 0
    s.write(('m', 'rbp', None, 1, 1032, 4),s.read(('i', 0, 4)))
    # 0x142814aa2: mov dword ptr [rbp + 0x40c], eax
    s.write(('m', 'rbp', None, 1, 1036, 4),s.read(('r', 'eax', 4)))
    # 0x142814aa8: lea rcx, [rbp + 0x2c0]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 704, 8)))
    # 0x142814aaf: mov rdx, r14
    s.write(('r', 'rdx', 8),s.read(('r', 'r14', 8)))
    # 0x142814ab2: call 0x140fc8030
    s.push(5410736823)
    s.pc=s.read(('i', 5385257008, 8))
    return

def b_142814ab7(s):
    # 0x142814ab7: nop 
    # 0x142814ab8: mov rsi, qword ptr [rbp + 0x2d0]
    s.write(('r', 'rsi', 8),s.read(('m', 'rbp', None, 1, 720, 8)))
    # 0x142814abf: test rsi, rsi
    s.integer('test',[('r', 'rsi', 8), ('r', 'rsi', 8)])
    # 0x142814ac2: mov rbx, qword ptr [rbp + 0x1d8]
    s.write(('r', 'rbx', 8),s.read(('m', 'rbp', None, 1, 472, 8)))
    # 0x142814ac9: je 0x142815d17
    s.pc=s.read(('i', 5410741527, 8)) if s.condition('e') else 5410736847
    return

def b_142814acf(s):
    # 0x142814acf: mov rax, qword ptr [rbp + 0x2c8]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 712, 8)))
    # 0x142814ad6: lea rcx, [rsi + rsi*2]
    s.write(('r', 'rcx', 8),s.address(('m', 'rsi', 'rsi', 2, 0, 8)))
    # 0x142814ada: lea rcx, [rax + rcx*8]
    s.write(('r', 'rcx', 8),s.address(('m', 'rax', 'rcx', 8, 0, 8)))
    # 0x142814ade: add rcx, -0x18
    s.integer('add',[('r', 'rcx', 8), ('i', -24, 8)])
    # 0x142814ae2: test rcx, rcx
    s.integer('test',[('r', 'rcx', 8), ('r', 'rcx', 8)])
    # 0x142814ae5: je 0x142815d17
    s.pc=s.read(('i', 5410741527, 8)) if s.condition('e') else 5410736875
    return

def b_142814aeb(s):
    # 0x142814aeb: mov rdx, qword ptr [rcx + 0x10]
    s.write(('r', 'rdx', 8),s.read(('m', 'rcx', None, 1, 16, 8)))
    # 0x142814aef: mov qword ptr [rbp + 0x3e0], rdx
    s.write(('m', 'rbp', None, 1, 992, 8),s.read(('r', 'rdx', 8)))
    # 0x142814af6: movups xmm0, xmmword ptr [rcx]
    s.simd_move('movups',('r', 'xmm0', 16),('m', 'rcx', None, 1, 0, 16))
    # 0x142814af9: movaps xmmword ptr [rbp + 0x3d0], xmm0
    s.simd_move('movaps',('m', 'rbp', None, 1, 976, 16),('r', 'xmm0', 16))
    # 0x142814b00: cmp rsi, qword ptr [rbp + 0x2c0]
    s.integer('cmp',[('r', 'rsi', 8), ('m', 'rbp', None, 1, 704, 8)])
    # 0x142814b07: jne 0x142814b1d
    s.pc=s.read(('i', 5410736925, 8)) if s.condition('ne') else 5410736905
    return

def b_142814b09(s):
    # 0x142814b09: lea rcx, [rbp + 0x2c0]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 704, 8)))
    # 0x142814b10: call 0x142d89250
    s.push(5410736917)
    s.pc=s.read(('i', 5416456784, 8))
    return

def b_142814b15(s):
    # 0x142814b15: nop 
    # 0x142814b16: mov rax, qword ptr [rbp + 0x2c8]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 712, 8)))
    s.pc=5410736925
    return

def b_142814b1d(s):
    # 0x142814b1d: lea rcx, [rsi*8]
    s.write(('r', 'rcx', 8),s.address(('m', None, 'rsi', 8, 0, 8)))
    # 0x142814b25: lea rcx, [rcx + rcx*2]
    s.write(('r', 'rcx', 8),s.address(('m', 'rcx', 'rcx', 2, 0, 8)))
    # 0x142814b29: mov rdx, qword ptr [rbp + 0x3e0]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 992, 8)))
    # 0x142814b30: mov qword ptr [rax + rcx + 0x10], rdx
    s.write(('m', 'rax', 'rcx', 1, 16, 8),s.read(('r', 'rdx', 8)))
    # 0x142814b35: movaps xmm0, xmmword ptr [rbp + 0x3d0]
    s.simd_move('movaps',('r', 'xmm0', 16),('m', 'rbp', None, 1, 976, 16))
    # 0x142814b3c: movups xmmword ptr [rax + rcx], xmm0
    s.simd_move('movups',('m', 'rax', 'rcx', 1, 0, 16),('r', 'xmm0', 16))
    # 0x142814b40: inc rsi
    s.integer('inc',[('r', 'rsi', 8)])
    # 0x142814b43: mov qword ptr [rbp + 0x2d0], rsi
    s.write(('m', 'rbp', None, 1, 720, 8),s.read(('r', 'rsi', 8)))
    # 0x142814b4a: mov rax, qword ptr [rbp + 0x2c8]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 712, 8)))
    # 0x142814b51: add rcx, rax
    s.integer('add',[('r', 'rcx', 8), ('r', 'rax', 8)])
    # 0x142814b54: add rcx, 0x18
    s.integer('add',[('r', 'rcx', 8), ('i', 24, 8)])
    # 0x142814b58: mov qword ptr [rbp + 0x290], rcx
    s.write(('m', 'rbp', None, 1, 656, 8),s.read(('r', 'rcx', 8)))
    # 0x142814b5f: mov cl, 1
    s.write(('r', 'cl', 1),s.read(('i', 1, 1)))
    # 0x142814b61: xor edi, edi
    s.integer('xor',[('r', 'edi', 4), ('r', 'edi', 4)])
    # 0x142814b63: jmp 0x142814b7c
    s.pc=s.read(('i', 5410737020, 8))
    return

def b_142814b65(s):
    # 0x142814b65: nop word ptr cs:[rax + rax]
    s.pc=5410737008
    return

def b_142814b70(s):
    # 0x142814b70: xor ecx, ecx
    s.integer('xor',[('r', 'ecx', 4), ('r', 'ecx', 4)])
    # 0x142814b72: mov rax, rsi
    s.write(('r', 'rax', 8),s.read(('r', 'rsi', 8)))
    # 0x142814b75: mov rdi, qword ptr [rbp + 0xb0]
    s.write(('r', 'rdi', 8),s.read(('m', 'rbp', None, 1, 176, 8)))
    s.pc=5410737020
    return

def b_142814b7c(s):
    # 0x142814b7c: cmp rax, qword ptr [rbp + 0x290]
    s.integer('cmp',[('r', 'rax', 8), ('m', 'rbp', None, 1, 656, 8)])
    # 0x142814b83: je 0x14281591b
    s.pc=s.read(('i', 5410740507, 8)) if s.condition('e') else 5410737033
    return

def b_142814b89(s):
    # 0x142814b89: lea rdx, [rax + 0x18]
    s.write(('r', 'rdx', 8),s.address(('m', 'rax', None, 1, 24, 8)))
    # 0x142814b8d: test cl, 1
    s.integer('test',[('r', 'cl', 1), ('i', 1, 1)])
    # 0x142814b90: je 0x142814bb0
    s.pc=s.read(('i', 5410737072, 8)) if s.condition('e') else 5410737042
    return

def b_142814b92(s):
    # 0x142814b92: cmp rdx, qword ptr [rbp + 0x290]
    s.integer('cmp',[('r', 'rdx', 8), ('m', 'rbp', None, 1, 656, 8)])
    # 0x142814b99: je 0x14281590d
    s.pc=s.read(('i', 5410740493, 8)) if s.condition('e') else 5410737055
    return

def b_142814b9f(s):
    # 0x142814b9f: lea rsi, [rax + 0x30]
    s.write(('r', 'rsi', 8),s.address(('m', 'rax', None, 1, 48, 8)))
    # 0x142814ba3: mov rcx, rax
    s.write(('r', 'rcx', 8),s.read(('r', 'rax', 8)))
    # 0x142814ba6: mov rax, rdx
    s.write(('r', 'rax', 8),s.read(('r', 'rdx', 8)))
    # 0x142814ba9: jmp 0x142814bba
    s.pc=s.read(('i', 5410737082, 8))
    return

def b_142814bab(s):
    # 0x142814bab: nop dword ptr [rax + rax]
    s.pc=5410737072
    return

def b_142814bb0(s):
    # 0x142814bb0: mov rsi, rdx
    s.write(('r', 'rsi', 8),s.read(('r', 'rdx', 8)))
    # 0x142814bb3: mov rcx, qword ptr [rbp + 0x1d0]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 464, 8)))
    s.pc=5410737082
    return

def b_142814bba(s):
    # 0x142814bba: movss xmm0, dword ptr [rcx + 0x10]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rcx', None, 1, 16, 4))
    # 0x142814bbf: movss dword ptr [rbp + 0x2b0], xmm0
    s.simd_move('movss',('m', 'rbp', None, 1, 688, 4),('r', 'xmm0', 16))
    # 0x142814bc7: movups xmm6, xmmword ptr [rcx]
    s.simd_move('movups',('r', 'xmm6', 16),('m', 'rcx', None, 1, 0, 16))
    # 0x142814bca: movss xmm11, dword ptr [rcx + 0x14]
    s.simd_move('movss',('r', 'xmm11', 16),('m', 'rcx', None, 1, 20, 4))
    # 0x142814bd0: movsd xmm7, qword ptr [rax]
    s.simd_move('movsd',('r', 'xmm7', 16),('m', 'rax', None, 1, 0, 8))
    # 0x142814bd4: movsd xmm8, qword ptr [rax + 8]
    s.simd_move('movsd',('r', 'xmm8', 16),('m', 'rax', None, 1, 8, 8))
    # 0x142814bda: mov qword ptr [rbp + 0x1d0], rax
    s.write(('m', 'rbp', None, 1, 464, 8),s.read(('r', 'rax', 8)))
    # 0x142814be1: movss xmm9, dword ptr [rax + 0x14]
    s.simd_move('movss',('r', 'xmm9', 16),('m', 'rax', None, 1, 20, 4))
    # 0x142814be7: movddup xmm10, qword ptr [rcx + 8]
    s.simd_move('movddup',('r', 'xmm10', 16),('m', 'rcx', None, 1, 8, 8))
    # 0x142814bed: movaps xmm0, xmm6
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x142814bf0: subps xmm0, xmm10
    s.float_op('subps',('r', 'xmm0', 16),('r', 'xmm10', 16))
    # 0x142814bf4: mulps xmm0, xmm0
    s.float_op('mulps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x142814bf7: movshdup xmm1, xmm0
    s.simd_move('movshdup',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142814bfb: addss xmm1, xmm0
    s.float_op('addss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142814bff: sqrtss xmm12, xmm1
    s.float_op('sqrtss',('r', 'xmm12', 16),('r', 'xmm1', 16))
    # 0x142814c04: movaps xmm0, xmm12
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm12', 16))
    # 0x142814c08: addss xmm0, xmm12
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm12', 16))
    # 0x142814c0d: call 0x142e329c0
    s.push(5410737170)
    s.pc=s.read(('i', 5417150912, 8))
    return

def b_142814c12(s):
    # 0x142814c12: maxss xmm0, dword ptr [rip + 0x622c72]
    s.float_op('maxss',('r', 'xmm0', 16),('m', None, None, 1, 5417171084, 4))
    # 0x142814c1a: cvttss2si eax, xmm0
    s.write(('r', 'eax', 4),math.trunc(bitsf(s.read(('r', 'xmm0', 16)))) if math.isfinite(bitsf(s.read(('r', 'xmm0', 16)))) and -(1<<31)<=bitsf(s.read(('r', 'xmm0', 16)))<(1<<31) else (1<<31))
    # 0x142814c1e: ucomiss xmm0, dword ptr [rip + 0x6236a7]
    s.compare_float(('r', 'xmm0', 16),('m', None, None, 1, 5417173708, 4))
    # 0x142814c25: mov ecx, 0x7fffffff
    s.write(('r', 'ecx', 4),s.read(('i', 2147483647, 4)))
    # 0x142814c2a: cmova eax, ecx
    s.write(('r', 'eax', 4),s.read(('r', 'ecx', 4))) if s.condition('a') else None
    # 0x142814c2d: ucomiss xmm0, xmm0
    s.compare_float(('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x142814c30: mov ecx, 0
    s.write(('r', 'ecx', 4),s.read(('i', 0, 4)))
    # 0x142814c35: cmovp eax, ecx
    s.write(('r', 'eax', 4),s.read(('r', 'ecx', 4))) if s.condition('p') else None
    # 0x142814c38: movsxd rdx, eax
    s.write(('r', 'rdx', 8),signed(s.read(('r', 'eax', 4)),32))
    # 0x142814c3b: inc rdx
    s.integer('inc',[('r', 'rdx', 8)])
    # 0x142814c3e: xorps xmm2, xmm2
    s.float_op('xorps',('r', 'xmm2', 16),('r', 'xmm2', 16))
    # 0x142814c41: divss xmm2, xmm12
    s.float_op('divss',('r', 'xmm2', 16),('r', 'xmm12', 16))
    # 0x142814c46: lea rax, [rip + 0xd880e3]
    s.write(('r', 'rax', 8),s.address(('m', None, None, 1, 5424926000, 8)))
    # 0x142814c4d: mov qword ptr [rsp + 0x20], rax
    s.write(('m', 'rsp', None, 1, 32, 8),s.read(('r', 'rax', 8)))
    # 0x142814c52: lea rcx, [rbp + 0x1a8]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 424, 8)))
    # 0x142814c59: lea r9, [rbp + 0x340]
    s.write(('r', 'r9', 8),s.address(('m', 'rbp', None, 1, 832, 8)))
    # 0x142814c60: call 0x140de8290
    s.push(5410737253)
    s.pc=s.read(('i', 5383291536, 8))
    return

def b_142814c65(s):
    # 0x142814c65: nop 
    # 0x142814c66: addps xmm10, xmm6
    s.float_op('addps',('r', 'xmm10', 16),('r', 'xmm6', 16))
    # 0x142814c6a: mulps xmm10, xmmword ptr [rip + 0x6222ee]
    s.float_op('mulps',('r', 'xmm10', 16),('m', None, None, 1, 5417168736, 16))
    # 0x142814c72: movlps qword ptr [rbp + 0x2d8], xmm10
    s.simd_move('movlps',('m', 'rbp', None, 1, 728, 8),('r', 'xmm10', 16))
    # 0x142814c7a: lea rcx, [rbp + 0x2e0]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 736, 8)))
    # 0x142814c81: lea rdx, [rbp + 0x2d8]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 728, 8)))
    # 0x142814c88: movaps xmm2, xmm11
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm11', 16))
    # 0x142814c8c: call 0x140df4540
    s.push(5410737297)
    s.pc=s.read(('i', 5383341376, 8))
    return

def b_142814c91(s):
    # 0x142814c91: nop 
    # 0x142814c92: addps xmm7, xmm8
    s.float_op('addps',('r', 'xmm7', 16),('r', 'xmm8', 16))
    # 0x142814c96: mulps xmm7, xmmword ptr [rip + 0x6222c3]
    s.float_op('mulps',('r', 'xmm7', 16),('m', None, None, 1, 5417168736, 16))
    # 0x142814c9d: movlps qword ptr [rbp + 0x378], xmm7
    s.simd_move('movlps',('m', 'rbp', None, 1, 888, 8),('r', 'xmm7', 16))
    # 0x142814ca4: mov rcx, r14
    s.write(('r', 'rcx', 8),s.read(('r', 'r14', 8)))
    # 0x142814ca7: lea rdx, [rbp + 0x378]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 888, 8)))
    # 0x142814cae: movaps xmm2, xmm9
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm9', 16))
    # 0x142814cb2: call 0x140df4540
    s.push(5410737335)
    s.pc=s.read(('i', 5383341376, 8))
    return

def b_142814cb7(s):
    # 0x142814cb7: nop 
    # 0x142814cb8: mov rdx, qword ptr [rbp + 0x2d0]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 720, 8)))
    # 0x142814cbf: lea rax, [rdx - 2]
    s.write(('r', 'rax', 8),s.address(('m', 'rdx', None, 1, -2, 8)))
    # 0x142814cc3: cmp rdi, rax
    s.integer('cmp',[('r', 'rdi', 8), ('r', 'rax', 8)])
    # 0x142814cc6: jne 0x142814da0
    s.pc=s.read(('i', 5410737568, 8)) if s.condition('ne') else 5410737356
    return

def b_142814ccc(s):
    # 0x142814ccc: cmp rdx, 1
    s.integer('cmp',[('r', 'rdx', 8), ('i', 1, 8)])
    # 0x142814cd0: jbe 0x142815dbf
    s.pc=s.read(('i', 5410741695, 8)) if s.condition('be') else 5410737366
    return

def b_142814cd6(s):
    # 0x142814cd6: lea rcx, [rdx - 3]
    s.write(('r', 'rcx', 8),s.address(('m', 'rdx', None, 1, -3, 8)))
    # 0x142814cda: cmp rdx, 2
    s.integer('cmp',[('r', 'rdx', 8), ('i', 2, 8)])
    # 0x142814cde: je 0x142815dd1
    s.pc=s.read(('i', 5410741713, 8)) if s.condition('e') else 5410737380
    return

def b_142814ce4(s):
    # 0x142814ce4: mov rax, qword ptr [rbp + 0x2c8]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 712, 8)))
    # 0x142814ceb: lea rdx, [rdi + rdi*2]
    s.write(('r', 'rdx', 8),s.address(('m', 'rdi', 'rdi', 2, 0, 8)))
    # 0x142814cef: movss xmm2, dword ptr [rax + rdx*8 + 0x14]
    s.simd_move('movss',('r', 'xmm2', 16),('m', 'rax', 'rdx', 8, 20, 4))
    # 0x142814cf5: lea rcx, [rcx + rcx*2]
    s.write(('r', 'rcx', 8),s.address(('m', 'rcx', 'rcx', 2, 0, 8)))
    # 0x142814cf9: movsd xmm7, qword ptr [rax + rcx*8]
    s.simd_move('movsd',('r', 'xmm7', 16),('m', 'rax', 'rcx', 8, 0, 8))
    # 0x142814cfe: movsd xmm8, qword ptr [rax + rcx*8 + 8]
    s.simd_move('movsd',('r', 'xmm8', 16),('m', 'rax', 'rcx', 8, 8, 8))
    # 0x142814d05: movss xmm9, dword ptr [rax + rcx*8 + 0x14]
    s.simd_move('movss',('r', 'xmm9', 16),('m', 'rax', 'rcx', 8, 20, 4))
    # 0x142814d0c: movsd xmm0, qword ptr [rax + rdx*8]
    s.simd_move('movsd',('r', 'xmm0', 16),('m', 'rax', 'rdx', 8, 0, 8))
    # 0x142814d11: movsd xmm1, qword ptr [rax + rdx*8 + 8]
    s.simd_move('movsd',('r', 'xmm1', 16),('m', 'rax', 'rdx', 8, 8, 8))
    # 0x142814d17: addps xmm1, xmm0
    s.float_op('addps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142814d1a: mulps xmm1, xmmword ptr [rip + 0x62223f]
    s.float_op('mulps',('r', 'xmm1', 16),('m', None, None, 1, 5417168736, 16))
    # 0x142814d21: movlps qword ptr [rbp + 0x3d0], xmm1
    s.simd_move('movlps',('m', 'rbp', None, 1, 976, 8),('r', 'xmm1', 16))
    # 0x142814d28: lea rcx, [rbp + 0x174]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 372, 8)))
    # 0x142814d2f: mov rdx, r14
    s.write(('r', 'rdx', 8),s.read(('r', 'r14', 8)))
    # 0x142814d32: call 0x140df4540
    s.push(5410737463)
    s.pc=s.read(('i', 5383341376, 8))
    return

def b_142814d37(s):
    # 0x142814d37: nop 
    # 0x142814d38: addps xmm7, xmm8
    s.float_op('addps',('r', 'xmm7', 16),('r', 'xmm8', 16))
    # 0x142814d3c: mulps xmm7, xmmword ptr [rip + 0x62221d]
    s.float_op('mulps',('r', 'xmm7', 16),('m', None, None, 1, 5417168736, 16))
    # 0x142814d43: movlps qword ptr [rbp + 0x3d0], xmm7
    s.simd_move('movlps',('m', 'rbp', None, 1, 976, 8),('r', 'xmm7', 16))
    # 0x142814d4a: lea rcx, [rbp + 0x168]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 360, 8)))
    # 0x142814d51: mov rdx, r14
    s.write(('r', 'rdx', 8),s.read(('r', 'r14', 8)))
    # 0x142814d54: movaps xmm2, xmm9
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm9', 16))
    # 0x142814d58: call 0x140df4540
    s.push(5410737501)
    s.pc=s.read(('i', 5383341376, 8))
    return

def b_142814d5d(s):
    # 0x142814d5d: nop 
    # 0x142814d5e: movss xmm0, dword ptr [rbp + 0x178]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rbp', None, 1, 376, 4))
    # 0x142814d66: subss xmm0, dword ptr [rbp + 0x16c]
    s.float_op('subss',('r', 'xmm0', 16),('m', 'rbp', None, 1, 364, 4))
    # 0x142814d6e: mulss xmm0, xmm0
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x142814d72: movss xmm1, dword ptr [rbp + 0x17c]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rbp', None, 1, 380, 4))
    # 0x142814d7a: movss xmm2, dword ptr [rbp + 0x174]
    s.simd_move('movss',('r', 'xmm2', 16),('m', 'rbp', None, 1, 372, 4))
    # 0x142814d82: unpcklps xmm2, xmm1
    s.shuffle('unpcklps',('r', 'xmm2', 16),('r', 'xmm1', 16),0)
    # 0x142814d85: movss xmm1, dword ptr [rbp + 0x168]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rbp', None, 1, 360, 4))
    # 0x142814d8d: movss xmm3, dword ptr [rbp + 0x170]
    s.simd_move('movss',('r', 'xmm3', 16),('m', 'rbp', None, 1, 368, 4))
    # 0x142814d95: jmp 0x142814dd7
    s.pc=s.read(('i', 5410737623, 8))
    return

def b_142814d97(s):
    # 0x142814d97: nop word ptr [rax + rax]
    s.pc=5410737568
    return

def b_142814da0(s):
    # 0x142814da0: movss xmm0, dword ptr [rbp + 0x2e4]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rbp', None, 1, 740, 4))
    # 0x142814da8: subss xmm0, dword ptr [rbp + 0x3d4]
    s.float_op('subss',('r', 'xmm0', 16),('m', 'rbp', None, 1, 980, 4))
    # 0x142814db0: mulss xmm0, xmm0
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x142814db4: movss xmm1, dword ptr [rbp + 0x2e8]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rbp', None, 1, 744, 4))
    # 0x142814dbc: movss xmm2, dword ptr [rbp + 0x2e0]
    s.simd_move('movss',('r', 'xmm2', 16),('m', 'rbp', None, 1, 736, 4))
    # 0x142814dc4: unpcklps xmm2, xmm1
    s.shuffle('unpcklps',('r', 'xmm2', 16),('r', 'xmm1', 16),0)
    # 0x142814dc7: movss xmm1, dword ptr [rbp + 0x3d0]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rbp', None, 1, 976, 4))
    # 0x142814dcf: movss xmm3, dword ptr [rbp + 0x3d8]
    s.simd_move('movss',('r', 'xmm3', 16),('m', 'rbp', None, 1, 984, 4))
    s.pc=5410737623
    return

def b_142814dd7(s):
    # 0x142814dd7: unpcklps xmm1, xmm3
    s.shuffle('unpcklps',('r', 'xmm1', 16),('r', 'xmm3', 16),0)
    # 0x142814dda: subps xmm2, xmm1
    s.float_op('subps',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x142814ddd: mulps xmm2, xmm2
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm2', 16))
    # 0x142814de0: addss xmm0, xmm2
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x142814de4: movshdup xmm1, xmm2
    s.simd_move('movshdup',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x142814de8: addss xmm1, xmm0
    s.float_op('addss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142814dec: xorps xmm0, xmm0
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x142814def: sqrtss xmm0, xmm1
    s.float_op('sqrtss',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x142814df3: movss dword ptr [rbp + 0x320], xmm0
    s.simd_move('movss',('m', 'rbp', None, 1, 800, 4),('r', 'xmm0', 16))
    # 0x142814dfb: mov r15, qword ptr [rbp + 0x1b8]
    s.write(('r', 'r15', 8),s.read(('m', 'rbp', None, 1, 440, 8)))
    # 0x142814e02: call 0x14007ee60
    s.push(5410737671)
    s.pc=s.read(('i', 5369228896, 8))
    return

def b_142814e07(s):
    # 0x142814e07: mov ecx, 0x10
    s.write(('r', 'ecx', 4),s.read(('i', 16, 4)))
    # 0x142814e0c: mov edx, 4
    s.write(('r', 'edx', 4),s.read(('i', 4, 4)))
    # 0x142814e11: call 0x1406abab0
    s.push(5410737686)
    s.pc=s.read(('i', 5375703728, 8))
    return

def b_142814e16(s):
    # 0x142814e16: test rax, rax
    s.integer('test',[('r', 'rax', 8), ('r', 'rax', 8)])
    # 0x142814e19: je 0x142815c84
    s.pc=s.read(('i', 5410741380, 8)) if s.condition('e') else 5410737695
    return

def b_142814e1f(s):
    # 0x142814e1f: movups xmmword ptr [rax], xmm6
    s.simd_move('movups',('m', 'rax', None, 1, 0, 16),('r', 'xmm6', 16))
    # 0x142814e22: mov qword ptr [rbp + 0x3d0], 2
    s.write(('m', 'rbp', None, 1, 976, 8),s.read(('i', 2, 8)))
    # 0x142814e2d: mov qword ptr [rbp + 0x3d8], rax
    s.write(('m', 'rbp', None, 1, 984, 8),s.read(('r', 'rax', 8)))
    # 0x142814e34: mov qword ptr [rbp + 0x3e0], 2
    s.write(('m', 'rbp', None, 1, 992, 8),s.read(('i', 2, 8)))
    # 0x142814e3f: lea rcx, [rbp + 0x2e0]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 736, 8)))
    # 0x142814e46: mov rdx, r14
    s.write(('r', 'rdx', 8),s.read(('r', 'r14', 8)))
    # 0x142814e49: lea r8, [rip + 0xd87f28]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424926072, 8)))
    # 0x142814e50: call 0x142802830
    s.push(5410737749)
    s.pc=s.read(('i', 5410662448, 8))
    return

def b_142814e55(s):
    # 0x142814e55: nop 
    # 0x142814e56: lea rax, [rdi + 1]
    s.write(('r', 'rax', 8),s.address(('m', 'rdi', None, 1, 1, 8)))
    # 0x142814e5a: mov qword ptr [rbp + 0xb0], rax
    s.write(('m', 'rbp', None, 1, 176, 8),s.read(('r', 'rax', 8)))
    # 0x142814e61: movss xmm0, dword ptr [rbp + 0x320]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rbp', None, 1, 800, 4))
    # 0x142814e69: mulss xmm0, dword ptr [rip + 0xd87d6b]
    s.float_op('mulss',('r', 'xmm0', 16),('m', None, None, 1, 5424925660, 4))
    # 0x142814e71: movss dword ptr [rbp + 0x320], xmm0
    s.simd_move('movss',('m', 'rbp', None, 1, 800, 4),('r', 'xmm0', 16))
    # 0x142814e79: mov rcx, rdi
    s.write(('r', 'rcx', 8),s.read(('r', 'rdi', 8)))
    # 0x142814e7c: shr rcx, 1
    s.integer('shr',[('r', 'rcx', 8), ('i', 1, 8)])
    # 0x142814e7f: mov eax, edi
    s.write(('r', 'eax', 4),s.read(('r', 'edi', 4)))
    # 0x142814e81: and eax, 1
    s.integer('and',[('r', 'eax', 4), ('i', 1, 4)])
    # 0x142814e84: or rax, rcx
    s.integer('or',[('r', 'rax', 8), ('r', 'rcx', 8)])
    # 0x142814e87: test rdi, rdi
    s.integer('test',[('r', 'rdi', 8), ('r', 'rdi', 8)])
    # 0x142814e8a: movss dword ptr [rbp + 0xf0], xmm12
    s.simd_move('movss',('m', 'rbp', None, 1, 240, 4),('r', 'xmm12', 16))
    # 0x142814e93: mov qword ptr [rbp + 0x100], rsi
    s.write(('m', 'rbp', None, 1, 256, 8),s.read(('r', 'rsi', 8)))
    # 0x142814e9a: mov qword ptr [rbp + 0x210], rdi
    s.write(('m', 'rbp', None, 1, 528, 8),s.read(('r', 'rdi', 8)))
    # 0x142814ea1: movss dword ptr [rbp + 0x1f0], xmm11
    s.simd_move('movss',('m', 'rbp', None, 1, 496, 4),('r', 'xmm11', 16))
    # 0x142814eaa: js 0x142814ec0
    s.pc=s.read(('i', 5410737856, 8)) if s.condition('s') else 5410737836
    return

def b_142814eac(s):
    # 0x142814eac: xorps xmm0, xmm0
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x142814eaf: cvtsi2ss xmm0, rdi
    s.setlane('xmm0',float(signed(s.read(('r', 'rdi', 8)),64)))
    # 0x142814eb4: jmp 0x142814ecc
    s.pc=s.read(('i', 5410737868, 8))
    return

def b_142814eb6(s):
    # 0x142814eb6: nop word ptr cs:[rax + rax]
    s.pc=5410737856
    return

def b_142814ec0(s):
    # 0x142814ec0: xorps xmm0, xmm0
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x142814ec3: cvtsi2ss xmm0, rax
    s.setlane('xmm0',float(signed(s.read(('r', 'rax', 8)),64)))
    # 0x142814ec8: addss xmm0, xmm0
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm0', 16))
    s.pc=5410737868
    return

def b_142814ecc(s):
    # 0x142814ecc: movss dword ptr [rbp + 0x2a0], xmm0
    s.simd_move('movss',('m', 'rbp', None, 1, 672, 4),('r', 'xmm0', 16))
    # 0x142814ed4: sete al
    s.write(('r', 'al', 1),int(s.condition('e')))
    # 0x142814ed7: or al, byte ptr [rbp + 0x447]
    s.integer('or',[('r', 'al', 1), ('m', 'rbp', None, 1, 1095, 1)])
    # 0x142814edd: mov byte ptr [rbp + 0x200], al
    s.write(('m', 'rbp', None, 1, 512, 1),s.read(('r', 'al', 1)))
    # 0x142814ee3: xor edi, edi
    s.integer('xor',[('r', 'edi', 4), ('r', 'edi', 4)])
    # 0x142814ee5: jmp 0x142814ef3
    s.pc=s.read(('i', 5410737907, 8))
    return

def b_142814ee7(s):
    # 0x142814ee7: nop word ptr [rax + rax]
    s.pc=5410737904
    return

def b_142814ef0(s):
    # 0x142814ef0: inc r13d
    s.integer('inc',[('r', 'r13d', 4)])
    s.pc=5410737907
    return

def b_142814ef3(s):
    # 0x142814ef3: lea rax, [r15 - 1]
    s.write(('r', 'rax', 8),s.address(('m', 'r15', None, 1, -1, 8)))
    # 0x142814ef7: cmp rdi, rax
    s.integer('cmp',[('r', 'rdi', 8), ('r', 'rax', 8)])
    # 0x142814efa: jae 0x142815890
    s.pc=s.read(('i', 5410740368, 8)) if s.condition('ae') else 5410737920
    return

def b_142814f00(s):
    # 0x142814f00: cmp rdi, r15
    s.integer('cmp',[('r', 'rdi', 8), ('r', 'r15', 8)])
    # 0x142814f03: xorps xmm0, xmm0
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x142814f06: jae 0x142815d29
    s.pc=s.read(('i', 5410741545, 8)) if s.condition('ae') else 5410737932
    return

def b_142814f0c(s):
    # 0x142814f0c: mov rax, qword ptr [rbp + 0x1b0]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 432, 8)))
    # 0x142814f13: movss xmm9, dword ptr [rax + rdi*4]
    s.simd_move('movss',('r', 'xmm9', 16),('m', 'rax', 'rdi', 4, 0, 4))
    # 0x142814f19: movss dword ptr [rbp + 0x378], xmm9
    s.simd_move('movss',('m', 'rbp', None, 1, 888, 4),('r', 'xmm9', 16))
    # 0x142814f22: ucomiss xmm9, xmm0
    s.compare_float(('r', 'xmm9', 16),('r', 'xmm0', 16))
    # 0x142814f26: jb 0x142815c0c
    s.pc=s.read(('i', 5410741260, 8)) if s.condition('b') else 5410737964
    return

def b_142814f2c(s):
    # 0x142814f2c: ucomiss xmm14, xmm9
    s.compare_float(('r', 'xmm14', 16),('r', 'xmm9', 16))
    # 0x142814f30: jb 0x142815c0c
    s.pc=s.read(('i', 5410741260, 8)) if s.condition('b') else 5410737974
    return

def b_142814f36(s):
    # 0x142814f36: inc rdi
    s.integer('inc',[('r', 'rdi', 8)])
    # 0x142814f39: cmp rdi, r15
    s.integer('cmp',[('r', 'rdi', 8), ('r', 'r15', 8)])
    # 0x142814f3c: jae 0x142815d41
    s.pc=s.read(('i', 5410741569, 8)) if s.condition('ae') else 5410737986
    return

def b_142814f42(s):
    # 0x142814f42: movss xmm10, dword ptr [rax + rdi*4]
    s.simd_move('movss',('r', 'xmm10', 16),('m', 'rax', 'rdi', 4, 0, 4))
    # 0x142814f48: movss dword ptr [rbp + 0x378], xmm10
    s.simd_move('movss',('m', 'rbp', None, 1, 888, 4),('r', 'xmm10', 16))
    # 0x142814f51: ucomiss xmm10, xmm0
    s.compare_float(('r', 'xmm10', 16),('r', 'xmm0', 16))
    # 0x142814f55: jb 0x142815c48
    s.pc=s.read(('i', 5410741320, 8)) if s.condition('b') else 5410738011
    return

def b_142814f5b(s):
    # 0x142814f5b: ucomiss xmm14, xmm10
    s.compare_float(('r', 'xmm14', 16),('r', 'xmm10', 16))
    # 0x142814f5f: jb 0x142815c48
    s.pc=s.read(('i', 5410741320, 8)) if s.condition('b') else 5410738021
    return

def b_142814f65(s):
    # 0x142814f65: lea rcx, [rbp + 0x2e0]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 736, 8)))
    # 0x142814f6c: movaps xmm1, xmm9
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm9', 16))
    # 0x142814f70: call 0x142802660
    s.push(5410738037)
    s.pc=s.read(('i', 5410661984, 8))
    return

def b_142814f75(s):
    # 0x142814f75: nop 
    # 0x142814f76: mov rsi, qword ptr [rbp + 0x2f0]
    s.write(('r', 'rsi', 8),s.read(('m', 'rbp', None, 1, 752, 8)))
    # 0x142814f7d: mov ecx, eax
    s.write(('r', 'ecx', 4),s.read(('r', 'eax', 4)))
    # 0x142814f7f: cmp rsi, rcx
    s.integer('cmp',[('r', 'rsi', 8), ('r', 'rcx', 8)])
    # 0x142814f82: jbe 0x142815d89
    s.pc=s.read(('i', 5410741641, 8)) if s.condition('be') else 5410738056
    return

def b_142814f88(s):
    # 0x142814f88: lea rax, [rcx + 1]
    s.write(('r', 'rax', 8),s.address(('m', 'rcx', None, 1, 1, 8)))
    # 0x142814f8c: cmp rax, rsi
    s.integer('cmp',[('r', 'rax', 8), ('r', 'rsi', 8)])
    # 0x142814f8f: jae 0x142815d71
    s.pc=s.read(('i', 5410741617, 8)) if s.condition('ae') else 5410738069
    return

def b_142814f95(s):
    # 0x142814f95: movaps xmm11, xmm0
    s.simd_move('movaps',('r', 'xmm11', 16),('r', 'xmm0', 16))
    # 0x142814f99: mov rbx, qword ptr [rbp + 0x2e8]
    s.write(('r', 'rbx', 8),s.read(('m', 'rbp', None, 1, 744, 8)))
    # 0x142814fa0: movsd xmm8, qword ptr [rbx + rcx*8]
    s.simd_move('movsd',('r', 'xmm8', 16),('m', 'rbx', 'rcx', 8, 0, 8))
    # 0x142814fa6: movsd xmm7, qword ptr [rbx + rcx*8 + 8]
    s.simd_move('movsd',('r', 'xmm7', 16),('m', 'rbx', 'rcx', 8, 8, 8))
    # 0x142814fac: mov rax, qword ptr [rbp + 0x348]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 840, 8)))
    # 0x142814fb3: movsd xmm6, qword ptr [rax + 8]
    s.simd_move('movsd',('r', 'xmm6', 16),('m', 'rax', None, 1, 8, 8))
    # 0x142814fb8: lea rcx, [rbp + 0x2e0]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 736, 8)))
    # 0x142814fbf: movaps xmm1, xmm10
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm10', 16))
    # 0x142814fc3: call 0x142802660
    s.push(5410738120)
    s.pc=s.read(('i', 5410661984, 8))
    return

def b_142814fc8(s):
    # 0x142814fc8: nop 
    # 0x142814fc9: mov ecx, eax
    s.write(('r', 'ecx', 4),s.read(('r', 'eax', 4)))
    # 0x142814fcb: cmp rsi, rcx
    s.integer('cmp',[('r', 'rsi', 8), ('r', 'rcx', 8)])
    # 0x142814fce: jbe 0x142815dad
    s.pc=s.read(('i', 5410741677, 8)) if s.condition('be') else 5410738132
    return

def b_142814fd4(s):
    # 0x142814fd4: lea rax, [rcx + 1]
    s.write(('r', 'rax', 8),s.address(('m', 'rcx', None, 1, 1, 8)))
    # 0x142814fd8: cmp rax, rsi
    s.integer('cmp',[('r', 'rax', 8), ('r', 'rsi', 8)])
    # 0x142814fdb: jae 0x142815d59
    s.pc=s.read(('i', 5410741593, 8)) if s.condition('ae') else 5410738145
    return

def b_142814fe1(s):
    # 0x142814fe1: movaps xmm1, xmm14
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm14', 16))
    # 0x142814fe5: subss xmm1, xmm11
    s.float_op('subss',('r', 'xmm1', 16),('r', 'xmm11', 16))
    # 0x142814fea: movsldup xmm1, xmm1
    s.simd_move('movsldup',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x142814fee: mulps xmm1, xmm8
    s.float_op('mulps',('r', 'xmm1', 16),('r', 'xmm8', 16))
    # 0x142814ff2: movsldup xmm2, xmm11
    s.simd_move('movsldup',('r', 'xmm2', 16),('r', 'xmm11', 16))
    # 0x142814ff7: mulps xmm2, xmm7
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm7', 16))
    # 0x142814ffa: addps xmm2, xmm1
    s.float_op('addps',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x142814ffd: unpcklps xmm2, xmm2
    s.shuffle('unpcklps',('r', 'xmm2', 16),('r', 'xmm2', 16),0)
    # 0x142815000: movaps xmm1, xmm14
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm14', 16))
    # 0x142815004: subss xmm1, xmm0
    s.float_op('subss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142815008: movsd xmm3, qword ptr [rbx + rcx*8]
    s.simd_move('movsd',('r', 'xmm3', 16),('m', 'rbx', 'rcx', 8, 0, 8))
    # 0x14281500d: movsd xmm4, qword ptr [rbx + rcx*8 + 8]
    s.simd_move('movsd',('r', 'xmm4', 16),('m', 'rbx', 'rcx', 8, 8, 8))
    # 0x142815013: movsldup xmm1, xmm1
    s.simd_move('movsldup',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x142815017: mulps xmm1, xmm3
    s.float_op('mulps',('r', 'xmm1', 16),('r', 'xmm3', 16))
    # 0x14281501a: movsldup xmm3, xmm0
    s.simd_move('movsldup',('r', 'xmm3', 16),('r', 'xmm0', 16))
    # 0x14281501e: mulps xmm3, xmm4
    s.float_op('mulps',('r', 'xmm3', 16),('r', 'xmm4', 16))
    # 0x142815021: addps xmm3, xmm1
    s.float_op('addps',('r', 'xmm3', 16),('r', 'xmm1', 16))
    # 0x142815024: unpcklps xmm3, xmm3
    s.shuffle('unpcklps',('r', 'xmm3', 16),('r', 'xmm3', 16),0)
    # 0x142815027: movaps xmm0, xmmword ptr [rbp + 0x220]
    s.simd_move('movaps',('r', 'xmm0', 16),('m', 'rbp', None, 1, 544, 16))
    # 0x14281502e: mulps xmm2, xmm0
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x142815031: mulps xmm3, xmm0
    s.float_op('mulps',('r', 'xmm3', 16),('r', 'xmm0', 16))
    # 0x142815034: movaps xmm0, xmm2
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x142815037: unpckhpd xmm0, xmm2
    s.shuffle('unpckhpd',('r', 'xmm0', 16),('r', 'xmm2', 16),0)
    # 0x14281503b: addps xmm0, xmm2
    s.float_op('addps',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x14281503e: addps xmm0, xmm6
    s.float_op('addps',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x142815041: movaps xmm1, xmm3
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm3', 16))
    # 0x142815044: unpckhpd xmm1, xmm3
    s.shuffle('unpckhpd',('r', 'xmm1', 16),('r', 'xmm3', 16),0)
    # 0x142815048: addps xmm1, xmm3
    s.float_op('addps',('r', 'xmm1', 16),('r', 'xmm3', 16))
    # 0x14281504b: addps xmm1, xmm6
    s.float_op('addps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x14281504e: movaps xmm2, xmm0
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x142815051: subps xmm2, xmm1
    s.float_op('subps',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x142815054: movaps xmm3, xmm2
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x142815057: mulps xmm3, xmm2
    s.float_op('mulps',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x14281505a: movshdup xmm4, xmm3
    s.simd_move('movshdup',('r', 'xmm4', 16),('r', 'xmm3', 16))
    # 0x14281505e: addss xmm4, xmm3
    s.float_op('addss',('r', 'xmm4', 16),('r', 'xmm3', 16))
    # 0x142815062: xorps xmm7, xmm7
    s.float_op('xorps',('r', 'xmm7', 16),('r', 'xmm7', 16))
    # 0x142815065: sqrtss xmm7, xmm4
    s.float_op('sqrtss',('r', 'xmm7', 16),('r', 'xmm4', 16))
    # 0x142815069: movaps xmm3, xmm14
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm14', 16))
    # 0x14281506d: divss xmm3, xmm7
    s.float_op('divss',('r', 'xmm3', 16),('r', 'xmm7', 16))
    # 0x142815071: movsldup xmm3, xmm3
    s.simd_move('movsldup',('r', 'xmm3', 16),('r', 'xmm3', 16))
    # 0x142815075: mulps xmm3, xmm2
    s.float_op('mulps',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x142815078: movlps qword ptr [rbp + 0xa8], xmm3
    s.simd_move('movlps',('m', 'rbp', None, 1, 168, 8),('r', 'xmm3', 16))
    # 0x14281507f: movshdup xmm2, xmm3
    s.simd_move('movshdup',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x142815083: xorps xmm2, xmmword ptr [rip + 0x622796]
    s.float_op('xorps',('r', 'xmm2', 16),('m', None, None, 1, 5417170976, 16))
    # 0x14281508a: movss dword ptr [rbp + 0x2d8], xmm2
    s.simd_move('movss',('m', 'rbp', None, 1, 728, 4),('r', 'xmm2', 16))
    # 0x142815092: movss dword ptr [rbp + 0x2dc], xmm3
    s.simd_move('movss',('m', 'rbp', None, 1, 732, 4),('r', 'xmm3', 16))
    # 0x14281509a: addps xmm1, xmm0
    s.float_op('addps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x14281509d: mulps xmm1, xmmword ptr [rip + 0x621ebc]
    s.float_op('mulps',('r', 'xmm1', 16),('m', None, None, 1, 5417168736, 16))
    # 0x1428150a4: movlps qword ptr [rbp + 0x378], xmm1
    s.simd_move('movlps',('m', 'rbp', None, 1, 888, 8),('r', 'xmm1', 16))
    # 0x1428150ab: lea rcx, [rbp + 0x1e0]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 480, 8)))
    # 0x1428150b2: lea rdx, [rbp + 0x378]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 888, 8)))
    # 0x1428150b9: movss xmm2, dword ptr [rbp + 0x1f0]
    s.simd_move('movss',('r', 'xmm2', 16),('m', 'rbp', None, 1, 496, 4))
    # 0x1428150c1: call 0x140df4540
    s.push(5410738374)
    s.pc=s.read(('i', 5383341376, 8))
    return

def b_1428150c6(s):
    # 0x1428150c6: nop 
    # 0x1428150c7: lea rcx, [rbp + 0x340]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 832, 8)))
    # 0x1428150ce: call 0x140e02880
    s.push(5410738387)
    s.pc=s.read(('i', 5383399552, 8))
    return

def b_1428150d3(s):
    # 0x1428150d3: nop 
    # 0x1428150d4: movaps xmm11, xmm0
    s.simd_move('movaps',('r', 'xmm11', 16),('r', 'xmm0', 16))
    # 0x1428150d8: movaps xmm15, xmm14
    s.simd_move('movaps',('r', 'xmm15', 16),('r', 'xmm14', 16))
    # 0x1428150dc: subss xmm15, xmm0
    s.float_op('subss',('r', 'xmm15', 16),('r', 'xmm0', 16))
    # 0x1428150e1: mulss xmm15, dword ptr [rip + 0x627586]
    s.float_op('mulss',('r', 'xmm15', 16),('m', None, None, 1, 5417191024, 4))
    # 0x1428150ea: mulss xmm11, dword ptr [rip + 0x62289d]
    s.float_op('mulss',('r', 'xmm11', 16),('m', None, None, 1, 5417171344, 4))
    # 0x1428150f3: lea rcx, [rbp + 0x258]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 600, 8)))
    # 0x1428150fa: movss xmm1, dword ptr [rbp + 0x2b0]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rbp', None, 1, 688, 4))
    # 0x142815102: call 0x142802660
    s.push(5410738439)
    s.pc=s.read(('i', 5410661984, 8))
    return

def b_142815107(s):
    # 0x142815107: nop 
    # 0x142815108: mov eax, eax
    s.write(('r', 'eax', 4),s.read(('r', 'eax', 4)))
    # 0x14281510a: lea rcx, [rax + 1]
    s.write(('r', 'rcx', 8),s.address(('m', 'rax', None, 1, 1, 8)))
    # 0x14281510e: mov rdx, qword ptr [rbp + 0x268]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 616, 8)))
    # 0x142815115: cmp rcx, rdx
    s.integer('cmp',[('r', 'rcx', 8), ('r', 'rdx', 8)])
    # 0x142815118: jae 0x142815d9e
    s.pc=s.read(('i', 5410741662, 8)) if s.condition('ae') else 5410738462
    return

def b_14281511e(s):
    # 0x14281511e: mov rcx, qword ptr [rbp + 0x260]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 608, 8)))
    # 0x142815125: movss xmm1, dword ptr [rcx + rax*8 + 8]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rcx', 'rax', 8, 8, 4))
    # 0x14281512b: movss xmm2, dword ptr [rcx + rax*8 + 0xc]
    s.simd_move('movss',('r', 'xmm2', 16),('m', 'rcx', 'rax', 8, 12, 4))
    # 0x142815131: subss xmm1, dword ptr [rcx + rax*8]
    s.float_op('subss',('r', 'xmm1', 16),('m', 'rcx', 'rax', 8, 0, 4))
    # 0x142815136: subss xmm2, dword ptr [rcx + rax*8 + 4]
    s.float_op('subss',('r', 'xmm2', 16),('m', 'rcx', 'rax', 8, 4, 4))
    # 0x14281513c: movaps xmm0, xmm1
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x14281513f: mulss xmm0, xmm1
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x142815143: movaps xmm3, xmm2
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x142815146: mulss xmm3, xmm2
    s.float_op('mulss',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x14281514a: addss xmm3, xmm0
    s.float_op('addss',('r', 'xmm3', 16),('r', 'xmm0', 16))
    # 0x14281514e: sqrtss xmm3, xmm3
    s.float_op('sqrtss',('r', 'xmm3', 16),('r', 'xmm3', 16))
    # 0x142815152: movaps xmm0, xmm14
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm14', 16))
    # 0x142815156: divss xmm0, xmm3
    s.float_op('divss',('r', 'xmm0', 16),('r', 'xmm3', 16))
    # 0x14281515a: mulss xmm1, xmm0
    s.float_op('mulss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x14281515e: mulss xmm0, xmm2
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x142815162: divss xmm0, xmm1
    s.float_op('divss',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x142815166: call 0x142e32990
    s.push(5410738539)
    s.pc=s.read(('i', 5417150864, 8))
    return

def b_14281516b(s):
    # 0x14281516b: movaps xmm12, xmm0
    s.simd_move('movaps',('r', 'xmm12', 16),('r', 'xmm0', 16))
    # 0x14281516f: lea rcx, [rbp + 0x98]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 152, 8)))
    # 0x142815176: lea rdx, [rbp + 0xa8]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 168, 8)))
    # 0x14281517d: call 0x140df4520
    s.push(5410738562)
    s.pc=s.read(('i', 5383341344, 8))
    return

def b_142815182(s):
    # 0x142815182: nop 
    # 0x142815183: movsd xmm13, qword ptr [rbp + 0x98]
    s.simd_move('movsd',('r', 'xmm13', 16),('m', 'rbp', None, 1, 152, 8))
    # 0x14281518c: movss xmm6, dword ptr [rbp + 0xa0]
    s.simd_move('movss',('r', 'xmm6', 16),('m', 'rbp', None, 1, 160, 4))
    # 0x142815194: mov rcx, r14
    s.write(('r', 'rcx', 8),s.read(('r', 'r14', 8)))
    # 0x142815197: lea rdx, [rbp + 0x2d8]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 728, 8)))
    # 0x14281519e: call 0x140df4520
    s.push(5410738595)
    s.pc=s.read(('i', 5383341344, 8))
    return

def b_1428151a3(s):
    # 0x1428151a3: nop 
    # 0x1428151a4: movss dword ptr [rbp + 0x360], xmm10
    s.simd_move('movss',('m', 'rbp', None, 1, 864, 4),('r', 'xmm10', 16))
    # 0x1428151ad: movss dword ptr [rbp + 0x390], xmm7
    s.simd_move('movss',('m', 'rbp', None, 1, 912, 4),('r', 'xmm7', 16))
    # 0x1428151b5: movshdup xmm14, xmm13
    s.simd_move('movshdup',('r', 'xmm14', 16),('r', 'xmm13', 16))
    # 0x1428151ba: movss xmm7, dword ptr [rip + 0x621d8e]
    s.simd_move('movss',('r', 'xmm7', 16),('m', None, None, 1, 5417168720, 4))
    # 0x1428151c2: mulss xmm12, xmm7
    s.float_op('mulss',('r', 'xmm12', 16),('r', 'xmm7', 16))
    # 0x1428151c7: movaps xmm0, xmm12
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm12', 16))
    # 0x1428151cb: call 0x142e32b30
    s.push(5410738640)
    s.pc=s.read(('i', 5417151280, 8))
    return

def b_1428151d0(s):
    # 0x1428151d0: shufps xmm0, xmm0, 0
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm0', 16),0)
    # 0x1428151d4: movaps xmm1, xmm6
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x1428151d7: shufps xmm1, xmm13, 0x30
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm13', 16),48)
    # 0x1428151dc: movaps xmm8, xmm13
    s.simd_move('movaps',('r', 'xmm8', 16),('r', 'xmm13', 16))
    # 0x1428151e0: shufps xmm8, xmm1, 0x84
    s.shuffle('shufps',('r', 'xmm8', 16),('r', 'xmm1', 16),132)
    # 0x1428151e5: mulps xmm8, xmm0
    s.float_op('mulps',('r', 'xmm8', 16),('r', 'xmm0', 16))
    # 0x1428151e9: movaps xmm0, xmm12
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm12', 16))
    # 0x1428151ed: call 0x142e329e0
    s.push(5410738674)
    s.pc=s.read(('i', 5417150944, 8))
    return

def b_1428151f2(s):
    # 0x1428151f2: shufps xmm0, xmm8, 0xe4
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm8', 16),228)
    # 0x1428151f7: movaps xmm12, xmm8
    s.simd_move('movaps',('r', 'xmm12', 16),('r', 'xmm8', 16))
    # 0x1428151fb: shufps xmm12, xmm0, 0x24
    s.shuffle('shufps',('r', 'xmm12', 16),('r', 'xmm0', 16),36)
    # 0x142815200: movsd xmm1, qword ptr [rbp + 0x3d4]
    s.simd_move('movsd',('r', 'xmm1', 16),('m', 'rbp', None, 1, 980, 8))
    # 0x142815208: movss xmm3, dword ptr [rbp + 0x3d0]
    s.simd_move('movss',('r', 'xmm3', 16),('m', 'rbp', None, 1, 976, 4))
    # 0x142815210: movlhps xmm3, xmm1
    s.simd_move('movlhps',('r', 'xmm3', 16),('r', 'xmm1', 16))
    # 0x142815213: movaps xmm0, xmm3
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm3', 16))
    # 0x142815216: shufps xmm0, xmm1, 0xd8
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm1', 16),216)
    # 0x14281521a: shufps xmm3, xmm1, 0x58
    s.shuffle('shufps',('r', 'xmm3', 16),('r', 'xmm1', 16),88)
    # 0x14281521e: movaps xmm2, xmm12
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm12', 16))
    # 0x142815222: mulps xmm2, xmm12
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm12', 16))
    # 0x142815226: movaps xmm1, xmm2
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x142815229: shufps xmm1, xmm2, 0xaa
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm2', 16),170)
    # 0x14281522d: movshdup xmm4, xmm2
    s.simd_move('movshdup',('r', 'xmm4', 16),('r', 'xmm2', 16))
    # 0x142815231: addss xmm4, xmm2
    s.float_op('addss',('r', 'xmm4', 16),('r', 'xmm2', 16))
    # 0x142815235: shufps xmm4, xmm4, 0
    s.shuffle('shufps',('r', 'xmm4', 16),('r', 'xmm4', 16),0)
    # 0x142815239: addps xmm4, xmm1
    s.float_op('addps',('r', 'xmm4', 16),('r', 'xmm1', 16))
    # 0x14281523c: shufps xmm2, xmm2, 0xff
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm2', 16),255)
    # 0x142815240: subps xmm2, xmm4
    s.float_op('subps',('r', 'xmm2', 16),('r', 'xmm4', 16))
    # 0x142815243: mulps xmm2, xmm3
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x142815246: movaps xmm1, xmm8
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm8', 16))
    # 0x14281524a: mulps xmm1, xmm0
    s.float_op('mulps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x14281524d: movshdup xmm3, xmm1
    s.simd_move('movshdup',('r', 'xmm3', 16),('r', 'xmm1', 16))
    # 0x142815251: addss xmm3, xmm1
    s.float_op('addss',('r', 'xmm3', 16),('r', 'xmm1', 16))
    # 0x142815255: movhlps xmm1, xmm1
    s.simd_move('movhlps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x142815258: addss xmm1, xmm3
    s.float_op('addss',('r', 'xmm1', 16),('r', 'xmm3', 16))
    # 0x14281525c: addss xmm1, xmm1
    s.float_op('addss',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x142815260: shufps xmm1, xmm1, 0
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm1', 16),0)
    # 0x142815264: mulps xmm1, xmm12
    s.float_op('mulps',('r', 'xmm1', 16),('r', 'xmm12', 16))
    # 0x142815268: addps xmm1, xmm2
    s.float_op('addps',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x14281526b: movaps xmm2, xmm8
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm8', 16))
    # 0x14281526f: shufps xmm2, xmm8, 0xd2
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm8', 16),210)
    # 0x142815274: mulps xmm2, xmm0
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x142815277: shufps xmm0, xmm0, 0xd2
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm0', 16),210)
    # 0x14281527b: mulps xmm0, xmm8
    s.float_op('mulps',('r', 'xmm0', 16),('r', 'xmm8', 16))
    # 0x14281527f: subps xmm2, xmm0
    s.float_op('subps',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x142815282: shufps xmm2, xmm2, 0xd2
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm2', 16),210)
    # 0x142815286: addps xmm12, xmm12
    s.float_op('addps',('r', 'xmm12', 16),('r', 'xmm12', 16))
    # 0x14281528a: shufps xmm12, xmm12, 0xff
    s.shuffle('shufps',('r', 'xmm12', 16),('r', 'xmm12', 16),255)
    # 0x14281528f: mulps xmm12, xmm2
    s.float_op('mulps',('r', 'xmm12', 16),('r', 'xmm2', 16))
    # 0x142815293: addps xmm12, xmm1
    s.float_op('addps',('r', 'xmm12', 16),('r', 'xmm1', 16))
    # 0x142815297: movshdup xmm3, xmm12
    s.simd_move('movshdup',('r', 'xmm3', 16),('r', 'xmm12', 16))
    # 0x14281529c: movaps xmm0, xmm6
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x14281529f: mulss xmm0, xmm3
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm3', 16))
    # 0x1428152a3: movaps xmm4, xmm12
    s.simd_move('movaps',('r', 'xmm4', 16),('r', 'xmm12', 16))
    # 0x1428152a7: unpckhpd xmm4, xmm12
    s.shuffle('unpckhpd',('r', 'xmm4', 16),('r', 'xmm12', 16),0)
    # 0x1428152ac: movaps xmm1, xmm14
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm14', 16))
    # 0x1428152b0: mulss xmm1, xmm4
    s.float_op('mulss',('r', 'xmm1', 16),('r', 'xmm4', 16))
    # 0x1428152b4: subss xmm0, xmm1
    s.float_op('subss',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x1428152b8: movaps xmm5, xmm12
    s.simd_move('movaps',('r', 'xmm5', 16),('r', 'xmm12', 16))
    # 0x1428152bc: shufps xmm5, xmm12, 0xe2
    s.shuffle('shufps',('r', 'xmm5', 16),('r', 'xmm12', 16),226)
    # 0x1428152c1: movaps xmm1, xmm13
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm13', 16))
    # 0x1428152c5: mulps xmm1, xmm5
    s.float_op('mulps',('r', 'xmm1', 16),('r', 'xmm5', 16))
    # 0x1428152c8: movsldup xmm2, xmm13
    s.simd_move('movsldup',('r', 'xmm2', 16),('r', 'xmm13', 16))
    # 0x1428152cd: movss xmm2, xmm6
    s.simd_move('movss',('r', 'xmm2', 16),('r', 'xmm6', 16))
    # 0x1428152d1: mulps xmm2, xmm12
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm12', 16))
    # 0x1428152d5: subps xmm1, xmm2
    s.float_op('subps',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x1428152d8: movshdup xmm8, xmm1
    s.simd_move('movshdup',('r', 'xmm8', 16),('r', 'xmm1', 16))
    # 0x1428152dd: movaps xmm2, xmm4
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm4', 16))
    # 0x1428152e0: movaps xmm10, xmmword ptr [rip + 0x622538]
    s.simd_move('movaps',('r', 'xmm10', 16),('m', None, None, 1, 5417170976, 16))
    # 0x1428152e8: xorps xmm2, xmm10
    s.float_op('xorps',('r', 'xmm2', 16),('r', 'xmm10', 16))
    # 0x1428152ec: ucomiss xmm9, xmm7
    s.compare_float(('r', 'xmm9', 16),('r', 'xmm7', 16))
    # 0x1428152f0: lea rax, [rbp + 0x230]
    s.write(('r', 'rax', 8),s.address(('m', 'rbp', None, 1, 560, 8)))
    # 0x1428152f7: lea rcx, [rbp + 0x240]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 576, 8)))
    # 0x1428152fe: cmova rax, rcx
    s.write(('r', 'rax', 8),s.read(('r', 'rcx', 8))) if s.condition('a') else None
    # 0x142815302: movups xmm7, xmmword ptr [rax]
    s.simd_move('movups',('r', 'xmm7', 16),('m', 'rax', None, 1, 0, 16))
    # 0x142815305: movaps xmmword ptr [rbp - 0x50], xmm7
    s.simd_move('movaps',('m', 'rbp', None, 1, -80, 16),('r', 'xmm7', 16))
    # 0x142815309: xorps xmm7, xmm7
    s.float_op('xorps',('r', 'xmm7', 16),('r', 'xmm7', 16))
    # 0x14281530c: ucomiss xmm7, xmm8
    s.compare_float(('r', 'xmm7', 16),('r', 'xmm8', 16))
    # 0x142815310: jae 0x142815370
    s.pc=s.read(('i', 5410739056, 8)) if s.condition('ae') else 5410738962
    return

def b_142815312(s):
    # 0x142815312: movaps xmm5, xmm13
    s.simd_move('movaps',('r', 'xmm5', 16),('r', 'xmm13', 16))
    # 0x142815316: subss xmm5, xmm3
    s.float_op('subss',('r', 'xmm5', 16),('r', 'xmm3', 16))
    # 0x14281531a: movaps xmm3, xmm1
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm1', 16))
    # 0x14281531d: addps xmm3, xmmword ptr [rip + 0x7fedcc]
    s.float_op('addps',('r', 'xmm3', 16),('m', None, None, 1, 5419122928, 16))
    # 0x142815324: ucomiss xmm7, xmm5
    s.compare_float(('r', 'xmm7', 16),('r', 'xmm5', 16))
    # 0x142815327: jae 0x1428153e0
    s.pc=s.read(('i', 5410739168, 8)) if s.condition('ae') else 5410738989
    return

def b_14281532d(s):
    # 0x14281532d: movshdup xmm3, xmm3
    s.simd_move('movshdup',('r', 'xmm3', 16),('r', 'xmm3', 16))
    # 0x142815331: addss xmm5, xmm3
    s.float_op('addss',('r', 'xmm5', 16),('r', 'xmm3', 16))
    # 0x142815335: xorps xmm3, xmm3
    s.float_op('xorps',('r', 'xmm3', 16),('r', 'xmm3', 16))
    # 0x142815338: sqrtss xmm3, xmm5
    s.float_op('sqrtss',('r', 'xmm3', 16),('r', 'xmm5', 16))
    # 0x14281533c: movss xmm4, dword ptr [rip + 0x621c0c]
    s.simd_move('movss',('r', 'xmm4', 16),('m', None, None, 1, 5417168720, 4))
    # 0x142815344: divss xmm4, xmm3
    s.float_op('divss',('r', 'xmm4', 16),('r', 'xmm3', 16))
    # 0x142815348: unpcklps xmm2, xmm0
    s.shuffle('unpcklps',('r', 'xmm2', 16),('r', 'xmm0', 16),0)
    # 0x14281534b: unpcklps xmm1, xmm6
    s.shuffle('unpcklps',('r', 'xmm1', 16),('r', 'xmm6', 16),0)
    # 0x14281534e: subps xmm2, xmm1
    s.float_op('subps',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x142815351: addss xmm14, xmm12
    s.float_op('addss',('r', 'xmm14', 16),('r', 'xmm12', 16))
    # 0x142815356: shufps xmm4, xmm4, 0
    s.shuffle('shufps',('r', 'xmm4', 16),('r', 'xmm4', 16),0)
    # 0x14281535a: movlhps xmm5, xmm14
    s.simd_move('movlhps',('r', 'xmm5', 16),('r', 'xmm14', 16))
    # 0x14281535e: shufps xmm2, xmm5, 0x24
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm5', 16),36)
    # 0x142815362: mulps xmm2, xmm4
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm4', 16))
    # 0x142815365: jmp 0x14281545b
    s.pc=s.read(('i', 5410739291, 8))
    return

def b_14281536a(s):
    # 0x14281536a: nop word ptr [rax + rax]
    s.pc=5410739056
    return

def b_142815370(s):
    # 0x142815370: xorps xmm3, xmm10
    s.float_op('xorps',('r', 'xmm3', 16),('r', 'xmm10', 16))
    # 0x142815374: subss xmm3, xmm13
    s.float_op('subss',('r', 'xmm3', 16),('r', 'xmm13', 16))
    # 0x142815379: xorps xmm10, xmm10
    s.float_op('xorps',('r', 'xmm10', 16),('r', 'xmm10', 16))
    # 0x14281537d: movss xmm7, dword ptr [rip + 0x621ba3]
    s.simd_move('movss',('r', 'xmm7', 16),('m', None, None, 1, 5417168680, 4))
    # 0x142815385: subss xmm7, xmm8
    s.float_op('subss',('r', 'xmm7', 16),('r', 'xmm8', 16))
    # 0x14281538a: ucomiss xmm10, xmm3
    s.compare_float(('r', 'xmm10', 16),('r', 'xmm3', 16))
    # 0x14281538e: jae 0x142815420
    s.pc=s.read(('i', 5410739232, 8)) if s.condition('ae') else 5410739092
    return

def b_142815394(s):
    # 0x142815394: addss xmm3, xmm7
    s.float_op('addss',('r', 'xmm3', 16),('r', 'xmm7', 16))
    # 0x142815398: xorps xmm2, xmm2
    s.float_op('xorps',('r', 'xmm2', 16),('r', 'xmm2', 16))
    # 0x14281539b: sqrtss xmm2, xmm3
    s.float_op('sqrtss',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x14281539f: movss xmm5, dword ptr [rip + 0x621ba9]
    s.simd_move('movss',('r', 'xmm5', 16),('m', None, None, 1, 5417168720, 4))
    # 0x1428153a7: divss xmm5, xmm2
    s.float_op('divss',('r', 'xmm5', 16),('r', 'xmm2', 16))
    # 0x1428153ab: subss xmm14, xmm12
    s.float_op('subss',('r', 'xmm14', 16),('r', 'xmm12', 16))
    # 0x1428153b0: subss xmm1, xmm4
    s.float_op('subss',('r', 'xmm1', 16),('r', 'xmm4', 16))
    # 0x1428153b4: subss xmm0, xmm6
    s.float_op('subss',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x1428153b8: unpcklps xmm1, xmm0
    s.shuffle('unpcklps',('r', 'xmm1', 16),('r', 'xmm0', 16),0)
    # 0x1428153bb: shufps xmm5, xmm5, 0
    s.shuffle('shufps',('r', 'xmm5', 16),('r', 'xmm5', 16),0)
    # 0x1428153bf: unpcklps xmm14, xmm3
    s.shuffle('unpcklps',('r', 'xmm14', 16),('r', 'xmm3', 16),0)
    # 0x1428153c3: movlhps xmm14, xmm1
    s.simd_move('movlhps',('r', 'xmm14', 16),('r', 'xmm1', 16))
    # 0x1428153c7: mulps xmm14, xmm5
    s.float_op('mulps',('r', 'xmm14', 16),('r', 'xmm5', 16))
    # 0x1428153cb: movaps xmm2, xmm14
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm14', 16))
    # 0x1428153cf: jmp 0x14281545b
    s.pc=s.read(('i', 5410739291, 8))
    return

def b_1428153d4(s):
    # 0x1428153d4: nop word ptr cs:[rax + rax]
    s.pc=5410739168
    return

def b_1428153e0(s):
    # 0x1428153e0: unpcklps xmm4, xmm5
    s.shuffle('unpcklps',('r', 'xmm4', 16),('r', 'xmm5', 16),0)
    # 0x1428153e3: subps xmm3, xmm4
    s.float_op('subps',('r', 'xmm3', 16),('r', 'xmm4', 16))
    # 0x1428153e6: movshdup xmm1, xmm3
    s.simd_move('movshdup',('r', 'xmm1', 16),('r', 'xmm3', 16))
    # 0x1428153ea: sqrtss xmm1, xmm1
    s.float_op('sqrtss',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x1428153ee: movss xmm2, dword ptr [rip + 0x621b5a]
    s.simd_move('movss',('r', 'xmm2', 16),('m', None, None, 1, 5417168720, 4))
    # 0x1428153f6: divss xmm2, xmm1
    s.float_op('divss',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x1428153fa: addss xmm0, xmm6
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x1428153fe: addss xmm14, xmm12
    s.float_op('addss',('r', 'xmm14', 16),('r', 'xmm12', 16))
    # 0x142815403: shufps xmm2, xmm2, 0
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm2', 16),0)
    # 0x142815407: movlhps xmm0, xmm3
    s.simd_move('movlhps',('r', 'xmm0', 16),('r', 'xmm3', 16))
    # 0x14281540a: shufps xmm14, xmm3, 0xd4
    s.shuffle('shufps',('r', 'xmm14', 16),('r', 'xmm3', 16),212)
    # 0x14281540f: shufps xmm0, xmm14, 0x28
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm14', 16),40)
    # 0x142815414: mulps xmm0, xmm2
    s.float_op('mulps',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x142815417: movaps xmm2, xmm0
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x14281541a: jmp 0x14281545b
    s.pc=s.read(('i', 5410739291, 8))
    return

def b_14281541c(s):
    # 0x14281541c: nop dword ptr [rax]
    s.pc=5410739232
    return

def b_142815420(s):
    # 0x142815420: movaps xmm4, xmm13
    s.simd_move('movaps',('r', 'xmm4', 16),('r', 'xmm13', 16))
    # 0x142815424: movss xmm4, xmm7
    s.simd_move('movss',('r', 'xmm4', 16),('r', 'xmm7', 16))
    # 0x142815428: movss xmm5, xmm3
    s.simd_move('movss',('r', 'xmm5', 16),('r', 'xmm3', 16))
    # 0x14281542c: subps xmm4, xmm5
    s.float_op('subps',('r', 'xmm4', 16),('r', 'xmm5', 16))
    # 0x14281542f: xorps xmm3, xmm3
    s.float_op('xorps',('r', 'xmm3', 16),('r', 'xmm3', 16))
    # 0x142815432: sqrtss xmm3, xmm4
    s.float_op('sqrtss',('r', 'xmm3', 16),('r', 'xmm4', 16))
    # 0x142815436: movss xmm5, dword ptr [rip + 0x621b12]
    s.simd_move('movss',('r', 'xmm5', 16),('m', None, None, 1, 5417168720, 4))
    # 0x14281543e: divss xmm5, xmm3
    s.float_op('divss',('r', 'xmm5', 16),('r', 'xmm3', 16))
    # 0x142815442: addss xmm0, xmm6
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x142815446: subss xmm2, xmm1
    s.float_op('subss',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x14281544a: movlhps xmm2, xmm0
    s.simd_move('movlhps',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x14281544d: shufps xmm5, xmm5, 0
    s.shuffle('shufps',('r', 'xmm5', 16),('r', 'xmm5', 16),0)
    # 0x142815451: shufps xmm4, xmm2, 0x24
    s.shuffle('shufps',('r', 'xmm4', 16),('r', 'xmm2', 16),36)
    # 0x142815455: mulps xmm4, xmm5
    s.float_op('mulps',('r', 'xmm4', 16),('r', 'xmm5', 16))
    # 0x142815458: movaps xmm2, xmm4
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm4', 16))
    s.pc=5410739291
    return

def b_14281545b(s):
    # 0x14281545b: movss xmm7, dword ptr [rbp + 0x390]
    s.simd_move('movss',('r', 'xmm7', 16),('m', 'rbp', None, 1, 912, 4))
    # 0x142815463: movss xmm10, dword ptr [rbp + 0x360]
    s.simd_move('movss',('r', 'xmm10', 16),('m', 'rbp', None, 1, 864, 4))
    # 0x14281546c: movaps xmmword ptr [rbp + 0x3d0], xmm2
    s.simd_move('movaps',('m', 'rbp', None, 1, 976, 16),('r', 'xmm2', 16))
    # 0x142815473: mov rcx, r14
    s.write(('r', 'rcx', 8),s.read(('r', 'r14', 8)))
    # 0x142815476: call 0x1424e5b90
    s.push(5410739323)
    s.pc=s.read(('i', 5407398800, 8))
    return

def b_14281547b(s):
    # 0x14281547b: nop 
    # 0x14281547c: movss xmm14, dword ptr [rip + 0x621aa3]
    s.simd_move('movss',('r', 'xmm14', 16),('m', None, None, 1, 5417168680, 4))
    # 0x142815485: mov rbx, rax
    s.write(('r', 'rbx', 8),s.read(('r', 'rax', 8)))
    # 0x142815488: movaps xmm0, xmmword ptr [rbp - 0x50]
    s.simd_move('movaps',('r', 'xmm0', 16),('m', 'rbp', None, 1, -80, 16))
    # 0x14281548c: movaps xmmword ptr [rbp + 0x3d0], xmm0
    s.simd_move('movaps',('m', 'rbp', None, 1, 976, 16),('r', 'xmm0', 16))
    # 0x142815493: mov rcx, r14
    s.write(('r', 'rcx', 8),s.read(('r', 'r14', 8)))
    # 0x142815496: call 0x141e3c5c0
    s.push(5410739355)
    s.pc=s.read(('i', 5400413632, 8))
    return

def b_14281549b(s):
    # 0x14281549b: nop 
    # 0x14281549c: mov r12, rax
    s.write(('r', 'r12', 8),s.read(('r', 'rax', 8)))
    # 0x14281549f: addss xmm11, xmm15
    s.float_op('addss',('r', 'xmm11', 16),('r', 'xmm15', 16))
    # 0x1428154a4: mulss xmm11, dword ptr [rbp + 0x320]
    s.float_op('mulss',('r', 'xmm11', 16),('m', 'rbp', None, 1, 800, 4))
    # 0x1428154ad: movss dword ptr [rbp + 0x3d0], xmm7
    s.simd_move('movss',('m', 'rbp', None, 1, 976, 4),('r', 'xmm7', 16))
    # 0x1428154b5: movss dword ptr [rbp + 0x3d4], xmm11
    s.simd_move('movss',('m', 'rbp', None, 1, 980, 4),('r', 'xmm11', 16))
    # 0x1428154be: mov dword ptr [rbp + 0x3d8], 0x3dcccccd
    s.write(('m', 'rbp', None, 1, 984, 4),s.read(('i', 1036831949, 4)))
    # 0x1428154c8: mov rcx, r14
    s.write(('r', 'rcx', 8),s.read(('r', 'r14', 8)))
    # 0x1428154cb: call 0x140df4560
    s.push(5410739408)
    s.pc=s.read(('i', 5383341408, 8))
    return

def b_1428154d0(s):
    # 0x1428154d0: nop 
    # 0x1428154d1: mov rsi, rax
    s.write(('r', 'rsi', 8),s.read(('r', 'rax', 8)))
    # 0x1428154d4: movss xmm8, dword ptr [rbp + 0x33c]
    s.simd_move('movss',('r', 'xmm8', 16),('m', 'rbp', None, 1, 828, 4))
    # 0x1428154dd: lea rcx, [rbp + 0x340]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 832, 8)))
    # 0x1428154e4: call 0x140e02880
    s.push(5410739433)
    s.pc=s.read(('i', 5383399552, 8))
    return

def b_1428154e9(s):
    # 0x1428154e9: nop 
    # 0x1428154ea: addss xmm8, dword ptr [rip + 0x621a41]
    s.float_op('addss',('r', 'xmm8', 16),('m', None, None, 1, 5417168692, 4))
    # 0x1428154f3: movss xmm1, dword ptr [rbp + 0x2a0]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rbp', None, 1, 672, 4))
    # 0x1428154fb: divss xmm1, xmm8
    s.float_op('divss',('r', 'xmm1', 16),('r', 'xmm8', 16))
    # 0x142815500: mulss xmm0, dword ptr [rip + 0x622374]
    s.float_op('mulss',('r', 'xmm0', 16),('m', None, None, 1, 5417171068, 4))
    # 0x142815508: addss xmm0, xmm1
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x14281550c: xorps xmm1, xmm1
    s.float_op('xorps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x14281550f: maxss xmm1, xmm0
    s.float_op('maxss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142815513: movaps xmm0, xmm14
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm14', 16))
    # 0x142815517: minss xmm0, xmm1
    s.float_op('minss',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x14281551b: call 0x141e3c420
    s.push(5410739488)
    s.pc=s.read(('i', 5400413216, 8))
    return

def b_142815520(s):
    # 0x142815520: nop 
    # 0x142815521: mov ecx, 2
    s.write(('r', 'ecx', 4),s.read(('i', 2, 4)))
    # 0x142815526: cmp byte ptr [rbp + 0x200], 0
    s.integer('cmp',[('m', 'rbp', None, 1, 512, 1), ('i', 0, 1)])
    # 0x14281552d: jne 0x142815575
    s.pc=s.read(('i', 5410739573, 8)) if s.condition('ne') else 5410739503
    return

def b_14281552f(s):
    # 0x14281552f: cmp byte ptr [rbp + 0xe0], 0
    s.integer('cmp',[('m', 'rbp', None, 1, 224, 1), ('i', 0, 1)])
    # 0x142815536: je 0x142815570
    s.pc=s.read(('i', 5410739568, 8)) if s.condition('e') else 5410739512
    return

def b_142815538(s):
    # 0x142815538: movss xmm2, dword ptr [rbp + 0xf0]
    s.simd_move('movss',('r', 'xmm2', 16),('m', 'rbp', None, 1, 240, 4))
    # 0x142815540: mulss xmm9, xmm2
    s.float_op('mulss',('r', 'xmm9', 16),('r', 'xmm2', 16))
    # 0x142815545: movss xmm1, dword ptr [rip + 0x621a03]
    s.simd_move('movss',('r', 'xmm1', 16),('m', None, None, 1, 5417168720, 4))
    # 0x14281554d: ucomiss xmm1, xmm9
    s.compare_float(('r', 'xmm1', 16),('r', 'xmm9', 16))
    # 0x142815551: ja 0x142815575
    s.pc=s.read(('i', 5410739573, 8)) if s.condition('a') else 5410739539
    return

def b_142815553(s):
    # 0x142815553: movaps xmm0, xmm14
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm14', 16))
    # 0x142815557: subss xmm0, xmm10
    s.float_op('subss',('r', 'xmm0', 16),('r', 'xmm10', 16))
    # 0x14281555c: mulss xmm0, xmm2
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x142815560: ucomiss xmm1, xmm0
    s.compare_float(('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142815563: ja 0x142815575
    s.pc=s.read(('i', 5410739573, 8)) if s.condition('a') else 5410739557
    return

def b_142815565(s):
    # 0x142815565: nop word ptr cs:[rax + rax]
    s.pc=5410739568
    return

def b_142815570(s):
    # 0x142815570: mov ecx, 1
    s.write(('r', 'ecx', 4),s.read(('i', 1, 4)))
    s.pc=5410739573
    return

def b_142815575(s):
    # 0x142815575: mov edx, dword ptr [rbp + 0x1e8]
    s.write(('r', 'edx', 4),s.read(('m', 'rbp', None, 1, 488, 4)))
    # 0x14281557b: mov dword ptr [rbp + 0x3d8], edx
    s.write(('m', 'rbp', None, 1, 984, 4),s.read(('r', 'edx', 4)))
    # 0x142815581: mov rdx, qword ptr [rbp + 0x1e0]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 480, 8)))
    # 0x142815588: mov qword ptr [rbp + 0x3d0], rdx
    s.write(('m', 'rbp', None, 1, 976, 8),s.read(('r', 'rdx', 8)))
    # 0x14281558f: mov dword ptr [rbp + 0x3dc], 0
    s.write(('m', 'rbp', None, 1, 988, 4),s.read(('i', 0, 4)))
    # 0x142815599: mov qword ptr [rbp + 0x3e0], r12
    s.write(('m', 'rbp', None, 1, 992, 8),s.read(('r', 'r12', 8)))
    # 0x1428155a0: mov dword ptr [rbp + 0x3e8], esi
    s.write(('m', 'rbp', None, 1, 1000, 4),s.read(('r', 'esi', 4)))
    # 0x1428155a6: shr rsi, 0x20
    s.integer('shr',[('r', 'rsi', 8), ('i', 32, 1)])
    # 0x1428155aa: mov word ptr [rbp + 0x3ec], si
    s.write(('m', 'rbp', None, 1, 1004, 2),s.read(('r', 'si', 2)))
    # 0x1428155b1: mov word ptr [rbp + 0x3ee], ax
    s.write(('m', 'rbp', None, 1, 1006, 2),s.read(('r', 'ax', 2)))
    # 0x1428155b8: mov qword ptr [rbp + 0x3f0], rbx
    s.write(('m', 'rbp', None, 1, 1008, 8),s.read(('r', 'rbx', 8)))
    # 0x1428155bf: mov eax, dword ptr [rbp + 0x3b4]
    s.write(('r', 'eax', 4),s.read(('m', 'rbp', None, 1, 948, 4)))
    # 0x1428155c5: mov dword ptr [rbp + 0x3f8], eax
    s.write(('m', 'rbp', None, 1, 1016, 4),s.read(('r', 'eax', 4)))
    # 0x1428155cb: mov qword ptr [rbp + 0x3fc], 0
    s.write(('m', 'rbp', None, 1, 1020, 8),s.read(('i', 0, 8)))
    # 0x1428155d6: mov dword ptr [rbp + 0x404], r13d
    s.write(('m', 'rbp', None, 1, 1028, 4),s.read(('r', 'r13d', 4)))
    # 0x1428155dd: mov dword ptr [rbp + 0x408], 0
    s.write(('m', 'rbp', None, 1, 1032, 4),s.read(('i', 0, 4)))
    # 0x1428155e7: mov dword ptr [rbp + 0x40c], ecx
    s.write(('m', 'rbp', None, 1, 1036, 4),s.read(('r', 'ecx', 4)))
    # 0x1428155ed: mov rcx, qword ptr [rbp + 0x568]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 1384, 8)))
    # 0x1428155f4: mov rdx, r14
    s.write(('r', 'rdx', 8),s.read(('r', 'r14', 8)))
    # 0x1428155f7: call 0x142816720
    s.push(5410739708)
    s.pc=s.read(('i', 5410744096, 8))
    return

def b_1428155fc(s):
    # 0x1428155fc: nop 
    # 0x1428155fd: cmp qword ptr [rbp + 0x210], 0
    s.integer('cmp',[('m', 'rbp', None, 1, 528, 8), ('i', 0, 8)])
    # 0x142815605: jne 0x142814ef0
    s.pc=s.read(('i', 5410737904, 8)) if s.condition('ne') else 5410739723
    return

def b_14281560b(s):
    # 0x14281560b: movaps xmm0, xmmword ptr [rip + 0x6222ce]
    s.simd_move('movaps',('r', 'xmm0', 16),('m', None, None, 1, 5417171168, 16))
    # 0x142815612: movss xmm0, xmm11
    s.simd_move('movss',('r', 'xmm0', 16),('r', 'xmm11', 16))
    # 0x142815617: shufps xmm0, xmm0, 0x40
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm0', 16),64)
    # 0x14281561b: movaps xmm1, xmm12
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm12', 16))
    # 0x14281561f: movss xmm2, dword ptr [rip + 0x621901]
    s.simd_move('movss',('r', 'xmm2', 16),('m', None, None, 1, 5417168680, 4))
    # 0x142815627: movsd xmm1, xmm2
    s.simd_move('movsd',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x14281562b: shufps xmm12, xmm1, 0x24
    s.shuffle('shufps',('r', 'xmm12', 16),('r', 'xmm1', 16),36)
    # 0x142815630: mulps xmm12, xmm0
    s.float_op('mulps',('r', 'xmm12', 16),('r', 'xmm0', 16))
    # 0x142815634: mulps xmm12, xmmword ptr [rip + 0x8208b4]
    s.float_op('mulps',('r', 'xmm12', 16),('m', None, None, 1, 5419261680, 16))
    # 0x14281563c: movsd xmm0, qword ptr [rbp + 0x1e0]
    s.simd_move('movsd',('r', 'xmm0', 16),('m', 'rbp', None, 1, 480, 8))
    # 0x142815644: movss xmm1, dword ptr [rbp + 0x1e8]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rbp', None, 1, 488, 4))
    # 0x14281564c: unpcklpd xmm2, xmm1
    s.shuffle('unpcklpd',('r', 'xmm2', 16),('r', 'xmm1', 16),0)
    # 0x142815650: movaps xmm10, xmm0
    s.simd_move('movaps',('r', 'xmm10', 16),('r', 'xmm0', 16))
    # 0x142815654: shufps xmm10, xmm2, 0x24
    s.shuffle('shufps',('r', 'xmm10', 16),('r', 'xmm2', 16),36)
    # 0x142815659: subps xmm10, xmm12
    s.float_op('subps',('r', 'xmm10', 16),('r', 'xmm12', 16))
    # 0x14281565d: shufps xmm12, xmm12, 0xe8
    s.shuffle('shufps',('r', 'xmm12', 16),('r', 'xmm12', 16),232)
    # 0x142815662: unpcklps xmm0, xmm1
    s.shuffle('unpcklps',('r', 'xmm0', 16),('r', 'xmm1', 16),0)
    # 0x142815665: addps xmm0, xmm12
    s.float_op('addps',('r', 'xmm0', 16),('r', 'xmm12', 16))
    # 0x142815669: movlps qword ptr [rbp + 0x3d0], xmm0
    s.simd_move('movlps',('m', 'rbp', None, 1, 976, 8),('r', 'xmm0', 16))
    # 0x142815670: movshdup xmm9, xmm10
    s.simd_move('movshdup',('r', 'xmm9', 16),('r', 'xmm10', 16))
    # 0x142815675: lea rcx, [rbp + 0x180]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 384, 8)))
    # 0x14281567c: mov rdx, r14
    s.write(('r', 'rdx', 8),s.read(('r', 'r14', 8)))
    # 0x14281567f: movaps xmm2, xmm9
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm9', 16))
    # 0x142815683: call 0x140df4540
    s.push(5410739848)
    s.pc=s.read(('i', 5383341376, 8))
    return

def b_142815688(s):
    # 0x142815688: nop 
    # 0x142815689: movsd xmm11, qword ptr [rbp + 0x180]
    s.simd_move('movsd',('r', 'xmm11', 16),('m', 'rbp', None, 1, 384, 8))
    # 0x142815692: movss xmm0, dword ptr [rbp + 0x184]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rbp', None, 1, 388, 4))
    # 0x14281569a: movss xmm1, dword ptr [rbp + 0x188]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rbp', None, 1, 392, 4))
    # 0x1428156a2: subss xmm0, xmm9
    s.float_op('subss',('r', 'xmm0', 16),('r', 'xmm9', 16))
    # 0x1428156a7: mulss xmm0, xmm0
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x1428156ab: movaps xmm2, xmm1
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x1428156ae: movlhps xmm2, xmm11
    s.simd_move('movlhps',('r', 'xmm2', 16),('r', 'xmm11', 16))
    # 0x1428156b2: shufps xmm2, xmm11, 0xe2
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm11', 16),226)
    # 0x1428156b7: movaps xmm3, xmm10
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm10', 16))
    # 0x1428156bb: shufps xmm3, xmm10, 0xe8
    s.shuffle('shufps',('r', 'xmm3', 16),('r', 'xmm10', 16),232)
    # 0x1428156c0: subps xmm2, xmm3
    s.float_op('subps',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x1428156c3: mulps xmm2, xmm2
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm2', 16))
    # 0x1428156c6: addss xmm0, xmm2
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x1428156ca: movshdup xmm2, xmm2
    s.simd_move('movshdup',('r', 'xmm2', 16),('r', 'xmm2', 16))
    # 0x1428156ce: addss xmm2, xmm0
    s.float_op('addss',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x1428156d2: sqrtss xmm2, xmm2
    s.float_op('sqrtss',('r', 'xmm2', 16),('r', 'xmm2', 16))
    # 0x1428156d6: ucomiss xmm2, dword ptr [rip + 0x625afb]
    s.compare_float(('r', 'xmm2', 16),('m', None, None, 1, 5417185752, 4))
    # 0x1428156dd: jbe 0x142814ef0
    s.pc=s.read(('i', 5410737904, 8)) if s.condition('be') else 5410739939
    return

def b_1428156e3(s):
    # 0x1428156e3: movaps xmm3, xmm13
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm13', 16))
    # 0x1428156e7: xorps xmm4, xmm4
    s.float_op('xorps',('r', 'xmm4', 16),('r', 'xmm4', 16))
    # 0x1428156ea: mulss xmm3, xmm4
    s.float_op('mulss',('r', 'xmm3', 16),('r', 'xmm4', 16))
    # 0x1428156ee: movaps xmm0, xmm6
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x1428156f1: mulss xmm0, dword ptr [rip + 0x6220f7]
    s.float_op('mulss',('r', 'xmm0', 16),('m', None, None, 1, 5417170928, 4))
    # 0x1428156f9: addss xmm0, xmm3
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm3', 16))
    # 0x1428156fd: movss dword ptr [rbp + 0x15c], xmm7
    s.simd_move('movss',('m', 'rbp', None, 1, 348, 4),('r', 'xmm7', 16))
    # 0x142815705: movss dword ptr [rbp + 0x160], xmm2
    s.simd_move('movss',('m', 'rbp', None, 1, 352, 4),('r', 'xmm2', 16))
    # 0x14281570d: mov dword ptr [rbp + 0x164], 0x3dcccccd
    s.write(('m', 'rbp', None, 1, 356, 4),s.read(('i', 1036831949, 4)))
    # 0x142815717: movss xmm3, dword ptr [rip + 0x621809]
    s.simd_move('movss',('r', 'xmm3', 16),('m', None, None, 1, 5417168680, 4))
    # 0x14281571f: movaps xmm2, xmm3
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x142815722: movlhps xmm2, xmm1
    s.simd_move('movlhps',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x142815725: shufps xmm11, xmm2, 0x24
    s.shuffle('shufps',('r', 'xmm11', 16),('r', 'xmm2', 16),36)
    # 0x14281572a: mulps xmm11, xmmword ptr [rip + 0xaff68e]
    s.float_op('mulps',('r', 'xmm11', 16),('m', None, None, 1, 5422271936, 16))
    # 0x142815732: mulps xmm10, xmmword ptr [rip + 0x8207b6]
    s.float_op('mulps',('r', 'xmm10', 16),('m', None, None, 1, 5419261680, 16))
    # 0x14281573a: movaps xmm2, xmm13
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm13', 16))
    # 0x14281573e: mulps xmm2, xmm3
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x142815741: movshdup xmm1, xmm2
    s.simd_move('movshdup',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x142815745: subss xmm1, xmm13
    s.float_op('subss',('r', 'xmm1', 16),('r', 'xmm13', 16))
    # 0x14281574a: unpcklps xmm0, xmm6
    s.shuffle('unpcklps',('r', 'xmm0', 16),('r', 'xmm6', 16),0)
    # 0x14281574d: subps xmm0, xmm2
    s.float_op('subps',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x142815750: ucomiss xmm4, xmm0
    s.compare_float(('r', 'xmm4', 16),('r', 'xmm0', 16))
    # 0x142815753: jae 0x142815793
    s.pc=s.read(('i', 5410740115, 8)) if s.condition('ae') else 5410740053
    return

def b_142815755(s):
    # 0x142815755: movss xmm13, xmm14
    s.simd_move('movss',('r', 'xmm13', 16),('r', 'xmm14', 16))
    # 0x14281575a: addps xmm13, xmm0
    s.float_op('addps',('r', 'xmm13', 16),('r', 'xmm0', 16))
    # 0x14281575e: xorps xmm0, xmm0
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x142815761: sqrtss xmm0, xmm13
    s.float_op('sqrtss',('r', 'xmm0', 16),('r', 'xmm13', 16))
    # 0x142815766: addss xmm1, xmm14
    s.float_op('addss',('r', 'xmm1', 16),('r', 'xmm14', 16))
    # 0x14281576b: movss xmm2, dword ptr [rip + 0x6217dd]
    s.simd_move('movss',('r', 'xmm2', 16),('m', None, None, 1, 5417168720, 4))
    # 0x142815773: divss xmm2, xmm0
    s.float_op('divss',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x142815777: xorps xmm0, xmm0
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x14281577a: subss xmm0, xmm6
    s.float_op('subss',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x14281577e: movlhps xmm0, xmm2
    s.simd_move('movlhps',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x142815781: shufps xmm13, xmm0, 0x21
    s.shuffle('shufps',('r', 'xmm13', 16),('r', 'xmm0', 16),33)
    # 0x142815786: unpcklps xmm2, xmm1
    s.shuffle('unpcklps',('r', 'xmm2', 16),('r', 'xmm1', 16),0)
    # 0x142815789: shufps xmm2, xmm2, 0x10
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm2', 16),16)
    # 0x14281578d: mulps xmm2, xmm13
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm13', 16))
    # 0x142815791: jmp 0x1428157d1
    s.pc=s.read(('i', 5410740177, 8))
    return

def b_142815793(s):
    # 0x142815793: movaps xmm2, xmmword ptr [rip + 0xa62716]
    s.simd_move('movaps',('r', 'xmm2', 16),('m', None, None, 1, 5421629104, 16))
    # 0x14281579a: shufps xmm13, xmm2, 1
    s.shuffle('shufps',('r', 'xmm13', 16),('r', 'xmm2', 16),1)
    # 0x14281579f: shufps xmm13, xmm2, 0xe2
    s.shuffle('shufps',('r', 'xmm13', 16),('r', 'xmm2', 16),226)
    # 0x1428157a4: movlhps xmm1, xmm6
    s.simd_move('movlhps',('r', 'xmm1', 16),('r', 'xmm6', 16))
    # 0x1428157a7: shufps xmm0, xmm1, 0x24
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm1', 16),36)
    # 0x1428157ab: movaps xmm1, xmm13
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm13', 16))
    # 0x1428157af: subps xmm1, xmm0
    s.float_op('subps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x1428157b2: addps xmm0, xmm13
    s.float_op('addps',('r', 'xmm0', 16),('r', 'xmm13', 16))
    # 0x1428157b6: movss xmm0, xmm1
    s.simd_move('movss',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x1428157ba: sqrtss xmm1, xmm1
    s.float_op('sqrtss',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x1428157be: movss xmm2, dword ptr [rip + 0x62178a]
    s.simd_move('movss',('r', 'xmm2', 16),('m', None, None, 1, 5417168720, 4))
    # 0x1428157c6: divss xmm2, xmm1
    s.float_op('divss',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x1428157ca: shufps xmm2, xmm2, 0
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm2', 16),0)
    # 0x1428157ce: mulps xmm2, xmm0
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm0', 16))
    s.pc=5410740177
    return

def b_1428157d1(s):
    # 0x1428157d1: movaps xmmword ptr [rbp + 0x3d0], xmm2
    s.simd_move('movaps',('m', 'rbp', None, 1, 976, 16),('r', 'xmm2', 16))
    # 0x1428157d8: mov rcx, r14
    s.write(('r', 'rcx', 8),s.read(('r', 'r14', 8)))
    # 0x1428157db: call 0x1424e5b90
    s.push(5410740192)
    s.pc=s.read(('i', 5407398800, 8))
    return

def b_1428157e0(s):
    # 0x1428157e0: nop 
    # 0x1428157e1: mov rsi, rax
    s.write(('r', 'rsi', 8),s.read(('r', 'rax', 8)))
    # 0x1428157e4: lea rcx, [rbp - 0x50]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, -80, 8)))
    # 0x1428157e8: call 0x141e3c5c0
    s.push(5410740205)
    s.pc=s.read(('i', 5400413632, 8))
    return

def b_1428157ed(s):
    # 0x1428157ed: nop 
    # 0x1428157ee: mov rbx, rax
    s.write(('r', 'rbx', 8),s.read(('r', 'rax', 8)))
    # 0x1428157f1: lea rcx, [rbp + 0x15c]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 348, 8)))
    # 0x1428157f8: call 0x140df4560
    s.push(5410740221)
    s.pc=s.read(('i', 5383341408, 8))
    return

def b_1428157fd(s):
    # 0x1428157fd: nop 
    # 0x1428157fe: mov r12, rax
    s.write(('r', 'r12', 8),s.read(('r', 'rax', 8)))
    # 0x142815801: xorps xmm0, xmm0
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x142815804: call 0x141e3c420
    s.push(5410740233)
    s.pc=s.read(('i', 5400413216, 8))
    return

def b_142815809(s):
    # 0x142815809: nop 
    # 0x14281580a: addps xmm10, xmm11
    s.float_op('addps',('r', 'xmm10', 16),('r', 'xmm11', 16))
    # 0x14281580e: movaps xmmword ptr [rbp + 0x3d0], xmm10
    s.simd_move('movaps',('m', 'rbp', None, 1, 976, 16),('r', 'xmm10', 16))
    # 0x142815816: mov qword ptr [rbp + 0x3e0], rbx
    s.write(('m', 'rbp', None, 1, 992, 8),s.read(('r', 'rbx', 8)))
    # 0x14281581d: mov dword ptr [rbp + 0x3e8], r12d
    s.write(('m', 'rbp', None, 1, 1000, 4),s.read(('r', 'r12d', 4)))
    # 0x142815824: shr r12, 0x20
    s.integer('shr',[('r', 'r12', 8), ('i', 32, 1)])
    # 0x142815828: mov word ptr [rbp + 0x3ec], r12w
    s.write(('m', 'rbp', None, 1, 1004, 2),s.read(('r', 'r12w', 2)))
    # 0x142815830: mov word ptr [rbp + 0x3ee], ax
    s.write(('m', 'rbp', None, 1, 1006, 2),s.read(('r', 'ax', 2)))
    # 0x142815837: mov qword ptr [rbp + 0x3f0], rsi
    s.write(('m', 'rbp', None, 1, 1008, 8),s.read(('r', 'rsi', 8)))
    # 0x14281583e: mov eax, dword ptr [rbp + 0x3b4]
    s.write(('r', 'eax', 4),s.read(('m', 'rbp', None, 1, 948, 4)))
    # 0x142815844: mov dword ptr [rbp + 0x3f8], eax
    s.write(('m', 'rbp', None, 1, 1016, 4),s.read(('r', 'eax', 4)))
    # 0x14281584a: mov qword ptr [rbp + 0x3fc], 0
    s.write(('m', 'rbp', None, 1, 1020, 8),s.read(('i', 0, 8)))
    # 0x142815855: mov dword ptr [rbp + 0x404], r13d
    s.write(('m', 'rbp', None, 1, 1028, 4),s.read(('r', 'r13d', 4)))
    # 0x14281585c: movabs rax, 0x200000000
    s.write(('r', 'rax', 8),s.read(('i', 8589934592, 8)))
    # 0x142815866: mov qword ptr [rbp + 0x408], rax
    s.write(('m', 'rbp', None, 1, 1032, 8),s.read(('r', 'rax', 8)))
    # 0x14281586d: mov rcx, qword ptr [rbp + 0x568]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 1384, 8)))
    # 0x142815874: mov rdx, r14
    s.write(('r', 'rdx', 8),s.read(('r', 'r14', 8)))
    # 0x142815877: call 0x142816720
    s.push(5410740348)
    s.pc=s.read(('i', 5410744096, 8))
    return

def b_14281587c(s):
    # 0x14281587c: nop 
    # 0x14281587d: jmp 0x142814ef0
    s.pc=s.read(('i', 5410737904, 8))
    return

def b_142815882(s):
    # 0x142815882: nop word ptr cs:[rax + rax]
    s.pc=5410740368
    return

def b_142815890(s):
    # 0x142815890: mov rdx, qword ptr [rbp + 0x2e0]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 736, 8)))
    # 0x142815897: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x14281589a: je 0x1428158b2
    s.pc=s.read(('i', 5410740402, 8)) if s.condition('e') else 5410740380
    return

def b_14281589c(s):
    # 0x14281589c: mov rcx, qword ptr [rbp + 0x2e8]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 744, 8)))
    # 0x1428158a3: shl rdx, 3
    s.integer('shl',[('r', 'rdx', 8), ('i', 3, 1)])
    # 0x1428158a7: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x1428158ad: call 0x1406abac0
    s.push(5410740402)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_1428158b2(s):
    # 0x1428158b2: mov rdx, qword ptr [rbp + 0x2f8]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 760, 8)))
    # 0x1428158b9: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x1428158bc: mov rbx, qword ptr [rbp + 0x1d8]
    s.write(('r', 'rbx', 8),s.read(('m', 'rbp', None, 1, 472, 8)))
    # 0x1428158c3: mov rsi, qword ptr [rbp + 0x100]
    s.write(('r', 'rsi', 8),s.read(('m', 'rbp', None, 1, 256, 8)))
    # 0x1428158ca: je 0x1428158e2
    s.pc=s.read(('i', 5410740450, 8)) if s.condition('e') else 5410740428
    return

def b_1428158cc(s):
    # 0x1428158cc: mov rcx, qword ptr [rbp + 0x300]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 768, 8)))
    # 0x1428158d3: shl rdx, 2
    s.integer('shl',[('r', 'rdx', 8), ('i', 2, 1)])
    # 0x1428158d7: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x1428158dd: call 0x1406abac0
    s.push(5410740450)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_1428158e2(s):
    # 0x1428158e2: mov rdx, qword ptr [rbp + 0x1a8]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 424, 8)))
    # 0x1428158e9: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x1428158ec: je 0x142814b70
    s.pc=s.read(('i', 5410737008, 8)) if s.condition('e') else 5410740466
    return

def b_1428158f2(s):
    # 0x1428158f2: mov rcx, qword ptr [rbp + 0x1b0]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 432, 8)))
    # 0x1428158f9: shl rdx, 2
    s.integer('shl',[('r', 'rdx', 8), ('i', 2, 1)])
    # 0x1428158fd: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x142815903: call 0x1406abac0
    s.push(5410740488)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_142815908(s):
    # 0x142815908: jmp 0x142814b70
    s.pc=s.read(('i', 5410737008, 8))
    return

def b_14281590d(s):
    # 0x14281590d: mov rax, qword ptr [rbp + 0x290]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 656, 8)))
    # 0x142815914: mov qword ptr [rbp + 0x1d0], rax
    s.write(('m', 'rbp', None, 1, 464, 8),s.read(('r', 'rax', 8)))
    s.pc=5410740507
    return

def b_14281591b(s):
    # 0x14281591b: mov rax, qword ptr [rbp + 0x2c0]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 704, 8)))
    # 0x142815922: test rax, rax
    s.integer('test',[('r', 'rax', 8), ('r', 'rax', 8)])
    # 0x142815925: je 0x142815941
    s.pc=s.read(('i', 5410740545, 8)) if s.condition('e') else 5410740519
    return

def b_142815927(s):
    # 0x142815927: mov rcx, qword ptr [rbp + 0x2c8]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 712, 8)))
    # 0x14281592e: shl rax, 3
    s.integer('shl',[('r', 'rax', 8), ('i', 3, 1)])
    # 0x142815932: lea rdx, [rax + rax*2]
    s.write(('r', 'rdx', 8),s.address(('m', 'rax', 'rax', 2, 0, 8)))
    # 0x142815936: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x14281593c: call 0x1406abac0
    s.push(5410740545)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_142815941(s):
    # 0x142815941: mov rdx, qword ptr [rbp + 0x258]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 600, 8)))
    # 0x142815948: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x14281594b: je 0x142815963
    s.pc=s.read(('i', 5410740579, 8)) if s.condition('e') else 5410740557
    return

def b_14281594d(s):
    # 0x14281594d: mov rcx, qword ptr [rbp + 0x260]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 608, 8)))
    # 0x142815954: shl rdx, 3
    s.integer('shl',[('r', 'rdx', 8), ('i', 3, 1)])
    # 0x142815958: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x14281595e: call 0x1406abac0
    s.push(5410740579)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_142815963(s):
    # 0x142815963: mov rdx, qword ptr [rbp + 0x270]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 624, 8)))
    # 0x14281596a: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x14281596d: je 0x142815985
    s.pc=s.read(('i', 5410740613, 8)) if s.condition('e') else 5410740591
    return

def b_14281596f(s):
    # 0x14281596f: mov rcx, qword ptr [rbp + 0x278]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 632, 8)))
    # 0x142815976: shl rdx, 2
    s.integer('shl',[('r', 'rdx', 8), ('i', 2, 1)])
    # 0x14281597a: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x142815980: call 0x1406abac0
    s.push(5410740613)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_142815985(s):
    # 0x142815985: mov rdx, qword ptr [rbp + 0x298]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 664, 8)))
    # 0x14281598c: mov r9, qword ptr [rbp + 0x318]
    s.write(('r', 'r9', 8),s.read(('m', 'rbp', None, 1, 792, 8)))
    # 0x142815993: mov rcx, qword ptr [rbp + 0x350]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 848, 8)))
    # 0x14281599a: mov r11, qword ptr [rbp + 0xc8]
    s.write(('r', 'r11', 8),s.read(('m', 'rbp', None, 1, 200, 8)))
    # 0x1428159a1: mov r8, qword ptr [rbp + 0x3c8]
    s.write(('r', 'r8', 8),s.read(('m', 'rbp', None, 1, 968, 8)))
    # 0x1428159a8: movaps xmm3, xmmword ptr [rip + 0x621e71]
    s.simd_move('movaps',('r', 'xmm3', 16),('m', None, None, 1, 5417170976, 16))
    # 0x1428159af: test r11b, 1
    s.integer('test',[('r', 'r11b', 1), ('i', 1, 1)])
    # 0x1428159b3: je 0x142814590
    s.pc=s.read(('i', 5410735504, 8)) if s.condition('e') else 5410740665
    return

def b_1428159b9(s):
    # 0x1428159b9: jmp 0x14281432b
    s.pc=s.read(('i', 5410734891, 8))
    return

def b_1428159be(s):
    # 0x1428159be: mov qword ptr [rbp + 0x420], 0
    s.write(('m', 'rbp', None, 1, 1056, 8),s.read(('i', 0, 8)))
    # 0x1428159c9: mov rdi, r9
    s.write(('r', 'rdi', 8),s.read(('r', 'r9', 8)))
    # 0x1428159cc: jmp 0x1428146c3
    s.pc=s.read(('i', 5410735811, 8))
    return

def b_1428159d1(s):
    # 0x1428159d1: mov qword ptr [rbp + 0x420], 0
    s.write(('m', 'rbp', None, 1, 1056, 8),s.read(('i', 0, 8)))
    # 0x1428159dc: mov qword ptr [rbp + 0x388], 0
    s.write(('m', 'rbp', None, 1, 904, 8),s.read(('i', 0, 8)))
    # 0x1428159e7: mov r8, rcx
    s.write(('r', 'r8', 8),s.read(('r', 'rcx', 8)))
    # 0x1428159ea: jmp 0x1428146ca
    s.pc=s.read(('i', 5410735818, 8))
    return

def b_1428159ef(s):
    # 0x1428159ef: mov qword ptr [rbp + 0x3c8], r8
    s.write(('m', 'rbp', None, 1, 968, 8),s.read(('r', 'r8', 8)))
    # 0x1428159f6: mov rcx, rdx
    s.write(('r', 'rcx', 8),s.read(('r', 'rdx', 8)))
    # 0x1428159f9: mov rdx, qword ptr [rbp + 0x380]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 896, 8)))
    # 0x142815a00: sub rcx, rdx
    s.integer('sub',[('r', 'rcx', 8), ('r', 'rdx', 8)])
    # 0x142815a03: cmp rcx, 9
    s.integer('cmp',[('r', 'rcx', 8), ('i', 9, 8)])
    # 0x142815a07: jb 0x142815a4d
    s.pc=s.read(('i', 5410740813, 8)) if s.condition('b') else 5410740745
    return

def b_142815a09(s):
    # 0x142815a09: add rdx, 8
    s.integer('add',[('r', 'rdx', 8), ('i', 8, 8)])
    # 0x142815a0d: mov r9, qword ptr [rbp + 0x318]
    s.write(('r', 'r9', 8),s.read(('m', 'rbp', None, 1, 792, 8)))
    # 0x142815a14: mov r8, qword ptr [rbp + 0x3c8]
    s.write(('r', 'r8', 8),s.read(('m', 'rbp', None, 1, 968, 8)))
    # 0x142815a1b: lea r10, [rdx + 8]
    s.write(('r', 'r10', 8),s.address(('m', 'rdx', None, 1, 8, 8)))
    # 0x142815a1f: mov qword ptr [rbp + 0x380], r10
    s.write(('m', 'rbp', None, 1, 896, 8),s.read(('r', 'r10', 8)))
    # 0x142815a26: test r8, r8
    s.integer('test',[('r', 'r8', 8), ('r', 'r8', 8)])
    # 0x142815a29: jne 0x1428145ec
    s.pc=s.read(('i', 5410735596, 8)) if s.condition('ne') else 5410740783
    return

def b_142815a2f(s):
    # 0x142815a2f: mov qword ptr [rbp + 0x420], 0
    s.write(('m', 'rbp', None, 1, 1056, 8),s.read(('i', 0, 8)))
    # 0x142815a3a: mov rdi, rbx
    s.write(('r', 'rdi', 8),s.read(('r', 'rbx', 8)))
    # 0x142815a3d: mov qword ptr [rbp + 0x3c8], 0
    s.write(('m', 'rbp', None, 1, 968, 8),s.read(('i', 0, 8)))
    # 0x142815a48: jmp 0x1428146c3
    s.pc=s.read(('i', 5410735811, 8))
    return

def b_142815a4d(s):
    # 0x142815a4d: mov rcx, qword ptr [rbp + 0x298]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 664, 8)))
    # 0x142815a54: mov qword ptr [rbp + 0x380], rcx
    s.write(('m', 'rbp', None, 1, 896, 8),s.read(('r', 'rcx', 8)))
    # 0x142815a5b: jmp 0x1428146b4
    s.pc=s.read(('i', 5410735796, 8))
    return

def b_142815a60(s):
    # 0x142815a60: mov r8, r9
    s.write(('r', 'r8', 8),s.read(('r', 'r9', 8)))
    # 0x142815a63: sub r8, qword ptr [rbp + 0x3a8]
    s.integer('sub',[('r', 'r8', 8), ('m', 'rbp', None, 1, 936, 8)])
    # 0x142815a6a: cmp r8, 9
    s.integer('cmp',[('r', 'r8', 8), ('i', 9, 8)])
    # 0x142815a6e: jb 0x142815a97
    s.pc=s.read(('i', 5410740887, 8)) if s.condition('b') else 5410740848
    return

def b_142815a70(s):
    # 0x142815a70: mov r9, qword ptr [rbp + 0x3a8]
    s.write(('r', 'r9', 8),s.read(('m', 'rbp', None, 1, 936, 8)))
    # 0x142815a77: add r9, 8
    s.integer('add',[('r', 'r9', 8), ('i', 8, 8)])
    # 0x142815a7b: movss xmm14, dword ptr [rip + 0x6214a4]
    s.simd_move('movss',('r', 'xmm14', 16),('m', None, None, 1, 5417168680, 4))
    # 0x142815a84: movaps xmm3, xmmword ptr [rip + 0x621d95]
    s.simd_move('movaps',('r', 'xmm3', 16),('m', None, None, 1, 5417170976, 16))
    # 0x142815a8b: mov rcx, qword ptr [rbp + 0x430]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 1072, 8)))
    # 0x142815a92: jmp 0x14281462b
    s.pc=s.read(('i', 5410735659, 8))
    return

def b_142815a97(s):
    # 0x142815a97: mov qword ptr [rbp + 0x420], 0
    s.write(('m', 'rbp', None, 1, 1056, 8),s.read(('i', 0, 8)))
    # 0x142815aa2: mov rdx, qword ptr [rbp + 0x318]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 792, 8)))
    # 0x142815aa9: mov qword ptr [rbp + 0x3a8], rdx
    s.write(('m', 'rbp', None, 1, 936, 8),s.read(('r', 'rdx', 8)))
    # 0x142815ab0: mov qword ptr [rbp + 0x388], 0
    s.write(('m', 'rbp', None, 1, 904, 8),s.read(('i', 0, 8)))
    # 0x142815abb: mov r8, qword ptr [rbp + 0x430]
    s.write(('r', 'r8', 8),s.read(('m', 'rbp', None, 1, 1072, 8)))
    # 0x142815ac2: mov rcx, qword ptr [rbp + 0x3c0]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 960, 8)))
    # 0x142815ac9: mov rdx, qword ptr [rbp + 0x438]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 1080, 8)))
    # 0x142815ad0: mov rbx, qword ptr [rbp + 0x3b8]
    s.write(('r', 'rbx', 8),s.read(('m', 'rbp', None, 1, 952, 8)))
    # 0x142815ad7: lea r10, [rbp + 0x428]
    s.write(('r', 'r10', 8),s.address(('m', 'rbp', None, 1, 1064, 8)))
    # 0x142815ade: xor r9d, r9d
    s.integer('xor',[('r', 'r9d', 4), ('r', 'r9d', 4)])
    # 0x142815ae1: movss xmm14, dword ptr [rip + 0x62143e]
    s.simd_move('movss',('r', 'xmm14', 16),('m', None, None, 1, 5417168680, 4))
    # 0x142815aea: movaps xmm3, xmmword ptr [rip + 0x621d2f]
    s.simd_move('movaps',('r', 'xmm3', 16),('m', None, None, 1, 5417170976, 16))
    # 0x142815af1: jmp 0x1428146e9
    s.pc=s.read(('i', 5410735849, 8))
    return

def b_142815af6(s):
    # 0x142815af6: mov rdx, qword ptr [rbp - 0x20]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, -32, 8)))
    # 0x142815afa: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x142815afd: je 0x142815b12
    s.pc=s.read(('i', 5410741010, 8)) if s.condition('e') else 5410740991
    return

def b_142815aff(s):
    # 0x142815aff: mov rcx, qword ptr [rbp - 0x18]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, -24, 8)))
    # 0x142815b03: shl rdx, 3
    s.integer('shl',[('r', 'rdx', 8), ('i', 3, 1)])
    # 0x142815b07: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x142815b0d: call 0x1406abac0
    s.push(5410741010)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_142815b12(s):
    # 0x142815b12: mov rdx, qword ptr [rbp - 8]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, -8, 8)))
    # 0x142815b16: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x142815b19: je 0x142815b2e
    s.pc=s.read(('i', 5410741038, 8)) if s.condition('e') else 5410741019
    return

def b_142815b1b(s):
    # 0x142815b1b: mov rcx, qword ptr [rbp]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 0, 8)))
    # 0x142815b1f: shl rdx, 2
    s.integer('shl',[('r', 'rdx', 8), ('i', 2, 1)])
    # 0x142815b23: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x142815b29: call 0x1406abac0
    s.push(5410741038)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_142815b2e(s):
    # 0x142815b2e: mov rdx, qword ptr [rbp + 0x18]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 24, 8)))
    # 0x142815b32: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x142815b35: je 0x142815b4a
    s.pc=s.read(('i', 5410741066, 8)) if s.condition('e') else 5410741047
    return

def b_142815b37(s):
    # 0x142815b37: mov rcx, qword ptr [rbp + 0x20]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 32, 8)))
    # 0x142815b3b: shl rdx, 3
    s.integer('shl',[('r', 'rdx', 8), ('i', 3, 1)])
    # 0x142815b3f: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x142815b45: call 0x1406abac0
    s.push(5410741066)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_142815b4a(s):
    # 0x142815b4a: mov rdx, qword ptr [rbp + 0x30]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 48, 8)))
    # 0x142815b4e: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x142815b51: je 0x142815b66
    s.pc=s.read(('i', 5410741094, 8)) if s.condition('e') else 5410741075
    return

def b_142815b53(s):
    # 0x142815b53: mov rcx, qword ptr [rbp + 0x38]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 56, 8)))
    # 0x142815b57: shl rdx, 2
    s.integer('shl',[('r', 'rdx', 8), ('i', 2, 1)])
    # 0x142815b5b: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x142815b61: call 0x1406abac0
    s.push(5410741094)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_142815b66(s):
    # 0x142815b66: mov rdx, qword ptr [rbp + 0x120]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 288, 8)))
    # 0x142815b6d: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x142815b70: je 0x142815b88
    s.pc=s.read(('i', 5410741128, 8)) if s.condition('e') else 5410741106
    return

def b_142815b72(s):
    # 0x142815b72: mov rcx, qword ptr [rbp + 0x128]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 296, 8)))
    # 0x142815b79: shl rdx, 3
    s.integer('shl',[('r', 'rdx', 8), ('i', 3, 1)])
    # 0x142815b7d: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x142815b83: call 0x1406abac0
    s.push(5410741128)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_142815b88(s):
    # 0x142815b88: mov rdx, qword ptr [rbp + 0x138]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 312, 8)))
    # 0x142815b8f: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x142815b92: je 0x142815baa
    s.pc=s.read(('i', 5410741162, 8)) if s.condition('e') else 5410741140
    return

def b_142815b94(s):
    # 0x142815b94: mov rcx, qword ptr [rbp + 0x140]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 320, 8)))
    # 0x142815b9b: shl rdx, 2
    s.integer('shl',[('r', 'rdx', 8), ('i', 2, 1)])
    # 0x142815b9f: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x142815ba5: call 0x1406abac0
    s.push(5410741162)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_142815baa(s):
    # 0x142815baa: movaps xmm6, xmmword ptr [rbp + 0x450]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rbp', None, 1, 1104, 16))
    # 0x142815bb1: movaps xmm7, xmmword ptr [rbp + 0x460]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rbp', None, 1, 1120, 16))
    # 0x142815bb8: movaps xmm8, xmmword ptr [rbp + 0x470]
    s.simd_move('movaps',('r', 'xmm8', 16),('m', 'rbp', None, 1, 1136, 16))
    # 0x142815bc0: movaps xmm9, xmmword ptr [rbp + 0x480]
    s.simd_move('movaps',('r', 'xmm9', 16),('m', 'rbp', None, 1, 1152, 16))
    # 0x142815bc8: movaps xmm10, xmmword ptr [rbp + 0x490]
    s.simd_move('movaps',('r', 'xmm10', 16),('m', 'rbp', None, 1, 1168, 16))
    # 0x142815bd0: movaps xmm11, xmmword ptr [rbp + 0x4a0]
    s.simd_move('movaps',('r', 'xmm11', 16),('m', 'rbp', None, 1, 1184, 16))
    # 0x142815bd8: movaps xmm12, xmmword ptr [rbp + 0x4b0]
    s.simd_move('movaps',('r', 'xmm12', 16),('m', 'rbp', None, 1, 1200, 16))
    # 0x142815be0: movaps xmm13, xmmword ptr [rbp + 0x4c0]
    s.simd_move('movaps',('r', 'xmm13', 16),('m', 'rbp', None, 1, 1216, 16))
    # 0x142815be8: movaps xmm14, xmmword ptr [rbp + 0x4d0]
    s.simd_move('movaps',('r', 'xmm14', 16),('m', 'rbp', None, 1, 1232, 16))
    # 0x142815bf0: movaps xmm15, xmmword ptr [rbp + 0x4e0]
    s.simd_move('movaps',('r', 'xmm15', 16),('m', 'rbp', None, 1, 1248, 16))
    # 0x142815bf8: add rsp, 0x578
    s.integer('add',[('r', 'rsp', 8), ('i', 1400, 8)])
    # 0x142815bff: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x142815c00: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x142815c01: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x142815c02: pop r12
    s.write(('r', 'r12', 8),s.pop())
    # 0x142815c04: pop r13
    s.write(('r', 'r13', 8),s.pop())
    # 0x142815c06: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x142815c08: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x142815c0a: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x142815c0b: ret 
    s.pc=s.pop()
    return

def b_142815c0c(s):
    # 0x142815c0c: lea rax, [rbp + 0x378]
    s.write(('r', 'rax', 8),s.address(('m', 'rbp', None, 1, 888, 8)))
    # 0x142815c13: mov qword ptr [rbp + 0x3d0], rax
    s.write(('m', 'rbp', None, 1, 976, 8),s.read(('r', 'rax', 8)))
    # 0x142815c1a: lea rax, [rip - 0x18a4c61]
    s.write(('r', 'rax', 8),s.address(('m', None, None, 1, 5384900544, 8)))
    # 0x142815c21: mov qword ptr [rbp + 0x3d8], rax
    s.write(('m', 'rbp', None, 1, 984, 8),s.read(('r', 'rax', 8)))
    # 0x142815c28: lea rcx, [rip + 0xd8573d]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5424919404, 8)))
    # 0x142815c2f: lea r8, [rip + 0xd871ea]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424926240, 8)))
    # 0x142815c36: lea rdx, [rbp + 0x3d0]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 976, 8)))
    # 0x142815c3d: call 0x142dc83d0
    s.push(5410741314)
    s.pc=s.read(('i', 5416715216, 8))
    return

def b_142815c42(s):
    # 0x142815c42: nop 
    # 0x142815c43: jmp 0x142815e2b
    s.pc=s.read(('i', 5410741803, 8))
    return

def b_142815c48(s):
    # 0x142815c48: lea rax, [rbp + 0x378]
    s.write(('r', 'rax', 8),s.address(('m', 'rbp', None, 1, 888, 8)))
    # 0x142815c4f: mov qword ptr [rbp + 0x3d0], rax
    s.write(('m', 'rbp', None, 1, 976, 8),s.read(('r', 'rax', 8)))
    # 0x142815c56: lea rax, [rip - 0x18a4c9d]
    s.write(('r', 'rax', 8),s.address(('m', None, None, 1, 5384900544, 8)))
    # 0x142815c5d: mov qword ptr [rbp + 0x3d8], rax
    s.write(('m', 'rbp', None, 1, 984, 8),s.read(('r', 'rax', 8)))
    # 0x142815c64: lea rcx, [rip + 0xd85701]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5424919404, 8)))
    # 0x142815c6b: lea r8, [rip + 0xd871de]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424926288, 8)))
    # 0x142815c72: lea rdx, [rbp + 0x3d0]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 976, 8)))
    # 0x142815c79: call 0x142dc83d0
    s.push(5410741374)
    s.pc=s.read(('i', 5416715216, 8))
    return

def b_142815c7e(s):
    # 0x142815c7e: nop 
    # 0x142815c7f: jmp 0x142815e2b
    s.pc=s.read(('i', 5410741803, 8))
    return

def b_142815c84(s):
    # 0x142815c84: mov ecx, 4
    s.write(('r', 'ecx', 4),s.read(('i', 4, 4)))
    # 0x142815c89: mov edx, 0x10
    s.write(('r', 'edx', 4),s.read(('i', 16, 4)))
    # 0x142815c8e: call 0x142dc7e11
    s.push(5410741395)
    s.pc=s.read(('i', 5416713745, 8))
    return

def b_142815c93(s):
    # 0x142815c93: nop 
    # 0x142815c94: jmp 0x142815e2b
    s.pc=s.read(('i', 5410741803, 8))
    return

def b_142815c99(s):
    # 0x142815c99: lea r8, [rip + 0xd87108]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424926120, 8)))
    # 0x142815ca0: mov rcx, r15
    s.write(('r', 'rcx', 8),s.read(('r', 'r15', 8)))
    # 0x142815ca3: mov rdx, rbx
    s.write(('r', 'rdx', 8),s.read(('r', 'rbx', 8)))
    # 0x142815ca6: call 0x142dc81f2
    s.push(5410741419)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142815cab(s):
    # 0x142815cab: nop 
    # 0x142815cac: jmp 0x142815e2b
    s.pc=s.read(('i', 5410741803, 8))
    return

def b_142815cb1(s):
    # 0x142815cb1: lea r8, [rip + 0xd87120]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424926168, 8)))
    # 0x142815cb8: mov rcx, r15
    s.write(('r', 'rcx', 8),s.read(('r', 'r15', 8)))
    # 0x142815cbb: mov rdx, rbx
    s.write(('r', 'rdx', 8),s.read(('r', 'rbx', 8)))
    # 0x142815cbe: call 0x142dc81f2
    s.push(5410741443)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142815cc3(s):
    # 0x142815cc3: nop 
    # 0x142815cc4: jmp 0x142815e2b
    s.pc=s.read(('i', 5410741803, 8))
    return

def b_142815cc9(s):
    # 0x142815cc9: lea r8, [rip + 0xd855f8]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424919240, 8)))
    # 0x142815cd0: mov rcx, rax
    s.write(('r', 'rcx', 8),s.read(('r', 'rax', 8)))
    # 0x142815cd3: call 0x142dc81f2
    s.push(5410741464)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142815cd8(s):
    # 0x142815cd8: nop 
    # 0x142815cd9: jmp 0x142815e2b
    s.pc=s.read(('i', 5410741803, 8))
    return

def b_142815cde(s):
    # 0x142815cde: lea r8, [rip + 0xd855cb]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424919216, 8)))
    # 0x142815ce5: call 0x142dc81f2
    s.push(5410741482)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142815cea(s):
    # 0x142815cea: nop 
    # 0x142815ceb: jmp 0x142815e2b
    s.pc=s.read(('i', 5410741803, 8))
    return

def b_142815cf0(s):
    # 0x142815cf0: lea r8, [rip + 0xd855d1]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424919240, 8)))
    # 0x142815cf7: mov rcx, rax
    s.write(('r', 'rcx', 8),s.read(('r', 'rax', 8)))
    # 0x142815cfa: call 0x142dc81f2
    s.push(5410741503)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142815cff(s):
    # 0x142815cff: nop 
    # 0x142815d00: jmp 0x142815e2b
    s.pc=s.read(('i', 5410741803, 8))
    return

def b_142815d05(s):
    # 0x142815d05: lea r8, [rip + 0xd855a4]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424919216, 8)))
    # 0x142815d0c: call 0x142dc81f2
    s.push(5410741521)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142815d11(s):
    # 0x142815d11: nop 
    # 0x142815d12: jmp 0x142815e2b
    s.pc=s.read(('i', 5410741803, 8))
    return

def b_142815d17(s):
    # 0x142815d17: lea rcx, [rip + 0xd86ffa]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5424925976, 8)))
    # 0x142815d1e: call 0x142dc8150
    s.push(5410741539)
    s.pc=s.read(('i', 5416714576, 8))
    return

def b_142815d23(s):
    # 0x142815d23: nop 
    # 0x142815d24: jmp 0x142815e2b
    s.pc=s.read(('i', 5410741803, 8))
    return

def b_142815d29(s):
    # 0x142815d29: lea r8, [rip + 0xd870d8]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424926216, 8)))
    # 0x142815d30: mov rcx, rdi
    s.write(('r', 'rcx', 8),s.read(('r', 'rdi', 8)))
    # 0x142815d33: mov rdx, r15
    s.write(('r', 'rdx', 8),s.read(('r', 'r15', 8)))
    # 0x142815d36: call 0x142dc81f2
    s.push(5410741563)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142815d3b(s):
    # 0x142815d3b: nop 
    # 0x142815d3c: jmp 0x142815e2b
    s.pc=s.read(('i', 5410741803, 8))
    return

def b_142815d41(s):
    # 0x142815d41: lea r8, [rip + 0xd870f0]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424926264, 8)))
    # 0x142815d48: mov rcx, rdi
    s.write(('r', 'rcx', 8),s.read(('r', 'rdi', 8)))
    # 0x142815d4b: mov rdx, r15
    s.write(('r', 'rdx', 8),s.read(('r', 'r15', 8)))
    # 0x142815d4e: call 0x142dc81f2
    s.push(5410741587)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142815d53(s):
    # 0x142815d53: nop 
    # 0x142815d54: jmp 0x142815e2b
    s.pc=s.read(('i', 5410741803, 8))
    return

def b_142815d59(s):
    # 0x142815d59: lea r8, [rip + 0xd85568]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424919240, 8)))
    # 0x142815d60: mov rcx, rax
    s.write(('r', 'rcx', 8),s.read(('r', 'rax', 8)))
    # 0x142815d63: mov rdx, rsi
    s.write(('r', 'rdx', 8),s.read(('r', 'rsi', 8)))
    # 0x142815d66: call 0x142dc81f2
    s.push(5410741611)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142815d6b(s):
    # 0x142815d6b: nop 
    # 0x142815d6c: jmp 0x142815e2b
    s.pc=s.read(('i', 5410741803, 8))
    return

def b_142815d71(s):
    # 0x142815d71: lea r8, [rip + 0xd85550]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424919240, 8)))
    # 0x142815d78: mov rcx, rax
    s.write(('r', 'rcx', 8),s.read(('r', 'rax', 8)))
    # 0x142815d7b: mov rdx, rsi
    s.write(('r', 'rdx', 8),s.read(('r', 'rsi', 8)))
    # 0x142815d7e: call 0x142dc81f2
    s.push(5410741635)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142815d83(s):
    # 0x142815d83: nop 
    # 0x142815d84: jmp 0x142815e2b
    s.pc=s.read(('i', 5410741803, 8))
    return

def b_142815d89(s):
    # 0x142815d89: lea r8, [rip + 0xd85520]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424919216, 8)))
    # 0x142815d90: mov rdx, rsi
    s.write(('r', 'rdx', 8),s.read(('r', 'rsi', 8)))
    # 0x142815d93: call 0x142dc81f2
    s.push(5410741656)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142815d98(s):
    # 0x142815d98: nop 
    # 0x142815d99: jmp 0x142815e2b
    s.pc=s.read(('i', 5410741803, 8))
    return

def b_142815d9e(s):
    # 0x142815d9e: lea r8, [rip + 0xd8553b]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424919264, 8)))
    # 0x142815da5: call 0x142dc81f2
    s.push(5410741674)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142815daa(s):
    # 0x142815daa: nop 
    # 0x142815dab: jmp 0x142815e2b
    s.pc=s.read(('i', 5410741803, 8))
    return

def b_142815dad(s):
    # 0x142815dad: lea r8, [rip + 0xd854fc]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424919216, 8)))
    # 0x142815db4: mov rdx, rsi
    s.write(('r', 'rdx', 8),s.read(('r', 'rsi', 8)))
    # 0x142815db7: call 0x142dc81f2
    s.push(5410741692)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142815dbc(s):
    # 0x142815dbc: nop 
    # 0x142815dbd: jmp 0x142815e2b
    s.pc=s.read(('i', 5410741803, 8))
    return

def b_142815dbf(s):
    # 0x142815dbf: lea r8, [rip + 0xd86f82]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424926024, 8)))
    # 0x142815dc6: mov rcx, rdi
    s.write(('r', 'rcx', 8),s.read(('r', 'rdi', 8)))
    # 0x142815dc9: call 0x142dc81f2
    s.push(5410741710)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142815dce(s):
    # 0x142815dce: nop 
    # 0x142815dcf: jmp 0x142815e2b
    s.pc=s.read(('i', 5410741803, 8))
    return

def b_142815dd1(s):
    # 0x142815dd1: lea r8, [rip + 0xd86f88]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424926048, 8)))
    # 0x142815dd8: mov edx, 2
    s.write(('r', 'edx', 4),s.read(('i', 2, 4)))
    # 0x142815ddd: call 0x142dc81f2
    s.push(5410741730)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142815de2(s):
    # 0x142815de2: nop 
    # 0x142815de3: jmp 0x142815e2b
    s.pc=s.read(('i', 5410741803, 8))
    return

def b_142815de5(s):
    # 0x142815de5: lea r8, [rip + 0xd86ecc]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424925880, 8)))
    # 0x142815dec: mov rdx, rdi
    s.write(('r', 'rdx', 8),s.read(('r', 'rdi', 8)))
    # 0x142815def: call 0x142dc81f2
    s.push(5410741748)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142815df4(s):
    # 0x142815df4: nop 
    # 0x142815df5: jmp 0x142815e2b
    s.pc=s.read(('i', 5410741803, 8))
    return

def b_142815df7(s):
    # 0x142815df7: lea r8, [rip + 0xd86ed2]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424925904, 8)))
    # 0x142815dfe: mov rdx, rbx
    s.write(('r', 'rdx', 8),s.read(('r', 'rbx', 8)))
    # 0x142815e01: call 0x142dc81f2
    s.push(5410741766)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142815e06(s):
    # 0x142815e06: nop 
    # 0x142815e07: jmp 0x142815e2b
    s.pc=s.read(('i', 5410741803, 8))
    return

def b_142815e09(s):
    # 0x142815e09: lea r8, [rip + 0xd86ed8]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424925928, 8)))
    # 0x142815e10: mov rdx, rbx
    s.write(('r', 'rdx', 8),s.read(('r', 'rbx', 8)))
    # 0x142815e13: call 0x142dc81f2
    s.push(5410741784)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142815e18(s):
    # 0x142815e18: nop 
    # 0x142815e19: jmp 0x142815e2b
    s.pc=s.read(('i', 5410741803, 8))
    return

def b_142815e1b(s):
    # 0x142815e1b: lea r8, [rip + 0xd86ede]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424925952, 8)))
    # 0x142815e22: mov rdx, rdi
    s.write(('r', 'rdx', 8),s.read(('r', 'rdi', 8)))
    # 0x142815e25: call 0x142dc81f2
    s.push(5410741802)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142815e2a(s):
    # 0x142815e2a: nop 
    s.pc=5410741803
    return

def b_142815e2b(s):
    # 0x142815e2b: ud2 
    raise RuntimeError('Original unreachable/panic 0x142815e2b')
    s.pc=5410741805
    return

def b_142815e2d(s):
    # 0x142815e2d: nop dword ptr [rax]
    # 0x142815e30: mov qword ptr [rsp + 0x10], rdx
    s.write(('m', 'rsp', None, 1, 16, 8),s.read(('r', 'rdx', 8)))
    # 0x142815e35: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x142815e36: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x142815e38: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x142815e3a: push r13
    s.push(s.read(('r', 'r13', 8)))
    # 0x142815e3c: push r12
    s.push(s.read(('r', 'r12', 8)))
    # 0x142815e3e: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x142815e3f: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x142815e40: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x142815e41: sub rsp, 0xd8
    s.integer('sub',[('r', 'rsp', 8), ('i', 216, 8)])
    # 0x142815e48: lea rbp, [rdx + 0x80]
    s.write(('r', 'rbp', 8),s.address(('m', 'rdx', None, 1, 128, 8)))
    # 0x142815e4f: movaps xmmword ptr [rsp + 0x30], xmm15
    s.simd_move('movaps',('m', 'rsp', None, 1, 48, 16),('r', 'xmm15', 16))
    # 0x142815e55: movaps xmmword ptr [rsp + 0x40], xmm14
    s.simd_move('movaps',('m', 'rsp', None, 1, 64, 16),('r', 'xmm14', 16))
    # 0x142815e5b: movaps xmmword ptr [rsp + 0x50], xmm13
    s.simd_move('movaps',('m', 'rsp', None, 1, 80, 16),('r', 'xmm13', 16))
    # 0x142815e61: movaps xmmword ptr [rsp + 0x60], xmm12
    s.simd_move('movaps',('m', 'rsp', None, 1, 96, 16),('r', 'xmm12', 16))
    # 0x142815e67: movaps xmmword ptr [rsp + 0x70], xmm11
    s.simd_move('movaps',('m', 'rsp', None, 1, 112, 16),('r', 'xmm11', 16))
    # 0x142815e6d: movaps xmmword ptr [rsp + 0x80], xmm10
    s.simd_move('movaps',('m', 'rsp', None, 1, 128, 16),('r', 'xmm10', 16))
    # 0x142815e76: movaps xmmword ptr [rsp + 0x90], xmm9
    s.simd_move('movaps',('m', 'rsp', None, 1, 144, 16),('r', 'xmm9', 16))
    # 0x142815e7f: movaps xmmword ptr [rsp + 0xa0], xmm8
    s.simd_move('movaps',('m', 'rsp', None, 1, 160, 16),('r', 'xmm8', 16))
    # 0x142815e88: movaps xmmword ptr [rsp + 0xb0], xmm7
    s.simd_move('movaps',('m', 'rsp', None, 1, 176, 16),('r', 'xmm7', 16))
    # 0x142815e90: movaps xmmword ptr [rsp + 0xc0], xmm6
    s.simd_move('movaps',('m', 'rsp', None, 1, 192, 16),('r', 'xmm6', 16))
    # 0x142815e98: mov rdx, qword ptr [rbp + 0x120]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 288, 8)))
    # 0x142815e9f: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x142815ea2: je 0x142815eba
    s.pc=s.read(('i', 5410741946, 8)) if s.condition('e') else 5410741924
    return

def b_142815ea4(s):
    # 0x142815ea4: mov rcx, qword ptr [rbp + 0x128]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 296, 8)))
    # 0x142815eab: shl rdx, 3
    s.integer('shl',[('r', 'rdx', 8), ('i', 3, 1)])
    # 0x142815eaf: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x142815eb5: call 0x1406abac0
    s.push(5410741946)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_142815eba(s):
    # 0x142815eba: mov rdx, qword ptr [rbp + 0x138]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 312, 8)))
    # 0x142815ec1: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x142815ec4: je 0x142815edc
    s.pc=s.read(('i', 5410741980, 8)) if s.condition('e') else 5410741958
    return

def b_142815ec6(s):
    # 0x142815ec6: mov rcx, qword ptr [rbp + 0x140]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 320, 8)))
    # 0x142815ecd: shl rdx, 2
    s.integer('shl',[('r', 'rdx', 8), ('i', 2, 1)])
    # 0x142815ed1: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x142815ed7: call 0x1406abac0
    s.push(5410741980)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_142815edc(s):
    # 0x142815edc: movaps xmm6, xmmword ptr [rsp + 0xc0]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rsp', None, 1, 192, 16))
    # 0x142815ee4: movaps xmm7, xmmword ptr [rsp + 0xb0]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rsp', None, 1, 176, 16))
    # 0x142815eec: movaps xmm8, xmmword ptr [rsp + 0xa0]
    s.simd_move('movaps',('r', 'xmm8', 16),('m', 'rsp', None, 1, 160, 16))
    # 0x142815ef5: movaps xmm9, xmmword ptr [rsp + 0x90]
    s.simd_move('movaps',('r', 'xmm9', 16),('m', 'rsp', None, 1, 144, 16))
    # 0x142815efe: movaps xmm10, xmmword ptr [rsp + 0x80]
    s.simd_move('movaps',('r', 'xmm10', 16),('m', 'rsp', None, 1, 128, 16))
    # 0x142815f07: movaps xmm11, xmmword ptr [rsp + 0x70]
    s.simd_move('movaps',('r', 'xmm11', 16),('m', 'rsp', None, 1, 112, 16))
    # 0x142815f0d: movaps xmm12, xmmword ptr [rsp + 0x60]
    s.simd_move('movaps',('r', 'xmm12', 16),('m', 'rsp', None, 1, 96, 16))
    # 0x142815f13: movaps xmm13, xmmword ptr [rsp + 0x50]
    s.simd_move('movaps',('r', 'xmm13', 16),('m', 'rsp', None, 1, 80, 16))
    # 0x142815f19: movaps xmm14, xmmword ptr [rsp + 0x40]
    s.simd_move('movaps',('r', 'xmm14', 16),('m', 'rsp', None, 1, 64, 16))
    # 0x142815f1f: movaps xmm15, xmmword ptr [rsp + 0x30]
    s.simd_move('movaps',('r', 'xmm15', 16),('m', 'rsp', None, 1, 48, 16))
    # 0x142815f25: add rsp, 0xd8
    s.integer('add',[('r', 'rsp', 8), ('i', 216, 8)])
    # 0x142815f2c: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x142815f2d: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x142815f2e: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x142815f2f: pop r12
    s.write(('r', 'r12', 8),s.pop())
    # 0x142815f31: pop r13
    s.write(('r', 'r13', 8),s.pop())
    # 0x142815f33: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x142815f35: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x142815f37: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x142815f38: ret 
    s.pc=s.pop()
    return

def b_142815f39(s):
    # 0x142815f39: nop dword ptr [rax]
    # 0x142815f40: mov qword ptr [rsp + 0x10], rdx
    s.write(('m', 'rsp', None, 1, 16, 8),s.read(('r', 'rdx', 8)))
    # 0x142815f45: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x142815f46: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x142815f48: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x142815f4a: push r13
    s.push(s.read(('r', 'r13', 8)))
    # 0x142815f4c: push r12
    s.push(s.read(('r', 'r12', 8)))
    # 0x142815f4e: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x142815f4f: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x142815f50: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x142815f51: sub rsp, 0xd8
    s.integer('sub',[('r', 'rsp', 8), ('i', 216, 8)])
    # 0x142815f58: lea rbp, [rdx + 0x80]
    s.write(('r', 'rbp', 8),s.address(('m', 'rdx', None, 1, 128, 8)))
    # 0x142815f5f: movaps xmmword ptr [rsp + 0x30], xmm15
    s.simd_move('movaps',('m', 'rsp', None, 1, 48, 16),('r', 'xmm15', 16))
    # 0x142815f65: movaps xmmword ptr [rsp + 0x40], xmm14
    s.simd_move('movaps',('m', 'rsp', None, 1, 64, 16),('r', 'xmm14', 16))
    # 0x142815f6b: movaps xmmword ptr [rsp + 0x50], xmm13
    s.simd_move('movaps',('m', 'rsp', None, 1, 80, 16),('r', 'xmm13', 16))
    # 0x142815f71: movaps xmmword ptr [rsp + 0x60], xmm12
    s.simd_move('movaps',('m', 'rsp', None, 1, 96, 16),('r', 'xmm12', 16))
    # 0x142815f77: movaps xmmword ptr [rsp + 0x70], xmm11
    s.simd_move('movaps',('m', 'rsp', None, 1, 112, 16),('r', 'xmm11', 16))
    # 0x142815f7d: movaps xmmword ptr [rsp + 0x80], xmm10
    s.simd_move('movaps',('m', 'rsp', None, 1, 128, 16),('r', 'xmm10', 16))
    # 0x142815f86: movaps xmmword ptr [rsp + 0x90], xmm9
    s.simd_move('movaps',('m', 'rsp', None, 1, 144, 16),('r', 'xmm9', 16))
    # 0x142815f8f: movaps xmmword ptr [rsp + 0xa0], xmm8
    s.simd_move('movaps',('m', 'rsp', None, 1, 160, 16),('r', 'xmm8', 16))
    # 0x142815f98: movaps xmmword ptr [rsp + 0xb0], xmm7
    s.simd_move('movaps',('m', 'rsp', None, 1, 176, 16),('r', 'xmm7', 16))
    # 0x142815fa0: movaps xmmword ptr [rsp + 0xc0], xmm6
    s.simd_move('movaps',('m', 'rsp', None, 1, 192, 16),('r', 'xmm6', 16))
    # 0x142815fa8: mov rdx, qword ptr [rbp + 0x18]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 24, 8)))
    # 0x142815fac: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x142815faf: je 0x142815fc4
    s.pc=s.read(('i', 5410742212, 8)) if s.condition('e') else 5410742193
    return

def b_142815fb1(s):
    # 0x142815fb1: mov rcx, qword ptr [rbp + 0x20]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 32, 8)))
    # 0x142815fb5: shl rdx, 3
    s.integer('shl',[('r', 'rdx', 8), ('i', 3, 1)])
    # 0x142815fb9: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x142815fbf: call 0x1406abac0
    s.push(5410742212)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_142815fc4(s):
    # 0x142815fc4: mov rdx, qword ptr [rbp + 0x30]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 48, 8)))
    # 0x142815fc8: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x142815fcb: je 0x142815fe0
    s.pc=s.read(('i', 5410742240, 8)) if s.condition('e') else 5410742221
    return

def b_142815fcd(s):
    # 0x142815fcd: mov rcx, qword ptr [rbp + 0x38]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 56, 8)))
    # 0x142815fd1: shl rdx, 2
    s.integer('shl',[('r', 'rdx', 8), ('i', 2, 1)])
    # 0x142815fd5: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x142815fdb: call 0x1406abac0
    s.push(5410742240)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_142815fe0(s):
    # 0x142815fe0: movaps xmm6, xmmword ptr [rsp + 0xc0]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rsp', None, 1, 192, 16))
    # 0x142815fe8: movaps xmm7, xmmword ptr [rsp + 0xb0]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rsp', None, 1, 176, 16))
    # 0x142815ff0: movaps xmm8, xmmword ptr [rsp + 0xa0]
    s.simd_move('movaps',('r', 'xmm8', 16),('m', 'rsp', None, 1, 160, 16))
    # 0x142815ff9: movaps xmm9, xmmword ptr [rsp + 0x90]
    s.simd_move('movaps',('r', 'xmm9', 16),('m', 'rsp', None, 1, 144, 16))
    # 0x142816002: movaps xmm10, xmmword ptr [rsp + 0x80]
    s.simd_move('movaps',('r', 'xmm10', 16),('m', 'rsp', None, 1, 128, 16))
    # 0x14281600b: movaps xmm11, xmmword ptr [rsp + 0x70]
    s.simd_move('movaps',('r', 'xmm11', 16),('m', 'rsp', None, 1, 112, 16))
    # 0x142816011: movaps xmm12, xmmword ptr [rsp + 0x60]
    s.simd_move('movaps',('r', 'xmm12', 16),('m', 'rsp', None, 1, 96, 16))
    # 0x142816017: movaps xmm13, xmmword ptr [rsp + 0x50]
    s.simd_move('movaps',('r', 'xmm13', 16),('m', 'rsp', None, 1, 80, 16))
    # 0x14281601d: movaps xmm14, xmmword ptr [rsp + 0x40]
    s.simd_move('movaps',('r', 'xmm14', 16),('m', 'rsp', None, 1, 64, 16))
    # 0x142816023: movaps xmm15, xmmword ptr [rsp + 0x30]
    s.simd_move('movaps',('r', 'xmm15', 16),('m', 'rsp', None, 1, 48, 16))
    # 0x142816029: add rsp, 0xd8
    s.integer('add',[('r', 'rsp', 8), ('i', 216, 8)])
    # 0x142816030: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x142816031: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x142816032: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x142816033: pop r12
    s.write(('r', 'r12', 8),s.pop())
    # 0x142816035: pop r13
    s.write(('r', 'r13', 8),s.pop())
    # 0x142816037: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x142816039: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x14281603b: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x14281603c: ret 
    s.pc=s.pop()
    return

def b_14281603d(s):
    # 0x14281603d: nop dword ptr [rax]
    # 0x142816040: mov qword ptr [rsp + 0x10], rdx
    s.write(('m', 'rsp', None, 1, 16, 8),s.read(('r', 'rdx', 8)))
    # 0x142816045: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x142816046: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x142816048: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x14281604a: push r13
    s.push(s.read(('r', 'r13', 8)))
    # 0x14281604c: push r12
    s.push(s.read(('r', 'r12', 8)))
    # 0x14281604e: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x14281604f: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x142816050: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x142816051: sub rsp, 0xd8
    s.integer('sub',[('r', 'rsp', 8), ('i', 216, 8)])
    # 0x142816058: lea rbp, [rdx + 0x80]
    s.write(('r', 'rbp', 8),s.address(('m', 'rdx', None, 1, 128, 8)))
    # 0x14281605f: movaps xmmword ptr [rsp + 0x30], xmm15
    s.simd_move('movaps',('m', 'rsp', None, 1, 48, 16),('r', 'xmm15', 16))
    # 0x142816065: movaps xmmword ptr [rsp + 0x40], xmm14
    s.simd_move('movaps',('m', 'rsp', None, 1, 64, 16),('r', 'xmm14', 16))
    # 0x14281606b: movaps xmmword ptr [rsp + 0x50], xmm13
    s.simd_move('movaps',('m', 'rsp', None, 1, 80, 16),('r', 'xmm13', 16))
    # 0x142816071: movaps xmmword ptr [rsp + 0x60], xmm12
    s.simd_move('movaps',('m', 'rsp', None, 1, 96, 16),('r', 'xmm12', 16))
    # 0x142816077: movaps xmmword ptr [rsp + 0x70], xmm11
    s.simd_move('movaps',('m', 'rsp', None, 1, 112, 16),('r', 'xmm11', 16))
    # 0x14281607d: movaps xmmword ptr [rsp + 0x80], xmm10
    s.simd_move('movaps',('m', 'rsp', None, 1, 128, 16),('r', 'xmm10', 16))
    # 0x142816086: movaps xmmword ptr [rsp + 0x90], xmm9
    s.simd_move('movaps',('m', 'rsp', None, 1, 144, 16),('r', 'xmm9', 16))
    # 0x14281608f: movaps xmmword ptr [rsp + 0xa0], xmm8
    s.simd_move('movaps',('m', 'rsp', None, 1, 160, 16),('r', 'xmm8', 16))
    # 0x142816098: movaps xmmword ptr [rsp + 0xb0], xmm7
    s.simd_move('movaps',('m', 'rsp', None, 1, 176, 16),('r', 'xmm7', 16))
    # 0x1428160a0: movaps xmmword ptr [rsp + 0xc0], xmm6
    s.simd_move('movaps',('m', 'rsp', None, 1, 192, 16),('r', 'xmm6', 16))
    # 0x1428160a8: mov rdx, qword ptr [rbp - 0x20]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, -32, 8)))
    # 0x1428160ac: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x1428160af: je 0x1428160c4
    s.pc=s.read(('i', 5410742468, 8)) if s.condition('e') else 5410742449
    return

def b_1428160b1(s):
    # 0x1428160b1: mov rcx, qword ptr [rbp - 0x18]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, -24, 8)))
    # 0x1428160b5: shl rdx, 3
    s.integer('shl',[('r', 'rdx', 8), ('i', 3, 1)])
    # 0x1428160b9: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x1428160bf: call 0x1406abac0
    s.push(5410742468)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_1428160c4(s):
    # 0x1428160c4: mov rdx, qword ptr [rbp - 8]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, -8, 8)))
    # 0x1428160c8: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x1428160cb: je 0x1428160e0
    s.pc=s.read(('i', 5410742496, 8)) if s.condition('e') else 5410742477
    return

def b_1428160cd(s):
    # 0x1428160cd: mov rcx, qword ptr [rbp]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 0, 8)))
    # 0x1428160d1: shl rdx, 2
    s.integer('shl',[('r', 'rdx', 8), ('i', 2, 1)])
    # 0x1428160d5: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x1428160db: call 0x1406abac0
    s.push(5410742496)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_1428160e0(s):
    # 0x1428160e0: movaps xmm6, xmmword ptr [rsp + 0xc0]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rsp', None, 1, 192, 16))
    # 0x1428160e8: movaps xmm7, xmmword ptr [rsp + 0xb0]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rsp', None, 1, 176, 16))
    # 0x1428160f0: movaps xmm8, xmmword ptr [rsp + 0xa0]
    s.simd_move('movaps',('r', 'xmm8', 16),('m', 'rsp', None, 1, 160, 16))
    # 0x1428160f9: movaps xmm9, xmmword ptr [rsp + 0x90]
    s.simd_move('movaps',('r', 'xmm9', 16),('m', 'rsp', None, 1, 144, 16))
    # 0x142816102: movaps xmm10, xmmword ptr [rsp + 0x80]
    s.simd_move('movaps',('r', 'xmm10', 16),('m', 'rsp', None, 1, 128, 16))
    # 0x14281610b: movaps xmm11, xmmword ptr [rsp + 0x70]
    s.simd_move('movaps',('r', 'xmm11', 16),('m', 'rsp', None, 1, 112, 16))
    # 0x142816111: movaps xmm12, xmmword ptr [rsp + 0x60]
    s.simd_move('movaps',('r', 'xmm12', 16),('m', 'rsp', None, 1, 96, 16))
    # 0x142816117: movaps xmm13, xmmword ptr [rsp + 0x50]
    s.simd_move('movaps',('r', 'xmm13', 16),('m', 'rsp', None, 1, 80, 16))
    # 0x14281611d: movaps xmm14, xmmword ptr [rsp + 0x40]
    s.simd_move('movaps',('r', 'xmm14', 16),('m', 'rsp', None, 1, 64, 16))
    # 0x142816123: movaps xmm15, xmmword ptr [rsp + 0x30]
    s.simd_move('movaps',('r', 'xmm15', 16),('m', 'rsp', None, 1, 48, 16))
    # 0x142816129: add rsp, 0xd8
    s.integer('add',[('r', 'rsp', 8), ('i', 216, 8)])
    # 0x142816130: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x142816131: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x142816132: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x142816133: pop r12
    s.write(('r', 'r12', 8),s.pop())
    # 0x142816135: pop r13
    s.write(('r', 'r13', 8),s.pop())
    # 0x142816137: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x142816139: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x14281613b: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x14281613c: ret 
    s.pc=s.pop()
    return

def b_14281613d(s):
    # 0x14281613d: nop dword ptr [rax]
    # 0x142816140: mov qword ptr [rsp + 0x10], rdx
    s.write(('m', 'rsp', None, 1, 16, 8),s.read(('r', 'rdx', 8)))
    # 0x142816145: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x142816146: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x142816148: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x14281614a: push r13
    s.push(s.read(('r', 'r13', 8)))
    # 0x14281614c: push r12
    s.push(s.read(('r', 'r12', 8)))
    # 0x14281614e: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x14281614f: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x142816150: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x142816151: sub rsp, 0xd8
    s.integer('sub',[('r', 'rsp', 8), ('i', 216, 8)])
    # 0x142816158: lea rbp, [rdx + 0x80]
    s.write(('r', 'rbp', 8),s.address(('m', 'rdx', None, 1, 128, 8)))
    # 0x14281615f: movaps xmmword ptr [rsp + 0x30], xmm15
    s.simd_move('movaps',('m', 'rsp', None, 1, 48, 16),('r', 'xmm15', 16))
    # 0x142816165: movaps xmmword ptr [rsp + 0x40], xmm14
    s.simd_move('movaps',('m', 'rsp', None, 1, 64, 16),('r', 'xmm14', 16))
    # 0x14281616b: movaps xmmword ptr [rsp + 0x50], xmm13
    s.simd_move('movaps',('m', 'rsp', None, 1, 80, 16),('r', 'xmm13', 16))
    # 0x142816171: movaps xmmword ptr [rsp + 0x60], xmm12
    s.simd_move('movaps',('m', 'rsp', None, 1, 96, 16),('r', 'xmm12', 16))
    # 0x142816177: movaps xmmword ptr [rsp + 0x70], xmm11
    s.simd_move('movaps',('m', 'rsp', None, 1, 112, 16),('r', 'xmm11', 16))
    # 0x14281617d: movaps xmmword ptr [rsp + 0x80], xmm10
    s.simd_move('movaps',('m', 'rsp', None, 1, 128, 16),('r', 'xmm10', 16))
    # 0x142816186: movaps xmmword ptr [rsp + 0x90], xmm9
    s.simd_move('movaps',('m', 'rsp', None, 1, 144, 16),('r', 'xmm9', 16))
    # 0x14281618f: movaps xmmword ptr [rsp + 0xa0], xmm8
    s.simd_move('movaps',('m', 'rsp', None, 1, 160, 16),('r', 'xmm8', 16))
    # 0x142816198: movaps xmmword ptr [rsp + 0xb0], xmm7
    s.simd_move('movaps',('m', 'rsp', None, 1, 176, 16),('r', 'xmm7', 16))
    # 0x1428161a0: movaps xmmword ptr [rsp + 0xc0], xmm6
    s.simd_move('movaps',('m', 'rsp', None, 1, 192, 16),('r', 'xmm6', 16))
    # 0x1428161a8: mov rdx, qword ptr [rbp + 0x258]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 600, 8)))
    # 0x1428161af: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x1428161b2: je 0x1428161ca
    s.pc=s.read(('i', 5410742730, 8)) if s.condition('e') else 5410742708
    return

def b_1428161b4(s):
    # 0x1428161b4: shl rdx, 2
    s.integer('shl',[('r', 'rdx', 8), ('i', 2, 1)])
    # 0x1428161b8: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x1428161be: mov rcx, qword ptr [rbp + 0x320]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 800, 8)))
    # 0x1428161c5: call 0x1406abac0
    s.push(5410742730)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_1428161ca(s):
    # 0x1428161ca: movaps xmm6, xmmword ptr [rsp + 0xc0]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rsp', None, 1, 192, 16))
    # 0x1428161d2: movaps xmm7, xmmword ptr [rsp + 0xb0]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rsp', None, 1, 176, 16))
    # 0x1428161da: movaps xmm8, xmmword ptr [rsp + 0xa0]
    s.simd_move('movaps',('r', 'xmm8', 16),('m', 'rsp', None, 1, 160, 16))
    # 0x1428161e3: movaps xmm9, xmmword ptr [rsp + 0x90]
    s.simd_move('movaps',('r', 'xmm9', 16),('m', 'rsp', None, 1, 144, 16))
    # 0x1428161ec: movaps xmm10, xmmword ptr [rsp + 0x80]
    s.simd_move('movaps',('r', 'xmm10', 16),('m', 'rsp', None, 1, 128, 16))
    # 0x1428161f5: movaps xmm11, xmmword ptr [rsp + 0x70]
    s.simd_move('movaps',('r', 'xmm11', 16),('m', 'rsp', None, 1, 112, 16))
    # 0x1428161fb: movaps xmm12, xmmword ptr [rsp + 0x60]
    s.simd_move('movaps',('r', 'xmm12', 16),('m', 'rsp', None, 1, 96, 16))
    # 0x142816201: movaps xmm13, xmmword ptr [rsp + 0x50]
    s.simd_move('movaps',('r', 'xmm13', 16),('m', 'rsp', None, 1, 80, 16))
    # 0x142816207: movaps xmm14, xmmword ptr [rsp + 0x40]
    s.simd_move('movaps',('r', 'xmm14', 16),('m', 'rsp', None, 1, 64, 16))
    # 0x14281620d: movaps xmm15, xmmword ptr [rsp + 0x30]
    s.simd_move('movaps',('r', 'xmm15', 16),('m', 'rsp', None, 1, 48, 16))
    # 0x142816213: add rsp, 0xd8
    s.integer('add',[('r', 'rsp', 8), ('i', 216, 8)])
    # 0x14281621a: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x14281621b: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x14281621c: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x14281621d: pop r12
    s.write(('r', 'r12', 8),s.pop())
    # 0x14281621f: pop r13
    s.write(('r', 'r13', 8),s.pop())
    # 0x142816221: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x142816223: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x142816225: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x142816226: ret 
    s.pc=s.pop()
    return

def b_142816227(s):
    # 0x142816227: nop word ptr [rax + rax]
    # 0x142816230: mov qword ptr [rsp + 0x10], rdx
    s.write(('m', 'rsp', None, 1, 16, 8),s.read(('r', 'rdx', 8)))
    # 0x142816235: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x142816236: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x142816238: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x14281623a: push r13
    s.push(s.read(('r', 'r13', 8)))
    # 0x14281623c: push r12
    s.push(s.read(('r', 'r12', 8)))
    # 0x14281623e: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x14281623f: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x142816240: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x142816241: sub rsp, 0xd8
    s.integer('sub',[('r', 'rsp', 8), ('i', 216, 8)])
    # 0x142816248: lea rbp, [rdx + 0x80]
    s.write(('r', 'rbp', 8),s.address(('m', 'rdx', None, 1, 128, 8)))
    # 0x14281624f: movaps xmmword ptr [rsp + 0x30], xmm15
    s.simd_move('movaps',('m', 'rsp', None, 1, 48, 16),('r', 'xmm15', 16))
    # 0x142816255: movaps xmmword ptr [rsp + 0x40], xmm14
    s.simd_move('movaps',('m', 'rsp', None, 1, 64, 16),('r', 'xmm14', 16))
    # 0x14281625b: movaps xmmword ptr [rsp + 0x50], xmm13
    s.simd_move('movaps',('m', 'rsp', None, 1, 80, 16),('r', 'xmm13', 16))
    # 0x142816261: movaps xmmword ptr [rsp + 0x60], xmm12
    s.simd_move('movaps',('m', 'rsp', None, 1, 96, 16),('r', 'xmm12', 16))
    # 0x142816267: movaps xmmword ptr [rsp + 0x70], xmm11
    s.simd_move('movaps',('m', 'rsp', None, 1, 112, 16),('r', 'xmm11', 16))
    # 0x14281626d: movaps xmmword ptr [rsp + 0x80], xmm10
    s.simd_move('movaps',('m', 'rsp', None, 1, 128, 16),('r', 'xmm10', 16))
    # 0x142816276: movaps xmmword ptr [rsp + 0x90], xmm9
    s.simd_move('movaps',('m', 'rsp', None, 1, 144, 16),('r', 'xmm9', 16))
    # 0x14281627f: movaps xmmword ptr [rsp + 0xa0], xmm8
    s.simd_move('movaps',('m', 'rsp', None, 1, 160, 16),('r', 'xmm8', 16))
    # 0x142816288: movaps xmmword ptr [rsp + 0xb0], xmm7
    s.simd_move('movaps',('m', 'rsp', None, 1, 176, 16),('r', 'xmm7', 16))
    # 0x142816290: movaps xmmword ptr [rsp + 0xc0], xmm6
    s.simd_move('movaps',('m', 'rsp', None, 1, 192, 16),('r', 'xmm6', 16))
    # 0x142816298: mov rdx, qword ptr [rbp + 0x258]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 600, 8)))
    # 0x14281629f: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x1428162a2: je 0x1428162ba
    s.pc=s.read(('i', 5410742970, 8)) if s.condition('e') else 5410742948
    return

def b_1428162a4(s):
    # 0x1428162a4: mov rcx, qword ptr [rbp + 0x260]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 608, 8)))
    # 0x1428162ab: shl rdx, 3
    s.integer('shl',[('r', 'rdx', 8), ('i', 3, 1)])
    # 0x1428162af: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x1428162b5: call 0x1406abac0
    s.push(5410742970)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_1428162ba(s):
    # 0x1428162ba: mov rdx, qword ptr [rbp + 0x270]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 624, 8)))
    # 0x1428162c1: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x1428162c4: je 0x1428162dc
    s.pc=s.read(('i', 5410743004, 8)) if s.condition('e') else 5410742982
    return

def b_1428162c6(s):
    # 0x1428162c6: mov rcx, qword ptr [rbp + 0x278]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 632, 8)))
    # 0x1428162cd: shl rdx, 2
    s.integer('shl',[('r', 'rdx', 8), ('i', 2, 1)])
    # 0x1428162d1: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x1428162d7: call 0x1406abac0
    s.push(5410743004)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_1428162dc(s):
    # 0x1428162dc: movaps xmm6, xmmword ptr [rsp + 0xc0]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rsp', None, 1, 192, 16))
    # 0x1428162e4: movaps xmm7, xmmword ptr [rsp + 0xb0]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rsp', None, 1, 176, 16))
    # 0x1428162ec: movaps xmm8, xmmword ptr [rsp + 0xa0]
    s.simd_move('movaps',('r', 'xmm8', 16),('m', 'rsp', None, 1, 160, 16))
    # 0x1428162f5: movaps xmm9, xmmword ptr [rsp + 0x90]
    s.simd_move('movaps',('r', 'xmm9', 16),('m', 'rsp', None, 1, 144, 16))
    # 0x1428162fe: movaps xmm10, xmmword ptr [rsp + 0x80]
    s.simd_move('movaps',('r', 'xmm10', 16),('m', 'rsp', None, 1, 128, 16))
    # 0x142816307: movaps xmm11, xmmword ptr [rsp + 0x70]
    s.simd_move('movaps',('r', 'xmm11', 16),('m', 'rsp', None, 1, 112, 16))
    # 0x14281630d: movaps xmm12, xmmword ptr [rsp + 0x60]
    s.simd_move('movaps',('r', 'xmm12', 16),('m', 'rsp', None, 1, 96, 16))
    # 0x142816313: movaps xmm13, xmmword ptr [rsp + 0x50]
    s.simd_move('movaps',('r', 'xmm13', 16),('m', 'rsp', None, 1, 80, 16))
    # 0x142816319: movaps xmm14, xmmword ptr [rsp + 0x40]
    s.simd_move('movaps',('r', 'xmm14', 16),('m', 'rsp', None, 1, 64, 16))
    # 0x14281631f: movaps xmm15, xmmword ptr [rsp + 0x30]
    s.simd_move('movaps',('r', 'xmm15', 16),('m', 'rsp', None, 1, 48, 16))
    # 0x142816325: add rsp, 0xd8
    s.integer('add',[('r', 'rsp', 8), ('i', 216, 8)])
    # 0x14281632c: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x14281632d: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x14281632e: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x14281632f: pop r12
    s.write(('r', 'r12', 8),s.pop())
    # 0x142816331: pop r13
    s.write(('r', 'r13', 8),s.pop())
    # 0x142816333: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x142816335: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x142816337: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x142816338: ret 
    s.pc=s.pop()
    return

def b_142816339(s):
    # 0x142816339: nop dword ptr [rax]
    # 0x142816340: mov qword ptr [rsp + 0x10], rdx
    s.write(('m', 'rsp', None, 1, 16, 8),s.read(('r', 'rdx', 8)))
    # 0x142816345: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x142816346: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x142816348: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x14281634a: push r13
    s.push(s.read(('r', 'r13', 8)))
    # 0x14281634c: push r12
    s.push(s.read(('r', 'r12', 8)))
    # 0x14281634e: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x14281634f: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x142816350: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x142816351: sub rsp, 0xd8
    s.integer('sub',[('r', 'rsp', 8), ('i', 216, 8)])
    # 0x142816358: lea rbp, [rdx + 0x80]
    s.write(('r', 'rbp', 8),s.address(('m', 'rdx', None, 1, 128, 8)))
    # 0x14281635f: movaps xmmword ptr [rsp + 0x30], xmm15
    s.simd_move('movaps',('m', 'rsp', None, 1, 48, 16),('r', 'xmm15', 16))
    # 0x142816365: movaps xmmword ptr [rsp + 0x40], xmm14
    s.simd_move('movaps',('m', 'rsp', None, 1, 64, 16),('r', 'xmm14', 16))
    # 0x14281636b: movaps xmmword ptr [rsp + 0x50], xmm13
    s.simd_move('movaps',('m', 'rsp', None, 1, 80, 16),('r', 'xmm13', 16))
    # 0x142816371: movaps xmmword ptr [rsp + 0x60], xmm12
    s.simd_move('movaps',('m', 'rsp', None, 1, 96, 16),('r', 'xmm12', 16))
    # 0x142816377: movaps xmmword ptr [rsp + 0x70], xmm11
    s.simd_move('movaps',('m', 'rsp', None, 1, 112, 16),('r', 'xmm11', 16))
    # 0x14281637d: movaps xmmword ptr [rsp + 0x80], xmm10
    s.simd_move('movaps',('m', 'rsp', None, 1, 128, 16),('r', 'xmm10', 16))
    # 0x142816386: movaps xmmword ptr [rsp + 0x90], xmm9
    s.simd_move('movaps',('m', 'rsp', None, 1, 144, 16),('r', 'xmm9', 16))
    # 0x14281638f: movaps xmmword ptr [rsp + 0xa0], xmm8
    s.simd_move('movaps',('m', 'rsp', None, 1, 160, 16),('r', 'xmm8', 16))
    # 0x142816398: movaps xmmword ptr [rsp + 0xb0], xmm7
    s.simd_move('movaps',('m', 'rsp', None, 1, 176, 16),('r', 'xmm7', 16))
    # 0x1428163a0: movaps xmmword ptr [rsp + 0xc0], xmm6
    s.simd_move('movaps',('m', 'rsp', None, 1, 192, 16),('r', 'xmm6', 16))
    # 0x1428163a8: mov rax, qword ptr [rbp + 0x2c0]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 704, 8)))
    # 0x1428163af: test rax, rax
    s.integer('test',[('r', 'rax', 8), ('r', 'rax', 8)])
    # 0x1428163b2: je 0x1428163ce
    s.pc=s.read(('i', 5410743246, 8)) if s.condition('e') else 5410743220
    return

def b_1428163b4(s):
    # 0x1428163b4: mov rcx, qword ptr [rbp + 0x2c8]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 712, 8)))
    # 0x1428163bb: shl rax, 3
    s.integer('shl',[('r', 'rax', 8), ('i', 3, 1)])
    # 0x1428163bf: lea rdx, [rax + rax*2]
    s.write(('r', 'rdx', 8),s.address(('m', 'rax', 'rax', 2, 0, 8)))
    # 0x1428163c3: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x1428163c9: call 0x1406abac0
    s.push(5410743246)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_1428163ce(s):
    # 0x1428163ce: movaps xmm6, xmmword ptr [rsp + 0xc0]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rsp', None, 1, 192, 16))
    # 0x1428163d6: movaps xmm7, xmmword ptr [rsp + 0xb0]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rsp', None, 1, 176, 16))
    # 0x1428163de: movaps xmm8, xmmword ptr [rsp + 0xa0]
    s.simd_move('movaps',('r', 'xmm8', 16),('m', 'rsp', None, 1, 160, 16))
    # 0x1428163e7: movaps xmm9, xmmword ptr [rsp + 0x90]
    s.simd_move('movaps',('r', 'xmm9', 16),('m', 'rsp', None, 1, 144, 16))
    # 0x1428163f0: movaps xmm10, xmmword ptr [rsp + 0x80]
    s.simd_move('movaps',('r', 'xmm10', 16),('m', 'rsp', None, 1, 128, 16))
    # 0x1428163f9: movaps xmm11, xmmword ptr [rsp + 0x70]
    s.simd_move('movaps',('r', 'xmm11', 16),('m', 'rsp', None, 1, 112, 16))
    # 0x1428163ff: movaps xmm12, xmmword ptr [rsp + 0x60]
    s.simd_move('movaps',('r', 'xmm12', 16),('m', 'rsp', None, 1, 96, 16))
    # 0x142816405: movaps xmm13, xmmword ptr [rsp + 0x50]
    s.simd_move('movaps',('r', 'xmm13', 16),('m', 'rsp', None, 1, 80, 16))
    # 0x14281640b: movaps xmm14, xmmword ptr [rsp + 0x40]
    s.simd_move('movaps',('r', 'xmm14', 16),('m', 'rsp', None, 1, 64, 16))
    # 0x142816411: movaps xmm15, xmmword ptr [rsp + 0x30]
    s.simd_move('movaps',('r', 'xmm15', 16),('m', 'rsp', None, 1, 48, 16))
    # 0x142816417: add rsp, 0xd8
    s.integer('add',[('r', 'rsp', 8), ('i', 216, 8)])
    # 0x14281641e: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x14281641f: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x142816420: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x142816421: pop r12
    s.write(('r', 'r12', 8),s.pop())
    # 0x142816423: pop r13
    s.write(('r', 'r13', 8),s.pop())
    # 0x142816425: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x142816427: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x142816429: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x14281642a: ret 
    s.pc=s.pop()
    return

def b_14281642b(s):
    # 0x14281642b: nop dword ptr [rax + rax]
    # 0x142816430: mov qword ptr [rsp + 0x10], rdx
    s.write(('m', 'rsp', None, 1, 16, 8),s.read(('r', 'rdx', 8)))
    # 0x142816435: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x142816436: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x142816438: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x14281643a: push r13
    s.push(s.read(('r', 'r13', 8)))
    # 0x14281643c: push r12
    s.push(s.read(('r', 'r12', 8)))
    # 0x14281643e: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x14281643f: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x142816440: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x142816441: sub rsp, 0xd8
    s.integer('sub',[('r', 'rsp', 8), ('i', 216, 8)])
    # 0x142816448: lea rbp, [rdx + 0x80]
    s.write(('r', 'rbp', 8),s.address(('m', 'rdx', None, 1, 128, 8)))
    # 0x14281644f: movaps xmmword ptr [rsp + 0x30], xmm15
    s.simd_move('movaps',('m', 'rsp', None, 1, 48, 16),('r', 'xmm15', 16))
    # 0x142816455: movaps xmmword ptr [rsp + 0x40], xmm14
    s.simd_move('movaps',('m', 'rsp', None, 1, 64, 16),('r', 'xmm14', 16))
    # 0x14281645b: movaps xmmword ptr [rsp + 0x50], xmm13
    s.simd_move('movaps',('m', 'rsp', None, 1, 80, 16),('r', 'xmm13', 16))
    # 0x142816461: movaps xmmword ptr [rsp + 0x60], xmm12
    s.simd_move('movaps',('m', 'rsp', None, 1, 96, 16),('r', 'xmm12', 16))
    # 0x142816467: movaps xmmword ptr [rsp + 0x70], xmm11
    s.simd_move('movaps',('m', 'rsp', None, 1, 112, 16),('r', 'xmm11', 16))
    # 0x14281646d: movaps xmmword ptr [rsp + 0x80], xmm10
    s.simd_move('movaps',('m', 'rsp', None, 1, 128, 16),('r', 'xmm10', 16))
    # 0x142816476: movaps xmmword ptr [rsp + 0x90], xmm9
    s.simd_move('movaps',('m', 'rsp', None, 1, 144, 16),('r', 'xmm9', 16))
    # 0x14281647f: movaps xmmword ptr [rsp + 0xa0], xmm8
    s.simd_move('movaps',('m', 'rsp', None, 1, 160, 16),('r', 'xmm8', 16))
    # 0x142816488: movaps xmmword ptr [rsp + 0xb0], xmm7
    s.simd_move('movaps',('m', 'rsp', None, 1, 176, 16),('r', 'xmm7', 16))
    # 0x142816490: movaps xmmword ptr [rsp + 0xc0], xmm6
    s.simd_move('movaps',('m', 'rsp', None, 1, 192, 16),('r', 'xmm6', 16))
    # 0x142816498: mov rdx, qword ptr [rbp + 0x1a8]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 424, 8)))
    # 0x14281649f: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x1428164a2: je 0x1428164ba
    s.pc=s.read(('i', 5410743482, 8)) if s.condition('e') else 5410743460
    return

def b_1428164a4(s):
    # 0x1428164a4: mov rcx, qword ptr [rbp + 0x1b0]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 432, 8)))
    # 0x1428164ab: shl rdx, 2
    s.integer('shl',[('r', 'rdx', 8), ('i', 2, 1)])
    # 0x1428164af: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x1428164b5: call 0x1406abac0
    s.push(5410743482)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_1428164ba(s):
    # 0x1428164ba: movaps xmm6, xmmword ptr [rsp + 0xc0]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rsp', None, 1, 192, 16))
    # 0x1428164c2: movaps xmm7, xmmword ptr [rsp + 0xb0]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rsp', None, 1, 176, 16))
    # 0x1428164ca: movaps xmm8, xmmword ptr [rsp + 0xa0]
    s.simd_move('movaps',('r', 'xmm8', 16),('m', 'rsp', None, 1, 160, 16))
    # 0x1428164d3: movaps xmm9, xmmword ptr [rsp + 0x90]
    s.simd_move('movaps',('r', 'xmm9', 16),('m', 'rsp', None, 1, 144, 16))
    # 0x1428164dc: movaps xmm10, xmmword ptr [rsp + 0x80]
    s.simd_move('movaps',('r', 'xmm10', 16),('m', 'rsp', None, 1, 128, 16))
    # 0x1428164e5: movaps xmm11, xmmword ptr [rsp + 0x70]
    s.simd_move('movaps',('r', 'xmm11', 16),('m', 'rsp', None, 1, 112, 16))
    # 0x1428164eb: movaps xmm12, xmmword ptr [rsp + 0x60]
    s.simd_move('movaps',('r', 'xmm12', 16),('m', 'rsp', None, 1, 96, 16))
    # 0x1428164f1: movaps xmm13, xmmword ptr [rsp + 0x50]
    s.simd_move('movaps',('r', 'xmm13', 16),('m', 'rsp', None, 1, 80, 16))
    # 0x1428164f7: movaps xmm14, xmmword ptr [rsp + 0x40]
    s.simd_move('movaps',('r', 'xmm14', 16),('m', 'rsp', None, 1, 64, 16))
    # 0x1428164fd: movaps xmm15, xmmword ptr [rsp + 0x30]
    s.simd_move('movaps',('r', 'xmm15', 16),('m', 'rsp', None, 1, 48, 16))
    # 0x142816503: add rsp, 0xd8
    s.integer('add',[('r', 'rsp', 8), ('i', 216, 8)])
    # 0x14281650a: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x14281650b: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x14281650c: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x14281650d: pop r12
    s.write(('r', 'r12', 8),s.pop())
    # 0x14281650f: pop r13
    s.write(('r', 'r13', 8),s.pop())
    # 0x142816511: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x142816513: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x142816515: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x142816516: ret 
    s.pc=s.pop()
    return

def b_142816517(s):
    # 0x142816517: nop word ptr [rax + rax]
    # 0x142816520: mov qword ptr [rsp + 0x10], rdx
    s.write(('m', 'rsp', None, 1, 16, 8),s.read(('r', 'rdx', 8)))
    # 0x142816525: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x142816526: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x142816528: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x14281652a: push r13
    s.push(s.read(('r', 'r13', 8)))
    # 0x14281652c: push r12
    s.push(s.read(('r', 'r12', 8)))
    # 0x14281652e: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x14281652f: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x142816530: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x142816531: sub rsp, 0xd8
    s.integer('sub',[('r', 'rsp', 8), ('i', 216, 8)])
    # 0x142816538: lea rbp, [rdx + 0x80]
    s.write(('r', 'rbp', 8),s.address(('m', 'rdx', None, 1, 128, 8)))
    # 0x14281653f: movaps xmmword ptr [rsp + 0x30], xmm15
    s.simd_move('movaps',('m', 'rsp', None, 1, 48, 16),('r', 'xmm15', 16))
    # 0x142816545: movaps xmmword ptr [rsp + 0x40], xmm14
    s.simd_move('movaps',('m', 'rsp', None, 1, 64, 16),('r', 'xmm14', 16))
    # 0x14281654b: movaps xmmword ptr [rsp + 0x50], xmm13
    s.simd_move('movaps',('m', 'rsp', None, 1, 80, 16),('r', 'xmm13', 16))
    # 0x142816551: movaps xmmword ptr [rsp + 0x60], xmm12
    s.simd_move('movaps',('m', 'rsp', None, 1, 96, 16),('r', 'xmm12', 16))
    # 0x142816557: movaps xmmword ptr [rsp + 0x70], xmm11
    s.simd_move('movaps',('m', 'rsp', None, 1, 112, 16),('r', 'xmm11', 16))
    # 0x14281655d: movaps xmmword ptr [rsp + 0x80], xmm10
    s.simd_move('movaps',('m', 'rsp', None, 1, 128, 16),('r', 'xmm10', 16))
    # 0x142816566: movaps xmmword ptr [rsp + 0x90], xmm9
    s.simd_move('movaps',('m', 'rsp', None, 1, 144, 16),('r', 'xmm9', 16))
    # 0x14281656f: movaps xmmword ptr [rsp + 0xa0], xmm8
    s.simd_move('movaps',('m', 'rsp', None, 1, 160, 16),('r', 'xmm8', 16))
    # 0x142816578: movaps xmmword ptr [rsp + 0xb0], xmm7
    s.simd_move('movaps',('m', 'rsp', None, 1, 176, 16),('r', 'xmm7', 16))
    # 0x142816580: movaps xmmword ptr [rsp + 0xc0], xmm6
    s.simd_move('movaps',('m', 'rsp', None, 1, 192, 16),('r', 'xmm6', 16))
    # 0x142816588: mov rdx, qword ptr [rbp + 0x2e0]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 736, 8)))
    # 0x14281658f: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x142816592: je 0x1428165aa
    s.pc=s.read(('i', 5410743722, 8)) if s.condition('e') else 5410743700
    return

def b_142816594(s):
    # 0x142816594: mov rcx, qword ptr [rbp + 0x2e8]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 744, 8)))
    # 0x14281659b: shl rdx, 3
    s.integer('shl',[('r', 'rdx', 8), ('i', 3, 1)])
    # 0x14281659f: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x1428165a5: call 0x1406abac0
    s.push(5410743722)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_1428165aa(s):
    # 0x1428165aa: mov rdx, qword ptr [rbp + 0x2f8]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 760, 8)))
    # 0x1428165b1: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x1428165b4: je 0x1428165cc
    s.pc=s.read(('i', 5410743756, 8)) if s.condition('e') else 5410743734
    return

def b_1428165b6(s):
    # 0x1428165b6: mov rcx, qword ptr [rbp + 0x300]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 768, 8)))
    # 0x1428165bd: shl rdx, 2
    s.integer('shl',[('r', 'rdx', 8), ('i', 2, 1)])
    # 0x1428165c1: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x1428165c7: call 0x1406abac0
    s.push(5410743756)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_1428165cc(s):
    # 0x1428165cc: movaps xmm6, xmmword ptr [rsp + 0xc0]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rsp', None, 1, 192, 16))
    # 0x1428165d4: movaps xmm7, xmmword ptr [rsp + 0xb0]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rsp', None, 1, 176, 16))
    # 0x1428165dc: movaps xmm8, xmmword ptr [rsp + 0xa0]
    s.simd_move('movaps',('r', 'xmm8', 16),('m', 'rsp', None, 1, 160, 16))
    # 0x1428165e5: movaps xmm9, xmmword ptr [rsp + 0x90]
    s.simd_move('movaps',('r', 'xmm9', 16),('m', 'rsp', None, 1, 144, 16))
    # 0x1428165ee: movaps xmm10, xmmword ptr [rsp + 0x80]
    s.simd_move('movaps',('r', 'xmm10', 16),('m', 'rsp', None, 1, 128, 16))
    # 0x1428165f7: movaps xmm11, xmmword ptr [rsp + 0x70]
    s.simd_move('movaps',('r', 'xmm11', 16),('m', 'rsp', None, 1, 112, 16))
    # 0x1428165fd: movaps xmm12, xmmword ptr [rsp + 0x60]
    s.simd_move('movaps',('r', 'xmm12', 16),('m', 'rsp', None, 1, 96, 16))
    # 0x142816603: movaps xmm13, xmmword ptr [rsp + 0x50]
    s.simd_move('movaps',('r', 'xmm13', 16),('m', 'rsp', None, 1, 80, 16))
    # 0x142816609: movaps xmm14, xmmword ptr [rsp + 0x40]
    s.simd_move('movaps',('r', 'xmm14', 16),('m', 'rsp', None, 1, 64, 16))
    # 0x14281660f: movaps xmm15, xmmword ptr [rsp + 0x30]
    s.simd_move('movaps',('r', 'xmm15', 16),('m', 'rsp', None, 1, 48, 16))
    # 0x142816615: add rsp, 0xd8
    s.integer('add',[('r', 'rsp', 8), ('i', 216, 8)])
    # 0x14281661c: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x14281661d: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x14281661e: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x14281661f: pop r12
    s.write(('r', 'r12', 8),s.pop())
    # 0x142816621: pop r13
    s.write(('r', 'r13', 8),s.pop())
    # 0x142816623: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x142816625: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x142816627: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x142816628: ret 
    s.pc=s.pop()
    return

def b_142816629(s):
    # 0x142816629: nop dword ptr [rax]
    # 0x142816630: mov qword ptr [rsp + 0x10], rdx
    s.write(('m', 'rsp', None, 1, 16, 8),s.read(('r', 'rdx', 8)))
    # 0x142816635: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x142816636: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x142816638: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x14281663a: push r13
    s.push(s.read(('r', 'r13', 8)))
    # 0x14281663c: push r12
    s.push(s.read(('r', 'r12', 8)))
    # 0x14281663e: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x14281663f: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x142816640: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x142816641: sub rsp, 0xd8
    s.integer('sub',[('r', 'rsp', 8), ('i', 216, 8)])
    # 0x142816648: lea rbp, [rdx + 0x80]
    s.write(('r', 'rbp', 8),s.address(('m', 'rdx', None, 1, 128, 8)))
    # 0x14281664f: movaps xmmword ptr [rsp + 0x30], xmm15
    s.simd_move('movaps',('m', 'rsp', None, 1, 48, 16),('r', 'xmm15', 16))
    # 0x142816655: movaps xmmword ptr [rsp + 0x40], xmm14
    s.simd_move('movaps',('m', 'rsp', None, 1, 64, 16),('r', 'xmm14', 16))
    # 0x14281665b: movaps xmmword ptr [rsp + 0x50], xmm13
    s.simd_move('movaps',('m', 'rsp', None, 1, 80, 16),('r', 'xmm13', 16))
    # 0x142816661: movaps xmmword ptr [rsp + 0x60], xmm12
    s.simd_move('movaps',('m', 'rsp', None, 1, 96, 16),('r', 'xmm12', 16))
    # 0x142816667: movaps xmmword ptr [rsp + 0x70], xmm11
    s.simd_move('movaps',('m', 'rsp', None, 1, 112, 16),('r', 'xmm11', 16))
    # 0x14281666d: movaps xmmword ptr [rsp + 0x80], xmm10
    s.simd_move('movaps',('m', 'rsp', None, 1, 128, 16),('r', 'xmm10', 16))
    # 0x142816676: movaps xmmword ptr [rsp + 0x90], xmm9
    s.simd_move('movaps',('m', 'rsp', None, 1, 144, 16),('r', 'xmm9', 16))
    # 0x14281667f: movaps xmmword ptr [rsp + 0xa0], xmm8
    s.simd_move('movaps',('m', 'rsp', None, 1, 160, 16),('r', 'xmm8', 16))
    # 0x142816688: movaps xmmword ptr [rsp + 0xb0], xmm7
    s.simd_move('movaps',('m', 'rsp', None, 1, 176, 16),('r', 'xmm7', 16))
    # 0x142816690: movaps xmmword ptr [rsp + 0xc0], xmm6
    s.simd_move('movaps',('m', 'rsp', None, 1, 192, 16),('r', 'xmm6', 16))
    # 0x142816698: mov rdx, qword ptr [rbp + 0x2e0]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 736, 8)))
    # 0x14281669f: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x1428166a2: je 0x1428166ba
    s.pc=s.read(('i', 5410743994, 8)) if s.condition('e') else 5410743972
    return

def b_1428166a4(s):
    # 0x1428166a4: mov rcx, qword ptr [rbp + 0x2e8]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 744, 8)))
    # 0x1428166ab: shl rdx, 2
    s.integer('shl',[('r', 'rdx', 8), ('i', 2, 1)])
    # 0x1428166af: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x1428166b5: call 0x1406abac0
    s.push(5410743994)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_1428166ba(s):
    # 0x1428166ba: movaps xmm6, xmmword ptr [rsp + 0xc0]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rsp', None, 1, 192, 16))
    # 0x1428166c2: movaps xmm7, xmmword ptr [rsp + 0xb0]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rsp', None, 1, 176, 16))
    # 0x1428166ca: movaps xmm8, xmmword ptr [rsp + 0xa0]
    s.simd_move('movaps',('r', 'xmm8', 16),('m', 'rsp', None, 1, 160, 16))
    # 0x1428166d3: movaps xmm9, xmmword ptr [rsp + 0x90]
    s.simd_move('movaps',('r', 'xmm9', 16),('m', 'rsp', None, 1, 144, 16))
    # 0x1428166dc: movaps xmm10, xmmword ptr [rsp + 0x80]
    s.simd_move('movaps',('r', 'xmm10', 16),('m', 'rsp', None, 1, 128, 16))
    # 0x1428166e5: movaps xmm11, xmmword ptr [rsp + 0x70]
    s.simd_move('movaps',('r', 'xmm11', 16),('m', 'rsp', None, 1, 112, 16))
    # 0x1428166eb: movaps xmm12, xmmword ptr [rsp + 0x60]
    s.simd_move('movaps',('r', 'xmm12', 16),('m', 'rsp', None, 1, 96, 16))
    # 0x1428166f1: movaps xmm13, xmmword ptr [rsp + 0x50]
    s.simd_move('movaps',('r', 'xmm13', 16),('m', 'rsp', None, 1, 80, 16))
    # 0x1428166f7: movaps xmm14, xmmword ptr [rsp + 0x40]
    s.simd_move('movaps',('r', 'xmm14', 16),('m', 'rsp', None, 1, 64, 16))
    # 0x1428166fd: movaps xmm15, xmmword ptr [rsp + 0x30]
    s.simd_move('movaps',('r', 'xmm15', 16),('m', 'rsp', None, 1, 48, 16))
    # 0x142816703: add rsp, 0xd8
    s.integer('add',[('r', 'rsp', 8), ('i', 216, 8)])
    # 0x14281670a: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x14281670b: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x14281670c: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x14281670d: pop r12
    s.write(('r', 'r12', 8),s.pop())
    # 0x14281670f: pop r13
    s.write(('r', 'r13', 8),s.pop())
    # 0x142816711: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x142816713: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x142816715: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x142816716: ret 
    s.pc=s.pop()
    return

def b_142816ba0(s):
    # 0x142816ba0: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x142816ba1: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x142816ba3: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x142816ba5: push r13
    s.push(s.read(('r', 'r13', 8)))
    # 0x142816ba7: push r12
    s.push(s.read(('r', 'r12', 8)))
    # 0x142816ba9: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x142816baa: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x142816bab: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x142816bac: sub rsp, 0x2b8
    s.integer('sub',[('r', 'rsp', 8), ('i', 696, 8)])
    # 0x142816bb3: lea rbp, [rsp + 0x80]
    s.write(('r', 'rbp', 8),s.address(('m', 'rsp', None, 1, 128, 8)))
    # 0x142816bbb: movaps xmmword ptr [rbp + 0x220], xmm15
    s.simd_move('movaps',('m', 'rbp', None, 1, 544, 16),('r', 'xmm15', 16))
    # 0x142816bc3: movaps xmmword ptr [rbp + 0x210], xmm14
    s.simd_move('movaps',('m', 'rbp', None, 1, 528, 16),('r', 'xmm14', 16))
    # 0x142816bcb: movaps xmmword ptr [rbp + 0x200], xmm13
    s.simd_move('movaps',('m', 'rbp', None, 1, 512, 16),('r', 'xmm13', 16))
    # 0x142816bd3: movaps xmmword ptr [rbp + 0x1f0], xmm12
    s.simd_move('movaps',('m', 'rbp', None, 1, 496, 16),('r', 'xmm12', 16))
    # 0x142816bdb: movaps xmmword ptr [rbp + 0x1e0], xmm11
    s.simd_move('movaps',('m', 'rbp', None, 1, 480, 16),('r', 'xmm11', 16))
    # 0x142816be3: movaps xmmword ptr [rbp + 0x1d0], xmm10
    s.simd_move('movaps',('m', 'rbp', None, 1, 464, 16),('r', 'xmm10', 16))
    # 0x142816beb: movaps xmmword ptr [rbp + 0x1c0], xmm9
    s.simd_move('movaps',('m', 'rbp', None, 1, 448, 16),('r', 'xmm9', 16))
    # 0x142816bf3: movaps xmmword ptr [rbp + 0x1b0], xmm8
    s.simd_move('movaps',('m', 'rbp', None, 1, 432, 16),('r', 'xmm8', 16))
    # 0x142816bfb: movaps xmmword ptr [rbp + 0x1a0], xmm7
    s.simd_move('movaps',('m', 'rbp', None, 1, 416, 16),('r', 'xmm7', 16))
    # 0x142816c02: movaps xmmword ptr [rbp + 0x190], xmm6
    s.simd_move('movaps',('m', 'rbp', None, 1, 400, 16),('r', 'xmm6', 16))
    # 0x142816c09: mov qword ptr [rbp + 0x188], 0xfffffffffffffffe
    s.write(('m', 'rbp', None, 1, 392, 8),s.read(('i', -2, 8)))
    # 0x142816c14: mov bl, r9b
    s.write(('r', 'bl', 1),s.read(('r', 'r9b', 1)))
    # 0x142816c17: mov dword ptr [rbp + 0x12c], r8d
    s.write(('m', 'rbp', None, 1, 300, 4),s.read(('r', 'r8d', 4)))
    # 0x142816c1e: mov r14, rdx
    s.write(('r', 'r14', 8),s.read(('r', 'rdx', 8)))
    # 0x142816c21: mov rdi, rcx
    s.write(('r', 'rdi', 8),s.read(('r', 'rcx', 8)))
    # 0x142816c24: mov qword ptr [rbp + 0x120], 0
    s.write(('m', 'rbp', None, 1, 288, 8),s.read(('i', 0, 8)))
    # 0x142816c2f: lea rsi, [rbp + 0x140]
    s.write(('r', 'rsi', 8),s.address(('m', 'rbp', None, 1, 320, 8)))
    # 0x142816c36: mov rcx, rsi
    s.write(('r', 'rcx', 8),s.read(('r', 'rsi', 8)))
    # 0x142816c39: call 0x140b73b80
    s.push(5410745406)
    s.pc=s.read(('i', 5380717440, 8))
    return

def b_142816c3e(s):
    # 0x142816c3e: mov rcx, rsi
    s.write(('r', 'rcx', 8),s.read(('r', 'rsi', 8)))
    # 0x142816c41: call 0x140b73b40
    s.push(5410745414)
    s.pc=s.read(('i', 5380717376, 8))
    return

def b_142816c46(s):
    # 0x142816c46: movaps xmm6, xmm0
    s.simd_move('movaps',('r', 'xmm6', 16),('r', 'xmm0', 16))
    # 0x142816c49: movaps xmm7, xmm1
    s.simd_move('movaps',('r', 'xmm7', 16),('r', 'xmm1', 16))
    # 0x142816c4c: lea rcx, [rbp - 0x58]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, -88, 8)))
    # 0x142816c50: mov rdx, r14
    s.write(('r', 'rdx', 8),s.read(('r', 'r14', 8)))
    # 0x142816c53: call 0x140b772d0
    s.push(5410745432)
    s.pc=s.read(('i', 5380731600, 8))
    return

def b_142816c58(s):
    # 0x142816c58: nop 
    # 0x142816c59: mov rcx, r14
    s.write(('r', 'rcx', 8),s.read(('r', 'r14', 8)))
    # 0x142816c5c: call 0x140b77a00
    s.push(5410745441)
    s.pc=s.read(('i', 5380733440, 8))
    return

def b_142816c61(s):
    # 0x142816c61: nop 
    # 0x142816c62: movss dword ptr [rsp + 0x20], xmm0
    s.simd_move('movss',('m', 'rsp', None, 1, 32, 4),('r', 'xmm0', 16))
    # 0x142816c68: lea rcx, [rbp + 0x30]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 48, 8)))
    # 0x142816c6c: lea rdx, [rbp - 0x58]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, -88, 8)))
    # 0x142816c70: movaps xmm2, xmm6
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm6', 16))
    # 0x142816c73: movaps xmm3, xmm7
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm7', 16))
    # 0x142816c76: call 0x140b768b0
    s.push(5410745467)
    s.pc=s.read(('i', 5380729008, 8))
    return

def b_142816c7b(s):
    # 0x142816c7b: nop 
    # 0x142816c7c: movss xmm6, dword ptr [rbp + 0x60]
    s.simd_move('movss',('r', 'xmm6', 16),('m', 'rbp', None, 1, 96, 4))
    # 0x142816c81: movaps xmm0, xmm6
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x142816c84: divss xmm0, dword ptr [rip + 0xd85f4c]
    s.float_op('divss',('r', 'xmm0', 16),('m', None, None, 1, 5424925656, 4))
    # 0x142816c8c: call 0x142e329c0
    s.push(5410745489)
    s.pc=s.read(('i', 5417150912, 8))
    return

def b_142816c91(s):
    # 0x142816c91: maxss xmm0, dword ptr [rip + 0x620b97]
    s.float_op('maxss',('r', 'xmm0', 16),('m', None, None, 1, 5417170992, 4))
    # 0x142816c99: cvttss2si r15d, xmm0
    s.write(('r', 'r15d', 4),math.trunc(bitsf(s.read(('r', 'xmm0', 16)))) if math.isfinite(bitsf(s.read(('r', 'xmm0', 16)))) and -(1<<31)<=bitsf(s.read(('r', 'xmm0', 16)))<(1<<31) else (1<<31))
    # 0x142816c9e: ucomiss xmm0, dword ptr [rip + 0x621627]
    s.compare_float(('r', 'xmm0', 16),('m', None, None, 1, 5417173708, 4))
    # 0x142816ca5: mov eax, 0x7fffffff
    s.write(('r', 'eax', 4),s.read(('i', 2147483647, 4)))
    # 0x142816caa: cmova r15d, eax
    s.write(('r', 'r15d', 4),s.read(('r', 'eax', 4))) if s.condition('a') else None
    # 0x142816cae: xor eax, eax
    s.integer('xor',[('r', 'eax', 4), ('r', 'eax', 4)])
    # 0x142816cb0: ucomiss xmm0, xmm0
    s.compare_float(('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x142816cb3: cmovp r15d, eax
    s.write(('r', 'r15d', 4),s.read(('r', 'eax', 4))) if s.condition('p') else None
    # 0x142816cb7: divss xmm6, xmm0
    s.float_op('divss',('r', 'xmm6', 16),('r', 'xmm0', 16))
    # 0x142816cbb: addss xmm0, dword ptr [rip + 0x620271]
    s.float_op('addss',('r', 'xmm0', 16),('m', None, None, 1, 5417168692, 4))
    # 0x142816cc3: movss dword ptr [rbp + 0x110], xmm0
    s.simd_move('movss',('m', 'rbp', None, 1, 272, 4),('r', 'xmm0', 16))
    # 0x142816ccb: movsd xmm0, qword ptr [rdi]
    s.simd_move('movsd',('r', 'xmm0', 16),('m', 'rdi', None, 1, 0, 8))
    # 0x142816ccf: movaps xmmword ptr [rbp + 0x10], xmm0
    s.simd_move('movaps',('m', 'rbp', None, 1, 16, 16),('r', 'xmm0', 16))
    # 0x142816cd3: movss xmm0, dword ptr [rdi + 0xc]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rdi', None, 1, 12, 4))
    # 0x142816cd8: movss dword ptr [rbp + 0x114], xmm0
    s.simd_move('movss',('m', 'rbp', None, 1, 276, 4),('r', 'xmm0', 16))
    # 0x142816ce0: mulss xmm6, dword ptr [rip + 0xd85ef4]
    s.float_op('mulss',('r', 'xmm6', 16),('m', None, None, 1, 5424925660, 4))
    # 0x142816ce8: movss dword ptr [rbp + 0x108], xmm6
    s.simd_move('movss',('m', 'rbp', None, 1, 264, 4),('r', 'xmm6', 16))
    # 0x142816cf0: mov eax, r15d
    s.write(('r', 'eax', 4),s.read(('r', 'r15d', 4)))
    # 0x142816cf3: neg eax
    s.integer('neg',[('r', 'eax', 4)])
    # 0x142816cf5: mov dword ptr [rbp + 0x104], eax
    s.write(('m', 'rbp', None, 1, 260, 4),s.read(('r', 'eax', 4)))
    # 0x142816cfb: xorps xmm14, xmm14
    s.float_op('xorps',('r', 'xmm14', 16),('r', 'xmm14', 16))
    # 0x142816cff: movss xmm8, dword ptr [rip + 0x620220]
    s.simd_move('movss',('r', 'xmm8', 16),('m', None, None, 1, 5417168680, 4))
    # 0x142816d08: xor r12d, r12d
    s.integer('xor',[('r', 'r12d', 4), ('r', 'r12d', 4)])
    # 0x142816d0b: xor edi, edi
    s.integer('xor',[('r', 'edi', 4), ('r', 'edi', 4)])
    s.pc=5410745613
    return

def b_142816d0d(s):
    # 0x142816d0d: cmp r15d, r12d
    s.integer('cmp',[('r', 'r15d', 4), ('r', 'r12d', 4)])
    # 0x142816d10: mov eax, r12d
    s.write(('r', 'eax', 4),s.read(('r', 'r12d', 4)))
    # 0x142816d13: cmovg eax, r15d
    s.write(('r', 'eax', 4),s.read(('r', 'r15d', 4))) if s.condition('g') else None
    # 0x142816d17: neg r12d
    s.integer('neg',[('r', 'r12d', 4)])
    # 0x142816d1a: neg eax
    s.integer('neg',[('r', 'eax', 4)])
    # 0x142816d1c: nop dword ptr [rax]
    s.pc=5410745632
    return

def b_142816d20(s):
    # 0x142816d20: cmp eax, r12d
    s.integer('cmp',[('r', 'eax', 4), ('r', 'r12d', 4)])
    # 0x142816d23: je 0x142817913
    s.pc=s.read(('i', 5410748691, 8)) if s.condition('e') else 5410745641
    return

def b_142816d29(s):
    # 0x142816d29: dec r12d
    s.integer('dec',[('r', 'r12d', 4)])
    # 0x142816d2c: cmp dword ptr [rbp + 0x104], r12d
    s.integer('cmp',[('m', 'rbp', None, 1, 260, 4), ('r', 'r12d', 4)])
    # 0x142816d33: je 0x142816d20
    s.pc=s.read(('i', 5410745632, 8)) if s.condition('e') else 5410745653
    return

def b_142816d35(s):
    # 0x142816d35: mov eax, r12d
    s.write(('r', 'eax', 4),s.read(('r', 'r12d', 4)))
    # 0x142816d38: not eax
    s.integer('not',[('r', 'eax', 4)])
    # 0x142816d3a: xorps xmm1, xmm1
    s.float_op('xorps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x142816d3d: cvtsi2ss xmm1, eax
    s.setlane('xmm1',float(signed(s.read(('r', 'eax', 4)),32)))
    # 0x142816d41: divss xmm1, dword ptr [rbp + 0x110]
    s.float_op('divss',('r', 'xmm1', 16),('m', 'rbp', None, 1, 272, 4))
    # 0x142816d49: movss dword ptr [rbp + 0xe8], xmm1
    s.simd_move('movss',('m', 'rbp', None, 1, 232, 4),('r', 'xmm1', 16))
    # 0x142816d51: ucomiss xmm1, xmm14
    s.compare_float(('r', 'xmm1', 16),('r', 'xmm14', 16))
    # 0x142816d55: jb 0x142817a99
    s.pc=s.read(('i', 5410749081, 8)) if s.condition('b') else 5410745691
    return

def b_142816d5b(s):
    # 0x142816d5b: ucomiss xmm8, xmm1
    s.compare_float(('r', 'xmm8', 16),('r', 'xmm1', 16))
    # 0x142816d5f: jb 0x142817a99
    s.pc=s.read(('i', 5410749081, 8)) if s.condition('b') else 5410745701
    return

def b_142816d65(s):
    # 0x142816d65: lea rcx, [rbp + 0x30]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 48, 8)))
    # 0x142816d69: movaps xmmword ptr [rbp + 0xa0], xmm1
    s.simd_move('movaps',('m', 'rbp', None, 1, 160, 16),('r', 'xmm1', 16))
    # 0x142816d70: call 0x142802660
    s.push(5410745717)
    s.pc=s.read(('i', 5410661984, 8))
    return

def b_142816d75(s):
    # 0x142816d75: nop 
    # 0x142816d76: mov rdx, qword ptr [rbp + 0x40]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 64, 8)))
    # 0x142816d7a: mov ecx, eax
    s.write(('r', 'ecx', 4),s.read(('r', 'eax', 4)))
    # 0x142816d7c: cmp rdx, rcx
    s.integer('cmp',[('r', 'rdx', 8), ('r', 'rcx', 8)])
    # 0x142816d7f: jbe 0x142817b33
    s.pc=s.read(('i', 5410749235, 8)) if s.condition('be') else 5410745733
    return

def b_142816d85(s):
    # 0x142816d85: lea rax, [rcx + 1]
    s.write(('r', 'rax', 8),s.address(('m', 'rcx', None, 1, 1, 8)))
    # 0x142816d89: mov qword ptr [rbp + 0x138], rdx
    s.write(('m', 'rbp', None, 1, 312, 8),s.read(('r', 'rdx', 8)))
    # 0x142816d90: cmp rax, rdx
    s.integer('cmp',[('r', 'rax', 8), ('r', 'rdx', 8)])
    # 0x142816d93: jae 0x142817b42
    s.pc=s.read(('i', 5410749250, 8)) if s.condition('ae') else 5410745753
    return

def b_142816d99(s):
    # 0x142816d99: mov r13, qword ptr [rbp + 0x38]
    s.write(('r', 'r13', 8),s.read(('m', 'rbp', None, 1, 56, 8)))
    # 0x142816d9d: movaps xmm10, xmm8
    s.simd_move('movaps',('r', 'xmm10', 16),('r', 'xmm8', 16))
    # 0x142816da1: subss xmm10, xmm0
    s.float_op('subss',('r', 'xmm10', 16),('r', 'xmm0', 16))
    # 0x142816da6: mulss xmm10, dword ptr [r13 + rcx*8]
    s.float_op('mulss',('r', 'xmm10', 16),('m', 'r13', 'rcx', 8, 0, 4))
    # 0x142816dad: movss xmm6, dword ptr [r13 + rcx*8 + 8]
    s.simd_move('movss',('r', 'xmm6', 16),('m', 'r13', 'rcx', 8, 8, 4))
    # 0x142816db4: mulss xmm6, xmm0
    s.float_op('mulss',('r', 'xmm6', 16),('r', 'xmm0', 16))
    # 0x142816db8: lea rcx, [rbp + 0x30]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 48, 8)))
    # 0x142816dbc: movaps xmm1, xmmword ptr [rbp + 0xa0]
    s.simd_move('movaps',('r', 'xmm1', 16),('m', 'rbp', None, 1, 160, 16))
    # 0x142816dc3: call 0x142802660
    s.push(5410745800)
    s.pc=s.read(('i', 5410661984, 8))
    return

def b_142816dc8(s):
    # 0x142816dc8: nop 
    # 0x142816dc9: mov ecx, eax
    s.write(('r', 'ecx', 4),s.read(('r', 'eax', 4)))
    # 0x142816dcb: mov rdx, qword ptr [rbp + 0x138]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 312, 8)))
    # 0x142816dd2: cmp rdx, rcx
    s.integer('cmp',[('r', 'rdx', 8), ('r', 'rcx', 8)])
    # 0x142816dd5: jbe 0x142817b5b
    s.pc=s.read(('i', 5410749275, 8)) if s.condition('be') else 5410745819
    return

def b_142816ddb(s):
    # 0x142816ddb: lea rax, [rcx + 1]
    s.write(('r', 'rax', 8),s.address(('m', 'rcx', None, 1, 1, 8)))
    # 0x142816ddf: cmp rax, rdx
    s.integer('cmp',[('r', 'rax', 8), ('r', 'rdx', 8)])
    # 0x142816de2: jae 0x142817b6a
    s.pc=s.read(('i', 5410749290, 8)) if s.condition('ae') else 5410745832
    return

def b_142816de8(s):
    # 0x142816de8: movaps xmm11, xmm0
    s.simd_move('movaps',('r', 'xmm11', 16),('r', 'xmm0', 16))
    # 0x142816dec: movss xmm7, dword ptr [r13 + rcx*8 + 4]
    s.simd_move('movss',('r', 'xmm7', 16),('m', 'r13', 'rcx', 8, 4, 4))
    # 0x142816df3: movss xmm12, dword ptr [r13 + rcx*8 + 0xc]
    s.simd_move('movss',('r', 'xmm12', 16),('m', 'r13', 'rcx', 8, 12, 4))
    # 0x142816dfa: mov rcx, r14
    s.write(('r', 'rcx', 8),s.read(('r', 'r14', 8)))
    # 0x142816dfd: call 0x140b771f0
    s.push(5410745858)
    s.pc=s.read(('i', 5380731376, 8))
    return

def b_142816e02(s):
    # 0x142816e02: nop 
    # 0x142816e03: movaps xmm2, xmm8
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm8', 16))
    # 0x142816e07: subss xmm2, xmm11
    s.float_op('subss',('r', 'xmm2', 16),('r', 'xmm11', 16))
    # 0x142816e0c: mulss xmm2, xmm7
    s.float_op('mulss',('r', 'xmm2', 16),('r', 'xmm7', 16))
    # 0x142816e10: mulss xmm12, xmm11
    s.float_op('mulss',('r', 'xmm12', 16),('r', 'xmm11', 16))
    # 0x142816e15: addss xmm12, xmm2
    s.float_op('addss',('r', 'xmm12', 16),('r', 'xmm2', 16))
    # 0x142816e1a: movsldup xmm2, xmmword ptr [rbp + 0xa0]
    s.simd_move('movsldup',('r', 'xmm2', 16),('m', 'rbp', None, 1, 160, 16))
    # 0x142816e22: unpcklps xmm0, xmm1
    s.shuffle('unpcklps',('r', 'xmm0', 16),('r', 'xmm1', 16),0)
    # 0x142816e25: mulps xmm0, xmm2
    s.float_op('mulps',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x142816e28: addps xmm0, xmmword ptr [rbp + 0x10]
    s.float_op('addps',('r', 'xmm0', 16),('m', 'rbp', None, 1, 16, 16))
    # 0x142816e2c: movlps qword ptr [rbp + 0x140], xmm0
    s.simd_move('movlps',('m', 'rbp', None, 1, 320, 8),('r', 'xmm0', 16))
    # 0x142816e33: lea rcx, [rbp + 0x78]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 120, 8)))
    # 0x142816e37: lea rdx, [rbp + 0x140]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 320, 8)))
    # 0x142816e3e: movaps xmm2, xmm12
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm12', 16))
    # 0x142816e42: call 0x140df4540
    s.push(5410745927)
    s.pc=s.read(('i', 5383341376, 8))
    return

def b_142816e47(s):
    # 0x142816e47: nop 
    # 0x142816e48: addss xmm10, xmm6
    s.float_op('addss',('r', 'xmm10', 16),('r', 'xmm6', 16))
    # 0x142816e4d: movss xmm0, dword ptr [rbp + 0x114]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rbp', None, 1, 276, 4))
    # 0x142816e55: movss dword ptr [rsp + 0x20], xmm0
    s.simd_move('movss',('m', 'rsp', None, 1, 32, 4),('r', 'xmm0', 16))
    # 0x142816e5b: xorps xmm1, xmm1
    s.float_op('xorps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x142816e5e: xorps xmm2, xmm2
    s.float_op('xorps',('r', 'xmm2', 16),('r', 'xmm2', 16))
    # 0x142816e61: lea rcx, [rbp + 0x90]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 144, 8)))
    # 0x142816e68: movaps xmm3, xmm10
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm10', 16))
    # 0x142816e6c: call 0x140def2a0
    s.push(5410745969)
    s.pc=s.read(('i', 5383320224, 8))
    return

def b_142816e71(s):
    # 0x142816e71: nop 
    # 0x142816e72: movss xmm0, dword ptr [rip + 0x7f0b1e]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5419071896, 4))
    # 0x142816e7a: movss xmm1, dword ptr [rip + 0x620b06]
    s.simd_move('movss',('r', 'xmm1', 16),('m', None, None, 1, 5417171336, 4))
    # 0x142816e82: movaps xmm2, xmm10
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm10', 16))
    # 0x142816e86: call 0x140de8220
    s.push(5410745995)
    s.pc=s.read(('i', 5383291424, 8))
    return

def b_142816e8b(s):
    # 0x142816e8b: nop 
    # 0x142816e8c: xorps xmm1, xmm1
    s.float_op('xorps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x142816e8f: maxss xmm1, xmm0
    s.float_op('maxss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142816e93: movaps xmm6, xmm8
    s.simd_move('movaps',('r', 'xmm6', 16),('r', 'xmm8', 16))
    # 0x142816e97: minss xmm6, xmm1
    s.float_op('minss',('r', 'xmm6', 16),('r', 'xmm1', 16))
    # 0x142816e9b: movaps xmm10, xmm6
    s.simd_move('movaps',('r', 'xmm10', 16),('r', 'xmm6', 16))
    # 0x142816e9f: mulss xmm10, dword ptr [rip + 0x6200a8]
    s.float_op('mulss',('r', 'xmm10', 16),('m', None, None, 1, 5417168720, 4))
    # 0x142816ea8: lea rcx, [rbp + 0x90]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 144, 8)))
    # 0x142816eaf: call 0x140deff30
    s.push(5410746036)
    s.pc=s.read(('i', 5383323440, 8))
    return

def b_142816eb4(s):
    # 0x142816eb4: nop 
    # 0x142816eb5: movaps xmm11, xmm0
    s.simd_move('movaps',('r', 'xmm11', 16),('r', 'xmm0', 16))
    # 0x142816eb9: lea rcx, [rbp + 0x120]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 288, 8)))
    # 0x142816ec0: call 0x140e02880
    s.push(5410746053)
    s.pc=s.read(('i', 5383399552, 8))
    return

def b_142816ec5(s):
    # 0x142816ec5: nop 
    # 0x142816ec6: movaps xmm13, xmm0
    s.simd_move('movaps',('r', 'xmm13', 16),('r', 'xmm0', 16))
    # 0x142816eca: movaps xmm0, xmm8
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm8', 16))
    # 0x142816ece: subss xmm0, xmm6
    s.float_op('subss',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x142816ed2: addss xmm10, xmm0
    s.float_op('addss',('r', 'xmm10', 16),('r', 'xmm0', 16))
    # 0x142816ed7: movaps xmm1, xmm10
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm10', 16))
    # 0x142816edb: mulss xmm1, dword ptr [rip + 0x62006d]
    s.float_op('mulss',('r', 'xmm1', 16),('m', None, None, 1, 5417168720, 4))
    # 0x142816ee3: movaps xmm0, xmm11
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm11', 16))
    # 0x142816ee7: divss xmm0, xmm1
    s.float_op('divss',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x142816eeb: call 0x142e329c0
    s.push(5410746096)
    s.pc=s.read(('i', 5417150912, 8))
    return

def b_142816ef0(s):
    # 0x142816ef0: maxss xmm0, dword ptr [rip + 0x62093c]
    s.float_op('maxss',('r', 'xmm0', 16),('m', None, None, 1, 5417170996, 4))
    # 0x142816ef8: cvttss2si esi, xmm0
    s.write(('r', 'esi', 4),math.trunc(bitsf(s.read(('r', 'xmm0', 16)))) if math.isfinite(bitsf(s.read(('r', 'xmm0', 16)))) and -(1<<31)<=bitsf(s.read(('r', 'xmm0', 16)))<(1<<31) else (1<<31))
    # 0x142816efc: ucomiss xmm0, dword ptr [rip + 0x6213c9]
    s.compare_float(('r', 'xmm0', 16),('m', None, None, 1, 5417173708, 4))
    # 0x142816f03: mov eax, 0x7fffffff
    s.write(('r', 'eax', 4),s.read(('i', 2147483647, 4)))
    # 0x142816f08: cmova esi, eax
    s.write(('r', 'esi', 4),s.read(('r', 'eax', 4))) if s.condition('a') else None
    # 0x142816f0b: ucomiss xmm0, xmm0
    s.compare_float(('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x142816f0e: mov eax, 0
    s.write(('r', 'eax', 4),s.read(('i', 0, 4)))
    # 0x142816f13: cmovp esi, eax
    s.write(('r', 'esi', 4),s.read(('r', 'eax', 4))) if s.condition('p') else None
    # 0x142816f16: mulss xmm13, dword ptr [rip + 0x740cad]
    s.float_op('mulss',('r', 'xmm13', 16),('m', None, None, 1, 5418351564, 4))
    # 0x142816f1f: movaps xmm0, xmm13
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm13', 16))
    # 0x142816f23: call 0x142e32b30
    s.push(5410746152)
    s.pc=s.read(('i', 5417151280, 8))
    return

def b_142816f28(s):
    # 0x142816f28: movaps xmm12, xmm0
    s.simd_move('movaps',('r', 'xmm12', 16),('r', 'xmm0', 16))
    # 0x142816f2c: movaps xmm0, xmm13
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm13', 16))
    # 0x142816f30: call 0x142e329e0
    s.push(5410746165)
    s.pc=s.read(('i', 5417150944, 8))
    return

def b_142816f35(s):
    # 0x142816f35: movaps xmm13, xmm0
    s.simd_move('movaps',('r', 'xmm13', 16),('r', 'xmm0', 16))
    # 0x142816f39: movsxd rdx, esi
    s.write(('r', 'rdx', 8),signed(s.read(('r', 'esi', 4)),32))
    # 0x142816f3c: inc rdx
    s.integer('inc',[('r', 'rdx', 8)])
    # 0x142816f3f: mulss xmm10, xmm14
    s.float_op('mulss',('r', 'xmm10', 16),('r', 'xmm14', 16))
    # 0x142816f44: divss xmm10, xmm11
    s.float_op('divss',('r', 'xmm10', 16),('r', 'xmm11', 16))
    # 0x142816f49: lea rax, [rip + 0xd86100]
    s.write(('r', 'rax', 8),s.address(('m', None, None, 1, 5424926800, 8)))
    # 0x142816f50: mov qword ptr [rsp + 0x20], rax
    s.write(('m', 'rsp', None, 1, 32, 8),s.read(('r', 'rax', 8)))
    # 0x142816f55: lea rcx, [rbp + 0xe8]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 232, 8)))
    # 0x142816f5c: movaps xmm2, xmm10
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm10', 16))
    # 0x142816f60: lea r9, [rbp + 0x120]
    s.write(('r', 'r9', 8),s.address(('m', 'rbp', None, 1, 288, 8)))
    # 0x142816f67: call 0x140de8290
    s.push(5410746220)
    s.pc=s.read(('i', 5383291536, 8))
    return

def b_142816f6c(s):
    # 0x142816f6c: nop 
    # 0x142816f6d: mov dword ptr [rbp + 0x118], r15d
    s.write(('m', 'rbp', None, 1, 280, 4),s.read(('r', 'r15d', 4)))
    # 0x142816f74: mov r15, qword ptr [rbp + 0xf8]
    s.write(('r', 'r15', 8),s.read(('m', 'rbp', None, 1, 248, 8)))
    # 0x142816f7b: cmp r15, 1
    s.integer('cmp',[('r', 'r15', 8), ('i', 1, 8)])
    # 0x142816f7f: jbe 0x142817ad5
    s.pc=s.read(('i', 5410749141, 8)) if s.condition('be') else 5410746245
    return

def b_142816f85(s):
    # 0x142816f85: mov qword ptr [rbp + 0x88], r14
    s.write(('m', 'rbp', None, 1, 136, 8),s.read(('r', 'r14', 8)))
    # 0x142816f8c: mov eax, r12d
    s.write(('r', 'eax', 4),s.read(('r', 'r12d', 4)))
    # 0x142816f8f: neg eax
    s.integer('neg',[('r', 'eax', 4)])
    # 0x142816f91: mov dword ptr [rbp + 0x11c], eax
    s.write(('m', 'rbp', None, 1, 284, 4),s.read(('r', 'eax', 4)))
    # 0x142816f97: movaps xmm0, xmm13
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm13', 16))
    # 0x142816f9b: unpcklps xmm0, xmm12
    s.shuffle('unpcklps',('r', 'xmm0', 16),('r', 'xmm12', 16),0)
    # 0x142816f9f: xorps xmm12, xmmword ptr [rip + 0x620879]
    s.float_op('xorps',('r', 'xmm12', 16),('m', None, None, 1, 5417170976, 16))
    # 0x142816fa7: unpcklps xmm12, xmm13
    s.shuffle('unpcklps',('r', 'xmm12', 16),('r', 'xmm13', 16),0)
    # 0x142816fab: movlhps xmm0, xmm12
    s.simd_move('movlhps',('r', 'xmm0', 16),('r', 'xmm12', 16))
    # 0x142816faf: movaps xmmword ptr [rbp + 0x20], xmm0
    s.simd_move('movaps',('m', 'rbp', None, 1, 32, 16),('r', 'xmm0', 16))
    # 0x142816fb3: cmp r12d, -1
    s.integer('cmp',[('r', 'r12d', 4), ('i', -1, 4)])
    # 0x142816fb7: sete al
    s.write(('r', 'al', 1),int(s.condition('e')))
    # 0x142816fba: mov byte ptr [rbp + 0x187], bl
    s.write(('m', 'rbp', None, 1, 391, 1),s.read(('r', 'bl', 1)))
    # 0x142816fc0: or al, bl
    s.integer('or',[('r', 'al', 1), ('r', 'bl', 1)])
    # 0x142816fc2: movzx eax, al
    s.write(('r', 'eax', 4),s.read(('r', 'al', 1)))
    # 0x142816fc5: inc eax
    s.integer('inc',[('r', 'eax', 4)])
    # 0x142816fc7: mov dword ptr [rbp + 0x10c], eax
    s.write(('m', 'rbp', None, 1, 268, 4),s.read(('r', 'eax', 4)))
    # 0x142816fcd: xor r14d, r14d
    s.integer('xor',[('r', 'r14d', 4), ('r', 'r14d', 4)])
    # 0x142816fd0: jmp 0x142816feb
    s.pc=s.read(('i', 5410746347, 8))
    return

def b_142816fd2(s):
    # 0x142816fd2: nop word ptr cs:[rax + rax]
    s.pc=5410746336
    return

def b_142816fe0(s):
    # 0x142816fe0: inc edi
    s.integer('inc',[('r', 'edi', 4)])
    # 0x142816fe2: movss xmm8, dword ptr [rip + 0x61ff3d]
    s.simd_move('movss',('r', 'xmm8', 16),('m', None, None, 1, 5417168680, 4))
    s.pc=5410746347
    return

def b_142816feb(s):
    # 0x142816feb: lea rax, [r15 - 1]
    s.write(('r', 'rax', 8),s.address(('m', 'r15', None, 1, -1, 8)))
    # 0x142816fef: cmp r14, rax
    s.integer('cmp',[('r', 'r14', 8), ('r', 'rax', 8)])
    # 0x142816ff2: jae 0x1428178d0
    s.pc=s.read(('i', 5410748624, 8)) if s.condition('ae') else 5410746360
    return

def b_142816ff8(s):
    # 0x142816ff8: cmp r14, r15
    s.integer('cmp',[('r', 'r14', 8), ('r', 'r15', 8)])
    # 0x142816ffb: jae 0x142817af3
    s.pc=s.read(('i', 5410749171, 8)) if s.condition('ae') else 5410746369
    return

def b_142817001(s):
    # 0x142817001: mov rax, qword ptr [rbp + 0xf0]
    s.write(('r', 'rax', 8),s.read(('m', 'rbp', None, 1, 240, 8)))
    # 0x142817008: movss xmm11, dword ptr [rax + r14*4]
    s.simd_move('movss',('r', 'xmm11', 16),('m', 'rax', 'r14', 4, 0, 4))
    # 0x14281700e: movss dword ptr [rbp + 0x130], xmm11
    s.simd_move('movss',('m', 'rbp', None, 1, 304, 4),('r', 'xmm11', 16))
    # 0x142817017: ucomiss xmm11, xmm14
    s.compare_float(('r', 'xmm11', 16),('r', 'xmm14', 16))
    # 0x14281701b: jb 0x1428179e5
    s.pc=s.read(('i', 5410748901, 8)) if s.condition('b') else 5410746401
    return

def b_142817021(s):
    # 0x142817021: ucomiss xmm8, xmm11
    s.compare_float(('r', 'xmm8', 16),('r', 'xmm11', 16))
    # 0x142817025: jb 0x1428179e5
    s.pc=s.read(('i', 5410748901, 8)) if s.condition('b') else 5410746411
    return

def b_14281702b(s):
    # 0x14281702b: inc r14
    s.integer('inc',[('r', 'r14', 8)])
    # 0x14281702e: cmp r14, r15
    s.integer('cmp',[('r', 'r14', 8), ('r', 'r15', 8)])
    # 0x142817031: jae 0x142817b08
    s.pc=s.read(('i', 5410749192, 8)) if s.condition('ae') else 5410746423
    return

def b_142817037(s):
    # 0x142817037: movss xmm12, dword ptr [rax + r14*4]
    s.simd_move('movss',('r', 'xmm12', 16),('m', 'rax', 'r14', 4, 0, 4))
    # 0x14281703d: movss dword ptr [rbp + 0x130], xmm12
    s.simd_move('movss',('m', 'rbp', None, 1, 304, 4),('r', 'xmm12', 16))
    # 0x142817046: ucomiss xmm12, xmm14
    s.compare_float(('r', 'xmm12', 16),('r', 'xmm14', 16))
    # 0x14281704a: jb 0x142817a21
    s.pc=s.read(('i', 5410748961, 8)) if s.condition('b') else 5410746448
    return

def b_142817050(s):
    # 0x142817050: ucomiss xmm8, xmm12
    s.compare_float(('r', 'xmm8', 16),('r', 'xmm12', 16))
    # 0x142817054: jb 0x142817a21
    s.pc=s.read(('i', 5410748961, 8)) if s.condition('b') else 5410746458
    return

def b_14281705a(s):
    # 0x14281705a: lea rcx, [rbp + 0x90]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 144, 8)))
    # 0x142817061: movaps xmm1, xmm11
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm11', 16))
    # 0x142817065: call 0x140def2c0
    s.push(5410746474)
    s.pc=s.read(('i', 5383320256, 8))
    return

def b_14281706a(s):
    # 0x14281706a: nop 
    # 0x14281706b: movaps xmm10, xmm0
    s.simd_move('movaps',('r', 'xmm10', 16),('r', 'xmm0', 16))
    # 0x14281706f: movaps xmm13, xmm1
    s.simd_move('movaps',('r', 'xmm13', 16),('r', 'xmm1', 16))
    # 0x142817073: lea rcx, [rbp + 0x90]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 144, 8)))
    # 0x14281707a: movaps xmm1, xmm12
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm12', 16))
    # 0x14281707e: call 0x140def2c0
    s.push(5410746499)
    s.pc=s.read(('i', 5383320256, 8))
    return

def b_142817083(s):
    # 0x142817083: nop 
    # 0x142817084: shufps xmm10, xmm13, 0
    s.shuffle('shufps',('r', 'xmm10', 16),('r', 'xmm13', 16),0)
    # 0x142817089: movaps xmm2, xmmword ptr [rbp + 0x20]
    s.simd_move('movaps',('r', 'xmm2', 16),('m', 'rbp', None, 1, 32, 16))
    # 0x14281708d: mulps xmm10, xmm2
    s.float_op('mulps',('r', 'xmm10', 16),('r', 'xmm2', 16))
    # 0x142817091: movaps xmm6, xmm10
    s.simd_move('movaps',('r', 'xmm6', 16),('r', 'xmm10', 16))
    # 0x142817095: unpckhpd xmm6, xmm10
    s.shuffle('unpckhpd',('r', 'xmm6', 16),('r', 'xmm10', 16),0)
    # 0x14281709a: addps xmm6, xmm10
    s.float_op('addps',('r', 'xmm6', 16),('r', 'xmm10', 16))
    # 0x14281709e: shufps xmm0, xmm1, 0
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm1', 16),0)
    # 0x1428170a2: mulps xmm0, xmm2
    s.float_op('mulps',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x1428170a5: movaps xmm8, xmm0
    s.simd_move('movaps',('r', 'xmm8', 16),('r', 'xmm0', 16))
    # 0x1428170a9: unpckhpd xmm8, xmm0
    s.shuffle('unpckhpd',('r', 'xmm8', 16),('r', 'xmm0', 16),0)
    # 0x1428170ae: addps xmm8, xmm0
    s.float_op('addps',('r', 'xmm8', 16),('r', 'xmm0', 16))
    # 0x1428170b2: movaps xmm0, xmm6
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x1428170b5: addps xmm0, xmm8
    s.float_op('addps',('r', 'xmm0', 16),('r', 'xmm8', 16))
    # 0x1428170b9: mulps xmm0, xmmword ptr [rip + 0x61fea0]
    s.float_op('mulps',('r', 'xmm0', 16),('m', None, None, 1, 5417168736, 16))
    # 0x1428170c0: movlps qword ptr [rbp + 0x130], xmm0
    s.simd_move('movlps',('m', 'rbp', None, 1, 304, 8),('r', 'xmm0', 16))
    # 0x1428170c7: lea rcx, [rbp + 0x140]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 320, 8)))
    # 0x1428170ce: lea rdx, [rbp + 0x130]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 304, 8)))
    # 0x1428170d5: call 0x140df4520
    s.push(5410746586)
    s.pc=s.read(('i', 5383341344, 8))
    return

def b_1428170da(s):
    # 0x1428170da: nop 
    # 0x1428170db: movsd xmm0, qword ptr [rbp + 0x78]
    s.simd_move('movsd',('r', 'xmm0', 16),('m', 'rbp', None, 1, 120, 8))
    # 0x1428170e0: movaps xmmword ptr [rbp - 0x20], xmm0
    s.simd_move('movaps',('m', 'rbp', None, 1, -32, 16),('r', 'xmm0', 16))
    # 0x1428170e4: movsd xmm7, qword ptr [rbp + 0x140]
    s.simd_move('movsd',('r', 'xmm7', 16),('m', 'rbp', None, 1, 320, 8))
    # 0x1428170ec: movss xmm0, dword ptr [rbp + 0x80]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rbp', None, 1, 128, 4))
    # 0x1428170f4: movaps xmmword ptr [rbp], xmm0
    s.simd_move('movaps',('m', 'rbp', None, 1, 0, 16),('r', 'xmm0', 16))
    # 0x1428170f8: movss xmm0, dword ptr [rbp + 0x148]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rbp', None, 1, 328, 4))
    # 0x142817100: movaps xmmword ptr [rbp - 0x10], xmm0
    s.simd_move('movaps',('m', 'rbp', None, 1, -16, 16),('r', 'xmm0', 16))
    # 0x142817104: lea rcx, [rbp + 0x120]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 288, 8)))
    # 0x14281710b: call 0x140e02880
    s.push(5410746640)
    s.pc=s.read(('i', 5383399552, 8))
    return

def b_142817110(s):
    # 0x142817110: nop 
    # 0x142817111: movaps xmm10, xmm0
    s.simd_move('movaps',('r', 'xmm10', 16),('r', 'xmm0', 16))
    # 0x142817115: movss xmm9, dword ptr [rip + 0x61fe0a]
    s.simd_move('movss',('r', 'xmm9', 16),('m', None, None, 1, 5417168680, 4))
    # 0x14281711e: subss xmm9, xmm0
    s.float_op('subss',('r', 'xmm9', 16),('r', 'xmm0', 16))
    # 0x142817123: mulss xmm9, dword ptr [rip + 0x625544]
    s.float_op('mulss',('r', 'xmm9', 16),('m', None, None, 1, 5417191024, 4))
    # 0x14281712c: mulss xmm10, dword ptr [rip + 0x62085b]
    s.float_op('mulss',('r', 'xmm10', 16),('m', None, None, 1, 5417171344, 4))
    # 0x142817135: lea rcx, [rbp + 0x30]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 48, 8)))
    # 0x142817139: movaps xmm1, xmmword ptr [rbp + 0xa0]
    s.simd_move('movaps',('r', 'xmm1', 16),('m', 'rbp', None, 1, 160, 16))
    # 0x142817140: call 0x142802660
    s.push(5410746693)
    s.pc=s.read(('i', 5410661984, 8))
    return

def b_142817145(s):
    # 0x142817145: nop 
    # 0x142817146: mov eax, eax
    s.write(('r', 'eax', 4),s.read(('r', 'eax', 4)))
    # 0x142817148: lea rcx, [rax + 1]
    s.write(('r', 'rcx', 8),s.address(('m', 'rax', None, 1, 1, 8)))
    # 0x14281714c: cmp rcx, qword ptr [rbp + 0x138]
    s.integer('cmp',[('r', 'rcx', 8), ('m', 'rbp', None, 1, 312, 8)])
    # 0x142817153: jae 0x142817b1d
    s.pc=s.read(('i', 5410749213, 8)) if s.condition('ae') else 5410746713
    return

def b_142817159(s):
    # 0x142817159: movss xmm1, dword ptr [r13 + rax*8 + 8]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'r13', 'rax', 8, 8, 4))
    # 0x142817160: movss xmm2, dword ptr [r13 + rax*8 + 0xc]
    s.simd_move('movss',('r', 'xmm2', 16),('m', 'r13', 'rax', 8, 12, 4))
    # 0x142817167: subss xmm1, dword ptr [r13 + rax*8]
    s.float_op('subss',('r', 'xmm1', 16),('m', 'r13', 'rax', 8, 0, 4))
    # 0x14281716e: subss xmm2, dword ptr [r13 + rax*8 + 4]
    s.float_op('subss',('r', 'xmm2', 16),('m', 'r13', 'rax', 8, 4, 4))
    # 0x142817175: movaps xmm0, xmm1
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x142817178: mulss xmm0, xmm1
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x14281717c: movaps xmm3, xmm2
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x14281717f: mulss xmm3, xmm2
    s.float_op('mulss',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x142817183: addss xmm3, xmm0
    s.float_op('addss',('r', 'xmm3', 16),('r', 'xmm0', 16))
    # 0x142817187: sqrtss xmm3, xmm3
    s.float_op('sqrtss',('r', 'xmm3', 16),('r', 'xmm3', 16))
    # 0x14281718b: movss xmm15, dword ptr [rip + 0x61fd94]
    s.simd_move('movss',('r', 'xmm15', 16),('m', None, None, 1, 5417168680, 4))
    # 0x142817194: movaps xmm0, xmm15
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm15', 16))
    # 0x142817198: divss xmm0, xmm3
    s.float_op('divss',('r', 'xmm0', 16),('r', 'xmm3', 16))
    # 0x14281719c: mulss xmm1, xmm0
    s.float_op('mulss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x1428171a0: mulss xmm0, xmm2
    s.float_op('mulss',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x1428171a4: divss xmm0, xmm1
    s.float_op('divss',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x1428171a8: call 0x142e32990
    s.push(5410746797)
    s.pc=s.read(('i', 5417150864, 8))
    return

def b_1428171ad(s):
    # 0x1428171ad: addss xmm11, xmm12
    s.float_op('addss',('r', 'xmm11', 16),('r', 'xmm12', 16))
    # 0x1428171b2: mulss xmm11, dword ptr [rip + 0x61fd95]
    s.float_op('mulss',('r', 'xmm11', 16),('m', None, None, 1, 5417168720, 4))
    # 0x1428171bb: movss dword ptr [rbp + 0x100], xmm11
    s.simd_move('movss',('m', 'rbp', None, 1, 256, 4),('r', 'xmm11', 16))
    # 0x1428171c4: ucomiss xmm11, xmm14
    s.compare_float(('r', 'xmm11', 16),('r', 'xmm14', 16))
    # 0x1428171c8: jb 0x142817a5d
    s.pc=s.read(('i', 5410749021, 8)) if s.condition('b') else 5410746830
    return

def b_1428171ce(s):
    # 0x1428171ce: ucomiss xmm15, xmm11
    s.compare_float(('r', 'xmm15', 16),('r', 'xmm11', 16))
    # 0x1428171d2: jb 0x142817a5d
    s.pc=s.read(('i', 5410749021, 8)) if s.condition('b') else 5410746840
    return

def b_1428171d8(s):
    # 0x1428171d8: movaps xmm13, xmm0
    s.simd_move('movaps',('r', 'xmm13', 16),('r', 'xmm0', 16))
    # 0x1428171dc: lea rcx, [rbp + 0x90]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 144, 8)))
    # 0x1428171e3: movaps xmm1, xmm11
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm11', 16))
    # 0x1428171e7: call 0x140def5e0
    s.push(5410746860)
    s.pc=s.read(('i', 5383321056, 8))
    return

def b_1428171ec(s):
    # 0x1428171ec: nop 
    # 0x1428171ed: shufps xmm0, xmm1, 0
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm1', 16),0)
    # 0x1428171f1: mulps xmm0, xmmword ptr [rbp + 0x20]
    s.float_op('mulps',('r', 'xmm0', 16),('m', 'rbp', None, 1, 32, 16))
    # 0x1428171f5: movaps xmm1, xmm0
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x1428171f8: unpckhpd xmm1, xmm0
    s.shuffle('unpckhpd',('r', 'xmm1', 16),('r', 'xmm0', 16),0)
    # 0x1428171fc: addps xmm1, xmm0
    s.float_op('addps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x1428171ff: movlps qword ptr [rbp + 0x140], xmm1
    s.simd_move('movlps',('m', 'rbp', None, 1, 320, 8),('r', 'xmm1', 16))
    # 0x142817206: lea rcx, [rbp + 0x6c]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 108, 8)))
    # 0x14281720a: lea rdx, [rbp + 0x140]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 320, 8)))
    # 0x142817211: call 0x140df4520
    s.push(5410746902)
    s.pc=s.read(('i', 5383341344, 8))
    return

def b_142817216(s):
    # 0x142817216: nop 
    # 0x142817217: movaps xmmword ptr [rbp + 0xb0], xmm7
    s.simd_move('movaps',('m', 'rbp', None, 1, 176, 16),('r', 'xmm7', 16))
    # 0x14281721e: movss xmm11, dword ptr [rip + 0xd85dd1]
    s.simd_move('movss',('r', 'xmm11', 16),('m', None, None, 1, 5424926712, 4))
    # 0x142817227: subss xmm11, xmm13
    s.float_op('subss',('r', 'xmm11', 16),('r', 'xmm13', 16))
    # 0x14281722c: movss xmm13, dword ptr [rbp + 0x6c]
    s.simd_move('movss',('r', 'xmm13', 16),('m', 'rbp', None, 1, 108, 4))
    # 0x142817232: movsd xmm15, qword ptr [rbp + 0x70]
    s.simd_move('movsd',('r', 'xmm15', 16),('m', 'rbp', None, 1, 112, 8))
    # 0x142817238: movaps xmm7, xmm15
    s.simd_move('movaps',('r', 'xmm7', 16),('r', 'xmm15', 16))
    # 0x14281723c: xorps xmm0, xmm0
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x14281723f: mulps xmm7, xmm0
    s.float_op('mulps',('r', 'xmm7', 16),('r', 'xmm0', 16))
    # 0x142817242: movaps xmm0, xmm7
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm7', 16))
    # 0x142817245: shufps xmm0, xmm7, 0xe1
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm7', 16),225)
    # 0x142817249: movaps xmm14, xmm15
    s.simd_move('movaps',('r', 'xmm14', 16),('r', 'xmm15', 16))
    # 0x14281724d: movss xmm14, xmm13
    s.simd_move('movss',('r', 'xmm14', 16),('r', 'xmm13', 16))
    # 0x142817252: mulps xmm14, xmmword ptr [rip + 0x749de6]
    s.float_op('mulps',('r', 'xmm14', 16),('m', None, None, 1, 5418389568, 16))
    # 0x14281725a: addps xmm14, xmm0
    s.float_op('addps',('r', 'xmm14', 16),('r', 'xmm0', 16))
    # 0x14281725e: mulss xmm11, dword ptr [rip + 0x61fcd1]
    s.float_op('mulss',('r', 'xmm11', 16),('m', None, None, 1, 5417168696, 4))
    # 0x142817267: movaps xmm0, xmm11
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm11', 16))
    # 0x14281726b: call 0x142e32b30
    s.push(5410746992)
    s.pc=s.read(('i', 5417151280, 8))
    return

def b_142817270(s):
    # 0x142817270: movaps xmm12, xmm0
    s.simd_move('movaps',('r', 'xmm12', 16),('r', 'xmm0', 16))
    # 0x142817274: movaps xmm0, xmm11
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm11', 16))
    # 0x142817278: call 0x142e329e0
    s.push(5410747005)
    s.pc=s.read(('i', 5417150944, 8))
    return

def b_14281727d(s):
    # 0x14281727d: movaps xmm4, xmm13
    s.simd_move('movaps',('r', 'xmm4', 16),('r', 'xmm13', 16))
    # 0x142817281: movlhps xmm4, xmm15
    s.simd_move('movlhps',('r', 'xmm4', 16),('r', 'xmm15', 16))
    # 0x142817285: movaps xmm1, xmm4
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm4', 16))
    # 0x142817288: shufps xmm1, xmm15, 0xd8
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm15', 16),216)
    # 0x14281728d: shufps xmm4, xmm15, 0x58
    s.shuffle('shufps',('r', 'xmm4', 16),('r', 'xmm15', 16),88)
    # 0x142817292: movaps xmm3, xmm1
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm1', 16))
    # 0x142817295: shufps xmm3, xmm1, 0xd2
    s.shuffle('shufps',('r', 'xmm3', 16),('r', 'xmm1', 16),210)
    # 0x142817299: subss xmm13, xmm7
    s.float_op('subss',('r', 'xmm13', 16),('r', 'xmm7', 16))
    # 0x14281729e: movaps xmm15, xmm14
    s.simd_move('movaps',('r', 'xmm15', 16),('r', 'xmm14', 16))
    # 0x1428172a2: xorps xmm14, xmm14
    s.float_op('xorps',('r', 'xmm14', 16),('r', 'xmm14', 16))
    # 0x1428172a6: shufps xmm12, xmm12, 0
    s.shuffle('shufps',('r', 'xmm12', 16),('r', 'xmm12', 16),0)
    # 0x1428172ab: movaps xmm5, xmm13
    s.simd_move('movaps',('r', 'xmm5', 16),('r', 'xmm13', 16))
    # 0x1428172af: shufps xmm5, xmm15, 0xf4
    s.shuffle('shufps',('r', 'xmm5', 16),('r', 'xmm15', 16),244)
    # 0x1428172b4: movaps xmm2, xmm15
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm15', 16))
    # 0x1428172b8: shufps xmm2, xmm5, 0x81
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm5', 16),129)
    # 0x1428172bc: mulps xmm2, xmm12
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm12', 16))
    # 0x1428172c0: shufps xmm0, xmm2, 0xe4
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm2', 16),228)
    # 0x1428172c4: movaps xmm11, xmm2
    s.simd_move('movaps',('r', 'xmm11', 16),('r', 'xmm2', 16))
    # 0x1428172c8: shufps xmm11, xmm0, 0x24
    s.shuffle('shufps',('r', 'xmm11', 16),('r', 'xmm0', 16),36)
    # 0x1428172cd: movaps xmm5, xmm11
    s.simd_move('movaps',('r', 'xmm5', 16),('r', 'xmm11', 16))
    # 0x1428172d1: mulps xmm5, xmm11
    s.float_op('mulps',('r', 'xmm5', 16),('r', 'xmm11', 16))
    # 0x1428172d5: movaps xmm0, xmm5
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm5', 16))
    # 0x1428172d8: shufps xmm0, xmm5, 0xaa
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm5', 16),170)
    # 0x1428172dc: movshdup xmm12, xmm5
    s.simd_move('movshdup',('r', 'xmm12', 16),('r', 'xmm5', 16))
    # 0x1428172e1: addss xmm12, xmm5
    s.float_op('addss',('r', 'xmm12', 16),('r', 'xmm5', 16))
    # 0x1428172e6: shufps xmm12, xmm12, 0
    s.shuffle('shufps',('r', 'xmm12', 16),('r', 'xmm12', 16),0)
    # 0x1428172eb: addps xmm12, xmm0
    s.float_op('addps',('r', 'xmm12', 16),('r', 'xmm0', 16))
    # 0x1428172ef: shufps xmm5, xmm5, 0xff
    s.shuffle('shufps',('r', 'xmm5', 16),('r', 'xmm5', 16),255)
    # 0x1428172f3: subps xmm5, xmm12
    s.float_op('subps',('r', 'xmm5', 16),('r', 'xmm12', 16))
    # 0x1428172f7: mulps xmm5, xmm4
    s.float_op('mulps',('r', 'xmm5', 16),('r', 'xmm4', 16))
    # 0x1428172fa: movaps xmm0, xmm1
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x1428172fd: mulps xmm0, xmm2
    s.float_op('mulps',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x142817300: movshdup xmm4, xmm0
    s.simd_move('movshdup',('r', 'xmm4', 16),('r', 'xmm0', 16))
    # 0x142817304: addss xmm4, xmm0
    s.float_op('addss',('r', 'xmm4', 16),('r', 'xmm0', 16))
    # 0x142817308: movhlps xmm0, xmm0
    s.simd_move('movhlps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x14281730b: addss xmm0, xmm4
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm4', 16))
    # 0x14281730f: addss xmm0, xmm0
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x142817313: shufps xmm0, xmm0, 0
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm0', 16),0)
    # 0x142817317: mulps xmm0, xmm11
    s.float_op('mulps',('r', 'xmm0', 16),('r', 'xmm11', 16))
    # 0x14281731b: addps xmm0, xmm5
    s.float_op('addps',('r', 'xmm0', 16),('r', 'xmm5', 16))
    # 0x14281731e: mulps xmm3, xmm2
    s.float_op('mulps',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x142817321: shufps xmm2, xmm2, 0xd2
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm2', 16),210)
    # 0x142817325: mulps xmm2, xmm1
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x142817328: subps xmm2, xmm3
    s.float_op('subps',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x14281732b: shufps xmm2, xmm2, 0xd2
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm2', 16),210)
    # 0x14281732f: addps xmm11, xmm11
    s.float_op('addps',('r', 'xmm11', 16),('r', 'xmm11', 16))
    # 0x142817333: shufps xmm11, xmm11, 0xff
    s.shuffle('shufps',('r', 'xmm11', 16),('r', 'xmm11', 16),255)
    # 0x142817338: mulps xmm11, xmm2
    s.float_op('mulps',('r', 'xmm11', 16),('r', 'xmm2', 16))
    # 0x14281733c: addps xmm11, xmm0
    s.float_op('addps',('r', 'xmm11', 16),('r', 'xmm0', 16))
    # 0x142817340: movaps xmm0, xmm11
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm11', 16))
    # 0x142817344: unpckhpd xmm0, xmm11
    s.shuffle('unpckhpd',('r', 'xmm0', 16),('r', 'xmm11', 16),0)
    # 0x142817349: movshdup xmm2, xmm11
    s.simd_move('movshdup',('r', 'xmm2', 16),('r', 'xmm11', 16))
    # 0x14281734e: movaps xmm3, xmm13
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm13', 16))
    # 0x142817352: movlhps xmm3, xmm15
    s.simd_move('movlhps',('r', 'xmm3', 16),('r', 'xmm15', 16))
    # 0x142817356: shufps xmm3, xmm15, 0xe2
    s.shuffle('shufps',('r', 'xmm3', 16),('r', 'xmm15', 16),226)
    # 0x14281735b: movaps xmm1, xmm11
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm11', 16))
    # 0x14281735f: shufps xmm1, xmm11, 0xe2
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm11', 16),226)
    # 0x142817364: mulps xmm1, xmm3
    s.float_op('mulps',('r', 'xmm1', 16),('r', 'xmm3', 16))
    # 0x142817367: movaps xmm4, xmm15
    s.simd_move('movaps',('r', 'xmm4', 16),('r', 'xmm15', 16))
    # 0x14281736b: movss xmm4, xmm13
    s.simd_move('movss',('r', 'xmm4', 16),('r', 'xmm13', 16))
    # 0x142817370: movaps xmm3, xmm11
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm11', 16))
    # 0x142817374: shufps xmm3, xmm11, 0xe9
    s.shuffle('shufps',('r', 'xmm3', 16),('r', 'xmm11', 16),233)
    # 0x142817379: mulps xmm4, xmm3
    s.float_op('mulps',('r', 'xmm4', 16),('r', 'xmm3', 16))
    # 0x14281737c: subps xmm1, xmm4
    s.float_op('subps',('r', 'xmm1', 16),('r', 'xmm4', 16))
    # 0x14281737f: movaps xmm5, xmm15
    s.simd_move('movaps',('r', 'xmm5', 16),('r', 'xmm15', 16))
    # 0x142817383: mulps xmm5, xmm11
    s.float_op('mulps',('r', 'xmm5', 16),('r', 'xmm11', 16))
    # 0x142817387: movshdup xmm4, xmm5
    s.simd_move('movshdup',('r', 'xmm4', 16),('r', 'xmm5', 16))
    # 0x14281738b: subss xmm4, xmm5
    s.float_op('subss',('r', 'xmm4', 16),('r', 'xmm5', 16))
    # 0x14281738f: ucomiss xmm14, xmm4
    s.compare_float(('r', 'xmm14', 16),('r', 'xmm4', 16))
    # 0x142817393: movshdup xmm12, xmm15
    s.simd_move('movshdup',('r', 'xmm12', 16),('r', 'xmm15', 16))
    # 0x142817398: jae 0x142817400
    s.pc=s.read(('i', 5410747392, 8)) if s.condition('ae') else 5410747290
    return

def b_14281739a(s):
    # 0x14281739a: addss xmm2, xmm12
    s.float_op('addss',('r', 'xmm2', 16),('r', 'xmm12', 16))
    # 0x14281739f: movss xmm5, dword ptr [rip + 0x61fb81]
    s.simd_move('movss',('r', 'xmm5', 16),('m', None, None, 1, 5417168680, 4))
    # 0x1428173a7: addss xmm4, xmm5
    s.float_op('addss',('r', 'xmm4', 16),('r', 'xmm5', 16))
    # 0x1428173ab: ucomiss xmm14, xmm2
    s.compare_float(('r', 'xmm14', 16),('r', 'xmm2', 16))
    # 0x1428173af: jae 0x142817470
    s.pc=s.read(('i', 5410747504, 8)) if s.condition('ae') else 5410747317
    return

def b_1428173b5(s):
    # 0x1428173b5: addss xmm2, xmm4
    s.float_op('addss',('r', 'xmm2', 16),('r', 'xmm4', 16))
    # 0x1428173b9: movshdup xmm3, xmm1
    s.simd_move('movshdup',('r', 'xmm3', 16),('r', 'xmm1', 16))
    # 0x1428173bd: unpcklps xmm3, xmm13
    s.shuffle('unpcklps',('r', 'xmm3', 16),('r', 'xmm13', 16),0)
    # 0x1428173c1: xorps xmm4, xmm4
    s.float_op('xorps',('r', 'xmm4', 16),('r', 'xmm4', 16))
    # 0x1428173c4: sqrtss xmm4, xmm2
    s.float_op('sqrtss',('r', 'xmm4', 16),('r', 'xmm2', 16))
    # 0x1428173c8: movss xmm5, dword ptr [rip + 0x61fb80]
    s.simd_move('movss',('r', 'xmm5', 16),('m', None, None, 1, 5417168720, 4))
    # 0x1428173d0: divss xmm5, xmm4
    s.float_op('divss',('r', 'xmm5', 16),('r', 'xmm4', 16))
    # 0x1428173d4: shufps xmm5, xmm5, 0
    s.shuffle('shufps',('r', 'xmm5', 16),('r', 'xmm5', 16),0)
    # 0x1428173d8: unpcklps xmm0, xmm1
    s.shuffle('unpcklps',('r', 'xmm0', 16),('r', 'xmm1', 16),0)
    # 0x1428173db: movaps xmm4, xmm15
    s.simd_move('movaps',('r', 'xmm4', 16),('r', 'xmm15', 16))
    # 0x1428173df: shufps xmm4, xmm1, 0xd4
    s.shuffle('shufps',('r', 'xmm4', 16),('r', 'xmm1', 16),212)
    # 0x1428173e3: shufps xmm0, xmm4, 0x84
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm4', 16),132)
    # 0x1428173e7: movlhps xmm3, xmm11
    s.simd_move('movlhps',('r', 'xmm3', 16),('r', 'xmm11', 16))
    # 0x1428173eb: subps xmm0, xmm3
    s.float_op('subps',('r', 'xmm0', 16),('r', 'xmm3', 16))
    # 0x1428173ee: shufps xmm2, xmm0, 0xe4
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm0', 16),228)
    # 0x1428173f2: shufps xmm0, xmm2, 0x24
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm2', 16),36)
    # 0x1428173f6: mulps xmm0, xmm5
    s.float_op('mulps',('r', 'xmm0', 16),('r', 'xmm5', 16))
    # 0x1428173f9: jmp 0x1428174f0
    s.pc=s.read(('i', 5410747632, 8))
    return

def b_1428173fe(s):
    # 0x1428173fe: nop 
    s.pc=5410747392
    return

def b_142817400(s):
    # 0x142817400: subss xmm2, xmm12
    s.float_op('subss',('r', 'xmm2', 16),('r', 'xmm12', 16))
    # 0x142817405: movss xmm3, dword ptr [rip + 0x61fb1b]
    s.simd_move('movss',('r', 'xmm3', 16),('m', None, None, 1, 5417168680, 4))
    # 0x14281740d: subss xmm3, xmm4
    s.float_op('subss',('r', 'xmm3', 16),('r', 'xmm4', 16))
    # 0x142817411: ucomiss xmm14, xmm2
    s.compare_float(('r', 'xmm14', 16),('r', 'xmm2', 16))
    # 0x142817415: jae 0x1428174b0
    s.pc=s.read(('i', 5410747568, 8)) if s.condition('ae') else 5410747419
    return

def b_14281741b(s):
    # 0x14281741b: movaps xmm0, xmm15
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm15', 16))
    # 0x14281741f: unpcklps xmm0, xmm2
    s.shuffle('unpcklps',('r', 'xmm0', 16),('r', 'xmm2', 16),0)
    # 0x142817422: shufps xmm0, xmm1, 0x14
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm1', 16),20)
    # 0x142817426: movaps xmm1, xmm11
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm11', 16))
    # 0x14281742a: unpcklps xmm1, xmm3
    s.shuffle('unpcklps',('r', 'xmm1', 16),('r', 'xmm3', 16),0)
    # 0x14281742d: movaps xmm2, xmm11
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm11', 16))
    # 0x142817431: movsd xmm2, xmm13
    s.simd_move('movsd',('r', 'xmm2', 16),('r', 'xmm13', 16))
    # 0x142817436: shufps xmm1, xmm2, 0x24
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm2', 16),36)
    # 0x14281743a: movaps xmm2, xmm0
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x14281743d: addps xmm2, xmm1
    s.float_op('addps',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x142817440: subps xmm0, xmm1
    s.float_op('subps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x142817443: shufps xmm0, xmm2, 0x23
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm2', 16),35)
    # 0x142817447: movshdup xmm1, xmm2
    s.simd_move('movshdup',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x14281744b: shufps xmm2, xmm0, 0x24
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm0', 16),36)
    # 0x14281744f: sqrtss xmm1, xmm1
    s.float_op('sqrtss',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x142817453: movss xmm0, dword ptr [rip + 0x61faf5]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5417168720, 4))
    # 0x14281745b: divss xmm0, xmm1
    s.float_op('divss',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x14281745f: shufps xmm0, xmm0, 0
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm0', 16),0)
    # 0x142817463: mulps xmm0, xmm2
    s.float_op('mulps',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x142817466: jmp 0x1428174f0
    s.pc=s.read(('i', 5410747632, 8))
    return

def b_14281746b(s):
    # 0x14281746b: nop dword ptr [rax + rax]
    s.pc=5410747504
    return

def b_142817470(s):
    # 0x142817470: subss xmm4, xmm2
    s.float_op('subss',('r', 'xmm4', 16),('r', 'xmm2', 16))
    # 0x142817474: xorps xmm2, xmm2
    s.float_op('xorps',('r', 'xmm2', 16),('r', 'xmm2', 16))
    # 0x142817477: sqrtss xmm2, xmm4
    s.float_op('sqrtss',('r', 'xmm2', 16),('r', 'xmm4', 16))
    # 0x14281747b: movss xmm0, dword ptr [rip + 0x61facd]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5417168720, 4))
    # 0x142817483: divss xmm0, xmm2
    s.float_op('divss',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x142817487: movss xmm3, xmm13
    s.simd_move('movss',('r', 'xmm3', 16),('r', 'xmm13', 16))
    # 0x14281748c: addps xmm3, xmm1
    s.float_op('addps',('r', 'xmm3', 16),('r', 'xmm1', 16))
    # 0x14281748f: movaps xmm1, xmm15
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm15', 16))
    # 0x142817493: subss xmm1, xmm11
    s.float_op('subss',('r', 'xmm1', 16),('r', 'xmm11', 16))
    # 0x142817498: movlhps xmm1, xmm0
    s.simd_move('movlhps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x14281749b: shufps xmm3, xmm1, 0x24
    s.shuffle('shufps',('r', 'xmm3', 16),('r', 'xmm1', 16),36)
    # 0x14281749f: unpcklps xmm0, xmm4
    s.shuffle('unpcklps',('r', 'xmm0', 16),('r', 'xmm4', 16),0)
    # 0x1428174a2: shufps xmm0, xmm0, 0x10
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm0', 16),16)
    # 0x1428174a6: mulps xmm0, xmm3
    s.float_op('mulps',('r', 'xmm0', 16),('r', 'xmm3', 16))
    # 0x1428174a9: jmp 0x1428174f0
    s.pc=s.read(('i', 5410747632, 8))
    return

def b_1428174ab(s):
    # 0x1428174ab: nop dword ptr [rax + rax]
    s.pc=5410747568
    return

def b_1428174b0(s):
    # 0x1428174b0: movshdup xmm4, xmm1
    s.simd_move('movshdup',('r', 'xmm4', 16),('r', 'xmm1', 16))
    # 0x1428174b4: subss xmm0, xmm4
    s.float_op('subss',('r', 'xmm0', 16),('r', 'xmm4', 16))
    # 0x1428174b8: addss xmm1, xmm13
    s.float_op('addss',('r', 'xmm1', 16),('r', 'xmm13', 16))
    # 0x1428174bd: unpcklps xmm1, xmm0
    s.shuffle('unpcklps',('r', 'xmm1', 16),('r', 'xmm0', 16),0)
    # 0x1428174c0: movaps xmm0, xmm15
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm15', 16))
    # 0x1428174c4: addss xmm0, xmm11
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm11', 16))
    # 0x1428174c9: subss xmm3, xmm2
    s.float_op('subss',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x1428174cd: xorps xmm2, xmm2
    s.float_op('xorps',('r', 'xmm2', 16),('r', 'xmm2', 16))
    # 0x1428174d0: sqrtss xmm2, xmm3
    s.float_op('sqrtss',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x1428174d4: movss xmm4, dword ptr [rip + 0x61fa74]
    s.simd_move('movss',('r', 'xmm4', 16),('m', None, None, 1, 5417168720, 4))
    # 0x1428174dc: divss xmm4, xmm2
    s.float_op('divss',('r', 'xmm4', 16),('r', 'xmm2', 16))
    # 0x1428174e0: shufps xmm4, xmm4, 0
    s.shuffle('shufps',('r', 'xmm4', 16),('r', 'xmm4', 16),0)
    # 0x1428174e4: unpcklps xmm3, xmm0
    s.shuffle('unpcklps',('r', 'xmm3', 16),('r', 'xmm0', 16),0)
    # 0x1428174e7: movlhps xmm3, xmm1
    s.simd_move('movlhps',('r', 'xmm3', 16),('r', 'xmm1', 16))
    # 0x1428174ea: mulps xmm3, xmm4
    s.float_op('mulps',('r', 'xmm3', 16),('r', 'xmm4', 16))
    # 0x1428174ed: movaps xmm0, xmm3
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm3', 16))
    s.pc=5410747632
    return

def b_1428174f0(s):
    # 0x1428174f0: movaps xmm7, xmmword ptr [rbp + 0xb0]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rbp', None, 1, 176, 16))
    # 0x1428174f7: movaps xmmword ptr [rbp + 0x140], xmm0
    s.simd_move('movaps',('m', 'rbp', None, 1, 320, 16),('r', 'xmm0', 16))
    # 0x1428174fe: lea rcx, [rbp + 0x140]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 320, 8)))
    # 0x142817505: call 0x1424e5b90
    s.push(5410747658)
    s.pc=s.read(('i', 5407398800, 8))
    return

def b_14281750a(s):
    # 0x14281750a: nop 
    # 0x14281750b: mov rbx, rax
    s.write(('r', 'rbx', 8),s.read(('r', 'rax', 8)))
    # 0x14281750e: subps xmm6, xmm8
    s.float_op('subps',('r', 'xmm6', 16),('r', 'xmm8', 16))
    # 0x142817512: mulps xmm6, xmm6
    s.float_op('mulps',('r', 'xmm6', 16),('r', 'xmm6', 16))
    # 0x142817515: movshdup xmm0, xmm6
    s.simd_move('movshdup',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x142817519: addss xmm0, xmm6
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm6', 16))
    # 0x14281751d: sqrtss xmm8, xmm0
    s.float_op('sqrtss',('r', 'xmm8', 16),('r', 'xmm0', 16))
    # 0x142817522: addss xmm10, xmm9
    s.float_op('addss',('r', 'xmm10', 16),('r', 'xmm9', 16))
    # 0x142817527: mulss xmm10, dword ptr [rbp + 0x108]
    s.float_op('mulss',('r', 'xmm10', 16),('m', 'rbp', None, 1, 264, 4))
    # 0x142817530: movss dword ptr [rbp + 0x140], xmm8
    s.simd_move('movss',('m', 'rbp', None, 1, 320, 4),('r', 'xmm8', 16))
    # 0x142817539: movss dword ptr [rbp + 0x144], xmm10
    s.simd_move('movss',('m', 'rbp', None, 1, 324, 4),('r', 'xmm10', 16))
    # 0x142817542: mov dword ptr [rbp + 0x148], 0x3dcccccd
    s.write(('m', 'rbp', None, 1, 328, 4),s.read(('i', 1036831949, 4)))
    # 0x14281754c: lea rcx, [rbp + 0x140]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 320, 8)))
    # 0x142817553: call 0x140df4560
    s.push(5410747736)
    s.pc=s.read(('i', 5383341408, 8))
    return

def b_142817558(s):
    # 0x142817558: nop 
    # 0x142817559: mov rsi, rax
    s.write(('r', 'rsi', 8),s.read(('r', 'rax', 8)))
    # 0x14281755c: lea rcx, [rbp + 0x120]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 288, 8)))
    # 0x142817563: call 0x140e02880
    s.push(5410747752)
    s.pc=s.read(('i', 5383399552, 8))
    return

def b_142817568(s):
    # 0x142817568: nop 
    # 0x142817569: mulss xmm0, dword ptr [rip + 0x62030b]
    s.float_op('mulss',('r', 'xmm0', 16),('m', None, None, 1, 5417171068, 4))
    # 0x142817571: addss xmm0, dword ptr [rbp + 0xa0]
    s.float_op('addss',('r', 'xmm0', 16),('m', 'rbp', None, 1, 160, 4))
    # 0x142817579: xorps xmm1, xmm1
    s.float_op('xorps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x14281757c: maxss xmm1, xmm0
    s.float_op('maxss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142817580: movss xmm0, dword ptr [rip + 0x61f9a0]
    s.simd_move('movss',('r', 'xmm0', 16),('m', None, None, 1, 5417168680, 4))
    # 0x142817588: minss xmm0, xmm1
    s.float_op('minss',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x14281758c: call 0x141e3c420
    s.push(5410747793)
    s.pc=s.read(('i', 5400413216, 8))
    return

def b_142817591(s):
    # 0x142817591: nop 
    # 0x142817592: movaps xmm1, xmmword ptr [rbp]
    s.simd_move('movaps',('r', 'xmm1', 16),('m', 'rbp', None, 1, 0, 16))
    # 0x142817596: shufps xmm1, xmmword ptr [rip + 0x6370b2], 0x30
    s.shuffle('shufps',('r', 'xmm1', 16),('m', None, None, 1, 5417264720, 16),48)
    # 0x14281759e: movaps xmm0, xmmword ptr [rbp - 0x20]
    s.simd_move('movaps',('r', 'xmm0', 16),('m', 'rbp', None, 1, -32, 16))
    # 0x1428175a2: shufps xmm0, xmm1, 0x84
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm1', 16),132)
    # 0x1428175a6: movaps xmm1, xmmword ptr [rbp - 0x10]
    s.simd_move('movaps',('r', 'xmm1', 16),('m', 'rbp', None, 1, -16, 16))
    # 0x1428175aa: shufps xmm1, xmmword ptr [rip + 0x7f3b9e], 0x30
    s.shuffle('shufps',('r', 'xmm1', 16),('m', None, None, 1, 5419086160, 16),48)
    # 0x1428175b2: shufps xmm7, xmm1, 0x84
    s.shuffle('shufps',('r', 'xmm7', 16),('r', 'xmm1', 16),132)
    # 0x1428175b6: addps xmm7, xmm0
    s.float_op('addps',('r', 'xmm7', 16),('r', 'xmm0', 16))
    # 0x1428175b9: movlps qword ptr [rbp + 0x140], xmm7
    s.simd_move('movlps',('m', 'rbp', None, 1, 320, 8),('r', 'xmm7', 16))
    # 0x1428175c0: movaps xmm0, xmm7
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm7', 16))
    # 0x1428175c3: unpckhpd xmm0, xmm7
    s.shuffle('unpckhpd',('r', 'xmm0', 16),('r', 'xmm7', 16),0)
    # 0x1428175c7: movss dword ptr [rbp + 0x148], xmm0
    s.simd_move('movss',('m', 'rbp', None, 1, 328, 4),('r', 'xmm0', 16))
    # 0x1428175cf: mov dword ptr [rbp + 0x14c], 0
    s.write(('m', 'rbp', None, 1, 332, 4),s.read(('i', 0, 4)))
    # 0x1428175d9: movabs rcx, 0x7bff00003c000000
    s.write(('r', 'rcx', 8),s.read(('i', 8934860186732986368, 8)))
    # 0x1428175e3: mov qword ptr [rbp + 0x150], rcx
    s.write(('m', 'rbp', None, 1, 336, 8),s.read(('r', 'rcx', 8)))
    # 0x1428175ea: mov dword ptr [rbp + 0x158], esi
    s.write(('m', 'rbp', None, 1, 344, 4),s.read(('r', 'esi', 4)))
    # 0x1428175f0: shr rsi, 0x20
    s.integer('shr',[('r', 'rsi', 8), ('i', 32, 1)])
    # 0x1428175f4: mov word ptr [rbp + 0x15c], si
    s.write(('m', 'rbp', None, 1, 348, 2),s.read(('r', 'si', 2)))
    # 0x1428175fb: mov word ptr [rbp + 0x15e], ax
    s.write(('m', 'rbp', None, 1, 350, 2),s.read(('r', 'ax', 2)))
    # 0x142817602: mov qword ptr [rbp + 0x160], rbx
    s.write(('m', 'rbp', None, 1, 352, 8),s.read(('r', 'rbx', 8)))
    # 0x142817609: mov eax, dword ptr [rbp + 0x12c]
    s.write(('r', 'eax', 4),s.read(('m', 'rbp', None, 1, 300, 4)))
    # 0x14281760f: mov dword ptr [rbp + 0x168], eax
    s.write(('m', 'rbp', None, 1, 360, 4),s.read(('r', 'eax', 4)))
    # 0x142817615: mov qword ptr [rbp + 0x16c], 0
    s.write(('m', 'rbp', None, 1, 364, 8),s.read(('i', 0, 8)))
    # 0x142817620: mov dword ptr [rbp + 0x174], edi
    s.write(('m', 'rbp', None, 1, 372, 4),s.read(('r', 'edi', 4)))
    # 0x142817626: mov dword ptr [rbp + 0x178], 1
    s.write(('m', 'rbp', None, 1, 376, 4),s.read(('i', 1, 4)))
    # 0x142817630: mov eax, dword ptr [rbp + 0x10c]
    s.write(('r', 'eax', 4),s.read(('m', 'rbp', None, 1, 268, 4)))
    # 0x142817636: mov dword ptr [rbp + 0x17c], eax
    s.write(('m', 'rbp', None, 1, 380, 4),s.read(('r', 'eax', 4)))
    # 0x14281763c: mov rcx, qword ptr [rbp + 0x2a0]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 672, 8)))
    # 0x142817643: lea rdx, [rbp + 0x140]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 320, 8)))
    # 0x14281764a: call 0x142817e20
    s.push(5410747983)
    s.pc=s.read(('i', 5410749984, 8))
    return

def b_14281764f(s):
    # 0x14281764f: nop 
    # 0x142817650: cmp r12d, -1
    s.integer('cmp',[('r', 'r12d', 4), ('i', -1, 4)])
    # 0x142817654: jne 0x142816fe0
    s.pc=s.read(('i', 5410746336, 8)) if s.condition('ne') else 5410747994
    return

def b_14281765a(s):
    # 0x14281765a: movaps xmm0, xmmword ptr [rip + 0x62027f]
    s.simd_move('movaps',('r', 'xmm0', 16),('m', None, None, 1, 5417171168, 16))
    # 0x142817661: movss xmm0, xmm10
    s.simd_move('movss',('r', 'xmm0', 16),('r', 'xmm10', 16))
    # 0x142817666: shufps xmm0, xmm0, 0x40
    s.shuffle('shufps',('r', 'xmm0', 16),('r', 'xmm0', 16),64)
    # 0x14281766a: movaps xmm1, xmm11
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm11', 16))
    # 0x14281766e: movss xmm2, dword ptr [rip + 0x61f8b2]
    s.simd_move('movss',('r', 'xmm2', 16),('m', None, None, 1, 5417168680, 4))
    # 0x142817676: movsd xmm1, xmm2
    s.simd_move('movsd',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x14281767a: shufps xmm11, xmm1, 0x24
    s.shuffle('shufps',('r', 'xmm11', 16),('r', 'xmm1', 16),36)
    # 0x14281767f: mulps xmm11, xmm0
    s.float_op('mulps',('r', 'xmm11', 16),('r', 'xmm0', 16))
    # 0x142817683: mulps xmm11, xmmword ptr [rip + 0xafd735]
    s.float_op('mulps',('r', 'xmm11', 16),('m', None, None, 1, 5422271936, 16))
    # 0x14281768b: movaps xmm6, xmm7
    s.simd_move('movaps',('r', 'xmm6', 16),('r', 'xmm7', 16))
    # 0x14281768e: addps xmm6, xmm11
    s.float_op('addps',('r', 'xmm6', 16),('r', 'xmm11', 16))
    # 0x142817692: subps xmm7, xmm11
    s.float_op('subps',('r', 'xmm7', 16),('r', 'xmm11', 16))
    # 0x142817696: shufps xmm7, xmm7, 0xe8
    s.shuffle('shufps',('r', 'xmm7', 16),('r', 'xmm7', 16),232)
    # 0x14281769a: movlps qword ptr [rbp + 0x140], xmm7
    s.simd_move('movlps',('m', 'rbp', None, 1, 320, 8),('r', 'xmm7', 16))
    # 0x1428176a1: movshdup xmm10, xmm6
    s.simd_move('movshdup',('r', 'xmm10', 16),('r', 'xmm6', 16))
    # 0x1428176a6: lea rcx, [rbp + 0xd8]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 216, 8)))
    # 0x1428176ad: lea rdx, [rbp + 0x140]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 320, 8)))
    # 0x1428176b4: movaps xmm2, xmm10
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm10', 16))
    # 0x1428176b8: call 0x140df4540
    s.push(5410748093)
    s.pc=s.read(('i', 5383341376, 8))
    return

def b_1428176bd(s):
    # 0x1428176bd: nop 
    # 0x1428176be: movsd xmm7, qword ptr [rbp + 0xd8]
    s.simd_move('movsd',('r', 'xmm7', 16),('m', 'rbp', None, 1, 216, 8))
    # 0x1428176c6: movss xmm1, dword ptr [rbp + 0xdc]
    s.simd_move('movss',('r', 'xmm1', 16),('m', 'rbp', None, 1, 220, 4))
    # 0x1428176ce: movss xmm0, dword ptr [rbp + 0xe0]
    s.simd_move('movss',('r', 'xmm0', 16),('m', 'rbp', None, 1, 224, 4))
    # 0x1428176d6: subss xmm1, xmm10
    s.float_op('subss',('r', 'xmm1', 16),('r', 'xmm10', 16))
    # 0x1428176db: mulss xmm1, xmm1
    s.float_op('mulss',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x1428176df: movaps xmm2, xmm0
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x1428176e2: movlhps xmm2, xmm7
    s.simd_move('movlhps',('r', 'xmm2', 16),('r', 'xmm7', 16))
    # 0x1428176e5: shufps xmm2, xmm7, 0xe2
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm7', 16),226)
    # 0x1428176e9: movaps xmm3, xmm6
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm6', 16))
    # 0x1428176ec: shufps xmm3, xmm6, 0xe8
    s.shuffle('shufps',('r', 'xmm3', 16),('r', 'xmm6', 16),232)
    # 0x1428176f0: subps xmm2, xmm3
    s.float_op('subps',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x1428176f3: mulps xmm2, xmm2
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm2', 16))
    # 0x1428176f6: addss xmm1, xmm2
    s.float_op('addss',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x1428176fa: movshdup xmm2, xmm2
    s.simd_move('movshdup',('r', 'xmm2', 16),('r', 'xmm2', 16))
    # 0x1428176fe: addss xmm2, xmm1
    s.float_op('addss',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x142817702: xorps xmm1, xmm1
    s.float_op('xorps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x142817705: sqrtss xmm1, xmm2
    s.float_op('sqrtss',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x142817709: ucomiss xmm1, dword ptr [rip + 0x623ac8]
    s.compare_float(('r', 'xmm1', 16),('m', None, None, 1, 5417185752, 4))
    # 0x142817710: jbe 0x142816fe0
    s.pc=s.read(('i', 5410746336, 8)) if s.condition('be') else 5410748182
    return

def b_142817716(s):
    # 0x142817716: movaps xmm2, xmm12
    s.simd_move('movaps',('r', 'xmm2', 16),('r', 'xmm12', 16))
    # 0x14281771a: mulss xmm2, xmm14
    s.float_op('mulss',('r', 'xmm2', 16),('r', 'xmm14', 16))
    # 0x14281771f: movaps xmm3, xmm13
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm13', 16))
    # 0x142817723: mulss xmm3, dword ptr [rip + 0x6200c5]
    s.float_op('mulss',('r', 'xmm3', 16),('m', None, None, 1, 5417170928, 4))
    # 0x14281772b: addss xmm3, xmm2
    s.float_op('addss',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x14281772f: movss dword ptr [rbp + 0xcc], xmm8
    s.simd_move('movss',('m', 'rbp', None, 1, 204, 4),('r', 'xmm8', 16))
    # 0x142817738: movss dword ptr [rbp + 0xd0], xmm1
    s.simd_move('movss',('m', 'rbp', None, 1, 208, 4),('r', 'xmm1', 16))
    # 0x142817740: mov dword ptr [rbp + 0xd4], 0x3dcccccd
    s.write(('m', 'rbp', None, 1, 212, 4),s.read(('i', 1036831949, 4)))
    # 0x14281774a: movss xmm1, dword ptr [rip + 0x61f7d6]
    s.simd_move('movss',('r', 'xmm1', 16),('m', None, None, 1, 5417168680, 4))
    # 0x142817752: movlhps xmm1, xmm0
    s.simd_move('movlhps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x142817755: shufps xmm7, xmm1, 0x24
    s.shuffle('shufps',('r', 'xmm7', 16),('r', 'xmm1', 16),36)
    # 0x142817759: mulps xmm7, xmmword ptr [rip + 0xafd660]
    s.float_op('mulps',('r', 'xmm7', 16),('m', None, None, 1, 5422271936, 16))
    # 0x142817760: mulps xmm6, xmmword ptr [rip + 0x81e789]
    s.float_op('mulps',('r', 'xmm6', 16),('m', None, None, 1, 5419261680, 16))
    # 0x142817767: movaps xmm0, xmm15
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm15', 16))
    # 0x14281776b: mulps xmm0, xmmword ptr [rip + 0x62016e]
    s.float_op('mulps',('r', 'xmm0', 16),('m', None, None, 1, 5417171168, 16))
    # 0x142817772: movaps xmm1, xmm13
    s.simd_move('movaps',('r', 'xmm1', 16),('r', 'xmm13', 16))
    # 0x142817776: unpcklps xmm1, xmm3
    s.shuffle('unpcklps',('r', 'xmm1', 16),('r', 'xmm3', 16),0)
    # 0x142817779: subps xmm1, xmm0
    s.float_op('subps',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x14281777c: subss xmm0, xmm12
    s.float_op('subss',('r', 'xmm0', 16),('r', 'xmm12', 16))
    # 0x142817781: movshdup xmm2, xmm1
    s.simd_move('movshdup',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x142817785: ucomiss xmm14, xmm2
    s.compare_float(('r', 'xmm14', 16),('r', 'xmm2', 16))
    # 0x142817789: jae 0x1428177d5
    s.pc=s.read(('i', 5410748373, 8)) if s.condition('ae') else 5410748299
    return

def b_14281778b(s):
    # 0x14281778b: movss xmm2, dword ptr [rip + 0x61f795]
    s.simd_move('movss',('r', 'xmm2', 16),('m', None, None, 1, 5417168680, 4))
    # 0x142817793: movaps xmm3, xmm2
    s.simd_move('movaps',('r', 'xmm3', 16),('r', 'xmm2', 16))
    # 0x142817796: movlhps xmm3, xmm15
    s.simd_move('movlhps',('r', 'xmm3', 16),('r', 'xmm15', 16))
    # 0x14281779a: shufps xmm3, xmm15, 0xe2
    s.shuffle('shufps',('r', 'xmm3', 16),('r', 'xmm15', 16),226)
    # 0x14281779f: addps xmm3, xmm1
    s.float_op('addps',('r', 'xmm3', 16),('r', 'xmm1', 16))
    # 0x1428177a2: movshdup xmm1, xmm3
    s.simd_move('movshdup',('r', 'xmm1', 16),('r', 'xmm3', 16))
    # 0x1428177a6: sqrtss xmm1, xmm1
    s.float_op('sqrtss',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x1428177aa: addss xmm0, xmm2
    s.float_op('addss',('r', 'xmm0', 16),('r', 'xmm2', 16))
    # 0x1428177ae: movss xmm2, dword ptr [rip + 0x61f79a]
    s.simd_move('movss',('r', 'xmm2', 16),('m', None, None, 1, 5417168720, 4))
    # 0x1428177b6: divss xmm2, xmm1
    s.float_op('divss',('r', 'xmm2', 16),('r', 'xmm1', 16))
    # 0x1428177ba: xorps xmm1, xmm1
    s.float_op('xorps',('r', 'xmm1', 16),('r', 'xmm1', 16))
    # 0x1428177bd: subss xmm1, xmm13
    s.float_op('subss',('r', 'xmm1', 16),('r', 'xmm13', 16))
    # 0x1428177c2: movlhps xmm1, xmm2
    s.simd_move('movlhps',('r', 'xmm1', 16),('r', 'xmm2', 16))
    # 0x1428177c5: shufps xmm3, xmm1, 0x24
    s.shuffle('shufps',('r', 'xmm3', 16),('r', 'xmm1', 16),36)
    # 0x1428177c9: unpcklps xmm2, xmm0
    s.shuffle('unpcklps',('r', 'xmm2', 16),('r', 'xmm0', 16),0)
    # 0x1428177cc: shufps xmm2, xmm2, 0x10
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm2', 16),16)
    # 0x1428177d0: mulps xmm2, xmm3
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm3', 16))
    # 0x1428177d3: jmp 0x142817813
    s.pc=s.read(('i', 5410748435, 8))
    return

def b_1428177d5(s):
    # 0x1428177d5: movaps xmm2, xmmword ptr [rip + 0xa606d4]
    s.simd_move('movaps',('r', 'xmm2', 16),('m', None, None, 1, 5421629104, 16))
    # 0x1428177dc: movlhps xmm15, xmm2
    s.simd_move('movlhps',('r', 'xmm15', 16),('r', 'xmm2', 16))
    # 0x1428177e0: shufps xmm15, xmm2, 0xe2
    s.shuffle('shufps',('r', 'xmm15', 16),('r', 'xmm2', 16),226)
    # 0x1428177e5: movlhps xmm0, xmm13
    s.simd_move('movlhps',('r', 'xmm0', 16),('r', 'xmm13', 16))
    # 0x1428177e9: shufps xmm1, xmm0, 0x21
    s.shuffle('shufps',('r', 'xmm1', 16),('r', 'xmm0', 16),33)
    # 0x1428177ed: movaps xmm0, xmm15
    s.simd_move('movaps',('r', 'xmm0', 16),('r', 'xmm15', 16))
    # 0x1428177f1: subps xmm0, xmm1
    s.float_op('subps',('r', 'xmm0', 16),('r', 'xmm1', 16))
    # 0x1428177f4: addps xmm1, xmm15
    s.float_op('addps',('r', 'xmm1', 16),('r', 'xmm15', 16))
    # 0x1428177f8: movss xmm1, xmm0
    s.simd_move('movss',('r', 'xmm1', 16),('r', 'xmm0', 16))
    # 0x1428177fc: sqrtss xmm0, xmm0
    s.float_op('sqrtss',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x142817800: movss xmm2, dword ptr [rip + 0x61f748]
    s.simd_move('movss',('r', 'xmm2', 16),('m', None, None, 1, 5417168720, 4))
    # 0x142817808: divss xmm2, xmm0
    s.float_op('divss',('r', 'xmm2', 16),('r', 'xmm0', 16))
    # 0x14281780c: shufps xmm2, xmm2, 0
    s.shuffle('shufps',('r', 'xmm2', 16),('r', 'xmm2', 16),0)
    # 0x142817810: mulps xmm2, xmm1
    s.float_op('mulps',('r', 'xmm2', 16),('r', 'xmm1', 16))
    s.pc=5410748435
    return

def b_142817813(s):
    # 0x142817813: movaps xmmword ptr [rbp + 0x140], xmm2
    s.simd_move('movaps',('m', 'rbp', None, 1, 320, 16),('r', 'xmm2', 16))
    # 0x14281781a: lea rcx, [rbp + 0x140]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 320, 8)))
    # 0x142817821: call 0x1424e5b90
    s.push(5410748454)
    s.pc=s.read(('i', 5407398800, 8))
    return

def b_142817826(s):
    # 0x142817826: nop 
    # 0x142817827: mov rsi, rax
    s.write(('r', 'rsi', 8),s.read(('r', 'rax', 8)))
    # 0x14281782a: lea rcx, [rbp + 0xcc]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 204, 8)))
    # 0x142817831: call 0x140df4560
    s.push(5410748470)
    s.pc=s.read(('i', 5383341408, 8))
    return

def b_142817836(s):
    # 0x142817836: nop 
    # 0x142817837: mov rbx, rax
    s.write(('r', 'rbx', 8),s.read(('r', 'rax', 8)))
    # 0x14281783a: xorps xmm0, xmm0
    s.float_op('xorps',('r', 'xmm0', 16),('r', 'xmm0', 16))
    # 0x14281783d: call 0x141e3c420
    s.push(5410748482)
    s.pc=s.read(('i', 5400413216, 8))
    return

def b_142817842(s):
    # 0x142817842: nop 
    # 0x142817843: addps xmm6, xmm7
    s.float_op('addps',('r', 'xmm6', 16),('r', 'xmm7', 16))
    # 0x142817846: movaps xmmword ptr [rbp + 0x140], xmm6
    s.simd_move('movaps',('m', 'rbp', None, 1, 320, 16),('r', 'xmm6', 16))
    # 0x14281784d: movabs rcx, 0x7bff00003c000000
    s.write(('r', 'rcx', 8),s.read(('i', 8934860186732986368, 8)))
    # 0x142817857: mov qword ptr [rbp + 0x150], rcx
    s.write(('m', 'rbp', None, 1, 336, 8),s.read(('r', 'rcx', 8)))
    # 0x14281785e: mov dword ptr [rbp + 0x158], ebx
    s.write(('m', 'rbp', None, 1, 344, 4),s.read(('r', 'ebx', 4)))
    # 0x142817864: shr rbx, 0x20
    s.integer('shr',[('r', 'rbx', 8), ('i', 32, 1)])
    # 0x142817868: mov word ptr [rbp + 0x15c], bx
    s.write(('m', 'rbp', None, 1, 348, 2),s.read(('r', 'bx', 2)))
    # 0x14281786f: mov word ptr [rbp + 0x15e], ax
    s.write(('m', 'rbp', None, 1, 350, 2),s.read(('r', 'ax', 2)))
    # 0x142817876: mov qword ptr [rbp + 0x160], rsi
    s.write(('m', 'rbp', None, 1, 352, 8),s.read(('r', 'rsi', 8)))
    # 0x14281787d: mov eax, dword ptr [rbp + 0x12c]
    s.write(('r', 'eax', 4),s.read(('m', 'rbp', None, 1, 300, 4)))
    # 0x142817883: mov dword ptr [rbp + 0x168], eax
    s.write(('m', 'rbp', None, 1, 360, 4),s.read(('r', 'eax', 4)))
    # 0x142817889: mov qword ptr [rbp + 0x16c], 0
    s.write(('m', 'rbp', None, 1, 364, 8),s.read(('i', 0, 8)))
    # 0x142817894: mov dword ptr [rbp + 0x174], edi
    s.write(('m', 'rbp', None, 1, 372, 4),s.read(('r', 'edi', 4)))
    # 0x14281789a: movabs rax, 0x200000001
    s.write(('r', 'rax', 8),s.read(('i', 8589934593, 8)))
    # 0x1428178a4: mov qword ptr [rbp + 0x178], rax
    s.write(('m', 'rbp', None, 1, 376, 8),s.read(('r', 'rax', 8)))
    # 0x1428178ab: mov rcx, qword ptr [rbp + 0x2a0]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 672, 8)))
    # 0x1428178b2: lea rdx, [rbp + 0x140]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 320, 8)))
    # 0x1428178b9: call 0x142817e20
    s.push(5410748606)
    s.pc=s.read(('i', 5410749984, 8))
    return

def b_1428178be(s):
    # 0x1428178be: nop 
    # 0x1428178bf: jmp 0x142816fe0
    s.pc=s.read(('i', 5410746336, 8))
    return

def b_1428178c4(s):
    # 0x1428178c4: nop word ptr cs:[rax + rax]
    s.pc=5410748624
    return

def b_1428178d0(s):
    # 0x1428178d0: mov rdx, qword ptr [rbp + 0xe8]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 232, 8)))
    # 0x1428178d7: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x1428178da: je 0x1428178f2
    s.pc=s.read(('i', 5410748658, 8)) if s.condition('e') else 5410748636
    return

def b_1428178dc(s):
    # 0x1428178dc: mov rcx, qword ptr [rbp + 0xf0]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 240, 8)))
    # 0x1428178e3: shl rdx, 2
    s.integer('shl',[('r', 'rdx', 8), ('i', 2, 1)])
    # 0x1428178e7: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x1428178ed: call 0x1406abac0
    s.push(5410748658)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_1428178f2(s):
    # 0x1428178f2: movzx ebx, byte ptr [rbp + 0x187]
    s.write(('r', 'ebx', 4),s.read(('m', 'rbp', None, 1, 391, 1)))
    # 0x1428178f9: mov r14, qword ptr [rbp + 0x88]
    s.write(('r', 'r14', 8),s.read(('m', 'rbp', None, 1, 136, 8)))
    # 0x142817900: mov r15d, dword ptr [rbp + 0x118]
    s.write(('r', 'r15d', 4),s.read(('m', 'rbp', None, 1, 280, 4)))
    # 0x142817907: mov r12d, dword ptr [rbp + 0x11c]
    s.write(('r', 'r12d', 4),s.read(('m', 'rbp', None, 1, 284, 4)))
    # 0x14281790e: jmp 0x142816d0d
    s.pc=s.read(('i', 5410745613, 8))
    return

def b_142817913(s):
    # 0x142817913: mov rdx, qword ptr [rbp + 0x30]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 48, 8)))
    # 0x142817917: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x14281791a: je 0x14281792f
    s.pc=s.read(('i', 5410748719, 8)) if s.condition('e') else 5410748700
    return

def b_14281791c(s):
    # 0x14281791c: mov rcx, qword ptr [rbp + 0x38]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 56, 8)))
    # 0x142817920: shl rdx, 3
    s.integer('shl',[('r', 'rdx', 8), ('i', 3, 1)])
    # 0x142817924: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x14281792a: call 0x1406abac0
    s.push(5410748719)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_14281792f(s):
    # 0x14281792f: mov rdx, qword ptr [rbp + 0x48]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 72, 8)))
    # 0x142817933: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x142817936: je 0x14281794b
    s.pc=s.read(('i', 5410748747, 8)) if s.condition('e') else 5410748728
    return

def b_142817938(s):
    # 0x142817938: mov rcx, qword ptr [rbp + 0x50]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 80, 8)))
    # 0x14281793c: shl rdx, 2
    s.integer('shl',[('r', 'rdx', 8), ('i', 2, 1)])
    # 0x142817940: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x142817946: call 0x1406abac0
    s.push(5410748747)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_14281794b(s):
    # 0x14281794b: mov rdx, qword ptr [rbp - 0x58]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, -88, 8)))
    # 0x14281794f: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x142817952: je 0x142817967
    s.pc=s.read(('i', 5410748775, 8)) if s.condition('e') else 5410748756
    return

def b_142817954(s):
    # 0x142817954: mov rcx, qword ptr [rbp - 0x50]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, -80, 8)))
    # 0x142817958: shl rdx, 3
    s.integer('shl',[('r', 'rdx', 8), ('i', 3, 1)])
    # 0x14281795c: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x142817962: call 0x1406abac0
    s.push(5410748775)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_142817967(s):
    # 0x142817967: mov rdx, qword ptr [rbp - 0x40]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, -64, 8)))
    # 0x14281796b: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x14281796e: je 0x142817983
    s.pc=s.read(('i', 5410748803, 8)) if s.condition('e') else 5410748784
    return

def b_142817970(s):
    # 0x142817970: mov rcx, qword ptr [rbp - 0x38]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, -56, 8)))
    # 0x142817974: shl rdx, 2
    s.integer('shl',[('r', 'rdx', 8), ('i', 2, 1)])
    # 0x142817978: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x14281797e: call 0x1406abac0
    s.push(5410748803)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_142817983(s):
    # 0x142817983: movaps xmm6, xmmword ptr [rbp + 0x190]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rbp', None, 1, 400, 16))
    # 0x14281798a: movaps xmm7, xmmword ptr [rbp + 0x1a0]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rbp', None, 1, 416, 16))
    # 0x142817991: movaps xmm8, xmmword ptr [rbp + 0x1b0]
    s.simd_move('movaps',('r', 'xmm8', 16),('m', 'rbp', None, 1, 432, 16))
    # 0x142817999: movaps xmm9, xmmword ptr [rbp + 0x1c0]
    s.simd_move('movaps',('r', 'xmm9', 16),('m', 'rbp', None, 1, 448, 16))
    # 0x1428179a1: movaps xmm10, xmmword ptr [rbp + 0x1d0]
    s.simd_move('movaps',('r', 'xmm10', 16),('m', 'rbp', None, 1, 464, 16))
    # 0x1428179a9: movaps xmm11, xmmword ptr [rbp + 0x1e0]
    s.simd_move('movaps',('r', 'xmm11', 16),('m', 'rbp', None, 1, 480, 16))
    # 0x1428179b1: movaps xmm12, xmmword ptr [rbp + 0x1f0]
    s.simd_move('movaps',('r', 'xmm12', 16),('m', 'rbp', None, 1, 496, 16))
    # 0x1428179b9: movaps xmm13, xmmword ptr [rbp + 0x200]
    s.simd_move('movaps',('r', 'xmm13', 16),('m', 'rbp', None, 1, 512, 16))
    # 0x1428179c1: movaps xmm14, xmmword ptr [rbp + 0x210]
    s.simd_move('movaps',('r', 'xmm14', 16),('m', 'rbp', None, 1, 528, 16))
    # 0x1428179c9: movaps xmm15, xmmword ptr [rbp + 0x220]
    s.simd_move('movaps',('r', 'xmm15', 16),('m', 'rbp', None, 1, 544, 16))
    # 0x1428179d1: add rsp, 0x2b8
    s.integer('add',[('r', 'rsp', 8), ('i', 696, 8)])
    # 0x1428179d8: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x1428179d9: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x1428179da: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x1428179db: pop r12
    s.write(('r', 'r12', 8),s.pop())
    # 0x1428179dd: pop r13
    s.write(('r', 'r13', 8),s.pop())
    # 0x1428179df: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x1428179e1: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x1428179e3: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x1428179e4: ret 
    s.pc=s.pop()
    return

def b_1428179e5(s):
    # 0x1428179e5: lea rax, [rbp + 0x130]
    s.write(('r', 'rax', 8),s.address(('m', 'rbp', None, 1, 304, 8)))
    # 0x1428179ec: mov qword ptr [rbp + 0x140], rax
    s.write(('m', 'rbp', None, 1, 320, 8),s.read(('r', 'rax', 8)))
    # 0x1428179f3: lea rax, [rip - 0x18a6a3a]
    s.write(('r', 'rax', 8),s.address(('m', None, None, 1, 5384900544, 8)))
    # 0x1428179fa: mov qword ptr [rbp + 0x148], rax
    s.write(('m', 'rbp', None, 1, 328, 8),s.read(('r', 'rax', 8)))
    # 0x142817a01: lea rcx, [rip + 0xd83964]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5424919404, 8)))
    # 0x142817a08: lea r8, [rip + 0xd856c9]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424926936, 8)))
    # 0x142817a0f: lea rdx, [rbp + 0x140]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 320, 8)))
    # 0x142817a16: call 0x142dc83d0
    s.push(5410748955)
    s.pc=s.read(('i', 5416715216, 8))
    return

def b_142817a1b(s):
    # 0x142817a1b: nop 
    # 0x142817a1c: jmp 0x142817b81
    s.pc=s.read(('i', 5410749313, 8))
    return

def b_142817a21(s):
    # 0x142817a21: lea rax, [rbp + 0x130]
    s.write(('r', 'rax', 8),s.address(('m', 'rbp', None, 1, 304, 8)))
    # 0x142817a28: mov qword ptr [rbp + 0x140], rax
    s.write(('m', 'rbp', None, 1, 320, 8),s.read(('r', 'rax', 8)))
    # 0x142817a2f: lea rax, [rip - 0x18a6a76]
    s.write(('r', 'rax', 8),s.address(('m', None, None, 1, 5384900544, 8)))
    # 0x142817a36: mov qword ptr [rbp + 0x148], rax
    s.write(('m', 'rbp', None, 1, 328, 8),s.read(('r', 'rax', 8)))
    # 0x142817a3d: lea rcx, [rip + 0xd83928]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5424919404, 8)))
    # 0x142817a44: lea r8, [rip + 0xd856bd]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424926984, 8)))
    # 0x142817a4b: lea rdx, [rbp + 0x140]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 320, 8)))
    # 0x142817a52: call 0x142dc83d0
    s.push(5410749015)
    s.pc=s.read(('i', 5416715216, 8))
    return

def b_142817a57(s):
    # 0x142817a57: nop 
    # 0x142817a58: jmp 0x142817b81
    s.pc=s.read(('i', 5410749313, 8))
    return

def b_142817a5d(s):
    # 0x142817a5d: lea rax, [rbp + 0x100]
    s.write(('r', 'rax', 8),s.address(('m', 'rbp', None, 1, 256, 8)))
    # 0x142817a64: mov qword ptr [rbp + 0x140], rax
    s.write(('m', 'rbp', None, 1, 320, 8),s.read(('r', 'rax', 8)))
    # 0x142817a6b: lea rax, [rip - 0x18a6ab2]
    s.write(('r', 'rax', 8),s.address(('m', None, None, 1, 5384900544, 8)))
    # 0x142817a72: mov qword ptr [rbp + 0x148], rax
    s.write(('m', 'rbp', None, 1, 328, 8),s.read(('r', 'rax', 8)))
    # 0x142817a79: lea rcx, [rip + 0xd838ec]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5424919404, 8)))
    # 0x142817a80: lea r8, [rip + 0xd85621]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424926888, 8)))
    # 0x142817a87: lea rdx, [rbp + 0x140]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 320, 8)))
    # 0x142817a8e: call 0x142dc83d0
    s.push(5410749075)
    s.pc=s.read(('i', 5416715216, 8))
    return

def b_142817a93(s):
    # 0x142817a93: nop 
    # 0x142817a94: jmp 0x142817b81
    s.pc=s.read(('i', 5410749313, 8))
    return

def b_142817a99(s):
    # 0x142817a99: lea rax, [rbp + 0xe8]
    s.write(('r', 'rax', 8),s.address(('m', 'rbp', None, 1, 232, 8)))
    # 0x142817aa0: mov qword ptr [rbp + 0x140], rax
    s.write(('m', 'rbp', None, 1, 320, 8),s.read(('r', 'rax', 8)))
    # 0x142817aa7: lea rax, [rip - 0x18a6aee]
    s.write(('r', 'rax', 8),s.address(('m', None, None, 1, 5384900544, 8)))
    # 0x142817aae: mov qword ptr [rbp + 0x148], rax
    s.write(('m', 'rbp', None, 1, 328, 8),s.read(('r', 'rax', 8)))
    # 0x142817ab5: lea rcx, [rip + 0xd838b0]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5424919404, 8)))
    # 0x142817abc: lea r8, [rip + 0xd85575]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424926776, 8)))
    # 0x142817ac3: lea rdx, [rbp + 0x140]
    s.write(('r', 'rdx', 8),s.address(('m', 'rbp', None, 1, 320, 8)))
    # 0x142817aca: call 0x142dc83d0
    s.push(5410749135)
    s.pc=s.read(('i', 5416715216, 8))
    return

def b_142817acf(s):
    # 0x142817acf: nop 
    # 0x142817ad0: jmp 0x142817b81
    s.pc=s.read(('i', 5410749313, 8))
    return

def b_142817ad5(s):
    # 0x142817ad5: lea rcx, [rip + 0xd8558c]
    s.write(('r', 'rcx', 8),s.address(('m', None, None, 1, 5424926824, 8)))
    # 0x142817adc: lea r8, [rip + 0xd855ad]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424926864, 8)))
    # 0x142817ae3: mov edx, 0x23
    s.write(('r', 'edx', 4),s.read(('i', 35, 4)))
    # 0x142817ae8: call 0x142dc83b0
    s.push(5410749165)
    s.pc=s.read(('i', 5416715184, 8))
    return

def b_142817aed(s):
    # 0x142817aed: nop 
    # 0x142817aee: jmp 0x142817b81
    s.pc=s.read(('i', 5410749313, 8))
    return

def b_142817af3(s):
    # 0x142817af3: lea r8, [rip + 0xd855c6]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424926912, 8)))
    # 0x142817afa: mov rcx, r14
    s.write(('r', 'rcx', 8),s.read(('r', 'r14', 8)))
    # 0x142817afd: mov rdx, r15
    s.write(('r', 'rdx', 8),s.read(('r', 'r15', 8)))
    # 0x142817b00: call 0x142dc81f2
    s.push(5410749189)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142817b05(s):
    # 0x142817b05: nop 
    # 0x142817b06: jmp 0x142817b81
    s.pc=s.read(('i', 5410749313, 8))
    return

def b_142817b08(s):
    # 0x142817b08: lea r8, [rip + 0xd855e1]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424926960, 8)))
    # 0x142817b0f: mov rcx, r14
    s.write(('r', 'rcx', 8),s.read(('r', 'r14', 8)))
    # 0x142817b12: mov rdx, r15
    s.write(('r', 'rdx', 8),s.read(('r', 'r15', 8)))
    # 0x142817b15: call 0x142dc81f2
    s.push(5410749210)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142817b1a(s):
    # 0x142817b1a: nop 
    # 0x142817b1b: jmp 0x142817b81
    s.pc=s.read(('i', 5410749313, 8))
    return

def b_142817b1d(s):
    # 0x142817b1d: lea r8, [rip + 0xd837bc]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424919264, 8)))
    # 0x142817b24: mov rdx, qword ptr [rbp + 0x138]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 312, 8)))
    # 0x142817b2b: call 0x142dc81f2
    s.push(5410749232)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142817b30(s):
    # 0x142817b30: nop 
    # 0x142817b31: jmp 0x142817b81
    s.pc=s.read(('i', 5410749313, 8))
    return

def b_142817b33(s):
    # 0x142817b33: lea r8, [rip + 0xd83776]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424919216, 8)))
    # 0x142817b3a: call 0x142dc81f2
    s.push(5410749247)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142817b3f(s):
    # 0x142817b3f: nop 
    # 0x142817b40: jmp 0x142817b81
    s.pc=s.read(('i', 5410749313, 8))
    return

def b_142817b42(s):
    # 0x142817b42: lea r8, [rip + 0xd8377f]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424919240, 8)))
    # 0x142817b49: mov rcx, rax
    s.write(('r', 'rcx', 8),s.read(('r', 'rax', 8)))
    # 0x142817b4c: mov rdx, qword ptr [rbp + 0x138]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 312, 8)))
    # 0x142817b53: call 0x142dc81f2
    s.push(5410749272)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142817b58(s):
    # 0x142817b58: nop 
    # 0x142817b59: jmp 0x142817b81
    s.pc=s.read(('i', 5410749313, 8))
    return

def b_142817b5b(s):
    # 0x142817b5b: lea r8, [rip + 0xd8374e]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424919216, 8)))
    # 0x142817b62: call 0x142dc81f2
    s.push(5410749287)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142817b67(s):
    # 0x142817b67: nop 
    # 0x142817b68: jmp 0x142817b81
    s.pc=s.read(('i', 5410749313, 8))
    return

def b_142817b6a(s):
    # 0x142817b6a: lea r8, [rip + 0xd83757]
    s.write(('r', 'r8', 8),s.address(('m', None, None, 1, 5424919240, 8)))
    # 0x142817b71: mov rcx, rax
    s.write(('r', 'rcx', 8),s.read(('r', 'rax', 8)))
    # 0x142817b74: mov rdx, qword ptr [rbp + 0x138]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 312, 8)))
    # 0x142817b7b: call 0x142dc81f2
    s.push(5410749312)
    s.pc=s.read(('i', 5416714738, 8))
    return

def b_142817b80(s):
    # 0x142817b80: nop 
    s.pc=5410749313
    return

def b_142817b81(s):
    # 0x142817b81: ud2 
    raise RuntimeError('Original unreachable/panic 0x142817b81')
    s.pc=5410749315
    return

def b_142817b83(s):
    # 0x142817b83: nop word ptr cs:[rax + rax]
    # 0x142817b90: mov qword ptr [rsp + 0x10], rdx
    s.write(('m', 'rsp', None, 1, 16, 8),s.read(('r', 'rdx', 8)))
    # 0x142817b95: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x142817b96: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x142817b98: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x142817b9a: push r13
    s.push(s.read(('r', 'r13', 8)))
    # 0x142817b9c: push r12
    s.push(s.read(('r', 'r12', 8)))
    # 0x142817b9e: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x142817b9f: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x142817ba0: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x142817ba1: sub rsp, 0xc8
    s.integer('sub',[('r', 'rsp', 8), ('i', 200, 8)])
    # 0x142817ba8: lea rbp, [rdx + 0x80]
    s.write(('r', 'rbp', 8),s.address(('m', 'rdx', None, 1, 128, 8)))
    # 0x142817baf: movaps xmmword ptr [rsp + 0x20], xmm15
    s.simd_move('movaps',('m', 'rsp', None, 1, 32, 16),('r', 'xmm15', 16))
    # 0x142817bb5: movaps xmmword ptr [rsp + 0x30], xmm14
    s.simd_move('movaps',('m', 'rsp', None, 1, 48, 16),('r', 'xmm14', 16))
    # 0x142817bbb: movaps xmmword ptr [rsp + 0x40], xmm13
    s.simd_move('movaps',('m', 'rsp', None, 1, 64, 16),('r', 'xmm13', 16))
    # 0x142817bc1: movaps xmmword ptr [rsp + 0x50], xmm12
    s.simd_move('movaps',('m', 'rsp', None, 1, 80, 16),('r', 'xmm12', 16))
    # 0x142817bc7: movaps xmmword ptr [rsp + 0x60], xmm11
    s.simd_move('movaps',('m', 'rsp', None, 1, 96, 16),('r', 'xmm11', 16))
    # 0x142817bcd: movaps xmmword ptr [rsp + 0x70], xmm10
    s.simd_move('movaps',('m', 'rsp', None, 1, 112, 16),('r', 'xmm10', 16))
    # 0x142817bd3: movaps xmmword ptr [rsp + 0x80], xmm9
    s.simd_move('movaps',('m', 'rsp', None, 1, 128, 16),('r', 'xmm9', 16))
    # 0x142817bdc: movaps xmmword ptr [rsp + 0x90], xmm8
    s.simd_move('movaps',('m', 'rsp', None, 1, 144, 16),('r', 'xmm8', 16))
    # 0x142817be5: movaps xmmword ptr [rsp + 0xa0], xmm7
    s.simd_move('movaps',('m', 'rsp', None, 1, 160, 16),('r', 'xmm7', 16))
    # 0x142817bed: movaps xmmword ptr [rsp + 0xb0], xmm6
    s.simd_move('movaps',('m', 'rsp', None, 1, 176, 16),('r', 'xmm6', 16))
    # 0x142817bf5: mov rdx, qword ptr [rbp + 0xe8]
    s.write(('r', 'rdx', 8),s.read(('m', 'rbp', None, 1, 232, 8)))
    # 0x142817bfc: test rdx, rdx
    s.integer('test',[('r', 'rdx', 8), ('r', 'rdx', 8)])
    # 0x142817bff: je 0x142817c17
    s.pc=s.read(('i', 5410749463, 8)) if s.condition('e') else 5410749441
    return

def b_142817c01(s):
    # 0x142817c01: mov rcx, qword ptr [rbp + 0xf0]
    s.write(('r', 'rcx', 8),s.read(('m', 'rbp', None, 1, 240, 8)))
    # 0x142817c08: shl rdx, 2
    s.integer('shl',[('r', 'rdx', 8), ('i', 2, 1)])
    # 0x142817c0c: mov r8d, 4
    s.write(('r', 'r8d', 4),s.read(('i', 4, 4)))
    # 0x142817c12: call 0x1406abac0
    s.push(5410749463)
    s.pc=s.read(('i', 5375703744, 8))
    return

def b_142817c17(s):
    # 0x142817c17: movaps xmm6, xmmword ptr [rsp + 0xb0]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rsp', None, 1, 176, 16))
    # 0x142817c1f: movaps xmm7, xmmword ptr [rsp + 0xa0]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rsp', None, 1, 160, 16))
    # 0x142817c27: movaps xmm8, xmmword ptr [rsp + 0x90]
    s.simd_move('movaps',('r', 'xmm8', 16),('m', 'rsp', None, 1, 144, 16))
    # 0x142817c30: movaps xmm9, xmmword ptr [rsp + 0x80]
    s.simd_move('movaps',('r', 'xmm9', 16),('m', 'rsp', None, 1, 128, 16))
    # 0x142817c39: movaps xmm10, xmmword ptr [rsp + 0x70]
    s.simd_move('movaps',('r', 'xmm10', 16),('m', 'rsp', None, 1, 112, 16))
    # 0x142817c3f: movaps xmm11, xmmword ptr [rsp + 0x60]
    s.simd_move('movaps',('r', 'xmm11', 16),('m', 'rsp', None, 1, 96, 16))
    # 0x142817c45: movaps xmm12, xmmword ptr [rsp + 0x50]
    s.simd_move('movaps',('r', 'xmm12', 16),('m', 'rsp', None, 1, 80, 16))
    # 0x142817c4b: movaps xmm13, xmmword ptr [rsp + 0x40]
    s.simd_move('movaps',('r', 'xmm13', 16),('m', 'rsp', None, 1, 64, 16))
    # 0x142817c51: movaps xmm14, xmmword ptr [rsp + 0x30]
    s.simd_move('movaps',('r', 'xmm14', 16),('m', 'rsp', None, 1, 48, 16))
    # 0x142817c57: movaps xmm15, xmmword ptr [rsp + 0x20]
    s.simd_move('movaps',('r', 'xmm15', 16),('m', 'rsp', None, 1, 32, 16))
    # 0x142817c5d: add rsp, 0xc8
    s.integer('add',[('r', 'rsp', 8), ('i', 200, 8)])
    # 0x142817c64: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x142817c65: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x142817c66: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x142817c67: pop r12
    s.write(('r', 'r12', 8),s.pop())
    # 0x142817c69: pop r13
    s.write(('r', 'r13', 8),s.pop())
    # 0x142817c6b: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x142817c6d: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x142817c6f: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x142817c70: ret 
    s.pc=s.pop()
    return

def b_142817c71(s):
    # 0x142817c71: nop word ptr cs:[rax + rax]
    # 0x142817c80: mov qword ptr [rsp + 0x10], rdx
    s.write(('m', 'rsp', None, 1, 16, 8),s.read(('r', 'rdx', 8)))
    # 0x142817c85: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x142817c86: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x142817c88: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x142817c8a: push r13
    s.push(s.read(('r', 'r13', 8)))
    # 0x142817c8c: push r12
    s.push(s.read(('r', 'r12', 8)))
    # 0x142817c8e: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x142817c8f: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x142817c90: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x142817c91: sub rsp, 0xc8
    s.integer('sub',[('r', 'rsp', 8), ('i', 200, 8)])
    # 0x142817c98: lea rbp, [rdx + 0x80]
    s.write(('r', 'rbp', 8),s.address(('m', 'rdx', None, 1, 128, 8)))
    # 0x142817c9f: movaps xmmword ptr [rsp + 0x20], xmm15
    s.simd_move('movaps',('m', 'rsp', None, 1, 32, 16),('r', 'xmm15', 16))
    # 0x142817ca5: movaps xmmword ptr [rsp + 0x30], xmm14
    s.simd_move('movaps',('m', 'rsp', None, 1, 48, 16),('r', 'xmm14', 16))
    # 0x142817cab: movaps xmmword ptr [rsp + 0x40], xmm13
    s.simd_move('movaps',('m', 'rsp', None, 1, 64, 16),('r', 'xmm13', 16))
    # 0x142817cb1: movaps xmmword ptr [rsp + 0x50], xmm12
    s.simd_move('movaps',('m', 'rsp', None, 1, 80, 16),('r', 'xmm12', 16))
    # 0x142817cb7: movaps xmmword ptr [rsp + 0x60], xmm11
    s.simd_move('movaps',('m', 'rsp', None, 1, 96, 16),('r', 'xmm11', 16))
    # 0x142817cbd: movaps xmmword ptr [rsp + 0x70], xmm10
    s.simd_move('movaps',('m', 'rsp', None, 1, 112, 16),('r', 'xmm10', 16))
    # 0x142817cc3: movaps xmmword ptr [rsp + 0x80], xmm9
    s.simd_move('movaps',('m', 'rsp', None, 1, 128, 16),('r', 'xmm9', 16))
    # 0x142817ccc: movaps xmmword ptr [rsp + 0x90], xmm8
    s.simd_move('movaps',('m', 'rsp', None, 1, 144, 16),('r', 'xmm8', 16))
    # 0x142817cd5: movaps xmmword ptr [rsp + 0xa0], xmm7
    s.simd_move('movaps',('m', 'rsp', None, 1, 160, 16),('r', 'xmm7', 16))
    # 0x142817cdd: movaps xmmword ptr [rsp + 0xb0], xmm6
    s.simd_move('movaps',('m', 'rsp', None, 1, 176, 16),('r', 'xmm6', 16))
    # 0x142817ce5: lea rcx, [rbp - 0x58]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, -88, 8)))
    # 0x142817ce9: call 0x14049c2a0
    s.push(5410749678)
    s.pc=s.read(('i', 5373543072, 8))
    return

def b_142817cee(s):
    # 0x142817cee: movaps xmm6, xmmword ptr [rsp + 0xb0]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rsp', None, 1, 176, 16))
    # 0x142817cf6: movaps xmm7, xmmword ptr [rsp + 0xa0]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rsp', None, 1, 160, 16))
    # 0x142817cfe: movaps xmm8, xmmword ptr [rsp + 0x90]
    s.simd_move('movaps',('r', 'xmm8', 16),('m', 'rsp', None, 1, 144, 16))
    # 0x142817d07: movaps xmm9, xmmword ptr [rsp + 0x80]
    s.simd_move('movaps',('r', 'xmm9', 16),('m', 'rsp', None, 1, 128, 16))
    # 0x142817d10: movaps xmm10, xmmword ptr [rsp + 0x70]
    s.simd_move('movaps',('r', 'xmm10', 16),('m', 'rsp', None, 1, 112, 16))
    # 0x142817d16: movaps xmm11, xmmword ptr [rsp + 0x60]
    s.simd_move('movaps',('r', 'xmm11', 16),('m', 'rsp', None, 1, 96, 16))
    # 0x142817d1c: movaps xmm12, xmmword ptr [rsp + 0x50]
    s.simd_move('movaps',('r', 'xmm12', 16),('m', 'rsp', None, 1, 80, 16))
    # 0x142817d22: movaps xmm13, xmmword ptr [rsp + 0x40]
    s.simd_move('movaps',('r', 'xmm13', 16),('m', 'rsp', None, 1, 64, 16))
    # 0x142817d28: movaps xmm14, xmmword ptr [rsp + 0x30]
    s.simd_move('movaps',('r', 'xmm14', 16),('m', 'rsp', None, 1, 48, 16))
    # 0x142817d2e: movaps xmm15, xmmword ptr [rsp + 0x20]
    s.simd_move('movaps',('r', 'xmm15', 16),('m', 'rsp', None, 1, 32, 16))
    # 0x142817d34: add rsp, 0xc8
    s.integer('add',[('r', 'rsp', 8), ('i', 200, 8)])
    # 0x142817d3b: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x142817d3c: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x142817d3d: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x142817d3e: pop r12
    s.write(('r', 'r12', 8),s.pop())
    # 0x142817d40: pop r13
    s.write(('r', 'r13', 8),s.pop())
    # 0x142817d42: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x142817d44: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x142817d46: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x142817d47: ret 
    s.pc=s.pop()
    return

def b_142817d48(s):
    # 0x142817d48: nop dword ptr [rax + rax]
    # 0x142817d50: mov qword ptr [rsp + 0x10], rdx
    s.write(('m', 'rsp', None, 1, 16, 8),s.read(('r', 'rdx', 8)))
    # 0x142817d55: push rbp
    s.push(s.read(('r', 'rbp', 8)))
    # 0x142817d56: push r15
    s.push(s.read(('r', 'r15', 8)))
    # 0x142817d58: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x142817d5a: push r13
    s.push(s.read(('r', 'r13', 8)))
    # 0x142817d5c: push r12
    s.push(s.read(('r', 'r12', 8)))
    # 0x142817d5e: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x142817d5f: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x142817d60: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x142817d61: sub rsp, 0xc8
    s.integer('sub',[('r', 'rsp', 8), ('i', 200, 8)])
    # 0x142817d68: lea rbp, [rdx + 0x80]
    s.write(('r', 'rbp', 8),s.address(('m', 'rdx', None, 1, 128, 8)))
    # 0x142817d6f: movaps xmmword ptr [rsp + 0x20], xmm15
    s.simd_move('movaps',('m', 'rsp', None, 1, 32, 16),('r', 'xmm15', 16))
    # 0x142817d75: movaps xmmword ptr [rsp + 0x30], xmm14
    s.simd_move('movaps',('m', 'rsp', None, 1, 48, 16),('r', 'xmm14', 16))
    # 0x142817d7b: movaps xmmword ptr [rsp + 0x40], xmm13
    s.simd_move('movaps',('m', 'rsp', None, 1, 64, 16),('r', 'xmm13', 16))
    # 0x142817d81: movaps xmmword ptr [rsp + 0x50], xmm12
    s.simd_move('movaps',('m', 'rsp', None, 1, 80, 16),('r', 'xmm12', 16))
    # 0x142817d87: movaps xmmword ptr [rsp + 0x60], xmm11
    s.simd_move('movaps',('m', 'rsp', None, 1, 96, 16),('r', 'xmm11', 16))
    # 0x142817d8d: movaps xmmword ptr [rsp + 0x70], xmm10
    s.simd_move('movaps',('m', 'rsp', None, 1, 112, 16),('r', 'xmm10', 16))
    # 0x142817d93: movaps xmmword ptr [rsp + 0x80], xmm9
    s.simd_move('movaps',('m', 'rsp', None, 1, 128, 16),('r', 'xmm9', 16))
    # 0x142817d9c: movaps xmmword ptr [rsp + 0x90], xmm8
    s.simd_move('movaps',('m', 'rsp', None, 1, 144, 16),('r', 'xmm8', 16))
    # 0x142817da5: movaps xmmword ptr [rsp + 0xa0], xmm7
    s.simd_move('movaps',('m', 'rsp', None, 1, 160, 16),('r', 'xmm7', 16))
    # 0x142817dad: movaps xmmword ptr [rsp + 0xb0], xmm6
    s.simd_move('movaps',('m', 'rsp', None, 1, 176, 16),('r', 'xmm6', 16))
    # 0x142817db5: lea rcx, [rbp + 0x30]
    s.write(('r', 'rcx', 8),s.address(('m', 'rbp', None, 1, 48, 8)))
    # 0x142817db9: call 0x14049c2a0
    s.push(5410749886)
    s.pc=s.read(('i', 5373543072, 8))
    return

def b_142817dbe(s):
    # 0x142817dbe: movaps xmm6, xmmword ptr [rsp + 0xb0]
    s.simd_move('movaps',('r', 'xmm6', 16),('m', 'rsp', None, 1, 176, 16))
    # 0x142817dc6: movaps xmm7, xmmword ptr [rsp + 0xa0]
    s.simd_move('movaps',('r', 'xmm7', 16),('m', 'rsp', None, 1, 160, 16))
    # 0x142817dce: movaps xmm8, xmmword ptr [rsp + 0x90]
    s.simd_move('movaps',('r', 'xmm8', 16),('m', 'rsp', None, 1, 144, 16))
    # 0x142817dd7: movaps xmm9, xmmword ptr [rsp + 0x80]
    s.simd_move('movaps',('r', 'xmm9', 16),('m', 'rsp', None, 1, 128, 16))
    # 0x142817de0: movaps xmm10, xmmword ptr [rsp + 0x70]
    s.simd_move('movaps',('r', 'xmm10', 16),('m', 'rsp', None, 1, 112, 16))
    # 0x142817de6: movaps xmm11, xmmword ptr [rsp + 0x60]
    s.simd_move('movaps',('r', 'xmm11', 16),('m', 'rsp', None, 1, 96, 16))
    # 0x142817dec: movaps xmm12, xmmword ptr [rsp + 0x50]
    s.simd_move('movaps',('r', 'xmm12', 16),('m', 'rsp', None, 1, 80, 16))
    # 0x142817df2: movaps xmm13, xmmword ptr [rsp + 0x40]
    s.simd_move('movaps',('r', 'xmm13', 16),('m', 'rsp', None, 1, 64, 16))
    # 0x142817df8: movaps xmm14, xmmword ptr [rsp + 0x30]
    s.simd_move('movaps',('r', 'xmm14', 16),('m', 'rsp', None, 1, 48, 16))
    # 0x142817dfe: movaps xmm15, xmmword ptr [rsp + 0x20]
    s.simd_move('movaps',('r', 'xmm15', 16),('m', 'rsp', None, 1, 32, 16))
    # 0x142817e04: add rsp, 0xc8
    s.integer('add',[('r', 'rsp', 8), ('i', 200, 8)])
    # 0x142817e0b: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x142817e0c: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x142817e0d: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x142817e0e: pop r12
    s.write(('r', 'r12', 8),s.pop())
    # 0x142817e10: pop r13
    s.write(('r', 'r13', 8),s.pop())
    # 0x142817e12: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x142817e14: pop r15
    s.write(('r', 'r15', 8),s.pop())
    # 0x142817e16: pop rbp
    s.write(('r', 'rbp', 8),s.pop())
    # 0x142817e17: ret 
    s.pc=s.pop()
    return

def b_142d7f0f0(s):
    # 0x142d7f0f0: push r14
    s.push(s.read(('r', 'r14', 8)))
    # 0x142d7f0f2: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x142d7f0f3: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x142d7f0f4: push rbx
    s.push(s.read(('r', 'rbx', 8)))
    # 0x142d7f0f5: sub rsp, 0x28
    s.integer('sub',[('r', 'rsp', 8), ('i', 40, 8)])
    # 0x142d7f0f9: mov r11, rdx
    s.write(('r', 'r11', 8),s.read(('r', 'rdx', 8)))
    # 0x142d7f0fc: mov rsi, rcx
    s.write(('r', 'rsi', 8),s.read(('r', 'rcx', 8)))
    # 0x142d7f0ff: mov rbx, qword ptr [rsp + 0x70]
    s.write(('r', 'rbx', 8),s.read(('m', 'rsp', None, 1, 112, 8)))
    # 0x142d7f104: mov r10, qword ptr [rsp + 0x78]
    s.write(('r', 'r10', 8),s.read(('m', 'rsp', None, 1, 120, 8)))
    # 0x142d7f109: mov rax, r10
    s.write(('r', 'rax', 8),s.read(('r', 'r10', 8)))
    # 0x142d7f10c: mul r9
    s.multiply(('r', 'r9', 8))
    # 0x142d7f10f: mov rdi, rax
    s.write(('r', 'rdi', 8),s.read(('r', 'rax', 8)))
    # 0x142d7f112: seto al
    s.write(('r', 'al', 1),int(s.condition('o')))
    # 0x142d7f115: movabs rcx, 0x8000000000000000
    s.write(('r', 'rcx', 8),s.read(('i', -9223372036854775808, 8)))
    # 0x142d7f11f: sub rcx, rbx
    s.integer('sub',[('r', 'rcx', 8), ('r', 'rbx', 8)])
    # 0x142d7f122: cmp rdi, rcx
    s.integer('cmp',[('r', 'rdi', 8), ('r', 'rcx', 8)])
    # 0x142d7f125: seta cl
    s.write(('r', 'cl', 1),int(s.condition('a')))
    # 0x142d7f128: or cl, al
    s.integer('or',[('r', 'cl', 1), ('r', 'al', 1)])
    # 0x142d7f12a: mov r14d, 1
    s.write(('r', 'r14d', 4),s.read(('i', 1, 4)))
    # 0x142d7f130: je 0x142d7f13b
    s.pc=s.read(('i', 5416415547, 8)) if s.condition('e') else 5416415538
    return

def b_142d7f132(s):
    # 0x142d7f132: mov eax, 8
    s.write(('r', 'eax', 4),s.read(('i', 8, 4)))
    # 0x142d7f137: xor edi, edi
    s.integer('xor',[('r', 'edi', 4), ('r', 'edi', 4)])
    # 0x142d7f139: jmp 0x142d7f190
    s.pc=s.read(('i', 5416415632, 8))
    return

def b_142d7f13b(s):
    # 0x142d7f13b: test r11, r11
    s.integer('test',[('r', 'r11', 8), ('r', 'r11', 8)])
    # 0x142d7f13e: je 0x142d7f15c
    s.pc=s.read(('i', 5416415580, 8)) if s.condition('e') else 5416415552
    return

def b_142d7f140(s):
    # 0x142d7f140: imul r10, r11
    s.integer('imul',[('r', 'r10', 8), ('r', 'r11', 8)])
    # 0x142d7f144: mov rcx, r8
    s.write(('r', 'rcx', 8),s.read(('r', 'r8', 8)))
    # 0x142d7f147: mov rdx, r10
    s.write(('r', 'rdx', 8),s.read(('r', 'r10', 8)))
    # 0x142d7f14a: mov r8, rbx
    s.write(('r', 'r8', 8),s.read(('r', 'rbx', 8)))
    # 0x142d7f14d: mov r9, rdi
    s.write(('r', 'r9', 8),s.read(('r', 'rdi', 8)))
    # 0x142d7f150: call 0x1406abad0
    s.push(5416415573)
    s.pc=s.read(('i', 5375703760, 8))
    return

def b_142d7f155(s):
    # 0x142d7f155: test rax, rax
    s.integer('test',[('r', 'rax', 8), ('r', 'rax', 8)])
    # 0x142d7f158: jne 0x142d7f184
    s.pc=s.read(('i', 5416415620, 8)) if s.condition('ne') else 5416415578
    return

def b_142d7f15a(s):
    # 0x142d7f15a: jmp 0x142d7f176
    s.pc=s.read(('i', 5416415606, 8))
    return

def b_142d7f15c(s):
    # 0x142d7f15c: test rdi, rdi
    s.integer('test',[('r', 'rdi', 8), ('r', 'rdi', 8)])
    # 0x142d7f15f: je 0x142d7f181
    s.pc=s.read(('i', 5416415617, 8)) if s.condition('e') else 5416415585
    return

def b_142d7f161(s):
    # 0x142d7f161: call 0x14007ee60
    s.push(5416415590)
    s.pc=s.read(('i', 5369228896, 8))
    return

def b_142d7f166(s):
    # 0x142d7f166: mov rcx, rdi
    s.write(('r', 'rcx', 8),s.read(('r', 'rdi', 8)))
    # 0x142d7f169: mov rdx, rbx
    s.write(('r', 'rdx', 8),s.read(('r', 'rbx', 8)))
    # 0x142d7f16c: call 0x1406abab0
    s.push(5416415601)
    s.pc=s.read(('i', 5375703728, 8))
    return

def b_142d7f171(s):
    # 0x142d7f171: test rax, rax
    s.integer('test',[('r', 'rax', 8), ('r', 'rax', 8)])
    # 0x142d7f174: jne 0x142d7f184
    s.pc=s.read(('i', 5416415620, 8)) if s.condition('ne') else 5416415606
    return

def b_142d7f176(s):
    # 0x142d7f176: mov qword ptr [rsi + 8], rbx
    s.write(('m', 'rsi', None, 1, 8, 8),s.read(('r', 'rbx', 8)))
    # 0x142d7f17a: mov eax, 0x10
    s.write(('r', 'eax', 4),s.read(('i', 16, 4)))
    # 0x142d7f17f: jmp 0x142d7f190
    s.pc=s.read(('i', 5416415632, 8))
    return

def b_142d7f181(s):
    # 0x142d7f181: mov rax, rbx
    s.write(('r', 'rax', 8),s.read(('r', 'rbx', 8)))
    s.pc=5416415620
    return

def b_142d7f184(s):
    # 0x142d7f184: mov qword ptr [rsi + 8], rax
    s.write(('m', 'rsi', None, 1, 8, 8),s.read(('r', 'rax', 8)))
    # 0x142d7f188: mov eax, 0x10
    s.write(('r', 'eax', 4),s.read(('i', 16, 4)))
    # 0x142d7f18d: xor r14d, r14d
    s.integer('xor',[('r', 'r14d', 4), ('r', 'r14d', 4)])
    s.pc=5416415632
    return

def b_142d7f190(s):
    # 0x142d7f190: mov qword ptr [rsi + rax], rdi
    s.write(('m', 'rsi', 'rax', 1, 0, 8),s.read(('r', 'rdi', 8)))
    # 0x142d7f194: mov qword ptr [rsi], r14
    s.write(('m', 'rsi', None, 1, 0, 8),s.read(('r', 'r14', 8)))
    # 0x142d7f197: add rsp, 0x28
    s.integer('add',[('r', 'rsp', 8), ('i', 40, 8)])
    # 0x142d7f19b: pop rbx
    s.write(('r', 'rbx', 8),s.pop())
    # 0x142d7f19c: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x142d7f19d: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x142d7f19e: pop r14
    s.write(('r', 'r14', 8),s.pop())
    # 0x142d7f1a0: ret 
    s.pc=s.pop()
    return

def b_142d89250(s):
    # 0x142d89250: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x142d89251: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x142d89252: sub rsp, 0x48
    s.integer('sub',[('r', 'rsp', 8), ('i', 72, 8)])
    # 0x142d89256: mov rsi, rcx
    s.write(('r', 'rsi', 8),s.read(('r', 'rcx', 8)))
    # 0x142d89259: mov rdx, qword ptr [rcx]
    s.write(('r', 'rdx', 8),s.read(('m', 'rcx', None, 1, 0, 8)))
    # 0x142d8925c: lea rax, [rdx + rdx]
    s.write(('r', 'rax', 8),s.address(('m', 'rdx', 'rdx', 1, 0, 8)))
    # 0x142d89260: cmp rax, 5
    s.integer('cmp',[('r', 'rax', 8), ('i', 5, 8)])
    # 0x142d89264: mov edi, 4
    s.write(('r', 'edi', 4),s.read(('i', 4, 4)))
    # 0x142d89269: cmovae rdi, rax
    s.write(('r', 'rdi', 8),s.read(('r', 'rax', 8))) if s.condition('ae') else None
    # 0x142d8926d: mov r8, qword ptr [rcx + 8]
    s.write(('r', 'r8', 8),s.read(('m', 'rcx', None, 1, 8, 8)))
    # 0x142d89271: mov qword ptr [rsp + 0x28], 0x18
    s.write(('m', 'rsp', None, 1, 40, 8),s.read(('i', 24, 8)))
    # 0x142d8927a: mov qword ptr [rsp + 0x20], 4
    s.write(('m', 'rsp', None, 1, 32, 8),s.read(('i', 4, 8)))
    # 0x142d89283: lea rcx, [rsp + 0x30]
    s.write(('r', 'rcx', 8),s.address(('m', 'rsp', None, 1, 48, 8)))
    # 0x142d89288: mov r9, rdi
    s.write(('r', 'r9', 8),s.read(('r', 'rdi', 8)))
    # 0x142d8928b: call 0x142d7f0f0
    s.push(5416456848)
    s.pc=s.read(('i', 5416415472, 8))
    return

def b_142d89290(s):
    # 0x142d89290: cmp dword ptr [rsp + 0x30], 1
    s.integer('cmp',[('m', 'rsp', None, 1, 48, 4), ('i', 1, 4)])
    # 0x142d89295: je 0x142d892aa
    s.pc=s.read(('i', 5416456874, 8)) if s.condition('e') else 5416456855
    return

def b_142d89297(s):
    # 0x142d89297: mov rax, qword ptr [rsp + 0x38]
    s.write(('r', 'rax', 8),s.read(('m', 'rsp', None, 1, 56, 8)))
    # 0x142d8929c: mov qword ptr [rsi + 8], rax
    s.write(('m', 'rsi', None, 1, 8, 8),s.read(('r', 'rax', 8)))
    # 0x142d892a0: mov qword ptr [rsi], rdi
    s.write(('m', 'rsi', None, 1, 0, 8),s.read(('r', 'rdi', 8)))
    # 0x142d892a3: add rsp, 0x48
    s.integer('add',[('r', 'rsp', 8), ('i', 72, 8)])
    # 0x142d892a7: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x142d892a8: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x142d892a9: ret 
    s.pc=s.pop()
    return

def b_142d892aa(s):
    # 0x142d892aa: mov rcx, qword ptr [rsp + 0x38]
    s.write(('r', 'rcx', 8),s.read(('m', 'rsp', None, 1, 56, 8)))
    # 0x142d892af: mov rdx, qword ptr [rsp + 0x40]
    s.write(('r', 'rdx', 8),s.read(('m', 'rsp', None, 1, 64, 8)))
    # 0x142d892b4: call 0x142dc7e2a
    s.push(5416456889)
    s.pc=s.read(('i', 5416713770, 8))
    return

def b_142d892b9(s):
    # 0x142d892b9: int3 
    raise RuntimeError('Original unreachable/panic 0x142d892b9')
    s.pc=5416456890
    return

def b_142d8d7f0(s):
    # 0x142d8d7f0: push rsi
    s.push(s.read(('r', 'rsi', 8)))
    # 0x142d8d7f1: push rdi
    s.push(s.read(('r', 'rdi', 8)))
    # 0x142d8d7f2: sub rsp, 0x48
    s.integer('sub',[('r', 'rsp', 8), ('i', 72, 8)])
    # 0x142d8d7f6: mov rsi, rcx
    s.write(('r', 'rsi', 8),s.read(('r', 'rcx', 8)))
    # 0x142d8d7f9: mov rdx, qword ptr [rcx]
    s.write(('r', 'rdx', 8),s.read(('m', 'rcx', None, 1, 0, 8)))
    # 0x142d8d7fc: lea rax, [rdx + rdx]
    s.write(('r', 'rax', 8),s.address(('m', 'rdx', 'rdx', 1, 0, 8)))
    # 0x142d8d800: cmp rax, 5
    s.integer('cmp',[('r', 'rax', 8), ('i', 5, 8)])
    # 0x142d8d804: mov edi, 4
    s.write(('r', 'edi', 4),s.read(('i', 4, 4)))
    # 0x142d8d809: cmovae rdi, rax
    s.write(('r', 'rdi', 8),s.read(('r', 'rax', 8))) if s.condition('ae') else None
    # 0x142d8d80d: mov r8, qword ptr [rcx + 8]
    s.write(('r', 'r8', 8),s.read(('m', 'rcx', None, 1, 8, 8)))
    # 0x142d8d811: mov qword ptr [rsp + 0x28], 8
    s.write(('m', 'rsp', None, 1, 40, 8),s.read(('i', 8, 8)))
    # 0x142d8d81a: mov qword ptr [rsp + 0x20], 4
    s.write(('m', 'rsp', None, 1, 32, 8),s.read(('i', 4, 8)))
    # 0x142d8d823: lea rcx, [rsp + 0x30]
    s.write(('r', 'rcx', 8),s.address(('m', 'rsp', None, 1, 48, 8)))
    # 0x142d8d828: mov r9, rdi
    s.write(('r', 'r9', 8),s.read(('r', 'rdi', 8)))
    # 0x142d8d82b: call 0x142d7f0f0
    s.push(5416474672)
    s.pc=s.read(('i', 5416415472, 8))
    return

def b_142d8d830(s):
    # 0x142d8d830: cmp dword ptr [rsp + 0x30], 1
    s.integer('cmp',[('m', 'rsp', None, 1, 48, 4), ('i', 1, 4)])
    # 0x142d8d835: je 0x142d8d84a
    s.pc=s.read(('i', 5416474698, 8)) if s.condition('e') else 5416474679
    return

def b_142d8d837(s):
    # 0x142d8d837: mov rax, qword ptr [rsp + 0x38]
    s.write(('r', 'rax', 8),s.read(('m', 'rsp', None, 1, 56, 8)))
    # 0x142d8d83c: mov qword ptr [rsi + 8], rax
    s.write(('m', 'rsi', None, 1, 8, 8),s.read(('r', 'rax', 8)))
    # 0x142d8d840: mov qword ptr [rsi], rdi
    s.write(('m', 'rsi', None, 1, 0, 8),s.read(('r', 'rdi', 8)))
    # 0x142d8d843: add rsp, 0x48
    s.integer('add',[('r', 'rsp', 8), ('i', 72, 8)])
    # 0x142d8d847: pop rdi
    s.write(('r', 'rdi', 8),s.pop())
    # 0x142d8d848: pop rsi
    s.write(('r', 'rsi', 8),s.pop())
    # 0x142d8d849: ret 
    s.pc=s.pop()
    return

def b_142d8d84a(s):
    # 0x142d8d84a: mov rcx, qword ptr [rsp + 0x38]
    s.write(('r', 'rcx', 8),s.read(('m', 'rsp', None, 1, 56, 8)))
    # 0x142d8d84f: mov rdx, qword ptr [rsp + 0x40]
    s.write(('r', 'rdx', 8),s.read(('m', 'rsp', None, 1, 64, 8)))
    # 0x142d8d854: call 0x142dc7e2a
    s.push(5416474713)
    s.pc=s.read(('i', 5416713770, 8))
    return

def b_142d8d859(s):
    # 0x142d8d859: int3 
    raise RuntimeError('Original unreachable/panic 0x142d8d859')
    s.pc=5416474714
    return

BLOCKS={
    5369236624: b_140080c90,
    5369236667: b_140080cbb,
    5369236701: b_140080cdd,
    5369236721: b_140080cf1,
    5369236737: b_140080d01,
    5369236750: b_140080d0e,
    5369236759: b_140080d17,
    5369236784: b_140080d30,
    5369236859: b_140080d7b,
    5369236865: b_140080d81,
    5369236900: b_140080da4,
    5369236908: b_140080dac,
    5369236910: b_140080dae,
    5369236928: b_140080dc0,
    5369236933: b_140080dc5,
    5369236972: b_140080dec,
    5369236976: b_140080df0,
    5369237006: b_140080e0e,
    5369237015: b_140080e17,
    5369237028: b_140080e24,
    5369237033: b_140080e29,
    5369237051: b_140080e3b,
    5369237057: b_140080e41,
    5369237093: b_140080e65,
    5369237108: b_140080e74,
    5369237110: b_140080e76,
    5369237119: b_140080e7f,
    5369237121: b_140080e81,
    5369237125: b_140080e85,
    5369237136: b_140080e90,
    5369237141: b_140080e95,
    5369237177: b_140080eb9,
    5369237179: b_140080ebb,
    5369237190: b_140080ec6,
    5369237192: b_140080ec8,
    5369237205: b_140080ed5,
    5369237222: b_140080ee6,
    5369237225: b_140080ee9,
    5369237267: b_140080f13,
    5369237290: b_140080f2a,
    5369237291: b_140080f2b,
    5380003632: b_140ac5730,
    5380003798: b_140ac57d6,
    5380003808: b_140ac57e0,
    5380003862: b_140ac5816,
    5380003877: b_140ac5825,
    5380003951: b_140ac586f,
    5380004009: b_140ac58a9,
    5380004160: b_140ac5940,
    5380004199: b_140ac5967,
    5380004235: b_140ac598b,
    5380004284: b_140ac59bc,
    5380004314: b_140ac59da,
    5380004465: b_140ac5a71,
    5380004502: b_140ac5a96,
    5380004573: b_140ac5add,
    5380004581: b_140ac5ae5,
    5380004614: b_140ac5b06,
    5380004664: b_140ac5b38,
    5380004702: b_140ac5b5e,
    5380004740: b_140ac5b84,
    5380004770: b_140ac5ba2,
    5380004778: b_140ac5baa,
    5380004841: b_140ac5be9,
    5380004856: b_140ac5bf8,
    5380004919: b_140ac5c37,
    5380004977: b_140ac5c71,
    5380005128: b_140ac5d08,
    5380005167: b_140ac5d2f,
    5380005198: b_140ac5d4e,
    5380005247: b_140ac5d7f,
    5380005277: b_140ac5d9d,
    5380005428: b_140ac5e34,
    5380005465: b_140ac5e59,
    5380005531: b_140ac5e9b,
    5380005564: b_140ac5ebc,
    5380005593: b_140ac5ed9,
    5380005698: b_140ac5f42,
    5380005730: b_140ac5f62,
    5380005773: b_140ac5f8d,
    5380005875: b_140ac5ff3,
    5380005899: b_140ac600b,
    5380005942: b_140ac6036,
    5380005959: b_140ac6047,
    5380005976: b_140ac6058,
    5380005993: b_140ac6069,
    5380006008: b_140ac6078,
    5380006035: b_140ac6093,
    5380006069: b_140ac60b5,
    5380006160: b_140ac6110,
    5380006166: b_140ac6116,
    5380006252: b_140ac616c,
    5380006400: b_140ac6200,
    5380006409: b_140ac6209,
    5380006423: b_140ac6217,
    5380006433: b_140ac6221,
    5380717312: b_140b73b00,
    5380717321: b_140b73b09,
    5380717336: b_140b73b18,
    5380717360: b_140b73b30,
    5380717376: b_140b73b40,
    5380717385: b_140b73b49,
    5380717400: b_140b73b58,
    5380717424: b_140b73b70,
    5380717440: b_140b73b80,
    5380717449: b_140b73b89,
    5380717467: b_140b73b9b,
    5380717472: b_140b73ba0,
    5380717582: b_140b73c0e,
    5380717586: b_140b73c12,
    5380728944: b_140b76870,
    5380729008: b_140b768b0,
    5380729070: b_140b768ee,
    5380729093: b_140b76905,
    5380729106: b_140b76912,
    5380729115: b_140b7691b,
    5380729130: b_140b7692a,
    5380729158: b_140b76946,
    5380729160: b_140b76948,
    5380729172: b_140b76954,
    5380729227: b_140b7698b,
    5380729236: b_140b76994,
    5380729248: b_140b769a0,
    5380729353: b_140b76a09,
    5380729355: b_140b76a0b,
    5380729360: b_140b76a10,
    5380729395: b_140b76a33,
    5380729406: b_140b76a3e,
    5380729491: b_140b76a93,
    5380729536: b_140b76ac0,
    5380729616: b_140b76b10,
    5380729625: b_140b76b19,
    5380729630: b_140b76b1e,
    5380729681: b_140b76b51,
    5380729694: b_140b76b5e,
    5380731280: b_140b77190,
    5380731299: b_140b771a3,
    5380731301: b_140b771a5,
    5380731315: b_140b771b3,
    5380731336: b_140b771c8,
    5380731376: b_140b771f0,
    5380731387: b_140b771fb,
    5380731426: b_140b77222,
    5380731474: b_140b77252,
    5380731600: b_140b772d0,
    5380731638: b_140b772f6,
    5380731653: b_140b77305,
    5380731662: b_140b7730e,
    5380731712: b_140b77340,
    5380731739: b_140b7735b,
    5380731767: b_140b77377,
    5380731795: b_140b77393,
    5380731823: b_140b773af,
    5380731851: b_140b773cb,
    5380731879: b_140b773e7,
    5380731907: b_140b77403,
    5380731935: b_140b7741f,
    5380731963: b_140b7743b,
    5380731991: b_140b77457,
    5380732019: b_140b77473,
    5380732047: b_140b7748f,
    5380732075: b_140b774ab,
    5380732103: b_140b774c7,
    5380732131: b_140b774e3,
    5380732159: b_140b774ff,
    5380732193: b_140b77521,
    5380732227: b_140b77543,
    5380732304: b_140b77590,
    5380732311: b_140b77597,
    5380732375: b_140b775d7,
    5380732426: b_140b7760a,
    5380732441: b_140b77619,
    5380733440: b_140b77a00,
    5380733474: b_140b77a22,
    5380733480: b_140b77a28,
    5380733540: b_140b77a64,
    5380733569: b_140b77a81,
    5380733657: b_140b77ad9,
    5380733689: b_140b77af9,
    5380733699: b_140b77b03,
    5380733774: b_140b77b4e,
    5380733792: b_140b77b60,
    5383291424: b_140de8220,
    5383291536: b_140de8290,
    5383291575: b_140de82b7,
    5383291619: b_140de82e3,
    5383291622: b_140de82e6,
    5383291633: b_140de82f1,
    5383291644: b_140de82fc,
    5383291663: b_140de830f,
    5383291668: b_140de8314,
    5383291702: b_140de8336,
    5383291738: b_140de835a,
    5383291759: b_140de836f,
    5383291760: b_140de8370,
    5383291795: b_140de8393,
    5383291814: b_140de83a6,
    5383293872: b_140de8bb0,
    5383293927: b_140de8be7,
    5383293947: b_140de8bfb,
    5383293978: b_140de8c1a,
    5383293995: b_140de8c2b,
    5383294002: b_140de8c32,
    5383294023: b_140de8c47,
    5383294072: b_140de8c78,
    5383294083: b_140de8c83,
    5383294086: b_140de8c86,
    5383294118: b_140de8ca6,
    5383294129: b_140de8cb1,
    5383294157: b_140de8ccd,
    5383294189: b_140de8ced,
    5383294230: b_140de8d16,
    5383294240: b_140de8d20,
    5383294248: b_140de8d28,
    5383294279: b_140de8d47,
    5383294291: b_140de8d53,
    5383294304: b_140de8d60,
    5383294333: b_140de8d7d,
    5383294354: b_140de8d92,
    5383294362: b_140de8d9a,
    5383294385: b_140de8db1,
    5383294419: b_140de8dd3,
    5383294451: b_140de8df3,
    5383294463: b_140de8dff,
    5383294495: b_140de8e1f,
    5383294507: b_140de8e2b,
    5383320224: b_140def2a0,
    5383320256: b_140def2c0,
    5383320331: b_140def30b,
    5383320374: b_140def336,
    5383320386: b_140def342,
    5383321056: b_140def5e0,
    5383321116: b_140def61c,
    5383321153: b_140def641,
    5383321164: b_140def64c,
    5383323440: b_140deff30,
    5383323664: b_140df0010,
    5383323707: b_140df003b,
    5383323858: b_140df00d2,
    5383323882: b_140df00ea,
    5383330704: b_140df1b90,
    5383330729: b_140df1ba9,
    5383330745: b_140df1bb9,
    5383330790: b_140df1be6,
    5383330807: b_140df1bf7,
    5383330824: b_140df1c08,
    5383330832: b_140df1c10,
    5383334256: b_140df2970,
    5383334276: b_140df2984,
    5383334292: b_140df2994,
    5383334321: b_140df29b1,
    5383334341: b_140df29c5,
    5383334361: b_140df29d9,
    5383337952: b_140df37e0,
    5383338033: b_140df3831,
    5383338051: b_140df3843,
    5383338066: b_140df3852,
    5383338075: b_140df385b,
    5383338337: b_140df3961,
    5383338390: b_140df3996,
    5383338399: b_140df399f,
    5383338466: b_140df39e2,
    5383338490: b_140df39fa,
    5383338505: b_140df3a09,
    5383338557: b_140df3a3d,
    5383338560: b_140df3a40,
    5383338612: b_140df3a74,
    5383338621: b_140df3a7d,
    5383338640: b_140df3a90,
    5383341344: b_140df4520,
    5383341376: b_140df4540,
    5383399552: b_140e02880,
    5385257008: b_140fc8030,
    5385257089: b_140fc8081,
    5385257100: b_140fc808c,
    5385257105: b_140fc8091,
    5385257121: b_140fc80a1,
    5385257139: b_140fc80b3,
    5385257144: b_140fc80b8,
    5385257149: b_140fc80bd,
    5385257157: b_140fc80c5,
    5385257245: b_140fc811d,
    5385257284: b_140fc8144,
    5385257333: b_140fc8175,
    5385257356: b_140fc818c,
    5385257357: b_140fc818d,
    5401280752: b_141f100f0,
    5401280861: b_141f1015d,
    5401280928: b_141f101a0,
    5401280967: b_141f101c7,
    5401280977: b_141f101d1,
    5401280988: b_141f101dc,
    5401281004: b_141f101ec,
    5401281017: b_141f101f9,
    5401281083: b_141f1023b,
    5401281098: b_141f1024a,
    5401281114: b_141f1025a,
    5401281127: b_141f10267,
    5401281261: b_141f102ed,
    5401281335: b_141f10337,
    5401281377: b_141f10361,
    5401281380: b_141f10364,
    5401281395: b_141f10373,
    5401281398: b_141f10376,
    5401281410: b_141f10382,
    5401281413: b_141f10385,
    5401281428: b_141f10394,
    5401281431: b_141f10397,
    5401281443: b_141f103a3,
    5401281444: b_141f103a4,
    5401281446: b_141f103a6,
    5410661984: b_142802660,
    5410662029: b_14280268d,
    5410662042: b_14280269a,
    5410662052: b_1428026a4,
    5410662066: b_1428026b2,
    5410662075: b_1428026bb,
    5410662080: b_1428026c0,
    5410662109: b_1428026dd,
    5410662111: b_1428026df,
    5410662125: b_1428026ed,
    5410662135: b_1428026f7,
    5410662137: b_1428026f9,
    5410662154: b_14280270a,
    5410662167: b_142802717,
    5410662192: b_142802730,
    5410662194: b_142802732,
    5410662202: b_14280273a,
    5410662234: b_14280275a,
    5410662258: b_142802772,
    5410662288: b_142802790,
    5410662309: b_1428027a5,
    5410662366: b_1428027de,
    5410662369: b_1428027e1,
    5410662377: b_1428027e9,
    5410662378: b_1428027ea,
    5410662411: b_14280280b,
    5410662430: b_14280281e,
    5410662431: b_14280281f,
    5410662448: b_142802830,
    5410662499: b_142802863,
    5410662515: b_142802873,
    5410662528: b_142802880,
    5410662537: b_142802889,
    5410662560: b_1428028a0,
    5410662637: b_1428028ed,
    5410662643: b_1428028f3,
    5410662679: b_142802917,
    5410662687: b_14280291f,
    5410662689: b_142802921,
    5410662704: b_142802930,
    5410662713: b_142802939,
    5410662749: b_14280295d,
    5410662766: b_14280296e,
    5410662773: b_142802975,
    5410662794: b_14280298a,
    5410662849: b_1428029c1,
    5410662857: b_1428029c9,
    5410662903: b_1428029f7,
    5410662913: b_142802a01,
    5410662918: b_142802a06,
    5410662939: b_142802a1b,
    5410662942: b_142802a1e,
    5410662963: b_142802a33,
    5410663006: b_142802a5e,
    5410663029: b_142802a75,
    5410663030: b_142802a76,
    5410729072: b_142812c70,
    5410729238: b_142812d16,
    5410729253: b_142812d25,
    5410729309: b_142812d5d,
    5410729335: b_142812d77,
    5410729354: b_142812d8a,
    5410729409: b_142812dc1,
    5410729429: b_142812dd5,
    5410729442: b_142812de2,
    5410729447: b_142812de7,
    5410729462: b_142812df6,
    5410729487: b_142812e0f,
    5410729492: b_142812e14,
    5410729515: b_142812e2b,
    5410729517: b_142812e2d,
    5410729527: b_142812e37,
    5410729552: b_142812e50,
    5410729557: b_142812e55,
    5410729580: b_142812e6c,
    5410729587: b_142812e73,
    5410729615: b_142812e8f,
    5410729616: b_142812e90,
    5410729632: b_142812ea0,
    5410729672: b_142812ec8,
    5410729755: b_142812f1b,
    5410729760: b_142812f20,
    5410729788: b_142812f3c,
    5410729798: b_142812f46,
    5410729810: b_142812f52,
    5410729852: b_142812f7c,
    5410729874: b_142812f92,
    5410729963: b_142812feb,
    5410730007: b_142813017,
    5410730043: b_14281303b,
    5410730103: b_142813077,
    5410730198: b_1428130d6,
    5410730219: b_1428130eb,
    5410730241: b_142813101,
    5410730253: b_14281310d,
    5410730275: b_142813123,
    5410730291: b_142813133,
    5410730405: b_1428131a5,
    5410730660: b_1428132a4,
    5410730672: b_1428132b0,
    5410730681: b_1428132b9,
    5410730706: b_1428132d2,
    5410730716: b_1428132dc,
    5410730728: b_1428132e8,
    5410730753: b_142813301,
    5410730763: b_14281330b,
    5410730779: b_14281331b,
    5410730798: b_14281332e,
    5410730811: b_14281333b,
    5410730881: b_142813381,
    5410730900: b_142813394,
    5410730913: b_1428133a1,
    5410731554: b_142813622,
    5410731585: b_142813641,
    5410731698: b_1428136b2,
    5410731712: b_1428136c0,
    5410731746: b_1428136e2,
    5410731813: b_142813725,
    5410731824: b_142813730,
    5410731886: b_14281376e,
    5410731888: b_142813770,
    5410731943: b_1428137a7,
    5410731947: b_1428137ab,
    5410731970: b_1428137c2,
    5410732011: b_1428137eb,
    5410732023: b_1428137f7,
    5410732151: b_142813877,
    5410732168: b_142813888,
    5410732184: b_142813898,
    5410732206: b_1428138ae,
    5410732211: b_1428138b3,
    5410732223: b_1428138bf,
    5410732257: b_1428138e1,
    5410732271: b_1428138ef,
    5410732310: b_142813916,
    5410732342: b_142813936,
    5410732396: b_14281396c,
    5410732402: b_142813972,
    5410732456: b_1428139a8,
    5410732462: b_1428139ae,
    5410732469: b_1428139b5,
    5410732550: b_142813a06,
    5410732563: b_142813a13,
    5410732654: b_142813a6e,
    5410732667: b_142813a7b,
    5410732713: b_142813aa9,
    5410732738: b_142813ac2,
    5410732800: b_142813b00,
    5410732836: b_142813b24,
    5410732889: b_142813b59,
    5410732907: b_142813b6b,
    5410732974: b_142813bae,
    5410733091: b_142813c23,
    5410733279: b_142813cdf,
    5410733289: b_142813ce9,
    5410733555: b_142813df3,
    5410733745: b_142813eb1,
    5410733785: b_142813ed9,
    5410734145: b_142814041,
    5410734159: b_14281404f,
    5410734288: b_1428140d0,
    5410734346: b_14281410a,
    5410734393: b_142814139,
    5410734433: b_142814161,
    5410734619: b_14281421b,
    5410734643: b_142814233,
    5410734655: b_14281423f,
    5410734677: b_142814255,
    5410734686: b_14281425e,
    5410734891: b_14281432b,
    5410734900: b_142814334,
    5410734912: b_142814340,
    5410734957: b_14281436d,
    5410734966: b_142814376,
    5410734985: b_142814389,
    5410735006: b_14281439e,
    5410735022: b_1428143ae,
    5410735045: b_1428143c5,
    5410735064: b_1428143d8,
    5410735089: b_1428143f1,
    5410735105: b_142814401,
    5410735108: b_142814404,
    5410735175: b_142814447,
    5410735184: b_142814450,
    5410735204: b_142814464,
    5410735216: b_142814470,
    5410735228: b_14281447c,
    5410735235: b_142814483,
    5410735248: b_142814490,
    5410735251: b_142814493,
    5410735258: b_14281449a,
    5410735275: b_1428144ab,
    5410735301: b_1428144c5,
    5410735314: b_1428144d2,
    5410735327: b_1428144df,
    5410735332: b_1428144e4,
    5410735359: b_1428144ff,
    5410735375: b_14281450f,
    5410735386: b_14281451a,
    5410735405: b_14281452d,
    5410735424: b_142814540,
    5410735433: b_142814549,
    5410735452: b_14281455c,
    5410735471: b_14281456f,
    5410735483: b_14281457b,
    5410735503: b_14281458f,
    5410735504: b_142814590,
    5410735520: b_1428145a0,
    5410735539: b_1428145b3,
    5410735557: b_1428145c5,
    5410735573: b_1428145d5,
    5410735596: b_1428145ec,
    5410735615: b_1428145ff,
    5410735640: b_142814618,
    5410735656: b_142814628,
    5410735659: b_14281462b,
    5410735722: b_14281466a,
    5410735728: b_142814670,
    5410735757: b_14281468d,
    5410735777: b_1428146a1,
    5410735789: b_1428146ad,
    5410735796: b_1428146b4,
    5410735808: b_1428146c0,
    5410735811: b_1428146c3,
    5410735818: b_1428146ca,
    5410735849: b_1428146e9,
    5410735899: b_14281471b,
    5410735912: b_142814728,
    5410735932: b_14281473c,
    5410736070: b_1428147c6,
    5410736138: b_14281480a,
    5410736159: b_14281481f,
    5410736175: b_14281482f,
    5410736304: b_1428148b0,
    5410736361: b_1428148e9,
    5410736531: b_142814993,
    5410736631: b_1428149f7,
    5410736653: b_142814a0d,
    5410736823: b_142814ab7,
    5410736847: b_142814acf,
    5410736875: b_142814aeb,
    5410736905: b_142814b09,
    5410736917: b_142814b15,
    5410736925: b_142814b1d,
    5410736997: b_142814b65,
    5410737008: b_142814b70,
    5410737020: b_142814b7c,
    5410737033: b_142814b89,
    5410737042: b_142814b92,
    5410737055: b_142814b9f,
    5410737067: b_142814bab,
    5410737072: b_142814bb0,
    5410737082: b_142814bba,
    5410737170: b_142814c12,
    5410737253: b_142814c65,
    5410737297: b_142814c91,
    5410737335: b_142814cb7,
    5410737356: b_142814ccc,
    5410737366: b_142814cd6,
    5410737380: b_142814ce4,
    5410737463: b_142814d37,
    5410737501: b_142814d5d,
    5410737559: b_142814d97,
    5410737568: b_142814da0,
    5410737623: b_142814dd7,
    5410737671: b_142814e07,
    5410737686: b_142814e16,
    5410737695: b_142814e1f,
    5410737749: b_142814e55,
    5410737836: b_142814eac,
    5410737846: b_142814eb6,
    5410737856: b_142814ec0,
    5410737868: b_142814ecc,
    5410737895: b_142814ee7,
    5410737904: b_142814ef0,
    5410737907: b_142814ef3,
    5410737920: b_142814f00,
    5410737932: b_142814f0c,
    5410737964: b_142814f2c,
    5410737974: b_142814f36,
    5410737986: b_142814f42,
    5410738011: b_142814f5b,
    5410738021: b_142814f65,
    5410738037: b_142814f75,
    5410738056: b_142814f88,
    5410738069: b_142814f95,
    5410738120: b_142814fc8,
    5410738132: b_142814fd4,
    5410738145: b_142814fe1,
    5410738374: b_1428150c6,
    5410738387: b_1428150d3,
    5410738439: b_142815107,
    5410738462: b_14281511e,
    5410738539: b_14281516b,
    5410738562: b_142815182,
    5410738595: b_1428151a3,
    5410738640: b_1428151d0,
    5410738674: b_1428151f2,
    5410738962: b_142815312,
    5410738989: b_14281532d,
    5410739050: b_14281536a,
    5410739056: b_142815370,
    5410739092: b_142815394,
    5410739156: b_1428153d4,
    5410739168: b_1428153e0,
    5410739228: b_14281541c,
    5410739232: b_142815420,
    5410739291: b_14281545b,
    5410739323: b_14281547b,
    5410739355: b_14281549b,
    5410739408: b_1428154d0,
    5410739433: b_1428154e9,
    5410739488: b_142815520,
    5410739503: b_14281552f,
    5410739512: b_142815538,
    5410739539: b_142815553,
    5410739557: b_142815565,
    5410739568: b_142815570,
    5410739573: b_142815575,
    5410739708: b_1428155fc,
    5410739723: b_14281560b,
    5410739848: b_142815688,
    5410739939: b_1428156e3,
    5410740053: b_142815755,
    5410740115: b_142815793,
    5410740177: b_1428157d1,
    5410740192: b_1428157e0,
    5410740205: b_1428157ed,
    5410740221: b_1428157fd,
    5410740233: b_142815809,
    5410740348: b_14281587c,
    5410740354: b_142815882,
    5410740368: b_142815890,
    5410740380: b_14281589c,
    5410740402: b_1428158b2,
    5410740428: b_1428158cc,
    5410740450: b_1428158e2,
    5410740466: b_1428158f2,
    5410740488: b_142815908,
    5410740493: b_14281590d,
    5410740507: b_14281591b,
    5410740519: b_142815927,
    5410740545: b_142815941,
    5410740557: b_14281594d,
    5410740579: b_142815963,
    5410740591: b_14281596f,
    5410740613: b_142815985,
    5410740665: b_1428159b9,
    5410740670: b_1428159be,
    5410740689: b_1428159d1,
    5410740719: b_1428159ef,
    5410740745: b_142815a09,
    5410740783: b_142815a2f,
    5410740813: b_142815a4d,
    5410740832: b_142815a60,
    5410740848: b_142815a70,
    5410740887: b_142815a97,
    5410740982: b_142815af6,
    5410740991: b_142815aff,
    5410741010: b_142815b12,
    5410741019: b_142815b1b,
    5410741038: b_142815b2e,
    5410741047: b_142815b37,
    5410741066: b_142815b4a,
    5410741075: b_142815b53,
    5410741094: b_142815b66,
    5410741106: b_142815b72,
    5410741128: b_142815b88,
    5410741140: b_142815b94,
    5410741162: b_142815baa,
    5410741260: b_142815c0c,
    5410741314: b_142815c42,
    5410741320: b_142815c48,
    5410741374: b_142815c7e,
    5410741380: b_142815c84,
    5410741395: b_142815c93,
    5410741401: b_142815c99,
    5410741419: b_142815cab,
    5410741425: b_142815cb1,
    5410741443: b_142815cc3,
    5410741449: b_142815cc9,
    5410741464: b_142815cd8,
    5410741470: b_142815cde,
    5410741482: b_142815cea,
    5410741488: b_142815cf0,
    5410741503: b_142815cff,
    5410741509: b_142815d05,
    5410741521: b_142815d11,
    5410741527: b_142815d17,
    5410741539: b_142815d23,
    5410741545: b_142815d29,
    5410741563: b_142815d3b,
    5410741569: b_142815d41,
    5410741587: b_142815d53,
    5410741593: b_142815d59,
    5410741611: b_142815d6b,
    5410741617: b_142815d71,
    5410741635: b_142815d83,
    5410741641: b_142815d89,
    5410741656: b_142815d98,
    5410741662: b_142815d9e,
    5410741674: b_142815daa,
    5410741677: b_142815dad,
    5410741692: b_142815dbc,
    5410741695: b_142815dbf,
    5410741710: b_142815dce,
    5410741713: b_142815dd1,
    5410741730: b_142815de2,
    5410741733: b_142815de5,
    5410741748: b_142815df4,
    5410741751: b_142815df7,
    5410741766: b_142815e06,
    5410741769: b_142815e09,
    5410741784: b_142815e18,
    5410741787: b_142815e1b,
    5410741802: b_142815e2a,
    5410741803: b_142815e2b,
    5410741805: b_142815e2d,
    5410741924: b_142815ea4,
    5410741946: b_142815eba,
    5410741958: b_142815ec6,
    5410741980: b_142815edc,
    5410742073: b_142815f39,
    5410742193: b_142815fb1,
    5410742212: b_142815fc4,
    5410742221: b_142815fcd,
    5410742240: b_142815fe0,
    5410742333: b_14281603d,
    5410742449: b_1428160b1,
    5410742468: b_1428160c4,
    5410742477: b_1428160cd,
    5410742496: b_1428160e0,
    5410742589: b_14281613d,
    5410742708: b_1428161b4,
    5410742730: b_1428161ca,
    5410742823: b_142816227,
    5410742948: b_1428162a4,
    5410742970: b_1428162ba,
    5410742982: b_1428162c6,
    5410743004: b_1428162dc,
    5410743097: b_142816339,
    5410743220: b_1428163b4,
    5410743246: b_1428163ce,
    5410743339: b_14281642b,
    5410743460: b_1428164a4,
    5410743482: b_1428164ba,
    5410743575: b_142816517,
    5410743700: b_142816594,
    5410743722: b_1428165aa,
    5410743734: b_1428165b6,
    5410743756: b_1428165cc,
    5410743849: b_142816629,
    5410743972: b_1428166a4,
    5410743994: b_1428166ba,
    5410745248: b_142816ba0,
    5410745406: b_142816c3e,
    5410745414: b_142816c46,
    5410745432: b_142816c58,
    5410745441: b_142816c61,
    5410745467: b_142816c7b,
    5410745489: b_142816c91,
    5410745613: b_142816d0d,
    5410745632: b_142816d20,
    5410745641: b_142816d29,
    5410745653: b_142816d35,
    5410745691: b_142816d5b,
    5410745701: b_142816d65,
    5410745717: b_142816d75,
    5410745733: b_142816d85,
    5410745753: b_142816d99,
    5410745800: b_142816dc8,
    5410745819: b_142816ddb,
    5410745832: b_142816de8,
    5410745858: b_142816e02,
    5410745927: b_142816e47,
    5410745969: b_142816e71,
    5410745995: b_142816e8b,
    5410746036: b_142816eb4,
    5410746053: b_142816ec5,
    5410746096: b_142816ef0,
    5410746152: b_142816f28,
    5410746165: b_142816f35,
    5410746220: b_142816f6c,
    5410746245: b_142816f85,
    5410746322: b_142816fd2,
    5410746336: b_142816fe0,
    5410746347: b_142816feb,
    5410746360: b_142816ff8,
    5410746369: b_142817001,
    5410746401: b_142817021,
    5410746411: b_14281702b,
    5410746423: b_142817037,
    5410746448: b_142817050,
    5410746458: b_14281705a,
    5410746474: b_14281706a,
    5410746499: b_142817083,
    5410746586: b_1428170da,
    5410746640: b_142817110,
    5410746693: b_142817145,
    5410746713: b_142817159,
    5410746797: b_1428171ad,
    5410746830: b_1428171ce,
    5410746840: b_1428171d8,
    5410746860: b_1428171ec,
    5410746902: b_142817216,
    5410746992: b_142817270,
    5410747005: b_14281727d,
    5410747290: b_14281739a,
    5410747317: b_1428173b5,
    5410747390: b_1428173fe,
    5410747392: b_142817400,
    5410747419: b_14281741b,
    5410747499: b_14281746b,
    5410747504: b_142817470,
    5410747563: b_1428174ab,
    5410747568: b_1428174b0,
    5410747632: b_1428174f0,
    5410747658: b_14281750a,
    5410747736: b_142817558,
    5410747752: b_142817568,
    5410747793: b_142817591,
    5410747983: b_14281764f,
    5410747994: b_14281765a,
    5410748093: b_1428176bd,
    5410748182: b_142817716,
    5410748299: b_14281778b,
    5410748373: b_1428177d5,
    5410748435: b_142817813,
    5410748454: b_142817826,
    5410748470: b_142817836,
    5410748482: b_142817842,
    5410748606: b_1428178be,
    5410748612: b_1428178c4,
    5410748624: b_1428178d0,
    5410748636: b_1428178dc,
    5410748658: b_1428178f2,
    5410748691: b_142817913,
    5410748700: b_14281791c,
    5410748719: b_14281792f,
    5410748728: b_142817938,
    5410748747: b_14281794b,
    5410748756: b_142817954,
    5410748775: b_142817967,
    5410748784: b_142817970,
    5410748803: b_142817983,
    5410748901: b_1428179e5,
    5410748955: b_142817a1b,
    5410748961: b_142817a21,
    5410749015: b_142817a57,
    5410749021: b_142817a5d,
    5410749075: b_142817a93,
    5410749081: b_142817a99,
    5410749135: b_142817acf,
    5410749141: b_142817ad5,
    5410749165: b_142817aed,
    5410749171: b_142817af3,
    5410749189: b_142817b05,
    5410749192: b_142817b08,
    5410749210: b_142817b1a,
    5410749213: b_142817b1d,
    5410749232: b_142817b30,
    5410749235: b_142817b33,
    5410749247: b_142817b3f,
    5410749250: b_142817b42,
    5410749272: b_142817b58,
    5410749275: b_142817b5b,
    5410749287: b_142817b67,
    5410749290: b_142817b6a,
    5410749312: b_142817b80,
    5410749313: b_142817b81,
    5410749315: b_142817b83,
    5410749441: b_142817c01,
    5410749463: b_142817c17,
    5410749553: b_142817c71,
    5410749678: b_142817cee,
    5410749768: b_142817d48,
    5410749886: b_142817dbe,
    5416415472: b_142d7f0f0,
    5416415538: b_142d7f132,
    5416415547: b_142d7f13b,
    5416415552: b_142d7f140,
    5416415573: b_142d7f155,
    5416415578: b_142d7f15a,
    5416415580: b_142d7f15c,
    5416415585: b_142d7f161,
    5416415590: b_142d7f166,
    5416415601: b_142d7f171,
    5416415606: b_142d7f176,
    5416415617: b_142d7f181,
    5416415620: b_142d7f184,
    5416415632: b_142d7f190,
    5416456784: b_142d89250,
    5416456848: b_142d89290,
    5416456855: b_142d89297,
    5416456874: b_142d892aa,
    5416456889: b_142d892b9,
    5416474608: b_142d8d7f0,
    5416474672: b_142d8d830,
    5416474679: b_142d8d837,
    5416474698: b_142d8d84a,
    5416474713: b_142d8d859,
}

def generate(roof,render_id=0,flag=0):
    return execute(roof,BLOCKS,CONSTANTS,render_id,flag)
