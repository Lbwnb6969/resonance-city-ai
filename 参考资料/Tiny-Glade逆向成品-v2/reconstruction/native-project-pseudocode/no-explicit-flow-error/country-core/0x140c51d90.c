// VA 0x140c51d90, PDB extent 4499 bytes
// country_core::render::nani::mesh_atlas::MeshAtlas::add
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/mesh_atlas.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::nani::mesh_atlas::MeshAtlas::add
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/mesh_atlas.rs
   Extent: 4499 */

undefined4 *
pdb_140c51d90(undefined4 *param_1,ulonglong *param_2,undefined8 param_3,ulonglong param_4)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 uVar5;
  code *pcVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  byte *pbVar33;
  undefined4 *puVar34;
  undefined1 (*pauVar35) [16];
  int iVar36;
  ulonglong uVar37;
  undefined8 *puVar38;
  ulonglong uVar39;
  byte *pbVar40;
  uint uVar41;
  longlong lVar42;
  ulonglong uVar43;
  uint uVar44;
  ulonglong uVar45;
  undefined1 (*pauVar46) [16];
  longlong lVar47;
  ulonglong *puVar48;
  ushort uVar49;
  longlong lVar50;
  float *pfVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  longlong lVar54;
  undefined1 (*pauVar55) [16];
  byte bVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar61;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 (*pauStack_1b8) [16];
  undefined1 (*pauStack_1b0) [16];
  undefined1 *puStack_1a8;
  ulonglong uStack_1a0;
  byte *pbStack_198;
  ulonglong uStack_190;
  longlong lStack_188;
  byte *pbStack_180;
  ulonglong uStack_178;
  longlong lStack_170;
  byte *pbStack_168;
  ulonglong uStack_160;
  undefined1 auStack_158 [8];
  ulonglong uStack_150;
  undefined4 *puStack_148;
  ulonglong uStack_140;
  ulonglong uStack_138;
  ulonglong *puStack_130;
  ulonglong uStack_128;
  ulonglong uStack_120;
  undefined1 (*pauStack_118) [16];
  undefined1 (*pauStack_110) [16];
  longlong *plStack_108;
  code *pcStack_100;
  byte *pbStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  undefined1 (*pauStack_c8) [16];
  ulonglong uStack_c0;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  uVar45 = *(ulonglong *)(param_4 + 0x10);
  auStack_158 = (undefined1  [8])param_3;
  if (uVar45 == 0) {
    pauStack_118 = (undefined1 (*) [16])auStack_158;
    pauStack_110 = (undefined1 (*) [16])pdb_140c51b70;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14306e58b,&pauStack_118,&UNK_14306e5d0);
  }
  pbStack_d0 = *(byte **)(param_4 + 0x50);
  fVar70 = 0.0;
  if (pbStack_d0 != (byte *)0x0) {
    uVar37 = pdb_1400af950(param_4 + 0x58,&UNK_14306e5e8,0xf);
    lVar47 = *(longlong *)(param_4 + 0x38);
    uVar39 = *(ulonglong *)(param_4 + 0x40);
    bVar56 = (byte)(uVar37 >> 0x39);
    auVar57 = ZEXT216(CONCAT11(bVar56,bVar56));
    auVar57 = pshuflw(auVar57,auVar57,0);
    lVar42 = 0;
    while( true ) {
      uVar37 = uVar37 & uVar39;
      auVar74 = *(undefined1 (*) [16])(lVar47 + uVar37);
      auVar66[0] = -(auVar74[0] == auVar57[0]);
      auVar66[1] = -(auVar74[1] == auVar57[1]);
      auVar66[2] = -(auVar74[2] == auVar57[2]);
      auVar66[3] = -(auVar74[3] == auVar57[3]);
      auVar66[4] = -(auVar74[4] == auVar57[4]);
      auVar66[5] = -(auVar74[5] == auVar57[5]);
      auVar66[6] = -(auVar74[6] == auVar57[6]);
      auVar66[7] = -(auVar74[7] == auVar57[7]);
      auVar66[8] = -(auVar74[8] == auVar57[0]);
      auVar66[9] = -(auVar74[9] == auVar57[1]);
      auVar66[10] = -(auVar74[10] == auVar57[2]);
      auVar66[0xb] = -(auVar74[0xb] == auVar57[3]);
      auVar66[0xc] = -(auVar74[0xc] == auVar57[4]);
      auVar66[0xd] = -(auVar74[0xd] == auVar57[5]);
      auVar66[0xe] = -(auVar74[0xe] == auVar57[6]);
      auVar66[0xf] = -(auVar74[0xf] == auVar57[7]);
      uVar49 = (ushort)(SUB161(auVar66 >> 7,0) & 1) | (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar66 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar66 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar66 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar66 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar66 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar66 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar66 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar66 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar66 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar66 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar66 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe | (ushort)(auVar66[0xf] >> 7) << 0xf;
      uVar44 = (uint)uVar49;
      while (uVar49 != 0) {
        uVar7 = 0;
        for (uVar41 = uVar44; (uVar41 & 1) == 0; uVar41 = uVar41 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        lVar50 = (uVar7 + uVar37 & uVar39) * -0x38;
        if ((*(longlong *)(lVar47 + -0x28 + lVar50) == 0xf) &&
           (plVar4 = *(longlong **)(lVar50 + lVar47 + -0x30),
           *(longlong *)((longlong)plVar4 + 7) == 0x6e6f697469736f50 &&
           *plVar4 == 0x505f786574726556)) {
          uVar37 = pdb_1400af950(param_4 + 0x58,&UNK_14306e5e8,0xf);
          auVar69._0_8_ = 0x505f786574726556;
          bVar56 = (byte)(uVar37 >> 0x39);
          auVar57 = ZEXT216(CONCAT11(bVar56,bVar56));
          auVar57 = pshuflw(auVar57,auVar57,0);
          uVar43 = 0;
          goto LAB_140c51f31;
        }
        uVar49 = (ushort)(uVar44 - 1) & (ushort)uVar44;
        uVar44 = CONCAT22((short)(uVar44 - 1 >> 0x10),uVar49);
      }
      auVar63[0] = -(auVar74[0] == -1);
      auVar63[1] = -(auVar74[1] == -1);
      auVar63[2] = -(auVar74[2] == -1);
      auVar63[3] = -(auVar74[3] == -1);
      auVar63[4] = -(auVar74[4] == -1);
      auVar63[5] = -(auVar74[5] == -1);
      auVar63[6] = -(auVar74[6] == -1);
      auVar63[7] = -(auVar74[7] == -1);
      auVar63[8] = -(auVar74[8] == -1);
      auVar63[9] = -(auVar74[9] == -1);
      auVar63[10] = -(auVar74[10] == -1);
      auVar63[0xb] = -(auVar74[0xb] == -1);
      auVar63[0xc] = -(auVar74[0xc] == -1);
      auVar63[0xd] = -(auVar74[0xd] == -1);
      auVar63[0xe] = -(auVar74[0xe] == -1);
      auVar63[0xf] = -(auVar74[0xf] == -1);
      if ((((((((((((((((SUB161(auVar63 >> 7,0) & 1) != 0 || (SUB161(auVar63 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar63 >> 0x17,0) & 1) != 0) || (SUB161(auVar63 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar63 >> 0x27,0) & 1) != 0) || (SUB161(auVar63 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar63 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar63 >> 0x3f,0) & 1) != 0) || (SUB161(auVar63 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar63 >> 0x4f,0) & 1) != 0) || (SUB161(auVar63 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar63 >> 0x5f,0) & 1) != 0) || (SUB161(auVar63 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar63 >> 0x6f,0) & 1) != 0) || (SUB161(auVar63 >> 0x77,0) & 1) != 0) ||
          auVar63[0xf] < '\0') break;
      uVar37 = uVar37 + lVar42 + 0x10;
      lVar42 = lVar42 + 0x10;
    }
  }
LAB_140c52025:
  uVar39 = param_2[0x15];
  if (uVar39 == 0) goto LAB_140c52288;
LAB_140c52035:
  param_2[0x15] = uVar39 - 1;
  uStack_138 = (ulonglong)*(uint *)((param_2[0x14] - 4) + uVar39 * 4);
  goto LAB_140c5229c;
LAB_140c51f31:
  uVar37 = uVar37 & uVar39;
  auVar74 = *(undefined1 (*) [16])(lVar47 + uVar37);
  auVar67[0] = -(auVar74[0] == auVar57[0]);
  auVar67[1] = -(auVar74[1] == auVar57[1]);
  auVar67[2] = -(auVar74[2] == auVar57[2]);
  auVar67[3] = -(auVar74[3] == auVar57[3]);
  auVar67[4] = -(auVar74[4] == auVar57[4]);
  auVar67[5] = -(auVar74[5] == auVar57[5]);
  auVar67[6] = -(auVar74[6] == auVar57[6]);
  auVar67[7] = -(auVar74[7] == auVar57[7]);
  auVar67[8] = -(auVar74[8] == auVar57[0]);
  auVar67[9] = -(auVar74[9] == auVar57[1]);
  auVar67[10] = -(auVar74[10] == auVar57[2]);
  auVar67[0xb] = -(auVar74[0xb] == auVar57[3]);
  auVar67[0xc] = -(auVar74[0xc] == auVar57[4]);
  auVar67[0xd] = -(auVar74[0xd] == auVar57[5]);
  auVar67[0xe] = -(auVar74[0xe] == auVar57[6]);
  auVar67[0xf] = -(auVar74[0xf] == auVar57[7]);
  uVar49 = (ushort)(SUB161(auVar67 >> 7,0) & 1) | (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe | (ushort)(auVar67[0xf] >> 7) << 0xf;
  uVar44 = (uint)uVar49;
  while (uVar49 != 0) {
    uVar7 = 0;
    for (uVar41 = uVar44; (uVar41 & 1) == 0; uVar41 = uVar41 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    lVar42 = (uVar7 + uVar37 & uVar39) * -0x38;
    if ((*(longlong *)(lVar47 + -0x28 + lVar42) == 0xf) &&
       (lVar42 = lVar42 + lVar47, plVar4 = *(longlong **)(lVar42 + -0x30),
       *(longlong *)((longlong)plVar4 + 7) == 0x6e6f697469736f50 && *plVar4 == 0x505f786574726556))
    {
      lVar47 = pdb_140e4d980(lVar42 + -0x20);
      if (uVar43 == 0) goto LAB_140c52025;
      if (7 < uVar43) goto LAB_140c52069;
      fVar70 = 0.0;
      uVar39 = 0;
      goto LAB_140c51fca;
    }
    uVar49 = (ushort)(uVar44 - 1) & (ushort)uVar44;
    uVar44 = CONCAT22((short)(uVar44 - 1 >> 0x10),uVar49);
  }
  auVar64[0] = -(auVar74[0] == -1);
  auVar64[1] = -(auVar74[1] == -1);
  auVar64[2] = -(auVar74[2] == -1);
  auVar64[3] = -(auVar74[3] == -1);
  auVar64[4] = -(auVar74[4] == -1);
  auVar64[5] = -(auVar74[5] == -1);
  auVar64[6] = -(auVar74[6] == -1);
  auVar64[7] = -(auVar74[7] == -1);
  auVar64[8] = -(auVar74[8] == -1);
  auVar64[9] = -(auVar74[9] == -1);
  auVar64[10] = -(auVar74[10] == -1);
  auVar64[0xb] = -(auVar74[0xb] == -1);
  auVar64[0xc] = -(auVar74[0xc] == -1);
  auVar64[0xd] = -(auVar74[0xd] == -1);
  auVar64[0xe] = -(auVar74[0xe] == -1);
  auVar64[0xf] = -(auVar74[0xf] == -1);
  if ((((((((((((((((SUB161(auVar64 >> 7,0) & 1) != 0 || (SUB161(auVar64 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar64 >> 0x17,0) & 1) != 0) || (SUB161(auVar64 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar64 >> 0x27,0) & 1) != 0) || (SUB161(auVar64 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar64 >> 0x37,0) & 1) != 0) || (SUB161(auVar64 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar64 >> 0x47,0) & 1) != 0) || (SUB161(auVar64 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar64 >> 0x57,0) & 1) != 0) || (SUB161(auVar64 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar64 >> 0x67,0) & 1) != 0) || (SUB161(auVar64 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar64 >> 0x77,0) & 1) != 0) || auVar64[0xf] < '\0') goto LAB_140c52051;
  uVar37 = uVar37 + uVar43 + 0x10;
  uVar43 = uVar43 + 0x10;
  goto LAB_140c51f31;
LAB_140c52051:
  uVar43 = 0x16;
  lVar47 = pdb_142dc8110(&UNK_14306e575,0x16,&UNK_14306e5f8);
  param_4 = uVar39;
LAB_140c52069:
  uVar37 = uVar43 & 0xfffffffffffffff8;
  pfVar51 = (float *)(lVar47 + 0x5c);
  lVar42 = 8;
  auVar57 = (undefined1  [16])0x0;
  auVar74 = (undefined1  [16])0x0;
  do {
    auVar67 = auVar74;
    auVar66 = auVar57;
    fVar70 = pfVar51[-0x15] * pfVar51[-0x15] +
             pfVar51[-0x16] * pfVar51[-0x16] + pfVar51[-0x17] * pfVar51[-0x17];
    fVar71 = pfVar51[-0x12] * pfVar51[-0x12] +
             pfVar51[-0x13] * pfVar51[-0x13] + pfVar51[-0x14] * pfVar51[-0x14];
    fVar72 = pfVar51[-0xf] * pfVar51[-0xf] +
             pfVar51[-0x10] * pfVar51[-0x10] + pfVar51[-0x11] * pfVar51[-0x11];
    fVar73 = pfVar51[-0xc] * pfVar51[-0xc] +
             pfVar51[-0xd] * pfVar51[-0xd] + pfVar51[-0xe] * pfVar51[-0xe];
    auVar75._0_4_ =
         pfVar51[-9] * pfVar51[-9] + pfVar51[-10] * pfVar51[-10] + pfVar51[-0xb] * pfVar51[-0xb];
    auVar75._4_4_ =
         pfVar51[-6] * pfVar51[-6] + pfVar51[-7] * pfVar51[-7] + pfVar51[-8] * pfVar51[-8];
    auVar75._8_4_ =
         pfVar51[-3] * pfVar51[-3] + pfVar51[-4] * pfVar51[-4] + pfVar51[-5] * pfVar51[-5];
    auVar75._12_4_ = *pfVar51 * *pfVar51 + pfVar51[-1] * pfVar51[-1] + pfVar51[-2] * pfVar51[-2];
    auVar74._4_4_ = fVar71;
    auVar74._0_4_ = fVar70;
    auVar74._8_4_ = fVar72;
    auVar74._12_4_ = fVar73;
    auVar57 = maxps(auVar74,auVar66);
    auVar65._0_4_ = ~-(uint)NAN(auVar66._0_4_) & auVar57._0_4_;
    auVar65._4_4_ = ~-(uint)NAN(auVar66._4_4_) & auVar57._4_4_;
    auVar65._8_4_ = ~-(uint)NAN(auVar66._8_4_) & auVar57._8_4_;
    auVar65._12_4_ = ~-(uint)NAN(auVar66._12_4_) & auVar57._12_4_;
    auVar8._4_4_ = (uint)fVar71 & -(uint)NAN(auVar66._4_4_);
    auVar8._0_4_ = (uint)fVar70 & -(uint)NAN(auVar66._0_4_);
    auVar8._8_4_ = (uint)fVar72 & -(uint)NAN(auVar66._8_4_);
    auVar8._12_4_ = (uint)fVar73 & -(uint)NAN(auVar66._12_4_);
    auVar57 = maxps(auVar75,auVar67);
    auVar68._0_4_ = ~-(uint)NAN(auVar67._0_4_) & auVar57._0_4_;
    auVar68._4_4_ = ~-(uint)NAN(auVar67._4_4_) & auVar57._4_4_;
    auVar68._8_4_ = ~-(uint)NAN(auVar67._8_4_) & auVar57._8_4_;
    auVar68._12_4_ = ~-(uint)NAN(auVar67._12_4_) & auVar57._12_4_;
    auVar9._4_4_ = (uint)auVar75._4_4_ & -(uint)NAN(auVar67._4_4_);
    auVar9._0_4_ = (uint)auVar75._0_4_ & -(uint)NAN(auVar67._0_4_);
    auVar9._8_4_ = (uint)auVar75._8_4_ & -(uint)NAN(auVar67._8_4_);
    auVar9._12_4_ = (uint)auVar75._12_4_ & -(uint)NAN(auVar67._12_4_);
    auVar57._4_4_ = -(uint)(NAN(fVar71) || NAN(auVar75._4_4_));
    auVar57._0_4_ = -(uint)(NAN(fVar70) || NAN(auVar75._0_4_));
    auVar57._8_4_ = -(uint)(NAN(fVar72) || NAN(auVar75._8_4_));
    auVar57._12_4_ = -(uint)(NAN(fVar73) || NAN(auVar75._12_4_));
    iVar36 = movmskps((int)auVar69._0_8_,auVar57);
    lVar50 = lVar42 + -8;
    if (iVar36 != 0) break;
    lVar54 = lVar42 + uVar37;
    pfVar51 = pfVar51 + 0x18;
    auVar69._0_8_ = 0;
    lVar42 = lVar50;
    auVar57 = auVar65 | auVar8;
    auVar74 = auVar68 | auVar9;
  } while (lVar54 != 0x10);
  uVar39 = -lVar50;
  if ((char)iVar36 == '\0') {
    uVar39 = uVar37;
    auVar66 = auVar65 | auVar8;
    auVar67 = auVar68 | auVar9;
  }
  auVar57 = maxps(auVar67,auVar66);
  auVar62._0_4_ = auVar67._0_4_ & -(uint)NAN(auVar66._0_4_);
  auVar62._4_4_ = auVar67._4_4_ & -(uint)NAN(auVar66._4_4_);
  auVar62._8_4_ = auVar67._8_4_ & -(uint)NAN(auVar66._8_4_);
  auVar62._12_4_ = auVar67._12_4_ & -(uint)NAN(auVar66._12_4_);
  auVar58._0_4_ = ~-(uint)NAN(auVar66._0_4_) & auVar57._0_4_;
  auVar58._4_4_ = ~-(uint)NAN(auVar66._4_4_) & auVar57._4_4_;
  auVar58._8_4_ = ~-(uint)NAN(auVar66._8_4_) & auVar57._8_4_;
  auVar58._12_4_ = ~-(uint)NAN(auVar66._12_4_) & auVar57._12_4_;
  auVar58 = auVar58 | auVar62;
  fVar71 = auVar58._0_4_;
  fVar72 = auVar58._4_4_;
  fVar73 = auVar58._8_4_;
  fVar61 = auVar58._12_4_;
  auVar69._0_8_ = auVar58._8_8_;
  auVar69._8_4_ = fVar73;
  auVar69._12_4_ = fVar61;
  fVar70 = fVar72;
  if (fVar72 <= fVar71) {
    fVar70 = fVar71;
  }
  fVar70 = (float)(~-(uint)NAN(fVar71) & (uint)fVar70 | -(uint)NAN(fVar71) & (uint)fVar72);
  if (fVar73 <= fVar70) {
    auVar59._4_12_ = auVar69._4_12_;
    auVar59._0_4_ = fVar70;
    auVar69._0_8_ = auVar59._0_8_;
  }
  fVar71 = (float)(-(uint)NAN(fVar70) & (uint)fVar73 | ~-(uint)NAN(fVar70) & (uint)auVar69._0_8_);
  fVar70 = fVar61;
  if (fVar61 <= fVar71) {
    fVar70 = fVar71;
  }
  fVar70 = (float)(-(uint)NAN(fVar71) & (uint)fVar61 | ~-(uint)NAN(fVar71) & (uint)fVar70);
  if ((uVar43 != uVar37) || ((char)iVar36 != '\0')) {
LAB_140c51fca:
    lVar42 = uVar43 - uVar39;
    puVar38 = (undefined8 *)(lVar47 + uVar39 * 0xc + 4);
    do {
      fVar72 = (float)*puVar38;
      fVar71 = (float)((ulonglong)*puVar38 >> 0x20);
      fVar72 = fVar71 * fVar71 +
               *(float *)((longlong)puVar38 + -4) * *(float *)((longlong)puVar38 + -4) +
               fVar72 * fVar72;
      fVar71 = fVar72;
      if (fVar72 <= fVar70) {
        fVar71 = fVar70;
      }
      fVar70 = (float)(~-(uint)NAN(fVar70) & (uint)fVar71 | -(uint)NAN(fVar70) & (uint)fVar72);
      puVar38 = (undefined8 *)((longlong)puVar38 + 0xc);
      lVar42 = lVar42 + -1;
    } while (lVar42 != 0);
  }
  fVar70 = SQRT(fVar70);
  uVar39 = param_2[0x15];
  if (uVar39 != 0) goto LAB_140c52035;
LAB_140c52288:
  uStack_138 = param_2[0x12];
  if ((uStack_138 & 0xfffffc00) != 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14306e69b,0x37,&UNK_14306e6d8);
  }
LAB_140c5229c:
  if (param_2[10] == 0) {
    iVar36 = 0;
  }
  else {
    pauVar46 = (undefined1 (*) [16])param_2[7];
    auVar57 = *pauVar46;
    uVar49 = (ushort)(SUB161(auVar57 >> 7,0) & 1) | (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar57[0xf] >> 7) << 0xf;
    pauVar55 = pauVar46;
    while (uVar44 = uVar49 ^ 0xffff, uVar44 == 0) {
      pauVar55 = pauVar55 + 1;
      auVar57 = *pauVar55;
      pauVar46 = pauVar46 + -0x38;
      uVar49 = (ushort)(SUB161(auVar57 >> 7,0) & 1) | (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar57[0xf] >> 7) << 0xf;
    }
    uVar7 = 0;
    for (; (uVar44 & 1) == 0; uVar44 = uVar44 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    iVar36 = *(int *)((longlong)pauVar46 + (ulonglong)uVar7 * -0x38 + -8);
  }
  uVar39 = param_2[2];
  uStack_150 = uVar39;
  uStack_140 = uVar45;
  puStack_130 = param_2;
  if ((int)uVar39 == 0) {
    pbVar40 = *(byte **)(param_4 + 0x58);
    uVar39 = *(ulonglong *)(param_4 + 0x60);
    pdb_140ca3e60(&pauStack_118,param_4 + 0x38);
    auVar69._0_8_ = *(undefined8 *)(param_4 + 8);
    uVar45 = uVar45 * 4;
    pbStack_f8 = pbVar40;
    uStack_f0 = uVar39;
    pdb_14007ee60();
    pbVar40 = pub_1406abab0(uVar45,4);
    if (pbVar40 == (byte *)0x0) {
      pdb_142dc7e2a(4,uVar45);
      goto LAB_140c52b8f;
    }
    pub_142e32760(pbVar40,auVar69._0_8_,uVar45);
    pbStack_d0 = pbVar40;
    if (SBORROW8(0,*(longlong *)(param_4 + 0x18))) {
      pauStack_c8 = (undefined1 (*) [16])0x8000000000000000;
    }
    else {
      pauVar46 = *(undefined1 (**) [16])(param_4 + 0x28);
      if ((longlong)pauVar46 < 0) {
        auVar69._0_8_ = 0;
        uStack_c0 = uVar45;
LAB_140c52467:
        pdb_142dc7e2a(auVar69._0_8_,pauVar46);
LAB_140c52b8f:
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      pauStack_c8 = pauVar46;
      if (pauVar46 == (undefined1 (*) [16])0x0) {
        pbStack_d8 = (byte *)0x1;
      }
      else {
        uVar5 = *(undefined8 *)(param_4 + 0x20);
        uStack_c0 = uVar45;
        pdb_14007ee60();
        pauVar46 = pauStack_c8;
        auVar69._0_8_ = 1;
        pbVar40 = pub_1406abab0((ulonglong)pauStack_c8,1);
        if (pbVar40 == (byte *)0x0) goto LAB_140c52467;
        pbStack_d8 = pbVar40;
        pub_142e32760(pbVar40,uVar5,pauVar46);
      }
      uStack_120 = CONCAT71(uStack_120._1_7_,*(undefined1 *)(param_4 + 0x30));
    }
    uVar37 = uStack_138;
    uStack_128 = *(ulonglong *)(param_4 + 0x68);
    uStack_e0 = *(ulonglong *)(param_4 + 0x70);
    uStack_c0 = CONCAT71(uStack_c0._1_7_,*(undefined1 *)(param_4 + 0x78));
    pbStack_198 = pbStack_f8;
    uStack_190 = uStack_f0;
    puStack_1a8 = (undefined1 *)plStack_108;
    uStack_1a0 = (ulonglong)pcStack_100;
    pauStack_1b8 = pauStack_118;
    pauStack_1b0 = pauStack_110;
    pdb_14098a960(param_2);
    *puStack_130 = uStack_140;
    puStack_130[1] = (ulonglong)pbStack_d0;
    puStack_130[2] = uStack_140;
    puStack_130[3] = (ulonglong)pauStack_c8;
    puStack_130[4] = (ulonglong)pbStack_d8;
    puStack_130[5] = (ulonglong)pauStack_c8;
    *(undefined1 *)(puStack_130 + 6) = (undefined1)uStack_120;
    puStack_130[7] = (ulonglong)pauStack_1b8;
    puStack_130[8] = (ulonglong)pauStack_1b0;
    puStack_130[9] = (ulonglong)puStack_1a8;
    puStack_130[10] = uStack_1a0;
    puStack_130[0xb] = (ulonglong)pbStack_198;
    puStack_130[0xc] = uStack_190;
    puStack_130[0xd] = uStack_128;
    puStack_130[0xe] = uStack_e0;
    *(undefined1 *)(puStack_130 + 0xf) = (undefined1)uStack_c0;
    uVar45 = puStack_130[0x12];
    uVar43 = uVar37 & 0xffffffff;
    uVar39 = uStack_140;
    puVar48 = puStack_130;
    if (uVar43 < uVar45) goto LAB_140c5295d;
  }
  else {
    lVar47 = *(longlong *)(param_4 + 8);
    if (*param_2 - uVar39 < uVar45) {
      pdb_142d7f1b0(param_2,uVar39,uVar45,4,4);
      uVar39 = param_2[2];
      uVar37 = param_2[1];
      if (7 < uVar45) goto LAB_140c52330;
LAB_140c52341:
      uVar43 = 0;
LAB_140c52343:
      uVar52 = uVar43;
      for (uVar53 = uVar45 & 3; uVar53 != 0; uVar53 = uVar53 - 1) {
        *(int *)(uVar37 + uVar39 * 4) = *(int *)(lVar47 + uVar52 * 4) + iVar36;
        uVar39 = uVar39 + 1;
        uVar52 = uVar52 + 1;
      }
      if (uVar43 - uVar45 < 0xfffffffffffffffd) {
        lVar42 = uVar37 + uVar39 * 4;
        lVar47 = lVar47 + uVar52 * 4;
        lVar50 = 0;
        do {
          *(int *)(lVar42 + lVar50 * 4) = *(int *)(lVar47 + lVar50 * 4) + iVar36;
          *(int *)(lVar42 + 4 + lVar50 * 4) = *(int *)(lVar47 + 4 + lVar50 * 4) + iVar36;
          *(int *)(lVar42 + 8 + lVar50 * 4) = *(int *)(lVar47 + 8 + lVar50 * 4) + iVar36;
          *(int *)(lVar42 + 0xc + lVar50 * 4) = *(int *)(lVar47 + 0xc + lVar50 * 4) + iVar36;
          lVar50 = lVar50 + 4;
        } while (uVar45 - uVar52 != lVar50);
        uVar39 = uVar39 + lVar50;
      }
    }
    else {
      uVar37 = param_2[1];
      if (uVar45 < 8) goto LAB_140c52341;
LAB_140c52330:
      if ((uVar37 + uVar39 * 4) - lVar47 < 0x20) goto LAB_140c52341;
      lVar42 = uVar39 * 4;
      uVar43 = uVar45 & 0x1ffffffffffffff8;
      uVar39 = uVar39 + uVar43;
      lVar42 = lVar42 + uVar37;
      uVar53 = 0;
      do {
        piVar1 = (int *)(lVar47 + uVar53);
        iVar10 = piVar1[1];
        iVar11 = piVar1[2];
        iVar12 = piVar1[3];
        piVar3 = (int *)(lVar47 + 0x10 + uVar53);
        iVar13 = *piVar3;
        iVar14 = piVar3[1];
        iVar15 = piVar3[2];
        iVar16 = piVar3[3];
        piVar3 = (int *)(lVar42 + uVar53);
        *piVar3 = *piVar1 + iVar36;
        piVar3[1] = iVar10 + iVar36;
        piVar3[2] = iVar11 + iVar36;
        piVar3[3] = iVar12 + iVar36;
        piVar1 = (int *)(lVar42 + 0x10 + uVar53);
        *piVar1 = iVar13 + iVar36;
        piVar1[1] = iVar14 + iVar36;
        piVar1[2] = iVar15 + iVar36;
        piVar1[3] = iVar16 + iVar36;
        uVar53 = uVar53 + 0x20;
      } while ((uVar45 * 4 & 0xffffffffffffffe0) != uVar53);
      if (uVar45 != uVar43) goto LAB_140c52343;
    }
    param_2[2] = uVar39;
    pauStack_118 = (undefined1 (*) [16])param_2[7];
    plStack_108 = (longlong *)(*pauStack_118 + param_2[8] + 1);
    auVar57 = *pauStack_118;
    pbStack_f8 = (byte *)param_2[10];
    pauStack_110 = pauStack_118 + 1;
    puStack_148 = param_1;
    pcStack_100._0_2_ =
         ~((ushort)(SUB161(auVar57 >> 7,0) & 1) | (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar57[0xf] >> 7) << 0xf
          );
    pdb_1415f4eb0((undefined1 (*) [16])&lStack_170,&pauStack_118);
    pauStack_118 = *(undefined1 (**) [16])(param_4 + 0x38);
    uStack_c0 = *(ulonglong *)(param_4 + 0x40);
    plStack_108 = (longlong *)(*pauStack_118 + uStack_c0 + 1);
    auVar57 = *pauStack_118;
    pauStack_110 = pauStack_118 + 1;
    pcStack_100 = (code *)CONCAT62(pcStack_100._2_6_,
                                   ~((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar57[0xf] >> 7) << 0xf));
    pbStack_f8 = pbStack_d0;
    uStack_e0 = param_4;
    pauStack_c8 = pauStack_118;
    pdb_1415f4eb0(&lStack_188,&pauStack_118);
    pbVar40 = pbStack_168;
    if (1 < uStack_160) {
      if (uStack_160 < 0x15) {
        pdb_1400e1b80(pbStack_168,uStack_160,1);
      }
      else {
        pdb_140c75ce0(pbStack_168,uStack_160,&uStack_b1);
      }
    }
    pbVar33 = pbStack_180;
    if (1 < uStack_178) {
      if (uStack_178 < 0x15) {
        pdb_1400e1b80(pbStack_180,uStack_178,1);
      }
      else {
        pdb_140c75ce0(pbStack_180,uStack_178,&uStack_b1);
      }
    }
    if (uStack_160 != uStack_178) {
LAB_140c52617:
      pauStack_110 = (undefined1 (*) [16])pdb_1415e4fb0;
      pcStack_100 = pdb_1415e4fb0;
      pauStack_118 = (undefined1 (*) [16])&lStack_170;
      plStack_108 = &lStack_188;
      pdb_140f60760(&pauStack_1b8,&UNK_14306e660,&pauStack_118);
      pauStack_118 = pauStack_1b8;
      pauStack_110 = pauStack_1b0;
      plStack_108 = (longlong *)puStack_1a8;
      auVar69._0_8_ = pdb_142de92b0(&pauStack_118);
      puVar34 = puStack_148;
      *(undefined8 *)(puStack_148 + 2) = auVar69._0_8_;
      *puStack_148 = 1;
      if (lStack_188 != 0) {
        pub_1406abac0(pbStack_180,lStack_188 << 3,8);
      }
      if (lStack_170 == 0) {
        return puVar34;
      }
      pub_1406abac0(pbStack_168,lStack_170 << 3,8);
      return puVar34;
    }
    if (uStack_160 != 0) {
      uVar45 = 0;
      do {
        if ((*(longlong *)(*(longlong *)(pbVar40 + uVar45 * 8) + 0x10) !=
             *(longlong *)(*(longlong *)(pbVar33 + uVar45 * 8) + 0x10)) ||
           (iVar36 = pub_142e32750(*(undefined8 *)(*(longlong *)(pbVar40 + uVar45 * 8) + 8),
                                   *(undefined8 *)(*(longlong *)(pbVar33 + uVar45 * 8) + 8)),
           iVar36 != 0)) goto LAB_140c52617;
        uVar45 = uVar45 + 1;
      } while (uStack_160 != uVar45);
    }
    pauVar55 = (undefined1 (*) [16])puStack_130[7];
    uVar45 = puStack_130[10];
    auVar57 = *pauVar55;
    pauVar46 = pauVar55 + 1;
    uVar44 = ~(uint)(ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar57[0xf] >> 7) << 0xf);
    uStack_e0 = uStack_e0 + 0x58;
LAB_140c52780:
    uVar39 = uStack_140;
    uVar37 = uVar45 - 1;
    if (uVar45 != 0) {
      if ((short)uVar44 == 0) {
        do {
          auVar57 = *pauVar46;
          pauVar55 = pauVar55 + -0x38;
          pauVar46 = pauVar46 + 1;
          uVar44 = (ushort)((ushort)(SUB161(auVar57 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar57[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar44 == 0);
      }
      if (pbStack_d0 != (byte *)0x0) {
        uVar7 = 0;
        for (uVar41 = uVar44; (uVar41 & 1) == 0; uVar41 = uVar41 >> 1 | 0x80000000) {
          uVar7 = uVar7 + 1;
        }
        lVar47 = (ulonglong)uVar7 * -0x38;
        uVar45 = pdb_1400afac0(uStack_e0,(longlong)pauVar55 + lVar47 + -0x38);
        uVar44 = uVar44 - 1 & uVar44;
        bVar56 = (byte)(uVar45 >> 0x39);
        auVar57 = ZEXT216(CONCAT11(bVar56,bVar56));
        auVar57 = pshuflw(auVar57,auVar57,0);
        lVar42 = 0;
        while( true ) {
          uVar45 = uVar45 & uStack_c0;
          pcVar2 = *pauStack_c8 + uVar45;
          cVar17 = *pcVar2;
          cVar18 = pcVar2[1];
          cVar19 = pcVar2[2];
          cVar20 = pcVar2[3];
          cVar21 = pcVar2[4];
          cVar22 = pcVar2[5];
          cVar23 = pcVar2[6];
          cVar24 = pcVar2[7];
          cVar25 = pcVar2[8];
          cVar26 = pcVar2[9];
          cVar27 = pcVar2[10];
          cVar28 = pcVar2[0xb];
          cVar29 = pcVar2[0xc];
          cVar30 = pcVar2[0xd];
          cVar31 = pcVar2[0xe];
          cVar32 = pcVar2[0xf];
          auVar60[0] = -(cVar17 == auVar57[0]);
          auVar60[1] = -(cVar18 == auVar57[1]);
          auVar60[2] = -(cVar19 == auVar57[2]);
          auVar60[3] = -(cVar20 == auVar57[3]);
          auVar60[4] = -(cVar21 == auVar57[4]);
          auVar60[5] = -(cVar22 == auVar57[5]);
          auVar60[6] = -(cVar23 == auVar57[6]);
          auVar60[7] = -(cVar24 == auVar57[7]);
          auVar60[8] = -(cVar25 == auVar57[0]);
          auVar60[9] = -(cVar26 == auVar57[1]);
          auVar60[10] = -(cVar27 == auVar57[2]);
          auVar60[0xb] = -(cVar28 == auVar57[3]);
          auVar60[0xc] = -(cVar29 == auVar57[4]);
          auVar60[0xd] = -(cVar30 == auVar57[5]);
          auVar60[0xe] = -(cVar31 == auVar57[6]);
          auVar60[0xf] = -(cVar32 == auVar57[7]);
          uVar49 = (ushort)(SUB161(auVar60 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar60[0xf] >> 7) << 0xf;
          pbVar40 = (byte *)(ulonglong)uVar49;
          if (uVar49 != 0) {
            lVar50 = *(longlong *)((longlong)pauVar55 + lVar47 + -0x28);
            uStack_120 = uVar45;
            do {
              pauVar35 = pauStack_c8;
              uVar7 = 0;
              for (uVar41 = (uint)pbVar40; (uVar41 & 1) == 0; uVar41 = uVar41 >> 1 | 0x80000000) {
                uVar7 = uVar7 + 1;
              }
              lVar54 = (uVar7 + uStack_120 & uStack_c0) * -0x38;
              pbStack_d8 = pbVar40;
              if ((lVar50 == *(longlong *)((longlong)pauStack_c8 + lVar54 + -0x28)) &&
                 (uStack_128 = uVar37,
                 iVar36 = pub_142e32750(*(undefined8 *)((longlong)pauVar55 + lVar47 + -0x30),
                                        *(undefined8 *)((longlong)pauStack_c8 + lVar54 + -0x30),
                                        lVar50), uVar45 = uStack_128, uVar37 = uStack_128,
                 iVar36 == 0)) {
                pdb_140e4d210((longlong)pauVar55 + lVar47 + -0x20,
                              (longlong)pauVar35 + lVar54 + -0x20);
                goto LAB_140c52780;
              }
              iVar36 = (int)pbStack_d8 + -1;
              uVar49 = (ushort)iVar36 & (ushort)pbStack_d8;
              pbVar40 = (byte *)(ulonglong)CONCAT22((short)((uint)iVar36 >> 0x10),uVar49);
              uVar45 = uStack_120;
            } while (uVar49 != 0);
          }
          auVar76[0] = -(cVar17 == -1);
          auVar76[1] = -(cVar18 == -1);
          auVar76[2] = -(cVar19 == -1);
          auVar76[3] = -(cVar20 == -1);
          auVar76[4] = -(cVar21 == -1);
          auVar76[5] = -(cVar22 == -1);
          auVar76[6] = -(cVar23 == -1);
          auVar76[7] = -(cVar24 == -1);
          auVar76[8] = -(cVar25 == -1);
          auVar76[9] = -(cVar26 == -1);
          auVar76[10] = -(cVar27 == -1);
          auVar76[0xb] = -(cVar28 == -1);
          auVar76[0xc] = -(cVar29 == -1);
          auVar76[0xd] = -(cVar30 == -1);
          auVar76[0xe] = -(cVar31 == -1);
          auVar76[0xf] = -(cVar32 == -1);
          if ((((((((((((((((SUB161(auVar76 >> 7,0) & 1) != 0 || (SUB161(auVar76 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar76 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar76 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar76 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar76 >> 0x2f,0) & 1) != 0) || (SUB161(auVar76 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar76 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar76 >> 0x47,0) & 1) != 0) || (SUB161(auVar76 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar76 >> 0x57,0) & 1) != 0) || (SUB161(auVar76 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar76 >> 0x67,0) & 1) != 0) || (SUB161(auVar76 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar76 >> 0x77,0) & 1) != 0) || auVar76[0xf] < '\0') break;
          uVar45 = uVar45 + lVar42 + 0x10;
          lVar42 = lVar42 + 0x10;
        }
      }
      pdb_142dc8110(&UNK_14306e575,0x16,&UNK_14306e648);
      goto LAB_140c52b8f;
    }
    if (lStack_188 != 0) {
      pub_1406abac0(pbStack_180,lStack_188 << 3,8);
    }
    puVar48 = puStack_130;
    uVar37 = uStack_138;
    if (lStack_170 != 0) {
      pub_1406abac0(pbStack_168,lStack_170 << 3,8);
    }
    uVar45 = puVar48[0x12];
    uVar43 = uVar37 & 0xffffffff;
    param_1 = puStack_148;
    if (uVar43 < uVar45) {
LAB_140c5295d:
      uVar45 = puVar48[0x11];
      lVar47 = uVar43 * 0x10;
      *(int *)(uVar45 + lVar47) = (int)uStack_150;
      *(int *)(uVar45 + 4 + lVar47) = (int)uVar39;
      *(float *)(uVar45 + 8 + lVar47) = fVar70;
      *(undefined4 *)(uVar45 + 0xc + lVar47) = 0;
      goto LAB_140c52a1f;
    }
  }
  if (uVar45 == puVar48[0x10]) {
    pdb_142d7ef30();
  }
  uVar43 = puVar48[0x11];
  lVar47 = uVar45 * 0x10;
  *(int *)(uVar43 + lVar47) = (int)uStack_150;
  *(int *)(uVar43 + 4 + lVar47) = (int)uVar39;
  *(float *)(uVar43 + 8 + lVar47) = fVar70;
  *(undefined4 *)(uVar43 + 0xc + lVar47) = 0;
  puVar48[0x12] = uVar45 + 1;
LAB_140c52a1f:
  iVar36 = pdb_1417b37f0(puVar48 + 0x16,param_3,uVar37 & 0xffffffff);
  if (iVar36 == 0) {
    param_1[1] = (int)uVar37;
    *param_1 = 0;
    return param_1;
  }
  pauStack_118 = (undefined1 (*) [16])auStack_158;
  pauStack_110 = (undefined1 (*) [16])pdb_140c51b70;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14306e610,&pauStack_118,&UNK_14306e630);
}

