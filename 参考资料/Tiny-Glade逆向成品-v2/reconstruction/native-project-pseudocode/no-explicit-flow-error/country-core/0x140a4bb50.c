// VA 0x140a4bb50, PDB extent 8179 bytes
// country_core::systems::wall::shapes::rectangle::create_rectangle::create_rectangle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/create_rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::rectangle::create_rectangle::create_rectangle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/create_rectangle.rs
   Extent: 8179 */

void pdb_140a4bb50(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,undefined8 *param_8,
                  undefined8 *param_9,longlong *param_10,longlong *param_11,longlong *param_12,
                  longlong *param_13)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  undefined4 uVar13;
  float fVar14;
  undefined1 uVar15;
  ulonglong *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  longlong lVar30;
  undefined8 *****pppppuVar31;
  undefined8 uVar32;
  uint uVar33;
  uint uVar34;
  undefined1 auVar35 [12];
  bool bVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined8 ******ppppppuVar44;
  undefined8 uVar45;
  float fVar46;
  undefined8 *****pppppuVar47;
  ulonglong uVar48;
  longlong lVar49;
  longlong lVar50;
  byte *pbVar51;
  ulonglong uVar52;
  int *piVar53;
  code *pcVar54;
  longlong lVar55;
  ulonglong uVar56;
  undefined8 ******ppppppuVar57;
  longlong lVar58;
  undefined4 *puVar59;
  ulonglong uVar60;
  byte *pbVar61;
  int iVar62;
  longlong lVar63;
  ushort uVar64;
  longlong lVar65;
  code cVar66;
  longlong *plVar67;
  longlong *plVar68;
  longlong *plVar69;
  undefined8 uVar70;
  undefined4 *puVar71;
  ulonglong uVar72;
  longlong *plVar73;
  uint uVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar90;
  float fVar91;
  float fVar92;
  undefined4 uVar93;
  float fVar94;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined1 uStack_2d8;
  byte bStack_2d7;
  undefined6 uStack_2d6;
  ulonglong uStack_2d0;
  undefined8 uStack_2c8;
  longlong lStack_2c0;
  longlong lStack_2b8;
  longlong lStack_2b0;
  longlong lStack_2a8;
  longlong *plStack_2a0;
  longlong lStack_298;
  longlong lStack_290;
  longlong lStack_288;
  longlong lStack_280;
  undefined8 uStack_278;
  longlong lStack_270;
  undefined8 ****ppppuStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  longlong *plStack_220;
  longlong *plStack_218;
  byte *pbStack_210;
  longlong lStack_208;
  longlong lStack_200;
  undefined4 *puStack_1f8;
  byte *pbStack_1f0;
  int iStack_1e4;
  longlong lStack_1e0;
  undefined8 ****ppppuStack_1d8;
  longlong *plStack_1d0;
  undefined8 *****pppppuStack_1c8;
  longlong *plStack_1c0;
  undefined8 ****ppppuStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 *****pppppuStack_1a8;
  code *pcStack_1a0;
  undefined8 uStack_198;
  undefined8 *****pppppuStack_188;
  code *pcStack_180;
  undefined8 ****ppppuStack_178;
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
  undefined8 *****pppppuStack_130;
  undefined8 uStack_128;
  int6 iStack_120;
  undefined2 uStack_11a;
  undefined4 *puStack_110;
  longlong *plStack_108;
  undefined8 *****pppppuStack_100;
  undefined4 uStack_f8;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  puVar16 = (ulonglong *)*param_1;
  lVar50 = param_1[1];
  uVar48 = *puVar16;
  uVar56 = 0;
  uVar52 = uVar48 - *(ulonglong *)(lVar50 + 0x18);
  if (uVar48 < *(ulonglong *)(lVar50 + 0x18)) {
    uVar52 = uVar56;
  }
  uVar60 = uVar48 - *(ulonglong *)(lVar50 + 0x38);
  if (uVar48 < *(ulonglong *)(lVar50 + 0x38)) {
    uVar60 = uVar56;
  }
  plStack_218 = (longlong *)(uVar52 * 0x40 + *(longlong *)(lVar50 + 8));
  uVar48 = *(ulonglong *)(lVar50 + 0x10) - uVar52;
  if (*(ulonglong *)(lVar50 + 0x10) < uVar52) {
    plStack_218 = (longlong *)0x8;
    uVar48 = uVar56;
  }
  plStack_220 = (longlong *)(uVar60 * 0x40 + *(longlong *)(lVar50 + 0x28));
  uVar52 = *(ulonglong *)(lVar50 + 0x30);
  if (uVar52 < uVar60) {
    plStack_220 = (longlong *)0x8;
  }
  uVar17 = *param_8;
  uVar72 = uVar52 - uVar60;
  if (uVar52 < uVar60) {
    uVar72 = uVar56;
  }
  uVar18 = param_8[4];
  uVar19 = param_8[8];
  uVar20 = param_8[0xc];
  lStack_208 = param_7[4];
  puVar21 = (undefined4 *)param_7[6];
  uStack_248 = *(undefined4 *)((longlong)param_7 + 0x3c);
  lStack_200 = param_7[8];
  puVar22 = (undefined4 *)param_7[10];
  uStack_244 = *(undefined4 *)((longlong)param_7 + 0x5c);
  lStack_2b8 = param_7[0xc];
  puVar23 = (undefined4 *)param_7[0xe];
  uStack_240 = *(undefined4 *)((longlong)param_7 + 0x7c);
  lStack_280 = param_7[0x10];
  puVar24 = (undefined4 *)param_7[0x12];
  uStack_224 = *(undefined4 *)((longlong)param_7 + 0x9c);
  *puVar16 = (*(longlong *)(lVar50 + 0x40) - uVar72) - uVar48;
  fVar46 = _DAT_14303c690;
  uVar45 = _UNK_14303c668;
  ppppppuVar44 = _DAT_14303c660;
  uVar43 = _UNK_142f6944c;
  uVar42 = _UNK_142f69448;
  uVar41 = _UNK_142f69444;
  fVar40 = _DAT_142e3788c;
  fVar39 = _DAT_142e37838;
  fVar38 = _DAT_142e36f28;
  plVar68 = plStack_218 + uVar48 * 8;
  plVar73 = plStack_220 + uVar72 * 8;
  plStack_1d0 = (longlong *)*param_11;
  pbStack_210 = (byte *)*param_9;
  uStack_f8 = *(undefined4 *)((longlong)param_2 + 0x1c);
  plStack_108 = (longlong *)*param_2;
  puStack_110 = (undefined4 *)param_2[2];
  lStack_1e0 = *param_10;
  uStack_1ac = *(undefined4 *)((longlong)param_4 + 0x1c);
  uStack_278 = *param_4;
  puStack_1f8 = (undefined4 *)param_4[2];
  uStack_24c = *(undefined4 *)((longlong)param_13 + 0x1c);
  lStack_2c0 = *param_13;
  puVar25 = (undefined4 *)param_13[2];
  uStack_23c = *(undefined4 *)((longlong)param_7 + 0x1c);
  lStack_2b0 = *param_7;
  puVar26 = (undefined4 *)param_7[2];
  uStack_238 = *(undefined4 *)((longlong)param_3 + 0x1c);
  lStack_2a8 = *param_3;
  puVar27 = (undefined4 *)param_3[2];
  uStack_22c = *(undefined4 *)((longlong)param_5 + 0x1c);
  lStack_298 = *param_5;
  puVar28 = (undefined4 *)param_5[2];
  uStack_228 = *(undefined4 *)((longlong)param_6 + 0x1c);
  lStack_290 = *param_6;
  puVar29 = (undefined4 *)param_6[2];
  puVar1 = (undefined4 *)(lStack_1e0 + 0x3c);
  lVar30 = *param_12;
  lStack_270 = param_12[1];
  plStack_2a0 = plStack_1d0 + 4;
  lVar50 = lStack_2c0 + 0x20;
  plStack_1c0 = plStack_108 + 0xc;
  lVar2 = lStack_2b0 + 0x20;
  lVar3 = lStack_208 + 0x20;
  lVar4 = lStack_200 + 0x20;
  lVar5 = lStack_2b8 + 0x20;
  plVar6 = plStack_1d0 + 10;
  lVar7 = lStack_2a8 + 0x20;
  plVar8 = plStack_108 + 4;
  lVar12 = lStack_280 + 0x20;
  lVar9 = lStack_298 + 0x20;
  lVar10 = lStack_290 + 0x20;
  lStack_288 = lVar50;
  do {
    do {
      if ((plStack_218 == (longlong *)0x0) || (plStack_218 == plVar68)) {
        if ((plStack_220 == (longlong *)0x0) || (plStack_220 == plVar73)) {
          return;
        }
        plStack_218 = (longlong *)0x0;
        plVar67 = plStack_220;
        plStack_220 = plStack_220 + 8;
      }
      else {
        plVar67 = plStack_218;
        plStack_218 = plStack_218 + 8;
      }
      *puVar16 = *puVar16 + 1;
      uStack_258 = plVar67[5];
      ppppuStack_268 = (undefined8 ****)plVar67[3];
      uStack_260 = plVar67[4];
      lVar58 = *plVar67;
      ppppppuVar57 = (undefined8 ******)plVar67[1];
      bVar77 = 1;
      pppppuStack_1c8 = ppppppuVar57;
      if ((lVar58 == 1) && (plStack_1d0[3] != 0)) {
        pppppuStack_188 = ppppppuVar57;
        uVar48 = pdb_1400af0a0(plStack_2a0,&pppppuStack_188);
        lVar49 = *plStack_1d0;
        bVar75 = (byte)(uVar48 >> 0x39);
        auVar80 = ZEXT216(CONCAT11(bVar75,bVar75));
        auVar80 = pshuflw(auVar80,auVar80,0);
        lVar63 = 0;
        while( true ) {
          uVar48 = uVar48 & plStack_1d0[1];
          auVar81 = *(undefined1 (*) [16])(lVar49 + uVar48);
          auVar86[0] = -(auVar81[0] == auVar80[0]);
          auVar86[1] = -(auVar81[1] == auVar80[1]);
          auVar86[2] = -(auVar81[2] == auVar80[2]);
          auVar86[3] = -(auVar81[3] == auVar80[3]);
          auVar86[4] = -(auVar81[4] == auVar80[4]);
          auVar86[5] = -(auVar81[5] == auVar80[5]);
          auVar86[6] = -(auVar81[6] == auVar80[6]);
          auVar86[7] = -(auVar81[7] == auVar80[7]);
          auVar86[8] = -(auVar81[8] == auVar80[0]);
          auVar86[9] = -(auVar81[9] == auVar80[1]);
          auVar86[10] = -(auVar81[10] == auVar80[2]);
          auVar86[0xb] = -(auVar81[0xb] == auVar80[3]);
          auVar86[0xc] = -(auVar81[0xc] == auVar80[4]);
          auVar86[0xd] = -(auVar81[0xd] == auVar80[5]);
          auVar86[0xe] = -(auVar81[0xe] == auVar80[6]);
          auVar86[0xf] = -(auVar81[0xf] == auVar80[7]);
          uVar64 = (ushort)(SUB161(auVar86 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar86 >> 0xf,0) & 1) << 1 |
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
                   (ushort)(SUB161(auVar86 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar86[0xf] >> 7) << 0xf;
          uVar74 = (uint)uVar64;
          while (uVar64 != 0) {
            uVar33 = 0;
            for (uVar34 = uVar74; (uVar34 & 1) == 0; uVar34 = uVar34 >> 1 | 0x80000000) {
              uVar33 = uVar33 + 1;
            }
            lVar65 = (uVar33 + uVar48 & plStack_1d0[1]) * -0x2b0;
            if (ppppppuVar57 == *(undefined8 *******)(lVar49 + -0x2b0 + lVar65)) {
              lVar49 = lVar49 + lVar65;
              if ((*(ulonglong *)(lVar49 + -0x298) < 2) || (*(float *)(lVar49 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14303cdd0);
              }
              if ((1 < *(uint *)(lVar49 + -0x50)) || (*(byte *)(lVar49 + -9) != *pbStack_210))
              goto LAB_140a4c0a0;
              ppppuStack_1b8 = (undefined8 ****)CONCAT44(ppppuStack_1b8._4_4_,1);
              bVar77 = 0;
              goto LAB_140a4c0aa;
            }
            uVar64 = (ushort)(uVar74 - 1) & (ushort)uVar74;
            uVar74 = CONCAT22((short)(uVar74 - 1 >> 0x10),uVar64);
          }
          auVar82[0] = -(auVar81[0] == -1);
          auVar82[1] = -(auVar81[1] == -1);
          auVar82[2] = -(auVar81[2] == -1);
          auVar82[3] = -(auVar81[3] == -1);
          auVar82[4] = -(auVar81[4] == -1);
          auVar82[5] = -(auVar81[5] == -1);
          auVar82[6] = -(auVar81[6] == -1);
          auVar82[7] = -(auVar81[7] == -1);
          auVar82[8] = -(auVar81[8] == -1);
          auVar82[9] = -(auVar81[9] == -1);
          auVar82[10] = -(auVar81[10] == -1);
          auVar82[0xb] = -(auVar81[0xb] == -1);
          auVar82[0xc] = -(auVar81[0xc] == -1);
          auVar82[0xd] = -(auVar81[0xd] == -1);
          auVar82[0xe] = -(auVar81[0xe] == -1);
          auVar82[0xf] = -(auVar81[0xf] == -1);
          if ((((((((((((((((SUB161(auVar82 >> 7,0) & 1) != 0 || (SUB161(auVar82 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar82 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar82 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar82 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar82 >> 0x2f,0) & 1) != 0) || (SUB161(auVar82 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar82 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar82 >> 0x47,0) & 1) != 0) || (SUB161(auVar82 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar82 >> 0x57,0) & 1) != 0) || (SUB161(auVar82 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar82 >> 0x67,0) & 1) != 0) || (SUB161(auVar82 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar82 >> 0x77,0) & 1) != 0) || auVar82[0xf] < '\0') break;
          uVar48 = uVar48 + lVar63 + 0x10;
          lVar63 = lVar63 + 0x10;
        }
      }
LAB_140a4c0a0:
      ppppuStack_1b8 = (undefined8 ****)((ulonglong)ppppuStack_1b8 & 0xffffffff00000000);
LAB_140a4c0aa:
      lVar63 = uStack_258;
      ppppuStack_1d8 = ppppuStack_268;
      uVar93 = (undefined4)uStack_260;
      uStack_1b0 = uStack_260._4_4_;
      fVar78 = (float)uStack_258;
      fVar79 = (float)((ulonglong)uStack_258 >> 0x20);
      fVar94 = *(float *)((longlong)plVar67 + 0x34);
      pppppuStack_188 = (undefined8 *****)ppppuStack_268;
      pcStack_180 = (code *)uStack_260;
      ppppuStack_178 = (undefined8 ****)uStack_258;
      *puVar25 = uStack_24c;
      lVar49 = *(longlong *)(lStack_2c0 + 0x30);
      uVar70 = *(undefined8 *)(lStack_2c0 + 0x40);
      if (lVar49 == *(longlong *)(lStack_2c0 + 0x20)) {
        pdb_142d7e7c0(lVar50);
      }
      lVar65 = *(longlong *)(lStack_2c0 + 0x28);
      lVar55 = lVar49 * 0x30;
      *(undefined4 *)(lVar65 + lVar55) = 1;
      plVar69 = (longlong *)(lVar65 + 4 + lVar55);
      *plVar69 = (longlong)pppppuStack_188;
      plVar69[1] = (longlong)pcStack_180;
      *(undefined8 *****)(lVar65 + 0x14 + lVar55) = ppppuStack_178;
      auVar35._4_8_ = pcStack_180;
      auVar35._0_4_ = uVar41;
      auVar80._0_8_ = auVar35._0_8_ << 0x20;
      auVar80._8_4_ = uVar42;
      auVar80._12_4_ = uVar43;
      auVar81._4_12_ = auVar80._4_12_;
      auVar81._0_4_ = fVar94;
      *(longlong *)(lVar65 + 0x1c + lVar55) = auVar81._0_8_;
      *(undefined1 *)(lVar65 + 0x24 + lVar55) = 1;
      *(undefined8 *)(lVar65 + 0x28 + lVar55) = uVar70;
      *(longlong *)(lStack_2c0 + 0x30) = lVar49 + 1;
      *(longlong *)(lStack_2c0 + 0x40) = *(longlong *)(lStack_2c0 + 0x40) + 1;
      *puStack_110 = uStack_f8;
      pdb_140df37e0(&uStack_2f8,&ppppuStack_268);
      uStack_134 = (undefined4)plVar67[6];
      ppppuStack_178 = (undefined8 ****)CONCAT44(uStack_2e4,uStack_2e8);
      uStack_170 = CONCAT44(uStack_2dc,uStack_2e0);
      pbStack_168 = (byte *)CONCAT62(uStack_2d6,CONCAT11(bStack_2d7,uStack_2d8));
      pppppuStack_188 = uStack_2f8;
      pcStack_180 = uStack_2f0;
      uStack_160 = uStack_2d0;
      uStack_158 = uStack_2c8;
      uStack_150 = 2;
      uStack_11a = (undefined2)
                   (CONCAT16((DAT_143cb2d0c == '\0') * '\x05',CONCAT51(0x100000000,*pbStack_210)) >>
                   0x28);
      iStack_120 = (uint6)*pbStack_210 << 8;
      pppppuStack_130 = ppppppuVar44;
      uStack_128 = uVar45;
      ppppppuVar57 = &pppppuStack_188;
      lVar49 = pdb_140b0eb60(plStack_108);
    } while (lVar49 != 1);
    *puStack_110 = uStack_f8;
    pppppuStack_1a8 = ppppppuVar57;
    lVar50 = pdb_1417bd890(plStack_108,&pppppuStack_1a8);
    if (lVar50 == 0) {
      if (1 < *_DAT_143ca8e90) {
        uStack_2f8 = &pppppuStack_1a8;
        uStack_2f0 = pdb_140c04ef0;
        pppppuStack_188 = (undefined8 ******)0x0;
        pcStack_180 = (code *)&UNK_143021dde;
        ppppuStack_178 = (undefined8 *****)0x2b;
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
        pppppuStack_130 = (undefined8 *****)&uStack_2f8;
        pdb_140f332f0(&uStack_f1,&pppppuStack_188);
      }
    }
    else {
      pdb_1403b05d0(plStack_1c0,ppppppuVar57);
      *(float *)(lVar50 + 0x58) = fVar94;
    }
    pdb_140a4db50(&uStack_2f8,lVar58,pppppuStack_1c8,uVar17,uVar18,uVar19,uVar20,plStack_1d0,
                  param_12,lStack_1e0,*pbStack_210);
    plVar69 = plStack_108;
    uVar15 = uStack_2d8;
    *puStack_110 = uStack_f8;
    pppppuStack_100 = ppppppuVar57;
    lVar50 = pdb_1417bd890(plStack_108,&pppppuStack_100);
    if (lVar50 == 0) {
      if (1 < *_DAT_143ca8e90) {
        pppppuStack_1a8 = &pppppuStack_100;
        pcStack_1a0 = pdb_140c04ef0;
        pppppuStack_188 = (undefined8 ******)0x0;
        pcStack_180 = (code *)&UNK_143021dde;
        ppppuStack_178 = (undefined8 *****)0x2b;
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
        pppppuStack_130 = &pppppuStack_1a8;
        pdb_140f332f0(&uStack_f1,&pppppuStack_188);
      }
    }
    else {
      pdb_1403b05d0(plStack_1c0,ppppppuVar57);
      *(undefined1 *)(lVar50 + 0x6e) = uVar15;
    }
    bVar75 = bStack_2d7;
    *puStack_110 = uStack_f8;
    pppppuStack_100 = ppppppuVar57;
    lVar50 = pdb_1417bd890(plVar69,&pppppuStack_100);
    if (lVar50 == 0) {
      if (1 < *_DAT_143ca8e90) {
        pppppuStack_1a8 = &pppppuStack_100;
        pcStack_1a0 = pdb_140c04ef0;
        pppppuStack_188 = (undefined8 ******)0x0;
        pcStack_180 = (code *)&UNK_143021dde;
        ppppuStack_178 = (undefined8 *****)0x2b;
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
        pppppuStack_130 = &pppppuStack_1a8;
        pdb_140f332f0(&uStack_f1,&pppppuStack_188);
      }
    }
    else {
      pdb_1403b05d0(plStack_1c0,ppppppuVar57);
      *(byte *)(lVar50 + 0x69) = bVar75;
    }
    if (((char)ppppuStack_1b8 != '\0') &&
       (pppppuStack_188 = pppppuStack_1c8, plVar69 = plStack_108, plStack_1d0[3] != 0)) {
      uVar48 = pdb_1400af0a0(plStack_2a0,&pppppuStack_188);
      lVar50 = *plStack_1d0;
      bVar76 = (byte)(uVar48 >> 0x39);
      auVar80 = ZEXT216(CONCAT11(bVar76,bVar76));
      auVar80 = pshuflw(auVar80,auVar80,0);
      lVar58 = 0;
      while( true ) {
        uVar48 = uVar48 & plStack_1d0[1];
        auVar81 = *(undefined1 (*) [16])(lVar50 + uVar48);
        auVar87[0] = -(auVar81[0] == auVar80[0]);
        auVar87[1] = -(auVar81[1] == auVar80[1]);
        auVar87[2] = -(auVar81[2] == auVar80[2]);
        auVar87[3] = -(auVar81[3] == auVar80[3]);
        auVar87[4] = -(auVar81[4] == auVar80[4]);
        auVar87[5] = -(auVar81[5] == auVar80[5]);
        auVar87[6] = -(auVar81[6] == auVar80[6]);
        auVar87[7] = -(auVar81[7] == auVar80[7]);
        auVar87[8] = -(auVar81[8] == auVar80[0]);
        auVar87[9] = -(auVar81[9] == auVar80[1]);
        auVar87[10] = -(auVar81[10] == auVar80[2]);
        auVar87[0xb] = -(auVar81[0xb] == auVar80[3]);
        auVar87[0xc] = -(auVar81[0xc] == auVar80[4]);
        auVar87[0xd] = -(auVar81[0xd] == auVar80[5]);
        auVar87[0xe] = -(auVar81[0xe] == auVar80[6]);
        auVar87[0xf] = -(auVar81[0xf] == auVar80[7]);
        uVar64 = (ushort)(SUB161(auVar87 >> 7,0) & 1) | (ushort)(SUB161(auVar87 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar87 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar87 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar87 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar87 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar87 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar87 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar87 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar87 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar87 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar87 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar87 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar87 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar87 >> 0x77,0) & 1) << 0xe | (ushort)(auVar87[0xf] >> 7) << 0xf
        ;
        uVar74 = (uint)uVar64;
        while (uVar64 != 0) {
          uVar33 = 0;
          for (uVar34 = uVar74; (uVar34 & 1) == 0; uVar34 = uVar34 >> 1 | 0x80000000) {
            uVar33 = uVar33 + 1;
          }
          lVar49 = (uVar33 + uVar48 & plStack_1d0[1]) * -0x2b0;
          if ((undefined8 ******)pppppuStack_1c8 == *(undefined8 *******)(lVar50 + -0x2b0 + lVar49))
          {
            lVar50 = lVar50 + lVar49;
            if ((*(ulonglong *)(lVar50 + -0x298) < 2) || (*(float *)(lVar50 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14303cdb8);
            }
            *puStack_110 = uStack_f8;
            uVar15 = *(undefined1 *)(lVar50 + -10);
            pppppuStack_100 = ppppppuVar57;
            lVar58 = pdb_1417bd890(plStack_108,&pppppuStack_100);
            if (lVar58 == 0) {
              if (1 < *_DAT_143ca8e90) {
                pppppuStack_1a8 = &pppppuStack_100;
                pcStack_1a0 = pdb_140c04ef0;
                pppppuStack_188 = (undefined8 ******)0x0;
                pcStack_180 = (code *)&UNK_143021dde;
                ppppuStack_178 = (undefined8 *****)0x2b;
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
                pppppuStack_130 = &pppppuStack_1a8;
                pdb_140f332f0(&uStack_f1,&pppppuStack_188);
              }
            }
            else {
              pdb_1403b05d0(plStack_1c0,ppppppuVar57);
              *(undefined1 *)(lVar58 + 0x6c) = uVar15;
            }
            *puStack_110 = uStack_f8;
            puVar71 = (undefined4 *)(lVar50 + -0x10);
            goto LAB_140a4c863;
          }
          uVar64 = (ushort)(uVar74 - 1) & (ushort)uVar74;
          uVar74 = CONCAT22((short)(uVar74 - 1 >> 0x10),uVar64);
        }
        auVar83[0] = -(auVar81[0] == -1);
        auVar83[1] = -(auVar81[1] == -1);
        auVar83[2] = -(auVar81[2] == -1);
        auVar83[3] = -(auVar81[3] == -1);
        auVar83[4] = -(auVar81[4] == -1);
        auVar83[5] = -(auVar81[5] == -1);
        auVar83[6] = -(auVar81[6] == -1);
        auVar83[7] = -(auVar81[7] == -1);
        auVar83[8] = -(auVar81[8] == -1);
        auVar83[9] = -(auVar81[9] == -1);
        auVar83[10] = -(auVar81[10] == -1);
        auVar83[0xb] = -(auVar81[0xb] == -1);
        auVar83[0xc] = -(auVar81[0xc] == -1);
        auVar83[0xd] = -(auVar81[0xd] == -1);
        auVar83[0xe] = -(auVar81[0xe] == -1);
        auVar83[0xf] = -(auVar81[0xf] == -1);
        plVar69 = plStack_108;
        if ((((((((((((((((SUB161(auVar83 >> 7,0) & 1) != 0 || (SUB161(auVar83 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar83 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar83 >> 0x1f,0) & 1) != 0) || (SUB161(auVar83 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar83 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar83 >> 0x37,0) & 1) != 0) || (SUB161(auVar83 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar83 >> 0x47,0) & 1) != 0) || (SUB161(auVar83 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar83 >> 0x57,0) & 1) != 0) || (SUB161(auVar83 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar83 >> 0x67,0) & 1) != 0) || (SUB161(auVar83 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar83 >> 0x77,0) & 1) != 0) || auVar83[0xf] < '\0') break;
        uVar48 = uVar48 + lVar58 + 0x10;
        lVar58 = lVar58 + 0x10;
      }
    }
    *puStack_110 = uStack_f8;
    uVar15 = *(undefined1 *)(lStack_1e0 + 0x5d);
    pppppuStack_100 = ppppppuVar57;
    lVar50 = pdb_1417bd890(plVar69,&pppppuStack_100);
    if (lVar50 == 0) {
      if (1 < *_DAT_143ca8e90) {
        pppppuStack_1a8 = &pppppuStack_100;
        pcStack_1a0 = pdb_140c04ef0;
        pppppuStack_188 = (undefined8 ******)0x0;
        pcStack_180 = (code *)&UNK_143021dde;
        ppppuStack_178 = (undefined8 *****)0x2b;
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
        pppppuStack_130 = &pppppuStack_1a8;
        pdb_140f332f0(&uStack_f1,&pppppuStack_188);
      }
    }
    else {
      pdb_1403b05d0(plStack_1c0,ppppppuVar57);
      *(undefined1 *)(lVar50 + 0x6c) = uVar15;
    }
    *puStack_110 = uStack_f8;
    puVar71 = puVar1;
LAB_140a4c863:
    uVar13 = *puVar71;
    pppppuStack_100 = ppppppuVar57;
    lVar50 = pdb_1417bd890(plStack_108,&pppppuStack_100);
    if (lVar50 == 0) {
      if (1 < *_DAT_143ca8e90) {
        pppppuStack_1a8 = &pppppuStack_100;
        pcStack_1a0 = pdb_140c04ef0;
        pppppuStack_188 = (undefined8 ******)0x0;
        pcStack_180 = (code *)&UNK_143021dde;
        ppppuStack_178 = (undefined8 *****)0x2b;
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
        pppppuStack_130 = &pppppuStack_1a8;
        pdb_140f332f0(&uStack_f1,&pppppuStack_188);
      }
    }
    else {
      pdb_1403b05d0(plStack_1c0,ppppppuVar57);
      *(undefined4 *)(lVar50 + 0x60) = uVar13;
    }
    uVar13 = (undefined4)uStack_2f8;
    *puVar26 = uStack_23c;
    lVar50 = *(longlong *)(lStack_2b0 + 0x30);
    uVar70 = *(undefined8 *)(lStack_2b0 + 0x40);
    if (lVar50 == *(longlong *)(lStack_2b0 + 0x20)) {
      pdb_142d7e830(lVar2);
    }
    lVar58 = *(longlong *)(lStack_2b0 + 0x28);
    *(undefined8 *)(lVar58 + lVar50 * 0x18) = uVar70;
    *(undefined8 *******)(lVar58 + 8 + lVar50 * 0x18) = ppppppuVar57;
    uStack_234 = uVar13;
    *(undefined4 *)(lVar58 + 0x10 + lVar50 * 0x18) = uVar13;
    *(undefined1 *)(lVar58 + 0x14 + lVar50 * 0x18) = 0;
    *(longlong *)(lStack_2b0 + 0x30) = lVar50 + 1;
    *(longlong *)(lStack_2b0 + 0x40) = *(longlong *)(lStack_2b0 + 0x40) + 1;
    uVar13 = (undefined4)uStack_2f0;
    *puVar21 = uStack_248;
    lVar50 = *(longlong *)(lStack_208 + 0x30);
    uVar70 = *(undefined8 *)(lStack_208 + 0x40);
    if (lVar50 == *(longlong *)(lStack_208 + 0x20)) {
      pdb_142d7e830(lVar3);
    }
    lVar58 = *(longlong *)(lStack_208 + 0x28);
    *(undefined8 *)(lVar58 + lVar50 * 0x18) = uVar70;
    *(undefined8 *******)(lVar58 + 8 + lVar50 * 0x18) = ppppppuVar57;
    uStack_230 = uVar13;
    *(undefined4 *)(lVar58 + 0x10 + lVar50 * 0x18) = uVar13;
    *(undefined1 *)(lVar58 + 0x14 + lVar50 * 0x18) = 0;
    *(longlong *)(lStack_208 + 0x30) = lVar50 + 1;
    *(longlong *)(lStack_208 + 0x40) = *(longlong *)(lStack_208 + 0x40) + 1;
    iVar62 = uStack_2f0._4_4_;
    *puVar22 = uStack_244;
    lVar50 = *(longlong *)(lStack_200 + 0x30);
    uVar70 = *(undefined8 *)(lStack_200 + 0x40);
    if (lVar50 == *(longlong *)(lStack_200 + 0x20)) {
      pdb_142d7e830(lVar4);
    }
    uVar13 = uStack_2e8;
    lVar58 = *(longlong *)(lStack_200 + 0x28);
    *(undefined8 *)(lVar58 + lVar50 * 0x18) = uVar70;
    *(undefined8 *******)(lVar58 + 8 + lVar50 * 0x18) = ppppppuVar57;
    iStack_1e4 = iVar62;
    *(int *)(lVar58 + 0x10 + lVar50 * 0x18) = iVar62;
    *(undefined1 *)(lVar58 + 0x14 + lVar50 * 0x18) = 0;
    *(longlong *)(lStack_200 + 0x30) = lVar50 + 1;
    *(longlong *)(lStack_200 + 0x40) = *(longlong *)(lStack_200 + 0x40) + 1;
    *puVar23 = uStack_240;
    lVar50 = *(longlong *)(lStack_2b8 + 0x30);
    uVar70 = *(undefined8 *)(lStack_2b8 + 0x40);
    if (lVar50 == *(longlong *)(lStack_2b8 + 0x20)) {
      pdb_142d7e830(lVar5);
    }
    lVar58 = *(longlong *)(lStack_2b8 + 0x28);
    *(undefined8 *)(lVar58 + lVar50 * 0x18) = uVar70;
    *(undefined8 *******)(lVar58 + 8 + lVar50 * 0x18) = ppppppuVar57;
    *(undefined4 *)(lVar58 + 0x10 + lVar50 * 0x18) = uVar13;
    *(undefined1 *)(lVar58 + 0x14 + lVar50 * 0x18) = 0;
    *(longlong *)(lStack_2b8 + 0x30) = lVar50 + 1;
    *(longlong *)(lStack_2b8 + 0x40) = *(longlong *)(lStack_2b8 + 0x40) + 1;
    *puStack_110 = uStack_f8;
    pppppuStack_100 = ppppppuVar57;
    lVar50 = pdb_1417bd890(plStack_108,&pppppuStack_100);
    if (lVar50 == 0) {
      if (1 < *_DAT_143ca8e90) {
        pppppuStack_1a8 = &pppppuStack_100;
        pcStack_1a0 = pdb_140c04ef0;
        pppppuStack_188 = (undefined8 ******)0x0;
        pcStack_180 = (code *)&UNK_143021dde;
        ppppuStack_178 = (undefined8 *****)0x2b;
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
        pppppuStack_130 = &pppppuStack_1a8;
        pdb_140f332f0(&uStack_f1,&pppppuStack_188);
      }
    }
    else {
      pdb_1403b05d0(plStack_1c0,ppppppuVar57);
      *(undefined4 *)(lVar50 + 0x38) = 1;
      *(undefined8 *****)(lVar50 + 0x3c) = ppppuStack_1d8;
      *(undefined4 *)(lVar50 + 0x44) = uVar93;
      *(undefined4 *)(lVar50 + 0x48) = uStack_1b0;
      *(longlong *)(lVar50 + 0x4c) = lVar63;
    }
    if ((bVar77 & 0.0 < fVar94 & bVar75) == 0) {
      if ((char)plVar67[2] != '\0') {
        *puStack_110 = uStack_f8;
        uVar93 = *(undefined4 *)((longlong)plVar67 + 0x14);
        goto LAB_140a4cca2;
      }
    }
    else {
      *puStack_110 = uStack_f8;
      uVar93 = 0;
LAB_140a4cca2:
      pppppuStack_100 = ppppppuVar57;
      lVar50 = pdb_1417bd890(plStack_108,&pppppuStack_100);
      if (lVar50 == 0) {
        if (1 < *_DAT_143ca8e90) {
          pppppuStack_1a8 = &pppppuStack_100;
          pcStack_1a0 = pdb_140c04ef0;
          pppppuStack_188 = (undefined8 ******)0x0;
          pcStack_180 = (code *)&UNK_143021dde;
          ppppuStack_178 = (undefined8 *****)0x2b;
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
          pppppuStack_130 = &pppppuStack_1a8;
          pdb_140f332f0(&uStack_f1,&pppppuStack_188);
        }
      }
      else {
        pdb_1403b05d0(plStack_1c0,ppppppuVar57);
        *(undefined4 *)(lVar50 + 100) = uVar93;
      }
    }
    plVar67 = plStack_108;
    bVar36 = (float)uStack_258 < uStack_258._4_4_;
    fVar90 = (float)uStack_258 / uStack_258._4_4_;
    fVar92 = uStack_258._4_4_ / (float)uStack_258;
    fVar94 = fVar92;
    if (fVar92 <= fVar90) {
      fVar94 = fVar90;
    }
    fVar14 = uStack_258._4_4_;
    if (uStack_258._4_4_ <= (float)uStack_258) {
      fVar14 = (float)uStack_258;
    }
    fVar91 = ((float)(~-(uint)NAN((float)uStack_258) & (uint)fVar14 |
                     -(uint)NAN((float)uStack_258) & (uint)uStack_258._4_4_) + fVar46) /
             _DAT_14303c694;
    fVar14 = 0.0;
    if (0.0 <= fVar91) {
      fVar14 = fVar91;
    }
    fVar91 = fVar38;
    if (fVar14 <= fVar38) {
      fVar91 = fVar14;
    }
    fVar94 = (fVar40 - (fVar91 + fVar91)) * fVar91 * fVar91 * fVar39 +
             (float)(~-(uint)NAN(fVar90) & (uint)fVar94 | -(uint)NAN(fVar90) & (uint)fVar92) +
             _DAT_142f61000;
    uVar74 = -(uint)NAN(fVar78);
    lVar50 = CONCAT44(fVar79,fVar79);
    if (fVar79 <= fVar78) {
      lVar50 = lVar63;
    }
    uVar48 = CONCAT44(~(uint)fVar79 & (uint)((ulonglong)lVar50 >> 0x20),~uVar74 & (uint)lVar50) |
             CONCAT44(fVar79,uVar74 & (uint)fVar79);
    fVar78 = (float)pdb_140dedcd0(&UNK_14305c380,
                                  CONCAT44((int)(uVar48 >> 0x20),
                                           ((float)uVar48 + fVar46) / _DAT_14303c698));
    lVar50 = lStack_2a8;
    fVar79 = (fVar78 * _DAT_142e37900 + (fVar38 - fVar78) * fVar40) / _DAT_142e37ad8;
    fVar78 = 0.0;
    if (0.0 <= fVar79) {
      fVar78 = fVar79;
    }
    fVar79 = fVar38;
    if (fVar78 <= fVar38) {
      fVar79 = fVar78;
    }
    ppppuStack_1d8 =
         (undefined8 ****)CONCAT71(ppppuStack_1d8._1_7_,*(undefined1 *)(lStack_1e0 + 0x5e));
    if (((char)ppppuStack_1b8 != '\0') && (pppppuStack_188 = pppppuStack_1c8, plStack_1d0[9] != 0))
    {
      uVar48 = pdb_1400af0a0(plVar6,&pppppuStack_188);
      bVar77 = (byte)(uVar48 >> 0x39);
      auVar80 = ZEXT216(CONCAT11(bVar77,bVar77));
      auVar80 = pshuflw(auVar80,auVar80,0);
      lVar58 = 0;
      while( true ) {
        uVar48 = uVar48 & plStack_1d0[7];
        pcVar11 = (char *)(plStack_1d0[6] + uVar48);
        auVar88[0] = -(*pcVar11 == auVar80[0]);
        auVar88[1] = -(pcVar11[1] == auVar80[1]);
        auVar88[2] = -(pcVar11[2] == auVar80[2]);
        auVar88[3] = -(pcVar11[3] == auVar80[3]);
        auVar88[4] = -(pcVar11[4] == auVar80[4]);
        auVar88[5] = -(pcVar11[5] == auVar80[5]);
        auVar88[6] = -(pcVar11[6] == auVar80[6]);
        auVar88[7] = -(pcVar11[7] == auVar80[7]);
        auVar88[8] = -(pcVar11[8] == auVar80[0]);
        auVar88[9] = -(pcVar11[9] == auVar80[1]);
        auVar88[10] = -(pcVar11[10] == auVar80[2]);
        auVar88[0xb] = -(pcVar11[0xb] == auVar80[3]);
        auVar88[0xc] = -(pcVar11[0xc] == auVar80[4]);
        auVar88[0xd] = -(pcVar11[0xd] == auVar80[5]);
        auVar88[0xe] = -(pcVar11[0xe] == auVar80[6]);
        auVar88[0xf] = -(pcVar11[0xf] == auVar80[7]);
        uVar64 = (ushort)(SUB161(auVar88 >> 7,0) & 1) | (ushort)(SUB161(auVar88 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar88 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar88 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar88 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar88 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar88 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar88 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar88 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar88 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar88 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar88 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar88 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar88 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar88 >> 0x77,0) & 1) << 0xe | (ushort)(auVar88[0xf] >> 7) << 0xf
        ;
        uVar74 = (uint)uVar64;
        while (uVar64 != 0) {
          uVar33 = 0;
          for (uVar34 = uVar74; (uVar34 & 1) == 0; uVar34 = uVar34 >> 1 | 0x80000000) {
            uVar33 = uVar33 + 1;
          }
          lVar49 = plStack_1d0[6] + (uVar33 + uVar48 & plStack_1d0[7]) * -0x10;
          if ((undefined8 ******)pppppuStack_1c8 == *(undefined8 *******)(lVar49 + -0x10)) {
            uVar48 = *(ulonglong *)(lVar49 + -8);
            uVar52 = uVar48 & 0xffffffff;
            if ((((uVar52 != 0) &&
                 (uVar52 = uVar52 ^ 0xffffffff, uVar52 < *(ulonglong *)(lStack_270 + 0x10))) &&
                (piVar53 = (int *)(uVar52 * 0x18 + *(longlong *)(lStack_270 + 8)),
                piVar53[4] == (int)(uVar48 >> 0x20))) &&
               (((*piVar53 != 0 &&
                 (uVar48 = *(ulonglong *)(piVar53 + 2),
                 (uVar48 & 0xffffffff) < *(ulonglong *)(lVar30 + 0x38))) &&
                ((*(ulonglong *)(*(longlong *)(lVar30 + 0x28) + (uVar48 >> 6 & 0x3ffffff) * 8) >>
                  (uVar48 & 0x3f) & 1) != 0)))) {
              lVar58 = *(longlong *)
                        (*(longlong *)
                          (*(longlong *)(lStack_270 + 0x1a0) + 0x18 + (uVar48 >> 0x20) * 0x48) +
                         0x10 + ~*(ulonglong *)
                                  (*(longlong *)
                                    (*(longlong *)(lStack_270 + 0x1a0) + 0x38 +
                                    (uVar48 >> 0x20) * 0x48) + *(longlong *)(lVar30 + 0x110) * 8) *
                                0x30);
              ppppuStack_1d8 =
                   (undefined8 ****)
                   CONCAT71(ppppuStack_1d8._1_7_,
                            *(undefined1 *)(lVar58 + 0x3d + (ulonglong)(uint)~piVar53[1] * 0x58));
              fVar78 = *(float *)(lVar58 + 0x30 + (ulonglong)(uint)~piVar53[1] * 0x58);
              if (fVar78 <= _DAT_142e3b1d8) {
                fVar79 = fVar78;
              }
            }
            goto LAB_140a4cfb7;
          }
          uVar64 = (ushort)(uVar74 - 1) & (ushort)uVar74;
          uVar74 = CONCAT22((short)(uVar74 - 1 >> 0x10),uVar64);
        }
        auVar84[0] = -(*pcVar11 == -1);
        auVar84[1] = -(pcVar11[1] == -1);
        auVar84[2] = -(pcVar11[2] == -1);
        auVar84[3] = -(pcVar11[3] == -1);
        auVar84[4] = -(pcVar11[4] == -1);
        auVar84[5] = -(pcVar11[5] == -1);
        auVar84[6] = -(pcVar11[6] == -1);
        auVar84[7] = -(pcVar11[7] == -1);
        auVar84[8] = -(pcVar11[8] == -1);
        auVar84[9] = -(pcVar11[9] == -1);
        auVar84[10] = -(pcVar11[10] == -1);
        auVar84[0xb] = -(pcVar11[0xb] == -1);
        auVar84[0xc] = -(pcVar11[0xc] == -1);
        auVar84[0xd] = -(pcVar11[0xd] == -1);
        auVar84[0xe] = -(pcVar11[0xe] == -1);
        auVar84[0xf] = -(pcVar11[0xf] == -1);
        if ((((((((((((((((SUB161(auVar84 >> 7,0) & 1) != 0 || (SUB161(auVar84 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar84 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar84 >> 0x1f,0) & 1) != 0) || (SUB161(auVar84 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar84 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar84 >> 0x37,0) & 1) != 0) || (SUB161(auVar84 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar84 >> 0x47,0) & 1) != 0) || (SUB161(auVar84 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar84 >> 0x57,0) & 1) != 0) || (SUB161(auVar84 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar84 >> 0x67,0) & 1) != 0) || (SUB161(auVar84 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar84 >> 0x77,0) & 1) != 0) || auVar84[0xf] < '\0') break;
        uVar48 = uVar48 + lVar58 + 0x10;
        lVar58 = lVar58 + 0x10;
      }
    }
LAB_140a4cfb7:
    uVar93 = uStack_2f8._4_4_;
    *puVar27 = uStack_238;
    lVar58 = *(longlong *)(lVar50 + 0x30);
    uVar70 = *(undefined8 *)(lVar50 + 0x40);
    if (lVar58 == *(longlong *)(lVar50 + 0x20)) {
      pdb_142d7ee50(lVar7);
    }
    fVar94 = fVar94 / fVar39;
    fVar78 = 0.0;
    if (0.0 <= fVar94) {
      fVar78 = fVar94;
    }
    fVar94 = fVar38;
    if (fVar78 <= fVar38) {
      fVar94 = fVar78;
    }
    fVar94 = (fVar40 - (fVar94 + fVar94)) * fVar94 * fVar94;
    lVar49 = *(longlong *)(lVar50 + 0x28);
    lVar63 = lVar58 * 0x40;
    *(undefined8 *)(lVar49 + lVar63) = uVar70;
    *(undefined8 *******)(lVar49 + 8 + lVar63) = ppppppuVar57;
    *(undefined4 *)(lVar49 + 0x10 + lVar63) = uVar93;
    *(ulonglong *)(lVar49 + 0x14 + lVar63) = CONCAT44(uStack_2e0,uStack_2e4);
    *(undefined4 *)(lVar49 + 0x1c + lVar63) = uStack_2dc;
    *(undefined8 *)(lVar49 + 0x20 + lVar63) = 0;
    *(undefined4 *)(lVar49 + 0x28 + lVar63) = 0x3f000000;
    *(float *)(lVar49 + 0x2c + lVar63) = fVar79;
    *(float *)(lVar49 + 0x30 + lVar63) = fVar94;
    *(undefined4 *)(lVar49 + 0x34 + lVar63) = 0x3e4ccccd;
    *(bool *)(lVar49 + 0x38 + lVar63) = bVar36;
    *(code *)(lVar49 + 0x39 + lVar63) = ppppuStack_1d8._0_1_;
    *(undefined1 *)(lVar49 + 0x3c + lVar63) = 0;
    pbVar61 = (byte *)(lVar58 + 1);
    *(byte **)(lVar50 + 0x30) = pbVar61;
    *(longlong *)(lVar50 + 0x40) = *(longlong *)(lVar50 + 0x40) + 1;
    *puStack_1f8 = uStack_1ac;
    pppppuStack_1a8 = ppppppuVar57;
    if (plVar67[3] == 0) {
LAB_140a4d966:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14303cd58);
    }
    uVar48 = pdb_1400af0a0(plVar8,&pppppuStack_1a8);
    lVar50 = *plVar67;
    bVar77 = (byte)(uVar48 >> 0x39);
    auVar80 = ZEXT216(CONCAT11(bVar77,bVar77));
    auVar80 = pshuflw(auVar80,auVar80,0);
    lVar58 = 0;
    while( true ) {
      uVar48 = uVar48 & plVar67[1];
      auVar81 = *(undefined1 (*) [16])(lVar50 + uVar48);
      auVar89[0] = -(auVar81[0] == auVar80[0]);
      auVar89[1] = -(auVar81[1] == auVar80[1]);
      auVar89[2] = -(auVar81[2] == auVar80[2]);
      auVar89[3] = -(auVar81[3] == auVar80[3]);
      auVar89[4] = -(auVar81[4] == auVar80[4]);
      auVar89[5] = -(auVar81[5] == auVar80[5]);
      auVar89[6] = -(auVar81[6] == auVar80[6]);
      auVar89[7] = -(auVar81[7] == auVar80[7]);
      auVar89[8] = -(auVar81[8] == auVar80[0]);
      auVar89[9] = -(auVar81[9] == auVar80[1]);
      auVar89[10] = -(auVar81[10] == auVar80[2]);
      auVar89[0xb] = -(auVar81[0xb] == auVar80[3]);
      auVar89[0xc] = -(auVar81[0xc] == auVar80[4]);
      auVar89[0xd] = -(auVar81[0xd] == auVar80[5]);
      auVar89[0xe] = -(auVar81[0xe] == auVar80[6]);
      auVar89[0xf] = -(auVar81[0xf] == auVar80[7]);
      uVar64 = (ushort)(SUB161(auVar89 >> 7,0) & 1) | (ushort)(SUB161(auVar89 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar89 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar89 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar89 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar89 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar89 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar89 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar89 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar89 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar89 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar89 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar89 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar89 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar89 >> 0x77,0) & 1) << 0xe | (ushort)(auVar89[0xf] >> 7) << 0xf;
      uVar74 = (uint)uVar64;
      if (uVar64 != 0) break;
LAB_140a4d120:
      auVar85[0] = -(auVar81[0] == -1);
      auVar85[1] = -(auVar81[1] == -1);
      auVar85[2] = -(auVar81[2] == -1);
      auVar85[3] = -(auVar81[3] == -1);
      auVar85[4] = -(auVar81[4] == -1);
      auVar85[5] = -(auVar81[5] == -1);
      auVar85[6] = -(auVar81[6] == -1);
      auVar85[7] = -(auVar81[7] == -1);
      auVar85[8] = -(auVar81[8] == -1);
      auVar85[9] = -(auVar81[9] == -1);
      auVar85[10] = -(auVar81[10] == -1);
      auVar85[0xb] = -(auVar81[0xb] == -1);
      auVar85[0xc] = -(auVar81[0xc] == -1);
      auVar85[0xd] = -(auVar81[0xd] == -1);
      auVar85[0xe] = -(auVar81[0xe] == -1);
      auVar85[0xf] = -(auVar81[0xf] == -1);
      if ((((((((((((((((SUB161(auVar85 >> 7,0) & 1) != 0 || (SUB161(auVar85 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar85 >> 0x17,0) & 1) != 0) || (SUB161(auVar85 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar85 >> 0x27,0) & 1) != 0) || (SUB161(auVar85 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar85 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar85 >> 0x3f,0) & 1) != 0) || (SUB161(auVar85 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar85 >> 0x4f,0) & 1) != 0) || (SUB161(auVar85 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar85 >> 0x5f,0) & 1) != 0) || (SUB161(auVar85 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar85 >> 0x6f,0) & 1) != 0) || (SUB161(auVar85 >> 0x77,0) & 1) != 0) ||
          auVar85[0xf] < '\0') goto LAB_140a4d966;
      uVar48 = uVar48 + lVar58 + 0x10;
      lVar58 = lVar58 + 0x10;
    }
    while( true ) {
      uVar33 = 0;
      for (uVar34 = uVar74; (uVar34 & 1) == 0; uVar34 = uVar34 >> 1 | 0x80000000) {
        uVar33 = uVar33 + 1;
      }
      lVar49 = (uVar33 + uVar48 & plVar67[1]) * -0x78;
      if (ppppppuVar57 == *(undefined8 *******)(lVar50 + -0x78 + lVar49)) break;
      uVar64 = (ushort)(uVar74 - 1) & (ushort)uVar74;
      uVar74 = CONCAT22((short)(uVar74 - 1 >> 0x10),uVar64);
      if (uVar64 == 0) goto LAB_140a4d120;
    }
    pppppuStack_1c8 = (undefined8 *****)CONCAT44(pppppuStack_1c8._4_4_,uVar93);
    lVar50 = lVar50 + lVar49;
    pppppuVar31 = *(undefined8 ******)(lVar50 + -0x60);
    uVar48 = (longlong)pppppuVar31 * 8;
    if (0x7ffffffffffffffc < uVar48 || (ulonglong)pppppuVar31 >> 0x3d != 0) {
      uVar70 = 0;
LAB_140a4d975:
      pdb_142dc7e2a(uVar70,uVar48);
LAB_140a4d980:
      uVar70 = 0;
      pbStack_1f0 = pbVar61;
LAB_140a4d98a:
      pdb_142dc7e2a(uVar70,uVar48);
                    /* WARNING: Does not return */
      pcVar54 = (code *)invalidInstructionException();
      (*pcVar54)();
    }
    uStack_1b0 = CONCAT31(uStack_1b0._1_3_,bVar36);
    uVar32 = *(undefined8 *)(lVar50 + -0x68);
    if (uVar48 == 0) {
      ppppuStack_1b8 = (undefined8 *****)0x0;
      pbVar51 = (byte *)0x4;
      pppppuVar47 = (undefined8 *****)ppppuStack_1b8;
    }
    else {
      pdb_14007ee60();
      uVar70 = 4;
      pbVar51 = pub_1406abab0(uVar48,4);
      pppppuVar47 = pppppuVar31;
      if (pbVar51 == (byte *)0x0) goto LAB_140a4d975;
    }
    ppppuStack_1b8 = pppppuVar47;
    pbVar61 = pbVar51;
    if (pppppuVar31 != (undefined8 *****)0x0) {
      pub_142e32760(pbVar61,uVar32,uVar48);
    }
    uVar52 = *(ulonglong *)(lVar50 + -0x48);
    uVar48 = uVar52 * 4;
    if (0x7ffffffffffffffc < uVar48 || uVar52 >> 0x3e != 0) goto LAB_140a4d980;
    if (uVar48 == 0) {
      pbVar51 = (byte *)0x4;
      pcStack_180 = (code *)pbVar61;
      cVar66 = uStack_1b0._0_1_;
      goto LAB_140a4d58b;
    }
    puVar71 = *(undefined4 **)(lVar50 + -0x50);
    pbStack_1f0 = pbVar61;
    pdb_14007ee60();
    uVar70 = 4;
    pbVar51 = pub_1406abab0(uVar48,4);
    if (pbVar51 == (byte *)0x0) goto LAB_140a4d98a;
    pcStack_180 = (code *)pbStack_1f0;
    cVar66 = uStack_1b0._0_1_;
    if (uVar52 == 0) goto LAB_140a4d58b;
    uVar48 = uVar52 - 1;
    if (uVar52 < uVar52 - 1) {
      uVar48 = uVar52;
    }
    if (uVar48 < 8) {
      lVar58 = 0;
      uVar48 = uVar52;
      puVar59 = puVar71;
    }
    else {
      uVar48 = uVar48 + 1;
      uVar56 = (ulonglong)((uint)uVar48 & 7);
      if ((uVar48 & 7) == 0) {
        uVar56 = 8;
      }
      lVar58 = uVar48 - uVar56;
      uVar48 = uVar52 - lVar58;
      puVar59 = puVar71 + lVar58;
      lVar49 = 0;
      do {
        uVar70 = *(undefined8 *)((longlong)(puVar71 + lVar49) + 8);
        uVar32 = *(undefined8 *)(puVar71 + lVar49 + 4);
        uVar37 = *(undefined8 *)((longlong)(puVar71 + lVar49 + 4) + 8);
        *(undefined8 *)(pbVar51 + lVar49 * 4) = *(undefined8 *)(puVar71 + lVar49);
        *(undefined8 *)(pbVar51 + lVar49 * 4 + 8) = uVar70;
        *(undefined8 *)(pbVar51 + lVar49 * 4 + 0x10) = uVar32;
        *(undefined8 *)(pbVar51 + lVar49 * 4 + 0x10 + 8) = uVar37;
        lVar49 = lVar49 + 8;
      } while (lVar58 != lVar49);
    }
    pbVar61 = pbVar51 + lVar58 * 4;
    do {
      if (puVar59 == puVar71 + uVar52) break;
      uVar93 = *puVar59;
      puVar59 = puVar59 + 1;
      *(undefined4 *)pbVar61 = uVar93;
      pbVar61 = pbVar61 + 4;
      uVar48 = uVar48 - 1;
    } while (uVar48 != 0);
LAB_140a4d58b:
    uVar70 = uStack_278;
    uStack_134 = *(undefined4 *)(lVar50 + -0x1c);
    uVar74 = *(uint *)(lVar50 + -0x38);
    iVar62 = uVar74 - 2;
    if (uVar74 < 2) {
      iVar62 = 2;
    }
    uStack_150 = 2;
    if (iVar62 != 0) {
      if (iVar62 == 1) {
        uStack_150 = 3;
      }
      else {
        uStack_198 = *(undefined8 *)(lVar50 + -0x24);
        pppppuStack_1a8 = *(undefined8 ******)(lVar50 + -0x34);
        pcStack_1a0 = *(code **)(lVar50 + -0x2c);
        uStack_150 = uVar74;
      }
    }
    pppppuStack_188 = (undefined8 *****)ppppuStack_1b8;
    uStack_158 = CONCAT44(uStack_158._4_4_,*(undefined4 *)(lVar50 + -0x40));
    uStack_13c = (undefined4)uStack_198;
    uStack_138 = (undefined4)((ulonglong)uStack_198 >> 0x20);
    uStack_14c = SUB84(pppppuStack_1a8,0);
    uStack_148 = (undefined4)((ulonglong)pppppuStack_1a8 >> 0x20);
    uStack_144 = SUB84(pcStack_1a0,0);
    uStack_140 = (undefined4)((ulonglong)pcStack_1a0 >> 0x20);
    _iStack_120 = *(undefined8 *)(lVar50 + -8);
    pppppuStack_130 = *(undefined8 ******)(lVar50 + -0x18);
    uStack_128 = *(undefined8 *)(lVar50 + -0x10);
    ppppuStack_178 = pppppuVar31;
    uStack_170 = uVar52;
    pbStack_168 = pbVar51;
    uStack_160 = uVar52;
    pdb_140adf010(uStack_278,ppppppuVar57,&pppppuStack_188,uStack_234,uStack_230);
    *puStack_1f8 = uStack_1ac;
    pdb_14007ee60();
    pcVar54 = (code *)pub_1406abab0(0x50,8);
    if (pcVar54 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x50);
    }
    *(undefined8 *)pcVar54 = 1;
    *(undefined8 *)(pcVar54 + 8) = 1;
    pcVar54[0x10] = (code)0x0;
    *(undefined4 *)(pcVar54 + 0x14) = pppppuStack_1c8._0_4_;
    *(ulonglong *)(pcVar54 + 0x18) = CONCAT44(uStack_2e0,uStack_2e4);
    *(undefined4 *)(pcVar54 + 0x20) = uStack_2dc;
    *(undefined8 *)(pcVar54 + 0x24) = 0;
    *(undefined4 *)(pcVar54 + 0x2c) = 0x3f000000;
    *(float *)(pcVar54 + 0x30) = fVar79;
    *(float *)(pcVar54 + 0x34) = fVar94;
    *(undefined4 *)(pcVar54 + 0x38) = 0x3e4ccccd;
    pcVar54[0x3c] = cVar66;
    pcVar54[0x3d] = ppppuStack_1d8._0_1_;
    *(undefined8 *******)(pcVar54 + 0x40) = ppppppuVar57;
    pppppuStack_188 = (undefined8 *****)0x8;
    pcStack_180 = pcVar54;
    pdb_140ae5180(uVar70,&pppppuStack_188,&UNK_14303cd70);
    iVar62 = *(int *)(lStack_1e0 + 0x54);
    if (iVar62 != 0) {
      *puVar24 = uStack_224;
      lVar50 = *(longlong *)(lStack_280 + 0x30);
      uVar32 = *(undefined8 *)(lStack_280 + 0x40);
      if (lVar50 == *(longlong *)(lStack_280 + 0x20)) {
        pdb_142d7e830(lVar12);
      }
      lVar58 = *(longlong *)(lStack_280 + 0x28);
      *(undefined8 *)(lVar58 + lVar50 * 0x18) = uVar32;
      *(undefined8 *******)(lVar58 + 8 + lVar50 * 0x18) = ppppppuVar57;
      *(int *)(lVar58 + 0x10 + lVar50 * 0x18) = iVar62;
      *(undefined1 *)(lVar58 + 0x14 + lVar50 * 0x18) = 0;
      *(longlong *)(lStack_280 + 0x30) = lVar50 + 1;
      *(longlong *)(lStack_280 + 0x40) = *(longlong *)(lStack_280 + 0x40) + 1;
      *puStack_1f8 = uStack_1ac;
      uVar93 = *(undefined4 *)(lStack_1e0 + 0x54);
      pdb_14007ee60();
      pcVar54 = (code *)pub_1406abab0(0x30,8);
      if (pcVar54 == (code *)0x0) goto LAB_140a4da2a;
      *(undefined8 *)pcVar54 = 1;
      *(undefined8 *)(pcVar54 + 8) = 1;
      pcVar54[0x18] = (code)0x6;
      *(undefined8 *******)(pcVar54 + 0x20) = ppppppuVar57;
      *(undefined4 *)(pcVar54 + 0x28) = 0;
      *(undefined4 *)(pcVar54 + 0x2c) = uVar93;
      pppppuStack_188 = (undefined8 *****)0x9;
      pcStack_180 = pcVar54;
      pdb_140ae5180(uVar70,&pppppuStack_188,&UNK_14303cd88);
    }
    lVar50 = lStack_288;
    if (iStack_1e4 != 3) {
      *puStack_1f8 = uStack_1ac;
      pdb_14007ee60();
      pcVar54 = (code *)pub_1406abab0(0x30,8);
      if (pcVar54 == (code *)0x0) {
LAB_140a4da2a:
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x30);
      }
      *(undefined8 *)pcVar54 = 1;
      *(undefined8 *)(pcVar54 + 8) = 1;
      pcVar54[0x18] = (code)0x5;
      *(undefined8 *******)(pcVar54 + 0x20) = ppppppuVar57;
      *(undefined4 *)(pcVar54 + 0x28) = 3;
      *(int *)(pcVar54 + 0x2c) = iStack_1e4;
      pppppuStack_188 = (undefined8 *****)0x9;
      pcStack_180 = pcVar54;
      pdb_140ae5180(uVar70,&pppppuStack_188,&UNK_14303cda0);
    }
    *puVar28 = uStack_22c;
    lVar58 = *(longlong *)(lStack_298 + 0x30);
    uVar70 = *(undefined8 *)(lStack_298 + 0x40);
    if (lVar58 == *(longlong *)(lStack_298 + 0x20)) {
      pdb_142d7e980(lVar9);
    }
    lVar49 = *(longlong *)(lStack_298 + 0x28);
    *(undefined8 *)(lVar49 + lVar58 * 0x10) = uVar70;
    *(undefined1 *)(lVar49 + 8 + lVar58 * 0x10) = 7;
    *(longlong *)(lStack_298 + 0x30) = lVar58 + 1;
    *(longlong *)(lStack_298 + 0x40) = *(longlong *)(lStack_298 + 0x40) + 1;
    *puVar29 = uStack_228;
    lVar58 = *(longlong *)(lStack_290 + 0x30);
    uVar70 = *(undefined8 *)(lStack_290 + 0x40);
    if (lVar58 == *(longlong *)(lStack_290 + 0x20)) {
      pdb_142d7e980(lVar10);
    }
    lVar49 = *(longlong *)(lStack_290 + 0x28);
    *(undefined8 *)(lVar49 + lVar58 * 0x10) = uVar70;
    *(undefined8 *******)(lVar49 + 8 + lVar58 * 0x10) = ppppppuVar57;
    *(longlong *)(lStack_290 + 0x30) = lVar58 + 1;
    *(longlong *)(lStack_290 + 0x40) = *(longlong *)(lStack_290 + 0x40) + 1;
  } while( true );
}

