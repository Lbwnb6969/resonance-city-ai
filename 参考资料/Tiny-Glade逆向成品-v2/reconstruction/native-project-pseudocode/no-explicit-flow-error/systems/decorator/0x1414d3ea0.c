// VA 0x1414d3ea0, PDB extent 8743 bytes
// system_decorator::decorator_visual::cottage_dormers::collision_geo::get_collision_mesh
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_dormers/collision_geo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::cottage_dormers::collision_geo::get_collision_mesh
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_dormers/collision_geo.rs
   Extent: 8743 */

byte * pdb_1414d3ea0(float *param_1,ulonglong param_2,undefined8 param_3,byte *param_4,float param_5
                    ,undefined8 param_6,longlong *param_7)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  uint uVar6;
  float *pfVar7;
  char cVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  byte *pbVar15;
  int iVar16;
  float *unaff_RBX;
  undefined *puVar17;
  undefined *puVar18;
  byte **ppbVar19;
  ushort uVar20;
  int iVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  byte bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar30;
  undefined1 auVar29 [16];
  float in_XMM1_Da;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  float fVar36;
  undefined1 in_XMM2 [16];
  undefined1 auVar34 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auStack_3d4 [28];
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  byte *pbStack_398;
  float *pfStack_390;
  undefined1 auStack_388 [16];
  undefined1 auStack_378 [16];
  undefined1 auStack_368 [16];
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  undefined1 auStack_2c8 [16];
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  char acStack_2a4 [44];
  undefined1 auStack_278 [16];
  undefined8 uStack_268;
  undefined8 uStack_260;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float *pfStack_248;
  ulonglong *puStack_240;
  byte *pbStack_238;
  float *pfStack_230;
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [16];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  longlong lStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  float fStack_194;
  ulonglong uStack_190;
  undefined1 auStack_188 [8];
  float fStack_180;
  float fStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  ulonglong uStack_168;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  undefined1 auStack_138 [8];
  float fStack_130;
  float fStack_12c;
  undefined8 uStack_128;
  undefined8 uStack_120;
  float fStack_118;
  float fStack_110;
  float fStack_10c;
  float *pfStack_108;
  byte *pbStack_100;
  ulonglong uStack_f8;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  fVar27 = in_XMM2._0_4_;
  fVar26 = in_XMM2._4_4_;
  fVar39 = in_XMM2._8_4_;
  fVar40 = in_XMM2._12_4_;
  cVar8 = pdb_140e94b40();
  if (cVar8 == '\0') {
    lStack_1b0 = 0;
    goto LAB_1414d40b7;
  }
  unaff_RBX = (float *)0x56;
  lVar11 = pdb_1414d60d0(0x56);
  ppbVar19 = (byte **)&UNK_143314c78;
  if (lVar11 == 1) {
    if (0x56 < param_2) {
      pdb_142dc8070(&UNK_143314c78,0x56,0,param_2,&UNK_143314d58);
LAB_1414d58b1:
      pdb_142dc8070(&UNK_143314c78,0x56);
      pcVar5 = (code *)swi(3);
      pbVar15 = (byte *)(*pcVar5)();
      return pbVar15;
    }
    uVar12 = pdb_1414d60d0(param_2);
    if ((uVar12 & 1) != 0) {
      if (0x56 < param_2 + 2) goto LAB_1414d58b1;
      unaff_RBX = (float *)(0x54 - param_2);
      ppbVar19 = (byte **)(&UNK_143314c7a + param_2);
    }
  }
  puVar17 = &UNK_143314bed;
  puVar22 = (undefined8 *)&UNK_143314b9f;
  do {
    bVar24 = puVar17[-1];
    uVar10 = (uint)(char)bVar24;
    if ((char)bVar24 < '\0') {
      bVar3 = puVar17[-2];
      if ((char)bVar3 < -0x40) {
        bVar4 = puVar17[-3];
        if ((char)bVar4 < -0x40) {
          pbVar15 = puVar17 + -4;
          puVar17 = puVar17 + -4;
          uVar10 = bVar4 & 0x3f | (*pbVar15 & 7) << 6;
        }
        else {
          puVar17 = puVar17 + -3;
          uVar10 = bVar4 & 0xf;
        }
        uVar10 = bVar3 & 0x3f | uVar10 << 6;
      }
      else {
        puVar17 = puVar17 + -2;
        uVar10 = bVar3 & 0x1f;
      }
      uVar10 = (uint)(bVar24 & 0x3f) | uVar10 << 6;
      if (uVar10 != 0x5c) goto LAB_1414d4014;
LAB_1414d402d:
      puVar18 = puVar17 + -0x143314b9e;
      if ((undefined *)0x4e < puVar18) {
        pdb_142dc8070(&UNK_143314b9f,0x4e,puVar18,0x4e,&UNK_143314d38);
LAB_1414d586b:
        pdb_142dc8070(&UNK_143314b9f,0x4e);
        goto LAB_1414d588f;
      }
      uVar12 = 0x4e - (longlong)puVar18;
      puVar22 = (undefined8 *)(puVar17 + 1);
      goto LAB_1414d4050;
    }
    puVar17 = puVar17 + -1;
    if (uVar10 == 0x5c) goto LAB_1414d402d;
LAB_1414d4014:
    if (uVar10 == 0x2f) goto LAB_1414d402d;
  } while (puVar17 != &UNK_143314b9f);
  uVar12 = 0x4e;
LAB_1414d4050:
  plVar13 = (longlong *)pdb_140e97000();
  if ((char)plVar13[0xd] != '\x01') goto LAB_1414d5744;
  do {
    if (*plVar13 == 0) {
      *plVar13 = -1;
      auStack_138 = (undefined1  [8])plVar13;
      uStack_1a8 = pdb_140e94f10(plVar13 + 1,ppbVar19,unaff_RBX,puVar22,uVar12,1,0);
      *(longlong *)auStack_138 = *(longlong *)auStack_138 + 1;
      lStack_1b0 = 1;
LAB_1414d40b7:
      fVar25 = (float)pdb_140b77a00(param_6);
      if ((byte *)0x2 < param_4 + -1) goto LAB_1414d57ec;
      fVar35 = *(float *)(&UNK_143314d84 + (longlong)param_4 * 4);
      fStack_140 = param_1[4];
      fStack_150 = param_1[5];
      pfStack_248 = *(float **)(param_1 + 4);
      fStack_13c = param_1[6];
      puStack_240 = (ulonglong *)CONCAT44(puStack_240._4_4_,fStack_13c);
      pdb_140b77d90(acStack_2a4,param_6,&pfStack_248);
      fStack_194 = (float)pdb_140a85220(acStack_2a4);
      fStack_194 = (in_XMM1_Da + param_5) / fStack_194;
      cVar8 = pdb_140e94b40();
      auStack_138[0] = cVar8;
      if (cVar8 == '\0') {
        pbStack_398 = (byte *)0x0;
      }
      else {
        puVar18 = &UNK_143314bed;
        puVar17 = &UNK_143314b9f;
        do {
          bVar24 = puVar18[-1];
          uVar10 = (uint)(char)bVar24;
          if ((char)bVar24 < '\0') {
            bVar3 = puVar18[-2];
            if ((char)bVar3 < -0x40) {
              bVar4 = puVar18[-3];
              if ((char)bVar4 < -0x40) {
                pbVar15 = puVar18 + -4;
                puVar18 = puVar18 + -4;
                uVar10 = bVar4 & 0x3f | (*pbVar15 & 7) << 6;
              }
              else {
                puVar18 = puVar18 + -3;
                uVar10 = bVar4 & 0xf;
              }
              uVar10 = bVar3 & 0x3f | uVar10 << 6;
            }
            else {
              puVar18 = puVar18 + -2;
              uVar10 = bVar3 & 0x1f;
            }
            uVar10 = (uint)(bVar24 & 0x3f) | uVar10 << 6;
            if (uVar10 != 0x5c) goto LAB_1414d41f4;
LAB_1414d420d:
            if ((undefined *)0x4e < puVar18 + -0x143314b9e) goto LAB_1414d586b;
            lVar11 = 0x4e - (longlong)(puVar18 + -0x143314b9e);
            puVar17 = puVar18 + 1;
            goto LAB_1414d4230;
          }
          puVar18 = puVar18 + -1;
          if (uVar10 == 0x5c) goto LAB_1414d420d;
LAB_1414d41f4:
          if (uVar10 == 0x2f) goto LAB_1414d420d;
        } while (puVar18 != &UNK_143314b9f);
        lVar11 = 0x4e;
LAB_1414d4230:
        plVar13 = (longlong *)pdb_140e97000();
        if (((char)plVar13[0xd] != '\x01') &&
           (plVar13 = (longlong *)pdb_142dde6e0(plVar13,0), plVar13 == (longlong *)0x0)) {
          pdb_142dc7890(&UNK_14330e598);
LAB_1414d588f:
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        if (*plVar13 != 0) {
          pdb_142dc8090(&UNK_14330e608);
          goto LAB_1414d588f;
        }
        *plVar13 = -1;
        auStack_188 = (undefined1  [8])plVar13;
        unaff_RBX = (float *)pdb_140e94f10(plVar13 + 1,&UNK_143314bed,7,puVar17,lVar11,1,0);
        *(longlong *)auStack_188 = *(longlong *)auStack_188 + 1;
        pbStack_398 = (byte *)0x1;
        pfStack_390 = unaff_RBX;
      }
      fStack_258 = fVar27 + param_5;
      fStack_2b8 = fStack_258 + fStack_150;
      fStack_14c = fVar25 * fVar35 + fStack_2b8;
      fStack_110 = fStack_140;
      fStack_10c = fStack_13c;
      fStack_2b4 = fVar26;
      fStack_2b0 = fVar39;
      fStack_2ac = fVar40;
      fStack_254 = fVar26;
      fStack_250 = fVar39;
      fStack_24c = fVar40;
      pdb_140df4540(auStack_3d4,&fStack_110);
      pdb_140b77d90(&pfStack_248,param_6,auStack_3d4);
      fStack_148 = fStack_140;
      fStack_144 = fStack_13c;
      pdb_140a850f0(acStack_2a4);
      pdb_140a850f0(&pfStack_248);
      pdb_140a84dc0(acStack_2a4);
      pdb_140a84dc0();
      iVar21 = 0;
      if (acStack_2a4[0] == '\0') {
        fVar26 = (float)pdb_140de8220();
        fVar27 = 0.0;
        if (0.0 <= fVar26) {
          fVar27 = fVar26;
        }
        fVar26 = _DAT_142e36f28;
        if (fVar27 <= _DAT_142e36f28) {
          fVar26 = fVar27;
        }
        fVar27 = (float)pub_142e32b00((_DAT_142e36f28 - fVar26) * _DAT_142e37834);
        iVar16 = 0;
        if (0.0 <= fVar27) {
          iVar16 = (int)(longlong)fVar27;
        }
        iVar21 = -1;
        if (fVar27 <= _DAT_142e46a48) {
          iVar21 = iVar16;
        }
      }
      fVar27 = _DAT_142e37834;
      fVar26 = 0.0;
      fVar39 = 0.0;
      fVar40 = 0.0;
      fVar25 = (float)pub_142e32b00((fStack_14c - fStack_2b8) * _DAT_142e37834);
      in_XMM1_Da = _DAT_142e46a48;
      uVar12 = (longlong)fVar25 & 0xffffffff;
      if (fVar25 < 0.0) {
        uVar12 = 0;
      }
      if (_DAT_142e46a48 < fVar25) {
        uVar12 = 0xffffffff;
      }
      fVar25 = (float)pub_142e32b00();
      iStack_170 = (int)(longlong)fVar25;
      if (fVar25 < 0.0) {
        iStack_170 = 0;
      }
      if (in_XMM1_Da < fVar25) {
        iStack_170 = -1;
      }
      iStack_174 = (int)uVar12;
      uStack_16c = CONCAT31(uStack_16c._1_3_,(char)param_4);
      iStack_178 = iVar21;
      if (auStack_138[0] != '\0') {
        plVar13 = (longlong *)pdb_140e97000();
        if (((char)plVar13[0xd] != '\x01') &&
           (plVar13 = (longlong *)pdb_142dde6e0(plVar13,0), plVar13 == (longlong *)0x0)) {
          pdb_142dc7890(&UNK_14330e598);
          goto LAB_1414d588f;
        }
        if (*plVar13 != 0) {
          pdb_142dc8090(&UNK_14330e608);
          goto LAB_1414d588f;
        }
        *plVar13 = -1;
        auStack_138 = (undefined1  [8])plVar13;
        pdb_140e95370(plVar13 + 1,unaff_RBX);
        *(longlong *)auStack_138 = *(longlong *)auStack_138 + 1;
      }
      if (param_7[3] != 0) {
        uVar14 = pdb_14148b640(param_7 + 4,&iStack_178);
        lVar11 = *param_7;
        bVar24 = (byte)(uVar14 >> 0x39);
        auVar29 = ZEXT216(CONCAT11(bVar24,bVar24));
        auVar29 = pshuflw(auVar29,auVar29,0);
        unaff_RBX = (float *)0x0;
        while( true ) {
          uVar14 = uVar14 & param_7[1];
          auVar2 = *(undefined1 (*) [16])(lVar11 + uVar14);
          auVar37[0] = -(auVar2[0] == auVar29[0]);
          auVar37[1] = -(auVar2[1] == auVar29[1]);
          auVar37[2] = -(auVar2[2] == auVar29[2]);
          auVar37[3] = -(auVar2[3] == auVar29[3]);
          auVar37[4] = -(auVar2[4] == auVar29[4]);
          auVar37[5] = -(auVar2[5] == auVar29[5]);
          auVar37[6] = -(auVar2[6] == auVar29[6]);
          auVar37[7] = -(auVar2[7] == auVar29[7]);
          auVar37[8] = -(auVar2[8] == auVar29[0]);
          auVar37[9] = -(auVar2[9] == auVar29[1]);
          auVar37[10] = -(auVar2[10] == auVar29[2]);
          auVar37[0xb] = -(auVar2[0xb] == auVar29[3]);
          auVar37[0xc] = -(auVar2[0xc] == auVar29[4]);
          auVar37[0xd] = -(auVar2[0xd] == auVar29[5]);
          auVar37[0xe] = -(auVar2[0xe] == auVar29[6]);
          auVar37[0xf] = -(auVar2[0xf] == auVar29[7]);
          uVar20 = (ushort)(SUB161(auVar37 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar37[0xf] >> 7) << 0xf;
          ppbVar19 = (byte **)(ulonglong)uVar20;
          while (uVar20 != 0) {
            uVar10 = 0;
            for (uVar6 = (uint)ppbVar19; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar10 = uVar10 + 1;
            }
            uVar23 = uVar10 + uVar14 & param_7[1];
            if ((((iStack_178 == *(int *)(lVar11 + -0x18 + uVar23 * -0x18)) &&
                 (puVar22 = (undefined8 *)(lVar11 + uVar23 * -0x18),
                 iStack_174 == *(int *)((longlong)puVar22 + -0x14))) &&
                (iStack_170 == *(int *)(puVar22 + -2))) &&
               ((char)uStack_16c == *(char *)((longlong)puVar22 + -0xc))) {
              param_4 = (byte *)puVar22[-1];
              LOCK();
              lVar11 = *(longlong *)param_4;
              *(longlong *)param_4 = *(longlong *)param_4 + 1;
              UNLOCK();
              if (*(longlong *)param_4 == 0 || SCARRY8(lVar11,1) != *(longlong *)param_4 < 0)
              goto LAB_1414d588f;
              goto LAB_1414d55b3;
            }
            iVar21 = (uint)ppbVar19 - 1;
            uVar20 = (ushort)iVar21 & (ushort)ppbVar19;
            ppbVar19 = (byte **)(ulonglong)CONCAT22((short)((uint)iVar21 >> 0x10),uVar20);
          }
          auVar34[0] = -(auVar2[0] == -1);
          auVar34[1] = -(auVar2[1] == -1);
          auVar34[2] = -(auVar2[2] == -1);
          auVar34[3] = -(auVar2[3] == -1);
          auVar34[4] = -(auVar2[4] == -1);
          auVar34[5] = -(auVar2[5] == -1);
          auVar34[6] = -(auVar2[6] == -1);
          auVar34[7] = -(auVar2[7] == -1);
          auVar34[8] = -(auVar2[8] == -1);
          auVar34[9] = -(auVar2[9] == -1);
          auVar34[10] = -(auVar2[10] == -1);
          auVar34[0xb] = -(auVar2[0xb] == -1);
          auVar34[0xc] = -(auVar2[0xc] == -1);
          auVar34[0xd] = -(auVar2[0xd] == -1);
          auVar34[0xe] = -(auVar2[0xe] == -1);
          auVar34[0xf] = -(auVar2[0xf] == -1);
          if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 || (SUB161(auVar34 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar34 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar34 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar34 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar34 >> 0x2f,0) & 1) != 0) || (SUB161(auVar34 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar34 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar34 >> 0x47,0) & 1) != 0) || (SUB161(auVar34 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar34 >> 0x57,0) & 1) != 0) || (SUB161(auVar34 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar34 >> 0x67,0) & 1) != 0) || (SUB161(auVar34 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar34 >> 0x77,0) & 1) != 0) || auVar34[0xf] < '\0') break;
          uVar14 = (longlong)unaff_RBX + uVar14 + 0x10;
          unaff_RBX = unaff_RBX + 4;
        }
      }
      fVar36 = (float)*(undefined8 *)(param_1 + 8);
      fVar40 = (float)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20);
      fVar26 = *param_1;
      fVar39 = param_1[1];
      fVar35 = param_1[3];
      fVar42 = param_1[4];
      fVar43 = param_1[5];
      fVar44 = param_1[6];
      fVar27 = param_1[2];
      fVar25 = param_1[7];
      uStack_168 = (ulonglong)(param_4 == (byte *)0x1) ^ 3;
      uVar14 = (ulonglong)(uint)((int)uStack_168 * 6);
      uVar12 = (uVar14 * 4 + -0x18) * 3;
      pdb_14007ee60();
      pbVar15 = pub_1406abab0(uVar12,4);
      if (pbVar15 == (byte *)0x0) {
        pdb_142dc7e2a(4,uVar12);
        goto LAB_1414d588f;
      }
      fVar30 = fVar39 + fVar39;
      fVar32 = fVar26 * (fVar26 + fVar26);
      fVar41 = fVar27 + fVar27;
      in_XMM1_Da = fVar27 * fVar41 + fVar39 * fVar30;
      fVar28 = (fVar26 + fVar26) * fVar35;
      fVar38 = _UNK_142e378e4 - (fVar32 + fVar39 * fVar30);
      fVar45 = fVar25 * (_DAT_142e36f28 - in_XMM1_Da);
      fVar46 = fVar25 * (fVar26 * fVar30 + fVar41 * fVar35);
      fVar25 = fVar25 * (fVar26 * fVar41 - fVar30 * fVar35);
      fVar33 = fVar36 * (fVar26 * fVar30 - fVar41 * fVar35);
      fVar32 = fVar36 * (_UNK_142e378e4 - (fVar32 + fVar27 * fVar41));
      fVar36 = fVar36 * (fVar39 * fVar41 + fVar28);
      fVar27 = fVar40 * (fVar26 * fVar41 + fVar30 * fVar35);
      fVar26 = fVar40 * (fVar39 * fVar41 - fVar28);
      fVar39 = fVar40 * fVar38;
      fVar40 = fVar40 * fVar38;
      fStack_2f0 = fVar33 * fVar25 - fVar36 * fVar45;
      fVar35 = fVar32 * fVar45 - fVar33 * fVar46;
      fStack_2e0 = fVar36 * fVar46 - fVar32 * fVar25;
      fStack_300 = _DAT_142e36f28 / (fVar39 * fVar35 + fVar26 * fStack_2f0 + fVar27 * fStack_2e0);
      fStack_2e8 = (fVar32 * fVar39 - fVar26 * fVar36) * fStack_300;
      fStack_2f8 = (fVar36 * fVar27 - fVar39 * fVar33) * fStack_300;
      fStack_308 = (fVar33 * fVar26 - fVar27 * fVar32) * fStack_300;
      fStack_2e4 = (fVar25 * fVar26 - fVar46 * fVar39) * fStack_300;
      fStack_2f4 = (fVar45 * fVar39 - fVar25 * fVar27) * fStack_300;
      fStack_304 = (fVar46 * fVar27 - fVar45 * fVar26) * fStack_300;
      fStack_2e0 = fStack_300 * fStack_2e0;
      fStack_2f0 = fStack_300 * fStack_2f0;
      fStack_300 = fStack_300 * fVar35;
      fStack_318 = (float)((uint)(fVar43 * fStack_2f8 + fVar42 * fStack_2e8 + fVar44 * fStack_308) ^
                          _DAT_142e37820);
      fStack_314 = (float)((uint)(fVar43 * fStack_2f4 + fVar42 * fStack_2e4 + fVar44 * fStack_304) ^
                          _UNK_142e37824);
      fStack_310 = (float)((uint)(fVar43 * fStack_2f0 + fVar42 * fStack_2e0 + fVar44 * fStack_300) ^
                          _UNK_142e37828);
      fStack_30c = (float)((uint)(fVar42 * fStack_2f0 + fVar42 * fStack_2e0 + fVar42 * fStack_300) ^
                          _UNK_142e3782c);
      unaff_RBX = (float *)(uVar14 - 6);
      uStack_f8 = 0;
      fStack_2d8 = fStack_258 * _DAT_142e378e0;
      fStack_2d4 = fStack_258 * _UNK_142e378e4;
      fStack_2d0 = fStack_250 * _UNK_142e378e8;
      fStack_2cc = fStack_250 * _UNK_142e378ec;
      fStack_254 = fStack_258;
      uVar12 = 0;
      puVar22 = &uStack_128;
      param_1 = &fStack_110;
      bVar9 = false;
      uStack_190 = 0;
      fStack_2fc = fStack_300;
      fStack_2ec = fStack_2f0;
      fStack_2dc = fStack_2e0;
      fStack_258 = fStack_2d8;
      fStack_250 = fStack_2d0;
      fStack_24c = fStack_2cc;
      pfStack_108 = unaff_RBX;
      pbStack_100 = pbVar15;
      while (uStack_190 < 2) {
        fVar35 = (float)(longlong)uStack_190;
        fVar25 = fStack_154;
        uVar14 = uStack_190 + 1;
        if (!bVar9) {
          if (uStack_190 != 0) break;
          fStack_154 = 1.0;
          uStack_190 = 2;
          fVar25 = fVar35;
          uVar14 = uStack_190;
          fVar35 = fStack_154;
        }
        fStack_154 = fVar35;
        uStack_190 = uVar14;
        fVar27 = _DAT_142e36f28 - fVar25;
        in_XMM1_Da = fStack_14c * fVar25;
        fVar40 = fStack_150 * fVar27;
        uStack_128 = (float *)CONCAT44(fStack_13c,fStack_140);
        fStack_158 = fVar25;
        pdb_140df4540(&pbStack_398,puVar22);
        pdb_140b77d90(&pfStack_248,param_6,&pbStack_398);
        pdb_140a85120(auStack_3d4,&pfStack_248,fStack_158 * 0.0 + param_5 * fVar27);
        fVar26 = _DAT_142e36f28 - fStack_154;
        fVar39 = fStack_14c * fStack_154;
        fVar25 = fStack_150 * fVar26;
        uStack_128 = (float *)CONCAT44(fStack_13c,fStack_140);
        pdb_140df4540(&pbStack_398,puVar22);
        pdb_140b77d90(&pfStack_248,param_6,&pbStack_398);
        pdb_140a85120(&pbStack_398,&pfStack_248,param_5 * fVar26 + 0.0);
        uStack_198 = pdb_140a850f0(auStack_3d4);
        uStack_19c = pdb_140a850f0(&pbStack_398);
        fVar27 = fVar27 * fStack_2b8;
        fStack_160 = in_XMM1_Da + fVar27;
        fStack_15c = fVar39 + fVar26 * fStack_2b8;
        pfStack_248 = (float *)0x0;
        puStack_240 = &uStack_168;
        pbStack_238 = (byte *)&uStack_198;
        pfStack_230 = &fStack_194;
        auStack_228._8_8_ = 0;
        auStack_228._0_8_ = &uStack_19c;
        auStack_218._8_4_ = 0;
        auStack_218._0_8_ = uStack_168;
        fVar26 = fStack_160 - (fVar40 + in_XMM1_Da);
        fVar40 = fVar26 * 0.0;
        auStack_278 = ZEXT416((uint)fVar40);
        fVar25 = fStack_15c - (fVar25 + fVar39);
        fVar39 = fVar25 * 0.0;
        auStack_2c8 = ZEXT416((uint)fVar39);
        uStack_3a8 = CONCAT44(fVar25,fVar39);
        uStack_3a0 = 0;
        uStack_268 = CONCAT44(fVar26,fVar40);
        uStack_260 = 0;
        uStack_3b8 = CONCAT44(fVar39,fVar25);
        uStack_3b0 = 0;
        fVar26 = 0.0;
        fVar39 = 0.0;
        fVar40 = 0.0;
        while( true ) {
          pdb_1414ec2a0(puVar22,&puStack_240);
          fVar25 = fStack_118;
          pfVar7 = pfStack_248;
          if ((float)uStack_128 != 1.4013e-45) break;
          fVar27 = (float)uStack_120;
          fVar26 = uStack_120._4_4_;
          pfStack_248 = (float *)((longlong)pfStack_248 + 1);
          fStack_110 = uStack_128._4_4_;
          if ((uStack_128._4_4_ < 0.0) || (_DAT_142e36f28 < uStack_128._4_4_)) {
            uStack_120 = pdb_140f70fc0;
            uStack_128 = param_1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14330d448,&uStack_128,&UNK_14330d430);
          }
          fVar39 = uStack_128._4_4_;
          fStack_110 = (float)pdb_140a84dc0(auStack_3d4);
          fStack_10c = fVar39;
          pdb_140df4540(puVar22,param_1);
          fVar39 = (float)uStack_128;
          fVar40 = uStack_128._4_4_;
          _auStack_188 = ZEXT416((uint)(float)uStack_120);
          fStack_110 = fVar26;
          if ((fVar26 < 0.0) || (_DAT_142e36f28 < fVar26)) {
            uStack_120 = pdb_140f70fc0;
            uStack_128 = param_1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14330d448,&uStack_128,&UNK_14330d430);
          }
          fStack_110 = (float)pdb_140a84dc0(auStack_3d4);
          fStack_10c = fVar26;
          pdb_140df4540(puVar22,param_1);
          fVar26 = (float)uStack_128;
          fVar35 = uStack_128._4_4_;
          _auStack_138 = ZEXT416((uint)(float)uStack_120);
          fStack_110 = fVar27;
          if ((fVar27 < 0.0) || (_DAT_142e36f28 < fVar27)) {
            uStack_120 = pdb_140f70fc0;
            uStack_128 = param_1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14330d448,&uStack_128,&UNK_14330d430);
          }
          fStack_110 = (float)pdb_140a84dc0(&pbStack_398);
          fStack_10c = fVar27;
          pdb_140df4540(puVar22,param_1);
          fVar27 = (float)uStack_128;
          fVar42 = uStack_128._4_4_;
          fVar43 = (float)uStack_120;
          fStack_110 = fVar25;
          if ((fVar25 < 0.0) || (_DAT_142e36f28 < fVar25)) {
            uStack_120 = pdb_140f70fc0;
            uStack_128 = param_1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14330d448,&uStack_128,&UNK_14330d430);
          }
          fStack_110 = (float)pdb_140a84dc0(&pbStack_398);
          fStack_10c = fVar25;
          pdb_140df4540(puVar22,param_1);
          fVar25 = (float)uStack_128;
          fVar44 = uStack_128._4_4_;
          fVar36 = (float)uStack_120;
          if ((longlong)pfStack_108 - uVar12 < 3) {
            pdb_142d7f1b0(&pfStack_108,uVar12,3,4,0xc);
            pbVar15 = pbStack_100;
            uVar12 = uStack_f8;
          }
          fVar28 = (float)auStack_188._0_4_ * fStack_308 + fVar40 * fStack_2f8 + fVar39 * fStack_2e8
                   + fStack_318;
          auStack_188._4_4_ =
               (float)auStack_188._0_4_ * fStack_304 + fVar40 * fStack_2f4 + fVar39 * fStack_2e4 +
               fStack_314;
          fVar30 = (float)auStack_188._0_4_ * fStack_300 + fVar40 * fStack_2f0 + fVar39 * fStack_2e0
                   + fStack_310;
          fVar32 = (float)auStack_188._0_4_ * fStack_2fc + fVar40 * fStack_2ec + fVar39 * fStack_2dc
                   + fStack_30c;
          fVar40 = (float)auStack_138._0_4_ * fStack_2fc;
          fVar39 = (float)auStack_138._0_4_ * fStack_308 + fVar35 * fStack_2f8 + fVar26 * fStack_2e8
                   + fStack_318;
          auStack_138._4_4_ =
               (float)auStack_138._0_4_ * fStack_304 + fVar35 * fStack_2f4 + fVar26 * fStack_2e4 +
               fStack_314;
          fVar33 = (float)auStack_138._0_4_ * fStack_300 + fVar35 * fStack_2f0 + fVar26 * fStack_2e0
                   + fStack_310;
          fVar38 = fVar43 * fStack_308 + fVar42 * fStack_2f8 + fVar27 * fStack_2e8 + fStack_318;
          fVar41 = fVar43 * fStack_304 + fVar42 * fStack_2f4 + fVar27 * fStack_2e4 + fStack_314;
          fVar42 = fVar43 * fStack_300 + fVar42 * fStack_2f0 + fVar27 * fStack_2e0 + fStack_310;
          *(ulonglong *)(pbVar15 + uVar12 * 0xc) = CONCAT44(auStack_188._4_4_,fVar28);
          auStack_188._0_4_ = fVar28;
          fStack_180 = fVar30;
          fStack_17c = fVar32;
          *(float *)(pbVar15 + uVar12 * 0xc + 8) = fVar30;
          *(ulonglong *)(pbVar15 + uVar12 * 0xc + 0xc) = CONCAT44(auStack_138._4_4_,fVar39);
          auStack_138._0_4_ = fVar39;
          fStack_130 = fVar33;
          fStack_12c = fVar40 + fVar35 * fStack_2ec + fVar26 * fStack_2dc + fStack_30c;
          *(float *)(pbVar15 + uVar12 * 0xc + 0x14) = fVar33;
          *(ulonglong *)(pbVar15 + uVar12 * 0xc + 0x18) = CONCAT44(fVar41,fVar38);
          *(float *)(pbVar15 + uVar12 * 0xc + 0x20) = fVar42;
          uStack_f8 = uVar12 + 3;
          if ((longlong)pfStack_108 - uStack_f8 < 3) {
            pdb_142d7f1b0(&pfStack_108,uStack_f8,3,4,0xc);
          }
          fVar27 = fVar44 * fStack_2f8 + fVar25 * fStack_2e8;
          fVar26 = fVar44 * fStack_2f4 + fVar25 * fStack_2e4;
          fVar39 = fVar44 * fStack_2f0 + fVar25 * fStack_2e0;
          fVar40 = fVar44 * fStack_2ec + fVar25 * fStack_2dc;
          fVar25 = fVar36 * fStack_308 + fVar27 + fStack_318;
          fVar35 = fVar36 * fStack_304 + fVar26 + fStack_314;
          in_XMM1_Da = fVar36 * fStack_300 + fVar39 + fStack_310;
          fVar43 = fVar36 * fStack_2fc + fVar40 + fStack_30c;
          *(undefined1 (*) [8])(pbStack_100 + uStack_f8 * 0xc) = auStack_138;
          *(float *)(pbStack_100 + uStack_f8 * 0xc + 8) = fVar33;
          *(ulonglong *)(pbStack_100 + uStack_f8 * 0xc + 0xc) = CONCAT44(fVar35,fVar25);
          *(float *)(pbStack_100 + uStack_f8 * 0xc + 0x14) = in_XMM1_Da;
          *(ulonglong *)(pbStack_100 + uStack_f8 * 0xc + 0x18) = CONCAT44(fVar41,fVar38);
          *(float *)(pbStack_100 + uStack_f8 * 0xc + 0x20) = fVar42;
          uStack_f8 = uStack_f8 + 3;
          if (pfVar7 == (float *)0x0) {
            if ((longlong)pfStack_108 - uStack_f8 < 3) {
              pdb_142d7f1b0(&pfStack_108,uStack_f8,3,4,0xc);
            }
            fVar27 = (float)auStack_188._0_4_ - (float)uStack_268;
            fVar26 = (float)auStack_188._4_4_ - uStack_268._4_4_;
            fVar39 = fStack_180 - (float)uStack_260;
            fVar40 = fStack_17c - uStack_260._4_4_;
            fVar44 = fVar30 - (float)auStack_278._0_4_;
            *(undefined4 *)(pbStack_100 + uStack_f8 * 0xc) = auStack_188._0_4_;
            *(undefined4 *)((longlong)(pbStack_100 + uStack_f8 * 0xc) + 4) = auStack_188._4_4_;
            *(float *)(pbStack_100 + uStack_f8 * 0xc + 8) = fVar30;
            *(ulonglong *)(pbStack_100 + uStack_f8 * 0xc + 0xc) = CONCAT44(fVar26,fVar27);
            *(float *)(pbStack_100 + uStack_f8 * 0xc + 0x14) = fVar44;
            *(ulonglong *)(pbStack_100 + uStack_f8 * 0xc + 0x18) = CONCAT44(fVar41,fVar38);
            *(float *)(pbStack_100 + uStack_f8 * 0xc + 0x20) = fVar42;
            uStack_f8 = uStack_f8 + 3;
            if ((longlong)pfStack_108 - uStack_f8 < 3) {
              pdb_142d7f1b0(&pfStack_108,uStack_f8,3,4,0xc);
            }
LAB_1414d505e:
            *(ulonglong *)(pbStack_100 + uStack_f8 * 0xc) = CONCAT44(fVar26,fVar27);
            *(float *)(pbStack_100 + uStack_f8 * 0xc + 8) = fVar44;
            *(float *)(pbStack_100 + uStack_f8 * 0xc + 0xc) = fVar38 - (float)auStack_2c8._0_4_;
            pfVar1 = (float *)(pbStack_100 + uStack_f8 * 0xc + 0x10);
            *pfVar1 = fVar41 - (float)uStack_3b8;
            pfVar1[1] = fVar42 - uStack_3b8._4_4_;
            pfVar1[2] = fVar38;
            pfVar1[3] = fVar41;
            *(float *)(pbStack_100 + uStack_f8 * 0xc + 0x20) = fVar42;
            uStack_f8 = uStack_f8 + 3;
          }
          else if ((pfVar7 == (float *)0x1) && (uStack_168 == 3)) {
            if ((longlong)pfStack_108 - uStack_f8 < 3) {
              pdb_142d7f1b0(&pfStack_108,uStack_f8,3,4,0xc);
            }
            fVar27 = (float)auStack_188._0_4_ - (float)uStack_268;
            fVar26 = (float)auStack_188._4_4_ - uStack_268._4_4_;
            fVar39 = fStack_180 - (float)uStack_260;
            fVar40 = fStack_17c - uStack_260._4_4_;
            fVar44 = fVar30 - (float)auStack_278._0_4_;
            *(undefined4 *)(pbStack_100 + uStack_f8 * 0xc) = auStack_188._0_4_;
            *(undefined4 *)((longlong)(pbStack_100 + uStack_f8 * 0xc) + 4) = auStack_188._4_4_;
            *(float *)(pbStack_100 + uStack_f8 * 0xc + 8) = fVar30;
            *(ulonglong *)(pbStack_100 + uStack_f8 * 0xc + 0xc) = CONCAT44(fVar26,fVar27);
            *(float *)(pbStack_100 + uStack_f8 * 0xc + 0x14) = fVar44;
            *(ulonglong *)(pbStack_100 + uStack_f8 * 0xc + 0x18) = CONCAT44(fVar41,fVar38);
            *(float *)(pbStack_100 + uStack_f8 * 0xc + 0x20) = fVar42;
            uStack_f8 = uStack_f8 + 3;
            if ((longlong)pfStack_108 - uStack_f8 < 3) {
              pdb_142d7f1b0(&pfStack_108,uStack_f8,3,4,0xc);
            }
            goto LAB_1414d505e;
          }
          if (pfVar7 == (float *)(uStack_168 - 2)) {
            if ((longlong)pfStack_108 - uStack_f8 < 3) {
              pdb_142d7f1b0(&pfStack_108,uStack_f8,3,4,0xc);
            }
            fVar27 = fVar25 - (float)uStack_3a8;
            fVar26 = fVar35 - uStack_3a8._4_4_;
            fVar39 = in_XMM1_Da - (float)uStack_3a0;
            fVar40 = fVar43 - uStack_3a0._4_4_;
            fVar42 = in_XMM1_Da - (float)auStack_2c8._0_4_;
            *(ulonglong *)(pbStack_100 + uStack_f8 * 0xc) =
                 CONCAT44((float)auStack_138._4_4_ - uStack_268._4_4_,
                          (float)auStack_138._0_4_ - (float)uStack_268);
            *(float *)(pbStack_100 + uStack_f8 * 0xc + 8) = fVar33 - (float)auStack_278._0_4_;
            *(undefined4 *)(pbStack_100 + uStack_f8 * 0xc + 0xc) = auStack_138._0_4_;
            *(undefined4 *)((longlong)(pbStack_100 + uStack_f8 * 0xc + 0xc) + 4) = auStack_138._4_4_
            ;
            *(float *)(pbStack_100 + uStack_f8 * 0xc + 0x14) = fVar33;
            *(ulonglong *)(pbStack_100 + uStack_f8 * 0xc + 0x18) = CONCAT44(fVar26,fVar27);
            *(float *)(pbStack_100 + uStack_f8 * 0xc + 0x20) = fVar42;
            uStack_f8 = uStack_f8 + 3;
            if ((longlong)pfStack_108 - uStack_f8 < 3) {
              pdb_142d7f1b0(&pfStack_108,uStack_f8,3,4,0xc);
            }
            *(undefined1 (*) [8])(pbStack_100 + uStack_f8 * 0xc) = auStack_138;
            *(float *)(pbStack_100 + uStack_f8 * 0xc + 8) = fVar33;
            *(ulonglong *)(pbStack_100 + uStack_f8 * 0xc + 0xc) = CONCAT44(fVar35,fVar25);
            *(float *)(pbStack_100 + uStack_f8 * 0xc + 0x14) = in_XMM1_Da;
            *(ulonglong *)(pbStack_100 + uStack_f8 * 0xc + 0x18) = CONCAT44(fVar26,fVar27);
            *(float *)(pbStack_100 + uStack_f8 * 0xc + 0x20) = fVar42;
            uStack_f8 = uStack_f8 + 3;
          }
          unaff_RBX = pfVar7;
          pbVar15 = pbStack_100;
          uVar12 = uStack_f8;
          if ((fStack_158 == 0.0) && (!NAN(fStack_158))) {
            if ((longlong)pfStack_108 - uStack_f8 < 3) {
              pdb_142d7f1b0(&pfStack_108,uStack_f8,3,4,0xc);
            }
            fVar27 = fVar30 - fStack_2d8;
            *(undefined4 *)(pbStack_100 + uStack_f8 * 0xc) = auStack_188._0_4_;
            *(undefined4 *)((longlong)(pbStack_100 + uStack_f8 * 0xc) + 4) = auStack_188._4_4_;
            in_XMM1_Da = (float)auStack_188._0_4_ - fStack_2d8;
            uVar31 = CONCAT44((float)auStack_188._4_4_ - fStack_2d4,in_XMM1_Da);
            *(float *)(pbStack_100 + uStack_f8 * 0xc + 8) = fVar30;
            *(undefined1 (*) [8])(pbStack_100 + uStack_f8 * 0xc + 0xc) = auStack_138;
            *(float *)(pbStack_100 + uStack_f8 * 0xc + 0x14) = fVar33;
            *(undefined8 *)(pbStack_100 + uStack_f8 * 0xc + 0x18) = uVar31;
            *(float *)(pbStack_100 + uStack_f8 * 0xc + 0x20) = fVar27;
            uStack_f8 = uStack_f8 + 3;
            if ((longlong)pfStack_108 - uStack_f8 < 3) {
              pdb_142d7f1b0(&pfStack_108,uStack_f8,3,4,0xc);
            }
            *(undefined4 *)(pbStack_100 + uStack_f8 * 0xc) = auStack_138._0_4_;
            *(undefined4 *)((longlong)(pbStack_100 + uStack_f8 * 0xc) + 4) = auStack_138._4_4_;
            *(float *)(pbStack_100 + uStack_f8 * 0xc + 8) = fVar33;
            *(ulonglong *)(pbStack_100 + uStack_f8 * 0xc + 0xc) =
                 CONCAT44((float)auStack_138._4_4_ - fStack_254,
                          (float)auStack_138._0_4_ - fStack_258);
            *(float *)(pbStack_100 + uStack_f8 * 0xc + 0x14) = fVar33 - fStack_2d8;
            *(undefined8 *)(pbStack_100 + uStack_f8 * 0xc + 0x18) = uVar31;
            *(float *)(pbStack_100 + uStack_f8 * 0xc + 0x20) = fVar27;
            uVar12 = uStack_f8 + 3;
            pbVar15 = pbStack_100;
            fVar26 = fVar32;
            fVar39 = fVar30;
            fVar40 = fVar32;
            uStack_f8 = uVar12;
          }
        }
        bVar9 = true;
      }
      pdb_1409efc00(&pbStack_398,pbVar15,uVar12);
      if (pbStack_398 == (byte *)0x0) {
        pdb_142dc8110(&UNK_143314bf4,0xb,&UNK_143314c00);
        goto LAB_1414d588f;
      }
      uStack_1c8 = uStack_328;
      uStack_1c0 = uStack_320;
      uStack_1d8 = uStack_338;
      uStack_1d0 = uStack_330;
      uStack_1e8 = uStack_348;
      uStack_1e0 = uStack_340;
      uStack_1f8 = uStack_358;
      uStack_1f0 = uStack_350;
      auStack_208 = auStack_368;
      auStack_218 = auStack_378;
      auStack_228 = auStack_388;
      pbStack_238 = pbStack_398;
      pfStack_230 = pfStack_390;
      pfStack_248 = (float *)0x1;
      puStack_240 = (ulonglong *)0x1;
      pdb_14007ee60();
      pbVar15 = pub_1406abab0(0x90,0x10);
      if (pbVar15 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(0x10,0x90);
      }
      pub_142e32760(pbVar15,&pfStack_248,0x90);
      LOCK();
      lVar11 = *(longlong *)pbVar15;
      *(longlong *)pbVar15 = *(longlong *)pbVar15 + 1;
      UNLOCK();
      pbStack_398 = pbVar15;
      if (*(longlong *)pbVar15 == 0 || SCARRY8(lVar11,1) != *(longlong *)pbVar15 < 0)
      goto LAB_1414d588f;
      pfStack_248 = (float *)CONCAT44(iStack_174,iStack_178);
      puStack_240 = (ulonglong *)CONCAT44(uStack_16c,iStack_170);
      pfStack_248 = (float *)pdb_1414b4030(param_7,&pfStack_248,pbVar15);
      if (pfStack_248 != (float *)0x0) {
        LOCK();
        *(longlong *)pfStack_248 = *(longlong *)pfStack_248 + -1;
        UNLOCK();
        if (*(longlong *)pfStack_248 == 0) {
          pdb_140c7b7a0(&pfStack_248);
        }
      }
      param_4 = pbStack_398;
      ppbVar19 = &pbStack_398;
      if (pfStack_108 != (float *)0x0) {
        pub_1406abac0(pbStack_100,(longlong)pfStack_108 * 0xc,4);
      }
LAB_1414d55b3:
      if (lStack_1b0 == 0) {
        return param_4;
      }
      plVar13 = (longlong *)pdb_140e97000();
      if (((char)plVar13[0xd] != '\x01') &&
         (plVar13 = (longlong *)pdb_142dde6e0(plVar13,0), plVar13 == (longlong *)0x0)) break;
      if (*plVar13 == 0) {
        *plVar13 = -1;
        auStack_138 = (undefined1  [8])plVar13;
        pdb_140e95370(plVar13 + 1,uStack_1a8);
        *(longlong *)auStack_138 = *(longlong *)auStack_138 + 1;
        return param_4;
      }
    }
    plVar13 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_1414d5744:
    plVar13 = (longlong *)pdb_142dde6e0(plVar13,0);
  } while (plVar13 != (longlong *)0x0);
  pdb_142dc7890(&UNK_14330e598);
LAB_1414d57ec:
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_14301200e,0x28,&UNK_143012098);
}

