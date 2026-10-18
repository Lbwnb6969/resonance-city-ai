// VA 0x140ac6a10, PDB extent 1030 bytes
// country_core::systems::camera_rig::walk::impl$2::constrain_to_be_above_terrain
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/walk.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::camera_rig::walk::impl$2::constrain_to_be_above_terrain
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/camera_rig/walk.rs
   Extent: 1030 */

void pdb_140ac6a10(longlong param_1,undefined4 *param_2,undefined8 param_3,longlong param_4,
                  char param_5)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  ulonglong uStack_108;
  uint uStack_100;
  undefined8 *puStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  float fStack_c8;
  int iStack_c4;
  undefined4 *puStack_b0;
  ulonglong uStack_a8;
  uint uStack_a0;
  undefined1 auVar16 [16];
  
  lVar10 = *(longlong *)(param_1 + 0x10) << 4;
  puVar7 = *(undefined8 **)(param_1 + 8);
  puStack_b0 = param_2;
  do {
    if (lVar10 == 0) {
      uStack_120 = &UNK_14337fa53;
      uStack_118 = 0x22;
      uStack_114 = 0;
      puStack_f8 = &uStack_120;
      pcStack_f0 = pdb_1402ed400;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14337f99a,&puStack_f8,&UNK_14337fa18);
    }
    puVar1 = puVar7 + 2;
    puVar8 = (undefined4 *)(**(code **)(puVar7[1] + 0x40))(*puVar7);
    puVar7 = (undefined8 *)(param_2 + 6);
    param_2 = puVar8;
    (*(code *)*puVar7)(&puStack_f8);
    puVar5 = puStack_b0;
    lVar10 = lVar10 + -0x10;
    puVar7 = puVar1;
  } while ((puVar8 == (undefined4 *)0x0) ||
          (pcStack_f0 != (code *)0x2e441b8be050d85b ||
           puStack_f8 != (undefined8 *)0x1d5a207d10288a54));
  uVar14 = *puVar8;
  fVar19 = (float)puVar8[1];
  uVar2 = puVar8[2];
  uVar9 = 0x30cf;
  if (*(char *)(param_1 + 0x54) != '\0') {
    uVar9 = 0;
  }
  *(undefined1 *)(param_1 + 0x38) = 0x11;
  auVar15._4_4_ = uVar14;
  auVar15._0_4_ = uVar2;
  auVar15._8_8_ = 0;
  auVar15 = maxps(_DAT_14304ac00,auVar15);
  iVar11 = -(uint)(_DAT_14304ac10 < auVar15._0_4_);
  iVar12 = -(uint)(_UNK_14304ac14 < auVar15._4_4_);
  auVar17._4_4_ = iVar12;
  auVar17._0_4_ = iVar11;
  auVar17._8_4_ = iVar12;
  auVar17._12_4_ = iVar12;
  auVar16._8_8_ = auVar17._8_8_;
  auVar16._4_4_ = iVar11;
  auVar16._0_4_ = iVar11;
  uVar6 = movmskpd(0,auVar16);
  fVar18 = _DAT_14304ac20;
  if ((uVar6 & 2) == 0) {
    fVar18 = auVar15._4_4_;
  }
  fVar20 = fVar19 + _DAT_142e36f38;
  auVar16 = ZEXT416((uint)_DAT_14304ac20);
  if ((uVar6 & 1) == 0) {
    auVar16 = auVar15;
  }
  fVar19 = _DAT_14304abf0 + fVar19 + _DAT_14304abf4;
  uStack_120 = (undefined *)CONCAT44(fVar20,fVar18);
  uStack_118 = auVar16._0_4_;
  uStack_114 = (undefined4)_DAT_142f61040;
  uVar3 = uStack_114;
  uStack_110 = (undefined4)((ulonglong)_DAT_142f61040 >> 0x20);
  uVar4 = uStack_110;
  uStack_10c = 0x80000000;
  uStack_108 = (ulonglong)_DAT_142e36f3c;
  uStack_100 = uStack_100 & 0xffff0000;
  uStack_a0 = uStack_100;
  uStack_a8 = uStack_108;
  pdb_1409ed190(&puStack_f8,puStack_b0,&uStack_120,_DAT_14300a334,&uStack_a8,0x20);
  if (iStack_c4 != 2) {
    fVar13 = (fVar20 - fStack_c8) + _DAT_14300c284;
    fVar18 = fVar13;
    if (fVar13 <= fVar19) {
      fVar18 = fVar19;
    }
    fVar19 = (float)(~-(uint)NAN(fVar19) & (uint)fVar18 | -(uint)NAN(fVar19) & (uint)fVar13);
    *(undefined1 *)(param_1 + 0x38) = 0xb;
  }
  uStack_120 = (undefined *)CONCAT44(fVar20,uVar14);
  uStack_10c = 0x80000000;
  uStack_118 = uVar2;
  uStack_114 = uVar3;
  uStack_110 = uVar4;
  pdb_1409ed190(&puStack_f8,puVar5,&uStack_120,_DAT_14300a334,&uStack_108,uVar9);
  if ((iStack_c4 != 2) && (fVar19 < (fVar20 - fStack_c8) + _DAT_14300c284)) {
    *(undefined8 *)(param_1 + 0x48) = uStack_e8;
    *(undefined8 **)(param_1 + 0x38) = puStack_f8;
    *(code **)(param_1 + 0x40) = pcStack_f0;
  }
  puStack_f8 = (undefined8 *)(param_4 + 0x20);
  puVar7 = (undefined8 *)(param_4 + 0x28);
  if (*(char *)(param_4 + 0x298) == '\0') {
    puVar7 = (undefined8 *)(param_4 + 0x10);
    puStack_f8 = (undefined8 *)(param_4 + 8);
  }
  pcStack_f0 = (code *)*puVar7;
  puStack_f8 = (undefined8 *)*puStack_f8;
  if (param_5 == '\0') {
    pdb_140a7d8d0(&puStack_f8,(undefined8 *)(param_4 + 0x10),puVar8[2],_DAT_143006a28,0x43020000);
  }
  uVar14 = pdb_140de93b0();
  puVar8[1] = uVar14;
  return;
}

