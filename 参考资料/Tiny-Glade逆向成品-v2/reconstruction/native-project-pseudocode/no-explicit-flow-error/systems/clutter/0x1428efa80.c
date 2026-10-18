// VA 0x1428efa80, PDB extent 1932 bytes
// system_clutter::autoclutter::add_lantern_water_setdresssing::add_lantern_water_setdresssing
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/add_lantern_water_setdresssing.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_clutter::autoclutter::add_lantern_water_setdresssing::add_lantern_water_setdresssing
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/add_lantern_water_setdresssing.rs
   Extent: 1932 */

void pdb_1428efa80(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,longlong *param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  char cVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [16];
  short sVar17;
  uint uVar18;
  undefined8 *puVar19;
  uint uVar20;
  undefined1 (*pauVar21) [16];
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar25 [16];
  float fVar26;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  float fStack_240;
  undefined4 uStack_23c;
  undefined8 *puStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  longlong lStack_218;
  ulonglong uStack_210;
  undefined8 uStack_208;
  longlong lStack_200;
  longlong lStack_1f8;
  longlong lStack_1f0;
  undefined1 (*pauStack_1e8) [16];
  longlong lStack_1e0;
  undefined8 *puStack_1d8;
  longlong lStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined4 *puStack_1b8;
  longlong lStack_1b0;
  undefined8 uStack_1a4;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 auStack_188 [16];
  ulonglong uStack_178;
  longlong lStack_170;
  undefined1 (*pauStack_168) [16];
  undefined1 (*pauStack_160) [16];
  ushort uStack_150;
  longlong lStack_148;
  longlong lStack_140;
  undefined1 (*pauStack_138) [16];
  ushort uStack_128;
  longlong lStack_120;
  undefined1 auStack_118 [216];
  
  lVar12 = pdb_1406d0830(*param_3);
  puVar19 = (undefined8 *)(lVar12 + 0x20);
  puVar14 = (undefined8 *)(lVar12 + 0x28);
  if (*(char *)(lVar12 + 0x298) == '\0') {
    puVar14 = (undefined8 *)(lVar12 + 0x10);
    puVar19 = (undefined8 *)(lVar12 + 8);
  }
  uStack_190 = *puVar14;
  uStack_198 = *puVar19;
  lStack_1b0 = *param_6 + 0x98;
  cVar11 = pdb_140a3d910();
  if (cVar11 != '\0') {
    return;
  }
  pdb_140c409f0(&uStack_178,*param_4);
  fVar10 = _UNK_142f6e3e4;
  fVar9 = _DAT_142f6e3e0;
  fVar8 = _DAT_142e3c670;
  fVar7 = _DAT_142e3b1d8;
  fVar6 = _DAT_142e36f28;
  uVar18 = (uint)uStack_150;
  uStack_208 = *param_5;
  lVar12 = *param_2;
  puStack_1c8 = (undefined8 *)(lVar12 + 0x100);
  puStack_1d8 = (undefined8 *)(lVar12 + 0x108);
  puStack_1c0 = (undefined8 *)(lVar12 + 0x110);
  uStack_24c = *(undefined4 *)((longlong)param_1 + 0x1c);
  lStack_218 = *param_1;
  puStack_1b8 = (undefined4 *)param_1[2];
  uVar20 = (uint)uStack_128;
  lStack_1d0 = lStack_218 + 0x48;
  uStack_210 = uStack_178;
  pauVar16 = pauStack_138;
  pauVar21 = pauStack_168;
  do {
    if ((uStack_178 & 1) == 0) {
      if (pauVar21 == (undefined1 (*) [16])0x0) goto LAB_1428efd8b;
      if (lStack_148 == 0) {
        lStack_148 = 0;
        goto LAB_1428efd8b;
      }
LAB_1428efd3a:
      sVar17 = (short)uVar18;
joined_r0x0001428efd3e:
      if (sVar17 == 0) {
        do {
          auVar25 = *pauStack_160;
          pauVar21 = pauVar21 + -0x68;
          pauStack_160 = pauStack_160 + 1;
          uVar18 = (ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar18 == 0);
      }
      uVar4 = 0;
      for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      uVar18 = uVar18 - 1 & uVar18;
      lVar12 = (ulonglong)uVar4 * -0x68 + (longlong)pauVar21;
      lStack_148 = lStack_148 + -1;
      uVar4 = *(uint *)(lVar12 + -0x60);
    }
    else {
      if (pauVar21 != (undefined1 (*) [16])0x0) {
        if (lStack_148 != 0) goto LAB_1428efd3a;
        lStack_148 = 0;
      }
      if (lStack_170 != 0) {
        pauVar21 = *(undefined1 (**) [16])(lStack_170 + 0x30);
        lStack_148 = *(longlong *)(lStack_170 + 0x48);
        auVar25 = *pauVar21;
        pauStack_160 = pauVar21 + 1;
        uVar18 = ~(uint)(ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar25[0xf] >> 7) << 0xf);
        if (lStack_148 != 0) {
          lStack_170 = 0;
          sVar17 = (short)uVar18;
          goto joined_r0x0001428efd3e;
        }
        lStack_148 = 0;
      }
      lStack_170 = 0;
LAB_1428efd8b:
      if (lStack_140 == 0) {
        return;
      }
      if (lStack_120 == 0) {
        return;
      }
      if ((short)uVar20 == 0) {
        do {
          auVar25 = *pauVar16;
          lStack_140 = lStack_140 + -0x680;
          pauVar16 = pauVar16 + 1;
          uVar20 = (ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar25[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar20 == 0);
      }
      uVar4 = 0;
      for (uVar5 = uVar20; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      uVar20 = uVar20 - 1 & uVar20;
      lVar12 = (ulonglong)uVar4 * -0x68 + lStack_140;
      lStack_120 = lStack_120 + -1;
      pauVar21 = (undefined1 (*) [16])0x0;
      uVar4 = *(uint *)(lVar12 + -0x60);
    }
    if (((uVar4 & 0xfffffffe) == 4) && (*(char *)(lVar12 + -8) == '\0')) {
      uVar1 = *(undefined4 *)(lVar12 + -0x68);
      lStack_200 = lStack_120;
      lStack_1f8 = lStack_170;
      lStack_1f0 = lStack_148;
      pauStack_1e8 = pauStack_160;
      lStack_1e0 = lStack_140;
      pdb_140c45ec0(auStack_118,uStack_208,uVar1,&UNK_1435b2ee8);
      pdb_140defa80(auStack_188);
      uStack_248 = uVar1;
      uStack_268 = pdb_140dedfe0(uVar1);
      puVar19 = (undefined8 *)0x0;
      do {
        fVar26 = (float)(longlong)puVar19 / _DAT_142e37834;
        fVar22 = (float)pdb_140e02880(&uStack_268);
        if (NAN(fVar22 * fVar7 + fVar26)) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_14366db40,0x1d,&UNK_14366db88);
        }
        fVar22 = (float)pub_142e32a70();
        auVar25._4_4_ = 0;
        auVar25._0_4_ = (uint)(fVar22 + fVar6) & -(uint)(fVar22 < 0.0);
        auVar25._8_4_ = (int)extraout_XMM0_Qb;
        auVar25._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
        auVar25 = ZEXT416(~-(uint)(fVar22 < 0.0) & (uint)fVar22) | auVar25;
        fVar22 = auVar25._0_4_;
        uStack_258 = CONCAT44(uStack_258._4_4_,fVar22);
        if ((fVar22 < 0.0) || (fVar6 < fVar22)) {
          puStack_238 = &uStack_258;
          pcStack_230 = pdb_140f70fc0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_1435b38c0,&puStack_238,&UNK_1435b38a8);
        }
        fVar22 = (float)pdb_140def2c0(auStack_188);
        uStack_260 = CONCAT44(auVar25._0_4_,fVar22);
        fVar23 = (float)pdb_140e02880(&uStack_268);
        fVar24 = (float)pdb_140e02880(&uStack_268);
        uStack_260 = CONCAT44(auVar25._0_4_ + fVar24 * fVar10,fVar22 + fVar23 * fVar9);
        fVar22 = (float)pdb_140a7d8d0(&uStack_198);
        if (0.0 < fVar22) {
          fVar22 = (float)pdb_140e02880(&uStack_268);
          fVar23 = (float)pdb_140e02880(&uStack_268);
          fVar24 = fVar6 / SQRT(fVar23 * fVar23 + fVar22 * fVar22);
          puStack_238 = (undefined8 *)CONCAT44(fVar24 * fVar23,fVar24 * fVar22);
          pdb_140df4520(&uStack_1a4,&puStack_238);
          pdb_140df4520(&uStack_244,&uStack_260);
          pcStack_230._0_4_ = uStack_248;
          puStack_228 = &UNK_1435b2f00;
          uStack_220 = 7;
          puStack_238 = puVar19;
          uVar13 = pdb_1428f93f0(&puStack_238);
          cVar11 = pdb_140901020(lStack_1b0);
          fVar22 = fVar8;
          if (cVar11 == '\0') {
            puVar14 = puStack_1c8;
            fVar23 = _DAT_143009bc0;
            if ((uVar13 & 1) == 0) {
              fVar23 = fVar26 * _DAT_142e42360 + fStack_240;
              puVar14 = puStack_1d8;
              fVar22 = _DAT_142f6e3f0;
            }
          }
          else {
            puVar14 = puStack_1c0;
            fVar23 = fVar26 * _DAT_142f684a8 + fStack_240;
          }
          uVar3 = *puVar14;
          *puStack_1b8 = uStack_24c;
          fStack_240 = fVar23;
          fVar26 = (float)pdb_140e02880(&uStack_268);
          fVar23 = fVar26 * _DAT_142e37990;
          puStack_238 = (undefined8 *)CONCAT44(fStack_240,uStack_244);
          pcStack_230 = (code *)CONCAT44(pcStack_230._4_4_,uStack_23c);
          uStack_250 = uStack_19c;
          uStack_258 = uStack_1a4;
          lVar12 = *(longlong *)(lStack_218 + 0x58);
          if (lVar12 == *(longlong *)(lStack_218 + 0x48)) {
            pdb_142d8d8d0(lStack_1d0);
          }
          lVar2 = *(longlong *)(lStack_218 + 0x50);
          lVar15 = lVar12 * 0x68;
          *(undefined8 *)(lVar2 + lVar15) = 5;
          *(undefined4 *)(lVar2 + 0x18 + lVar15) = 2;
          *(undefined1 *)(lVar2 + 0x30 + lVar15) = 5;
          *(undefined4 *)(lVar2 + 0x34 + lVar15) = 0;
          *(undefined8 *)(lVar2 + 0x38 + lVar15) = uVar3;
          *(ulonglong *)(lVar2 + 0x40 + lVar15) = uVar13;
          *(undefined8 **)(lVar2 + 0x48 + lVar15) = puStack_238;
          *(undefined4 *)(lVar2 + 0x50 + lVar15) = pcStack_230._0_4_;
          *(undefined8 *)(lVar2 + 0x54 + lVar15) = uStack_258;
          *(undefined4 *)(lVar2 + 0x5c + lVar15) = uStack_250;
          *(float *)(lVar2 + 0x60 + lVar15) = fVar22 * (fVar23 + (fVar6 - fVar26) * fVar8);
          *(longlong *)(lStack_218 + 0x58) = lVar12 + 1;
        }
        puVar19 = (undefined8 *)((longlong)puVar19 + 1);
        uStack_178 = uStack_210;
        lStack_120 = lStack_200;
        lStack_140 = lStack_1e0;
        pauStack_160 = pauStack_1e8;
        lStack_148 = lStack_1f0;
        lStack_170 = lStack_1f8;
      } while (puVar19 != (undefined8 *)0x5);
    }
  } while( true );
}

