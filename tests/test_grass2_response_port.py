"""Compare the actual shader include against recovered Grass2 byte semantics."""
from pathlib import Path
import math
import re

ROOT = Path(__file__).resolve().parents[1]
SHADERS = ROOT / "参考资料/Tiny-Glade逆向成品-v2/reconstruction/shaders-source/glsl/country-core/compiled"
card = (SHADERS / "grass2/card_splats/000.comp").read_text(encoding="utf-8")
sun = (SHADERS / "deferred/grass_light_sun_sky/001.frag").read_text(encoding="utf-8")
include = (ROOT / "scripts/visual/shaders/creation_grass2_response.gdshaderinc").read_text(encoding="utf-8")

# Read the recovered shader, not the CPU reference's already-normalized W.
byte_to_push = float(re.search(r"float _2161 = clamp\(_2100 \* ([0-9.]+)", card)[1])
byte_to_tip = float(re.search(r"float _2102 = _2100 \* ([0-9.]+)", card)[1])
assert "1.11449992656707763671875" in card
assert "0.90909087657928466796875" in sun

# Execute the three scalar bodies from the product include itself. They only use
# float arithmetic/clamp; this avoids maintaining a second copy of the port.
scope = {"clamp": lambda x, lo, hi: min(hi, max(lo, x))}
for name, args, body in re.findall(r"float (grass2_\w+)\(([^)]*)\)\s*\{([^}]+)\}", include):
    params = ",".join(arg.strip().split()[-1] for arg in args.split(","))
    statements = [re.sub(r"^float\s+", "", s.strip()) for s in body.split(";") if s.strip()]
    exec(f"def {name}({params}):\n" + "\n".join("    " + s for s in statements), scope)

checks = 0
max_error = 0.0
for byte in range(256):
    tip = byte / 255.0
    for height in (0.0, 0.1, 0.25, 0.5, 0.75, 0.9, 1.0):
        expected = 4.0 * height * (1.0 - height) * min(1.0, byte * byte_to_push) ** 2
        actual = scope["grass2_object_push"](height, tip)
        assert math.isclose(actual, expected, abs_tol=1e-12), (byte, height, actual, expected)
        assert 0.0 <= actual <= 1.0
        checks += 1
    for wind, width in ((-0.09, 0.7), (0.0, 1.0), (0.09, 1.3)):
        expected = -wind * (byte * byte_to_tip) ** 2 * 0.25 * 1.1144999265670776 * width
        actual = scope["grass2_wind_displacement"](wind, tip, width)
        error = abs(actual - expected)
        max_error = max(max_error, error)
        assert error < 5e-9, (byte, actual, expected)
        checks += 1
for step in range(201):
    ndotl = step / 100.0 - 1.0
    expected = min(1.0, max(0.0, (ndotl + 0.10000000149011612) * 0.9090908765792847))
    assert scope["grass2_sun_wrap"](ndotl) == expected
    checks += 1
print(f"GRASS2_RESPONSE_PORT PASS {checks}; all 256 packed W values; wind normalization error {max_error:.3g}")
print("Oracle: recovered card_splats 326/327/354/367; CPU reference push normalization is not used.")
