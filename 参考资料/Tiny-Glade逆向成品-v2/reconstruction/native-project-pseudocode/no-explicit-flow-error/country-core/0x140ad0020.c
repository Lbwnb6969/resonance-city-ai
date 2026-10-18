// VA 0x140ad0020, PDB extent 24052 bytes
// country_core::systems::mod_editor::mod_editor_tick
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::mod_editor::mod_editor_tick
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
   Extent: 24052 */

void pdb_140ad0020(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  byte *pbVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  bool bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  char cVar67;
  char cVar68;
  char cVar69;
  char cVar70;
  char cVar71;
  char cVar72;
  char cVar73;
  char cVar74;
  char cVar75;
  char cVar76;
  char cVar77;
  char cVar78;
  char cVar79;
  char cVar80;
  char cVar81;
  char cVar82;
  char cVar83;
  char cVar84;
  char cVar85;
  char cVar86;
  char cVar87;
  char cVar88;
  char cVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  ulonglong uVar98;
  char cVar99;
  char cVar100;
  int iVar101;
  longlong lVar102;
  ulonglong uVar103;
  byte *pbVar104;
  longlong lVar105;
  byte *pbVar106;
  ulonglong uVar107;
  longlong lVar108;
  byte *pbVar109;
  longlong *plVar110;
  longlong *plVar111;
  ulonglong *puVar112;
  ulonglong uVar113;
  longlong lVar114;
  undefined4 uVar115;
  ulonglong uVar116;
  ulonglong uVar117;
  longlong lVar118;
  undefined8 uVar119;
  longlong *plVar120;
  uint uVar121;
  longlong lVar122;
  longlong lVar123;
  ulonglong uVar124;
  undefined1 *puVar125;
  undefined8 uVar126;
  ulonglong *puVar127;
  undefined8 *puVar128;
  bool bVar129;
  undefined1 uVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  byte bVar134;
  byte bVar135;
  byte bVar136;
  byte bVar137;
  byte bVar138;
  byte bVar139;
  byte bVar140;
  byte bVar141;
  byte bVar142;
  byte bVar143;
  byte bVar144;
  byte bVar145;
  byte bVar146;
  byte bVar147;
  byte bVar148;
  byte bVar149;
  byte bVar150;
  byte bVar151;
  byte bVar152;
  byte bVar153;
  byte bVar154;
  byte bVar155;
  byte bVar156;
  byte bVar157;
  byte bVar158;
  byte bVar159;
  byte bVar160;
  byte bVar161;
  byte bVar162;
  byte bVar163;
  byte bVar164;
  byte bVar165;
  byte bVar166;
  byte bVar167;
  byte bVar168;
  byte bVar169;
  byte bVar170;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  undefined8 uStack_48;
  
  uStack_48 = 0x140ad0036;
  lVar102 = pdb_142d7c6d0();
  lVar102 = -lVar102;
  *(undefined8 *)(&stack0x000010f0 + lVar102) = unaff_XMM11_Qa;
  *(undefined8 *)(&stack0x000010f8 + lVar102) = unaff_XMM11_Qb;
  *(undefined8 *)(&stack0x000010e0 + lVar102) = unaff_XMM10_Qa;
  *(undefined8 *)(&stack0x000010e8 + lVar102) = unaff_XMM10_Qb;
  *(undefined8 *)(&stack0x000010d0 + lVar102) = unaff_XMM9_Qa;
  *(undefined8 *)(&stack0x000010d8 + lVar102) = unaff_XMM9_Qb;
  *(undefined8 *)(&stack0x000010c0 + lVar102) = unaff_XMM8_Qa;
  *(undefined8 *)(&stack0x000010c8 + lVar102) = unaff_XMM8_Qb;
  *(undefined8 *)(&stack0x000010b0 + lVar102) = unaff_XMM7_Qa;
  *(undefined8 *)(&stack0x000010b8 + lVar102) = unaff_XMM7_Qb;
  *(undefined8 *)(&stack0x000010a0 + lVar102) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x000010a8 + lVar102) = unaff_XMM6_Qb;
  *(undefined8 *)(&stack0x00001098 + lVar102) = 0xfffffffffffffffe;
  uVar115 = *(undefined4 *)((longlong)param_1 + 0x1c);
  puVar3 = (undefined4 *)param_1[2];
  *puVar3 = uVar115;
  puVar127 = (ulonglong *)*param_1;
  puVar112 = (ulonglong *)0x0;
  if (*puVar127 < 2) {
    puVar112 = puVar127;
  }
  if (1 < (uint)*puVar127) {
    *(undefined8 *)*param_2 = *(undefined8 *)(param_2[1] + 0x40);
    return;
  }
  *(undefined8 *)(&stack0x00000f38 + lVar102) = param_4;
  *(undefined4 **)(&stack0x00000fb8 + lVar102) = puVar3;
  *(undefined4 *)(&stack0x00000f70 + lVar102) = uVar115;
  *(ulonglong **)(&stack0x00001010 + lVar102) = puVar112;
  puVar112 = (ulonglong *)*param_2;
  lVar105 = param_2[1];
  uVar117 = *puVar112;
  uVar116 = 0;
  uVar103 = uVar117 - *(ulonglong *)(lVar105 + 0x18);
  if (uVar117 < *(ulonglong *)(lVar105 + 0x18)) {
    uVar103 = uVar116;
  }
  uVar113 = uVar117 - *(ulonglong *)(lVar105 + 0x38);
  if (uVar117 < *(ulonglong *)(lVar105 + 0x38)) {
    uVar113 = uVar116;
  }
  uVar117 = uVar103 * 0x28 + *(longlong *)(lVar105 + 8);
  uVar107 = *(ulonglong *)(lVar105 + 0x10) - uVar103;
  if (*(ulonglong *)(lVar105 + 0x10) < uVar103) {
    uVar117 = 8;
    uVar107 = uVar116;
  }
  uVar103 = uVar113 * 0x28 + *(longlong *)(lVar105 + 0x28);
  uVar124 = *(ulonglong *)(lVar105 + 0x30) - uVar113;
  if (*(ulonglong *)(lVar105 + 0x30) < uVar113) {
    uVar103 = 8;
    uVar124 = uVar116;
  }
  *puVar112 = (*(longlong *)(lVar105 + 0x40) - uVar124) - uVar107;
  uVar98 = _DAT_142f97ed0;
  bVar97 = UNK_142f97ec7;
  bVar96 = UNK_142f97ec6;
  bVar95 = UNK_142f97ec5;
  bVar94 = UNK_142f97ec4;
  bVar93 = UNK_142f97ec3;
  bVar92 = UNK_142f97ec2;
  bVar91 = UNK_142f97ec1;
  bVar90 = DAT_142f97ec0;
  cVar89 = UNK_142f97eb7;
  cVar88 = UNK_142f97eb6;
  cVar87 = UNK_142f97eb5;
  cVar86 = UNK_142f97eb4;
  cVar85 = UNK_142f97eb3;
  cVar84 = UNK_142f97eb2;
  cVar83 = UNK_142f97eb1;
  cVar82 = DAT_142f97eb0;
  cVar81 = UNK_142f5f76f;
  cVar80 = UNK_142f5f76e;
  cVar79 = UNK_142f5f76d;
  cVar78 = UNK_142f5f76c;
  cVar77 = UNK_142f5f76b;
  cVar76 = UNK_142f5f76a;
  cVar75 = UNK_142f5f769;
  cVar74 = UNK_142f5f768;
  cVar73 = UNK_142f5f767;
  cVar72 = UNK_142f5f766;
  cVar71 = UNK_142f5f765;
  cVar70 = UNK_142f5f764;
  cVar69 = UNK_142f5f763;
  cVar68 = UNK_142f5f762;
  cVar67 = UNK_142f5f761;
  cVar100 = DAT_142f5f760;
  bVar66 = UNK_142e4234f;
  bVar65 = UNK_142e4234e;
  bVar64 = UNK_142e4234d;
  bVar63 = UNK_142e4234c;
  bVar62 = UNK_142e4234b;
  bVar61 = UNK_142e4234a;
  bVar60 = UNK_142e42349;
  bVar59 = UNK_142e42348;
  bVar58 = UNK_142e42347;
  bVar57 = UNK_142e42346;
  bVar56 = UNK_142e42345;
  bVar55 = UNK_142e42344;
  bVar54 = UNK_142e42343;
  bVar53 = UNK_142e42342;
  bVar52 = UNK_142e42341;
  bVar51 = DAT_142e42340;
  bVar50 = UNK_142e346df;
  bVar49 = UNK_142e346de;
  bVar48 = UNK_142e346dd;
  bVar47 = UNK_142e346dc;
  bVar46 = UNK_142e346db;
  bVar45 = UNK_142e346da;
  bVar44 = UNK_142e346d9;
  bVar43 = UNK_142e346d8;
  bVar42 = UNK_142e346d7;
  bVar41 = UNK_142e346d6;
  bVar40 = UNK_142e346d5;
  bVar39 = UNK_142e346d4;
  bVar38 = UNK_142e346d3;
  bVar37 = UNK_142e346d2;
  bVar36 = UNK_142e346d1;
  bVar35 = DAT_142e346d0;
  uVar116 = uVar117 + uVar107 * 0x28;
  *(ulonglong *)(&stack0x00001078 + lVar102) = uVar103 + uVar124 * 0x28;
  *(ulonglong **)(&stack0x00000f78 + lVar102) = puVar127 + 0xf;
  *(ulonglong **)(&stack0x00000f30 + lVar102) = puVar127 + 0x21;
  *(ulonglong **)(&stack0x00000e80 + lVar102) = puVar127 + 0x24;
  puVar125 = &stack0x00000c00 + lVar102;
  *(undefined8 *)(&stack0x00000f68 + lVar102) = 0x8000000000000006;
LAB_140ad0202:
  if ((uVar117 != 0) && (uVar117 != uVar116)) {
    lVar105 = uVar117 + 0x28;
    *puVar112 = *puVar112 + 1;
    uVar113 = *(ulonglong *)(uVar117 + 0x10);
    uVar107 = uVar103;
    uVar103 = uVar117;
    if (-1 < (longlong)uVar113) goto LAB_140ad025f;
LAB_140ad1411:
    uVar119 = 0;
LAB_140ad1413:
    *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad141e;
    pdb_142dc7e2a(uVar119,uVar113);
LAB_140ad141e:
    uVar119 = 0;
LAB_140ad1420:
    *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1428;
    pdb_142dc7e2a(uVar119,uVar103);
    goto LAB_140ad354b;
  }
  if ((uVar103 == 0) || (uVar103 == *(ulonglong *)(&stack0x00001078 + lVar102))) {
    lVar105 = *(longlong *)(&stack0x00001010 + lVar102);
    if (puVar127[0x20] == 0x8000000000000006) {
      if (puVar127[0x12] != 0) {
        uVar117 = puVar127[0x11];
        uVar103 = 0;
        if (puVar127[0xf] <= uVar117 + 1) {
          uVar103 = puVar127[0xf];
        }
        uVar113 = puVar127[0x10];
        puVar127[0x11] = (uVar117 - uVar103) + 1;
        puVar127[0x12] = puVar127[0x12] - 1;
        lVar123 = uVar117 * 0x40;
        *(undefined8 *)(&stack0x00000f68 + lVar102) = *(undefined8 *)(uVar113 + lVar123);
        *(undefined8 *)(&stack0x000004e0 + lVar102) = *(undefined8 *)(uVar113 + 0x38 + lVar123);
        puVar128 = (undefined8 *)(uVar113 + 0x28 + lVar123);
        uVar119 = puVar128[1];
        *(undefined8 *)(&stack0x000004d0 + lVar102) = *puVar128;
        *(undefined8 *)(&stack0x000004d8 + lVar102) = uVar119;
        puVar128 = (undefined8 *)(uVar113 + 0x18 + lVar123);
        uVar119 = puVar128[1];
        *(undefined8 *)(&stack0x000004c0 + lVar102) = *puVar128;
        *(undefined8 *)(&stack0x000004c8 + lVar102) = uVar119;
        puVar128 = (undefined8 *)(uVar113 + 8 + lVar123);
        uVar119 = puVar128[1];
        *(undefined8 *)(&stack0x000004b0 + lVar102) = *puVar128;
        *(undefined8 *)(&stack0x000004b8 + lVar102) = uVar119;
      }
      puVar127[0x20] = *(ulonglong *)(&stack0x00000f68 + lVar102);
      puVar128 = *(undefined8 **)(&stack0x00000f30 + lVar102);
      puVar128[6] = *(undefined8 *)(&stack0x000004e0 + lVar102);
      uVar119 = *(undefined8 *)(&stack0x000004b0 + lVar102);
      uVar126 = *(undefined8 *)(&stack0x000004b8 + lVar102);
      uVar4 = *(undefined8 *)(&stack0x000004c0 + lVar102);
      uVar30 = *(undefined8 *)(&stack0x000004c8 + lVar102);
      uVar31 = *(undefined8 *)(&stack0x000004d8 + lVar102);
      puVar128[4] = *(undefined8 *)(&stack0x000004d0 + lVar102);
      puVar128[5] = uVar31;
      puVar128[2] = uVar4;
      puVar128[3] = uVar30;
      *puVar128 = uVar119;
      puVar128[1] = uVar126;
    }
    if (*(char *)(lVar105 + 0x1b1) == '\0') goto LAB_140ad1625;
    uVar117 = puVar127[4];
    uVar130 = uVar117 == 0;
    if (-1 < (longlong)uVar117) goto LAB_140ad1557;
    uVar119 = 0;
    uVar130 = true;
    puVar112 = puVar127;
    goto LAB_140ad154c;
  }
  lVar105 = 0;
  *puVar112 = *puVar112 + 1;
  uVar113 = *(ulonglong *)(uVar103 + 0x10);
  uVar107 = uVar103 + 0x28;
  uVar117 = uVar103;
  if ((longlong)uVar113 < 0) goto LAB_140ad1411;
LAB_140ad025f:
  *(longlong *)(&stack0x00000f60 + lVar102) = lVar105;
  *(ulonglong *)(&stack0x00000fc0 + lVar102) = uVar107;
  if (uVar113 == 0) {
    pbVar104 = (byte *)0x1;
  }
  else {
    *(ulonglong **)(&stack0x00001058 + lVar102) = puVar127;
    uVar126 = *(undefined8 *)(uVar117 + 8);
    *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0288;
    pdb_14007ee60();
    uVar119 = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad029a;
    pbVar104 = pub_1406abab0(uVar113,1);
    uVar103 = uVar117;
    if (pbVar104 == (byte *)0x0) goto LAB_140ad1413;
    *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad02b4;
    pub_142e32760(pbVar104,uVar126,uVar113);
    puVar127 = *(ulonglong **)(&stack0x00001058 + lVar102);
  }
  (&stack0x00001077)[lVar102] = *(undefined1 *)(uVar117 + 0x18);
  (&stack0x00001076)[lVar102] = 1;
  *(byte **)(&stack0x00001060 + lVar102) = pbVar104;
  *(ulonglong *)(&stack0x00001088 + lVar102) = uVar113;
  *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad02f5;
  lVar105 = pdb_140f3ecf0(pbVar104,uVar113);
  if (lVar105 == 0) {
LAB_140ad03a1:
    pbVar106 = (byte *)0x1;
    uVar113 = 0;
    uVar117 = 0;
LAB_140ad03ac:
    uVar103 = uVar117;
    uVar119 = *(undefined8 *)(&stack0x00001060 + lVar102);
LAB_140ad03b3:
    *(ulonglong *)(&stack0x00000f48 + lVar102) = uVar103;
    *(byte **)(&stack0x00000f50 + lVar102) = pbVar106;
    *(ulonglong *)(&stack0x00000f58 + lVar102) = uVar113;
    (&stack0x00001075)[lVar102] = 1;
    uVar126 = *(undefined8 *)(&stack0x00001088 + lVar102);
    *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad03db;
    lVar105 = pdb_140f3ec80(uVar119,uVar126);
    puVar125 = &stack0x00000c00 + lVar102;
    uVar103 = *(ulonglong *)(&stack0x00000ea8 + lVar102);
    if (lVar105 != 0) {
      (&stack0x00001075)[lVar102] = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad040c;
      pdb_140f5fd10(&stack0x000004b0 + lVar102,lVar105,uVar126);
      *(undefined8 *)(&stack0x00001008 + lVar102) = *(undefined8 *)(&stack0x000004b8 + lVar102);
      lVar105 = *(longlong *)(&stack0x000004c0 + lVar102);
      *(longlong *)(&stack0x00001048 + lVar102) = lVar105;
      if (lVar105 < 0) goto LAB_140ad141e;
      if (lVar105 == 0) {
        pbVar104 = (byte *)0x1;
        *(undefined8 *)(&stack0x00000ea8 + lVar102) = 1;
        uVar117 = *(ulonglong *)(&stack0x00001088 + lVar102);
      }
      else {
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0439;
        pdb_14007ee60();
        uVar103 = *(ulonglong *)(&stack0x00001048 + lVar102);
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad044d;
        pbVar104 = pub_1406abab0(uVar103,1);
        if (pbVar104 == (byte *)0x0) {
          uVar119 = 1;
          goto LAB_140ad1420;
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad046b;
        pub_142e32760(pbVar104,*(undefined8 *)(&stack0x00001008 + lVar102),uVar103);
        uVar117 = *(ulonglong *)(&stack0x00001088 + lVar102);
        if (uVar103 < 8) {
          uVar107 = 0;
LAB_140ad05b0:
          do {
            pbVar104[uVar107] = ((byte)(pbVar104[uVar107] + 0xbf) < 0x1a) << 5 | pbVar104[uVar107];
            uVar107 = uVar107 + 1;
LAB_140ad05ca:
          } while (uVar103 != uVar107);
        }
        else {
          if (uVar103 < 0x20) {
            uVar113 = 0;
LAB_140ad0557:
            uVar107 = uVar103 & 0x7ffffffffffffff8;
            do {
              uVar103 = *(ulonglong *)(pbVar104 + uVar113);
              bVar131 = (char)uVar103 + cVar82;
              bVar132 = (char)(uVar103 >> 8) + cVar83;
              bVar133 = (char)(uVar103 >> 0x10) + cVar84;
              bVar134 = (char)(uVar103 >> 0x18) + cVar85;
              bVar135 = (char)(uVar103 >> 0x20) + cVar86;
              bVar136 = (char)(uVar103 >> 0x28) + cVar87;
              bVar137 = (char)(uVar103 >> 0x30) + cVar88;
              bVar138 = (char)(uVar103 >> 0x38) + cVar89;
              *(ulonglong *)(pbVar104 + uVar113) =
                   ~CONCAT17(-((byte)((bVar138 < bVar97) * bVar97 | (bVar138 >= bVar97) * bVar138)
                              == bVar138),
                             CONCAT16(-((byte)((bVar137 < bVar96) * bVar96 |
                                              (bVar137 >= bVar96) * bVar137) == bVar137),
                                      CONCAT15(-((byte)((bVar136 < bVar95) * bVar95 |
                                                       (bVar136 >= bVar95) * bVar136) == bVar136),
                                               CONCAT14(-((byte)((bVar135 < bVar94) * bVar94 |
                                                                (bVar135 >= bVar94) * bVar135) ==
                                                         bVar135),
                                                        CONCAT13(-((byte)((bVar134 < bVar93) *
                                                                          bVar93 | (bVar134 >=
                                                                                   bVar93) * bVar134
                                                                         ) == bVar134),
                                                                 CONCAT12(-((byte)((bVar133 < bVar92
                                                                                   ) * bVar92 |
                                                                                  (bVar133 >= bVar92
                                                                                  ) * bVar133) ==
                                                                           bVar133),
                                                                          CONCAT11(-((byte)((bVar132
                                                                                            < bVar91
                                                  ) * bVar91 | (bVar132 >= bVar91) * bVar132) ==
                                                  bVar132),-((byte)((bVar131 < bVar90) * bVar90 |
                                                                   (bVar131 >= bVar90) * bVar131) ==
                                                            bVar131)))))))) & uVar98 | uVar103;
              uVar113 = uVar113 + 8;
            } while (uVar107 != uVar113);
            uVar103 = *(ulonglong *)(&stack0x00001048 + lVar102);
            goto LAB_140ad05ca;
          }
          uVar107 = uVar103 & 0x7fffffffffffffe0;
          uVar103 = 0;
          do {
            pbVar106 = pbVar104 + uVar103;
            bVar131 = pbVar106[1];
            bVar132 = pbVar106[2];
            bVar133 = pbVar106[3];
            bVar134 = pbVar106[4];
            bVar135 = pbVar106[5];
            bVar136 = pbVar106[6];
            bVar137 = pbVar106[7];
            bVar138 = pbVar106[8];
            bVar7 = pbVar106[9];
            bVar8 = pbVar106[10];
            bVar9 = pbVar106[0xb];
            bVar10 = pbVar106[0xc];
            bVar11 = pbVar106[0xd];
            bVar12 = pbVar106[0xe];
            bVar13 = pbVar106[0xf];
            pbVar109 = pbVar104 + uVar103 + 0x10;
            bVar14 = *pbVar109;
            bVar15 = pbVar109[1];
            bVar16 = pbVar109[2];
            bVar17 = pbVar109[3];
            bVar18 = pbVar109[4];
            bVar19 = pbVar109[5];
            bVar20 = pbVar109[6];
            bVar21 = pbVar109[7];
            bVar22 = pbVar109[8];
            bVar23 = pbVar109[9];
            bVar24 = pbVar109[10];
            bVar25 = pbVar109[0xb];
            bVar26 = pbVar109[0xc];
            bVar27 = pbVar109[0xd];
            bVar28 = pbVar109[0xe];
            bVar29 = pbVar109[0xf];
            bVar139 = *pbVar106 + cVar100;
            bVar140 = bVar131 + cVar67;
            bVar141 = bVar132 + cVar68;
            bVar142 = bVar133 + cVar69;
            bVar143 = bVar134 + cVar70;
            bVar144 = bVar135 + cVar71;
            bVar145 = bVar136 + cVar72;
            bVar146 = bVar137 + cVar73;
            bVar147 = bVar138 + cVar74;
            bVar148 = bVar7 + cVar75;
            bVar149 = bVar8 + cVar76;
            bVar150 = bVar9 + cVar77;
            bVar151 = bVar10 + cVar78;
            bVar152 = bVar11 + cVar79;
            bVar153 = bVar12 + cVar80;
            bVar154 = bVar13 + cVar81;
            bVar155 = bVar14 + cVar100;
            bVar156 = bVar15 + cVar67;
            bVar157 = bVar16 + cVar68;
            bVar158 = bVar17 + cVar69;
            bVar159 = bVar18 + cVar70;
            bVar160 = bVar19 + cVar71;
            bVar161 = bVar20 + cVar72;
            bVar162 = bVar21 + cVar73;
            bVar163 = bVar22 + cVar74;
            bVar164 = bVar23 + cVar75;
            bVar165 = bVar24 + cVar76;
            bVar166 = bVar25 + cVar77;
            bVar167 = bVar26 + cVar78;
            bVar168 = bVar27 + cVar79;
            bVar169 = bVar28 + cVar80;
            bVar170 = bVar29 + cVar81;
            pbVar109 = pbVar104 + uVar103;
            *pbVar109 = -((byte)((bVar51 < bVar139) * bVar51 | (bVar51 >= bVar139) * bVar139) ==
                         bVar139) & bVar35 | *pbVar106;
            pbVar109[1] = -((byte)((bVar52 < bVar140) * bVar52 | (bVar52 >= bVar140) * bVar140) ==
                           bVar140) & bVar36 | bVar131;
            pbVar109[2] = -((byte)((bVar53 < bVar141) * bVar53 | (bVar53 >= bVar141) * bVar141) ==
                           bVar141) & bVar37 | bVar132;
            pbVar109[3] = -((byte)((bVar54 < bVar142) * bVar54 | (bVar54 >= bVar142) * bVar142) ==
                           bVar142) & bVar38 | bVar133;
            pbVar109[4] = -((byte)((bVar55 < bVar143) * bVar55 | (bVar55 >= bVar143) * bVar143) ==
                           bVar143) & bVar39 | bVar134;
            pbVar109[5] = -((byte)((bVar56 < bVar144) * bVar56 | (bVar56 >= bVar144) * bVar144) ==
                           bVar144) & bVar40 | bVar135;
            pbVar109[6] = -((byte)((bVar57 < bVar145) * bVar57 | (bVar57 >= bVar145) * bVar145) ==
                           bVar145) & bVar41 | bVar136;
            pbVar109[7] = -((byte)((bVar58 < bVar146) * bVar58 | (bVar58 >= bVar146) * bVar146) ==
                           bVar146) & bVar42 | bVar137;
            pbVar109[8] = -((byte)((bVar59 < bVar147) * bVar59 | (bVar59 >= bVar147) * bVar147) ==
                           bVar147) & bVar43 | bVar138;
            pbVar109[9] = -((byte)((bVar60 < bVar148) * bVar60 | (bVar60 >= bVar148) * bVar148) ==
                           bVar148) & bVar44 | bVar7;
            pbVar109[10] = -((byte)((bVar61 < bVar149) * bVar61 | (bVar61 >= bVar149) * bVar149) ==
                            bVar149) & bVar45 | bVar8;
            pbVar109[0xb] =
                 -((byte)((bVar62 < bVar150) * bVar62 | (bVar62 >= bVar150) * bVar150) == bVar150) &
                 bVar46 | bVar9;
            pbVar109[0xc] =
                 -((byte)((bVar63 < bVar151) * bVar63 | (bVar63 >= bVar151) * bVar151) == bVar151) &
                 bVar47 | bVar10;
            pbVar109[0xd] =
                 -((byte)((bVar64 < bVar152) * bVar64 | (bVar64 >= bVar152) * bVar152) == bVar152) &
                 bVar48 | bVar11;
            pbVar109[0xe] =
                 -((byte)((bVar65 < bVar153) * bVar65 | (bVar65 >= bVar153) * bVar153) == bVar153) &
                 bVar49 | bVar12;
            pbVar109[0xf] =
                 -((byte)((bVar66 < bVar154) * bVar66 | (bVar66 >= bVar154) * bVar154) == bVar154) &
                 bVar50 | bVar13;
            pbVar106 = pbVar104 + uVar103 + 0x10;
            *pbVar106 = -((byte)((bVar51 < bVar155) * bVar51 | (bVar51 >= bVar155) * bVar155) ==
                         bVar155) & bVar35 | bVar14;
            pbVar106[1] = -((byte)((bVar52 < bVar156) * bVar52 | (bVar52 >= bVar156) * bVar156) ==
                           bVar156) & bVar36 | bVar15;
            pbVar106[2] = -((byte)((bVar53 < bVar157) * bVar53 | (bVar53 >= bVar157) * bVar157) ==
                           bVar157) & bVar37 | bVar16;
            pbVar106[3] = -((byte)((bVar54 < bVar158) * bVar54 | (bVar54 >= bVar158) * bVar158) ==
                           bVar158) & bVar38 | bVar17;
            pbVar106[4] = -((byte)((bVar55 < bVar159) * bVar55 | (bVar55 >= bVar159) * bVar159) ==
                           bVar159) & bVar39 | bVar18;
            pbVar106[5] = -((byte)((bVar56 < bVar160) * bVar56 | (bVar56 >= bVar160) * bVar160) ==
                           bVar160) & bVar40 | bVar19;
            pbVar106[6] = -((byte)((bVar57 < bVar161) * bVar57 | (bVar57 >= bVar161) * bVar161) ==
                           bVar161) & bVar41 | bVar20;
            pbVar106[7] = -((byte)((bVar58 < bVar162) * bVar58 | (bVar58 >= bVar162) * bVar162) ==
                           bVar162) & bVar42 | bVar21;
            pbVar106[8] = -((byte)((bVar59 < bVar163) * bVar59 | (bVar59 >= bVar163) * bVar163) ==
                           bVar163) & bVar43 | bVar22;
            pbVar106[9] = -((byte)((bVar60 < bVar164) * bVar60 | (bVar60 >= bVar164) * bVar164) ==
                           bVar164) & bVar44 | bVar23;
            pbVar106[10] = -((byte)((bVar61 < bVar165) * bVar61 | (bVar61 >= bVar165) * bVar165) ==
                            bVar165) & bVar45 | bVar24;
            pbVar106[0xb] =
                 -((byte)((bVar62 < bVar166) * bVar62 | (bVar62 >= bVar166) * bVar166) == bVar166) &
                 bVar46 | bVar25;
            pbVar106[0xc] =
                 -((byte)((bVar63 < bVar167) * bVar63 | (bVar63 >= bVar167) * bVar167) == bVar167) &
                 bVar47 | bVar26;
            pbVar106[0xd] =
                 -((byte)((bVar64 < bVar168) * bVar64 | (bVar64 >= bVar168) * bVar168) == bVar168) &
                 bVar48 | bVar27;
            pbVar106[0xe] =
                 -((byte)((bVar65 < bVar169) * bVar65 | (bVar65 >= bVar169) * bVar169) == bVar169) &
                 bVar49 | bVar28;
            pbVar106[0xf] =
                 -((byte)((bVar66 < bVar170) * bVar66 | (bVar66 >= bVar170) * bVar170) == bVar170) &
                 bVar50 | bVar29;
            uVar103 = uVar103 + 0x20;
          } while (uVar107 != uVar103);
          uVar103 = *(ulonglong *)(&stack0x00001048 + lVar102);
          if (uVar103 != uVar107) {
            uVar113 = uVar107;
            if ((uVar103 & 0x18) != 0) goto LAB_140ad0557;
            goto LAB_140ad05b0;
          }
        }
        *(byte **)(&stack0x00000ea8 + lVar102) = pbVar104;
      }
      if (0 < (longlong)*(ulonglong *)(&stack0x000004b0 + lVar102)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad05f4;
        pub_1406abac0(*(byte **)(&stack0x00001008 + lVar102),
                      *(ulonglong *)(&stack0x000004b0 + lVar102),1);
      }
      *(ulonglong *)(&stack0x00000f40 + lVar102) = uVar116;
      if (*(longlong *)(&stack0x00001048 + lVar102) == 4) {
        if (*(int *)pbVar104 != 0x6765706a) {
          uVar103 = 4;
          goto LAB_140ad080d;
        }
LAB_140ad0925:
        if (SBORROW8(0,puVar127[0x1c])) {
          uVar103 = *(ulonglong *)(&stack0x00001048 + lVar102);
          *(ulonglong *)(&stack0x00000fd8 + lVar102) = uVar103;
          *(byte **)(&stack0x00000fd0 + lVar102) = pbVar104;
          (&stack0x00001093)[lVar102] = 1;
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0964;
          pdb_140ace080(puVar127,*(undefined8 *)(&stack0x00001060 + lVar102),uVar117);
          bVar129 = true;
        }
        else {
          uVar103 = *(ulonglong *)(&stack0x00001060 + lVar102);
          if (puVar127[0x20] == 0x8000000000000006) {
            puVar127[0x20] = 0x8000000000000001;
            puVar127[0x21] = uVar117;
            puVar127[0x22] = uVar103;
            puVar127[0x23] = uVar117;
            *(undefined1 *)(puVar127 + 0x24) = (&stack0x00001077)[lVar102];
            uVar103 = *(ulonglong *)(&stack0x00001048 + lVar102);
            bVar129 = false;
          }
          else {
            *(undefined8 *)(&stack0x000004b0 + lVar102) = 0x8000000000000001;
            *(ulonglong *)(&stack0x000004b8 + lVar102) = uVar117;
            *(ulonglong *)(&stack0x000004c0 + lVar102) = uVar103;
            *(ulonglong *)(&stack0x000004c8 + lVar102) = uVar117;
            (&stack0x000004d0)[lVar102] = (&stack0x00001077)[lVar102];
            uVar117 = puVar127[0xf];
            uVar103 = puVar127[0x12];
            if (uVar103 == uVar117) {
              *(byte **)(&stack0x00001008 + lVar102) = pbVar104;
              *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0a12;
              pdb_140929340(*(undefined8 *)(&stack0x00000f78 + lVar102));
              uVar117 = puVar127[0xf];
              uVar103 = puVar127[0x12];
              pbVar104 = *(byte **)(&stack0x00001008 + lVar102);
            }
            puVar127[0x12] = uVar103 + 1;
            uVar116 = 0;
            if (uVar117 <= uVar103 + puVar127[0x11]) {
              uVar116 = uVar117;
            }
            uVar117 = puVar127[0x10];
            lVar105 = ((uVar103 + puVar127[0x11]) - uVar116) * 0x40;
            uVar119 = *(undefined8 *)(&stack0x000004b0 + lVar102);
            uVar126 = *(undefined8 *)(&stack0x000004b8 + lVar102);
            uVar4 = *(undefined8 *)(&stack0x000004c0 + lVar102);
            uVar30 = *(undefined8 *)(&stack0x000004c8 + lVar102);
            uVar31 = *(undefined8 *)(&stack0x000004d0 + lVar102);
            uVar32 = *(undefined8 *)(&stack0x000004d8 + lVar102);
            uVar33 = *(undefined8 *)(&stack0x000004e8 + lVar102);
            puVar128 = (undefined8 *)(uVar117 + 0x30 + lVar105);
            *puVar128 = *(undefined8 *)(&stack0x000004e0 + lVar102);
            puVar128[1] = uVar33;
            puVar128 = (undefined8 *)(uVar117 + 0x20 + lVar105);
            *puVar128 = uVar31;
            puVar128[1] = uVar32;
            puVar128 = (undefined8 *)(uVar117 + 0x10 + lVar105);
            *puVar128 = uVar4;
            puVar128[1] = uVar30;
            *(undefined8 *)(uVar117 + lVar105) = uVar119;
            ((undefined8 *)(uVar117 + lVar105))[1] = uVar126;
            uVar103 = *(ulonglong *)(&stack0x00001048 + lVar102);
            bVar129 = false;
          }
        }
        goto LAB_140ad089c;
      }
      if (*(longlong *)(&stack0x00001048 + lVar102) != 3) {
        uVar103 = *(ulonglong *)(&stack0x00001048 + lVar102);
        goto LAB_140ad080d;
      }
      if ((pbVar104[2] == 0x67 && *(short *)pbVar104 == 0x6e70) ||
         (pbVar104[2] == 0x67 && *(short *)pbVar104 == 0x706a)) goto LAB_140ad0925;
      uVar103 = 3;
      if (pbVar104[2] != 0x62 || *(short *)pbVar104 != 0x6c67) goto LAB_140ad080d;
      lVar105 = *(longlong *)(&stack0x00000f50 + lVar102);
      uVar117 = *(ulonglong *)(&stack0x00000f58 + lVar102);
      lVar123 = uVar117 - 4;
      if ((lVar123 == 0) || ((3 < uVar117 && (-0x41 < *(char *)(lVar105 + lVar123))))) {
        *(undefined8 *)(&stack0x00000fd8 + lVar102) = 3;
        *(byte **)(&stack0x00000fd0 + lVar102) = pbVar104;
        (&stack0x00001093)[lVar102] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad06c3;
        pdb_140acf740(&stack0x00000f18 + lVar102,lVar105,lVar123);
        *(byte **)(&stack0x00001008 + lVar102) = pbVar104;
        *(undefined1 **)(&stack0x00000c00 + lVar102) = &stack0x00000f18 + lVar102;
        *(code **)(&stack0x00000c08 + lVar102) = pdb_140001020;
        (&stack0x00001056)[lVar102] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0704;
        pdb_140f60760(&stack0x000004b0 + lVar102,&UNK_14304da18,puVar125);
        *(undefined8 *)(&stack0x00000fe0 + lVar102) = *(undefined8 *)(&stack0x000004b0 + lVar102);
        *(undefined8 *)(&stack0x00000fe8 + lVar102) = *(undefined8 *)(&stack0x000004b8 + lVar102);
        *(undefined8 *)(&stack0x00000ff0 + lVar102) = *(undefined8 *)(&stack0x000004c0 + lVar102);
        uVar117 = puVar127[3];
        uVar103 = puVar127[4];
        (&stack0x00001055)[lVar102] = 1;
        *(undefined8 *)(&stack0xffffffffffffffe0 + lVar102) = 7;
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad074e;
        pdb_140f3e9e0(&stack0x00000ec0 + lVar102,uVar117,uVar103,&UNK_14304d9a8);
        uVar119 = *(undefined8 *)(&stack0x00000ed0 + lVar102);
        (&stack0x00001072)[lVar102] = 1;
        *(undefined8 *)(&stack0xffffffffffffffe0 + lVar102) =
             *(undefined8 *)(&stack0x00000ff0 + lVar102);
        *(undefined8 *)(&stack0x00001048 + lVar102) = *(undefined8 *)(&stack0x00000ec8 + lVar102);
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad078d;
        pdb_140f3e9e0(&stack0x00000ee0 + lVar102,*(undefined8 *)(&stack0x00000ec8 + lVar102),uVar119
                     );
        (&stack0x00001095)[lVar102] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad07a7;
        pdb_140f4f710(puVar125,*(undefined8 *)(&stack0x00001048 + lVar102),uVar119);
        lVar105 = *(longlong *)(&stack0x00000c00 + lVar102);
        uVar126 = *(undefined8 *)(&stack0x00000c08 + lVar102);
        if (lVar105 == 2) {
          *(undefined8 *)(&stack0x00000c00 + lVar102) = 2;
          *(undefined8 *)(&stack0x00000c08 + lVar102) = uVar126;
          (&stack0x00001095)[lVar102] = 1;
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad07e8;
          pdb_1404b38e0(&stack0x00000c08 + lVar102);
        }
        else {
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0aac;
          pub_142e32760(&stack0xfffffffffffffff0 + lVar102,&stack0x00000c10 + lVar102,0x260);
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0ac2;
          pub_142e32760(&stack0x00000250 + lVar102,&stack0xfffffffffffffff0 + lVar102,0x260);
          *(undefined8 *)(&stack0x00000e88 + lVar102) = uVar126;
        }
        *(undefined8 *)(&stack0x00000998 + lVar102) = *(undefined8 *)(&stack0x00000e88 + lVar102);
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0af3;
        pub_142e32760(&stack0x000009a0 + lVar102,&stack0x00000250 + lVar102,0x260);
        *(undefined8 *)(&stack0x000004b0 + lVar102) = 2;
        *(undefined8 *)(&stack0x00000720 + lVar102) = 2;
        *(longlong *)(&stack0x00000990 + lVar102) = lVar105;
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0b26;
        pdb_1419b9360(puVar125,&stack0x000004b0 + lVar102,&stack0x00000fe0 + lVar102);
        if (!SBORROW8(0,*(longlong *)(&stack0x00000c00 + lVar102))) {
          *(undefined8 *)(&stack0x00001038 + lVar102) = *(undefined8 *)(&stack0x00000c08 + lVar102);
          *(undefined8 *)(&stack0x00001040 + lVar102) = *(undefined8 *)(&stack0x00000c10 + lVar102);
          *(longlong *)(&stack0x00001030 + lVar102) = *(longlong *)(&stack0x00000c00 + lVar102);
          *(undefined1 **)(&stack0xfffffffffffffff0 + lVar102) = &stack0x00000fe0 + lVar102;
          *(code **)(&stack0xfffffffffffffff8 + lVar102) = pdb_140001020;
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0be3;
          pdb_140f60760(puVar125,&UNK_14304da1f,&stack0xfffffffffffffff0 + lVar102);
          *(undefined8 *)(&stack0x00001000 + lVar102) = *(undefined8 *)(&stack0x00000c00 + lVar102);
          *(undefined8 *)(&stack0xffffffffffffffe0 + lVar102) =
               *(undefined8 *)(&stack0x00000c10 + lVar102);
          *(undefined8 *)(&stack0x00000fc8 + lVar102) = *(undefined8 *)(&stack0x00000c08 + lVar102);
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0c22;
          pdb_140f3e9e0(&stack0x00000250 + lVar102,*(undefined8 *)(&stack0x00001048 + lVar102),
                        uVar119);
          if (*(ulonglong *)(&stack0x00001000 + lVar102) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0c41;
            pub_1406abac0(*(byte **)(&stack0x00000fc8 + lVar102),
                          *(ulonglong *)(&stack0x00001000 + lVar102),1);
          }
          *(undefined8 *)(&stack0xffffffffffffffe0 + lVar102) =
               *(undefined8 *)(&stack0x00001040 + lVar102);
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0c66;
          pdb_140f3e9e0(puVar125,*(undefined8 *)(&stack0x00001048 + lVar102),uVar119,
                        *(undefined8 *)(&stack0x00001038 + lVar102));
          uVar119 = *(undefined8 *)(&stack0x00000260 + lVar102);
          *(undefined8 *)(&stack0x00000fc8 + lVar102) = *(undefined8 *)(&stack0x00000c08 + lVar102);
          *(undefined8 *)(&stack0x00001000 + lVar102) = *(undefined8 *)(&stack0x00000258 + lVar102);
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0c99;
          lVar105 = pdb_140f4f450(*(undefined8 *)(&stack0x00000c08 + lVar102),
                                  *(undefined8 *)(&stack0x00000c10 + lVar102));
          if (*(ulonglong *)(&stack0x00000c00 + lVar102) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0cbb;
            pub_1406abac0(*(byte **)(&stack0x00000fc8 + lVar102),
                          *(ulonglong *)(&stack0x00000c00 + lVar102),1);
          }
          if (lVar105 == 0) {
            pbVar104 = *(byte **)(&stack0x00000ee8 + lVar102);
            *(undefined8 *)(&stack0x00000fc8 + lVar102) =
                 *(undefined8 *)(&stack0x00000ef0 + lVar102);
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0e7a;
            lVar105 = pdb_140f4f450(*(undefined8 *)(&stack0x00001000 + lVar102),uVar119,pbVar104);
            if (lVar105 != 0) goto LAB_140ad0e8e;
            *(undefined1 **)(&stack0x00000c00 + lVar102) = &stack0x00001030 + lVar102;
            *(code **)(&stack0x00000c08 + lVar102) = pdb_140001020;
            *(undefined1 **)(&stack0x00000c10 + lVar102) = &stack0x00000fe0 + lVar102;
            *(code **)(&stack0x00000c18 + lVar102) = pdb_140001020;
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad10d1;
            pdb_140f60760(&stack0xfffffffffffffff0 + lVar102,&UNK_14304da2b,
                          &stack0x00000c00 + lVar102);
            *(undefined8 *)(&stack0x00000c00 + lVar102) =
                 *(undefined8 *)(&stack0xfffffffffffffff0 + lVar102);
            *(undefined8 *)(&stack0x00000c08 + lVar102) =
                 *(undefined8 *)(&stack0xfffffffffffffff8 + lVar102);
            *(undefined8 *)(&stack0x00000c10 + lVar102) =
                 *(undefined8 *)(&stack0x00000000 + lVar102);
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad10f5;
            pdb_140acec60(puVar127,&stack0x00000c00 + lVar102);
            lVar105 = *(longlong *)(&stack0x00001088 + lVar102);
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1109;
            lVar123 = pdb_140f3ecf0(*(undefined8 *)(&stack0x00001060 + lVar102));
            if ((lVar123 == 0) || (lVar105 != *(longlong *)(&stack0x00001040 + lVar102))) {
LAB_140ad1179:
              uVar119 = *(undefined8 *)(&stack0x00000fc8 + lVar102);
              if (*(ulonglong *)(&stack0x00000250 + lVar102) != 0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad119e;
                pub_1406abac0(*(byte **)(&stack0x00001000 + lVar102),
                              *(ulonglong *)(&stack0x00000250 + lVar102),1);
              }
              if (*(ulonglong *)(&stack0x00001030 + lVar102) != 0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad11bc;
                pub_1406abac0(*(byte **)(&stack0x00001038 + lVar102),
                              *(ulonglong *)(&stack0x00001030 + lVar102),1);
              }
              (&stack0x00001095)[lVar102] = 1;
              *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad11cf;
              pdb_14096d010(&stack0x000004b0 + lVar102);
              goto LAB_140ad0b58;
            }
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad112a;
            iVar101 = pub_142e32750(lVar123,*(undefined8 *)(&stack0x00001038 + lVar102),lVar105);
            if (iVar101 != 0) goto LAB_140ad1179;
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1141;
            uVar119 = pdb_140f3eaf0(*(undefined8 *)(&stack0x00001060 + lVar102),
                                    *(undefined8 *)(&stack0x00001088 + lVar102));
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1154;
            cVar99 = pdb_140ad99c0(uVar119);
            if (cVar99 == '\0') goto LAB_140ad1179;
            *(undefined4 *)(puVar127 + 0x29) = 1000000000;
            uVar117 = *(ulonglong *)(&stack0x00000250 + lVar102);
          }
          else {
LAB_140ad0e8e:
            *(longlong *)(&stack0x00000e90 + lVar102) = lVar105;
            plVar110 = (longlong *)(&stack0x00000c00 + lVar102);
            *plVar110 = (longlong)(&stack0x00001030 + lVar102);
            *(code **)(&stack0x00000c08 + lVar102) = pdb_140001020;
            *(undefined1 **)(&stack0x00000c10 + lVar102) = &stack0x00000fe0 + lVar102;
            *(code **)(&stack0x00000c18 + lVar102) = pdb_140001020;
            *(undefined1 **)(&stack0x00000c20 + lVar102) = &stack0x00000e90 + lVar102;
            *(code **)(&stack0x00000c28 + lVar102) = pdb_140f59780;
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0ef5;
            pdb_140f60760(&stack0xfffffffffffffff0 + lVar102,&UNK_14304da3c,plVar110);
            *(undefined8 *)(&stack0x00000c00 + lVar102) =
                 *(undefined8 *)(&stack0xfffffffffffffff0 + lVar102);
            *(undefined8 *)(&stack0x00000c08 + lVar102) =
                 *(undefined8 *)(&stack0xfffffffffffffff8 + lVar102);
            *(undefined8 *)(&stack0x00000c10 + lVar102) =
                 *(undefined8 *)(&stack0x00000000 + lVar102);
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0f19;
            pdb_140acec60(puVar127,plVar110);
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0f26;
            pdb_1404b38e0(&stack0x00000e90 + lVar102);
            uVar117 = *(ulonglong *)(&stack0x00000250 + lVar102);
          }
          if (uVar117 != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0f45;
            pub_1406abac0(*(byte **)(&stack0x00001000 + lVar102),uVar117,1);
          }
          if (*(ulonglong *)(&stack0x00001030 + lVar102) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0f63;
            pub_1406abac0(*(byte **)(&stack0x00001038 + lVar102),
                          *(ulonglong *)(&stack0x00001030 + lVar102),1);
          }
          (&stack0x00001095)[lVar102] = 1;
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0f76;
          pdb_14096d010(&stack0x000004b0 + lVar102);
LAB_140ad0f77:
          bVar129 = true;
          if (*(ulonglong *)(&stack0x00000ee0 + lVar102) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0f9c;
            pub_1406abac0(*(byte **)(&stack0x00000ee8 + lVar102),
                          *(ulonglong *)(&stack0x00000ee0 + lVar102),1);
          }
LAB_140ad13a6:
          puVar125 = &stack0x00000c00 + lVar102;
          pbVar104 = *(byte **)(&stack0x00001008 + lVar102);
          if (*(ulonglong *)(&stack0x00000ec0 + lVar102) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad13cb;
            pub_1406abac0(*(byte **)(&stack0x00001048 + lVar102),
                          *(ulonglong *)(&stack0x00000ec0 + lVar102),1);
          }
          if (*(ulonglong *)(&stack0x00000fe0 + lVar102) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad13e9;
            pub_1406abac0(*(byte **)(&stack0x00000fe8 + lVar102),
                          *(ulonglong *)(&stack0x00000fe0 + lVar102),1);
          }
          if (*(ulonglong *)(&stack0x00000f18 + lVar102) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1407;
            pub_1406abac0(*(byte **)(&stack0x00000f20 + lVar102),
                          *(ulonglong *)(&stack0x00000f18 + lVar102),1);
          }
          uVar103 = 3;
          goto LAB_140ad089c;
        }
        (&stack0x00001095)[lVar102] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0b49;
        pdb_14096d010(&stack0x000004b0 + lVar102);
        pbVar104 = *(byte **)(&stack0x00000ee8 + lVar102);
        uVar119 = *(undefined8 *)(&stack0x00000ef0 + lVar102);
LAB_140ad0b58:
        puVar125 = &stack0x00000c00 + lVar102;
        (&stack0x00001095)[lVar102] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0b71;
        pdb_140f4f620(&stack0x000004b0 + lVar102,pbVar104,uVar119);
        if (*(int *)(&stack0x000004b0 + lVar102) == 2) {
          *(undefined8 *)(&stack0x00000c08 + lVar102) = *(undefined8 *)(&stack0x000004b8 + lVar102);
          *(undefined8 *)(&stack0x00000c00 + lVar102) = 2;
        }
        else {
          *(undefined8 *)(&stack0x00000c00 + lVar102) = *(undefined8 *)(&stack0x000004b0 + lVar102);
          *(undefined8 *)(&stack0x00000c08 + lVar102) = *(undefined8 *)(&stack0x000004b8 + lVar102);
          *(undefined8 *)(&stack0x00000c50 + lVar102) = *(undefined8 *)(&stack0x00000500 + lVar102);
          *(undefined8 *)(&stack0x00000c40 + lVar102) = *(undefined8 *)(&stack0x000004f0 + lVar102);
          *(undefined8 *)(&stack0x00000c48 + lVar102) = *(undefined8 *)(&stack0x000004f8 + lVar102);
          *(undefined8 *)(&stack0x00000c30 + lVar102) = *(undefined8 *)(&stack0x000004e0 + lVar102);
          *(undefined8 *)(&stack0x00000c38 + lVar102) = *(undefined8 *)(&stack0x000004e8 + lVar102);
          *(undefined8 *)(&stack0x00000c20 + lVar102) = *(undefined8 *)(&stack0x000004d0 + lVar102);
          *(undefined8 *)(&stack0x00000c28 + lVar102) = *(undefined8 *)(&stack0x000004d8 + lVar102);
          *(undefined8 *)(&stack0x00000c10 + lVar102) = *(undefined8 *)(&stack0x000004c0 + lVar102);
          *(undefined8 *)(&stack0x00000c18 + lVar102) = *(undefined8 *)(&stack0x000004c8 + lVar102);
          if (*(longlong *)(&stack0x00000c00 + lVar102) != 2) {
            (&stack0x00001095)[lVar102] = 1;
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0fc2;
            pdb_140f55fb0(&stack0x00000250 + lVar102,*(undefined8 *)(&stack0x00001060 + lVar102),
                          *(undefined8 *)(&stack0x00001088 + lVar102));
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0fd1;
            pdb_140f55fb0(puVar125,pbVar104,uVar119);
            *(undefined8 *)(&stack0x000004c0 + lVar102) =
                 *(undefined8 *)(&stack0x00000260 + lVar102);
            *(undefined8 *)(&stack0x000004b0 + lVar102) =
                 *(undefined8 *)(&stack0x00000250 + lVar102);
            *(undefined8 *)(&stack0x000004b8 + lVar102) =
                 *(undefined8 *)(&stack0x00000258 + lVar102);
            *(undefined8 *)(&stack0x000004d8 + lVar102) =
                 *(undefined8 *)(&stack0x00000c10 + lVar102);
            *(undefined8 *)(&stack0x000004c8 + lVar102) =
                 *(undefined8 *)(&stack0x00000c00 + lVar102);
            *(undefined8 *)(&stack0x000004d0 + lVar102) =
                 *(undefined8 *)(&stack0x00000c08 + lVar102);
            uVar117 = *(ulonglong *)(&stack0x000004b0 + lVar102);
            uVar103 = *(ulonglong *)(&stack0x000004c8 + lVar102);
            if ((!SBORROW8(0,uVar117)) && (!SBORROW8(0,uVar103))) {
              pbVar104 = *(byte **)(&stack0x000004b8 + lVar102);
              pbVar106 = *(byte **)(&stack0x000004d0 + lVar102);
              if (*(longlong *)(&stack0x000004c0 + lVar102) ==
                  *(longlong *)(&stack0x000004d8 + lVar102)) {
                *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad105a;
                iVar101 = pub_142e32750(pbVar104,pbVar106);
                bVar129 = iVar101 == 0;
              }
              else {
                bVar129 = false;
              }
              if (uVar103 != 0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1230;
                pub_1406abac0(pbVar106,uVar103,1);
              }
              if (uVar117 != 0) {
                *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1246;
                pub_1406abac0(pbVar104,uVar117,1);
              }
              if (!bVar129) goto LAB_140ad12da;
              *(undefined1 **)(&stack0x00000c00 + lVar102) = &stack0x00000f18 + lVar102;
              *(code **)(&stack0x00000c08 + lVar102) = pdb_140001020;
              (&stack0x00001095)[lVar102] = 1;
              *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad128f;
              pdb_140f60760(&stack0x000004b0 + lVar102,&UNK_14304da59,&stack0x00000c00 + lVar102);
              *(undefined8 *)(&stack0x00000c00 + lVar102) =
                   *(undefined8 *)(&stack0x000004b0 + lVar102);
              *(undefined8 *)(&stack0x00000c08 + lVar102) =
                   *(undefined8 *)(&stack0x000004b8 + lVar102);
              *(undefined8 *)(&stack0x00000c10 + lVar102) =
                   *(undefined8 *)(&stack0x000004c0 + lVar102);
              (&stack0x00001095)[lVar102] = 1;
              *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad12c0;
              pdb_140acec60(puVar127,&stack0x00000c00 + lVar102);
              goto LAB_140ad0f77;
            }
            *(ulonglong *)(&stack0x00001000 + lVar102) = uVar103;
            if (SBORROW8(0,uVar117)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1087;
              pdb_1404b38e0(&stack0x000004b8 + lVar102);
            }
            else if (uVar117 != 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad11e9;
              pub_1406abac0(*(byte **)(&stack0x000004b8 + lVar102),uVar117,1);
            }
            uVar117 = *(ulonglong *)(&stack0x00001000 + lVar102);
            if (SBORROW8(0,uVar117)) {
              (&stack0x00001095)[lVar102] = 1;
              *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad120f;
              pdb_1404b38e0(&stack0x000004d0 + lVar102);
            }
            else if (uVar117 != 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad12da;
              pub_1406abac0(*(byte **)(&stack0x000004d0 + lVar102),uVar117,1);
            }
LAB_140ad12da:
            uVar117 = *(ulonglong *)(&stack0x00001088 + lVar102);
            if (puVar127[0x20] == 0x8000000000000006) {
              puVar127[0x20] = uVar117;
              puVar127[0x21] = *(ulonglong *)(&stack0x00001060 + lVar102);
              puVar127[0x22] = uVar117;
              *(undefined1 *)(puVar127 + 0x23) = (&stack0x00001077)[lVar102];
              uVar119 = *(undefined8 *)(&stack0x00000ee0 + lVar102);
              uVar126 = *(undefined8 *)(&stack0x00000ee8 + lVar102);
              uVar4 = *(undefined8 *)(&stack0x00000ef8 + lVar102);
              puVar128 = *(undefined8 **)(&stack0x00000e80 + lVar102);
              puVar128[2] = *(undefined8 *)(&stack0x00000ef0 + lVar102);
              puVar128[3] = uVar4;
              *puVar128 = uVar119;
              puVar128[1] = uVar126;
            }
            else {
              *(ulonglong *)(&stack0x000004b0 + lVar102) = uVar117;
              *(undefined8 *)(&stack0x000004b8 + lVar102) =
                   *(undefined8 *)(&stack0x00001060 + lVar102);
              *(ulonglong *)(&stack0x000004c0 + lVar102) = uVar117;
              (&stack0x000004c8)[lVar102] = (&stack0x00001077)[lVar102];
              *(undefined8 *)(&stack0x000004e0 + lVar102) =
                   *(undefined8 *)(&stack0x00000ef0 + lVar102);
              *(undefined8 *)(&stack0x000004e8 + lVar102) =
                   *(undefined8 *)(&stack0x00000ef8 + lVar102);
              *(undefined8 *)(&stack0x000004d0 + lVar102) =
                   *(undefined8 *)(&stack0x00000ee0 + lVar102);
              *(undefined8 *)(&stack0x000004d8 + lVar102) =
                   *(undefined8 *)(&stack0x00000ee8 + lVar102);
              (&stack0x00001095)[lVar102] = 0;
              *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad13a3;
              pdb_140929c50(*(undefined8 *)(&stack0x00000f78 + lVar102),&stack0x000004b0 + lVar102);
            }
            bVar129 = false;
            goto LAB_140ad13a6;
          }
        }
        (&stack0x00001095)[lVar102] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0d4d;
        pdb_1404b38e0(&stack0x00000c08 + lVar102);
        (&stack0x00001095)[lVar102] = 1;
        *(undefined8 *)(&stack0xffffffffffffffe0 + lVar102) = uVar119;
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0d73;
        pdb_140acee90(puVar127,*(undefined8 *)(&stack0x00001060 + lVar102),
                      *(undefined8 *)(&stack0x00001088 + lVar102));
        if (*(ulonglong *)(&stack0x00000ee0 + lVar102) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0d8e;
          pub_1406abac0(pbVar104,*(ulonglong *)(&stack0x00000ee0 + lVar102),1);
        }
        pbVar104 = *(byte **)(&stack0x00001008 + lVar102);
        if (*(ulonglong *)(&stack0x00000ec0 + lVar102) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0db3;
          pub_1406abac0(*(byte **)(&stack0x00001048 + lVar102),
                        *(ulonglong *)(&stack0x00000ec0 + lVar102),1);
        }
        if (*(ulonglong *)(&stack0x00000fe0 + lVar102) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0dd1;
          pub_1406abac0(*(byte **)(&stack0x00000fe8 + lVar102),
                        *(ulonglong *)(&stack0x00000fe0 + lVar102),1);
        }
        uVar113 = *(ulonglong *)(&stack0x00001088 + lVar102);
        if (*(ulonglong *)(&stack0x00000f18 + lVar102) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0df6;
          pub_1406abac0(*(byte **)(&stack0x00000f20 + lVar102),
                        *(ulonglong *)(&stack0x00000f18 + lVar102),1);
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0e09;
        pub_1406abac0(pbVar104,3,1);
        if (*(ulonglong *)(&stack0x00000f48 + lVar102) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0e27;
          pub_1406abac0(*(byte **)(&stack0x00000f50 + lVar102),
                        *(ulonglong *)(&stack0x00000f48 + lVar102),1);
        }
        uVar116 = *(ulonglong *)(&stack0x00000f40 + lVar102);
        uVar103 = *(ulonglong *)(&stack0x00000fc0 + lVar102);
        uVar117 = *(ulonglong *)(&stack0x00000f60 + lVar102);
        goto joined_r0x000140ad08ff;
      }
      *(undefined8 *)(&stack0x00000fd8 + lVar102) = 3;
      *(byte **)(&stack0x00000fd0 + lVar102) = pbVar104;
      (&stack0x00001093)[lVar102] = 1;
      *(undefined **)(&stack0xffffffffffffffe0 + lVar102) = &UNK_14304da00;
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad34ea;
      pdb_142dc8070(lVar105,uVar117,0);
      goto LAB_140ad354b;
    }
    *(ulonglong *)(&stack0x00000f40 + lVar102) = uVar116;
    pbVar104 = (byte *)0x1;
    uVar103 = 0;
LAB_140ad080d:
    *(undefined1 **)(&stack0x00000c00 + lVar102) = &stack0x00000f48 + lVar102;
    *(code **)(&stack0x00000c08 + lVar102) = pdb_140001020;
    *(ulonglong *)(&stack0x00000fd8 + lVar102) = uVar103;
    *(byte **)(&stack0x00000fd0 + lVar102) = pbVar104;
    (&stack0x00001093)[lVar102] = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0854;
    pdb_140f60760(&stack0x000004b0 + lVar102,&UNK_14304da81,puVar125);
    *(undefined8 *)(&stack0x00000c00 + lVar102) = *(undefined8 *)(&stack0x000004b0 + lVar102);
    *(undefined8 *)(&stack0x00000c08 + lVar102) = *(undefined8 *)(&stack0x000004b8 + lVar102);
    *(undefined8 *)(&stack0x00000c10 + lVar102) = *(undefined8 *)(&stack0x000004c0 + lVar102);
    *(ulonglong *)(&stack0x00000fd8 + lVar102) = uVar103;
    *(byte **)(&stack0x00000fd0 + lVar102) = pbVar104;
    (&stack0x00001093)[lVar102] = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0893;
    pdb_140acec60(puVar127,puVar125);
    bVar34 = true;
    bVar129 = true;
    if (uVar103 != 0) {
LAB_140ad089c:
      bVar34 = bVar129;
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad08ad;
      pub_1406abac0(pbVar104,uVar103,1);
    }
    if (*(ulonglong *)(&stack0x00000f48 + lVar102) != 0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad08cb;
      pub_1406abac0(*(byte **)(&stack0x00000f50 + lVar102),
                    *(ulonglong *)(&stack0x00000f48 + lVar102),1);
    }
    uVar103 = *(ulonglong *)(&stack0x00000fc0 + lVar102);
    uVar117 = *(ulonglong *)(&stack0x00000f60 + lVar102);
    uVar113 = *(ulonglong *)(&stack0x00001088 + lVar102);
    uVar116 = *(ulonglong *)(&stack0x00000f40 + lVar102);
    if (bVar34) {
joined_r0x000140ad08ff:
      if (uVar113 != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad091a;
        pub_1406abac0(*(byte **)(&stack0x00001060 + lVar102),uVar113,1);
      }
    }
    goto LAB_140ad0202;
  }
  (&stack0x00001076)[lVar102] = 1;
  *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0318;
  pdb_140f5fd10(&stack0x000004b0 + lVar102,lVar105,uVar113);
  uVar117 = *(ulonglong *)(&stack0x000004b0 + lVar102);
  pbVar104 = *(byte **)(&stack0x000004b8 + lVar102);
  uVar103 = *(ulonglong *)(&stack0x000004c0 + lVar102);
  uVar113 = uVar103;
  pbVar106 = pbVar104;
  if (!SBORROW8(0,uVar117)) goto LAB_140ad03ac;
  if (-1 < (longlong)uVar103) {
    if (uVar103 == 0) goto LAB_140ad03a1;
    *(ulonglong **)(&stack0x00001048 + lVar102) = puVar112;
    *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0356;
    pdb_14007ee60(-uVar117);
    uVar119 = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0368;
    pbVar106 = pub_1406abab0(uVar103,1);
    if (pbVar106 == (byte *)0x0) goto LAB_140ad1430;
    *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad0382;
    pub_142e32760(pbVar106,pbVar104,uVar103);
    uVar119 = *(undefined8 *)(&stack0x00001060 + lVar102);
    puVar112 = *(ulonglong **)(&stack0x00001048 + lVar102);
    goto LAB_140ad03b3;
  }
  uVar119 = 0;
LAB_140ad1430:
  (&stack0x00001076)[lVar102] = 1;
  *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1442;
  pdb_142dc7e2a(uVar119,uVar103);
  goto LAB_140ad354b;
  while( true ) {
    puVar112 = (ulonglong *)puVar127[3];
    *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad156c;
    pdb_14007ee60();
    uVar119 = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad157e;
    pbVar104 = pub_1406abab0(uVar117,1);
    uVar130 = pbVar104 == (byte *)0x0;
    if (!(bool)uVar130) break;
LAB_140ad154c:
    *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1557;
    pdb_142dc7e2a(uVar119,uVar117);
    puVar127 = puVar112;
LAB_140ad1557:
    *(ulonglong *)(&stack0x00001088 + lVar102) = uVar117;
    if ((bool)uVar130) {
      *(undefined8 *)(&stack0x00001078 + lVar102) = 1;
      goto LAB_140ad15a9;
    }
  }
  *(byte **)(&stack0x00001078 + lVar102) = pbVar104;
  *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1598;
  pub_142e32760(pbVar104,puVar112,uVar117);
LAB_140ad15a9:
  uVar117 = puVar127[5];
  plVar110 = *(longlong **)(&stack0x00001170 + lVar102);
  *(undefined4 *)plVar110[2] = *(undefined4 *)((longlong)plVar110 + 0x1c);
  lVar105 = *plVar110;
  lVar123 = *(longlong *)(lVar105 + 0x30);
  uVar119 = *(undefined8 *)(lVar105 + 0x40);
  if (lVar123 == *(longlong *)(lVar105 + 0x20)) {
    *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad15db;
    pdb_142d7ede0(lVar105 + 0x20);
  }
  lVar118 = *(longlong *)(lVar105 + 0x28);
  uVar113 = *(ulonglong *)(&stack0x00001088 + lVar102);
  *(ulonglong *)(lVar118 + lVar123 * 0x28) = uVar113;
  *(undefined8 *)(lVar118 + 8 + lVar123 * 0x28) = *(undefined8 *)(&stack0x00001078 + lVar102);
  *(ulonglong *)(lVar118 + 0x10 + lVar123 * 0x28) = uVar113;
  *(char *)(lVar118 + 0x18 + lVar123 * 0x28) = (char)uVar117;
  *(undefined8 *)(lVar118 + 0x20 + lVar123 * 0x28) = uVar119;
  *(longlong *)(lVar105 + 0x30) = lVar123 + 1;
  *(longlong *)(lVar105 + 0x40) = *(longlong *)(lVar105 + 0x40) + 1;
  lVar105 = *(longlong *)(&stack0x00001010 + lVar102);
  *(undefined1 *)(lVar105 + 0x1b1) = 0;
LAB_140ad1625:
  uVar115 = (undefined4)uVar113;
  cVar100 = *(char *)((longlong)puVar127 + 0x1b2);
  *(ulonglong **)(&stack0x00001058 + lVar102) = puVar127;
  if (cVar100 == '\0') {
    iVar101 = *(int *)(lVar105 + 0x148);
    if (iVar101 != 1000000000) {
      *(undefined8 *)(&stack0x000004b0 + lVar102) = *(undefined8 *)(lVar105 + 0x140);
      *(int *)(&stack0x000004b8 + lVar102) = iVar101;
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1786;
      lVar123 = pdb_140f3cb70(&stack0x000004b0 + lVar102);
      if (lVar123 == 0) {
        return;
      }
    }
    *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1794;
    uVar119 = pdb_140f3c9d0();
    *(undefined8 *)(lVar105 + 0x140) = uVar119;
    *(undefined4 *)(lVar105 + 0x148) = uVar115;
    uVar119 = *(undefined8 *)(lVar105 + 0x18);
    uVar126 = *(undefined8 *)(lVar105 + 0x20);
    *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad17b4;
    cVar100 = pdb_140f3ea80(uVar119,uVar126);
    if (cVar100 != '\0') {
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad17ce;
      pdb_141b49c20(&stack0x000004b0 + lVar102,uVar119,uVar126);
      uVar117 = *(ulonglong *)(lVar105 + 0x98);
      puVar128 = *(undefined8 **)(&stack0x00001058 + lVar102);
      if ((!SBORROW8(0,uVar117)) && (uVar117 != 0)) {
        pbVar104 = (byte *)puVar128[0x14];
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1802;
        pub_1406abac0(pbVar104,uVar117,1);
      }
      *(undefined8 *)(lVar105 + 0xa8) = *(undefined8 *)(&stack0x000004c0 + lVar102);
      uVar119 = *(undefined8 *)(&stack0x000004b8 + lVar102);
      *(undefined8 **)(&stack0x00000f68 + lVar102) = (undefined8 *)(lVar105 + 0x98);
      *(undefined8 *)(lVar105 + 0x98) = *(undefined8 *)(&stack0x000004b0 + lVar102);
      *(undefined8 *)(lVar105 + 0xa0) = uVar119;
      uVar119 = *(undefined8 *)(lVar105 + 0x18);
      uVar126 = *(undefined8 *)(lVar105 + 0x20);
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1836;
      pdb_140d9aa70(&stack0x000004b0 + lVar102,uVar119,uVar126);
      *(undefined1 *)(puVar128 + 0x36) = (&stack0x000004d0)[lVar102];
      uVar117 = *(ulonglong *)(&stack0x000004b0 + lVar102);
      if ((!SBORROW8(0,uVar117)) && (uVar117 != 0)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1867;
        pub_1406abac0(*(byte **)(&stack0x000004b8 + lVar102),uVar117,1);
      }
      *(longlong **)(&stack0x00000f70 + lVar102) = param_3;
      uVar119 = *(undefined8 *)(lVar105 + 0x18);
      uVar126 = *(undefined8 *)(lVar105 + 0x20);
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1882;
      pdb_140d99980(&stack0x000004b0 + lVar102,uVar119,uVar126);
      uVar117 = *(ulonglong *)(lVar105 + 0xe0);
      if ((!SBORROW8(0,uVar117)) && (uVar117 != 0)) {
        pbVar104 = (byte *)puVar128[0x1d];
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad18ac;
        pub_1406abac0(pbVar104,uVar117,1);
      }
      uVar119 = *(undefined8 *)(&stack0x000004b0 + lVar102);
      uVar126 = *(undefined8 *)(&stack0x000004b8 + lVar102);
      uVar4 = *(undefined8 *)(&stack0x000004c8 + lVar102);
      *(undefined8 *)(lVar105 + 0xf0) = *(undefined8 *)(&stack0x000004c0 + lVar102);
      *(undefined8 *)(lVar105 + 0xf8) = uVar4;
      *(undefined8 *)(lVar105 + 0xe0) = uVar119;
      *(undefined8 *)(lVar105 + 0xe8) = uVar126;
      uVar119 = *(undefined8 *)(lVar105 + 0x18);
      uVar126 = *(undefined8 *)(lVar105 + 0x20);
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad18d2;
      uVar119 = pdb_140c8a840(uVar119);
      *puVar128 = uVar119;
      puVar128[1] = uVar126;
      uVar119 = *(undefined8 *)(lVar105 + 0x18);
      uVar126 = *(undefined8 *)(lVar105 + 0x20);
      *(undefined8 *)(&stack0xffffffffffffffe0 + lVar102) = 7;
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad18fd;
      pdb_140f3e9e0(&stack0x00000ec0 + lVar102,uVar119,uVar126,&UNK_14304d9a8);
      uVar119 = *(undefined8 *)(&stack0x00000ec8 + lVar102);
      uVar126 = *(undefined8 *)(&stack0x00000ed0 + lVar102);
      *(undefined8 *)(&stack0xffffffffffffffe0 + lVar102) = 0xc;
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad192a;
      pdb_140f3e9e0(&stack0xfffffffffffffff0 + lVar102,uVar119,uVar126,&UNK_14304dc20);
      *(undefined8 *)(&stack0x00001018 + lVar102) = 0;
      *(undefined8 *)(&stack0x00001020 + lVar102) = 8;
      *(undefined8 *)(&stack0x00001028 + lVar102) = 0;
      (&stack0x00001074)[lVar102] = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1965;
      pdb_140f4f710(&stack0x000004b0 + lVar102,uVar119,uVar126);
      lVar105 = *(longlong *)(&stack0x000004b0 + lVar102);
      uVar119 = *(undefined8 *)(&stack0x000004b8 + lVar102);
      if (lVar105 == 2) {
        *(undefined8 *)(&stack0x000004b0 + lVar102) = 2;
        *(undefined8 *)(&stack0x000004b8 + lVar102) = uVar119;
        (&stack0x00001074)[lVar102] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad19a3;
        pdb_1404b38e0(&stack0x000004b8 + lVar102);
      }
      else {
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1bce;
        pub_142e32760(&stack0x00000250 + lVar102,&stack0x000004c0 + lVar102,0x260);
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1be3;
        pub_142e32760(&stack0x00000c00 + lVar102,&stack0x00000250 + lVar102,0x260);
      }
      *(undefined8 *)(&stack0x00000998 + lVar102) = uVar119;
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1c03;
      pub_142e32760(&stack0x000009a0 + lVar102,&stack0x00000c00 + lVar102,0x260);
      *(undefined8 *)(&stack0x000004b0 + lVar102) = 2;
      *(undefined8 *)(&stack0x00000720 + lVar102) = 2;
      *(longlong *)(&stack0x00000990 + lVar102) = lVar105;
      (&stack0x00001074)[lVar102] = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1c3a;
      pdb_1415f7670(&stack0x00000f00 + lVar102,&stack0x000004b0 + lVar102);
      *(undefined8 *)(&stack0x00000fa0 + lVar102) = 0;
      *(undefined8 *)(&stack0x00000fa8 + lVar102) = 8;
      *(undefined8 *)(&stack0x00000fb0 + lVar102) = 0;
      lVar105 = *(longlong *)(&stack0x00000f08 + lVar102);
      lVar123 = *(longlong *)(&stack0x00000f10 + lVar102);
      *(longlong *)(&stack0x00001060 + lVar102) = *(longlong *)(&stack0x00001010 + lVar102) + 0x180;
      puVar125 = &stack0x000004b0 + lVar102;
      lVar118 = lVar105;
      while (lVar114 = lVar118, lVar114 != lVar105 + lVar123 * 0x18) {
        lVar118 = lVar114 + 0x18;
        *(longlong *)(&stack0x00000e78 + lVar102) = lVar114;
        lVar108 = *(ulonglong *)(lVar114 + 0x10) - 4;
        if (3 < *(ulonglong *)(lVar114 + 0x10)) {
          uVar121 = *(uint *)(*(longlong *)(lVar114 + 8) + lVar108);
          uVar121 = uVar121 >> 0x18 | (uVar121 & 0xff0000) >> 8 | (uVar121 & 0xff00) << 8 |
                    uVar121 << 0x18;
          if (uVar121 < 0x2e676c62 == 0x2e676c62 < uVar121) {
            if (lVar108 == 0) {
LAB_140ad1d54:
              (&stack0x00001094)[lVar102] = 1;
              *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1d63;
              pdb_140f60be0(puVar125);
              (&stack0x00001094)[lVar102] = 1;
              *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1d7a;
              cVar100 = pdb_1403b0b40(*(undefined8 *)(&stack0x00001060 + lVar102),puVar125);
              if (cVar100 == '\0') {
                *(undefined1 **)(&stack0x00000c00 + lVar102) = &stack0x00000e78 + lVar102;
                *(code **)(&stack0x00000c08 + lVar102) = pdb_140493ec0;
                (&stack0x00001094)[lVar102] = 1;
                *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1db8;
                pdb_140f60760(puVar125,&UNK_14304dce5,&stack0x00000c00 + lVar102);
                *(undefined8 *)(&stack0x00001088 + lVar102) =
                     *(undefined8 *)(&stack0x000004b0 + lVar102);
                *(undefined8 *)(&stack0x00001078 + lVar102) =
                     *(undefined8 *)(&stack0x000004b8 + lVar102);
                uVar119 = *(undefined8 *)(&stack0x000004c0 + lVar102);
                lVar114 = *(longlong *)(&stack0x00001028 + lVar102);
                if (lVar114 == *(longlong *)(&stack0x00001018 + lVar102)) {
                  *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1df8;
                  pdb_142d895b0(&stack0x00001018 + lVar102);
                }
                lVar108 = *(longlong *)(&stack0x00001020 + lVar102);
                *(undefined8 *)(lVar108 + lVar114 * 0x18) =
                     *(undefined8 *)(&stack0x00001088 + lVar102);
                *(undefined8 *)(lVar108 + 8 + lVar114 * 0x18) =
                     *(undefined8 *)(&stack0x00001078 + lVar102);
                *(undefined8 *)(lVar108 + 0x10 + lVar114 * 0x18) = uVar119;
                *(longlong *)(&stack0x00001028 + lVar102) = lVar114 + 1;
                puVar128 = *(undefined8 **)(&stack0x00001058 + lVar102);
              }
            }
            else {
              lVar122 = 0;
              do {
                cVar100 = *(char *)(*(longlong *)(lVar114 + 8) + lVar122);
                if (((9 < (byte)(cVar100 - 0x30U) && 0x19 < (byte)(cVar100 + 0x9fU)) &&
                    (cVar100 != '_')) && (cVar100 != '-')) goto LAB_140ad1d54;
                lVar122 = lVar122 + 1;
              } while (lVar108 != lVar122);
              (&stack0x00001094)[lVar102] = 1;
              *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1e4c;
              pdb_140f60be0(puVar125);
              lVar114 = *(longlong *)(&stack0x00000fb0 + lVar102);
              if (lVar114 == *(longlong *)(&stack0x00000fa0 + lVar102)) {
                *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1e6d;
                pdb_142d895b0(&stack0x00000fa0 + lVar102);
              }
              lVar108 = *(longlong *)(&stack0x00000fa8 + lVar102);
              *(undefined8 *)(lVar108 + 0x10 + lVar114 * 0x18) =
                   *(undefined8 *)(&stack0x000004c0 + lVar102);
              uVar119 = *(undefined8 *)(&stack0x000004b8 + lVar102);
              puVar2 = (undefined8 *)(lVar108 + lVar114 * 0x18);
              *puVar2 = *(undefined8 *)(&stack0x000004b0 + lVar102);
              puVar2[1] = uVar119;
              *(longlong *)(&stack0x00000fb0 + lVar102) = lVar114 + 1;
            }
          }
        }
      }
      uVar117 = *(ulonglong *)(&stack0x00000fb0 + lVar102);
      if (1 < uVar117) {
        if (uVar117 < 0x15) {
          (&stack0x00001094)[lVar102] = 1;
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad341c;
          pdb_1400e1880(*(undefined8 *)(&stack0x00000fa8 + lVar102),uVar117,1,
                        &stack0x00001057 + lVar102);
          puVar128 = *(undefined8 **)(&stack0x00001058 + lVar102);
        }
        else {
          (&stack0x00001094)[lVar102] = 1;
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad3500;
          pdb_140ed7e70(*(undefined8 *)(&stack0x00000fa8 + lVar102),uVar117,
                        &stack0x00001057 + lVar102);
          puVar128 = *(undefined8 **)(&stack0x00001058 + lVar102);
        }
      }
      uVar119 = *(undefined8 *)(&stack0x00000000 + lVar102);
      (&stack0x00001094)[lVar102] = 1;
      *(undefined8 *)(&stack0x00000fc0 + lVar102) =
           *(undefined8 *)(&stack0xfffffffffffffff8 + lVar102);
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1ea2;
      cVar100 = pdb_140f3ec10(*(undefined8 *)(&stack0xfffffffffffffff8 + lVar102),uVar119);
      (&stack0x00000f60)[lVar102] = cVar100;
      if (cVar100 == '\0') {
        *(undefined8 *)(&stack0x00000f80 + lVar102) = 0;
        *(undefined8 *)(&stack0x00000f88 + lVar102) = 8;
        *(undefined8 *)(&stack0x00000f90 + lVar102) = 0;
      }
      else {
        uVar126 = *(undefined8 *)(*(longlong *)(&stack0x00001010 + lVar102) + 0x18);
        uVar4 = *(undefined8 *)(*(longlong *)(&stack0x00001010 + lVar102) + 0x20);
        (&stack0x00001094)[lVar102] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1ed3;
        pdb_140acf2d0(&stack0x00000c00 + lVar102,uVar126,uVar4);
        if ((&stack0x00000c00)[lVar102] != '\0') {
          *(undefined8 *)(&stack0x00001040 + lVar102) = *(undefined8 *)(&stack0x00000c18 + lVar102);
          *(undefined8 *)(&stack0x00001030 + lVar102) = *(undefined8 *)(&stack0x00000c08 + lVar102);
          *(undefined8 *)(&stack0x00001038 + lVar102) = *(undefined8 *)(&stack0x00000c10 + lVar102);
          *(undefined1 **)(&stack0x00000250 + lVar102) = &stack0x00001030 + lVar102;
          *(code **)(&stack0x00000258 + lVar102) = pdb_140001020;
          (&stack0x00001070)[lVar102] = 1;
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1f3c;
          pdb_140f60760(&stack0x000004b0 + lVar102,&UNK_14304dcc6,&stack0x00000250 + lVar102);
          lVar105 = *(longlong *)(&stack0x00001010 + lVar102);
          *(undefined8 *)(&stack0x00000250 + lVar102) = *(undefined8 *)(&stack0x000004b0 + lVar102);
          *(undefined8 *)(&stack0x00000258 + lVar102) = *(undefined8 *)(&stack0x000004b8 + lVar102);
          *(undefined8 *)(&stack0x00000260 + lVar102) = *(undefined8 *)(&stack0x000004c0 + lVar102);
          if ((SBORROW8(0,*(longlong *)(lVar105 + 0xb0))) ||
             (puVar128[0x18] != *(longlong *)(&stack0x00000260 + lVar102))) {
LAB_140ad1f98:
            (&stack0x0000106f)[lVar102] = 1;
            (&stack0x0000106e)[lVar102] = 1;
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1fb9;
            pdb_140f60be0(&stack0x000004b0 + lVar102,&stack0x00000250 + lVar102);
            lVar123 = *(longlong *)(&stack0x00001028 + lVar102);
            if (lVar123 == *(longlong *)(&stack0x00001018 + lVar102)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1fd6;
              pdb_142d895b0(&stack0x00001018 + lVar102);
            }
            lVar118 = *(longlong *)(&stack0x00001020 + lVar102);
            *(undefined8 *)(lVar118 + 0x10 + lVar123 * 0x18) =
                 *(undefined8 *)(&stack0x000004c0 + lVar102);
            uVar119 = *(undefined8 *)(&stack0x000004b8 + lVar102);
            puVar2 = (undefined8 *)(lVar118 + lVar123 * 0x18);
            *puVar2 = *(undefined8 *)(&stack0x000004b0 + lVar102);
            puVar2[1] = uVar119;
            *(longlong *)(&stack0x00001028 + lVar102) = lVar123 + 1;
            *(undefined8 *)(&stack0x000004c0 + lVar102) =
                 *(undefined8 *)(&stack0x00000260 + lVar102);
            *(undefined8 *)(&stack0x000004b0 + lVar102) =
                 *(undefined8 *)(&stack0x00000250 + lVar102);
            *(undefined8 *)(&stack0x000004b8 + lVar102) =
                 *(undefined8 *)(&stack0x00000258 + lVar102);
            uVar117 = *(ulonglong *)(lVar105 + 0xb0);
            if ((!SBORROW8(0,uVar117)) && (uVar117 != 0)) {
              pbVar104 = (byte *)puVar128[0x17];
              *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2045;
              pub_1406abac0(pbVar104,uVar117,1);
            }
            *(undefined8 *)(lVar105 + 0xc0) = *(undefined8 *)(&stack0x000004c0 + lVar102);
            uVar119 = *(undefined8 *)(&stack0x000004b8 + lVar102);
            *(ulonglong *)(lVar105 + 0xb0) = *(ulonglong *)(&stack0x000004b0 + lVar102);
            *(undefined8 *)(lVar105 + 0xb8) = uVar119;
            *(undefined4 *)(&stack0x00001088 + lVar102) = 0;
          }
          else {
            uVar119 = puVar128[0x17];
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1f90;
            uVar119 = pub_142e32750(uVar119,*(undefined8 *)(&stack0x00000258 + lVar102));
            if ((int)uVar119 != 0) goto LAB_140ad1f98;
            *(int *)(&stack0x00001088 + lVar102) = (int)CONCAT71((int7)((ulonglong)uVar119 >> 8),1);
          }
          lVar123 = *(longlong *)(&stack0x00001018 + lVar102);
          pbVar106 = *(byte **)(&stack0x00001020 + lVar102);
          lVar105 = *(longlong *)(&stack0x00001028 + lVar102) * 0x18;
          pbVar104 = pbVar106 + lVar105;
          *(byte **)(&stack0x000004b0 + lVar102) = pbVar106;
          *(byte **)(&stack0x000004b8 + lVar102) = pbVar106;
          *(longlong *)(&stack0x000004c0 + lVar102) = lVar123;
          *(byte **)(&stack0x000004c8 + lVar102) = pbVar104;
          pbVar109 = pbVar106;
          if (*(longlong *)(&stack0x00001028 + lVar102) != 0) {
            pbVar6 = pbVar106;
            do {
              pbVar109 = pbVar6 + 0x18;
              *(byte **)(&stack0x000004b8 + lVar102) = pbVar109;
              if (SBORROW8(0,*(longlong *)pbVar6)) break;
              *(longlong *)(&stack0x00000e90 + lVar102) = *(longlong *)pbVar6;
              uVar119 = *(undefined8 *)(pbVar6 + 0x10);
              *(undefined8 *)(&stack0x00000e98 + lVar102) = *(undefined8 *)(pbVar6 + 8);
              *(undefined8 *)(&stack0x00000ea0 + lVar102) = uVar119;
              *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad20f9;
              pdb_140acec60(*(undefined8 *)(&stack0x00001058 + lVar102),&stack0x00000e90 + lVar102);
              lVar105 = lVar105 + -0x18;
              pbVar6 = pbVar109;
            } while (lVar105 != 0);
          }
          lVar105 = *(longlong *)(&stack0x00001058 + lVar102);
          if (pbVar104 != pbVar109) {
            uVar117 = (ulonglong)((longlong)pbVar104 - (longlong)pbVar109) / 0x18;
            pbVar109 = pbVar109 + 8;
            do {
              uVar103 = *(ulonglong *)(pbVar109 + -8);
              if (uVar103 != 0) {
                pbVar104 = *(byte **)pbVar109;
                *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2158;
                pub_1406abac0(pbVar104,uVar103,1);
              }
              pbVar109 = pbVar109 + 0x18;
              uVar117 = uVar117 - 1;
            } while (uVar117 != 0);
          }
          if (lVar123 != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2807;
            pub_1406abac0(pbVar106,lVar123 * 0x18,8);
          }
          plVar110 = *(longlong **)(&stack0x00000f70 + lVar102);
          if (((&stack0x00001088)[lVar102] != '\0') &&
             (*(ulonglong *)(&stack0x00000250 + lVar102) != 0)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2835;
            pub_1406abac0(*(byte **)(&stack0x00000258 + lVar102),
                          *(ulonglong *)(&stack0x00000250 + lVar102),1);
          }
          if (*(ulonglong *)(&stack0x00001030 + lVar102) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2853;
            pub_1406abac0(*(byte **)(&stack0x00001038 + lVar102),
                          *(ulonglong *)(&stack0x00001030 + lVar102),1);
          }
          pbVar104 = *(byte **)(&stack0x00000fa8 + lVar102);
          lVar123 = *(longlong *)(&stack0x00000fb0 + lVar102);
          if (lVar123 != 0) {
            pbVar106 = pbVar104 + 8;
            do {
              uVar117 = *(ulonglong *)(pbVar106 + -8);
              if (uVar117 != 0) {
                pbVar109 = *(byte **)pbVar106;
                *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad288c;
                pub_1406abac0(pbVar109,uVar117,1);
              }
              pbVar106 = pbVar106 + 0x18;
              lVar123 = lVar123 + -1;
            } while (lVar123 != 0);
          }
          if (*(longlong *)(&stack0x00000fa0 + lVar102) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad28b0;
            pub_1406abac0(pbVar104,*(longlong *)(&stack0x00000fa0 + lVar102) * 0x18,8);
          }
          pbVar104 = *(byte **)(&stack0x00000f08 + lVar102);
          lVar123 = *(longlong *)(&stack0x00000f10 + lVar102);
          if (lVar123 != 0) {
            pbVar106 = pbVar104 + 8;
            do {
              uVar117 = *(ulonglong *)(pbVar106 + -8);
              if (uVar117 != 0) {
                pbVar109 = *(byte **)pbVar106;
                *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad28f1;
                pub_1406abac0(pbVar109,uVar117,1);
              }
              pbVar106 = pbVar106 + 0x18;
              lVar123 = lVar123 + -1;
            } while (lVar123 != 0);
          }
          goto LAB_140ad31c1;
        }
        *(undefined8 *)(&stack0x00000f90 + lVar102) = *(undefined8 *)(&stack0x00000c18 + lVar102);
        *(undefined8 *)(&stack0x00000f80 + lVar102) = *(undefined8 *)(&stack0x00000c08 + lVar102);
        *(undefined8 *)(&stack0x00000f88 + lVar102) = *(undefined8 *)(&stack0x00000c10 + lVar102);
      }
      lVar105 = *(longlong *)(&stack0x00001010 + lVar102);
      uVar117 = *(ulonglong *)(lVar105 + 0xb0);
      if ((!SBORROW8(0,uVar117)) && (uVar117 != 0)) {
        pbVar104 = (byte *)puVar128[0x17];
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad21e5;
        pub_1406abac0(pbVar104,uVar117,1);
      }
      *(undefined8 *)(&stack0x00000f78 + lVar102) = 0x8000000000000000;
      *(undefined8 *)(lVar105 + 0xb0) = 0x8000000000000000;
      (&stack0x00001073)[lVar102] = 0;
      lVar105 = *(longlong *)(&stack0x00000f88 + lVar102);
      lVar123 = *(longlong *)(&stack0x00000f90 + lVar102);
      (&stack0x00001087)[lVar102] = 1;
      (&stack0x00001086)[lVar102] = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2225;
      plVar110 = (longlong *)pdb_140f3bda0();
      if ((char)plVar110[2] == '\x01') {
        lVar118 = *plVar110;
        uVar117 = plVar110[1];
      }
      else {
        (&stack0x00001087)[lVar102] = 1;
        (&stack0x00001086)[lVar102] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad343f;
        lVar118 = pdb_140f4fd10();
        *plVar110 = lVar118;
        plVar110[1] = uVar117;
        *(undefined1 *)(plVar110 + 2) = 1;
      }
      *plVar110 = lVar118 + 1;
      *(undefined8 *)(&stack0x000004c0 + lVar102) = _DAT_14304d860;
      *(undefined8 *)(&stack0x000004c8 + lVar102) = _UNK_14304d868;
      *(undefined8 *)(&stack0x000004b0 + lVar102) = _DAT_14304d850;
      *(undefined8 *)(&stack0x000004b8 + lVar102) = _UNK_14304d858;
      *(longlong *)(&stack0x000004d0 + lVar102) = lVar118;
      *(ulonglong *)(&stack0x000004d8 + lVar102) = uVar117;
      if (lVar123 != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad3472;
        pdb_142db2540(&stack0x000004b0 + lVar102,lVar123,&stack0x000004d0 + lVar102,1);
        lVar118 = 0;
        puVar128 = *(undefined8 **)(&stack0x00001058 + lVar102);
        do {
          uVar126 = *(undefined8 *)(lVar105 + 8 + lVar118 * 0x20);
          uVar4 = *(undefined8 *)(lVar105 + 0x10 + lVar118 * 0x20);
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad349c;
          pdb_1417b7de0(&stack0x000004b0 + lVar102,uVar126,uVar4);
          lVar118 = lVar118 + 1;
        } while (lVar118 != lVar123);
      }
      *(undefined8 *)(&stack0x00000c20 + lVar102) = *(undefined8 *)(&stack0x000004d0 + lVar102);
      *(undefined8 *)(&stack0x00000c28 + lVar102) = *(undefined8 *)(&stack0x000004d8 + lVar102);
      *(undefined8 *)(&stack0x00000c10 + lVar102) = *(undefined8 *)(&stack0x000004c0 + lVar102);
      *(undefined8 *)(&stack0x00000c18 + lVar102) = *(undefined8 *)(&stack0x000004c8 + lVar102);
      *(undefined8 *)(&stack0x00000c00 + lVar102) = *(undefined8 *)(&stack0x000004b0 + lVar102);
      *(undefined8 *)(&stack0x00000c08 + lVar102) = *(undefined8 *)(&stack0x000004b8 + lVar102);
      *(longlong *)(&stack0x000004b0 + lVar102) = *(longlong *)(&stack0x00000fa8 + lVar102);
      *(longlong *)(&stack0x000004b8 + lVar102) =
           *(longlong *)(&stack0x00000fa8 + lVar102) +
           *(longlong *)(&stack0x00000fb0 + lVar102) * 0x18;
      *(undefined1 **)(&stack0x000004c0 + lVar102) = &stack0x00000c00 + lVar102;
      (&stack0x00001097)[lVar102] = 1;
      (&stack0x00001096)[lVar102] = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2302;
      pdb_1415f1050(&stack0x00000f48 + lVar102,&stack0x000004b0 + lVar102);
      *(undefined8 *)(&stack0x00000fb8 + lVar102) = uVar119;
      plVar111 = *(longlong **)(&stack0x00000f50 + lVar102);
      plVar120 = plVar111 + *(longlong *)(&stack0x00000f58 + lVar102) * 3;
      *(longlong **)(&stack0x000004b0 + lVar102) = plVar111;
      *(undefined8 *)(&stack0x00000f30 + lVar102) = *(undefined8 *)(&stack0x00000f48 + lVar102);
      *(undefined8 *)(&stack0x000004c0 + lVar102) = *(undefined8 *)(&stack0x00000f48 + lVar102);
      *(longlong **)(&stack0x000004c8 + lVar102) = plVar120;
      uVar117 = *(longlong *)(&stack0x00000f58 + lVar102) * 0x18;
      plVar110 = plVar111 + 4;
      *(longlong **)(&stack0x00000f38 + lVar102) = plVar111;
      while (uVar117 = uVar117 - 0x18, plVar111 != plVar120) {
        plVar1 = plVar111 + 3;
        *(longlong **)(&stack0x000004b8 + lVar102) = plVar1;
        lVar105 = *plVar111;
        lVar123 = plVar111[2];
        *(longlong *)(&stack0x00000eb0 + lVar102) = plVar111[1];
        *(longlong *)(&stack0x00000eb8 + lVar102) = lVar123;
        if (SBORROW8(0,lVar105)) {
          lVar105 = *(longlong *)(&stack0x00001010 + lVar102);
          uVar119 = *(undefined8 *)(&stack0x00000fb8 + lVar102);
          if (plVar120 != plVar1) {
            uVar117 = uVar117 / 0x18;
            do {
              uVar103 = plVar110[-1];
              if (uVar103 != 0) {
                pbVar104 = (byte *)*plVar110;
                *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad254e;
                pub_1406abac0(pbVar104,uVar103,1);
              }
              plVar110 = plVar110 + 3;
              uVar117 = uVar117 - 1;
            } while (uVar117 != 0);
          }
          goto LAB_140ad2550;
        }
        *(longlong *)(&stack0x00001030 + lVar102) = lVar105;
        *(undefined8 *)(&stack0x00001038 + lVar102) = *(undefined8 *)(&stack0x00000eb0 + lVar102);
        *(undefined8 *)(&stack0x00001040 + lVar102) = *(undefined8 *)(&stack0x00000eb8 + lVar102);
        *(undefined1 **)(&stack0x00000fe0 + lVar102) = &stack0x00001030 + lVar102;
        *(code **)(&stack0x00000fe8 + lVar102) = pdb_140001020;
        (&stack0x00001071)[lVar102] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2437;
        pdb_140f60760(&stack0x00000250 + lVar102,&UNK_14304dcac,&stack0x00000fe0 + lVar102);
        *(undefined8 *)(&stack0x00001088 + lVar102) = *(undefined8 *)(&stack0x00000250 + lVar102);
        *(undefined8 *)(&stack0x00001078 + lVar102) = *(undefined8 *)(&stack0x00000258 + lVar102);
        uVar119 = *(undefined8 *)(&stack0x00000260 + lVar102);
        lVar105 = *(longlong *)(&stack0x00001028 + lVar102);
        if (lVar105 == *(longlong *)(&stack0x00001018 + lVar102)) {
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2477;
          pdb_142d895b0(&stack0x00001018 + lVar102);
        }
        lVar123 = *(longlong *)(&stack0x00001020 + lVar102);
        *(undefined8 *)(lVar123 + lVar105 * 0x18) = *(undefined8 *)(&stack0x00001088 + lVar102);
        *(undefined8 *)(lVar123 + 8 + lVar105 * 0x18) = *(undefined8 *)(&stack0x00001078 + lVar102);
        *(undefined8 *)(lVar123 + 0x10 + lVar105 * 0x18) = uVar119;
        *(longlong *)(&stack0x00001028 + lVar102) = lVar105 + 1;
        *(undefined8 *)(&stack0x00001088 + lVar102) = *(undefined8 *)(&stack0x00001030 + lVar102);
        *(undefined8 *)(&stack0x00001078 + lVar102) = *(undefined8 *)(&stack0x00001038 + lVar102);
        uVar119 = *(undefined8 *)(&stack0x00001040 + lVar102);
        lVar105 = *(longlong *)(&stack0x00000f90 + lVar102);
        if (lVar105 == *(longlong *)(&stack0x00000f80 + lVar102)) {
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad24ec;
          pdb_142d7e6e0(&stack0x00000f80 + lVar102);
        }
        lVar123 = *(longlong *)(&stack0x00000f88 + lVar102);
        lVar118 = lVar105 * 0x20;
        *(undefined8 *)(lVar123 + lVar118) = *(undefined8 *)(&stack0x00001088 + lVar102);
        *(undefined8 *)(lVar123 + 8 + lVar118) = *(undefined8 *)(&stack0x00001078 + lVar102);
        *(undefined8 *)(lVar123 + 0x10 + lVar118) = uVar119;
        *(undefined2 *)(lVar123 + 0x18 + lVar118) = 0x103;
        *(longlong *)(&stack0x00000f90 + lVar102) = lVar105 + 1;
        (&stack0x00001073)[lVar102] = 1;
        plVar110 = plVar110 + 3;
        puVar128 = *(undefined8 **)(&stack0x00001058 + lVar102);
        plVar111 = plVar1;
      }
      lVar105 = *(longlong *)(&stack0x00001010 + lVar102);
      uVar119 = *(undefined8 *)(&stack0x00000fb8 + lVar102);
LAB_140ad2550:
      if (*(longlong *)(&stack0x00000f30 + lVar102) != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2576;
        pub_1406abac0(*(byte **)(&stack0x00000f38 + lVar102),
                      *(longlong *)(&stack0x00000f30 + lVar102) * 0x18,8);
      }
      *(undefined1 **)(&stack0x000004b0 + lVar102) = &stack0x00000fa0 + lVar102;
      *(undefined1 **)(&stack0x000004b8 + lVar102) = &stack0x00000f00 + lVar102;
      *(undefined8 *)(&stack0x000004c0 + lVar102) = *(undefined8 *)(&stack0x00001060 + lVar102);
      *(undefined1 **)(&stack0x000004c8 + lVar102) = &stack0x00001018 + lVar102;
      *(undefined1 **)(&stack0x000004d0 + lVar102) = &stack0x00001073 + lVar102;
      (&stack0x00001097)[lVar102] = 1;
      (&stack0x00001096)[lVar102] = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad25dd;
      pdb_1415e09a0(&stack0x00000f80 + lVar102,&stack0x000004b0 + lVar102);
      if (((&stack0x00000f60)[lVar102] & (&stack0x00001073)[lVar102]) == 0) {
        if ((&stack0x00001073)[lVar102] != 0) goto LAB_140ad2707;
      }
      else if (*(longlong *)(&stack0x00000f90 + lVar102) == 0) {
        (&stack0x00001097)[lVar102] = 1;
        (&stack0x00001096)[lVar102] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad261f;
        lVar105 = pdb_140f4eda0(*(undefined8 *)(&stack0x00000fc0 + lVar102),uVar119);
        if (lVar105 == 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad29e8;
          pdb_14007ee60();
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad29f7;
          pbVar104 = pub_1406abab0(0x2b,1);
          uVar119 = _UNK_14304dc83;
          if (pbVar104 == (byte *)0x0) {
            (&stack0x00001097)[lVar102] = 1;
            (&stack0x00001096)[lVar102] = 1;
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad354a;
            pdb_142dc7e2a(1,0x2b);
            goto LAB_140ad354b;
          }
          *(ulonglong *)(pbVar104 + 0x1b) = CONCAT35(_UNK_14304dc80,_DAT_14304dc7b);
          *(undefined8 *)(pbVar104 + 0x23) = uVar119;
          uVar119 = CONCAT53(_DAT_14304dc7b,_UNK_14304dc78);
          *(undefined8 *)(pbVar104 + 0x10) = _DAT_14304dc70;
          *(undefined8 *)(pbVar104 + 0x18) = uVar119;
          uVar119 = _UNK_14304dc68;
          *(byte **)(&stack0x00001088 + lVar102) = pbVar104;
          *(undefined8 *)pbVar104 = _DAT_14304dc60;
          *(undefined8 *)(pbVar104 + 8) = uVar119;
          lVar105 = *(longlong *)(&stack0x00001028 + lVar102);
          if (lVar105 == *(longlong *)(&stack0x00001018 + lVar102)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2a45;
            pdb_142d895b0(&stack0x00001018 + lVar102);
          }
          lVar123 = *(longlong *)(&stack0x00001020 + lVar102);
          *(undefined8 *)(lVar123 + lVar105 * 0x18) = 0x2b;
          *(undefined8 *)(lVar123 + 8 + lVar105 * 0x18) =
               *(undefined8 *)(&stack0x00001088 + lVar102);
          *(undefined8 *)(lVar123 + 0x10 + lVar105 * 0x18) = 0x2b;
          *(longlong *)(&stack0x00001028 + lVar102) = lVar105 + 1;
          puVar128 = *(undefined8 **)(&stack0x00001058 + lVar102);
          lVar105 = *(longlong *)(&stack0x00001010 + lVar102);
          uVar119 = *(undefined8 *)(&stack0x00000fb8 + lVar102);
        }
        else {
          *(longlong *)(&stack0x00001030 + lVar102) = lVar105;
          *(undefined1 **)(&stack0x00000250 + lVar102) = &stack0x00001030 + lVar102;
          *(code **)(&stack0x00000258 + lVar102) = pdb_140f59780;
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2666;
          pdb_140f60760(&stack0x000004b0 + lVar102,&UNK_14304dc8b,&stack0x00000250 + lVar102);
          *(undefined8 *)(&stack0x00001088 + lVar102) = *(undefined8 *)(&stack0x000004b0 + lVar102);
          *(undefined8 *)(&stack0x00001078 + lVar102) = *(undefined8 *)(&stack0x000004b8 + lVar102);
          uVar126 = *(undefined8 *)(&stack0x000004c0 + lVar102);
          lVar105 = *(longlong *)(&stack0x00001028 + lVar102);
          if (lVar105 == *(longlong *)(&stack0x00001018 + lVar102)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad26a6;
            pdb_142d895b0(&stack0x00001018 + lVar102);
          }
          lVar123 = *(longlong *)(&stack0x00001020 + lVar102);
          *(undefined8 *)(lVar123 + lVar105 * 0x18) = *(undefined8 *)(&stack0x00001088 + lVar102);
          *(undefined8 *)(lVar123 + 8 + lVar105 * 0x18) =
               *(undefined8 *)(&stack0x00001078 + lVar102);
          *(undefined8 *)(lVar123 + 0x10 + lVar105 * 0x18) = uVar126;
          *(longlong *)(&stack0x00001028 + lVar102) = lVar105 + 1;
          (&stack0x00001097)[lVar102] = 1;
          (&stack0x00001096)[lVar102] = 1;
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad26f2;
          pdb_1404b38e0(&stack0x00001030 + lVar102);
          lVar105 = *(longlong *)(&stack0x00001010 + lVar102);
        }
      }
      else {
LAB_140ad2707:
        if (((&stack0x00000f60)[lVar102] != 0) || (*(longlong *)(&stack0x00000f90 + lVar102) != 0))
        {
          uVar126 = *(undefined8 *)(lVar105 + 0x18);
          uVar4 = *(undefined8 *)(lVar105 + 0x20);
          (&stack0x00001097)[lVar102] = 1;
          (&stack0x00001096)[lVar102] = 1;
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2742;
          pdb_140acf980(&stack0x00001030 + lVar102,uVar126,uVar4,&stack0x00000f80 + lVar102);
          if (SBORROW8(0,*(longlong *)(&stack0x00001030 + lVar102))) {
            if ((&stack0x00000f60)[lVar102] == '\0') {
              *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2766;
              pdb_14007ee60();
              *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2775;
              pbVar104 = pub_1406abab0(0x14,1);
              uVar126 = _UNK_14304dc34;
              if (pbVar104 == (byte *)0x0) {
                (&stack0x00001097)[lVar102] = 1;
                (&stack0x00001096)[lVar102] = 1;
                *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad352a;
                pdb_142dc7e2a(1,0x14);
                goto LAB_140ad354b;
              }
              *(undefined8 *)pbVar104 = _DAT_14304dc2c;
              *(undefined8 *)(pbVar104 + 8) = uVar126;
              *(byte **)(&stack0x00001088 + lVar102) = pbVar104;
              pbVar104[0x10] = 0x6a;
              pbVar104[0x11] = 0x73;
              pbVar104[0x12] = 0x6f;
              pbVar104[0x13] = 0x6e;
              lVar123 = *(longlong *)(&stack0x00001028 + lVar102);
              if (lVar123 == *(longlong *)(&stack0x00001018 + lVar102)) {
                *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad27b4;
                pdb_142d895b0(&stack0x00001018 + lVar102);
              }
              lVar118 = *(longlong *)(&stack0x00001020 + lVar102);
              *(undefined8 *)(lVar118 + lVar123 * 0x18) = 0x14;
              *(undefined8 *)(lVar118 + 8 + lVar123 * 0x18) =
                   *(undefined8 *)(&stack0x00001088 + lVar102);
              *(undefined8 *)(lVar118 + 0x10 + lVar123 * 0x18) = 0x14;
              *(longlong *)(&stack0x00001028 + lVar102) = lVar123 + 1;
            }
          }
          else {
            *(undefined8 *)(&stack0x00000260 + lVar102) =
                 *(undefined8 *)(&stack0x00001040 + lVar102);
            *(undefined8 *)(&stack0x00000250 + lVar102) =
                 *(undefined8 *)(&stack0x00001030 + lVar102);
            *(undefined8 *)(&stack0x00000258 + lVar102) =
                 *(undefined8 *)(&stack0x00001038 + lVar102);
            *(undefined1 **)(&stack0x00000fe0 + lVar102) = &stack0x00000250 + lVar102;
            *(code **)(&stack0x00000fe8 + lVar102) = pdb_140001020;
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2947;
            pdb_140f60760(&stack0x000004b0 + lVar102,&UNK_14304dc40,&stack0x00000fe0 + lVar102);
            *(undefined8 *)(&stack0x00001088 + lVar102) =
                 *(undefined8 *)(&stack0x000004b0 + lVar102);
            *(undefined8 *)(&stack0x00001078 + lVar102) =
                 *(undefined8 *)(&stack0x000004b8 + lVar102);
            uVar126 = *(undefined8 *)(&stack0x000004c0 + lVar102);
            lVar105 = *(longlong *)(&stack0x00001028 + lVar102);
            if (lVar105 == *(longlong *)(&stack0x00001018 + lVar102)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2987;
              pdb_142d895b0(&stack0x00001018 + lVar102);
            }
            lVar123 = *(longlong *)(&stack0x00001020 + lVar102);
            *(undefined8 *)(lVar123 + lVar105 * 0x18) = *(undefined8 *)(&stack0x00001088 + lVar102);
            *(undefined8 *)(lVar123 + 8 + lVar105 * 0x18) =
                 *(undefined8 *)(&stack0x00001078 + lVar102);
            *(undefined8 *)(lVar123 + 0x10 + lVar105 * 0x18) = uVar126;
            *(longlong *)(&stack0x00001028 + lVar102) = lVar105 + 1;
            if (*(ulonglong *)(&stack0x00000250 + lVar102) != 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad29d7;
              pub_1406abac0(*(byte **)(&stack0x00000258 + lVar102),
                            *(ulonglong *)(&stack0x00000250 + lVar102),1);
            }
            lVar105 = *(longlong *)(&stack0x00001010 + lVar102);
          }
        }
      }
      *(undefined8 *)(&stack0x000004c0 + lVar102) = *(undefined8 *)(&stack0x00000f90 + lVar102);
      *(undefined8 *)(&stack0x000004b0 + lVar102) = *(undefined8 *)(&stack0x00000f80 + lVar102);
      *(undefined8 *)(&stack0x000004b8 + lVar102) = *(undefined8 *)(&stack0x00000f88 + lVar102);
      pbVar104 = (byte *)puVar128[10];
      lVar123 = puVar128[0xb];
      if (lVar123 != 0) {
        pbVar106 = pbVar104 + 8;
        do {
          uVar117 = *(ulonglong *)(pbVar106 + -8);
          if (uVar117 != 0) {
            pbVar109 = *(byte **)pbVar106;
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2ae0;
            pub_1406abac0(pbVar109,uVar117,1);
          }
          pbVar106 = pbVar106 + 0x20;
          lVar123 = lVar123 + -1;
        } while (lVar123 != 0);
      }
      lVar123 = *(longlong *)(lVar105 + 0x48);
      if (lVar123 != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2afc;
        pub_1406abac0(pbVar104,lVar123 << 5,8);
      }
      *(undefined8 *)(lVar105 + 0x58) = *(undefined8 *)(&stack0x000004c0 + lVar102);
      uVar126 = *(undefined8 *)(&stack0x000004b8 + lVar102);
      *(longlong *)(lVar105 + 0x48) = *(longlong *)(&stack0x000004b0 + lVar102);
      *(undefined8 *)(lVar105 + 0x50) = uVar126;
      (&stack0x00001097)[lVar102] = 0;
      (&stack0x00001096)[lVar102] = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2b30;
      cVar100 = pdb_140f3ec10(*(undefined8 *)(&stack0x00000fc0 + lVar102),uVar119);
      lVar105 = *(longlong *)(&stack0x00001010 + lVar102);
      plVar110 = *(longlong **)(&stack0x00000f68 + lVar102);
      if (cVar100 == '\x01' && !SBORROW8(0,*plVar110)) {
        puVar2 = puVar128 + 6;
        uVar117 = puVar128[4];
        if ((longlong)uVar117 < 0) {
          uVar126 = 0;
LAB_140ad2b61:
          (&stack0x00001097)[lVar102] = 0;
          (&stack0x00001096)[lVar102] = 1;
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2b7a;
          pdb_142dc7e2a(uVar126,uVar117);
LAB_140ad354b:
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        *(ulonglong *)(&stack0x00001088 + lVar102) = uVar117;
        if (uVar117 == 0) {
          *(undefined8 *)(&stack0x00001078 + lVar102) = 1;
        }
        else {
          uVar4 = puVar128[3];
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2b92;
          pdb_14007ee60();
          uVar126 = 1;
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2ba5;
          pbVar104 = pub_1406abab0(uVar117,1);
          if (pbVar104 == (byte *)0x0) goto LAB_140ad2b61;
          *(byte **)(&stack0x00001078 + lVar102) = pbVar104;
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2bbf;
          pub_142e32760(pbVar104,uVar4,uVar117);
          puVar128 = *(undefined8 **)(&stack0x00001058 + lVar102);
          plVar110 = *(longlong **)(&stack0x00000f68 + lVar102);
        }
        uVar130 = *(undefined1 *)(puVar128 + 5);
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2beb;
        pdb_140f60be0(&stack0x00001030 + lVar102,plVar110);
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2bfb;
        pdb_140f60be0(&stack0x00000250 + lVar102,puVar2);
        *(undefined8 *)(&stack0x000004b0 + lVar102) = 0;
        *(undefined8 *)(&stack0x000004c0 + lVar102) = *(undefined8 *)(&stack0x00001088 + lVar102);
        *(undefined8 *)(&stack0x000004c8 + lVar102) = *(undefined8 *)(&stack0x00001078 + lVar102);
        *(undefined8 *)(&stack0x000004d0 + lVar102) = *(undefined8 *)(&stack0x00001088 + lVar102);
        (&stack0x000004d8)[lVar102] = uVar130;
        *(undefined8 *)(&stack0x000004e0 + lVar102) = *(undefined8 *)(&stack0x00001030 + lVar102);
        *(undefined8 *)(&stack0x000004e8 + lVar102) = *(undefined8 *)(&stack0x00001038 + lVar102);
        *(undefined8 *)(&stack0x000004f0 + lVar102) = *(undefined8 *)(&stack0x00001040 + lVar102);
        *(undefined8 *)(&stack0x000004f8 + lVar102) = *(undefined8 *)(&stack0x00000250 + lVar102);
        *(undefined8 *)(&stack0x00000500 + lVar102) = *(undefined8 *)(&stack0x00000258 + lVar102);
        *(undefined8 *)(&stack0x00000508 + lVar102) = *(undefined8 *)(&stack0x00000260 + lVar102);
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2c7e;
        pdb_140c8ab10(&stack0x00000fe0 + lVar102,&stack0x000004b0 + lVar102);
        if (SBORROW8(0,*(longlong *)(&stack0x00000fe0 + lVar102))) {
          *(undefined8 *)(&stack0x00000eb0 + lVar102) = *(undefined8 *)(&stack0x00000fe8 + lVar102);
          *(undefined1 **)(&stack0x00001030 + lVar102) = &stack0x00000eb0 + lVar102;
          *(code **)(&stack0x00001038 + lVar102) = pdb_140f36c30;
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2cd2;
          pdb_140f60760(&stack0x00000250 + lVar102,&UNK_14304dd77,&stack0x00001030 + lVar102);
          *(undefined8 *)(&stack0x00001078 + lVar102) = *(undefined8 *)(&stack0x00000250 + lVar102);
          *(undefined8 *)(&stack0x00001088 + lVar102) = *(undefined8 *)(&stack0x00000258 + lVar102);
          uVar117 = *(ulonglong *)(&stack0x00000260 + lVar102);
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2d15;
          pdb_141b1e240(&stack0x00000250 + lVar102,*(undefined8 *)(&stack0x00000fc0 + lVar102),
                        uVar119,3);
          *(undefined1 **)(&stack0x00000fe0 + lVar102) = &stack0x00000250 + lVar102;
          *(code **)(&stack0x00000fe8 + lVar102) = pdb_140f58250;
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2d48;
          pdb_140f60760(&stack0x00001030 + lVar102,&UNK_14304dd7d,&stack0x00000fe0 + lVar102);
          if (*(ulonglong *)(&stack0x00000250 + lVar102) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2d67;
            pub_1406abac0(*(byte **)(&stack0x00000258 + lVar102),
                          *(ulonglong *)(&stack0x00000250 + lVar102),1);
          }
          uVar103 = *(ulonglong *)(&stack0x00001030 + lVar102);
          pbVar104 = *(byte **)(&stack0x00001038 + lVar102);
          uVar116 = *(ulonglong *)(&stack0x00001040 + lVar102);
          if (uVar117 < uVar116) {
            lVar123 = 0;
          }
          else {
            lVar105 = *(longlong *)(&stack0x00001088 + lVar102);
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2db9;
            iVar101 = pub_142e32750(pbVar104,lVar105,uVar116);
            lVar123 = 0;
            if (iVar101 == 0) {
              lVar123 = uVar116 + lVar105;
            }
          }
          uVar116 = uVar117 - uVar116;
          if (lVar123 == 0) {
            uVar116 = uVar117;
            lVar123 = *(longlong *)(&stack0x00001088 + lVar102);
          }
          *(longlong *)(&stack0x00000fe0 + lVar102) = lVar123;
          *(ulonglong *)(&stack0x00000fe8 + lVar102) = uVar116;
          if (uVar103 != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2df7;
            pub_1406abac0(pbVar104,uVar103,1);
          }
          *(undefined1 **)(&stack0x00001030 + lVar102) = &stack0x00000fe0 + lVar102;
          *(code **)(&stack0x00001038 + lVar102) = pdb_1402ed400;
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2e26;
          pdb_140f60760(&stack0x00000250 + lVar102,&UNK_14304dd82,&stack0x00001030 + lVar102);
          puVar128 = *(undefined8 **)(&stack0x00001058 + lVar102);
          uVar119 = *(undefined8 *)(&stack0x00000250 + lVar102);
          *(undefined8 *)(&stack0x00001030 + lVar102) = *(undefined8 *)(&stack0x00000258 + lVar102);
          *(undefined8 *)(&stack0x00001038 + lVar102) = *(undefined8 *)(&stack0x00000260 + lVar102);
          if (*(ulonglong *)(&stack0x00001078 + lVar102) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2e63;
            pub_1406abac0(*(byte **)(&stack0x00001088 + lVar102),
                          *(ulonglong *)(&stack0x00001078 + lVar102),1);
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2e70;
          pdb_140f36c40(&stack0x00000eb0 + lVar102);
          lVar105 = *(longlong *)(&stack0x00001010 + lVar102);
          *(undefined8 *)(&stack0x00000250 + lVar102) = *(undefined8 *)(&stack0x00001030 + lVar102);
          *(undefined8 *)(&stack0x00000258 + lVar102) = *(undefined8 *)(&stack0x00001038 + lVar102);
        }
        else {
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2d94;
          pdb_140967580(&stack0x00000fe0 + lVar102);
          uVar119 = 0x8000000000000000;
        }
        if (*(ulonglong *)(&stack0x000004c0 + lVar102) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2ea6;
          pub_1406abac0(*(byte **)(&stack0x000004c8 + lVar102),
                        *(ulonglong *)(&stack0x000004c0 + lVar102),1);
        }
        if (*(ulonglong *)(&stack0x000004e0 + lVar102) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2ec4;
          pub_1406abac0(*(byte **)(&stack0x000004e8 + lVar102),
                        *(ulonglong *)(&stack0x000004e0 + lVar102),1);
        }
        *(undefined8 *)(&stack0x00000f78 + lVar102) = uVar119;
        if (*(ulonglong *)(&stack0x000004f8 + lVar102) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2ee9;
          pub_1406abac0(*(byte **)(&stack0x00000500 + lVar102),
                        *(ulonglong *)(&stack0x000004f8 + lVar102),1);
        }
      }
      uVar117 = *(ulonglong *)(lVar105 + 200);
      plVar110 = (longlong *)(lVar105 + 200);
      if ((!SBORROW8(0,uVar117)) && (uVar117 != 0)) {
        pbVar104 = (byte *)puVar128[0x1a];
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2f13;
        pub_1406abac0(pbVar104,uVar117,1);
      }
      lVar105 = *(longlong *)(&stack0x00000f78 + lVar102);
      *plVar110 = lVar105;
      uVar119 = *(undefined8 *)(&stack0x00000258 + lVar102);
      puVar128[0x1a] = *(undefined8 *)(&stack0x00000250 + lVar102);
      puVar128[0x1b] = uVar119;
      if (SBORROW8(0,lVar105)) {
LAB_140ad2f77:
        lVar105 = *(longlong *)(&stack0x00001028 + lVar102);
      }
      else {
        (&stack0x00001097)[lVar102] = 0;
        (&stack0x00001096)[lVar102] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2f50;
        pdb_140f60be0(&stack0x000004b0 + lVar102,plVar110);
        (&stack0x00001097)[lVar102] = 0;
        (&stack0x00001096)[lVar102] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2f72;
        cVar100 = pdb_1403b0b40(*(undefined8 *)(&stack0x00001060 + lVar102),
                                &stack0x000004b0 + lVar102);
        if (cVar100 != '\0') goto LAB_140ad2f77;
        (&stack0x00001097)[lVar102] = 0;
        (&stack0x00001096)[lVar102] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2f9d;
        pdb_140f60be0(&stack0x000004b0 + lVar102,plVar110);
        lVar105 = *(longlong *)(&stack0x00001028 + lVar102);
        if (lVar105 == *(longlong *)(&stack0x00001018 + lVar102)) {
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2fba;
          pdb_142d895b0(&stack0x00001018 + lVar102);
        }
        lVar123 = *(longlong *)(&stack0x00001020 + lVar102);
        *(undefined8 *)(lVar123 + 0x10 + lVar105 * 0x18) =
             *(undefined8 *)(&stack0x000004c0 + lVar102);
        uVar119 = *(undefined8 *)(&stack0x000004b8 + lVar102);
        puVar128 = (undefined8 *)(lVar123 + lVar105 * 0x18);
        *puVar128 = *(undefined8 *)(&stack0x000004b0 + lVar102);
        puVar128[1] = uVar119;
        lVar105 = lVar105 + 1;
        *(longlong *)(&stack0x00001028 + lVar102) = lVar105;
      }
      lVar123 = *(longlong *)(&stack0x00001018 + lVar102);
      pbVar106 = *(byte **)(&stack0x00001020 + lVar102);
      lVar118 = lVar105 * 0x18;
      pbVar104 = pbVar106 + lVar118;
      *(byte **)(&stack0x000004b0 + lVar102) = pbVar106;
      *(byte **)(&stack0x000004b8 + lVar102) = pbVar106;
      *(longlong *)(&stack0x000004c0 + lVar102) = lVar123;
      *(byte **)(&stack0x000004c8 + lVar102) = pbVar104;
      pbVar109 = pbVar106;
      if (lVar105 != 0) {
        pbVar6 = pbVar106;
        do {
          pbVar109 = pbVar6 + 0x18;
          *(byte **)(&stack0x000004b8 + lVar102) = pbVar109;
          if (SBORROW8(0,*(longlong *)pbVar6)) break;
          *(longlong *)(&stack0x00000f18 + lVar102) = *(longlong *)pbVar6;
          uVar119 = *(undefined8 *)(pbVar6 + 0x10);
          *(undefined8 *)(&stack0x00000f20 + lVar102) = *(undefined8 *)(pbVar6 + 8);
          *(undefined8 *)(&stack0x00000f28 + lVar102) = uVar119;
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad3075;
          pdb_140acec60(*(undefined8 *)(&stack0x00001058 + lVar102),&stack0x00000f18 + lVar102);
          lVar118 = lVar118 + -0x18;
          pbVar6 = pbVar109;
        } while (lVar118 != 0);
      }
      lVar105 = *(longlong *)(&stack0x00001058 + lVar102);
      if (pbVar104 != pbVar109) {
        uVar117 = (ulonglong)((longlong)pbVar104 - (longlong)pbVar109) / 0x18;
        pbVar109 = pbVar109 + 8;
        do {
          uVar103 = *(ulonglong *)(pbVar109 + -8);
          if (uVar103 != 0) {
            pbVar104 = *(byte **)pbVar109;
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad30cc;
            pub_1406abac0(pbVar104,uVar103,1);
          }
          pbVar109 = pbVar109 + 0x18;
          uVar117 = uVar117 - 1;
        } while (uVar117 != 0);
      }
      if (lVar123 != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad30e9;
        pub_1406abac0(pbVar106,lVar123 * 0x18,8);
      }
      lVar123 = *(longlong *)(&stack0x00000c08 + lVar102);
      plVar110 = *(longlong **)(&stack0x00000f70 + lVar102);
      if (lVar123 != 0) {
        lVar118 = lVar123 * 0x10 + 0x10;
        uVar117 = lVar123 + lVar118 + 0x11;
        if (uVar117 != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad3129;
          pub_1406abac0((byte *)(*(longlong *)(&stack0x00000c00 + lVar102) - lVar118),uVar117,0x10);
        }
      }
      pbVar104 = *(byte **)(&stack0x00000fa8 + lVar102);
      lVar123 = *(longlong *)(&stack0x00000fb0 + lVar102);
      if (lVar123 != 0) {
        pbVar106 = pbVar104 + 8;
        do {
          uVar117 = *(ulonglong *)(pbVar106 + -8);
          if (uVar117 != 0) {
            pbVar109 = *(byte **)pbVar106;
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad3162;
            pub_1406abac0(pbVar109,uVar117,1);
          }
          pbVar106 = pbVar106 + 0x18;
          lVar123 = lVar123 + -1;
        } while (lVar123 != 0);
      }
      if (*(longlong *)(&stack0x00000fa0 + lVar102) != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad3186;
        pub_1406abac0(pbVar104,*(longlong *)(&stack0x00000fa0 + lVar102) * 0x18,8);
      }
      pbVar104 = *(byte **)(&stack0x00000f08 + lVar102);
      lVar123 = *(longlong *)(&stack0x00000f10 + lVar102);
      if (lVar123 != 0) {
        pbVar106 = pbVar104 + 8;
        do {
          uVar117 = *(ulonglong *)(pbVar106 + -8);
          if (uVar117 != 0) {
            pbVar109 = *(byte **)pbVar106;
            *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad31bf;
            pub_1406abac0(pbVar109,uVar117,1);
          }
          pbVar106 = pbVar106 + 0x18;
          lVar123 = lVar123 + -1;
        } while (lVar123 != 0);
      }
LAB_140ad31c1:
      if (*(longlong *)(&stack0x00000f00 + lVar102) != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad31e3;
        pub_1406abac0(pbVar104,*(longlong *)(&stack0x00000f00 + lVar102) * 0x18,8);
      }
      if (*(ulonglong *)(&stack0xfffffffffffffff0 + lVar102) != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad31fe;
        pub_1406abac0(*(byte **)(&stack0x00000fc0 + lVar102),
                      *(ulonglong *)(&stack0xfffffffffffffff0 + lVar102),1);
      }
      if (*(ulonglong *)(&stack0x00000ec0 + lVar102) != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad321c;
        pub_1406abac0(*(byte **)(&stack0x00000ec8 + lVar102),
                      *(ulonglong *)(&stack0x00000ec0 + lVar102),1);
      }
      if (!SBORROW8(0,*(longlong *)(lVar105 + 0x98))) {
        return;
      }
      uVar119 = *(undefined8 *)(lVar105 + 0x18);
      uVar126 = *(undefined8 *)(lVar105 + 0x20);
      *(undefined8 *)(&stack0xffffffffffffffe0 + lVar102) = 7;
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad324f;
      pdb_140f3e9e0(&stack0x000004b0 + lVar102,uVar119,uVar126,&UNK_14304d9a8);
      *(undefined8 *)(&stack0xffffffffffffffe0 + lVar102) = 0xc;
      *(undefined8 *)(&stack0x00001088 + lVar102) = *(undefined8 *)(&stack0x000004b8 + lVar102);
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad3280;
      pdb_140f3e9e0(&stack0x00000c00 + lVar102,*(undefined8 *)(&stack0x000004b8 + lVar102),
                    *(undefined8 *)(&stack0x000004c0 + lVar102),&UNK_14304dc20);
      *(undefined8 *)(&stack0x00001078 + lVar102) = *(undefined8 *)(&stack0x00000c08 + lVar102);
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad329b;
      cVar100 = pdb_140f3ec10(*(undefined8 *)(&stack0x00000c08 + lVar102),
                              *(undefined8 *)(&stack0x00000c10 + lVar102));
      if (cVar100 != '\0') {
        if (*(ulonglong *)(&stack0x00000c00 + lVar102) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad32c2;
          pub_1406abac0(*(byte **)(&stack0x00001078 + lVar102),
                        *(ulonglong *)(&stack0x00000c00 + lVar102),1);
        }
        if (*(ulonglong *)(&stack0x000004b0 + lVar102) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad32e0;
          pub_1406abac0(*(byte **)(&stack0x00001088 + lVar102),
                        *(ulonglong *)(&stack0x000004b0 + lVar102),1);
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad32ec;
        pdb_140d99d70(&stack0x000004b0 + lVar102);
        *(undefined8 *)(&stack0x00001078 + lVar102) = *(undefined8 *)(&stack0x000004c0 + lVar102);
        *(undefined8 *)(&stack0x00001088 + lVar102) = 0;
        *(longlong *)(&stack0x00001060 + lVar102) = *(longlong *)(&stack0x000004b8 + lVar102);
        lVar105 = *(longlong *)(&stack0x000004b8 + lVar102);
        while (*(longlong *)(&stack0x00001078 + lVar102) !=
               *(longlong *)(&stack0x00001088 + lVar102)) {
          *(longlong *)(&stack0x00001088 + lVar102) = *(longlong *)(&stack0x00001088 + lVar102) + 1;
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad3339;
          pdb_1404b3c90(lVar105);
          lVar105 = lVar105 + 0xb0;
        }
        if (*(longlong *)(&stack0x000004b0 + lVar102) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad33a9;
          pub_1406abac0(*(byte **)(&stack0x00001060 + lVar102),
                        *(longlong *)(&stack0x000004b0 + lVar102) * 0xb0,8);
        }
        *(undefined4 *)plVar110[2] = *(undefined4 *)((longlong)plVar110 + 0x1c);
        lVar105 = *plVar110;
        lVar123 = *(longlong *)(lVar105 + 0x30);
        uVar119 = *(undefined8 *)(lVar105 + 0x40);
        if (lVar123 == *(longlong *)(lVar105 + 0x20)) {
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad33cd;
          pdb_142d7e8a0(lVar105 + 0x20);
        }
        *(undefined8 *)(*(longlong *)(lVar105 + 0x28) + lVar123 * 8) = uVar119;
        *(longlong *)(lVar105 + 0x30) = lVar123 + 1;
        *(longlong *)(lVar105 + 0x40) = *(longlong *)(lVar105 + 0x40) + 1;
        return;
      }
      if (*(ulonglong *)(&stack0x00000c00 + lVar102) != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad335d;
        pub_1406abac0(*(byte **)(&stack0x00001078 + lVar102),
                      *(ulonglong *)(&stack0x00000c00 + lVar102),1);
      }
      if (*(ulonglong *)(&stack0x000004b0 + lVar102) == 0) {
        return;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad337f;
      pub_1406abac0(*(byte **)(&stack0x00001088 + lVar102),
                    *(ulonglong *)(&stack0x000004b0 + lVar102),1);
      return;
    }
    if (2 < *_DAT_143ca8e90) {
      *(longlong *)(&stack0x00000c00 + lVar102) = lVar105 + 0x30;
      *(code **)(&stack0x00000c08 + lVar102) = pdb_140094770;
      *(undefined8 *)(&stack0x000004b0 + lVar102) = 0;
      *(undefined **)(&stack0x000004b8 + lVar102) = &UNK_14304db08;
      *(undefined8 *)(&stack0x000004c0 + lVar102) = 0x21;
      *(undefined8 *)(&stack0x000004c8 + lVar102) = 0;
      *(undefined **)(&stack0x000004d0 + lVar102) = &UNK_14304d9d1;
      *(undefined8 *)(&stack0x000004d8 + lVar102) = 0x2d;
      *(undefined8 *)(&stack0x000004e0 + lVar102) = 3;
      *(undefined **)(&stack0x000004e8 + lVar102) = &UNK_14304db08;
      *(undefined8 *)(&stack0x000004f0 + lVar102) = 0x21;
      *(undefined8 *)(&stack0x000004f8 + lVar102) = 0x2c900000001;
      *(undefined **)(&stack0x00000500 + lVar102) = &UNK_14304dde1;
      *(undefined1 **)(&stack0x00000508 + lVar102) = puVar125;
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1b52;
      pdb_140f332f0(&stack0x00001057 + lVar102,&stack0x000004b0 + lVar102);
    }
    **(undefined4 **)(&stack0x00000fb8 + lVar102) = *(undefined4 *)(&stack0x00000f70 + lVar102);
    lVar105 = 2;
    if (1 < **(ulonglong **)(&stack0x00001058 + lVar102)) {
      lVar105 = **(ulonglong **)(&stack0x00001058 + lVar102) - 2;
    }
    if (lVar105 == 0) goto LAB_140ad218a;
    if (lVar105 != 1) {
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad2189;
      pdb_140991de0(*(undefined8 *)(&stack0x00001058 + lVar102));
      goto LAB_140ad218a;
    }
    lVar105 = *(longlong *)(&stack0x00001058 + lVar102);
    uVar117 = *(ulonglong *)(lVar105 + 8);
  }
  else {
    if (!SBORROW8(0,*(longlong *)(lVar105 + 0x98))) {
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad165f;
      pdb_140f60be0(&stack0x000004b0 + lVar102,lVar105 + 0x98);
      if (!SBORROW8(0,*(longlong *)(&stack0x000004b0 + lVar102))) {
        *(longlong *)(&stack0x00001088 + lVar102) = *(longlong *)(&stack0x000004b0 + lVar102);
        *(undefined8 *)(&stack0x00001078 + lVar102) = *(undefined8 *)(&stack0x000004b8 + lVar102);
        uVar119 = *(undefined8 *)(&stack0x000004c0 + lVar102);
        plVar110 = *(longlong **)(&stack0x00000f38 + lVar102);
        *(undefined4 *)plVar110[2] = *(undefined4 *)((longlong)plVar110 + 0x1c);
        lVar105 = *plVar110;
        lVar123 = *(longlong *)(lVar105 + 0x30);
        uVar126 = *(undefined8 *)(lVar105 + 0x40);
        if (lVar123 == *(longlong *)(lVar105 + 0x20)) {
          *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad16bb;
          pdb_142d7e6e0(lVar105 + 0x20);
        }
        lVar118 = *(longlong *)(lVar105 + 0x28);
        lVar114 = lVar123 * 0x20;
        *(undefined8 *)(lVar118 + lVar114) = *(undefined8 *)(&stack0x00001088 + lVar102);
        *(undefined8 *)(lVar118 + 8 + lVar114) = *(undefined8 *)(&stack0x00001078 + lVar102);
        *(undefined8 *)(lVar118 + 0x10 + lVar114) = uVar119;
        *(undefined8 *)(lVar118 + 0x18 + lVar114) = uVar126;
        *(longlong *)(lVar105 + 0x30) = lVar123 + 1;
        *(longlong *)(lVar105 + 0x40) = *(longlong *)(lVar105 + 0x40) + 1;
      }
    }
    *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1702;
    pdb_140d99d70(&stack0x000004b0 + lVar102);
    *(undefined8 *)(&stack0x00001078 + lVar102) = *(undefined8 *)(&stack0x000004c0 + lVar102);
    *(undefined8 *)(&stack0x00001088 + lVar102) = 0;
    *(longlong *)(&stack0x00001060 + lVar102) = *(longlong *)(&stack0x000004b8 + lVar102);
    lVar105 = *(longlong *)(&stack0x000004b8 + lVar102);
    while (*(longlong *)(&stack0x00001078 + lVar102) != *(longlong *)(&stack0x00001088 + lVar102)) {
      *(longlong *)(&stack0x00001088 + lVar102) = *(longlong *)(&stack0x00001088 + lVar102) + 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1753;
      pdb_1404b3c90(lVar105);
      lVar105 = lVar105 + 0xb0;
    }
    if (*(longlong *)(&stack0x000004b0 + lVar102) != 0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad19ce;
      pub_1406abac0(*(byte **)(&stack0x00001060 + lVar102),
                    *(longlong *)(&stack0x000004b0 + lVar102) * 0xb0,8);
    }
    *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
    lVar105 = *param_3;
    lVar123 = *(longlong *)(lVar105 + 0x30);
    uVar119 = *(undefined8 *)(lVar105 + 0x40);
    if (lVar123 == *(longlong *)(lVar105 + 0x20)) {
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad19f2;
      pdb_142d7e8a0(lVar105 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(lVar105 + 0x28) + lVar123 * 8) = uVar119;
    *(longlong *)(lVar105 + 0x30) = lVar123 + 1;
    *(longlong *)(lVar105 + 0x40) = *(longlong *)(lVar105 + 0x40) + 1;
    **(undefined4 **)(&stack0x00000fb8 + lVar102) = *(undefined4 *)(&stack0x00000f70 + lVar102);
    lVar123 = 2;
    if (1 < *puVar127) {
      lVar123 = *puVar127 - 2;
    }
    if (lVar123 == 0) goto LAB_140ad218a;
    lVar105 = *(longlong *)(&stack0x00001058 + lVar102);
    if (lVar123 != 1) {
      *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1bac;
      pdb_140991de0(lVar105);
      goto LAB_140ad218a;
    }
    uVar117 = *(ulonglong *)(lVar105 + 8);
  }
  if (uVar117 != 0) {
    pbVar104 = *(byte **)(lVar105 + 0x10);
    *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1a56;
    pub_1406abac0(pbVar104,uVar117,1);
  }
  uVar117 = *(ulonglong *)(lVar105 + 0x20);
  if ((!SBORROW8(0,uVar117)) && (uVar117 != 0)) {
    pbVar104 = *(byte **)(*(longlong *)(&stack0x00001058 + lVar102) + 0x28);
    *(undefined8 *)((longlong)&uStack_48 + lVar102) = 0x140ad1a82;
    pub_1406abac0(pbVar104,uVar117,1);
  }
LAB_140ad218a:
  **(undefined8 **)(&stack0x00001058 + lVar102) = 2;
  return;
}

