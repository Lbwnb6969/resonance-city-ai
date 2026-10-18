// VA 0x140baa080, PDB extent 17169 bytes
// country_core::systems::wall::eraser::ui_bulldozer::wall_eraser_bulldoze
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/ui_bulldozer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::eraser::ui_bulldozer::wall_eraser_bulldoze
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/ui_bulldozer.rs
   Extent: 17169 */

void pdb_140baa080(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,longlong param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 (*pauVar5) [16];
  longlong *plVar6;
  undefined4 *puVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [12];
  float fVar12;
  bool bVar13;
  char cVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  undefined1 (*pauVar17) [16];
  int *piVar18;
  longlong lVar19;
  longlong lVar20;
  byte *pbVar21;
  byte *pbVar22;
  longlong lVar23;
  longlong *plVar24;
  ulonglong uVar25;
  undefined8 uVar26;
  float *pfVar27;
  uint *puVar28;
  undefined1 (**ppauVar29) [16];
  undefined8 *puVar30;
  float *pfVar31;
  uint *puVar32;
  undefined8 *puVar33;
  ulonglong uVar34;
  undefined1 (**ppauVar35) [16];
  undefined1 uVar36;
  longlong lVar37;
  undefined1 (*pauVar38) [16];
  undefined1 (*pauVar39) [16];
  undefined4 *puVar40;
  ushort uVar41;
  longlong lVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  uint uVar45;
  undefined8 uVar46;
  uint uVar47;
  byte bVar48;
  byte bVar49;
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  int iVar77;
  undefined1 auVar76 [16];
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined8 in_stack_fffffffffffff948;
  undefined8 in_stack_fffffffffffff950;
  undefined4 uVar86;
  undefined8 in_stack_fffffffffffff958;
  undefined4 uVar87;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined1 auStack_650 [24];
  undefined8 *puStack_638;
  undefined8 uStack_630;
  undefined8 *puStack_628;
  undefined1 auStack_530 [8];
  undefined8 *apuStack_528 [2];
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined1 (*pauStack_508) [16];
  undefined8 uStack_500;
  ulonglong uStack_4f8;
  undefined1 (**ppauStack_4f0) [16];
  longlong lStack_4e8;
  undefined1 (**ppauStack_4e0) [16];
  undefined8 uStack_400;
  undefined4 uStack_3f8;
  undefined8 uStack_3f0;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined1 (**ppauStack_3e0) [16];
  undefined8 uStack_3d8;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined2 uStack_394;
  undefined4 uStack_390;
  ulonglong uStack_378;
  longlong lStack_370;
  longlong lStack_368;
  ulonglong uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  float fStack_340;
  undefined2 uStack_330;
  undefined1 auStack_2d8 [264];
  float fStack_1d0;
  float fStack_1cc;
  byte *pbStack_1c8;
  byte abStack_1c0 [4];
  float fStack_1bc;
  float fStack_1b8;
  uint uStack_1b4;
  undefined8 *puStack_1b0;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  undefined8 uStack_198;
  longlong lStack_190;
  longlong lStack_188;
  code *pcStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 *puStack_158;
  undefined4 *puStack_150;
  undefined8 uStack_148;
  longlong *plStack_140;
  float fStack_138;
  float fStack_134;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  code *pcStack_120;
  undefined1 (**ppauStack_118) [16];
  uint uStack_10c;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined4 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined4 *puStack_d8;
  undefined1 (**ppauStack_d0) [16];
  undefined8 uStack_c8;
  float fStack_bc;
  undefined1 uStack_b5;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  
  uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffff948 >> 0x20);
  uVar86 = (undefined4)((ulonglong)in_stack_fffffffffffff950 >> 0x20);
  uVar87 = (undefined4)((ulonglong)in_stack_fffffffffffff958 >> 0x20);
  uStack_b0 = 0xfffffffffffffffe;
  apuStack_528[1] = (undefined8 *)*param_2;
  pbStack_1c8 = (byte *)param_2[4];
  puVar30 = (undefined8 *)*param_3;
  uStack_148 = param_3[4];
  puVar33 = (undefined8 *)*param_5;
  puVar16 = (undefined8 *)param_5[4];
  uStack_678 = *(undefined8 *)(param_6 + 0x20);
  uStack_670 = *(undefined8 *)(param_6 + 0x28);
  uStack_668 = *(undefined8 *)(param_6 + 0x30);
  uStack_660 = *(undefined8 *)(param_6 + 0x38);
  uStack_698 = *(undefined8 *)(param_6 + 0x60);
  uStack_690 = *(undefined8 *)(param_6 + 0x68);
  uStack_688 = *(undefined8 *)(param_6 + 0x70);
  uStack_680 = *(undefined8 *)(param_6 + 0x78);
  pcStack_180 = (code *)*param_7;
  ppauVar35 = (undefined1 (**) [16])param_7[4];
  ppauStack_d0 = (undefined1 (**) [16])param_7[5];
  uStack_518 = param_7[7];
  uStack_510 = param_7[9];
  uStack_3e4 = *(undefined4 *)((longlong)param_7 + 0x54);
  uStack_3d8._0_4_ = 0.0;
  uStack_3d8._4_4_ = 0.0;
  fStack_3d0 = 1.12104e-44;
  fStack_3cc = 0.0;
  fStack_3c8 = 0.0;
  fStack_3c4 = 0.0;
  uStack_3c0._0_4_ = 0.0;
  uStack_3a8 = 0;
  uStack_390 = 0;
  uStack_378 = uStack_378 & 0xffffffff00000000;
  uStack_360 = CONCAT62(uStack_360._2_6_,1);
  uStack_350 = CONCAT71(uStack_350._1_7_,5);
  uStack_350 = CONCAT44(0x7f7fffff,(undefined4)uStack_350);
  uStack_330 = 0x100;
  puStack_f0 = *(undefined4 **)(param_6 + 0x40);
  puStack_158 = *(undefined4 **)(param_6 + 0x50);
  puStack_150 = (undefined4 *)CONCAT44(puStack_150._4_4_,*(undefined4 *)(param_6 + 0x5c));
  plStack_140 = param_4;
  pdb_140900b80(puVar30,&UNK_143060c58,0xf,&uStack_3d8);
  uStack_178 = *puVar16;
  uStack_170 = puVar16[1];
  uStack_168 = puVar16[2];
  uVar26 = CONCAT44(uVar87,0x77fb);
  uVar46 = CONCAT44(uVar86,0x7f7fffff);
  puStack_d8 = param_1;
  puVar16 = (undefined8 *)pdb_1409f9030(abStack_1c0,*(undefined8 *)(param_1 + 0x26),&uStack_178,0);
  fVar56 = _UNK_1430608cc;
  fVar12 = _UNK_1430608c8;
  fVar81 = _UNK_1430608c4;
  fVar50 = _DAT_1430608c0;
  fVar79 = _DAT_14300c320;
  uVar45 = (uint)abStack_1c0[0];
  if (abStack_1c0[0] == 0x11) {
    if (DAT_143cb2d0c == '\0') {
      uStack_130 = CONCAT44(uStack_130._4_4_,5);
      fVar78 = _DAT_142e36f3c;
      puStack_128 = puVar16;
      puStack_100 = puVar16;
      goto LAB_140baa4b4;
    }
LAB_140bab36d:
    bVar48 = 0;
    uStack_3c0 = CONCAT44(uStack_3c0._4_4_,(float)uStack_3c0);
    goto code_r0x000140bab370;
  }
  if (0xe < abStack_1c0[0]) {
LAB_140baa318:
    if (DAT_143cb2d0c == '\0') {
      uStack_130 = CONCAT44(uStack_130._4_4_,5);
      puStack_128 = puVar16;
      puStack_100 = puVar16;
      goto code_r0x000140baa45e;
    }
    goto LAB_140bab36d;
  }
  puVar16 = (undefined8 *)
            (&UNK_1430612a0 + *(int *)(&UNK_1430612a0 + (ulonglong)abStack_1c0[0] * 4));
  switch(abStack_1c0[0]) {
  default:
    lVar37 = *(longlong *)(*(longlong *)(puStack_d8 + 0x10) + 8);
    puVar16 = (undefined8 *)(*(longlong *)(*(longlong *)(puStack_d8 + 0x10) + 0x10) * 0x98);
code_r0x000140baa300:
    if (puVar16 != (undefined8 *)0x0) goto code_r0x000140baa305;
    if (DAT_143cb2d0c != '\x01') {
      uStack_130 = (ulonglong)uStack_130._4_4_ << 0x20;
      puStack_128 = (undefined8 *)(ulonglong)uStack_1b4;
      puStack_100 = (undefined8 *)CONCAT44(uStack_1b4,fStack_1b8);
      break;
    }
    lVar37 = CONCAT44(uStack_1b4,fStack_1b8);
    pauStack_508 = (undefined1 (*) [16])auStack_530;
    uStack_500 = pdb_140c04ef0;
    pdb_140f60760(&uStack_3d8,&UNK_143060c67,&pauStack_508);
    pauStack_508 = (undefined1 (*) [16])CONCAT44(uStack_3d8._4_4_,(float)uStack_3d8);
    uStack_500 = (code *)CONCAT44(fStack_3cc,fStack_3d0);
    uStack_4f8 = CONCAT44(fStack_3c4,fStack_3c8);
    if (abStack_1c0[0] == 0x11) {
      uStack_10c = uVar45;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143060c78);
    }
    uStack_3d8._0_4_ = 0.0;
    uStack_3d8._4_4_ = 0.0;
    fStack_3d0 = 1.12104e-44;
    fStack_3cc = 0.0;
    fStack_3c8 = 0.0;
    fStack_3c4 = 0.0;
    uStack_3c0._0_4_ = 1.4013e-45;
    uStack_3b8 = 0;
    uStack_3a8 = 2;
    uStack_390 = 3;
    uStack_378 = CONCAT44(uStack_378._4_4_,3);
    uStack_360 = uStack_360 & 0xffffffffffffff00;
    uStack_350 = CONCAT71(uStack_350._1_7_,5);
    uStack_350 = CONCAT44(SQRT(((float)uStack_170 - fStack_1a0) * ((float)uStack_170 - fStack_1a0) +
                               (uStack_178._4_4_ - fStack_1a4) * (uStack_178._4_4_ - fStack_1a4) +
                               ((float)uStack_178 - fStack_1a8) * ((float)uStack_178 - fStack_1a8))
                          + _DAT_142e42360,(undefined4)uStack_350);
    uStack_330 = 0x101;
    ppauVar35 = &pauStack_508;
    uStack_10c = uVar45;
    lVar20 = pdb_1409008d0(puVar30,ppauVar35,&uStack_3d8);
    if (*(char *)(lVar20 + 0x18) != '\0') {
      if (*(undefined1 (***) [16])(lVar20 + 0x38) == ppauVar35) {
        bVar48 = *(int *)(lVar20 + 0x28) != 2;
        if ((((bool)bVar48) &&
            ((*(char *)(lVar20 + 0x18) != '\x02' || (1 < *(byte *)(lVar20 + 0x19))))) &&
           (plVar24 = *(longlong **)(puStack_d8 + 8), plVar24[3] != 0)) {
          uVar43 = pdb_1400af0a0(plVar24 + 4,&uStack_3d8);
          lVar23 = *plVar24;
          uVar34 = plVar24[1];
          bVar49 = (byte)(uVar43 >> 0x39);
          auVar53 = ZEXT216(CONCAT11(bVar49,bVar49));
          auVar53 = pshuflw(auVar53,auVar53,0);
          lVar19 = 0;
          while( true ) {
            uVar43 = uVar43 & uVar34;
            auVar54 = *(undefined1 (*) [16])(lVar23 + uVar43);
            auVar68[0] = -(auVar54[0] == auVar53[0]);
            auVar68[1] = -(auVar54[1] == auVar53[1]);
            auVar68[2] = -(auVar54[2] == auVar53[2]);
            auVar68[3] = -(auVar54[3] == auVar53[3]);
            auVar68[4] = -(auVar54[4] == auVar53[4]);
            auVar68[5] = -(auVar54[5] == auVar53[5]);
            auVar68[6] = -(auVar54[6] == auVar53[6]);
            auVar68[7] = -(auVar54[7] == auVar53[7]);
            auVar68[8] = -(auVar54[8] == auVar53[0]);
            auVar68[9] = -(auVar54[9] == auVar53[1]);
            auVar68[10] = -(auVar54[10] == auVar53[2]);
            auVar68[0xb] = -(auVar54[0xb] == auVar53[3]);
            auVar68[0xc] = -(auVar54[0xc] == auVar53[4]);
            auVar68[0xd] = -(auVar54[0xd] == auVar53[5]);
            auVar68[0xe] = -(auVar54[0xe] == auVar53[6]);
            auVar68[0xf] = -(auVar54[0xf] == auVar53[7]);
            uVar41 = (ushort)(SUB161(auVar68 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar68[0xf] >> 7) << 0xf;
            uVar45 = (uint)uVar41;
            while (uVar41 != 0) {
              uVar47 = 0;
              for (uVar9 = uVar45; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar47 = uVar47 + 1;
              }
              lVar42 = (uVar47 + uVar43 & uVar34) * -0x2b0;
              if (lVar37 == *(longlong *)(lVar23 + -0x2b0 + lVar42)) {
                lVar23 = lVar23 + lVar42;
                if ((*(ulonglong *)(lVar23 + -0x298) < 2) || (*(float *)(lVar23 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143060c90);
                }
                if (*(char *)(lVar23 + -8) == '\0') {
                  pdb_141b74e20(&uStack_678,lVar37,CONCAT71((int7)(uVar34 >> 8),1),&UNK_143060ca8);
                  iVar77 = pdb_140b54b40(plVar24,lVar37);
                  if (iVar77 != 0) {
                    pdb_141b74e20(param_6,lVar37,1,&UNK_143060cc0);
                  }
                }
                else {
                  uStack_378 = *(ulonglong *)(lVar23 + -0x218);
                  uStack_350 = *(ulonglong *)(lVar23 + -0x210);
                  lStack_370 = uStack_378 + uStack_350 * 0xc;
                  lStack_368 = *(longlong *)(lVar23 + -0x1c8);
                  uVar34 = *(ulonglong *)(lVar23 + -0x1c0);
                  uStack_360 = lStack_368 + uVar34 * 4;
                  if (uVar34 < uStack_350) {
                    uStack_350 = uVar34;
                  }
                  uStack_3d8._0_4_ = 0.0;
                  uStack_3d8._4_4_ = 0.0;
                  uStack_3a8 = 0;
                  uStack_3a4 = 0;
                  uStack_358 = 0;
                  uStack_348 = 2;
                  fStack_340 = (float)CONCAT31(fStack_340._1_3_,1);
                  pdb_1415fa2e0(auStack_650,&uStack_3d8);
                  fStack_3c8 = (float)auStack_650._16_8_;
                  fStack_3c4 = SUB84(auStack_650._16_8_,4);
                  uStack_3d8._0_4_ = (float)auStack_650._0_8_;
                  uStack_3d8._4_4_ = SUB84(auStack_650._0_8_,4);
                  fStack_3d0 = (float)auStack_650._8_8_;
                  fStack_3cc = SUB84(auStack_650._8_8_,4);
                  uStack_3c0._0_4_ = 0.0;
                  uStack_3c0._4_4_ = -0.0;
                  uStack_3a8 = 5;
                  uStack_3a4 = (undefined4)_UNK_1430608d0;
                  uStack_3a0 = (undefined4)((ulonglong)_UNK_1430608d0 >> 0x20);
                  uStack_39c = (undefined4)_UNK_1430608d8;
                  uStack_398 = (undefined4)((ulonglong)_UNK_1430608d8 >> 0x20);
                  uStack_394 = 1;
                  pdb_140ab2da0(&uStack_3d8,uStack_148);
                }
                goto code_r0x000140bab4fa;
              }
              uVar41 = (ushort)(uVar45 - 1) & (ushort)uVar45;
              uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar41);
            }
            auVar59[0] = -(auVar54[0] == -1);
            auVar59[1] = -(auVar54[1] == -1);
            auVar59[2] = -(auVar54[2] == -1);
            auVar59[3] = -(auVar54[3] == -1);
            auVar59[4] = -(auVar54[4] == -1);
            auVar59[5] = -(auVar54[5] == -1);
            auVar59[6] = -(auVar54[6] == -1);
            auVar59[7] = -(auVar54[7] == -1);
            auVar59[8] = -(auVar54[8] == -1);
            auVar59[9] = -(auVar54[9] == -1);
            auVar59[10] = -(auVar54[10] == -1);
            auVar59[0xb] = -(auVar54[0xb] == -1);
            auVar59[0xc] = -(auVar54[0xc] == -1);
            auVar59[0xd] = -(auVar54[0xd] == -1);
            auVar59[0xe] = -(auVar54[0xe] == -1);
            auVar59[0xf] = -(auVar54[0xf] == -1);
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
            uVar43 = uVar43 + lVar19 + 0x10;
            lVar19 = lVar19 + 0x10;
          }
        }
      }
      else {
        bVar48 = false;
      }
code_r0x000140bab4fa:
      uStack_3c0 = CONCAT44(uStack_3c0._4_4_,(float)uStack_3c0);
      if (((*(char *)(lVar20 + 0x18) == '\x02') &&
          (uStack_3c0 = CONCAT44(uStack_3c0._4_4_,(float)uStack_3c0),
          *(undefined1 (***) [16])(lVar20 + 0x38) == ppauVar35)) &&
         (uStack_3c0 = CONCAT44(uStack_3c0._4_4_,(float)uStack_3c0),
         *(char *)(lVar20 + 0x19) == '\x01')) {
        plVar24 = *(longlong **)(puStack_d8 + 8);
        if (plVar24[3] != 0) {
          uVar43 = pdb_1400af0a0(plVar24 + 4,&uStack_3d8);
          lVar23 = *plVar24;
          uVar34 = plVar24[1];
          bVar49 = (byte)(uVar43 >> 0x39);
          auVar53 = ZEXT216(CONCAT11(bVar49,bVar49));
          auVar53 = pshuflw(auVar53,auVar53,0);
          lVar19 = 0;
          while( true ) {
            uVar43 = uVar43 & uVar34;
            auVar54 = *(undefined1 (*) [16])(lVar23 + uVar43);
            auVar72[0] = -(auVar54[0] == auVar53[0]);
            auVar72[1] = -(auVar54[1] == auVar53[1]);
            auVar72[2] = -(auVar54[2] == auVar53[2]);
            auVar72[3] = -(auVar54[3] == auVar53[3]);
            auVar72[4] = -(auVar54[4] == auVar53[4]);
            auVar72[5] = -(auVar54[5] == auVar53[5]);
            auVar72[6] = -(auVar54[6] == auVar53[6]);
            auVar72[7] = -(auVar54[7] == auVar53[7]);
            auVar72[8] = -(auVar54[8] == auVar53[0]);
            auVar72[9] = -(auVar54[9] == auVar53[1]);
            auVar72[10] = -(auVar54[10] == auVar53[2]);
            auVar72[0xb] = -(auVar54[0xb] == auVar53[3]);
            auVar72[0xc] = -(auVar54[0xc] == auVar53[4]);
            auVar72[0xd] = -(auVar54[0xd] == auVar53[5]);
            auVar72[0xe] = -(auVar54[0xe] == auVar53[6]);
            auVar72[0xf] = -(auVar54[0xf] == auVar53[7]);
            uVar41 = (ushort)(SUB161(auVar72 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar72 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar72 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar72 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar72 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar72 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar72 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar72 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar72 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar72 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar72 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar72 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar72 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar72 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar72 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar72[0xf] >> 7) << 0xf;
            uVar45 = (uint)uVar41;
            while (uVar41 != 0) {
              uVar47 = 0;
              for (uVar9 = uVar45; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar47 = uVar47 + 1;
              }
              lVar42 = (uVar47 + uVar43 & uVar34) * -0x2b0;
              if (lVar37 == *(longlong *)(lVar23 + -0x2b0 + lVar42)) {
                lVar23 = lVar23 + lVar42;
                if ((*(ulonglong *)(lVar23 + -0x298) < 2) || (*(float *)(lVar23 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143060cd8);
                }
                if (((*(char *)(lVar20 + 0x18) == '\0') ||
                    (*(undefined1 (***) [16])(lVar20 + 0x38) != ppauVar35)) ||
                   (*(int *)(lVar20 + 0x28) == 2)) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8150(&UNK_143060cf0);
                }
                uStack_3f0 = *(undefined8 *)(lVar20 + 0x4c);
                uStack_3e8 = *(undefined4 *)(lVar20 + 0x54);
                fVar50 = (float)pdb_1419aa990(lVar23 + -0x270,uVar34,lVar19,&UNK_143060d08);
                puVar40 = puStack_d8;
                fVar79 = 0.0;
                if (0.0 <= fVar50) {
                  fVar79 = fVar50;
                }
                fVar50 = _DAT_142e36f28;
                if (fVar79 <= _DAT_142e36f28) {
                  fVar50 = fVar79;
                }
                pdb_140bae660(puStack_d8,lVar37,&uStack_3f0);
                pdb_140bae900(&uStack_3d8,puVar40,lVar37,&uStack_3f0,CONCAT44(uVar15,fVar50));
                pub_142e32760(&pauStack_508,&uStack_3d8,0x100);
                pub_142e32760(&puStack_638,auStack_2d8,0x100);
                uStack_198 = 0;
                lStack_190 = 8;
                lStack_188 = 0;
                uStack_b3 = 1;
                uStack_b4 = 1;
                pdb_140a1aa80(&uStack_198,&pauStack_508);
                pub_142e32760(&uStack_3d8,&puStack_638,0x100);
                uStack_b3 = 1;
                uStack_b4 = 0;
                pdb_140a1aa80(&uStack_198,&uStack_3d8);
                **(undefined4 **)(puStack_d8 + 0x1c) = puStack_d8[0x1f];
                uVar46 = *(undefined8 *)(puStack_d8 + 0x18);
                pauStack_508 = (undefined1 (*) [16])0x0;
                uStack_500 = (code *)0x8;
                uStack_4f8 = 0;
                uStack_3c0 = lStack_190 + lStack_188 * 0x18;
                uStack_3d8._0_4_ = (float)lStack_190;
                uStack_3d8._4_4_ = (float)((ulonglong)lStack_190 >> 0x20);
                fStack_3c8 = (float)uStack_198;
                fStack_3c4 = (float)((ulonglong)uStack_198 >> 0x20);
                lVar37 = lStack_190;
                fStack_3d0 = (float)uStack_3d8;
                fStack_3cc = uStack_3d8._4_4_;
                uVar26 = pdb_140c69b60(&uStack_3d8);
                fStack_3d0 = (float)uVar26;
                fStack_3cc = (float)((ulonglong)uVar26 >> 0x20);
                fStack_3c8 = (float)lVar37;
                fStack_3c4 = (float)((ulonglong)lVar37 >> 0x20);
                uStack_3d8._0_4_ = 9.80909e-45;
                uStack_3d8._4_4_ = 0.0;
                uStack_b3 = 0;
                uStack_b4 = 0;
                pdb_140ae5180(uVar46,&uStack_3d8,&UNK_143060d20);
                goto code_r0x000140bab370;
              }
              uVar41 = (ushort)(uVar45 - 1) & (ushort)uVar45;
              uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar41);
            }
            auVar62[0] = -(auVar54[0] == -1);
            auVar62[1] = -(auVar54[1] == -1);
            auVar62[2] = -(auVar54[2] == -1);
            auVar62[3] = -(auVar54[3] == -1);
            auVar62[4] = -(auVar54[4] == -1);
            auVar62[5] = -(auVar54[5] == -1);
            auVar62[6] = -(auVar54[6] == -1);
            auVar62[7] = -(auVar54[7] == -1);
            auVar62[8] = -(auVar54[8] == -1);
            auVar62[9] = -(auVar54[9] == -1);
            auVar62[10] = -(auVar54[10] == -1);
            auVar62[0xb] = -(auVar54[0xb] == -1);
            auVar62[0xc] = -(auVar54[0xc] == -1);
            auVar62[0xd] = -(auVar54[0xd] == -1);
            auVar62[0xe] = -(auVar54[0xe] == -1);
            auVar62[0xf] = -(auVar54[0xf] == -1);
            if ((((((((((((((((SUB161(auVar62 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar62 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar62 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar62 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar62 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar62 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar62 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar62 >> 0x3f,0) & 1) != 0) || (SUB161(auVar62 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar62 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar62 >> 0x57,0) & 1) != 0) || (SUB161(auVar62 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar62 >> 0x67,0) & 1) != 0) || (SUB161(auVar62 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar62 >> 0x77,0) & 1) != 0) || auVar62[0xf] < '\0') break;
            uVar43 = uVar43 + lVar19 + 0x10;
            lVar19 = lVar19 + 0x10;
          }
        }
      }
      goto code_r0x000140bab370;
    }
    goto LAB_140bab36d;
  case 3:
  case 10:
  case 0xb:
  case 0xc:
    goto LAB_140baa318;
  case 4:
    pcStack_120 = (code *)CONCAT44(uStack_1b4,fStack_1b8);
    puStack_f8 = puStack_1b0;
    if (DAT_143cb2d0c != '\0') {
      plVar24 = *(longlong **)(puStack_d8 + 0x5e);
      plVar6 = *(longlong **)(puStack_d8 + 8);
      fVar81 = (float)uStack_178 - fStack_1a8;
      fVar79 = uStack_178._4_4_ - fStack_1a4;
      ppauVar29 = *(undefined1 (***) [16])(puStack_d8 + 0x36);
      fVar50 = (float)uStack_170 - fStack_1a0;
      puStack_638 = (undefined8 *)CONCAT44(puStack_638._4_4_,fStack_1bc);
      uStack_3d8 = (undefined1 (**) [16])&puStack_638;
      fStack_3d0 = 4.510376;
      fStack_3cc = 1.4013e-45;
      ppauVar35 = &pauStack_508;
      puStack_e8 = puVar30;
      puStack_e0 = puVar33;
      pdb_140f60760(ppauVar35,&UNK_143060b88,&uStack_3d8);
      uStack_3d8._0_4_ = 0.0;
      uStack_3d8._4_4_ = 0.0;
      fStack_3d0 = 1.12104e-44;
      fStack_3cc = 0.0;
      fStack_3c8 = 0.0;
      fStack_3c4 = 0.0;
      uStack_3c0._0_4_ = 1.4013e-45;
      uStack_3b8 = 0;
      uStack_3a8 = 2;
      uStack_390 = 3;
      uStack_378 = CONCAT44(uStack_378._4_4_,3);
      uStack_360 = uStack_360 & 0xffffffffffffff00;
      uStack_350 = CONCAT71(uStack_350._1_7_,5);
      uStack_350 = CONCAT44(SQRT(fVar50 * fVar50 + fVar79 * fVar79 + fVar81 * fVar81),
                            (undefined4)uStack_350);
      uStack_330 = 0x101;
      lVar37 = pdb_1409008d0(puStack_e8,ppauVar35,&uStack_3d8);
      if ((*(char *)(lVar37 + 0x18) == '\0') ||
         (*(undefined1 (***) [16])(lVar37 + 0x38) != ppauVar35)) {
        uStack_c8 = (byte *)((ulonglong)uStack_c8._4_4_ << 0x20);
      }
      else {
        uStack_c8 = (byte *)CONCAT44(uStack_c8._4_4_,
                                     (int)CONCAT71((int7)((ulonglong)lVar37 >> 8),
                                                   *(int *)(lVar37 + 0x28) != 2));
      }
      uStack_3d8._0_4_ = fStack_1bc;
      ppauStack_d0 = ppauVar35;
      lVar20 = pdb_140c41030(ppauVar29,pcStack_120,puStack_f8);
      if ((lVar20 != 0) && (*(longlong *)(lVar20 + 0x48) != 0)) {
        puStack_f0 = puStack_d8 + 0x26;
        uVar34 = pdb_1400aede0(lVar20 + 0x50,&uStack_3d8);
        puVar33 = puStack_f8;
        lVar23 = *(longlong *)(lVar20 + 0x30);
        bVar49 = (byte)(uVar34 >> 0x39);
        auVar53 = ZEXT216(CONCAT11(bVar49,bVar49));
        auVar53 = pshuflw(auVar53,auVar53,0);
        lVar19 = 0;
        while( true ) {
          uVar34 = uVar34 & *(ulonglong *)(lVar20 + 0x38);
          auVar54 = *(undefined1 (*) [16])(lVar23 + uVar34);
          auVar70[0] = -(auVar54[0] == auVar53[0]);
          auVar70[1] = -(auVar54[1] == auVar53[1]);
          auVar70[2] = -(auVar54[2] == auVar53[2]);
          auVar70[3] = -(auVar54[3] == auVar53[3]);
          auVar70[4] = -(auVar54[4] == auVar53[4]);
          auVar70[5] = -(auVar54[5] == auVar53[5]);
          auVar70[6] = -(auVar54[6] == auVar53[6]);
          auVar70[7] = -(auVar54[7] == auVar53[7]);
          auVar70[8] = -(auVar54[8] == auVar53[0]);
          auVar70[9] = -(auVar54[9] == auVar53[1]);
          auVar70[10] = -(auVar54[10] == auVar53[2]);
          auVar70[0xb] = -(auVar54[0xb] == auVar53[3]);
          auVar70[0xc] = -(auVar54[0xc] == auVar53[4]);
          auVar70[0xd] = -(auVar54[0xd] == auVar53[5]);
          auVar70[0xe] = -(auVar54[0xe] == auVar53[6]);
          auVar70[0xf] = -(auVar54[0xf] == auVar53[7]);
          uVar41 = (ushort)(SUB161(auVar70 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar70[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar41;
          while (uVar41 != 0) {
            uVar47 = 0;
            for (uVar9 = uVar45; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar47 = uVar47 + 1;
            }
            lVar42 = (uVar47 + uVar34 & *(ulonglong *)(lVar20 + 0x38)) * -0x68;
            ppauStack_118 = ppauVar29;
            if (fStack_1bc == *(float *)(lVar23 + -0x68 + lVar42)) {
              lVar23 = lVar23 + lVar42;
              bVar49 = *(byte *)(lVar23 + -0x2e);
              puVar30 = (undefined8 *)0x0;
              uVar34 = 0;
              if (1 < (ulonglong)bVar49) {
                uVar34 = (ulonglong)bVar49 - 1;
              }
              if (1 < uVar34) goto code_r0x000140bab638;
              if (pcStack_120 != (code *)0x0) goto code_r0x000140bad7ae;
              if (1 < bVar49) goto code_r0x000140bab636;
              uStack_3d8._0_4_ = SUB84(puStack_f8,0);
              uStack_3d8._4_4_ = (float)((ulonglong)puStack_f8 >> 0x20);
              if (plVar6[3] == 0) goto code_r0x000140bab636;
              uVar25 = pdb_1400af0a0(plVar6 + 4,&uStack_3d8);
              lVar20 = *plVar6;
              uVar43 = plVar6[1];
              bVar49 = (byte)(uVar25 >> 0x39);
              auVar53 = ZEXT216(CONCAT11(bVar49,bVar49));
              auVar53 = pshuflw(auVar53,auVar53,0);
              lVar19 = 0;
              goto code_r0x000140bab1c9;
            }
            uVar41 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar41);
          }
          auVar60[0] = -(auVar54[0] == -1);
          auVar60[1] = -(auVar54[1] == -1);
          auVar60[2] = -(auVar54[2] == -1);
          auVar60[3] = -(auVar54[3] == -1);
          auVar60[4] = -(auVar54[4] == -1);
          auVar60[5] = -(auVar54[5] == -1);
          auVar60[6] = -(auVar54[6] == -1);
          auVar60[7] = -(auVar54[7] == -1);
          auVar60[8] = -(auVar54[8] == -1);
          auVar60[9] = -(auVar54[9] == -1);
          auVar60[10] = -(auVar54[10] == -1);
          auVar60[0xb] = -(auVar54[0xb] == -1);
          auVar60[0xc] = -(auVar54[0xc] == -1);
          auVar60[0xd] = -(auVar54[0xd] == -1);
          auVar60[0xe] = -(auVar54[0xe] == -1);
          auVar60[0xf] = -(auVar54[0xf] == -1);
          if ((((((((((((((((SUB161(auVar60 >> 7,0) & 1) != 0 || (SUB161(auVar60 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar60 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar60 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar60 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar60 >> 0x2f,0) & 1) != 0) || (SUB161(auVar60 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar60 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar60 >> 0x47,0) & 1) != 0) || (SUB161(auVar60 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar60 >> 0x57,0) & 1) != 0) || (SUB161(auVar60 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar60 >> 0x67,0) & 1) != 0) || (SUB161(auVar60 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar60 >> 0x77,0) & 1) != 0) || auVar60[0xf] < '\0') break;
          uVar34 = uVar34 + lVar19 + 0x10;
          lVar19 = lVar19 + 0x10;
        }
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143060be0);
    }
    uStack_130 = CONCAT44(uStack_130._4_4_,1);
    puStack_128 = puStack_1b0;
    puStack_100 = (undefined8 *)(ulonglong)(uint)fStack_1bc;
    break;
  case 5:
    fVar78 = fStack_1bc;
    goto joined_r0x000140baa385;
  case 0xd:
    puVar16 = (undefined8 *)(ulonglong)(uint)fStack_1bc;
    fVar78 = fStack_1b8;
joined_r0x000140baa385:
    if (DAT_143cb2d0c == '\x01') {
      fStack_bc = fStack_1bc;
      fStack_138 = fStack_1bc;
      pauStack_508 = (undefined1 (*) [16])&fStack_138;
      uStack_500 = pdb_140bb1f00;
      fStack_134 = fVar78;
      pdb_140f60760(&uStack_3d8,&UNK_143060df8,&pauStack_508);
      pauStack_508 = (undefined1 (*) [16])CONCAT44(uStack_3d8._4_4_,(float)uStack_3d8);
      uStack_500 = (code *)CONCAT44(fStack_3cc,fStack_3d0);
      uStack_4f8 = CONCAT44(fStack_3c4,fStack_3c8);
      uStack_3d8._0_4_ = 0.0;
      uStack_3d8._4_4_ = 0.0;
      fStack_3d0 = 1.12104e-44;
      fStack_3cc = 0.0;
      fStack_3c8 = 0.0;
      fStack_3c4 = 0.0;
      uStack_3c0._0_4_ = 1.4013e-45;
      uStack_3b8 = 0;
      uStack_3a8 = 2;
      uStack_390 = 3;
      uStack_378 = CONCAT44(uStack_378._4_4_,3);
      uStack_360 = uStack_360 & 0xffffffffffffff00;
      uStack_350 = CONCAT71(uStack_350._1_7_,5);
      uStack_350 = CONCAT44(SQRT(((float)uStack_170 - fStack_1a0) * ((float)uStack_170 - fStack_1a0)
                                 + (uStack_178._4_4_ - fStack_1a4) * (uStack_178._4_4_ - fStack_1a4)
                                   + ((float)uStack_178 - fStack_1a8) *
                                     ((float)uStack_178 - fStack_1a8)),(undefined4)uStack_350);
      uStack_330 = 0x101;
      ppauVar35 = &pauStack_508;
      puStack_108 = (undefined8 *)pdb_1409008d0(puVar30,ppauVar35,&uStack_3d8);
      if ((*(char *)(puStack_108 + 3) == '\0') ||
         ((undefined1 (**) [16])puStack_108[7] != ppauVar35)) {
        uVar15 = 0;
      }
      else {
        uVar15 = (undefined4)
                 CONCAT71((int7)((ulonglong)puStack_108 >> 8),*(int *)(puStack_108 + 5) != 2);
      }
      uStack_c8 = (byte *)CONCAT44(uStack_c8._4_4_,uVar15);
      ppauStack_118 = ppauVar35;
      puStack_e0 = puVar33;
      if (fStack_138 == fStack_134) {
        lVar37 = *(longlong *)(puStack_d8 + 0x66);
        uStack_3d8._0_4_ = fStack_bc;
        ppauVar29 = *(undefined1 (***) [16])(lVar37 + 0x38);
        if (ppauVar29 != (undefined1 (**) [16])0x0) {
          if (ppauVar29 == (undefined1 (**) [16])0x1) {
            lVar20 = *(longlong *)(lVar37 + 0x30);
            if (fStack_bc == *(float *)(lVar20 + 0x20)) {
              ppauVar35 = (undefined1 (**) [16])0x0;
code_r0x000140baba1e:
              lVar20 = *(longlong *)(lVar20 + 0x10 + (longlong)ppauVar35 * 0x28);
              lVar23 = lVar20 << 3;
              lVar20 = (ulonglong)(lVar20 != 0) * 8;
              ppauVar35 = (undefined1 (**) [16])
                          CONCAT71((int7)((ulonglong)ppauVar35 >> 8),lVar20 == lVar23);
              if (lVar20 + 8 == lVar23 && lVar20 != lVar23) {
                plVar24 = *(longlong **)(puStack_d8 + 0x5e);
                uStack_3d8._0_4_ = fStack_bc;
                if (plVar24[3] == 0) {
                  return;
                }
                uVar34 = pdb_1400aede0(plVar24 + 4,&uStack_3d8);
                fVar79 = fStack_bc;
                bVar49 = (byte)(uVar34 >> 0x39);
                auVar53 = ZEXT216(CONCAT11(bVar49,bVar49));
                auVar53 = pshuflw(auVar53,auVar53,0);
                lVar20 = 0;
                while( true ) {
                  uVar34 = uVar34 & plVar24[1];
                  auVar54 = *(undefined1 (*) [16])(*plVar24 + uVar34);
                  auVar75[0] = -(auVar54[0] == auVar53[0]);
                  auVar75[1] = -(auVar54[1] == auVar53[1]);
                  auVar75[2] = -(auVar54[2] == auVar53[2]);
                  auVar75[3] = -(auVar54[3] == auVar53[3]);
                  auVar75[4] = -(auVar54[4] == auVar53[4]);
                  auVar75[5] = -(auVar54[5] == auVar53[5]);
                  auVar75[6] = -(auVar54[6] == auVar53[6]);
                  auVar75[7] = -(auVar54[7] == auVar53[7]);
                  auVar75[8] = -(auVar54[8] == auVar53[0]);
                  auVar75[9] = -(auVar54[9] == auVar53[1]);
                  auVar75[10] = -(auVar54[10] == auVar53[2]);
                  auVar75[0xb] = -(auVar54[0xb] == auVar53[3]);
                  auVar75[0xc] = -(auVar54[0xc] == auVar53[4]);
                  auVar75[0xd] = -(auVar54[0xd] == auVar53[5]);
                  auVar75[0xe] = -(auVar54[0xe] == auVar53[6]);
                  auVar75[0xf] = -(auVar54[0xf] == auVar53[7]);
                  uVar41 = (ushort)(SUB161(auVar75 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar75 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar75 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar75 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar75 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar75 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar75 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar75 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar75 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar75 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar75 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar75 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar75 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar75 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar75 >> 0x77,0) & 1) << 0xe |
                           (ushort)(auVar75[0xf] >> 7) << 0xf;
                  uVar45 = (uint)uVar41;
                  if (uVar41 != 0) break;
code_r0x000140babafa:
                  auVar65[0] = -(auVar54[0] == -1);
                  auVar65[1] = -(auVar54[1] == -1);
                  auVar65[2] = -(auVar54[2] == -1);
                  auVar65[3] = -(auVar54[3] == -1);
                  auVar65[4] = -(auVar54[4] == -1);
                  auVar65[5] = -(auVar54[5] == -1);
                  auVar65[6] = -(auVar54[6] == -1);
                  auVar65[7] = -(auVar54[7] == -1);
                  auVar65[8] = -(auVar54[8] == -1);
                  auVar65[9] = -(auVar54[9] == -1);
                  auVar65[10] = -(auVar54[10] == -1);
                  auVar65[0xb] = -(auVar54[0xb] == -1);
                  auVar65[0xc] = -(auVar54[0xc] == -1);
                  auVar65[0xd] = -(auVar54[0xd] == -1);
                  auVar65[0xe] = -(auVar54[0xe] == -1);
                  auVar65[0xf] = -(auVar54[0xf] == -1);
                  if ((((((((((((((((SUB161(auVar65 >> 7,0) & 1) != 0 ||
                                   (SUB161(auVar65 >> 0xf,0) & 1) != 0) ||
                                  (SUB161(auVar65 >> 0x17,0) & 1) != 0) ||
                                 (SUB161(auVar65 >> 0x1f,0) & 1) != 0) ||
                                (SUB161(auVar65 >> 0x27,0) & 1) != 0) ||
                               (SUB161(auVar65 >> 0x2f,0) & 1) != 0) ||
                              (SUB161(auVar65 >> 0x37,0) & 1) != 0) ||
                             (SUB161(auVar65 >> 0x3f,0) & 1) != 0) ||
                            (SUB161(auVar65 >> 0x47,0) & 1) != 0) ||
                           (SUB161(auVar65 >> 0x4f,0) & 1) != 0) ||
                          (SUB161(auVar65 >> 0x57,0) & 1) != 0) ||
                         (SUB161(auVar65 >> 0x5f,0) & 1) != 0) ||
                        (SUB161(auVar65 >> 0x67,0) & 1) != 0) ||
                       (SUB161(auVar65 >> 0x6f,0) & 1) != 0) || (SUB161(auVar65 >> 0x77,0) & 1) != 0
                      ) || auVar65[0xf] < '\0') {
                    return;
                  }
                  uVar34 = uVar34 + lVar20 + 0x10;
                  lVar20 = lVar20 + 0x10;
                }
code_r0x000140babace:
                uVar47 = 0;
                for (uVar9 = uVar45; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                  uVar47 = uVar47 + 1;
                }
                lVar23 = *plVar24 + (uVar47 + uVar34 & plVar24[1]) * -0x40;
                if (fStack_bc != *(float *)(lVar23 + -0x40)) goto code_r0x000140babaed;
                uStack_400 = *(undefined8 *)(lVar23 + -0x20);
                uStack_3f8 = *(undefined4 *)(lVar23 + -0x18);
                uStack_3c0._4_4_ = *(float *)(lVar23 + -0x18);
                fStack_3c4 = (float)*(undefined8 *)(lVar23 + -0x20);
                uStack_3c0._0_4_ = (float)((ulonglong)*(undefined8 *)(lVar23 + -0x20) >> 0x20);
                uStack_3d8._0_4_ = 1.4013e-45;
                fStack_3c8 = 0.3;
                uStack_3b8 = CONCAT35(uStack_3b8._5_3_,0x13f800000);
                pdb_140ab07b0(&uStack_3d8,uStack_148);
                pfVar31 = (float *)(ulonglong)(uint)fVar79;
                pfVar27 = (float *)pdb_140a62aa0(lVar37 + 0x28);
                if (pfVar27 != pfVar31) {
                  ppauStack_d0 = (undefined1 (**) [16])(puStack_f0 + 8);
                  do {
                    fVar79 = *pfVar27;
                    fVar50 = fVar79;
                    if ((uint)fStack_bc >= (uint)fVar79 && fStack_bc != fVar79) {
                      fVar50 = fStack_bc;
                    }
                    if ((uint)fStack_bc < (uint)fVar79) {
                      fVar79 = fStack_bc;
                    }
                    *puStack_158 = puStack_150._0_4_;
                    lVar20 = *(longlong *)(puStack_f0 + 0xc);
                    uVar46 = *(undefined8 *)(puStack_f0 + 0x10);
                    if (lVar20 == *(longlong *)(puStack_f0 + 8)) {
                      pdb_142d7e830(ppauStack_d0);
                    }
                    pfVar27 = pfVar27 + 2;
                    lVar23 = *(longlong *)(puStack_f0 + 10);
                    *(undefined8 *)(lVar23 + lVar20 * 0x18) = uVar46;
                    *(float *)(lVar23 + 8 + lVar20 * 0x18) = fVar79;
                    *(float *)(lVar23 + 0xc + lVar20 * 0x18) = fVar50;
                    *(undefined2 *)(lVar23 + 0x10 + lVar20 * 0x18) = 2;
                    *(longlong *)(puStack_f0 + 0xc) = lVar20 + 1;
                    *(longlong *)(puStack_f0 + 0x10) = *(longlong *)(puStack_f0 + 0x10) + 1;
                  } while (pfVar27 != pfVar31);
                }
                bVar48 = (byte)uStack_c8;
                puVar33 = puStack_e0;
                if (((*(char *)(puStack_108 + 3) == '\x02') &&
                    (uStack_3c0 = CONCAT44(uStack_3c0._4_4_,(float)uStack_3c0),
                    (undefined1 (**) [16])puStack_108[7] == ppauStack_118)) &&
                   (uStack_3c0 = CONCAT44(uStack_3c0._4_4_,(float)uStack_3c0),
                   *(char *)((longlong)puStack_108 + 0x19) == '\x01')) {
                  puVar32 = (uint *)(ulonglong)(uint)fStack_bc;
                  puVar28 = (uint *)pdb_140a62aa0(lVar37 + 0x28);
                  puVar40 = puStack_d8;
                  if (puVar28 == puVar32) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_143060e60);
                  }
                  if (puVar28 + 2 == puVar32) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_143060e78);
                  }
                  uVar45 = *puVar28;
                  uVar47 = puVar28[2];
                  uVar15 = puStack_d8[0x6d];
                  puVar7 = *(undefined4 **)(puStack_d8 + 0x6a);
                  *puVar7 = uVar15;
                  pdb_140a5f3e0(lVar37,fStack_bc);
                  *puVar7 = uVar15;
                  pdb_140a61170(lVar37,uVar45,uVar47);
                  uStack_3d8._4_4_ = (float)uVar47;
                  uStack_3d8._0_4_ = (float)uVar45;
                  if (uVar47 < uVar45) {
                    uStack_3d8._4_4_ = (float)uVar45;
                    uStack_3d8._0_4_ = (float)uVar47;
                  }
                  fStack_3d0 = fStack_bc;
                  pdb_141b751b0(&uStack_698,&uStack_3d8,&UNK_143060e90);
                  uVar34 = (ulonglong)(uint)fStack_bc;
                  uVar46 = pdb_140c3d2c0(*(undefined8 *)(puVar40 + 0x36));
                  fStack_3c8 = fStack_bc;
                  uStack_3d8._0_4_ = (float)uVar46;
                  uStack_3d8._4_4_ = (float)((ulonglong)uVar46 >> 0x20);
                  fStack_3d0 = (float)uVar34;
                  fStack_3cc = (float)(uVar34 >> 0x20);
                  fStack_3c4 = (float)uStack_400;
                  uStack_3c0._0_4_ = (float)((ulonglong)uStack_400 >> 0x20);
                  uStack_3c0._4_4_ = (float)uStack_3f8;
                  pdb_141b75000(puVar40 + 0x8e,&uStack_3d8,&UNK_143060ea8);
                  puVar33 = puStack_e0;
                  uStack_3c0 = CONCAT44(uStack_3c0._4_4_,(float)uStack_3c0);
                }
                goto code_r0x000140bab370;
              }
            }
          }
          else {
            ppauVar35 = (undefined1 (**) [16])pdb_1400aede0(lVar37 + 0x60,&uStack_3d8);
            uVar34 = pdb_1417c7820(lVar37 + 0x28,ppauVar35,&uStack_3d8);
            if ((uVar34 & 1) != 0) {
              if (ppauVar29 <= ppauVar35) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(ppauVar35,ppauVar29,&UNK_143022aa0);
              }
              lVar20 = *(longlong *)(lVar37 + 0x30);
              if (lVar20 != 0) goto code_r0x000140baba1e;
            }
          }
        }
      }
      plVar24 = (longlong *)pdb_140f3bda0();
      if ((char)plVar24[2] == '\x01') {
        lStack_4e8 = *plVar24;
        ppauVar35 = (undefined1 (**) [16])plVar24[1];
      }
      else {
        lStack_4e8 = pdb_140f4fd10();
        *plVar24 = lStack_4e8;
        plVar24[1] = (longlong)ppauVar35;
        *(undefined1 *)(plVar24 + 2) = 1;
      }
      fVar79 = fStack_bc;
      puVar40 = puStack_f0;
      *plVar24 = lStack_4e8 + 1;
      uStack_4f8 = _DAT_1430610c0;
      ppauStack_4f0 = _UNK_1430610c8;
      pauStack_508 = _DAT_1430610b0;
      uStack_500 = _UNK_1430610b8;
      ppauStack_4e0 = ppauVar35;
      if (fStack_138 != fStack_134) {
        pdb_14007ee60();
        ppauVar35 = (undefined1 (**) [16])pub_1406abab0(8,4);
        if (ppauVar35 == (undefined1 (**) [16])0x0) {
          uStack_b5 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(4,8);
        }
        *(float *)ppauVar35 = fStack_bc;
        *(float *)((longlong)ppauVar35 + 4) = fVar78;
        puStack_f8 = (undefined8 *)0x1;
        puStack_e8 = (undefined8 *)0x1;
        goto code_r0x000140babd54;
      }
      uStack_b5 = 1;
      pdb_1403b0de0(&pauStack_508);
      puStack_638 = (undefined8 *)0x0;
      uStack_630 = (code *)0x4;
      puStack_628 = (undefined8 *)0x0;
      lVar20 = *(longlong *)(puStack_d8 + 0x66);
      uStack_3d8._0_4_ = fVar79;
      uVar34 = *(ulonglong *)(lVar20 + 0x38);
      lVar37 = 4;
      if (uVar34 == 0) {
code_r0x000140babc96:
        lVar23 = 4;
      }
      else if (uVar34 == 1) {
        lVar19 = *(longlong *)(lVar20 + 0x30);
        lVar23 = 4;
        if (fStack_bc == *(float *)(lVar19 + 0x20)) {
          uVar43 = 0;
code_r0x000140babc82:
          lVar23 = *(longlong *)(lVar19 + 8 + uVar43 * 0x28);
          lVar37 = lVar23 + *(longlong *)(lVar19 + 0x10 + uVar43 * 0x28) * 8;
        }
      }
      else {
        uVar43 = pdb_1400aede0(lVar20 + 0x60,&uStack_3d8);
        uVar25 = pdb_1417c7820(lVar20 + 0x28,uVar43,&uStack_3d8);
        if ((uVar25 & 1) == 0) goto code_r0x000140babc96;
        if (uVar34 <= uVar43) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar43,uVar34,&UNK_143022aa0);
        }
        lVar19 = *(longlong *)(lVar20 + 0x30);
        lVar23 = 4;
        if (lVar19 != 0) goto code_r0x000140babc82;
      }
      uStack_3d8 = (undefined1 (**) [16])(lVar20 + 0x70);
      fStack_3d0 = (float)lVar23;
      fStack_3cc = (float)((ulonglong)lVar23 >> 0x20);
      fStack_3c8 = (float)lVar37;
      fStack_3c4 = (float)((ulonglong)lVar37 >> 0x20);
      uStack_3c0._0_4_ = fStack_bc;
      while( true ) {
        pdb_140a593d0(&uStack_198);
        puVar33 = puStack_628;
        if (lStack_190 == 0) break;
        uVar45 = uStack_198._4_4_;
        if ((uint)uStack_198 >= uStack_198._4_4_ && (uint)uStack_198 != uStack_198._4_4_) {
          uVar45 = (uint)uStack_198;
        }
        uVar47 = uStack_198._4_4_;
        if ((uint)uStack_198 < uStack_198._4_4_) {
          uVar47 = (uint)uStack_198;
        }
        if (puStack_628 == puStack_638) {
          pdb_142d8d7f0(&puStack_638);
        }
        *(uint *)((longlong)uStack_630 + puVar33 * 8) = uVar47;
        *(uint *)((longlong)uStack_630 + ((longlong)puVar33 * 2 + 1) * 4) = uVar45;
        puStack_628 = (undefined8 *)((longlong)puVar33 + 1);
      }
      puStack_e8 = puStack_638;
      puStack_f8 = puStack_628;
      ppauVar35 = (undefined1 (**) [16])uStack_630;
      puVar40 = puStack_f0;
code_r0x000140babd54:
      ppauVar29 = ppauVar35 + (longlong)puStack_f8;
      ppauStack_d0 = ppauVar35;
      for (; ppauVar35 != ppauVar29; ppauVar35 = ppauVar35 + 1) {
        iVar77 = *(int *)ppauVar35;
        iVar3 = *(int *)((longlong)ppauVar35 + 4);
        *puStack_158 = puStack_150._0_4_;
        lVar37 = *(longlong *)(puStack_f0 + 0xc);
        uVar46 = *(undefined8 *)(puStack_f0 + 0x10);
        if (lVar37 == *(longlong *)(puStack_f0 + 8)) {
          uStack_b1 = 1;
          uStack_b2 = 1;
          pdb_142d7e830(puVar40 + 8);
        }
        lVar20 = *(longlong *)(puStack_f0 + 10);
        *(undefined8 *)(lVar20 + lVar37 * 0x18) = uVar46;
        *(int *)(lVar20 + 8 + lVar37 * 0x18) = iVar77;
        *(int *)(lVar20 + 0xc + lVar37 * 0x18) = iVar3;
        *(undefined2 *)(lVar20 + 0x10 + lVar37 * 0x18) = 1;
        *(longlong *)(puStack_f0 + 0xc) = lVar37 + 1;
        *(longlong *)(puStack_f0 + 0x10) = *(longlong *)(puStack_f0 + 0x10) + 1;
        *puStack_158 = puStack_150._0_4_;
        lVar37 = *(longlong *)(puStack_f0 + 0xc);
        uVar46 = *(undefined8 *)(puStack_f0 + 0x10);
        if (lVar37 == *(longlong *)(puStack_f0 + 8)) {
          uStack_b1 = 1;
          uStack_b2 = 1;
          pdb_142d7e830(puVar40 + 8);
        }
        lVar20 = *(longlong *)(puStack_f0 + 10);
        *(undefined8 *)(lVar20 + lVar37 * 0x18) = uVar46;
        *(int *)(lVar20 + 8 + lVar37 * 0x18) = iVar77;
        *(int *)(lVar20 + 0xc + lVar37 * 0x18) = iVar3;
        *(undefined2 *)(lVar20 + 0x10 + lVar37 * 0x18) = 3;
        *(longlong *)(puStack_f0 + 0xc) = lVar37 + 1;
        *(longlong *)(puStack_f0 + 0x10) = *(longlong *)(puStack_f0 + 0x10) + 1;
      }
      lVar37 = *(longlong *)(puStack_d8 + 0x66);
      ppauVar35 = ppauStack_d0;
      lVar20 = (longlong)uStack_3d8;
code_r0x000140babe80:
      do {
        uStack_3d8._4_4_ = (float)((ulonglong)lVar20 >> 0x20);
        if (ppauVar35 == ppauVar29) goto code_r0x000140bac02c;
        uStack_3d8._0_4_ = *(float *)ppauVar35;
        uVar34 = *(ulonglong *)(lVar37 + 0x38);
        if (uVar34 != 0) {
          if (uVar34 == 1) {
            lVar20 = *(longlong *)(lVar37 + 0x30);
            if ((float)uStack_3d8 == (float)*(int *)(lVar20 + 0x20)) {
              uVar43 = 0;
code_r0x000140babf0e:
              lVar20 = *(longlong *)(lVar20 + 0x10 + uVar43 * 0x28);
              if ((lVar20 != 0) && (lVar20 * 8 - 8U < 8)) {
                uStack_b1 = 1;
                uStack_b2 = 1;
                pdb_1403b0de0(&pauStack_508);
              }
            }
          }
          else {
            uStack_b1 = 1;
            uStack_b2 = 1;
            uVar43 = pdb_1400aede0(lVar37 + 0x60,&uStack_3d8);
            uStack_b1 = 1;
            uStack_b2 = 1;
            uVar25 = pdb_1417c7820(lVar37 + 0x28,uVar43,&uStack_3d8);
            if ((uVar25 & 1) != 0) {
              if (uVar34 <= uVar43) {
                uStack_b1 = 1;
                uStack_b2 = 1;
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar43,uVar34,&UNK_143022aa0);
              }
              lVar20 = *(longlong *)(lVar37 + 0x30);
              if (lVar20 != 0) goto code_r0x000140babf0e;
            }
          }
        }
        uStack_3d8._0_4_ = *(float *)((longlong)ppauVar35 + 4);
        ppauVar35 = ppauVar35 + 1;
        uVar34 = *(ulonglong *)(lVar37 + 0x38);
        lVar20 = CONCAT44(uStack_3d8._4_4_,(float)uStack_3d8);
        if (uVar34 != 0) {
          if (uVar34 == 1) {
            lVar23 = *(longlong *)(lVar37 + 0x30);
            lVar20 = CONCAT44(uStack_3d8._4_4_,(float)uStack_3d8);
            if ((float)uStack_3d8 != (float)*(int *)(lVar23 + 0x20)) goto code_r0x000140babe80;
            uVar43 = 0;
          }
          else {
            uStack_b1 = 1;
            uStack_b2 = 1;
            uVar43 = pdb_1400aede0(lVar37 + 0x60,&uStack_3d8);
            uStack_b1 = 1;
            uStack_b2 = 1;
            uVar25 = pdb_1417c7820(lVar37 + 0x28,uVar43,&uStack_3d8);
            lVar20 = CONCAT44(uStack_3d8._4_4_,(float)uStack_3d8);
            if ((uVar25 & 1) == 0) goto code_r0x000140babe80;
            if (uVar34 <= uVar43) {
              uStack_b1 = 1;
              uStack_b2 = 1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar43,uVar34,&UNK_143022aa0);
            }
            lVar23 = *(longlong *)(lVar37 + 0x30);
            lVar20 = CONCAT44(uStack_3d8._4_4_,(float)uStack_3d8);
            if (lVar23 == 0) goto code_r0x000140babe80;
          }
          lVar23 = *(longlong *)(lVar23 + 0x10 + uVar43 * 0x28);
          lVar20 = CONCAT44(uStack_3d8._4_4_,(float)uStack_3d8);
          if ((lVar23 != 0) &&
             (lVar20 = CONCAT44(uStack_3d8._4_4_,(float)uStack_3d8), lVar23 * 8 - 8U < 8)) {
            uStack_b1 = 1;
            uStack_b2 = 1;
            pdb_1403b0de0(&pauStack_508);
            lVar20 = CONCAT44(uStack_3d8._4_4_,(float)uStack_3d8);
          }
        }
      } while( true );
    }
    fStack_bc = fStack_1bc;
    uStack_130 = CONCAT44(uStack_130._4_4_,3);
    puStack_128 = puVar16;
    puStack_100 = (undefined8 *)(ulonglong)(uint)fVar78;
    break;
  case 0xe:
    if (DAT_143cb2d0c != '\0') {
      fStack_1d0 = fStack_1bc;
      fStack_1cc = fStack_1b8;
      plVar24 = (longlong *)*plStack_140;
      puStack_e8 = puVar30;
      if (plVar24[3] != 0) {
        uVar34 = pdb_1400af680(plVar24 + 4,&fStack_1d0);
        bVar49 = (byte)(uVar34 >> 0x39);
        auVar53 = ZEXT216(CONCAT11(bVar49,bVar49));
        auVar53 = pshuflw(auVar53,auVar53,0);
        lVar37 = 0;
        while( true ) {
          uVar34 = uVar34 & plVar24[1];
          pcVar2 = (char *)(*plVar24 + uVar34);
          auVar54[0] = -(*pcVar2 == auVar53[0]);
          auVar54[1] = -(pcVar2[1] == auVar53[1]);
          auVar54[2] = -(pcVar2[2] == auVar53[2]);
          auVar54[3] = -(pcVar2[3] == auVar53[3]);
          auVar54[4] = -(pcVar2[4] == auVar53[4]);
          auVar54[5] = -(pcVar2[5] == auVar53[5]);
          auVar54[6] = -(pcVar2[6] == auVar53[6]);
          auVar54[7] = -(pcVar2[7] == auVar53[7]);
          auVar54[8] = -(pcVar2[8] == auVar53[0]);
          auVar54[9] = -(pcVar2[9] == auVar53[1]);
          auVar54[10] = -(pcVar2[10] == auVar53[2]);
          auVar54[0xb] = -(pcVar2[0xb] == auVar53[3]);
          auVar54[0xc] = -(pcVar2[0xc] == auVar53[4]);
          auVar54[0xd] = -(pcVar2[0xd] == auVar53[5]);
          auVar54[0xe] = -(pcVar2[0xe] == auVar53[6]);
          auVar54[0xf] = -(pcVar2[0xf] == auVar53[7]);
          uVar41 = (ushort)(SUB161(auVar54 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
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
                   (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar54[0xf] >> 7) << 0xf;
          uVar45 = (uint)uVar41;
          while (uVar41 != 0) {
            uVar47 = 0;
            for (uVar9 = uVar45; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar47 = uVar47 + 1;
            }
            uVar43 = uVar47 + uVar34 & plVar24[1];
            uVar46 = *(undefined8 *)(*plVar24 + uVar43 * -8 + -8);
            auVar76._0_4_ = -(uint)((float)uVar46 == fStack_1d0);
            iVar77 = -(uint)((float)((ulonglong)uVar46 >> 0x20) == fStack_1cc);
            auVar76._4_4_ = auVar76._0_4_;
            auVar76._8_4_ = iVar77;
            auVar76._12_4_ = iVar77;
            iVar77 = movmskpd((int)uVar43 * 8,auVar76);
            if (iVar77 == 3) goto LAB_140bab36d;
            uVar41 = (ushort)(uVar45 - 1) & (ushort)uVar45;
            uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar41);
          }
          auVar69[0] = -(*pcVar2 == -1);
          auVar69[1] = -(pcVar2[1] == -1);
          auVar69[2] = -(pcVar2[2] == -1);
          auVar69[3] = -(pcVar2[3] == -1);
          auVar69[4] = -(pcVar2[4] == -1);
          auVar69[5] = -(pcVar2[5] == -1);
          auVar69[6] = -(pcVar2[6] == -1);
          auVar69[7] = -(pcVar2[7] == -1);
          auVar69[8] = -(pcVar2[8] == -1);
          auVar69[9] = -(pcVar2[9] == -1);
          auVar69[10] = -(pcVar2[10] == -1);
          auVar69[0xb] = -(pcVar2[0xb] == -1);
          auVar69[0xc] = -(pcVar2[0xc] == -1);
          auVar69[0xd] = -(pcVar2[0xd] == -1);
          auVar69[0xe] = -(pcVar2[0xe] == -1);
          auVar69[0xf] = -(pcVar2[0xf] == -1);
          if ((((((((((((((((SUB161(auVar69 >> 7,0) & 1) != 0 || (SUB161(auVar69 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar69 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar69 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar69 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar69 >> 0x2f,0) & 1) != 0) || (SUB161(auVar69 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar69 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar69 >> 0x47,0) & 1) != 0) || (SUB161(auVar69 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar69 >> 0x57,0) & 1) != 0) || (SUB161(auVar69 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar69 >> 0x67,0) & 1) != 0) || (SUB161(auVar69 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar69 >> 0x77,0) & 1) != 0) || auVar69[0xf] < '\0') break;
          uVar34 = uVar34 + lVar37 + 0x10;
          lVar37 = lVar37 + 0x10;
        }
      }
      if (abStack_1c0[0] == 0x11) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143060ec0);
      }
      uStack_3d8 = (undefined1 (**) [16])&fStack_1d0;
      fStack_3d0 = 5.847534;
      fStack_3cc = 1.4013e-45;
      ppauVar35 = &pauStack_508;
      pdb_140f60760(ppauVar35,&UNK_143060ed8,&uStack_3d8);
      uStack_3d8._0_4_ = 0.0;
      uStack_3d8._4_4_ = 0.0;
      fStack_3d0 = 1.12104e-44;
      fStack_3cc = 0.0;
      fStack_3c8 = 0.0;
      fStack_3c4 = 0.0;
      uStack_3c0._0_4_ = 1.4013e-45;
      uStack_3b8 = 0;
      uStack_3a8 = 2;
      uStack_390 = 3;
      uStack_378 = CONCAT44(uStack_378._4_4_,3);
      uStack_360 = uStack_360 & 0xffffffffffffff00;
      uStack_350 = CONCAT71(uStack_350._1_7_,5);
      uStack_350 = CONCAT44(SQRT(((float)uStack_170 - fStack_1a0) * ((float)uStack_170 - fStack_1a0)
                                 + (uStack_178._4_4_ - fStack_1a4) * (uStack_178._4_4_ - fStack_1a4)
                                   + ((float)uStack_178 - fStack_1a8) *
                                     ((float)uStack_178 - fStack_1a8)),(undefined4)uStack_350);
      uStack_330 = 0x101;
      lVar37 = pdb_1409008d0(puStack_e8,ppauVar35,&uStack_3d8);
      puVar40 = puStack_f0;
      if (((*(char *)(lVar37 + 0x18) != '\0') &&
          (*(undefined1 (***) [16])(lVar37 + 0x38) == ppauVar35)) && (*(int *)(lVar37 + 0x28) != 2))
      {
        *puStack_158 = puStack_150._0_4_;
        lVar20 = *(longlong *)(puStack_f0 + 0xc);
        uVar46 = *(undefined8 *)(puStack_f0 + 0x10);
        puStack_e0 = puVar33;
        if (lVar20 == *(longlong *)(puStack_f0 + 8)) {
          uStack_c8 = (byte *)lVar37;
          pdb_142d7e830(puStack_f0 + 8);
          lVar37 = (longlong)uStack_c8;
        }
        lVar23 = *(longlong *)(puVar40 + 10);
        *(undefined8 *)(lVar23 + lVar20 * 0x18) = uVar46;
        *(float *)(lVar23 + 8 + lVar20 * 0x18) = fStack_1bc;
        *(float *)(lVar23 + 0xc + lVar20 * 0x18) = fStack_1b8;
        *(undefined2 *)(lVar23 + 0x10 + lVar20 * 0x18) = 3;
        *(longlong *)(puVar40 + 0xc) = lVar20 + 1;
        *(longlong *)(puVar40 + 0x10) = *(longlong *)(puVar40 + 0x10) + 1;
        bVar48 = 1;
        bVar49 = 1;
        if (*(char *)(lVar37 + 0x18) == '\x02') {
          puVar33 = puStack_e0;
          uStack_3c0 = CONCAT44(uStack_3c0._4_4_,(float)uStack_3c0);
          if ((*(char *)(lVar37 + 0x19) == '\x01') &&
             (uStack_3c0 = CONCAT44(uStack_3c0._4_4_,(float)uStack_3c0),
             *(undefined1 (***) [16])(lVar37 + 0x38) == ppauVar35)) {
            *(undefined4 *)plStack_140[2] = *(undefined4 *)((longlong)plStack_140 + 0x1c);
            ppauStack_d0 = ppauVar35;
            uStack_c8 = (byte *)lVar37;
            pdb_1403afce0(plVar24,fStack_1bc,fStack_1b8);
            **(undefined4 **)(puStack_d8 + 0x1c) = puStack_d8[0x1f];
            uVar46 = *(undefined8 *)(puStack_d8 + 0x18);
            uStack_3d8._4_4_ = fStack_1bc;
            fStack_3d0 = fStack_1b8;
            uStack_3d8._0_4_ = 0.0;
            uVar26 = pdb_140bb1d10(&uStack_3d8);
            fStack_3d0 = (float)uVar26;
            fStack_3cc = (float)((ulonglong)uVar26 >> 0x20);
            uStack_3d8._0_4_ = 1.96182e-44;
            uStack_3d8._4_4_ = 0.0;
            pdb_140ae5180(uVar46,&uStack_3d8,&UNK_143060ef8);
            lVar37 = pdb_140c40010();
            puVar33 = puStack_e0;
            if (lVar37 == 0) {
              cVar14 = '\x1a';
              bVar13 = true;
              puVar30 = (undefined8 *)0x0;
            }
            else if (*(byte *)(lVar37 + 0x4f) < 2) {
              puVar30 = (undefined8 *)(lVar37 + 0x38);
              cVar14 = *(char *)(lVar37 + 0x4e) * '\x02' + '\x1a';
              bVar13 = false;
            }
            else {
              puVar30 = (undefined8 *)0x0;
              cVar14 = '\x1a';
              bVar13 = true;
            }
            if (((*(char *)((longlong)uStack_c8 + 0x18) == '\0') ||
                (*(undefined1 (***) [16])((longlong)uStack_c8 + 0x38) != ppauStack_d0)) ||
               (*(int *)((longlong)uStack_c8 + 0x28) == 2)) {
              uStack_500 = (code *)((ulonglong)uStack_500._4_4_ << 0x20);
              pauStack_508 = (undefined1 (*) [16])0x0;
            }
            else {
              uStack_500 = (code *)CONCAT44(uStack_500._4_4_,
                                            *(undefined4 *)((longlong)uStack_c8 + 0x54));
              pauStack_508 = *(undefined1 (**) [16])((longlong)uStack_c8 + 0x4c);
            }
            uStack_3b8 = 0;
            if (!bVar13) {
              uStack_3b8 = CONCAT44((int)*puVar30,(int)((ulonglong)*puVar30 >> 0x20));
            }
            uStack_3d8._0_4_ = (float)CONCAT31(uStack_3d8._1_3_,cVar14);
            fStack_3c4 = SUB84(pauStack_508,0);
            uStack_3c0._0_4_ = (float)((ulonglong)pauStack_508 >> 0x20);
            uStack_3c0._4_4_ = (float)(undefined4)uStack_500;
            uStack_3b0 = (byte *)((ulonglong)uStack_3b0 & 0xffffffffffffff00);
            pdb_1414aefa0(param_8,&uStack_3d8,&UNK_143060f10);
            uStack_3c0 = CONCAT44(uStack_3c0._4_4_,(float)uStack_3c0);
          }
        }
        else {
code_r0x000140bad53d:
          bVar48 = bVar49;
          puVar33 = puStack_e0;
          uStack_3c0 = CONCAT44(uStack_3c0._4_4_,(float)uStack_3c0);
        }
        goto code_r0x000140bab370;
      }
      goto LAB_140bab36d;
    }
    fStack_bc = fStack_1bc;
    uStack_130 = CONCAT44(uStack_130._4_4_,4);
    puStack_128 = (undefined8 *)(ulonglong)(uint)fStack_1b8;
    puStack_100 = (undefined8 *)(ulonglong)(uint)fStack_1b8;
  }
code_r0x000140baa45e:
  fVar78 = SQRT((fStack_1a0 - (float)uStack_170) * (fStack_1a0 - (float)uStack_170) +
                (fStack_1a4 - uStack_178._4_4_) * (fStack_1a4 - uStack_178._4_4_) +
                (fStack_1a8 - (float)uStack_178) * (fStack_1a8 - (float)uStack_178));
LAB_140baa4b4:
  lVar37 = *(longlong *)(pcStack_180 + 0x18);
  uStack_10c = uVar45;
  puStack_e8 = puVar30;
  puStack_e0 = puVar33;
  if (lVar37 != 0) {
    pauVar38 = *(undefined1 (**) [16])pcStack_180;
    auVar53 = *pauVar38;
    uVar47 = ~(uint)(ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
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
                            (ushort)(byte)(auVar53[0xf] >> 7) << 0xf);
    pauVar39 = pauVar38 + 1;
    ppauStack_118 = ppauVar35;
    do {
      if ((short)uVar47 == 0) {
        do {
          auVar53 = *pauVar39;
          pauVar38 = pauVar38 + -0x10;
          pauVar39 = pauVar39 + 1;
          uVar47 = (ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
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
                           (ushort)(byte)(auVar53[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar47 == 0);
      }
      iVar77 = 0;
      for (uVar45 = uVar47; (uVar45 & 1) == 0; uVar45 = uVar45 >> 1 | 0x80000000) {
        iVar77 = iVar77 + 1;
      }
      apuStack_528[0] =
           *(undefined8 **)((longlong)pauVar38 + (-0x10 - (ulonglong)(uint)(iVar77 << 4)));
      uVar4 = *(undefined8 *)((longlong)pauVar38 + (-8 - (ulonglong)(uint)(iVar77 << 4)));
      uVar45 = (uint)uVar4;
      pauVar17 = (undefined1 (*) [16])(ulonglong)~uVar45;
      iVar77 = (int)((ulonglong)uVar4 >> 0x20);
      if (((ppauStack_d0[2] <= pauVar17) ||
          (piVar18 = (int *)((longlong)pauVar17 * 0x18 + (longlong)ppauStack_d0[1]),
          piVar18[4] != iVar77)) || (*piVar18 == 0)) {
        lVar37 = ((ulonglong)puVar33 & 0xffffffff00000000) + 1;
LAB_140bad775:
        uStack_3d8._0_4_ = (float)lVar37;
        uStack_3d8._4_4_ = (float)((ulonglong)lVar37 >> 0x20);
        fStack_3d0 = (float)uVar45;
        fStack_3cc = (float)iVar77;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_1430610f0,0x2b,&uStack_3d8,&UNK_1430610d0,&UNK_143060f28,uVar46,uVar26);
      }
      uVar34 = *(ulonglong *)(piVar18 + 2);
      if ((ppauStack_118[7] <= (undefined1 (*) [16])(uVar34 & 0xffffffff)) ||
         ((*(ulonglong *)(*ppauStack_118[5] + (uVar34 >> 6 & 0x3ffffff) * 8) >> (uVar34 & 0x3f) & 1)
          == 0)) {
        lVar37 = uVar34 << 0x20;
        goto LAB_140bad775;
      }
      uVar34 = uVar34 >> 0x20;
      pauVar17 = ppauStack_d0[0x34];
      pauVar5 = *(undefined1 (**) [16])((longlong)pauVar17 + uVar34 * 0x48 + 0x40);
      if ((ppauStack_118[0x22] < pauVar5) &&
         (uVar43 = *(ulonglong *)
                    (*(longlong *)((longlong)pauVar17 + uVar34 * 0x48 + 0x38) +
                    (longlong)ppauStack_118[0x22] * 8), uVar43 != 0)) {
        lVar20 = *(longlong *)
                  (*(longlong *)((longlong)pauVar17 + uVar34 * 0x48 + 0x18) + 0x10 + ~uVar43 * 0x30)
        ;
      }
      else {
        lVar20 = 0;
      }
      if ((ppauStack_118[0x23] < pauVar5) &&
         (uVar43 = *(ulonglong *)
                    (*(longlong *)((longlong)pauVar17 + uVar34 * 0x48 + 0x38) +
                    (longlong)ppauStack_118[0x23] * 8), uVar43 != 0)) {
        lVar23 = *(longlong *)
                  (*(longlong *)((longlong)pauVar17 + uVar34 * 0x48 + 0x18) + 0x10 + ~uVar43 * 0x30)
        ;
      }
      else {
        lVar23 = 0;
      }
      ppauVar35 = &pauStack_508;
      uVar45 = piVar18[1];
      lVar19 = (ulonglong)~uVar45 * 0x30;
      uVar4 = *(undefined8 *)(lVar20 + 4 + lVar19);
      fVar82 = *(float *)(lVar20 + lVar19) + fVar81;
      fVar83 = (float)uVar4 + fVar12;
      fVar84 = (float)((ulonglong)uVar4 >> 0x20) + fVar56;
      pauStack_508 = (undefined1 (*) [16])apuStack_528;
      uStack_500 = pdb_140bb1e80;
      puStack_108 = apuStack_528[0];
      uStack_c8 = (byte *)lVar37;
      pdb_140f60760(&uStack_3d8,&UNK_143060f40);
      puStack_638 = (undefined8 *)CONCAT44(uStack_3d8._4_4_,(float)uStack_3d8);
      uStack_630 = (code *)CONCAT44(fStack_3cc,fStack_3d0);
      puStack_628 = (undefined8 *)CONCAT44(fStack_3c4,fStack_3c8);
      pdb_140f60be0(ppauVar35,&puStack_638);
      uStack_3d8._0_4_ = 0.0;
      uStack_3d8._4_4_ = 0.0;
      fStack_3d0 = 1.12104e-44;
      fStack_3cc = 0.0;
      fStack_3c8 = 0.0;
      fStack_3c4 = 0.0;
      uStack_3c0._0_4_ = 4.06377e-44;
      uStack_3a8 = 0x1e;
      uStack_390 = 0;
      uStack_378 = uStack_378 & 0xffffffff00000000;
      uStack_360 = uStack_360 & 0xffffffffffffff00;
      uStack_350 = CONCAT44(fVar79 + fVar50,(int)uStack_350) & 0xffffffffffffff00;
      uStack_348 = CONCAT44(fVar83,fVar82);
      uStack_330 = 0x101;
      fStack_340 = fVar84;
      lVar20 = pdb_1409008d0(puStack_e8,ppauVar35,&uStack_3d8);
      lVar37 = (longlong)uStack_c8;
      if ((((*(char *)(lVar20 + 0x18) != '\0') &&
           (*(undefined1 (***) [16])(lVar20 + 0x38) == ppauVar35)) && (*(int *)(lVar20 + 0x28) != 2)
          ) && (*(float *)(lVar20 + 0x48) <= fVar78 && fVar78 != *(float *)(lVar20 + 0x48))) {
        auVar51._4_4_ = fVar82;
        auVar51._0_4_ = fVar82;
        auVar51._8_4_ = fVar84;
        auVar51._12_4_ = fVar84;
        auVar11._4_8_ = auVar51._8_8_;
        auVar11._0_4_ = fVar82;
        auVar52._0_8_ = auVar11._0_8_ << 0x20;
        auVar52._8_4_ = fVar83;
        auVar52._12_4_ = fVar84;
        pcStack_120 = (code *)((ulonglong)(uint)fVar82 | auVar52._8_8_ << 0x20);
        puStack_f8 = (undefined8 *)
                     ((ulonglong)puStack_f8 & 0xffffffff00000000 | (ulonglong)(uint)fVar84);
        puStack_128 = (undefined8 *)((ulonglong)puStack_108 >> 0x20);
        uStack_130 = CONCAT44(uStack_130._4_4_,2);
        puStack_100 = puStack_108;
        ppauStack_3e0 = ppauVar35;
      }
      if (puStack_638 != (undefined8 *)0x0) {
        pub_1406abac0((byte *)uStack_630,(ulonglong)puStack_638,1);
      }
      uVar47 = uVar47 - 1 & uVar47;
      puVar33 = (undefined8 *)(lVar23 + (ulonglong)~uVar45 * 0x58);
      lVar37 = lVar37 + -1;
    } while (lVar37 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x000140baa863. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_1430612dc + *(int *)(&UNK_1430612dc + (uStack_130 & 0xffffffff) * 4)))();
  return;
code_r0x000140babaed:
  uVar41 = (ushort)(uVar45 - 1) & (ushort)uVar45;
  uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar41);
  if (uVar41 == 0) goto code_r0x000140babafa;
  goto code_r0x000140babace;
code_r0x000140bab1c9:
  uVar25 = uVar25 & uVar43;
  auVar54 = *(undefined1 (*) [16])(lVar20 + uVar25);
  auVar71[0] = -(auVar54[0] == auVar53[0]);
  auVar71[1] = -(auVar54[1] == auVar53[1]);
  auVar71[2] = -(auVar54[2] == auVar53[2]);
  auVar71[3] = -(auVar54[3] == auVar53[3]);
  auVar71[4] = -(auVar54[4] == auVar53[4]);
  auVar71[5] = -(auVar54[5] == auVar53[5]);
  auVar71[6] = -(auVar54[6] == auVar53[6]);
  auVar71[7] = -(auVar54[7] == auVar53[7]);
  auVar71[8] = -(auVar54[8] == auVar53[0]);
  auVar71[9] = -(auVar54[9] == auVar53[1]);
  auVar71[10] = -(auVar54[10] == auVar53[2]);
  auVar71[0xb] = -(auVar54[0xb] == auVar53[3]);
  auVar71[0xc] = -(auVar54[0xc] == auVar53[4]);
  auVar71[0xd] = -(auVar54[0xd] == auVar53[5]);
  auVar71[0xe] = -(auVar54[0xe] == auVar53[6]);
  auVar71[0xf] = -(auVar54[0xf] == auVar53[7]);
  uVar41 = (ushort)(SUB161(auVar71 >> 7,0) & 1) | (ushort)(SUB161(auVar71 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar71 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar71 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar71 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar71 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar71 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar71 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar71 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar71 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar71 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar71 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar71 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar71 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar71 >> 0x77,0) & 1) << 0xe | (ushort)(auVar71[0xf] >> 7) << 0xf;
  uVar45 = (uint)uVar41;
  while (uVar41 != 0) {
    uVar47 = 0;
    for (uVar9 = uVar45; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar47 = uVar47 + 1;
    }
    lVar42 = (uVar47 + uVar25 & uVar43) * -0x2b0;
    if (puVar33 == *(undefined8 **)(lVar20 + -0x2b0 + lVar42)) {
      lVar20 = lVar20 + lVar42;
      if ((*(ulonglong *)(lVar20 + -0x298) < 2) || (*(float *)(lVar20 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143060bf8);
      }
      puVar30 = (undefined8 *)CONCAT71((int7)(uVar43 >> 8),*(uint *)(lVar20 + -0x50) < 2);
      goto code_r0x000140bab638;
    }
    uVar41 = (ushort)(uVar45 - 1) & (ushort)uVar45;
    uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar41);
  }
  auVar61[0] = -(auVar54[0] == -1);
  auVar61[1] = -(auVar54[1] == -1);
  auVar61[2] = -(auVar54[2] == -1);
  auVar61[3] = -(auVar54[3] == -1);
  auVar61[4] = -(auVar54[4] == -1);
  auVar61[5] = -(auVar54[5] == -1);
  auVar61[6] = -(auVar54[6] == -1);
  auVar61[7] = -(auVar54[7] == -1);
  auVar61[8] = -(auVar54[8] == -1);
  auVar61[9] = -(auVar54[9] == -1);
  auVar61[10] = -(auVar54[10] == -1);
  auVar61[0xb] = -(auVar54[0xb] == -1);
  auVar61[0xc] = -(auVar54[0xc] == -1);
  auVar61[0xd] = -(auVar54[0xd] == -1);
  auVar61[0xe] = -(auVar54[0xe] == -1);
  auVar61[0xf] = -(auVar54[0xf] == -1);
  if ((((((((((((((((SUB161(auVar61 >> 7,0) & 1) != 0 || (SUB161(auVar61 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar61 >> 0x17,0) & 1) != 0) || (SUB161(auVar61 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar61 >> 0x27,0) & 1) != 0) || (SUB161(auVar61 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar61 >> 0x37,0) & 1) != 0) || (SUB161(auVar61 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar61 >> 0x47,0) & 1) != 0) || (SUB161(auVar61 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar61 >> 0x57,0) & 1) != 0) || (SUB161(auVar61 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar61 >> 0x67,0) & 1) != 0) || (SUB161(auVar61 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar61 >> 0x77,0) & 1) != 0) || auVar61[0xf] < '\0') {
code_r0x000140bab636:
    puVar30 = (undefined8 *)0x0;
code_r0x000140bab638:
    pbVar21 = pbStack_1c8;
    uVar36 = *(undefined1 *)(lVar23 + -7);
    pauStack_508._0_4_ = fStack_1bc;
    puStack_108 = puVar30;
    if (*(longlong *)(pbStack_1c8 + 0x18) != 0) {
      uVar25 = pdb_1400aede0(pbStack_1c8 + 0x20,&pauStack_508);
      lVar20 = *(longlong *)pbVar21;
      uVar43 = *(ulonglong *)(pbVar21 + 8);
      bVar49 = (byte)(uVar25 >> 0x39);
      auVar53 = ZEXT216(CONCAT11(bVar49,bVar49));
      auVar53 = pshuflw(auVar53,auVar53,0);
      lVar23 = 0;
      while( true ) {
        uVar25 = uVar25 & uVar43;
        auVar54 = *(undefined1 (*) [16])(lVar20 + uVar25);
        auVar73[0] = -(auVar54[0] == auVar53[0]);
        auVar73[1] = -(auVar54[1] == auVar53[1]);
        auVar73[2] = -(auVar54[2] == auVar53[2]);
        auVar73[3] = -(auVar54[3] == auVar53[3]);
        auVar73[4] = -(auVar54[4] == auVar53[4]);
        auVar73[5] = -(auVar54[5] == auVar53[5]);
        auVar73[6] = -(auVar54[6] == auVar53[6]);
        auVar73[7] = -(auVar54[7] == auVar53[7]);
        auVar73[8] = -(auVar54[8] == auVar53[0]);
        auVar73[9] = -(auVar54[9] == auVar53[1]);
        auVar73[10] = -(auVar54[10] == auVar53[2]);
        auVar73[0xb] = -(auVar54[0xb] == auVar53[3]);
        auVar73[0xc] = -(auVar54[0xc] == auVar53[4]);
        auVar73[0xd] = -(auVar54[0xd] == auVar53[5]);
        auVar73[0xe] = -(auVar54[0xe] == auVar53[6]);
        auVar73[0xf] = -(auVar54[0xf] == auVar53[7]);
        uVar41 = (ushort)(SUB161(auVar73 >> 7,0) & 1) | (ushort)(SUB161(auVar73 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar73 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar73 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar73 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar73 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar73 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar73 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar73 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar73 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar73 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar73 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar73 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar73 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar73 >> 0x77,0) & 1) << 0xe | (ushort)(auVar73[0xf] >> 7) << 0xf
        ;
        uVar45 = (uint)uVar41;
        while (uVar41 != 0) {
          uVar47 = 0;
          for (uVar9 = uVar45; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar47 = uVar47 + 1;
          }
          uVar44 = uVar47 + uVar25 & uVar43;
          if (pauStack_508._0_4_ == *(float *)(lVar20 + uVar44 * -8 + -8)) {
            uVar46 = pdb_140c44e40(apuStack_528[1],uVar36,*(undefined1 *)(lVar20 + -4 + uVar44 * -8)
                                  );
            pauStack_508 = (undefined1 (*) [16])CONCAT44(pauStack_508._4_4_,fStack_1bc);
            bVar49 = (byte)uStack_c8;
            if (plVar24[3] == 0) goto code_r0x000140bac500;
            uVar43 = pdb_1400aede0(plVar24 + 4,&pauStack_508);
            bVar48 = (byte)(uVar43 >> 0x39);
            auVar53 = ZEXT216(CONCAT11(bVar48,bVar48));
            auVar53 = pshuflw(auVar53,auVar53,0);
            lVar20 = 0;
            goto code_r0x000140bab771;
          }
          uVar41 = (ushort)(uVar45 - 1) & (ushort)uVar45;
          uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar41);
        }
        auVar63[0] = -(auVar54[0] == -1);
        auVar63[1] = -(auVar54[1] == -1);
        auVar63[2] = -(auVar54[2] == -1);
        auVar63[3] = -(auVar54[3] == -1);
        auVar63[4] = -(auVar54[4] == -1);
        auVar63[5] = -(auVar54[5] == -1);
        auVar63[6] = -(auVar54[6] == -1);
        auVar63[7] = -(auVar54[7] == -1);
        auVar63[8] = -(auVar54[8] == -1);
        auVar63[9] = -(auVar54[9] == -1);
        auVar63[10] = -(auVar54[10] == -1);
        auVar63[0xb] = -(auVar54[0xb] == -1);
        auVar63[0xc] = -(auVar54[0xc] == -1);
        auVar63[0xd] = -(auVar54[0xd] == -1);
        auVar63[0xe] = -(auVar54[0xe] == -1);
        auVar63[0xf] = -(auVar54[0xf] == -1);
        if ((((((((((((((((SUB161(auVar63 >> 7,0) & 1) != 0 || (SUB161(auVar63 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar63 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar63 >> 0x1f,0) & 1) != 0) || (SUB161(auVar63 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar63 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar63 >> 0x37,0) & 1) != 0) || (SUB161(auVar63 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar63 >> 0x47,0) & 1) != 0) || (SUB161(auVar63 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar63 >> 0x57,0) & 1) != 0) || (SUB161(auVar63 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar63 >> 0x67,0) & 1) != 0) || (SUB161(auVar63 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar63 >> 0x77,0) & 1) != 0) || auVar63[0xf] < '\0') break;
        uVar25 = uVar25 + lVar23 + 0x10;
        lVar23 = lVar23 + 0x10;
      }
    }
    uStack_3d8 = &pauStack_508;
    fStack_3d0 = 6.1397324;
    fStack_3cc = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14306d828,&uStack_3d8,&UNK_14306d858);
  }
  uVar25 = uVar25 + lVar19 + 0x10;
  lVar19 = lVar19 + 0x10;
  goto code_r0x000140bab1c9;
code_r0x000140bab771:
  uVar43 = uVar43 & plVar24[1];
  pcVar2 = (char *)(*plVar24 + uVar43);
  auVar74[0] = -(*pcVar2 == auVar53[0]);
  auVar74[1] = -(pcVar2[1] == auVar53[1]);
  auVar74[2] = -(pcVar2[2] == auVar53[2]);
  auVar74[3] = -(pcVar2[3] == auVar53[3]);
  auVar74[4] = -(pcVar2[4] == auVar53[4]);
  auVar74[5] = -(pcVar2[5] == auVar53[5]);
  auVar74[6] = -(pcVar2[6] == auVar53[6]);
  auVar74[7] = -(pcVar2[7] == auVar53[7]);
  auVar74[8] = -(pcVar2[8] == auVar53[0]);
  auVar74[9] = -(pcVar2[9] == auVar53[1]);
  auVar74[10] = -(pcVar2[10] == auVar53[2]);
  auVar74[0xb] = -(pcVar2[0xb] == auVar53[3]);
  auVar74[0xc] = -(pcVar2[0xc] == auVar53[4]);
  auVar74[0xd] = -(pcVar2[0xd] == auVar53[5]);
  auVar74[0xe] = -(pcVar2[0xe] == auVar53[6]);
  auVar74[0xf] = -(pcVar2[0xf] == auVar53[7]);
  uVar41 = (ushort)(SUB161(auVar74 >> 7,0) & 1) | (ushort)(SUB161(auVar74 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar74 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar74 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar74 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar74 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar74 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar74 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar74 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar74 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar74 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar74 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar74 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar74 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar74 >> 0x77,0) & 1) << 0xe | (ushort)(auVar74[0xf] >> 7) << 0xf;
  uVar45 = (uint)uVar41;
  while (uVar41 != 0) {
    uVar47 = 0;
    for (uVar9 = uVar45; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      uVar47 = uVar47 + 1;
    }
    lVar23 = *plVar24 + (uVar47 + uVar43 & plVar24[1]) * -0x40;
    if (pauStack_508._0_4_ == (float)*(int *)(lVar23 + -0x40)) {
      fVar50 = *(float *)(lVar23 + -0x30);
      fVar81 = *(float *)(lVar23 + -0x2c);
      fVar12 = *(float *)(lVar23 + -0x24);
      fVar79 = *(float *)(lVar23 + -0x28);
      fVar78 = fVar81 + fVar81;
      fVar84 = fVar50 * (fVar50 + fVar50);
      fVar85 = fVar79 + fVar79;
      fVar82 = fVar50 * fVar85 - fVar78 * fVar12;
      fVar56 = (fVar50 + fVar50) * fVar12;
      fVar83 = fVar81 * fVar85 + fVar56;
      fVar80 = _UNK_142e378e4 - (fVar84 + fVar81 * fVar78);
      fStack_3cc = *(float *)(lVar23 + -0x14);
      uStack_3d8._0_4_ = fStack_3cc * (_DAT_142e36f28 - (fVar79 * fVar85 + fVar81 * fVar78));
      uStack_3d8._4_4_ = fStack_3cc * (fVar50 * fVar78 + fVar85 * fVar12);
      fStack_3d0 = fStack_3cc * fVar82;
      fStack_3cc = fStack_3cc * fVar82;
      uStack_3c0._4_4_ = (float)*(undefined8 *)(lVar23 + -0x10);
      fVar82 = (float)((ulonglong)*(undefined8 *)(lVar23 + -0x10) >> 0x20);
      fStack_3c8 = uStack_3c0._4_4_ * (fVar50 * fVar78 - fVar85 * fVar12);
      fStack_3c4 = uStack_3c0._4_4_ * (_UNK_142e378e4 - (fVar84 + fVar79 * fVar85));
      uStack_3c0._0_4_ = uStack_3c0._4_4_ * fVar83;
      uStack_3c0._4_4_ = uStack_3c0._4_4_ * fVar83;
      uVar15 = *(undefined4 *)(lVar23 + -0x20);
      uVar86 = *(undefined4 *)(lVar23 + -0x1c);
      uVar87 = *(undefined4 *)(lVar23 + -0x18);
      uStack_3b8 = CONCAT44(fVar82 * (fVar81 * fVar85 - fVar56),
                            fVar82 * (fVar50 * fVar85 + fVar78 * fVar12));
      uStack_3b0 = (byte *)CONCAT44(fVar82 * fVar80,fVar82 * fVar80);
      uStack_3a8 = uVar15;
      uStack_3a4 = uVar86;
      uStack_3a0 = uVar87;
      uStack_39c = uVar87;
      pdb_140c67620(uVar46,&uStack_3d8,uStack_148,(undefined8 *)(ulonglong)(uint)fStack_1bc,uVar36,
                    (ulonglong)puStack_108 & 0xff,1,0x3f800000);
      puVar33 = puStack_f8;
      ppauVar35 = ppauStack_118;
      if (*(char *)(lVar37 + 0x18) != '\x02') goto code_r0x000140bad53d;
      if ((*(undefined1 (***) [16])(lVar37 + 0x38) == ppauStack_d0) &&
         (*(char *)(lVar37 + 0x19) == '\x03')) {
        if ((uint)uVar34 < 2) {
          if (pcStack_120 != (code *)0x0) {
code_r0x000140bad7ae:
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14306d090,0x23,&UNK_14306d0a8);
          }
          puVar40 = *(undefined4 **)(puStack_d8 + 0x42);
          puStack_108 = (undefined8 *)CONCAT44(puStack_108._4_4_,puStack_d8[0x45]);
          *puVar40 = puStack_d8[0x45];
          lVar20 = *(longlong *)(puStack_d8 + 0x3e);
          pdb_140c419b0(lVar20,puStack_f8,ppauStack_118);
        }
        else if ((uint)uVar34 == 2) {
          puVar40 = *(undefined4 **)(puStack_d8 + 0x42);
          puStack_108 = (undefined8 *)CONCAT44(puStack_108._4_4_,puStack_d8[0x45]);
          *puVar40 = puStack_d8[0x45];
          lVar20 = *(longlong *)(puStack_d8 + 0x3e);
          ppauVar29 = ppauStack_118 + 0x12;
          if (ppauStack_118[0x12] == (undefined1 (*) [16])0x0) {
            ppauVar29 = (undefined1 (**) [16])0x0;
          }
          uStack_3d8._0_4_ = 1.4013e-45;
          uStack_3d8._4_4_ = 0.0;
          fStack_3d0 = SUB84(ppauVar29,0);
          fStack_3cc = (float)((ulonglong)ppauVar29 >> 0x20);
          fStack_3c8 = 0.0;
          fStack_3c4 = 0.0;
          uStack_3a0 = 0;
          uStack_39c = 0;
          pdb_1414e0e70(&uStack_3d8,lVar20 + 0x30);
          puVar33 = puStack_f8;
        }
        else {
          puVar40 = *(undefined4 **)(puStack_d8 + 0x42);
          puStack_108 = (undefined8 *)CONCAT44(puStack_108._4_4_,puStack_d8[0x45]);
          *puVar40 = puStack_d8[0x45];
          lVar20 = *(longlong *)(puStack_d8 + 0x3e);
          ppauVar29 = ppauStack_118 + 0x24;
          if (ppauStack_118[0x24] == (undefined1 (*) [16])0x0) {
            ppauVar29 = (undefined1 (**) [16])0x0;
          }
          uStack_3d8._0_4_ = 1.4013e-45;
          uStack_3d8._4_4_ = 0.0;
          fStack_3d0 = SUB84(ppauVar29,0);
          fStack_3cc = (float)((ulonglong)ppauVar29 >> 0x20);
          fStack_3c8 = 0.0;
          fStack_3c4 = 0.0;
          uStack_3a0 = 0;
          uStack_39c = 0;
          pdb_1414e0e70(&uStack_3d8,lVar20 + 0x30);
          puVar33 = puStack_f8;
        }
        *puVar40 = puStack_108._0_4_;
        pdb_140aa2f60(lVar20,pcStack_120,puVar33,ppauVar35,puStack_f0,&UNK_143060c28,0x14);
        if (*(char *)(lVar37 + 0x18) != '\x02') goto code_r0x000140bad53d;
      }
      if ((*(undefined1 (***) [16])(lVar37 + 0x38) == ppauStack_d0) &&
         (*(char *)(lVar37 + 0x19) == '\x01')) {
        **(undefined4 **)(puStack_d8 + 0x92) = puStack_d8[0x95];
        lVar37 = *(longlong *)(puStack_d8 + 0x8e);
        lVar20 = *(longlong *)(lVar37 + 0x30);
        uVar46 = *(undefined8 *)(lVar37 + 0x40);
        if (lVar20 == *(longlong *)(lVar37 + 0x20)) {
          pdb_142d7ede0(lVar37 + 0x20);
        }
        lVar23 = *(longlong *)(lVar37 + 0x28);
        *(code **)(lVar23 + lVar20 * 0x28) = pcStack_120;
        *(undefined8 **)(lVar23 + 8 + lVar20 * 0x28) = puStack_f8;
        *(float *)(lVar23 + 0x10 + lVar20 * 0x28) = fStack_1bc;
        puVar40 = (undefined4 *)(lVar23 + 0x14 + lVar20 * 0x28);
        *puVar40 = uVar15;
        puVar40[1] = uVar86;
        *(undefined4 *)(lVar23 + 0x1c + lVar20 * 0x28) = uVar87;
        *(undefined8 *)(lVar23 + 0x20 + lVar20 * 0x28) = uVar46;
        *(longlong *)(lVar37 + 0x30) = lVar20 + 1;
        *(longlong *)(lVar37 + 0x40) = *(longlong *)(lVar37 + 0x40) + 1;
      }
      goto code_r0x000140bad53d;
    }
    uVar41 = (ushort)(uVar45 - 1) & (ushort)uVar45;
    uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar41);
  }
  auVar64[0] = -(*pcVar2 == -1);
  auVar64[1] = -(pcVar2[1] == -1);
  auVar64[2] = -(pcVar2[2] == -1);
  auVar64[3] = -(pcVar2[3] == -1);
  auVar64[4] = -(pcVar2[4] == -1);
  auVar64[5] = -(pcVar2[5] == -1);
  auVar64[6] = -(pcVar2[6] == -1);
  auVar64[7] = -(pcVar2[7] == -1);
  auVar64[8] = -(pcVar2[8] == -1);
  auVar64[9] = -(pcVar2[9] == -1);
  auVar64[10] = -(pcVar2[10] == -1);
  auVar64[0xb] = -(pcVar2[0xb] == -1);
  auVar64[0xc] = -(pcVar2[0xc] == -1);
  auVar64[0xd] = -(pcVar2[0xd] == -1);
  auVar64[0xe] = -(pcVar2[0xe] == -1);
  auVar64[0xf] = -(pcVar2[0xf] == -1);
  if ((((((((((((((((SUB161(auVar64 >> 7,0) & 1) != 0 || (SUB161(auVar64 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar64 >> 0x17,0) & 1) != 0) || (SUB161(auVar64 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar64 >> 0x27,0) & 1) != 0) || (SUB161(auVar64 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar64 >> 0x37,0) & 1) != 0) || (SUB161(auVar64 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar64 >> 0x47,0) & 1) != 0) || (SUB161(auVar64 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar64 >> 0x57,0) & 1) != 0) || (SUB161(auVar64 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar64 >> 0x67,0) & 1) != 0) || (SUB161(auVar64 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar64 >> 0x77,0) & 1) != 0) || auVar64[0xf] < '\0') {
code_r0x000140bac500:
    uStack_3d8 = &pauStack_508;
    fStack_3d0 = 6.1397324;
    fStack_3cc = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14306d998,&uStack_3d8,&UNK_143060c10);
  }
  uVar43 = uVar43 + lVar20 + 0x10;
  lVar20 = lVar20 + 0x10;
  goto code_r0x000140bab771;
code_r0x000140baa305:
  puVar16 = puVar16 + -0x13;
  puVar1 = (undefined8 *)(lVar37 + 0x70);
  lVar37 = lVar37 + 0x98;
  if ((undefined8 *)*puVar1 == (undefined8 *)CONCAT44(uStack_1b4,fStack_1b8)) goto LAB_140baa318;
  goto code_r0x000140baa300;
code_r0x000140bac02c:
  auVar53 = *pauStack_508;
  pauVar39 = pauStack_508 + 1;
  uVar45 = ~(uint)(ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
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
                          (ushort)(byte)(auVar53[0xf] >> 7) << 0xf);
  plVar24 = *(longlong **)(puStack_d8 + 0x5e);
  auVar53._8_4_ = 0xffffffff;
  auVar53._0_8_ = 0xffffffffffffffff;
  auVar53._12_4_ = 0xffffffff;
  ppauVar35 = ppauStack_4f0;
  pauVar38 = pauStack_508;
code_r0x000140bac13c:
  puVar33 = puStack_e0;
  uStack_3d8._4_4_ = (float)((ulonglong)lVar20 >> 0x20);
  if (ppauVar35 != (undefined1 (**) [16])0x0) {
    if ((short)uVar45 == 0) {
      do {
        auVar54 = *pauVar39;
        pauVar38 = pauVar38 + -4;
        pauVar39 = pauVar39 + 1;
        uVar45 = (ushort)((ushort)(SUB161(auVar54 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar54 >> 0xf,0) & 1) << 1 |
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
                          (ushort)(SUB161(auVar54 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar54[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar45 == 0);
    }
    iVar77 = 0;
    for (uVar47 = uVar45; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
      iVar77 = iVar77 + 1;
    }
    uVar45 = uVar45 - 1 & uVar45;
    ppauVar35 = (undefined1 (**) [16])((longlong)ppauVar35 - 1);
    iVar77 = *(int *)((longlong)pauVar38 + (-4 - (ulonglong)(uint)(iVar77 << 2)));
    lVar20 = CONCAT44(uStack_3d8._4_4_,iVar77);
    if (plVar24[3] != 0) {
      uStack_b1 = 1;
      uStack_b2 = 1;
      uStack_3d8._0_4_ = (float)iVar77;
      uVar34 = pdb_1400aede0(plVar24 + 4,&uStack_3d8);
      lVar20 = CONCAT44(uStack_3d8._4_4_,(float)uStack_3d8);
      bVar49 = (byte)(uVar34 >> 0x39);
      auVar54 = ZEXT216(CONCAT11(bVar49,bVar49));
      auVar54 = pshuflw(auVar54,auVar54,0);
      lVar23 = 0;
      while( true ) {
        uVar34 = uVar34 & plVar24[1];
        auVar76 = *(undefined1 (*) [16])(*plVar24 + uVar34);
        auVar66[0] = -(auVar76[0] == auVar54[0]);
        auVar66[1] = -(auVar76[1] == auVar54[1]);
        auVar66[2] = -(auVar76[2] == auVar54[2]);
        auVar66[3] = -(auVar76[3] == auVar54[3]);
        auVar66[4] = -(auVar76[4] == auVar54[4]);
        auVar66[5] = -(auVar76[5] == auVar54[5]);
        auVar66[6] = -(auVar76[6] == auVar54[6]);
        auVar66[7] = -(auVar76[7] == auVar54[7]);
        auVar66[8] = -(auVar76[8] == auVar54[0]);
        auVar66[9] = -(auVar76[9] == auVar54[1]);
        auVar66[10] = -(auVar76[10] == auVar54[2]);
        auVar66[0xb] = -(auVar76[0xb] == auVar54[3]);
        auVar66[0xc] = -(auVar76[0xc] == auVar54[4]);
        auVar66[0xd] = -(auVar76[0xd] == auVar54[5]);
        auVar66[0xe] = -(auVar76[0xe] == auVar54[6]);
        auVar66[0xf] = -(auVar76[0xf] == auVar54[7]);
        uVar41 = (ushort)(SUB161(auVar66 >> 7,0) & 1) | (ushort)(SUB161(auVar66 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar66 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar66 >> 0x77,0) & 1) << 0xe | (ushort)(auVar66[0xf] >> 7) << 0xf
        ;
        uVar47 = (uint)uVar41;
        while (uVar41 != 0) {
          uVar9 = 0;
          for (uVar10 = uVar47; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
          lVar19 = *plVar24 + (uVar9 + uVar34 & plVar24[1]) * -0x40;
          if (iVar77 == *(int *)(lVar19 + -0x40)) {
            uStack_3c0._4_4_ = *(float *)(lVar19 + -0x18);
            fStack_3c4 = (float)*(undefined8 *)(lVar19 + -0x20);
            uStack_3c0._0_4_ = (float)((ulonglong)*(undefined8 *)(lVar19 + -0x20) >> 0x20);
            uStack_3d8._0_4_ = 1.4013e-45;
            fStack_3c8 = 0.3;
            uStack_3b8 = CONCAT35(uStack_3b8._5_3_,0x13f800000);
            uStack_b1 = 1;
            uStack_b2 = 1;
            pdb_140ab07b0(&uStack_3d8,uStack_148);
            lVar20 = CONCAT44(uStack_3d8._4_4_,(float)uStack_3d8);
            goto code_r0x000140bac13c;
          }
          uVar41 = (ushort)(uVar47 - 1) & (ushort)uVar47;
          uVar47 = CONCAT22((short)(uVar47 - 1 >> 0x10),uVar41);
        }
        auVar57[0] = -(auVar76[0] == -1);
        auVar57[1] = -(auVar76[1] == -1);
        auVar57[2] = -(auVar76[2] == -1);
        auVar57[3] = -(auVar76[3] == -1);
        auVar57[4] = -(auVar76[4] == -1);
        auVar57[5] = -(auVar76[5] == -1);
        auVar57[6] = -(auVar76[6] == -1);
        auVar57[7] = -(auVar76[7] == -1);
        auVar57[8] = -(auVar76[8] == -1);
        auVar57[9] = -(auVar76[9] == -1);
        auVar57[10] = -(auVar76[10] == -1);
        auVar57[0xb] = -(auVar76[0xb] == -1);
        auVar57[0xc] = -(auVar76[0xc] == -1);
        auVar57[0xd] = -(auVar76[0xd] == -1);
        auVar57[0xe] = -(auVar76[0xe] == -1);
        auVar57[0xf] = -(auVar76[0xf] == -1);
        if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 || (SUB161(auVar57 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar57 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar57 >> 0x1f,0) & 1) != 0) || (SUB161(auVar57 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar57 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar57 >> 0x37,0) & 1) != 0) || (SUB161(auVar57 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar57 >> 0x47,0) & 1) != 0) || (SUB161(auVar57 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar57 >> 0x57,0) & 1) != 0) || (SUB161(auVar57 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar57 >> 0x67,0) & 1) != 0) || (SUB161(auVar57 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar57 >> 0x77,0) & 1) != 0) || auVar57[0xf] < '\0') break;
        uVar34 = uVar34 + lVar23 + 0x10;
        lVar23 = lVar23 + 0x10;
      }
    }
    goto code_r0x000140bac13c;
  }
  if (((*(char *)(puStack_108 + 3) == '\x02') &&
      ((undefined1 (**) [16])puStack_108[7] == ppauStack_118)) &&
     (*(char *)((longlong)puStack_108 + 0x19) == '\x01')) {
    if ((ppauStack_4f0 == (undefined1 (**) [16])0x0) && (puStack_f8 != (undefined8 *)0x0)) {
      **(undefined4 **)(puStack_d8 + 0x1c) = puStack_d8[0x1f];
      uVar46 = *(undefined8 *)(puStack_d8 + 0x18);
      uStack_3d8._0_4_ = 7.00649e-45;
      uStack_3d8._4_4_ = 0.0;
      uStack_b1 = 1;
      uStack_b2 = 1;
      uVar26 = pdb_140aefba0(&uStack_3d8);
      fStack_3d0 = (float)uVar26;
      fStack_3cc = (float)((ulonglong)uVar26 >> 0x20);
      uStack_3d8._0_4_ = 1.4013e-44;
      uStack_3d8._4_4_ = 0.0;
      uStack_b1 = 1;
      uStack_b2 = 1;
      pdb_140ae5180(uVar46,&uStack_3d8,&UNK_143060e18);
      uStack_b1 = 1;
      uStack_b2 = 1;
      lVar20 = pdb_140c40010(*(undefined8 *)(puStack_d8 + 0x36),*(undefined4 *)ppauStack_d0);
      bVar49 = 2;
      if ((lVar20 != 0) && (*(byte *)(lVar20 + 0x4f) < 2)) {
        bVar49 = *(byte *)(lVar20 + 0x4e);
        auVar53._8_8_ = 0;
        auVar53._0_8_ = *(ulonglong *)(lVar20 + 0x38);
      }
      uVar36 = 0xb;
      if ((bVar49 & 1) == 0) {
        uVar36 = 4;
      }
      uStack_b1 = 1;
      uStack_b2 = 1;
      pdb_140c45a20(&uStack_3d8,plVar24,*(undefined4 *)ppauStack_d0);
      uVar45 = (uint)(bVar49 == 2);
      auVar55._0_4_ = (int)(uVar45 << 0x1f) >> 0x1f;
      auVar55._4_4_ = (int)(uVar45 << 0x1f) >> 0x1f;
      auVar55._8_4_ = (int)(uVar45 << 0x1f) >> 0x1f;
      auVar55._12_4_ = (int)(uVar45 << 0x1f) >> 0x1f;
      auVar53 = auVar55 & _DAT_142e379d0 | ~auVar55 & auVar53;
      if ((float)uStack_3d8 == 1.4013e-45) {
        uStack_630 = (code *)CONCAT44(uStack_630._4_4_,fStack_3cc);
        puStack_638 = (undefined8 *)CONCAT44(fStack_3d0,uStack_3d8._4_4_);
      }
      else {
        uStack_630 = (code *)((ulonglong)uStack_630._4_4_ << 0x20);
        puStack_638 = (undefined8 *)0x0;
      }
      uStack_3d8._0_4_ = (float)CONCAT31(uStack_3d8._1_3_,uVar36);
      fStack_3c4 = SUB84(puStack_638,0);
      uStack_3c0._0_4_ = (float)((ulonglong)puStack_638 >> 0x20);
      uStack_3c0._4_4_ = (float)uStack_630;
      uStack_3b0 = (byte *)((ulonglong)uStack_3b0 & 0xffffffffffffff00);
      uStack_3b8 = CONCAT44(auVar53._0_4_,auVar53._4_4_);
      uStack_b1 = 1;
      uStack_b2 = 1;
      pdb_1414aefa0(param_8,&uStack_3d8,&UNK_143060e30);
      lVar20 = CONCAT44(uStack_3d8._4_4_,(float)uStack_3d8);
    }
    uVar15 = puStack_d8[0x6d];
    puVar40 = *(undefined4 **)(puStack_d8 + 0x6a);
    ppauVar35 = ppauStack_d0;
    uStack_3d8 = (undefined1 (**) [16])lVar20;
    for (lVar23 = (longlong)puStack_f8 << 3; lVar23 != 0; lVar23 = lVar23 + -8) {
      uVar86 = *(undefined4 *)ppauVar35;
      uVar87 = *(undefined4 *)((longlong)ppauVar35 + 4);
      *puVar40 = uVar15;
      pdb_140a5f790(lVar37,uVar86,uVar87);
      ppauVar35 = ppauVar35 + 1;
    }
    if (puStack_e8 != (undefined8 *)0x0) {
      pub_1406abac0((byte *)ppauStack_d0,(longlong)puStack_e8 * 8,4);
    }
    auVar53 = *pauStack_508;
    puStack_158 = (undefined4 *)CONCAT44(puStack_158._4_4_,uVar15);
    pcStack_120 = uStack_500;
    if (uStack_500 == (code *)0x0) {
      plStack_140 = (longlong *)0x0;
    }
    else {
      uVar34 = (longlong)uStack_500 * 4 + 0x13U & 0xfffffffffffffff0;
      pcStack_180 = uStack_500 + uVar34 + 0x11;
      pbStack_1c8 = (byte *)((longlong)pauStack_508 - uVar34);
      plStack_140 = (longlong *)0x10;
    }
    pauVar39 = pauStack_508 + 1;
    uVar45 = ~(uint)(ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
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
                            (ushort)(byte)(auVar53[0xf] >> 7) << 0xf);
    puStack_100 = *(undefined8 **)(puStack_d8 + 0x36);
    puStack_108 = *(undefined8 **)(puStack_d8 + 0x8e);
    puStack_128 = (undefined8 *)CONCAT44(puStack_128._4_4_,puStack_d8[0x95]);
    puStack_d8 = *(undefined4 **)(puStack_d8 + 0x92);
    ppauStack_3e0 = (undefined1 (**) [16])(puStack_108 + 4);
    ppauVar35 = ppauStack_4f0;
    pauVar38 = pauStack_508;
    puStack_150 = puVar40;
code_r0x000140bad1cf:
    if (ppauVar35 != (undefined1 (**) [16])0x0) {
      if ((short)uVar45 == 0) {
        do {
          auVar53 = *pauVar39;
          pauVar38 = pauVar38 + -4;
          pauVar39 = pauVar39 + 1;
          uVar45 = (ushort)((ushort)(SUB161(auVar53 >> 7,0) & 1) |
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
                           (ushort)(byte)(auVar53[0xf] >> 7) << 0xf) ^ 0xffff;
        } while (uVar45 == 0);
      }
      iVar77 = 0;
      for (uVar47 = uVar45; (uVar47 & 1) == 0; uVar47 = uVar47 >> 1 | 0x80000000) {
        iVar77 = iVar77 + 1;
      }
      uVar15 = *(undefined4 *)((longlong)pauVar38 + (-4 - (ulonglong)(uint)(iVar77 << 2)));
      *puStack_150 = puStack_158._0_4_;
      puStack_f0 = (undefined4 *)CONCAT44(puStack_f0._4_4_,uVar15);
      ppauStack_118 = (undefined1 (**) [16])((longlong)ppauVar35 - 1);
      pdb_140a5f3e0(lVar37);
      uStack_198 = CONCAT44(uStack_198._4_4_,puStack_f0._0_4_);
      if (plVar24[3] != 0) {
        uVar34 = pdb_1400aede0(plVar24 + 4,&uStack_198);
        uVar45 = uVar45 - 1 & uVar45;
        bVar49 = (byte)(uVar34 >> 0x39);
        auVar53 = ZEXT216(CONCAT11(bVar49,bVar49));
        auVar53 = pshuflw(auVar53,auVar53,0);
        lVar20 = 0;
        while( true ) {
          uVar34 = uVar34 & plVar24[1];
          pcVar2 = (char *)(*plVar24 + uVar34);
          auVar67[0] = -(*pcVar2 == auVar53[0]);
          auVar67[1] = -(pcVar2[1] == auVar53[1]);
          auVar67[2] = -(pcVar2[2] == auVar53[2]);
          auVar67[3] = -(pcVar2[3] == auVar53[3]);
          auVar67[4] = -(pcVar2[4] == auVar53[4]);
          auVar67[5] = -(pcVar2[5] == auVar53[5]);
          auVar67[6] = -(pcVar2[6] == auVar53[6]);
          auVar67[7] = -(pcVar2[7] == auVar53[7]);
          auVar67[8] = -(pcVar2[8] == auVar53[0]);
          auVar67[9] = -(pcVar2[9] == auVar53[1]);
          auVar67[10] = -(pcVar2[10] == auVar53[2]);
          auVar67[0xb] = -(pcVar2[0xb] == auVar53[3]);
          auVar67[0xc] = -(pcVar2[0xc] == auVar53[4]);
          auVar67[0xd] = -(pcVar2[0xd] == auVar53[5]);
          auVar67[0xe] = -(pcVar2[0xe] == auVar53[6]);
          auVar67[0xf] = -(pcVar2[0xf] == auVar53[7]);
          uVar41 = (ushort)(SUB161(auVar67 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
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
                   (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar67[0xf] >> 7) << 0xf;
          uVar47 = (uint)uVar41;
          while (uVar41 != 0) {
            uVar9 = 0;
            for (uVar10 = uVar47; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
              uVar9 = uVar9 + 1;
            }
            lVar23 = *plVar24 + (uVar9 + uVar34 & plVar24[1]) * -0x40;
            if ((uint)uStack_198 == *(int *)(lVar23 + -0x40)) {
              uStack_3b8 = *(undefined8 *)(lVar23 + -0x10);
              uStack_3b0 = *(byte **)(lVar23 + -8);
              fStack_3c8 = (float)*(undefined8 *)(lVar23 + -0x20);
              fStack_3c4 = (float)((ulonglong)*(undefined8 *)(lVar23 + -0x20) >> 0x20);
              uStack_3c0._0_4_ = (float)*(undefined8 *)(lVar23 + -0x18);
              uStack_3c0._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar23 + -0x18) >> 0x20);
              uStack_3d8._0_4_ = (float)*(undefined8 *)(lVar23 + -0x30);
              uStack_3d8._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar23 + -0x30) >> 0x20);
              fStack_3d0 = (float)*(undefined8 *)(lVar23 + -0x28);
              fStack_3cc = (float)((ulonglong)*(undefined8 *)(lVar23 + -0x28) >> 0x20);
              puVar33 = (undefined8 *)((ulonglong)puStack_f0 & 0xffffffff);
              uVar46 = pdb_140c3d2c0(puStack_100);
              *puStack_d8 = puStack_128._0_4_;
              lVar20 = puStack_108[6];
              uStack_130 = puStack_108[8];
              puStack_f8 = puVar33;
              if (lVar20 == puStack_108[4]) {
                pdb_142d7ede0(ppauStack_3e0);
              }
              lVar23 = puStack_108[5];
              *(undefined8 *)(lVar23 + lVar20 * 0x28) = uVar46;
              *(undefined8 **)(lVar23 + 8 + lVar20 * 0x28) = puStack_f8;
              *(undefined4 *)(lVar23 + 0x10 + lVar20 * 0x28) = puStack_f0._0_4_;
              *(ulonglong *)(lVar23 + 0x14 + lVar20 * 0x28) = CONCAT44(fStack_3c4,fStack_3c8);
              *(float *)(lVar23 + 0x1c + lVar20 * 0x28) = (float)uStack_3c0;
              *(ulonglong *)(lVar23 + 0x20 + lVar20 * 0x28) = uStack_130;
              puStack_108[6] = lVar20 + 1;
              puStack_108[8] = puStack_108[8] + 1;
              ppauVar35 = ppauStack_118;
              puVar33 = puStack_e0;
              goto code_r0x000140bad1cf;
            }
            uVar41 = (ushort)(uVar47 - 1) & (ushort)uVar47;
            uVar47 = CONCAT22((short)(uVar47 - 1 >> 0x10),uVar41);
          }
          auVar58[0] = -(*pcVar2 == -1);
          auVar58[1] = -(pcVar2[1] == -1);
          auVar58[2] = -(pcVar2[2] == -1);
          auVar58[3] = -(pcVar2[3] == -1);
          auVar58[4] = -(pcVar2[4] == -1);
          auVar58[5] = -(pcVar2[5] == -1);
          auVar58[6] = -(pcVar2[6] == -1);
          auVar58[7] = -(pcVar2[7] == -1);
          auVar58[8] = -(pcVar2[8] == -1);
          auVar58[9] = -(pcVar2[9] == -1);
          auVar58[10] = -(pcVar2[10] == -1);
          auVar58[0xb] = -(pcVar2[0xb] == -1);
          auVar58[0xc] = -(pcVar2[0xc] == -1);
          auVar58[0xd] = -(pcVar2[0xd] == -1);
          auVar58[0xe] = -(pcVar2[0xe] == -1);
          auVar58[0xf] = -(pcVar2[0xf] == -1);
          if ((((((((((((((((SUB161(auVar58 >> 7,0) & 1) != 0 || (SUB161(auVar58 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar58 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar58 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar58 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar58 >> 0x2f,0) & 1) != 0) || (SUB161(auVar58 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar58 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar58 >> 0x47,0) & 1) != 0) || (SUB161(auVar58 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar58 >> 0x57,0) & 1) != 0) || (SUB161(auVar58 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar58 >> 0x67,0) & 1) != 0) || (SUB161(auVar58 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar58 >> 0x77,0) & 1) != 0) || auVar58[0xf] < '\0') break;
          uVar34 = uVar34 + lVar20 + 0x10;
          lVar20 = lVar20 + 0x10;
        }
      }
      puStack_638 = &uStack_198;
      uStack_630 = pdb_140c478b0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14306d998,&puStack_638,&UNK_143060e48);
    }
    bVar48 = (byte)uStack_c8;
    uStack_3c0 = CONCAT44(uStack_3c0._4_4_,(float)uStack_3c0);
    if ((pcStack_120 != (code *)0x0) &&
       (uStack_3c0 = CONCAT44(uStack_3c0._4_4_,(float)uStack_3c0), pcStack_180 != (code *)0x0)) {
      pub_1406abac0(pbStack_1c8,(ulonglong)pcStack_180,(ulonglong)plStack_140);
      uStack_3c0 = CONCAT44(uStack_3c0._4_4_,(float)uStack_3c0);
    }
  }
  else {
    bVar48 = (byte)uStack_c8;
    uStack_3d8 = (undefined1 (**) [16])lVar20;
    if (puStack_e8 != (undefined8 *)0x0) {
      pub_1406abac0((byte *)ppauStack_d0,(longlong)puStack_e8 << 3,4);
    }
    uStack_3c0 = CONCAT44(uStack_3c0._4_4_,(float)uStack_3c0);
    if (uStack_500 != (code *)0x0) {
      uVar34 = (longlong)uStack_500 * 4 + 0x13U & 0xfffffffffffffff0;
      uStack_3c0 = CONCAT44(uStack_3c0._4_4_,(float)uStack_3c0);
      if (uStack_500 + uVar34 + 0x11 != (code *)0x0) {
        pub_1406abac0((byte *)((longlong)pauStack_508 - uVar34),
                      (ulonglong)(uStack_500 + uVar34 + 0x11),0x10);
        uStack_3c0 = CONCAT44(uStack_3c0._4_4_,(float)uStack_3c0);
      }
    }
  }
code_r0x000140bab370:
  puVar33 = (undefined8 *)*puVar33;
  uStack_3d8 = (undefined1 (**) [16])&puStack_638;
  fStack_3d0 = 12.818893;
  fStack_3cc = 1.4013e-45;
  puStack_638 = puVar33;
  pdb_140f60760(&pauStack_508,&UNK_143060f4f,&uStack_3d8);
  uVar34 = uStack_4f8;
  pcVar8 = uStack_500;
  pdb_14007ee60();
  pbVar21 = pub_1406abab0(0x20,8);
  if (pbVar21 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x20);
  }
  pbVar21[0] = 1;
  pbVar21[1] = 0;
  pbVar21[2] = 0;
  pbVar21[3] = 0;
  pbVar21[4] = 0;
  pbVar21[5] = 0;
  pbVar21[6] = 0;
  pbVar21[7] = 0;
  pbVar21[8] = 1;
  pbVar21[9] = 0;
  pbVar21[10] = 0;
  pbVar21[0xb] = 0;
  pbVar21[0xc] = 0;
  pbVar21[0xd] = 0;
  pbVar21[0xe] = 0;
  pbVar21[0xf] = 0;
  *(undefined8 **)(pbVar21 + 0x10) = puVar33;
  pbVar21[0x18] = bVar48;
  uStack_3d8._0_4_ = SUB84(pbVar21,0);
  uStack_3d8._4_4_ = (float)((ulonglong)pbVar21 >> 0x20);
  fStack_3d0 = 134.06006;
  fStack_3cc = 1.4013e-45;
  if (-1 < (longlong)uVar34) {
    if (uVar34 == 0) {
      pbVar22 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      uVar46 = 1;
      pbVar22 = pub_1406abab0(uVar34,1);
      if (pbVar22 == (byte *)0x0) goto LAB_140bab40e;
      pub_142e32760(pbVar22,pcVar8,uVar34);
    }
    fStack_3d0 = (float)CONCAT31(fStack_3d0._1_3_,2);
    fStack_3c8 = (float)uVar34;
    fStack_3c4 = (float)(uVar34 >> 0x20);
    uStack_3c0._0_4_ = SUB84(pbVar22,0);
    uStack_3c0._4_4_ = (float)((ulonglong)pbVar22 >> 0x20);
    uStack_3b8 = uVar34;
    uStack_3a8 = 0x43060f60;
    uStack_3a4 = 1;
    uStack_3b0 = pbVar21;
    pdb_141a88350(uStack_148,&uStack_3d8);
    if (pauStack_508 == (undefined1 (*) [16])0x0) {
      return;
    }
    pub_1406abac0((byte *)pcVar8,(ulonglong)pauStack_508,1);
    return;
  }
  uVar46 = 0;
LAB_140bab40e:
  uStack_c8 = pbVar21;
  pdb_142dc7e2a(uVar46,uVar34);
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
}

