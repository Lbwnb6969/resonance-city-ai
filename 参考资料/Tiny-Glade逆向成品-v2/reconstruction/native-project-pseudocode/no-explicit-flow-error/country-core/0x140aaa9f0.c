// VA 0x140aaa9f0, PDB extent 381 bytes
// country_core::render::nani::instance_data::CurvedHalfTimberInstanceData::new_curved_xz
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/instance_data.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::nani::instance_data::CurvedHalfTimberInstanceData::new_curved_xz
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/instance_data.rs
   Extent: 381 */

undefined8 *
pdb_140aaa9f0(undefined8 *param_1,undefined8 *param_2,float param_3,float param_4,undefined4 param_5
             ,float param_6,float param_7,byte param_8)

{
  code *pcVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  param_4 = param_4 * _DAT_142e36f50;
  fVar7 = param_3 + param_4;
  fVar6 = (float)pub_142e329c0(((float)((uint)(param_7 - param_6) & _DAT_142e377e0) * fVar7 +
                               _DAT_142e36f28) / _DAT_142e382c0);
  iVar3 = 0;
  if (0.0 <= fVar6) {
    iVar3 = (int)(longlong)fVar6;
  }
  if (_DAT_142e46a48 < fVar6) {
    iVar3 = -1;
  }
  uVar4 = 1;
  if (1 < (uint)(iVar3 + *(int *)(&UNK_143049334 + (ulonglong)param_8 * 4))) {
    uVar4 = (iVar3 + *(int *)(&UNK_143049334 + (ulonglong)param_8 * 4)) - 1;
    iVar3 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    uVar4 = (0xffffffffU >> (~(byte)iVar3 & 0x1f)) + 1;
    if (uVar4 == 0) {
      pdb_142dc8400(&UNK_143048f60);
      pcVar1 = (code *)swi(3);
      puVar2 = (undefined8 *)(*pcVar1)();
      return puVar2;
    }
  }
  uVar5 = 0;
  for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
    uVar5 = uVar5 + 1;
  }
  uVar4 = 2;
  if (2 < uVar5) {
    uVar4 = uVar5;
  }
  uVar5 = 5;
  if (uVar4 < 5) {
    uVar5 = uVar4;
  }
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(float *)(param_1 + 2) = param_3 - param_4;
  *(float *)((longlong)param_1 + 0x14) = fVar7;
  *(float *)(param_1 + 3) = param_6;
  *(float *)((longlong)param_1 + 0x1c) = param_7;
  param_1[4] = 0x100000000;
  *(undefined4 *)(param_1 + 5) = param_5;
  *(uint *)((longlong)param_1 + 0x2c) = (uint)param_8;
  *(uint *)(param_1 + 6) = uVar5;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}

