// VA 0x140bb4970, PDB extent 443 bytes
// country_core::systems::ivy::ivy_grower::get_wall_double_sided_normal
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_grower.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ivy::ivy_grower::get_wall_double_sided_normal
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_grower.rs
   Extent: 443 */

undefined8 * pdb_140bb4970(undefined8 *param_1,longlong param_2,undefined8 param_3,float *param_4)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  float fVar6;
  uint uVar7;
  ulonglong uVar8;
  float extraout_XMM0_Da;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uStack_90;
  float fStack_8c;
  undefined1 auStack_88 [8];
  uint uStack_80;
  
  uVar7 = pdb_1419a9060(param_2,param_3);
  fVar6 = _DAT_142e36f28;
  uVar8 = (ulonglong)uVar7;
  uVar4 = *(ulonglong *)(param_2 + 0x10);
  if (uVar4 <= uVar8 + 1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar8 + 1,uVar4,&UNK_14335e510);
  }
  lVar5 = *(longlong *)(param_2 + 8);
  uVar2 = *(undefined8 *)(lVar5 + uVar8 * 8);
  uVar3 = *(undefined8 *)(lVar5 + 8 + uVar8 * 8);
  fVar9 = (float)uVar3 - (float)uVar2;
  fVar10 = (float)((ulonglong)uVar3 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20);
  fVar11 = _DAT_142e36f28 / SQRT(fVar10 * fVar10 + fVar9 * fVar9);
  fVar9 = fVar11 * fVar9;
  fVar11 = fVar11 * fVar10;
  uStack_90 = (uint)fVar11 ^ _DAT_142e37820;
  fVar10 = *param_4;
  fVar1 = param_4[2];
  fStack_8c = fVar9;
  uVar7 = pdb_1419a9060(param_2,param_3);
  uVar8 = (ulonglong)uVar7;
  if (uVar8 < uVar4) {
    if (uVar8 + 1 < uVar4) {
      uVar2 = *(undefined8 *)(lVar5 + uVar8 * 8);
      uVar3 = *(undefined8 *)(lVar5 + 8 + uVar8 * 8);
      if (fVar11 * (fVar10 - (extraout_XMM0_Da * (float)uVar3 +
                             (fVar6 - extraout_XMM0_Da) * (float)uVar2)) <=
          fVar9 * (fVar1 - (extraout_XMM0_Da * (float)((ulonglong)uVar3 >> 0x20) +
                           (fVar6 - extraout_XMM0_Da) * (float)((ulonglong)uVar2 >> 0x20)))) {
        pdb_140df4520(param_1,&uStack_90);
      }
      else {
        pdb_140df4520(auStack_88,&uStack_90);
        *param_1 = CONCAT44(auStack_88._4_4_ ^ _UNK_142e37824,auStack_88._0_4_ ^ _DAT_142e37820);
        *(uint *)(param_1 + 1) = uStack_80 ^ 0x80000000;
      }
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar8 + 1,uVar4,&UNK_14335e4f8);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar8,uVar4,&UNK_14335e4e0);
}

