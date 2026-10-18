// VA 0x140b747d0, PDB extent 2747 bytes
// country_core::systems::stone_foundation_offset::set_wall_stone_foundation_offset
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/stone_foundation_offset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::stone_foundation_offset::set_wall_stone_foundation_offset
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/stone_foundation_offset.rs
   Extent: 2747 */

void pdb_140b747d0(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 *param_5,longlong *param_6)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  longlong *plVar6;
  longlong lVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float *pfVar21;
  longlong lVar22;
  undefined8 uVar23;
  longlong lVar24;
  ulonglong *puVar25;
  longlong lVar26;
  longlong lVar27;
  ushort uVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  undefined8 uVar32;
  byte bVar33;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Da_01;
  float fVar34;
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 unaff_XMM7_Ba;
  char cVar44;
  undefined1 unaff_XMM7_Bb;
  char cVar45;
  undefined1 unaff_XMM7_Bc;
  char cVar46;
  undefined1 unaff_XMM7_Bd;
  char cVar47;
  undefined1 unaff_XMM7_Be;
  char cVar48;
  undefined1 unaff_XMM7_Bf;
  char cVar49;
  undefined1 unaff_XMM7_Bg;
  char cVar50;
  undefined1 unaff_XMM7_Bh;
  char cVar51;
  undefined1 unaff_XMM7_Bi;
  char cVar52;
  undefined1 unaff_XMM7_Bj;
  char cVar53;
  undefined1 unaff_XMM7_Bk;
  char cVar54;
  undefined1 unaff_XMM7_Bl;
  char cVar55;
  undefined1 unaff_XMM7_Bm;
  char cVar56;
  undefined1 unaff_XMM7_Bn;
  char cVar57;
  undefined1 unaff_XMM7_Bo;
  char cVar58;
  undefined1 unaff_XMM7_Bp;
  char cVar59;
  undefined8 uStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d0;
  undefined1 uStack_1c9;
  longlong lStack_1c8;
  longlong lStack_1c0;
  longlong *plStack_1b8;
  code *pcStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  undefined4 *puStack_198;
  longlong *plStack_190;
  undefined4 uStack_184;
  ulonglong *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  longlong *plStack_160;
  undefined4 *puStack_158;
  longlong lStack_150;
  float fStack_148;
  float fStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  longlong **pplStack_f0;
  
  puVar25 = (ulonglong *)*param_1;
  lVar18 = param_1[1];
  uVar17 = *puVar25;
  uVar19 = 0;
  uVar20 = uVar17 - *(ulonglong *)(lVar18 + 0x18);
  if (uVar17 < *(ulonglong *)(lVar18 + 0x18)) {
    uVar20 = uVar19;
  }
  uVar30 = uVar17 - *(ulonglong *)(lVar18 + 0x38);
  if (uVar17 < *(ulonglong *)(lVar18 + 0x38)) {
    uVar30 = uVar19;
  }
  lVar31 = uVar20 * 0x18 + *(longlong *)(lVar18 + 8);
  uVar17 = *(ulonglong *)(lVar18 + 0x10) - uVar20;
  if (*(ulonglong *)(lVar18 + 0x10) < uVar20) {
    lVar31 = 8;
    uVar17 = uVar19;
  }
  lVar24 = uVar30 * 0x18 + *(longlong *)(lVar18 + 0x28);
  uVar20 = *(ulonglong *)(lVar18 + 0x30) - uVar30;
  if (*(ulonglong *)(lVar18 + 0x30) < uVar30) {
    lVar24 = 8;
    uVar20 = uVar19;
  }
  *puVar25 = (*(longlong *)(lVar18 + 0x40) - uVar20) - uVar17;
  fVar15 = _DAT_143021a60;
  fVar14 = _DAT_142e3c604;
  fVar13 = _DAT_142e3b1d8;
  fVar12 = _DAT_142e36f28;
  lStack_150 = lVar31 + uVar17 * 0x18;
  plVar6 = (longlong *)*param_2;
  puStack_158 = (undefined4 *)param_2[2];
  uStack_184 = *(undefined4 *)((longlong)param_2 + 0x1c);
  plStack_190 = (longlong *)*param_3;
  uVar32 = *param_5;
  uStack_1d0 = *(undefined4 *)((longlong)param_6 + 0x1c);
  lStack_1c8 = *param_6;
  puStack_198 = (undefined4 *)param_6[2];
  iVar11 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                  CONCAT13(unaff_XMM7_Bd,
                           CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
  cVar44 = (char)iVar11;
  cVar45 = (char)((uint)iVar11 >> 8);
  cVar46 = (char)((uint)iVar11 >> 0x10);
  cVar47 = (char)((uint)iVar11 >> 0x18);
  iVar11 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                            CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                  CONCAT13(unaff_XMM7_Bh,
                           CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
  cVar48 = (char)iVar11;
  cVar49 = (char)((uint)iVar11 >> 8);
  cVar50 = (char)((uint)iVar11 >> 0x10);
  cVar51 = (char)((uint)iVar11 >> 0x18);
  iVar11 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                            CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                  CONCAT13(unaff_XMM7_Bl,
                           CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
  cVar52 = (char)iVar11;
  cVar53 = (char)((uint)iVar11 >> 8);
  cVar54 = (char)((uint)iVar11 >> 0x10);
  cVar55 = (char)((uint)iVar11 >> 0x18);
  iVar11 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                            CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                  CONCAT13(unaff_XMM7_Bp,
                           CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
  cVar56 = (char)iVar11;
  cVar57 = (char)((uint)iVar11 >> 8);
  cVar58 = (char)((uint)iVar11 >> 0x10);
  cVar59 = (char)((uint)iVar11 >> 0x18);
  plStack_160 = plStack_190 + 4;
  lStack_1a0 = lStack_1c8 + 0x20;
  lVar18 = lVar24 + uVar20 * 0x18;
  uStack_168 = param_4;
LAB_140b74959:
  if ((lVar31 == 0) || (lVar31 == lStack_150)) {
    if ((lVar24 == 0) || (lVar24 == lVar18)) {
      return;
    }
    lVar26 = lVar24 + 0x18;
    lVar22 = 0;
    lVar27 = lVar24;
  }
  else {
    lVar22 = lVar31 + 0x18;
    lVar26 = lVar24;
    lVar27 = lVar31;
  }
  *puVar25 = *puVar25 + 1;
  lVar7 = *(longlong *)(lVar27 + 8);
  fStack_148 = (float)lVar7;
  fVar36 = fStack_148;
  fStack_144 = (float)((ulonglong)lVar7 >> 0x20);
  fVar34 = fStack_144;
  if (plVar6[3] != 0) {
    uVar17 = pdb_1400af0a0(plVar6 + 4,&fStack_148);
    lVar31 = *plVar6;
    bVar33 = (byte)(uVar17 >> 0x39);
    auVar35 = ZEXT216(CONCAT11(bVar33,bVar33));
    auVar35 = pshuflw(auVar35,auVar35,0);
    lVar24 = 0;
    while( true ) {
      uVar17 = uVar17 & plVar6[1];
      auVar43 = *(undefined1 (*) [16])(lVar31 + uVar17);
      auVar41[0] = -(auVar43[0] == auVar35[0]);
      auVar41[1] = -(auVar43[1] == auVar35[1]);
      auVar41[2] = -(auVar43[2] == auVar35[2]);
      auVar41[3] = -(auVar43[3] == auVar35[3]);
      auVar41[4] = -(auVar43[4] == auVar35[4]);
      auVar41[5] = -(auVar43[5] == auVar35[5]);
      auVar41[6] = -(auVar43[6] == auVar35[6]);
      auVar41[7] = -(auVar43[7] == auVar35[7]);
      auVar41[8] = -(auVar43[8] == auVar35[0]);
      auVar41[9] = -(auVar43[9] == auVar35[1]);
      auVar41[10] = -(auVar43[10] == auVar35[2]);
      auVar41[0xb] = -(auVar43[0xb] == auVar35[3]);
      auVar41[0xc] = -(auVar43[0xc] == auVar35[4]);
      auVar41[0xd] = -(auVar43[0xd] == auVar35[5]);
      auVar41[0xe] = -(auVar43[0xe] == auVar35[6]);
      auVar41[0xf] = -(auVar43[0xf] == auVar35[7]);
      uVar28 = (ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe | (ushort)(auVar41[0xf] >> 7) << 0xf;
      uVar16 = (uint)uVar28;
      while (uVar28 != 0) {
        uVar9 = 0;
        for (uVar10 = uVar16; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        lVar29 = (uVar9 + uVar17 & plVar6[1]) * -0x78;
        if (lVar7 == *(longlong *)(lVar31 + -0x78 + lVar29)) {
          fVar2 = *(float *)(lVar31 + lVar29 + -0xc);
          fVar3 = *(float *)(lVar27 + 0x10);
          lVar24 = lVar26;
          lVar31 = lVar22;
          if ((fVar2 == fVar3) && (!NAN(fVar2) && !NAN(fVar3))) goto LAB_140b74959;
          *puStack_158 = uStack_184;
          lStack_1c0 = lVar7;
          lStack_1a8 = lVar18;
          lVar18 = pdb_1417bd890(plVar6,&lStack_1c0);
          if (lVar18 == 0) {
            if (1 < *_DAT_143ca8e90) {
              plStack_1b8 = &lStack_1c0;
              pcStack_1b0 = pdb_140c04ef0;
              fStack_148 = 0.0;
              fStack_144 = 0.0;
              uStack_140 = 0x43021dde;
              uStack_13c = 1;
              uStack_138 = 0x2b;
              uStack_130 = 0;
              puStack_128 = &UNK_143021da7;
              uStack_120 = 0x36;
              uStack_118 = 2;
              puStack_110 = &UNK_143021dde;
              uStack_108 = 0x2b;
              uStack_100 = 0xfd00000001;
              puStack_f8 = &UNK_143021d78;
              pplStack_f0 = &plStack_1b8;
              pdb_140f332f0(&uStack_1c9,&fStack_148);
            }
          }
          else {
            pdb_1403b05d0(plVar6 + 0xc,lVar7);
            *(float *)(lVar18 + 100) = fVar3;
          }
          if (plStack_190[3] == 0) goto LAB_140b74c4b;
          fStack_148 = fVar36;
          fStack_144 = fVar34;
          uVar17 = pdb_1400af0a0(plStack_160,&fStack_148);
          lVar18 = *plStack_190;
          bVar33 = (byte)(uVar17 >> 0x39);
          auVar35 = ZEXT216(CONCAT11(bVar33,bVar33));
          auVar35 = pshuflw(auVar35,auVar35,0);
          lVar22 = 0;
          goto LAB_140b74be4;
        }
        uVar28 = (ushort)(uVar16 - 1) & (ushort)uVar16;
        uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar28);
      }
      auVar38[0] = -(auVar43[0] == cVar44);
      auVar38[1] = -(auVar43[1] == cVar45);
      auVar38[2] = -(auVar43[2] == cVar46);
      auVar38[3] = -(auVar43[3] == cVar47);
      auVar38[4] = -(auVar43[4] == cVar48);
      auVar38[5] = -(auVar43[5] == cVar49);
      auVar38[6] = -(auVar43[6] == cVar50);
      auVar38[7] = -(auVar43[7] == cVar51);
      auVar38[8] = -(auVar43[8] == cVar52);
      auVar38[9] = -(auVar43[9] == cVar53);
      auVar38[10] = -(auVar43[10] == cVar54);
      auVar38[0xb] = -(auVar43[0xb] == cVar55);
      auVar38[0xc] = -(auVar43[0xc] == cVar56);
      auVar38[0xd] = -(auVar43[0xd] == cVar57);
      auVar38[0xe] = -(auVar43[0xe] == cVar58);
      auVar38[0xf] = -(auVar43[0xf] == cVar59);
      if ((((((((((((((((SUB161(auVar38 >> 7,0) & 1) != 0 || (SUB161(auVar38 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar38 >> 0x17,0) & 1) != 0) || (SUB161(auVar38 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar38 >> 0x27,0) & 1) != 0) || (SUB161(auVar38 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar38 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar38 >> 0x3f,0) & 1) != 0) || (SUB161(auVar38 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar38 >> 0x4f,0) & 1) != 0) || (SUB161(auVar38 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar38 >> 0x5f,0) & 1) != 0) || (SUB161(auVar38 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar38 >> 0x6f,0) & 1) != 0) || (SUB161(auVar38 >> 0x77,0) & 1) != 0) ||
          auVar38[0xf] < '\0') break;
      uVar17 = uVar17 + lVar24 + 0x10;
      lVar24 = lVar24 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14305c0e0);
LAB_140b74be4:
  uVar17 = uVar17 & plStack_190[1];
  auVar43 = *(undefined1 (*) [16])(lVar18 + uVar17);
  auVar42[0] = -(auVar43[0] == auVar35[0]);
  auVar42[1] = -(auVar43[1] == auVar35[1]);
  auVar42[2] = -(auVar43[2] == auVar35[2]);
  auVar42[3] = -(auVar43[3] == auVar35[3]);
  auVar42[4] = -(auVar43[4] == auVar35[4]);
  auVar42[5] = -(auVar43[5] == auVar35[5]);
  auVar42[6] = -(auVar43[6] == auVar35[6]);
  auVar42[7] = -(auVar43[7] == auVar35[7]);
  auVar42[8] = -(auVar43[8] == auVar35[0]);
  auVar42[9] = -(auVar43[9] == auVar35[1]);
  auVar42[10] = -(auVar43[10] == auVar35[2]);
  auVar42[0xb] = -(auVar43[0xb] == auVar35[3]);
  auVar42[0xc] = -(auVar43[0xc] == auVar35[4]);
  auVar42[0xd] = -(auVar43[0xd] == auVar35[5]);
  auVar42[0xe] = -(auVar43[0xe] == auVar35[6]);
  auVar42[0xf] = -(auVar43[0xf] == auVar35[7]);
  uVar28 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf;
  uVar16 = (uint)uVar28;
  while( true ) {
    if (uVar28 == 0) goto LAB_140b74c30;
    uVar9 = 0;
    for (uVar10 = uVar16; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar9 = uVar9 + 1;
    }
    lVar26 = (uVar9 + uVar17 & plStack_190[1]) * -0x2b0;
    if (lVar7 == *(longlong *)(lVar18 + -0x2b0 + lVar26)) break;
    uVar28 = (ushort)(uVar16 - 1) & (ushort)uVar16;
    uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar28);
  }
  lVar18 = lVar18 + lVar26;
  if ((*(ulonglong *)(lVar18 + -0x298) < 2) || (*(float *)(lVar18 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14305c0f8);
  }
  puStack_180 = puVar25;
  if (*(uint *)(lVar18 + -0x50) < 2) {
    plStack_1b8 = *(longlong **)(lVar18 + -0x4c + (ulonglong)*(uint *)(lVar18 + -0x50) * 8);
    pdb_140df4520(&fStack_144,&plStack_1b8);
    plStack_1b8 = (longlong *)CONCAT44(uStack_140,fStack_144);
    pcStack_1b0 = (code *)CONCAT44(pcStack_1b0._4_4_,uStack_13c);
  }
  else {
    uVar16 = pdb_1419a9060(lVar18 + -0x2a8);
    uVar20 = (ulonglong)uVar16;
    uVar17 = *(ulonglong *)(lVar18 + -0x298);
    if (uVar17 <= uVar20) goto LAB_140b75265;
    uVar19 = uVar20 + 1;
    if (uVar17 <= uVar19) goto LAB_140b75271;
    fVar36 = fVar12 - extraout_XMM0_Da;
    uVar23 = *(undefined8 *)(*(longlong *)(lVar18 + -0x2a0) + uVar20 * 8);
    uVar4 = *(undefined8 *)(*(longlong *)(lVar18 + -0x2a0) + 8 + uVar20 * 8);
    lStack_1c0 = CONCAT44(extraout_XMM0_Da * (float)((ulonglong)uVar4 >> 0x20) +
                          fVar36 * (float)((ulonglong)uVar23 >> 0x20),
                          extraout_XMM0_Da * (float)uVar4 + fVar36 * (float)uVar23);
    pdb_140df4520(&plStack_1b8,&lStack_1c0);
  }
  uStack_1d8 = pcStack_1b0._0_4_;
  uStack_1e0 = plStack_1b8;
  fVar36 = (float)pdb_1419c1ac0(uVar32,(ulonglong)plStack_1b8 & 0xffffffff,
                                (ulonglong)pcStack_1b0 & 0xffffffff);
  uStack_1e0 = (longlong *)CONCAT44(fVar36 + uStack_1e0._4_4_,(undefined4)uStack_1e0);
  uVar5 = *(undefined1 *)(lVar27 + 0x14);
  lVar22 = pdb_140b54cf0(plStack_190,lVar7,uStack_168);
  puVar25 = puStack_180;
  if ((lVar22 == 0) || (fVar13 < *(float *)(lVar22 + 0x30))) {
    if (*(char *)(lVar18 + -0x198) == '\0') {
      pdb_142d8e000();
      goto LAB_140b75285;
    }
    fVar36 = *(float *)(lVar18 + -0x194);
    lVar22 = *(longlong *)(lVar18 + -0x210);
  }
  else {
    if (*(char *)(lVar18 + -0x1a0) == '\0') {
LAB_140b75285:
      pdb_142d8e040();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    fVar36 = *(float *)(lVar18 + -0x19c) + fVar14 + fVar15;
    lVar22 = *(longlong *)(lVar18 + -0x210);
  }
  fVar34 = extraout_XMM0_Da_01;
  if (lVar22 != 0) {
    fVar34 = *(float *)(*(longlong *)(lVar18 + -0x218) + 4);
    if (lVar22 != 1) {
      lVar26 = (lVar22 * 0xc - 0xcU >> 2) * -0x5555555555555555;
      pfVar21 = (float *)(*(longlong *)(lVar18 + -0x218) + 0x10);
      fVar37 = fVar34;
      do {
        fVar34 = *pfVar21;
        uVar17 = CONCAT44((uint)((int)fVar34 >> 0x1f) >> 1,(uint)((int)fVar37 >> 0x1f) >> 1) ^
                 CONCAT44(fVar34,fVar37);
        if ((int)uVar17 <= (int)(uVar17 >> 0x20)) {
          fVar34 = fVar37;
        }
        pfVar21 = pfVar21 + 3;
        lVar26 = lVar26 + -1;
        fVar37 = fVar34;
      } while (lVar26 != 0);
    }
  }
  if (lVar22 == 0) {
    fVar36 = fVar36 - *(float *)(lVar18 + -0x24);
    if (fVar36 <= 0.0) {
      fVar36 = 0.0;
    }
  }
  else {
    fVar36 = fVar36 - fVar34;
    if (fVar36 <= 0.0) {
      fVar36 = 0.0;
    }
  }
  if (fVar3 < fVar36) {
    bVar33 = *(byte *)(lVar18 + -10);
    *puStack_198 = uStack_1d0;
    lVar18 = *(longlong *)(lStack_1c8 + 0x30);
    uVar23 = *(undefined8 *)(lStack_1c8 + 0x40);
    uStack_170 = uVar32;
    if (lVar18 == *(longlong *)(lStack_1c8 + 0x20)) {
      uStack_178 = *(undefined8 *)(lStack_1c8 + 0x40);
      pdb_142d7ede0(lStack_1a0);
      uVar23 = uStack_178;
    }
    lVar22 = *(longlong *)(lStack_1c8 + 0x28);
    *(undefined8 *)(lVar22 + lVar18 * 0x28) = uVar23;
    *(ulonglong *)(lVar22 + 8 + lVar18 * 0x28) =
         (ulonglong)((uint)(fVar2 < fVar3) << 8 | (uint)bVar33 << 0x10) | 0xe;
    *(longlong **)(lVar22 + 0x10 + lVar18 * 0x28) = uStack_1e0;
    *(undefined4 *)(lVar22 + 0x18 + lVar18 * 0x28) = uStack_1d8;
    *(undefined4 *)(lVar22 + 0x1c + lVar18 * 0x28) = 0x3f800000;
    *(undefined1 *)(lVar22 + 0x20 + lVar18 * 0x28) = uVar5;
    *(longlong *)(lStack_1c8 + 0x30) = lVar18 + 1;
    *(longlong *)(lStack_1c8 + 0x40) = *(longlong *)(lStack_1c8 + 0x40) + 1;
    uVar32 = uStack_170;
  }
  if ((0.0 < fVar2) && (fVar3 <= 0.0)) {
    *puStack_198 = uStack_1d0;
    lVar18 = *(longlong *)(lStack_1c8 + 0x30);
    uVar23 = *(undefined8 *)(lStack_1c8 + 0x40);
    if (lVar18 == *(longlong *)(lStack_1c8 + 0x20)) {
      pdb_142d7ede0(lStack_1a0);
    }
    lVar22 = *(longlong *)(lStack_1c8 + 0x28);
    *(undefined8 *)(lVar22 + lVar18 * 0x28) = uVar23;
    *(undefined8 *)(lVar22 + 8 + lVar18 * 0x28) = 0xf;
    *(longlong **)(lVar22 + 0x10 + lVar18 * 0x28) = uStack_1e0;
    *(undefined4 *)(lVar22 + 0x18 + lVar18 * 0x28) = uStack_1d8;
    *(undefined4 *)(lVar22 + 0x1c + lVar18 * 0x28) = 0x3f800000;
    *(undefined1 *)(lVar22 + 0x20 + lVar18 * 0x28) = uVar5;
    *(longlong *)(lStack_1c8 + 0x30) = lVar18 + 1;
    *(longlong *)(lStack_1c8 + 0x40) = *(longlong *)(lStack_1c8 + 0x40) + 1;
  }
  lVar18 = lStack_1a8;
  if ((fVar2 < fVar36) && (fVar36 <= fVar3)) {
    *puStack_198 = uStack_1d0;
    lVar18 = *(longlong *)(lStack_1c8 + 0x30);
    uVar23 = *(undefined8 *)(lStack_1c8 + 0x40);
    if (lVar18 == *(longlong *)(lStack_1c8 + 0x20)) {
      pdb_142d7ede0(lStack_1a0);
    }
    lVar22 = *(longlong *)(lStack_1c8 + 0x28);
    *(undefined8 *)(lVar22 + lVar18 * 0x28) = uVar23;
    *(undefined8 *)(lVar22 + 8 + lVar18 * 0x28) = 0x10;
    *(longlong **)(lVar22 + 0x10 + lVar18 * 0x28) = uStack_1e0;
    *(undefined4 *)(lVar22 + 0x18 + lVar18 * 0x28) = uStack_1d8;
    *(undefined4 *)(lVar22 + 0x1c + lVar18 * 0x28) = 0x3f800000;
    *(undefined1 *)(lVar22 + 0x20 + lVar18 * 0x28) = uVar5;
    *(longlong *)(lStack_1c8 + 0x30) = lVar18 + 1;
    *(longlong *)(lStack_1c8 + 0x40) = *(longlong *)(lStack_1c8 + 0x40) + 1;
    lVar18 = lStack_1a8;
  }
  goto LAB_140b74959;
LAB_140b74c30:
  auVar39[0] = -(auVar43[0] == cVar44);
  auVar39[1] = -(auVar43[1] == cVar45);
  auVar39[2] = -(auVar43[2] == cVar46);
  auVar39[3] = -(auVar43[3] == cVar47);
  auVar39[4] = -(auVar43[4] == cVar48);
  auVar39[5] = -(auVar43[5] == cVar49);
  auVar39[6] = -(auVar43[6] == cVar50);
  auVar39[7] = -(auVar43[7] == cVar51);
  auVar39[8] = -(auVar43[8] == cVar52);
  auVar39[9] = -(auVar43[9] == cVar53);
  auVar39[10] = -(auVar43[10] == cVar54);
  auVar39[0xb] = -(auVar43[0xb] == cVar55);
  auVar39[0xc] = -(auVar43[0xc] == cVar56);
  auVar39[0xd] = -(auVar43[0xd] == cVar57);
  auVar39[0xe] = -(auVar43[0xe] == cVar58);
  auVar39[0xf] = -(auVar43[0xf] == cVar59);
  if ((((((((((((((((SUB161(auVar39 >> 7,0) & 1) != 0 || (SUB161(auVar39 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar39 >> 0x17,0) & 1) != 0) || (SUB161(auVar39 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar39 >> 0x27,0) & 1) != 0) || (SUB161(auVar39 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar39 >> 0x37,0) & 1) != 0) || (SUB161(auVar39 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar39 >> 0x47,0) & 1) != 0) || (SUB161(auVar39 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar39 >> 0x57,0) & 1) != 0) || (SUB161(auVar39 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar39 >> 0x67,0) & 1) != 0) || (SUB161(auVar39 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar39 >> 0x77,0) & 1) != 0) || auVar39[0xf] < '\0') goto LAB_140b74c4b;
  uVar17 = uVar17 + lVar22 + 0x10;
  lVar22 = lVar22 + 0x10;
  goto LAB_140b74be4;
LAB_140b74c4b:
  lVar18 = *(longlong *)(lVar27 + 8);
  fStack_148 = (float)lVar18;
  fStack_144 = (float)((ulonglong)lVar18 >> 0x20);
  if (plVar6[3] == 0) {
LAB_140b751d5:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14305c110);
  }
  uVar17 = pdb_1400af0a0(plVar6 + 4,&fStack_148);
  lVar22 = *plVar6;
  bVar33 = (byte)(uVar17 >> 0x39);
  auVar35 = ZEXT216(CONCAT11(bVar33,bVar33));
  auVar35 = pshuflw(auVar35,auVar35,0);
  lVar26 = 0;
  do {
    uVar17 = uVar17 & plVar6[1];
    pcVar1 = (char *)(lVar22 + uVar17);
    auVar43[0] = -(*pcVar1 == auVar35[0]);
    auVar43[1] = -(pcVar1[1] == auVar35[1]);
    auVar43[2] = -(pcVar1[2] == auVar35[2]);
    auVar43[3] = -(pcVar1[3] == auVar35[3]);
    auVar43[4] = -(pcVar1[4] == auVar35[4]);
    auVar43[5] = -(pcVar1[5] == auVar35[5]);
    auVar43[6] = -(pcVar1[6] == auVar35[6]);
    auVar43[7] = -(pcVar1[7] == auVar35[7]);
    auVar43[8] = -(pcVar1[8] == auVar35[0]);
    auVar43[9] = -(pcVar1[9] == auVar35[1]);
    auVar43[10] = -(pcVar1[10] == auVar35[2]);
    auVar43[0xb] = -(pcVar1[0xb] == auVar35[3]);
    auVar43[0xc] = -(pcVar1[0xc] == auVar35[4]);
    auVar43[0xd] = -(pcVar1[0xd] == auVar35[5]);
    auVar43[0xe] = -(pcVar1[0xe] == auVar35[6]);
    auVar43[0xf] = -(pcVar1[0xf] == auVar35[7]);
    uVar28 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe | (ushort)(auVar43[0xf] >> 7) << 0xf;
    uVar16 = (uint)uVar28;
    while (uVar28 != 0) {
      uVar9 = 0;
      for (uVar10 = uVar16; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      lVar27 = (uVar9 + uVar17 & plVar6[1]) * -0x78;
      if (lVar18 == *(longlong *)(lVar22 + -0x78 + lVar27)) {
        lVar22 = lVar22 + lVar27;
        uVar16 = pdb_1419a9060(lVar22 + -0x70);
        lVar18 = lStack_1a8;
        uVar20 = (ulonglong)uVar16;
        uVar17 = *(ulonglong *)(lVar22 + -0x60);
        if (uVar17 <= uVar20) {
LAB_140b75265:
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar20,uVar17,&UNK_14335e4e0);
        }
        uVar19 = uVar20 + 1;
        if (uVar17 <= uVar19) {
LAB_140b75271:
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar19,uVar17,&UNK_14335e4f8);
        }
        fVar36 = fVar12 - extraout_XMM0_Da_00;
        uVar23 = *(undefined8 *)(*(longlong *)(lVar22 + -0x68) + uVar20 * 8);
        uVar4 = *(undefined8 *)(*(longlong *)(lVar22 + -0x68) + 8 + uVar20 * 8);
        fStack_148 = extraout_XMM0_Da_00 * (float)uVar4 + fVar36 * (float)uVar23;
        fStack_144 = extraout_XMM0_Da_00 * (float)((ulonglong)uVar4 >> 0x20) +
                     fVar36 * (float)((ulonglong)uVar23 >> 0x20);
        pdb_140df4520(&uStack_1e0,&fStack_148);
        fVar36 = (float)pdb_1419c1ac0(uVar32,(ulonglong)uStack_1e0 & 0xffffffff,uStack_1d8);
        uStack_1e0 = (longlong *)CONCAT44(fVar36 + uStack_1e0._4_4_,(undefined4)uStack_1e0);
        goto LAB_140b74959;
      }
      uVar28 = (ushort)(uVar16 - 1) & (ushort)uVar16;
      uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar28);
    }
    auVar40[0] = -(*pcVar1 == cVar44);
    auVar40[1] = -(pcVar1[1] == cVar45);
    auVar40[2] = -(pcVar1[2] == cVar46);
    auVar40[3] = -(pcVar1[3] == cVar47);
    auVar40[4] = -(pcVar1[4] == cVar48);
    auVar40[5] = -(pcVar1[5] == cVar49);
    auVar40[6] = -(pcVar1[6] == cVar50);
    auVar40[7] = -(pcVar1[7] == cVar51);
    auVar40[8] = -(pcVar1[8] == cVar52);
    auVar40[9] = -(pcVar1[9] == cVar53);
    auVar40[10] = -(pcVar1[10] == cVar54);
    auVar40[0xb] = -(pcVar1[0xb] == cVar55);
    auVar40[0xc] = -(pcVar1[0xc] == cVar56);
    auVar40[0xd] = -(pcVar1[0xd] == cVar57);
    auVar40[0xe] = -(pcVar1[0xe] == cVar58);
    auVar40[0xf] = -(pcVar1[0xf] == cVar59);
    if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 || (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar40 >> 0x17,0) & 1) != 0) || (SUB161(auVar40 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar40 >> 0x27,0) & 1) != 0) || (SUB161(auVar40 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar40 >> 0x37,0) & 1) != 0) || (SUB161(auVar40 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar40 >> 0x47,0) & 1) != 0) || (SUB161(auVar40 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar40 >> 0x57,0) & 1) != 0) || (SUB161(auVar40 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar40 >> 0x67,0) & 1) != 0) || (SUB161(auVar40 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar40 >> 0x77,0) & 1) != 0) || auVar40[0xf] < '\0') goto LAB_140b751d5;
    uVar17 = uVar17 + lVar26 + 0x10;
    lVar26 = lVar26 + 0x10;
  } while( true );
}

