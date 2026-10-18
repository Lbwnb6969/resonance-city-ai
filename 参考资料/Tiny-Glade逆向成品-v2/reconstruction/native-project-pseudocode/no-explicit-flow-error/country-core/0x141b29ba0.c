// VA 0x141b29ba0, PDB extent 3572 bytes
// country_core::systems::terrain::ui_edit_terrain::ui_edit_terrain
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/ui_edit_terrain.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::terrain::ui_edit_terrain::ui_edit_terrain
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/ui_edit_terrain.rs
   Extent: 3572 */

void pdb_141b29ba0(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong *param_7,longlong *param_8,
                  longlong *param_9,longlong *param_10,longlong *param_11,longlong *param_12,
                  undefined8 *param_13,undefined8 *param_14,undefined8 *param_15)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  char cVar16;
  uint uVar17;
  char *pcVar18;
  ulonglong uVar19;
  undefined1 (**ppauVar20) [16];
  int iVar21;
  longlong lVar22;
  undefined1 (*pauVar23) [16];
  ulonglong uVar24;
  undefined1 (*pauVar25) [16];
  ulonglong uVar26;
  undefined8 uVar27;
  longlong lVar28;
  ushort uVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong uVar32;
  undefined1 (*pauVar33) [16];
  longlong lVar34;
  ulonglong uVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  byte bVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 unaff_XMM15_Ba;
  char cVar54;
  undefined1 unaff_XMM15_Bb;
  char cVar55;
  undefined1 unaff_XMM15_Bc;
  char cVar56;
  undefined1 unaff_XMM15_Bd;
  char cVar57;
  undefined1 unaff_XMM15_Be;
  char cVar58;
  undefined1 unaff_XMM15_Bf;
  char cVar59;
  undefined1 unaff_XMM15_Bg;
  char cVar60;
  undefined1 unaff_XMM15_Bh;
  char cVar61;
  undefined1 unaff_XMM15_Bi;
  char cVar62;
  undefined1 unaff_XMM15_Bj;
  char cVar63;
  undefined1 unaff_XMM15_Bk;
  char cVar64;
  undefined1 unaff_XMM15_Bl;
  char cVar65;
  undefined1 unaff_XMM15_Bm;
  char cVar66;
  undefined1 unaff_XMM15_Bn;
  char cVar67;
  undefined1 unaff_XMM15_Bo;
  char cVar68;
  undefined1 unaff_XMM15_Bp;
  char cVar69;
  undefined1 uStack_2e1;
  longlong lStack_2e0;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  longlong lStack_2c8;
  longlong lStack_2c0;
  char *pcStack_2b8;
  undefined8 *puStack_2b0;
  longlong lStack_2a8;
  undefined8 *puStack_2a0;
  longlong *plStack_298;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined1 (*pauStack_278) [16];
  code *pcStack_270;
  longlong lStack_268;
  longlong lStack_260;
  undefined4 *puStack_258;
  longlong lStack_250;
  float *pfStack_248;
  longlong lStack_240;
  longlong lStack_238;
  char *pcStack_230;
  undefined4 *puStack_228;
  undefined4 *puStack_220;
  undefined4 *puStack_218;
  longlong lStack_210;
  int iStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  longlong lStack_1f8;
  ulonglong uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  ulonglong uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  ulonglong uStack_1c0;
  undefined *puStack_1b8;
  undefined1 (**ppauStack_1b0) [16];
  undefined4 uStack_1a8;
  undefined1 uStack_190;
  undefined1 uStack_18f;
  char cStack_180;
  undefined1 uStack_17f;
  undefined8 uStack_17c;
  undefined2 uStack_160;
  longlong lStack_150;
  longlong lStack_148;
  char *pcStack_140;
  undefined4 *puStack_138;
  longlong lStack_130;
  undefined4 *puStack_128;
  undefined4 *puStack_120;
  longlong lStack_118;
  undefined4 *puStack_110;
  longlong *plStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  undefined4 *puStack_f0;
  
  if (*(char *)*param_1 == '\x05') {
    lStack_2e0 = param_12[4];
    puVar8 = (ulonglong *)*param_14;
    lVar34 = param_14[1];
    uVar19 = *puVar8;
    uVar26 = 0;
    uVar32 = uVar19 - *(ulonglong *)(lVar34 + 0x18);
    if (uVar19 < *(ulonglong *)(lVar34 + 0x18)) {
      uVar32 = uVar26;
    }
    uVar30 = uVar19 - *(ulonglong *)(lVar34 + 0x38);
    if (uVar19 < *(ulonglong *)(lVar34 + 0x38)) {
      uVar30 = uVar26;
    }
    uVar19 = *(ulonglong *)(lVar34 + 0x10);
    uVar9 = *(ulonglong *)(lVar34 + 0x30);
    uVar24 = uVar9 - uVar30;
    if (uVar9 < uVar30) {
      uVar24 = uVar26;
    }
    uVar35 = uVar19 - uVar32;
    if (uVar19 < uVar32) {
      uVar35 = uVar26;
    }
    pcStack_230 = (char *)param_14[5];
    uVar26 = *(ulonglong *)(lVar34 + 0x40);
    lVar22 = *(longlong *)(lVar34 + 8);
    lVar34 = *(longlong *)(lVar34 + 0x28);
    puStack_228 = (undefined4 *)param_12[6];
    uStack_2d0 = *(undefined4 *)((longlong)param_12 + 0x3c);
    pfStack_248 = (float *)param_12[8];
    *puVar8 = (uVar26 - uVar24) - uVar35;
    fVar47 = 0.0;
    fVar49 = 0.0;
    if (uVar19 >= uVar32 && uVar19 - uVar32 != 0 || uVar9 >= uVar30 && uVar9 - uVar30 != 0) {
      lVar34 = lVar34 + uVar30 * 0x10;
      lVar22 = lVar22 + uVar32 * 0x10;
      if (uVar19 < uVar32) {
        lVar22 = 8;
      }
      lVar28 = 0;
      if (uVar32 < uVar19) {
        lVar28 = lVar22 + -0x10 + uVar35 * 0x10;
      }
      if (uVar9 < uVar30) {
        lVar34 = 8;
      }
      lVar34 = lVar34 + -0x10 + uVar24 * 0x10;
      if (uVar9 <= uVar30) {
        lVar34 = lVar28;
      }
      *puVar8 = uVar26;
      fVar47 = (float)*(undefined8 *)(lVar34 + 8);
      fVar49 = (float)((ulonglong)*(undefined8 *)(lVar34 + 8) >> 0x20);
    }
    iVar21 = -1;
    if (*(char *)*param_15 != '\0') {
      iVar21 = *(int *)((char *)*param_15 + 8);
    }
    pcStack_2b8 = (char *)*param_2;
    puStack_2a0 = param_4;
    plStack_298 = param_3;
    if ((iVar21 != -1) && (*pcStack_2b8 == '\x01')) {
      *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
      lVar34 = *param_12;
      lVar22 = *(longlong *)(lVar34 + 0x30);
      uVar27 = *(undefined8 *)(lVar34 + 0x40);
      if (lVar22 == *(longlong *)(lVar34 + 0x20)) {
        pdb_142d7e980(lVar34 + 0x20);
      }
      lVar28 = *(longlong *)(lVar34 + 0x28);
      *(undefined8 *)(lVar28 + lVar22 * 0x10) = uVar27;
      *(undefined1 *)(lVar28 + 8 + lVar22 * 0x10) = 1;
      *(longlong *)(lVar34 + 0x30) = lVar22 + 1;
      *(longlong *)(lVar34 + 0x40) = *(longlong *)(lVar34 + 0x40) + 1;
    }
    lVar34 = param_13[1];
    uVar19 = *(ulonglong *)*param_13;
    uVar26 = 0;
    uVar32 = uVar19 - *(ulonglong *)(lVar34 + 0x18);
    if (uVar19 < *(ulonglong *)(lVar34 + 0x18)) {
      uVar32 = uVar26;
    }
    uVar30 = uVar19 - *(ulonglong *)(lVar34 + 0x38);
    if (uVar19 < *(ulonglong *)(lVar34 + 0x38)) {
      uVar30 = uVar26;
    }
    bVar36 = uVar30 <= *(ulonglong *)(lVar34 + 0x30);
    uVar30 = *(ulonglong *)(lVar34 + 0x30) - uVar30;
    bVar38 = uVar30 != 0;
    if (!bVar36) {
      uVar30 = uVar26;
    }
    bVar37 = uVar32 <= *(ulonglong *)(lVar34 + 0x10);
    uVar32 = *(ulonglong *)(lVar34 + 0x10) - uVar32;
    bVar39 = uVar32 != 0;
    if (!bVar37) {
      uVar32 = uVar26;
    }
    uVar19 = uVar32 + uVar30;
    if (bVar37 && bVar39 || bVar36 && bVar38) {
      uVar19 = uVar26;
    }
    *(ulonglong *)*param_13 = *(longlong *)(lVar34 + 0x40) - uVar19;
    fVar15 = _DAT_142e382c8;
    fVar14 = _DAT_142e37988;
    lStack_2a8 = *plStack_298;
    lVar34 = *(longlong *)(lStack_2a8 + 0x20);
    if (lVar34 != 0) {
      puStack_2a0 = (undefined8 *)*puStack_2a0;
      uStack_280 = *(undefined4 *)((longlong)param_6 + 0x1c);
      plStack_108 = (longlong *)*param_6;
      puStack_110 = (undefined4 *)param_6[2];
      puStack_218 = (undefined4 *)*param_5;
      puStack_120 = (undefined4 *)param_5[2];
      fVar52 = (float)((uint)fVar47 & _DAT_142e377e0);
      fVar53 = (float)((uint)fVar49 & _UNK_142e377e4);
      fVar48 = fVar47 * _DAT_143391cdc;
      fVar50 = (fVar49 * _DAT_142e37ad0) / _DAT_142e382c8;
      fVar51 = (float)(_DAT_142e377e0 & (uint)fVar48);
      uStack_284 = *(undefined4 *)((longlong)param_5 + 0x1c);
      uStack_288 = *(undefined4 *)((longlong)param_7 + 0x1c);
      puStack_128 = (undefined4 *)param_7[2];
      lStack_130 = *param_7;
      pauVar23 = *(undefined1 (**) [16])(lStack_2a8 + 8);
      auVar44 = *pauVar23;
      uVar17 = ~(uint)(ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar44[0xf] >> 7) << 0xf);
      uStack_27c = *(undefined4 *)((longlong)param_11 + 0x1c);
      lStack_210 = *param_11;
      puStack_f0 = (undefined4 *)param_11[2];
      uStack_2cc = *(undefined4 *)((longlong)param_9 + 0x1c);
      lStack_2c0 = *param_9;
      puStack_220 = (undefined4 *)param_9[2];
      uStack_28c = *(undefined4 *)((longlong)param_10 + 0x1c);
      lStack_238 = *param_10;
      puStack_138 = (undefined4 *)param_10[2];
      uStack_2d4 = *(undefined4 *)((longlong)param_8 + 0x1c);
      lStack_2c8 = *param_8;
      puStack_258 = (undefined4 *)param_8[2];
      iVar12 = -(uint)(CONCAT13(unaff_XMM15_Bd,
                                CONCAT12(unaff_XMM15_Bc,CONCAT11(unaff_XMM15_Bb,unaff_XMM15_Ba))) ==
                      CONCAT13(unaff_XMM15_Bd,
                               CONCAT12(unaff_XMM15_Bc,CONCAT11(unaff_XMM15_Bb,unaff_XMM15_Ba))));
      cVar54 = (char)iVar12;
      cVar55 = (char)((uint)iVar12 >> 8);
      cVar56 = (char)((uint)iVar12 >> 0x10);
      cVar57 = (char)((uint)iVar12 >> 0x18);
      iVar12 = -(uint)(CONCAT13(unaff_XMM15_Bh,
                                CONCAT12(unaff_XMM15_Bg,CONCAT11(unaff_XMM15_Bf,unaff_XMM15_Be))) ==
                      CONCAT13(unaff_XMM15_Bh,
                               CONCAT12(unaff_XMM15_Bg,CONCAT11(unaff_XMM15_Bf,unaff_XMM15_Be))));
      cVar58 = (char)iVar12;
      cVar59 = (char)((uint)iVar12 >> 8);
      cVar60 = (char)((uint)iVar12 >> 0x10);
      cVar61 = (char)((uint)iVar12 >> 0x18);
      iVar12 = -(uint)(CONCAT13(unaff_XMM15_Bl,
                                CONCAT12(unaff_XMM15_Bk,CONCAT11(unaff_XMM15_Bj,unaff_XMM15_Bi))) ==
                      CONCAT13(unaff_XMM15_Bl,
                               CONCAT12(unaff_XMM15_Bk,CONCAT11(unaff_XMM15_Bj,unaff_XMM15_Bi))));
      cVar62 = (char)iVar12;
      cVar63 = (char)((uint)iVar12 >> 8);
      cVar64 = (char)((uint)iVar12 >> 0x10);
      cVar65 = (char)((uint)iVar12 >> 0x18);
      iVar12 = -(uint)(CONCAT13(unaff_XMM15_Bp,
                                CONCAT12(unaff_XMM15_Bo,CONCAT11(unaff_XMM15_Bn,unaff_XMM15_Bm))) ==
                      CONCAT13(unaff_XMM15_Bp,
                               CONCAT12(unaff_XMM15_Bo,CONCAT11(unaff_XMM15_Bn,unaff_XMM15_Bm))));
      cVar66 = (char)iVar12;
      cVar67 = (char)((uint)iVar12 >> 8);
      cVar68 = (char)((uint)iVar12 >> 0x10);
      cVar69 = (char)((uint)iVar12 >> 0x18);
      lStack_f8 = (longlong)iVar21;
      puStack_2b0 = (undefined8 *)(puStack_218 + 2);
      pauVar25 = pauVar23 + 1;
      lStack_118 = lStack_210 + 0x20;
      lStack_240 = lStack_2c0 + 0x20;
      lStack_250 = lStack_2e0 + 0x20;
      lStack_148 = lStack_238 + 0x20;
      lStack_260 = lStack_2c8 + 0x20;
      lStack_150 = lStack_2a8 + 0x28;
      pcStack_140 = pcStack_230 + 4;
      do {
        ppauVar20 = &pauStack_278;
        if ((short)uVar17 == 0) {
          do {
            auVar44 = *pauVar25;
            pauVar23 = pauVar23 + -0x30;
            pauVar25 = pauVar25 + 1;
            uVar17 = (ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar44[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar17 == 0);
        }
        plStack_298 = (longlong *)(ulonglong)uVar17;
        uVar10 = 0;
        for (; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x80000000) {
          uVar10 = uVar10 + 1;
        }
        uVar19 = (ulonglong)uVar10;
        pauVar33 = pauVar23 + uVar19 * -3 + -3;
        pcStack_270 = pdb_140f71a50;
        pauStack_278 = pauVar33;
        pdb_140f60760(&iStack_208,&UNK_1433925f8,ppauVar20);
        pauStack_278 = (undefined1 (*) [16])CONCAT44(uStack_204,iStack_208);
        pcStack_270 = (code *)CONCAT44(uStack_1fc,uStack_200);
        lStack_268 = lStack_1f8;
        cStack_180 = '\a';
        if (*pcStack_2b8 == '\0') {
          cStack_180 = (iVar21 != *(int *)*pauVar33) * '\x03' + '\x04';
        }
        iStack_208 = 0;
        uStack_204 = 0;
        uStack_200 = 8;
        uStack_1fc = 0;
        lStack_1f8 = 0;
        uStack_1f0 = uStack_1f0 & 0xffffffff00000000;
        uStack_1d8 = uStack_1d8 & 0xffffffff00000000;
        uStack_1c0 = uStack_1c0 & 0xffffffff00000000;
        uStack_1a8 = 0;
        uStack_18f = 0xb;
        uStack_17f = 0;
        uStack_17c = 0x4302000043020000;
        uStack_160 = 0x100;
        uStack_190 = (!bVar37 || !bVar39) && (!bVar36 || !bVar38);
        lVar22 = pdb_1409008d0(puStack_2a0,ppauVar20,&iStack_208);
        cVar16 = *(char *)(lVar22 + 0x18);
        if (cVar16 == '\x01') {
          if ((*(undefined1 (***) [16])(lVar22 + 0x38) == ppauVar20) &&
             (*(char *)(lVar22 + 0x19) == '\x01' &&
              (iVar21 != -1 && ((!bVar37 || !bVar39) && (!bVar36 || !bVar38))))) {
            *puStack_f0 = uStack_27c;
            lVar28 = *(longlong *)(lStack_210 + 0x30);
            uVar27 = *(undefined8 *)(lStack_210 + 0x40);
            if (lVar28 == *(longlong *)(lStack_210 + 0x20)) {
              uStack_100 = *(undefined8 *)(lStack_210 + 0x40);
              pdb_142d7e980(lStack_118);
              uVar27 = uStack_100;
            }
            lVar31 = *(longlong *)(lStack_210 + 0x28);
            *(undefined8 *)(lVar31 + lVar28 * 0x10) = uVar27;
            *(longlong *)(lVar31 + 8 + lVar28 * 0x10) = lStack_f8;
            *(longlong *)(lStack_210 + 0x30) = lVar28 + 1;
            *(longlong *)(lStack_210 + 0x40) = *(longlong *)(lStack_210 + 0x40) + 1;
            cVar16 = *(char *)(lVar22 + 0x18);
            goto LAB_141b2a350;
          }
        }
        else {
LAB_141b2a350:
          if ((cVar16 == '\x02') && (*(undefined1 (***) [16])(lVar22 + 0x38) == ppauVar20)) {
            bVar40 = *(byte *)(lVar22 + 0x19);
            if (bVar40 < 2) {
              *puStack_220 = uStack_2cc;
              lVar22 = *(longlong *)(lStack_2c0 + 0x30);
              uVar27 = *(undefined8 *)(lStack_2c0 + 0x40);
              if (lVar22 == *(longlong *)(lStack_2c0 + 0x20)) {
                pdb_142d7e980(lStack_240);
              }
              lVar28 = *(longlong *)(lStack_2c0 + 0x28);
              *(undefined8 *)(lVar28 + lVar22 * 0x10) = uVar27;
              *(undefined1 *)(lVar28 + 8 + lVar22 * 0x10) = 1;
              *(longlong *)(lStack_2c0 + 0x30) = lVar22 + 1;
              *(longlong *)(lStack_2c0 + 0x40) = *(longlong *)(lStack_2c0 + 0x40) + 1;
              *puStack_228 = uStack_2d0;
              lVar22 = *(longlong *)(lStack_2e0 + 0x30);
              uVar27 = *(undefined8 *)(lStack_2e0 + 0x40);
              if (lVar22 == *(longlong *)(lStack_2e0 + 0x20)) {
                pdb_142d7e980(lStack_250);
              }
              lVar28 = *(longlong *)(lStack_2e0 + 0x28);
              *(undefined8 *)(lVar28 + lVar22 * 0x10) = uVar27;
              *(undefined1 *)(lVar28 + 8 + lVar22 * 0x10) = 0;
              *(longlong *)(lStack_2e0 + 0x30) = lVar22 + 1;
              *(longlong *)(lStack_2e0 + 0x40) = *(longlong *)(lStack_2e0 + 0x40) + 1;
              *puStack_110 = uStack_280;
              uVar6 = *(undefined4 *)pauVar23[uVar19 * -3 + -3];
              uVar4 = *puStack_218;
              uVar2 = puStack_218[1];
              uVar7 = *(undefined4 *)(pauVar23[uVar19 * -3 + -1] + 8);
              uVar3 = *(undefined4 *)pauVar23[uVar19 * -3 + -1];
              puStack_1e8 = (undefined *)plStack_108[4];
              lVar22 = *plStack_108;
              lStack_1f8 = plStack_108[2];
              uStack_1f0 = plStack_108[3];
              iStack_208 = (int)lVar22;
              uStack_204 = (undefined4)((ulonglong)lVar22 >> 0x20);
              uStack_200 = (undefined4)plStack_108[1];
              uStack_1fc = (undefined4)((ulonglong)plStack_108[1] >> 0x20);
              *plStack_108 = -0x7fffffffffffffff;
              *(undefined4 *)(plStack_108 + 1) = uVar6;
              *(undefined4 *)((longlong)plStack_108 + 0xc) = uVar4;
              *(undefined4 *)(plStack_108 + 2) = uVar7;
              *(undefined4 *)((longlong)plStack_108 + 0x14) = uVar2;
              *(undefined4 *)(plStack_108 + 3) = uVar3;
              if (lVar22 != -0x7ffffffffffffffe) {
                pdb_140c11450(&iStack_208);
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_14339267c,0x172,&UNK_1433927f0);
              }
            }
            else if (bVar40 != 2) {
              if (bVar40 == 3) {
                *puStack_220 = uStack_2cc;
                lVar22 = *(longlong *)(lStack_2c0 + 0x30);
                uVar27 = *(undefined8 *)(lStack_2c0 + 0x40);
                if (lVar22 == *(longlong *)(lStack_2c0 + 0x20)) {
                  pdb_142d7e980(lStack_240);
                }
                lVar28 = *(longlong *)(lStack_2c0 + 0x28);
                *(undefined8 *)(lVar28 + lVar22 * 0x10) = uVar27;
                *(undefined1 *)(lVar28 + 8 + lVar22 * 0x10) = 0;
                *(longlong *)(lStack_2c0 + 0x30) = lVar22 + 1;
                *(longlong *)(lStack_2c0 + 0x40) = *(longlong *)(lStack_2c0 + 0x40) + 1;
                uVar4 = *(undefined4 *)(pauVar23[uVar19 * -3 + -1] + 8);
                *puStack_120 = uStack_284;
                *puStack_218 = uVar4;
                uVar4 = *(undefined4 *)pauVar23[uVar19 * -3 + -1];
                *puStack_120 = uStack_284;
                puStack_218[1] = uVar4;
                pcVar18 = "";
                if (*pcStack_230 != '\0') {
                  pcVar18 = pcStack_140;
                }
                uStack_200 = *(undefined4 *)(pcVar18 + 8);
                uVar27 = *(undefined8 *)pcVar18;
                iStack_208 = (int)uVar27;
                uStack_204 = (undefined4)((ulonglong)uVar27 >> 0x20);
                *puStack_120 = uStack_284;
                *(undefined4 *)(puStack_2b0 + 1) = uStack_200;
                *puStack_2b0 = uVar27;
                *puStack_128 = uStack_288;
                *(undefined1 *)(lStack_130 + 0x1e0) = 1;
                *pfStack_248 = 0.0;
              }
              else {
                *puStack_138 = uStack_28c;
                lVar22 = *(longlong *)(lStack_238 + 0x30);
                uVar27 = *(undefined8 *)(lStack_238 + 0x40);
                if (lVar22 == *(longlong *)(lStack_238 + 0x20)) {
                  pdb_142d7e8a0(lStack_148);
                }
                *(undefined8 *)(*(longlong *)(lStack_238 + 0x28) + lVar22 * 8) = uVar27;
                *(longlong *)(lStack_238 + 0x40) = *(longlong *)(lStack_238 + 0x40) + 1;
                *(longlong *)(lStack_238 + 0x30) = lVar22 + 1;
                if (0.0 < fVar49 * fVar49 + fVar47 * fVar47) {
                  if (fVar53 <= fVar52) {
                    uVar4 = *(undefined4 *)*pauVar33;
                    uStack_1fc = *(undefined4 *)(puStack_2b0 + 1);
                    uStack_204 = (undefined4)*puStack_2b0;
                    uStack_200 = (undefined4)((ulonglong)*puStack_2b0 >> 0x20);
                    *puStack_258 = uStack_2d4;
                    lVar22 = *(longlong *)(lStack_2c8 + 0x30);
                    uVar27 = *(undefined8 *)(lStack_2c8 + 0x40);
                    if (lVar22 == *(longlong *)(lStack_2c8 + 0x20)) {
                      pdb_142d7ede0(lStack_260);
                    }
                    lVar28 = *(longlong *)(lStack_2c8 + 0x28);
                    *(undefined4 *)(lVar28 + lVar22 * 0x28) = 2;
                    *(float *)(lVar28 + 4 + lVar22 * 0x28) = fVar48;
                    *(undefined4 *)(lVar28 + 8 + lVar22 * 0x28) = 0;
                    puVar1 = (undefined8 *)(lVar28 + 0xc + lVar22 * 0x28);
                    *puVar1 = CONCAT44(uStack_204,iStack_208);
                    puVar1[1] = CONCAT44(uStack_1fc,uStack_200);
                    *(undefined4 *)(lVar28 + 0x1c + lVar22 * 0x28) = uVar4;
                    *(undefined8 *)(lVar28 + 0x20 + lVar22 * 0x28) = uVar27;
                    *(longlong *)(lStack_2c8 + 0x30) = lVar22 + 1;
                    *(longlong *)(lStack_2c8 + 0x40) = *(longlong *)(lStack_2c8 + 0x40) + 1;
                    fVar41 = *pfStack_248 + fVar51;
                    *pfStack_248 = fVar41;
                    if (fVar14 < fVar41) {
                      *puStack_228 = uStack_2d0;
                      lVar22 = *(longlong *)(lStack_2e0 + 0x30);
                      uVar27 = *(undefined8 *)(lStack_2e0 + 0x40);
                      if (lVar22 == *(longlong *)(lStack_2e0 + 0x20)) {
                        pdb_142d7e980(lStack_250);
                      }
                      lVar28 = *(longlong *)(lStack_2e0 + 0x28);
                      *(undefined8 *)(lVar28 + lVar22 * 0x10) = uVar27;
                      *(undefined1 *)(lVar28 + 8 + lVar22 * 0x10) = 1;
                      *(longlong *)(lStack_2e0 + 0x30) = lVar22 + 1;
                      *(longlong *)(lStack_2e0 + 0x40) = *(longlong *)(lStack_2e0 + 0x40) + 1;
                    }
                  }
                  else {
                    iVar12 = *(int *)*pauVar33;
                    iStack_208 = iVar12;
                    if (*(longlong *)(lStack_2a8 + 0x20) != 0) {
                      uVar19 = pdb_1400aede0(lStack_150,&iStack_208);
                      lVar22 = *(longlong *)(lStack_2a8 + 8);
                      bVar40 = (byte)(uVar19 >> 0x39);
                      auVar44 = ZEXT216(CONCAT11(bVar40,bVar40));
                      auVar44 = pshuflw(auVar44,auVar44,0);
                      lVar28 = 0;
                      while( true ) {
                        uVar19 = uVar19 & *(ulonglong *)(lStack_2a8 + 0x10);
                        auVar5 = *(undefined1 (*) [16])(lVar22 + uVar19);
                        auVar46[0] = -(auVar5[0] == auVar44[0]);
                        auVar46[1] = -(auVar5[1] == auVar44[1]);
                        auVar46[2] = -(auVar5[2] == auVar44[2]);
                        auVar46[3] = -(auVar5[3] == auVar44[3]);
                        auVar46[4] = -(auVar5[4] == auVar44[4]);
                        auVar46[5] = -(auVar5[5] == auVar44[5]);
                        auVar46[6] = -(auVar5[6] == auVar44[6]);
                        auVar46[7] = -(auVar5[7] == auVar44[7]);
                        auVar46[8] = -(auVar5[8] == auVar44[0]);
                        auVar46[9] = -(auVar5[9] == auVar44[1]);
                        auVar46[10] = -(auVar5[10] == auVar44[2]);
                        auVar46[0xb] = -(auVar5[0xb] == auVar44[3]);
                        auVar46[0xc] = -(auVar5[0xc] == auVar44[4]);
                        auVar46[0xd] = -(auVar5[0xd] == auVar44[5]);
                        auVar46[0xe] = -(auVar5[0xe] == auVar44[6]);
                        auVar46[0xf] = -(auVar5[0xf] == auVar44[7]);
                        uVar29 = (ushort)(SUB161(auVar46 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(auVar46[0xf] >> 7) << 0xf;
                        uVar17 = (uint)uVar29;
                        while (uVar29 != 0) {
                          uVar10 = 0;
                          for (uVar11 = uVar17; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000
                              ) {
                            uVar10 = uVar10 + 1;
                          }
                          lVar31 = (uVar10 + uVar19 & *(ulonglong *)(lStack_2a8 + 0x10)) * -0x30;
                          if (iVar12 == *(int *)(lVar22 + -0x30 + lVar31)) {
                            fVar41 = *(float *)(lVar22 + lVar31 + -8);
                            uStack_200 = *(undefined4 *)(puStack_2b0 + 1);
                            iStack_208 = (int)*puStack_2b0;
                            uStack_204 = (undefined4)((ulonglong)*puStack_2b0 >> 0x20);
                            *puStack_258 = uStack_2d4;
                            lVar22 = *(longlong *)(lStack_2c8 + 0x30);
                            uVar27 = *(undefined8 *)(lStack_2c8 + 0x40);
                            if (lVar22 == *(longlong *)(lStack_2c8 + 0x20)) {
                              pdb_142d7ede0(lStack_260);
                            }
                            fVar42 = fVar41 / fVar15;
                            fVar43 = fVar42 * fVar42 - fVar50;
                            fVar42 = 0.0;
                            if (0.0 <= fVar43) {
                              fVar42 = fVar43;
                            }
                            fVar43 = _DAT_142e36f28;
                            if (fVar42 <= _DAT_142e36f28) {
                              fVar43 = fVar42;
                            }
                            lVar28 = *(longlong *)(lStack_2c8 + 0x28);
                            *(undefined4 *)(lVar28 + lVar22 * 0x28) = 0;
                            *(undefined4 *)(lVar28 + 8 + lVar22 * 0x28) = 2;
                            *(float *)(lVar28 + 0xc + lVar22 * 0x28) =
                                 SQRT(fVar43) * fVar15 - fVar41;
                            *(ulonglong *)(lVar28 + 0x10 + lVar22 * 0x28) =
                                 CONCAT44(uStack_204,iStack_208);
                            *(undefined4 *)(lVar28 + 0x18 + lVar22 * 0x28) = uStack_200;
                            *(int *)(lVar28 + 0x1c + lVar22 * 0x28) = iVar12;
                            *(undefined8 *)(lVar28 + 0x20 + lVar22 * 0x28) = uVar27;
                            *(longlong *)(lStack_2c8 + 0x30) = lVar22 + 1;
                            *(longlong *)(lStack_2c8 + 0x40) = *(longlong *)(lStack_2c8 + 0x40) + 1;
                            cVar54 = -1;
                            cVar55 = -1;
                            cVar56 = -1;
                            cVar57 = -1;
                            cVar58 = -1;
                            cVar59 = -1;
                            cVar60 = -1;
                            cVar61 = -1;
                            cVar62 = -1;
                            cVar63 = -1;
                            cVar64 = -1;
                            cVar65 = -1;
                            cVar66 = -1;
                            cVar67 = -1;
                            cVar68 = -1;
                            cVar69 = -1;
                            goto LAB_141b2a130;
                          }
                          uVar29 = (ushort)(uVar17 - 1) & (ushort)uVar17;
                          uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar29);
                          iVar13 = -(uint)(CONCAT13(cVar57,CONCAT12(cVar56,CONCAT11(cVar55,cVar54)))
                                          == CONCAT13(cVar57,CONCAT12(cVar56,CONCAT11(cVar55,cVar54)
                                                                     )));
                          cVar54 = (char)iVar13;
                          cVar55 = (char)((uint)iVar13 >> 8);
                          cVar56 = (char)((uint)iVar13 >> 0x10);
                          cVar57 = (char)((uint)iVar13 >> 0x18);
                          iVar13 = -(uint)(CONCAT13(cVar61,CONCAT12(cVar60,CONCAT11(cVar59,cVar58)))
                                          == CONCAT13(cVar61,CONCAT12(cVar60,CONCAT11(cVar59,cVar58)
                                                                     )));
                          cVar58 = (char)iVar13;
                          cVar59 = (char)((uint)iVar13 >> 8);
                          cVar60 = (char)((uint)iVar13 >> 0x10);
                          cVar61 = (char)((uint)iVar13 >> 0x18);
                          iVar13 = -(uint)(CONCAT13(cVar65,CONCAT12(cVar64,CONCAT11(cVar63,cVar62)))
                                          == CONCAT13(cVar65,CONCAT12(cVar64,CONCAT11(cVar63,cVar62)
                                                                     )));
                          cVar62 = (char)iVar13;
                          cVar63 = (char)((uint)iVar13 >> 8);
                          cVar64 = (char)((uint)iVar13 >> 0x10);
                          cVar65 = (char)((uint)iVar13 >> 0x18);
                          iVar13 = -(uint)(CONCAT13(cVar69,CONCAT12(cVar68,CONCAT11(cVar67,cVar66)))
                                          == CONCAT13(cVar69,CONCAT12(cVar68,CONCAT11(cVar67,cVar66)
                                                                     )));
                          cVar66 = (char)iVar13;
                          cVar67 = (char)((uint)iVar13 >> 8);
                          cVar68 = (char)((uint)iVar13 >> 0x10);
                          cVar69 = (char)((uint)iVar13 >> 0x18);
                        }
                        auVar45[0] = -(auVar5[0] == cVar54);
                        auVar45[1] = -(auVar5[1] == cVar55);
                        auVar45[2] = -(auVar5[2] == cVar56);
                        auVar45[3] = -(auVar5[3] == cVar57);
                        auVar45[4] = -(auVar5[4] == cVar58);
                        auVar45[5] = -(auVar5[5] == cVar59);
                        auVar45[6] = -(auVar5[6] == cVar60);
                        auVar45[7] = -(auVar5[7] == cVar61);
                        auVar45[8] = -(auVar5[8] == cVar62);
                        auVar45[9] = -(auVar5[9] == cVar63);
                        auVar45[10] = -(auVar5[10] == cVar64);
                        auVar45[0xb] = -(auVar5[0xb] == cVar65);
                        auVar45[0xc] = -(auVar5[0xc] == cVar66);
                        auVar45[0xd] = -(auVar5[0xd] == cVar67);
                        auVar45[0xe] = -(auVar5[0xe] == cVar68);
                        auVar45[0xf] = -(auVar5[0xf] == cVar69);
                        if ((((((((((((((((SUB161(auVar45 >> 7,0) & 1) != 0 ||
                                         (SUB161(auVar45 >> 0xf,0) & 1) != 0) ||
                                        (SUB161(auVar45 >> 0x17,0) & 1) != 0) ||
                                       (SUB161(auVar45 >> 0x1f,0) & 1) != 0) ||
                                      (SUB161(auVar45 >> 0x27,0) & 1) != 0) ||
                                     (SUB161(auVar45 >> 0x2f,0) & 1) != 0) ||
                                    (SUB161(auVar45 >> 0x37,0) & 1) != 0) ||
                                   (SUB161(auVar45 >> 0x3f,0) & 1) != 0) ||
                                  (SUB161(auVar45 >> 0x47,0) & 1) != 0) ||
                                 (SUB161(auVar45 >> 0x4f,0) & 1) != 0) ||
                                (SUB161(auVar45 >> 0x57,0) & 1) != 0) ||
                               (SUB161(auVar45 >> 0x5f,0) & 1) != 0) ||
                              (SUB161(auVar45 >> 0x67,0) & 1) != 0) ||
                             (SUB161(auVar45 >> 0x6f,0) & 1) != 0) ||
                            (SUB161(auVar45 >> 0x77,0) & 1) != 0) || auVar45[0xf] < '\0') break;
                        uVar19 = uVar19 + lVar28 + 0x10;
                        lVar28 = lVar28 + 0x10;
                      }
                    }
                    if (*_DAT_143ca8e90 != 0) {
                      pcStack_270 = pdb_141b2c370;
                      iStack_208 = 0;
                      uStack_204 = 0;
                      uStack_200 = 0x4339264d;
                      uStack_1fc = 1;
                      lStack_1f8 = 0x2f;
                      uStack_1f0 = 0;
                      puStack_1e8 = &UNK_1433925bd;
                      uStack_1e0 = 0x3a;
                      uStack_1d8 = 1;
                      puStack_1d0 = &UNK_14339264d;
                      uStack_1c8 = 0x2f;
                      uStack_1c0 = 0x8c00000001;
                      puStack_1b8 = &UNK_143392610;
                      ppauStack_1b0 = &pauStack_278;
                      pauStack_278 = pauVar33;
                      pdb_140f332f0(&uStack_2e1,&iStack_208);
                    }
                  }
                }
              }
            }
          }
        }
LAB_141b2a130:
        uVar17 = (uint)plStack_298 - 1 & (uint)plStack_298;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
    }
  }
  return;
}

