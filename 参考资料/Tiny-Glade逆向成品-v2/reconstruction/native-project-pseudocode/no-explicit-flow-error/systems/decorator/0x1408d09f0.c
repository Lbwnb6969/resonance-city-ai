// VA 0x1408d09f0, PDB extent 9966 bytes
// system_decorator::decorator_visual::cottage_corner_window::generate_cottage_corner_windows
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_corner_window.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::cottage_corner_window::generate_cottage_corner_windows
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_corner_window.rs
   Extent: 9966 */

void pdb_1408d09f0(longlong *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16],undefined8 *param_5,undefined8 *param_6)

{
  byte bVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  code *pcVar9;
  uint uVar10;
  undefined1 auVar11 [12];
  undefined4 uVar12;
  undefined4 uVar13;
  char cVar14;
  undefined1 uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  ulonglong uVar21;
  byte *pbVar22;
  undefined8 uVar23;
  undefined4 *puVar24;
  undefined8 *puVar25;
  float *pfVar26;
  longlong lVar27;
  longlong lVar28;
  undefined1 (*pauVar29) [16];
  undefined8 uVar30;
  undefined1 (*pauVar31) [16];
  longlong lVar32;
  ulonglong uVar33;
  undefined *puVar34;
  undefined *puVar35;
  ushort uVar36;
  byte *unaff_R12;
  byte *pbVar37;
  undefined1 (*pauVar38) [16];
  uint uVar39;
  undefined1 (*pauVar40) [16];
  bool bVar41;
  byte bVar42;
  float fVar43;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar44;
  undefined4 extraout_XMM0_Da_00;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined8 in_stack_fffffffffffffc80;
  undefined1 auStack_328 [16];
  float fStack_318;
  undefined4 uStack_314;
  float fStack_310;
  undefined8 uStack_2f0;
  undefined1 (*pauStack_2e8) [16];
  longlong lStack_2e0;
  longlong lStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined4 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined1 (*pauStack_2b0) [16];
  undefined1 (*pauStack_2a8) [16];
  longlong lStack_2a0;
  undefined8 uStack_298;
  longlong lStack_290;
  float fStack_288;
  float fStack_284;
  undefined1 (*pauStack_280) [16];
  undefined4 uStack_274;
  longlong lStack_270;
  undefined8 uStack_268;
  longlong *plStack_260;
  byte *pbStack_258;
  longlong *plStack_250;
  undefined8 uStack_248;
  float fStack_240;
  float fStack_23c;
  undefined8 uStack_230;
  byte *pbStack_228;
  longlong lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  longlong *plStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  longlong lStack_1f0;
  longlong *plStack_1e8;
  undefined8 uStack_1e0;
  longlong *plStack_1d8;
  longlong lStack_1d0;
  byte *pbStack_1c8;
  byte *pbStack_1c0;
  byte *pbStack_1b8;
  byte *pbStack_1b0;
  char cStack_1a8;
  char cStack_1a7;
  uint5 uStack_1a6;
  undefined1 uStack_1a1;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  longlong lStack_180;
  longlong *plStack_170;
  undefined1 (*pauStack_168) [16];
  byte *pbStack_160;
  longlong *plStack_158;
  float fStack_14c;
  undefined8 uStack_148;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  ushort uStack_130;
  undefined2 uStack_12e;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  longlong lStack_120;
  longlong lStack_110;
  byte *pbStack_108;
  longlong *plStack_100;
  char cStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  pauVar29 = param_2;
  cStack_f2 = pdb_140e94b40();
  pauVar40 = param_3;
  if (cStack_f2 == '\0') goto LAB_1408d0c1c;
  unaff_R12 = (byte *)0x5a;
  lVar18 = pdb_1408d30e0(0x5a);
  pauVar31 = (undefined1 (*) [16])&UNK_143018da8;
  if (lVar18 == 1) {
    if ((undefined1 (*) [16])0x5a < pauVar29) {
LAB_1408d2985:
      pdb_142dc8070(&UNK_143018da8,0x5a,0);
LAB_1408d29a5:
      uStack_148 = &cStack_1a8;
      fStack_140 = 12.578812;
      fStack_13c = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14330e2c6,&uStack_148,&UNK_14330e310);
    }
    uVar19 = pdb_1408d30e0(pauVar29);
    if ((uVar19 & 1) != 0) {
      if ((undefined *)0x5a < *pauVar29 + 2) {
        pdb_142dc8070(&UNK_143018da8,0x5a,*pauVar29 + 2,0x5a,&UNK_143018e98);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      unaff_R12 = (byte *)(0x58 - (longlong)pauVar29);
      pauVar31 = (undefined1 (*) [16])(pauVar29[0x143018da] + 10);
    }
  }
  puVar34 = &UNK_143018b56;
  pauVar38 = (undefined1 (*) [16])&UNK_143018b10;
  do {
    bVar42 = puVar34[-1];
    uVar16 = (uint)(char)bVar42;
    plStack_170 = param_1;
    if ((char)bVar42 < '\0') {
      bVar1 = puVar34[-2];
      if ((char)bVar1 < -0x40) {
        bVar2 = puVar34[-3];
        if ((char)bVar2 < -0x40) {
          pbVar22 = puVar34 + -4;
          puVar34 = puVar34 + -4;
          uVar16 = bVar2 & 0x3f | (*pbVar22 & 7) << 6;
        }
        else {
          puVar34 = puVar34 + -3;
          uVar16 = bVar2 & 0xf;
        }
        uVar16 = bVar1 & 0x3f | uVar16 << 6;
      }
      else {
        puVar34 = puVar34 + -2;
        uVar16 = bVar1 & 0x1f;
      }
      uVar16 = (uint)(bVar42 & 0x3f) | uVar16 << 6;
      if (uVar16 != 0x5c) goto LAB_1408d0b64;
LAB_1408d0b7f:
      puVar35 = puVar34 + -0x143018b0f;
      if ((undefined *)0x46 < puVar35) {
        pdb_142dc8070(&UNK_143018b10,0x46,puVar35,0x46,&UNK_143018e60);
        goto LAB_1408d2985;
      }
      pauVar40 = (undefined1 (*) [16])(0x46 - (longlong)puVar35);
      pauVar38 = (undefined1 (*) [16])(puVar34 + 1);
      goto LAB_1408d0bab;
    }
    puVar34 = puVar34 + -1;
    if (uVar16 == 0x5c) goto LAB_1408d0b7f;
LAB_1408d0b64:
    if (uVar16 == 0x2f) goto LAB_1408d0b7f;
  } while (puVar34 != &UNK_143018b10);
  pauVar40 = (undefined1 (*) [16])0x46;
LAB_1408d0bab:
  plVar20 = (longlong *)pdb_140e97000();
  pauVar29 = pauVar31;
  if ((char)plVar20[0xd] != '\x01') goto LAB_1408d2821;
  do {
    if (*plVar20 == 0) {
      *plVar20 = -1;
      in_stack_fffffffffffffc80 = 0;
      plStack_158 = plVar20;
      pauStack_280 = (undefined1 (*) [16])
                     pdb_140e94f10(plVar20 + 1,pauVar29,unaff_R12,pauVar38,pauVar40,1,0);
      *plStack_158 = *plStack_158 + 1;
      param_1 = plStack_170;
      pauVar40 = param_3;
LAB_1408d0c1c:
      param_3 = param_4;
      param_4 = param_2;
      uStack_2f0 = pdb_140c47770(param_1);
      pauStack_2e8 = pauVar29;
      uStack_1e0 = uStack_2f0;
      pauStack_168 = pauVar29;
      pdb_140a2fb40(&uStack_148,*(undefined8 *)*param_4);
      lStack_270 = CONCAT44(uStack_148._4_4_,(float)uStack_148);
      pauVar38 = (undefined1 (*) [16])CONCAT44(fStack_13c,fStack_140);
      param_2 = (undefined1 (*) [16])(ulonglong)uStack_130;
      uStack_2d0 = *(undefined8 *)*param_3;
      uStack_2c8 = *(undefined8 *)*pauVar40;
      uStack_274 = *(undefined4 *)((longlong)param_5 + 0x1c);
      uStack_2b8 = *param_5;
      puStack_2c0 = (undefined4 *)param_5[2];
      pauStack_2b0 = pauStack_168 + 2;
      uStack_298 = *param_6;
      pauStack_2a8 = pauStack_168 + 5;
      lStack_2a0 = CONCAT44(uStack_124,uStack_128) + -1;
      if (CONCAT44(uStack_124,uStack_128) != 0) {
        do {
          uVar16 = (uint)param_2;
          if ((short)param_2 == 0) {
            do {
              auVar45 = *pauVar38;
              lStack_270 = lStack_270 + -0x980;
              pauVar38 = pauVar38 + 1;
              uVar16 = (ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar45[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar16 == 0);
          }
          uVar39 = 0;
          for (uVar10 = uVar16; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar39 = uVar39 + 1;
          }
          uStack_268 = *(undefined8 *)(lStack_270 + -0x98 + (ulonglong)uVar39 * -0x98);
          pdb_140c3ba10(&uStack_148,lStack_270 + (ulonglong)uVar39 * -0x98 + -0x90);
          param_2 = (undefined1 (*) [16])(ulonglong)(uVar16 - 1 & uVar16);
          param_3 = (undefined1 (*) [16])CONCAT44(uStack_148._4_4_,(float)uStack_148);
          param_4 = (undefined1 (*) [16])CONCAT44(fStack_13c,fStack_140);
          pauVar40 = (undefined1 (*) [16])(ulonglong)uStack_130;
          plStack_170 = (longlong *)CONCAT44(uStack_124,uStack_128);
          lStack_2e0 = lStack_120;
          lStack_2d8 = lStack_120 + 0x50;
LAB_1408d0da7:
          lVar18 = lStack_2e0;
          if (plStack_170 != (longlong *)0x0) {
            if ((short)pauVar40 == 0) {
              do {
                auVar45 = *param_4;
                param_3 = param_3 + -4;
                param_4 = param_4 + 1;
                uVar16 = (ushort)((ushort)(SUB161(auVar45 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar45[0xf] >> 7) << 0xf) ^ 0xffff;
                pauVar40 = (undefined1 (*) [16])(ulonglong)uVar16;
              } while (uVar16 == 0);
            }
            iVar17 = 0;
            uVar39 = (uint)pauVar40;
            for (uVar16 = uVar39; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
              iVar17 = iVar17 + 1;
            }
            uStack_148._0_4_ = *(float *)((longlong)param_3 + (-4 - (ulonglong)(uint)(iVar17 << 2)))
            ;
            plStack_158 = (longlong *)(ulonglong)(uint)(float)uStack_148;
            if (*(longlong *)(lStack_2e0 + 0x48) != 0) {
              pauVar40 = (undefined1 (*) [16])(ulonglong)(uVar39 - 1 & uVar39);
              plStack_170 = (longlong *)((longlong)plStack_170 + -1);
              uVar21 = pdb_1400aede0(lStack_2d8,&uStack_148);
              unaff_R12 = *(byte **)(lVar18 + 0x30);
              uVar19 = *(ulonglong *)(lVar18 + 0x38);
              bVar42 = (byte)(uVar21 >> 0x39);
              auVar45 = ZEXT216(CONCAT11(bVar42,bVar42));
              auVar45 = pshuflw(auVar45,auVar45,0);
              lVar18 = 0;
              while( true ) {
                uVar21 = uVar21 & uVar19;
                auVar47 = *(undefined1 (*) [16])(unaff_R12 + uVar21);
                auVar50[0] = -(auVar47[0] == auVar45[0]);
                auVar50[1] = -(auVar47[1] == auVar45[1]);
                auVar50[2] = -(auVar47[2] == auVar45[2]);
                auVar50[3] = -(auVar47[3] == auVar45[3]);
                auVar50[4] = -(auVar47[4] == auVar45[4]);
                auVar50[5] = -(auVar47[5] == auVar45[5]);
                auVar50[6] = -(auVar47[6] == auVar45[6]);
                auVar50[7] = -(auVar47[7] == auVar45[7]);
                auVar50[8] = -(auVar47[8] == auVar45[0]);
                auVar50[9] = -(auVar47[9] == auVar45[1]);
                auVar50[10] = -(auVar47[10] == auVar45[2]);
                auVar50[0xb] = -(auVar47[0xb] == auVar45[3]);
                auVar50[0xc] = -(auVar47[0xc] == auVar45[4]);
                auVar50[0xd] = -(auVar47[0xd] == auVar45[5]);
                auVar50[0xe] = -(auVar47[0xe] == auVar45[6]);
                auVar50[0xf] = -(auVar47[0xf] == auVar45[7]);
                uVar36 = (ushort)(SUB161(auVar50 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar50[0xf] >> 7) << 0xf;
                uVar16 = (uint)uVar36;
                while (uVar36 != 0) {
                  uVar39 = 0;
                  for (uVar10 = uVar16; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                    uVar39 = uVar39 + 1;
                  }
                  lVar32 = (uVar39 + uVar21 & uVar19) * -0x68;
                  if ((int)plStack_158 == *(int *)(unaff_R12 + lVar32 + -0x68)) {
                    cVar14 = pdb_140c45920(&uStack_2f0);
                    if (cVar14 != '\x03') goto LAB_1408d0da7;
                    lStack_110 = pdb_140b54f80(uStack_2d0,uStack_268,&UNK_143018b58);
                    if (lStack_110 == 0) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc8150(&UNK_143018b70);
                    }
                    unaff_R12 = unaff_R12 + lVar32;
                    pbStack_1b0 = (byte *)CONCAT71(pbStack_1b0._1_7_,unaff_R12[-8]);
                    plStack_260 = (longlong *)
                                  CONCAT44(plStack_260._4_4_,*(undefined4 *)(unaff_R12 + -0x10));
                    pbStack_160 = unaff_R12;
                    pdb_140c45ec0(auStack_328,uStack_2c8,plStack_158,&UNK_143018b88);
                    pbStack_108 = (byte *)(ulonglong)pbStack_160[-7];
                    if (pbStack_108 == (byte *)0x0) {
                      pbVar22 = (byte *)0x10;
                    }
                    else {
                      uVar19 = (ulonglong)pbStack_160[-7] * 0x30;
                      pdb_14007ee60();
                      pbVar22 = pub_1406abab0(uVar19,0x10);
                      if (pbVar22 == (byte *)0x0) {
                        pdb_142dc7e2a(0x10,uVar19);
                        goto LAB_1408d29dc;
                      }
                    }
                    pbStack_1b8 = (byte *)0x0;
                    lVar18 = lStack_110;
                    pbStack_1c8 = pbStack_108;
                    pbStack_1c0 = pbVar22;
                    pdb_14092f8d0(&uStack_148,lStack_110);
                    uVar44 = (undefined4)((ulonglong)in_stack_fffffffffffffc80 >> 0x20);
                    if ((float)uStack_148 == 1.4013e-45) {
                      uStack_1f8 = CONCAT26(uStack_12e,CONCAT24(uStack_130,fStack_134));
                      plStack_208 = (longlong *)CONCAT44(fStack_140,uStack_148._4_4_);
                      uStack_200 = CONCAT44(fStack_138,fStack_13c);
                      if (1 < pbStack_160[-0x2e]) {
                    /* WARNING: Subroutine does not return */
                        pdb_142dc83b0(&UNK_143018ab8,0x28,&UNK_143018ae0);
                      }
                      uVar19 = pdb_140b86c80(pbStack_160[-0x30]);
                      if ((uVar19 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
                        pdb_142dc8150(&UNK_143018aa0);
                      }
                      fVar43 = (float)pdb_140df1dc0(&plStack_208);
                      pdb_140df3060(&fStack_19c,&plStack_208,lVar18);
                      fVar55 = fStack_19c;
                      fVar56 = fStack_198;
                      fStack_284 = auVar47._0_4_;
                      fVar53 = fStack_194;
                      fVar54 = fStack_190;
                    }
                    else {
                      if (1 < pbStack_160[-0x2e]) {
                    /* WARNING: Subroutine does not return */
                        pdb_142dc83b0(&UNK_143018ab8,0x28,&UNK_143018af8);
                      }
                      plVar20 = *(longlong **)(pbStack_160 + -0x50);
                      uStack_230 = plVar20;
                      plStack_1e8 = plVar20;
                      uStack_148._0_4_ = (float)pdb_14092f860(lStack_110);
                      auVar11._4_8_ = (ulonglong)plVar20 >> 0x20;
                      auVar11._0_4_ = SUB84(plVar20,0) + _DAT_142e42360;
                      uStack_148._4_4_ = extraout_XMM0_Da;
                      uVar44 = pdb_140dea610(&uStack_148,auVar11._0_8_);
                      uStack_230 = (longlong *)CONCAT44(uStack_230._4_4_,uVar44);
                      plStack_208 = plVar20;
                      uStack_148._0_4_ = (float)pdb_14092f860(lStack_110);
                      uStack_148._4_4_ = extraout_XMM0_Da_00;
                      uVar44 = pdb_140dea610(&uStack_148);
                      plStack_208 = (longlong *)CONCAT44(plStack_208._4_4_,uVar44);
                      pdb_140dea260(&uStack_148,&plStack_1e8,lStack_110);
                      fVar54 = fStack_140;
                      fVar53 = (float)uStack_148;
                      pdb_140dea260(&uStack_148,&uStack_230,lStack_110);
                      fVar56 = fStack_140;
                      fVar55 = (float)uStack_148;
                      pdb_140dea260(&uStack_148,&plStack_208,lStack_110);
                      uVar44 = (undefined4)((ulonglong)in_stack_fffffffffffffc80 >> 0x20);
                      fVar55 = fVar55 - fVar53;
                      fVar56 = fVar56 - fVar54;
                      fVar58 = _DAT_142e36f28 / SQRT(fVar56 * fVar56 + fVar55 * fVar55);
                      if (0x7ffffe < (int)fVar58 - 1U &&
                          (0x7effffff < (int)ABS(fVar58) - 0x800000U || (int)fVar58 < 0))
                      goto LAB_1408d265d;
                      fVar53 = (float)uStack_148 - fVar53;
                      fVar54 = fStack_140 - fVar54;
                      fVar59 = _DAT_142e36f28 / SQRT(fVar54 * fVar54 + fVar53 * fVar53);
                      if (0x7ffffe < (int)fVar59 - 1U &&
                          (0x7effffff < (int)ABS(fVar59) - 0x800000U || (int)fVar59 < 0))
                      goto LAB_1408d265d;
                      fVar55 = fVar55 * fVar58;
                      fVar56 = fVar56 * fVar58;
                      fVar53 = fVar53 * fVar59;
                      fVar54 = fVar54 * fVar59;
                      fVar59 = fVar53 - fVar55;
                      fVar43 = fVar54 - fVar56;
                      fVar58 = _DAT_142e36f28 / SQRT(fVar43 * fVar43 + fVar59 * fVar59);
                      if (0x7ffffe < (int)fVar58 - 1U &&
                          (0x7effffff < (int)ABS(fVar58) - 0x800000U || (int)fVar58 < 0))
                      goto LAB_1408d265d;
                      fVar43 = (float)((uint)fVar43 ^ _DAT_142e37820) * fVar58;
                      fStack_284 = fVar59 * fVar58;
                    }
                    fStack_288 = fVar43;
                    uVar15 = pdb_1409012c0(3,uStack_1e0);
                    cStack_1a8 = pdb_140c44ba0(pbStack_108);
                    cStack_1a7 = uVar15;
                    lVar18 = pdb_141494370(pauStack_168,&cStack_1a8);
                    fVar59 = fStack_310;
                    uVar12 = uStack_314;
                    fVar58 = fStack_318;
                    if (lVar18 == 0) {
                      uStack_148 = &cStack_1a8;
                      fStack_140 = 12.578812;
                      fStack_13c = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
                      pdb_142dc83d0(&UNK_14330e2c6,&uStack_148,&UNK_14330e310);
                    }
                    fVar43 = *(float *)(lVar18 + 0x30) / _DAT_142f6d804;
                    fVar60 = fVar55 * fVar43 + fStack_318;
                    fVar61 = fVar56 * fVar43 + fStack_310;
                    fVar57 = fVar43 * fVar53 + fStack_318;
                    fVar43 = fVar43 * fVar54 + fStack_310;
                    uStack_230 = (longlong *)
                                 CONCAT44(fVar43 * _UNK_142e36f64 + fVar61 * _UNK_142e36f64,
                                          fVar57 * _DAT_142e36f60 + fVar60 * _DAT_142e36f60);
                    pdb_140df4540(&plStack_208,&uStack_230,uStack_314);
                    pdb_140df4520(&cStack_1a8,&fStack_288);
                    pdb_140de9ab0(&uStack_148,&cStack_1a8);
                    iVar17 = (int)pbStack_108 + -1;
                    if (2 < (byte)iVar17) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc83b0(&UNK_143018ab8,0x28,&UNK_143018ba0);
                    }
                    lStack_1d0 = CONCAT44(lStack_1d0._4_4_,iVar17);
                    uStack_218 = CONCAT44(uStack_148._4_4_,(float)uStack_148);
                    uStack_210 = CONCAT44(fStack_13c,fStack_140);
                    fVar66 = SUB84(plStack_208,0);
                    uVar19 = (ulonglong)plStack_208 >> 0x20;
                    fVar63 = (float)uStack_200;
                    fVar58 = fVar58 * _DAT_143018800;
                    fVar59 = fVar59 * _UNK_143018804;
                    plStack_1e8 = (longlong *)
                                  CONCAT44(fVar61 * _UNK_143018814 + fVar59,
                                           fVar60 * _DAT_143018810 + fVar58);
                    pdb_140df4540(&plStack_208,&plStack_1e8,uVar12);
                    uStack_230 = (longlong *)CONCAT44(fVar55,(uint)fVar56 ^ _DAT_142e37820);
                    pdb_140df4520(&cStack_1a8,&uStack_230);
                    pdb_140de9ab0(&uStack_148,&cStack_1a8);
                    pbVar22 = pbStack_1b8;
                    uVar23 = CONCAT44(uStack_148._4_4_,(float)uStack_148);
                    uVar30 = CONCAT44(fStack_13c,fStack_140);
                    uStack_148._0_4_ = SUB84(plStack_208,0);
                    uStack_148._4_4_ = (undefined4)((ulonglong)plStack_208 >> 0x20);
                    fStack_140 = (float)uStack_200;
                    if (pbStack_1b8 == pbStack_1c8) {
                      pdb_142d8de40(&pbStack_1c8);
                    }
                    lVar18 = (longlong)pbVar22 * 0x30;
                    *(undefined8 *)(pbStack_1c0 + lVar18) = uVar23;
                    *(undefined8 *)(pbStack_1c0 + lVar18 + 8) = uVar30;
                    *(ulonglong *)(pbStack_1c0 + lVar18 + 0x10) =
                         CONCAT44(uStack_148._4_4_,(float)uStack_148);
                    *(float *)(pbStack_1c0 + lVar18 + 0x18) = fStack_140;
                    pbVar37 = pbStack_1c0 + lVar18 + 0x1c;
                    pbVar37[0] = 0;
                    pbVar37[1] = 0;
                    pbVar37[2] = 0x80;
                    pbVar37[3] = 0x3f;
                    pbVar37[4] = 0;
                    pbVar37[5] = 0;
                    pbVar37[6] = 0x80;
                    pbVar37[7] = 0x3f;
                    pbVar37 = pbStack_1c0 + lVar18 + 0x24;
                    pbVar37[0] = 0;
                    pbVar37[1] = 0;
                    pbVar37[2] = 0x80;
                    pbVar37[3] = 0x3f;
                    pbStack_1b8 = pbVar22 + 1;
                    plStack_1e8 = (longlong *)
                                  CONCAT44(fVar59 + fVar43 * _UNK_143018814,
                                           fVar58 + fVar57 * _DAT_143018810);
                    pdb_140df4540(&plStack_208,&plStack_1e8,uVar12);
                    uStack_230 = (longlong *)CONCAT44(fVar53,(uint)fVar54 ^ _DAT_142e37820);
                    pdb_140df4520(&cStack_1a8,&uStack_230);
                    pdb_140de9ab0(&uStack_148,&cStack_1a8);
                    pbVar22 = pbStack_1b8;
                    uVar23 = CONCAT44(uStack_148._4_4_,(float)uStack_148);
                    uVar30 = CONCAT44(fStack_13c,fStack_140);
                    uStack_148._0_4_ = SUB84(plStack_208,0);
                    uStack_148._4_4_ = (undefined4)((ulonglong)plStack_208 >> 0x20);
                    fStack_140 = (float)uStack_200;
                    if (pbStack_1b8 == pbStack_1c8) {
                      pdb_142d8de40(&pbStack_1c8);
                    }
                    lVar18 = (longlong)pbVar22 * 0x30;
                    *(undefined8 *)(pbStack_1c0 + lVar18) = uVar23;
                    *(undefined8 *)(pbStack_1c0 + lVar18 + 8) = uVar30;
                    *(ulonglong *)(pbStack_1c0 + lVar18 + 0x10) =
                         CONCAT44(uStack_148._4_4_,(float)uStack_148);
                    *(float *)(pbStack_1c0 + lVar18 + 0x18) = fStack_140;
                    uVar30 = 0x3f8000003f800000;
                    pbVar37 = pbStack_1c0 + lVar18 + 0x1c;
                    pbVar37[0] = 0;
                    pbVar37[1] = 0;
                    pbVar37[2] = 0x80;
                    pbVar37[3] = 0x3f;
                    pbVar37[4] = 0;
                    pbVar37[5] = 0;
                    pbVar37[6] = 0x80;
                    pbVar37[7] = 0x3f;
                    pbVar37 = pbStack_1c0 + lVar18 + 0x24;
                    pbVar37[0] = 0;
                    pbVar37[1] = 0;
                    pbVar37[2] = 0x80;
                    pbVar37[3] = 0x3f;
                    pbStack_1b8 = pbVar22 + 1;
                    *puStack_2c0 = uStack_274;
                    uVar23 = pdb_140947f90(uStack_268);
                    plStack_100 = (longlong *)
                                  pdb_1408f3750(uStack_2b8,plStack_158,uVar23,uVar30,
                                                (ulonglong)pbStack_1b0 & 0xff);
                    uVar23 = *(undefined8 *)(&UNK_143018ed8 + (longlong)pbStack_108 * 8);
                    fVar53 = (float)uStack_218 * _DAT_143018830;
                    fVar54 = uStack_218._4_4_ * _UNK_143018834;
                    fVar55 = (float)uStack_210 * _UNK_143018838;
                    fVar56 = uStack_210._4_4_ * _UNK_14301883c;
                    plStack_1d8 = plStack_100 + 0x16;
                    fStack_13c = (float)((uint)fStack_13c & 0xff000000);
                    uStack_148._0_4_ = (float)((uint)(float)uStack_148 & 0xffffff);
                    uStack_148._4_4_ = 0;
                    fStack_140 = 0.0;
                    fStack_1a0 = 0.0;
                    fStack_19c = (float)((uint)fStack_19c & 0xff000000);
                    cStack_1a8 = SUB41((float)uStack_148,0);
                    cStack_1a7 = (char)((uint)(float)uStack_148 >> 8);
                    uStack_1a6 = (uint5)(ushort)((uint)(float)uStack_148 >> 0x10);
                    uStack_1a1 = 0;
                    lVar18 = plStack_100[0x18];
                    if (lVar18 == plStack_100[0x16]) {
                      pdb_142d8ddd0(plStack_1d8);
                    }
                    fVar58 = (float)uStack_218;
                    fVar59 = uStack_218._4_4_;
                    fVar43 = (float)uStack_210;
                    fVar60 = (float)uStack_210 * (float)uStack_210;
                    fVar61 = uStack_210._4_4_ * uStack_210._4_4_;
                    fVar57 = uStack_218._4_4_ * uStack_218._4_4_ +
                             (float)uStack_218 * (float)uStack_218;
                    fVar67 = fVar61 - (fVar57 + fVar60);
                    fVar68 = fVar61 - (fVar57 + fVar60);
                    fVar69 = fVar61 - (fVar57 + fVar60);
                    fVar57 = (fVar61 - (fVar57 + fVar60)) * _UNK_14301882c;
                    fVar61 = (float)uStack_210 * _UNK_143018828 +
                             uStack_218._4_4_ * _UNK_143018824 + (float)uStack_218 * _DAT_143018820;
                    fVar61 = fVar61 + fVar61;
                    fVar60 = uStack_210._4_4_ * _UNK_14301882c;
                    fVar62 = uStack_210._4_4_ + uStack_210._4_4_;
                    fVar54 = ((float)uStack_218 * _UNK_143018824 + fVar54) * fVar62 +
                             fVar61 * (float)uStack_210 + fVar69 * _UNK_143018828;
                    fVar66 = fVar66 + (uStack_218._4_4_ * _UNK_143018828 + fVar55) * fVar62 +
                                      fVar61 * (float)uStack_218 + fVar67 * _DAT_143018820;
                    fVar53 = (float)uVar19 +
                             ((float)uStack_210 * _DAT_143018820 + fVar53) * fVar62 +
                             fVar61 * uStack_218._4_4_ + fVar68 * _UNK_143018824;
                    fVar63 = fVar63 + fVar54;
                    lVar32 = plStack_100[0x17];
                    lVar27 = lVar18 * 0x170;
                    *(undefined8 *)(lVar32 + lVar27) = 0;
                    *(undefined8 *)(lVar32 + 0x10 + lVar27) = 0;
                    *(undefined8 *)(lVar32 + 0x20 + lVar27) = 0;
                    *(undefined8 *)(lVar32 + 0x30 + lVar27) = 0;
                    *(undefined4 *)(lVar32 + 0x40 + lVar27) = 0;
                    *(undefined4 *)(lVar32 + 0x50 + lVar27) = 0;
                    *(undefined4 *)(lVar32 + 0x60 + lVar27) = 0;
                    *(undefined4 *)(lVar32 + 0x70 + lVar27) = 2;
                    *(undefined8 *)(lVar32 + 0x90 + lVar27) = uVar23;
                    *(undefined8 *)(lVar32 + 0x98 + lVar27) = 0x24;
                    *(undefined **)(lVar32 + 0xa0 + lVar27) = &UNK_14330dc96;
                    *(undefined8 *)(lVar32 + 0xa8 + lVar27) = 0x2b;
                    pfVar26 = (float *)(lVar32 + 0xb0 + lVar27);
                    *pfVar26 = (float)uStack_218;
                    pfVar26[1] = uStack_218._4_4_;
                    pfVar26[2] = (float)uStack_210;
                    pfVar26[3] = uStack_210._4_4_;
                    *(ulonglong *)(lVar32 + 0xc0 + lVar27) = CONCAT44(fVar53,fVar66);
                    *(float *)(lVar32 + 200 + lVar27) = fVar63;
                    *(undefined8 *)(lVar32 + 0xcc + lVar27) = 0x3f8000003f800000;
                    *(undefined4 *)(lVar32 + 0xd4 + lVar27) = 0x3f800000;
                    *(undefined4 *)(lVar32 + 0xe0 + lVar27) = 1;
                    *(undefined4 *)(lVar32 + 0xe4 + lVar27) = plStack_260._0_4_;
                    *(undefined4 *)(lVar32 + 0xe8 + lVar27) = 0;
                    *(undefined1 *)(lVar32 + 0x105 + lVar27) = 2;
                    *(undefined4 *)(lVar32 + 0x108 + lVar27) = 0;
                    *(undefined1 *)(lVar32 + 0x15c + lVar27) = 2;
                    *(ulonglong *)(lVar32 + 0x164 + lVar27) =
                         CONCAT35(fStack_19c._0_3_,CONCAT41(fStack_1a0,uStack_1a1));
                    *(ulonglong *)(lVar32 + 0x15d + lVar27) =
                         CONCAT17(uStack_1a1,CONCAT52(uStack_1a6,CONCAT11(cStack_1a7,cStack_1a8)));
                    *(undefined1 *)(lVar32 + 0x16c + lVar27) = 2;
                    *(undefined1 *)(lVar32 + 0x16e + lVar27) = pbStack_1b0._0_1_;
                    *(undefined1 *)(lVar32 + 0x16f + lVar27) = 0;
                    plStack_100[0x18] = lVar18 + 1;
                    if (*plStack_100 != 0 || plStack_100[1] != 0) goto LAB_1408d2841;
                    plStack_100[1] = 0;
                    *plStack_100 = 1;
                    *(float *)(plStack_100 + 2) = (float)uStack_218;
                    *(float *)((longlong)plStack_100 + 0x14) = uStack_218._4_4_;
                    *(float *)(plStack_100 + 3) = (float)uStack_210;
                    *(float *)((longlong)plStack_100 + 0x1c) = uStack_210._4_4_;
                    uStack_248 = (byte *)CONCAT44(fVar53,fVar66);
                    plStack_100[4] = CONCAT44(fVar53,fVar66);
                    *(float *)(plStack_100 + 5) = fVar63;
                    *(undefined8 *)((longlong)plStack_100 + 0x2c) = 0x3f8000003f800000;
                    *(undefined4 *)((longlong)plStack_100 + 0x34) = 0x3f800000;
                    fStack_240 = fVar54 + 0.0;
                    fStack_23c = (fVar60 + fVar56) * fVar62 + fVar61 * uStack_210._4_4_ + fVar57 +
                                 0.0;
                    fStack_14c = fVar63;
                    cVar14 = pdb_1409012c0(CONCAT71((int7)((ulonglong)lVar27 >> 8),3),uStack_1e0);
                    cStack_1a8 = pdb_140c44ba0(pbStack_108);
                    cStack_1a7 = cVar14;
                    if (*(longlong *)(pauStack_168[1] + 8) == 0) goto LAB_1408d2766;
                    puVar34 = (undefined *)pdb_1413f0300(pauStack_2b0,&cStack_1a8);
                    uVar30 = uStack_210;
                    uVar23 = uStack_218;
                    pbVar22 = uStack_248;
                    pbStack_258 = pbStack_160 + -0x60;
                    lVar18 = *(longlong *)*pauStack_168;
                    uVar19 = *(ulonglong *)(*pauStack_168 + 8);
                    bVar42 = (byte)((ulonglong)puVar34 >> 0x39);
                    auVar45 = ZEXT216(CONCAT11(bVar42,bVar42));
                    auVar45 = pshuflw(auVar45,auVar45,0);
                    plVar20 = (longlong *)0x0;
                    goto LAB_1408d16f9;
                  }
                  uVar36 = (ushort)(uVar16 - 1) & (ushort)uVar16;
                  uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar36);
                }
                auVar46[0] = -(auVar47[0] == -1);
                auVar46[1] = -(auVar47[1] == -1);
                auVar46[2] = -(auVar47[2] == -1);
                auVar46[3] = -(auVar47[3] == -1);
                auVar46[4] = -(auVar47[4] == -1);
                auVar46[5] = -(auVar47[5] == -1);
                auVar46[6] = -(auVar47[6] == -1);
                auVar46[7] = -(auVar47[7] == -1);
                auVar46[8] = -(auVar47[8] == -1);
                auVar46[9] = -(auVar47[9] == -1);
                auVar46[10] = -(auVar47[10] == -1);
                auVar46[0xb] = -(auVar47[0xb] == -1);
                auVar46[0xc] = -(auVar47[0xc] == -1);
                auVar46[0xd] = -(auVar47[0xd] == -1);
                auVar46[0xe] = -(auVar47[0xe] == -1);
                auVar46[0xf] = -(auVar47[0xf] == -1);
                if ((((((((((((((((SUB161(auVar46 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar46 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar46 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar46 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar46 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar46 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar46 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar46 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar46 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar46 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar46 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar46 >> 0x5f,0) & 1) != 0) || (SUB161(auVar46 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar46 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar46 >> 0x77,0) & 1) != 0) || auVar46[0xf] < '\0') break;
                uVar21 = uVar21 + lVar18 + 0x10;
                lVar18 = lVar18 + 0x10;
              }
            }
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_1430189a0);
          }
          bVar41 = lStack_2a0 == 0;
          lStack_2a0 = lStack_2a0 + -1;
          if (bVar41) break;
        } while( true );
      }
      pauVar29 = pauStack_280;
      if (cStack_f2 == '\0') {
        return;
      }
      plVar20 = (longlong *)pdb_140e97000();
      if (((char)plVar20[0xd] != '\x01') &&
         (plVar20 = (longlong *)pdb_142dde6e0(plVar20,0), plVar20 == (longlong *)0x0)) break;
      if (*plVar20 == 0) {
        *plVar20 = -1;
        plStack_170 = plVar20;
        pdb_140e95370(plVar20 + 1,pauVar29);
        *plStack_170 = *plStack_170 + 1;
        return;
      }
    }
    plVar20 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_1408d2821:
    plVar20 = (longlong *)pdb_142dde6e0(plVar20,0);
  } while (plVar20 != (longlong *)0x0);
  pdb_142dc7890(&UNK_14330e598);
LAB_1408d2841:
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14301ce21,0x17,&UNK_14301ce30);
LAB_1408d16f9:
  uVar21 = (ulonglong)puVar34 & uVar19;
  auVar47 = *(undefined1 (*) [16])(lVar18 + uVar21);
  auVar51[0] = -(auVar47[0] == auVar45[0]);
  auVar51[1] = -(auVar47[1] == auVar45[1]);
  auVar51[2] = -(auVar47[2] == auVar45[2]);
  auVar51[3] = -(auVar47[3] == auVar45[3]);
  auVar51[4] = -(auVar47[4] == auVar45[4]);
  auVar51[5] = -(auVar47[5] == auVar45[5]);
  auVar51[6] = -(auVar47[6] == auVar45[6]);
  auVar51[7] = -(auVar47[7] == auVar45[7]);
  auVar51[8] = -(auVar47[8] == auVar45[0]);
  auVar51[9] = -(auVar47[9] == auVar45[1]);
  auVar51[10] = -(auVar47[10] == auVar45[2]);
  auVar51[0xb] = -(auVar47[0xb] == auVar45[3]);
  auVar51[0xc] = -(auVar47[0xc] == auVar45[4]);
  auVar51[0xd] = -(auVar47[0xd] == auVar45[5]);
  auVar51[0xe] = -(auVar47[0xe] == auVar45[6]);
  auVar51[0xf] = -(auVar47[0xf] == auVar45[7]);
  uVar36 = (ushort)(SUB161(auVar51 >> 7,0) & 1) | (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe | (ushort)(auVar51[0xf] >> 7) << 0xf;
  uVar16 = (uint)uVar36;
  if (uVar36 != 0) {
    if (cStack_1a8 == '\x1a') {
      do {
        uVar39 = 0;
        for (uVar10 = uVar16; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar39 = uVar39 + 1;
        }
        uVar33 = uVar39 + uVar21 & uVar19;
        if (*(char *)(lVar18 + -0x48 + uVar33 * -0x48) == '\x1a') goto LAB_1408d1a2d;
        uVar36 = (ushort)(uVar16 - 1) & (ushort)uVar16;
        uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar36);
      } while (uVar36 != 0);
    }
    else {
      do {
        uVar39 = 0;
        for (uVar10 = uVar16; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar39 = uVar39 + 1;
        }
        uVar33 = uVar39 + uVar21 & uVar19;
        cVar14 = *(char *)(lVar18 + -0x48 + uVar33 * -0x48);
        plStack_250 = plVar20;
        if (((cVar14 != '\x1a') && (cStack_1a8 == cVar14)) &&
           (cStack_1a7 == *(char *)(lVar18 + uVar33 * -0x48 + -0x47))) goto LAB_1408d1a2d;
        uVar36 = (ushort)(uVar16 - 1) & (ushort)uVar16;
        uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar36);
      } while (uVar36 != 0);
    }
  }
  auVar48[0] = -(auVar47[0] == -1);
  auVar48[1] = -(auVar47[1] == -1);
  auVar48[2] = -(auVar47[2] == -1);
  auVar48[3] = -(auVar47[3] == -1);
  auVar48[4] = -(auVar47[4] == -1);
  auVar48[5] = -(auVar47[5] == -1);
  auVar48[6] = -(auVar47[6] == -1);
  auVar48[7] = -(auVar47[7] == -1);
  auVar48[8] = -(auVar47[8] == -1);
  auVar48[9] = -(auVar47[9] == -1);
  auVar48[10] = -(auVar47[10] == -1);
  auVar48[0xb] = -(auVar47[0xb] == -1);
  auVar48[0xc] = -(auVar47[0xc] == -1);
  auVar48[0xd] = -(auVar47[0xd] == -1);
  auVar48[0xe] = -(auVar47[0xe] == -1);
  auVar48[0xf] = -(auVar47[0xf] == -1);
  if ((((((((((((((((SUB161(auVar48 >> 7,0) & 1) != 0 || (SUB161(auVar48 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar48 >> 0x17,0) & 1) != 0) || (SUB161(auVar48 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar48 >> 0x27,0) & 1) != 0) || (SUB161(auVar48 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar48 >> 0x37,0) & 1) != 0) || (SUB161(auVar48 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar48 >> 0x47,0) & 1) != 0) || (SUB161(auVar48 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar48 >> 0x57,0) & 1) != 0) || (SUB161(auVar48 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar48 >> 0x67,0) & 1) != 0) || (SUB161(auVar48 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar48 >> 0x77,0) & 1) != 0) || auVar48[0xf] < '\0') {
LAB_1408d2766:
    uStack_148 = &cStack_1a8;
    fStack_140 = 4.407387;
    fStack_13c = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_1430189f5,&uStack_148,&UNK_143018a28);
  }
  puVar34 = (undefined *)((longlong)plVar20 + uVar21 + 0x10);
  plVar20 = plVar20 + 2;
  goto LAB_1408d16f9;
LAB_1408d1a2d:
  plVar20 = *(longlong **)(lVar18 + -0x28 + uVar33 * -0x48);
  LOCK();
  lVar32 = *plVar20;
  *plVar20 = *plVar20 + 1;
  UNLOCK();
  if (*plVar20 != 0 && SCARRY8(lVar32,1) == *plVar20 < 0) {
    uStack_f1 = 1;
    plStack_250 = plVar20;
    plStack_208 = plVar20;
    cVar14 = pdb_1409012c0(CONCAT71((int7)((ulonglong)lVar18 >> 8),3),uStack_1e0);
    uStack_f1 = 1;
    cStack_1a8 = pdb_140c44ba0(pbStack_108);
    cStack_1a7 = cVar14;
    if (*(longlong *)(pauStack_168[4] + 8) != 0) {
      uStack_f1 = 1;
      uVar21 = pdb_1413f0300(pauStack_2a8,&cStack_1a8);
      lVar18 = *(longlong *)pauStack_168[3];
      uVar19 = *(ulonglong *)(pauStack_168[3] + 8);
      bVar42 = (byte)(uVar21 >> 0x39);
      auVar45 = ZEXT216(CONCAT11(bVar42,bVar42));
      auVar45 = pshuflw(auVar45,auVar45,0);
      lVar32 = 0;
      while( true ) {
        uVar21 = uVar21 & uVar19;
        auVar47 = *(undefined1 (*) [16])(lVar18 + uVar21);
        auVar52[0] = -(auVar47[0] == auVar45[0]);
        auVar52[1] = -(auVar47[1] == auVar45[1]);
        auVar52[2] = -(auVar47[2] == auVar45[2]);
        auVar52[3] = -(auVar47[3] == auVar45[3]);
        auVar52[4] = -(auVar47[4] == auVar45[4]);
        auVar52[5] = -(auVar47[5] == auVar45[5]);
        auVar52[6] = -(auVar47[6] == auVar45[6]);
        auVar52[7] = -(auVar47[7] == auVar45[7]);
        auVar52[8] = -(auVar47[8] == auVar45[0]);
        auVar52[9] = -(auVar47[9] == auVar45[1]);
        auVar52[10] = -(auVar47[10] == auVar45[2]);
        auVar52[0xb] = -(auVar47[0xb] == auVar45[3]);
        auVar52[0xc] = -(auVar47[0xc] == auVar45[4]);
        auVar52[0xd] = -(auVar47[0xd] == auVar45[5]);
        auVar52[0xe] = -(auVar47[0xe] == auVar45[6]);
        auVar52[0xf] = -(auVar47[0xf] == auVar45[7]);
        uVar36 = (ushort)(SUB161(auVar52 >> 7,0) & 1) | (ushort)(SUB161(auVar52 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar52 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar52 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar52 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar52 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar52 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar52 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar52 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar52 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar52 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar52 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar52 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar52 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar52 >> 0x77,0) & 1) << 0xe | (ushort)(auVar52[0xf] >> 7) << 0xf
        ;
        uVar16 = (uint)uVar36;
        if (uVar36 != 0) {
          if (cStack_1a8 == '\x1a') {
            do {
              uVar39 = 0;
              for (uVar10 = uVar16; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                uVar39 = uVar39 + 1;
              }
              uVar33 = uVar39 + uVar21 & uVar19;
              if (*(char *)(lVar18 + -0x48 + uVar33 * -0x48) == '\x1a') goto LAB_1408d1bb3;
              uVar36 = (ushort)(uVar16 - 1) & (ushort)uVar16;
              uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar36);
            } while (uVar36 != 0);
          }
          else {
            do {
              uVar39 = 0;
              for (uVar10 = uVar16; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                uVar39 = uVar39 + 1;
              }
              uVar33 = uVar39 + uVar21 & uVar19;
              cVar14 = *(char *)(lVar18 + -0x48 + uVar33 * -0x48);
              lStack_290 = lVar32;
              if (((cVar14 != '\x1a') && (cStack_1a8 == cVar14)) &&
                 (cStack_1a7 == *(char *)(lVar18 + uVar33 * -0x48 + -0x47))) goto LAB_1408d1bb3;
              uVar36 = (ushort)(uVar16 - 1) & (ushort)uVar16;
              uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar36);
            } while (uVar36 != 0);
          }
        }
        auVar49[0] = -(auVar47[0] == -1);
        auVar49[1] = -(auVar47[1] == -1);
        auVar49[2] = -(auVar47[2] == -1);
        auVar49[3] = -(auVar47[3] == -1);
        auVar49[4] = -(auVar47[4] == -1);
        auVar49[5] = -(auVar47[5] == -1);
        auVar49[6] = -(auVar47[6] == -1);
        auVar49[7] = -(auVar47[7] == -1);
        auVar49[8] = -(auVar47[8] == -1);
        auVar49[9] = -(auVar47[9] == -1);
        auVar49[10] = -(auVar47[10] == -1);
        auVar49[0xb] = -(auVar47[0xb] == -1);
        auVar49[0xc] = -(auVar47[0xc] == -1);
        auVar49[0xd] = -(auVar47[0xd] == -1);
        auVar49[0xe] = -(auVar47[0xe] == -1);
        auVar49[0xf] = -(auVar47[0xf] == -1);
        if ((((((((((((((((SUB161(auVar49 >> 7,0) & 1) != 0 || (SUB161(auVar49 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar49 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar49 >> 0x1f,0) & 1) != 0) || (SUB161(auVar49 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar49 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar49 >> 0x37,0) & 1) != 0) || (SUB161(auVar49 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar49 >> 0x47,0) & 1) != 0) || (SUB161(auVar49 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar49 >> 0x57,0) & 1) != 0) || (SUB161(auVar49 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar49 >> 0x67,0) & 1) != 0) || (SUB161(auVar49 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar49 >> 0x77,0) & 1) != 0) || auVar49[0xf] < '\0') break;
        uVar21 = uVar21 + lVar32 + 0x10;
        lVar32 = lVar32 + 0x10;
      }
    }
    uStack_148 = &cStack_1a8;
    fStack_140 = 4.407387;
    fStack_13c = 1.4013e-45;
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_1430189f5,&uStack_148,&UNK_143018a40);
  }
  goto LAB_1408d29dc;
LAB_1408d1bb3:
  plVar20 = *(longlong **)(lVar18 + -0x28 + uVar33 * -0x48);
  LOCK();
  lVar18 = *plVar20;
  *plVar20 = *plVar20 + 1;
  UNLOCK();
  if (*plVar20 != 0 && SCARRY8(lVar18,1) == *plVar20 < 0) {
    cStack_1a8 = (char)pbVar22;
    cStack_1a7 = (char)((ulonglong)pbVar22 >> 8);
    uStack_1a6 = (uint5)((ulonglong)pbVar22 >> 0x10);
    uStack_1a1 = (undefined1)((ulonglong)pbVar22 >> 0x38);
    fStack_1a0 = fStack_14c;
    uStack_148._0_4_ = (float)uVar23;
    uStack_148._4_4_ = (undefined4)((ulonglong)uVar23 >> 0x20);
    fStack_140 = (float)uVar30;
    fStack_13c = (float)((ulonglong)uVar30 >> 0x20);
    uStack_f1 = 0;
    pdb_1408f3120(plStack_100,plStack_250,plVar20,&cStack_1a8,&uStack_148);
    if (*(uint *)(lStack_110 + 600) < 2) {
      if (2 < (byte)lStack_1d0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143018ab8,0x28,&UNK_143018d30);
      }
      iVar17 = *(int *)(&UNK_143018ef8 + (ulonglong)((uint)lStack_1d0 & 0xff) * 4);
      fStack_13c = (float)((uint)fStack_13c & 0xff000000);
      uStack_148._0_4_ = (float)((uint)(float)uStack_148 & 0xffffff);
      uStack_148._4_4_ = 0;
      fStack_140 = 0.0;
      puVar24 = (undefined4 *)pdb_1409014f0(pbStack_160 + -0x28,&UNK_143018ca8);
      lStack_1d0 = CONCAT44(lStack_1d0._4_4_,*puVar24);
      fStack_1a0 = fStack_140;
      fStack_19c = (float)CONCAT13(fStack_19c._3_1_,fStack_13c._0_3_);
      cStack_1a8 = SUB41((float)uStack_148,0);
      cStack_1a7 = (char)((uint)(float)uStack_148 >> 8);
      uStack_1a6 = (uint5)(CONCAT44(uStack_148._4_4_,(float)uStack_148) >> 0x10);
      uStack_1a1 = (undefined1)((uint)uStack_148._4_4_ >> 0x18);
      lVar18 = plStack_100[0x18];
      if (lVar18 == plStack_100[0x16]) {
        pdb_142d8ddd0(plStack_1d8);
      }
      lVar32 = plStack_100[0x17];
      lVar27 = lVar18 * 0x170;
      *(undefined8 *)(lVar32 + lVar27) = 0;
      *(undefined8 *)(lVar32 + 0x10 + lVar27) = 1;
      *(longlong **)(lVar32 + 0x18 + lVar27) = plStack_158 + (longlong)pbStack_108 * 0x7d;
      *(undefined8 *)(lVar32 + 0x20 + lVar27) = 0;
      *(undefined8 *)(lVar32 + 0x30 + lVar27) = 0;
      *(undefined4 *)(lVar32 + 0x40 + lVar27) = 0;
      *(undefined4 *)(lVar32 + 0x50 + lVar27) = 0;
      *(undefined4 *)(lVar32 + 0x60 + lVar27) = 0;
      *(undefined4 *)(lVar32 + 0x70 + lVar27) = 2;
      *(undefined **)(lVar32 + 0x90 + lVar27) = &UNK_143018ef8 + iVar17;
      *(undefined8 *)(lVar32 + 0x98 + lVar27) = 0x2a;
      *(undefined **)(lVar32 + 0xa0 + lVar27) = &UNK_14330db43;
      *(undefined8 *)(lVar32 + 0xa8 + lVar27) = 0x31;
      puVar25 = (undefined8 *)(lVar32 + 0xb0 + lVar27);
      *puVar25 = uStack_218;
      puVar25[1] = uStack_210;
      *(byte **)(lVar32 + 0xc0 + lVar27) = uStack_248;
      *(float *)(lVar32 + 200 + lVar27) = fStack_14c;
      *(undefined8 *)(lVar32 + 0xcc + lVar27) = 0x3f8000003f800000;
      *(undefined4 *)(lVar32 + 0xd4 + lVar27) = 0x3f800000;
      *(undefined4 *)(lVar32 + 0xe0 + lVar27) = 1;
      *(uint *)(lVar32 + 0xe4 + lVar27) = (uint)lStack_1d0;
      *(undefined4 *)(lVar32 + 0xe8 + lVar27) = 0;
      *(undefined1 *)(lVar32 + 0x105 + lVar27) = 2;
      *(undefined4 *)(lVar32 + 0x108 + lVar27) = 0;
      *(undefined1 *)(lVar32 + 0x15c + lVar27) = 2;
      *(ulonglong *)(lVar32 + 0x164 + lVar27) =
           CONCAT35(fStack_19c._0_3_,CONCAT41(fStack_1a0,uStack_1a1));
      *(ulonglong *)(lVar32 + 0x15d + lVar27) =
           CONCAT17(uStack_1a1,CONCAT52(uStack_1a6,CONCAT11(cStack_1a7,cStack_1a8)));
      *(undefined1 *)(lVar32 + 0x16c + lVar27) = 2;
      *(undefined1 *)(lVar32 + 0x16e + lVar27) = pbStack_1b0._0_1_;
      *(undefined1 *)(lVar32 + 0x16f + lVar27) = 0;
      plStack_100[0x18] = lVar18 + 1;
    }
    cVar14 = pdb_1409012c0(3,uStack_1e0);
    cStack_1a8 = pdb_140c44ba0(pbStack_108);
    cStack_1a7 = cVar14;
    lVar18 = pdb_141494370(pauStack_168,&cStack_1a8);
    if (lVar18 == 0) goto LAB_1408d29a5;
    fVar54 = *(float *)(lVar18 + 0x3c) - *(float *)(lVar18 + 0x38);
    plStack_1d8 = (longlong *)CONCAT44(plStack_1d8._4_4_,*(float *)(lVar18 + 0x30));
    fVar53 = *(float *)(lVar18 + 0x30) / _DAT_142f6d804;
    puVar25 = (undefined8 *)pdb_140901130(pbStack_258,&UNK_143018cc0);
    uVar23 = *puVar25;
    fVar55 = fVar53 + fVar53 + _DAT_143018840;
    lVar18 = plStack_100[0x1b];
    if (lVar18 == plStack_100[0x19]) {
      pdb_142d8d5c0(plStack_100 + 0x19);
    }
    lVar32 = plStack_100[0x1a];
    *(undefined8 *)(lVar32 + lVar18 * 0x14) = uVar23;
    *(float *)(lVar32 + 8 + lVar18 * 0x14) = fVar55;
    *(float *)(lVar32 + 0xc + lVar18 * 0x14) = fVar54;
    *(undefined1 *)(lVar32 + 0x10 + lVar18 * 0x14) = 0;
    plStack_100[0x1b] = lVar18 + 1;
    lStack_1d0 = lStack_110 + 0x29f;
    cVar14 = pdb_1408ff980();
    if (cVar14 != '\0') {
      puVar24 = (undefined4 *)pdb_140901130(pbStack_258,&UNK_143018cd8);
      uVar12 = *puVar24;
      uVar13 = puVar24[1];
      fVar55 = fVar67 * _DAT_142e378f0;
      fVar56 = fVar69 * _UNK_142e378f8;
      fVar61 = (float)uStack_218 * _DAT_142e378f0;
      fVar66 = uStack_218._4_4_ * _UNK_142e378f4;
      fVar63 = (float)uStack_210 * _UNK_142e378f8;
      fVar57 = fVar58 * _UNK_142e378f4;
      fVar60 = fVar59 * _UNK_142e378f8;
      fVar64 = uStack_218._4_4_ * _UNK_143011b24;
      fVar65 = (float)uStack_210 * _UNK_143011b28;
      uVar16 = *(uint *)(lStack_110 + 600);
      lVar18 = plStack_100[0x24];
      if (lVar18 == plStack_100[0x22]) {
        pdb_142d8a7a0(plStack_100 + 0x22);
      }
      fVar63 = fVar63 + fVar66 + fVar61;
      fVar63 = fVar63 + fVar63;
      lVar32 = plStack_100[0x23];
      lVar27 = lVar18 * 0x20;
      puVar24 = (undefined4 *)(lVar32 + lVar27);
      *puVar24 = uVar12;
      puVar24[1] = uVar13;
      puVar24[2] = (fVar60 + fVar65) * fVar62 + fVar55 + fVar63 * (float)uStack_218;
      puVar24[3] = (fVar57 + fVar64) * fVar62 + fVar56 + fVar63 * (float)uStack_210;
      *(byte **)(lVar32 + 0x10 + lVar27) = uStack_248;
      *(float *)(lVar32 + 0x18 + lVar27) = fStack_14c;
      *(char *)(lVar32 + 0x1c + lVar27) = (char)pbStack_108 + '\x0e';
      *(bool *)(lVar32 + 0x1d + lVar27) = 1 < uVar16;
      plStack_100[0x24] = lVar18 + 1;
    }
    pdb_140901130(pbStack_258,&UNK_143018cf0);
    pdb_140a87350(pbStack_108);
    pdb_140c42910(pbStack_108);
    pdb_140c428a0(&uStack_148);
    lVar18 = plStack_100[0x1e];
    if (lVar18 == plStack_100[0x1c]) {
      pdb_142d8a7a0(plStack_100 + 0x1c);
    }
    unaff_R12 = pbStack_1b8;
    pbVar22 = pbStack_1c0;
    lVar32 = plStack_100[0x1d];
    puVar25 = (undefined8 *)(lVar32 + 0x10 + lVar18 * 0x20);
    *puVar25 = CONCAT44(fStack_134,fStack_138);
    puVar25[1] = CONCAT44(uStack_12c,CONCAT22(uStack_12e,uStack_130));
    puVar25 = (undefined8 *)(lVar32 + lVar18 * 0x20);
    *puVar25 = CONCAT44(uStack_148._4_4_,(float)uStack_148);
    puVar25[1] = CONCAT44(fStack_13c,fStack_140);
    plStack_100[0x1e] = lVar18 + 1;
    pdb_1408ff980(lStack_1d0);
    in_stack_fffffffffffffc80 = CONCAT44(uVar44,plStack_260._0_4_);
    pdb_1408c6840(plStack_158,pbStack_258,pbVar22,unaff_R12,(ulonglong)pbStack_1b0 & 0xff,
                  in_stack_fffffffffffffc80,plStack_100,&uStack_2f0,0,0,1,fVar53,0);
    if (*(uint *)(lStack_110 + 600) < 2) {
      if (((byte)pbStack_108 < 3) && ((*(int *)(pbStack_160 + -0xc) * 0x22 + 0x398e1U) % 3 == 0)) {
        fVar55 = (float)uStack_218;
        fVar56 = uStack_218._4_4_;
        fVar57 = (float)uStack_210;
        fVar60 = uStack_210._4_4_;
        if ((byte)pbStack_108 != 1) {
          if (((uint)pbStack_108 & 0xff) != 2) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_143018ab8,0x28,&UNK_143018d18);
          }
          fVar53 = plStack_1d8._0_4_;
        }
        pdb_14007ee60();
        pfVar26 = (float *)pub_1406abab0(0x50,0x10);
        if (pfVar26 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(0x10,0x50);
        }
        fVar43 = fVar43 * _DAT_143018850;
        fVar58 = fVar58 * _UNK_143018854;
        fVar59 = fVar59 * _UNK_143018858;
        fVar61 = fVar55 * _DAT_143018860;
        fVar66 = fVar56 * _UNK_143018864;
        fVar64 = fVar57 * _UNK_143018868;
        fVar67 = fVar67 * _DAT_143018850;
        fVar68 = fVar68 * _UNK_143018854;
        fVar69 = fVar69 * _UNK_143018858;
        fVar63 = fVar57 * _UNK_143018858 + fVar56 * _UNK_143018854 + fVar55 * _DAT_143018850;
        fVar63 = fVar63 + fVar63;
        *pfVar26 = fVar55;
        pfVar26[1] = fVar56;
        pfVar26[2] = fVar57;
        pfVar26[3] = fVar60;
        *(ulonglong *)(pfVar26 + 4) =
             CONCAT44(fVar63 * fVar56 + fVar68 + fVar62 * (fVar61 + fVar43) + uStack_248._4_4_,
                      fVar63 * fVar55 + fVar67 + fVar62 * (fVar64 + fVar59) + (float)uStack_248);
        pfVar26[6] = fVar63 * fVar57 + fVar69 + fVar62 * (fVar66 + fVar58) + fStack_14c;
        pfVar26[7] = 1.0;
        pfVar26[8] = 1.0;
        pfVar26[9] = 1.0;
        *(undefined8 *)(pfVar26 + 0xc) = uStack_268;
        pfVar26[0xe] = fVar53;
        pfVar26[0xf] = fVar54;
        pfVar26[0x10] = SUB84(plStack_158,0);
        if ((byte *)plStack_100[0x28] != (byte *)0x0) {
          pub_1406abac0((byte *)plStack_100[0x28],0x50,0x10);
        }
        plStack_100[0x28] = (longlong)pfVar26;
      }
      else {
        lVar18 = pdb_140dedfe0();
        unaff_R12 = (byte *)(lVar18 + -0x5f89e29b87429bd1);
        auVar45._8_8_ = 0;
        auVar45._0_8_ = (ulonglong)unaff_R12 ^ 0xe7037ed1a0b428db;
        auVar47._8_8_ = 0;
        auVar47._0_8_ = unaff_R12;
        if ((SUB164(auVar45 * auVar47,0) ^ SUB164(auVar45 * auVar47,8)) >> 0x1e == 1) {
          uStack_148._0_4_ = (float)uStack_218;
          uStack_148._4_4_ = (undefined4)((ulonglong)uStack_218 >> 0x20);
          fStack_140 = (float)uStack_210;
          fStack_13c = (float)((ulonglong)uStack_210 >> 0x20);
          fStack_138 = SUB84(uStack_248,0);
          fStack_134 = (float)((ulonglong)uStack_248 >> 0x20);
          uStack_130 = SUB42(fStack_14c,0);
          uStack_12e = (undefined2)((uint)fStack_14c >> 0x10);
          uStack_12c = 0x3f800000;
          uStack_128 = 0x3f800000;
          uStack_124 = 0x3f800000;
          pdb_1408c7060(&uStack_230,pbStack_108,3,&uStack_148,uStack_298);
          uStack_248 = pbStack_228;
          if (lStack_220 != 0) {
            pbStack_1b0 = pbStack_228 + lStack_220 * 0x30;
            plStack_260 = plStack_100 + 0x25;
            lVar18 = 0;
            pbVar22 = pbStack_228;
            pbVar37 = unaff_R12;
            do {
              uVar23 = *(undefined8 *)(pbVar22 + 0x18);
              lStack_120 = *(longlong *)(pbVar22 + 0x28);
              uStack_128 = (undefined4)*(undefined8 *)(pbVar22 + 0x20);
              uStack_124 = (undefined4)((ulonglong)*(undefined8 *)(pbVar22 + 0x20) >> 0x20);
              fStack_138 = (float)*(undefined8 *)(pbVar22 + 0x10);
              fStack_134 = (float)((ulonglong)*(undefined8 *)(pbVar22 + 0x10) >> 0x20);
              uStack_130 = (ushort)uVar23;
              uStack_12e = (undefined2)((ulonglong)uVar23 >> 0x10);
              uStack_12c = (undefined4)((ulonglong)uVar23 >> 0x20);
              uStack_148._0_4_ = (float)*(undefined8 *)pbVar22;
              uStack_148._4_4_ = (undefined4)((ulonglong)*(undefined8 *)pbVar22 >> 0x20);
              fStack_140 = (float)*(undefined8 *)(pbVar22 + 8);
              fStack_13c = (float)((ulonglong)*(undefined8 *)(pbVar22 + 8) >> 0x20);
              uStack_1f8 = CONCAT44(uStack_1f8._4_4_,(int)plStack_158);
              plStack_208 = (longlong *)&UNK_143018d08;
              uStack_200 = 10;
              lStack_1f0 = lVar18;
              lStack_110 = lVar18;
              pbStack_108 = pbVar22;
              pbStack_160 = (byte *)pdb_1414af170(&plStack_208);
              unaff_R12 = pbVar37 + -0x5f89e29b87429bd1;
              auVar3._8_8_ = 0;
              auVar3._0_8_ = (ulonglong)unaff_R12 ^ 0xe7037ed1a0b428db;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = unaff_R12;
              uVar19 = SUB168(auVar3 * auVar7,8) ^ SUB168(auVar3 * auVar7,0);
              auVar4._8_8_ = 0;
              auVar4._0_8_ = uVar19;
              uStack_218 = SUB168(auVar4 * ZEXT816(6),8);
              if (uVar19 * 6 < 4) {
                pbVar37 = pbVar37 + 0x40ec3ac8f17ac85e;
                do {
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = (ulonglong)pbVar37 ^ 0xe7037ed1a0b428db;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = pbVar37;
                  unaff_R12 = unaff_R12 + -0x5f89e29b87429bd1;
                  uVar19 = SUB168(auVar5 * auVar8,8) ^ SUB168(auVar5 * auVar8,0);
                  pbVar37 = pbVar37 + -0x5f89e29b87429bd1;
                } while (uVar19 * 6 < 4);
                auVar6._8_8_ = 0;
                auVar6._0_8_ = uVar19;
                uStack_218 = SUB168(auVar6 * ZEXT816(6),8);
              }
              fStack_190 = (float)CONCAT22(uStack_12e,uStack_130);
              uStack_188 = CONCAT44(uStack_124,uStack_128);
              lStack_180 = lStack_120;
              fStack_198 = fStack_138;
              fStack_194 = fStack_134;
              uStack_18c = uStack_12c;
              cStack_1a8 = SUB41((float)uStack_148,0);
              cStack_1a7 = (char)((uint)(float)uStack_148 >> 8);
              uStack_1a6 = (uint5)(CONCAT44(uStack_148._4_4_,(float)uStack_148) >> 0x10);
              uStack_1a1 = (undefined1)((uint)uStack_148._4_4_ >> 0x18);
              fStack_1a0 = fStack_140;
              fStack_19c = fStack_13c;
              lVar32 = plStack_100[0x27];
              if (lVar32 == plStack_100[0x25]) {
                pdb_142d7eb40(plStack_260);
              }
              pbVar22 = pbStack_108 + 0x30;
              lVar18 = lStack_110 + 1;
              lVar27 = plStack_100[0x26];
              lVar28 = lVar32 * 0x50;
              *(undefined1 *)(lVar27 + lVar28) = 1;
              *(undefined8 *)(lVar27 + 8 + lVar28) = uStack_218;
              puVar25 = (undefined8 *)(lVar27 + 0x10 + lVar28);
              *puVar25 = CONCAT17(uStack_1a1,CONCAT52(uStack_1a6,CONCAT11(cStack_1a7,cStack_1a8)));
              puVar25[1] = CONCAT44(fStack_19c,fStack_1a0);
              puVar25 = (undefined8 *)(lVar27 + 0x20 + lVar28);
              *puVar25 = CONCAT44(fStack_194,fStack_198);
              puVar25[1] = CONCAT44(uStack_18c,fStack_190);
              puVar25 = (undefined8 *)(lVar27 + 0x30 + lVar28);
              *puVar25 = uStack_188;
              puVar25[1] = lStack_180;
              *(byte **)(lVar27 + 0x40 + lVar28) = pbStack_160;
              *(undefined8 *)(lVar27 + 0x48 + lVar28) = uStack_268;
              plStack_100[0x27] = lVar32 + 1;
              pbVar37 = unaff_R12;
            } while (pbVar22 != pbStack_1b0);
          }
          if (uStack_230 != (longlong *)0x0) {
            pub_1406abac0(uStack_248,(longlong)uStack_230 * 0x30,0x10);
          }
        }
      }
    }
LAB_1408d265d:
    if (pbStack_1c8 != (byte *)0x0) {
      pub_1406abac0(pbStack_1c0,(longlong)pbStack_1c8 * 0x30,0x10);
    }
    goto LAB_1408d0da7;
  }
LAB_1408d29dc:
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
}

