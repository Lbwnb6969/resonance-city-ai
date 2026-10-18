// VA 0x141c2f990, PDB extent 2063 bytes
// turbosloth::store::DiskStore::read_build_record
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::store::DiskStore::read_build_record
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 2063 */

void pdb_141c2f990(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_308 [16];
  undefined1 auStack_2f8 [128];
  longlong *aplStack_278 [2];
  undefined1 auStack_268 [16];
  undefined1 auStack_258 [48];
  longlong alStack_228 [8];
  ulonglong uStack_1e8;
  byte *pbStack_1e0;
  longlong *aplStack_1d0 [2];
  byte *pbStack_1c0;
  byte *pbStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  char cStack_168;
  char cStack_167;
  char cStack_166;
  char cStack_165;
  char cStack_164;
  char cStack_163;
  char cStack_162;
  char cStack_161;
  char cStack_160;
  char cStack_15f;
  char cStack_15e;
  char cStack_15d;
  char cStack_15c;
  char cStack_15b;
  char cStack_15a;
  char cStack_159;
  byte *pbStack_158;
  byte *pbStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  byte *pbStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  byte *pbStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  pdb_142570b50(&cStack_168,param_2 + 0x20);
  auVar11[0] = -(cStack_168 == DAT_14300c7d0);
  auVar11[1] = -(cStack_167 == UNK_14300c7d1);
  auVar11[2] = -(cStack_166 == UNK_14300c7d2);
  auVar11[3] = -(cStack_165 == UNK_14300c7d3);
  auVar11[4] = -(cStack_164 == UNK_14300c7d4);
  auVar11[5] = -(cStack_163 == UNK_14300c7d5);
  auVar11[6] = -(cStack_162 == UNK_14300c7d6);
  auVar11[7] = -(cStack_161 == UNK_14300c7d7);
  auVar11[8] = -(cStack_160 == UNK_14300c7d8);
  auVar11[9] = -(cStack_15f == UNK_14300c7d9);
  auVar11[10] = -(cStack_15e == UNK_14300c7da);
  auVar11[0xb] = -(cStack_15d == UNK_14300c7db);
  auVar11[0xc] = -(cStack_15c == UNK_14300c7dc);
  auVar11[0xd] = -(cStack_15b == UNK_14300c7dd);
  auVar11[0xe] = -(cStack_15a == UNK_14300c7de);
  auVar11[0xf] = -(cStack_159 == UNK_14300c7df);
  if ((ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe | (ushort)(auVar11[0xf] >> 7) << 0xf)
      != 0xffff) {
    pub_142e32760(auStack_2f8,&pbStack_158,0x90);
    pdb_1425e6740(&cStack_168,auStack_308,&UNK_14339ee97,7);
    auVar12[0] = -(cStack_168 == DAT_14300c7d0);
    auVar12[1] = -(cStack_167 == UNK_14300c7d1);
    auVar12[2] = -(cStack_166 == UNK_14300c7d2);
    auVar12[3] = -(cStack_165 == UNK_14300c7d3);
    auVar12[4] = -(cStack_164 == UNK_14300c7d4);
    auVar12[5] = -(cStack_163 == UNK_14300c7d5);
    auVar12[6] = -(cStack_162 == UNK_14300c7d6);
    auVar12[7] = -(cStack_161 == UNK_14300c7d7);
    auVar12[8] = -(cStack_160 == UNK_14300c7d8);
    auVar12[9] = -(cStack_15f == UNK_14300c7d9);
    auVar12[10] = -(cStack_15e == UNK_14300c7da);
    auVar12[0xb] = -(cStack_15d == UNK_14300c7db);
    auVar12[0xc] = -(cStack_15c == UNK_14300c7dc);
    auVar12[0xd] = -(cStack_15b == UNK_14300c7dd);
    auVar12[0xe] = -(cStack_15a == UNK_14300c7de);
    auVar12[0xf] = -(cStack_159 == UNK_14300c7df);
    if ((ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) | (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe | (ushort)(auVar12[0xf] >> 7) << 0xf
                ) == 0xffff) {
      pdb_141c36de0(&pbStack_158);
      param_1[1] = 0;
      *param_1 = 2;
    }
    else {
      pub_142e32760(auStack_258,&pbStack_158,0x90);
      if (alStack_228[0] != 0) {
        uStack_58 = param_3;
        uStack_50 = param_4;
        pdb_142622500(&cStack_168,auStack_268,alStack_228,&uStack_58);
        lVar2 = CONCAT17(cStack_161,
                         CONCAT16(cStack_162,
                                  CONCAT15(cStack_163,
                                           CONCAT14(cStack_164,
                                                    CONCAT13(cStack_165,
                                                             CONCAT12(cStack_166,
                                                                      CONCAT11(cStack_167,cStack_168
                                                                              )))))));
        if (lVar2 == 4) {
          uVar10 = CONCAT17(cStack_159,
                            CONCAT16(cStack_15a,
                                     CONCAT15(cStack_15b,
                                              CONCAT14(cStack_15c,
                                                       CONCAT13(cStack_15d,
                                                                CONCAT12(cStack_15e,
                                                                         CONCAT11(cStack_15f,
                                                                                  cStack_160)))))));
          uVar9 = (longlong)cStack_159 >> 7 & uVar10 + 0x8000000000000001;
          if (uVar9 == 2) {
            pdb_1404b38e0(&pbStack_158);
          }
          else if ((uVar9 == 0) && (uVar10 != 0)) {
            pub_1406abac0(pbStack_158,uVar10,1);
          }
        }
        else {
          uStack_178 = uStack_110;
          uStack_188 = uStack_120;
          uVar7 = uStack_188;
          uStack_180 = uStack_118;
          uVar8 = uStack_180;
          uStack_198 = uStack_130;
          uVar5 = uStack_198;
          uStack_190 = uStack_128;
          uVar6 = uStack_190;
          uStack_1a8 = uStack_140;
          uVar3 = uStack_1a8;
          uStack_1a0 = uStack_138;
          uVar4 = uStack_1a0;
          pbStack_1b8 = pbStack_150;
          uStack_1b0 = uStack_148;
          pbStack_1c0 = pbStack_158;
          if (lVar2 != 3) {
            uStack_1a8._0_4_ = (undefined4)uStack_140;
            uStack_1a8._4_4_ = (undefined4)((ulonglong)uStack_140 >> 0x20);
            uStack_1a0._0_4_ = (undefined4)uStack_138;
            uStack_1a0._4_4_ = (undefined4)((ulonglong)uStack_138 >> 0x20);
            uStack_198._0_4_ = (undefined4)uStack_130;
            uStack_198._4_4_ = (undefined4)((ulonglong)uStack_130 >> 0x20);
            uStack_190._0_4_ = (undefined4)uStack_128;
            uStack_190._4_4_ = (undefined4)((ulonglong)uStack_128 >> 0x20);
            pbStack_a0 = pbStack_150;
            uStack_98 = uStack_148;
            uStack_60 = uStack_110;
            uStack_188._0_4_ = (undefined4)uStack_120;
            uStack_188._4_4_ = (undefined4)((ulonglong)uStack_120 >> 0x20);
            uStack_180._0_4_ = (undefined4)uStack_118;
            uStack_180._4_4_ = (undefined4)((ulonglong)uStack_118 >> 0x20);
            uStack_70 = (undefined4)uStack_188;
            uStack_6c = uStack_188._4_4_;
            uStack_68 = (undefined4)uStack_180;
            uStack_64 = uStack_180._4_4_;
            uStack_80 = (undefined4)uStack_198;
            uStack_7c = uStack_198._4_4_;
            uStack_78 = (undefined4)uStack_190;
            uStack_74 = uStack_190._4_4_;
            uStack_90 = (undefined4)uStack_1a8;
            uStack_8c = uStack_1a8._4_4_;
            uStack_88 = (undefined4)uStack_1a0;
            uStack_84 = uStack_1a0._4_4_;
            pbStack_a8 = pbStack_158;
            uStack_1a8 = uVar3;
            uStack_1a0 = uVar4;
            uStack_198 = uVar5;
            uStack_190 = uVar6;
            uStack_188 = uVar7;
            uStack_180 = uVar8;
                    /* WARNING: Could not recover jumptable at 0x000141c2fcca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&UNK_1433a01c4 + *(int *)(&UNK_1433a01c4 + (longlong)pbStack_150 * 4)))();
            return;
          }
        }
      }
      param_1[1] = 0;
      *param_1 = 2;
      if (uStack_1e8 != 0) {
        pub_1406abac0(pbStack_1e0,uStack_1e8,1);
      }
      pdb_141ac4c90(auStack_268);
      LOCK();
      *aplStack_1d0[0] = *aplStack_1d0[0] + -1;
      UNLOCK();
      if (*aplStack_1d0[0] == 0) {
        pdb_140ddc2b0(aplStack_1d0);
      }
    }
    LOCK();
    *aplStack_278[0] = *aplStack_278[0] + -1;
    UNLOCK();
    if (*aplStack_278[0] == 0) {
      pdb_140ddc3c0(aplStack_278);
    }
    pdb_14098e730(auStack_308);
    return;
  }
  if (pbStack_158 == (byte *)0x8000000000000005) {
    pbStack_40 = pbStack_150;
    plVar1 = *(longlong **)(pbStack_150 + 0x90);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      pdb_140ddc3c0(pbStack_150 + 0x90);
    }
    pdb_14098e730(pbStack_40);
    pbStack_158 = (byte *)0xa0;
    uVar10 = 0x10;
    pbStack_150 = pbStack_40;
  }
  else {
    uVar10 = (longlong)pbStack_158 >> 0x3f & (ulonglong)(pbStack_158 + -0x7fffffffffffffff);
    if (uVar10 == 2) {
      pdb_1404b38e0(&pbStack_150);
      goto LAB_141c2fbf0;
    }
    if ((uVar10 != 0) || (pbStack_158 == (byte *)0x0)) goto LAB_141c2fbf0;
    uVar10 = 1;
  }
  pub_1406abac0(pbStack_150,(ulonglong)pbStack_158,uVar10);
LAB_141c2fbf0:
  param_1[1] = 0;
  *param_1 = 2;
  return;
}

