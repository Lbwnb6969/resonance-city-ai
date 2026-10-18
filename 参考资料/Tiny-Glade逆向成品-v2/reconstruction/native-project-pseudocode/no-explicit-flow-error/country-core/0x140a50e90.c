// VA 0x140a50e90, PDB extent 15817 bytes
// country_core::systems::wall::draw_wall::draw_wall
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/draw_wall.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::wall::draw_wall::draw_wall
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/draw_wall.rs
   Extent: 15817 */

void pdb_140a50e90(float *param_1,float *param_2,float *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 *param_7,longlong *param_8,
                  longlong *param_9,longlong param_10,longlong *param_11,undefined8 *param_12,
                  float *param_13)

{
  char *pcVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint6 uVar10;
  float fVar11;
  undefined1 uVar12;
  undefined2 uVar13;
  undefined1 auVar14 [12];
  char cVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined *puVar18;
  float *pfVar19;
  longlong *plVar20;
  byte *pbVar21;
  uint uVar22;
  undefined8 *puVar23;
  float *pfVar24;
  ulonglong uVar25;
  float *pfVar26;
  int iVar27;
  ulonglong uVar28;
  byte *pbVar29;
  undefined8 uVar30;
  int iVar31;
  float *pfVar32;
  ulonglong uVar33;
  float *pfVar34;
  undefined8 uVar35;
  ulonglong uVar36;
  undefined4 *puVar37;
  char cVar38;
  uint uVar39;
  longlong lVar40;
  float *pfVar41;
  longlong lVar42;
  float *pfVar43;
  ushort uVar44;
  ulonglong uVar45;
  longlong lVar46;
  float *unaff_R12;
  float *pfVar47;
  bool bVar48;
  byte bVar49;
  byte bVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar55 [16];
  float fVar56;
  float fVar62;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_360;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  uint uStack_34c;
  undefined8 uStack_348;
  undefined8 uStack_340;
  byte *pbStack_338;
  float *pfStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  float *pfStack_318;
  float *pfStack_310;
  undefined8 uStack_308;
  float **ppfStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  byte *pbStack_2e8;
  ulonglong uStack_2e0;
  longlong lStack_2d0;
  undefined8 uStack_2c8;
  ulonglong uStack_2c0;
  undefined8 *puStack_2b8;
  float *pfStack_2b0;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [16];
  undefined8 uStack_288;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  uint uStack_26c;
  undefined8 uStack_268;
  undefined8 uStack_260;
  byte *pbStack_258;
  float *pfStack_250;
  undefined8 uStack_248;
  float *pfStack_238;
  code *pcStack_230;
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  undefined8 uStack_208;
  float *pfStack_200;
  float *pfStack_1f8;
  float *pfStack_1f0;
  ulonglong uStack_1e8;
  byte *pbStack_1e0;
  ulonglong uStack_1d8;
  ulonglong uStack_1d0;
  byte *pbStack_1c8;
  ulonglong uStack_1c0;
  float *pfStack_1b8;
  float *pfStack_1b0;
  undefined8 uStack_1a8;
  byte *pbStack_1a0;
  float *pfStack_198;
  float *pfStack_190;
  char cStack_188;
  undefined1 uStack_187;
  undefined2 uStack_186;
  float fStack_184;
  undefined8 uStack_180;
  float fStack_178;
  undefined2 uStack_174;
  ushort uStack_172;
  float fStack_170;
  undefined4 uStack_16c;
  byte *pbStack_168;
  float *pfStack_160;
  undefined1 auStack_158 [16];
  float *pfStack_148;
  float *pfStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 uStack_120;
  undefined1 uStack_11f;
  undefined2 uStack_11e;
  undefined2 uStack_11c;
  undefined1 uStack_11a;
  char cStack_119;
  byte *pbStack_118;
  ulonglong uStack_110;
  float *pfStack_108;
  float *pfStack_100;
  float *pfStack_f8;
  float *pfStack_f0;
  undefined1 uStack_e1;
  float *pfStack_e0;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  float *pfStack_d0;
  undefined1 uStack_c3;
  undefined1 uStack_c2;
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  
  uStack_c0 = 0xfffffffffffffffe;
  pfVar26 = (float *)*param_4;
  pfStack_d0 = (float *)param_4[4];
  pfVar47 = (float *)param_4[8];
  pfStack_108 = (float *)param_4[0xc];
  pfVar24 = (float *)param_4[0x10];
  pfVar19 = (float *)param_4[0x14];
  pfStack_1b8 = (float *)param_8[4];
  uStack_1a8 = (float *)param_9[4];
  pfStack_1b0 = *(float **)(param_10 + 0x20);
  pfStack_f0 = param_1;
  cVar15 = pdb_140e94b40();
  pfStack_198 = pfVar47;
  if (cVar15 == '\0') {
    lStack_2d0 = 0;
    pfVar32 = param_2;
    pfVar34 = pfVar19;
    pfVar47 = pfVar26;
    param_2 = pfVar24;
    goto LAB_140a51138;
  }
  pfVar34 = (float *)&UNK_14303dff9;
  pfVar32 = (float *)0x31;
  uVar28 = 0x31;
  pfStack_100 = pfVar19;
  lVar16 = pdb_140a58ed0(&UNK_14303dff9);
  if (lVar16 == 1) {
    if (0x31 < uVar28) {
LAB_140a53b2d:
      pdb_142dc8070(&UNK_14303dff9,0x31,0);
LAB_140a53b4d:
      pdb_142dc8070(&UNK_14303dff9,0x31);
LAB_140a53b70:
      uStack_d1 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14303d728);
    }
    pfVar34 = (float *)&UNK_14303dff9;
    uVar17 = pdb_140a58ed0(&UNK_14303dff9);
    if ((uVar17 & 1) != 0) {
      if (0x31 < uVar28 + 2) goto LAB_140a53b4d;
      pfVar32 = (float *)(0x2f - uVar28);
      pfVar34 = (float *)(&UNK_14303dffb + uVar28);
    }
  }
  puVar18 = &UNK_14303d709;
  pfVar47 = (float *)&UNK_14303d6d8;
  do {
    pbVar21 = puVar18 + -1;
    uVar22 = (uint)(char)*pbVar21;
    pfStack_e0 = param_3;
    if ((int)uVar22 < 0) {
      bVar49 = puVar18[-2];
      if ((char)bVar49 < -0x40) {
        bVar50 = puVar18[-3];
        if ((char)bVar50 < -0x40) {
          pbVar29 = puVar18 + -4;
          puVar18 = puVar18 + -4;
          uVar22 = bVar50 & 0x3f | (*pbVar29 & 7) << 6;
        }
        else {
          puVar18 = puVar18 + -3;
          uVar22 = bVar50 & 0xf;
        }
        uVar22 = bVar49 & 0x3f | uVar22 << 6;
      }
      else {
        puVar18 = puVar18 + -2;
        uVar22 = bVar49 & 0x1f;
      }
      uVar22 = (uint)(*pbVar21 & 0x3f) | uVar22 << 6;
      if (uVar22 != 0x5c) goto LAB_140a51079;
LAB_140a51096:
      if (puVar18 + -0x14303d6d7 < (undefined *)0x32) {
        unaff_R12 = (float *)(0x30 - (longlong)(puVar18 + -0x14303d6d8));
        pfVar47 = (float *)(puVar18 + 1);
        goto LAB_140a510ba;
      }
      pdb_142dc8070(&UNK_14303d6d8,0x31,puVar18 + -0x14303d6d7,0x31,&UNK_14303e0d0);
      goto LAB_140a53b2d;
    }
    puVar18 = puVar18 + -1;
    if (uVar22 == 0x5c) goto LAB_140a51096;
LAB_140a51079:
    if (uVar22 == 0x2f) goto LAB_140a51096;
  } while (puVar18 != &UNK_14303d6d8);
  unaff_R12 = (float *)0x31;
LAB_140a510ba:
  pfVar19 = (float *)pdb_140e97000();
  if (*(char *)(pfVar19 + 0x1a) != '\x01') goto LAB_140a539f9;
LAB_140a510c9:
  if (*(longlong *)pfVar19 != 0) goto LAB_140a539ed;
  pfVar19[0] = -NAN;
  pfVar19[1] = -NAN;
  pfStack_f8 = pfVar19;
  uStack_2c8 = pdb_140e94f10(pfVar19 + 2,pfVar34,pfVar32,pfVar47,unaff_R12,1,0);
  *(longlong *)pfStack_f8 = *(longlong *)pfStack_f8 + 1;
  lStack_2d0 = 1;
  pfVar32 = param_2;
  pfVar34 = pfStack_100;
  param_3 = pfStack_e0;
  pfVar47 = pfVar26;
  param_2 = pfVar24;
LAB_140a51138:
  pfVar26 = pfVar32;
  puVar3 = (ulonglong *)*param_5;
  lVar16 = param_5[1];
  uVar28 = *puVar3;
  uVar25 = 0;
  uVar17 = uVar28 - *(ulonglong *)(lVar16 + 0x18);
  if (uVar28 < *(ulonglong *)(lVar16 + 0x18)) {
    uVar17 = uVar25;
  }
  uVar36 = uVar28 - *(ulonglong *)(lVar16 + 0x38);
  if (uVar28 < *(ulonglong *)(lVar16 + 0x38)) {
    uVar36 = uVar25;
  }
  uVar28 = *(ulonglong *)(lVar16 + 0x30);
  uVar45 = uVar28 - uVar36;
  if (uVar28 < uVar36) {
    uVar45 = uVar25;
  }
  uVar4 = *(ulonglong *)(lVar16 + 0x10);
  uVar33 = uVar4 - uVar17;
  if (uVar4 < uVar17) {
    uVar33 = uVar25;
  }
  uVar25 = *(ulonglong *)(lVar16 + 0x40);
  pfVar32 = (float *)(uVar33 + uVar45);
  *puVar3 = uVar25 - (longlong)pfVar32;
  pfVar24 = param_3;
  if ((uVar4 < uVar17 || uVar4 - uVar17 == 0) && (uVar28 < uVar36 || uVar28 - uVar36 == 0))
  goto joined_r0x000140a51199;
  *puVar3 = uVar25;
  pfVar19 = *(float **)pfVar26;
  if (SBORROW8(0,*(longlong *)pfVar19)) {
    pfVar47 = *(float **)param_3;
    uVar28 = *(ulonglong *)(pfVar47 + 4);
    unaff_R12 = pfVar19;
    if (uVar28 < 2) {
      fStack_358 = 0.0;
      if ((uVar28 != 0) &&
         (puVar23 = (undefined8 *)(*(longlong *)(pfVar47 + 2) + uVar28 * 8 + -8),
         puVar23 != (undefined8 *)0x0)) {
        uVar35 = *puVar23;
        fStack_354 = (float)uVar35;
        fStack_350 = (float)((ulonglong)uVar35 >> 0x20);
        fStack_358 = 1.4013e-45;
      }
      pfStack_238 = (float *)&UNK_143044340;
      if (*(byte *)pfStack_d0 != 0) {
        pfStack_238 = pfStack_d0 + 1;
      }
      pcStack_230 = (code *)CONCAT44(pcStack_230._4_4_,pfStack_238[2]);
      pfStack_238 = *(float **)pfStack_238;
      pdb_140bedef0(&cStack_188,&fStack_358,&pfStack_238,pfStack_108,param_2,pfVar34);
      fVar52 = fStack_178;
      **(float **)(param_3 + 4) = param_3[7];
      pfVar43 = (float *)CONCAT44(uStack_180._4_4_,(float)uStack_180);
      uVar10 = CONCAT24(uStack_174,fStack_178);
      pfVar32 = (float *)CONCAT26(uStack_172,uVar10);
      pbVar21 = *(byte **)(pfVar47 + 4);
      if ((float *)(*(longlong *)pfVar47 - (longlong)pbVar21) < pfVar32) {
        pfStack_d0 = pfVar43;
        pdb_142d7f1b0(pfVar47,pbVar21,pfVar32,4,8);
        pbVar21 = *(byte **)(pfVar47 + 4);
        lVar16 = *(longlong *)(pfVar47 + 2);
        pfVar43 = pfStack_d0;
        if (pfVar32 < (float *)0xa) {
LAB_140a514a3:
          pfVar41 = (float *)0x0;
        }
        else {
LAB_140a51480:
          pfVar19 = (float *)(lVar16 + (longlong)pbVar21 * 8);
          if (pfVar19 < pfVar43 + (longlong)pfVar32 * 2 && pfVar43 < pfVar19 + (longlong)pfVar32 * 2
             ) goto LAB_140a514a3;
          lVar40 = (longlong)pbVar21 * 8;
          pfVar41 = (float *)((ulonglong)pfVar32 & 0xfffffffffffffffc);
          pbVar21 = pbVar21 + (longlong)pfVar41;
          lVar40 = lVar40 + lVar16;
          pfVar19 = (float *)0x0;
          do {
            uVar35 = *(undefined8 *)(pfVar43 + (longlong)pfVar19 * 2 + 2);
            auVar55 = *(undefined1 (*) [16])(pfVar43 + (longlong)pfVar19 * 2 + 4);
            puVar23 = (undefined8 *)(lVar40 + (longlong)pfVar19 * 8);
            *puVar23 = *(undefined8 *)(pfVar43 + (longlong)pfVar19 * 2);
            puVar23[1] = uVar35;
            *(undefined1 (*) [16])(lVar40 + 0x10 + (longlong)pfVar19 * 8) = auVar55;
            pfVar19 = pfVar19 + 1;
          } while (pfVar41 != pfVar19);
          if (pfVar32 == pfVar41) goto LAB_140a51a0c;
        }
        uVar28 = (ulonglong)uVar10 & 3;
        pfVar19 = pfVar41;
        if (((uint)fVar52 & 3) != 0) {
          do {
            *(undefined8 *)(lVar16 + (longlong)pbVar21 * 8) =
                 *(undefined8 *)(pfVar43 + (longlong)pfVar19 * 2);
            pbVar21 = pbVar21 + 1;
            pfVar19 = (float *)((longlong)pfVar19 + 1);
            uVar28 = uVar28 - 1;
          } while (uVar28 != 0);
        }
        if ((ulonglong)((longlong)pfVar41 - (longlong)pfVar32) < 0xfffffffffffffffd) {
          lVar16 = lVar16 + (longlong)pbVar21 * 8;
          pfVar32 = (float *)((longlong)pfVar32 - (longlong)pfVar19);
          pfVar41 = (float *)0x0;
          do {
            *(undefined8 *)(lVar16 + (longlong)pfVar41 * 8) =
                 *(undefined8 *)(pfVar43 + (longlong)pfVar19 * 2 + (longlong)pfVar41 * 2);
            *(undefined8 *)(lVar16 + 8 + (longlong)pfVar41 * 8) =
                 *(undefined8 *)(pfVar43 + (longlong)pfVar19 * 2 + (longlong)pfVar41 * 2 + 2);
            *(undefined8 *)(lVar16 + 0x10 + (longlong)pfVar41 * 8) =
                 *(undefined8 *)(pfVar43 + (longlong)pfVar19 * 2 + (longlong)pfVar41 * 2 + 4);
            *(undefined8 *)(lVar16 + 0x18 + (longlong)pfVar41 * 8) =
                 *(undefined8 *)(pfVar43 + (longlong)pfVar19 * 2 + (longlong)pfVar41 * 2 + 6);
            pfVar41 = pfVar41 + 1;
          } while (pfVar32 != pfVar41);
          pbVar21 = pbVar21 + (longlong)pfVar41;
        }
      }
      else if (pfVar32 != (float *)0x0) {
        lVar16 = *(longlong *)(pfVar47 + 2);
        if ((float *)0x9 < pfVar32) goto LAB_140a51480;
        goto LAB_140a514a3;
      }
LAB_140a51a0c:
      *(byte **)(pfVar47 + 4) = pbVar21;
      lVar16 = CONCAT44(fStack_184,CONCAT22(uStack_186,CONCAT11(uStack_187,cStack_188)));
      if (lVar16 != 0) {
        uVar28 = lVar16 << 3;
LAB_140a51a26:
        pub_1406abac0((byte *)pfVar43,uVar28,4);
        pfVar24 = param_3;
      }
    }
    else {
      **(float **)(param_3 + 4) = param_3[7];
      lVar16 = *(longlong *)(pfVar47 + 2);
      lVar40 = *(longlong *)(pfVar47 + 4);
      pfVar47[4] = 0.0;
      pfVar47[5] = 0.0;
      uStack_180 = (float *)(lVar16 + lVar40 * 8);
      cStack_188 = (char)lVar16;
      uStack_187 = (undefined1)((ulonglong)lVar16 >> 8);
      uStack_186 = (undefined2)((ulonglong)lVar16 >> 0x10);
      fStack_184 = (float)((ulonglong)lVar16 >> 0x20);
      fStack_178 = SUB84(pfVar47,0);
      uStack_174 = (undefined2)((ulonglong)pfVar47 >> 0x20);
      uStack_172 = (ushort)((ulonglong)pfVar47 >> 0x30);
      fStack_170 = (float)lVar40;
      uStack_16c = (undefined4)((ulonglong)lVar40 >> 0x20);
      pbStack_168 = (byte *)0x0;
      pdb_1416039d0(&fStack_358,&cStack_188);
      auStack_228._0_8_ = uStack_348;
      pfStack_238 = (float *)CONCAT44(fStack_354,fStack_358);
      pcStack_230 = (code *)CONCAT44(uStack_34c,fStack_350);
      pdb_140080c90(&cStack_188,&pfStack_238,0);
      uVar44 = uStack_172;
      uVar13 = uStack_174;
      fVar52 = fStack_178;
      pfStack_108 = pfVar26;
      if (SBORROW8(0,CONCAT44(fStack_184,CONCAT22(uStack_186,CONCAT11(uStack_187,cStack_188))))) {
        pfStack_238 = uStack_180;
        pcStack_230 = (code *)CONCAT26(uStack_172,CONCAT24(uStack_174,fStack_178));
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14335e278,0x2b,&pfStack_238,&UNK_14335e258,&UNK_14303d8d8);
      }
      uStack_288 = auStack_158._0_8_;
      puStack_2b8 = (undefined8 *)
                    CONCAT44(fStack_184,CONCAT22(uStack_186,CONCAT11(uStack_187,cStack_188)));
      pfStack_2b0 = uStack_180;
      param_2 = (float *)CONCAT26(uStack_172,CONCAT24(uStack_174,fStack_178));
      auStack_2a8._8_4_ = fStack_170;
      auStack_2a8._0_8_ = param_2;
      auStack_2a8._12_4_ = uStack_16c;
      auStack_298._8_8_ = pfStack_160;
      auStack_298._0_8_ = pbStack_168;
      fVar51 = pfStack_f0[7];
      pfVar34 = *(float **)(pfStack_f0 + 4);
      *pfVar34 = fVar51;
      uVar28 = (longlong)param_2 * 8;
      if (0x7ffffffffffffffc < uVar28 || uStack_172 >> 0xd != 0) {
        uVar35 = 0;
LAB_140a51321:
        uStack_c2 = 1;
        pdb_142dc7e2a(uVar35,uVar28);
        goto LAB_140a53b84;
      }
      pfStack_f0 = *(float **)pfStack_f0;
      if (uVar28 == 0) {
        pfStack_d0 = (float *)0x4;
        pfStack_198 = (float *)0x0;
        pfStack_1b0 = uStack_180;
      }
      else {
        pfStack_1b0 = pfStack_2b0;
        uStack_1a8 = pfVar47;
        pdb_14007ee60();
        uVar35 = 4;
        pfStack_d0 = (float *)pub_1406abab0(uVar28,4);
        if (pfStack_d0 == (float *)0x0) goto LAB_140a51321;
        pfVar47 = uStack_1a8;
        pfStack_198 = param_2;
      }
      uStack_1a8 = (float *)CONCAT44(uStack_1a8._4_4_,fVar51);
      if (param_2 != (float *)0x0) {
        pub_142e32760(pfStack_d0,pfStack_1b0,uVar28);
      }
      auVar55 = auStack_298;
      param_3 = (float *)auStack_298._8_8_;
      pfVar32 = (float *)(auStack_298._8_8_ * 4);
      if ((float *)0x7ffffffffffffffc < pfVar32 || (ulonglong)auStack_298._8_8_ >> 0x3e != 0) {
        pfVar34 = (float *)0x0;
LAB_140a51716:
        pdb_142dc7e2a(pfVar34,pfVar32);
        goto LAB_140a53b84;
      }
      pfVar43 = (float *)auStack_298._0_8_;
      pfStack_e0 = pfVar34;
      if (pfVar32 == (float *)0x0) {
        pbVar21 = (byte *)0x4;
      }
      else {
        pdb_14007ee60();
        pfVar34 = (float *)0x4;
        pbVar21 = pub_1406abab0((ulonglong)pfVar32,4);
        if (pbVar21 == (byte *)0x0) goto LAB_140a51716;
        if (param_3 != (float *)0x0) {
          pfVar24 = (float *)((longlong)param_3 + -1);
          if (param_3 < (float *)((longlong)param_3 + -1)) {
            pfVar24 = param_3;
          }
          if (pfVar24 < (float *)0x8) {
            lVar16 = 0;
            pfVar26 = param_3;
            pfVar24 = pfVar43;
          }
          else {
            pbVar29 = (byte *)((longlong)pfVar24 + 1);
            uVar28 = 8;
            if (((ulonglong)pbVar29 & 7) != 0) {
              uVar28 = (ulonglong)((uint)pbVar29 & 7);
            }
            lVar16 = (longlong)pbVar29 - uVar28;
            pfVar26 = (float *)((longlong)param_3 - lVar16);
            pfVar24 = (float *)((undefined8)pfVar43 + lVar16);
            lVar40 = 0;
            do {
              uVar35 = *(undefined8 *)((float *)((undefined8)pfVar43 + lVar40) + 2);
              auVar66 = *(undefined1 (*) [16])((undefined8)pfVar43 + lVar40 + 4);
              *(undefined8 *)(pbVar21 + lVar40 * 4) = *(undefined8 *)((undefined8)pfVar43 + lVar40);
              *(undefined8 *)(pbVar21 + lVar40 * 4 + 8) = uVar35;
              *(undefined1 (*) [16])(pbVar21 + lVar40 * 4 + 0x10) = auVar66;
              lVar40 = lVar40 + 8;
            } while (lVar16 != lVar40);
          }
          pfVar41 = (float *)(pbVar21 + lVar16 * 4);
          do {
            if (pfVar24 == (float *)((undefined8)pfVar43 + (longlong)param_3)) break;
            fVar51 = *pfVar24;
            pfVar24 = pfVar24 + 1;
            *pfVar41 = fVar51;
            pfVar41 = pfVar41 + 1;
            pfVar26 = (float *)((longlong)pfVar26 + -1);
          } while (pfVar26 != (float *)0x0);
        }
      }
      auVar14 = auStack_158._4_12_;
      uStack_186 = (undefined2)((ulonglong)pfStack_198 >> 0x10);
      cStack_188 = (char)pfStack_198;
      uStack_187 = (undefined1)((ulonglong)pfStack_198 >> 8);
      fStack_184 = (float)((ulonglong)pfStack_198 >> 0x20);
      uStack_180._0_4_ = SUB84(pfStack_d0,0);
      uStack_180._4_4_ = (uint)((ulonglong)pfStack_d0 >> 0x20);
      fStack_170 = auVar55._8_4_;
      uStack_16c = auVar55._12_4_;
      uVar2 = auStack_158._12_4_;
      fStack_178 = fVar52;
      uStack_174 = uVar13;
      uStack_172 = uVar44;
      pbStack_168 = pbVar21;
      if (*(byte *)(pfVar47 + 6) == 1) {
        cStack_119 = (DAT_143cb2d0c == '\0') * '\x05';
        pfStack_160 = param_3;
        auStack_158._0_4_ = (undefined4)uStack_288;
        auStack_158 = CONCAT124(auVar14,auStack_158._0_4_);
        auStack_158._8_4_ = 2;
        auStack_158 = CONCAT412(uVar2,auStack_158._0_12_);
        uStack_11a = 0;
        uStack_134 = (undefined4)_DAT_14303d280;
        uStack_130._0_4_ = (undefined4)((ulonglong)_DAT_14303d280 >> 0x20);
        uStack_130._4_4_ = (undefined4)_UNK_14303d288;
        uStack_128 = (undefined4)((ulonglong)_UNK_14303d288 >> 0x20);
        uStack_11c = 0;
        uStack_124 = 0x3f800000;
        uStack_120 = 0;
        uStack_11f = 0;
        uStack_11e = 1;
        uStack_c2 = 1;
        pfVar24 = (float *)&cStack_188;
        uVar28 = pdb_140b0eb60(pfStack_f0);
        pfStack_d0 = pfVar24;
      }
      else {
        uStack_11f = *(undefined1 *)*param_12;
        cStack_119 = (DAT_143cb2d0c == '\0') * '\x05';
        pfStack_160 = param_3;
        auStack_158._0_4_ = (undefined4)uStack_288;
        auStack_158 = CONCAT124(auVar14,auStack_158._0_4_);
        auStack_158._8_4_ = 2;
        auStack_158 = CONCAT412(uVar2,auStack_158._0_12_);
        uStack_120 = 0;
        uStack_11a = 0;
        uStack_134 = (undefined4)_DAT_14303d270;
        uStack_130._0_4_ = (undefined4)((ulonglong)_DAT_14303d270 >> 0x20);
        uStack_130._4_4_ = (undefined4)_UNK_14303d278;
        uStack_128 = (undefined4)((ulonglong)_UNK_14303d278 >> 0x20);
        uStack_11e = 0;
        uStack_11c = 0;
        uStack_124 = 0x3f800000;
        uStack_c2 = 1;
        pfVar24 = (float *)&cStack_188;
        uVar28 = pdb_140b0eb60(pfStack_f0);
        pfStack_d0 = pfVar24;
      }
      if ((uVar28 & 1) != 0) {
        cStack_188 = (char)pfStack_d0;
        uStack_187 = (undefined1)((ulonglong)pfStack_d0 >> 8);
        uStack_186 = (undefined2)((ulonglong)pfStack_d0 >> 0x10);
        fStack_184 = (float)((ulonglong)pfStack_d0 >> 0x20);
        if (*(longlong *)(pfStack_f0 + 6) != 0) {
          uStack_c2 = 1;
          uVar28 = pdb_1400af0a0(pfStack_f0 + 8,&cStack_188);
          lVar16 = *(longlong *)pfStack_f0;
          bVar49 = (byte)(uVar28 >> 0x39);
          auVar55 = ZEXT216(CONCAT11(bVar49,bVar49));
          auVar55 = pshuflw(auVar55,auVar55,0);
          lVar40 = 0;
          while( true ) {
            uVar28 = uVar28 & *(ulonglong *)(pfStack_f0 + 2);
            auVar66 = *(undefined1 (*) [16])(lVar16 + uVar28);
            auVar65[0] = -(auVar66[0] == auVar55[0]);
            auVar65[1] = -(auVar66[1] == auVar55[1]);
            auVar65[2] = -(auVar66[2] == auVar55[2]);
            auVar65[3] = -(auVar66[3] == auVar55[3]);
            auVar65[4] = -(auVar66[4] == auVar55[4]);
            auVar65[5] = -(auVar66[5] == auVar55[5]);
            auVar65[6] = -(auVar66[6] == auVar55[6]);
            auVar65[7] = -(auVar66[7] == auVar55[7]);
            auVar65[8] = -(auVar66[8] == auVar55[0]);
            auVar65[9] = -(auVar66[9] == auVar55[1]);
            auVar65[10] = -(auVar66[10] == auVar55[2]);
            auVar65[0xb] = -(auVar66[0xb] == auVar55[3]);
            auVar65[0xc] = -(auVar66[0xc] == auVar55[4]);
            auVar65[0xd] = -(auVar66[0xd] == auVar55[5]);
            auVar65[0xe] = -(auVar66[0xe] == auVar55[6]);
            auVar65[0xf] = -(auVar66[0xf] == auVar55[7]);
            uVar44 = (ushort)(SUB161(auVar65 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar65[0xf] >> 7) << 0xf;
            uVar22 = (uint)uVar44;
            while (uVar44 != 0) {
              uVar39 = 0;
              for (uVar7 = uVar22; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
                uVar39 = uVar39 + 1;
              }
              lVar46 = (uVar39 + uVar28 & *(ulonglong *)(pfStack_f0 + 2)) * -0x78;
              if (pfStack_d0 == *(float **)(lVar16 + -0x78 + lVar46)) {
                cVar15 = *(char *)(lVar16 + lVar46 + -7);
                lVar16 = *param_11;
                uVar22 = *(uint *)(lVar16 + 0x30);
                param_2 = (float *)(ulonglong)uVar22;
                pfStack_1b0 = (float *)CONCAT71(pfStack_1b0._1_7_,cVar15);
                if (*(byte *)(pfVar47 + 6) == 1) {
                  pfStack_f8 = (float *)CONCAT44(pfStack_f8._4_4_,*(undefined4 *)(lVar16 + 0x48));
                  pbStack_258 = (byte *)auStack_298._0_8_;
                  pfStack_250 = (float *)auStack_298._8_8_;
                  uStack_268 = auStack_2a8._0_8_;
                  uStack_260 = auStack_2a8._8_8_;
                  fStack_278 = SUB84(puStack_2b8,0);
                  fStack_274 = (float)((ulonglong)puStack_2b8 >> 0x20);
                  fStack_270 = SUB84(pfStack_2b0,0);
                  uStack_26c = (uint)((ulonglong)pfStack_2b0 >> 0x20);
                }
                else {
                  pfStack_198 = (float *)CONCAT44(pfStack_198._4_4_,*(uint *)(lVar16 + 0x28));
                  uVar39 = *(uint *)(lVar16 + 0x28);
                  if (cVar15 != '\0') {
                    uVar39 = uVar22;
                  }
                  pfStack_f8 = (float *)CONCAT44(pfStack_f8._4_4_,uVar39);
                  if (cVar15 == '\0') {
                    if (*(char *)(lVar16 + 0x60) != '\x03') {
                      *pfStack_e0 = (float)uStack_1a8;
                      uStack_c2 = 1;
                      pdb_140b0e1c0(pfStack_f0,pfStack_d0);
                    }
                    *pfStack_e0 = (float)uStack_1a8;
                    uStack_c2 = 1;
                    pdb_140b0e430(pfStack_f0,pfStack_d0,*(undefined4 *)(lVar16 + 0x3c));
                  }
                  *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
                  lVar40 = *param_8;
                  lVar46 = *(longlong *)(lVar40 + 0x30);
                  uVar35 = *(undefined8 *)(lVar40 + 0x40);
                  if (lVar46 == *(longlong *)(lVar40 + 0x20)) {
                    uStack_c2 = 1;
                    pdb_142d7e830(lVar40 + 0x20);
                  }
                  lVar42 = *(longlong *)(lVar40 + 0x28);
                  *(undefined8 *)(lVar42 + lVar46 * 0x18) = uVar35;
                  *(float **)(lVar42 + 8 + lVar46 * 0x18) = pfStack_d0;
                  *(float *)(lVar42 + 0x10 + lVar46 * 0x18) = pfStack_198._0_4_;
                  *(undefined1 *)(lVar42 + 0x14 + lVar46 * 0x18) = 0;
                  *(longlong *)(lVar40 + 0x30) = lVar46 + 1;
                  *(longlong *)(lVar40 + 0x40) = *(longlong *)(lVar40 + 0x40) + 1;
                  *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
                  lVar40 = *param_9;
                  lVar46 = *(longlong *)(lVar40 + 0x30);
                  uVar35 = *(undefined8 *)(lVar40 + 0x40);
                  if (lVar46 == *(longlong *)(lVar40 + 0x20)) {
                    uStack_c2 = 1;
                    pdb_142d7e830(lVar40 + 0x20);
                  }
                  lVar42 = *(longlong *)(lVar40 + 0x28);
                  *(undefined8 *)(lVar42 + lVar46 * 0x18) = uVar35;
                  *(float **)(lVar42 + 8 + lVar46 * 0x18) = pfStack_d0;
                  *(uint *)(lVar42 + 0x10 + lVar46 * 0x18) = uVar22;
                  *(undefined1 *)(lVar42 + 0x14 + lVar46 * 0x18) = 0;
                  *(longlong *)(lVar40 + 0x30) = lVar46 + 1;
                  *(longlong *)(lVar40 + 0x40) = *(longlong *)(lVar40 + 0x40) + 1;
                  uStack_248 = uStack_288;
                  pbStack_258 = (byte *)auStack_298._0_8_;
                  pfStack_250 = (float *)auStack_298._8_8_;
                  uStack_268 = auStack_2a8._0_8_;
                  uStack_260 = auStack_2a8._8_8_;
                  fStack_278 = SUB84(puStack_2b8,0);
                  fStack_274 = (float)((ulonglong)puStack_2b8 >> 0x20);
                  fStack_270 = SUB84(pfStack_2b0,0);
                  uStack_26c = (uint)((ulonglong)pfStack_2b0 >> 0x20);
                  param_3 = param_2;
                  if (*(byte *)(pfVar47 + 6) == 0) {
                    pfStack_1b8 = (float *)CONCAT44(pfStack_1b8._4_4_,_DAT_143036618);
                    pfVar24 = pfStack_108;
                    goto LAB_140a5323b;
                  }
                }
                pfVar24 = pfStack_108;
                pfVar26 = pfStack_1b8;
                cStack_188 = (char)pfStack_d0;
                uStack_187 = (undefined1)((ulonglong)pfStack_d0 >> 8);
                uStack_186 = (undefined2)((ulonglong)pfStack_d0 >> 0x10);
                fStack_184 = (float)((ulonglong)pfStack_d0 >> 0x20);
                uStack_248 = uStack_288;
                if (*(longlong *)(pfStack_1b8 + 6) == 0) goto LAB_140a52c7e;
                uStack_e1 = 1;
                uVar28 = pdb_1400af0a0(pfStack_1b8 + 8,&cStack_188);
                lVar40 = *(longlong *)pfVar26;
                pfVar34 = pfVar26 + 2;
                bVar49 = (byte)(uVar28 >> 0x39);
                auVar55 = ZEXT216(CONCAT11(bVar49,bVar49));
                auVar55 = pshuflw(auVar55,auVar55,0);
                lVar46 = 0;
                goto LAB_140a52c13;
              }
              uVar44 = (ushort)(uVar22 - 1) & (ushort)uVar22;
              uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar44);
            }
            auVar59[0] = -(auVar66[0] == -1);
            auVar59[1] = -(auVar66[1] == -1);
            auVar59[2] = -(auVar66[2] == -1);
            auVar59[3] = -(auVar66[3] == -1);
            auVar59[4] = -(auVar66[4] == -1);
            auVar59[5] = -(auVar66[5] == -1);
            auVar59[6] = -(auVar66[6] == -1);
            auVar59[7] = -(auVar66[7] == -1);
            auVar59[8] = -(auVar66[8] == -1);
            auVar59[9] = -(auVar66[9] == -1);
            auVar59[10] = -(auVar66[10] == -1);
            auVar59[0xb] = -(auVar66[0xb] == -1);
            auVar59[0xc] = -(auVar66[0xc] == -1);
            auVar59[0xd] = -(auVar66[0xd] == -1);
            auVar59[0xe] = -(auVar66[0xe] == -1);
            auVar59[0xf] = -(auVar66[0xf] == -1);
            if ((((((((((((((((SUB161(auVar59 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar59 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar59 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar59 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar59 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar59 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar59 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar59 >> 0x3f,0) & 1) != 0) || (SUB161(auVar59 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar59 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar59 >> 0x57,0) & 1) != 0) || (SUB161(auVar59 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar59 >> 0x67,0) & 1) != 0) || (SUB161(auVar59 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar59 >> 0x77,0) & 1) != 0) || auVar59[0xf] < '\0') break;
            uVar28 = uVar28 + lVar40 + 0x10;
            lVar40 = lVar40 + 0x10;
          }
        }
        uStack_c2 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14303d8f0);
      }
      if (puStack_2b8 != (undefined8 *)0x0) {
        pub_1406abac0((byte *)pfStack_1b0,(longlong)puStack_2b8 << 3,4);
      }
      pfVar26 = pfVar43;
      pfVar24 = param_3;
      if (auStack_2a8._8_8_ != 0) {
        uVar28 = auStack_2a8._8_8_ << 2;
        goto LAB_140a51a26;
      }
    }
    goto LAB_140a51a2b;
  }
  **(float **)(pfVar26 + 4) = pfVar26[7];
  if (SBORROW8(0,*(longlong *)pfVar19)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14303d710);
  }
  fStack_358 = 0.0;
  fStack_354 = -0.0;
  if (*(byte *)(pfVar19 + 0x22) == 0) {
    pfVar24 = (float *)&UNK_143044340;
    if (*(byte *)pfStack_d0 != 0) {
      pfVar24 = pfStack_d0 + 1;
    }
    fVar52 = *pfVar24;
    fVar51 = pfVar24[2];
    pfVar19[0x22] = 1.4013e-45;
    pfVar19[0x23] = fVar52;
    pfVar19[0x24] = fVar51;
    bVar49 = *(byte *)pfVar47;
  }
  else {
    bVar49 = *(byte *)pfVar47;
  }
  if (bVar49 < 2) {
    fStack_278 = 0.0;
    if ((*(longlong *)(pfVar19 + 4) != 0) &&
       (puVar23 = (undefined8 *)(*(longlong *)(pfVar19 + 2) + *(longlong *)(pfVar19 + 4) * 8 + -8),
       puVar23 != (undefined8 *)0x0)) {
      uVar35 = *puVar23;
      fStack_274 = (float)uVar35;
      fStack_270 = (float)((ulonglong)uVar35 >> 0x20);
      fStack_278 = 1.4013e-45;
    }
    pfStack_238 = (float *)&UNK_143044340;
    if (*(byte *)pfStack_d0 != 0) {
      pfStack_238 = pfStack_d0 + 1;
    }
    pcStack_230 = (code *)CONCAT44(pcStack_230._4_4_,pfStack_238[2]);
    pfStack_238 = *(float **)pfStack_238;
    uStack_c1 = 1;
    pdb_140bedef0(&cStack_188,&fStack_278,&pfStack_238,pfStack_108,param_2,pfVar34);
    pfVar26 = pfStack_f0;
    fVar52 = _DAT_142e36f28;
    if (CONCAT26(uStack_172,CONCAT24(uStack_174,fStack_178)) == 0) {
      lVar16 = *(longlong *)(pfVar19 + 0x12);
      if (lVar16 == 0) {
        pfStack_e0 = (float *)0x0;
      }
      else {
        fVar51 = pfStack_108[10];
        if (pfStack_108[10] <= _DAT_142e37934) {
          fVar51 = _DAT_142e37934;
        }
        pub_142e32b00(_DAT_142e36f28 / fVar51);
        fVar51 = (float)pub_142e32b00();
        if (fVar51 <= fVar52) {
          fVar51 = fVar52;
        }
        pfStack_e0 = (float *)0x0;
        uVar28 = 0;
        if (0.0 <= fVar51) {
          uVar28 = (longlong)(fVar51 - _DAT_142e36f2c) & (longlong)fVar51 >> 0x3f | (longlong)fVar51
          ;
        }
        uVar17 = 0xffffffffffffffff;
        if (fVar51 <= _DAT_142e36f30) {
          uVar17 = uVar28;
        }
        uVar17 = uVar17 + *(longlong *)(*(longlong *)(pfVar19 + 0x10) + -8 + lVar16 * 8);
        uVar28 = 0x32;
        if (uVar17 < 0x32) {
          uVar28 = uVar17;
        }
        uVar25 = 1;
        if (uVar17 != 0) {
          uVar25 = uVar28;
        }
        *(ulonglong *)(*(longlong *)(pfVar19 + 0x10) + -8 + lVar16 * 8) = uVar25;
      }
    }
    else {
      pfStack_e0 = (float *)CONCAT44(uStack_180._4_4_,(float)uStack_180);
      uVar35 = pdb_140becdb0(&pfStack_238,pfVar19);
      pfStack_e0 = (float *)CONCAT71((int7)((ulonglong)uVar35 >> 8),(char)pfStack_238 == '\x03');
    }
    lVar16 = CONCAT44(fStack_184,CONCAT22(uStack_186,CONCAT11(uStack_187,cStack_188)));
    pfStack_100 = pfVar19;
    if (lVar16 != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_180._4_4_,(float)uStack_180),lVar16 << 3,4);
    }
    goto LAB_140a51af2;
  }
  pfVar24 = *(float **)(pfVar19 + 4);
  uVar28 = (longlong)pfVar24 * 8;
  if (0x7ffffffffffffffc < uVar28 || (ulonglong)pfVar24 >> 0x3d != 0) {
    uVar35 = 0;
LAB_140a513ac:
    uStack_c1 = 1;
    pdb_142dc7e2a(uVar35,uVar28);
    goto LAB_140a53b84;
  }
  uVar30 = *(undefined8 *)(pfVar19 + 2);
  pfStack_190 = pfVar47;
  if (uVar28 == 0) {
    pfStack_e0 = (float *)0x4;
    pfStack_f8 = (float *)0x0;
    pfVar47 = pfStack_f8;
  }
  else {
    pdb_14007ee60();
    uVar35 = 4;
    pfStack_e0 = (float *)pub_1406abab0(uVar28,4);
    pfVar47 = pfVar24;
    if (pfStack_e0 == (float *)0x0) goto LAB_140a513ac;
  }
  pfStack_f8 = pfVar47;
  if (pfVar24 != (float *)0x0) {
    pub_142e32760(pfStack_e0,uVar30,uVar28);
  }
  pfVar47 = *(float **)(pfVar19 + 10);
  uVar28 = (longlong)pfVar47 * 4;
  if (0x7ffffffffffffffc < uVar28 || (ulonglong)pfVar47 >> 0x3e != 0) {
    uVar35 = 0;
LAB_140a51657:
    pdb_142dc7e2a(uVar35,uVar28);
    goto LAB_140a53b84;
  }
  if (uVar28 == 0) {
    pbVar21 = (byte *)0x4;
    pfStack_100 = pfVar19;
  }
  else {
    puVar5 = *(undefined4 **)(pfVar19 + 8);
    pfStack_100 = pfVar19;
    pdb_14007ee60();
    uVar35 = 4;
    pbVar21 = pub_1406abab0(uVar28,4);
    if (pbVar21 == (byte *)0x0) goto LAB_140a51657;
    if (pfVar47 != (float *)0x0) {
      pfVar26 = (float *)((longlong)pfVar47 + -1);
      if (pfVar47 < (float *)((longlong)pfVar47 + -1)) {
        pfVar26 = pfVar47;
      }
      if (pfVar26 < (float *)0x8) {
        lVar16 = 0;
        pfVar26 = pfVar47;
        puVar37 = puVar5;
      }
      else {
        pbVar29 = (byte *)((longlong)pfVar26 + 1);
        uVar28 = 8;
        if (((ulonglong)pbVar29 & 7) != 0) {
          uVar28 = (ulonglong)((uint)pbVar29 & 7);
        }
        lVar16 = (longlong)pbVar29 - uVar28;
        pfVar26 = (float *)((longlong)pfVar47 - lVar16);
        puVar37 = puVar5 + lVar16;
        lVar40 = 0;
        do {
          uVar35 = *(undefined8 *)((longlong)(puVar5 + lVar40) + 8);
          uVar30 = *(undefined8 *)(puVar5 + lVar40 + 4);
          uVar9 = *(undefined8 *)((longlong)(puVar5 + lVar40 + 4) + 8);
          *(undefined8 *)(pbVar21 + lVar40 * 4) = *(undefined8 *)(puVar5 + lVar40);
          *(undefined8 *)(pbVar21 + lVar40 * 4 + 8) = uVar35;
          *(undefined8 *)(pbVar21 + lVar40 * 4 + 0x10) = uVar30;
          *(undefined8 *)(pbVar21 + lVar40 * 4 + 0x10 + 8) = uVar9;
          lVar40 = lVar40 + 8;
        } while (lVar16 != lVar40);
      }
      pbVar29 = pbVar21 + lVar16 * 4;
      do {
        if (puVar37 == puVar5 + (longlong)pfVar47) break;
        uVar2 = *puVar37;
        puVar37 = puVar37 + 1;
        *(undefined4 *)pbVar29 = uVar2;
        pbVar29 = pbVar29 + 4;
        pfVar26 = (float *)((longlong)pfVar26 + -1);
      } while (pfVar26 != (float *)0x0);
    }
  }
  cStack_188 = (char)pfStack_f8;
  uStack_187 = (undefined1)((ulonglong)pfStack_f8 >> 8);
  uStack_186 = (undefined2)((ulonglong)pfStack_f8 >> 0x10);
  fStack_184 = (float)((ulonglong)pfStack_f8 >> 0x20);
  uStack_180._0_4_ = SUB84(pfStack_e0,0);
  uStack_180._4_4_ = (uint)((ulonglong)pfStack_e0 >> 0x20);
  fStack_178 = SUB84(pfVar24,0);
  uStack_174 = (undefined2)((ulonglong)pfVar24 >> 0x20);
  uStack_172 = (ushort)((ulonglong)pfVar24 >> 0x30);
  fStack_170 = SUB84(pfVar47,0);
  uStack_16c = (undefined4)((ulonglong)pfVar47 >> 0x20);
  auStack_158._0_4_ = pfStack_100[0xc];
  pfVar24 = *(float **)(pfStack_100 + 0x12);
  uVar28 = (longlong)pfVar24 * 8;
  pbStack_168 = pbVar21;
  pfStack_160 = pfVar47;
  if (0x7ffffffffffffff8 < uVar28 || (ulonglong)pfVar24 >> 0x3d != 0) {
    uVar35 = 0;
LAB_140a52582:
    pdb_142dc7e2a(uVar35,uVar28);
    goto LAB_140a53b84;
  }
  uVar30 = *(undefined8 *)(pfStack_100 + 0x10);
  if (uVar28 == 0) {
    pfStack_e0 = (float *)0x8;
    pfStack_f8 = (float *)0x0;
    pfVar47 = pfStack_f8;
  }
  else {
    pdb_14007ee60();
    uVar35 = 8;
    pfStack_e0 = (float *)pub_1406abab0(uVar28,8);
    pfVar47 = pfVar24;
    if (pfStack_e0 == (float *)0x0) goto LAB_140a52582;
  }
  pfStack_f8 = pfVar47;
  if (pfVar24 != (float *)0x0) {
    pub_142e32760(pfStack_e0,uVar30,uVar28);
  }
  uVar17 = *(ulonglong *)(pfStack_100 + 0x18);
  uVar28 = uVar17 * 8;
  if (0x7ffffffffffffff8 < uVar28 || uVar17 >> 0x3d != 0) {
    uVar35 = 0;
LAB_140a529c9:
    pdb_142dc7e2a(uVar35,uVar28);
    goto LAB_140a53b84;
  }
  uVar30 = *(undefined8 *)(pfStack_100 + 0x16);
  if (uVar28 == 0) {
    pbStack_1a0 = (byte *)0x8;
    uStack_2c0 = 0;
    uVar25 = uStack_2c0;
  }
  else {
    pdb_14007ee60();
    uVar35 = 8;
    pbStack_1a0 = pub_1406abab0(uVar28,8);
    uVar25 = uVar17;
    if (pbStack_1a0 == (byte *)0x0) goto LAB_140a529c9;
  }
  uStack_2c0 = uVar25;
  if (uVar17 != 0) {
    pub_142e32760(pbStack_1a0,uVar30,uVar28);
  }
  uVar25 = *(ulonglong *)(pfStack_100 + 0x1e);
  uVar28 = uVar25 * 8;
  if (0x7ffffffffffffffc < uVar28 || uVar25 >> 0x3d != 0) {
    uVar35 = 0;
LAB_140a52d1b:
    pdb_142dc7e2a(uVar35,uVar28);
LAB_140a53b84:
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  if (uVar28 == 0) {
    pbVar21 = (byte *)0x4;
    uVar30 = *(undefined8 *)(pfStack_100 + 0x1c);
    uVar36 = 0;
  }
  else {
    uStack_360 = *(undefined8 *)(pfStack_100 + 0x1c);
    pdb_14007ee60();
    uVar35 = 4;
    pbVar21 = pub_1406abab0(uVar28,4);
    uVar30 = uStack_360;
    uVar36 = uVar25;
    if (pbVar21 == (byte *)0x0) goto LAB_140a52d1b;
  }
  if (uVar25 != 0) {
    pub_142e32760(pbVar21,uVar30,uVar28);
  }
  uStack_208 = auStack_158._0_8_;
  pfStack_238 = (float *)CONCAT44(fStack_184,CONCAT22(uStack_186,CONCAT11(uStack_187,cStack_188)));
  pcStack_230 = (code *)CONCAT44(uStack_180._4_4_,(float)uStack_180);
  auStack_228._4_2_ = uStack_174;
  auStack_228._0_4_ = fStack_178;
  auStack_228._6_2_ = uStack_172;
  auStack_228._12_4_ = uStack_16c;
  auStack_228._8_4_ = fStack_170;
  auStack_218._8_8_ = pfStack_160;
  auStack_218._0_8_ = pbStack_168;
  pfStack_200 = pfStack_f8;
  pfStack_1f8 = pfStack_e0;
  uStack_1e8 = uStack_2c0;
  pbStack_1e0 = pbStack_1a0;
  pfVar47 = pfStack_d0 + 1;
  pfVar26 = (float *)&UNK_143044340;
  if (*(byte *)pfStack_d0 != 0) {
    pfVar26 = pfVar47;
  }
  fStack_278 = *pfVar26;
  fStack_274 = pfVar26[2];
  uStack_d1 = 1;
  pfStack_1f0 = pfVar24;
  uStack_1d8 = uVar17;
  uStack_1d0 = uVar36;
  pbStack_1c8 = pbVar21;
  uStack_1c0 = uVar25;
  pdb_140becdb0(&cStack_188,&pfStack_238,&fStack_278,1);
  fVar11 = _DAT_14303d260;
  fVar72 = _DAT_142e37878;
  fVar51 = _DAT_142e37848;
  fVar52 = _DAT_142e36f28;
  if (cStack_188 != '\x03') {
    uStack_c1 = 1;
    pdb_14099a6f0(&pfStack_238);
    pfStack_e0 = (float *)0x0;
    pfVar26 = pfStack_f0;
    pfVar47 = pfStack_190;
LAB_140a51af2:
    unaff_R12 = *(float **)pfVar26;
    pfVar34 = *(float **)(pfVar19 + 0x20);
    cStack_188 = (char)pfVar34;
    uStack_187 = (undefined1)((ulonglong)pfVar34 >> 8);
    uStack_186 = (undefined2)((ulonglong)pfVar34 >> 0x10);
    fStack_184 = (float)((ulonglong)pfVar34 >> 0x20);
    if (*(longlong *)(unaff_R12 + 6) != 0) {
      pfVar32 = unaff_R12 + 8;
      uStack_c1 = 1;
      uVar28 = pdb_1400af0a0(pfVar32,&cStack_188);
      lVar16 = *(longlong *)unaff_R12;
      bVar49 = (byte)(uVar28 >> 0x39);
      auVar55 = ZEXT216(CONCAT11(bVar49,bVar49));
      auVar55 = pshuflw(auVar55,auVar55,0);
      lVar40 = 0;
      while( true ) {
        uVar28 = uVar28 & *(ulonglong *)(unaff_R12 + 2);
        auVar66 = *(undefined1 (*) [16])(lVar16 + uVar28);
        auVar63[0] = -(auVar66[0] == auVar55[0]);
        auVar63[1] = -(auVar66[1] == auVar55[1]);
        auVar63[2] = -(auVar66[2] == auVar55[2]);
        auVar63[3] = -(auVar66[3] == auVar55[3]);
        auVar63[4] = -(auVar66[4] == auVar55[4]);
        auVar63[5] = -(auVar66[5] == auVar55[5]);
        auVar63[6] = -(auVar66[6] == auVar55[6]);
        auVar63[7] = -(auVar66[7] == auVar55[7]);
        auVar63[8] = -(auVar66[8] == auVar55[0]);
        auVar63[9] = -(auVar66[9] == auVar55[1]);
        auVar63[10] = -(auVar66[10] == auVar55[2]);
        auVar63[0xb] = -(auVar66[0xb] == auVar55[3]);
        auVar63[0xc] = -(auVar66[0xc] == auVar55[4]);
        auVar63[0xd] = -(auVar66[0xd] == auVar55[5]);
        auVar63[0xe] = -(auVar66[0xe] == auVar55[6]);
        auVar63[0xf] = -(auVar66[0xf] == auVar55[7]);
        uVar44 = (ushort)(SUB161(auVar63 >> 7,0) & 1) | (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe | (ushort)(auVar63[0xf] >> 7) << 0xf
        ;
        uVar22 = (uint)uVar44;
        while (uVar44 != 0) {
          uVar39 = 0;
          for (uVar7 = uVar22; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar39 = uVar39 + 1;
          }
          lVar46 = (uVar39 + uVar28 & *(ulonglong *)(unaff_R12 + 2)) * -0x78;
          if (pfVar34 == *(float **)(lVar16 + -0x78 + lVar46)) {
            fVar52 = *(float *)(lVar16 + lVar46 + -0x1c);
            if (*(byte *)pfVar47 == 2) {
              pfVar47 = *(float **)(pfVar47 + 4);
              cStack_188 = (char)pfVar47;
              cVar15 = cStack_188;
              uStack_187 = (undefined1)((ulonglong)pfVar47 >> 8);
              uVar12 = uStack_187;
              uStack_186 = (undefined2)((ulonglong)pfVar47 >> 0x10);
              uVar13 = uStack_186;
              fStack_184 = (float)((ulonglong)pfVar47 >> 0x20);
              fVar51 = fStack_184;
              if (*(longlong *)(unaff_R12 + 6) == 0) goto LAB_140a520cc;
              uStack_c1 = 1;
              uVar28 = pdb_1400af0a0(pfVar32,&cStack_188);
              lVar16 = *(longlong *)unaff_R12;
              bVar49 = (byte)(uVar28 >> 0x39);
              auVar55 = ZEXT216(CONCAT11(bVar49,bVar49));
              auVar55 = pshuflw(auVar55,auVar55,0);
              lVar40 = 0;
              goto LAB_140a51c25;
            }
            pfStack_f8 = *(float **)(pfVar26 + 4);
            pfStack_f0 = (float *)CONCAT44(pfStack_f0._4_4_,pfVar26[7]);
            *pfStack_f8 = pfVar26[7];
            uStack_c1 = 1;
            pdb_140a50ca0(unaff_R12,pfStack_100,param_8,param_9,param_10);
            *pfStack_f8 = pfStack_f0._0_4_;
            pfVar32 = *(float **)(pfVar19 + 0x20);
            bVar49 = *(byte *)((longlong)pfStack_100 + 0xa6);
            pfVar26 = (float *)CONCAT71((int7)((ulonglong)pfVar26 >> 8),bVar49);
            fStack_278 = SUB84(pfVar32,0);
            fStack_274 = (float)((ulonglong)pfVar32 >> 0x20);
            uStack_c1 = 1;
            pfVar47 = &fStack_278;
            pfVar34 = (float *)pdb_1417bd890(unaff_R12,pfVar47);
            if (pfVar34 == (float *)0x0) {
              if (1 < *_DAT_143ca8e90) {
                pcStack_230 = pdb_140c04ef0;
                cStack_188 = '\0';
                uStack_187 = 0;
                uStack_186 = 0;
                fStack_184 = 0.0;
                uStack_180._0_4_ = 130.11667;
                uStack_180._4_4_ = 1;
                fStack_178 = 6.02558e-44;
                uStack_174 = 0;
                uStack_172 = 0;
                fStack_170 = 0.0;
                uStack_16c = 0;
                pbStack_168 = &UNK_143021da7;
                pfStack_160 = (float *)0x36;
                auStack_158._8_8_ = &UNK_143021dde;
                auStack_158._0_8_ = 2;
                pfStack_148 = (float *)0x2b;
                pfStack_140 = (float *)0xfd00000001;
                uStack_138 = 0x43021d78;
                uStack_134 = 1;
                uStack_130 = &pfStack_238;
                uStack_c1 = 1;
                pfStack_238 = pfVar47;
                pdb_140f332f0(&uStack_d2,&cStack_188);
              }
            }
            else {
              uStack_c1 = 1;
              pdb_1403b05d0(unaff_R12 + 0x18,pfVar32);
              *(byte *)((longlong)pfVar34 + 0x6b) = bVar49;
            }
            fVar72 = pfStack_100[0x25];
            goto LAB_140a51f37;
          }
          uVar44 = (ushort)(uVar22 - 1) & (ushort)uVar22;
          uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar44);
        }
        auVar57[0] = -(auVar66[0] == -1);
        auVar57[1] = -(auVar66[1] == -1);
        auVar57[2] = -(auVar66[2] == -1);
        auVar57[3] = -(auVar66[3] == -1);
        auVar57[4] = -(auVar66[4] == -1);
        auVar57[5] = -(auVar66[5] == -1);
        auVar57[6] = -(auVar66[6] == -1);
        auVar57[7] = -(auVar66[7] == -1);
        auVar57[8] = -(auVar66[8] == -1);
        auVar57[9] = -(auVar66[9] == -1);
        auVar57[10] = -(auVar66[10] == -1);
        auVar57[0xb] = -(auVar66[0xb] == -1);
        auVar57[0xc] = -(auVar66[0xc] == -1);
        auVar57[0xd] = -(auVar66[0xd] == -1);
        auVar57[0xe] = -(auVar66[0xe] == -1);
        auVar57[0xf] = -(auVar66[0xf] == -1);
        if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 || (SUB161(auVar57 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar57 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar57 >> 0x1f,0) & 1) != 0) || (SUB161(auVar57 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar57 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar57 >> 0x37,0) & 1) != 0) || (SUB161(auVar57 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar57 >> 0x47,0) & 1) != 0) || (SUB161(auVar57 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar57 >> 0x57,0) & 1) != 0) || (SUB161(auVar57 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar57 >> 0x67,0) & 1) != 0) || (SUB161(auVar57 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar57 >> 0x77,0) & 1) != 0) || auVar57[0xf] < '\0') break;
        uVar28 = uVar28 + lVar40 + 0x10;
        lVar40 = lVar40 + 0x10;
      }
    }
    uStack_c1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14303d740);
  }
  if (1 < *(byte *)pfStack_190) {
    fVar70 = (float)*(undefined8 *)(pfStack_190 + 2);
    fVar71 = (float)((ulonglong)*(undefined8 *)(pfStack_190 + 2) >> 0x20);
    bVar49 = *(byte *)((longlong)pfStack_190 + 1);
    pfStack_e0 = (float *)CONCAT71((int7)((ulonglong)pfStack_190 >> 8),1);
    iVar31 = 1;
    bVar48 = false;
    do {
      iVar27 = iVar31;
      do {
        if ((bVar48) || (10 < iVar27)) {
          pbStack_118 = pbStack_1c8;
          uStack_110 = uStack_1c0;
          uStack_128 = (undefined4)uStack_1d8;
          uStack_124 = (undefined4)(uStack_1d8 >> 0x20);
          uStack_120 = (undefined1)uStack_1d0;
          uStack_11f = (undefined1)(uStack_1d0 >> 8);
          uStack_11e = (undefined2)(uStack_1d0 >> 0x10);
          uStack_11c = (undefined2)(uStack_1d0 >> 0x20);
          uStack_11a = (undefined1)(uStack_1d0 >> 0x30);
          cStack_119 = (char)(uStack_1d0 >> 0x38);
          uStack_138 = (undefined4)uStack_1e8;
          uStack_134 = (undefined4)(uStack_1e8 >> 0x20);
          uStack_130._0_4_ = SUB84(pbStack_1e0,0);
          uStack_130._4_4_ = (undefined4)((ulonglong)pbStack_1e0 >> 0x20);
          pfStack_148 = pfStack_1f8;
          pfStack_140 = pfStack_1f0;
          auStack_158._8_8_ = pfStack_200;
          auStack_158._0_8_ = uStack_208;
          pbStack_168 = (byte *)auStack_218._0_8_;
          pfStack_160 = (float *)auStack_218._8_8_;
          fStack_178 = auStack_228._0_4_;
          uStack_174 = auStack_228._4_2_;
          uStack_172 = auStack_228._6_2_;
          fStack_170 = auStack_228._8_4_;
          uStack_16c = auStack_228._12_4_;
          cStack_188 = (char)pfStack_238;
          uStack_187 = (undefined1)((ulonglong)pfStack_238 >> 8);
          uStack_186 = (undefined2)((ulonglong)pfStack_238 >> 0x10);
          fStack_184 = (float)((ulonglong)pfStack_238 >> 0x20);
          uStack_180._0_4_ = SUB84(pcStack_230,0);
          uStack_180._4_4_ = (uint)((ulonglong)pcStack_230 >> 0x20);
          if (!SBORROW8(0,CONCAT44(fStack_354,fStack_358))) {
            pdb_14099a6f0(&fStack_358);
          }
          pbStack_2e8 = pbStack_118;
          uStack_2e0 = uStack_110;
          uStack_2f8 = CONCAT44(uStack_124,uStack_128);
          uStack_2f0 = CONCAT17(cStack_119,
                                CONCAT16(uStack_11a,
                                         CONCAT24(uStack_11c,
                                                  CONCAT22(uStack_11e,
                                                           CONCAT11(uStack_11f,uStack_120)))));
          uStack_308 = CONCAT44(uStack_134,uStack_138);
          ppfStack_300 = (float **)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
          pfStack_318 = pfStack_148;
          pfStack_310 = pfStack_140;
          fStack_358 = (float)CONCAT22(uStack_186,CONCAT11(uStack_187,cStack_188));
          uStack_348 = CONCAT26(uStack_172,CONCAT24(uStack_174,fStack_178));
          uStack_340 = CONCAT44(uStack_16c,fStack_170);
          pbStack_338 = pbStack_168;
          pfStack_330 = pfStack_160;
          uStack_328 = auStack_158._0_8_;
          uStack_320 = auStack_158._8_8_;
          fStack_354 = fStack_184;
          fStack_350 = (float)uStack_180;
          uStack_34c = uStack_180._4_4_;
          pfVar26 = pfStack_f0;
          pfVar47 = pfStack_190;
          uStack_130 = ppfStack_300;
          goto LAB_140a51af2;
        }
        bVar48 = iVar27 == 10;
        iVar31 = iVar27 + 1;
        if (bVar48) {
          iVar31 = iVar27;
        }
        fVar53 = (float)iVar27 / fVar72;
        if (bVar49 == *(byte *)(pfStack_100 + 0x29)) {
          pfVar24 = (float *)&UNK_143044340;
          if (*(byte *)pfStack_d0 != 0) {
            pfVar24 = pfVar47;
          }
          fVar54 = fVar53 * fVar70 + *pfVar24 * (fVar52 - fVar53);
          fVar53 = fVar53 * fVar71 + pfVar24[2] * (fVar52 - fVar53);
        }
        else {
          pfVar24 = (float *)&UNK_143044340;
          if (*(byte *)pfStack_d0 != 0) {
            pfVar24 = pfVar47;
          }
          fVar54 = *pfVar24;
          fVar56 = pfVar24[2];
          fVar62 = SQRT((fVar56 - fVar71) * (fVar56 - fVar71) +
                        (fVar54 - fVar70) * (fVar54 - fVar70)) + fVar11;
          if (fVar62 <= 0.0) {
            fVar62 = 0.0;
          }
          fVar68 = fVar70 - fVar54;
          fVar69 = fVar71 - fVar56;
          fVar73 = fVar52 / SQRT(fVar69 * fVar69 + fVar68 * fVar68);
          fVar54 = fVar53 * (fVar62 * fVar73 * fVar68 + fVar54) + (fVar52 - fVar53) * fVar54;
          fVar53 = fVar53 * (fVar62 * fVar73 * fVar69 + fVar56) + (fVar52 - fVar53) * fVar56;
        }
      } while ((pcStack_230 + auStack_228._0_8_ * 8 + -8 != (code *)0x0 && auStack_228._0_8_ != 0)
              && (uVar35 = *(undefined8 *)(pcStack_230 + auStack_228._0_8_ * 8 + -8),
                 fVar56 = fVar54 - (float)uVar35,
                 fVar62 = fVar53 - (float)((ulonglong)uVar35 >> 0x20), iVar27 = iVar31,
                 SQRT(fVar62 * fVar62 + fVar56 * fVar56) < fVar51));
      uStack_d1 = 1;
      fStack_278 = fVar54;
      fStack_274 = fVar53;
      uVar35 = pdb_140becdb0(&cStack_188,&pfStack_238,&fStack_278,1);
      pfStack_e0 = (float *)CONCAT71((int7)((ulonglong)uVar35 >> 8),cStack_188 == '\x03');
    } while( true );
  }
  goto LAB_140a53b70;
LAB_140a52c13:
  uVar28 = uVar28 & *(ulonglong *)pfVar34;
  pcVar1 = (char *)(lVar40 + uVar28);
  auVar66[0] = -(*pcVar1 == auVar55[0]);
  auVar66[1] = -(pcVar1[1] == auVar55[1]);
  auVar66[2] = -(pcVar1[2] == auVar55[2]);
  auVar66[3] = -(pcVar1[3] == auVar55[3]);
  auVar66[4] = -(pcVar1[4] == auVar55[4]);
  auVar66[5] = -(pcVar1[5] == auVar55[5]);
  auVar66[6] = -(pcVar1[6] == auVar55[6]);
  auVar66[7] = -(pcVar1[7] == auVar55[7]);
  auVar66[8] = -(pcVar1[8] == auVar55[0]);
  auVar66[9] = -(pcVar1[9] == auVar55[1]);
  auVar66[10] = -(pcVar1[10] == auVar55[2]);
  auVar66[0xb] = -(pcVar1[0xb] == auVar55[3]);
  auVar66[0xc] = -(pcVar1[0xc] == auVar55[4]);
  auVar66[0xd] = -(pcVar1[0xd] == auVar55[5]);
  auVar66[0xe] = -(pcVar1[0xe] == auVar55[6]);
  auVar66[0xf] = -(pcVar1[0xf] == auVar55[7]);
  uVar44 = (ushort)(SUB161(auVar66 >> 7,0) & 1) | (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1 |
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
  uVar39 = (uint)uVar44;
  while (uVar44 != 0) {
    uVar7 = 0;
    for (uVar8 = uVar39; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
      uVar7 = uVar7 + 1;
    }
    lVar42 = lVar40 + (uVar7 + uVar28 & *(ulonglong *)pfVar34) * -0x10;
    if (pfStack_d0 == *(float **)(lVar42 + -0x10)) {
      pfVar26 = (float *)(lVar42 + -8);
      goto LAB_140a52c88;
    }
    uVar44 = (ushort)(uVar39 - 1) & (ushort)uVar39;
    uVar39 = CONCAT22((short)(uVar39 - 1 >> 0x10),uVar44);
    pfVar26 = pfStack_1b8;
  }
  auVar60[0] = -(*pcVar1 == -1);
  auVar60[1] = -(pcVar1[1] == -1);
  auVar60[2] = -(pcVar1[2] == -1);
  auVar60[3] = -(pcVar1[3] == -1);
  auVar60[4] = -(pcVar1[4] == -1);
  auVar60[5] = -(pcVar1[5] == -1);
  auVar60[6] = -(pcVar1[6] == -1);
  auVar60[7] = -(pcVar1[7] == -1);
  auVar60[8] = -(pcVar1[8] == -1);
  auVar60[9] = -(pcVar1[9] == -1);
  auVar60[10] = -(pcVar1[10] == -1);
  auVar60[0xb] = -(pcVar1[0xb] == -1);
  auVar60[0xc] = -(pcVar1[0xc] == -1);
  auVar60[0xd] = -(pcVar1[0xd] == -1);
  auVar60[0xe] = -(pcVar1[0xe] == -1);
  auVar60[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar60 >> 7,0) & 1) != 0 || (SUB161(auVar60 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar60 >> 0x17,0) & 1) != 0) || (SUB161(auVar60 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar60 >> 0x27,0) & 1) != 0) || (SUB161(auVar60 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar60 >> 0x37,0) & 1) != 0) || (SUB161(auVar60 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar60 >> 0x47,0) & 1) != 0) || (SUB161(auVar60 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar60 >> 0x57,0) & 1) != 0) || (SUB161(auVar60 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar60 >> 0x67,0) & 1) != 0) || (SUB161(auVar60 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar60 >> 0x77,0) & 1) != 0) || auVar60[0xf] < '\0') goto LAB_140a52c7e;
  uVar28 = uVar28 + lVar46 + 0x10;
  lVar46 = lVar46 + 0x10;
  goto LAB_140a52c13;
LAB_140a51c25:
  uVar28 = uVar28 & *(ulonglong *)(unaff_R12 + 2);
  auVar66 = *(undefined1 (*) [16])(lVar16 + uVar28);
  auVar64[0] = -(auVar66[0] == auVar55[0]);
  auVar64[1] = -(auVar66[1] == auVar55[1]);
  auVar64[2] = -(auVar66[2] == auVar55[2]);
  auVar64[3] = -(auVar66[3] == auVar55[3]);
  auVar64[4] = -(auVar66[4] == auVar55[4]);
  auVar64[5] = -(auVar66[5] == auVar55[5]);
  auVar64[6] = -(auVar66[6] == auVar55[6]);
  auVar64[7] = -(auVar66[7] == auVar55[7]);
  auVar64[8] = -(auVar66[8] == auVar55[0]);
  auVar64[9] = -(auVar66[9] == auVar55[1]);
  auVar64[10] = -(auVar66[10] == auVar55[2]);
  auVar64[0xb] = -(auVar66[0xb] == auVar55[3]);
  auVar64[0xc] = -(auVar66[0xc] == auVar55[4]);
  auVar64[0xd] = -(auVar66[0xd] == auVar55[5]);
  auVar64[0xe] = -(auVar66[0xe] == auVar55[6]);
  auVar64[0xf] = -(auVar66[0xf] == auVar55[7]);
  uVar44 = (ushort)(SUB161(auVar64 >> 7,0) & 1) | (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar64 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar64 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar64 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar64 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar64 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar64 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar64 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar64 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar64 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar64 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar64 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar64 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe | (ushort)(auVar64[0xf] >> 7) << 0xf;
  uVar22 = (uint)uVar44;
  while (uVar44 != 0) {
    uVar39 = 0;
    for (uVar7 = uVar22; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar39 = uVar39 + 1;
    }
    lVar46 = (uVar39 + uVar28 & *(ulonglong *)(unaff_R12 + 2)) * -0x78;
    if (pfVar47 == *(float **)(lVar16 + -0x78 + lVar46)) {
      lVar16 = lVar16 + lVar46;
      if ((*(byte *)(pfVar19 + 0x29) != *(byte *)(lVar16 + -6)) ||
         (*(byte *)((longlong)pfStack_100 + 0xa5) != *(byte *)(lVar16 + -7))) {
        pfStack_f8 = *(float **)(pfVar26 + 4);
        pfStack_f0 = (float *)CONCAT44(pfStack_f0._4_4_,pfVar26[7]);
        *pfStack_f8 = pfVar26[7];
        uStack_c1 = 1;
        pdb_140a50ca0(unaff_R12,pfStack_100,param_8,param_9,param_10);
        fVar72 = fVar52;
        goto LAB_140a51f37;
      }
      pfStack_190 = (float *)CONCAT71(pfStack_190._1_7_,*(byte *)((longlong)pfStack_100 + 0xa5));
      pbStack_1a0 = (byte *)CONCAT71(pbStack_1a0._1_7_,*(undefined1 *)(lVar16 + -5));
      fVar72 = *(float *)(lVar16 + -0x1c);
      pfStack_f8 = *(float **)(pfVar26 + 4);
      pfStack_f0 = (float *)CONCAT44(pfStack_f0._4_4_,pfVar26[7]);
      *pfStack_f8 = pfVar26[7];
      uVar35 = *(undefined8 *)(pfVar19 + 0x20);
      fStack_278 = (float)uVar35;
      fStack_274 = (float)((ulonglong)uVar35 >> 0x20);
      uStack_c1 = 1;
      lVar16 = pdb_1417bd890(unaff_R12,&fStack_278);
      if (lVar16 == 0) {
        if (1 < *_DAT_143ca8e90) {
          pcStack_230 = pdb_140c04ef0;
          cStack_188 = '\0';
          uStack_187 = 0;
          uStack_186 = 0;
          fStack_184 = 0.0;
          uStack_180._0_4_ = 130.11667;
          uStack_180._4_4_ = 1;
          fStack_178 = 6.02558e-44;
          uStack_174 = 0;
          uStack_172 = 0;
          fStack_170 = 0.0;
          uStack_16c = 0;
          pbStack_168 = &UNK_143021da7;
          pfStack_160 = (float *)0x36;
          auStack_158._8_8_ = &UNK_143021dde;
          auStack_158._0_8_ = 2;
          pfStack_148 = (float *)0x2b;
          pfStack_140 = (float *)0xfd00000001;
          uStack_138 = 0x43021d78;
          uStack_134 = 1;
          uStack_130 = &pfStack_238;
          uStack_c1 = 1;
          pfStack_238 = &fStack_278;
          pdb_140f332f0(&uStack_d2,&cStack_188);
        }
      }
      else {
        uStack_c1 = 1;
        pdb_1403b05d0(unaff_R12 + 0x18,uVar35);
        *(undefined1 *)(lVar16 + 0x6b) = pbStack_1a0._0_1_;
      }
      *pfStack_f8 = pfStack_f0._0_4_;
      uVar35 = *(undefined8 *)(pfVar19 + 0x20);
      fStack_278 = (float)uVar35;
      fStack_274 = (float)((ulonglong)uVar35 >> 0x20);
      uStack_c1 = 1;
      lVar16 = pdb_1417bd890(unaff_R12,&fStack_278);
      if (lVar16 == 0) {
        cVar38 = (char)pfStack_190;
        if (1 < *_DAT_143ca8e90) {
          pcStack_230 = pdb_140c04ef0;
          cStack_188 = 0;
          uStack_187 = 0;
          uStack_186 = 0;
          fStack_184 = 0.0;
          uStack_180._0_4_ = 130.11667;
          uStack_180._4_4_ = 1;
          fStack_178 = 6.02558e-44;
          uStack_174 = 0;
          uStack_172 = 0;
          fStack_170 = 0.0;
          uStack_16c = 0;
          pbStack_168 = &UNK_143021da7;
          pfStack_160 = (float *)0x36;
          auStack_158._8_8_ = &UNK_143021dde;
          auStack_158._0_8_ = 2;
          pfStack_148 = (float *)0x2b;
          pfStack_140 = (float *)0xfd00000001;
          uStack_138 = 0x43021d78;
          uStack_134 = 1;
          uStack_130 = &pfStack_238;
          uStack_c1 = 1;
          pfStack_238 = &fStack_278;
          pdb_140f332f0(&uStack_d2,&cStack_188);
          cVar38 = (char)pfStack_190;
        }
      }
      else {
        uStack_c1 = 1;
        pdb_1403b05d0(unaff_R12 + 0x18,uVar35);
        *(char *)(lVar16 + 0x69) = (char)pfStack_190;
        cVar38 = (char)pfStack_190;
      }
      pfVar26 = pfStack_1b8;
      if (cVar38 != '\0') {
        pfVar26 = uStack_1a8;
      }
      bVar49 = *(byte *)(pfVar19 + 0x29);
      pfVar34 = (float *)(ulonglong)bVar49;
      if (bVar49 != 0) {
        pfVar26 = pfStack_1b0;
      }
      pfVar32 = *(float **)(pfVar19 + 0x20);
      pfVar24 = &fStack_278;
      if (*(longlong *)(pfVar26 + 6) == 0) goto LAB_140a5306f;
      uStack_c1 = 1;
      cStack_188 = cVar15;
      uStack_187 = uVar12;
      uStack_186 = uVar13;
      fStack_184 = fVar51;
      uVar28 = pdb_1400af0a0(pfVar26 + 8,&cStack_188);
      bVar50 = (byte)(uVar28 >> 0x39);
      auVar55 = ZEXT216(CONCAT11(bVar50,bVar50));
      auVar55 = pshuflw(auVar55,auVar55,0);
      lVar16 = 0;
      goto LAB_140a53007;
    }
    uVar44 = (ushort)(uVar22 - 1) & (ushort)uVar22;
    uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar44);
  }
  auVar58[0] = -(auVar66[0] == -1);
  auVar58[1] = -(auVar66[1] == -1);
  auVar58[2] = -(auVar66[2] == -1);
  auVar58[3] = -(auVar66[3] == -1);
  auVar58[4] = -(auVar66[4] == -1);
  auVar58[5] = -(auVar66[5] == -1);
  auVar58[6] = -(auVar66[6] == -1);
  auVar58[7] = -(auVar66[7] == -1);
  auVar58[8] = -(auVar66[8] == -1);
  auVar58[9] = -(auVar66[9] == -1);
  auVar58[10] = -(auVar66[10] == -1);
  auVar58[0xb] = -(auVar66[0xb] == -1);
  auVar58[0xc] = -(auVar66[0xc] == -1);
  auVar58[0xd] = -(auVar66[0xd] == -1);
  auVar58[0xe] = -(auVar66[0xe] == -1);
  auVar58[0xf] = -(auVar66[0xf] == -1);
  if ((((((((((((((((SUB161(auVar58 >> 7,0) & 1) != 0 || (SUB161(auVar58 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar58 >> 0x17,0) & 1) != 0) || (SUB161(auVar58 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar58 >> 0x27,0) & 1) != 0) || (SUB161(auVar58 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar58 >> 0x37,0) & 1) != 0) || (SUB161(auVar58 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar58 >> 0x47,0) & 1) != 0) || (SUB161(auVar58 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar58 >> 0x57,0) & 1) != 0) || (SUB161(auVar58 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar58 >> 0x67,0) & 1) != 0) || (SUB161(auVar58 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar58 >> 0x77,0) & 1) != 0) || auVar58[0xf] < '\0') {
LAB_140a520cc:
    uStack_c1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14303d758);
  }
  uVar28 = uVar28 + lVar40 + 0x10;
  lVar40 = lVar40 + 0x10;
  goto LAB_140a51c25;
LAB_140a53007:
  uVar28 = uVar28 & *(ulonglong *)(pfVar26 + 2);
  auVar66 = *(undefined1 (*) [16])(*(longlong *)pfVar26 + uVar28);
  auVar67[0] = -(auVar66[0] == auVar55[0]);
  auVar67[1] = -(auVar66[1] == auVar55[1]);
  auVar67[2] = -(auVar66[2] == auVar55[2]);
  auVar67[3] = -(auVar66[3] == auVar55[3]);
  auVar67[4] = -(auVar66[4] == auVar55[4]);
  auVar67[5] = -(auVar66[5] == auVar55[5]);
  auVar67[6] = -(auVar66[6] == auVar55[6]);
  auVar67[7] = -(auVar66[7] == auVar55[7]);
  auVar67[8] = -(auVar66[8] == auVar55[0]);
  auVar67[9] = -(auVar66[9] == auVar55[1]);
  auVar67[10] = -(auVar66[10] == auVar55[2]);
  auVar67[0xb] = -(auVar66[0xb] == auVar55[3]);
  auVar67[0xc] = -(auVar66[0xc] == auVar55[4]);
  auVar67[0xd] = -(auVar66[0xd] == auVar55[5]);
  auVar67[0xe] = -(auVar66[0xe] == auVar55[6]);
  auVar67[0xf] = -(auVar66[0xf] == auVar55[7]);
  uVar44 = (ushort)(SUB161(auVar67 >> 7,0) & 1) | (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
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
  uVar22 = (uint)uVar44;
  cVar38 = (char)pfStack_190;
  while (uVar44 != 0) {
    uVar39 = 0;
    for (uVar7 = uVar22; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar39 = uVar39 + 1;
    }
    lVar40 = *(longlong *)pfVar26 + (uVar39 + uVar28 & *(ulonglong *)(pfVar26 + 2)) * -0x10;
    if (pfVar47 == *(float **)(lVar40 + -0x10)) {
      pfVar43 = (float *)(lVar40 + -8);
      goto LAB_140a53081;
    }
    uVar44 = (ushort)(uVar22 - 1) & (ushort)uVar22;
    uVar22 = CONCAT22((short)(uVar22 - 1 >> 0x10),uVar44);
  }
  auVar61[0] = -(auVar66[0] == -1);
  auVar61[1] = -(auVar66[1] == -1);
  auVar61[2] = -(auVar66[2] == -1);
  auVar61[3] = -(auVar66[3] == -1);
  auVar61[4] = -(auVar66[4] == -1);
  auVar61[5] = -(auVar66[5] == -1);
  auVar61[6] = -(auVar66[6] == -1);
  auVar61[7] = -(auVar66[7] == -1);
  auVar61[8] = -(auVar66[8] == -1);
  auVar61[9] = -(auVar66[9] == -1);
  auVar61[10] = -(auVar66[10] == -1);
  auVar61[0xb] = -(auVar66[0xb] == -1);
  auVar61[0xc] = -(auVar66[0xc] == -1);
  auVar61[0xd] = -(auVar66[0xd] == -1);
  auVar61[0xe] = -(auVar66[0xe] == -1);
  auVar61[0xf] = -(auVar66[0xf] == -1);
  pfVar24 = pfVar26;
  if ((((((((((((((((SUB161(auVar61 >> 7,0) & 1) != 0 || (SUB161(auVar61 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar61 >> 0x17,0) & 1) != 0) || (SUB161(auVar61 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar61 >> 0x27,0) & 1) != 0) || (SUB161(auVar61 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar61 >> 0x37,0) & 1) != 0) || (SUB161(auVar61 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar61 >> 0x47,0) & 1) != 0) || (SUB161(auVar61 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar61 >> 0x57,0) & 1) != 0) || (SUB161(auVar61 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar61 >> 0x67,0) & 1) != 0) || (SUB161(auVar61 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar61 >> 0x77,0) & 1) != 0) || auVar61[0xf] < '\0') goto LAB_140a5306f;
  uVar28 = uVar28 + lVar16 + 0x10;
  lVar16 = lVar16 + 0x10;
  goto LAB_140a53007;
LAB_140a5306f:
  pfVar43 = pfVar26 + 0xc;
  pfVar26 = pfVar24;
LAB_140a53081:
  uStack_180._0_4_ = *pfVar43;
  cStack_188 = (char)pfVar32;
  uStack_187 = (undefined1)((ulonglong)pfVar32 >> 8);
  uStack_186 = (undefined2)((ulonglong)pfVar32 >> 0x10);
  fStack_184 = (float)((ulonglong)pfVar32 >> 0x20);
  if (bVar49 == 0) {
    if (cVar38 == '\0') {
      uStack_180._4_4_ = (uint)uStack_180._5_3_ << 8;
      uStack_c1 = 1;
      pdb_141b74d00(param_8,&cStack_188,&UNK_14303d690);
    }
    else {
      uStack_180._4_4_ = (uint)uStack_180._5_3_ << 8;
      uStack_c1 = 1;
      pdb_141b74d00(param_9,&cStack_188,&UNK_14303d6a8);
    }
  }
  else {
    uStack_180._4_4_ = uStack_180._4_4_ & 0xffffff00;
    uStack_c1 = 1;
    pdb_141b74d00(param_10,&cStack_188,&UNK_14303d6c0);
  }
LAB_140a51f37:
  fVar51 = _DAT_142e36f28;
  fVar72 = pfStack_108[10] * _DAT_142e37880 * fVar72 +
           (_DAT_142e36f28 - pfStack_108[10] * _DAT_142e37880) * fVar52;
  if (_DAT_142e37848 < (float)((uint)(fVar72 - fVar52) & _DAT_142e377e0)) {
    pfVar47 = (float *)&UNK_143044340;
    if (*(byte *)pfStack_d0 != 0) {
      pfVar47 = pfStack_d0 + 1;
    }
    uStack_180._0_4_ = pfVar47[2];
    uVar35 = *(undefined8 *)pfVar47;
    cStack_188 = (char)uVar35;
    uStack_187 = (undefined1)((ulonglong)uVar35 >> 8);
    uStack_186 = (undefined2)((ulonglong)uVar35 >> 0x10);
    fStack_184 = (float)((ulonglong)uVar35 >> 0x20);
    pfVar34 = *(float **)(pfVar19 + 0x20);
    *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
    pfVar32 = (float *)*param_7;
    lVar16 = *(longlong *)(pfVar32 + 0xc);
    pfVar26 = *(float **)(pfVar32 + 0x10);
    if (lVar16 == *(longlong *)(pfVar32 + 8)) {
      uStack_c1 = 1;
      pdb_142d7e7c0(pfVar32 + 8);
    }
    lVar40 = *(longlong *)(pfVar32 + 10);
    lVar46 = lVar16 * 0x30;
    *(undefined4 *)(lVar40 + lVar46) = 1;
    *(ulonglong *)(lVar40 + 4 + lVar46) =
         CONCAT44(fStack_184,CONCAT22(uStack_186,CONCAT11(uStack_187,cStack_188)));
    *(float *)(lVar40 + 0xc + lVar46) = (float)uStack_180;
    *(undefined4 *)(lVar40 + 0x10 + lVar46) = 1;
    *(float *)(lVar40 + 0x14 + lVar46) = fVar72;
    *(float **)(lVar40 + 0x18 + lVar46) = pfVar34;
    *(undefined2 *)(lVar40 + 0x20 + lVar46) = 0;
    *(float **)(lVar40 + 0x28 + lVar46) = pfVar26;
    pfVar47 = (float *)(lVar16 + 1);
    *(float **)(pfVar32 + 0xc) = pfVar47;
    *(longlong *)(pfVar32 + 0x10) = *(longlong *)(pfVar32 + 0x10) + 1;
  }
  pfVar24 = pfVar19;
  param_2 = param_13;
  if (((((ulonglong)pfStack_e0 & 1) == 0) || (*(ulonglong *)(pfStack_100 + 4) < 2)) ||
     (pfStack_100[0xc] <= 0.0)) {
    if (!SBORROW8(0,CONCAT44(fStack_354,fStack_358))) {
LAB_140a520b0:
      pdb_14099a6f0(&fStack_358);
    }
  }
  else {
    if (SBORROW8(0,CONCAT44(fStack_354,fStack_358))) {
      uStack_c1 = 1;
      pfVar32 = (float *)CONCAT71((int7)((ulonglong)pfVar32 >> 8),1);
      pdb_140bec4b0(&fStack_278,pfStack_100);
    }
    else {
      pbStack_118 = pbStack_2e8;
      uStack_110 = uStack_2e0;
      uStack_128 = (undefined4)uStack_2f8;
      uStack_124 = (undefined4)((ulonglong)uStack_2f8 >> 0x20);
      uStack_120 = (undefined1)uStack_2f0;
      uStack_11f = (undefined1)((ulonglong)uStack_2f0 >> 8);
      uStack_11e = (undefined2)((ulonglong)uStack_2f0 >> 0x10);
      uStack_11c = (undefined2)((ulonglong)uStack_2f0 >> 0x20);
      uStack_11a = (undefined1)((ulonglong)uStack_2f0 >> 0x30);
      cStack_119 = (char)((ulonglong)uStack_2f0 >> 0x38);
      uStack_138 = (undefined4)uStack_308;
      uStack_134 = (undefined4)((ulonglong)uStack_308 >> 0x20);
      uStack_130._0_4_ = SUB84(ppfStack_300,0);
      uStack_130._4_4_ = (undefined4)((ulonglong)ppfStack_300 >> 0x20);
      pfStack_148 = pfStack_318;
      pfStack_140 = pfStack_310;
      auStack_158._8_8_ = uStack_320;
      auStack_158._0_8_ = uStack_328;
      pbStack_168 = pbStack_338;
      pfStack_160 = pfStack_330;
      fStack_178 = (float)uStack_348;
      uStack_174 = (undefined2)((ulonglong)uStack_348 >> 0x20);
      uStack_172 = (ushort)((ulonglong)uStack_348 >> 0x30);
      fStack_170 = (float)uStack_340;
      uStack_16c = (undefined4)((ulonglong)uStack_340 >> 0x20);
      cStack_188 = SUB41(fStack_358,0);
      uStack_187 = (undefined1)((uint)fStack_358 >> 8);
      uStack_186 = (undefined2)((uint)fStack_358 >> 0x10);
      fStack_184 = fStack_354;
      uStack_180._0_4_ = fStack_350;
      uStack_180._4_4_ = uStack_34c;
      pdb_140bec4b0(&fStack_278,&cStack_188);
      uStack_c1 = 0;
      pdb_14099a6f0(&cStack_188);
      pfVar32 = (float *)0x0;
    }
    if (SBORROW8(0,CONCAT44(fStack_274,fStack_278))) {
      uStack_388 = CONCAT44(uStack_26c,fStack_270);
      uStack_380 = uStack_268;
      if (1 < *_DAT_143ca8e90) {
        puStack_2b8 = &uStack_388;
        pfStack_2b0 = (float *)pdb_140a592f0;
        cStack_188 = '\b';
        uStack_187 = 0xd8;
        uStack_186 = 0x4303;
        fStack_184 = 1.4013e-45;
        uStack_180._0_4_ = 5.32493e-44;
        uStack_180._4_4_ = 0;
        fStack_178 = 131.84387;
        uStack_174 = 1;
        uStack_172 = 0;
        fStack_170 = 5.32493e-44;
        uStack_16c = 0;
        pbStack_168 = &UNK_14303d8c0;
        uStack_c1 = SUB81(pfVar32,0);
        pdb_1400c9be0(&UNK_14303d895,&puStack_2b8,2,&cStack_188);
      }
      goto LAB_140a51a2b;
    }
    pfStack_108 = (float *)CONCAT44(pfStack_108._4_4_,(int)pfVar32);
    uStack_208 = uStack_248;
    pfStack_238 = (float *)CONCAT44(fStack_274,fStack_278);
    pcStack_230 = (code *)CONCAT44(uStack_26c,fStack_270);
    auStack_228._8_8_ = uStack_260;
    auStack_228._0_8_ = uStack_268;
    auStack_218._8_8_ = pfStack_250;
    auStack_218._0_8_ = pbStack_258;
    if (*(byte *)((longlong)pfStack_100 + 0xa7) == 1) {
      uStack_c3 = 1;
      pdb_1419accc0(&pfStack_238);
    }
    if (SBORROW8(0,*(longlong *)pfStack_198)) {
LAB_140a5230f:
      if (999 < (ulonglong)auStack_228._0_8_) {
LAB_140a53188:
        puStack_2b8 = (undefined8 *)&UNK_14303d860;
        pfStack_2b0 = (float *)pdb_140f72a40;
        uStack_c3 = 1;
        pdb_140a4f5d0(&cStack_188,&puStack_2b8);
        pfStack_d0 = (float *)CONCAT44(fStack_184,
                                       CONCAT22(uStack_186,CONCAT11(uStack_187,cStack_188)));
        pfStack_f0 = (float *)CONCAT44(uStack_180._4_4_,(float)uStack_180);
        pdb_140a43130(pfStack_f0,CONCAT26(uStack_172,CONCAT24(uStack_174,fStack_178)));
        if (pfStack_d0 != (float *)0x0) {
          pub_1406abac0((byte *)pfStack_f0,(ulonglong)pfStack_d0,1);
        }
        uStack_c1 = SUB81(pfStack_108,0);
        pdb_14049c2a0(&pfStack_238);
        goto LAB_140a51a2b;
      }
      *pfStack_f8 = pfStack_f0._0_4_;
      auStack_158._0_8_ = uStack_208;
      pbStack_168 = (byte *)auStack_218._0_8_;
      pfStack_160 = (float *)auStack_218._8_8_;
      fStack_178 = auStack_228._0_4_;
      uStack_174 = auStack_228._4_2_;
      uStack_172 = auStack_228._6_2_;
      fStack_170 = auStack_228._8_4_;
      uStack_16c = auStack_228._12_4_;
      cStack_188 = (char)pfStack_238;
      uStack_187 = (undefined1)((ulonglong)pfStack_238 >> 8);
      uStack_186 = (undefined2)((ulonglong)pfStack_238 >> 0x10);
      fStack_184 = (float)((ulonglong)pfStack_238 >> 0x20);
      uStack_180._0_4_ = SUB84(pcStack_230,0);
      uStack_180._4_4_ = (uint)((ulonglong)pcStack_230 >> 0x20);
      uStack_c3 = 0;
      pdb_14092e8e0(unaff_R12,*(undefined8 *)(pfVar19 + 0x20),&cStack_188);
      pfVar32 = pfStack_d0 + 1;
      pfVar34 = (float *)&UNK_143044340;
      if (*(byte *)pfStack_d0 != 0) {
        pfVar34 = pfVar32;
      }
      uVar35 = *(undefined8 *)(pfVar19 + 0x20);
      fStack_178 = pfVar34[2];
      uStack_180._0_4_ = (float)*(undefined8 *)pfVar34;
      uStack_180._4_4_ = (uint)((ulonglong)*(undefined8 *)pfVar34 >> 0x20);
      cStack_188 = (char)uVar35;
      uStack_187 = (undefined1)((ulonglong)uVar35 >> 8);
      uStack_186 = (undefined2)((ulonglong)uVar35 >> 0x10);
      fStack_184 = (float)((ulonglong)uVar35 >> 0x20);
      uStack_174 = 2;
      uStack_c3 = 0;
      pdb_141b75330(param_6,&cStack_188,&UNK_14303d830);
      uStack_c3 = 0;
      pdb_140defa80(&puStack_2b8);
      pfVar34 = (float *)&UNK_143044340;
      if (*(byte *)pfStack_d0 != 0) {
        pfVar34 = pfVar32;
      }
      fStack_170 = pfVar34[1] + _DAT_142e37838;
      pbStack_168 = (byte *)0x0;
      fStack_184 = SUB84(puStack_2b8,0);
      uStack_180._0_4_ = (float)((ulonglong)puStack_2b8 >> 0x20);
      uStack_180._4_4_ = (uint)pfStack_2b0;
      fStack_178 = (float)((ulonglong)pfStack_2b0 >> 0x20);
      uStack_174 = 0;
      uStack_172 = 0;
      cStack_188 = '\0';
      uStack_187 = 1;
      uStack_c3 = 0;
      pdb_141b75220(param_13,&cStack_188,&UNK_14303d848);
      uVar22 = (uint)pfStack_108;
    }
    else {
      lVar16 = *(longlong *)(pfStack_198 + 4);
      if (lVar16 == 0) {
LAB_140a53af4:
        uStack_c3 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14303d770);
      }
      lVar40 = *(longlong *)(pfStack_198 + 2) + lVar16 * 8 + -8;
      if (lVar40 == 0) goto LAB_140a53af4;
      uStack_c3 = 1;
      fVar52 = (float)pdb_1419aaa60(&pfStack_238,lVar40,
                                    *(undefined4 *)
                                     (*(longlong *)(pfStack_198 + 2) + lVar16 * 8 + -4),
                                    &UNK_14303d788);
      if ((fVar52 <= fVar51) && (0.0 <= fVar52)) goto LAB_140a5230f;
      if (1 < *_DAT_143ca8e90) {
        cStack_188 = '\b';
        uStack_187 = 0xd8;
        uStack_186 = 0x4303;
        fStack_184 = 1.4013e-45;
        uStack_180._0_4_ = 5.32493e-44;
        uStack_180._4_4_ = 0;
        fStack_178 = 131.84387;
        uStack_174 = 1;
        uStack_172 = 0;
        fStack_170 = 5.32493e-44;
        uStack_16c = 0;
        pbStack_168 = &UNK_14303d7f0;
        uStack_c3 = 1;
        pdb_1400c9be0(&UNK_14303d7a0,0x99,2,&cStack_188);
      }
      if (999 < (ulonglong)auStack_228._0_8_) goto LAB_140a53188;
      uVar22 = (uint)pfStack_108;
      uStack_c1 = SUB81(pfStack_108,0);
      pdb_14049c2a0(&pfStack_238);
    }
    pfVar32 = (float *)(ulonglong)uVar22;
    if ((!SBORROW8(0,CONCAT44(fStack_354,fStack_358)) & (byte)uVar22) != 0) goto LAB_140a520b0;
  }
joined_r0x000140a51199:
  if (lStack_2d0 == 0) {
    return;
  }
  plVar20 = (longlong *)pdb_140e97000();
  if ((char)plVar20[0xd] != '\x01') {
    plVar20 = (longlong *)pdb_142d8ec20(plVar20,0);
    if (plVar20 == (longlong *)0x0) goto LAB_140a53acf;
  }
  if (*plVar20 != 0) {
LAB_140a539ed:
    pfVar19 = (float *)pdb_142dc8090(&UNK_143326a50);
LAB_140a539f9:
    pfVar19 = (float *)pdb_142d8ec20(pfVar19,0);
    if (pfVar19 == (float *)0x0) {
LAB_140a53acf:
      pdb_142dc7890(&UNK_143326860);
LAB_140a53adb:
      uStack_c2 = 0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14303d908);
    }
    goto LAB_140a510c9;
  }
  *plVar20 = -1;
  pfStack_d0 = (float *)plVar20;
  pdb_140e95370(plVar20 + 1,uStack_2c8);
  goto LAB_140a51a6a;
LAB_140a52c7e:
  pfVar26 = pfVar26 + 0xc;
LAB_140a52c88:
  pfStack_198 = (float *)CONCAT44(pfStack_198._4_4_,*pfVar26);
  pfStack_1b8 = (float *)CONCAT44(pfStack_1b8._4_4_,_DAT_142e37990);
  if (*(byte *)(pfVar47 + 6) == 0) {
LAB_140a5323b:
    pfStack_108 = (float *)CONCAT44(pfStack_108._4_4_,(uint)*(byte *)(lVar16 + 0x5c));
    pfStack_190 = (float *)((ulonglong)pfStack_190 & 0xffffffff00000000);
  }
  else {
    pfStack_190 = (float *)CONCAT44(pfStack_190._4_4_,
                                    (int)CONCAT71((uint7)(uint3)((uint)*pfVar26 >> 8),1));
    pfStack_108 = (float *)((ulonglong)pfStack_108 & 0xffffffff00000000);
  }
  uStack_328 = uStack_248;
  pbStack_338 = pbStack_258;
  pfStack_330 = pfStack_250;
  uStack_348 = uStack_268;
  uStack_340 = uStack_260;
  fStack_358 = fStack_278;
  fStack_354 = fStack_274;
  fStack_350 = fStack_270;
  uStack_34c = uStack_26c;
  uStack_e1 = 0;
  pdb_140becfc0(&cStack_188,&fStack_358);
  pbStack_1a0 = (byte *)CONCAT44(pbStack_1a0._4_4_,uVar22);
  pfStack_238 = (float *)CONCAT44(fStack_184,CONCAT22(uStack_186,CONCAT11(uStack_187,cStack_188)));
  pcStack_230 = (code *)CONCAT44(uStack_180._4_4_,(float)uStack_180);
  auStack_228._4_2_ = uStack_174;
  auStack_228._0_4_ = fStack_178;
  auStack_228._6_2_ = uStack_172;
  auStack_228._12_4_ = uStack_16c;
  auStack_228._8_4_ = fStack_170;
  auStack_218._8_8_ = pfStack_160;
  auStack_218._0_8_ = pbStack_168;
  uStack_208 = auStack_158._0_8_;
  pfStack_200 = (float *)auStack_158._8_8_;
  pfStack_1f8 = pfStack_148;
  pfStack_1f0 = pfStack_140;
  uStack_1e8 = CONCAT44(uStack_134,uStack_138);
  pbStack_1e0 = (byte *)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
  uStack_1d8 = CONCAT44(uStack_124,uStack_128);
  uStack_1d0 = CONCAT17(cStack_119,
                        CONCAT16(uStack_11a,
                                 CONCAT24(uStack_11c,
                                          CONCAT22(uStack_11e,CONCAT11(uStack_11f,uStack_120)))));
  pbStack_1c8 = pbStack_118;
  uStack_1c0 = uStack_110;
  **(float **)(pfVar24 + 4) = pfVar24[7];
  pfStack_100 = pfVar19;
  if (!SBORROW8(0,*(longlong *)pfVar19)) {
    pdb_14099a6f0(pfVar19);
  }
  *(byte **)(pfStack_100 + 0x1c) = pbStack_1c8;
  *(ulonglong *)(pfStack_100 + 0x1e) = uStack_1c0;
  *(ulonglong *)(pfStack_100 + 0x18) = uStack_1d8;
  *(ulonglong *)(pfStack_100 + 0x1a) = uStack_1d0;
  *(ulonglong *)(pfStack_100 + 0x14) = uStack_1e8;
  *(byte **)(pfStack_100 + 0x16) = pbStack_1e0;
  *(float **)(pfStack_100 + 0x10) = pfStack_1f8;
  *(float **)(pfStack_100 + 0x12) = pfStack_1f0;
  auVar55._8_8_ = pfStack_200;
  auVar55._0_8_ = uStack_208;
  *(undefined1 (*) [16])(pfStack_100 + 0xc) = auVar55;
  *(undefined1 (*) [16])(pfStack_100 + 8) = auStack_218;
  *(undefined1 (*) [16])(pfStack_100 + 4) = auStack_228;
  *(float **)pfStack_100 = pfStack_238;
  *(code **)(pfStack_100 + 2) = pcStack_230;
  *(float **)(pfStack_100 + 0x20) = pfStack_d0;
  pfStack_100[0x22] = 0.0;
  pfStack_100[0x25] = pfStack_1b8._0_4_;
  pfStack_100[0x26] = pfStack_f8._0_4_;
  pfStack_100[0x27] = pfStack_198._0_4_;
  pfStack_100[0x28] = pbStack_1a0._0_4_;
  *(byte *)(pfStack_100 + 0x29) = (byte)pfStack_190;
  *(byte *)((longlong)pfStack_100 + 0xa5) = (byte)pfStack_1b0;
  *(byte *)((longlong)pfStack_100 + 0xa6) = (byte)pfStack_108;
  *(byte *)((longlong)pfStack_100 + 0xa7) = 0;
  *pfStack_e0 = (float)uStack_1a8;
  if (SBORROW8(0,*(longlong *)pfStack_100)) goto LAB_140a53adb;
  pfVar32 = *(float **)(pfStack_100 + 0x20);
  bVar49 = *(byte *)((longlong)pfStack_100 + 0xa6);
  pfVar47 = (float *)(ulonglong)bVar49;
  fStack_358 = SUB84(pfVar32,0);
  fStack_354 = (float)((ulonglong)pfVar32 >> 0x20);
  uStack_c2 = 0;
  pfVar34 = (float *)pdb_1417bd890(pfStack_f0,&fStack_358);
  pfVar26 = &fStack_358;
  pfVar24 = param_3;
  if (pfVar34 == (float *)0x0) {
    if (1 < *_DAT_143ca8e90) {
      pcStack_230 = pdb_140c04ef0;
      cStack_188 = '\0';
      uStack_187 = 0;
      uStack_186 = 0;
      fStack_184 = 0.0;
      uStack_180._0_4_ = 130.11667;
      uStack_180._4_4_ = 1;
      fStack_178 = 6.02558e-44;
      uStack_174 = 0;
      uStack_172 = 0;
      fStack_170 = 0.0;
      uStack_16c = 0;
      pbStack_168 = &UNK_143021da7;
      pfStack_160 = (float *)0x36;
      auStack_158._8_8_ = &UNK_143021dde;
      auStack_158._0_8_ = 2;
      pfStack_148 = (float *)0x2b;
      pfStack_140 = (float *)0xfd00000001;
      uStack_138 = 0x43021d78;
      uStack_134 = 1;
      uStack_130 = &pfStack_238;
      uStack_c2 = 0;
      pfStack_238 = &fStack_358;
      pdb_140f332f0(&uStack_d2,&cStack_188);
    }
  }
  else {
    uStack_c2 = 0;
    pdb_1403b05d0(pfStack_f0 + 0x18,pfVar32);
    *(byte *)((longlong)pfVar34 + 0x6b) = bVar49;
  }
LAB_140a51a2b:
  if (lStack_2d0 == 0) {
    return;
  }
  plVar20 = (longlong *)pdb_140e97000();
  if ((char)plVar20[0xd] != '\x01') {
    plVar20 = (longlong *)pdb_142d8ec20(plVar20,0);
    if (plVar20 == (longlong *)0x0) goto LAB_140a53acf;
  }
  if (*plVar20 != 0) goto LAB_140a539ed;
  *plVar20 = -1;
  pfStack_d0 = (float *)plVar20;
  pdb_140e95370(plVar20 + 1,uStack_2c8);
LAB_140a51a6a:
  *(longlong *)pfStack_d0 = *(longlong *)pfStack_d0 + 1;
  return;
}

