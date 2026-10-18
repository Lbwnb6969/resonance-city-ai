// VA 0x140c8fa70, PDB extent 4081 bytes
// country_core::resources::walls::decorator_storage::DecoratorStorage::restore_decorators<country_core::systems::history::replay_pop_bucket::replay_pop_bucket::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::DecoratorStorage::restore_decorators<country_core::systems::history::replay_pop_bucket::replay_pop_bucket::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 4081 */

void pdb_140c8fa70(longlong param_1,undefined8 *param_2,char param_3,uint *param_4,
                  undefined8 param_5,longlong param_6,undefined8 param_7)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined4 uVar16;
  undefined1 (*pauVar17) [16];
  uint uVar18;
  longlong *plVar19;
  undefined8 uVar20;
  undefined1 (*pauVar21) [16];
  ulonglong uVar22;
  undefined8 *puVar23;
  undefined1 (*pauVar24) [16];
  longlong lVar25;
  undefined1 (*pauVar26) [16];
  byte bVar27;
  uint uVar28;
  ushort uVar29;
  uint uVar30;
  longlong lVar31;
  uint uVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  uint uVar35;
  longlong lVar36;
  undefined1 (*pauVar37) [16];
  bool bVar38;
  byte bVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  char cVar45;
  undefined1 unaff_XMM6_Bc;
  char cVar46;
  undefined1 unaff_XMM6_Bd;
  char cVar47;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  char cVar48;
  undefined1 unaff_XMM6_Bg;
  char cVar49;
  undefined1 unaff_XMM6_Bh;
  char cVar50;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  char cVar51;
  undefined1 unaff_XMM6_Bk;
  char cVar52;
  undefined1 unaff_XMM6_Bl;
  char cVar53;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  char cVar54;
  undefined1 unaff_XMM6_Bo;
  char cVar55;
  undefined1 unaff_XMM6_Bp;
  char cVar56;
  longlong lStack_478;
  uint *puStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  longlong *plStack_448;
  undefined4 uStack_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  uint uStack_418;
  undefined4 uStack_414;
  undefined8 uStack_410;
  undefined1 auStack_408 [16];
  undefined8 uStack_3f8;
  longlong *plStack_3f0;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 (*pauStack_328) [16];
  ulonglong uStack_320;
  uint *puStack_318;
  longlong lStack_310;
  undefined1 auStack_308 [16];
  undefined8 uStack_2f8;
  longlong *plStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  uint *puStack_238;
  ulonglong uStack_230;
  uint *puStack_228;
  code *pcStack_220;
  undefined1 (**ppauStack_218) [16];
  code *pcStack_210;
  undefined1 (**ppauStack_208) [16];
  code *pcStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  longlong lStack_1c8;
  undefined1 (*pauStack_1c0) [16];
  longlong lStack_1b8;
  ulonglong uStack_1b0;
  undefined1 (*pauStack_1a8) [16];
  ulonglong uStack_1a0;
  longlong lStack_198;
  longlong lStack_190;
  longlong lStack_188;
  undefined8 *puStack_180;
  uint uStack_16c;
  undefined1 (*pauStack_168) [16];
  undefined1 (*pauStack_160) [16];
  undefined1 (*pauStack_158) [16];
  undefined1 (*pauStack_150) [16];
  undefined1 (*pauStack_148) [16];
  undefined1 (*pauStack_140) [16];
  undefined1 (*pauStack_138) [16];
  undefined1 (*pauStack_130) [16];
  undefined1 (*pauStack_128) [16];
  longlong lStack_120;
  undefined1 (*pauStack_118) [16];
  undefined1 (*pauStack_110) [16];
  undefined1 (*pauStack_108) [16];
  longlong lStack_100;
  undefined1 (*pauStack_f8) [16];
  undefined1 (*pauStack_f0) [16];
  undefined1 (*pauStack_e8) [16];
  uint uStack_dc;
  undefined1 (*pauStack_d8) [16];
  undefined1 (*pauStack_d0) [16];
  undefined1 uStack_c1;
  undefined8 uStack_c0;
  
  uStack_c0 = 0xfffffffffffffffe;
  puStack_238 = param_4;
  lStack_1c8 = param_1;
  if (*(char *)(param_1 + 0x1b0) != '\0') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143076420,0x21,&UNK_143076448);
  }
  puVar23 = param_2;
  plVar19 = (longlong *)pdb_140f3bda0();
  if ((char)plVar19[2] == '\x01') {
    lStack_188 = *plVar19;
    puVar23 = (undefined8 *)plVar19[1];
  }
  else {
    lStack_188 = pdb_140f4fd10();
    *plVar19 = lStack_188;
    plVar19[1] = (longlong)puVar23;
    *(undefined1 *)(plVar19 + 2) = 1;
  }
  *plVar19 = lStack_188 + 1;
  lStack_198 = _DAT_143076640;
  lStack_190 = _UNK_143076648;
  pauStack_1a8 = _DAT_143076630;
  uStack_1a0 = _UNK_143076638;
  pauStack_140 = (undefined1 (*) [16])*param_2;
  pauStack_138 = (undefined1 (*) [16])param_2[3];
  auVar40 = *pauStack_140;
  pauStack_d0 = pauStack_140 + 1;
  uVar35 = ~(uint)(ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar40[0xf] >> 7) << 0xf);
  lStack_100 = CONCAT71(lStack_100._1_7_,param_3);
  pauVar21 = pauStack_140;
  pauStack_1c0 = pauStack_d0;
  puStack_180 = puVar23;
  pauStack_148 = (undefined1 (*) [16])0x30;
  pauStack_108 = pauStack_138;
  if (param_3 == '\0') {
    pauStack_148 = (undefined1 (*) [16])0x0;
  }
  while (uVar16 = _UNK_142e47bfc, uVar6 = _UNK_142e47bf8, pauStack_108 != (undefined1 (*) [16])0x0)
  {
    if ((short)uVar35 == 0) {
      do {
        auVar40 = *pauStack_d0;
        pauVar21 = pauVar21 + -0x70;
        pauStack_d0 = pauStack_d0 + 1;
        uVar35 = (ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar40[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar35 == 0);
    }
    uVar28 = 0;
    for (uVar32 = uVar35; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
      uVar28 = uVar28 + 1;
    }
    uVar22 = (ulonglong)uVar28;
    pauVar24 = *(undefined1 (**) [16])pauVar21[uVar22 * -7 + -7];
    lStack_120 = *(longlong *)(pauVar21[uVar22 * -7 + -7] + 8);
    uStack_c1 = 1;
    pauStack_150 = pauVar24;
    pauStack_110 = pauVar21;
    pauStack_d8 = (undefined1 (*) [16])pdb_140c411c0(lStack_1c8);
    uVar35 = uVar35 - 1 & uVar35;
    pauStack_108 = (undefined1 (*) [16])(pauStack_108[-1] + 0xf);
    pauVar21 = pauStack_110;
    pauStack_128 = pauVar24;
    if (pauStack_d8 != (undefined1 (*) [16])0x0) {
      pauVar37 = *(undefined1 (**) [16])(pauStack_110[uVar22 * -7 + -6] + (longlong)pauStack_148);
      lVar36 = *(longlong *)(pauStack_110[uVar22 * -7 + -5] + (longlong)(*pauStack_148 + 8));
      auVar40 = *pauVar37;
      pauVar26 = pauVar37 + 1;
      uVar28 = ~(uint)(ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar40[0xf] >> 7) << 0xf);
      pauStack_168 = pauStack_d8 + 6;
      pauStack_158 = pauStack_d8 + 3;
      pauStack_130 = pauStack_d8 + 8;
      pauStack_160 = pauStack_d8 + 5;
      pauStack_118 = pauVar24 + 2;
      while (bVar38 = lVar36 != 0, lVar36 = lVar36 + -1, pauVar21 = pauStack_110, bVar38) {
        if ((short)uVar28 == 0) {
          do {
            auVar40 = *pauVar26;
            pauVar37 = pauVar37 + -0x70;
            pauVar26 = pauVar26 + 1;
            uVar28 = (ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar40[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar28 == 0);
        }
        uVar32 = 0;
        for (uVar30 = uVar28; (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x80000000) {
          uVar32 = uVar32 + 1;
        }
        uVar32 = *(uint *)pauVar37[(ulonglong)uVar32 * -7 + -7];
        pauStack_f8 = (undefined1 (*) [16])CONCAT44(pauStack_f8._4_4_,uVar32);
        uStack_c1 = 1;
        uVar20 = pdb_1400aede0(pauStack_130,&pauStack_f8);
        uStack_c1 = 1;
        pdb_140ca8930(pauStack_168,uVar20,&pauStack_f8);
        uStack_c1 = 1;
        pdb_1403b0de0(pauStack_d8,uVar32);
        uStack_c1 = 1;
        uVar20 = pdb_1400aede0(pauStack_160,&pauStack_f8);
        uStack_c1 = 1;
        pdb_140ca9f50(&pauStack_328,pauStack_158,uVar20,&pauStack_f8);
        uVar22 = uStack_320;
        uVar28 = uVar28 - 1 & uVar28;
        if (uStack_320 != 8) {
          uStack_1d8 = uStack_2c8;
          uStack_1e8 = uStack_2d8;
          uStack_1e0 = uStack_2d0;
          uStack_1f8 = uStack_2e8;
          uStack_1f4 = uStack_2e4;
          uStack_1f0 = uStack_2e0;
          uStack_1ec = uStack_2dc;
          ppauStack_208 = (undefined1 (**) [16])uStack_2f8;
          pcStack_200 = (code *)plStack_2f0;
          ppauStack_218 = (undefined1 (**) [16])auStack_308._0_8_;
          pcStack_210 = (code *)auStack_308._8_8_;
          puStack_228 = puStack_318;
          pcStack_220 = (code *)lStack_310;
          uStack_c1 = 1;
          uStack_418 = uVar32;
          uVar20 = pdb_1400aede0(pauStack_118,&uStack_418);
          uStack_c1 = 1;
          pdb_140cabcd0(&pauStack_328,pauStack_128,uVar20,&uStack_418);
          if ((int)uStack_320 == 3) {
            uStack_c1 = 1;
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_14306d418,0x30,&UNK_143076408);
          }
          lStack_478 = uVar22;
          uStack_420 = uStack_1d8;
          uStack_430 = uStack_1e8;
          uStack_428 = uStack_1e0;
          uStack_440 = uStack_1f8;
          uStack_43c = uStack_1f4;
          uStack_438 = uStack_1f0;
          uStack_434 = uStack_1ec;
          uStack_450 = ppauStack_208;
          plStack_448 = (longlong *)pcStack_200;
          uStack_460 = ppauStack_218;
          uStack_458 = pcStack_210;
          puStack_470 = puStack_228;
          uStack_468 = pcStack_220;
          uStack_c1 = 1;
          pdb_140c475b0(&uStack_418,&lStack_478);
          uStack_2b8 = uStack_3b8;
          uStack_2c8 = uStack_3c8;
          uStack_2c0 = uStack_3c0;
          uStack_2d8 = uStack_3d8;
          uStack_2d0 = uStack_3d0;
          puStack_318 = (uint *)CONCAT44(uStack_414,uStack_418);
          uStack_2e8 = uStack_3e8;
          uStack_2e4 = uStack_3e4;
          uStack_2e0 = uStack_3e0;
          uStack_2dc = uStack_3dc;
          uStack_2f8 = uStack_3f8;
          plStack_2f0 = plStack_3f0;
          auStack_308 = auStack_408;
          lStack_310 = uStack_410;
          pauStack_328 = pauStack_150;
          uStack_320 = lStack_120;
          uStack_2b0 = 3;
          uStack_c1 = 1;
          pdb_1417bb1e0(&uStack_418,&pauStack_1a8,uVar32,&pauStack_328);
        }
      }
    }
  }
  auVar40 = *pauStack_140;
  bVar38 = (char)lStack_100 != '\0';
  lStack_100 = 0x30;
  if (bVar38) {
    lStack_100 = 0;
  }
  uVar35 = ~(uint)(ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                          (ushort)(byte)(auVar40[0xf] >> 7) << 0xf);
  iVar9 = -(uint)(CONCAT13(unaff_XMM6_Bd,
                           CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ==
                 CONCAT13(unaff_XMM6_Bd,
                          CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))));
  cVar45 = (char)((uint)iVar9 >> 8);
  cVar46 = (char)((uint)iVar9 >> 0x10);
  cVar47 = (char)((uint)iVar9 >> 0x18);
  iVar10 = -(uint)(CONCAT13(unaff_XMM6_Bh,
                            CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ==
                  CONCAT13(unaff_XMM6_Bh,
                           CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))));
  cVar48 = (char)((uint)iVar10 >> 8);
  cVar49 = (char)((uint)iVar10 >> 0x10);
  cVar50 = (char)((uint)iVar10 >> 0x18);
  iVar11 = -(uint)(CONCAT13(unaff_XMM6_Bl,
                            CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ==
                  CONCAT13(unaff_XMM6_Bl,
                           CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))));
  cVar51 = (char)((uint)iVar11 >> 8);
  cVar52 = (char)((uint)iVar11 >> 0x10);
  cVar53 = (char)((uint)iVar11 >> 0x18);
  iVar12 = -(uint)(CONCAT13(unaff_XMM6_Bp,
                            CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ==
                  CONCAT13(unaff_XMM6_Bp,
                           CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))));
  cVar54 = (char)((uint)iVar12 >> 8);
  cVar55 = (char)((uint)iVar12 >> 0x10);
  cVar56 = (char)((uint)iVar12 >> 0x18);
  pauVar21 = pauStack_138;
  lVar36 = lStack_100;
  pauVar24 = pauStack_140;
  do {
    do {
      do {
        if (pauVar21 == (undefined1 (*) [16])0x0) {
          auVar40 = *pauStack_1a8;
          pauVar21 = pauStack_1a8 + 1;
          uVar35 = ~(uint)(ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar40[0xf] >> 7) << 0xf);
          lVar36 = lStack_190;
          pauVar24 = pauStack_1a8;
          while (lVar36 != 0) {
            if ((short)uVar35 == 0) {
              do {
                auVar40 = *pauVar21;
                pauVar24 = pauVar24 + -0xf8;
                pauVar21 = pauVar21 + 1;
                uVar35 = (ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar40[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar35 == 0);
            }
            uVar28 = 0;
            for (uVar32 = uVar35; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
              uVar28 = uVar28 + 1;
            }
            uVar35 = uVar35 - 1 & uVar35;
            lVar25 = (ulonglong)uVar28 * -0xf8;
            lVar36 = lVar36 + -1;
            lVar31 = *(longlong *)((longlong)pauVar24 + lVar25 + -0xf0);
            if (lVar31 != 3) {
              uVar6 = *(undefined4 *)((longlong)pauVar24 + lVar25 + -0xf8);
              lVar7 = *(longlong *)((longlong)pauVar24 + lVar25 + -0x78);
              if (lVar7 == 3) {
                uStack_c1 = 1;
                pdb_140933da0(&pauStack_328,param_5,param_6,uVar6);
                if (auStack_308[0] != '\x11') {
                  LOCK();
                  *plStack_2f0 = *plStack_2f0 + -1;
                  UNLOCK();
                  if (*plStack_2f0 == 0) {
                    uStack_c1 = 1;
                    pdb_140c7b7a0(&plStack_2f0);
                  }
                }
                uStack_c1 = 1;
                pdb_140933da0(&pauStack_328,param_5,param_6 + 0x30,uVar6);
                if (auStack_308[0] != '\x11') {
                  LOCK();
                  *plStack_2f0 = *plStack_2f0 + -1;
                  UNLOCK();
                  if (*plStack_2f0 == 0) {
                    uStack_c1 = 1;
                    pdb_140c7b7a0(&plStack_2f0);
                  }
                }
              }
              else if (((int)lVar31 != (int)lVar7) ||
                      ((lVar31 == 0 &&
                       (*(longlong *)((longlong)pauVar24 + lVar25 + -0xe8) !=
                        *(longlong *)((longlong)pauVar24 + lVar25 + -0x70))))) {
                uStack_c1 = 1;
                pdb_140933da0(&pauStack_328,param_5,param_6,uVar6);
                if (auStack_308[0] != '\x11') {
                  LOCK();
                  *plStack_2f0 = *plStack_2f0 + -1;
                  UNLOCK();
                  if (*plStack_2f0 == 0) {
                    uStack_c1 = 1;
                    pdb_140c7b7a0(&plStack_2f0);
                  }
                }
                uStack_c1 = 1;
                pdb_140933da0(&pauStack_328,param_5,param_6 + 0x30,uVar6);
                if (auStack_308[0] != '\x11') {
                  LOCK();
                  *plStack_2f0 = *plStack_2f0 + -1;
                  UNLOCK();
                  if (*plStack_2f0 == 0) {
                    uStack_c1 = 1;
                    pdb_140c7b7a0(&plStack_2f0);
                  }
                }
              }
            }
          }
          auStack_308._8_8_ = puStack_180;
          auStack_308._0_8_ = lStack_188;
          puStack_318 = (uint *)lStack_198;
          lStack_310 = lStack_190;
          pauStack_328 = pauStack_1a8;
          uStack_320 = uStack_1a0;
          uStack_c1 = 0;
          pdb_140bbdad0(&pauStack_328,param_7);
          return;
        }
        if ((short)uVar35 == 0) {
          do {
            auVar40 = *pauStack_1c0;
            pauVar24 = pauVar24 + -0x70;
            pauStack_1c0 = pauStack_1c0 + 1;
            uVar35 = (ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar40[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar35 == 0);
        }
        uVar28 = 0;
        for (uVar32 = uVar35; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
          uVar28 = uVar28 + 1;
        }
        uVar22 = (ulonglong)uVar28;
        uVar35 = uVar35 - 1 & uVar35;
        pauVar26 = pauVar21 + -1;
        pauVar21 = (undefined1 (*) [16])(*pauVar26 + 0xf);
      } while (*(longlong *)(pauVar24[uVar22 * -7 + -5] + lVar36 + 8) == 0);
      pauVar21 = *(undefined1 (**) [16])pauVar24[uVar22 * -7 + -7];
      pauStack_130 = *(undefined1 (**) [16])(pauVar24[uVar22 * -7 + -7] + 8);
      uStack_c1 = 1;
      pauStack_140 = pauVar24;
      pauStack_138 = (undefined1 (*) [16])(*pauVar26 + 0xf);
      pauStack_d8 = pauVar21;
      pauStack_118 = (undefined1 (*) [16])pdb_140c3f210(lStack_1c8);
      pauVar37 = *(undefined1 (**) [16])(pauVar24[uVar22 * -7 + -6] + lStack_100);
      auVar40 = *pauVar37;
      pauVar26 = pauVar37 + 1;
      uVar28 = ~(uint)(ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar40[0xf] >> 7) << 0xf);
      pauStack_108 = pauStack_118 + 6;
      pauStack_148 = pauStack_118 + 3;
      pauStack_110 = pauStack_118 + 2;
      pauStack_d0 = pauVar21;
      lVar31 = *(longlong *)(pauVar24[uVar22 * -7 + -5] + lStack_100 + 8);
joined_r0x000140c9006c:
      pauVar21 = pauStack_138;
      lVar36 = lStack_100;
      pauVar24 = pauStack_140;
    } while (lVar31 == 0);
    do {
      lStack_120 = lVar31 + -1;
      if ((short)uVar28 == 0) {
        do {
          auVar40 = *pauVar26;
          pauVar37 = pauVar37 + -0x70;
          pauVar26 = pauVar26 + 1;
          uVar28 = (ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar40[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar28 == 0);
      }
      uVar32 = 0;
      for (uVar30 = uVar28; (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x80000000) {
        uVar32 = uVar32 + 1;
      }
      uVar33 = (ulonglong)uVar32;
      uVar32 = *(uint *)pauVar37[uVar33 * -7 + -7];
      uVar22 = (ulonglong)uVar32 + 1;
      if (uVar22 <= *puStack_238) {
        uVar22 = (ulonglong)*puStack_238;
      }
      *puStack_238 = (uint)uVar22;
      auStack_308._0_8_ = *(undefined8 *)pauVar37[uVar33 * -7 + -3];
      pauStack_328 = *(undefined1 (**) [16])pauVar37[uVar33 * -7 + -5];
      uStack_320 = *(ulonglong *)(pauVar37[uVar33 * -7 + -5] + 8);
      puStack_318 = *(uint **)pauVar37[uVar33 * -7 + -4];
      lStack_310 = *(longlong *)(pauVar37[uVar33 * -7 + -4] + 8);
      pauStack_160 = *(undefined1 (**) [16])(pauVar37[uVar33 * -7 + -7] + 8);
      pauStack_158 = *(undefined1 (**) [16])pauVar37[uVar33 * -7 + -6];
      uVar20 = *(undefined8 *)(pauVar37[uVar33 * -7 + -3] + 8);
      uVar2 = *(undefined4 *)pauVar37[uVar33 * -7 + -2];
      pauStack_168 = (undefined1 (*) [16])
                     CONCAT44(pauStack_168._4_4_,*(undefined4 *)(pauVar37[uVar33 * -7 + -2] + 4));
      uVar13 = *(undefined4 *)(pauVar37[uVar33 * -7 + -2] + 8);
      uVar14 = *(undefined4 *)((longlong)(pauVar37[uVar33 * -7 + -2] + 8) + 4);
      pauStack_128 = (undefined1 (*) [16])
                     CONCAT44(pauStack_128._4_4_,*(undefined4 *)(pauVar37[uVar33 * -7 + -6] + 8));
      uVar5 = *(undefined4 *)(pauVar37[uVar33 * -7 + -6] + 0xc);
      uVar3 = *(undefined8 *)pauVar37[uVar33 * -7 + -1];
      uVar4 = *(undefined8 *)(pauVar37[uVar33 * -7 + -1] + 8);
      uStack_c1 = 1;
      uStack_418 = uVar32;
      uVar22 = pdb_1400aede0(&lStack_188);
      uVar28 = uVar28 - 1 & uVar28;
      pauStack_150 = (undefined1 (*) [16])(pauVar37[uVar33 * -7 + -7] + 8);
      bVar27 = (byte)(uVar22 >> 0x38);
      bVar39 = bVar27 >> 1;
      auVar40 = ZEXT216(CONCAT11(bVar39,bVar39));
      auVar40 = pshuflw(auVar40,auVar40,0);
      lVar36 = 0;
      uVar33 = uVar22;
      while( true ) {
        uVar33 = uVar33 & uStack_1a0;
        pcVar1 = *pauStack_1a8 + uVar33;
        auVar44[0] = -(*pcVar1 == auVar40[0]);
        auVar44[1] = -(pcVar1[1] == auVar40[1]);
        auVar44[2] = -(pcVar1[2] == auVar40[2]);
        auVar44[3] = -(pcVar1[3] == auVar40[3]);
        auVar44[4] = -(pcVar1[4] == auVar40[4]);
        auVar44[5] = -(pcVar1[5] == auVar40[5]);
        auVar44[6] = -(pcVar1[6] == auVar40[6]);
        auVar44[7] = -(pcVar1[7] == auVar40[7]);
        auVar44[8] = -(pcVar1[8] == auVar40[0]);
        auVar44[9] = -(pcVar1[9] == auVar40[1]);
        auVar44[10] = -(pcVar1[10] == auVar40[2]);
        auVar44[0xb] = -(pcVar1[0xb] == auVar40[3]);
        auVar44[0xc] = -(pcVar1[0xc] == auVar40[4]);
        auVar44[0xd] = -(pcVar1[0xd] == auVar40[5]);
        auVar44[0xe] = -(pcVar1[0xe] == auVar40[6]);
        auVar44[0xf] = -(pcVar1[0xf] == auVar40[7]);
        uVar29 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf
        ;
        uVar30 = (uint)uVar29;
        while (uVar29 != 0) {
          uVar18 = 0;
          for (uVar8 = uVar30; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            uVar18 = uVar18 + 1;
          }
          lVar31 = (uVar18 + uVar33 & uStack_1a0) * -0xf8;
          if (*(uint *)((longlong)pauStack_1a8 + lVar31 + -0xf8) == uVar32) {
            lVar31 = (longlong)pauStack_1a8 + lVar31;
            goto LAB_140c9035c;
          }
          uVar29 = (ushort)(uVar30 - 1) & (ushort)uVar30;
          uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar29);
        }
        auVar42[0] = -(*pcVar1 == (char)iVar9);
        auVar42[1] = -(pcVar1[1] == cVar45);
        auVar42[2] = -(pcVar1[2] == cVar46);
        auVar42[3] = -(pcVar1[3] == cVar47);
        auVar42[4] = -(pcVar1[4] == (char)iVar10);
        auVar42[5] = -(pcVar1[5] == cVar48);
        auVar42[6] = -(pcVar1[6] == cVar49);
        auVar42[7] = -(pcVar1[7] == cVar50);
        auVar42[8] = -(pcVar1[8] == (char)iVar11);
        auVar42[9] = -(pcVar1[9] == cVar51);
        auVar42[10] = -(pcVar1[10] == cVar52);
        auVar42[0xb] = -(pcVar1[0xb] == cVar53);
        auVar42[0xc] = -(pcVar1[0xc] == (char)iVar12);
        auVar42[0xd] = -(pcVar1[0xd] == cVar54);
        auVar42[0xe] = -(pcVar1[0xe] == cVar55);
        auVar42[0xf] = -(pcVar1[0xf] == cVar56);
        uVar29 = (ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe | (ushort)(auVar42[0xf] >> 7) << 0xf
        ;
        if (uVar29 != 0) break;
        uVar33 = uVar33 + lVar36 + 0x10;
        lVar36 = lVar36 + 0x10;
      }
      if (lStack_198 == 0) {
        uStack_c1 = 1;
        uStack_230 = uVar22;
        pdb_142dab0d0(&pauStack_1a8,1,&lStack_188,CONCAT71((uint7)(byte)(uVar29 >> 8),1));
        uVar22 = uStack_230;
      }
      uVar22 = uVar22 & uStack_1a0;
      auVar40 = *(undefined1 (*) [16])(*pauStack_1a8 + uVar22);
      uVar29 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar40[0xf] >> 7) << 0xf;
      uVar30 = (uint)uVar29;
      if (uVar29 == 0) {
        lVar36 = 0x10;
        do {
          uVar22 = uVar22 + lVar36 & uStack_1a0;
          auVar40 = *(undefined1 (*) [16])(*pauStack_1a8 + uVar22);
          lVar36 = lVar36 + 0x10;
          uVar30 = (uint)(ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar40[0xf] >> 7) << 0xf);
        } while (uVar30 == 0);
      }
      uVar18 = 0;
      for (; (uVar30 & 1) == 0; uVar30 = uVar30 >> 1 | 0x80000000) {
        uVar18 = uVar18 + 1;
      }
      uVar22 = uVar18 + uVar22 & uStack_1a0;
      bVar39 = (*pauStack_1a8)[uVar22];
      if (-1 < (char)bVar39) {
        auVar40 = *pauStack_1a8;
        uVar30 = 0;
        for (uVar18 = (uint)(ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(byte)(auVar40[0xf] >> 7) << 0xf); (uVar18 & 1) == 0;
            uVar18 = uVar18 >> 1 | 0x80000000) {
          uVar30 = uVar30 + 1;
        }
        uVar22 = (ulonglong)uVar30;
        bVar39 = (*pauStack_1a8)[uVar22];
      }
      bVar27 = bVar27 >> 1;
      (*pauStack_1a8)[uVar22] = bVar27;
      pauStack_1a8[1][uVar22 - 0x10 & uStack_1a0] = bVar27;
      lVar36 = uVar22 * -0xf8;
      lVar31 = (longlong)pauStack_1a8 + lVar36;
      *(uint *)((longlong)pauStack_1a8 + lVar36 + -0xf8) = uVar32;
      *(undefined8 *)((longlong)pauStack_1a8 + lVar36 + -0xf0) = 3;
      *(undefined8 *)((longlong)pauStack_1a8 + lVar36 + -0x78) = 3;
      auVar40._8_4_ = uVar6;
      auVar40._0_8_ = (ulonglong)bVar39 & 0xffffffffffffff01;
      auVar40._12_4_ = uVar16;
      lStack_198 = lStack_198 - ((ulonglong)bVar39 & 0xffffffffffffff01);
      lStack_190 = lStack_190 - auVar40._8_8_;
LAB_140c9035c:
      *(undefined1 (**) [16])(lVar31 + -0x78) = pauStack_d8;
      *(undefined1 (**) [16])(lVar31 + -0x70) = pauStack_130;
      *(undefined1 (**) [16])(lVar31 + -0x68) = pauStack_160;
      *(undefined1 (**) [16])(lVar31 + -0x60) = pauStack_158;
      *(undefined4 *)(lVar31 + -0x58) = pauStack_128._0_4_;
      *(undefined4 *)(lVar31 + -0x54) = uVar5;
      auVar15._8_8_ = lStack_310;
      auVar15._0_8_ = puStack_318;
      *(undefined1 (**) [16])(lVar31 + -0x50) = pauStack_328;
      *(ulonglong *)(lVar31 + -0x48) = uStack_320;
      *(undefined1 (*) [16])(lVar31 + -0x40) = auVar15;
      *(undefined8 *)(lVar31 + -0x30) = auStack_308._0_8_;
      *(undefined8 *)(lVar31 + -0x28) = uVar20;
      *(undefined4 *)(lVar31 + -0x20) = uVar2;
      *(undefined4 *)(lVar31 + -0x1c) = pauStack_168._0_4_;
      *(undefined4 *)(lVar31 + -0x18) = uVar13;
      *(undefined4 *)(lVar31 + -0x14) = uVar14;
      *(int *)(lVar31 + -0x10) = (int)uVar3;
      *(int *)(lVar31 + -0xc) = (int)((ulonglong)uVar3 >> 0x20);
      *(undefined8 *)(lVar31 + -8) = uVar4;
      uStack_c1 = 1;
      pdb_140901a00(&pauStack_328,pauStack_150);
      pauStack_e8 = pauStack_d0;
      pauStack_f8 = pauStack_d8;
      pauStack_f0 = pauStack_130;
      uStack_c1 = 1;
      uStack_dc = uVar32;
      uVar20 = pdb_1400aede0(pauStack_110,&uStack_dc);
      uStack_c1 = 1;
      pdb_140ca8930(pauStack_118,uVar20,&uStack_dc);
      uStack_c1 = 1;
      pdb_1403b0de0(pauStack_108,(ulonglong)uVar32);
      uStack_c1 = 1;
      pdb_141407a20(&uStack_418,pauStack_148,uVar32);
      pauVar17 = pauStack_e8;
      pauVar24 = pauStack_f0;
      pauVar21 = pauStack_f8;
      if (uStack_418 != 8) {
        lStack_1b8 = CONCAT44(lStack_1b8._4_4_,uVar32);
        if (*(longlong *)(pauStack_e8[1] + 8) != 0) {
          uStack_c1 = 1;
          uVar33 = pdb_1400aede0(pauStack_e8 + 2,&lStack_1b8);
          lVar36 = *(longlong *)*pauVar17;
          uVar22 = *(ulonglong *)(*pauVar17 + 8);
          bVar27 = (byte)(uVar33 >> 0x39);
          auVar40 = ZEXT216(CONCAT11(bVar27,bVar27));
          auVar40 = pshuflw(auVar40,auVar40,0);
          lVar31 = 0;
          while( true ) {
            uVar33 = uVar33 & uVar22;
            auVar44 = *(undefined1 (*) [16])(lVar36 + uVar33);
            auVar43[0] = -(auVar44[0] == auVar40[0]);
            auVar43[1] = -(auVar44[1] == auVar40[1]);
            auVar43[2] = -(auVar44[2] == auVar40[2]);
            auVar43[3] = -(auVar44[3] == auVar40[3]);
            auVar43[4] = -(auVar44[4] == auVar40[4]);
            auVar43[5] = -(auVar44[5] == auVar40[5]);
            auVar43[6] = -(auVar44[6] == auVar40[6]);
            auVar43[7] = -(auVar44[7] == auVar40[7]);
            auVar43[8] = -(auVar44[8] == auVar40[0]);
            auVar43[9] = -(auVar44[9] == auVar40[1]);
            auVar43[10] = -(auVar44[10] == auVar40[2]);
            auVar43[0xb] = -(auVar44[0xb] == auVar40[3]);
            auVar43[0xc] = -(auVar44[0xc] == auVar40[4]);
            auVar43[0xd] = -(auVar44[0xd] == auVar40[5]);
            auVar43[0xe] = -(auVar44[0xe] == auVar40[6]);
            auVar43[0xf] = -(auVar44[0xf] == auVar40[7]);
            uVar29 = (ushort)(SUB161(auVar43 >> 7,0) & 1) |
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
                     (ushort)(auVar43[0xf] >> 7) << 0xf;
            uVar32 = (uint)uVar29;
            while (uVar29 != 0) {
              uVar30 = 0;
              for (uVar18 = uVar32; (uVar18 & 1) == 0; uVar18 = uVar18 >> 1 | 0x80000000) {
                uVar30 = uVar30 + 1;
              }
              uVar34 = uVar30 + uVar33 & uVar22;
              if ((int)lStack_1b8 == *(int *)(lVar36 + -0x18 + uVar34 * -0x18)) {
                lVar36 = lVar36 + uVar34 * -0x18;
                *(undefined1 (**) [16])(lVar36 + -0x10) = pauVar21;
                *(undefined1 (**) [16])(lVar36 + -8) = pauVar24;
                lVar31 = lStack_120;
                goto joined_r0x000140c9006c;
              }
              uVar29 = (ushort)(uVar32 - 1) & (ushort)uVar32;
              uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar29);
            }
            auVar41[0] = -(auVar44[0] == (char)iVar9);
            auVar41[1] = -(auVar44[1] == cVar45);
            auVar41[2] = -(auVar44[2] == cVar46);
            auVar41[3] = -(auVar44[3] == cVar47);
            auVar41[4] = -(auVar44[4] == (char)iVar10);
            auVar41[5] = -(auVar44[5] == cVar48);
            auVar41[6] = -(auVar44[6] == cVar49);
            auVar41[7] = -(auVar44[7] == cVar50);
            auVar41[8] = -(auVar44[8] == (char)iVar11);
            auVar41[9] = -(auVar44[9] == cVar51);
            auVar41[10] = -(auVar44[10] == cVar52);
            auVar41[0xb] = -(auVar44[0xb] == cVar53);
            auVar41[0xc] = -(auVar44[0xc] == (char)iVar12);
            auVar41[0xd] = -(auVar44[0xd] == cVar54);
            auVar41[0xe] = -(auVar44[0xe] == cVar55);
            auVar41[0xf] = -(auVar44[0xf] == cVar56);
            if ((((((((((((((((SUB161(auVar41 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar41 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar41 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar41 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar41 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar41 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar41 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar41 >> 0x3f,0) & 1) != 0) || (SUB161(auVar41 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar41 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar41 >> 0x57,0) & 1) != 0) || (SUB161(auVar41 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar41 >> 0x67,0) & 1) != 0) || (SUB161(auVar41 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar41 >> 0x77,0) & 1) != 0) || auVar41[0xf] < '\0') break;
            uVar33 = uVar33 + lVar31 + 0x10;
            lVar31 = lVar31 + 0x10;
          }
        }
        puStack_228 = (uint *)&lStack_1b8;
        pcStack_220 = pdb_140c447f0;
        ppauStack_218 = &pauStack_f8;
        pcStack_210 = pdb_140c34b70;
        uStack_c1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14306d3de,&puStack_228,&UNK_14306d400);
      }
      uStack_c1 = 1;
      uVar22 = (ulonglong)uVar32;
      uStack_16c = uVar32;
      lVar36 = pdb_1417b43a0(pauStack_e8,uVar22,pauStack_f8,pauStack_f0);
      if (lVar36 != 3) {
        puStack_228 = &uStack_16c;
        pcStack_220 = pdb_140c447f0;
        ppauStack_218 = (undefined1 (**) [16])&lStack_1b8;
        pcStack_210 = pdb_140c34b70;
        ppauStack_208 = &pauStack_f8;
        pcStack_200 = pdb_140c34b70;
        uStack_c1 = 1;
        lStack_1b8 = lVar36;
        uStack_1b0 = uVar22;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14306d398,&puStack_228,&UNK_1430763d8);
      }
      pauVar21 = pauStack_138;
      lVar36 = lStack_100;
      pauVar24 = pauStack_140;
      lVar31 = lStack_120;
    } while (lStack_120 != 0);
  } while( true );
}

