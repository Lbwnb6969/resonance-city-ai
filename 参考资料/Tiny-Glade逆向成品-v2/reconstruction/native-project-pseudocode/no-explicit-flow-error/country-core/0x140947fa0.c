// VA 0x140947fa0, PDB extent 350 bytes
// country_core::render::nani::buffers::GpuInstance::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/buffers.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::nani::buffers::GpuInstance::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/buffers.rs
   Extent: 350 */

undefined8 *
pdb_140947fa0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,undefined2 param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = *_DAT_143cad8c0;
  if (uVar4 == 0) {
    uVar4 = pdb_142dec140();
  }
  if ((uVar4 >> 0x37 & 1) == 0) {
    uVar3 = (uint)param_3;
    uVar1 = (ushort)(param_3 >> 0x10) & 0x8000;
    uVar6 = uVar3 & 0x7f800000;
    uVar5 = uVar3 & 0x7fffff;
    if (uVar6 == 0x7f800000) {
      uVar1 = (ushort)(uVar5 >> 0xd) | uVar1 | (ushort)((param_3 & 0x7fffff) != 0) << 9 | 0x7c00;
    }
    else if (uVar6 < 0x47000001) {
      if (uVar6 < 0x38800000) {
        if (0x32ffffff < uVar6) {
          uVar5 = uVar5 | 0x800000;
          uVar2 = (ushort)(uVar5 >> (0x7eU - (char)(uVar6 >> 0x17) & 0x1f));
          uVar3 = 0x1d - (uVar6 >> 0x17) & 0x1f;
          if ((uVar5 >> uVar3 & 1) != 0) {
            uVar2 = (uVar2 + 1) - (ushort)(((3 << (sbyte)uVar3) - 1U & uVar5) == 0);
          }
          uVar1 = uVar2 | uVar1;
        }
      }
      else {
        uVar1 = (ushort)((param_3 & 0x2fff) != 0 & (byte)(uVar3 >> 0xc)) +
                ((short)(uVar6 >> 0xd) + (short)(uVar5 >> 0xd) + 0x4000U | uVar1);
      }
    }
    else {
      uVar1 = uVar1 | 0x7c00;
    }
  }
  else {
    uVar1 = pdb_14094f6a0(param_3);
  }
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  *(ushort *)((longlong)param_1 + 0xc) = uVar1;
  *(undefined2 *)((longlong)param_1 + 0xe) = param_4;
  return param_1;
}

