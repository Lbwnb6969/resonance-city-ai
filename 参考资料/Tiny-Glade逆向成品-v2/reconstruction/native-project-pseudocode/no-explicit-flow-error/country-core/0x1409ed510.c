// VA 0x1409ed510, PDB extent 1171 bytes
// country_core::systems::collision::world::RaycastWorld::spherecast
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::collision::world::RaycastWorld::spherecast
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 1171 */

undefined8 *
pdb_1409ed510(undefined8 *param_1,longlong param_2,float *param_3,undefined4 param_4,
             undefined4 *param_5,uint param_6)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  longlong lVar8;
  uint uVar9;
  code *pcVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  undefined4 uVar20;
  uint uVar21;
  longlong lVar22;
  float fVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  uint uVar30;
  undefined4 uVar31;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined1 uStack_1bc;
  undefined1 uStack_1bb;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  ulonglong uStack_1b0;
  undefined8 uStack_1a8;
  float fStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  float fStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  char cStack_124;
  undefined8 auStack_120 [2];
  undefined8 uStack_110;
  undefined4 uStack_100;
  undefined4 uStack_f4;
  
  uVar15 = _UNK_142e4e658;
  uVar14 = _DAT_142e4e650;
  uVar13 = _UNK_142e37824;
  uVar12 = _DAT_142e37820;
  uVar27 = *param_5;
  uVar2 = param_5[1];
  fVar3 = *param_3;
  uStack_198 = *(undefined8 *)(param_3 + 1);
  uStack_190 = 0;
  uVar6 = *(undefined1 *)(param_5 + 2);
  uVar7 = *(undefined1 *)((longlong)param_5 + 9);
  uVar31 = *(undefined4 *)(param_1 + 6);
  uVar5 = *(undefined8 *)(param_3 + 3);
  fVar4 = param_3[5];
  lVar8 = *(longlong *)(param_2 + 8);
  uStack_1b0 = *(ulonglong *)(param_2 + 0x10);
  fVar26 = *(float *)(param_1 + 3);
  fVar28 = *(float *)((longlong)param_1 + 0x1c);
  fVar29 = *(float *)(param_1 + 4);
  fVar23 = *(float *)((longlong)param_1 + 0x24);
  uVar30 = *(uint *)(param_1 + 5);
  uVar24 = *(uint *)((longlong)param_1 + 0x2c);
  lVar22 = 0x20;
  uVar20 = 2;
  uVar21 = 0;
  do {
    lVar22 = -lVar22;
    uVar25 = uVar21;
    do {
      if (lVar22 == -0x3cb0) {
        *(float *)(param_1 + 3) = fVar26;
        *(float *)((longlong)param_1 + 0x1c) = fVar28;
        *(float *)(param_1 + 4) = fVar29;
        *(float *)((longlong)param_1 + 0x24) = fVar23;
        *(uint *)(param_1 + 5) = uVar30;
        *(uint *)((longlong)param_1 + 0x2c) = uVar24;
        *(undefined4 *)(param_1 + 6) = uVar31;
        *(undefined4 *)((longlong)param_1 + 0x34) = uVar20;
        return param_1;
      }
      uVar21 = uVar25 + 1;
      lVar22 = lVar22 + -0x390;
      uVar9 = uVar25 & 0x1f;
      uVar25 = uVar21;
    } while ((param_6 >> uVar9 & 1) == 0);
    lVar1 = (param_2 - lVar22) + -0x390;
    uStack_188 = uVar14;
    uStack_180 = uVar15;
    uStack_174 = (float)uStack_198;
    uStack_170 = uStack_198._4_4_;
    uStack_110 = 0;
    uStack_100 = 0;
    uStack_f4 = 0;
    auStack_120[0] = 0;
    uStack_1c4 = uVar27;
    uStack_1c0 = uVar2;
    uStack_1bc = uVar6;
    uStack_1bb = uVar7;
    uStack_1b8 = param_4;
    uStack_1b4 = param_4;
    uStack_1a8 = uVar5;
    fStack_1a0 = fVar4;
    fStack_178 = fVar3;
    pdb_141a08490(&uStack_160,(param_2 - lVar22) + -0x360,param_2 + 0x3d80,lVar1,&uStack_188,
                  &uStack_1a8,&uStack_1b4,&UNK_1430339a8,&uStack_1c4,auStack_120);
    uVar16 = uStack_158;
    if (cStack_124 != '\x04') {
      puVar17 = (ulonglong *)pdb_140cd4bd0(lVar1,uStack_160,uStack_15c);
      if (puVar17 == (ulonglong *)0x0) {
        *(float *)(param_1 + 3) = fVar26;
        *(float *)((longlong)param_1 + 0x1c) = fVar28;
        *(float *)(param_1 + 4) = fVar29;
        *(float *)((longlong)param_1 + 0x24) = fVar23;
        *(uint *)(param_1 + 5) = uVar30;
        *(uint *)((longlong)param_1 + 0x2c) = uVar24;
        *(undefined4 *)(param_1 + 6) = uVar31;
        *(undefined4 *)((longlong)param_1 + 0x34) = uVar20;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143033b20);
      }
      uVar18 = *puVar17 & 0xffffffff;
      if (((uStack_1b0 <= uVar18) || (lVar8 == 0)) ||
         (*(uint *)(lVar8 + 0x20 + uVar18 * 0x28) != ((uint)(*puVar17 >> 0x20) | 1))) {
        *(float *)(param_1 + 3) = fVar26;
        *(float *)((longlong)param_1 + 0x1c) = fVar28;
        *(float *)(param_1 + 4) = fVar29;
        *(float *)((longlong)param_1 + 0x24) = fVar23;
        *(uint *)(param_1 + 5) = uVar30;
        *(uint *)((longlong)param_1 + 0x2c) = uVar24;
        pdb_142dc664f(&UNK_143076e28,0x18,&UNK_143033b38);
        pcVar10 = (code *)swi(3);
        puVar19 = (undefined8 *)(*pcVar10)();
        return puVar19;
      }
      fVar26 = (uStack_198._4_4_ - fStack_14c) * fStack_134 +
               (fVar3 - fStack_154) * fStack_13c + ((float)uStack_198 - fStack_150) * fStack_138;
      fVar23 = fStack_13c;
      if (fVar26 < 0.0) {
        fVar23 = (float)((uint)fStack_13c ^ uVar12);
      }
      puVar19 = (undefined8 *)(uVar18 * 0x28 + lVar8);
      uVar30 = (uint)(fVar26 < 0.0);
      uVar24 = (int)(uVar30 << 0x1f) >> 0x1f;
      uVar25 = (int)(uVar30 << 0x1f) >> 0x1f;
      uVar30 = ((uint)fStack_138 ^ uVar12) & uVar24 | ~uVar24 & (uint)fStack_138;
      uVar24 = ((uint)fStack_134 ^ uVar13) & uVar25 | ~uVar25 & (uint)fStack_134;
      param_1[2] = puVar19[2];
      uVar11 = puVar19[1];
      *param_1 = *puVar19;
      param_1[1] = uVar11;
      uVar20 = 0;
      uVar27 = uVar16;
      fVar26 = fStack_154;
      fVar28 = fStack_150;
      fVar29 = fStack_14c;
      uVar31 = uVar16;
    }
    lVar22 = -lVar22;
    param_4 = uStack_1b8;
  } while( true );
}

