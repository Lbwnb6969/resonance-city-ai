// VA 0x140a2bbb0, PDB extent 2528 bytes
// country_core::asset_libraries::mesh_library::AssetMeshLibrary::reload_mesh_src
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/mesh_library.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::asset_libraries::mesh_library::AssetMeshLibrary::reload_mesh_src
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/asset_libraries/mesh_library.rs
   Extent: 2528 */

void pdb_140a2bbb0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong *plVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
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
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  undefined8 uVar28;
  char cVar29;
  ushort uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  undefined1 (*pauVar35) [16];
  undefined8 uVar36;
  undefined1 (*pauVar37) [16];
  longlong lVar38;
  uint uVar39;
  bool bVar40;
  byte bVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 unaff_XMM7_Ba;
  undefined1 unaff_XMM7_Bb;
  undefined1 unaff_XMM7_Bc;
  undefined1 unaff_XMM7_Bd;
  undefined1 unaff_XMM7_Be;
  undefined1 unaff_XMM7_Bf;
  undefined1 unaff_XMM7_Bg;
  undefined1 unaff_XMM7_Bh;
  undefined1 unaff_XMM7_Bi;
  undefined1 unaff_XMM7_Bj;
  undefined1 unaff_XMM7_Bk;
  undefined1 unaff_XMM7_Bl;
  undefined1 unaff_XMM7_Bm;
  undefined1 unaff_XMM7_Bn;
  undefined1 unaff_XMM7_Bo;
  undefined1 unaff_XMM7_Bp;
  undefined1 auVar48 [16];
  longlong *plStack_258;
  longlong lStack_250;
  longlong lStack_248;
  longlong lStack_240;
  longlong lStack_238;
  longlong lStack_230;
  longlong lStack_228;
  undefined1 (*pauStack_220) [16];
  ulonglong uStack_218;
  longlong lStack_210;
  longlong lStack_208;
  longlong lStack_200;
  longlong lStack_1f8;
  longlong lStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  longlong lStack_1d8;
  undefined8 uStack_1d0;
  longlong *plStack_1c8;
  code *pcStack_1c0;
  longlong lStack_1b8;
  longlong lStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  undefined1 (*pauStack_190) [16];
  ulonglong uStack_188;
  longlong lStack_180;
  longlong lStack_178;
  longlong lStack_170;
  longlong lStack_168;
  longlong lStack_160;
  longlong lStack_158;
  longlong lStack_150;
  ulonglong *puStack_140;
  undefined8 uStack_138;
  ulonglong uStack_130;
  longlong *plStack_128;
  code *pcStack_120;
  longlong *plStack_118;
  longlong lStack_110;
  undefined *puStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  undefined1 (*pauStack_f0) [16];
  ulonglong uStack_e8;
  longlong lStack_e0;
  undefined *puStack_d8;
  longlong **pplStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  longlong lStack_a0;
  undefined4 uStack_98;
  longlong *plStack_90;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  puVar1 = (ulonglong *)(param_1 + 0x1e);
  uVar34 = param_1[0x1e];
  lStack_1d8 = param_2;
  uStack_1d0 = param_3;
  if (uVar34 < 0xfffffffffffffff0 && (char)(((uint)uVar34 & 8) >> 3) == '\0') {
    LOCK();
    uVar31 = *puVar1;
    if (uVar34 == uVar31) {
      *puVar1 = uVar34 + 0x10;
    }
    UNLOCK();
    if (uVar34 == uVar31) goto LAB_140a2bc3e;
  }
  pdb_142dbb5f0(puVar1,0,param_3,1000000000);
LAB_140a2bc3e:
  pdb_140e9a150(puVar1);
  uStack_130 = (ulonglong)puVar1 | 1;
  puStack_140 = puVar1;
  pdb_140e9a150(uStack_130);
  if (param_1[0x22] != 0) {
    uStack_138 = param_3;
    plStack_90 = (longlong *)param_2;
    uVar31 = pdb_1417c50c0(param_1 + 0x23,param_2,param_3);
    lVar33 = param_1[0x1f];
    uVar34 = param_1[0x20];
    bVar41 = (byte)(uVar31 >> 0x39);
    auVar42 = ZEXT216(CONCAT11(bVar41,bVar41));
    auVar42 = pshuflw(auVar42,auVar42,0);
    lVar38 = 0;
    iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                             CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                   CONCAT13(unaff_XMM7_Bd,
                            CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
    iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                             CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                   CONCAT13(unaff_XMM7_Bh,
                            CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
    iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                              CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                    CONCAT13(unaff_XMM7_Bl,
                             CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
    iVar11 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                              CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                    CONCAT13(unaff_XMM7_Bp,
                             CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
    while( true ) {
      uVar31 = uVar31 & uVar34;
      pcVar2 = (char *)(lVar33 + uVar31);
      cVar12 = *pcVar2;
      cVar13 = pcVar2[1];
      cVar14 = pcVar2[2];
      cVar15 = pcVar2[3];
      cVar16 = pcVar2[4];
      cVar17 = pcVar2[5];
      cVar18 = pcVar2[6];
      cVar19 = pcVar2[7];
      cVar20 = pcVar2[8];
      cVar21 = pcVar2[9];
      cVar22 = pcVar2[10];
      cVar23 = pcVar2[0xb];
      cVar24 = pcVar2[0xc];
      cVar25 = pcVar2[0xd];
      cVar26 = pcVar2[0xe];
      cVar27 = pcVar2[0xf];
      auVar43[0] = -(cVar12 == auVar42[0]);
      auVar43[1] = -(cVar13 == auVar42[1]);
      auVar43[2] = -(cVar14 == auVar42[2]);
      auVar43[3] = -(cVar15 == auVar42[3]);
      auVar43[4] = -(cVar16 == auVar42[4]);
      auVar43[5] = -(cVar17 == auVar42[5]);
      auVar43[6] = -(cVar18 == auVar42[6]);
      auVar43[7] = -(cVar19 == auVar42[7]);
      auVar43[8] = -(cVar20 == auVar42[0]);
      auVar43[9] = -(cVar21 == auVar42[1]);
      auVar43[10] = -(cVar22 == auVar42[2]);
      auVar43[0xb] = -(cVar23 == auVar42[3]);
      auVar43[0xc] = -(cVar24 == auVar42[4]);
      auVar43[0xd] = -(cVar25 == auVar42[5]);
      auVar43[0xe] = -(cVar26 == auVar42[6]);
      auVar43[0xf] = -(cVar27 == auVar42[7]);
      uVar30 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe | (ushort)(auVar43[0xf] >> 7) << 0xf;
      uVar39 = (uint)uVar30;
      while (uVar30 != 0) {
        uVar6 = 0;
        for (uVar7 = uVar39; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar6 = uVar6 + 1;
        }
        uVar32 = uVar6 + uVar31 & uVar34;
        cVar29 = pdb_1417cda50(plStack_90,uStack_138,lVar33 + uVar32 * -0x28 + -0x28);
        if (cVar29 != '\0') {
          plVar3 = *(longlong **)(lVar33 + uVar32 * -0x28 + -8);
          puVar1 = (ulonglong *)(param_1 + 0x1e);
          pdb_140e9a350(puVar1);
          pdb_140e9a350(uStack_130);
          LOCK();
          uVar34 = *puVar1;
          *puVar1 = *puVar1 - 0x10;
          UNLOCK();
          if ((uVar34 & 0xfffffffffffffff2) == 0x12) {
            pdb_142dbbf50(puVar1);
          }
          plVar4 = plStack_90;
          uVar28 = uStack_138;
          uVar36 = uStack_138;
          lVar33 = pdb_140f3ec80(plStack_90,uStack_138);
          if (lVar33 == 0) {
            plStack_128 = (longlong *)0x0;
          }
          else {
            pdb_140f69110(&plStack_128,lVar33,uVar36);
            pcVar5 = pcStack_120;
            bVar40 = (char)plStack_128 == '\0';
            plStack_128 = (longlong *)0x0;
            if (bVar40) {
              plStack_128 = (longlong *)pcStack_120;
            }
            pcStack_120 = (code *)plStack_118;
            if (((bVar40) && (plStack_118 == (longlong *)0x4)) && (*(int *)pcVar5 == 0x6e6f736a)) {
              lVar33 = param_1[2];
              plStack_1c8 = plVar3;
              if (lVar33 == *param_1) {
                pdb_142d7e8a0(param_1);
              }
              *(longlong **)(param_1[1] + lVar33 * 8) = plVar3;
              param_1[2] = lVar33 + 1;
              pdb_140a2b260(param_1,plVar3);
              if ((char)param_1[5] != '\0') {
                plStack_128 = param_1 + 6;
                    /* WARNING: Subroutine does not return */
                pdb_142dc8170(&UNK_143066330,0x2b,&plStack_128,&UNK_1430663a0,&UNK_143066458);
              }
              if (param_1[9] == 0) goto LAB_140a2c018;
              uVar34 = pdb_1400af0a0(param_1 + 10,&plStack_1c8);
              bVar41 = (byte)(uVar34 >> 0x39);
              auVar42 = ZEXT216(CONCAT11(bVar41,bVar41));
              auVar42 = pshuflw(auVar42,auVar42,0);
              lVar33 = 0;
              goto LAB_140a2be77;
            }
          }
          pdb_142deb528(0,&plStack_128,&UNK_143039b38,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar30 = (ushort)(uVar39 - 1) & (ushort)uVar39;
        uVar39 = CONCAT22((short)(uVar39 - 1 >> 0x10),uVar30);
      }
      auVar48[0] = -(cVar12 == (char)iVar8);
      auVar48[1] = -(cVar13 == (char)((uint)iVar8 >> 8));
      auVar48[2] = -(cVar14 == (char)((uint)iVar8 >> 0x10));
      auVar48[3] = -(cVar15 == (char)((uint)iVar8 >> 0x18));
      auVar48[4] = -(cVar16 == (char)iVar9);
      auVar48[5] = -(cVar17 == (char)((uint)iVar9 >> 8));
      auVar48[6] = -(cVar18 == (char)((uint)iVar9 >> 0x10));
      auVar48[7] = -(cVar19 == (char)((uint)iVar9 >> 0x18));
      auVar48[8] = -(cVar20 == (char)iVar10);
      auVar48[9] = -(cVar21 == (char)((uint)iVar10 >> 8));
      auVar48[10] = -(cVar22 == (char)((uint)iVar10 >> 0x10));
      auVar48[0xb] = -(cVar23 == (char)((uint)iVar10 >> 0x18));
      auVar48[0xc] = -(cVar24 == (char)iVar11);
      auVar48[0xd] = -(cVar25 == (char)((uint)iVar11 >> 8));
      auVar48[0xe] = -(cVar26 == (char)((uint)iVar11 >> 0x10));
      auVar48[0xf] = -(cVar27 == (char)((uint)iVar11 >> 0x18));
      if ((((((((((((((((SUB161(auVar48 >> 7,0) & 1) != 0 || (SUB161(auVar48 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar48 >> 0x17,0) & 1) != 0) || (SUB161(auVar48 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar48 >> 0x27,0) & 1) != 0) || (SUB161(auVar48 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar48 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar48 >> 0x3f,0) & 1) != 0) || (SUB161(auVar48 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar48 >> 0x4f,0) & 1) != 0) || (SUB161(auVar48 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar48 >> 0x5f,0) & 1) != 0) || (SUB161(auVar48 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar48 >> 0x6f,0) & 1) != 0) || (SUB161(auVar48 >> 0x77,0) & 1) != 0) ||
          auVar48[0xf] < '\0') break;
      uVar31 = uVar31 + lVar38 + 0x10;
      lVar38 = lVar38 + 0x10;
    }
  }
  plStack_128 = &lStack_1d8;
  pcStack_120 = pdb_140117670;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_143039bd0,&plStack_128,&UNK_143039c18);
LAB_140a2be77:
  uVar34 = uVar34 & param_1[7];
  auVar43 = *(undefined1 (*) [16])(param_1[6] + uVar34);
  auVar46[0] = -(auVar43[0] == auVar42[0]);
  auVar46[1] = -(auVar43[1] == auVar42[1]);
  auVar46[2] = -(auVar43[2] == auVar42[2]);
  auVar46[3] = -(auVar43[3] == auVar42[3]);
  auVar46[4] = -(auVar43[4] == auVar42[4]);
  auVar46[5] = -(auVar43[5] == auVar42[5]);
  auVar46[6] = -(auVar43[6] == auVar42[6]);
  auVar46[7] = -(auVar43[7] == auVar42[7]);
  auVar46[8] = -(auVar43[8] == auVar42[0]);
  auVar46[9] = -(auVar43[9] == auVar42[1]);
  auVar46[10] = -(auVar43[10] == auVar42[2]);
  auVar46[0xb] = -(auVar43[0xb] == auVar42[3]);
  auVar46[0xc] = -(auVar43[0xc] == auVar42[4]);
  auVar46[0xd] = -(auVar43[0xd] == auVar42[5]);
  auVar46[0xe] = -(auVar43[0xe] == auVar42[6]);
  auVar46[0xf] = -(auVar43[0xf] == auVar42[7]);
  uVar30 = (ushort)(SUB161(auVar46 >> 7,0) & 1) | (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
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
           (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe | (ushort)(auVar46[0xf] >> 7) << 0xf;
  uVar39 = (uint)uVar30;
  while (uVar30 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar39; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    lVar38 = param_1[6] + (uVar6 + uVar34 & param_1[7]) * -0x10;
    if (plVar3 == *(longlong **)(lVar38 + -0x10)) {
      plVar3 = *(longlong **)(lVar38 + -8);
      pdb_141b241d0(&plStack_258,plVar4,uVar28);
      if (SBORROW8(0,(longlong)plStack_258)) {
        lStack_a0 = lStack_250;
        if (*_DAT_143ca8e90 != 0) {
          plStack_1c8 = &lStack_a0;
          pcStack_1c0 = pdb_140f36c30;
          plStack_128 = (longlong *)0x0;
          pcStack_120 = (code *)&UNK_143039ba5;
          plStack_118 = (longlong *)0x2b;
          lStack_110 = 0;
          puStack_108 = &UNK_143039ab8;
          lStack_100 = 0x37;
          lStack_f8 = 1;
          pauStack_f0 = (undefined1 (*) [16])&UNK_143039ba5;
          uStack_e8 = 0x2b;
          lStack_e0 = 0xaf00000001;
          puStack_d8 = &UNK_143039b78;
          pplStack_d0 = &plStack_1c8;
          pdb_140f332f0(&uStack_82,&plStack_128);
        }
        pdb_140f36c40(&lStack_a0);
        return;
      }
      lStack_178 = lStack_208;
      lStack_170 = lStack_200;
      lStack_158 = lStack_1e8;
      lStack_150 = lStack_1e0;
      lStack_168 = lStack_1f8;
      lStack_160 = lStack_1f0;
      uStack_188 = uStack_218;
      lStack_180 = lStack_210;
      lStack_198 = lStack_228;
      pauStack_190 = pauStack_220;
      lStack_1a8 = lStack_238;
      lStack_1a0 = lStack_230;
      lStack_1b8 = lStack_248;
      lStack_1b0 = lStack_240;
      plStack_1c8 = plStack_258;
      pcStack_1c0 = (code *)lStack_250;
      if (lStack_208 == 0) goto LAB_140a2c1ec;
      uVar34 = pdb_1400af950(&lStack_170,&DAT_143045cc8,0xc);
      bVar41 = (byte)(uVar34 >> 0x39);
      auVar42 = ZEXT216(CONCAT11(bVar41,bVar41));
      auVar42 = pshuflw(auVar42,auVar42,0);
      lVar33 = 0;
      goto LAB_140a2c0cb;
    }
    uVar30 = (ushort)(uVar39 - 1) & (ushort)uVar39;
    uVar39 = CONCAT22((short)(uVar39 - 1 >> 0x10),uVar30);
  }
  auVar44[0] = -(auVar43[0] == -1);
  auVar44[1] = -(auVar43[1] == -1);
  auVar44[2] = -(auVar43[2] == -1);
  auVar44[3] = -(auVar43[3] == -1);
  auVar44[4] = -(auVar43[4] == -1);
  auVar44[5] = -(auVar43[5] == -1);
  auVar44[6] = -(auVar43[6] == -1);
  auVar44[7] = -(auVar43[7] == -1);
  auVar44[8] = -(auVar43[8] == -1);
  auVar44[9] = -(auVar43[9] == -1);
  auVar44[10] = -(auVar43[10] == -1);
  auVar44[0xb] = -(auVar43[0xb] == -1);
  auVar44[0xc] = -(auVar43[0xc] == -1);
  auVar44[0xd] = -(auVar43[0xd] == -1);
  auVar44[0xe] = -(auVar43[0xe] == -1);
  auVar44[0xf] = -(auVar43[0xf] == -1);
  if ((((((((((((((((SUB161(auVar44 >> 7,0) & 1) != 0 || (SUB161(auVar44 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar44 >> 0x17,0) & 1) != 0) || (SUB161(auVar44 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar44 >> 0x27,0) & 1) != 0) || (SUB161(auVar44 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar44 >> 0x37,0) & 1) != 0) || (SUB161(auVar44 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar44 >> 0x47,0) & 1) != 0) || (SUB161(auVar44 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar44 >> 0x57,0) & 1) != 0) || (SUB161(auVar44 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar44 >> 0x67,0) & 1) != 0) || (SUB161(auVar44 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar44 >> 0x77,0) & 1) != 0) || auVar44[0xf] < '\0') {
LAB_140a2c018:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143039b60);
  }
  uVar34 = uVar34 + lVar33 + 0x10;
  lVar33 = lVar33 + 0x10;
  goto LAB_140a2be77;
LAB_140a2c0cb:
  uVar34 = uVar34 & uStack_188;
  pcVar2 = *pauStack_190 + uVar34;
  auVar47[0] = -(*pcVar2 == auVar42[0]);
  auVar47[1] = -(pcVar2[1] == auVar42[1]);
  auVar47[2] = -(pcVar2[2] == auVar42[2]);
  auVar47[3] = -(pcVar2[3] == auVar42[3]);
  auVar47[4] = -(pcVar2[4] == auVar42[4]);
  auVar47[5] = -(pcVar2[5] == auVar42[5]);
  auVar47[6] = -(pcVar2[6] == auVar42[6]);
  auVar47[7] = -(pcVar2[7] == auVar42[7]);
  auVar47[8] = -(pcVar2[8] == auVar42[0]);
  auVar47[9] = -(pcVar2[9] == auVar42[1]);
  auVar47[10] = -(pcVar2[10] == auVar42[2]);
  auVar47[0xb] = -(pcVar2[0xb] == auVar42[3]);
  auVar47[0xc] = -(pcVar2[0xc] == auVar42[4]);
  auVar47[0xd] = -(pcVar2[0xd] == auVar42[5]);
  auVar47[0xe] = -(pcVar2[0xe] == auVar42[6]);
  auVar47[0xf] = -(pcVar2[0xf] == auVar42[7]);
  uVar30 = (ushort)(SUB161(auVar47 >> 7,0) & 1) | (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe | (ushort)(auVar47[0xf] >> 7) << 0xf;
  uVar39 = (uint)uVar30;
  while (uVar30 != 0) {
    uVar6 = 0;
    for (uVar7 = uVar39; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    lVar38 = (uVar6 + uVar34 & uStack_188) * -0x38;
    if ((*(longlong *)((longlong)pauStack_190 + lVar38 + -0x28) == 0xc) &&
       (plVar4 = *(longlong **)((longlong)pauStack_190 + lVar38 + -0x30),
       _DAT_143045cd0 == (int)plVar4[1] && _DAT_143045cc8 == *plVar4)) goto LAB_140a2c1ec;
    uVar30 = (ushort)(uVar39 - 1) & (ushort)uVar39;
    uVar39 = CONCAT22((short)(uVar39 - 1 >> 0x10),uVar30);
  }
  auVar45[0] = -(*pcVar2 == -1);
  auVar45[1] = -(pcVar2[1] == -1);
  auVar45[2] = -(pcVar2[2] == -1);
  auVar45[3] = -(pcVar2[3] == -1);
  auVar45[4] = -(pcVar2[4] == -1);
  auVar45[5] = -(pcVar2[5] == -1);
  auVar45[6] = -(pcVar2[6] == -1);
  auVar45[7] = -(pcVar2[7] == -1);
  auVar45[8] = -(pcVar2[8] == -1);
  auVar45[9] = -(pcVar2[9] == -1);
  auVar45[10] = -(pcVar2[10] == -1);
  auVar45[0xb] = -(pcVar2[0xb] == -1);
  auVar45[0xc] = -(pcVar2[0xc] == -1);
  auVar45[0xd] = -(pcVar2[0xd] == -1);
  auVar45[0xe] = -(pcVar2[0xe] == -1);
  auVar45[0xf] = -(pcVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar45 >> 7,0) & 1) != 0 || (SUB161(auVar45 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar45 >> 0x17,0) & 1) != 0) || (SUB161(auVar45 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar45 >> 0x27,0) & 1) != 0) || (SUB161(auVar45 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar45 >> 0x37,0) & 1) != 0) || (SUB161(auVar45 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar45 >> 0x47,0) & 1) != 0) || (SUB161(auVar45 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar45 >> 0x57,0) & 1) != 0) || (SUB161(auVar45 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar45 >> 0x67,0) & 1) != 0) || (SUB161(auVar45 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar45 >> 0x77,0) & 1) != 0) || auVar45[0xf] < '\0') {
    lStack_a0 = _DAT_142e37950;
    uStack_98 = 0x3f800000;
    auVar42 = *pauStack_190;
    uVar30 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
             (ushort)(byte)(auVar42[0xf] >> 7) << 0xf;
    pauVar35 = pauStack_190;
    pauVar37 = pauStack_190;
    while (uVar39 = uVar30 ^ 0xffff, uVar39 == 0) {
      pauVar37 = pauVar37 + 1;
      auVar42 = *pauVar37;
      pauVar35 = pauVar35 + -0x38;
      uVar30 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar42[0xf] >> 7) << 0xf;
    }
    uVar6 = 0;
    for (; (uVar39 & 1) == 0; uVar39 = uVar39 >> 1 | 0x80000000) {
      uVar6 = uVar6 + 1;
    }
    uStack_81 = 1;
    pdb_1415e43a0(&plStack_128,&lStack_a0,
                  *(undefined8 *)((longlong)pauVar35 + (ulonglong)uVar6 * -0x38 + -8));
    uStack_81 = 1;
    pdb_140c93200(&plStack_1c8,&DAT_143045cc8,0xc,&plStack_128);
LAB_140a2c1ec:
    lStack_b8 = lStack_158;
    lStack_b0 = lStack_150;
    lStack_c8 = lStack_168;
    lStack_c0 = lStack_160;
    puStack_d8 = (undefined *)lStack_178;
    pplStack_d0 = (longlong **)lStack_170;
    uStack_e8 = uStack_188;
    lStack_e0 = lStack_180;
    lStack_f8 = lStack_198;
    pauStack_f0 = pauStack_190;
    puStack_108 = (undefined *)lStack_1a8;
    lStack_100 = lStack_1a0;
    plStack_118 = (longlong *)lStack_1b8;
    lStack_110 = lStack_1b0;
    plStack_128 = plStack_1c8;
    pcStack_120 = pcStack_1c0;
    plStack_90 = plVar3;
    pdb_14098a960(plVar3);
    plStack_90[0xe] = lStack_b8;
    plStack_90[0xf] = lStack_b0;
    plStack_90[0xc] = lStack_c8;
    plStack_90[0xd] = lStack_c0;
    plStack_90[10] = (longlong)puStack_d8;
    plStack_90[0xb] = (longlong)pplStack_d0;
    plStack_90[8] = uStack_e8;
    plStack_90[9] = lStack_e0;
    plStack_90[6] = lStack_f8;
    plStack_90[7] = (longlong)pauStack_f0;
    plStack_90[4] = (longlong)puStack_108;
    plStack_90[5] = lStack_100;
    plStack_90[2] = (longlong)plStack_118;
    plStack_90[3] = lStack_110;
    *plStack_90 = (longlong)plStack_128;
    plStack_90[1] = (longlong)pcStack_120;
    return;
  }
  uVar34 = uVar34 + lVar33 + 0x10;
  lVar33 = lVar33 + 0x10;
  goto LAB_140a2c0cb;
}

