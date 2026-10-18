// VA 0x1408cb4f0, PDB extent 10487 bytes
// system_decorator::decorator_visual::gothic_balcony_door::generate_gothic_balcony_doors
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/gothic_balcony_door.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::gothic_balcony_door::generate_gothic_balcony_doors
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/gothic_balcony_door.rs
   Extent: 10487 */

void pdb_1408cb4f0(undefined8 param_1,longlong *param_2,undefined8 *param_3,
                  undefined1 (*param_4) [16],undefined8 *param_5,longlong *param_6,
                  undefined8 *param_7)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  byte bVar8;
  undefined4 uVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char cVar16;
  byte bVar17;
  undefined1 uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  undefined4 *puVar26;
  undefined8 *puVar27;
  longlong *plVar28;
  longlong lVar29;
  undefined *puVar30;
  ushort uVar31;
  ulonglong uVar32;
  longlong lVar33;
  undefined *puVar34;
  undefined1 (*unaff_R13) [16];
  ulonglong uVar35;
  uint uVar36;
  longlong *unaff_R15;
  float fVar37;
  float fVar38;
  float fVar41;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar42;
  float fVar43;
  undefined1 auVar44 [12];
  float fVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar51;
  undefined1 auVar52 [12];
  int iVar60;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar61;
  float fVar62;
  undefined1 auVar63 [16];
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined4 uVar71;
  undefined8 uVar69;
  undefined1 (*pauVar70) [16];
  undefined4 uVar72;
  undefined8 uStack_388;
  longlong *plStack_380;
  undefined1 auStack_378 [16];
  longlong *plStack_360;
  undefined1 (*pauStack_358) [16];
  longlong lStack_350;
  undefined4 *puStack_348;
  undefined8 uStack_340;
  longlong *plStack_338;
  longlong *plStack_330;
  longlong *plStack_328;
  longlong *plStack_320;
  undefined8 uStack_318;
  longlong lStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [16];
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 auStack_2b8 [16];
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  longlong *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  float fStack_258;
  undefined4 uStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  longlong lStack_230;
  undefined1 (*pauStack_228) [16];
  longlong lStack_220;
  longlong lStack_218;
  undefined8 uStack_210;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  longlong lStack_1f8;
  ulonglong uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  longlong lStack_1c0;
  int iStack_1b8;
  undefined4 uStack_1b4;
  longlong *plStack_1b0;
  undefined8 uStack_1a8;
  float fStack_1a0;
  float fStack_19c;
  longlong *plStack_190;
  float fStack_184;
  longlong *plStack_180;
  ulonglong uStack_178;
  longlong lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  ushort uStack_150;
  undefined2 uStack_14e;
  float fStack_14c;
  uint uStack_148;
  float fStack_144;
  float fStack_140;
  uint uStack_13c;
  float fStack_138;
  undefined8 uStack_134;
  longlong *plStack_120;
  longlong *plStack_118;
  char cStack_110;
  char cStack_10f;
  uint5 uStack_10e;
  undefined1 uStack_109;
  float fStack_108;
  undefined3 uStack_104;
  longlong *plStack_100;
  undefined1 uStack_f4;
  char cStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  undefined1 auVar64 [16];
  
  uStack_f0 = 0xfffffffffffffffe;
  plVar28 = param_2;
  uStack_318 = param_1;
  cStack_f3 = pdb_140e94b40();
  if (cStack_f3 == '\0') goto LAB_1408cb6fa;
  uVar35 = 0x56;
  lVar20 = pdb_1408cddf0(0x56);
  unaff_R15 = (longlong *)&UNK_143017fd0;
  if (lVar20 == 1) {
    if ((longlong *)0x56 < plVar28) {
      pdb_142dc8070(&UNK_143017fd0,0x56,0,plVar28,&UNK_1430180a0);
LAB_1408cd810:
      pdb_142dc8070(&UNK_143017fd0,0x56);
LAB_1408cd834:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2();
    }
    uVar21 = pdb_1408cddf0(plVar28);
    if ((uVar21 & 1) != 0) {
      if ((undefined *)0x56 < (undefined *)((longlong)plVar28 + 2)) goto LAB_1408cd810;
      uVar35 = 0x54 - (longlong)plVar28;
      unaff_R15 = (longlong *)((longlong)plVar28 + 0x143017fd2);
    }
  }
  puVar30 = &UNK_143017d19;
  puVar34 = &UNK_143017cd5;
  do {
    bVar17 = puVar30[-1];
    uVar19 = (uint)(char)bVar17;
    if ((char)bVar17 < '\0') {
      bVar7 = puVar30[-2];
      if ((char)bVar7 < -0x40) {
        bVar8 = puVar30[-3];
        if ((char)bVar8 < -0x40) {
          pbVar1 = puVar30 + -4;
          puVar30 = puVar30 + -4;
          uVar19 = bVar8 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar30 = puVar30 + -3;
          uVar19 = bVar8 & 0xf;
        }
        uVar19 = bVar7 & 0x3f | uVar19 << 6;
      }
      else {
        puVar30 = puVar30 + -2;
        uVar19 = bVar7 & 0x1f;
      }
      uVar19 = (uint)(bVar17 & 0x3f) | uVar19 << 6;
      if (uVar19 != 0x5c) goto LAB_1408cb664;
LAB_1408cb676:
      puVar34 = puVar30 + -0x143017cd4;
      if ((undefined *)0x44 < puVar34) {
        pdb_142dc8070(&UNK_143017cd5,0x44,puVar34,0x44,&UNK_143018080);
LAB_1408cd7b7:
        uStack_168 = &cStack_110;
        uStack_160._0_4_ = 12.578812;
        uStack_160._4_4_ = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14330e2c6,&uStack_168,&UNK_14330e310);
      }
      unaff_R13 = (undefined1 (*) [16])(0x44 - (longlong)puVar34);
      puVar34 = puVar30 + 1;
      goto LAB_1408cb699;
    }
    puVar30 = puVar30 + -1;
    if (uVar19 == 0x5c) goto LAB_1408cb676;
LAB_1408cb664:
    if (uVar19 == 0x2f) goto LAB_1408cb676;
  } while (puVar30 != &UNK_143017cd5);
  unaff_R13 = (undefined1 (*) [16])0x44;
LAB_1408cb699:
  plVar22 = (longlong *)pdb_140e97000();
  if ((char)plVar22[0xd] != '\x01') goto LAB_1408cd705;
  do {
    if (*plVar22 == 0) {
      *plVar22 = -1;
      plVar28 = unaff_R15;
      plStack_120 = plVar22;
      uStack_268 = pdb_140e94f10(plVar22 + 1,unaff_R15,uVar35,puVar34,unaff_R13,1,0);
      *plStack_120 = *plStack_120 + 1;
LAB_1408cb6fa:
      uStack_388 = pdb_140c47770(param_4);
      plStack_380 = plVar28;
      uStack_210 = uStack_388;
      plStack_1b0 = plVar28;
      pdb_140a2fb40(&uStack_168,*param_3);
      puVar34 = (undefined *)CONCAT44(uStack_168._4_4_,(float)uStack_168);
      uVar35 = (ulonglong)uStack_150;
      uStack_250 = *(undefined4 *)((longlong)param_5 + 0x1c);
      uStack_340 = *param_5;
      puStack_348 = (undefined4 *)param_5[2];
      plStack_338 = (longlong *)*param_2;
      plStack_330 = plStack_338 + 4;
      plStack_328 = plStack_1b0 + 4;
      plStack_320 = plStack_1b0 + 10;
      lStack_1f8 = *param_6;
      uStack_308 = *param_7;
      param_4 = uStack_160;
      lVar20 = CONCAT44(fStack_144,uStack_148);
      if (CONCAT44(fStack_144,uStack_148) != 0) {
        do {
          lStack_310 = lVar20 + -1;
          uVar19 = (uint)uVar35;
          if ((short)uVar35 == 0) {
            do {
              auVar39 = *param_4;
              puVar34 = puVar34 + -0x980;
              param_4 = param_4 + 1;
              uVar19 = (ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar39[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar19 == 0);
          }
          uVar36 = 0;
          for (uVar13 = uVar19; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
            uVar36 = uVar36 + 1;
          }
          pauStack_358 = *(undefined1 (**) [16])(puVar34 + (ulonglong)uVar36 * -0x98 + -0x98);
          pauStack_228 = pauStack_358;
          pdb_140c3ba10(&uStack_168,puVar34 + (ulonglong)uVar36 * -0x98 + -0x90);
          uVar35 = (ulonglong)(uVar19 - 1 & uVar19);
          param_2 = (longlong *)CONCAT44(uStack_168._4_4_,(float)uStack_168);
          unaff_R15 = (longlong *)(ulonglong)uStack_150;
          lStack_230 = CONCAT44(fStack_144,uStack_148);
          lStack_1c0 = CONCAT44(uStack_13c,fStack_140);
          lStack_350 = lStack_1c0 + 0x50;
          unaff_R13 = uStack_160;
LAB_1408cb86f:
          if (lStack_230 != 0) {
            if ((short)unaff_R15 == 0) {
              do {
                auVar39 = *unaff_R13;
                param_2 = param_2 + -8;
                unaff_R13 = unaff_R13 + 1;
                uVar19 = (ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar39[0xf] >> 7) << 0xf) ^ 0xffff;
                unaff_R15 = (longlong *)(ulonglong)uVar19;
              } while (uVar19 == 0);
            }
            iVar60 = 0;
            uVar36 = (uint)unaff_R15;
            for (uVar19 = uVar36; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
              iVar60 = iVar60 + 1;
            }
            fStack_184 = *(float *)((longlong)param_2 + (-4 - (ulonglong)(uint)(iVar60 << 2)));
            uStack_168._0_4_ = fStack_184;
            if (*(longlong *)(lStack_1c0 + 0x48) != 0) {
              unaff_R15 = (longlong *)(ulonglong)(uVar36 - 1 & uVar36);
              lVar20 = lStack_230 + -1;
              uVar21 = pdb_1400aede0(lStack_350,&uStack_168);
              plStack_120 = *(longlong **)(lStack_1c0 + 0x30);
              bVar17 = (byte)(uVar21 >> 0x39);
              auVar39 = ZEXT216(CONCAT11(bVar17,bVar17));
              auVar39 = pshuflw(auVar39,auVar39,0);
              lVar33 = 0;
              while( true ) {
                uVar21 = uVar21 & *(ulonglong *)(lStack_1c0 + 0x38);
                auVar40 = *(undefined1 (*) [16])((longlong)plStack_120 + uVar21);
                auVar53[0] = -(auVar40[0] == auVar39[0]);
                auVar53[1] = -(auVar40[1] == auVar39[1]);
                auVar53[2] = -(auVar40[2] == auVar39[2]);
                auVar53[3] = -(auVar40[3] == auVar39[3]);
                auVar53[4] = -(auVar40[4] == auVar39[4]);
                auVar53[5] = -(auVar40[5] == auVar39[5]);
                auVar53[6] = -(auVar40[6] == auVar39[6]);
                auVar53[7] = -(auVar40[7] == auVar39[7]);
                auVar53[8] = -(auVar40[8] == auVar39[0]);
                auVar53[9] = -(auVar40[9] == auVar39[1]);
                auVar53[10] = -(auVar40[10] == auVar39[2]);
                auVar53[0xb] = -(auVar40[0xb] == auVar39[3]);
                auVar53[0xc] = -(auVar40[0xc] == auVar39[4]);
                auVar53[0xd] = -(auVar40[0xd] == auVar39[5]);
                auVar53[0xe] = -(auVar40[0xe] == auVar39[6]);
                auVar53[0xf] = -(auVar40[0xf] == auVar39[7]);
                uVar31 = (ushort)(SUB161(auVar53 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar53 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar53 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar53 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar53 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar53 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar53 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar53 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar53 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar53 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar53 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar53 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar53 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar53 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar53 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar53[0xf] >> 7) << 0xf;
                uVar19 = (uint)uVar31;
                while (uVar31 != 0) {
                  uVar36 = 0;
                  for (uVar13 = uVar19; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
                    uVar36 = uVar36 + 1;
                  }
                  uVar32 = uVar36 + uVar21 & *(ulonglong *)(lStack_1c0 + 0x38);
                  uVar24 = (ulonglong)(uint)fStack_184;
                  lStack_230 = lVar20;
                  if (fStack_184 == *(float *)(plStack_120 + uVar32 * -0xd + -0xd)) {
                    cVar16 = pdb_140c45920(&uStack_388);
                    if (cVar16 != '\t') goto LAB_1408cb86f;
                    *puStack_348 = uStack_250;
                    uVar23 = pdb_140947f90(pauStack_228);
                    plStack_120 = plStack_120 + uVar32 * -0xd;
                    uStack_f2 = (undefined1)plStack_120[-1];
                    plStack_190 = (longlong *)
                                  pdb_1408f3750(uStack_340,fStack_184,uVar23,uVar24,uStack_f2);
                    plVar28 = plStack_338;
                    iStack_1b8 = (int)plStack_120[-2];
                    if (iStack_1b8 == 999) {
                      iStack_1b8 = 0;
                    }
                    if (plStack_338[3] == 0) goto LAB_1408cd64a;
                    plStack_180 = plStack_120 + -0xc;
                    plStack_100 = plStack_190;
                    uVar24 = pdb_1400af0a0(plStack_330,&pauStack_358);
                    lVar20 = *plVar28;
                    uVar21 = plVar28[1];
                    bVar17 = (byte)(uVar24 >> 0x39);
                    auVar39 = ZEXT216(CONCAT11(bVar17,bVar17));
                    auVar39 = pshuflw(auVar39,auVar39,0);
                    lVar33 = 0;
                    goto LAB_1408cba92;
                  }
                  uVar31 = (ushort)(uVar19 - 1) & (ushort)uVar19;
                  uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar31);
                }
                auVar45[0] = -(auVar40[0] == -1);
                auVar45[1] = -(auVar40[1] == -1);
                auVar45[2] = -(auVar40[2] == -1);
                auVar45[3] = -(auVar40[3] == -1);
                auVar45[4] = -(auVar40[4] == -1);
                auVar45[5] = -(auVar40[5] == -1);
                auVar45[6] = -(auVar40[6] == -1);
                auVar45[7] = -(auVar40[7] == -1);
                auVar45[8] = -(auVar40[8] == -1);
                auVar45[9] = -(auVar40[9] == -1);
                auVar45[10] = -(auVar40[10] == -1);
                auVar45[0xb] = -(auVar40[0xb] == -1);
                auVar45[0xc] = -(auVar40[0xc] == -1);
                auVar45[0xd] = -(auVar40[0xd] == -1);
                auVar45[0xe] = -(auVar40[0xe] == -1);
                auVar45[0xf] = -(auVar40[0xf] == -1);
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
                       (SUB161(auVar45 >> 0x5f,0) & 1) != 0) || (SUB161(auVar45 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar45 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar45 >> 0x77,0) & 1) != 0) || auVar45[0xf] < '\0') break;
                uVar21 = uVar21 + lVar33 + 0x10;
                lVar33 = lVar33 + 0x10;
              }
            }
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143017bb0);
          }
          param_3 = (undefined8 *)0x0;
          lVar20 = lStack_310;
          if (lStack_310 == 0) break;
        } while( true );
      }
      if (cStack_f3 == '\0') {
        return;
      }
      plVar28 = (longlong *)pdb_140e97000();
      if ((char)plVar28[0xd] != '\x01') {
        plVar28 = (longlong *)pdb_142dde6e0(plVar28,0);
        if (plVar28 == (longlong *)0x0) break;
      }
      if (*plVar28 == 0) {
        *plVar28 = -1;
        plStack_120 = plVar28;
        pdb_140e95370(plVar28 + 1,uStack_268);
        *plStack_120 = *plStack_120 + 1;
        return;
      }
    }
    plVar22 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_1408cd705:
    plVar22 = (longlong *)pdb_142dde6e0(plVar22,0);
  } while (plVar22 != (longlong *)0x0);
  pdb_142dc7890(&UNK_14330e598);
LAB_1408cd725:
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14301ce21,0x17,&UNK_14301ce30);
LAB_1408cba92:
  uVar24 = uVar24 & uVar21;
  auVar40 = *(undefined1 (*) [16])(lVar20 + uVar24);
  auVar54[0] = -(auVar40[0] == auVar39[0]);
  auVar54[1] = -(auVar40[1] == auVar39[1]);
  auVar54[2] = -(auVar40[2] == auVar39[2]);
  auVar54[3] = -(auVar40[3] == auVar39[3]);
  auVar54[4] = -(auVar40[4] == auVar39[4]);
  auVar54[5] = -(auVar40[5] == auVar39[5]);
  auVar54[6] = -(auVar40[6] == auVar39[6]);
  auVar54[7] = -(auVar40[7] == auVar39[7]);
  auVar54[8] = -(auVar40[8] == auVar39[0]);
  auVar54[9] = -(auVar40[9] == auVar39[1]);
  auVar54[10] = -(auVar40[10] == auVar39[2]);
  auVar54[0xb] = -(auVar40[0xb] == auVar39[3]);
  auVar54[0xc] = -(auVar40[0xc] == auVar39[4]);
  auVar54[0xd] = -(auVar40[0xd] == auVar39[5]);
  auVar54[0xe] = -(auVar40[0xe] == auVar39[6]);
  auVar54[0xf] = -(auVar40[0xf] == auVar39[7]);
  uVar31 = (ushort)(SUB161(auVar54 >> 7,0) & 1) | (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar54 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar54 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar54 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar54 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar54 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar54 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar54 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar54 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar54 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar54 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar54 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar54 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe | (ushort)(auVar54[0xf] >> 7) << 0xf;
  uVar19 = (uint)uVar31;
  while (uVar31 != 0) {
    uVar36 = 0;
    for (uVar13 = uVar19; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar36 = uVar36 + 1;
    }
    lVar29 = (uVar36 + uVar24 & uVar21) * -0x2b0;
    lStack_170 = lVar20;
    if (pauStack_228 == *(undefined1 (**) [16])(lVar20 + -0x2b0 + lVar29)) {
      pdb_140901130(plStack_180,&UNK_143017d38);
      uStack_178 = (ulonglong)*(byte *)((longlong)plStack_120 + -7);
      cVar16 = pdb_1409012c0(9,uStack_210);
      cStack_110 = pdb_140c44ba0(uStack_178);
      cStack_10f = cVar16;
      lVar20 = pdb_141494370(plStack_1b0,&cStack_110);
      if (lVar20 == 0) goto LAB_1408cd7b7;
      lStack_170 = lStack_170 + lVar29;
      lStack_220 = lStack_170 + -0x2a8;
      uStack_2f8 = *(undefined8 *)(lVar20 + 0x20);
      uStack_2f0 = *(undefined8 *)(lVar20 + 0x28);
      uStack_2e8 = *(undefined8 *)(lVar20 + 0x30);
      uStack_2e0 = *(undefined8 *)(lVar20 + 0x38);
      pdb_1408c2be0(&uStack_168,lStack_220,plStack_180);
      uVar15 = uStack_134;
      fVar61 = fStack_138;
      fVar50 = fStack_140;
      pauVar70 = uStack_160;
      fVar42 = (float)uStack_158;
      auStack_2b8 = ZEXT416(uStack_158._4_4_);
      fVar65 = (float)CONCAT22(uStack_14e,uStack_150);
      uVar23 = CONCAT44(uStack_168._4_4_,(float)uStack_168);
      fStack_23c = fStack_14c;
      auStack_378 = ZEXT416(uStack_148);
      fStack_238 = fStack_144;
      auStack_2d8 = ZEXT416(uStack_13c);
      fStack_24c = (float)uStack_158;
      fStack_240 = fStack_138;
      fStack_244 = fStack_140;
      fVar37 = fStack_140 - (float)uStack_158;
      fVar41 = fStack_138 - fVar65;
      fVar51 = _DAT_142e36f28 / SQRT(fVar41 * fVar41 + fVar37 * fVar37);
      uStack_260 = CONCAT44(fVar37 * fVar51,fVar41 * (float)((uint)fVar51 ^ _DAT_142e37820));
      fStack_248 = fVar65;
      pdb_140df4520(&cStack_110,&uStack_260);
      pdb_140de9ab0(&uStack_168,&cStack_110);
      uStack_1e8 = CONCAT44(uStack_168._4_4_,(float)uStack_168);
      uStack_1e0 = uStack_160;
      cVar16 = pdb_1409012c0(9,uStack_210);
      cStack_110 = pdb_140c44ba0(uStack_178);
      cStack_10f = cVar16;
      if (plStack_1b0[3] == 0) goto LAB_1408cd668;
      uVar24 = pdb_1413f0300(plStack_328,&cStack_110);
      uStack_1f0 = uStack_178 & 0xff;
      uVar72 = auStack_2d8._4_4_;
      uVar2 = auStack_2d8._8_4_;
      uVar3 = auStack_2d8._12_4_;
      fStack_208 = fVar50 * _DAT_142e36f60 + fVar42 * _DAT_142e36f60;
      fStack_204 = fVar61 * _UNK_142e36f64 + fVar65 * _UNK_142e36f64;
      fStack_200 = _UNK_142e36f68 * 0.0 + _UNK_142e36f68 * 0.0;
      fStack_1fc = _UNK_142e36f6c * 0.0 + _UNK_142e36f6c * 0.0;
      fVar65 = (float)auStack_2d8._0_4_ * _DAT_142e36f50 + (float)auStack_2b8._0_4_ * _DAT_142e36f50
      ;
      lVar20 = *plStack_1b0;
      uVar21 = plStack_1b0[1];
      bVar17 = (byte)(uVar24 >> 0x39);
      auVar39 = ZEXT216(CONCAT11(bVar17,bVar17));
      auVar39 = pshuflw(auVar39,auVar39,0);
      plVar28 = (longlong *)0x0;
      goto LAB_1408cbdea;
    }
    uVar31 = (ushort)(uVar19 - 1) & (ushort)uVar19;
    uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar31);
  }
  auVar46[0] = -(auVar40[0] == -1);
  auVar46[1] = -(auVar40[1] == -1);
  auVar46[2] = -(auVar40[2] == -1);
  auVar46[3] = -(auVar40[3] == -1);
  auVar46[4] = -(auVar40[4] == -1);
  auVar46[5] = -(auVar40[5] == -1);
  auVar46[6] = -(auVar40[6] == -1);
  auVar46[7] = -(auVar40[7] == -1);
  auVar46[8] = -(auVar40[8] == -1);
  auVar46[9] = -(auVar40[9] == -1);
  auVar46[10] = -(auVar40[10] == -1);
  auVar46[0xb] = -(auVar40[0xb] == -1);
  auVar46[0xc] = -(auVar40[0xc] == -1);
  auVar46[0xd] = -(auVar40[0xd] == -1);
  auVar46[0xe] = -(auVar40[0xe] == -1);
  auVar46[0xf] = -(auVar40[0xf] == -1);
  if ((((((((((((((((SUB161(auVar46 >> 7,0) & 1) != 0 || (SUB161(auVar46 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar46 >> 0x17,0) & 1) != 0) || (SUB161(auVar46 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar46 >> 0x27,0) & 1) != 0) || (SUB161(auVar46 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar46 >> 0x37,0) & 1) != 0) || (SUB161(auVar46 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar46 >> 0x47,0) & 1) != 0) || (SUB161(auVar46 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar46 >> 0x57,0) & 1) != 0) || (SUB161(auVar46 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar46 >> 0x67,0) & 1) != 0) || (SUB161(auVar46 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar46 >> 0x77,0) & 1) != 0) || auVar46[0xf] < '\0') goto LAB_1408cd64a;
  uVar24 = uVar24 + lVar33 + 0x10;
  lVar33 = lVar33 + 0x10;
  goto LAB_1408cba92;
LAB_1408cbdea:
  uVar24 = uVar24 & uVar21;
  auVar40 = *(undefined1 (*) [16])(lVar20 + uVar24);
  auVar55[0] = -(auVar40[0] == auVar39[0]);
  auVar55[1] = -(auVar40[1] == auVar39[1]);
  auVar55[2] = -(auVar40[2] == auVar39[2]);
  auVar55[3] = -(auVar40[3] == auVar39[3]);
  auVar55[4] = -(auVar40[4] == auVar39[4]);
  auVar55[5] = -(auVar40[5] == auVar39[5]);
  auVar55[6] = -(auVar40[6] == auVar39[6]);
  auVar55[7] = -(auVar40[7] == auVar39[7]);
  auVar55[8] = -(auVar40[8] == auVar39[0]);
  auVar55[9] = -(auVar40[9] == auVar39[1]);
  auVar55[10] = -(auVar40[10] == auVar39[2]);
  auVar55[0xb] = -(auVar40[0xb] == auVar39[3]);
  auVar55[0xc] = -(auVar40[0xc] == auVar39[4]);
  auVar55[0xd] = -(auVar40[0xd] == auVar39[5]);
  auVar55[0xe] = -(auVar40[0xe] == auVar39[6]);
  auVar55[0xf] = -(auVar40[0xf] == auVar39[7]);
  uVar31 = (ushort)(SUB161(auVar55 >> 7,0) & 1) | (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe | (ushort)(auVar55[0xf] >> 7) << 0xf;
  uVar19 = (uint)uVar31;
  if (uVar31 != 0) {
    if (cStack_110 == '\x1a') {
      plStack_118 = (longlong *)CONCAT71(plStack_118._1_7_,0x1a);
      do {
        uVar36 = 0;
        for (uVar13 = uVar19; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
          uVar36 = uVar36 + 1;
        }
        uVar32 = uVar36 + uVar24 & uVar21;
        if (*(char *)(lVar20 + -0x48 + uVar32 * -0x48) == '\x1a') goto LAB_1408cbed5;
        uVar31 = (ushort)(uVar19 - 1) & (ushort)uVar19;
        uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar31);
      } while (uVar31 != 0);
    }
    else {
      uStack_1a8._0_4_ = (float)CONCAT31(uStack_1a8._1_3_,cStack_10f);
      do {
        uVar36 = 0;
        for (uVar13 = uVar19; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
          uVar36 = uVar36 + 1;
        }
        uVar32 = uVar36 + uVar24 & uVar21;
        cVar16 = *(char *)(lVar20 + -0x48 + uVar32 * -0x48);
        uStack_1d8 = plVar28;
        if (((cVar16 != '\x1a') && (cStack_110 == cVar16)) &&
           (cStack_10f == *(char *)(lVar20 + uVar32 * -0x48 + -0x47))) goto LAB_1408cbed5;
        uVar31 = (ushort)(uVar19 - 1) & (ushort)uVar19;
        uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar31);
      } while (uVar31 != 0);
    }
  }
  auVar47[0] = -(auVar40[0] == -1);
  auVar47[1] = -(auVar40[1] == -1);
  auVar47[2] = -(auVar40[2] == -1);
  auVar47[3] = -(auVar40[3] == -1);
  auVar47[4] = -(auVar40[4] == -1);
  auVar47[5] = -(auVar40[5] == -1);
  auVar47[6] = -(auVar40[6] == -1);
  auVar47[7] = -(auVar40[7] == -1);
  auVar47[8] = -(auVar40[8] == -1);
  auVar47[9] = -(auVar40[9] == -1);
  auVar47[10] = -(auVar40[10] == -1);
  auVar47[0xb] = -(auVar40[0xb] == -1);
  auVar47[0xc] = -(auVar40[0xc] == -1);
  auVar47[0xd] = -(auVar40[0xd] == -1);
  auVar47[0xe] = -(auVar40[0xe] == -1);
  auVar47[0xf] = -(auVar40[0xf] == -1);
  if ((((((((((((((((SUB161(auVar47 >> 7,0) & 1) != 0 || (SUB161(auVar47 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar47 >> 0x17,0) & 1) != 0) || (SUB161(auVar47 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar47 >> 0x27,0) & 1) != 0) || (SUB161(auVar47 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar47 >> 0x37,0) & 1) != 0) || (SUB161(auVar47 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar47 >> 0x47,0) & 1) != 0) || (SUB161(auVar47 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar47 >> 0x57,0) & 1) != 0) || (SUB161(auVar47 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar47 >> 0x67,0) & 1) != 0) || (SUB161(auVar47 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar47 >> 0x77,0) & 1) != 0) || auVar47[0xf] < '\0') {
LAB_1408cd668:
    uStack_168 = &cStack_110;
    uStack_160._0_4_ = 4.3963776;
    uStack_160._4_4_ = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143017c05,&uStack_168,&UNK_143017c38);
  }
  uVar24 = (longlong)plVar28 + uVar24 + 0x10;
  plVar28 = plVar28 + 2;
  goto LAB_1408cbdea;
LAB_1408cbed5:
  plVar28 = *(longlong **)(lVar20 + -0x28 + uVar32 * -0x48);
  LOCK();
  lVar33 = *plVar28;
  *plVar28 = *plVar28 + 1;
  UNLOCK();
  if (*plVar28 != 0 && SCARRY8(lVar33,1) == *plVar28 < 0) {
    uStack_f1 = 1;
    plStack_270 = plVar28;
    cVar16 = pdb_1409012c0(CONCAT71((int7)((ulonglong)lVar20 >> 8),9),uStack_210);
    uStack_f1 = 1;
    cStack_110 = pdb_140c44ba0(uStack_178);
    cStack_10f = cVar16;
    if (plStack_1b0[9] != 0) {
      uStack_f1 = 1;
      uVar24 = pdb_1413f0300(plStack_320,&cStack_110);
      lVar20 = plStack_1b0[6];
      uVar21 = plStack_1b0[7];
      bVar17 = (byte)(uVar24 >> 0x39);
      auVar39 = ZEXT216(CONCAT11(bVar17,bVar17));
      auVar39 = pshuflw(auVar39,auVar39,0);
      uStack_1a8 = 0;
      while( true ) {
        uVar24 = uVar24 & uVar21;
        auVar40 = *(undefined1 (*) [16])(lVar20 + uVar24);
        auVar56[0] = -(auVar40[0] == auVar39[0]);
        auVar56[1] = -(auVar40[1] == auVar39[1]);
        auVar56[2] = -(auVar40[2] == auVar39[2]);
        auVar56[3] = -(auVar40[3] == auVar39[3]);
        auVar56[4] = -(auVar40[4] == auVar39[4]);
        auVar56[5] = -(auVar40[5] == auVar39[5]);
        auVar56[6] = -(auVar40[6] == auVar39[6]);
        auVar56[7] = -(auVar40[7] == auVar39[7]);
        auVar56[8] = -(auVar40[8] == auVar39[0]);
        auVar56[9] = -(auVar40[9] == auVar39[1]);
        auVar56[10] = -(auVar40[10] == auVar39[2]);
        auVar56[0xb] = -(auVar40[0xb] == auVar39[3]);
        auVar56[0xc] = -(auVar40[0xc] == auVar39[4]);
        auVar56[0xd] = -(auVar40[0xd] == auVar39[5]);
        auVar56[0xe] = -(auVar40[0xe] == auVar39[6]);
        auVar56[0xf] = -(auVar40[0xf] == auVar39[7]);
        uVar31 = (ushort)(SUB161(auVar56 >> 7,0) & 1) | (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe | (ushort)(auVar56[0xf] >> 7) << 0xf
        ;
        uVar19 = (uint)uVar31;
        if (uVar31 != 0) {
          uStack_1d8 = plVar28;
          if (cStack_110 == '\x1a') {
            do {
              uVar36 = 0;
              for (uVar13 = uVar19; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
                uVar36 = uVar36 + 1;
              }
              uVar32 = uVar36 + uVar24 & uVar21;
              if (*(char *)(lVar20 + -0x48 + uVar32 * -0x48) == '\x1a') goto LAB_1408cc080;
              uVar31 = (ushort)(uVar19 - 1) & (ushort)uVar19;
              uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar31);
            } while (uVar31 != 0);
          }
          else {
            plStack_118 = (longlong *)CONCAT71(plStack_118._1_7_,cStack_10f);
            do {
              uVar36 = 0;
              for (uVar13 = uVar19; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
                uVar36 = uVar36 + 1;
              }
              uVar32 = uVar36 + uVar24 & uVar21;
              cVar16 = *(char *)(lVar20 + -0x48 + uVar32 * -0x48);
              if (((cVar16 != '\x1a') && (cStack_110 == cVar16)) &&
                 (cStack_10f == *(char *)(lVar20 + uVar32 * -0x48 + -0x47))) goto LAB_1408cc080;
              uVar31 = (ushort)(uVar19 - 1) & (ushort)uVar19;
              uVar19 = CONCAT22((short)(uVar19 - 1 >> 0x10),uVar31);
            } while (uVar31 != 0);
          }
        }
        auVar48[0] = -(auVar40[0] == -1);
        auVar48[1] = -(auVar40[1] == -1);
        auVar48[2] = -(auVar40[2] == -1);
        auVar48[3] = -(auVar40[3] == -1);
        auVar48[4] = -(auVar40[4] == -1);
        auVar48[5] = -(auVar40[5] == -1);
        auVar48[6] = -(auVar40[6] == -1);
        auVar48[7] = -(auVar40[7] == -1);
        auVar48[8] = -(auVar40[8] == -1);
        auVar48[9] = -(auVar40[9] == -1);
        auVar48[10] = -(auVar40[10] == -1);
        auVar48[0xb] = -(auVar40[0xb] == -1);
        auVar48[0xc] = -(auVar40[0xc] == -1);
        auVar48[0xd] = -(auVar40[0xd] == -1);
        auVar48[0xe] = -(auVar40[0xe] == -1);
        auVar48[0xf] = -(auVar40[0xf] == -1);
        if ((((((((((((((((SUB161(auVar48 >> 7,0) & 1) != 0 || (SUB161(auVar48 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar48 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar48 >> 0x1f,0) & 1) != 0) || (SUB161(auVar48 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar48 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar48 >> 0x37,0) & 1) != 0) || (SUB161(auVar48 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar48 >> 0x47,0) & 1) != 0) || (SUB161(auVar48 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar48 >> 0x57,0) & 1) != 0) || (SUB161(auVar48 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar48 >> 0x67,0) & 1) != 0) || (SUB161(auVar48 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar48 >> 0x77,0) & 1) != 0) || auVar48[0xf] < '\0') break;
        uVar24 = uVar24 + uStack_1a8 + 0x10;
        uStack_1a8 = uStack_1a8 + 0x10;
      }
    }
    uStack_168 = &cStack_110;
    uStack_160._0_4_ = 4.3963776;
    uStack_160._4_4_ = 1.4013e-45;
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143017c05,&uStack_168,&UNK_143017c50);
  }
  goto LAB_1408cd853;
LAB_1408cd64a:
  pdb_142dc8110(&UNK_143017b58,0x16,&UNK_143017d20);
  goto LAB_1408cd853;
LAB_1408cc080:
  plVar28 = *(longlong **)(lVar20 + -0x28 + uVar32 * -0x48);
  LOCK();
  lVar20 = *plVar28;
  *plVar28 = *plVar28 + 1;
  UNLOCK();
  if (*plVar28 != 0 && SCARRY8(lVar20,1) == *plVar28 < 0) {
    uStack_f4 = 1;
    plStack_360 = plVar28;
    plStack_118 = plVar28;
    pdb_140df4150(&cStack_110,&uStack_2f8);
    plVar28 = plStack_100;
    fVar42 = fStack_108 * _DAT_142e378e0 * _DAT_142e36f60;
    fVar50 = fStack_108 * _UNK_142e378e4 * _UNK_142e36f64;
    fVar37 = (float)uStack_1e0 * (float)uStack_1e0;
    fStack_29c = uStack_1e0._4_4_ * uStack_1e0._4_4_;
    fVar61 = uStack_1e8._4_4_ * uStack_1e8._4_4_ + (float)uStack_1e8 * (float)uStack_1e8;
    fStack_2a8 = fStack_29c - (fVar61 + fVar37);
    fStack_2a4 = fStack_29c - (fVar61 + fVar37);
    fStack_2a0 = fStack_29c - (fVar61 + fVar37);
    fStack_29c = fStack_29c - (fVar61 + fVar37);
    fVar61 = (float)uStack_1e0 * fVar50 + uStack_1e8._4_4_ * fVar42 + (float)uStack_1e8 * fVar42;
    fVar61 = fVar61 + fVar61;
    fStack_298 = (float)uStack_1e0;
    fStack_294 = (float)uStack_1e8;
    fStack_290 = uStack_1e8._4_4_;
    fStack_28c = uStack_1e0._4_4_;
    fStack_288 = uStack_1e0._4_4_ + uStack_1e0._4_4_;
    uStack_260 = CONCAT44(fVar65 + (fVar42 * (float)uStack_1e0 - fVar50 * (float)uStack_1e8) *
                                   fStack_288 + fVar61 * uStack_1e8._4_4_ + fStack_2a4 * fVar42,
                          fStack_208 +
                          (fVar50 * uStack_1e8._4_4_ - fVar42 * (float)uStack_1e0) * fStack_288 +
                          fVar61 * (float)uStack_1e8 + fStack_2a8 * fVar42);
    uStack_1a8._0_4_ = fStack_204;
    uStack_1a8._4_4_ = fStack_204;
    fStack_1a0 = fStack_1fc;
    fStack_19c = fStack_1fc;
    fStack_258 = (fVar42 * (float)uStack_1e8 - fVar42 * uStack_1e8._4_4_) * fStack_288 +
                 fVar61 * (float)uStack_1e0 + fStack_2a0 * fVar50 + fStack_204;
    uStack_168._0_4_ = (float)uStack_1e8;
    uStack_168._4_4_ = uStack_1e8._4_4_;
    uStack_160._0_4_ = (float)uStack_1e0;
    uStack_160._4_4_ = uStack_1e0._4_4_;
    uStack_f4 = 0;
    puVar25 = &uStack_168;
    fStack_284 = fStack_288;
    fStack_280 = fStack_288;
    fStack_27c = fStack_288;
    pdb_1408f3120(plStack_100,uStack_1d8,plStack_118,&uStack_260,puVar25);
    uVar71 = (undefined4)((ulonglong)puVar25 >> 0x20);
    if (*plVar28 != 0 || plVar28[1] != 0) goto LAB_1408cd725;
    plVar28[1] = 0;
    *plVar28 = 1;
    plVar28[2] = uStack_1e8;
    plVar28[3] = (longlong)uStack_1e0;
    fStack_234 = fStack_208;
    *(float *)(plVar28 + 4) = fStack_208;
    uStack_1d8 = (longlong *)CONCAT44(uVar72,fVar65);
    uStack_1d0 = uVar2;
    uStack_1cc = uVar3;
    *(float *)((longlong)plVar28 + 0x24) = fVar65;
    *(float *)(plVar28 + 5) = (float)uStack_1a8;
    *(undefined8 *)((longlong)plVar28 + 0x2c) = 0x3f8000003f800000;
    *(undefined4 *)((longlong)plVar28 + 0x34) = 0x3f800000;
    uVar19 = (int)uStack_178 - 1;
    if (2 < (byte)uVar19) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_143017c68,0x28,&UNK_143017f58);
    }
    uVar19 = uVar19 & 0xff;
    lStack_218 = (longlong)*(int *)(&UNK_143018100 + (ulonglong)uVar19 * 4);
    puVar25 = (undefined8 *)pdb_140901130(plStack_180,&UNK_143017dc0);
    uStack_2c8 = *puVar25;
    uStack_2c0 = 0;
    pdb_14007ee60();
    uVar19 = uVar19 << 2;
    fVar65 = *(float *)(&UNK_14301810c + uVar19);
    uVar72 = *(undefined4 *)(&UNK_143018118 + uVar19);
    uVar2 = *(undefined4 *)(&UNK_143018124 + uVar19);
    fVar42 = *(float *)(&UNK_143018130 + uVar19);
    uVar3 = *(undefined4 *)(&UNK_14301813c + uVar19);
    uVar4 = *(undefined4 *)(&UNK_143018148 + uVar19);
    fVar50 = *(float *)(&UNK_143018154 + uVar19);
    uVar5 = *(undefined4 *)(&UNK_143018160 + uVar19);
    uVar9 = *(undefined4 *)(&UNK_14301816c + uVar19);
    puVar26 = (undefined4 *)pdb_140901130(plStack_180,&UNK_143017f40);
    plStack_118 = plStack_190 + 0x19;
    fVar61 = (float)puVar26[1];
    uVar6 = *puVar26;
    lVar20 = plStack_100[0x1b];
    if (lVar20 == plStack_100[0x19]) {
      pdb_142d8d5c0(plStack_118);
    }
    lVar33 = plStack_100[0x1a];
    *(undefined4 *)(lVar33 + lVar20 * 0x14) = uVar6;
    *(float *)(lVar33 + 4 + lVar20 * 0x14) = fVar65 + fVar61;
    *(undefined4 *)(lVar33 + 8 + lVar20 * 0x14) = uVar72;
    *(undefined4 *)(lVar33 + 0xc + lVar20 * 0x14) = uVar2;
    *(undefined1 *)(lVar33 + 0x10 + lVar20 * 0x14) = 0;
    plStack_100[0x1b] = lVar20 + 1;
    puVar26 = (undefined4 *)pdb_140901130(plStack_180,&UNK_143017f40);
    fVar65 = (float)puVar26[1];
    uVar72 = *puVar26;
    lVar20 = plStack_100[0x1b];
    if (lVar20 == plStack_100[0x19]) {
      pdb_142d8d5c0(plStack_118);
    }
    lVar33 = plStack_100[0x1a];
    *(undefined4 *)(lVar33 + lVar20 * 0x14) = uVar72;
    *(float *)(lVar33 + 4 + lVar20 * 0x14) = fVar42 + fVar65;
    *(undefined4 *)(lVar33 + 8 + lVar20 * 0x14) = uVar3;
    *(undefined4 *)(lVar33 + 0xc + lVar20 * 0x14) = uVar4;
    *(undefined1 *)(lVar33 + 0x10 + lVar20 * 0x14) = 0;
    plStack_100[0x1b] = lVar20 + 1;
    puVar26 = (undefined4 *)pdb_140901130(plStack_180,&UNK_143017f40);
    fVar65 = (float)puVar26[1];
    uVar72 = *puVar26;
    lVar20 = plStack_100[0x1b];
    if (lVar20 == plStack_100[0x19]) {
      pdb_142d8d5c0(plStack_118);
    }
    lVar33 = plStack_100[0x1a];
    *(undefined4 *)(lVar33 + lVar20 * 0x14) = uVar72;
    *(float *)(lVar33 + 4 + lVar20 * 0x14) = fVar50 + fVar65;
    *(undefined4 *)(lVar33 + 8 + lVar20 * 0x14) = uVar5;
    *(undefined4 *)(lVar33 + 0xc + lVar20 * 0x14) = uVar9;
    *(undefined1 *)(lVar33 + 0x10 + lVar20 * 0x14) = 0;
    plStack_100[0x1b] = lVar20 + 1;
    plStack_118 = (longlong *)(lStack_170 + -9);
    cVar16 = pdb_1408ff980();
    if (cVar16 != '\0') {
      fVar66 = fStack_2a8 * _DAT_142e378f0;
      fVar67 = fStack_2a0 * _UNK_142e378f8;
      fVar65 = (float)uStack_1e8 * _DAT_142e378f0;
      fVar50 = uStack_1e8._4_4_ * _UNK_142e378f4;
      fVar42 = (float)uStack_1e0 * _UNK_142e378f8;
      fVar41 = fStack_294 * _UNK_142e378f4;
      fVar51 = fStack_290 * _UNK_142e378f8;
      fVar61 = uStack_1e8._4_4_ * _UNK_143011b24;
      fVar37 = (float)uStack_1e0 * _UNK_143011b28;
      uStack_1b4 = CONCAT31(uStack_1b4._1_3_,1 < *(uint *)(lStack_170 + -0x50));
      lVar20 = plStack_100[0x24];
      if (lVar20 == plStack_100[0x22]) {
        pdb_142d8a7a0(plStack_190 + 0x22);
      }
      fVar42 = fVar42 + fVar50 + fVar65;
      fVar42 = fVar42 + fVar42;
      lVar33 = plStack_100[0x23];
      lVar29 = lVar20 * 0x20;
      puVar26 = (undefined4 *)(lVar33 + lVar29);
      *puVar26 = (float)uStack_2c8;
      puVar26[1] = uStack_2c8._4_4_;
      puVar26[2] = (fVar51 + fVar37) * fStack_288 + fVar66 + fVar42 * (float)uStack_1e8;
      puVar26[3] = (fVar41 + fVar61) * fStack_280 + fVar67 + fVar42 * (float)uStack_1e0;
      *(float *)(lVar33 + 0x10 + lVar29) = fStack_208;
      *(float *)(lVar33 + 0x14 + lVar29) = (float)uStack_1d8;
      *(float *)(lVar33 + 0x18 + lVar29) = (float)uStack_1a8;
      *(char *)(lVar33 + 0x1c + lVar29) = (char)uStack_178 + '\v';
      *(undefined1 *)(lVar33 + 0x1d + lVar29) = (undefined1)uStack_1b4;
      plStack_100[0x24] = lVar20 + 1;
    }
    uVar72 = *(undefined4 *)(&UNK_143017dd4 + uStack_1f0 * 8);
    puVar26 = (undefined4 *)pdb_140901130(plStack_180,&UNK_143017df0);
    uVar2 = *puVar26;
    pdb_140901130(plStack_180,&UNK_143017e08);
    bVar17 = pdb_140c42970();
    uVar21 = (ulonglong)bVar17;
    uVar69 = CONCAT44(uVar71,uVar72);
    pdb_140c428a0(&uStack_168,uVar2);
    lVar20 = plStack_100[0x1e];
    if (lVar20 == plStack_100[0x1c]) {
      pdb_142d8a7a0(plStack_190 + 0x1c);
    }
    lVar33 = plStack_100[0x1d];
    puVar25 = (undefined8 *)(lVar33 + 0x10 + lVar20 * 0x20);
    *puVar25 = uStack_158;
    puVar25[1] = CONCAT44(fStack_14c,CONCAT22(uStack_14e,uStack_150));
    puVar25 = (undefined8 *)(lVar33 + lVar20 * 0x20);
    *puVar25 = CONCAT44(uStack_168._4_4_,(float)uStack_168);
    puVar25[1] = CONCAT44(uStack_160._4_4_,(float)uStack_160);
    plStack_100[0x1e] = lVar20 + 1;
    plStack_190 = plStack_190 + 0x16;
    uStack_160._4_4_ = (float)((uint)uStack_160._4_4_ & 0xff000000);
    uStack_168._0_4_ = (float)((uint)(float)uStack_168 & 0xffffff);
    uStack_168._4_4_ = 0.0;
    uStack_160._0_4_ = 0.0;
    fStack_108 = 0.0;
    uStack_104 = 0;
    cStack_110 = SUB41((float)uStack_168,0);
    cStack_10f = (char)((uint)(float)uStack_168 >> 8);
    uStack_10e = (uint5)(ushort)((uint)(float)uStack_168 >> 0x10);
    uStack_109 = 0;
    lVar20 = plStack_100[0x18];
    if (lVar20 == plStack_100[0x16]) {
      pdb_142d8ddd0(plStack_190);
    }
    lVar33 = plStack_100[0x17];
    lVar29 = lVar20 * 0x170;
    *(undefined8 *)(lVar33 + lVar29) = 0;
    *(undefined8 *)(lVar33 + 0x10 + lVar29) = 0;
    *(undefined8 *)(lVar33 + 0x20 + lVar29) = 0;
    *(undefined8 *)(lVar33 + 0x30 + lVar29) = 0;
    *(undefined4 *)(lVar33 + 0x40 + lVar29) = 0;
    *(undefined4 *)(lVar33 + 0x50 + lVar29) = 0;
    *(undefined4 *)(lVar33 + 0x60 + lVar29) = 0;
    *(undefined4 *)(lVar33 + 0x70 + lVar29) = 2;
    *(undefined **)(lVar33 + 0x90 + lVar29) = &UNK_143018100 + lStack_218;
    *(undefined8 *)(lVar33 + 0x98 + lVar29) = 0x24;
    *(undefined **)(lVar33 + 0xa0 + lVar29) = &UNK_14330dd11;
    *(undefined8 *)(lVar33 + 0xa8 + lVar29) = 0x1e;
    plVar28 = (longlong *)(lVar33 + 0xb0 + lVar29);
    *plVar28 = uStack_1e8;
    plVar28[1] = (longlong)uStack_1e0;
    *(float *)(lVar33 + 0xc0 + lVar29) = fStack_208;
    *(float *)(lVar33 + 0xc4 + lVar29) = (float)uStack_1d8;
    *(float *)(lVar33 + 200 + lVar29) = (float)uStack_1a8;
    *(undefined8 *)(lVar33 + 0xcc + lVar29) = 0x3f8000003f800000;
    *(undefined4 *)(lVar33 + 0xd4 + lVar29) = 0x3f800000;
    *(undefined4 *)(lVar33 + 0xe0 + lVar29) = 1;
    *(int *)(lVar33 + 0xe4 + lVar29) = iStack_1b8;
    *(undefined4 *)(lVar33 + 0xe8 + lVar29) = 0;
    *(undefined1 *)(lVar33 + 0x105 + lVar29) = 2;
    *(undefined4 *)(lVar33 + 0x108 + lVar29) = 0;
    *(undefined1 *)(lVar33 + 0x15c + lVar29) = 2;
    uVar14 = CONCAT35(uStack_104,CONCAT41(fStack_108,uStack_109));
    *(undefined8 *)(lVar33 + 0x164 + lVar29) = uVar14;
    *(ulonglong *)(lVar33 + 0x15d + lVar29) =
         CONCAT17(uStack_109,CONCAT52(uStack_10e,CONCAT11(cStack_10f,cStack_110)));
    *(undefined1 *)(lVar33 + 0x16c + lVar29) = 2;
    *(undefined1 *)(lVar33 + 0x16e + lVar29) = uStack_f2;
    *(undefined1 *)(lVar33 + 0x16f + lVar29) = 1;
    plStack_100[0x18] = lVar20 + 1;
    bVar17 = pdb_1408ff990(lStack_170 + -5,uStack_f2,uVar14,plStack_100,uVar69,uVar21);
    uVar18 = pdb_1408ff980(plStack_118);
    uStack_178 = CONCAT71(uStack_178._1_7_,uVar18);
    cVar16 = pdb_1408ff980(plStack_118);
    fVar65 = _DAT_143010290;
    if (((cVar16 != '\0') && (*(uint *)(lStack_170 + -0x50) < 2)) &&
       (0.0 < *(float *)(lStack_170 + -0x14))) {
      fVar65 = (float)pdb_14092f940(lStack_220);
      fVar65 = fVar65 + _DAT_143017a60;
    }
    fVar42 = (float)uStack_2e8;
    fVar50 = (float)uStack_2e8 * _DAT_142e36f50;
    uVar21 = uStack_178 & 0xff;
    if (bVar17 != 0) {
      uVar21 = 1;
    }
    plStack_118 = (longlong *)CONCAT71(plStack_118._1_7_,(bVar17 ^ 1) & (byte)uStack_178);
    auVar39._0_8_ = auStack_2b8._0_8_;
    auVar39._8_4_ = auStack_2b8._4_4_;
    auVar39._12_4_ = auStack_378._4_4_;
    auVar40._8_8_ = auVar39._8_8_;
    auVar40._0_4_ = auStack_2b8._0_4_;
    auVar40._4_4_ = auStack_378._0_4_;
    auVar49._0_4_ = (uint)(auVar40._0_4_ >> 0x1f) >> 1;
    auVar49._4_4_ = (uint)(auStack_378._0_4_ >> 0x1f) >> 1;
    auVar49._8_4_ = (uint)(auStack_2b8._4_4_ >> 0x1f) >> 1;
    auVar49._12_4_ = (uint)(auStack_378._4_4_ >> 0x1f) >> 1;
    auVar44 = auStack_378._0_12_;
    auVar39 = auStack_2b8;
    if (SUB164(auVar49 ^ auVar40,0) <= SUB164(auVar49 ^ auVar40,4)) {
      auVar44 = auStack_2b8._0_12_;
      auVar39 = auStack_378;
    }
    auVar64._0_8_ = auVar44._0_8_;
    auVar64._8_4_ = auVar44._4_4_;
    auVar64._12_4_ = auStack_2d8._4_4_;
    auVar63._8_8_ = auVar64._8_8_;
    auVar63._0_4_ = auVar44._0_4_;
    auVar63._4_4_ = auStack_2d8._0_4_;
    auVar57._0_4_ = (uint)(auVar63._0_4_ >> 0x1f) >> 1;
    auVar57._4_4_ = (uint)(auStack_2d8._0_4_ >> 0x1f) >> 1;
    auVar57._8_4_ = (uint)(auVar44._4_4_ >> 0x1f) >> 1;
    auVar57._12_4_ = (uint)(auStack_2d8._4_4_ >> 0x1f) >> 1;
    iVar60 = SUB164(auVar57 ^ auVar63,4);
    if ((int)((uint)((int)auVar39._0_4_ >> 0x1f) >> 1 ^ auVar39._0_4_) <= iVar60) {
      auVar39 = auStack_2d8;
    }
    auVar52 = auStack_2d8._0_12_;
    if (SUB164(auVar57 ^ auVar63,0) <= iVar60) {
      auVar52 = auVar44;
    }
    fVar37 = auVar52._0_4_ + *(float *)(&UNK_143017e9c + uStack_1f0 * 8);
    fVar61 = fVar65;
    if (fVar65 <= fVar37) {
      fVar61 = fVar37;
    }
    fVar61 = (auVar39._0_4_ + *(float *)(&UNK_143017ea0 + uStack_1f0 * 8)) -
             (float)(-(uint)NAN(fVar37) & (uint)fVar65 | ~-(uint)NAN(fVar37) & (uint)fVar61);
    if (fVar61 <= 0.0) {
      fVar61 = 0.0;
    }
    if (_DAT_142e37848 <= fVar61) {
      lStack_220 = CONCAT44(lStack_220._4_4_,(int)uVar21);
      lStack_218 = CONCAT44(lStack_218._4_4_,*(undefined4 *)((longlong)plStack_120 + -0xc));
      uStack_1b4 = *(undefined4 *)(lStack_170 + -0x34);
      uStack_300 = *(undefined8 *)(&UNK_143018170 + uStack_1f0 * 8);
      uStack_160._4_4_ = (float)((uint)uStack_160._4_4_ & 0xff000000);
      uStack_168._0_4_ = (float)((uint)(float)uStack_168 & 0xffffff);
      uStack_168._4_4_ = 0.0;
      uStack_160._0_4_ = 0.0;
      fStack_108 = 0.0;
      uStack_104 = 0;
      cStack_110 = SUB41((float)uStack_168,0);
      cStack_10f = (char)((uint)(float)uStack_168 >> 8);
      uStack_10e = (uint5)(ushort)((uint)(float)uStack_168 >> 0x10);
      uStack_109 = 0;
      lVar20 = plStack_100[0x18];
      if (lVar20 == plStack_100[0x16]) {
        pdb_142d8ddd0(plStack_190,uVar21,plStack_100,fStack_184);
      }
      lVar33 = plStack_100[0x17];
      lVar29 = lVar20 * 0x170;
      *(undefined8 *)(lVar33 + lVar29) = 0;
      *(undefined8 *)(lVar33 + 0x10 + lVar29) = 0;
      *(undefined8 *)(lVar33 + 0x20 + lVar29) = 0;
      *(undefined8 *)(lVar33 + 0x30 + lVar29) = 0;
      *(undefined4 *)(lVar33 + 0x40 + lVar29) = 0;
      *(undefined4 *)(lVar33 + 0x50 + lVar29) = 0;
      *(undefined4 *)(lVar33 + 0x60 + lVar29) = 0;
      *(undefined4 *)(lVar33 + 0x70 + lVar29) = 2;
      *(undefined8 *)(lVar33 + 0x90 + lVar29) = uStack_300;
      *(undefined8 *)(lVar33 + 0x98 + lVar29) = 0x28;
      *(undefined **)(lVar33 + 0xa0 + lVar29) = &UNK_14330dc70;
      *(undefined8 *)(lVar33 + 0xa8 + lVar29) = 0x26;
      plVar28 = (longlong *)(lVar33 + 0xb0 + lVar29);
      *plVar28 = uStack_1e8;
      plVar28[1] = (longlong)uStack_1e0;
      *(float *)(lVar33 + 0xc0 + lVar29) = fStack_208;
      *(float *)(lVar33 + 0xc4 + lVar29) = (float)uStack_1d8;
      *(float *)(lVar33 + 200 + lVar29) = (float)uStack_1a8;
      *(undefined8 *)(lVar33 + 0xcc + lVar29) = 0x3f8000003f800000;
      *(undefined4 *)(lVar33 + 0xd4 + lVar29) = 0x3f800000;
      *(undefined4 *)(lVar33 + 0xe0 + lVar29) = 1;
      *(int *)(lVar33 + 0xe4 + lVar29) = iStack_1b8;
      *(undefined4 *)(lVar33 + 0xe8 + lVar29) = 0;
      *(float *)(lVar33 + 0xf0 + lVar29) = (float)uStack_2c8 - fVar50;
      *(float *)(lVar33 + 0xf4 + lVar29) = fVar50 + (float)uStack_2c8;
      *(undefined4 *)(lVar33 + 0xf8 + lVar29) = (undefined4)lStack_218;
      *(undefined4 *)(lVar33 + 0xfc + lVar29) = uStack_1b4;
      *(float *)(lVar33 + 0x100 + lVar29) = fVar42;
      *(char *)(lVar33 + 0x104 + lVar29) = (char)lStack_220;
      *(undefined1 *)(lVar33 + 0x105 + lVar29) = plStack_118._0_1_;
      *(undefined4 *)(lVar33 + 0x108 + lVar29) = 0;
      *(float *)(lVar33 + 0x11c + lVar29) = fStack_24c;
      *(undefined4 *)(lVar33 + 0x120 + lVar29) = auStack_2b8._0_4_;
      *(float *)(lVar33 + 0x124 + lVar29) = fStack_248;
      *(undefined8 *)(lVar33 + 0x128 + lVar29) = uVar23;
      *(float *)(lVar33 + 0x130 + lVar29) = fStack_23c;
      *(undefined4 *)(lVar33 + 0x134 + lVar29) = auStack_378._0_4_;
      *(float *)(lVar33 + 0x138 + lVar29) = fStack_238;
      *(undefined1 (**) [16])(lVar33 + 0x13c + lVar29) = pauVar70;
      *(float *)(lVar33 + 0x144 + lVar29) = fStack_244;
      *(undefined4 *)(lVar33 + 0x148 + lVar29) = auStack_2d8._0_4_;
      *(float *)(lVar33 + 0x14c + lVar29) = fStack_240;
      *(undefined8 *)(lVar33 + 0x150 + lVar29) = uVar15;
      *(float *)(lVar33 + 0x158 + lVar29) = fVar65;
      *(byte *)(lVar33 + 0x15c + lVar29) = (byte)uStack_178;
      *(ulonglong *)(lVar33 + 0x164 + lVar29) = CONCAT35(uStack_104,CONCAT41(fStack_108,uStack_109))
      ;
      *(ulonglong *)(lVar33 + 0x15d + lVar29) =
           CONCAT17(uStack_109,CONCAT52(uStack_10e,CONCAT11(cStack_10f,cStack_110)));
      *(undefined1 *)(lVar33 + 0x16c + lVar29) = 2;
      *(undefined1 *)(lVar33 + 0x16e + lVar29) = uStack_f2;
      *(undefined1 *)(lVar33 + 0x16f + lVar29) = 0;
      plStack_100[0x18] = lVar20 + 1;
    }
    uStack_168._0_4_ = (float)uStack_1e8;
    uStack_168._4_4_ = (float)((ulonglong)uStack_1e8 >> 0x20);
    uStack_160._0_4_ = SUB84(uStack_1e0,0);
    uStack_160._4_4_ = (float)((ulonglong)uStack_1e0 >> 0x20);
    uStack_158 = (code *)CONCAT44((float)uStack_1d8,fStack_208);
    uStack_150 = SUB42((float)uStack_1a8,0);
    uStack_14e = (undefined2)((uint)(float)uStack_1a8 >> 0x10);
    fStack_14c = 1.0;
    uStack_148 = 0x3f800000;
    fStack_144 = 1.0;
    pauVar70 = pauStack_228;
    pdb_1408ce300(plStack_180,&uStack_168,plStack_100,fStack_184,pauStack_228,uStack_318);
    uVar72 = (undefined4)((ulonglong)pauVar70 >> 0x20);
    lVar20 = pdb_1409010b0(plStack_120 + -10);
    if (*(char *)(lVar20 + 0x21) == '\x01') {
      fVar65 = (float)uStack_2e8;
      fVar42 = (float)uStack_2e0;
      fVar50 = uStack_2e0._4_4_;
      uStack_160 = (undefined1 (*) [16])(*(longlong *)(lStack_1f8 + 0x10) * 2);
      uStack_168._0_4_ = (float)*(undefined8 *)(lStack_1f8 + 8);
      uStack_168._4_4_ = (float)((ulonglong)*(undefined8 *)(lStack_1f8 + 8) >> 0x20);
      uStack_158 = *(code **)(lStack_1f8 + 0x50);
      fVar61 = (float)pdb_1402202d0(&uStack_168,CONCAT44(fStack_204,fStack_208),
                                    CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8));
      lVar20 = pdb_1406d0830(uStack_308);
      puVar27 = (undefined8 *)(lVar20 + 0x28);
      puVar25 = (undefined8 *)(lVar20 + 0x20);
      if (*(char *)(lVar20 + 0x298) == '\0') {
        puVar27 = (undefined8 *)(lVar20 + 0x10);
        puVar25 = (undefined8 *)(lVar20 + 8);
      }
      uStack_168._0_4_ = (float)*puVar25;
      uStack_168._4_4_ = (float)((ulonglong)*puVar25 >> 0x20);
      uStack_160._0_4_ = (float)*puVar27;
      uStack_160._4_4_ = (float)((ulonglong)*puVar27 >> 0x20);
      fVar37 = (float)pdb_140a7d8d0(&uStack_168,puVar25,(undefined8 *)(lVar20 + 0x20),
                                    (undefined8 *)(lVar20 + 0x10),CONCAT44(uVar72,0x43020000));
      if (fVar61 <= 0.0) {
        fVar61 = 0.0;
      }
      fVar42 = (fVar50 - fVar42) * _DAT_142e36f38 + (float)uStack_1d8;
      bVar11 = 0.0 < fVar37;
      bVar12 = fVar42 <= _DAT_142e3b1d8;
      if ((fVar42 + _DAT_142f60fec < fVar61) || (bVar12 && bVar11)) {
        fVar42 = (float)uStack_1e0 * _UNK_143017a58 +
                 uStack_1e8._4_4_ * _UNK_143017a54 + (float)uStack_1e8 * _DAT_143017a50;
        fVar42 = fVar42 + fVar42;
        fVar37 = uStack_1e8._4_4_ * 0.0;
        fVar41 = (float)uStack_1e0 * 0.0;
        fVar66 = (fStack_294 * _UNK_143017a54 - fVar37) * fStack_280 +
                 fVar42 * (float)uStack_1e0 + fStack_2a0 * _UNK_143017a58;
        fVar67 = (fStack_28c * _UNK_143017a5c - uStack_1e0._4_4_ * 0.0) * fStack_27c +
                 fVar42 * uStack_1e0._4_4_ + fStack_29c * _UNK_143017a5c;
        fVar50 = fStack_234 +
                 (fStack_290 * _UNK_143017a58 - fVar41) * fStack_288 +
                 fVar42 * (float)uStack_1e8 + fStack_2a8 * _DAT_143017a50;
        fVar51 = fVar66 + (float)uStack_1a8;
        uStack_160 = (undefined1 (*) [16])(*(longlong *)(lStack_1f8 + 0x10) * 2);
        uStack_168._0_4_ = (float)*(undefined8 *)(lStack_1f8 + 8);
        uStack_168._4_4_ = (float)((ulonglong)*(undefined8 *)(lStack_1f8 + 8) >> 0x20);
        uStack_158 = *(code **)(lStack_1f8 + 0x50);
        fVar42 = (float)pdb_1402202d0(&uStack_168);
        if (_DAT_142e3b1d8 < fVar61 - fVar42) {
          fVar38 = fVar65 * _DAT_142e36f50;
          fVar43 = fVar65 * 0.0 * _DAT_142e36f50;
          fVar62 = (float)uStack_1e0 * fVar43 +
                   uStack_1e8._4_4_ * fVar43 + (float)uStack_1e8 * fVar38;
          fVar62 = fVar62 + fVar62;
          fVar68 = (fVar43 * fStack_290 - fVar43 * (float)uStack_1e0) * fStack_288 +
                   fVar62 * (float)uStack_1e8 + fStack_2a8 * fVar38;
          auVar58._4_4_ = fVar67;
          auVar58._0_4_ = fVar51;
          auVar58._8_4_ = fVar66;
          auVar58._12_4_ = fVar67;
          auVar59._4_12_ = auVar58._4_12_;
          auVar59._0_4_ =
               fVar51 - ((fVar43 * fStack_294 - fVar38 * uStack_1e8._4_4_) * fStack_280 +
                        fVar62 * (float)uStack_1e0 + fStack_2a0 * fVar43);
          fVar51 = (float)pdb_14021fc10(lStack_1f8,fVar50 - fVar68,auVar59._0_8_);
          fVar66 = (float)pdb_14021fc10(lStack_1f8,fVar50 + fVar68);
          fVar50 = fVar66;
          if (fVar51 <= fVar66) {
            fVar50 = fVar51;
          }
          fVar51 = (float)(~-(uint)NAN(fVar51) & (uint)fVar50 | -(uint)NAN(fVar51) & (uint)fVar66);
          fVar50 = fVar42;
          if (fVar51 <= fVar42) {
            fVar50 = fVar51;
          }
          fVar42 = (float)(-(uint)NAN(fVar51) & (uint)fVar42 | ~-(uint)NAN(fVar51) & (uint)fVar50);
          if (!(bool)(~(bVar12 && bVar11) & _DAT_142e37838 <= fVar61 - fVar42)) {
            fVar50 = _DAT_143009bc0;
            if (!bVar12 || !bVar11) {
              fVar50 = fVar42;
            }
            fVar51 = (float)uStack_1e0 * _UNK_142e378f8 +
                     uStack_1e8._4_4_ * _UNK_142e378f4 + (float)uStack_1e8 * _DAT_142e378f0;
            fVar51 = fVar51 + fVar51;
            uStack_160._0_4_ =
                 fStack_288 * (fStack_290 * _UNK_142e378f8 - fVar41) +
                 fVar51 * (float)uStack_1e8 + fStack_2a8 * _DAT_142e378f0;
            fVar37 = fStack_280 * (fStack_294 * _UNK_142e378f4 - fVar37) +
                     fVar51 * (float)uStack_1e0 + fStack_2a0 * _UNK_142e378f8;
            uStack_160._4_4_ =
                 _DAT_142e36f28 / SQRT(fVar37 * fVar37 + (float)uStack_160 * (float)uStack_160);
            fVar42 = _DAT_143009bc0 - fVar42;
            uStack_160._0_4_ = uStack_160._4_4_ * (float)uStack_160;
            uStack_160._4_4_ = uStack_160._4_4_ * fVar37;
            uStack_168._0_4_ = fStack_208;
            uStack_168._4_4_ = fStack_204;
            uStack_158 = (code *)CONCAT44(fVar50,fVar61);
            if (fVar42 <= 0.0) {
              fVar42 = 0.0;
            }
            uStack_150 = SUB42(fVar42,0);
            uStack_14e = (undefined2)((uint)fVar42 >> 0x10);
            fStack_14c = fVar65;
            pdb_1408f3400(plStack_100);
            goto LAB_1408cb86f;
          }
        }
      }
      lVar20 = *(longlong *)(lStack_170 + -0x260);
      if (lVar20 == 1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143314ab0);
      }
      if (lVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143314a68,0x2d,&UNK_143314a98);
      }
      uStack_168._0_4_ = (float)*(undefined8 *)(lStack_170 + -0x268);
      uStack_168._4_4_ = (float)((ulonglong)*(undefined8 *)(lStack_170 + -0x268) >> 0x20);
      uStack_160._0_4_ = (float)lVar20;
      uStack_160._4_4_ = (float)((ulonglong)lVar20 >> 0x20);
      uStack_158 = pdb_140ade410;
      uStack_150 = 0;
      uStack_14e = 0;
      fStack_14c = 0.0;
      uStack_148 = 0;
      fStack_144 = 0.0;
      pdb_1414d3b90(&uStack_168);
      fVar65 = fStack_144;
      uVar24 = (ulonglong)uStack_148;
      uVar21 = *(ulonglong *)(lStack_170 + -0x260);
      if (uVar21 <= uVar24) goto LAB_1408cd834;
      uVar32 = uVar24 + 1;
      if (uVar21 <= uVar32) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(uVar32,uVar21,&UNK_14330d730);
      }
      lVar20 = *(longlong *)(lStack_170 + -0x268);
      fVar42 = *(float *)(lVar20 + 4 + uVar24 * 0xc);
      fVar50 = *(float *)(lVar20 + 4 + uVar32 * 0xc);
      fVar37 = _DAT_142e36f28 - fStack_144;
      uStack_160 = (undefined1 (*) [16])(*(longlong *)(lStack_1f8 + 0x10) * 2);
      uStack_168._0_4_ = (float)*(undefined8 *)(lStack_1f8 + 8);
      uStack_168._4_4_ = (float)((ulonglong)*(undefined8 *)(lStack_1f8 + 8) >> 0x20);
      uStack_158 = *(code **)(lStack_1f8 + 0x50);
      fVar61 = (float)pdb_1402202d0(&uStack_168,
                                    *(float *)(lVar20 + uVar32 * 0xc) * fStack_144 +
                                    *(float *)(lVar20 + uVar24 * 0xc) * fVar37,
                                    *(float *)(lVar20 + 8 + uVar32 * 0xc) * fStack_144 +
                                    *(float *)(lVar20 + 8 + uVar24 * 0xc) * fVar37);
      if (fVar61 + _DAT_142e3c608 < fVar65 * fVar50 + fVar37 * fVar42) {
        plStack_120 = *(longlong **)(&UNK_143018188 + uStack_1f0 * 8);
        uStack_160._4_4_ = (float)((uint)uStack_160._7_1_ << 0x18);
        uStack_168._0_4_ = (float)((uint)(float)uStack_168 & 0xffffff);
        uStack_168._4_4_ = 0.0;
        uStack_160._0_4_ = 0.0;
        fStack_108 = 0.0;
        uStack_104 = 0;
        cStack_110 = SUB41((float)uStack_168,0);
        cStack_10f = (char)((uint)(float)uStack_168 >> 8);
        uStack_10e = (uint5)(ushort)((uint)(float)uStack_168 >> 0x10);
        uStack_109 = 0;
        lVar20 = plStack_100[0x18];
        if (lVar20 == plStack_100[0x16]) {
          pdb_142d8ddd0(plStack_190);
        }
        lVar33 = plStack_100[0x17];
        lVar29 = lVar20 * 0x170;
        *(undefined8 *)(lVar33 + lVar29) = 0;
        *(undefined8 *)(lVar33 + 0x10 + lVar29) = 0;
        *(undefined8 *)(lVar33 + 0x20 + lVar29) = 0;
        *(undefined8 *)(lVar33 + 0x30 + lVar29) = 0;
        *(undefined4 *)(lVar33 + 0x40 + lVar29) = 0;
        *(undefined4 *)(lVar33 + 0x50 + lVar29) = 0;
        *(undefined4 *)(lVar33 + 0x60 + lVar29) = 0;
        *(undefined4 *)(lVar33 + 0x70 + lVar29) = 2;
        *(longlong **)(lVar33 + 0x90 + lVar29) = plStack_120;
        *(undefined8 *)(lVar33 + 0x98 + lVar29) = 0x2a;
        *(undefined **)(lVar33 + 0xa0 + lVar29) = &UNK_14330dc96;
        *(undefined8 *)(lVar33 + 0xa8 + lVar29) = 0x2b;
        plVar28 = (longlong *)(lVar33 + 0xb0 + lVar29);
        *plVar28 = uStack_1e8;
        plVar28[1] = (longlong)uStack_1e0;
        *(float *)(lVar33 + 0xc0 + lVar29) = fStack_208;
        *(float *)(lVar33 + 0xc4 + lVar29) = (float)uStack_1d8;
        *(float *)(lVar33 + 200 + lVar29) = (float)uStack_1a8;
        *(undefined8 *)(lVar33 + 0xcc + lVar29) = 0x3f8000003f800000;
        *(undefined4 *)(lVar33 + 0xd4 + lVar29) = 0x3f800000;
        *(undefined4 *)(lVar33 + 0xe0 + lVar29) = 1;
        *(int *)(lVar33 + 0xe4 + lVar29) = iStack_1b8;
        *(undefined4 *)(lVar33 + 0xe8 + lVar29) = 0;
        *(undefined1 *)(lVar33 + 0x105 + lVar29) = 2;
        *(undefined4 *)(lVar33 + 0x108 + lVar29) = 0;
        *(undefined1 *)(lVar33 + 0x15c + lVar29) = 2;
        *(ulonglong *)(lVar33 + 0x164 + lVar29) =
             CONCAT35(uStack_104,CONCAT41(fStack_108,uStack_109));
        *(ulonglong *)(lVar33 + 0x15d + lVar29) =
             CONCAT17(uStack_109,CONCAT52(uStack_10e,CONCAT11(cStack_10f,cStack_110)));
        *(undefined1 *)(lVar33 + 0x16c + lVar29) = 2;
        *(undefined1 *)(lVar33 + 0x16e + lVar29) = uStack_f2;
        *(undefined1 *)(lVar33 + 0x16f + lVar29) = 0;
        plStack_100[0x18] = lVar20 + 1;
      }
    }
    goto LAB_1408cb86f;
  }
LAB_1408cd853:
                    /* WARNING: Does not return */
  pcVar10 = (code *)invalidInstructionException();
  (*pcVar10)();
}

