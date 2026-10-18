// VA 0x1409ef140, PDB extent 822 bytes
// country_core::systems::collision::world::RaycastWorld::legacy_spherecast
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::collision::world::RaycastWorld::legacy_spherecast
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/collision/world.rs
   Extent: 822 */

undefined4 *
pdb_1409ef140(undefined4 *param_1,longlong param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined4 *puVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uStack_1c0;
  float afStack_1bc [2];
  undefined2 uStack_1b4;
  ulonglong uStack_1b0;
  undefined8 uStack_1a8;
  float fStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  float fStack_180;
  byte abStack_160 [16];
  undefined8 auStack_150 [2];
  undefined8 uStack_140;
  undefined4 uStack_130;
  undefined4 uStack_124;
  undefined4 uStack_118;
  undefined4 uStack_114;
  float fStack_110;
  char cStack_dc;
  
  param_1[0xc] = 2;
  uVar10 = _UNK_142e4e658;
  uVar9 = _DAT_142e4e650;
  abStack_160[0] = 0;
  abStack_160[1] = 1;
  abStack_160[2] = 3;
  abStack_160[3] = 7;
  abStack_160[4] = 6;
  abStack_160[5] = 4;
  abStack_160[6] = 0xb;
  abStack_160[7] = 2;
  abStack_160[8] = 0xc;
  abStack_160[9] = 0xd;
  fVar2 = *(float *)(param_3 + 1);
  fVar3 = *(float *)((longlong)param_3 + 0x14);
  uVar4 = *param_3;
  uVar5 = *(undefined8 *)((longlong)param_3 + 0xc);
  fVar19 = (float)*(undefined8 *)(param_1 + 6);
  fVar20 = (float)((ulonglong)*(undefined8 *)(param_1 + 6) >> 0x20);
  fVar18 = (float)param_1[8];
  lVar6 = *(longlong *)(param_2 + 8);
  uStack_1b0 = *(ulonglong *)(param_2 + 0x10);
  uVar15 = 2;
  lVar16 = 0;
  fVar17 = _DAT_142e36f28;
  do {
    lVar1 = param_2 + 0x20 + (ulonglong)abStack_160[lVar16] * 0x390;
    uStack_198 = uVar9;
    uStack_190 = uVar10;
    afStack_1bc[1] = 0.0;
    uStack_1b4 = 0x101;
    uStack_140 = 0;
    uStack_130 = 0;
    uStack_124 = 0;
    auStack_150[0] = 0;
    uStack_1c0 = param_4;
    afStack_1bc[0] = fVar17;
    uStack_1a8 = uVar5;
    fStack_1a0 = fVar3;
    uStack_188 = uVar4;
    fStack_180 = fVar2;
    pdb_141a08490(&uStack_118,param_2 + 0x20 + (ulonglong)abStack_160[lVar16] * 0x390 + 0x30,
                  param_2 + 0x3d80,lVar1,&uStack_198,&uStack_1a8,&uStack_1c0,&UNK_1430339a8,
                  afStack_1bc,auStack_150);
    fVar11 = fStack_110;
    if (cStack_dc != '\x04') {
      puVar13 = (ulonglong *)pdb_140cd4bd0(lVar1,uStack_118,uStack_114);
      if (puVar13 == (ulonglong *)0x0) {
        param_1[6] = fVar19;
        param_1[7] = fVar20;
        param_1[8] = fVar18;
        param_1[0xc] = uVar15;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143033c58);
      }
      uVar14 = *puVar13 & 0xffffffff;
      if (((uStack_1b0 <= uVar14) || (lVar6 == 0)) ||
         (*(uint *)(lVar6 + 0x20 + uVar14 * 0x28) != ((uint)(*puVar13 >> 0x20) | 1))) {
        pdb_142dc664f(&UNK_143076e28,0x18,&UNK_143033c70);
        goto LAB_1409ef3dc;
      }
      puVar12 = (undefined4 *)(uVar14 * 0x28 + lVar6);
      fVar19 = fVar11 * (float)uVar5 + (float)uVar4;
      fVar20 = fVar11 * (float)((ulonglong)uVar5 >> 0x20) + (float)((ulonglong)uVar4 >> 0x20);
      fVar18 = fVar3 * fVar11 + fVar2;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar12 + 4);
      uVar15 = puVar12[1];
      uVar7 = puVar12[2];
      uVar8 = puVar12[3];
      *param_1 = *puVar12;
      param_1[1] = uVar15;
      param_1[2] = uVar7;
      param_1[3] = uVar8;
      param_1[0xb] = 0;
      *(undefined8 *)(param_1 + 9) = 0;
      uVar15 = 0;
      fVar17 = fVar11;
    }
    lVar16 = lVar16 + 1;
    if (lVar16 == 10) {
LAB_1409ef3dc:
      *(ulonglong *)(param_1 + 6) = CONCAT44(fVar20,fVar19);
      param_1[8] = fVar18;
      param_1[0xc] = uVar15;
      return param_1;
    }
  } while( true );
}

