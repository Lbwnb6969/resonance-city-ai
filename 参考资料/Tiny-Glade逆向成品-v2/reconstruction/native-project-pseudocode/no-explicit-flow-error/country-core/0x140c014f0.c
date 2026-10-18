// VA 0x140c014f0, PDB extent 488 bytes
// country_core::resources::stairs::stairs_assembly_params::PlayermadeStairsAssemblyParams::length_ws
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_assembly_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_assembly_params::PlayermadeStairsAssemblyParams::length_ws
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_assembly_params.rs
   Extent: 488 */

float pdb_140c014f0(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  longlong lStack_c8;
  longlong lStack_c0;
  undefined4 *puStack_b8;
  undefined4 *puStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  undefined8 uStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  undefined4 auStack_78 [3];
  float fStack_6c;
  longlong *plStack_68;
  undefined8 uStack_54;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined8 uStack_40;
  
  lStack_c8 = *(longlong *)(param_1 + 8);
  uStack_a0 = *(ulonglong *)(param_1 + 0x10);
  lStack_c0 = lStack_c8 + uStack_a0 * 8;
  puStack_b8 = *(undefined4 **)(param_1 + 0x40);
  uVar3 = *(ulonglong *)(param_1 + 0x48);
  puStack_b0 = puStack_b8 + uVar3;
  if (uVar3 < uStack_a0) {
    uStack_a0 = uVar3;
  }
  uStack_98 = uStack_98 & 0xffffffff00000000;
  fVar9 = 0.0;
  if (uStack_a0 != 0) {
    uStack_a8 = 1;
    pdb_140df4540(&fStack_d4,lStack_c8,*puStack_b8);
    auStack_78[0] = 1;
    fStack_6c = fStack_cc;
    plStack_68 = &lStack_c8;
    pdb_140c9d6e0(&uStack_54,auStack_78);
    puVar5 = puStack_b8;
    lVar4 = lStack_c8;
    fStack_88 = fStack_44;
    fStack_84 = (float)uStack_40;
    fStack_80 = (float)((ulonglong)uStack_40 >> 0x20);
    uStack_98 = uStack_54;
    uVar6 = uStack_98;
    fStack_90 = fStack_4c;
    fStack_8c = fStack_48;
    uStack_98._0_4_ = (int)uStack_54;
    if ((int)uStack_98 == 1) {
      uStack_98._4_4_ = (float)((ulonglong)uStack_54 >> 0x20);
      fVar9 = SQRT((fStack_48 - fStack_80) * (fStack_48 - fStack_80) +
                   (uStack_98._4_4_ - fStack_44) * (uStack_98._4_4_ - fStack_44) +
                   (fStack_4c - fStack_84) * (fStack_4c - fStack_84));
      uStack_98 = uVar6;
      if (uStack_a8 < uStack_a0) {
        do {
          lVar1 = uStack_a8 * 8;
          puVar2 = puVar5 + uStack_a8;
          uStack_a8 = uStack_a8 + 1;
          pdb_140df4540(&fStack_d4,lVar4 + lVar1,*puVar2);
          fStack_90 = fStack_84;
          fVar7 = fStack_88;
          fStack_88 = fStack_d4;
          fStack_84 = fStack_d0;
          uStack_98 = CONCAT44(fVar7,(int)uStack_98);
          fStack_8c = fStack_80;
          fVar7 = fVar7 - fStack_d4;
          fVar8 = fStack_90 - fStack_d0;
          fVar9 = fVar9 + SQRT((fStack_80 - fStack_cc) * (fStack_80 - fStack_cc) +
                               fVar7 * fVar7 + fVar8 * fVar8);
          fStack_80 = fStack_cc;
        } while (uStack_a8 < uStack_a0);
      }
    }
  }
  return fVar9;
}

