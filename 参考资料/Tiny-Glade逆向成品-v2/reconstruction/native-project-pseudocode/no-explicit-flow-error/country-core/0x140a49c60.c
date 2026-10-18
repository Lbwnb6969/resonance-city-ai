// VA 0x140a49c60, PDB extent 7907 bytes
// country_core::systems::wall::shapes::circle::create_circle::create_circle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/circle/create_circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::circle::create_circle::create_circle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/circle/create_circle.rs
   Extent: 7907 */

void pdb_140a49c60(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,undefined8 *param_8,
                  undefined8 *param_9,longlong *param_10,undefined8 *param_11,longlong *param_12,
                  longlong *param_13)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  longlong lVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  longlong lVar29;
  longlong lVar30;
  byte *******pppppppbVar31;
  undefined8 uVar32;
  code *pcVar33;
  uint uVar34;
  uint uVar35;
  undefined1 auVar36 [12];
  undefined8 uVar37;
  bool bVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  byte *******pppppppbVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  int iVar47;
  byte ******ppppppbVar48;
  ulonglong uVar49;
  ulonglong *puVar50;
  longlong lVar51;
  longlong lVar52;
  ulonglong uVar53;
  byte *pbVar54;
  int *piVar55;
  byte ******ppppppbVar56;
  longlong *plVar57;
  longlong lVar58;
  ulonglong uVar59;
  byte *******pppppppbVar60;
  undefined4 *puVar61;
  ulonglong uVar62;
  byte *pbVar63;
  uint uVar64;
  int iVar65;
  longlong lVar66;
  ushort uVar67;
  longlong lVar68;
  longlong *plVar69;
  longlong *plVar70;
  undefined8 uVar71;
  undefined4 *puVar72;
  byte bVar73;
  byte bVar74;
  float fVar75;
  float fVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined4 uVar87;
  byte *****pppppbStack_2d8;
  longlong lStack_2d0;
  ulonglong *puStack_2c8;
  longlong lStack_2c0;
  longlong lStack_2b8;
  longlong lStack_2b0;
  ulonglong *puStack_2a8;
  longlong lStack_2a0;
  longlong lStack_298;
  longlong lStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined1 uStack_260;
  byte bStack_25f;
  undefined6 uStack_25e;
  ulonglong uStack_258;
  undefined8 uStack_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  int iStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  longlong *plStack_218;
  longlong *plStack_210;
  byte *pbStack_208;
  longlong lStack_200;
  longlong lStack_1f8;
  undefined4 *puStack_1f0;
  byte *****pppppbStack_1e8;
  byte *pbStack_1e0;
  longlong lStack_1d8;
  int iStack_1cc;
  longlong *plStack_1c8;
  ulonglong *puStack_1c0;
  longlong *plStack_1b8;
  undefined4 uStack_1ac;
  byte ******ppppppbStack_1a8;
  code *pcStack_1a0;
  undefined8 uStack_198;
  byte ******ppppppbStack_188;
  byte *****pppppbStack_180;
  byte *****pppppbStack_178;
  ulonglong uStack_170;
  byte *pbStack_168;
  ulonglong uStack_160;
  undefined8 uStack_158;
  uint uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  byte ******ppppppbStack_130;
  undefined8 uStack_128;
  int6 iStack_120;
  undefined2 uStack_11a;
  undefined4 *puStack_110;
  undefined4 uStack_104;
  byte ******ppppppbStack_100;
  undefined4 uStack_f8;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  puStack_2c8 = (ulonglong *)*param_1;
  lVar14 = param_1[1];
  uVar53 = *puStack_2c8;
  uVar59 = 0;
  uVar49 = uVar53 - *(ulonglong *)(lVar14 + 0x18);
  if (uVar53 < *(ulonglong *)(lVar14 + 0x18)) {
    uVar49 = uVar59;
  }
  uVar62 = uVar53 - *(ulonglong *)(lVar14 + 0x38);
  if (uVar53 < *(ulonglong *)(lVar14 + 0x38)) {
    uVar62 = uVar59;
  }
  plStack_210 = (longlong *)(uVar49 * 0x38 + *(longlong *)(lVar14 + 8));
  uVar53 = *(ulonglong *)(lVar14 + 0x10) - uVar49;
  if (*(ulonglong *)(lVar14 + 0x10) < uVar49) {
    plStack_210 = (longlong *)0x8;
    uVar53 = uVar59;
  }
  plStack_218 = (longlong *)(uVar62 * 0x38 + *(longlong *)(lVar14 + 0x28));
  uVar49 = *(ulonglong *)(lVar14 + 0x30) - uVar62;
  if (*(ulonglong *)(lVar14 + 0x30) < uVar62) {
    plStack_218 = (longlong *)0x8;
    uVar49 = uVar59;
  }
  uVar15 = *param_8;
  uVar16 = param_8[4];
  uVar17 = param_8[8];
  uVar18 = param_8[0xc];
  lStack_200 = param_7[4];
  puVar19 = (undefined4 *)param_7[6];
  uStack_244 = *(undefined4 *)((longlong)param_7 + 0x3c);
  lStack_1f8 = param_7[8];
  puVar20 = (undefined4 *)param_7[10];
  uStack_240 = *(undefined4 *)((longlong)param_7 + 0x5c);
  lStack_2c0 = param_7[0xc];
  puVar21 = (undefined4 *)param_7[0xe];
  uStack_23c = *(undefined4 *)((longlong)param_7 + 0x7c);
  lStack_290 = param_7[0x10];
  puVar22 = (undefined4 *)param_7[0x12];
  uStack_220 = *(undefined4 *)((longlong)param_7 + 0x9c);
  *puStack_2c8 = (*(longlong *)(lVar14 + 0x40) - uVar49) - uVar53;
  uVar46 = _DAT_14303c680;
  uVar45 = _UNK_14303c668;
  pppppppbVar44 = _DAT_14303c660;
  uVar43 = _UNK_142f6944c;
  uVar42 = _UNK_142f69448;
  uVar41 = _UNK_142f69444;
  fVar40 = _DAT_142e37ad8;
  fVar39 = _DAT_142e36f28;
  plVar70 = plStack_210 + uVar53 * 7;
  plVar69 = plStack_218 + uVar49 * 7;
  puStack_1c0 = (ulonglong *)*param_11;
  pbStack_208 = (byte *)*param_9;
  uStack_f8 = *(undefined4 *)((longlong)param_2 + 0x1c);
  plStack_1c8 = (longlong *)*param_2;
  puStack_110 = (undefined4 *)param_2[2];
  lStack_1d8 = *param_10;
  uStack_1ac = *(undefined4 *)((longlong)param_4 + 0x1c);
  uStack_288 = *param_4;
  puStack_1f0 = (undefined4 *)param_4[2];
  uStack_248 = *(undefined4 *)((longlong)param_13 + 0x1c);
  lVar23 = *param_13;
  puVar24 = (undefined4 *)param_13[2];
  uStack_238 = *(undefined4 *)((longlong)param_7 + 0x1c);
  lStack_2b8 = *param_7;
  puVar25 = (undefined4 *)param_7[2];
  uStack_234 = *(undefined4 *)((longlong)param_3 + 0x1c);
  lStack_2b0 = *param_3;
  puVar26 = (undefined4 *)param_3[2];
  uStack_228 = *(undefined4 *)((longlong)param_5 + 0x1c);
  lStack_2a0 = *param_5;
  puVar27 = (undefined4 *)param_5[2];
  uStack_224 = *(undefined4 *)((longlong)param_6 + 0x1c);
  lStack_298 = *param_6;
  puVar28 = (undefined4 *)param_6[2];
  puVar1 = (undefined4 *)(lStack_1d8 + 0x3c);
  lVar29 = *param_12;
  lVar30 = param_12[1];
  puStack_2a8 = puStack_1c0 + 4;
  plStack_1b8 = plStack_1c8 + 0xc;
  lVar14 = lStack_2b8 + 0x20;
  lVar2 = lStack_200 + 0x20;
  lVar3 = lStack_1f8 + 0x20;
  lVar11 = lStack_2c0 + 0x20;
  puVar4 = puStack_1c0 + 10;
  lVar5 = lStack_2b0 + 0x20;
  plVar6 = plStack_1c8 + 4;
  lVar7 = lStack_290 + 0x20;
  lVar8 = lStack_2a0 + 0x20;
  lVar9 = lStack_298 + 0x20;
  do {
    do {
      pppppppbVar60 = &ppppppbStack_188;
      if ((plStack_210 == (longlong *)0x0) || (plStack_210 == plVar70)) {
        if ((plStack_218 == (longlong *)0x0) || (plStack_218 == plVar69)) {
          return;
        }
        plStack_210 = (longlong *)0x0;
        plVar57 = plStack_218;
        plStack_218 = plStack_218 + 7;
      }
      else {
        plVar57 = plStack_210;
        plStack_210 = plStack_210 + 7;
      }
      *puStack_2c8 = *puStack_2c8 + 1;
      pppppbStack_2d8 = (byte *****)plVar57[3];
      lStack_2d0 = plVar57[4];
      lVar51 = plVar57[5];
      lVar52 = *plVar57;
      pppppppbVar31 = (byte *******)plVar57[1];
      fVar75 = *(float *)((longlong)plVar57 + 0x2c);
      iStack_1cc = (int)plVar57[2];
      uVar12 = *(undefined4 *)((longlong)plVar57 + 0x14);
      puVar50 = puStack_2c8;
      if ((lVar52 == 1) && (puVar50 = puStack_1c0, puStack_1c0[3] != 0)) {
        ppppppbStack_188 = (byte ******)pppppppbVar31;
        uVar49 = pdb_1400af0a0(puStack_2a8,pppppppbVar60);
        uVar53 = *puStack_1c0;
        bVar73 = (byte)(uVar49 >> 0x39);
        auVar77 = ZEXT216(CONCAT11(bVar73,bVar73));
        auVar77 = pshuflw(auVar77,auVar77,0);
        lVar66 = 0;
        while( true ) {
          puVar50 = (ulonglong *)(uVar49 & puStack_1c0[1]);
          auVar78 = *(undefined1 (*) [16])(uVar53 + (longlong)puVar50);
          auVar83[0] = -(auVar78[0] == auVar77[0]);
          auVar83[1] = -(auVar78[1] == auVar77[1]);
          auVar83[2] = -(auVar78[2] == auVar77[2]);
          auVar83[3] = -(auVar78[3] == auVar77[3]);
          auVar83[4] = -(auVar78[4] == auVar77[4]);
          auVar83[5] = -(auVar78[5] == auVar77[5]);
          auVar83[6] = -(auVar78[6] == auVar77[6]);
          auVar83[7] = -(auVar78[7] == auVar77[7]);
          auVar83[8] = -(auVar78[8] == auVar77[0]);
          auVar83[9] = -(auVar78[9] == auVar77[1]);
          auVar83[10] = -(auVar78[10] == auVar77[2]);
          auVar83[0xb] = -(auVar78[0xb] == auVar77[3]);
          auVar83[0xc] = -(auVar78[0xc] == auVar77[4]);
          auVar83[0xd] = -(auVar78[0xd] == auVar77[5]);
          auVar83[0xe] = -(auVar78[0xe] == auVar77[6]);
          auVar83[0xf] = -(auVar78[0xf] == auVar77[7]);
          uVar67 = (ushort)(SUB161(auVar83 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar83 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar83 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar83 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar83 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar83 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar83 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar83 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar83 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar83 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar83 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar83 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar83 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar83 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar83 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar83[0xf] >> 7) << 0xf;
          uVar64 = (uint)uVar67;
          while (uVar67 != 0) {
            uVar34 = 0;
            for (uVar35 = uVar64; (uVar35 & 1) == 0; uVar35 = uVar35 >> 1 | 0x80000000) {
              uVar34 = uVar34 + 1;
            }
            lVar68 = ((ulonglong)uVar34 + (longlong)puVar50 & puStack_1c0[1]) * -0x2b0;
            if (pppppppbVar31 == *(byte ********)((uVar53 - 0x2b0) + lVar68)) {
              lVar68 = uVar53 + lVar68;
              if ((*(ulonglong *)(lVar68 + -0x298) < 2) || (*(float *)(lVar68 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14303ccf0);
              }
              if ((1 < *(uint *)(lVar68 + -0x50)) ||
                 (puVar50 = (ulonglong *)0x0, *(byte *)(lVar68 + -9) != *pbStack_208))
              goto LAB_140a4a1b0;
              bVar38 = true;
              uStack_104 = 0;
              goto LAB_140a4a1bb;
            }
            uVar67 = (ushort)(uVar64 - 1) & (ushort)uVar64;
            uVar64 = CONCAT22((short)(uVar64 - 1 >> 0x10),uVar67);
          }
          auVar79[0] = -(auVar78[0] == -1);
          auVar79[1] = -(auVar78[1] == -1);
          auVar79[2] = -(auVar78[2] == -1);
          auVar79[3] = -(auVar78[3] == -1);
          auVar79[4] = -(auVar78[4] == -1);
          auVar79[5] = -(auVar78[5] == -1);
          auVar79[6] = -(auVar78[6] == -1);
          auVar79[7] = -(auVar78[7] == -1);
          auVar79[8] = -(auVar78[8] == -1);
          auVar79[9] = -(auVar78[9] == -1);
          auVar79[10] = -(auVar78[10] == -1);
          auVar79[0xb] = -(auVar78[0xb] == -1);
          auVar79[0xc] = -(auVar78[0xc] == -1);
          auVar79[0xd] = -(auVar78[0xd] == -1);
          auVar79[0xe] = -(auVar78[0xe] == -1);
          auVar79[0xf] = -(auVar78[0xf] == -1);
          if ((((((((((((((((SUB161(auVar79 >> 7,0) & 1) != 0 || (SUB161(auVar79 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar79 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar79 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar79 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar79 >> 0x2f,0) & 1) != 0) || (SUB161(auVar79 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar79 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar79 >> 0x47,0) & 1) != 0) || (SUB161(auVar79 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar79 >> 0x57,0) & 1) != 0) || (SUB161(auVar79 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar79 >> 0x67,0) & 1) != 0) || (SUB161(auVar79 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar79 >> 0x77,0) & 1) != 0) || auVar79[0xf] < '\0') break;
          uVar49 = (longlong)puVar50 + lVar66 + 0x10;
          lVar66 = lVar66 + 0x10;
        }
      }
LAB_140a4a1b0:
      uStack_104 = (undefined4)CONCAT71((int7)((ulonglong)puVar50 >> 8),1);
      bVar38 = false;
LAB_140a4a1bb:
      ppppppbStack_188 = (byte ******)pppppbStack_2d8;
      pppppbStack_180 = (byte *****)lStack_2d0;
      *puVar24 = uStack_248;
      lVar66 = *(longlong *)(lVar23 + 0x30);
      uVar71 = *(undefined8 *)(lVar23 + 0x40);
      if (lVar66 == *(longlong *)(lVar23 + 0x20)) {
        pdb_142d7e7c0(lVar23 + 0x20);
      }
      lVar68 = *(longlong *)(lVar23 + 0x28);
      lVar58 = lVar66 * 0x30;
      *(undefined4 *)(lVar68 + lVar58) = 0;
      plVar57 = (longlong *)(lVar68 + 4 + lVar58);
      *plVar57 = (longlong)ppppppbStack_188;
      plVar57[1] = (longlong)pppppbStack_180;
      auVar36._4_8_ = pppppbStack_180;
      auVar36._0_4_ = uVar41;
      auVar77._0_8_ = auVar36._0_8_ << 0x20;
      auVar77._8_4_ = uVar42;
      auVar77._12_4_ = uVar43;
      auVar78._4_12_ = auVar77._4_12_;
      auVar78._0_4_ = fVar75;
      *(longlong *)(lVar68 + 0x1c + lVar58) = auVar78._0_8_;
      *(undefined1 *)(lVar68 + 0x24 + lVar58) = 1;
      *(undefined8 *)(lVar68 + 0x28 + lVar58) = uVar71;
      *(longlong *)(lVar23 + 0x30) = lVar66 + 1;
      *(longlong *)(lVar23 + 0x40) = *(longlong *)(lVar23 + 0x40) + 1;
      *puStack_110 = uStack_f8;
      pdb_140def170(pppppppbVar60,&pppppbStack_2d8);
      pdb_1415ecb30(&ppppppbStack_1a8,pppppppbVar60);
      pdb_140080c90(&uStack_280,&ppppppbStack_1a8,0);
      if (SBORROW8(0,(longlong)uStack_280)) {
        ppppppbStack_188 = (byte ******)uStack_278;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14335e278,0x2b,&ppppppbStack_188,&UNK_14335e258,&UNK_14303cc60);
      }
      uStack_158 = uStack_250;
      pppppbStack_178 = (byte *****)CONCAT44(uStack_26c,uStack_270);
      uStack_170 = CONCAT44(uStack_264,uStack_268);
      pbStack_168 = (byte *)CONCAT62(uStack_25e,CONCAT11(bStack_25f,uStack_260));
      uStack_160 = uStack_258;
      ppppppbStack_188 = (byte ******)uStack_280;
      pppppbStack_180 = (byte *****)uStack_278;
      uStack_150 = 2;
      uStack_11a = (undefined2)
                   (CONCAT16((DAT_143cb2d0c == '\0') * '\x05',CONCAT51(0x100000000,*pbStack_208)) >>
                   0x28);
      iStack_120 = (uint6)*pbStack_208 << 8;
      ppppppbStack_130 = (byte ******)pppppppbVar44;
      uStack_128 = uVar45;
      uStack_134 = (int)lVar51;
      lVar51 = pdb_140b0eb60(plStack_1c8);
      plVar57 = plStack_1c8;
    } while (lVar51 != 1);
    *puStack_110 = uStack_f8;
    ppppppbStack_1a8 = (byte ******)pppppppbVar60;
    lVar51 = pdb_1417bd890(plStack_1c8,&ppppppbStack_1a8);
    if (lVar51 == 0) {
      if (1 < *_DAT_143ca8e90) {
        uStack_280 = &ppppppbStack_1a8;
        uStack_278 = pdb_140c04ef0;
        ppppppbStack_188 = (byte ******)0x0;
        pppppbStack_180 = (byte *****)&UNK_143021dde;
        pppppbStack_178 = (byte *****)0x2b;
        uStack_170 = 0;
        pbStack_168 = &UNK_143021da7;
        uStack_160 = 0x36;
        uStack_158 = 2;
        uStack_150 = 0x43021dde;
        uStack_14c = 1;
        uStack_148 = 0x2b;
        uStack_144 = 0;
        uStack_140 = 1;
        uStack_13c = 0xfd;
        uStack_138 = 0x43021d78;
        uStack_134 = 1;
        ppppppbStack_130 = (byte ******)&uStack_280;
        pdb_140f332f0(&uStack_f1,&ppppppbStack_188);
      }
    }
    else {
      pdb_1403b05d0(plStack_1b8,pppppppbVar60);
      *(float *)(lVar51 + 0x58) = fVar75;
    }
    *puStack_110 = uStack_f8;
    ppppppbStack_1a8 = (byte ******)pppppppbVar60;
    lVar51 = pdb_1417bd890(plVar57,&ppppppbStack_1a8);
    if (lVar51 == 0) {
      if (1 < *_DAT_143ca8e90) {
        uStack_280 = &ppppppbStack_1a8;
        uStack_278 = pdb_140c04ef0;
        ppppppbStack_188 = (byte ******)0x0;
        pppppbStack_180 = (byte *****)&UNK_143021dde;
        pppppbStack_178 = (byte *****)0x2b;
        uStack_170 = 0;
        pbStack_168 = &UNK_143021da7;
        uStack_160 = 0x36;
        uStack_158 = 2;
        uStack_150 = 0x43021dde;
        uStack_14c = 1;
        uStack_148 = 0x2b;
        uStack_144 = 0;
        uStack_140 = 1;
        uStack_13c = 0xfd;
        uStack_138 = 0x43021d78;
        uStack_134 = 1;
        ppppppbStack_130 = (byte ******)&uStack_280;
        pdb_140f332f0(&uStack_f1,&ppppppbStack_188);
      }
    }
    else {
      pdb_1403b05d0(plStack_1b8,pppppppbVar60);
      *(undefined4 *)(lVar51 + 0x38) = 0;
      *(byte ******)(lVar51 + 0x3c) = pppppbStack_2d8;
      *(longlong *)(lVar51 + 0x44) = lStack_2d0;
    }
    pdb_140a4db50(&uStack_280,lVar52,pppppppbVar31,uVar15,uVar16,uVar17,uVar18,puStack_1c0,param_12,
                  lStack_1d8,*pbStack_208);
    uVar13 = uStack_260;
    *puStack_110 = uStack_f8;
    ppppppbStack_100 = (byte ******)pppppppbVar60;
    lVar52 = pdb_1417bd890(plVar57,&ppppppbStack_100);
    if (lVar52 == 0) {
      if (1 < *_DAT_143ca8e90) {
        ppppppbStack_1a8 = (byte ******)&ppppppbStack_100;
        pcStack_1a0 = pdb_140c04ef0;
        ppppppbStack_188 = (byte ******)0x0;
        pppppbStack_180 = (byte *****)&UNK_143021dde;
        pppppbStack_178 = (byte *****)0x2b;
        uStack_170 = 0;
        pbStack_168 = &UNK_143021da7;
        uStack_160 = 0x36;
        uStack_158 = 2;
        uStack_150 = 0x43021dde;
        uStack_14c = 1;
        uStack_148 = 0x2b;
        uStack_144 = 0;
        uStack_140 = 1;
        uStack_13c = 0xfd;
        uStack_138 = 0x43021d78;
        uStack_134 = 1;
        ppppppbStack_130 = (byte ******)&ppppppbStack_1a8;
        pdb_140f332f0(&uStack_f1,&ppppppbStack_188);
      }
    }
    else {
      pdb_1403b05d0(plStack_1b8,pppppppbVar60);
      *(undefined1 *)(lVar52 + 0x6e) = uVar13;
    }
    bVar73 = bStack_25f;
    *puStack_110 = uStack_f8;
    ppppppbStack_100 = (byte ******)pppppppbVar60;
    lVar52 = pdb_1417bd890(plVar57,&ppppppbStack_100);
    if (lVar52 == 0) {
      if (1 < *_DAT_143ca8e90) {
        ppppppbStack_1a8 = (byte ******)&ppppppbStack_100;
        pcStack_1a0 = pdb_140c04ef0;
        ppppppbStack_188 = (byte ******)0x0;
        pppppbStack_180 = (byte *****)&UNK_143021dde;
        pppppbStack_178 = (byte *****)0x2b;
        uStack_170 = 0;
        pbStack_168 = &UNK_143021da7;
        uStack_160 = 0x36;
        uStack_158 = 2;
        uStack_150 = 0x43021dde;
        uStack_14c = 1;
        uStack_148 = 0x2b;
        uStack_144 = 0;
        uStack_140 = 1;
        uStack_13c = 0xfd;
        uStack_138 = 0x43021d78;
        uStack_134 = 1;
        ppppppbStack_130 = (byte ******)&ppppppbStack_1a8;
        pdb_140f332f0(&uStack_f1,&ppppppbStack_188);
      }
    }
    else {
      pdb_1403b05d0(plStack_1b8,pppppppbVar60);
      *(byte *)(lVar52 + 0x69) = bVar73;
    }
    if ((bVar38) &&
       (plVar57 = plStack_1c8, ppppppbStack_188 = (byte ******)pppppppbVar31, puStack_1c0[3] != 0))
    {
      uVar49 = pdb_1400af0a0(puStack_2a8,&ppppppbStack_188);
      uVar53 = *puStack_1c0;
      bVar74 = (byte)(uVar49 >> 0x39);
      auVar77 = ZEXT216(CONCAT11(bVar74,bVar74));
      auVar77 = pshuflw(auVar77,auVar77,0);
      lVar52 = 0;
      while( true ) {
        uVar49 = uVar49 & puStack_1c0[1];
        auVar78 = *(undefined1 (*) [16])(uVar53 + uVar49);
        auVar84[0] = -(auVar78[0] == auVar77[0]);
        auVar84[1] = -(auVar78[1] == auVar77[1]);
        auVar84[2] = -(auVar78[2] == auVar77[2]);
        auVar84[3] = -(auVar78[3] == auVar77[3]);
        auVar84[4] = -(auVar78[4] == auVar77[4]);
        auVar84[5] = -(auVar78[5] == auVar77[5]);
        auVar84[6] = -(auVar78[6] == auVar77[6]);
        auVar84[7] = -(auVar78[7] == auVar77[7]);
        auVar84[8] = -(auVar78[8] == auVar77[0]);
        auVar84[9] = -(auVar78[9] == auVar77[1]);
        auVar84[10] = -(auVar78[10] == auVar77[2]);
        auVar84[0xb] = -(auVar78[0xb] == auVar77[3]);
        auVar84[0xc] = -(auVar78[0xc] == auVar77[4]);
        auVar84[0xd] = -(auVar78[0xd] == auVar77[5]);
        auVar84[0xe] = -(auVar78[0xe] == auVar77[6]);
        auVar84[0xf] = -(auVar78[0xf] == auVar77[7]);
        uVar67 = (ushort)(SUB161(auVar84 >> 7,0) & 1) | (ushort)(SUB161(auVar84 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar84 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar84 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar84 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar84 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar84 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar84 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar84 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar84 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar84 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar84 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar84 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar84 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar84 >> 0x77,0) & 1) << 0xe | (ushort)(auVar84[0xf] >> 7) << 0xf
        ;
        uVar64 = (uint)uVar67;
        while (uVar67 != 0) {
          uVar34 = 0;
          for (uVar35 = uVar64; (uVar35 & 1) == 0; uVar35 = uVar35 >> 1 | 0x80000000) {
            uVar34 = uVar34 + 1;
          }
          lVar51 = (uVar34 + uVar49 & puStack_1c0[1]) * -0x2b0;
          if (pppppppbVar31 == *(byte ********)((uVar53 - 0x2b0) + lVar51)) {
            lVar51 = uVar53 + lVar51;
            if ((*(ulonglong *)(lVar51 + -0x298) < 2) || (*(float *)(lVar51 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14303ccd8);
            }
            *puStack_110 = uStack_f8;
            uVar13 = *(undefined1 *)(lVar51 + -10);
            ppppppbStack_100 = (byte ******)pppppppbVar60;
            lVar52 = pdb_1417bd890(plStack_1c8,&ppppppbStack_100);
            if (lVar52 == 0) {
              if (1 < *_DAT_143ca8e90) {
                ppppppbStack_1a8 = (byte ******)&ppppppbStack_100;
                pcStack_1a0 = pdb_140c04ef0;
                ppppppbStack_188 = (byte ******)0x0;
                pppppbStack_180 = (byte *****)&UNK_143021dde;
                pppppbStack_178 = (byte *****)0x2b;
                uStack_170 = 0;
                pbStack_168 = &UNK_143021da7;
                uStack_160 = 0x36;
                uStack_158 = 2;
                uStack_150 = 0x43021dde;
                uStack_14c = 1;
                uStack_148 = 0x2b;
                uStack_144 = 0;
                uStack_140 = 1;
                uStack_13c = 0xfd;
                uStack_138 = 0x43021d78;
                uStack_134 = 1;
                ppppppbStack_130 = (byte ******)&ppppppbStack_1a8;
                pdb_140f332f0(&uStack_f1,&ppppppbStack_188);
              }
            }
            else {
              pdb_1403b05d0(plStack_1b8,pppppppbVar60);
              *(undefined1 *)(lVar52 + 0x6c) = uVar13;
            }
            *puStack_110 = uStack_f8;
            puVar72 = (undefined4 *)(lVar51 + -0x10);
            goto LAB_140a4aa73;
          }
          uVar67 = (ushort)(uVar64 - 1) & (ushort)uVar64;
          uVar64 = CONCAT22((short)(uVar64 - 1 >> 0x10),uVar67);
        }
        auVar80[0] = -(auVar78[0] == -1);
        auVar80[1] = -(auVar78[1] == -1);
        auVar80[2] = -(auVar78[2] == -1);
        auVar80[3] = -(auVar78[3] == -1);
        auVar80[4] = -(auVar78[4] == -1);
        auVar80[5] = -(auVar78[5] == -1);
        auVar80[6] = -(auVar78[6] == -1);
        auVar80[7] = -(auVar78[7] == -1);
        auVar80[8] = -(auVar78[8] == -1);
        auVar80[9] = -(auVar78[9] == -1);
        auVar80[10] = -(auVar78[10] == -1);
        auVar80[0xb] = -(auVar78[0xb] == -1);
        auVar80[0xc] = -(auVar78[0xc] == -1);
        auVar80[0xd] = -(auVar78[0xd] == -1);
        auVar80[0xe] = -(auVar78[0xe] == -1);
        auVar80[0xf] = -(auVar78[0xf] == -1);
        plVar57 = plStack_1c8;
        if ((((((((((((((((SUB161(auVar80 >> 7,0) & 1) != 0 || (SUB161(auVar80 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar80 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar80 >> 0x1f,0) & 1) != 0) || (SUB161(auVar80 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar80 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar80 >> 0x37,0) & 1) != 0) || (SUB161(auVar80 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar80 >> 0x47,0) & 1) != 0) || (SUB161(auVar80 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar80 >> 0x57,0) & 1) != 0) || (SUB161(auVar80 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar80 >> 0x67,0) & 1) != 0) || (SUB161(auVar80 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar80 >> 0x77,0) & 1) != 0) || auVar80[0xf] < '\0') break;
        uVar49 = uVar49 + lVar52 + 0x10;
        lVar52 = lVar52 + 0x10;
      }
    }
    *puStack_110 = uStack_f8;
    uVar13 = *(undefined1 *)(lStack_1d8 + 0x5d);
    ppppppbStack_100 = (byte ******)pppppppbVar60;
    lVar52 = pdb_1417bd890(plVar57,&ppppppbStack_100);
    if (lVar52 == 0) {
      if (1 < *_DAT_143ca8e90) {
        ppppppbStack_1a8 = (byte ******)&ppppppbStack_100;
        pcStack_1a0 = pdb_140c04ef0;
        ppppppbStack_188 = (byte ******)0x0;
        pppppbStack_180 = (byte *****)&UNK_143021dde;
        pppppbStack_178 = (byte *****)0x2b;
        uStack_170 = 0;
        pbStack_168 = &UNK_143021da7;
        uStack_160 = 0x36;
        uStack_158 = 2;
        uStack_150 = 0x43021dde;
        uStack_14c = 1;
        uStack_148 = 0x2b;
        uStack_144 = 0;
        uStack_140 = 1;
        uStack_13c = 0xfd;
        uStack_138 = 0x43021d78;
        uStack_134 = 1;
        ppppppbStack_130 = (byte ******)&ppppppbStack_1a8;
        pdb_140f332f0(&uStack_f1,&ppppppbStack_188);
      }
    }
    else {
      pdb_1403b05d0(plStack_1b8,pppppppbVar60);
      *(undefined1 *)(lVar52 + 0x6c) = uVar13;
    }
    *puStack_110 = uStack_f8;
    puVar72 = puVar1;
LAB_140a4aa73:
    plVar57 = plStack_1c8;
    uVar87 = *puVar72;
    ppppppbStack_100 = (byte ******)pppppppbVar60;
    lVar52 = pdb_1417bd890(plStack_1c8,&ppppppbStack_100);
    if (lVar52 == 0) {
      if (1 < *_DAT_143ca8e90) {
        ppppppbStack_1a8 = (byte ******)&ppppppbStack_100;
        pcStack_1a0 = pdb_140c04ef0;
        ppppppbStack_188 = (byte ******)0x0;
        pppppbStack_180 = (byte *****)&UNK_143021dde;
        pppppbStack_178 = (byte *****)0x2b;
        uStack_170 = 0;
        pbStack_168 = &UNK_143021da7;
        uStack_160 = 0x36;
        uStack_158 = 2;
        uStack_150 = 0x43021dde;
        uStack_14c = 1;
        uStack_148 = 0x2b;
        uStack_144 = 0;
        uStack_140 = 1;
        uStack_13c = 0xfd;
        uStack_138 = 0x43021d78;
        uStack_134 = 1;
        ppppppbStack_130 = (byte ******)&ppppppbStack_1a8;
        pdb_140f332f0(&uStack_f1,&ppppppbStack_188);
      }
    }
    else {
      pdb_1403b05d0(plStack_1b8,pppppppbVar60);
      *(undefined4 *)(lVar52 + 0x60) = uVar87;
    }
    uVar87 = 0;
    if (((0.0 < fVar75 & (byte)uStack_104._0_1_ & bVar73) != 0) ||
       (uVar87 = uVar12, iStack_1cc != 0)) {
      *puStack_110 = uStack_f8;
      ppppppbStack_100 = (byte ******)pppppppbVar60;
      lVar52 = pdb_1417bd890(plVar57,&ppppppbStack_100);
      if (lVar52 == 0) {
        if (1 < *_DAT_143ca8e90) {
          ppppppbStack_1a8 = (byte ******)&ppppppbStack_100;
          pcStack_1a0 = pdb_140c04ef0;
          ppppppbStack_188 = (byte ******)0x0;
          pppppbStack_180 = (byte *****)&UNK_143021dde;
          pppppbStack_178 = (byte *****)0x2b;
          uStack_170 = 0;
          pbStack_168 = &UNK_143021da7;
          uStack_160 = 0x36;
          uStack_158 = 2;
          uStack_150 = 0x43021dde;
          uStack_14c = 1;
          uStack_148 = 0x2b;
          uStack_144 = 0;
          uStack_140 = 1;
          uStack_13c = 0xfd;
          uStack_138 = 0x43021d78;
          uStack_134 = 1;
          ppppppbStack_130 = (byte ******)&ppppppbStack_1a8;
          pdb_140f332f0(&uStack_f1,&ppppppbStack_188);
        }
      }
      else {
        pdb_1403b05d0(plStack_1b8,pppppppbVar60);
        *(undefined4 *)(lVar52 + 100) = uVar87;
      }
    }
    uVar12 = (undefined4)uStack_280;
    *puVar25 = uStack_238;
    lVar52 = *(longlong *)(lStack_2b8 + 0x30);
    uVar71 = *(undefined8 *)(lStack_2b8 + 0x40);
    if (lVar52 == *(longlong *)(lStack_2b8 + 0x20)) {
      pdb_142d7e830(lVar14);
    }
    lVar51 = *(longlong *)(lStack_2b8 + 0x28);
    *(undefined8 *)(lVar51 + lVar52 * 0x18) = uVar71;
    *(byte ********)(lVar51 + 8 + lVar52 * 0x18) = pppppppbVar60;
    *(undefined4 *)(lVar51 + 0x10 + lVar52 * 0x18) = uVar12;
    *(undefined1 *)(lVar51 + 0x14 + lVar52 * 0x18) = 0;
    *(longlong *)(lStack_2b8 + 0x30) = lVar52 + 1;
    *(longlong *)(lStack_2b8 + 0x40) = *(longlong *)(lStack_2b8 + 0x40) + 1;
    uVar87 = (undefined4)uStack_278;
    *puVar19 = uStack_244;
    lVar52 = *(longlong *)(lStack_200 + 0x30);
    uVar71 = *(undefined8 *)(lStack_200 + 0x40);
    if (lVar52 == *(longlong *)(lStack_200 + 0x20)) {
      pdb_142d7e830(lVar2);
    }
    iStack_1cc = uVar12;
    lVar51 = *(longlong *)(lStack_200 + 0x28);
    *(undefined8 *)(lVar51 + lVar52 * 0x18) = uVar71;
    *(byte ********)(lVar51 + 8 + lVar52 * 0x18) = pppppppbVar60;
    uStack_230 = uVar87;
    *(undefined4 *)(lVar51 + 0x10 + lVar52 * 0x18) = uVar87;
    *(undefined1 *)(lVar51 + 0x14 + lVar52 * 0x18) = 0;
    *(longlong *)(lStack_200 + 0x30) = lVar52 + 1;
    *(longlong *)(lStack_200 + 0x40) = *(longlong *)(lStack_200 + 0x40) + 1;
    iVar65 = uStack_278._4_4_;
    *puVar20 = uStack_240;
    lVar52 = *(longlong *)(lStack_1f8 + 0x30);
    uVar71 = *(undefined8 *)(lStack_1f8 + 0x40);
    if (lVar52 == *(longlong *)(lStack_1f8 + 0x20)) {
      pdb_142d7e830(lVar3);
    }
    uVar12 = uStack_270;
    lVar51 = *(longlong *)(lStack_1f8 + 0x28);
    *(undefined8 *)(lVar51 + lVar52 * 0x18) = uVar71;
    *(byte ********)(lVar51 + 8 + lVar52 * 0x18) = pppppppbVar60;
    *(int *)(lVar51 + 0x10 + lVar52 * 0x18) = iVar65;
    *(undefined1 *)(lVar51 + 0x14 + lVar52 * 0x18) = 0;
    *(longlong *)(lStack_1f8 + 0x30) = lVar52 + 1;
    *(longlong *)(lStack_1f8 + 0x40) = *(longlong *)(lStack_1f8 + 0x40) + 1;
    *puVar21 = uStack_23c;
    lVar52 = *(longlong *)(lStack_2c0 + 0x30);
    uVar71 = *(undefined8 *)(lStack_2c0 + 0x40);
    if (lVar52 == *(longlong *)(lStack_2c0 + 0x20)) {
      pdb_142d7e830(lVar11);
    }
    lVar51 = *(longlong *)(lStack_2c0 + 0x28);
    *(undefined8 *)(lVar51 + lVar52 * 0x18) = uVar71;
    *(byte ********)(lVar51 + 8 + lVar52 * 0x18) = pppppppbVar60;
    *(undefined4 *)(lVar51 + 0x10 + lVar52 * 0x18) = uVar12;
    *(undefined1 *)(lVar51 + 0x14 + lVar52 * 0x18) = 0;
    *(longlong *)(lStack_2c0 + 0x30) = lVar52 + 1;
    *(longlong *)(lStack_2c0 + 0x40) = *(longlong *)(lStack_2c0 + 0x40) + 1;
    fVar75 = (float)pdb_140dedcd0(&UNK_14305c380);
    plVar57 = plStack_1c8;
    lVar52 = lStack_2b0;
    fVar76 = (fVar75 * _DAT_142e37878 + (fVar39 - fVar75) * _DAT_142e37adc) / fVar40;
    fVar75 = 0.0;
    if (0.0 <= fVar76) {
      fVar75 = fVar76;
    }
    fVar76 = fVar39;
    if (fVar75 <= fVar39) {
      fVar76 = fVar75;
    }
    uStack_104 = CONCAT31(uStack_104._1_3_,*(undefined1 *)(lStack_1d8 + 0x5e));
    if ((bVar38) && (ppppppbStack_188 = (byte ******)pppppppbVar31, puStack_1c0[9] != 0)) {
      uVar53 = pdb_1400af0a0(puVar4,&ppppppbStack_188);
      bVar73 = (byte)(uVar53 >> 0x39);
      auVar77 = ZEXT216(CONCAT11(bVar73,bVar73));
      auVar77 = pshuflw(auVar77,auVar77,0);
      lVar51 = 0;
      while( true ) {
        uVar53 = uVar53 & puStack_1c0[7];
        pcVar10 = (char *)(puStack_1c0[6] + uVar53);
        auVar85[0] = -(*pcVar10 == auVar77[0]);
        auVar85[1] = -(pcVar10[1] == auVar77[1]);
        auVar85[2] = -(pcVar10[2] == auVar77[2]);
        auVar85[3] = -(pcVar10[3] == auVar77[3]);
        auVar85[4] = -(pcVar10[4] == auVar77[4]);
        auVar85[5] = -(pcVar10[5] == auVar77[5]);
        auVar85[6] = -(pcVar10[6] == auVar77[6]);
        auVar85[7] = -(pcVar10[7] == auVar77[7]);
        auVar85[8] = -(pcVar10[8] == auVar77[0]);
        auVar85[9] = -(pcVar10[9] == auVar77[1]);
        auVar85[10] = -(pcVar10[10] == auVar77[2]);
        auVar85[0xb] = -(pcVar10[0xb] == auVar77[3]);
        auVar85[0xc] = -(pcVar10[0xc] == auVar77[4]);
        auVar85[0xd] = -(pcVar10[0xd] == auVar77[5]);
        auVar85[0xe] = -(pcVar10[0xe] == auVar77[6]);
        auVar85[0xf] = -(pcVar10[0xf] == auVar77[7]);
        uVar67 = (ushort)(SUB161(auVar85 >> 7,0) & 1) | (ushort)(SUB161(auVar85 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar85 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar85 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar85 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar85 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar85 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar85 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar85 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar85 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar85 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar85 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar85 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar85 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar85 >> 0x77,0) & 1) << 0xe | (ushort)(auVar85[0xf] >> 7) << 0xf
        ;
        uVar64 = (uint)uVar67;
        while (uVar67 != 0) {
          uVar34 = 0;
          for (uVar35 = uVar64; (uVar35 & 1) == 0; uVar35 = uVar35 >> 1 | 0x80000000) {
            uVar34 = uVar34 + 1;
          }
          lVar66 = puStack_1c0[6] + (uVar34 + uVar53 & puStack_1c0[7]) * -0x10;
          if (pppppppbVar31 == *(byte ********)(lVar66 + -0x10)) {
            uVar53 = *(ulonglong *)(lVar66 + -8);
            uVar49 = uVar53 & 0xffffffff;
            if ((((uVar49 != 0) &&
                 (uVar49 = uVar49 ^ 0xffffffff, uVar49 < *(ulonglong *)(lVar30 + 0x10))) &&
                (piVar55 = (int *)(uVar49 * 0x18 + *(longlong *)(lVar30 + 8)),
                piVar55[4] == (int)(uVar53 >> 0x20))) &&
               (((*piVar55 != 0 &&
                 (uVar53 = *(ulonglong *)(piVar55 + 2),
                 (uVar53 & 0xffffffff) < *(ulonglong *)(lVar29 + 0x38))) &&
                ((*(ulonglong *)(*(longlong *)(lVar29 + 0x28) + (uVar53 >> 6 & 0x3ffffff) * 8) >>
                  (uVar53 & 0x3f) & 1) != 0)))) {
              lVar51 = *(longlong *)
                        (*(longlong *)
                          (*(longlong *)(lVar30 + 0x1a0) + 0x18 + (uVar53 >> 0x20) * 0x48) + 0x10 +
                        ~*(ulonglong *)
                          (*(longlong *)
                            (*(longlong *)(lVar30 + 0x1a0) + 0x38 + (uVar53 >> 0x20) * 0x48) +
                          *(longlong *)(lVar29 + 0x110) * 8) * 0x30);
              uStack_104 = CONCAT31(uStack_104._1_3_,
                                    *(undefined1 *)
                                     (lVar51 + 0x3d + (ulonglong)(uint)~piVar55[1] * 0x58));
              fVar75 = *(float *)(lVar51 + 0x30 + (ulonglong)(uint)~piVar55[1] * 0x58);
              if (fVar75 <= _DAT_142e3b1d8) {
                fVar76 = fVar75;
              }
            }
            goto LAB_140a4afae;
          }
          uVar67 = (ushort)(uVar64 - 1) & (ushort)uVar64;
          uVar64 = CONCAT22((short)(uVar64 - 1 >> 0x10),uVar67);
        }
        auVar81[0] = -(*pcVar10 == -1);
        auVar81[1] = -(pcVar10[1] == -1);
        auVar81[2] = -(pcVar10[2] == -1);
        auVar81[3] = -(pcVar10[3] == -1);
        auVar81[4] = -(pcVar10[4] == -1);
        auVar81[5] = -(pcVar10[5] == -1);
        auVar81[6] = -(pcVar10[6] == -1);
        auVar81[7] = -(pcVar10[7] == -1);
        auVar81[8] = -(pcVar10[8] == -1);
        auVar81[9] = -(pcVar10[9] == -1);
        auVar81[10] = -(pcVar10[10] == -1);
        auVar81[0xb] = -(pcVar10[0xb] == -1);
        auVar81[0xc] = -(pcVar10[0xc] == -1);
        auVar81[0xd] = -(pcVar10[0xd] == -1);
        auVar81[0xe] = -(pcVar10[0xe] == -1);
        auVar81[0xf] = -(pcVar10[0xf] == -1);
        if ((((((((((((((((SUB161(auVar81 >> 7,0) & 1) != 0 || (SUB161(auVar81 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar81 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar81 >> 0x1f,0) & 1) != 0) || (SUB161(auVar81 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar81 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar81 >> 0x37,0) & 1) != 0) || (SUB161(auVar81 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar81 >> 0x47,0) & 1) != 0) || (SUB161(auVar81 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar81 >> 0x57,0) & 1) != 0) || (SUB161(auVar81 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar81 >> 0x67,0) & 1) != 0) || (SUB161(auVar81 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar81 >> 0x77,0) & 1) != 0) || auVar81[0xf] < '\0') break;
        uVar53 = uVar53 + lVar51 + 0x10;
        lVar51 = lVar51 + 0x10;
      }
    }
LAB_140a4afae:
    iStack_22c = iVar65;
    uVar12 = uStack_280._4_4_;
    *puVar26 = uStack_234;
    lVar51 = *(longlong *)(lVar52 + 0x30);
    uVar71 = *(undefined8 *)(lVar52 + 0x40);
    if (lVar51 == *(longlong *)(lVar52 + 0x20)) {
      pdb_142d7ee50(lVar5);
    }
    lVar66 = *(longlong *)(lVar52 + 0x28);
    lVar68 = lVar51 * 0x40;
    *(undefined8 *)(lVar66 + lVar68) = uVar71;
    *(byte ********)(lVar66 + 8 + lVar68) = pppppppbVar60;
    *(undefined4 *)(lVar66 + 0x10 + lVar68) = uVar12;
    *(ulonglong *)(lVar66 + 0x14 + lVar68) = CONCAT44(uStack_268,uStack_26c);
    *(undefined4 *)(lVar66 + 0x1c + lVar68) = uStack_264;
    *(undefined8 *)(lVar66 + 0x20 + lVar68) = 0;
    *(undefined4 *)(lVar66 + 0x28 + lVar68) = 0x3f000000;
    *(float *)(lVar66 + 0x2c + lVar68) = fVar76;
    *(undefined8 *)(lVar66 + 0x30 + lVar68) = uVar46;
    *(undefined1 *)(lVar66 + 0x38 + lVar68) = 0;
    *(code *)(lVar66 + 0x39 + lVar68) = uStack_104._0_1_;
    *(undefined1 *)(lVar66 + 0x3c + lVar68) = 0;
    pbVar63 = (byte *)(lVar51 + 1);
    *(byte **)(lVar52 + 0x30) = pbVar63;
    *(longlong *)(lVar52 + 0x40) = *(longlong *)(lVar52 + 0x40) + 1;
    *puStack_1f0 = uStack_1ac;
    ppppppbStack_1a8 = (byte ******)pppppppbVar60;
    if (plVar57[3] == 0) {
LAB_140a4b92b:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14303cc78);
    }
    uVar53 = pdb_1400af0a0(plVar6,&ppppppbStack_1a8);
    lVar52 = *plVar57;
    bVar73 = (byte)(uVar53 >> 0x39);
    auVar77 = ZEXT216(CONCAT11(bVar73,bVar73));
    auVar77 = pshuflw(auVar77,auVar77,0);
    lVar51 = 0;
    while( true ) {
      uVar53 = uVar53 & plVar57[1];
      auVar78 = *(undefined1 (*) [16])(lVar52 + uVar53);
      auVar86[0] = -(auVar78[0] == auVar77[0]);
      auVar86[1] = -(auVar78[1] == auVar77[1]);
      auVar86[2] = -(auVar78[2] == auVar77[2]);
      auVar86[3] = -(auVar78[3] == auVar77[3]);
      auVar86[4] = -(auVar78[4] == auVar77[4]);
      auVar86[5] = -(auVar78[5] == auVar77[5]);
      auVar86[6] = -(auVar78[6] == auVar77[6]);
      auVar86[7] = -(auVar78[7] == auVar77[7]);
      auVar86[8] = -(auVar78[8] == auVar77[0]);
      auVar86[9] = -(auVar78[9] == auVar77[1]);
      auVar86[10] = -(auVar78[10] == auVar77[2]);
      auVar86[0xb] = -(auVar78[0xb] == auVar77[3]);
      auVar86[0xc] = -(auVar78[0xc] == auVar77[4]);
      auVar86[0xd] = -(auVar78[0xd] == auVar77[5]);
      auVar86[0xe] = -(auVar78[0xe] == auVar77[6]);
      auVar86[0xf] = -(auVar78[0xf] == auVar77[7]);
      uVar67 = (ushort)(SUB161(auVar86 >> 7,0) & 1) | (ushort)(SUB161(auVar86 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar86 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar86 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar86 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar86 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar86 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar86 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar86 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar86 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar86 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar86 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar86 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar86 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar86 >> 0x77,0) & 1) << 0xe | (ushort)(auVar86[0xf] >> 7) << 0xf;
      uVar64 = (uint)uVar67;
      if (uVar67 != 0) break;
LAB_140a4b0f0:
      auVar82[0] = -(auVar78[0] == -1);
      auVar82[1] = -(auVar78[1] == -1);
      auVar82[2] = -(auVar78[2] == -1);
      auVar82[3] = -(auVar78[3] == -1);
      auVar82[4] = -(auVar78[4] == -1);
      auVar82[5] = -(auVar78[5] == -1);
      auVar82[6] = -(auVar78[6] == -1);
      auVar82[7] = -(auVar78[7] == -1);
      auVar82[8] = -(auVar78[8] == -1);
      auVar82[9] = -(auVar78[9] == -1);
      auVar82[10] = -(auVar78[10] == -1);
      auVar82[0xb] = -(auVar78[0xb] == -1);
      auVar82[0xc] = -(auVar78[0xc] == -1);
      auVar82[0xd] = -(auVar78[0xd] == -1);
      auVar82[0xe] = -(auVar78[0xe] == -1);
      auVar82[0xf] = -(auVar78[0xf] == -1);
      if ((((((((((((((((SUB161(auVar82 >> 7,0) & 1) != 0 || (SUB161(auVar82 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar82 >> 0x17,0) & 1) != 0) || (SUB161(auVar82 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar82 >> 0x27,0) & 1) != 0) || (SUB161(auVar82 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar82 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar82 >> 0x3f,0) & 1) != 0) || (SUB161(auVar82 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar82 >> 0x4f,0) & 1) != 0) || (SUB161(auVar82 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar82 >> 0x5f,0) & 1) != 0) || (SUB161(auVar82 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar82 >> 0x6f,0) & 1) != 0) || (SUB161(auVar82 >> 0x77,0) & 1) != 0) ||
          auVar82[0xf] < '\0') goto LAB_140a4b92b;
      uVar53 = uVar53 + lVar51 + 0x10;
      lVar51 = lVar51 + 0x10;
    }
    while( true ) {
      uVar34 = 0;
      for (uVar35 = uVar64; (uVar35 & 1) == 0; uVar35 = uVar35 >> 1 | 0x80000000) {
        uVar34 = uVar34 + 1;
      }
      lVar66 = (uVar34 + uVar53 & plVar57[1]) * -0x78;
      if (pppppppbVar60 == *(byte ********)(lVar52 + -0x78 + lVar66)) break;
      uVar67 = (ushort)(uVar64 - 1) & (ushort)uVar64;
      uVar64 = CONCAT22((short)(uVar64 - 1 >> 0x10),uVar67);
      if (uVar67 == 0) goto LAB_140a4b0f0;
    }
    lVar52 = lVar52 + lVar66;
    ppppppbVar56 = *(byte *******)(lVar52 + -0x60);
    uVar53 = (longlong)ppppppbVar56 * 8;
    if (0x7ffffffffffffffc < uVar53 || (ulonglong)ppppppbVar56 >> 0x3d != 0) {
      uVar71 = 0;
LAB_140a4b93a:
      pdb_142dc7e2a(uVar71,uVar53);
LAB_140a4b945:
      uVar71 = 0;
      pbStack_1e0 = pbVar63;
LAB_140a4b94f:
      pdb_142dc7e2a(uVar71,uVar53);
                    /* WARNING: Does not return */
      pcVar33 = (code *)invalidInstructionException();
      (*pcVar33)();
    }
    uStack_21c = uVar12;
    uVar32 = *(undefined8 *)(lVar52 + -0x68);
    if (uVar53 == 0) {
      pppppbStack_1e8 = (byte *****)0x0;
      pbVar54 = (byte *)0x4;
      ppppppbVar48 = (byte ******)pppppbStack_1e8;
    }
    else {
      pdb_14007ee60();
      uVar71 = 4;
      pbVar54 = pub_1406abab0(uVar53,4);
      ppppppbVar48 = ppppppbVar56;
      if (pbVar54 == (byte *)0x0) goto LAB_140a4b93a;
    }
    pppppbStack_1e8 = (byte *****)ppppppbVar48;
    pbVar63 = pbVar54;
    if (ppppppbVar56 != (byte ******)0x0) {
      pub_142e32760(pbVar63,uVar32,uVar53);
    }
    uVar49 = *(ulonglong *)(lVar52 + -0x48);
    uVar53 = uVar49 * 4;
    if (0x7ffffffffffffffc < uVar53 || uVar49 >> 0x3e != 0) goto LAB_140a4b945;
    if (uVar53 == 0) {
      pbVar54 = (byte *)0x4;
      pppppbStack_180 = (byte *****)pbVar63;
      goto LAB_140a4b55b;
    }
    puVar72 = *(undefined4 **)(lVar52 + -0x50);
    pbStack_1e0 = pbVar63;
    pdb_14007ee60();
    uVar71 = 4;
    pbVar54 = pub_1406abab0(uVar53,4);
    if (pbVar54 == (byte *)0x0) goto LAB_140a4b94f;
    pppppbStack_180 = (byte *****)pbStack_1e0;
    if (uVar49 == 0) goto LAB_140a4b55b;
    uVar53 = uVar49 - 1;
    if (uVar49 < uVar49 - 1) {
      uVar53 = uVar49;
    }
    if (uVar53 < 8) {
      lVar51 = 0;
      uVar53 = uVar49;
      puVar61 = puVar72;
    }
    else {
      uVar53 = uVar53 + 1;
      uVar59 = (ulonglong)((uint)uVar53 & 7);
      if ((uVar53 & 7) == 0) {
        uVar59 = 8;
      }
      lVar51 = uVar53 - uVar59;
      uVar53 = uVar49 - lVar51;
      puVar61 = puVar72 + lVar51;
      lVar66 = 0;
      do {
        uVar71 = *(undefined8 *)((longlong)(puVar72 + lVar66) + 8);
        uVar32 = *(undefined8 *)(puVar72 + lVar66 + 4);
        uVar37 = *(undefined8 *)((longlong)(puVar72 + lVar66 + 4) + 8);
        *(undefined8 *)(pbVar54 + lVar66 * 4) = *(undefined8 *)(puVar72 + lVar66);
        *(undefined8 *)(pbVar54 + lVar66 * 4 + 8) = uVar71;
        *(undefined8 *)(pbVar54 + lVar66 * 4 + 0x10) = uVar32;
        *(undefined8 *)(pbVar54 + lVar66 * 4 + 0x10 + 8) = uVar37;
        lVar66 = lVar66 + 8;
      } while (lVar51 != lVar66);
    }
    pbVar63 = pbVar54 + lVar51 * 4;
    do {
      if (puVar61 == puVar72 + uVar49) break;
      uVar12 = *puVar61;
      puVar61 = puVar61 + 1;
      *(undefined4 *)pbVar63 = uVar12;
      pbVar63 = pbVar63 + 4;
      uVar53 = uVar53 - 1;
    } while (uVar53 != 0);
LAB_140a4b55b:
    uVar71 = uStack_288;
    uStack_134 = *(undefined4 *)(lVar52 + -0x1c);
    uVar64 = *(uint *)(lVar52 + -0x38);
    iVar65 = uVar64 - 2;
    if (uVar64 < 2) {
      iVar65 = 2;
    }
    uStack_150 = 2;
    if (iVar65 != 0) {
      if (iVar65 == 1) {
        uStack_150 = 3;
      }
      else {
        uStack_198 = *(undefined8 *)(lVar52 + -0x24);
        ppppppbStack_1a8 = *(byte *******)(lVar52 + -0x34);
        pcStack_1a0 = *(code **)(lVar52 + -0x2c);
        uStack_150 = uVar64;
      }
    }
    uStack_158 = CONCAT44(uStack_158._4_4_,*(undefined4 *)(lVar52 + -0x40));
    uStack_13c = (undefined4)uStack_198;
    uStack_138 = (undefined4)((ulonglong)uStack_198 >> 0x20);
    uStack_14c = SUB84(ppppppbStack_1a8,0);
    uStack_148 = (undefined4)((ulonglong)ppppppbStack_1a8 >> 0x20);
    uStack_144 = SUB84(pcStack_1a0,0);
    uStack_140 = (undefined4)((ulonglong)pcStack_1a0 >> 0x20);
    _iStack_120 = *(undefined8 *)(lVar52 + -8);
    ppppppbStack_130 = *(byte *******)(lVar52 + -0x18);
    uStack_128 = *(undefined8 *)(lVar52 + -0x10);
    ppppppbStack_188 = (byte ******)pppppbStack_1e8;
    pppppbStack_178 = (byte *****)ppppppbVar56;
    uStack_170 = uVar49;
    pbStack_168 = pbVar54;
    uStack_160 = uVar49;
    pdb_140adf010(uStack_288,pppppppbVar60,&ppppppbStack_188,iStack_1cc,uStack_230);
    *puStack_1f0 = uStack_1ac;
    pdb_14007ee60();
    ppppppbVar56 = (byte ******)pub_1406abab0(0x50,8);
    if (ppppppbVar56 == (byte ******)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x50);
    }
    *ppppppbVar56 = (byte *****)0x1;
    ppppppbVar56[1] = (byte *****)0x1;
    *(code *)(ppppppbVar56 + 2) = (code)0x0;
    *(undefined4 *)((longlong)ppppppbVar56 + 0x14) = uStack_21c;
    ppppppbVar56[3] = (byte *****)CONCAT44(uStack_268,uStack_26c);
    *(undefined4 *)(ppppppbVar56 + 4) = uStack_264;
    *(undefined8 *)((longlong)ppppppbVar56 + 0x24) = 0;
    *(undefined4 *)((longlong)ppppppbVar56 + 0x2c) = 0x3f000000;
    *(float *)(ppppppbVar56 + 6) = fVar76;
    *(undefined8 *)((longlong)ppppppbVar56 + 0x34) = uVar46;
    *(code *)((longlong)ppppppbVar56 + 0x3c) = (code)0x0;
    *(code *)((longlong)ppppppbVar56 + 0x3d) = uStack_104._0_1_;
    ppppppbVar56[8] = (byte *****)pppppppbVar60;
    ppppppbStack_188 = (byte ******)0x8;
    pppppbStack_180 = (byte *****)ppppppbVar56;
    pdb_140ae5180(uVar71,&ppppppbStack_188);
    iVar47 = iStack_22c;
    iVar65 = *(int *)(lStack_1d8 + 0x54);
    if (iVar65 != 0) {
      *puVar22 = uStack_220;
      lVar52 = *(longlong *)(lStack_290 + 0x30);
      uVar32 = *(undefined8 *)(lStack_290 + 0x40);
      if (lVar52 == *(longlong *)(lStack_290 + 0x20)) {
        pdb_142d7e830(lVar7);
      }
      lVar51 = *(longlong *)(lStack_290 + 0x28);
      *(undefined8 *)(lVar51 + lVar52 * 0x18) = uVar32;
      *(byte ********)(lVar51 + 8 + lVar52 * 0x18) = pppppppbVar60;
      *(int *)(lVar51 + 0x10 + lVar52 * 0x18) = iVar65;
      *(undefined1 *)(lVar51 + 0x14 + lVar52 * 0x18) = 0;
      *(longlong *)(lStack_290 + 0x30) = lVar52 + 1;
      *(longlong *)(lStack_290 + 0x40) = *(longlong *)(lStack_290 + 0x40) + 1;
      *puStack_1f0 = uStack_1ac;
      uVar12 = *(undefined4 *)(lStack_1d8 + 0x54);
      pdb_14007ee60();
      ppppppbVar56 = (byte ******)pub_1406abab0(0x30,8);
      if (ppppppbVar56 == (byte ******)0x0) goto LAB_140a4ba28;
      *ppppppbVar56 = (byte *****)0x1;
      ppppppbVar56[1] = (byte *****)0x1;
      *(code *)(ppppppbVar56 + 3) = (code)0x6;
      ppppppbVar56[4] = (byte *****)pppppppbVar60;
      *(undefined4 *)(ppppppbVar56 + 5) = 0;
      *(undefined4 *)((longlong)ppppppbVar56 + 0x2c) = uVar12;
      ppppppbStack_188 = (byte ******)0x9;
      pppppbStack_180 = (byte *****)ppppppbVar56;
      pdb_140ae5180(uVar71,&ppppppbStack_188);
    }
    if (iVar47 != 3) {
      *puStack_1f0 = uStack_1ac;
      pdb_14007ee60();
      ppppppbVar56 = (byte ******)pub_1406abab0(0x30,8);
      if (ppppppbVar56 == (byte ******)0x0) {
LAB_140a4ba28:
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x30);
      }
      *ppppppbVar56 = (byte *****)0x1;
      ppppppbVar56[1] = (byte *****)0x1;
      *(code *)(ppppppbVar56 + 3) = (code)0x5;
      ppppppbVar56[4] = (byte *****)pppppppbVar60;
      *(undefined4 *)(ppppppbVar56 + 5) = 3;
      *(int *)((longlong)ppppppbVar56 + 0x2c) = iVar47;
      ppppppbStack_188 = (byte ******)0x9;
      pppppbStack_180 = (byte *****)ppppppbVar56;
      pdb_140ae5180(uVar71,&ppppppbStack_188);
    }
    *puVar27 = uStack_228;
    lVar52 = *(longlong *)(lStack_2a0 + 0x30);
    uVar71 = *(undefined8 *)(lStack_2a0 + 0x40);
    if (lVar52 == *(longlong *)(lStack_2a0 + 0x20)) {
      pdb_142d7e980(lVar8);
    }
    lVar51 = *(longlong *)(lStack_2a0 + 0x28);
    *(undefined8 *)(lVar51 + lVar52 * 0x10) = uVar71;
    *(undefined1 *)(lVar51 + 8 + lVar52 * 0x10) = 7;
    *(longlong *)(lStack_2a0 + 0x30) = lVar52 + 1;
    *(longlong *)(lStack_2a0 + 0x40) = *(longlong *)(lStack_2a0 + 0x40) + 1;
    *puVar28 = uStack_224;
    lVar52 = *(longlong *)(lStack_298 + 0x30);
    uVar71 = *(undefined8 *)(lStack_298 + 0x40);
    if (lVar52 == *(longlong *)(lStack_298 + 0x20)) {
      pdb_142d7e980(lVar9);
    }
    lVar51 = *(longlong *)(lStack_298 + 0x28);
    *(undefined8 *)(lVar51 + lVar52 * 0x10) = uVar71;
    *(byte ********)(lVar51 + 8 + lVar52 * 0x10) = pppppppbVar60;
    *(longlong *)(lStack_298 + 0x30) = lVar52 + 1;
    *(longlong *)(lStack_298 + 0x40) = *(longlong *)(lStack_298 + 0x40) + 1;
  } while( true );
}

