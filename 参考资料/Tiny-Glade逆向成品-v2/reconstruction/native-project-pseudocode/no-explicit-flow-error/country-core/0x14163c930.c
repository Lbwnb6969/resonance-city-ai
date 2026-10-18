// VA 0x14163c930, PDB extent 18392 bytes
// country_core::startup::bake_mod_textures::bake_and_apply_mod_texture_sources
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/bake_mod_textures.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::bake_mod_textures::bake_and_apply_mod_texture_sources
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/bake_mod_textures.rs
   Extent: 18392 */

undefined8 *
pdb_14163c930(undefined8 *param_1,undefined1 (*param_2) [16],undefined8 param_3,
             undefined1 (*param_4) [16],undefined8 *param_5)

{
  char *pcVar1;
  undefined1 uVar2;
  byte bVar3;
  longlong *******ppppppplVar4;
  code *pcVar5;
  uint uVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar24;
  undefined1 (*pauVar25) [16];
  undefined8 uVar26;
  char cVar27;
  char cVar28;
  ushort uVar29;
  int iVar30;
  undefined8 *puVar31;
  ulonglong uVar32;
  longlong *plVar33;
  undefined *puVar34;
  undefined1 (*pauVar35) [16];
  undefined1 *puVar36;
  undefined1 (*pauVar37) [16];
  undefined1 (*pauVar38) [16];
  undefined1 (*pauVar39) [16];
  byte *pbVar40;
  undefined8 uVar41;
  undefined4 uVar42;
  longlong *******arg1;
  longlong *******ppppppplVar43;
  undefined1 (*pauVar44) [16];
  undefined1 (*pauVar45) [16];
  undefined1 (*pauVar46) [16];
  undefined1 (*pauVar47) [16];
  longlong *******ppppppplVar48;
  longlong lVar49;
  undefined1 (*pauVar50) [16];
  uint uVar51;
  byte *pbVar52;
  ulonglong uVar53;
  byte bVar54;
  longlong lVar55;
  uint uVar56;
  undefined *puVar57;
  longlong lVar58;
  byte bVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 unaff_XMM8_Ba;
  undefined1 unaff_XMM8_Bb;
  char cVar66;
  undefined1 unaff_XMM8_Bc;
  char cVar67;
  undefined1 unaff_XMM8_Bd;
  char cVar68;
  undefined1 unaff_XMM8_Be;
  char cVar69;
  undefined1 unaff_XMM8_Bf;
  char cVar70;
  undefined1 unaff_XMM8_Bg;
  char cVar71;
  undefined1 unaff_XMM8_Bh;
  char cVar72;
  undefined1 unaff_XMM8_Bi;
  char cVar73;
  undefined1 unaff_XMM8_Bj;
  char cVar74;
  undefined1 unaff_XMM8_Bk;
  char cVar75;
  undefined1 unaff_XMM8_Bl;
  char cVar76;
  undefined1 unaff_XMM8_Bm;
  char cVar77;
  undefined1 unaff_XMM8_Bn;
  char cVar78;
  undefined1 unaff_XMM8_Bo;
  char cVar79;
  undefined1 unaff_XMM8_Bp;
  char cVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 (*pauStack_d38) [16];
  undefined1 (*pauStack_d30) [16];
  undefined1 (*pauStack_d28) [16];
  undefined1 (*pauStack_d20) [16];
  undefined1 (*pauStack_d18) [16];
  undefined8 uStack_d10;
  undefined1 (*pauStack_ad8) [16];
  undefined8 uStack_ad0;
  undefined1 auStack_ac8 [16];
  undefined4 uStack_ab8;
  undefined4 uStack_ab4;
  undefined4 uStack_ab0;
  undefined4 uStack_aac;
  undefined4 uStack_aa8;
  undefined4 uStack_aa4;
  undefined4 uStack_aa0;
  undefined4 uStack_a9c;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined1 (*pauStack_878) [16];
  undefined1 (*pauStack_870) [16];
  longlong ******pppppplStack_868;
  longlong ******pppppplStack_860;
  longlong ******pppppplStack_858;
  longlong ******pppppplStack_850;
  undefined1 (*pauStack_848) [16];
  undefined1 (*pauStack_840) [16];
  undefined1 (*pauStack_838) [16];
  undefined1 (*pauStack_830) [16];
  undefined1 (*pauStack_828) [16];
  undefined1 (*pauStack_820) [16];
  undefined1 *puStack_818;
  undefined1 (*pauStack_810) [16];
  undefined1 (*pauStack_808) [16];
  undefined1 (*pauStack_800) [16];
  undefined *puStack_7f8;
  undefined1 (**ppauStack_7f0) [16];
  undefined1 auStack_5d8 [16];
  undefined1 *puStack_5c8;
  undefined1 (*pauStack_5b8) [16];
  undefined1 (*pauStack_5b0) [16];
  undefined1 (*pauStack_5a8) [16];
  undefined1 (*pauStack_5a0) [16];
  undefined1 (*pauStack_598) [16];
  undefined1 (*pauStack_590) [16];
  undefined8 uStack_588;
  undefined *puStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined1 uStack_4c0;
  undefined1 (*pauStack_348) [16];
  undefined *apuStack_340 [2];
  undefined1 (*pauStack_330) [16];
  undefined1 (*pauStack_328) [16];
  undefined1 (*pauStack_320) [16];
  undefined1 (*pauStack_318) [16];
  undefined8 uStack_310;
  undefined8 uStack_308;
  longlong *******ppppppplStack_300;
  longlong lStack_2f8;
  undefined1 (*pauStack_2e8) [16];
  undefined1 (*pauStack_2e0) [16];
  undefined1 (*pauStack_2d8) [16];
  undefined1 (*pauStack_2c8) [16];
  byte *pbStack_2c0;
  undefined8 uStack_2b8;
  undefined1 (*pauStack_2a8) [16];
  ulonglong uStack_2a0;
  longlong lStack_290;
  undefined1 auStack_288 [16];
  longlong *******ppppppplStack_278;
  longlong *******ppppppplStack_270;
  undefined8 uStack_268;
  longlong *******ppppppplStack_260;
  longlong lStack_258;
  undefined1 (*pauStack_250) [16];
  undefined1 (*pauStack_248) [16];
  undefined1 (*pauStack_240) [16];
  undefined1 auStack_238 [16];
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 (*pauStack_210) [16];
  undefined1 (*pauStack_208) [16];
  undefined1 (*pauStack_200) [16];
  undefined1 (*pauStack_1f8) [16];
  undefined1 (*pauStack_1f0) [16];
  undefined1 (*pauStack_1e8) [16];
  undefined1 (*pauStack_1e0) [16];
  longlong lStack_1d8;
  longlong *******ppppppplStack_1d0;
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined1 (*pauStack_1a8) [16];
  undefined1 (*pauStack_1a0) [16];
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 (*pauStack_178) [16];
  undefined1 (*pauStack_170) [16];
  undefined1 (*pauStack_168) [16];
  undefined1 (*pauStack_160) [16];
  undefined1 (*pauStack_158) [16];
  undefined1 (*pauStack_150) [16];
  undefined1 (*pauStack_148) [16];
  ulonglong uStack_140;
  undefined1 (*pauStack_138) [16];
  byte *pbStack_130;
  undefined1 (*pauStack_128) [16];
  longlong *******ppppppplStack_120;
  undefined1 (*pauStack_118) [16];
  undefined1 (*pauStack_110) [16];
  undefined1 (*pauStack_108) [16];
  undefined8 *puStack_100;
  undefined1 (*pauStack_f8) [16];
  undefined1 (*pauStack_f0) [16];
  undefined1 (*pauStack_e8) [16];
  undefined1 (*pauStack_e0) [16];
  undefined1 (*pauStack_d8) [16];
  byte bStack_cb;
  undefined1 uStack_ca;
  undefined1 uStack_c9;
  undefined1 (*pauStack_c8) [16];
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  lVar49 = param_5[1];
  lVar55 = param_5[2];
  uStack_b7 = 1;
  pauStack_318 = param_2;
  uStack_310 = param_3;
  puStack_100 = param_1;
  puVar31 = (undefined8 *)pdb_140f3bda0();
  pauStack_320 = param_4;
  if (*(char *)(puVar31 + 2) == '\x01') {
    pauStack_598 = (undefined1 (*) [16])*puVar31;
    param_2 = (undefined1 (*) [16])puVar31[1];
  }
  else {
    uStack_b7 = 1;
    pauStack_598 = (undefined1 (*) [16])pdb_140f4fd10();
    *puVar31 = pauStack_598;
    puVar31[1] = param_2;
    *(undefined1 *)(puVar31 + 2) = 1;
  }
  *puVar31 = *pauStack_598 + 1;
  pauVar25 = _UNK_143320928;
  pauVar47 = _DAT_143320920;
  pauVar39 = _UNK_143320918;
  pauVar38 = _DAT_143320910;
  pauStack_5a8 = _DAT_143320920;
  pauStack_5a0 = _UNK_143320928;
  pauStack_5b8 = _DAT_143320910;
  pauStack_5b0 = _UNK_143320918;
  pauStack_590 = param_2;
  if (lVar55 != 0) {
    pdb_142db6610(&pauStack_5b8,lVar55,&pauStack_598,1);
    lVar58 = 0;
    do {
      pdb_140f60be0(&pauStack_848,lVar58 * 0x38 + lVar49);
      pdb_1403b0b40(&pauStack_5b8,&pauStack_848);
      lVar58 = lVar58 + 1;
    } while (lVar58 != lVar55);
  }
  puVar31 = puStack_100;
  auStack_238._8_8_ = pauStack_5a0;
  auStack_238._0_8_ = pauStack_5a8;
  uStack_228 = pauStack_598;
  uStack_220 = pauStack_590;
  pauStack_248 = pauStack_5b8;
  pauStack_240 = pauStack_5b0;
  if (param_5[2] == 0) {
    puStack_100[4] = pauStack_598;
    puStack_100[5] = pauStack_590;
    puStack_100[2] = pauStack_5a8;
    puStack_100[3] = pauStack_5a0;
    *puStack_100 = pauStack_5b8;
    puStack_100[1] = pauStack_5b0;
    pdb_14096bb10();
    puStack_100 = puVar31;
  }
  else {
    lStack_2f8 = param_5[2];
    uStack_308 = *param_5;
    ppppppplStack_300 = (longlong *******)param_5[1];
    pdb_141b00000(&pauStack_2a8);
    uVar24 = _UNK_142e47bfc;
    uVar42 = _UNK_142e47bf8;
    auVar60._8_8_ = 0;
    auVar60._0_8_ = auStack_1c8._8_8_;
    auStack_1c8 = auVar60 << 0x40;
    pauStack_210 = (undefined1 (*) [16])0x0;
    pauStack_208 = (undefined1 (*) [16])0x10;
    pauStack_200 = (undefined1 (*) [16])0x0;
    arg1 = ppppppplStack_300 + lStack_2f8 * 7;
    ppppppplStack_278 = ppppppplStack_300;
    ppppppplStack_270 = ppppppplStack_300;
    uStack_268 = uStack_308;
    lStack_258 = lStack_290;
    pauStack_e0 = pauStack_2a8;
    uStack_140 = uStack_2a0;
    iVar30 = -(uint)(CONCAT13(unaff_XMM8_Bd,
                              CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))) ==
                    CONCAT13(unaff_XMM8_Bd,
                             CONCAT12(unaff_XMM8_Bc,CONCAT11(unaff_XMM8_Bb,unaff_XMM8_Ba))));
    cVar28 = (char)iVar30;
    cVar66 = (char)((uint)iVar30 >> 8);
    cVar67 = (char)((uint)iVar30 >> 0x10);
    cVar68 = (char)((uint)iVar30 >> 0x18);
    iVar30 = -(uint)(CONCAT13(unaff_XMM8_Bh,
                              CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))) ==
                    CONCAT13(unaff_XMM8_Bh,
                             CONCAT12(unaff_XMM8_Bg,CONCAT11(unaff_XMM8_Bf,unaff_XMM8_Be))));
    cVar69 = (char)iVar30;
    cVar70 = (char)((uint)iVar30 >> 8);
    cVar71 = (char)((uint)iVar30 >> 0x10);
    cVar72 = (char)((uint)iVar30 >> 0x18);
    iVar30 = -(uint)(CONCAT13(unaff_XMM8_Bl,
                              CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))) ==
                    CONCAT13(unaff_XMM8_Bl,
                             CONCAT12(unaff_XMM8_Bk,CONCAT11(unaff_XMM8_Bj,unaff_XMM8_Bi))));
    cVar73 = (char)iVar30;
    cVar74 = (char)((uint)iVar30 >> 8);
    cVar75 = (char)((uint)iVar30 >> 0x10);
    cVar76 = (char)((uint)iVar30 >> 0x18);
    iVar30 = -(uint)(CONCAT13(unaff_XMM8_Bp,
                              CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))) ==
                    CONCAT13(unaff_XMM8_Bp,
                             CONCAT12(unaff_XMM8_Bo,CONCAT11(unaff_XMM8_Bn,unaff_XMM8_Bm))));
    cVar77 = (char)iVar30;
    cVar78 = (char)((uint)iVar30 >> 8);
    cVar79 = (char)((uint)iVar30 >> 0x10);
    cVar80 = (char)((uint)iVar30 >> 0x18);
    ppppppplStack_260 = arg1;
LAB_14163cb1a:
    ppppppplVar43 = (longlong *******)&ppppppplStack_120;
    ppppppplVar48 = ppppppplStack_270;
    if (ppppppplStack_270 != ppppppplStack_260) {
      ppppppplVar48 = ppppppplStack_270 + 7;
      ppppppplVar4 = (longlong *******)*ppppppplStack_270;
      pppppplStack_858 = ppppppplStack_270[5];
      pppppplStack_850 = ppppppplStack_270[6];
      pppppplStack_868 = ppppppplStack_270[3];
      pppppplStack_860 = ppppppplStack_270[4];
      pauStack_878 = (undefined1 (*) [16])ppppppplStack_270[1];
      pauStack_870 = (undefined1 (*) [16])ppppppplStack_270[2];
      arg1 = (longlong *******)-(longlong)ppppppplVar4;
      if (!SBORROW8(0,(longlong)ppppppplVar4)) {
        auStack_198 = *(undefined1 (*) [16])(ppppppplStack_270 + 3);
        auStack_188 = *(undefined1 (*) [16])(ppppppplStack_270 + 5);
        ppppppplStack_270 = ppppppplVar48;
        ppppppplStack_120 = ppppppplVar4;
        pauStack_118 = pauStack_878;
        pauStack_110 = pauStack_870;
        if (lStack_258 != 0) {
          uStack_b3 = 1;
          uVar32 = pdb_1400afac0(auStack_288);
          pauVar37 = pauStack_110;
          pauVar44 = pauStack_118;
          bVar59 = (byte)(uVar32 >> 0x39);
          auVar60 = ZEXT216(CONCAT11(bVar59,bVar59));
          auVar60 = pshuflw(auVar60,auVar60,0);
          lVar49 = 0;
          arg1 = ppppppplVar43;
          while( true ) {
            uVar32 = uVar32 & uStack_140;
            pcVar1 = *pauStack_e0 + uVar32;
            cVar27 = *pcVar1;
            cVar7 = pcVar1[1];
            cVar8 = pcVar1[2];
            cVar9 = pcVar1[3];
            cVar10 = pcVar1[4];
            cVar11 = pcVar1[5];
            cVar12 = pcVar1[6];
            cVar13 = pcVar1[7];
            cVar14 = pcVar1[8];
            cVar15 = pcVar1[9];
            cVar16 = pcVar1[10];
            cVar17 = pcVar1[0xb];
            cVar18 = pcVar1[0xc];
            cVar19 = pcVar1[0xd];
            cVar20 = pcVar1[0xe];
            cVar21 = pcVar1[0xf];
            auVar61[0] = -(cVar27 == auVar60[0]);
            auVar61[1] = -(cVar7 == auVar60[1]);
            auVar61[2] = -(cVar8 == auVar60[2]);
            auVar61[3] = -(cVar9 == auVar60[3]);
            auVar61[4] = -(cVar10 == auVar60[4]);
            auVar61[5] = -(cVar11 == auVar60[5]);
            auVar61[6] = -(cVar12 == auVar60[6]);
            auVar61[7] = -(cVar13 == auVar60[7]);
            auVar61[8] = -(cVar14 == auVar60[0]);
            auVar61[9] = -(cVar15 == auVar60[1]);
            auVar61[10] = -(cVar16 == auVar60[2]);
            auVar61[0xb] = -(cVar17 == auVar60[3]);
            auVar61[0xc] = -(cVar18 == auVar60[4]);
            auVar61[0xd] = -(cVar19 == auVar60[5]);
            auVar61[0xe] = -(cVar20 == auVar60[6]);
            auVar61[0xf] = -(cVar21 == auVar60[7]);
            uVar29 = (ushort)(SUB161(auVar61 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar61[0xf] >> 7) << 0xf;
            uVar56 = (uint)uVar29;
            while (uVar29 != 0) {
              uVar51 = 0;
              for (uVar6 = uVar56; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar51 = uVar51 + 1;
              }
              lVar55 = (uVar51 + uVar32 & uStack_140) * -0x38;
              if (pauVar37 == *(undefined1 (**) [16])((longlong)pauStack_e0 + lVar55 + -0x28)) {
                lVar55 = lVar55 + (longlong)pauStack_e0;
                arg1 = *(longlong ********)(lVar55 + -0x30);
                iVar30 = pub_142e32750(pauVar44);
                if (iVar30 == 0) goto LAB_14163d050;
              }
              uVar29 = (ushort)(uVar56 - 1) & (ushort)uVar56;
              uVar56 = CONCAT22((short)(uVar56 - 1 >> 0x10),uVar29);
            }
            auVar81[0] = -(cVar27 == cVar28);
            auVar81[1] = -(cVar7 == cVar66);
            auVar81[2] = -(cVar8 == cVar67);
            auVar81[3] = -(cVar9 == cVar68);
            auVar81[4] = -(cVar10 == cVar69);
            auVar81[5] = -(cVar11 == cVar70);
            auVar81[6] = -(cVar12 == cVar71);
            auVar81[7] = -(cVar13 == cVar72);
            auVar81[8] = -(cVar14 == cVar73);
            auVar81[9] = -(cVar15 == cVar74);
            auVar81[10] = -(cVar16 == cVar75);
            auVar81[0xb] = -(cVar17 == cVar76);
            auVar81[0xc] = -(cVar18 == cVar77);
            auVar81[0xd] = -(cVar19 == cVar78);
            auVar81[0xe] = -(cVar20 == cVar79);
            auVar81[0xf] = -(cVar21 == cVar80);
            if ((((((((((((((((SUB161(auVar81 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar81 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar81 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar81 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar81 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar81 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar81 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar81 >> 0x3f,0) & 1) != 0) || (SUB161(auVar81 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar81 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar81 >> 0x57,0) & 1) != 0) || (SUB161(auVar81 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar81 >> 0x67,0) & 1) != 0) || (SUB161(auVar81 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar81 >> 0x77,0) & 1) != 0) || auVar81[0xf] < '\0') break;
            uVar32 = uVar32 + lVar49 + 0x10;
            lVar49 = lVar49 + 0x10;
          }
        }
        if (auStack_1c8._0_8_ == 0) {
          uStack_b3 = 1;
          plVar33 = (longlong *)pdb_140f3bda0();
          if ((char)plVar33[2] == '\x01') {
            lStack_1d8 = *plVar33;
            arg1 = (longlong *******)plVar33[1];
          }
          else {
            uStack_b3 = 1;
            lStack_1d8 = pdb_140f4fd10();
            *plVar33 = lStack_1d8;
            plVar33[1] = (longlong)arg1;
            *(undefined1 *)(plVar33 + 2) = 1;
          }
          *plVar33 = lStack_1d8 + 1;
          pauStack_1e8 = pauVar47;
          pauStack_1e0 = pauVar25;
          pauStack_1f8 = pauVar38;
          pauStack_1f0 = pauVar39;
          pauStack_158 = (undefined1 (*) [16])0x0;
          pauStack_150 = (undefined1 (*) [16])0x8;
          pauStack_148 = (undefined1 (*) [16])0x0;
          uStack_b4 = 1;
          pauVar44 = (undefined1 (*) [16])&UNK_143320a98;
          ppppppplStack_1d0 = arg1;
          pdb_140f4f710(&pauStack_5b8);
          if ((int)pauStack_5b8 == 2) {
            pauStack_840 = pauStack_5b0;
            pauStack_848 = (undefined1 (*) [16])0x2;
LAB_14163cd7e:
            uStack_b4 = 1;
            pdb_1404b38e0(&pauStack_840);
            uStack_b4 = 1;
            puVar31 = (undefined8 *)pdb_140f3bda0();
            if (*(char *)(puVar31 + 2) == '\x01') {
              pauVar37 = (undefined1 (*) [16])*puVar31;
              pauVar44 = (undefined1 (*) [16])puVar31[1];
            }
            else {
              uStack_b4 = 1;
              pauVar37 = (undefined1 (*) [16])pdb_140f4fd10();
              *puVar31 = pauVar37;
              puVar31[1] = pauVar44;
              *(undefined1 *)(puVar31 + 2) = 1;
            }
            pauVar45 = pauStack_150;
            *puVar31 = *pauVar37 + 1;
            auStack_ac8._8_8_ = pauVar25;
            auStack_ac8._0_8_ = pauVar47;
            pauStack_ad8 = pauVar38;
            uStack_ad0._0_4_ = SUB84(pauVar39,0);
            uStack_ad0._4_4_ = (undefined4)((ulonglong)pauVar39 >> 0x20);
            if (pauStack_148 != (undefined1 (*) [16])0x0) {
              pauVar35 = pauStack_150 + 2;
              pauVar46 = pauStack_148;
              do {
                if (*(ulonglong *)pauVar35[-2] != 0) {
                  pub_1406abac0(*(byte **)(pauVar35[-2] + 8),*(ulonglong *)pauVar35[-2],1);
                }
                if (*(ulonglong *)(pauVar35[-1] + 8) != 0) {
                  pub_1406abac0(*(byte **)*pauVar35,*(ulonglong *)(pauVar35[-1] + 8),1);
                }
                pauVar35 = pauVar35 + 3;
                pauVar46 = (undefined1 (*) [16])(pauVar46[-1] + 0xf);
              } while (pauVar46 != (undefined1 (*) [16])0x0);
            }
            pauVar35 = pauStack_1f8;
            pauVar46 = pauStack_1f0;
            pauVar50 = pauStack_1e0;
            if (pauStack_158 != (undefined1 (*) [16])0x0) {
              pub_1406abac0((byte *)pauVar45,(longlong)pauStack_158 * 0x30,8);
              pauVar35 = pauStack_1f8;
              pauVar46 = pauStack_1f0;
              pauVar50 = pauStack_1e0;
            }
          }
          else {
            pauVar44 = (undefined1 (*) [16])&pauStack_5b8;
            pub_142e32760(&pauStack_848);
            if (pauStack_848 == (undefined1 (*) [16])0x2) goto LAB_14163cd7e;
            pub_142e32760(&pauStack_5b8,&pauStack_848,0x270);
            while( true ) {
              pdb_140f59fa0(&pauStack_848,&pauStack_5b8);
              if ((int)pauStack_848 != 1) break;
              pub_142e32760(&pauStack_ad8,&pauStack_840,600);
              pauVar44 = pauStack_ad8;
              if (pauStack_ad8 == (undefined1 (*) [16])0x0) {
                pdb_1404b38e0(&uStack_ad0);
              }
              else {
                pub_142e32760(&pauStack_d30,&pauStack_838,0x250);
                pauStack_d38 = pauVar44;
                pdb_140f46b10(&pauStack_848,&pauStack_d38);
                pauStack_c8 = pauStack_840;
                pdb_140f3e9e0(&pauStack_2c8,pauStack_840,pauStack_838,&UNK_143320aa4,0xd);
                if (pauStack_848 != (undefined1 (*) [16])0x0) {
                  pub_1406abac0((byte *)pauStack_c8,(ulonglong)pauStack_848,1);
                }
                uVar41 = uStack_2b8;
                pbStack_130 = pbStack_2c0;
                cVar27 = pdb_140f3ec10(pbStack_2c0,uStack_2b8);
                if (cVar27 == '\0') {
LAB_14163de96:
                  if (pauStack_2c8 != (undefined1 (*) [16])0x0) {
                    pub_1406abac0(pbStack_130,(ulonglong)pauStack_2c8,1);
                  }
                  LOCK();
                  *(longlong *)*pauStack_d38 = *(longlong *)*pauStack_d38 + -1;
                  UNLOCK();
                  if (*(longlong *)*pauStack_d38 == 0) {
                    pdb_140cd0de0(&pauStack_d38);
                  }
                }
                else {
                  pdb_14163c530(&pauStack_848,pbStack_130,uVar41);
                  apuStack_340[1] = (undefined *)uVar41;
                  pauStack_160 = pauStack_840 + (longlong)pauStack_838 * 3;
                  pauStack_178 = pauStack_840;
                  pauStack_170 = pauStack_840;
                  pauStack_330 = pauStack_848;
                  pauStack_168 = pauStack_848;
                  pauStack_328 = pauStack_840;
                  pauVar44 = pauStack_840;
                  pauVar37 = pauStack_840;
                  pauStack_138 = pauStack_160;
                  if (pauStack_838 != (undefined1 (*) [16])0x0) {
                    do {
                      pauVar44 = pauVar37 + 3;
                      pauVar35 = *(undefined1 (**) [16])*pauVar37;
                      pauStack_170 = pauVar44;
                      if (SBORROW8(0,(longlong)pauVar35)) break;
                      uVar41 = *(undefined8 *)pauVar37[1];
                      pauStack_e8 = *(undefined1 (**) [16])(pauVar37[2] + 8);
                      pauStack_f8 = *(undefined1 (**) [16])(pauVar37[1] + 8);
                      pauStack_f0 = *(undefined1 (**) [16])pauVar37[2];
                      pauVar46 = *(undefined1 (**) [16])(*pauVar37 + 8);
                      if (lStack_258 != 0) {
                        uStack_bb = 1;
                        pauStack_d8 = *(undefined1 (**) [16])(*pauVar37 + 8);
                        pauStack_c8 = pauVar35;
                        puVar36 = (undefined1 *)pdb_1400afac0(auStack_288);
                        pauVar50 = pauStack_e8;
                        pauVar37 = pauStack_f0;
                        bVar59 = (byte)((ulonglong)puVar36 >> 0x39);
                        auVar60 = ZEXT216(CONCAT11(bVar59,bVar59));
                        auVar60 = pshuflw(auVar60,auVar60,0);
                        pauVar45 = (undefined1 (*) [16])0x0;
                        do {
                          uVar32 = (ulonglong)puVar36 & uStack_140;
                          pcVar1 = *pauStack_e0 + uVar32;
                          cVar27 = *pcVar1;
                          cVar7 = pcVar1[1];
                          cVar8 = pcVar1[2];
                          cVar9 = pcVar1[3];
                          cVar10 = pcVar1[4];
                          cVar11 = pcVar1[5];
                          cVar12 = pcVar1[6];
                          cVar13 = pcVar1[7];
                          cVar14 = pcVar1[8];
                          cVar15 = pcVar1[9];
                          cVar16 = pcVar1[10];
                          cVar17 = pcVar1[0xb];
                          cVar18 = pcVar1[0xc];
                          cVar19 = pcVar1[0xd];
                          cVar20 = pcVar1[0xe];
                          cVar21 = pcVar1[0xf];
                          auVar63[0] = -(cVar27 == auVar60[0]);
                          auVar63[1] = -(cVar7 == auVar60[1]);
                          auVar63[2] = -(cVar8 == auVar60[2]);
                          auVar63[3] = -(cVar9 == auVar60[3]);
                          auVar63[4] = -(cVar10 == auVar60[4]);
                          auVar63[5] = -(cVar11 == auVar60[5]);
                          auVar63[6] = -(cVar12 == auVar60[6]);
                          auVar63[7] = -(cVar13 == auVar60[7]);
                          auVar63[8] = -(cVar14 == auVar60[0]);
                          auVar63[9] = -(cVar15 == auVar60[1]);
                          auVar63[10] = -(cVar16 == auVar60[2]);
                          auVar63[0xb] = -(cVar17 == auVar60[3]);
                          auVar63[0xc] = -(cVar18 == auVar60[4]);
                          auVar63[0xd] = -(cVar19 == auVar60[5]);
                          auVar63[0xe] = -(cVar20 == auVar60[6]);
                          auVar63[0xf] = -(cVar21 == auVar60[7]);
                          uVar29 = (ushort)(SUB161(auVar63 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
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
                                   (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(auVar63[0xf] >> 7) << 0xf;
                          uVar56 = (uint)uVar29;
                          if (uVar29 != 0) {
LAB_14163d77a:
                            pauStack_108 = pauVar45;
                            pauVar35 = pauStack_e0;
                            uVar51 = 0;
                            for (uVar6 = uVar56; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000)
                            {
                              uVar51 = uVar51 + 1;
                            }
                            lVar49 = (uVar51 + uVar32 & uStack_140) * -0x38;
                            if (pauVar50 !=
                                *(undefined1 (**) [16])((longlong)pauStack_e0 + lVar49 + -0x28))
                            goto LAB_14163d7ba;
                            iVar30 = pub_142e32750(pauVar37,*(undefined8 *)
                                                             ((longlong)pauStack_e0 + lVar49 + -0x30
                                                             ),pauVar50);
                            if (iVar30 != 0) goto LAB_14163d7ba;
                            pauStack_ad8 = pauStack_c8;
                            uStack_ad0._0_4_ = SUB84(pauStack_d8,0);
                            uStack_ad0._4_4_ = (undefined4)((ulonglong)pauStack_d8 >> 0x20);
                            auStack_ac8._0_8_ = uVar41;
                            uStack_bb = 0;
                            pdb_1417a8a40(&pauStack_848,&pauStack_1f8,&pauStack_ad8);
                            if (SBORROW8(0,(longlong)pauStack_848)) {
                              bVar59 = *(byte *)((longlong)pauVar35 + lVar49 + -0x20);
                              iVar30 = *(int *)((longlong)pauVar35 + lVar49 + -0x14);
                              if (*(int *)pauStack_840[-2] == 1) {
                                if ((bVar59 & *(longlong *)(pauStack_840[-2] + 4) ==
                                              *(longlong *)((longlong)pauVar35 + lVar49 + -0x1c)) !=
                                    0) {
LAB_14163d9d0:
                                  if ((((pauStack_840[-1][4] ==
                                         *(char *)((longlong)pauVar35 + lVar49 + -0xc)) &&
                                       (*(int *)(pauStack_840[-2] + 0xc) == iVar30)) &&
                                      ((iVar30 != 2 ||
                                       (*(int *)pauStack_840[-1] ==
                                        *(int *)((longlong)pauVar35 + lVar49 + -0x10))))) &&
                                     ((((pauStack_840[-1][7] ==
                                         *(char *)((longlong)pauVar35 + lVar49 + -9) &&
                                        (pauStack_840[-1][5] ==
                                         *(char *)((longlong)pauVar35 + lVar49 + -0xb))) &&
                                       (pauStack_840[-1][6] ==
                                        *(char *)((longlong)pauVar35 + lVar49 + -10))) &&
                                      (pauStack_840[-1][8] ==
                                       *(char *)((longlong)pauVar35 + lVar49 + -8)))))
                                  goto LAB_14163db09;
                                }
                              }
                              else if ((bVar59 & 1) == 0) goto LAB_14163d9d0;
                              if (1 < *_DAT_143ca8e90) {
                                pauStack_348 = pauStack_840 + -2;
                                apuStack_340[0] = pauStack_840[-4] + 8;
                                pauStack_ad8 = (undefined1 (*) [16])apuStack_340;
                                uStack_ad0._0_4_ = 0x40493e10;
                                uStack_ad0._4_4_ = 1;
                                auStack_ac8._8_8_ = pdb_14170bc30;
                                auStack_ac8._0_8_ = &pauStack_348;
                                pauStack_848 = (undefined1 (*) [16])0x0;
                                pauStack_840 = (undefined1 (*) [16])&UNK_1433209d4;
                                pauStack_838 = (undefined1 (*) [16])0x28;
                                pauStack_830 = (undefined1 (*) [16])0x0;
                                pauStack_828 = (undefined1 (*) [16])&UNK_14332099f;
                                pauStack_820 = (undefined1 (*) [16])0x34;
                                puStack_818 = (undefined1 *)0x2;
                                pauStack_810 = (undefined1 (*) [16])&UNK_1433209d4;
                                pauStack_808 = (undefined1 (*) [16])0x28;
                                pauStack_800 = (undefined1 (*) [16])0x10900000001;
                                puStack_7f8 = &UNK_143320ab1;
                                uStack_bb = 0;
                                ppauStack_7f0 = &pauStack_ad8;
                                pdb_140f332f0(&uStack_b8,&pauStack_848);
                              }
                            }
                            else {
                              pauVar37 = *(undefined1 (**) [16])
                                          ((longlong)pauVar35 + lVar49 + -0x10);
                              pauVar50 = *(undefined1 (**) [16])
                                          ((longlong)pauVar35 + lVar49 + -0x20);
                              pauVar45 = *(undefined1 (**) [16])
                                          ((longlong)pauVar35 + lVar49 + -0x18);
                              pauVar46 = *(undefined1 (**) [16])*pauStack_830;
                              uVar32 = *(ulonglong *)(*pauStack_830 + 8);
                              uVar53 = uVar32 & (ulonglong)pauStack_828;
                              auVar60 = *(undefined1 (*) [16])(*pauVar46 + uVar53);
                              uVar29 = (ushort)(SUB161(auVar60 >> 7,0) & 1) |
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
                                       (ushort)(byte)(auVar60[0xf] >> 7) << 0xf;
                              uVar56 = (uint)uVar29;
                              if (uVar29 == 0) {
                                lVar55 = 0x10;
                                do {
                                  uVar53 = uVar53 + lVar55 & uVar32;
                                  auVar60 = *(undefined1 (*) [16])(*pauVar46 + uVar53);
                                  lVar55 = lVar55 + 0x10;
                                  uVar56 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                                          (ushort)(SUB161(auVar60 >> 0xf,0) & 1) <<
                                                          1 | (ushort)(SUB161(auVar60 >> 0x17,0) & 1
                                                                      ) << 2 |
                                                          (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) <<
                                                          3 | (ushort)(SUB161(auVar60 >> 0x27,0) & 1
                                                                      ) << 4 |
                                                          (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) <<
                                                          5 | (ushort)(SUB161(auVar60 >> 0x37,0) & 1
                                                                      ) << 6 |
                                                          (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) <<
                                                          7 | (ushort)(SUB161(auVar60 >> 0x47,0) & 1
                                                                      ) << 8 |
                                                          (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) <<
                                                          9 | (ushort)(SUB161(auVar60 >> 0x57,0) & 1
                                                                      ) << 10 |
                                                          (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) <<
                                                          0xb | (ushort)(SUB161(auVar60 >> 0x67,0) &
                                                                        1) << 0xc |
                                                          (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) <<
                                                          0xd | (ushort)(SUB161(auVar60 >> 0x77,0) &
                                                                        1) << 0xe |
                                                         (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
                                } while (uVar56 == 0);
                              }
                              uVar2 = *(undefined1 *)((longlong)pauVar35 + lVar49 + -8);
                              uVar51 = 0;
                              for (; (uVar56 & 1) == 0; uVar56 = uVar56 >> 1 | 0x80000000) {
                                uVar51 = uVar51 + 1;
                              }
                              uVar53 = uVar51 + uVar53 & uVar32;
                              bVar59 = (*pauVar46)[uVar53];
                              if (-1 < (char)bVar59) {
                                auVar60 = *pauVar46;
                                uVar56 = 0;
                                for (uVar51 = (uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
                                                             (ushort)(SUB161(auVar60 >> 0xf,0) & 1)
                                                             << 1 | (ushort)(SUB161(auVar60 >> 0x17,
                                                                                    0) & 1) << 2 |
                                                             (ushort)(SUB161(auVar60 >> 0x1f,0) & 1)
                                                             << 3 | (ushort)(SUB161(auVar60 >> 0x27,
                                                                                    0) & 1) << 4 |
                                                             (ushort)(SUB161(auVar60 >> 0x2f,0) & 1)
                                                             << 5 | (ushort)(SUB161(auVar60 >> 0x37,
                                                                                    0) & 1) << 6 |
                                                             (ushort)(SUB161(auVar60 >> 0x3f,0) & 1)
                                                             << 7 | (ushort)(SUB161(auVar60 >> 0x47,
                                                                                    0) & 1) << 8 |
                                                             (ushort)(SUB161(auVar60 >> 0x4f,0) & 1)
                                                             << 9 | (ushort)(SUB161(auVar60 >> 0x57,
                                                                                    0) & 1) << 10 |
                                                             (ushort)(SUB161(auVar60 >> 0x5f,0) & 1)
                                                             << 0xb | (ushort)(SUB161(auVar60 >>
                                                                                      0x67,0) & 1)
                                                                      << 0xc |
                                                             (ushort)(SUB161(auVar60 >> 0x6f,0) & 1)
                                                             << 0xd | (ushort)(SUB161(auVar60 >>
                                                                                      0x77,0) & 1)
                                                                      << 0xe |
                                                            (ushort)(byte)(auVar60[0xf] >> 7) << 0xf
                                                            ); (uVar51 & 1) == 0;
                                    uVar51 = uVar51 >> 1 | 0x80000000) {
                                  uVar56 = uVar56 + 1;
                                }
                                uVar53 = (ulonglong)uVar56;
                                bVar59 = (*pauVar46)[uVar53];
                              }
                              bVar54 = (byte)((ulonglong)pauStack_828 >> 0x39);
                              (*pauVar46)[uVar53] = bVar54;
                              pauVar46[1][uVar53 - 0x10 & uVar32] = bVar54;
                              lVar49 = uVar53 * -0x38;
                              *(undefined1 (**) [16])((longlong)pauVar46 + lVar49 + -0x38) =
                                   pauStack_848;
                              *(undefined1 (**) [16])((longlong)pauVar46 + lVar49 + -0x30) =
                                   pauStack_840;
                              *(undefined1 (**) [16])((longlong)pauVar46 + lVar49 + -0x28) =
                                   pauStack_838;
                              puVar31 = (undefined8 *)((longlong)pauVar46 + lVar49 + -0x20);
                              *puVar31 = pauVar50;
                              puVar31[1] = pauVar45;
                              *(undefined1 (**) [16])((longlong)pauVar46 + lVar49 + -0x10) =
                                   pauVar37;
                              *(undefined1 *)((longlong)pauVar46 + lVar49 + -8) = uVar2;
                              lVar49 = *(longlong *)(pauStack_830[1] + 8);
                              auVar65._0_8_ = CONCAT71(0,bVar59 & 1);
                              auVar65._8_4_ = uVar42;
                              auVar65._12_4_ = uVar24;
                              *(ulonglong *)pauStack_830[1] =
                                   *(longlong *)pauStack_830[1] - auVar65._0_8_;
                              *(longlong *)(pauStack_830[1] + 8) = lVar49 - auVar65._8_8_;
                              pauStack_848 = pauVar50;
                              pauStack_840 = pauVar45;
                              pauStack_838 = pauVar37;
                            }
LAB_14163db09:
                            pauVar35 = pauStack_f8;
                            pauVar46 = pauStack_f0;
                            goto joined_r0x00014163db13;
                          }
LAB_14163d7e0:
                          auVar83[0] = -(cVar27 == cVar28);
                          auVar83[1] = -(cVar7 == cVar66);
                          auVar83[2] = -(cVar8 == cVar67);
                          auVar83[3] = -(cVar9 == cVar68);
                          auVar83[4] = -(cVar10 == cVar69);
                          auVar83[5] = -(cVar11 == cVar70);
                          auVar83[6] = -(cVar12 == cVar71);
                          auVar83[7] = -(cVar13 == cVar72);
                          auVar83[8] = -(cVar14 == cVar73);
                          auVar83[9] = -(cVar15 == cVar74);
                          auVar83[10] = -(cVar16 == cVar75);
                          auVar83[0xb] = -(cVar17 == cVar76);
                          auVar83[0xc] = -(cVar18 == cVar77);
                          auVar83[0xd] = -(cVar19 == cVar78);
                          auVar83[0xe] = -(cVar20 == cVar79);
                          auVar83[0xf] = -(cVar21 == cVar80);
                          pauVar46 = pauStack_d8;
                          pauVar35 = pauStack_c8;
                          if ((((((((((((((((SUB161(auVar83 >> 7,0) & 1) != 0 ||
                                           (SUB161(auVar83 >> 0xf,0) & 1) != 0) ||
                                          (SUB161(auVar83 >> 0x17,0) & 1) != 0) ||
                                         (SUB161(auVar83 >> 0x1f,0) & 1) != 0) ||
                                        (SUB161(auVar83 >> 0x27,0) & 1) != 0) ||
                                       (SUB161(auVar83 >> 0x2f,0) & 1) != 0) ||
                                      (SUB161(auVar83 >> 0x37,0) & 1) != 0) ||
                                     (SUB161(auVar83 >> 0x3f,0) & 1) != 0) ||
                                    (SUB161(auVar83 >> 0x47,0) & 1) != 0) ||
                                   (SUB161(auVar83 >> 0x4f,0) & 1) != 0) ||
                                  (SUB161(auVar83 >> 0x57,0) & 1) != 0) ||
                                 (SUB161(auVar83 >> 0x5f,0) & 1) != 0) ||
                                (SUB161(auVar83 >> 0x67,0) & 1) != 0) ||
                               (SUB161(auVar83 >> 0x6f,0) & 1) != 0) ||
                              (SUB161(auVar83 >> 0x77,0) & 1) != 0) || auVar83[0xf] < '\0') break;
                          puVar36 = pauVar45[1] + uVar32;
                          pauVar45 = pauVar45 + 1;
                        } while( true );
                      }
                      if (pauStack_f8 != (undefined1 (*) [16])0x0) {
                        pub_1406abac0((byte *)pauStack_f0,(ulonglong)pauStack_f8,1);
                      }
joined_r0x00014163db13:
                      if (pauVar35 != (undefined1 (*) [16])0x0) {
                        pub_1406abac0((byte *)pauVar46,(ulonglong)pauVar35,1);
                      }
                      pauVar37 = pauVar44;
                    } while (pauVar44 != pauStack_138);
                  }
                  if (pauStack_138 != pauVar44) {
                    uVar32 = (ulonglong)((longlong)pauStack_138 - (longlong)pauVar44) / 0x30;
                    pauVar44 = pauVar44 + 2;
                    do {
                      if (*(ulonglong *)pauVar44[-2] != 0) {
                        pub_1406abac0(*(byte **)(pauVar44[-2] + 8),*(ulonglong *)pauVar44[-2],1);
                      }
                      if (*(ulonglong *)(pauVar44[-1] + 8) != 0) {
                        pub_1406abac0(*(byte **)*pauVar44,*(ulonglong *)(pauVar44[-1] + 8),1);
                      }
                      pauVar44 = pauVar44 + 3;
                      uVar32 = uVar32 - 1;
                    } while (uVar32 != 0);
                  }
                  if (pauStack_330 != (undefined1 (*) [16])0x0) {
                    pub_1406abac0((byte *)pauStack_328,(longlong)pauStack_330 * 0x30,8);
                  }
                  pdb_140d929f0(&pauStack_178,pbStack_130,apuStack_340[1]);
                  pauVar44 = pauStack_168;
                  pauStack_108 = pauStack_170;
                  cVar27 = pdb_140d8af50(pauStack_170,pauStack_168);
                  if (cVar27 == '\0') {
                    if (pauStack_178 != (undefined1 (*) [16])0x0) {
                      pub_1406abac0((byte *)pauStack_108,(ulonglong)pauStack_178,1);
                    }
                    goto LAB_14163de96;
                  }
                  pdb_14163c530(&pauStack_848,pauStack_108,pauVar44);
                  pauStack_ad8 = pauStack_840;
                  auStack_ac8._8_8_ = pauStack_840 + (longlong)pauStack_838 * 3;
                  auStack_ac8._0_8_ = pauStack_848;
                  pauVar44 = pauStack_840;
                  pauVar37 = pauStack_840 + (longlong)pauStack_838 * 3;
                  while (uStack_ad0 = pauVar44, pauVar44 != pauVar37) {
                    uStack_ad0 = pauVar44 + 3;
                    pauVar35 = *(undefined1 (**) [16])*pauVar44;
                    pauVar46 = (undefined1 (*) [16])-(longlong)pauVar35;
                    if (SBORROW8(0,(longlong)pauVar35)) break;
                    pauStack_c8 = *(undefined1 (**) [16])(*pauVar44 + 8);
                    pauVar37 = *(undefined1 (**) [16])pauVar44[1];
                    pauStack_e8 = *(undefined1 (**) [16])(pauVar44[2] + 8);
                    pauStack_f8 = *(undefined1 (**) [16])(pauVar44[1] + 8);
                    pauStack_f0 = *(undefined1 (**) [16])pauVar44[2];
                    pauStack_d8 = pauVar35;
                    if (lStack_290 != 0) {
                      uStack_c9 = 1;
                      puVar34 = (undefined *)pdb_1400afac0(auStack_288);
                      pauVar50 = pauStack_e8;
                      pauVar35 = pauStack_f0;
                      uVar32 = uStack_2a0;
                      pauVar44 = pauStack_2a8;
                      bVar59 = (byte)((ulonglong)puVar34 >> 0x39);
                      auVar60 = ZEXT216(CONCAT11(bVar59,bVar59));
                      auVar60 = pshuflw(auVar60,auVar60,0);
                      pauVar46 = (undefined1 (*) [16])0x0;
                      while( true ) {
                        uVar53 = (ulonglong)puVar34 & uVar32;
                        pcVar1 = *pauVar44 + uVar53;
                        cVar27 = *pcVar1;
                        cVar7 = pcVar1[1];
                        cVar8 = pcVar1[2];
                        cVar9 = pcVar1[3];
                        cVar10 = pcVar1[4];
                        cVar11 = pcVar1[5];
                        cVar12 = pcVar1[6];
                        cVar13 = pcVar1[7];
                        cVar14 = pcVar1[8];
                        cVar15 = pcVar1[9];
                        cVar16 = pcVar1[10];
                        cVar17 = pcVar1[0xb];
                        cVar18 = pcVar1[0xc];
                        cVar19 = pcVar1[0xd];
                        cVar20 = pcVar1[0xe];
                        cVar21 = pcVar1[0xf];
                        auVar64[0] = -(cVar27 == auVar60[0]);
                        auVar64[1] = -(cVar7 == auVar60[1]);
                        auVar64[2] = -(cVar8 == auVar60[2]);
                        auVar64[3] = -(cVar9 == auVar60[3]);
                        auVar64[4] = -(cVar10 == auVar60[4]);
                        auVar64[5] = -(cVar11 == auVar60[5]);
                        auVar64[6] = -(cVar12 == auVar60[6]);
                        auVar64[7] = -(cVar13 == auVar60[7]);
                        auVar64[8] = -(cVar14 == auVar60[0]);
                        auVar64[9] = -(cVar15 == auVar60[1]);
                        auVar64[10] = -(cVar16 == auVar60[2]);
                        auVar64[0xb] = -(cVar17 == auVar60[3]);
                        auVar64[0xc] = -(cVar18 == auVar60[4]);
                        auVar64[0xd] = -(cVar19 == auVar60[5]);
                        auVar64[0xe] = -(cVar20 == auVar60[6]);
                        auVar64[0xf] = -(cVar21 == auVar60[7]);
                        uVar29 = (ushort)(SUB161(auVar64 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
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
                                 (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(auVar64[0xf] >> 7) << 0xf;
                        uVar56 = (uint)uVar29;
                        while (uVar29 != 0) {
                          uVar51 = 0;
                          for (uVar6 = uVar56; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                            uVar51 = uVar51 + 1;
                          }
                          lVar49 = (uVar51 + uVar53 & uVar32) * -0x38;
                          pauStack_138 = pauVar46;
                          if (pauVar50 ==
                              *(undefined1 (**) [16])((longlong)pauVar44 + lVar49 + -0x28)) {
                            iVar30 = pub_142e32750(pauVar35,*(undefined8 *)
                                                             ((longlong)pauVar44 + lVar49 + -0x30),
                                                   pauVar50);
                            if (iVar30 == 0) {
                              if (pauStack_f8 != (undefined1 (*) [16])0x0) {
                                pub_1406abac0((byte *)pauVar35,(ulonglong)pauStack_f8,1);
                              }
                              pauVar44 = uStack_ad0;
                              if (pauStack_d8 != (undefined1 (*) [16])0x0) {
                                pub_1406abac0((byte *)pauStack_c8,(ulonglong)pauStack_d8,1);
                                pauVar44 = uStack_ad0;
                              }
                              goto LAB_14163dc5e;
                            }
                          }
                          uVar29 = (ushort)(uVar56 - 1) & (ushort)uVar56;
                          uVar56 = CONCAT22((short)(uVar56 - 1 >> 0x10),uVar29);
                          pauVar46 = pauStack_138;
                        }
                        auVar84[0] = -(cVar27 == cVar28);
                        auVar84[1] = -(cVar7 == cVar66);
                        auVar84[2] = -(cVar8 == cVar67);
                        auVar84[3] = -(cVar9 == cVar68);
                        auVar84[4] = -(cVar10 == cVar69);
                        auVar84[5] = -(cVar11 == cVar70);
                        auVar84[6] = -(cVar12 == cVar71);
                        auVar84[7] = -(cVar13 == cVar72);
                        auVar84[8] = -(cVar14 == cVar73);
                        auVar84[9] = -(cVar15 == cVar74);
                        auVar84[10] = -(cVar16 == cVar75);
                        auVar84[0xb] = -(cVar17 == cVar76);
                        auVar84[0xc] = -(cVar18 == cVar77);
                        auVar84[0xd] = -(cVar19 == cVar78);
                        auVar84[0xe] = -(cVar20 == cVar79);
                        auVar84[0xf] = -(cVar21 == cVar80);
                        if ((((((((((((((((SUB161(auVar84 >> 7,0) & 1) != 0 ||
                                         (SUB161(auVar84 >> 0xf,0) & 1) != 0) ||
                                        (SUB161(auVar84 >> 0x17,0) & 1) != 0) ||
                                       (SUB161(auVar84 >> 0x1f,0) & 1) != 0) ||
                                      (SUB161(auVar84 >> 0x27,0) & 1) != 0) ||
                                     (SUB161(auVar84 >> 0x2f,0) & 1) != 0) ||
                                    (SUB161(auVar84 >> 0x37,0) & 1) != 0) ||
                                   (SUB161(auVar84 >> 0x3f,0) & 1) != 0) ||
                                  (SUB161(auVar84 >> 0x47,0) & 1) != 0) ||
                                 (SUB161(auVar84 >> 0x4f,0) & 1) != 0) ||
                                (SUB161(auVar84 >> 0x57,0) & 1) != 0) ||
                               (SUB161(auVar84 >> 0x5f,0) & 1) != 0) ||
                              (SUB161(auVar84 >> 0x67,0) & 1) != 0) ||
                             (SUB161(auVar84 >> 0x6f,0) & 1) != 0) ||
                            (SUB161(auVar84 >> 0x77,0) & 1) != 0) || auVar84[0xf] < '\0') break;
                        puVar34 = pauVar46[1] + uVar53;
                        pauVar46 = pauVar46 + 1;
                      }
                    }
                    pauVar44 = pauStack_148;
                    pauStack_838 = pauStack_e8;
                    pauStack_848 = pauStack_f8;
                    pauStack_840 = pauStack_f0;
                    pauStack_828 = pauStack_c8;
                    pauStack_830 = pauStack_d8;
                    pauStack_820 = pauVar37;
                    if (pauStack_148 == pauStack_158) {
                      pdb_142d89a50(&pauStack_158,pauVar46);
                    }
                    auVar22._8_8_ = pauStack_830;
                    auVar22._0_8_ = pauStack_838;
                    *(undefined1 (**) [16])pauStack_150[(longlong)pauVar44 * 3 + 2] = pauStack_828;
                    *(undefined1 (**) [16])(pauStack_150[(longlong)pauVar44 * 3 + 2] + 8) =
                         pauStack_820;
                    pauStack_150[(longlong)pauVar44 * 3 + 1] = auVar22;
                    *(undefined1 (**) [16])pauStack_150[(longlong)pauVar44 * 3] = pauStack_848;
                    *(undefined1 (**) [16])(pauStack_150[(longlong)pauVar44 * 3] + 8) = pauStack_840
                    ;
                    pauStack_148 = (undefined1 (*) [16])(*pauVar44 + 1);
                    pauVar44 = uStack_ad0;
LAB_14163dc5e:
                    pauVar37 = (undefined1 (*) [16])auStack_ac8._8_8_;
                  }
                  if (pauVar37 != uStack_ad0) {
                    uVar32 = (ulonglong)((longlong)pauVar37 - (longlong)uStack_ad0) / 0x30;
                    pauVar44 = uStack_ad0 + 2;
                    do {
                      if (*(ulonglong *)pauVar44[-2] != 0) {
                        pub_1406abac0(*(byte **)(pauVar44[-2] + 8),*(ulonglong *)pauVar44[-2],1);
                      }
                      if (*(ulonglong *)(pauVar44[-1] + 8) != 0) {
                        pub_1406abac0(*(byte **)*pauVar44,*(ulonglong *)(pauVar44[-1] + 8),1);
                      }
                      pauVar44 = pauVar44 + 3;
                      uVar32 = uVar32 - 1;
                    } while (uVar32 != 0);
                  }
                  if (auStack_ac8._0_8_ != 0) {
                    pub_1406abac0((byte *)pauStack_ad8,auStack_ac8._0_8_ * 0x30,8);
                  }
                  if (pauStack_178 != (undefined1 (*) [16])0x0) {
                    pub_1406abac0((byte *)pauStack_108,(ulonglong)pauStack_178,1);
                  }
                  if (pauStack_2c8 != (undefined1 (*) [16])0x0) {
                    pub_1406abac0(pbStack_130,(ulonglong)pauStack_2c8,1);
                  }
                  LOCK();
                  *(longlong *)*pauStack_d38 = *(longlong *)*pauStack_d38 + -1;
                  UNLOCK();
                  if (*(longlong *)*pauStack_d38 == 0) {
                    pdb_140cd0de0(&pauStack_d38);
                  }
                }
              }
            }
            if (pauStack_5b8 != (undefined1 (*) [16])0x0) {
              pdb_140f590a0(&pauStack_5b0);
            }
            LOCK();
            *(longlong *)*pauStack_5a8 = *(longlong *)*pauStack_5a8 + -1;
            UNLOCK();
            if (*(longlong *)*pauStack_5a8 == 0) {
              uStack_b4 = 1;
              pdb_140cd0de0(&pauStack_5a8);
            }
            pauStack_830 = pauStack_150 + (longlong)pauStack_148 * 3;
            pauStack_848 = pauStack_150;
            pauStack_840 = pauStack_150;
            pauStack_838 = pauStack_158;
            pauStack_828 = (undefined1 (*) [16])&pauStack_1f8;
            uStack_ba = 1;
            plVar33 = (longlong *)pdb_14008d710(0);
            if (plVar33 == (longlong *)0x0) {
              uStack_ba = 1;
              pdb_142dc7890(&UNK_143326860);
              goto LAB_14163f295;
            }
            pauStack_598 = (undefined1 (*) [16])*plVar33;
            pauStack_590 = (undefined1 (*) [16])plVar33[1];
            *plVar33 = *plVar33 + 1;
            pauStack_5a8 = _DAT_143366cc0;
            pauStack_5a0 = _UNK_143366cc8;
            pauStack_5b8 = _DAT_143366cb0;
            pauStack_5b0 = _UNK_143366cb8;
            auStack_ac8._8_8_ = pauStack_830;
            auStack_ac8._0_8_ = pauStack_838;
            pauStack_ad8 = pauStack_848;
            uStack_ad0._0_4_ = SUB84(pauStack_840,0);
            uStack_ad0._4_4_ = (undefined4)((ulonglong)pauStack_840 >> 0x20);
            pdb_141b758e0(&pauStack_ad8,&pauStack_1f8);
            auStack_ac8._8_8_ = pauStack_5a0;
            auStack_ac8._0_8_ = pauStack_5a8;
            uStack_ad0._0_4_ = SUB84(pauStack_5b0,0);
            uStack_ad0._4_4_ = (undefined4)((ulonglong)pauStack_5b0 >> 0x20);
            pauStack_ad8 = pauStack_5b8;
            pauVar37 = pauStack_598;
            pauVar44 = pauStack_590;
            pauVar35 = pauStack_1f8;
            pauVar46 = pauStack_1f0;
            pauVar50 = pauStack_1e0;
          }
          pauStack_1f8 = pauVar35;
          pauStack_1f0 = pauVar46;
          pauStack_1e0 = pauVar50;
          if (pauVar46 != (undefined1 (*) [16])0x0) {
            if (pauVar50 != (undefined1 (*) [16])0x0) {
              auVar60 = *pauVar35;
              pauVar45 = pauVar35 + 1;
              uVar56 = ~(uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
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
                                      (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
              do {
                if ((short)uVar56 == 0) {
                  do {
                    auVar60 = *pauVar45;
                    pauVar35 = pauVar35 + -0x38;
                    pauVar45 = pauVar45 + 1;
                    uVar56 = (ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
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
                                     (ushort)(byte)(auVar60[0xf] >> 7) << 0xf) ^ 0xffff;
                  } while (uVar56 == 0);
                }
                uVar51 = 0;
                for (uVar6 = uVar56; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                  uVar51 = uVar51 + 1;
                }
                uVar32 = *(ulonglong *)((longlong)pauVar35 + (ulonglong)uVar51 * -0x38 + -0x38);
                if (uVar32 != 0) {
                  pub_1406abac0(*(byte **)((longlong)pauVar35 + (ulonglong)uVar51 * -0x38 + -0x30),
                                uVar32,1);
                }
                uVar56 = uVar56 - 1 & uVar56;
                pauVar50 = (undefined1 (*) [16])(pauVar50[-1] + 0xf);
              } while (pauVar50 != (undefined1 (*) [16])0x0);
            }
            uVar32 = (longlong)pauVar46 * 0x38 + 0x47U & 0xfffffffffffffff0;
            if (pauVar46[1] + uVar32 + 1 != (undefined *)0x0) {
              pub_1406abac0((byte *)((longlong)pauStack_1f8 - uVar32),
                            (ulonglong)(pauVar46[1] + uVar32 + 1),0x10);
            }
          }
          auStack_1c8._8_4_ = (undefined4)uStack_ad0;
          auStack_1c8._0_8_ = pauStack_ad8;
          auStack_1c8._12_4_ = uStack_ad0._4_4_;
          auStack_1b8._8_8_ = auStack_ac8._8_8_;
          pauStack_1a8 = pauVar37;
          pauStack_1a0 = pauVar44;
          auVar60 = auStack_ac8;
          lVar49 = auStack_1b8._8_8_;
        }
        else {
          auVar60 = auStack_1b8;
          lVar49 = auStack_1b8._8_8_;
        }
        auStack_1b8 = auVar60;
        pauVar44 = pauStack_c8;
        if (lVar49 != 0) {
          uStack_b3 = 1;
          puVar34 = (undefined *)pdb_1400afac0(&pauStack_1a8);
          pauVar35 = pauStack_110;
          pauVar37 = pauStack_118;
          uVar41 = auStack_1c8._0_8_;
          uVar26 = auStack_1c8._8_8_;
          bVar59 = (byte)((ulonglong)puVar34 >> 0x39);
          auVar60 = ZEXT216(CONCAT11(bVar59,bVar59));
          auVar60 = pshuflw(auVar60,auVar60,0);
          pauVar46 = (undefined1 (*) [16])0x0;
          while( true ) {
            uVar32 = (ulonglong)puVar34 & uVar26;
            pcVar1 = (char *)(uVar41 + uVar32);
            cVar27 = *pcVar1;
            cVar7 = pcVar1[1];
            cVar8 = pcVar1[2];
            cVar9 = pcVar1[3];
            cVar10 = pcVar1[4];
            cVar11 = pcVar1[5];
            cVar12 = pcVar1[6];
            cVar13 = pcVar1[7];
            cVar14 = pcVar1[8];
            cVar15 = pcVar1[9];
            cVar16 = pcVar1[10];
            cVar17 = pcVar1[0xb];
            cVar18 = pcVar1[0xc];
            cVar19 = pcVar1[0xd];
            cVar20 = pcVar1[0xe];
            cVar21 = pcVar1[0xf];
            auVar62[0] = -(cVar27 == auVar60[0]);
            auVar62[1] = -(cVar7 == auVar60[1]);
            auVar62[2] = -(cVar8 == auVar60[2]);
            auVar62[3] = -(cVar9 == auVar60[3]);
            auVar62[4] = -(cVar10 == auVar60[4]);
            auVar62[5] = -(cVar11 == auVar60[5]);
            auVar62[6] = -(cVar12 == auVar60[6]);
            auVar62[7] = -(cVar13 == auVar60[7]);
            auVar62[8] = -(cVar14 == auVar60[0]);
            auVar62[9] = -(cVar15 == auVar60[1]);
            auVar62[10] = -(cVar16 == auVar60[2]);
            auVar62[0xb] = -(cVar17 == auVar60[3]);
            auVar62[0xc] = -(cVar18 == auVar60[4]);
            auVar62[0xd] = -(cVar19 == auVar60[5]);
            auVar62[0xe] = -(cVar20 == auVar60[6]);
            auVar62[0xf] = -(cVar21 == auVar60[7]);
            uVar29 = (ushort)(SUB161(auVar62 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar62[0xf] >> 7) << 0xf;
            uVar56 = (uint)uVar29;
            pauVar44 = pauStack_c8;
            while (pauStack_c8 = pauVar46, uVar29 != 0) {
              uVar51 = 0;
              for (uVar6 = uVar56; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar51 = uVar51 + 1;
              }
              lVar55 = (uVar51 + uVar32 & uVar26) * -0x38;
              if (pauVar35 == *(undefined1 (**) [16])(uVar41 + -0x28 + lVar55)) {
                lVar55 = lVar55 + uVar41;
                iVar30 = pub_142e32750(pauVar37,*(undefined8 *)(lVar55 + -0x30));
                if (iVar30 == 0) goto LAB_14163d050;
              }
              uVar29 = (ushort)(uVar56 - 1) & (ushort)uVar56;
              uVar56 = CONCAT22((short)(uVar56 - 1 >> 0x10),uVar29);
              pauVar46 = pauStack_c8;
              pauVar44 = pauStack_c8;
            }
            auVar82[0] = -(cVar27 == cVar28);
            auVar82[1] = -(cVar7 == cVar66);
            auVar82[2] = -(cVar8 == cVar67);
            auVar82[3] = -(cVar9 == cVar68);
            auVar82[4] = -(cVar10 == cVar69);
            auVar82[5] = -(cVar11 == cVar70);
            auVar82[6] = -(cVar12 == cVar71);
            auVar82[7] = -(cVar13 == cVar72);
            auVar82[8] = -(cVar14 == cVar73);
            auVar82[9] = -(cVar15 == cVar74);
            auVar82[10] = -(cVar16 == cVar75);
            auVar82[0xb] = -(cVar17 == cVar76);
            auVar82[0xc] = -(cVar18 == cVar77);
            auVar82[0xd] = -(cVar19 == cVar78);
            auVar82[0xe] = -(cVar20 == cVar79);
            auVar82[0xf] = -(cVar21 == cVar80);
            if ((((((((((((((((SUB161(auVar82 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar82 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar82 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar82 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar82 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar82 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar82 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar82 >> 0x3f,0) & 1) != 0) || (SUB161(auVar82 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar82 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar82 >> 0x57,0) & 1) != 0) || (SUB161(auVar82 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar82 >> 0x67,0) & 1) != 0) || (SUB161(auVar82 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar82 >> 0x77,0) & 1) != 0) || auVar82[0xf] < '\0') break;
            puVar34 = pauStack_c8[1] + uVar32;
            pauVar46 = pauStack_c8 + 1;
            pauStack_c8 = pauVar44;
          }
        }
        pauStack_c8 = pauVar44;
        if (*_DAT_143ca8e90 != 0) {
          pauStack_840 = (undefined1 (*) [16])pdb_140094770;
          pauStack_5b8 = (undefined1 (*) [16])0x0;
          pauStack_5b0 = (undefined1 (*) [16])&UNK_1433209d4;
          pauStack_5a8 = (undefined1 (*) [16])0x28;
          pauStack_5a0 = (undefined1 (*) [16])0x0;
          pauStack_598 = (undefined1 (*) [16])&UNK_14332099f;
          pauStack_590 = (undefined1 (*) [16])0x34;
          uStack_588 = 1;
          puStack_580 = &UNK_1433209d4;
          uStack_578 = 0x28;
          uStack_570 = 0x7800000001;
          uStack_568 = &UNK_143320930;
          uStack_560 = &pauStack_848;
          uStack_b3 = 1;
          pauStack_848 = (undefined1 (*) [16])&ppppppplStack_120;
          pdb_140f332f0(&uStack_b8,&pauStack_5b8);
        }
        goto LAB_14163d354;
      }
    }
    ppppppplStack_270 = ppppppplVar48;
    pdb_140973100(&ppppppplStack_278);
    pauStack_2e8 = pauStack_210;
    pauStack_2e0 = pauStack_208;
    pauStack_2d8 = pauStack_200;
    uVar41 = auStack_1c8._0_8_;
    if (((undefined1 (*) [16])auStack_1c8._0_8_ != (undefined1 (*) [16])0x0) &&
       (uVar26 = auStack_1c8._8_8_, auStack_1c8._8_8_ != 0)) {
      if (auStack_1b8._8_8_ != 0) {
        auVar60 = *(undefined1 (*) [16])auStack_1c8._0_8_;
        pauVar38 = (undefined1 (*) [16])(auStack_1c8._0_8_ + 0x10);
        uVar56 = ~(uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
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
                                (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
        lVar49 = auStack_1b8._8_8_;
        pauVar39 = (undefined1 (*) [16])auStack_1c8._0_8_;
        do {
          if ((short)uVar56 == 0) {
            do {
              auVar60 = *pauVar38;
              pauVar39 = pauVar39 + -0x38;
              pauVar38 = pauVar38 + 1;
              uVar56 = (ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
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
                               (ushort)(byte)(auVar60[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar56 == 0);
          }
          uVar51 = 0;
          for (uVar6 = uVar56; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar51 = uVar51 + 1;
          }
          arg1 = *(longlong ********)((longlong)pauVar39 + (ulonglong)uVar51 * -0x38 + -0x38);
          if (arg1 != (longlong *******)0x0) {
            pub_1406abac0(*(byte **)((longlong)pauVar39 + (ulonglong)uVar51 * -0x38 + -0x30),
                          (ulonglong)arg1,1);
          }
          uVar56 = uVar56 - 1 & uVar56;
          lVar49 = lVar49 + -1;
        } while (lVar49 != 0);
      }
      uVar32 = uVar26 * 0x38 + 0x47U & 0xfffffffffffffff0;
      ppppppplVar48 = (longlong *******)(uVar26 + uVar32 + 0x11);
      if (ppppppplVar48 != (longlong *******)0x0) {
        pub_1406abac0((byte *)(uVar41 - uVar32),(ulonglong)ppppppplVar48,0x10);
        arg1 = ppppppplVar48;
      }
    }
    if (uStack_2a0 != 0) {
      if (lStack_290 != 0) {
        auVar60 = *pauStack_2a8;
        pauVar38 = pauStack_2a8 + 1;
        uVar56 = ~(uint)(ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
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
                                (ushort)(byte)(auVar60[0xf] >> 7) << 0xf);
        pauVar39 = pauStack_2a8;
        lVar49 = lStack_290;
        do {
          if ((short)uVar56 == 0) {
            do {
              auVar60 = *pauVar38;
              pauVar39 = pauVar39 + -0x38;
              pauVar38 = pauVar38 + 1;
              uVar56 = (ushort)((ushort)(SUB161(auVar60 >> 7,0) & 1) |
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
                               (ushort)(byte)(auVar60[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar56 == 0);
          }
          uVar51 = 0;
          for (uVar6 = uVar56; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar51 = uVar51 + 1;
          }
          arg1 = *(longlong ********)((longlong)pauVar39 + (ulonglong)uVar51 * -0x38 + -0x38);
          if (arg1 != (longlong *******)0x0) {
            pub_1406abac0(*(byte **)((longlong)pauVar39 + (ulonglong)uVar51 * -0x38 + -0x30),
                          (ulonglong)arg1,1);
          }
          uVar56 = uVar56 - 1 & uVar56;
          lVar49 = lVar49 + -1;
        } while (lVar49 != 0);
      }
      uVar32 = uStack_2a0 * 0x38 + 0x47 & 0xfffffffffffffff0;
      ppppppplVar48 = (longlong *******)(uStack_2a0 + uVar32 + 0x11);
      if (ppppppplVar48 != (longlong *******)0x0) {
        pub_1406abac0((byte *)((longlong)pauStack_2a8 - uVar32),(ulonglong)ppppppplVar48,0x10);
        arg1 = ppppppplVar48;
      }
    }
    puVar31 = puStack_100;
    if (pauStack_2d8 == (undefined1 (*) [16])0x0) {
      *(undefined4 *)(puStack_100 + 4) = (undefined4)uStack_228;
      *(undefined4 *)((longlong)puStack_100 + 0x24) = uStack_228._4_4_;
      *(undefined4 *)(puStack_100 + 5) = (undefined4)uStack_220;
      *(undefined4 *)((longlong)puStack_100 + 0x2c) = uStack_220._4_4_;
      puStack_100[2] = auStack_238._0_8_;
      puStack_100[3] = auStack_238._8_8_;
      *puStack_100 = pauStack_248;
      puStack_100[1] = pauStack_240;
      uStack_b9 = 0;
      pdb_14096d580(&pauStack_2e8);
      return puVar31;
    }
    uStack_b1 = 1;
    uStack_b2 = 1;
    cVar28 = pdb_140e94b40();
    if (cVar28 == '\0') {
      uVar41 = 0;
    }
    else {
      uStack_b1 = 1;
      uStack_b2 = 1;
      lVar55 = 0x4c;
      lVar49 = pdb_1416413a0(0x4c);
      ppppppplVar48 = (longlong *******)&UNK_143320df8;
      if (lVar49 == 1) {
        if ((longlong *******)0x4c < arg1) {
          uStack_b1 = 1;
          uStack_b2 = 1;
          pdb_142dc8070(&UNK_143320df8,0x4c,0,arg1,&UNK_143320ec8);
          goto LAB_14163f295;
        }
        uStack_b1 = 1;
        uStack_b2 = 1;
        uVar32 = pdb_1416413a0(arg1);
        if ((uVar32 & 1) != 0) {
          if ((undefined *)0x4c < (undefined *)((longlong)arg1 + 2)) {
            uStack_b1 = 1;
            uStack_b2 = 1;
            pdb_142dc8070(&UNK_143320df8,0x4c,(undefined *)((longlong)arg1 + 2),0x4c,&UNK_143320ee0)
            ;
            goto LAB_14163f295;
          }
          lVar55 = 0x4a - (longlong)arg1;
          ppppppplVar48 = (longlong *******)((longlong)arg1 + 0x143320dfa);
        }
      }
      arg1 = ppppppplVar48;
      puVar34 = &UNK_143320b5c;
      puVar57 = &UNK_143320b28;
      do {
        bVar59 = puVar34[-1];
        uVar56 = (uint)(char)bVar59;
        if ((char)bVar59 < '\0') {
          bVar54 = puVar34[-2];
          if ((char)bVar54 < -0x40) {
            bVar3 = puVar34[-3];
            if ((char)bVar3 < -0x40) {
              pbVar40 = puVar34 + -4;
              puVar34 = puVar34 + -4;
              uVar56 = bVar3 & 0x3f | (*pbVar40 & 7) << 6;
            }
            else {
              puVar34 = puVar34 + -3;
              uVar56 = bVar3 & 0xf;
            }
            uVar56 = bVar54 & 0x3f | uVar56 << 6;
          }
          else {
            puVar34 = puVar34 + -2;
            uVar56 = bVar54 & 0x1f;
          }
          uVar56 = (uint)(bVar59 & 0x3f) | uVar56 << 6;
          if (uVar56 != 0x5c) goto LAB_14163e734;
LAB_14163e790:
          puVar57 = puVar34 + -0x143320b27;
          if (puVar57 < (undefined *)0x35) {
            lVar49 = 0x34 - (longlong)puVar57;
            puVar57 = puVar34 + 1;
            goto LAB_14163e7b2;
          }
          uStack_b1 = 1;
          uStack_b2 = 1;
          pdb_142dc8070(&UNK_143320b28,0x34,puVar57,0x34,&UNK_143320ea8);
          goto LAB_14163f295;
        }
        puVar34 = puVar34 + -1;
        if (uVar56 == 0x5c) goto LAB_14163e790;
LAB_14163e734:
        if (uVar56 == 0x2f) goto LAB_14163e790;
      } while (puVar34 != &UNK_143320b28);
      lVar49 = 0x34;
LAB_14163e7b2:
      uStack_b1 = 1;
      uStack_b2 = 1;
      pauVar38 = (undefined1 (*) [16])pdb_140e97000();
      if (pauVar38[6][8] != '\x01') {
        uStack_b1 = 1;
        uStack_b2 = 1;
        pauVar38 = (undefined1 (*) [16])pdb_142d8ec20(pauVar38,0);
        if (pauVar38 == (undefined1 (*) [16])0x0) {
          uStack_b1 = 1;
          uStack_b2 = 1;
          pdb_142dc7890(&UNK_143326860);
          goto LAB_14163f295;
        }
      }
      if (*(longlong *)*pauVar38 != 0) {
        uStack_b1 = 1;
        uStack_b2 = 1;
        pdb_142dc8090(&UNK_143326a50);
        goto LAB_14163f295;
      }
      *(undefined8 *)*pauVar38 = 0xffffffffffffffff;
      pauStack_c8 = pauVar38;
      uVar41 = pdb_140e94f10(*pauVar38 + 8,arg1,lVar55,puVar57,lVar49,1,0);
      *(longlong *)*pauStack_c8 = *(longlong *)*pauStack_c8 + 1;
      auStack_1c8._8_8_ = uVar41;
      uVar41 = 1;
    }
    uVar42 = SUB84(arg1,0);
    auStack_1c8._0_8_ = uVar41;
    uStack_b5 = 1;
    uStack_b6 = 1;
    pauStack_878 = (undefined1 (*) [16])pdb_140f3c9d0();
    pauStack_870 = (undefined1 (*) [16])CONCAT44(pauStack_870._4_4_,uVar42);
    auStack_198._0_8_ = pauStack_2d8;
    pauStack_5a8 = pauStack_2d8;
    pauStack_5b8 = pauStack_2e8;
    pauStack_5b0 = pauStack_2e0;
    pauStack_5a0 = pauStack_320;
    uStack_4c0 = 0;
    pauStack_ad8 = (undefined1 (*) [16])&pauStack_5b8;
    pdb_1416fb9e0(&pauStack_848,&UNK_143386450,&pauStack_ad8);
    uStack_b5 = 0;
    uStack_b6 = 1;
    pdb_141aaeee0(&pauStack_5b8);
    if (SBORROW8(0,(longlong)pauStack_848)) {
      pauStack_d38 = pauStack_840;
      if (*_DAT_143ca8e90 != 0) {
        pauStack_ad8 = (undefined1 (*) [16])&pauStack_d38;
        uStack_ad0._0_4_ = 0x40f36c30;
        uStack_ad0._4_4_ = 1;
        pauStack_5b8 = (undefined1 (*) [16])0x0;
        pauStack_5b0 = (undefined1 (*) [16])&UNK_1433209d4;
        pauStack_5a8 = (undefined1 (*) [16])0x28;
        pauStack_5a0 = (undefined1 (*) [16])0x0;
        pauStack_598 = (undefined1 (*) [16])&UNK_14332099f;
        pauStack_590 = (undefined1 (*) [16])0x34;
        uStack_588 = 1;
        puStack_580 = &UNK_1433209d4;
        uStack_578 = 0x28;
        uStack_570 = 0x4600000001;
        uStack_568 = &UNK_143320baf;
        uStack_560 = &pauStack_ad8;
        pdb_140f332f0(&uStack_b8,&pauStack_5b8);
      }
      *(undefined4 *)(puStack_100 + 4) = (undefined4)uStack_228;
      *(undefined4 *)((longlong)puStack_100 + 0x24) = uStack_228._4_4_;
      *(undefined4 *)(puStack_100 + 5) = (undefined4)uStack_220;
      *(undefined4 *)((longlong)puStack_100 + 0x2c) = uStack_220._4_4_;
      puStack_100[2] = auStack_238._0_8_;
      puStack_100[3] = auStack_238._8_8_;
      *puStack_100 = pauStack_248;
      puStack_100[1] = pauStack_240;
      uStack_b5 = 0;
      uStack_b6 = 0;
      pdb_140f36c40(&pauStack_d38);
      if (cVar28 != '\0') {
        uStack_b1 = 0;
        uStack_b2 = 0;
        plVar33 = (longlong *)pdb_140e97000();
        if ((char)plVar33[0xd] != '\x01') {
          uStack_b1 = 0;
          uStack_b2 = 0;
          plVar33 = (longlong *)pdb_142d8ec20(plVar33,0);
          if (plVar33 == (longlong *)0x0) {
            uStack_b1 = 0;
            uStack_b2 = 0;
            pdb_142dc7890(&UNK_143326860);
            goto LAB_14163f295;
          }
        }
        if (*plVar33 != 0) {
          uStack_b1 = 0;
          uStack_b2 = 0;
          pdb_142dc8090(&UNK_143326a50);
LAB_14163f295:
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        *plVar33 = -1;
        pauStack_c8 = (undefined1 (*) [16])plVar33;
        pdb_140e95370(plVar33 + 1,auStack_1c8._8_8_);
        *(longlong *)pauStack_c8 = *(longlong *)pauStack_c8 + 1;
      }
    }
    else {
      ppppppplStack_278 = (longlong *******)((ulonglong)ppppppplStack_278 & 0xffffffff00000000);
      auStack_ac8._8_8_ = (longlong)pauStack_840 + (longlong)pauStack_838 * 0x28;
      pauStack_ad8 = pauStack_840;
      auStack_ac8._0_8_ = pauStack_848;
      pauStack_e0 = (undefined1 (*) [16])((ulonglong)pauStack_e0 & 0xffffffff00000000);
      pauVar38 = pauStack_840;
      pauVar39 = pauStack_848;
      uStack_ad0 = pauStack_840;
      if (pauStack_840 != (undefined1 (*) [16])auStack_ac8._8_8_) {
        do {
          uStack_ad0 = (undefined1 (*) [16])(pauVar38[2] + 8);
          pauStack_1e8 = *(undefined1 (**) [16])pauVar38[1];
          pauStack_1f8 = *(undefined1 (**) [16])*pauVar38;
          pauVar47 = *(undefined1 (**) [16])(*pauVar38 + 8);
          pauStack_1f0 = pauVar47;
          if (*(longlong *)(pauVar38[1] + 8) == 2) break;
          pauVar39 = *(undefined1 (**) [16])pauVar38[2];
          pauStack_d38 = pauStack_1f8;
          pauStack_d30 = pauVar47;
          pauStack_d28 = pauStack_1e8;
          if (*(longlong *)(pauVar38[1] + 8) == 1) {
            uVar32 = 1;
          }
          else {
            pauStack_5b0 = (undefined1 (*) [16])
                           CONCAT44(pauStack_5b0._4_4_,*(undefined4 *)pauVar39[3]);
            pauStack_5b8 = *(undefined1 (**) [16])(pauVar39[2] + 8);
            pauStack_848 = pauVar39;
            pauStack_c8 = pauVar39;
            uVar32 = pdb_140b8f460(pauStack_318,pauVar47,pauStack_1e8,&pauStack_5b8,pauVar39[3][8],
                                   pauVar39[3][9],*(undefined2 *)(pauVar39[3] + 4),
                                   *(undefined2 *)(pauVar39[3] + 6),*(undefined8 *)(pauVar39[1] + 8)
                                   ,*(undefined8 *)pauVar39[2]);
            LOCK();
            *(longlong *)*pauStack_c8 = *(longlong *)*pauStack_c8 + -1;
            UNLOCK();
            pauVar39 = pauVar47;
            if (*(longlong *)*pauStack_c8 == 0) {
              pdb_141746b00(&pauStack_848);
            }
          }
          pauVar47 = pauStack_d28;
          pauVar38 = pauStack_d30;
          if ((uVar32 & 1) == 0) {
            pauStack_5b8 = (undefined1 (*) [16])0x8000000000000000;
            pauStack_5a0 = pauVar39;
            if ((longlong)pauStack_d28 < 0) {
              uVar41 = 0;
LAB_14163ee2a:
              pdb_142dc7e2a(uVar41,pauVar47);
              goto LAB_14163f295;
            }
            if (pauStack_d28 == (undefined1 (*) [16])0x0) {
              pauVar39 = (undefined1 (*) [16])0x1;
            }
            else {
              pdb_14007ee60();
              uVar41 = 1;
              pauVar39 = (undefined1 (*) [16])pub_1406abab0((ulonglong)pauVar47,1);
              if (pauVar39 == (undefined1 (*) [16])0x0) goto LAB_14163ee2a;
              pub_142e32760(pauVar39,pauVar38,pauVar47);
            }
            pauStack_5b8 = pauVar47;
            pauStack_5a8 = pauVar47;
            pauStack_848 = pauVar47;
            pauStack_838 = pauVar47;
            pauStack_830 = pauStack_5a0;
            pauStack_840 = pauVar39;
            pauStack_5b0 = pauVar39;
            pdb_140a2dcf0(uStack_310,&pauStack_848);
            uVar41 = pdb_1400afac0(&uStack_228,&pauStack_d38);
            pdb_140269400(&pauStack_5b8,&pauStack_248,uVar41,&pauStack_d38);
            if ((!SBORROW8(0,(longlong)pauStack_5b8)) && (pauStack_5b8 != (undefined1 (*) [16])0x0))
            {
              pub_1406abac0((byte *)pauStack_5b0,(ulonglong)pauStack_5b8,1);
            }
            iVar30 = (int)pauStack_e0 + 1;
            pauStack_e0 = (undefined1 (*) [16])CONCAT44(pauStack_e0._4_4_,iVar30);
            ppppppplStack_278 = (longlong *******)CONCAT44(ppppppplStack_278._4_4_,iVar30);
            pauVar39 = pauStack_d38;
          }
          else {
            pauStack_2c8 = pauVar39;
            if (*_DAT_143ca8e90 != 0) {
              pauStack_848 = (undefined1 (*) [16])&pauStack_d38;
              pauStack_840 = (undefined1 (*) [16])pdb_140094770;
              pauStack_838 = (undefined1 (*) [16])&pauStack_2c8;
              pauStack_830 = (undefined1 (*) [16])pdb_140f36c30;
              pauStack_5b8 = (undefined1 (*) [16])0x0;
              pauStack_5b0 = (undefined1 (*) [16])&UNK_1433209d4;
              pauStack_5a8 = (undefined1 (*) [16])0x28;
              pauStack_5a0 = (undefined1 (*) [16])0x0;
              pauStack_598 = (undefined1 (*) [16])&UNK_14332099f;
              pauStack_590 = (undefined1 (*) [16])0x34;
              uStack_588 = 1;
              puStack_580 = &UNK_1433209d4;
              uStack_578 = 0x28;
              uStack_570 = 0x5400000001;
              uStack_568 = &UNK_143320b88;
              uStack_560 = &pauStack_848;
              pdb_140f332f0(&uStack_b8,&pauStack_5b8);
            }
            pdb_140f36c40(&pauStack_2c8);
            pauVar39 = pauStack_d38;
          }
          pauStack_d38 = pauVar39;
          pauVar38 = uStack_ad0;
          if (pauVar39 != (undefined1 (*) [16])0x0) {
            pub_1406abac0((byte *)pauStack_d30,(ulonglong)pauVar39,1);
            pauVar38 = uStack_ad0;
          }
          uStack_ad0 = pauVar38;
        } while (pauVar38 != (undefined1 (*) [16])auStack_ac8._8_8_);
      }
      uVar42 = SUB84(pauVar39,0);
      uStack_b5 = 0;
      uStack_b6 = 1;
      pdb_14097fa30((undefined1 (*) [16])&pauStack_ad8);
      if (2 < *_DAT_143ca8e90) {
        uStack_b5 = 0;
        uStack_b6 = 1;
        pauStack_ad8 = (undefined1 (*) [16])pdb_140f3cb70(&pauStack_878);
        pauStack_848 = (undefined1 (*) [16])&ppppppplStack_278;
        pauStack_840 = (undefined1 (*) [16])pdb_140f71c50;
        pauStack_838 = &auStack_198;
        pauStack_830 = (undefined1 (*) [16])pdb_140f72a40;
        pauStack_820 = (undefined1 (*) [16])pdb_140f72840;
        pauStack_5b8 = (undefined1 (*) [16])0x0;
        pauStack_5b0 = (undefined1 (*) [16])&UNK_1433209d4;
        pauStack_5a8 = (undefined1 (*) [16])0x28;
        pauStack_5a0 = (undefined1 (*) [16])0x0;
        pauStack_598 = (undefined1 (*) [16])&UNK_14332099f;
        pauStack_590 = (undefined1 (*) [16])0x34;
        uStack_588 = 3;
        puStack_580 = &UNK_1433209d4;
        uStack_578 = 0x28;
        uStack_570 = 0x5800000001;
        uStack_568 = &UNK_143320b5c;
        uStack_b5 = 0;
        uStack_b6 = 1;
        uStack_ad0._0_4_ = uVar42;
        pauStack_828 = (undefined1 (*) [16])&pauStack_ad8;
        uStack_560 = &pauStack_848;
        pdb_140f332f0(&uStack_b8,&pauStack_5b8);
      }
      *(undefined4 *)(puStack_100 + 4) = (undefined4)uStack_228;
      *(undefined4 *)((longlong)puStack_100 + 0x24) = uStack_228._4_4_;
      *(undefined4 *)(puStack_100 + 5) = (undefined4)uStack_220;
      *(undefined4 *)((longlong)puStack_100 + 0x2c) = uStack_220._4_4_;
      puStack_100[2] = auStack_238._0_8_;
      puStack_100[3] = auStack_238._8_8_;
      *puStack_100 = pauStack_248;
      puStack_100[1] = pauStack_240;
      if (auStack_1c8._0_8_ != 0) {
        uStack_b1 = 0;
        uStack_b2 = 0;
        plVar33 = (longlong *)pdb_140e97000();
        if ((char)plVar33[0xd] != '\x01') {
          uStack_b1 = 0;
          uStack_b2 = 0;
          plVar33 = (longlong *)pdb_142d8ec20(plVar33,0);
          if (plVar33 == (longlong *)0x0) {
            uStack_b1 = 0;
            uStack_b2 = 0;
            pdb_142dc7890(&UNK_143326860);
            goto LAB_14163f295;
          }
        }
        if (*plVar33 != 0) {
          uStack_b1 = 0;
          uStack_b2 = 0;
          pdb_142dc8090(&UNK_143326a50);
          goto LAB_14163f295;
        }
        *plVar33 = -1;
        pauStack_c8 = (undefined1 (*) [16])plVar33;
        pdb_140e95370(plVar33 + 1,auStack_1c8._8_8_);
        *(longlong *)pauStack_c8 = *(longlong *)pauStack_c8 + 1;
      }
    }
  }
  return puStack_100;
LAB_14163d7ba:
  uVar29 = (ushort)(uVar56 - 1) & (ushort)uVar56;
  uVar56 = CONCAT22((short)(uVar56 - 1 >> 0x10),uVar29);
  pauVar45 = pauStack_108;
  if (uVar29 == 0) goto LAB_14163d7e0;
  goto LAB_14163d77a;
LAB_14163d050:
  puStack_5c8 = *(undefined1 **)(lVar55 + -0x10);
  auStack_5d8 = *(undefined1 (*) [16])(lVar55 + -0x20);
  bStack_cb = *(byte *)(lVar55 + -8);
  uVar41 = auStack_198._0_8_;
  if (bStack_cb == (SBORROW8(0,auStack_198._0_8_) | 2U)) {
    uStack_b3 = 1;
    pdb_140f60be0(&pauStack_178,&ppppppplStack_120);
    pauVar44 = pauStack_110;
    pauVar37 = pauStack_118;
    if (SBORROW8(0,uVar41)) {
      pauStack_1e8 = (undefined1 (*) [16])auStack_188._8_8_;
      pauStack_1f8 = (undefined1 (*) [16])auStack_198._8_8_;
      pauStack_1f0 = (undefined1 (*) [16])auStack_188._0_8_;
      if ((longlong)pauStack_110 < 0) {
        uVar41 = 0;
LAB_14163e3f9:
        uStack_bc = 1;
        pdb_142dc7e2a(uVar41,pauStack_128);
        goto LAB_14163f295;
      }
      if (pauStack_110 == (undefined1 (*) [16])0x0) {
        pauStack_128 = (undefined1 (*) [16])0x1;
      }
      else {
        pdb_14007ee60();
        pauStack_128 = (undefined1 (*) [16])pub_1406abab0((ulonglong)pauVar44,1);
        if (pauStack_128 == (undefined1 (*) [16])0x0) {
          uVar41 = 1;
          pauStack_128 = pauVar44;
          goto LAB_14163e3f9;
        }
        pub_142e32760(pauStack_128,pauVar37);
      }
      pauStack_830 = pauStack_1f0 + (longlong)pauStack_1e8 * 2;
      pauStack_848 = pauStack_1f0;
      pauStack_840 = pauStack_1f0;
      pauStack_838 = pauStack_1f8;
      pauStack_828 = pauVar37;
      pauStack_820 = pauVar44;
      puStack_818 = auStack_5d8;
      pauStack_c8 = pauVar44;
      pdb_1415e3c90(&pauStack_ad8,&pauStack_848);
      pauStack_d38 = pauStack_c8;
      pauStack_d30 = pauStack_128;
      pauStack_d28 = pauStack_c8;
      uStack_d10 = auStack_ac8._0_8_;
      pauStack_d18 = uStack_ad0;
      pauStack_d20 = pauStack_ad8;
      uStack_bc = 0;
      pdb_140d9d070(&pauStack_ad8,&pauStack_d38);
      pauStack_590 = uStack_ad0;
    }
    else {
      pauStack_c8 = (undefined1 (*) [16])uVar41;
      pauStack_d8 = (undefined1 (*) [16])auStack_198._8_8_;
      if ((longlong)pauStack_110 < 0) {
        uVar41 = 0;
LAB_14163e414:
        uStack_ca = 1;
        pdb_142dc7e2a(uVar41,pauStack_250);
        goto LAB_14163f295;
      }
      if (pauStack_110 == (undefined1 (*) [16])0x0) {
        pauVar35 = (undefined1 (*) [16])0x1;
      }
      else {
        pdb_14007ee60();
        pauVar35 = (undefined1 (*) [16])pub_1406abab0((ulonglong)pauVar44,1);
        if (pauVar35 == (undefined1 (*) [16])0x0) {
          uVar41 = 1;
          pauStack_250 = pauVar44;
          goto LAB_14163e414;
        }
        pub_142e32760(pauVar35,pauVar37);
      }
      pauStack_848 = (undefined1 (*) [16])uVar41;
      pauStack_830 = (undefined1 (*) [16])auStack_188._8_8_;
      pauStack_840 = (undefined1 (*) [16])auStack_198._8_8_;
      pauStack_838 = (undefined1 (*) [16])auStack_188._0_8_;
      pauStack_810 = pauVar44;
      pauStack_800 = pauVar44;
      puStack_818 = puStack_5c8;
      pauStack_828 = (undefined1 (*) [16])auStack_5d8._0_8_;
      pauStack_820 = (undefined1 (*) [16])auStack_5d8._8_8_;
      uStack_ca = 0;
      pauStack_808 = pauVar35;
      pauStack_250 = pauVar35;
      pdb_140d9d030(&pauStack_ad8,&pauStack_848);
      pauStack_590 = uStack_ad0;
    }
    pauVar44 = pauStack_200;
    pauStack_5a8 = pauStack_168;
    pauStack_5b8 = pauStack_178;
    pauStack_5b0 = pauStack_170;
    uStack_558 = uStack_a98;
    uStack_550 = uStack_a90;
    uStack_568 = (undefined *)CONCAT44(uStack_aa4,uStack_aa8);
    uStack_560 = (undefined1 (**) [16])CONCAT44(uStack_a9c,uStack_aa0);
    uStack_578 = CONCAT44(uStack_ab4,uStack_ab8);
    uStack_570 = CONCAT44(uStack_aac,uStack_ab0);
    uStack_588 = auStack_ac8._0_8_;
    puStack_580 = (undefined *)auStack_ac8._8_8_;
    pauStack_598 = pauStack_ad8;
    uStack_ad0 = pauStack_590;
    if (pauStack_200 == pauStack_210) {
      pdb_142d8dd60(&pauStack_210);
    }
    *(undefined8 *)pauStack_208[(longlong)pauVar44 * 7 + 6] = uStack_558;
    *(undefined8 *)(pauStack_208[(longlong)pauVar44 * 7 + 6] + 8) = uStack_550;
    *(undefined **)pauStack_208[(longlong)pauVar44 * 7 + 5] = uStack_568;
    *(undefined1 (***) [16])(pauStack_208[(longlong)pauVar44 * 7 + 5] + 8) = uStack_560;
    *(undefined8 *)pauStack_208[(longlong)pauVar44 * 7 + 4] = uStack_578;
    *(undefined8 *)(pauStack_208[(longlong)pauVar44 * 7 + 4] + 8) = uStack_570;
    auVar23._8_8_ = pauStack_5a0;
    auVar23._0_8_ = pauStack_5a8;
    *(undefined8 *)pauStack_208[(longlong)pauVar44 * 7 + 3] = uStack_588;
    *(undefined **)(pauStack_208[(longlong)pauVar44 * 7 + 3] + 8) = puStack_580;
    *(undefined1 (**) [16])pauStack_208[(longlong)pauVar44 * 7 + 2] = pauStack_598;
    *(undefined1 (**) [16])(pauStack_208[(longlong)pauVar44 * 7 + 2] + 8) = pauStack_590;
    pauStack_208[(longlong)pauVar44 * 7 + 1] = auVar23;
    *(undefined1 (**) [16])pauStack_208[(longlong)pauVar44 * 7] = pauStack_5b8;
    *(undefined1 (**) [16])(pauStack_208[(longlong)pauVar44 * 7] + 8) = pauStack_5b0;
    pauStack_200 = (undefined1 (*) [16])(*pauVar44 + 1);
    arg1 = ppppppplStack_120;
  }
  else {
    if (*_DAT_143ca8e90 != 0) {
      pauStack_ad8 = (undefined1 (*) [16])&UNK_143320a0e;
      if (SBORROW8(0,auStack_198._0_8_)) {
        pauStack_ad8 = (undefined1 (*) [16])&UNK_1433209fc;
      }
      uStack_ad0 = (undefined1 (*) [16])((ulonglong)SBORROW8(0,auStack_198._0_8_) * 4 + 0xe);
      pauStack_840 = (undefined1 (*) [16])pdb_140094770;
      pauStack_838 = (undefined1 (*) [16])&pauStack_ad8;
      pauStack_830 = (undefined1 (*) [16])pdb_1402ed400;
      pauStack_828 = (undefined1 (*) [16])&bStack_cb;
      pauStack_820 = (undefined1 (*) [16])pdb_141642cf0;
      pauStack_5b8 = (undefined1 (*) [16])0x0;
      pauStack_5b0 = (undefined1 (*) [16])&UNK_1433209d4;
      pauStack_5a8 = (undefined1 (*) [16])0x28;
      pauStack_5a0 = (undefined1 (*) [16])0x0;
      pauStack_598 = (undefined1 (*) [16])&UNK_14332099f;
      pauStack_590 = (undefined1 (*) [16])0x34;
      uStack_588 = 1;
      puStack_580 = &UNK_1433209d4;
      uStack_578 = 0x28;
      uStack_570 = 0x8c00000001;
      uStack_568 = &UNK_143320a1c;
      uStack_560 = &pauStack_848;
      uStack_b3 = 1;
      pauStack_848 = (undefined1 (*) [16])&ppppppplStack_120;
      pdb_140f332f0(&uStack_b8,&pauStack_5b8);
    }
LAB_14163d354:
    if (SBORROW8(0,auStack_198._0_8_)) {
      pbVar40 = (byte *)auStack_188._0_8_;
      if (auStack_188._8_8_ != 0) {
        pbVar52 = (byte *)(auStack_188._0_8_ + 8);
        lVar49 = auStack_188._8_8_;
        do {
          if (*(ulonglong *)(pbVar52 + -8) != 0) {
            pub_1406abac0(*(byte **)pbVar52,*(ulonglong *)(pbVar52 + -8),1);
          }
          pbVar52 = pbVar52 + 0x20;
          lVar49 = lVar49 + -1;
        } while (lVar49 != 0);
      }
      arg1 = ppppppplStack_120;
      if (auStack_198._8_8_ == 0) goto joined_r0x00014163e31f;
      uVar53 = 8;
      uVar32 = auStack_198._8_8_ << 5;
    }
    else {
      arg1 = ppppppplStack_120;
      if (auStack_198._0_8_ == 0) goto joined_r0x00014163e31f;
      uVar53 = 1;
      pbVar40 = (byte *)auStack_198._8_8_;
      uVar32 = auStack_198._0_8_;
    }
    pub_1406abac0(pbVar40,uVar32,uVar53);
    arg1 = ppppppplStack_120;
  }
joined_r0x00014163e31f:
  ppppppplStack_120 = arg1;
  if (arg1 != (longlong *******)0x0) {
    pub_1406abac0((byte *)pauStack_118,(ulonglong)arg1,1);
  }
  goto LAB_14163cb1a;
}

