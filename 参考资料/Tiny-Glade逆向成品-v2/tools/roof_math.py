"""Two recovered Tiny Glade roof formulas and isolated x86-64 verification.

Formulas are inferred from the matched EXE's machine instructions, not source.
Verification emulates the original pure routines with Unicorn; it never starts
the game. This validates these numerical routines, not complete roof generation.
python roof_math.py --verify EXE --out NEW_REPORT.json
Dependencies for verification: pefile, unicorn. Formulas use only stdlib.
"""
import argparse
import hashlib
import json
import math
import pathlib
import struct

EXE_SHA256 = '4627ec9f9a8abe03dd30751f6a8e22868e0dfddf9f40029a1b848a3773495fe5'
EAVE = 0x140B76870
RIDGE = 0x140B770A0


def clamp(x):
    return max(0.0, min(1.0, x))


def smoothstep(x):
    return x * x * (3.0 - 2.0 * x)


def eave_length_ws(height_01, eave_length_01):
    return 0.75 * eave_length_01 * (1.0 + math.sqrt(height_01))


def ridge_length_01_from_rectangle_ratio(width, height):
    # Finite positive dimensions are the validated input domain.
    aspect = max(width / height, height / width)
    size_bias = smoothstep(clamp((max(width, height) - 2.25) / 5.25))
    return smoothstep(clamp((aspect + 1.5 * size_bias - 1.5) / 1.5))


def f32(x):
    return struct.unpack('<f', struct.pack('<f', x))[0]


def verify(path):
    import pefile
    import unicorn as u
    import unicorn.x86_const as x
    with path.open('rb') as file:
        sha = hashlib.file_digest(file, 'sha256').hexdigest()
    if sha != EXE_SHA256:
        raise ValueError('EXE identity differs from recovered routine addresses')
    pe = pefile.PE(str(path), fast_load=True)
    cpu = u.Uc(u.UC_ARCH_X86, u.UC_MODE_64)
    base = pe.OPTIONAL_HEADER.ImageBase
    image_size = (pe.OPTIONAL_HEADER.SizeOfImage + 4095) & ~4095
    cpu.mem_map(base, image_size)
    for section in pe.sections:
        cpu.mem_write(base + section.VirtualAddress, section.get_data())
    cpu.mem_map(0x100000, 0x20000)
    cpu.mem_map(0x200000, 0x1000)
    cpu.reg_write(x.UC_X86_REG_CR4, cpu.reg_read(x.UC_X86_REG_CR4) | 0x600)

    def run(address, xmm0=0, xmm1=0):
        cpu.mem_write(0x10fff8, struct.pack('<Q', 0x10000))
        cpu.reg_write(x.UC_X86_REG_RSP, 0x10fff8)
        cpu.reg_write(x.UC_X86_REG_RCX, 0x200000)
        for reg in [x.UC_X86_REG_XMM0, x.UC_X86_REG_XMM1, x.UC_X86_REG_XMM2,
                    x.UC_X86_REG_XMM3, x.UC_X86_REG_XMM4, x.UC_X86_REG_XMM5, x.UC_X86_REG_XMM6]:
            cpu.reg_write(reg, 0)
        cpu.reg_write(x.UC_X86_REG_XMM0, struct.unpack('<I', struct.pack('<f', xmm0))[0])
        cpu.reg_write(x.UC_X86_REG_XMM1, struct.unpack('<I', struct.pack('<f', xmm1))[0])
        cpu.emu_start(address, 0x10000, count=1000)
        if cpu.reg_read(x.UC_X86_REG_RIP) != 0x10000:
            raise ValueError('routine did not return within 1000 emulated instructions')
        return struct.unpack('<f', struct.pack('<I', cpu.reg_read(x.UC_X86_REG_XMM0) & 0xffffffff))[0]

    checks = []
    for height in [0.0, 0.04, 0.25, 0.5, 1.0]:
        for eave in [0.0, 0.1, 0.2, 0.5, 1.0]:
            cpu.mem_write(0x200008, struct.pack('<f', height))
            cpu.mem_write(0x200014, struct.pack('<f', eave))
            observed = run(EAVE)
            expected = eave_length_ws(f32(height), f32(eave))
            checks.append({'routine': hex(EAVE), 'height_01': height, 'eave_01': eave,
                           'emulated_original': observed, 'formula': expected,
                           'absolute_error': abs(observed - expected)})
    for width in [0.5, 1.0, 2.25, 3.0, 5.0, 7.5, 15.0]:
        for height in [0.5, 1.0, 2.25, 5.0, 15.0]:
            observed = run(RIDGE, width, height)
            expected = ridge_length_01_from_rectangle_ratio(f32(width), f32(height))
            checks.append({'routine': hex(RIDGE), 'width': width, 'height': height,
                           'emulated_original': observed, 'formula': expected,
                           'absolute_error': abs(observed - expected)})
    max_error = max(row['absolute_error'] for row in checks)
    return {'exe_sha256': sha, 'authority': 'controlled-instruction-emulation',
            'emulator': 'Unicorn ' + u.__version__, 'checks': len(checks),
            'max_absolute_error': max_error, 'tolerance': 2e-6,
            'passed': max_error < 2e-6, 'results': checks,
            'limitations': ['Finite sampled inputs, not exhaustive floating-point proof.',
                            'No game process or full roof pipeline was executed.',
                            'The mathematical formulas use Python double precision; EXE uses SSE f32.',
                            'height/eave field meaning comes from matching function names and scene schema.']}


def main():
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--verify', type=pathlib.Path, required=True)
    p.add_argument('--out', type=pathlib.Path, required=True)
    args = p.parse_args()
    result = verify(args.verify)
    args.out.parent.mkdir(parents=True, exist_ok=True)
    with args.out.open('x', encoding='utf-8') as f:
        json.dump(result, f, ensure_ascii=False, indent=2)
    print(json.dumps({k: result[k] for k in ['checks', 'max_absolute_error', 'passed']}))
    return 0 if result['passed'] else 1


if __name__ == '__main__':
    raise SystemExit(main())
