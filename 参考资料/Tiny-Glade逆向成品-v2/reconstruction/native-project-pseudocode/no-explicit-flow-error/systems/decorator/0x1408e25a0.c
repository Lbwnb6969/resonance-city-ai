// VA 0x1408e25a0, PDB extent 9529 bytes
// system_decorator::cache_decorator_transforms::cache_decorator_transforms
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/cache_decorator_transforms.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::cache_decorator_transforms::cache_decorator_transforms
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/cache_decorator_transforms.rs
   Extent: 9529 */

void pdb_1408e25a0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,ulonglong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,undefined8 *param_8,
                  longlong *param_9)

{
  byte *pbVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  code *pcVar10;
  uint uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  char cVar15;
  byte bVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 *puVar23;
  longlong lVar24;
  float *pfVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  ulonglong uVar29;
  int *piVar30;
  ulonglong uVar31;
  undefined4 *puVar32;
  undefined4 *puVar33;
  undefined4 *puVar34;
  longlong lVar35;
  undefined1 (*pauVar36) [16];
  undefined *puVar37;
  undefined1 (**ppauVar38) [16];
  undefined1 (*pauVar39) [16];
  undefined *puVar40;
  longlong lVar41;
  undefined4 *puVar42;
  undefined1 (*pauVar43) [16];
  ulonglong unaff_R14;
  undefined *puVar44;
  longlong *plVar45;
  bool bVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float extraout_XMM0_Da;
  undefined4 uVar51;
  float extraout_XMM0_Dc;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar58;
  float fVar59;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  uint uVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  undefined1 (*pauStack_368) [16];
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  longlong lStack_350;
  longlong lStack_340;
  undefined8 uStack_338;
  longlong lStack_330;
  longlong lStack_328;
  longlong lStack_320;
  ulonglong uStack_318;
  undefined8 *puStack_310;
  undefined1 (*pauStack_308) [16];
  undefined1 (*pauStack_300) [16];
  undefined4 uStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 uStack_2e0;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  longlong lStack_2c8;
  longlong lStack_2c0;
  longlong lStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined1 (*pauStack_298) [16];
  undefined1 (*pauStack_290) [16];
  undefined8 uStack_288;
  ushort uStack_280;
  undefined2 uStack_27e;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  longlong lStack_270;
  undefined8 uStack_268;
  undefined1 (*pauStack_260) [16];
  undefined1 (*pauStack_258) [16];
  undefined1 *puStack_250;
  undefined8 uStack_248;
  longlong lStack_238;
  undefined4 uStack_22c;
  float fStack_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  float fStack_218;
  undefined4 uStack_214;
  undefined4 *puStack_210;
  undefined8 uStack_208;
  longlong lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 (*pauStack_1e8) [16];
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  longlong lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  longlong lStack_190;
  undefined4 *puStack_160;
  undefined4 *puStack_158;
  float fStack_14c;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 uStack_120;
  longlong *plStack_110;
  longlong lStack_108;
  ulonglong *puStack_100;
  char cStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  puVar23 = param_2;
  puStack_2b0 = param_1;
  cVar15 = pdb_140e94b40();
  if (cVar15 != '\0') {
    unaff_R14 = 0x48;
    lVar18 = pdb_1408e4ae0(0x48);
    puVar37 = &UNK_14301b79b;
    if (lVar18 == 1) {
      if ((undefined8 *)0x48 < puVar23) {
LAB_1408e4799:
        pdb_142dc8070(&UNK_14301b79b,0x48,0);
LAB_1408e47b9:
        pdb_142dc8070(&UNK_14301b79b,0x48);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar19 = pdb_1408e4ae0(puVar23);
      if ((uVar19 & 1) != 0) {
        if (0x48 < (longlong)puVar23 + 2U) goto LAB_1408e47b9;
        unaff_R14 = 0x46 - (longlong)puVar23;
        puVar37 = &UNK_14301b79d + (longlong)puVar23;
      }
    }
    puVar40 = &UNK_14301b50d;
    puVar44 = &UNK_14301b4d3;
    do {
      bVar16 = puVar40[-1];
      uVar17 = (uint)(char)bVar16;
      puStack_100 = param_4;
      if ((char)bVar16 < '\0') {
        bVar5 = puVar40[-2];
        if ((char)bVar5 < -0x40) {
          bVar6 = puVar40[-3];
          if ((char)bVar6 < -0x40) {
            pbVar1 = puVar40 + -4;
            puVar40 = puVar40 + -4;
            uVar17 = bVar6 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar40 = puVar40 + -3;
            uVar17 = bVar6 & 0xf;
          }
          puVar23 = (undefined8 *)(ulonglong)(uVar17 << 6);
          uVar17 = bVar5 & 0x3f | uVar17 << 6;
        }
        else {
          puVar40 = puVar40 + -2;
          uVar17 = bVar5 & 0x1f;
        }
        uVar17 = (uint)(bVar16 & 0x3f) | uVar17 << 6;
        if (uVar17 != 0x5c) goto LAB_1408e2724;
LAB_1408e2739:
        puVar44 = puVar40 + -0x14301b4d2;
        if (puVar44 < (undefined *)0x3b) {
          lVar18 = 0x3a - (longlong)puVar44;
          puVar44 = puVar40 + 1;
          goto LAB_1408e275f;
        }
        pdb_142dc8070(&UNK_14301b4d3,0x3a,puVar44,0x3a,&UNK_14301b840);
        goto LAB_1408e4799;
      }
      puVar40 = puVar40 + -1;
      if (uVar17 == 0x5c) goto LAB_1408e2739;
LAB_1408e2724:
      if (uVar17 == 0x2f) goto LAB_1408e2739;
    } while (puVar40 != &UNK_14301b4d3);
    lVar18 = 0x3a;
LAB_1408e275f:
    plVar20 = (longlong *)pdb_140e97000();
    if ((char)plVar20[0xd] != '\x01') {
      puVar23 = (undefined8 *)0x0;
      plVar20 = (longlong *)pdb_142dde6e0(plVar20);
      if (plVar20 == (longlong *)0x0) goto LAB_1408e46bb;
    }
    if (*plVar20 != 0) goto LAB_1408e45c9;
    *plVar20 = -1;
    plStack_110 = plVar20;
    puStack_2a0 = (undefined8 *)pdb_140e94f10(plVar20 + 1,puVar37,unaff_R14,puVar44,lVar18,1,0);
    *plStack_110 = *plStack_110 + 1;
    param_4 = puStack_100;
  }
  puStack_210 = (undefined4 *)param_2[2];
  plStack_110 = (longlong *)CONCAT44(plStack_110._4_4_,*(undefined4 *)((longlong)param_2 + 0x1c));
  *puStack_210 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_208 = *param_2;
  uStack_268 = param_3;
  cStack_f1 = cVar15;
  pdb_140c45c00(uStack_208,param_3);
  uStack_2a8 = *puStack_2b0;
  pdb_140a2fb40(&uStack_1c8);
  uVar12 = _UNK_1430155a4;
  uVar51 = _DAT_1430155a0;
  fVar70 = _UNK_142e4e65c;
  fVar69 = _UNK_142e4e658;
  fVar61 = _UNK_142e4e654;
  fVar68 = _DAT_142e4e650;
  fVar50 = _UNK_142e377dc;
  fVar60 = _UNK_142e377d8;
  fVar59 = _UNK_142e377d4;
  fVar58 = _DAT_142e377d0;
  fVar49 = _UNK_142e377cc;
  fVar48 = _UNK_142e377c8;
  fVar71 = _UNK_142e377c4;
  fVar47 = _DAT_142e377c0;
  pauStack_260 = (undefined1 (*) [16])CONCAT44(uStack_1c0._4_4_,(float)uStack_1c0);
  puStack_158 = (undefined4 *)*param_4;
  lStack_108 = *param_7;
  lStack_2b8 = lStack_108 + 0xa8;
  lStack_330 = *param_6;
  lStack_238 = param_6[1];
  lStack_2c0 = lStack_108 + 0xe0;
  lStack_2c8 = lStack_108 + 0xf0;
  lVar18 = CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8);
  lVar22 = lStack_1a8;
  uVar19 = uStack_1b0 & 0xffff;
  while( true ) {
    uVar17 = (uint)uVar19;
    if (lVar22 == 0) break;
    if ((short)uVar19 == 0) {
      do {
        auVar56 = *pauStack_260;
        lVar18 = lVar18 + -0x980;
        pauStack_260 = pauStack_260 + 1;
        uVar17 = (ushort)((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
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
                          (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar56[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar17 == 0);
    }
    uVar63 = 0;
    for (uVar11 = uVar17; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
      uVar63 = uVar63 + 1;
    }
    uStack_318 = (ulonglong)(uVar17 - 1 & uVar17);
    lVar21 = (ulonglong)uVar63 * -0x98;
    puStack_160 = *(undefined4 **)(lVar18 + -0x98 + lVar21);
    pauVar39 = *(undefined1 (**) [16])(lVar18 + -0x60 + lVar21);
    auVar56 = *pauVar39;
    pauVar43 = pauVar39 + 1;
    lVar21 = *(longlong *)(lVar18 + -0x48 + lVar21);
    uVar17 = ~(uint)(ushort)((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
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
                             (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar56[0xf] >> 7) << 0xf);
    lStack_328 = lVar18;
    lStack_320 = lVar22 + -1;
    while (bVar46 = lVar21 != 0, lVar21 = lVar21 + -1, lVar18 = lStack_328, lVar22 = lStack_320,
          uVar19 = uStack_318, bVar46) {
      if ((short)uVar17 == 0) {
        do {
          auVar56 = *pauVar43;
          pauVar39 = pauVar39 + -0x68;
          pauVar43 = pauVar43 + 1;
          uVar17 = (ushort)((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
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
                            (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar56[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar17 == 0);
      }
      uVar63 = 0;
      for (uVar11 = uVar17; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
        uVar63 = uVar63 + 1;
      }
      lVar22 = (ulonglong)uVar63 * -0x68;
      puStack_100 = (ulonglong *)
                    CONCAT44(puStack_100._4_4_,*(undefined4 *)((longlong)pauVar39 + lVar22 + -0x68))
      ;
      uVar19 = (ulonglong)*(byte *)((longlong)pauVar39 + lVar22 + -0x2e);
      lVar18 = uVar19 - 1;
      if (uVar19 < 2) {
        lVar18 = 0;
      }
      if (lVar18 == 0) {
        pauStack_258 = *(undefined1 (**) [16])((longlong)pauVar39 + lVar22 + -0x50);
        unaff_R14 = CONCAT71((int7)(unaff_R14 >> 8),
                             *(undefined1 *)((longlong)pauVar39 + lVar22 + -0x30));
        puVar32 = puStack_160;
        lVar18 = pdb_140b54f80(puStack_158,puStack_160,&UNK_14301b678);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14301b690);
        }
        lVar22 = pdb_140b86c80(unaff_R14 & 0xffffffff);
        if ((lVar22 == 1) &&
           (pdb_14092fa30(&uStack_1c8,lVar18,puVar32), (float)uStack_1c8 == 1.4013e-45)) {
          uStack_138 = CONCAT44((float)uStack_1c0,uStack_1c8._4_4_);
          pdb_140df4540(&pauStack_298,&uStack_138);
          pdb_140de88f0(&uStack_1f8);
          fStack_2f0 = pauStack_290._0_4_;
          pauVar36 = pauStack_298;
          pauStack_308 = uStack_1f8;
          pauStack_300 = uStack_1f0;
        }
        else {
          pdb_140dea170(&pauStack_258,lVar18);
          pdb_140dea260(&uStack_1f8,&pauStack_258,lVar18);
          pdb_140de88f0(&uStack_1c8);
          pauStack_308 = (undefined1 (*) [16])CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8);
          pauStack_300 = (undefined1 (*) [16])CONCAT44(uStack_1c0._4_4_,(float)uStack_1c0);
          fStack_2f0 = (float)uStack_1f0;
          pauVar36 = uStack_1f8;
        }
        uStack_2f8 = SUB84(pauVar36,0);
        fStack_2f4 = (float)((ulonglong)pauVar36 >> 0x20);
LAB_1408e299e:
        uStack_2ec = 0x3f800000;
        uStack_2e8 = 0x3f800000;
        uStack_2e4 = 0x3f800000;
      }
      else {
        if ((int)lVar18 != 1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_14301b528,0x28,&UNK_14301b6c0);
        }
        fVar2 = *(float *)((longlong)pauVar39 + lVar22 + -0x48);
        uVar19 = pdb_140b54b40(puStack_158,puStack_160);
        fVar62 = (float)CONCAT22(uStack_1e0._2_2_,(ushort)uStack_1e0);
        if ((uVar19 & 0xffffffff) != 0) {
          uVar29 = uVar19 & 0xffffffff ^ 0xffffffff;
          lVar18 = 1;
          uStack_1e0 = fVar62;
          if (((*(ulonglong *)(lStack_238 + 0x10) <= uVar29) ||
              (piVar30 = (int *)(uVar29 * 0x18 + *(longlong *)(lStack_238 + 8)),
              piVar30[4] != (int)(uVar19 >> 0x20))) || (*piVar30 == 0)) goto LAB_1408e45d9;
          puVar23 = *(undefined8 **)(piVar30 + 2);
          uStack_1e0 = (float)CONCAT22(uStack_1e0._2_2_,(ushort)uStack_1e0);
          if ((*(ulonglong *)(lStack_330 + 0x38) <= ((ulonglong)puVar23 & 0xffffffff)) ||
             (uStack_1e0 = fVar62,
             (*(ulonglong *)
               (*(longlong *)(lStack_330 + 0x28) + ((ulonglong)puVar23 >> 6 & 0x3ffffff) * 8) >>
              ((ulonglong)puVar23 & 0x3f) & 1) == 0)) goto LAB_1408e45d5;
          uVar19 = (ulonglong)puVar23 >> 0x20;
          lVar24 = *(longlong *)(lStack_238 + 0x1a0);
          lVar18 = lVar24 + uVar19 * 0x48;
          lVar35 = *(longlong *)(lVar24 + 0x38 + uVar19 * 0x48);
          if (*(ulonglong *)(lStack_330 + 0x110) < *(ulonglong *)(lVar24 + 0x40 + uVar19 * 0x48)) {
            uVar19 = *(ulonglong *)(lVar35 + *(ulonglong *)(lStack_330 + 0x110) * 8);
            lVar18 = *(longlong *)(lVar18 + 0x18);
            if (uVar19 == 0) goto LAB_1408e2cbc;
            unaff_R14 = *(ulonglong *)(lVar18 + 0x10 + ~uVar19 * 0x30);
          }
          else {
            lVar18 = *(longlong *)(lVar18 + 0x18);
LAB_1408e2cbc:
            unaff_R14 = 0;
          }
          lVar41 = ~*(ulonglong *)(lVar35 + *(longlong *)(lStack_330 + 0x118) * 8) * 0x30;
          lVar35 = (ulonglong)(uint)~piVar30[1] * 0x58;
          pdb_140a0a130(&uStack_1c8,
                        (ulonglong)(uint)~piVar30[1] * 0x48 + *(longlong *)(lVar18 + 0x10 + lVar41),
                        lVar41,lVar24,*(undefined4 *)(unaff_R14 + 0x4c + lVar35));
          fVar62 = (float)uStack_1c0;
          if ((float)uStack_1c8 == 1.4013e-45) {
            unaff_R14 = unaff_R14 + lVar35;
            lStack_200 = CONCAT44(lStack_200._4_4_,uStack_1c8._4_4_);
            fStack_14c = uStack_1c0._4_4_;
            fVar64 = fVar68;
            fVar65 = fVar61;
            fVar66 = fVar69;
            fVar67 = fVar70;
            if ((~*(uint *)((longlong)pauVar39 + lVar22 + -0x60) & 6) == 0) {
              uStack_1c8._0_4_ = (float)pdb_140b77280(unaff_R14);
              uStack_1c8._0_4_ = fVar2 + (float)uStack_1c8;
              pdb_1409015e0(&uStack_1f8,&uStack_1c8);
              fVar64 = (float)uStack_1f8;
              fVar65 = uStack_1f8._4_4_;
              fVar66 = (float)uStack_1f0;
              fVar67 = uStack_1f0._4_4_;
            }
            bVar16 = pdb_140b77b50(unaff_R14);
            lVar18 = *(longlong *)((longlong)pauVar39 + lVar22 + -0x60);
            fVar2 = fVar64;
            fVar13 = fVar65;
            fVar14 = fVar66;
            if ((bVar16 & lVar18 == 6) == 0) {
              if (lVar18 == 7) {
                uStack_1c8._0_4_ = puStack_100._0_4_;
                puVar23 = *(undefined8 **)(lStack_108 + 0xb8);
                pauVar36 = (undefined1 (*) [16])0x4;
                if (puVar23 == (undefined8 *)0x0) {
LAB_1408e30b2:
                  lVar18 = 4;
                }
                else {
                  puStack_310 = puVar23;
                  if (puVar23 == (undefined8 *)0x1) {
                    lVar24 = *(longlong *)(lStack_108 + 0xb0);
                    lVar18 = 4;
                    if (puStack_100._0_4_ == *(float *)(lVar24 + 0x20)) {
                      puVar23 = (undefined8 *)0x0;
LAB_1408e309e:
                      lVar18 = *(longlong *)(lVar24 + 8 + (longlong)puVar23 * 0x28);
                      pauVar36 = (undefined1 (*) [16])
                                 (lVar18 + *(longlong *)(lVar24 + 0x10 + (longlong)puVar23 * 0x28) *
                                           8);
                    }
                  }
                  else {
                    puVar23 = (undefined8 *)pdb_1400aede0(lStack_2c0,&uStack_1c8);
                    uVar19 = pdb_1414af660(lStack_2b8,puVar23,&uStack_1c8);
                    if ((uVar19 & 1) == 0) goto LAB_1408e30b2;
                    puVar28 = puStack_310;
                    if (puStack_310 <= puVar23) goto LAB_1408e46c8;
                    lVar24 = *(longlong *)(lStack_108 + 0xb0);
                    lVar18 = 4;
                    if (lVar24 != 0) goto LAB_1408e309e;
                  }
                }
                uStack_1b0 = CONCAT44(uStack_1b0._4_4_,puStack_100._0_4_);
                uStack_1c8._0_4_ = (float)lStack_2c8;
                uStack_1c8._4_4_ = (float)((ulonglong)lStack_2c8 >> 0x20);
                uStack_1c0._0_4_ = (float)lVar18;
                uStack_1c0._4_4_ = (float)((ulonglong)lVar18 >> 0x20);
                uStack_1b8 = pauVar36;
                pdb_1414aedf0(&uStack_1f8,&uStack_1c8);
                if (uStack_1f0 != (undefined1 (*) [16])0x0) {
                  pdb_140de88f0(&fStack_2d8);
                  fVar2 = fStack_2d8;
                  fVar13 = fStack_2d4;
                  fVar14 = fStack_2d0;
                  fVar67 = fStack_2cc;
                }
              }
              else {
                if (*(int *)(unaff_R14 + 8) == 1) {
                  if (2 < (byte)(*(char *)((longlong)pauVar39 + lVar22 + -7) - 1U)) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc83b0(&UNK_143011c40,0x28,&UNK_143011cb8);
                  }
                  uStack_1f8 = (undefined1 (*) [16])
                               CONCAT44(fVar62 + _UNK_142e378e4,(float)lStack_200 + _DAT_142e378e0);
                  uStack_1f0 = (undefined1 (*) [16])CONCAT44(uStack_1f0._4_4_,fStack_14c + 0.0);
                  pdb_140b77d90(&uStack_1c8,unaff_R14,&uStack_1f8);
                  puVar23 = (undefined8 *)pdb_140a84d90(&uStack_1c8);
                  pauStack_1e8 = (undefined1 (*) [16])puVar23[2];
                  uStack_1f8 = (undefined1 (*) [16])*puVar23;
                  uStack_1f0 = (undefined1 (*) [16])puVar23[1];
                  pdb_140df21b0(&uStack_1f8);
                }
                pdb_140de88f0(&uStack_1c8);
                fVar2 = uStack_1c8._4_4_ * fVar66 * fVar58 + (float)uStack_1c0 * fVar65 * fVar47 +
                        uStack_1c0._4_4_ * fVar64 * _DAT_142e377b0 + fVar67 * (float)uStack_1c8;
                fVar13 = (float)uStack_1c8 * fVar66 * fVar59 + uStack_1c0._4_4_ * fVar65 * fVar71 +
                         (float)uStack_1c0 * fVar64 * _UNK_142e377b4 + fVar67 * uStack_1c8._4_4_;
                fVar14 = uStack_1c0._4_4_ * fVar66 * fVar60 + (float)uStack_1c8 * fVar65 * fVar48 +
                         uStack_1c8._4_4_ * fVar64 * _UNK_142e377b8 + fVar67 * (float)uStack_1c0;
                fVar67 = (float)uStack_1c0 * fVar66 * fVar50 + uStack_1c8._4_4_ * fVar65 * fVar49 +
                         (float)uStack_1c8 * fVar64 * _UNK_142e377bc + fVar67 * uStack_1c0._4_4_;
              }
            }
            fStack_2cc = fVar67;
            fStack_2d0 = fVar14;
            fStack_2d4 = fVar13;
            fStack_2d8 = fVar2;
            cVar15 = pdb_140b77b50(unaff_R14);
            if ((cVar15 != '\0') && (*(int *)((longlong)pauVar39 + lVar22 + -0x60) == 7)) {
              pfVar25 = (float *)pdb_140901490((longlong)pauVar39 + lVar22 + -0x28,&UNK_14301b6a8);
              fVar62 = fVar62 + *pfVar25;
            }
            uStack_2f8 = (float)lStack_200;
            fStack_2f0 = fStack_14c;
            pauStack_308 = (undefined1 (*) [16])CONCAT44(fStack_2d4,fStack_2d8);
            pauStack_300 = (undefined1 (*) [16])CONCAT44(fStack_2cc,fStack_2d0);
            fStack_2f4 = fVar62;
            goto LAB_1408e299e;
          }
        }
        plVar20 = (longlong *)pdb_140c45fd0(uStack_268,(ulonglong)puStack_100 & 0xffffffff);
        ppauVar38 = &pauStack_298;
        if (plVar20 != (longlong *)0x0) {
          uStack_1b8 = (undefined1 (*) [16])*plVar20;
          uStack_1b0 = plVar20[1];
          lStack_1a8 = plVar20[2];
          lStack_1a0 = plVar20[3];
          lStack_198 = plVar20[4];
          lStack_190 = plVar20[5];
          ppauVar38 = (undefined1 (**) [16])&uStack_1b8;
        }
        pdb_140df4940(&uStack_1f8);
        uStack_288 = (undefined1 *)CONCAT44(uVar12,uVar51);
        uStack_280 = 0;
        uStack_27e = 0xc2c8;
        pauStack_298 = uStack_1f8;
        pauStack_290 = uStack_1f0;
        uStack_274 = uStack_1d4;
        uStack_27c = uStack_1dc;
        uStack_278 = uStack_1d8;
        pauStack_308 = *ppauVar38;
        pauStack_300 = ppauVar38[1];
        auVar56 = *(undefined1 (*) [16])(ppauVar38 + 2);
        auVar57 = *(undefined1 (*) [16])(ppauVar38 + 4);
        uStack_2f8 = auVar56._0_4_;
        fStack_2f4 = auVar56._4_4_;
        fStack_2f0 = auVar56._8_4_;
        uStack_2ec = auVar56._12_4_;
        uStack_2e8 = auVar57._0_4_;
        uStack_2e4 = auVar57._4_4_;
        uStack_2e0 = auVar57._8_8_;
      }
      uVar17 = uVar17 - 1 & uVar17;
      *puStack_210 = plStack_110._0_4_;
      pdb_140c45c90(uStack_208,(ulonglong)puStack_100 & 0xffffffff,&pauStack_308);
    }
  }
  puStack_158 = (undefined4 *)puStack_2b0[2];
  puStack_160 = (undefined4 *)
                CONCAT44(puStack_160._4_4_,*(undefined4 *)((longlong)puStack_2b0 + 0x1c));
  *puStack_158 = *(undefined4 *)((longlong)puStack_2b0 + 0x1c);
  lVar18 = pdb_140c411c0(uStack_2a8,1);
  if (lVar18 != 0) {
    uStack_1f8 = *(undefined1 (**) [16])(lVar18 + 0x30);
    pauStack_1e8 = (undefined1 (*) [16])(*uStack_1f8 + *(longlong *)(lVar18 + 0x38) + 1);
    auVar56 = *uStack_1f8;
    uStack_1e0._0_2_ =
         ~((ushort)(SUB161(auVar56 >> 7,0) & 1) | (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
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
           (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar56[0xf] >> 7) << 0xf
          );
    lStack_1d0 = lVar18 + 0x60;
    uStack_1f0 = uStack_1f8 + 1;
    uStack_1d8 = (undefined4)*(undefined8 *)(lVar18 + 0x48);
    uStack_1d4 = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + 0x48) >> 0x20);
    lVar18 = *param_5;
    puStack_100 = (ulonglong *)*param_8;
    while (pdb_140c441a0(&pauStack_298,&uStack_1f8), pauVar43 = pauStack_298,
          pauStack_290 != (undefined1 (*) [16])0x0) {
      iVar7 = (int)pauStack_298;
      uVar19 = (ulonglong)pauStack_298 & 0xffffffff;
      uStack_248 = CONCAT44(uStack_27c,CONCAT22(uStack_27e,uStack_280));
      pauStack_258 = pauStack_290;
      puStack_250 = uStack_288;
      plVar20 = (longlong *)pdb_140315970(&pauStack_258);
      if (*(char *)((longlong)plVar20 + 0x32) != '\x03') {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14301b528,0x28,&UNK_14301b550);
      }
      uStack_148 = plVar20[2];
      uStack_140 = (undefined4)plVar20[3];
      uStack_1c0 = *(longlong *)(lVar18 + 0x10) * 2;
      uStack_1c8._0_4_ = (float)*(undefined8 *)(lVar18 + 8);
      uStack_1c8._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar18 + 8) >> 0x20);
      uStack_1b8 = *(undefined1 (**) [16])(lVar18 + 0x50);
      pdb_1402202d0(&uStack_1c8);
      pdb_140df4540(&uStack_22c,&uStack_148);
      fVar47 = (float)pub_142e32b30();
      fVar48 = (float)pub_142e329e0();
      fVar71 = 0.0;
      if (*plVar20 == 6) {
        pdb_140c261e0(&uStack_1c8,puStack_100,plVar20[1]);
        uStack_1b8 = *(undefined1 (**) [16])(lStack_1a8 + 0x50);
        uStack_1b0 = *(ulonglong *)(lStack_1a8 + 0x58);
        uStack_1c8._0_4_ = (float)*(undefined8 *)(lStack_1a8 + 0x40);
        uStack_1c8._4_4_ = (float)((ulonglong)*(undefined8 *)(lStack_1a8 + 0x40) >> 0x20);
        uStack_1c0._0_4_ = (float)*(undefined8 *)(lStack_1a8 + 0x48);
        uStack_1c0._4_4_ = (float)((ulonglong)*(undefined8 *)(lStack_1a8 + 0x48) >> 0x20);
        fVar58 = fVar48 * fVar48;
        fVar60 = fVar47 * fVar47 + 0.0;
        fVar49 = fVar47 * 0.0 + _DAT_142e36f28 * 0.0 + 0.0;
        fVar49 = fVar49 + fVar49;
        fVar59 = fVar48 + fVar48;
        auVar56._0_4_ =
             fVar59 * (fVar47 * 0.0 - _DAT_14300d230 * 0.0) +
             fVar49 * 0.0 + (fVar58 - (fVar60 + 0.0)) * _DAT_142e36f28;
        auVar56._4_4_ =
             fVar59 * (fVar47 * 0.0 - fVar47 * _UNK_14300d234) +
             fVar49 * fVar47 + (fVar58 - (fVar60 + fVar58)) * 0.0;
        auVar56._8_4_ =
             fVar59 * (0.0 - fVar47 * _UNK_14300d238) +
             fVar49 * 0.0 + (fVar58 - (fVar60 + 0.0)) * 0.0;
        auVar56._12_4_ =
             fVar59 * (0.0 - fVar48 * _UNK_14300d23c) +
             fVar49 * fVar48 + (fVar58 - (fVar60 + fVar58)) * 0.0;
        fVar49 = _DAT_142e36f28 /
                 SQRT(auVar56._8_4_ * auVar56._8_4_ + auVar56._0_4_ * auVar56._0_4_);
        auVar57._4_12_ = auVar56._4_12_;
        auVar57._0_4_ = auVar56._0_4_ * fVar49;
        pdb_140df3f70(&uStack_1c8,auVar57._0_8_,fVar49 * auVar56._8_4_);
        uStack_130 = (undefined1 (*) [16])CONCAT44(uStack_130._4_4_,uStack_224);
        uStack_138 = CONCAT44(fStack_228,uStack_22c);
        pdb_140df43c0(&uStack_1c8,&uStack_138);
        fVar59 = uStack_1c0._4_4_;
        fVar58 = (float)uStack_1c0;
        fVar49 = uStack_1c8._4_4_;
        fVar60 = uStack_1b8._4_4_;
        fVar61 = _DAT_142e36f28 /
                 SQRT(uStack_1c8._4_4_ * uStack_1c8._4_4_ + (float)uStack_1c8 * (float)uStack_1c8);
        fVar70 = (float)uStack_1c8 * fVar61;
        fVar69 = (float)uStack_1b8 * fVar70 * _DAT_142e36f50;
        fVar68 = uStack_1c8._4_4_ * fVar61 * (float)uStack_1b8 * _DAT_142e36f50;
        uStack_138 = *(undefined8 *)(lVar18 + 8);
        uStack_130 = (undefined1 (*) [16])(*(longlong *)(lVar18 + 0x10) * 2);
        puStack_128 = *(undefined1 **)(lVar18 + 0x50);
        fVar50 = (float)pdb_1402202d0(&uStack_138,(float)uStack_1c0 + fVar69,
                                      uStack_1c0._4_4_ + fVar68);
        uStack_138 = *(undefined8 *)(lVar18 + 8);
        uStack_130 = (undefined1 (*) [16])(*(longlong *)(lVar18 + 0x10) * 2);
        puStack_128 = *(undefined1 **)(lVar18 + 0x50);
        fVar68 = (float)pdb_1402202d0(&uStack_138,fVar58 - fVar69,fVar59 - fVar68);
        uStack_138 = *(undefined8 *)(lVar18 + 8);
        uStack_130 = (undefined1 (*) [16])(*(longlong *)(lVar18 + 0x10) * 2);
        puStack_128 = *(undefined1 **)(lVar18 + 0x50);
        fVar58 = (float)pdb_1402202d0(&uStack_138,
                                      fVar58 + fVar61 * (float)((uint)fVar49 ^ _DAT_142e37820) *
                                               fVar60 * _DAT_142e36f50,
                                      fVar59 + fVar70 * fVar60 * _DAT_142e36f50);
        uStack_138 = *(undefined8 *)(lVar18 + 8);
        uStack_130 = (undefined1 (*) [16])(*(longlong *)(lVar18 + 0x10) * 2);
        puStack_128 = *(undefined1 **)(lVar18 + 0x50);
        fVar59 = (float)pdb_1402202d0(&uStack_138);
        fVar49 = fVar68;
        if (fVar68 <= fVar50) {
          fVar49 = fVar50;
        }
        fVar60 = fVar68;
        if (fVar50 <= fVar68) {
          fVar60 = fVar50;
        }
        fVar61 = (float)(~-(uint)NAN(fVar50) & (uint)fVar60 | -(uint)NAN(fVar50) & (uint)fVar68);
        fVar60 = fVar58;
        if (fVar61 <= fVar58) {
          fVar60 = fVar61;
        }
        fVar61 = (float)(-(uint)NAN(fVar61) & (uint)fVar58 | ~-(uint)NAN(fVar61) & (uint)fVar60);
        fVar60 = fVar59;
        if (fVar61 <= fVar59) {
          fVar60 = fVar61;
        }
        fVar61 = (float)(-(uint)NAN(fVar61) & (uint)fVar59 | ~-(uint)NAN(fVar61) & (uint)fVar60);
        fVar60 = 0.0;
        if (0.0 <= fVar61 + fVar61) {
          fVar60 = fVar61 + fVar61;
        }
        fVar69 = _DAT_142e36f28;
        if (fVar60 <= _DAT_142e36f28) {
          fVar69 = fVar60;
        }
        fVar60 = _DAT_142e36f28 - (_DAT_142e3788c - (fVar69 + fVar69)) * fVar69 * fVar69;
        fVar50 = (fVar50 + fVar68 + fVar58 + fVar59) * _DAT_142e37ae4 * fVar60 +
                 (_DAT_142e36f28 - fVar60) * fVar61;
        fVar60 = fVar58;
        if (fVar58 <= fVar49) {
          fVar60 = fVar49;
        }
        fVar58 = (float)(-(uint)NAN(fVar49) & (uint)fVar58 | ~-(uint)NAN(fVar49) & (uint)fVar60);
        fVar49 = fVar59;
        if (fVar59 <= fVar58) {
          fVar49 = fVar58;
        }
        fVar58 = (uStack_1b0._4_4_ - (float)uStack_1b0) * _DAT_142e36f38 +
                 (float)(-(uint)NAN(fVar58) & (uint)fVar59 | ~-(uint)NAN(fVar58) & (uint)fVar49);
        fVar49 = fVar50;
        if (fVar50 <= fVar58) {
          fVar49 = fVar58;
        }
        fStack_228 = (float)(~-(uint)NAN(fVar58) & (uint)fVar49 | -(uint)NAN(fVar58) & (uint)fVar50)
        ;
        fVar49 = 0.0;
      }
      else {
        fVar49 = 0.0;
        if ((int)*plVar20 == 7) {
          pfVar25 = (float *)pdb_140901490(plVar20 + 7);
          fStack_228 = *pfVar25 + fStack_228;
          uStack_1c8._0_4_ = (float)iVar7;
          uVar29 = *(ulonglong *)(lStack_108 + 0xb8);
          pauVar39 = (undefined1 (*) [16])0x4;
          if (uVar29 == 0) {
LAB_1408e3870:
            lVar22 = 4;
          }
          else if (uVar29 == 1) {
            lVar21 = *(longlong *)(lStack_108 + 0xb0);
            lVar22 = 4;
            if (iVar7 == *(int *)(lVar21 + 0x20)) {
              uVar26 = 0;
LAB_1408e385c:
              lVar22 = *(longlong *)(lVar21 + 8 + uVar26 * 0x28);
              pauVar39 = (undefined1 (*) [16])
                         (lVar22 + *(longlong *)(lVar21 + 0x10 + uVar26 * 0x28) * 8);
            }
          }
          else {
            uVar26 = pdb_1400aede0(lStack_2c0,&uStack_1c8);
            uVar27 = pdb_1414af660(lStack_2b8,uVar26,&uStack_1c8);
            if ((uVar27 & 1) == 0) goto LAB_1408e3870;
            if (uVar29 <= uVar26) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar26,uVar29,&UNK_143311df8);
            }
            lVar21 = *(longlong *)(lStack_108 + 0xb0);
            lVar22 = 4;
            if (lVar21 != 0) goto LAB_1408e385c;
          }
          uStack_1b0 = CONCAT44(uStack_1b0._4_4_,iVar7);
          uStack_1c8._0_4_ = (float)lStack_2c8;
          uStack_1c8._4_4_ = (float)((ulonglong)lStack_2c8 >> 0x20);
          uStack_1c0._0_4_ = (float)lVar22;
          uStack_1c0._4_4_ = (float)((ulonglong)lVar22 >> 0x20);
          uStack_1b8 = pauVar39;
          pdb_1414aedf0(&uStack_220,&uStack_1c8);
          fVar49 = 0.0;
          if (CONCAT44(uStack_214,fStack_218) != 0) {
            pdb_140de9770(&uStack_138);
            fVar49 = (float)uStack_138;
            fVar47 = uStack_138._4_4_;
            fVar71 = (float)uStack_130;
            fVar48 = uStack_130._4_4_;
          }
        }
      }
      uStack_360 = uStack_224;
      pauStack_368 = (undefined1 (*) [16])CONCAT44(fStack_228,uStack_22c);
      uStack_35c = 0x3f800000;
      uStack_358 = 0x3f800000;
      uStack_354 = 0x3f800000;
      fStack_378 = fVar49;
      fStack_374 = fVar47;
      fStack_370 = fVar71;
      fStack_36c = fVar48;
      puVar23 = (undefined8 *)pdb_140c45fd0(uStack_268,(ulonglong)pauVar43 & 0xffffffff);
      if (puVar23 == (undefined8 *)0x0) {
LAB_1408e3934:
        *puStack_210 = plStack_110._0_4_;
        uStack_1b0 = CONCAT44(uStack_35c,uStack_360);
        lStack_1a8 = CONCAT44(uStack_354,uStack_358);
        lStack_1a0 = lStack_350;
        uStack_1b8 = pauStack_368;
        uStack_1c8._0_4_ = fStack_378;
        uStack_1c8._4_4_ = fStack_374;
        uStack_1c0._0_4_ = fStack_370;
        uStack_1c0._4_4_ = fStack_36c;
        pdb_140c45c90(uStack_208,(ulonglong)pauVar43 & 0xffffffff,&uStack_1c8);
        pdb_140c413c0(&pauStack_258);
      }
      else {
        cVar15 = pdb_140df4600(puVar23,&fStack_378);
        if (cVar15 == '\0') goto LAB_1408e3934;
        *puStack_210 = plStack_110._0_4_;
        uStack_1b8 = (undefined1 (*) [16])puVar23[2];
        uStack_1b0 = puVar23[3];
        lStack_1a8 = puVar23[4];
        lStack_1a0 = puVar23[5];
        uStack_1c8._0_4_ = (float)*puVar23;
        uStack_1c8._4_4_ = (float)((ulonglong)*puVar23 >> 0x20);
        uStack_1c0._0_4_ = (float)puVar23[1];
        uStack_1c0._4_4_ = (float)((ulonglong)puVar23[1] >> 0x20);
        pdb_140c45c90(uStack_208,uVar19,&uStack_1c8);
      }
    }
  }
  *puStack_158 = puStack_160._0_4_;
  lVar18 = pdb_140c411c0(uStack_2a8,2);
  if (lVar18 != 0) {
    pauStack_298 = *(undefined1 (**) [16])(lVar18 + 0x30);
    uStack_288 = *pauStack_298 + *(longlong *)(lVar18 + 0x38) + 1;
    auVar56 = *pauStack_298;
    uStack_280 = ~((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
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
                   (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar56[0xf] >> 7) << 0xf);
    lStack_270 = lVar18 + 0x60;
    pauStack_290 = pauStack_298 + 1;
    uStack_278 = (undefined4)*(undefined8 *)(lVar18 + 0x48);
    uStack_274 = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + 0x48) >> 0x20);
    lStack_238 = *param_9;
    lStack_200 = lStack_108 + 0x198;
    while( true ) {
      pdb_140c441a0(&uStack_138,&pauStack_298);
      if (uStack_130 == (undefined1 (*) [16])0x0) break;
      puStack_100 = (ulonglong *)CONCAT44(puStack_100._4_4_,(float)uStack_138);
      uStack_248 = uStack_120;
      pauStack_258 = uStack_130;
      puStack_250 = puStack_128;
      lVar18 = pdb_140315970(&pauStack_258);
      if (*(char *)(lVar18 + 0x32) != '\x04') {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14301b528,0x28,&UNK_14301b660);
      }
      iVar7 = *(int *)(lVar18 + 0x10);
      iVar8 = *(int *)(lVar18 + 0x14);
      fVar47 = *(float *)(lVar18 + 0x18);
      fVar71 = *(float *)(lVar18 + 0x1c);
      lVar18 = 0;
      plVar20 = (longlong *)(*(longlong *)(lStack_108 + 8) + -0xf8);
      do {
        plVar45 = plVar20;
        if (*(longlong *)(lStack_108 + 0x10) * -0x150 - lVar18 == 0) goto LAB_1408e3b4e;
        plVar20 = plVar45 + 0x2a;
        lVar18 = lVar18 + -0x150;
      } while (((int)plVar45[0x44] != iVar7) || (*(int *)((longlong)plVar45 + 0x224) != iVar8));
      if (SBORROW8(0,plVar45[0x32])) {
LAB_1408e3b4e:
        pauStack_1e8 = _DAT_14301b400;
        uStack_1e0 = -0.0;
        uStack_1f8 = (undefined1 (*) [16])CONCAT44(_UNK_142e4e654,_DAT_142e4e650);
        uStack_1f0 = (undefined1 (*) [16])CONCAT44(_UNK_142e4e65c,_UNK_142e4e658);
        uStack_1d4 = 0;
        uStack_1dc = 0;
        uStack_1d8 = 0;
      }
      else {
        uStack_220 = CONCAT44(uStack_220._4_4_,fVar71);
        if ((fVar71 < 0.0) || (_DAT_142e36f28 < fVar71)) {
          uStack_1c8 = &uStack_220;
          uStack_1c0._0_4_ = 7.7206726;
          uStack_1c0._4_4_ = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
          pdb_142dc83d0(&UNK_14330d448,&uStack_1c8,&UNK_14301b568);
        }
        lVar18 = *(longlong *)(lStack_108 + 8) - lVar18;
        uVar29 = pdb_14148c300();
        uVar19 = plVar45[0x47];
        if (uVar19 < 2) {
          lVar22 = lVar18 + -0x20;
          if (uVar19 == 0) goto LAB_1408e3c4d;
LAB_1408e3bfa:
          lVar21 = uVar19 * 4;
          uVar27 = lVar21 - 4;
          uVar31 = 0;
          puVar32 = (undefined4 *)0x0;
          do {
            puVar42 = (undefined4 *)
                      ((ulonglong)*(ushort *)(lVar22 + 2 + uVar31 * 4) + (longlong)puVar32);
            uVar26 = uVar31;
            if ((undefined4 *)(uVar29 & 0xffffffff) < puVar42) break;
            uVar31 = uVar31 + 1;
            lVar21 = lVar21 + -4;
            uVar26 = (uVar27 >> 2) + 1;
            puVar32 = puVar42;
          } while (lVar21 != 0);
        }
        else {
          lVar22 = plVar45[0x45];
          uVar19 = plVar45[0x46];
          if (uVar19 != 0) goto LAB_1408e3bfa;
LAB_1408e3c4d:
          uVar26 = 0;
          puVar32 = (undefined4 *)0x0;
        }
        puVar42 = (undefined4 *)(uVar29 & 0xffffffff);
        if (uVar19 - 1 < uVar26) {
          uVar26 = uVar19 - 1;
        }
        if (uVar19 <= uVar26) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar26,uVar19,&UNK_14301b580);
        }
        puVar9 = (undefined4 *)plVar45[0x2e];
        if (puVar9 <= puVar42) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(puVar42,puVar9,&UNK_14301b598);
        }
        puVar34 = (undefined4 *)((longlong)puVar42 + 1);
        if (puVar9 <= puVar34) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(puVar34,puVar9,&UNK_14301b598);
        }
        uVar3 = *(undefined8 *)(plVar45[0x2d] + (longlong)puVar42 * 8);
        uVar4 = *(undefined8 *)(plVar45[0x2d] + 8 + (longlong)puVar42 * 8);
        fVar71 = (float)uVar3;
        fVar48 = (float)((ulonglong)uVar3 >> 0x20);
        fVar71 = ((float)uVar4 - fVar71) * extraout_XMM0_Da + fVar71;
        fVar48 = ((float)((ulonglong)uVar4 >> 0x20) - fVar48) * extraout_XMM0_Da + fVar48;
        fVar49 = _DAT_142e36f28 / SQRT(fVar48 * fVar48 + fVar71 * fVar71);
        uVar17 = (uint)((int)fVar49 - 1U < 0x7fffff ||
                       (int)ABS(fVar49) - 0x800000U < 0x7f000000 && -1 < (int)fVar49);
        uVar63 = (int)(uVar17 << 0x1f) >> 0x1f;
        uVar17 = (int)(uVar17 << 0x1f) >> 0x1f;
        uStack_338 = CONCAT44(~uVar63 & _DAT_14300c760 | (uint)(fVar49 * fVar71) & uVar63,
                              ~uVar17 & _UNK_14300c764 |
                              (uint)((float)((uint)fVar49 ^ _DAT_142e37820) * fVar48) & uVar17);
        puVar9 = (undefined4 *)plVar45[0x34];
        if (puVar9 <= puVar42) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(puVar42,puVar9,&UNK_14330d718);
        }
        if (puVar9 <= puVar34) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(puVar34,puVar9,&UNK_14330d730);
        }
        puVar33 = (undefined4 *)
                  ((ulonglong)*(ushort *)(lVar22 + 2 + uVar26 * 4) + (longlong)puVar32);
        lVar21 = plVar45[0x33];
        fVar49 = _DAT_142e36f28 - extraout_XMM0_Da;
        uVar3 = *(undefined8 *)(lVar21 + (longlong)puVar42 * 0xc);
        uVar4 = *(undefined8 *)(lVar21 + (longlong)puVar34 * 0xc);
        fVar71 = extraout_XMM0_Da * (float)uVar4 + (float)uVar3 * fVar49;
        fVar48 = extraout_XMM0_Da * (float)((ulonglong)uVar4 >> 0x20) +
                 (float)((ulonglong)uVar3 >> 0x20) * fVar49;
        fVar58 = extraout_XMM0_Dc * 0.0 + 0.0;
        fVar49 = extraout_XMM0_Da * *(float *)(lVar21 + 8 + (longlong)puVar34 * 0xc) +
                 fVar49 * *(float *)(lVar21 + 8 + (longlong)puVar42 * 0xc);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(lVar22 + uVar26 * 4)) {
        case 2:
          puVar34 = puVar33;
          if (puVar33 < (undefined4 *)plVar45[0x37]) {
            puVar34 = (undefined4 *)((longlong)puVar33 + 1);
            if (puVar32 <= puVar34) {
              if ((puVar34 == puVar32) ||
                 (lVar18 = plVar45[0x36], lVar18 + (longlong)puVar34 * 4 == 4)) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_14301b5c8);
              }
              fVar59 = (*(float *)(lVar18 + (longlong)puVar33 * 4) -
                       *(float *)(lVar18 + (longlong)puVar32 * 4)) * *(float *)(plVar45 + 0x38);
              if (fVar59 <= _DAT_142e36f24) {
                fVar59 = _DAT_142e36f24;
              }
              fVar60 = _DAT_142e36f50 / fVar59;
              if (_DAT_142e36f28 <= _DAT_142e36f50 / fVar59) {
                fVar60 = _DAT_142e36f28;
              }
              puStack_160 = puVar33;
              puStack_158 = puVar34;
              fVar59 = (float)pub_142e32b00(_DAT_142e36f28 / fVar60);
              uVar19 = 0;
              if (0.0 <= fVar59) {
                uVar19 = (longlong)(fVar59 - _DAT_142e36f2c) & (longlong)fVar59 >> 0x3f |
                         (longlong)fVar59;
              }
              if (_DAT_142e36f30 < fVar59) {
                uVar19 = 0xffffffffffffffff;
              }
              if (puVar9 <= puStack_160) {
                pdb_142dc8420(puVar32,puStack_160,puVar9,&UNK_14301b5e0);
                goto code_r0x0001408e4774;
              }
              lVar18 = lVar21 + (longlong)puStack_158 * 0xc;
              if (lVar18 == 0xc) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_14301b5f8);
              }
              fVar59 = *(float *)(lVar21 + 4 + (longlong)puVar32 * 0xc);
              fVar60 = *(float *)(lVar18 + -8);
              fVar50 = fVar60;
              if (fVar60 <= fVar59) {
                fVar50 = fVar59;
              }
              fVar68 = fVar60;
              if (fVar59 <= fVar60) {
                fVar68 = fVar59;
              }
              fVar59 = (float)(-(uint)NAN(fVar59) & (uint)fVar60 |
                              ~-(uint)NAN(fVar59) & (uint)fVar68);
              fVar50 = (fVar50 - fVar59) / (float)(uVar19 + (uVar19 == 0));
              fVar60 = fVar50;
              if (fVar50 <= _DAT_142e37934) {
                fVar60 = _DAT_142e37934;
              }
              auVar54._4_4_ = fVar48;
              auVar54._0_4_ = fVar48;
              auVar54._8_4_ = fVar58;
              auVar54._12_4_ = fVar58;
              auVar55._4_12_ = auVar54._4_12_;
              auVar55._0_4_ = (fVar48 - fVar59) / fVar60;
              fVar48 = (float)pub_142e329c0(auVar55._0_8_);
              fVar48 = fVar48 * fVar50 + fVar59;
code_r0x0001408e424a:
              puVar32 = (undefined4 *)plVar45[0x2b];
              goto joined_r0x0001408e3ddc;
            }
          }
          pdb_142dc8420(puVar32,puVar34,(undefined4 *)plVar45[0x37],&UNK_14301b5b0);
code_r0x0001408e4774:
                    /* WARNING: Does not return */
          pcVar10 = (code *)invalidInstructionException();
          (*pcVar10)();
        case 3:
          if (puVar33 < puVar9) {
            puVar33 = (undefined4 *)((longlong)puVar33 + 1);
            lVar22 = (longlong)puVar33 - (longlong)puVar32;
            if (puVar32 <= puVar33) {
              lStack_340 = lVar22;
              if (lVar22 != 2) {
                pdb_142dc7fb4(0,&lStack_340,&UNK_14301b628,0);
                goto code_r0x0001408e4774;
              }
              uStack_140 = *(undefined4 *)(lVar21 + 8 + (longlong)puVar32 * 0xc);
              uStack_148 = *(undefined8 *)(lVar21 + (longlong)puVar32 * 0xc);
              fStack_218 = *(float *)(lVar21 + 0x14 + (longlong)puVar32 * 0xc);
              uStack_220 = *(undefined8 *)(lVar21 + 0xc + (longlong)puVar32 * 0xc);
              pdb_1408a7b10(&uStack_1c8,lVar18 + -0x80,&uStack_148,&uStack_220,lStack_238,lStack_200
                            ,(int)plVar45[0x44],*(undefined4 *)((longlong)plVar45 + 0x224));
              fVar60 = uStack_1c8._4_4_;
              fVar50 = (float)uStack_1b8;
              fVar68 = (float)uStack_1c0 - uStack_1b8._4_4_;
              fVar59 = fVar68;
              if ((float)uStack_1b8 <= uStack_1c8._4_4_) {
                fVar59 = uStack_1b8._4_4_ - (float)uStack_1c0;
              }
              fVar70 = (float)uStack_1c8 - uStack_1c0._4_4_;
              fVar61 = (float)(~-(uint)(uStack_1c8._4_4_ < (float)uStack_1b8) &
                               (uint)(uStack_1c0._4_4_ - (float)uStack_1c8) |
                              -(uint)(uStack_1c8._4_4_ < (float)uStack_1b8) & (uint)fVar70);
              fVar69 = _DAT_142e36f28 / SQRT(fVar59 * fVar59 + fVar61 * fVar61);
              if ((int)fVar69 - 1U < 0x7fffff ||
                  (int)ABS(fVar69) - 0x800000U < 0x7f000000 && -1 < (int)fVar69) {
                fVar61 = fVar61 * fVar69;
                fVar59 = fVar59 * fVar69;
              }
              else {
                fVar59 = 0.0;
                fVar61 = 0.0;
              }
              uStack_148 = CONCAT44(fVar59,fVar61);
              pdb_140df4520(&uStack_220,&uStack_148);
              fVar59 = fVar60 - fVar50;
              fVar59 = (float)pub_142e329c0(SQRT(fVar68 * fVar68 + fVar59 * fVar59 + fVar70 * fVar70
                                                ) / _DAT_1430132b0);
              uVar19 = 0;
              if (0.0 <= fVar59) {
                uVar19 = (longlong)(fVar59 - _DAT_142e36f2c) & (longlong)fVar59 >> 0x3f |
                         (longlong)fVar59;
              }
              if (_DAT_142e36f30 < fVar59) {
                uVar19 = 0xffffffffffffffff;
              }
              if (uVar19 < 4) {
                uVar19 = 3;
              }
              fVar59 = (fVar50 - fVar60) / (float)(uVar19 - 1);
              auVar52._4_4_ = fVar48;
              auVar52._0_4_ = fVar48;
              auVar52._8_4_ = fVar58;
              auVar52._12_4_ = fVar58;
              auVar53._4_12_ = auVar52._4_12_;
              fVar58 = fVar59;
              if (fVar59 <= _DAT_142e37934) {
                fVar58 = _DAT_142e37934;
              }
              auVar53._0_4_ = (fVar48 - fVar60) / fVar58;
              fVar48 = (float)pub_142e329c0(auVar53._0_8_);
              fVar71 = fVar71 + (float)uStack_220 * _DAT_1430151c0;
              fVar48 = fVar48 * fVar59 + fVar60 +
                       (float)((ulonglong)uStack_220 >> 0x20) * _UNK_1430151c4;
              fVar49 = fVar49 + fStack_218 * _DAT_142e3787c;
              goto code_r0x0001408e424a;
            }
          }
          pdb_142dc8420(puVar32,puVar33,puVar9,&UNK_14301b610);
          goto code_r0x0001408e4774;
        default:
          puVar32 = (undefined4 *)plVar45[0x2b];
joined_r0x0001408e3ddc:
          if (puVar32 <= puVar42) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(puVar42,puVar32,&UNK_14301b648);
          }
          if (puVar32 <= (undefined4 *)((longlong)puVar42 + 1)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2((undefined4 *)((longlong)puVar42 + 1),puVar32,&UNK_14301b648);
          }
          fVar58 = *(float *)(*plVar20 + (longlong)puVar42 * 4);
          fVar59 = *(float *)(*plVar20 + 4 + (longlong)puVar42 * 4);
          pdb_140df4520(&uStack_1c8,&uStack_338);
          fVar50 = uStack_1c8._4_4_;
          fVar60 = (float)uStack_1c8;
          fVar47 = fVar47 * ((fVar59 - fVar58) * extraout_XMM0_Da + fVar58) * _DAT_142e36f50;
          fVar58 = (float)uStack_1c0 * fVar47;
          pdb_1409015a0();
          uVar51 = pdb_1409015c0();
          uStack_220 = CONCAT44(uStack_220._4_4_,uVar51);
          pdb_1409015e0(&uStack_1c8,&uStack_220);
          uStack_1e0 = fVar49 + fVar58;
          uStack_1f8 = (undefined1 (*) [16])CONCAT44(uStack_1c8._4_4_,(float)uStack_1c8);
          uStack_1f0 = (undefined1 (*) [16])CONCAT44(uStack_1c0._4_4_,(float)uStack_1c0);
          pauStack_1e8 = (undefined1 (*) [16])
                         CONCAT44(fVar48 + fVar47 * fVar50,fVar71 + fVar47 * fVar60);
          uStack_1dc = 0x3f800000;
          uStack_1d8 = 0x3f800000;
          uStack_1d4 = 0x3f800000;
        }
      }
      piVar30 = (int *)pdb_140315970(&pauStack_258);
      if (*piVar30 == 5) {
        lVar22 = *(longlong *)(lStack_108 + 0x10) * 0x150;
        lVar18 = *(longlong *)(lStack_108 + 8);
        do {
          lVar21 = lVar18;
          if (lVar22 == 0) goto LAB_1408e439c;
          lVar18 = lVar21 + 0x150;
          lVar22 = lVar22 + -0x150;
        } while (((*(int *)(lVar21 + 0x128) != iVar7) || (*(int *)(lVar21 + 300) != iVar8)) ||
                (*(char *)(lVar21 + 0x148) == '\0'));
        pdb_140c413c0(&pauStack_258);
      }
LAB_1408e439c:
      puVar23 = (undefined8 *)pdb_140c45fd0(uStack_268,(ulonglong)puStack_100 & 0xffffffff);
      if (puVar23 == (undefined8 *)0x0) {
LAB_1408e43d7:
        *puStack_210 = plStack_110._0_4_;
        uStack_1b0 = CONCAT44(uStack_1dc,uStack_1e0);
        lStack_1a8 = CONCAT44(uStack_1d4,uStack_1d8);
        lStack_1a0 = lStack_1d0;
        uStack_1b8 = pauStack_1e8;
        uStack_1c8._0_4_ = SUB84(uStack_1f8,0);
        uStack_1c8._4_4_ = (float)((ulonglong)uStack_1f8 >> 0x20);
        uStack_1c0._0_4_ = SUB84(uStack_1f0,0);
        uStack_1c0._4_4_ = (float)((ulonglong)uStack_1f0 >> 0x20);
        pdb_140c45c90(uStack_208,(ulonglong)puStack_100 & 0xffffffff,&uStack_1c8);
        pdb_140c413c0(&pauStack_258);
      }
      else {
        cVar15 = pdb_140df4600(puVar23,&uStack_1f8);
        if (cVar15 == '\0') goto LAB_1408e43d7;
        *puStack_210 = plStack_110._0_4_;
        uStack_1b8 = (undefined1 (*) [16])puVar23[2];
        uStack_1b0 = puVar23[3];
        lStack_1a8 = puVar23[4];
        lStack_1a0 = puVar23[5];
        uStack_1c8._0_4_ = (float)*puVar23;
        uStack_1c8._4_4_ = (float)((ulonglong)*puVar23 >> 0x20);
        uStack_1c0._0_4_ = (float)puVar23[1];
        uStack_1c0._4_4_ = (float)((ulonglong)puVar23[1] >> 0x20);
        pdb_140c45c90(uStack_208,(ulonglong)puStack_100 & 0xffffffff,&uStack_1c8);
      }
    }
  }
  if (cStack_f1 != '\0') {
    plVar20 = (longlong *)pdb_140e97000();
    if ((char)plVar20[0xd] != '\x01') {
      puVar23 = (undefined8 *)0x0;
      plVar20 = (longlong *)pdb_142dde6e0(plVar20,0);
      if (plVar20 == (longlong *)0x0) {
LAB_1408e46bb:
        puVar28 = (undefined8 *)pdb_142dc7890(&UNK_14330e598);
LAB_1408e46c8:
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(puVar23,puVar28,&UNK_143311df8);
      }
    }
    puVar23 = puStack_2a0;
    if (*plVar20 != 0) {
LAB_1408e45c9:
      uVar19 = pdb_142dc8090(&UNK_14330e608);
LAB_1408e45d5:
      lVar18 = (longlong)puVar23 << 0x20;
LAB_1408e45d9:
      uStack_1c8._0_4_ = (float)lVar18;
      uStack_1c8._4_4_ = (float)((ulonglong)lVar18 >> 0x20);
      uStack_1c0._0_4_ = (float)uVar19;
      uStack_1c0._4_4_ = (float)(uVar19 >> 0x20);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14301b770,0x2b,&uStack_1c8,&UNK_14301b750,&UNK_14301b6d8);
    }
    *plVar20 = -1;
    puStack_100 = (ulonglong *)plVar20;
    pdb_140e95370(plVar20 + 1);
    *puStack_100 = *puStack_100 + 1;
  }
  return;
}

