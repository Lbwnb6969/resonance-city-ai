// VA 0x140892960, PDB extent 6399 bytes
// system_decorator::decorator_visual::decorator_clutter::generate_decorator_clutter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/decorator_clutter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::decorator_clutter::generate_decorator_clutter
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/decorator_clutter.rs
   Extent: 6399 */

void pdb_140892960(undefined1 (*param_1) [16],undefined8 *param_2,undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16],longlong *param_5,undefined8 param_6,
                  undefined8 *param_7)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  char cVar16;
  undefined1 uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 (*pauVar21) [16];
  undefined8 uVar22;
  byte *pbVar23;
  longlong *plVar24;
  ulonglong uVar25;
  int *piVar26;
  undefined8 *puVar27;
  undefined1 (*pauVar28) [16];
  undefined1 (*pauVar29) [16];
  undefined1 (*pauVar30) [16];
  uint uVar31;
  uint uVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  longlong lVar36;
  ushort uVar37;
  longlong lVar38;
  undefined1 (*unaff_R12) [16];
  longlong *plVar39;
  uint uVar40;
  undefined1 (*pauVar41) [16];
  byte bVar42;
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  char unaff_XMM6_Ba;
  char unaff_XMM6_Bb;
  char unaff_XMM6_Bc;
  char unaff_XMM6_Bd;
  char unaff_XMM6_Be;
  char unaff_XMM6_Bf;
  char unaff_XMM6_Bg;
  char unaff_XMM6_Bh;
  char unaff_XMM6_Bi;
  char unaff_XMM6_Bj;
  char unaff_XMM6_Bk;
  char unaff_XMM6_Bl;
  char unaff_XMM6_Bm;
  char unaff_XMM6_Bn;
  char unaff_XMM6_Bo;
  char unaff_XMM6_Bp;
  undefined1 (*in_stack_fffffffffffffb78) [16];
  undefined1 auStack_470 [32];
  undefined8 *puStack_450;
  undefined8 uStack_438;
  undefined8 uStack_430;
  longlong lStack_408;
  undefined1 (*pauStack_400) [16];
  undefined8 *puStack_3f8;
  undefined1 (*pauStack_3f0) [16];
  undefined8 *puStack_3e8;
  undefined1 (*pauStack_3e0) [16];
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  uint3 uStack_388;
  undefined4 uStack_385;
  undefined4 uStack_381;
  undefined4 uStack_37d;
  undefined1 uStack_379;
  longlong lStack_378;
  undefined1 (*pauStack_370) [16];
  undefined8 *puStack_368;
  undefined1 (*pauStack_360) [16];
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  longlong lStack_308;
  undefined1 (*pauStack_300) [16];
  undefined8 *puStack_2f8;
  undefined1 (*pauStack_2f0) [16];
  longlong lStack_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 *puStack_2d8;
  undefined1 (*pauStack_2d0) [16];
  byte *pbStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined1 (*pauStack_2b0) [16];
  undefined8 uStack_2a8;
  longlong lStack_2a0;
  undefined8 uStack_298;
  undefined4 *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_258;
  undefined1 (*pauStack_250) [16];
  longlong lStack_248;
  undefined1 (*pauStack_240) [16];
  undefined8 *puStack_238;
  undefined1 (*pauStack_230) [16];
  undefined8 *puStack_228;
  undefined1 (*pauStack_220) [16];
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 (*pauStack_1c0) [16];
  uint7 uStack_1b8;
  undefined1 uStack_1b1;
  undefined7 uStack_1b0;
  undefined1 uStack_1a9;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 uStack_18c;
  longlong lStack_188;
  undefined1 (*pauStack_180) [16];
  longlong lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 (*pauStack_158) [16];
  longlong lStack_150;
  longlong *plStack_148;
  byte *pbStack_140;
  undefined1 (*pauStack_138) [16];
  undefined1 (*pauStack_130) [16];
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  float fStack_110;
  undefined3 uStack_10c;
  longlong *plStack_108;
  byte bStack_f9;
  undefined4 uStack_f8;
  char cStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  puVar27 = param_2;
  cStack_f2 = pdb_140e94b40();
  plVar39 = param_2;
  if (cStack_f2 == '\0') goto LAB_140892b81;
  unaff_R12 = (undefined1 (*) [16])0x51;
  lVar19 = pdb_140894540(0x51);
  puVar33 = &UNK_143012c50;
  if (lVar19 == 1) {
    if ((undefined8 *)0x51 < puVar27) {
LAB_140893a77:
      pdb_142dc8070(&UNK_143012c50,0x51,0);
LAB_140893a97:
      pdb_142dc8070(&UNK_143012c50,0x51);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar20 = pdb_140894540(puVar27);
    if ((uVar20 & 1) != 0) {
      if ((undefined *)0x51 < (undefined *)((longlong)puVar27 + 2)) goto LAB_140893a97;
      unaff_R12 = (undefined1 (*) [16])(0x4f - (longlong)puVar27);
      puVar33 = &UNK_143012c52 + (longlong)puVar27;
    }
  }
  puVar34 = &UNK_143012bd5;
  plVar39 = (longlong *)&UNK_143012b93;
  do {
    bVar42 = puVar34[-1];
    uVar18 = (uint)(char)bVar42;
    plStack_108 = param_2;
    if ((char)bVar42 < '\0') {
      bVar1 = puVar34[-2];
      if ((char)bVar1 < -0x40) {
        bVar2 = puVar34[-3];
        if ((char)bVar2 < -0x40) {
          pbVar23 = puVar34 + -4;
          puVar34 = puVar34 + -4;
          uVar18 = bVar2 & 0x3f | (*pbVar23 & 7) << 6;
        }
        else {
          puVar34 = puVar34 + -3;
          uVar18 = bVar2 & 0xf;
        }
        uVar18 = bVar1 & 0x3f | uVar18 << 6;
      }
      else {
        puVar34 = puVar34 + -2;
        uVar18 = bVar1 & 0x1f;
      }
      uVar18 = (uint)(bVar42 & 0x3f) | uVar18 << 6;
      if (uVar18 != 0x5c) goto LAB_140892ae4;
LAB_140892af6:
      puVar35 = puVar34 + -0x143012b92;
      if ((undefined *)0x42 < puVar35) {
        pdb_142dc8070(&UNK_143012b93,0x42,puVar35,0x42,&UNK_143012d00);
        goto LAB_140893a77;
      }
      pauVar41 = (undefined1 (*) [16])(0x42 - (longlong)puVar35);
      plVar39 = (longlong *)(puVar34 + 1);
      goto LAB_140892b19;
    }
    puVar34 = puVar34 + -1;
    if (uVar18 == 0x5c) goto LAB_140892af6;
LAB_140892ae4:
    if (uVar18 == 0x2f) goto LAB_140892af6;
  } while (puVar34 != &UNK_143012b93);
  pauVar41 = (undefined1 (*) [16])0x42;
LAB_140892b19:
  pauVar21 = (undefined1 (*) [16])pdb_140e97000();
  if (pauVar21[6][8] != '\x01') goto LAB_1408939d9;
  while (*(longlong *)*pauVar21 != 0) {
LAB_1408939cd:
    pauVar21 = (undefined1 (*) [16])pdb_142dc8090(&UNK_14330e608);
LAB_1408939d9:
    pauVar21 = (undefined1 (*) [16])pdb_142dde6e0(pauVar21,0);
    if (pauVar21 == (undefined1 (*) [16])0x0) {
LAB_1408939ec:
      pdb_142dc7890(&UNK_14330e598);
LAB_1408939f9:
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(0x10,0x90);
    }
  }
  *(undefined8 *)*pauVar21 = 0xffffffffffffffff;
  pauStack_158 = pauVar21;
  uStack_170 = pdb_140e94f10(*pauVar21 + 8,puVar33,unaff_R12,plVar39,pauVar41,1,0);
  *(longlong *)*pauStack_158 = *(longlong *)*pauStack_158 + 1;
  plVar39 = plStack_108;
  in_stack_fffffffffffffb78 = pauVar41;
LAB_140892b81:
  pdb_140c41140(&puStack_258,*(undefined8 *)*param_1);
  uVar14 = _DAT_1430129a0;
  uVar13 = _DAT_143012980;
  uVar12 = _DAT_143012950;
  uVar11 = _DAT_143012940;
  uVar10 = _DAT_143012930;
  uVar9 = _DAT_143012920;
  auVar8 = _DAT_142e3c660;
  uVar7 = _DAT_142e36f28;
  bStack_f9 = (byte)puStack_258;
  uStack_2a8 = *(undefined8 *)*param_4;
  lStack_178 = *param_5;
  lStack_188 = param_5[1];
  uStack_18c = *(undefined4 *)(param_3[1] + 0xc);
  uStack_298 = *(undefined8 *)*param_3;
  puStack_290 = *(undefined4 **)param_3[1];
  uStack_288 = *plVar39;
  uStack_280 = *param_7;
  iVar5 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  unaff_XMM6_Ba = (char)iVar5;
  unaff_XMM6_Bb = (char)((uint)iVar5 >> 8);
  unaff_XMM6_Bc = (char)((uint)iVar5 >> 0x10);
  unaff_XMM6_Bd = (char)((uint)iVar5 >> 0x18);
  iVar5 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                 CONCAT13(unaff_XMM6_Bh,
                          CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  unaff_XMM6_Be = (char)iVar5;
  unaff_XMM6_Bf = (char)((uint)iVar5 >> 8);
  unaff_XMM6_Bg = (char)((uint)iVar5 >> 0x10);
  unaff_XMM6_Bh = (char)((uint)iVar5 >> 0x18);
  iVar5 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                 CONCAT13(unaff_XMM6_Bl,
                          CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  unaff_XMM6_Bi = (char)iVar5;
  unaff_XMM6_Bj = (char)((uint)iVar5 >> 8);
  unaff_XMM6_Bk = (char)((uint)iVar5 >> 0x10);
  unaff_XMM6_Bl = (char)((uint)iVar5 >> 0x18);
  iVar5 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                 CONCAT13(unaff_XMM6_Bp,
                          CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  unaff_XMM6_Bm = (char)iVar5;
  unaff_XMM6_Bn = (char)((uint)iVar5 >> 8);
  unaff_XMM6_Bo = (char)((uint)iVar5 >> 0x10);
  unaff_XMM6_Bp = (char)((uint)iVar5 >> 0x18);
  uVar18 = (uint)DAT_142e3c660;
  uVar4 = DAT_142e3c660._4_4_;
  puVar33 = (undefined *)((ulonglong)pauStack_220 & 0xffff);
  lStack_150 = lStack_248;
  pauVar28 = pauStack_250;
  pauVar30 = pauStack_250;
  param_4 = pauStack_230;
  pauVar21 = (undefined1 (*) [16])CONCAT44(uStack_214,uStack_218);
  puVar27 = puStack_238;
  pauVar41 = pauStack_240;
  pauVar29 = pauStack_240;
  if (lStack_248 == 2) goto LAB_140892daa;
LAB_140892c93:
  if (puVar27 != (undefined8 *)0x0) {
    if (pauVar21 == (undefined1 (*) [16])0x0) {
      pauVar21 = (undefined1 (*) [16])0x0;
    }
    else {
      if ((short)puVar33 == 0) {
        do {
          auVar43 = *param_4;
          puVar27 = puVar27 + -0x130;
          param_4 = param_4 + 1;
          uVar31 = (ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
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
                            (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar43[0xf] >> 7) << 0xf) ^ 0xffff;
          puVar33 = (undefined *)(ulonglong)uVar31;
        } while (uVar31 == 0);
      }
      uVar31 = 0;
      uVar32 = (uint)puVar33;
      for (uVar40 = uVar32; (uVar40 & 1) == 0; uVar40 = uVar40 >> 1 | 0x80000000) {
        uVar31 = uVar31 + 1;
      }
      uVar20 = (ulonglong)uVar31;
      unaff_R12 = (undefined1 (*) [16])(uVar20 * -0x98);
      pauVar29 = pauVar28;
      pauStack_138 = pauVar21;
      puStack_128 = puVar27;
      lVar19 = pdb_140c44590(puVar27 + uVar20 * -0x13 + -0x13);
      puVar33 = (undefined *)(ulonglong)(uVar32 - 1 & uVar32);
      pauStack_138 = (undefined1 (*) [16])(pauStack_138[-1] + 0xf);
      pauVar21 = pauStack_138;
      param_3 = pauVar28;
      if (lVar19 != 3) {
        pauVar30 = (undefined1 (*) [16])(puStack_128 + uVar20 * -0x13 + -0x12);
        pauStack_180 = pauVar28;
        pauStack_130 = pauVar41;
        goto LAB_140892df0;
      }
    }
  }
  pauVar30 = pauVar28;
  if (lStack_150 != 1) {
    puVar27 = (undefined8 *)0x0;
    pauVar29 = pauVar41;
    goto LAB_140892daa;
  }
  lStack_150 = 1;
  pauStack_130 = (undefined1 (*) [16])0x0;
  puVar27 = (undefined8 *)0x0;
  pauVar29 = pauStack_130;
  if (pauVar41 == (undefined1 (*) [16])0x0) goto LAB_140892daa;
  puStack_128 = (undefined8 *)0x0;
  pauStack_130 = (undefined1 (*) [16])0x0;
  lVar19 = 1;
  pauVar30 = pauVar41;
  pauVar29 = pauVar21;
  pauStack_180 = pauVar28;
  pauStack_138 = pauVar21;
LAB_140892df0:
  do {
    lStack_308 = lVar19;
    pauStack_300 = pauVar29;
    lStack_2a0 = lVar19;
    pauStack_1c0 = pauVar29;
    pdb_140c3ba10(&puStack_258,pauVar30);
    param_3 = (undefined1 (*) [16])((ulonglong)pauStack_240 & 0xffff);
    plStack_108 = puStack_238;
    pauStack_158 = pauStack_230;
    pauStack_2b0 = pauStack_230 + 5;
    unaff_R12 = pauStack_250;
    plVar39 = puStack_258;
LAB_140892e4f:
    pauVar41 = pauStack_158;
    if (plStack_108 != (undefined8 *)0x0) {
      if ((short)param_3 == 0) {
        do {
          auVar43 = *unaff_R12;
          plVar39 = plVar39 + -8;
          unaff_R12 = unaff_R12 + 1;
          uVar31 = (ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
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
                            (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar43[0xf] >> 7) << 0xf) ^ 0xffff;
          param_3 = (undefined1 (*) [16])(ulonglong)uVar31;
        } while (uVar31 == 0);
      }
      iVar5 = 0;
      uVar40 = (uint)param_3;
      for (uVar31 = uVar40; (uVar31 & 1) == 0; uVar31 = uVar31 >> 1 | 0x80000000) {
        iVar5 = iVar5 + 1;
      }
      iVar5 = *(int *)((longlong)plVar39 + (-4 - (ulonglong)(uint)(iVar5 << 2)));
      puStack_258 = (undefined8 *)CONCAT44(puStack_258._4_4_,iVar5);
      if (*(longlong *)(pauStack_158[4] + 8) == 0) {
LAB_14089390e:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143012b38);
      }
      param_3 = (undefined1 (*) [16])(ulonglong)(uVar40 - 1 & uVar40);
      plStack_108 = (longlong *)((longlong)plStack_108 + -1);
      uVar20 = pdb_1400aede0(pauStack_2b0,&puStack_258);
      lVar19 = *(longlong *)pauVar41[3];
      bVar42 = (byte)(uVar20 >> 0x39);
      auVar43 = ZEXT216(CONCAT11(bVar42,bVar42));
      auVar43 = pshuflw(auVar43,auVar43,0);
      lVar36 = 0;
      do {
        uVar20 = uVar20 & *(ulonglong *)(pauVar41[3] + 8);
        auVar47 = *(undefined1 (*) [16])(lVar19 + uVar20);
        auVar46[0] = -(auVar47[0] == auVar43[0]);
        auVar46[1] = -(auVar47[1] == auVar43[1]);
        auVar46[2] = -(auVar47[2] == auVar43[2]);
        auVar46[3] = -(auVar47[3] == auVar43[3]);
        auVar46[4] = -(auVar47[4] == auVar43[4]);
        auVar46[5] = -(auVar47[5] == auVar43[5]);
        auVar46[6] = -(auVar47[6] == auVar43[6]);
        auVar46[7] = -(auVar47[7] == auVar43[7]);
        auVar46[8] = -(auVar47[8] == auVar43[0]);
        auVar46[9] = -(auVar47[9] == auVar43[1]);
        auVar46[10] = -(auVar47[10] == auVar43[2]);
        auVar46[0xb] = -(auVar47[0xb] == auVar43[3]);
        auVar46[0xc] = -(auVar47[0xc] == auVar43[4]);
        auVar46[0xd] = -(auVar47[0xd] == auVar43[5]);
        auVar46[0xe] = -(auVar47[0xe] == auVar43[6]);
        auVar46[0xf] = -(auVar47[0xf] == auVar43[7]);
        uVar37 = (ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe | (ushort)(auVar46[0xf] >> 7) << 0xf
        ;
        uVar31 = (uint)uVar37;
        while (uVar37 != 0) {
          uVar40 = 0;
          for (uVar32 = uVar31; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
            uVar40 = uVar40 + 1;
          }
          lVar38 = (uVar40 + uVar20 & *(ulonglong *)(pauVar41[3] + 8)) * -0x68;
          if (iVar5 == *(int *)(lVar19 + -0x68 + lVar38)) {
            lVar19 = lVar19 + lVar38;
            param_1 = pauVar41;
            if (*(int *)(lVar19 + -0x60) != 6) goto LAB_140892e4f;
            lVar36 = (ulonglong)*(byte *)(lVar19 + -0x2e) - 1;
            if ((ulonglong)*(byte *)(lVar19 + -0x2e) < 2) {
              lVar36 = 0;
            }
            if (lVar36 == 0) goto LAB_140892e4f;
            param_1 = *(undefined1 (**) [16])(lVar19 + -0x58);
            if ((int)lVar36 == 1) {
              uVar22 = pdb_140c413f0(&lStack_308);
              uVar20 = pdb_140b54b40(uStack_2a8,uVar22);
              if (((((((uVar20 & 0xffffffff) == 0) ||
                     (uVar25 = uVar20 & 0xffffffff ^ 0xffffffff,
                     *(ulonglong *)(lStack_188 + 0x10) <= uVar25)) ||
                    (piVar26 = (int *)(uVar25 * 0x18 + *(longlong *)(lStack_188 + 8)),
                    piVar26[4] != (int)(uVar20 >> 0x20))) ||
                   ((*piVar26 == 0 ||
                    (uVar20 = *(ulonglong *)(piVar26 + 2),
                    *(ulonglong *)(lStack_178 + 0x38) <= (uVar20 & 0xffffffff))))) ||
                  (((*(ulonglong *)
                      (*(longlong *)(lStack_178 + 0x28) + (uVar20 >> 6 & 0x3ffffff) * 8) >>
                     (uVar20 & 0x3f) & 1) == 0 ||
                   (cVar16 = pdb_140b77b50((ulonglong)(uint)~piVar26[1] * 0x58 +
                                           *(longlong *)
                                            (*(longlong *)
                                              (*(longlong *)(lStack_188 + 0x1a0) + 0x18 +
                                              (uVar20 >> 0x20) * 0x48) + 0x10 +
                                            ~*(ulonglong *)
                                              (*(longlong *)
                                                (*(longlong *)(lStack_188 + 0x1a0) + 0x38 +
                                                (uVar20 >> 0x20) * 0x48) +
                                              *(longlong *)(lStack_178 + 0x110) * 8) * 0x30)),
                   cVar16 == '\0')))) && (cVar16 = pdb_140c269b0(param_1), cVar16 != '\t'))
              goto LAB_140892e4f;
            }
            *puStack_290 = uStack_18c;
            plStack_148 = (longlong *)
                          pdb_1408f3750(uStack_298,iVar5,lStack_2a0,pauStack_1c0,
                                        (ulonglong)in_stack_fffffffffffffb78 & 0xffffffffffffff00);
            pdb_140c45ec0(&puStack_2f8,uStack_288,iVar5,&UNK_143012bd8);
            pdb_140c261e0(auStack_470,uStack_280,param_1);
            puVar27 = puStack_450;
            uStack_278 = uStack_438;
            uStack_270 = uStack_430;
            uStack_1a8 = puStack_450[10];
            uStack_1a0 = puStack_450[0xb];
            uStack_1b8 = (uint7)puStack_450[8];
            uStack_1b1 = (undefined1)((ulonglong)puStack_450[8] >> 0x38);
            uStack_1b0 = (undefined7)puStack_450[9];
            uStack_1a9 = (undefined1)((ulonglong)puStack_450[9] >> 0x38);
            uVar17 = pdb_140c269b0(param_1);
            uVar22 = _DAT_143012910;
            uVar15 = _DAT_143007998;
            switch(uVar17) {
            case 0:
              break;
            default:
              goto LAB_140893214;
            case 7:
              uVar22 = _UNK_1430129e0;
              uVar15 = _UNK_1430129f0;
              break;
            case 0xd:
            case 0x13:
            case 0x2b:
              uVar22 = _UNK_143012a00;
              uVar15 = _DAT_143007998;
              break;
            case 0xe:
              uVar22 = _UNK_1430129c0;
              uVar15 = _UNK_1430129d0;
              break;
            case 0x14:
              uVar22 = _UNK_1430129b0;
              uVar15 = uVar7;
              break;
            case 0x17:
            case 0x18:
            case 0x28:
              uVar22 = _UNK_143012990;
              uVar15 = uVar14;
              break;
            case 0x19:
            case 0x1a:
            case 0x29:
              uVar22 = uVar13;
              uVar15 = uVar7;
              break;
            case 0x22:
              uVar22 = _UNK_143012960;
              uVar15 = _UNK_143012970;
              break;
            case 0x23:
              uVar22 = uVar11;
              uVar15 = uVar12;
              break;
            case 0x24:
            case 0x2a:
              uVar22 = uVar9;
              uVar15 = uVar10;
            }
            uStack_2b8 = uVar15;
            uStack_2c0 = uVar22;
            pdb_140df4370(&uStack_1b8,&uStack_2c0);
LAB_140893214:
            uStack_114 = uStack_1a0._4_4_ - (float)uStack_1a0;
            uStack_118 = (float)uStack_1a8;
            fStack_110 = uStack_1a8._4_4_;
            fVar44 = uStack_114 * 0.0 * _DAT_142e36f60;
            puStack_258 = (undefined8 *)CONCAT44(uStack_114 * _UNK_142e36f64,fVar44);
            pauStack_250._0_4_ = fVar44;
            pdb_1409efe30(&uStack_388,&uStack_118,&puStack_258);
            fVar44 = uStack_1a0._4_4_ - (float)uStack_1a0;
            fStack_110 = uStack_1a8._4_4_ + _DAT_142e36f38;
            if (uStack_1a8._4_4_ + _DAT_142e36f38 <= _DAT_142e3b1d8) {
              fStack_110 = _DAT_142e3b1d8;
            }
            auVar43._0_4_ = (float)uStack_1a8 + _DAT_142e61230;
            auVar43._4_4_ = fVar44 + _UNK_142e61234;
            auVar43._8_4_ = (float)uStack_1a0 + _UNK_142e61238;
            auVar43._12_4_ = uStack_1a0._4_4_ + _UNK_142e6123c;
            auVar47 = maxps(auVar8,auVar43);
            uVar20 = CONCAT44(~-(uint)NAN(auVar43._4_4_) & auVar47._4_4_,
                              ~-(uint)NAN(auVar43._0_4_) & auVar47._0_4_) |
                     CONCAT44(uVar4 & -(uint)NAN(auVar43._4_4_),uVar18 & -(uint)NAN(auVar43._0_4_));
            uStack_118 = (undefined4)uVar20;
            uStack_114 = (float)(uVar20 >> 0x20);
            fVar48 = fVar44 * 0.0 * _DAT_142e36f60;
            puStack_258 = (undefined8 *)CONCAT44(fVar44 * _UNK_142e36f64,fVar48);
            pauStack_250 = (undefined1 (*) [16])CONCAT44(pauStack_250._4_4_,fVar48);
            uStack_f1 = 1;
            pdb_1409efe30(&lStack_408,&uStack_118,&puStack_258);
            puStack_268 = puVar27;
            puStack_258 = (undefined8 *)0x1;
            pauStack_250 = (undefined1 (*) [16])0x1;
            uStack_1d8 = uStack_398;
            uStack_1d0 = uStack_390;
            uStack_1e8 = uStack_3a8;
            uStack_1e0 = uStack_3a0;
            uStack_1f8 = uStack_3b8;
            uStack_1f0 = uStack_3b0;
            uStack_208 = uStack_3c8;
            uStack_200 = uStack_3c0;
            uStack_218 = uStack_3d8;
            uStack_214 = uStack_3d4;
            uStack_210 = uStack_3d0;
            uStack_20c = uStack_3cc;
            puStack_228 = puStack_3e8;
            pauStack_220 = pauStack_3e0;
            puStack_238 = puStack_3f8;
            pauStack_230 = pauStack_3f0;
            lStack_248 = lStack_408;
            pauStack_240 = pauStack_400;
            pdb_14007ee60();
            pbVar23 = pub_1406abab0(0x90,0x10);
            if (pbVar23 == (byte *)0x0) goto LAB_1408939f9;
            pub_142e32760(pbVar23,&puStack_258,0x90);
            uStack_1d8 = uStack_318;
            uStack_1d0 = uStack_310;
            uStack_1e8 = uStack_328;
            uStack_1e0 = uStack_320;
            uStack_1f8 = uStack_338;
            uStack_1f0 = uStack_330;
            uStack_208 = uStack_348;
            uStack_200 = uStack_340;
            lStack_248 = CONCAT17((undefined1)uStack_381,CONCAT43(uStack_385,uStack_388));
            pauStack_240 = (undefined1 (*) [16])
                           CONCAT17(uStack_379,CONCAT43(uStack_37d,uStack_381._1_3_));
            uStack_218 = uStack_358;
            uStack_214 = uStack_354;
            uStack_210 = uStack_350;
            uStack_20c = uStack_34c;
            puStack_228 = puStack_368;
            pauStack_220 = pauStack_360;
            puStack_238 = (undefined8 *)lStack_378;
            pauStack_230 = pauStack_370;
            puStack_258 = (undefined8 *)0x1;
            pauStack_250 = (undefined1 (*) [16])0x1;
            pbStack_2c8 = pbVar23;
            uStack_120 = pbVar23;
            pdb_14007ee60();
            pbStack_140 = pub_1406abab0(0x90,0x10);
            if (pbStack_140 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(0x10,0x90);
            }
            in_stack_fffffffffffffb78 = (undefined1 (*) [16])&puStack_258;
            pub_142e32760(pbStack_140,in_stack_fffffffffffffb78,0x90);
            plVar24 = plStack_148;
            fStack_110 = (float)uStack_2e0;
            uStack_118 = (undefined4)lStack_2e8;
            uStack_114 = (float)((ulonglong)lStack_2e8 >> 0x20);
            puStack_258 = puStack_2f8;
            pauStack_250 = pauStack_2f0;
            pdb_1408f3120(plStack_148,uStack_120,pbStack_140,&uStack_118,in_stack_fffffffffffffb78);
            puVar27 = puStack_268;
            if (*plVar24 != 0 || plVar24[1] != 0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83d0(&UNK_14301ce21,0x17,&UNK_14301ce30);
            }
            plVar24[1] = 0;
            *plVar24 = 1;
            plVar24[6] = (longlong)puStack_2d8;
            plVar24[7] = (longlong)pauStack_2d0;
            plVar24[4] = lStack_2e8;
            plVar24[5] = CONCAT44(uStack_2dc,uStack_2e0);
            plVar24[2] = (longlong)puStack_2f8;
            plVar24[3] = (longlong)pauStack_2f0;
            pbStack_140 = (byte *)puStack_268[2];
            uStack_260 = puStack_268[3];
            pauStack_240 = (undefined1 (*) [16])CONCAT44(uStack_2dc,uStack_2e0);
            puStack_238 = puStack_2d8;
            pauStack_230 = pauStack_2d0;
            lStack_248 = lStack_2e8;
            puStack_258 = puStack_2f8;
            pauStack_250 = pauStack_2f0;
            uStack_37d = 0;
            uStack_385 = 0;
            uStack_381 = 0;
            uStack_1b8 = (uint7)uStack_388;
            uStack_1b0 = 0;
            uStack_1b1 = 0;
            cVar16 = pdb_140c269b0(param_1);
            uStack_120 = (byte *)CONCAT44(uStack_120._4_4_,1);
            if (cVar16 == '\t') {
              uStack_f8 = 0;
              uStack_168 = _DAT_142f6e3c0;
LAB_1408936cd:
              uStack_160 = 0;
            }
            else {
              cVar16 = pdb_140c269b0(param_1);
              if (cVar16 == '\v') {
                uStack_f8 = _DAT_143012a20;
                uStack_168 = _DAT_143012a10;
                goto LAB_1408936cd;
              }
              cVar16 = pdb_140c269b0(param_1);
              if (cVar16 == '\f') {
                uStack_f8 = _DAT_143012a20;
                uStack_168 = _DAT_143012a30;
                goto LAB_1408936cd;
              }
              cVar16 = pdb_140c269b0(param_1);
              if ((byte)(cVar16 - 3U) < 2) {
                uStack_f8 = _DAT_143008210;
                uStack_168 = _DAT_14300bbb0;
                goto LAB_1408936cd;
              }
              cVar16 = pdb_140c269b0(param_1);
              if (cVar16 == '\x10') {
                uStack_f8 = _DAT_14300a334;
                uStack_168 = _DAT_143012a40;
                goto LAB_1408936cd;
              }
              cVar16 = pdb_140c269b0(param_1);
              if ((byte)(cVar16 - 0x11U) < 2) {
                uStack_f8 = 0;
                uStack_168 = _DAT_143012a50;
                goto LAB_1408936cd;
              }
              cVar16 = pdb_140c269b0(param_1);
              uVar20 = (ulonglong)uStack_120 >> 0x20;
              uStack_120 = (byte *)((ulonglong)uStack_120 & 0xffffffff00000000);
              if (cVar16 == ',') {
                uStack_f8 = 0;
                uStack_120 = (byte *)CONCAT44((int)uVar20,1);
                uStack_168 = _DAT_143012a60;
                goto LAB_1408936cd;
              }
            }
            puStack_368 = puStack_238;
            pauStack_360 = pauStack_230;
            lStack_378 = lStack_248;
            pauStack_370 = pauStack_240;
            uStack_388 = (uint3)puStack_258;
            uStack_385 = (undefined4)((ulonglong)puStack_258 >> 0x18);
            uStack_381._0_1_ = (undefined1)((ulonglong)puStack_258 >> 0x38);
            uStack_381._1_3_ = SUB83(pauStack_250,0);
            uStack_37d = (undefined4)((ulonglong)pauStack_250 >> 0x18);
            uStack_379 = (undefined1)((ulonglong)pauStack_250 >> 0x38);
            uStack_118 = (undefined4)uStack_1b8;
            uStack_114 = (float)CONCAT13(uStack_1b1,(int3)(uStack_1b8 >> 0x20));
            fStack_110 = (float)uStack_1b0;
            uStack_10c = (undefined3)((uint7)uStack_1b0 >> 0x20);
            uVar22 = *puVar27;
            uVar6 = puVar27[1];
            lVar19 = plStack_148[0x18];
            if (lVar19 == plStack_148[0x16]) {
              pdb_142d8ddd0(plStack_148 + 0x16);
            }
            lVar36 = plStack_148[0x17];
            lVar38 = lVar19 * 0x170;
            *(undefined8 *)(lVar36 + lVar38) = 0;
            *(undefined8 *)(lVar36 + 0x10 + lVar38) = 0;
            *(undefined8 *)(lVar36 + 0x20 + lVar38) = 0;
            puVar27 = (undefined8 *)(lVar36 + 0x30 + lVar38);
            *puVar27 = uVar22;
            puVar27[1] = uVar6;
            *(undefined4 *)(lVar36 + 0x40 + lVar38) = 0;
            *(undefined4 *)(lVar36 + 0x50 + lVar38) = 0;
            *(undefined4 *)(lVar36 + 0x60 + lVar38) = (undefined4)uStack_120;
            *(undefined8 *)(lVar36 + 100 + lVar38) = uStack_168;
            *(undefined4 *)(lVar36 + 0x6c + lVar38) = uStack_f8;
            *(undefined4 *)(lVar36 + 0x70 + lVar38) = 2;
            *(byte **)(lVar36 + 0x90 + lVar38) = pbStack_140;
            *(undefined8 *)(lVar36 + 0x98 + lVar38) = uStack_260;
            *(undefined8 *)(lVar36 + 0xa0 + lVar38) = uStack_278;
            *(undefined8 *)(lVar36 + 0xa8 + lVar38) = uStack_270;
            puVar27 = (undefined8 *)(lVar36 + 0xb0 + lVar38);
            *puVar27 = CONCAT17((undefined1)uStack_381,CONCAT43(uStack_385,uStack_388));
            puVar27[1] = CONCAT17(uStack_379,CONCAT43(uStack_37d,uStack_381._1_3_));
            plVar24 = (longlong *)(lVar36 + 0xc0 + lVar38);
            *plVar24 = lStack_378;
            plVar24[1] = (longlong)pauStack_370;
            puVar27 = (undefined8 *)(lVar36 + 0xd0 + lVar38);
            *puVar27 = puStack_368;
            puVar27[1] = pauStack_360;
            *(undefined4 *)(lVar36 + 0xe0 + lVar38) = 0;
            *(undefined4 *)(lVar36 + 0xe8 + lVar38) = 0;
            *(undefined1 *)(lVar36 + 0x105 + lVar38) = 2;
            *(undefined4 *)(lVar36 + 0x108 + lVar38) = 0;
            *(undefined1 *)(lVar36 + 0x15c + lVar38) = 2;
            *(ulonglong *)(lVar36 + 0x15d + lVar38) = CONCAT44(uStack_114,uStack_118);
            *(ulonglong *)(lVar36 + 0x164 + lVar38) =
                 CONCAT35(uStack_10c,CONCAT41(fStack_110,uStack_114._3_1_));
            *(undefined1 *)(lVar36 + 0x16c + lVar38) = 2;
            *(undefined2 *)(lVar36 + 0x16e + lVar38) = 0;
            plStack_148[0x18] = lVar19 + 1;
            goto LAB_140892e4f;
          }
          uVar37 = (ushort)(uVar31 - 1) & (ushort)uVar31;
          uVar31 = CONCAT22((short)(uVar31 - 1 >> 0x10),uVar37);
        }
        auVar45[0] = -(auVar47[0] == unaff_XMM6_Ba);
        auVar45[1] = -(auVar47[1] == unaff_XMM6_Bb);
        auVar45[2] = -(auVar47[2] == unaff_XMM6_Bc);
        auVar45[3] = -(auVar47[3] == unaff_XMM6_Bd);
        auVar45[4] = -(auVar47[4] == unaff_XMM6_Be);
        auVar45[5] = -(auVar47[5] == unaff_XMM6_Bf);
        auVar45[6] = -(auVar47[6] == unaff_XMM6_Bg);
        auVar45[7] = -(auVar47[7] == unaff_XMM6_Bh);
        auVar45[8] = -(auVar47[8] == unaff_XMM6_Bi);
        auVar45[9] = -(auVar47[9] == unaff_XMM6_Bj);
        auVar45[10] = -(auVar47[10] == unaff_XMM6_Bk);
        auVar45[0xb] = -(auVar47[0xb] == unaff_XMM6_Bl);
        auVar45[0xc] = -(auVar47[0xc] == unaff_XMM6_Bm);
        auVar45[0xd] = -(auVar47[0xd] == unaff_XMM6_Bn);
        auVar45[0xe] = -(auVar47[0xe] == unaff_XMM6_Bo);
        auVar45[0xf] = -(auVar47[0xf] == unaff_XMM6_Bp);
        if ((((((((((((((((SUB161(auVar45 >> 7,0) & 1) != 0 || (SUB161(auVar45 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar45 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar45 >> 0x1f,0) & 1) != 0) || (SUB161(auVar45 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar45 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar45 >> 0x37,0) & 1) != 0) || (SUB161(auVar45 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar45 >> 0x47,0) & 1) != 0) || (SUB161(auVar45 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar45 >> 0x57,0) & 1) != 0) || (SUB161(auVar45 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar45 >> 0x67,0) & 1) != 0) || (SUB161(auVar45 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar45 >> 0x77,0) & 1) != 0) || auVar45[0xf] < '\0') goto LAB_14089390e;
        uVar20 = uVar20 + lVar36 + 0x10;
        lVar36 = lVar36 + 0x10;
      } while( true );
    }
    pauVar28 = pauStack_180;
    pauVar30 = pauStack_180;
    pauVar21 = pauStack_138;
    puVar27 = puStack_128;
    pauVar41 = pauStack_130;
    pauVar29 = pauStack_130;
    if (lStack_150 != 2) goto LAB_140892c93;
LAB_140892daa:
    pauStack_130 = pauVar29;
    if ((pauVar30 != (undefined1 (*) [16])0x0 & bStack_f9) != 1) {
      if (cStack_f2 != '\0') {
        plVar24 = (longlong *)pdb_140e97000();
        if (((char)plVar24[0xd] != '\x01') &&
           (plVar24 = (longlong *)pdb_142dde6e0(plVar24,0), plVar24 == (longlong *)0x0))
        goto LAB_1408939ec;
        if (*plVar24 != 0) goto LAB_1408939cd;
        *plVar24 = -1;
        plStack_108 = plVar24;
        pdb_140e95370(plVar24 + 1);
        *plStack_108 = *plStack_108 + 1;
      }
      return;
    }
    lStack_150 = 2;
    pauStack_180 = (undefined1 (*) [16])0x0;
    lVar19 = 2;
    pauVar29 = pauStack_1c0;
    pauStack_138 = pauVar21;
    puStack_128 = puVar27;
  } while( true );
}

