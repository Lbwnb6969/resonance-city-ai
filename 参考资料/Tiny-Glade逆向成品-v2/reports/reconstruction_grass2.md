# Grass2 card-splat runtime reconstruction

This delivery includes a standalone CPU reference for the per-card Grass2
transform in `tools/grass2_runtime_reference.py`. It is derived from the
recovered `card_splats/000.comp` and the matching shadow prepass. The code
decodes the four packed clump words and card point word, rotates/scales the
plant offset, applies the removal mask and its deterministic hash discard,
performs object push, applies wind and optional terrain following (including
the large-world bindless-heightmap UV branch), and returns
the resulting world position plus all sampled UVs and flags.

The implementation accepts texture callbacks, so it runs without Vulkan and
can be used with a small CPU image sampler or constant test textures. The CLI
uses flat textures and is suitable for reproducing packed-record examples.

## Verification

`tools/grass2_runtime_verify.py` passes four numerical vectors: the packed
point/rotation path, all three removal/object-push/terrain switches, the
large-world terrain UV branch, and the red-channel removal discard path. It
also matches the shipped PE/PDB native
orchestration functions by address, procedure extent and byte hash:

| Function | VA | Extent |
|---|---:|---:|
| `grass2_card_splat` | `0x140b20150` | 3594 bytes |
| `grass2_compute_main` | `0x140b20f60` | 1674 bytes |
| `grass2_compute_shadow` | `0x140b215f0` | 1626 bytes |

The native listings show the original render graph dispatches `card_splats`,
`card_splat_cull`, `card_splats_clear`, `build_draws`, and the corresponding
SSBO read/write resources. They are retained under
`evidence/reconstruction_grass2/native/`. The numerical transform itself is a
GLSL-derived CPU reference; these native functions schedule GPU passes and do
not expose a callable CPU equivalent.

## Scope boundary

This closes the per-card transform and its packed data semantics. The full
GPU scheduler (point search, workgroup scans, depth/v-buffer atomics, indirect
draw construction, and raster resolve) remains a separate GPU pipeline. A
texture callback may emulate those resources, but the reference does not claim
to reproduce GPU wave scheduling or final pixels.
