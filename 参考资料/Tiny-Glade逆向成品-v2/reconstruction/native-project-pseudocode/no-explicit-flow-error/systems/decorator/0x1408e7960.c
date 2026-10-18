// VA 0x1408e7960, PDB extent 4614 bytes
// system_decorator::handle_external_decorator_cmds::handle_external_decorator_cmds
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/handle_external_decorator_cmds.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::handle_external_decorator_cmds::handle_external_decorator_cmds
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/handle_external_decorator_cmds.rs
   Extent: 4614 */

void pdb_1408e7960(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11)

{
  int iVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  byte *pbVar19;
  undefined1 (*pauVar20) [16];
  ulonglong uVar21;
  undefined1 (*pauVar22) [16];
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  undefined8 uVar27;
  uint uVar28;
  ulonglong uVar29;
  uint uVar30;
  longlong lVar31;
  ulonglong uVar32;
  ushort uVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  undefined1 (*pauVar38) [16];
  undefined8 uVar39;
  char cVar40;
  byte bVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  uint uVar55;
  undefined1 (*pauStack_250) [16];
  undefined4 uStack_248;
  uint uStack_244;
  longlong lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  uint uStack_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  uint uStack_208;
  undefined4 *puStack_200;
  undefined8 uStack_1f8;
  undefined4 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined4 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  longlong lStack_198;
  ulonglong uStack_190;
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_160;
  undefined1 uStack_158;
  undefined1 uStack_156;
  undefined1 uStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  int iStack_130;
  uint uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  uint uStack_120;
  uint uStack_11c;
  ulonglong uStack_118;
  undefined1 (*pauStack_110) [16];
  undefined1 (*pauStack_108) [16];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  char cStack_f3;
  char cStack_f2;
  char cStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  puVar2 = (ulonglong *)*param_3;
  lVar3 = param_3[1];
  uVar4 = *puVar2;
  uVar17 = 0;
  uVar16 = uVar4 - *(ulonglong *)(lVar3 + 0x18);
  if (uVar4 < *(ulonglong *)(lVar3 + 0x18)) {
    uVar16 = uVar17;
  }
  uVar21 = uVar4 - *(ulonglong *)(lVar3 + 0x38);
  if (uVar4 < *(ulonglong *)(lVar3 + 0x38)) {
    uVar21 = uVar17;
  }
  lVar35 = uVar16 * 0x18 + *(longlong *)(lVar3 + 8);
  uVar4 = *(ulonglong *)(lVar3 + 0x10) - uVar16;
  if (*(ulonglong *)(lVar3 + 0x10) < uVar16) {
    lVar35 = 8;
    uVar4 = uVar17;
  }
  lVar37 = uVar21 * 0x18 + *(longlong *)(lVar3 + 0x28);
  uVar16 = *(ulonglong *)(lVar3 + 0x30) - uVar21;
  if (*(ulonglong *)(lVar3 + 0x30) < uVar21) {
    lVar37 = 8;
    uVar16 = uVar17;
  }
  *puVar2 = (*(longlong *)(lVar3 + 0x40) - uVar16) - uVar4;
  auVar11 = _DAT_142e378b0;
  auVar10 = _DAT_142e378a0;
  fVar9 = _DAT_142e37848;
  fVar8 = _DAT_142e36f28;
  lVar3 = lVar37 + uVar16 * 0x18;
  uStack_138 = *param_4;
  puStack_200 = (undefined4 *)param_4[2];
  uStack_220 = *param_10;
  uVar5 = *param_11;
  uStack_100 = *(undefined4 *)((longlong)param_4 + 0x1c);
  uStack_fc = *(undefined4 *)((longlong)param_5 + 0x1c);
  uStack_1f8 = *param_5;
  puStack_1f0 = (undefined4 *)param_5[2];
  uStack_f8 = *(undefined4 *)((longlong)param_7 + 0x1c);
  uStack_1e8 = *param_7;
  puStack_1e0 = (undefined4 *)param_7[2];
  uStack_1d8 = *param_8;
  lVar36 = lVar35;
  do {
    do {
      do {
        if ((lVar36 == 0) || (lVar36 == lVar35 + uVar4 * 0x18)) {
          if ((lVar37 == 0) || (lVar37 == lVar3)) {
            puVar2 = (ulonglong *)*param_1;
            lVar3 = param_1[1];
            uVar4 = *puVar2;
            uVar17 = 0;
            uVar16 = uVar4 - *(ulonglong *)(lVar3 + 0x18);
            if (uVar4 < *(ulonglong *)(lVar3 + 0x18)) {
              uVar16 = uVar17;
            }
            uVar21 = uVar4 - *(ulonglong *)(lVar3 + 0x38);
            if (uVar4 < *(ulonglong *)(lVar3 + 0x38)) {
              uVar21 = uVar17;
            }
            pauVar20 = (undefined1 (*) [16])(uVar16 * 0x28 + *(longlong *)(lVar3 + 8));
            uVar4 = *(ulonglong *)(lVar3 + 0x10) - uVar16;
            if (*(ulonglong *)(lVar3 + 0x10) < uVar16) {
              pauVar20 = (undefined1 (*) [16])0x8;
              uVar4 = uVar17;
            }
            pauVar22 = (undefined1 (*) [16])(uVar21 * 0x28 + *(longlong *)(lVar3 + 0x28));
            uVar16 = *(ulonglong *)(lVar3 + 0x30) - uVar21;
            if (*(ulonglong *)(lVar3 + 0x30) < uVar21) {
              pauVar22 = (undefined1 (*) [16])0x8;
              uVar16 = uVar17;
            }
            *puVar2 = (*(longlong *)(lVar3 + 0x40) - uVar16) - uVar4;
            pauStack_110 = (undefined1 (*) [16])((longlong)pauVar20 + uVar4 * 0x28);
            pauStack_108 = (undefined1 (*) [16])((longlong)pauVar22 + uVar16 * 0x28);
            uVar12 = *(undefined4 *)((longlong)param_9 + 0x1c);
            uVar5 = *param_9;
            puVar6 = (undefined4 *)param_9[2];
            if (pauVar20 == (undefined1 (*) [16])0x0) goto LAB_1408e86c0;
            do {
              if (pauVar20 == pauStack_110) goto LAB_1408e86c0;
              pauVar38 = (undefined1 (*) [16])(pauVar20[2] + 8);
              while( true ) {
                *puVar2 = *puVar2 + 1;
                auStack_1b8._0_12_ = *(undefined1 (*) [12])(*pauVar20 + 8);
                auStack_1c8._8_8_ = *(undefined8 *)*pauVar20;
                auStack_1c8._0_8_ = 4;
                uStack_248 = *(undefined4 *)(pauVar20[1] + 0xc);
                pauStack_250 = *(undefined1 (**) [16])(pauVar20[1] + 4);
                uStack_244 = uStack_244 & 0xffffff00;
                *puStack_200 = uStack_100;
                *puStack_1f0 = uStack_fc;
                *puStack_1e0 = uStack_f8;
                pdb_1414c40f0(auStack_1c8,0,&pauStack_250,uStack_138,uStack_1f8,uStack_1e8,param_6,
                              uStack_1d8);
                *puVar6 = uVar12;
                pdb_14007ee60();
                pbVar19 = pub_1406abab0(0x30,8);
                if (pbVar19 == (byte *)0x0) goto LAB_1408e8a80;
                pbVar19[0] = 1;
                pbVar19[1] = 0;
                pbVar19[2] = 0;
                pbVar19[3] = 0;
                pbVar19[4] = 0;
                pbVar19[5] = 0;
                pbVar19[6] = 0;
                pbVar19[7] = 0;
                pbVar19[8] = 1;
                pbVar19[9] = 0;
                pbVar19[10] = 0;
                pbVar19[0xb] = 0;
                pbVar19[0xc] = 0;
                pbVar19[0xd] = 0;
                pbVar19[0xe] = 0;
                pbVar19[0xf] = 0;
                pbVar19[0x10] = 5;
                pbVar19[0x11] = 0;
                pbVar19[0x12] = 0;
                pbVar19[0x13] = 0;
                pbVar19[0x14] = 0;
                pbVar19[0x15] = 0;
                pbVar19[0x16] = 0;
                pbVar19[0x17] = 0;
                auStack_1c8._8_8_ = pbVar19;
                auStack_1c8._0_8_ = 10;
                pdb_140ae5180(uVar5);
                pauVar20 = pauVar38;
                if (pauVar38 != (undefined1 (*) [16])0x0) break;
LAB_1408e86c0:
                pauVar20 = pauVar22;
                if ((pauVar20 == (undefined1 (*) [16])0x0) || (pauVar20 == pauStack_108)) {
                  puVar2 = (ulonglong *)*param_2;
                  lVar3 = param_2[1];
                  uVar4 = *puVar2;
                  uVar17 = 0;
                  uVar16 = uVar4 - *(ulonglong *)(lVar3 + 0x18);
                  if (uVar4 < *(ulonglong *)(lVar3 + 0x18)) {
                    uVar16 = uVar17;
                  }
                  uVar21 = uVar4 - *(ulonglong *)(lVar3 + 0x38);
                  if (uVar4 < *(ulonglong *)(lVar3 + 0x38)) {
                    uVar21 = uVar17;
                  }
                  pauVar20 = (undefined1 (*) [16])(uVar16 * 0x48 + *(longlong *)(lVar3 + 8));
                  uVar4 = *(ulonglong *)(lVar3 + 0x10) - uVar16;
                  if (*(ulonglong *)(lVar3 + 0x10) < uVar16) {
                    pauVar20 = (undefined1 (*) [16])0x8;
                    uVar4 = uVar17;
                  }
                  pauVar22 = (undefined1 (*) [16])(uVar21 * 0x48 + *(longlong *)(lVar3 + 0x28));
                  uVar16 = *(ulonglong *)(lVar3 + 0x30) - uVar21;
                  if (*(ulonglong *)(lVar3 + 0x30) < uVar21) {
                    pauVar22 = (undefined1 (*) [16])0x8;
                    uVar16 = uVar17;
                  }
                  *puVar2 = (*(longlong *)(lVar3 + 0x40) - uVar16) - uVar4;
                  pauStack_110 = (undefined1 (*) [16])((longlong)pauVar20 + uVar4 * 0x48);
                  pauStack_108 = (undefined1 (*) [16])((longlong)pauVar22 + uVar16 * 0x48);
                  if (pauVar20 == (undefined1 (*) [16])0x0) goto LAB_1408e88b0;
                  goto LAB_1408e8890;
                }
                pauVar22 = (undefined1 (*) [16])(pauVar20[2] + 8);
                pauVar38 = (undefined1 (*) [16])0x0;
              }
            } while( true );
          }
          lVar31 = 0;
          lVar36 = lVar37;
          lVar37 = lVar37 + 0x18;
        }
        else {
          lVar31 = lVar36 + 0x18;
        }
        *puVar2 = *puVar2 + 1;
        uVar55 = *(uint *)(lVar36 + 8);
        uVar30 = *(uint *)(lVar36 + 0x10);
        uVar23 = uVar30;
        uVar12 = pdb_140a61520(uVar55);
        pauStack_110 = (undefined1 (*) [16])CONCAT44(pauStack_110._4_4_,uVar12);
        pauStack_108 = (undefined1 (*) [16])CONCAT44(pauStack_108._4_4_,uVar23);
        uVar23 = *(uint *)(lVar36 + 0xc);
        uVar28 = uVar30;
        iStack_130 = pdb_140a61520(uVar23);
        uVar24 = uVar23;
        uStack_12c = uVar28;
        uVar12 = pdb_140a61520(uVar55);
        uStack_218 = uVar24;
        lVar13 = pdb_140c41030(uStack_138,2);
        lVar36 = lVar31;
      } while (lVar13 == 0);
      uVar39 = *(undefined8 *)(lVar13 + 0x50);
      uVar27 = *(undefined8 *)(lVar13 + 0x58);
      pdb_1414ad4f0(&pauStack_250,lVar13 + 0x30);
      pauVar20 = pauStack_250;
      uStack_230 = uVar39;
      uStack_228 = uVar27;
    } while (pauStack_250 == (undefined1 (*) [16])0x0);
    auVar42 = *pauStack_250;
    pauVar22 = pauStack_250 + 1;
    uVar28 = ~(uint)(ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
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
                             (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar42[0xf] >> 7) << 0xf);
    cStack_f3 = uVar30 < uVar23 && uVar55 < uVar23;
    cStack_f2 = uVar55 < uVar30 && uVar55 < uVar23;
    lVar31 = lStack_238;
    pauVar38 = pauStack_250;
    uStack_214 = uVar12;
    while (lVar31 != 0) {
      if ((short)uVar28 == 0) {
        do {
          auVar42 = *pauVar22;
          pauVar38 = pauVar38 + -0x68;
          pauVar22 = pauVar22 + 1;
          uVar28 = (ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
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
                            (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar42[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar28 == 0);
      }
      uVar55 = 0;
      for (uVar30 = uVar28; (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x80000000) {
        uVar55 = uVar55 + 1;
      }
      uVar28 = uVar28 - 1 & uVar28;
      lVar13 = (ulonglong)uVar55 * -0x68;
      lVar31 = lVar31 + -1;
      if (*(char *)((longlong)pauVar38 + lVar13 + -0x2e) == '\x04') {
        iVar1 = *(int *)((longlong)pauVar38 + lVar13 + -0x50);
        uVar30 = *(uint *)((longlong)pauVar38 + lVar13 + -0x4c);
        uVar55 = *(uint *)((longlong)pauVar38 + lVar13 + -0x48);
        fVar50 = *(float *)((longlong)pauVar38 + lVar13 + -0x44);
        fVar52 = *(float *)((longlong)pauVar38 + lVar13 + -0x40);
        cVar40 = uVar30 == (uint)pauStack_108 && iVar1 == (int)pauStack_110;
        if (((bool)cVar40) || ((iVar1 == iStack_130 && (uVar30 == uStack_12c)))) {
          plVar14 = (longlong *)pdb_140c016e0(uStack_220);
          lVar15 = pdb_140c017b0((ulonglong)pauStack_110 & 0xffffffff,
                                 (ulonglong)pauStack_108 & 0xffffffff);
          fVar51 = 0.0;
          if (plVar14[3] != 0) {
            auStack_1a8 = *(undefined1 (*) [16])(plVar14 + 4);
            auVar42._0_8_ = auStack_1a8._0_8_;
            auVar42._8_4_ = auStack_1a8._0_4_;
            auVar42._12_4_ = auStack_1a8._4_4_;
            auStack_1c8 = auVar42 ^ auVar10;
            auVar43._0_8_ = auStack_1a8._8_8_;
            auVar43._8_4_ = auStack_1a8._8_4_;
            auVar43._12_4_ = auStack_1a8._12_4_;
            auStack_1b8 = auVar43 ^ auVar11;
            lStack_198 = 0;
            uStack_190 = 0;
            uStack_188 = 0;
            iStack_128 = (int)lVar15;
            uStack_124 = (undefined4)((ulonglong)lVar15 >> 0x20);
            pdb_1400b0640(auStack_1c8,&iStack_128,8);
            uVar32 = lStack_198 << 0x38 | uStack_190;
            uVar16 = auStack_1b8._8_8_ ^ uVar32;
            uVar29 = auStack_1c8._0_8_ + auStack_1b8._0_8_;
            uVar21 = (auStack_1b8._0_8_ << 0xd | (ulonglong)auStack_1b8._0_8_ >> 0x33) ^ uVar29;
            uVar17 = (uVar16 << 0x10 | uVar16 >> 0x30) ^ auStack_1c8._8_8_ + uVar16;
            uVar25 = auStack_1c8._8_8_ + uVar16 + uVar21;
            uVar29 = (uVar29 << 0x20 | uVar29 >> 0x20) + uVar17;
            uVar21 = (uVar21 << 0x11 | uVar21 >> 0x2f) ^ uVar25;
            uVar16 = (uVar17 << 0x15 | uVar17 >> 0x2b) ^ uVar29;
            uVar29 = (uVar29 ^ uVar32) + uVar21;
            uVar25 = ((uVar25 << 0x20 | uVar25 >> 0x20) ^ 0xff) + uVar16;
            uVar17 = (uVar21 << 0xd | uVar21 >> 0x33) ^ uVar29;
            uVar16 = (uVar16 << 0x10 | uVar16 >> 0x30) ^ uVar25;
            uVar25 = uVar25 + uVar17;
            uVar29 = (uVar29 << 0x20 | uVar29 >> 0x20) + uVar16;
            uVar17 = (uVar17 << 0x11 | uVar17 >> 0x2f) ^ uVar25;
            uVar16 = (uVar16 << 0x15 | uVar16 >> 0x2b) ^ uVar29;
            uVar29 = uVar29 + uVar17;
            uVar21 = (uVar25 << 0x20 | uVar25 >> 0x20) + uVar16;
            uVar17 = (uVar17 << 0xd | uVar17 >> 0x33) ^ uVar29;
            uVar16 = (uVar16 << 0x10 | uVar16 >> 0x30) ^ uVar21;
            uVar21 = uVar21 + uVar17;
            uVar25 = (uVar29 << 0x20 | uVar29 >> 0x20) + uVar16;
            uVar17 = (uVar17 << 0x11 | uVar17 >> 0x2f) ^ uVar21;
            uVar16 = (uVar16 << 0x15 | uVar16 >> 0x2b) ^ uVar25;
            uVar21 = (uVar21 << 0x20 | uVar21 >> 0x20) + uVar16;
            uVar17 = (uVar17 << 0xd | uVar17 >> 0x33) ^ uVar25 + uVar17;
            uVar16 = (uVar16 << 0x10 | uVar16 >> 0x30) ^ uVar21;
            uVar21 = uVar21 + uVar17;
            uVar21 = (uVar21 << 0x20 | uVar21 >> 0x20) ^ (uVar17 << 0x11 | uVar17 >> 0x2f) ^
                     (uVar16 << 0x15 | uVar16 >> 0x2b) ^ uVar21;
            lVar18 = *plVar14;
            bVar41 = (byte)(uVar21 >> 0x39);
            auVar42 = ZEXT216(CONCAT11(bVar41,bVar41));
            auVar42 = pshuflw(auVar42,auVar42,0);
            lVar26 = 0;
            do {
              uVar21 = uVar21 & plVar14[1];
              auVar43 = *(undefined1 (*) [16])(lVar18 + uVar21);
              auVar48[0] = -(auVar43[0] == auVar42[0]);
              auVar48[1] = -(auVar43[1] == auVar42[1]);
              auVar48[2] = -(auVar43[2] == auVar42[2]);
              auVar48[3] = -(auVar43[3] == auVar42[3]);
              auVar48[4] = -(auVar43[4] == auVar42[4]);
              auVar48[5] = -(auVar43[5] == auVar42[5]);
              auVar48[6] = -(auVar43[6] == auVar42[6]);
              auVar48[7] = -(auVar43[7] == auVar42[7]);
              auVar48[8] = -(auVar43[8] == auVar42[0]);
              auVar48[9] = -(auVar43[9] == auVar42[1]);
              auVar48[10] = -(auVar43[10] == auVar42[2]);
              auVar48[0xb] = -(auVar43[0xb] == auVar42[3]);
              auVar48[0xc] = -(auVar43[0xc] == auVar42[4]);
              auVar48[0xd] = -(auVar43[0xd] == auVar42[5]);
              auVar48[0xe] = -(auVar43[0xe] == auVar42[6]);
              auVar48[0xf] = -(auVar43[0xf] == auVar42[7]);
              uVar33 = (ushort)(SUB161(auVar48 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar48[0xf] >> 7) << 0xf;
              uVar30 = (uint)uVar33;
              while (uVar33 != 0) {
                uVar23 = 0;
                for (uVar24 = uVar30; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
                  uVar23 = uVar23 + 1;
                }
                lVar34 = (uVar23 + uVar21 & plVar14[1]) * -0x98;
                if (lVar15 == *(longlong *)(lVar18 + -0x98 + lVar34)) {
                  lVar18 = lVar18 + lVar34;
                  uVar16 = *(ulonglong *)(lVar18 + -0x80);
                  uVar17 = uVar16 * 0xc;
                  if (0xaaaaaaaaaaaaaaa < uVar16) {
                    uVar39 = 0;
LAB_1408e85c9:
                    pdb_142dc7e2a(uVar39,uVar17);
                    goto LAB_1408e85e6;
                  }
                  uVar27 = *(undefined8 *)(lVar18 + -0x88);
                  if (uVar17 == 0) {
                    pbVar19 = (byte *)0x4;
                    uVar21 = 0;
                  }
                  else {
                    uStack_1d0 = uVar27;
                    cStack_f1 = cVar40;
                    pdb_14007ee60();
                    uVar39 = 4;
                    pbVar19 = pub_1406abab0(uVar17,4);
                    uVar21 = uVar16;
                    uVar27 = uStack_1d0;
                    cVar40 = cStack_f1;
                    if (pbVar19 == (byte *)0x0) goto LAB_1408e85c9;
                  }
                  iStack_128 = (int)uVar21;
                  uStack_124 = (undefined4)(uVar21 >> 0x20);
                  uStack_120 = (uint)pbVar19;
                  uStack_11c = (uint)((ulonglong)pbVar19 >> 0x20);
                  uStack_118 = 0;
                  if (uVar16 != 0) {
                    pub_142e32760(pbVar19,uVar27,uVar17);
                    uStack_118 = uVar16;
                  }
                  pdb_140080930(auStack_1c8,&iStack_128,1);
                  if (!SBORROW8(0,auStack_1c8._0_8_)) {
                    uVar39 = auStack_1b8._8_8_;
                    uVar27 = auStack_1a8._0_8_;
                    fVar51 = (float)lStack_198;
                    if (auStack_1c8._0_8_ != 0) {
                      pub_1406abac0((byte *)auStack_1c8._8_8_,auStack_1c8._0_8_ * 0xc,4);
                    }
                    if (uVar39 != 0) {
                      pub_1406abac0((byte *)uVar27,uVar39 << 2,4);
                    }
                  }
                  goto LAB_1408e8020;
                }
                uVar33 = (ushort)(uVar30 - 1) & (ushort)uVar30;
                uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar33);
              }
              auVar44[0] = -(auVar43[0] == -1);
              auVar44[1] = -(auVar43[1] == -1);
              auVar44[2] = -(auVar43[2] == -1);
              auVar44[3] = -(auVar43[3] == -1);
              auVar44[4] = -(auVar43[4] == -1);
              auVar44[5] = -(auVar43[5] == -1);
              auVar44[6] = -(auVar43[6] == -1);
              auVar44[7] = -(auVar43[7] == -1);
              auVar44[8] = -(auVar43[8] == -1);
              auVar44[9] = -(auVar43[9] == -1);
              auVar44[10] = -(auVar43[10] == -1);
              auVar44[0xb] = -(auVar43[0xb] == -1);
              auVar44[0xc] = -(auVar43[0xc] == -1);
              auVar44[0xd] = -(auVar43[0xd] == -1);
              auVar44[0xe] = -(auVar43[0xe] == -1);
              auVar44[0xf] = -(auVar43[0xf] == -1);
              if ((((((((((((((((SUB161(auVar44 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar44 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar44 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar44 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar44 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar44 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar44 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar44 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar44 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar44 >> 0x4f,0) & 1) != 0) || (SUB161(auVar44 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar44 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar44 >> 0x67,0) & 1) != 0) || (SUB161(auVar44 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar44 >> 0x77,0) & 1) != 0) || auVar44[0xf] < '\0') break;
              uVar21 = uVar21 + lVar26 + 0x10;
              lVar26 = lVar26 + 0x10;
            } while( true );
          }
LAB_1408e8020:
          plVar14 = (longlong *)pdb_140c016e0(uStack_220);
          lVar15 = pdb_140c017b0(iStack_130,uStack_12c);
          fVar53 = 0.0;
          if (plVar14[3] != 0) {
            auStack_1a8 = *(undefined1 (*) [16])(plVar14 + 4);
            auVar45._0_8_ = auStack_1a8._0_8_;
            auVar45._8_4_ = auStack_1a8._0_4_;
            auVar45._12_4_ = auStack_1a8._4_4_;
            auStack_1c8 = auVar45 ^ auVar10;
            auVar46._0_8_ = auStack_1a8._8_8_;
            auVar46._8_4_ = auStack_1a8._8_4_;
            auVar46._12_4_ = auStack_1a8._12_4_;
            auStack_1b8 = auVar46 ^ auVar11;
            lStack_198 = 0;
            uStack_190 = 0;
            uStack_188 = 0;
            iStack_128 = (int)lVar15;
            uStack_124 = (undefined4)((ulonglong)lVar15 >> 0x20);
            pdb_1400b0640(auStack_1c8,&iStack_128,8);
            uVar32 = lStack_198 << 0x38 | uStack_190;
            uVar16 = auStack_1b8._8_8_ ^ uVar32;
            uVar29 = auStack_1c8._0_8_ + auStack_1b8._0_8_;
            uVar21 = (auStack_1b8._0_8_ << 0xd | (ulonglong)auStack_1b8._0_8_ >> 0x33) ^ uVar29;
            uVar17 = (uVar16 << 0x10 | uVar16 >> 0x30) ^ auStack_1c8._8_8_ + uVar16;
            uVar25 = auStack_1c8._8_8_ + uVar16 + uVar21;
            uVar29 = (uVar29 << 0x20 | uVar29 >> 0x20) + uVar17;
            uVar21 = (uVar21 << 0x11 | uVar21 >> 0x2f) ^ uVar25;
            uVar16 = (uVar17 << 0x15 | uVar17 >> 0x2b) ^ uVar29;
            uVar29 = (uVar29 ^ uVar32) + uVar21;
            uVar25 = ((uVar25 << 0x20 | uVar25 >> 0x20) ^ 0xff) + uVar16;
            uVar17 = (uVar21 << 0xd | uVar21 >> 0x33) ^ uVar29;
            uVar16 = (uVar16 << 0x10 | uVar16 >> 0x30) ^ uVar25;
            uVar25 = uVar25 + uVar17;
            uVar29 = (uVar29 << 0x20 | uVar29 >> 0x20) + uVar16;
            uVar17 = (uVar17 << 0x11 | uVar17 >> 0x2f) ^ uVar25;
            uVar16 = (uVar16 << 0x15 | uVar16 >> 0x2b) ^ uVar29;
            uVar29 = uVar29 + uVar17;
            uVar21 = (uVar25 << 0x20 | uVar25 >> 0x20) + uVar16;
            uVar17 = (uVar17 << 0xd | uVar17 >> 0x33) ^ uVar29;
            uVar16 = (uVar16 << 0x10 | uVar16 >> 0x30) ^ uVar21;
            uVar21 = uVar21 + uVar17;
            uVar25 = (uVar29 << 0x20 | uVar29 >> 0x20) + uVar16;
            uVar17 = (uVar17 << 0x11 | uVar17 >> 0x2f) ^ uVar21;
            uVar16 = (uVar16 << 0x15 | uVar16 >> 0x2b) ^ uVar25;
            uVar21 = (uVar21 << 0x20 | uVar21 >> 0x20) + uVar16;
            uVar17 = (uVar17 << 0xd | uVar17 >> 0x33) ^ uVar25 + uVar17;
            uVar16 = (uVar16 << 0x10 | uVar16 >> 0x30) ^ uVar21;
            uVar21 = uVar21 + uVar17;
            uVar21 = (uVar21 << 0x20 | uVar21 >> 0x20) ^ (uVar17 << 0x11 | uVar17 >> 0x2f) ^
                     (uVar16 << 0x15 | uVar16 >> 0x2b) ^ uVar21;
            lVar18 = *plVar14;
            bVar41 = (byte)(uVar21 >> 0x39);
            auVar42 = ZEXT216(CONCAT11(bVar41,bVar41));
            auVar42 = pshuflw(auVar42,auVar42,0);
            lVar26 = 0;
            do {
              uVar21 = uVar21 & plVar14[1];
              auVar43 = *(undefined1 (*) [16])(lVar18 + uVar21);
              auVar49[0] = -(auVar43[0] == auVar42[0]);
              auVar49[1] = -(auVar43[1] == auVar42[1]);
              auVar49[2] = -(auVar43[2] == auVar42[2]);
              auVar49[3] = -(auVar43[3] == auVar42[3]);
              auVar49[4] = -(auVar43[4] == auVar42[4]);
              auVar49[5] = -(auVar43[5] == auVar42[5]);
              auVar49[6] = -(auVar43[6] == auVar42[6]);
              auVar49[7] = -(auVar43[7] == auVar42[7]);
              auVar49[8] = -(auVar43[8] == auVar42[0]);
              auVar49[9] = -(auVar43[9] == auVar42[1]);
              auVar49[10] = -(auVar43[10] == auVar42[2]);
              auVar49[0xb] = -(auVar43[0xb] == auVar42[3]);
              auVar49[0xc] = -(auVar43[0xc] == auVar42[4]);
              auVar49[0xd] = -(auVar43[0xd] == auVar42[5]);
              auVar49[0xe] = -(auVar43[0xe] == auVar42[6]);
              auVar49[0xf] = -(auVar43[0xf] == auVar42[7]);
              uVar33 = (ushort)(SUB161(auVar49 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar49[0xf] >> 7) << 0xf;
              uVar30 = (uint)uVar33;
              while (uVar33 != 0) {
                uVar23 = 0;
                for (uVar24 = uVar30; (uVar24 & 1) == 0; uVar24 = uVar24 >> 1 | 0x80000000) {
                  uVar23 = uVar23 + 1;
                }
                lVar34 = (uVar23 + uVar21 & plVar14[1]) * -0x98;
                if (lVar15 == *(longlong *)(lVar18 + -0x98 + lVar34)) {
                  lVar18 = lVar18 + lVar34;
                  uVar16 = *(ulonglong *)(lVar18 + -0x80);
                  uVar17 = uVar16 * 0xc;
                  if (0xaaaaaaaaaaaaaaa < uVar16) {
                    uVar39 = 0;
LAB_1408e85da:
                    pdb_142dc7e2a(uVar39,uVar17);
LAB_1408e85e6:
                    /* WARNING: Does not return */
                    pcVar7 = (code *)invalidInstructionException();
                    (*pcVar7)();
                  }
                  uVar27 = *(undefined8 *)(lVar18 + -0x88);
                  if (uVar17 == 0) {
                    pbVar19 = (byte *)0x4;
                    uVar21 = 0;
                  }
                  else {
                    uStack_1d0 = uVar27;
                    cStack_f1 = cVar40;
                    pdb_14007ee60();
                    uVar39 = 4;
                    pbVar19 = pub_1406abab0(uVar17,4);
                    uVar21 = uVar16;
                    uVar27 = uStack_1d0;
                    cVar40 = cStack_f1;
                    if (pbVar19 == (byte *)0x0) goto LAB_1408e85da;
                  }
                  iStack_128 = (int)uVar21;
                  uStack_124 = (undefined4)(uVar21 >> 0x20);
                  uStack_120 = (uint)pbVar19;
                  uStack_11c = (uint)((ulonglong)pbVar19 >> 0x20);
                  uStack_118 = 0;
                  if (uVar16 != 0) {
                    pub_142e32760(pbVar19,uVar27,uVar17);
                    uStack_118 = uVar16;
                  }
                  pdb_140080930(auStack_1c8,&iStack_128,1);
                  if (!SBORROW8(0,auStack_1c8._0_8_)) {
                    uVar39 = auStack_1b8._8_8_;
                    uVar27 = auStack_1a8._0_8_;
                    fVar53 = (float)lStack_198;
                    if (auStack_1c8._0_8_ != 0) {
                      pub_1406abac0((byte *)auStack_1c8._8_8_,auStack_1c8._0_8_ * 0xc,4);
                    }
                    if (uVar39 != 0) {
                      pub_1406abac0((byte *)uVar27,uVar39 << 2,4);
                    }
                  }
                  goto LAB_1408e8370;
                }
                uVar33 = (ushort)(uVar30 - 1) & (ushort)uVar30;
                uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar33);
              }
              auVar47[0] = -(auVar43[0] == -1);
              auVar47[1] = -(auVar43[1] == -1);
              auVar47[2] = -(auVar43[2] == -1);
              auVar47[3] = -(auVar43[3] == -1);
              auVar47[4] = -(auVar43[4] == -1);
              auVar47[5] = -(auVar43[5] == -1);
              auVar47[6] = -(auVar43[6] == -1);
              auVar47[7] = -(auVar43[7] == -1);
              auVar47[8] = -(auVar43[8] == -1);
              auVar47[9] = -(auVar43[9] == -1);
              auVar47[10] = -(auVar43[10] == -1);
              auVar47[0xb] = -(auVar43[0xb] == -1);
              auVar47[0xc] = -(auVar43[0xc] == -1);
              auVar47[0xd] = -(auVar43[0xd] == -1);
              auVar47[0xe] = -(auVar43[0xe] == -1);
              auVar47[0xf] = -(auVar43[0xf] == -1);
              if ((((((((((((((((SUB161(auVar47 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar47 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar47 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar47 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar47 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar47 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar47 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar47 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar47 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar47 >> 0x4f,0) & 1) != 0) || (SUB161(auVar47 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar47 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar47 >> 0x67,0) & 1) != 0) || (SUB161(auVar47 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar47 >> 0x77,0) & 1) != 0) || auVar47[0xf] < '\0') break;
              uVar21 = uVar21 + lVar26 + 0x10;
              lVar26 = lVar26 + 0x10;
            } while( true );
          }
LAB_1408e8370:
          fVar54 = fVar53 + fVar51;
          if (fVar53 + fVar51 <= fVar9) {
            fVar54 = fVar9;
          }
          fVar51 = fVar51 / fVar54;
          if (cVar40 == '\0') {
            if (cStack_f3 == '\0') {
              fVar50 = (float)pdb_140de8220();
              fVar50 = (fVar8 - fVar51) * fVar50 + fVar51;
              goto LAB_1408e83e9;
            }
            fVar50 = fVar50 * (fVar8 - fVar51) + fVar51;
          }
          else if (cStack_f2 == '\0') {
            fVar50 = (float)pdb_140de8220();
            fVar50 = fVar51 * fVar50;
LAB_1408e83e9:
            uVar55 = uVar55 ^ _DAT_142e37820;
            fVar52 = fVar52 + _DAT_142f94714;
          }
          else {
            fVar50 = fVar50 * fVar51;
          }
          uVar12 = *(undefined4 *)((longlong)pauVar38 + lVar13 + -0x68);
          uVar39 = *(undefined8 *)((longlong)pauVar38 + lVar13 + -0x58);
          uVar27 = *(undefined8 *)((longlong)pauVar38 + lVar13 + -0x60);
          uStack_180 = pdb_14008fbf0();
          auStack_1c8._0_8_ = 2;
          auStack_1b8._0_8_ = 2;
          auStack_1a8._4_4_ = uStack_218;
          auStack_1a8._0_4_ = uStack_214;
          auStack_1a8._8_4_ = uVar55;
          auStack_1a8._12_4_ = fVar50;
          lStack_198 = CONCAT44(lStack_198._4_4_,fVar52);
          uStack_188._0_3_ = CONCAT12(4,(undefined2)uStack_188);
          uStack_178 = 8;
          uStack_168 = 0;
          uStack_160 = 0;
          uStack_158 = 0;
          uStack_156 = 0;
          uStack_154 = 2;
          uStack_150 = uVar27;
          uStack_148 = uVar39;
          uStack_140 = uVar12;
          pdb_140c45a20(&iStack_128,uVar5,uVar12);
          if (iStack_128 == 1) {
            uStack_208 = uStack_11c;
            uStack_210 = CONCAT44(uStack_120,uStack_124);
          }
          else {
            uStack_208 = 0;
            uStack_210 = 0;
          }
          iStack_128 = (int)uStack_210;
          uStack_124 = (undefined4)((ulonglong)uStack_210 >> 0x20);
          uStack_120 = uStack_208;
          uStack_11c = uStack_11c & 0xffffff00;
          *puStack_200 = uStack_100;
          *puStack_1f0 = uStack_fc;
          *puStack_1e0 = uStack_f8;
          pdb_1414c40f0(auStack_1c8,0,&iStack_128,uStack_138,uStack_1f8,uStack_1e8,param_6,
                        uStack_1d8);
        }
      }
    }
    lVar31 = CONCAT44(uStack_244,uStack_248);
    if (lVar31 != 0) {
      uVar16 = lVar31 * 0x68 + 0x77U & 0xfffffffffffffff0;
      uVar17 = lVar31 + uVar16 + 0x11;
      if (uVar17 != 0) {
        pub_1406abac0((byte *)((longlong)pauVar20 - uVar16),uVar17,0x10);
      }
    }
  } while( true );
LAB_1408e8890:
  if (pauVar20 == pauStack_110) goto LAB_1408e88b0;
  pauVar38 = (undefined1 (*) [16])(pauVar20[4] + 8);
  do {
    *puVar2 = *puVar2 + 1;
    uStack_140 = *(undefined4 *)pauVar20[3];
    auStack_1c8 = *pauVar20;
    uStack_150 = *(undefined8 *)pauVar20[1];
    uStack_148 = *(undefined8 *)(pauVar20[1] + 8);
    uStack_178 = *(undefined8 *)pauVar20[2];
    uStack_170 = *(undefined8 *)(pauVar20[2] + 8);
    auStack_1b8._0_8_ = 3;
    uStack_168 = 0;
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_156 = 0;
    uStack_154 = 2;
    uStack_248 = *(undefined4 *)(pauVar20[3] + 0xc);
    pauStack_250 = *(undefined1 (**) [16])(pauVar20[3] + 4);
    uStack_244 = uStack_244 & 0xffffff00;
    *puStack_200 = uStack_100;
    *puStack_1f0 = uStack_fc;
    *puStack_1e0 = uStack_f8;
    pdb_1414c40f0(auStack_1c8,0,&pauStack_250,uStack_138,uStack_1f8,uStack_1e8,param_6,uStack_1d8);
    *puVar6 = uVar12;
    pdb_14007ee60();
    pbVar19 = pub_1406abab0(0x30,8);
    if (pbVar19 == (byte *)0x0) {
LAB_1408e8a80:
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x30);
    }
    pbVar19[0] = 1;
    pbVar19[1] = 0;
    pbVar19[2] = 0;
    pbVar19[3] = 0;
    pbVar19[4] = 0;
    pbVar19[5] = 0;
    pbVar19[6] = 0;
    pbVar19[7] = 0;
    pbVar19[8] = 1;
    pbVar19[9] = 0;
    pbVar19[10] = 0;
    pbVar19[0xb] = 0;
    pbVar19[0xc] = 0;
    pbVar19[0xd] = 0;
    pbVar19[0xe] = 0;
    pbVar19[0xf] = 0;
    pbVar19[0x10] = 3;
    pbVar19[0x11] = 0;
    pbVar19[0x12] = 0;
    pbVar19[0x13] = 0;
    pbVar19[0x14] = 0;
    pbVar19[0x15] = 0;
    pbVar19[0x16] = 0;
    pbVar19[0x17] = 0;
    auStack_1c8._8_8_ = pbVar19;
    auStack_1c8._0_8_ = 10;
    pdb_140ae5180(uVar5,auStack_1c8,&UNK_14301bdc8);
    pauVar20 = pauVar38;
    if (pauVar38 != (undefined1 (*) [16])0x0) goto LAB_1408e8890;
LAB_1408e88b0:
    pauVar20 = pauVar22;
    if ((pauVar20 == (undefined1 (*) [16])0x0) || (pauVar20 == pauStack_108)) {
      return;
    }
    pauVar22 = (undefined1 (*) [16])(pauVar20[4] + 8);
    pauVar38 = (undefined1 (*) [16])0x0;
  } while( true );
}

