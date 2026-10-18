// VA 0x140b88700, PDB extent 3178 bytes
// country_core::systems::wall::wall_state::spatial_hash_debug::spatial_hash_debug
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/spatial_hash_debug.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::wall_state::spatial_hash_debug::spatial_hash_debug
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/wall_state/spatial_hash_debug.rs
   Extent: 3178 */

void pdb_140b88700(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong *param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  float *pfVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  longlong lStack_180;
  byte *pbStack_178;
  longlong lStack_160;
  byte *pbStack_158;
  longlong lStack_150;
  longlong lStack_148;
  byte *pbStack_140;
  longlong lStack_138;
  byte *pbStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_104;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_e8;
  undefined2 uStack_e4;
  longlong lStack_d8;
  byte *pbStack_d0;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  
  uStack_c0 = 0xfffffffffffffffe;
  if (*(char *)(*param_4 + 0xc1) == '\x01') {
    lVar3 = *param_1;
    uVar2 = *(undefined8 *)(lVar3 + 0x50);
    uVar11 = *(undefined8 *)(lVar3 + 0x50);
    fVar18 = (float)uVar2 * _DAT_143057f30;
    fVar20 = (float)((ulonglong)uVar2 >> 0x20) * _UNK_143057f34;
    fVar21 = (float)uVar11 * _UNK_143057f38;
    fVar22 = (float)((ulonglong)uVar11 >> 0x20) * _UNK_143057f3c;
    uStack_120 = (float *)CONCAT44(fVar22,fVar21);
    uStack_128._0_4_ = fVar18;
    uStack_128._4_4_ = fVar20;
    pdb_140deff40(&uStack_198,&uStack_128);
    uStack_128 = (ulonglong)(uint)uStack_128._4_4_ << 0x20;
    uStack_118 = CONCAT44(uStack_198,0x3f800000);
    uStack_110 = CONCAT44(uStack_190,uStack_194);
    uStack_108 = uStack_18c;
    uStack_104 = uStack_188;
    uStack_fc = 0;
    uVar2 = *param_3;
    pdb_140a882e0(&uStack_128,uVar2);
    fVar19 = _DAT_142e36f28;
    uVar11 = *(undefined8 *)(lVar3 + 0x48);
    if (1 < (int)uVar11) {
      iVar9 = 1;
      do {
        uVar4 = *(undefined8 *)(lVar3 + 0x48);
        pdb_14007ee60();
        pfVar6 = (float *)pub_1406abab0(0x18,4);
        if (pfVar6 == (float *)0x0) goto LAB_140b88e50;
        fVar12 = (float)iVar9 / (float)(int)uVar4;
        fVar12 = fVar12 * fVar21 + (fVar19 - fVar12) * fVar18;
        iVar9 = iVar9 + 1;
        *pfVar6 = fVar12;
        pfVar6[1] = 0.0;
        pfVar6[2] = fVar20;
        pfVar6[3] = fVar12;
        pfVar6[4] = 0.0;
        pfVar6[5] = fVar22;
        uStack_128 = 2;
        uStack_118 = 2;
        uStack_110 = 0x8000000000000000;
        uStack_f8 = 4;
        uStack_e8 = 0x3f800000;
        uStack_e4 = 1;
        uStack_120 = pfVar6;
        pdb_140ab2da0(&uStack_128,uVar2);
      } while ((int)uVar11 != iVar9);
      uVar11 = *(undefined8 *)(lVar3 + 0x48);
    }
    fVar20 = _DAT_142e36f50;
    fVar18 = _DAT_142e36f38;
    fVar19 = _DAT_142e36f28;
    iVar9 = (int)((ulonglong)uVar11 >> 0x20);
    if (1 < iVar9) {
      iVar10 = 1;
      do {
        uVar11 = *(undefined8 *)(lVar3 + 0x48);
        fVar21 = *(float *)(lVar3 + 0x50);
        fVar22 = *(float *)(lVar3 + 0x54);
        pdb_14007ee60();
        pfVar6 = (float *)pub_1406abab0(0x18,4);
        if (pfVar6 == (float *)0x0) {
LAB_140b88e50:
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(4,0x18);
        }
        fVar22 = fVar22 * fVar20;
        fVar12 = (float)iVar10 / (float)(int)uVar11;
        fVar22 = fVar12 * fVar22 - (fVar19 - fVar12) * fVar22;
        iVar10 = iVar10 + 1;
        *pfVar6 = fVar21 * fVar18;
        pfVar6[1] = 0.0;
        pfVar6[2] = fVar22;
        pfVar6[3] = fVar21 * fVar20;
        pfVar6[4] = 0.0;
        pfVar6[5] = fVar22;
        uStack_128 = 2;
        uStack_118 = 2;
        uStack_110 = 0x8000000000000000;
        uStack_f8 = 4;
        uStack_e8 = 0x3f800000;
        uStack_e4 = 1;
        uStack_120 = pfVar6;
        pdb_140ab2da0(&uStack_128,uVar2);
      } while (iVar9 != iVar10);
    }
    lStack_148 = 0;
    pbStack_140 = (byte *)0x8;
    lStack_138 = 0;
    lStack_160 = 0;
    pbStack_158 = (byte *)0x8;
    lStack_150 = 0;
    uStack_c1 = 1;
    uStack_c2 = 1;
    pdb_140defa80(&uStack_1a8);
    uStack_c1 = 1;
    uStack_c2 = 1;
    pdb_140b39890(lVar3,&uStack_128,&lStack_148);
    fVar19 = _DAT_142e36f50;
    uStack_c1 = 1;
    uStack_c2 = 1;
    pdb_140defdf0(&uStack_198,&uStack_1a8);
    uStack_118 = uStack_188;
    uStack_f8 = 0;
    uStack_e8 = 0x3f800000;
    uStack_110 = 0x8000000000000000;
    uStack_e4 = 1;
    pdb_140ab2da0(&uStack_128,uVar2);
    if (lStack_180 != 0) {
      pub_1406abac0(pbStack_178,lStack_180 << 2,4);
    }
    uStack_128 = CONCAT44(uStack_1a4,uStack_1a8);
    uStack_120 = (float *)CONCAT44(uStack_19c,uStack_1a0);
    uStack_c1 = 1;
    uStack_c2 = 1;
    pdb_140b57070(lVar3,&uStack_128,&lStack_160);
    fVar21 = _DAT_14305d850;
    fVar20 = _DAT_142e382cc;
    fVar18 = _DAT_142e36f28;
    lStack_d8 = lStack_148;
    pbStack_d0 = pbStack_140;
    if (lStack_138 != 0) {
      fVar22 = *(float *)(lVar3 + 0x50) * fVar19;
      fVar19 = fVar19 * *(float *)(lVar3 + 0x54);
      pbVar1 = pbStack_140 + lStack_138 * 8;
      pbVar8 = pbStack_140;
      do {
        iVar9 = *(int *)(lVar3 + 0x48);
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8510(&UNK_14305a700);
        }
        iVar10 = *(int *)pbVar8;
        if (iVar10 == -0x80000000 && iVar9 == -1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8550(&UNK_14305a700);
        }
        fVar12 = (float)pub_142e32a40((float)iVar10 / (float)iVar9);
        iVar5 = 0x7fffffff;
        if (fVar12 <= fVar20) {
          iVar5 = (int)fVar12;
        }
        if (NAN(fVar12)) {
          iVar5 = 0;
        }
        fVar12 = (float)(int)*(undefined8 *)(lVar3 + 0x48);
        fVar17 = (float)(int)((ulonglong)*(undefined8 *)(lVar3 + 0x48) >> 0x20);
        auVar13._4_4_ = (float)(iVar10 % iVar9);
        auVar13._0_4_ = *(undefined4 *)(lVar3 + 0x50);
        auVar13._8_8_ = 0;
        auVar15._4_4_ = (float)iVar5;
        auVar15._0_4_ = *(undefined4 *)(lVar3 + 0x54);
        auVar15._8_8_ = 0;
        auVar14._4_4_ = fVar12;
        auVar14._0_4_ = fVar12;
        auVar14._8_8_ = 0;
        auVar14 = divps(auVar13,auVar14);
        auVar16._4_4_ = fVar17;
        auVar16._0_4_ = fVar17;
        auVar16._8_8_ = 0;
        auVar16 = divps(auVar15,auVar16);
        pdb_140df3380(&uStack_198,auVar14._0_8_,auVar16._0_8_,fVar18,0,
                      (fVar22 * auVar14._4_4_ - (fVar18 - auVar14._4_4_) * fVar22) +
                      fVar21 * auVar14._0_4_,
                      (fVar19 * auVar16._4_4_ - (fVar18 - auVar16._4_4_) * fVar19) +
                      fVar21 * auVar16._0_4_,&UNK_14305d958);
        uStack_104 = uStack_188;
        uStack_110 = CONCAT44(uStack_190,uStack_194);
        uStack_108 = uStack_18c;
        uStack_128 = CONCAT44(uStack_128._4_4_,1);
        uStack_118 = CONCAT44(uStack_198,0x40000000);
        uStack_fc = 0;
        pdb_140a882e0(&uStack_128,uVar2);
        pbVar8 = pbVar8 + 8;
      } while (pbVar8 != pbVar1);
    }
    if (lStack_d8 != 0) {
      pub_1406abac0(pbStack_d0,lStack_d8 << 3,8);
    }
    pbVar1 = pbStack_158 + lStack_150 * 8;
    lStack_d8 = lStack_160;
    pbStack_130 = pbStack_158;
    for (pbVar8 = pbStack_158; pbVar8 != pbVar1; pbVar8 = pbVar8 + 8) {
      lVar3 = *(longlong *)pbVar8;
      pdb_14007ee60();
      pbVar7 = pub_1406abab0(0x18,4);
      if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(4,0x18);
      }
      pbStack_d0 = pbVar7;
      pdb_140df4540(&uStack_198,lVar3);
      pdb_140df4540(&uStack_128,lVar3 + 8);
      *(undefined4 *)(pbStack_d0 + 8) = uStack_190;
      *(ulonglong *)pbStack_d0 = CONCAT44(uStack_194,uStack_198);
      *(undefined4 *)(pbStack_d0 + 0x14) = (undefined4)uStack_120;
      *(longlong *)(pbStack_d0 + 0xc) = uStack_128;
      uStack_128 = 2;
      uStack_120 = (float *)pbStack_d0;
      uStack_118 = 2;
      uStack_110 = 0x8000000000000000;
      uStack_f8 = 3;
      uStack_e8 = 0x40400000;
      uStack_e4 = 1;
      pdb_140ab2da0(&uStack_128,uVar2);
    }
    if (lStack_d8 != 0) {
      pub_1406abac0(pbStack_130,lStack_d8 << 3,8);
    }
  }
  return;
}

