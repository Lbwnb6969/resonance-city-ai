// VA 0x142568760, PDB extent 1896 bytes
// asset_pipe::texture_processing::with_rgba8<asset_pipe::texture_processing::process_regular_image::closure_env$3,tuple$<> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture_processing.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   asset_pipe::texture_processing::with_rgba8<asset_pipe::texture_processing::process_regular_image::closure_env$3,tuple$<>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture_processing.rs
   Extent: 1896 */

void pdb_142568760(longlong param_1,int *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  byte *pbVar2;
  ushort *puVar3;
  byte *pbVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  char *pcVar8;
  longlong *plVar9;
  char *pcVar10;
  longlong lVar11;
  code *pcVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  short sVar21;
  short sVar22;
  short sVar23;
  short sVar24;
  short sVar25;
  short sVar26;
  char cVar27;
  char cVar35;
  ushort uVar43;
  ushort uVar44;
  ushort uVar45;
  ushort uVar46;
  ushort uVar47;
  ushort uVar48;
  ushort uVar49;
  ushort uVar50;
  byte *pbVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  longlong lVar54;
  ulonglong uVar55;
  longlong lVar56;
  undefined4 *puVar57;
  byte *pbVar58;
  ulonglong uVar59;
  longlong lVar60;
  undefined4 uVar61;
  ushort uVar62;
  short sVar63;
  ushort uVar72;
  ushort uVar73;
  ushort uVar74;
  ushort uVar75;
  ushort uVar76;
  undefined1 auVar67 [12];
  ushort uVar77;
  ushort uVar78;
  ushort uVar79;
  ushort uVar80;
  ushort uVar81;
  ushort uVar82;
  ushort uVar83;
  ushort uVar84;
  ushort uVar85;
  ushort uVar86;
  short sVar87;
  undefined1 auVar92 [12];
  ulonglong uStack_b8;
  byte *pbStack_b0;
  ulonglong uStack_a8;
  byte *pbStack_98;
  undefined4 *puStack_90;
  ulonglong uStack_88;
  uint uStack_80;
  uint uStack_7c;
  ulonglong uStack_78;
  byte *pbStack_70;
  undefined4 *puStack_68;
  byte *pbStack_50;
  ulonglong uStack_48;
  undefined1 uStack_39;
  undefined8 uStack_38;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  undefined6 uVar64;
  undefined8 uVar65;
  undefined1 auVar66 [12];
  undefined1 auVar68 [14];
  undefined1 auVar69 [14];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined4 uVar88;
  undefined6 uVar89;
  undefined8 uVar90;
  undefined1 auVar91 [12];
  undefined1 auVar93 [14];
  undefined1 auVar94 [14];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  
  uStack_38 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x14) != '\x01') {
    if (*param_2 != 3) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143516920);
    }
    plVar9 = (longlong *)param_3[1];
    if (*(char *)*param_3 == '\0') {
      uVar52 = *(ulonglong *)(param_2 + 4);
      uVar53 = *(ulonglong *)(param_2 + 6);
      if (*(char *)(param_3[3] + 0x16) == '\x01') {
        uVar53 = uVar53 & 0x7ffffffffffffffc;
        lVar56 = plVar9[2];
        uVar43 = _DAT_142f4f8d0;
        uVar44 = _UNK_142f4f8d2;
        uVar45 = _UNK_142f4f8d4;
        uVar46 = _UNK_142f4f8d6;
        uVar47 = _UNK_142f4f8d8;
        uVar48 = _UNK_142f4f8da;
        uVar49 = _UNK_142f4f8dc;
        uVar50 = _UNK_142f4f8de;
        if ((ulonglong)(*plVar9 - lVar56) < uVar53 >> 2) {
          pdb_142d7f1b0(plVar9,lVar56,uVar53 >> 2,1,1);
          lVar56 = plVar9[2];
          uVar43 = _DAT_142f4f8d0;
          uVar44 = _UNK_142f4f8d2;
          uVar45 = _UNK_142f4f8d4;
          uVar46 = _UNK_142f4f8d6;
          uVar47 = _UNK_142f4f8d8;
          uVar48 = _UNK_142f4f8da;
          uVar49 = _UNK_142f4f8dc;
          uVar50 = _UNK_142f4f8de;
        }
        _DAT_142f4f8d0 = uVar43;
        _UNK_142f4f8d2 = uVar44;
        _UNK_142f4f8d4 = uVar45;
        _UNK_142f4f8d6 = uVar46;
        _UNK_142f4f8d8 = uVar47;
        _UNK_142f4f8da = uVar48;
        _UNK_142f4f8dc = uVar49;
        _UNK_142f4f8de = uVar50;
        if (uVar53 != 0) {
          lVar11 = plVar9[1];
          uVar55 = uVar52;
          if (0x3f < uVar53 - 4) {
            uVar59 = uVar53 - 4 >> 2;
            uVar1 = lVar11 + lVar56;
            if (((uVar52 + uVar53) - 3 <= uVar1) || (uVar59 + uVar1 + 1 <= uVar52)) {
              uVar59 = uVar59 + 1;
              uVar55 = 0x10;
              if ((uVar59 & 0xf) != 0) {
                uVar55 = (ulonglong)((uint)uVar59 & 0xf);
              }
              lVar54 = uVar59 - uVar55;
              lVar56 = lVar56 + lVar54;
              uVar53 = uVar53 + lVar54 * -4;
              uVar55 = uVar52 + lVar54 * 4;
              lVar60 = 0;
              do {
                puVar3 = (ushort *)(uVar52 + lVar60 * 4);
                puVar5 = (ushort *)(uVar52 + 0x10 + lVar60 * 4);
                puVar6 = (ushort *)(uVar52 + 0x20 + lVar60 * 4);
                puVar7 = (ushort *)(uVar52 + 0x30 + lVar60 * 4);
                uVar79 = *puVar7 & uVar43;
                uVar80 = puVar7[1] & uVar44;
                uVar81 = puVar7[2] & uVar45;
                uVar82 = puVar7[3] & uVar46;
                uVar83 = puVar7[4] & uVar47;
                uVar84 = puVar7[5] & uVar48;
                uVar85 = puVar7[6] & uVar49;
                uVar86 = puVar7[7] & uVar50;
                uVar62 = *puVar6 & uVar43;
                uVar72 = puVar6[1] & uVar44;
                uVar73 = puVar6[2] & uVar45;
                uVar74 = puVar6[3] & uVar46;
                uVar75 = puVar6[4] & uVar47;
                uVar76 = puVar6[5] & uVar48;
                uVar77 = puVar6[6] & uVar49;
                uVar78 = puVar6[7] & uVar50;
                cVar27 = (0 < (short)uVar62) * ((short)uVar62 < 0x100) * (char)uVar62 -
                         (0xff < (short)uVar62);
                sVar87 = CONCAT11((0 < (short)uVar72) * ((short)uVar72 < 0x100) * (char)uVar72 -
                                  (0xff < (short)uVar72),cVar27);
                cVar28 = (0 < (short)uVar73) * ((short)uVar73 < 0x100) * (char)uVar73 -
                         (0xff < (short)uVar73);
                uVar88 = CONCAT13((0 < (short)uVar74) * ((short)uVar74 < 0x100) * (char)uVar74 -
                                  (0xff < (short)uVar74),CONCAT12(cVar28,sVar87));
                cVar29 = (0 < (short)uVar75) * ((short)uVar75 < 0x100) * (char)uVar75 -
                         (0xff < (short)uVar75);
                uVar89 = CONCAT15((0 < (short)uVar76) * ((short)uVar76 < 0x100) * (char)uVar76 -
                                  (0xff < (short)uVar76),CONCAT14(cVar29,uVar88));
                cVar30 = (0 < (short)uVar77) * ((short)uVar77 < 0x100) * (char)uVar77 -
                         (0xff < (short)uVar77);
                uVar90 = CONCAT17((0 < (short)uVar78) * ((short)uVar78 < 0x100) * (char)uVar78 -
                                  (0xff < (short)uVar78),CONCAT16(cVar30,uVar89));
                cVar31 = (0 < (short)uVar79) * ((short)uVar79 < 0x100) * (char)uVar79 -
                         (0xff < (short)uVar79);
                auVar91._0_10_ =
                     CONCAT19((0 < (short)uVar80) * ((short)uVar80 < 0x100) * (char)uVar80 -
                              (0xff < (short)uVar80),CONCAT18(cVar31,uVar90));
                cVar32 = (0 < (short)uVar81) * ((short)uVar81 < 0x100) * (char)uVar81 -
                         (0xff < (short)uVar81);
                auVar91[10] = cVar32;
                auVar91[0xb] = (0 < (short)uVar82) * ((short)uVar82 < 0x100) * (char)uVar82 -
                               (0xff < (short)uVar82);
                cVar33 = (0 < (short)uVar83) * ((short)uVar83 < 0x100) * (char)uVar83 -
                         (0xff < (short)uVar83);
                auVar93[0xc] = cVar33;
                auVar93._0_12_ = auVar91;
                auVar93[0xd] = (0 < (short)uVar84) * ((short)uVar84 < 0x100) * (char)uVar84 -
                               (0xff < (short)uVar84);
                cVar34 = (0 < (short)uVar85) * ((short)uVar85 < 0x100) * (char)uVar85 -
                         (0xff < (short)uVar85);
                auVar95[0xe] = cVar34;
                auVar95._0_14_ = auVar93;
                auVar95[0xf] = (0 < (short)uVar86) * ((short)uVar86 < 0x100) * (char)uVar86 -
                               (0xff < (short)uVar86);
                uVar79 = *puVar5 & uVar43;
                uVar80 = puVar5[1] & uVar44;
                uVar81 = puVar5[2] & uVar45;
                uVar82 = puVar5[3] & uVar46;
                uVar83 = puVar5[4] & uVar47;
                uVar84 = puVar5[5] & uVar48;
                uVar85 = puVar5[6] & uVar49;
                uVar86 = puVar5[7] & uVar50;
                uVar62 = *puVar3 & uVar43;
                uVar72 = puVar3[1] & uVar44;
                uVar73 = puVar3[2] & uVar45;
                uVar74 = puVar3[3] & uVar46;
                uVar75 = puVar3[4] & uVar47;
                uVar76 = puVar3[5] & uVar48;
                uVar77 = puVar3[6] & uVar49;
                uVar78 = puVar3[7] & uVar50;
                cVar35 = (0 < (short)uVar62) * ((short)uVar62 < 0x100) * (char)uVar62 -
                         (0xff < (short)uVar62);
                sVar63 = CONCAT11((0 < (short)uVar72) * ((short)uVar72 < 0x100) * (char)uVar72 -
                                  (0xff < (short)uVar72),cVar35);
                cVar36 = (0 < (short)uVar73) * ((short)uVar73 < 0x100) * (char)uVar73 -
                         (0xff < (short)uVar73);
                uVar61 = CONCAT13((0 < (short)uVar74) * ((short)uVar74 < 0x100) * (char)uVar74 -
                                  (0xff < (short)uVar74),CONCAT12(cVar36,sVar63));
                cVar37 = (0 < (short)uVar75) * ((short)uVar75 < 0x100) * (char)uVar75 -
                         (0xff < (short)uVar75);
                uVar64 = CONCAT15((0 < (short)uVar76) * ((short)uVar76 < 0x100) * (char)uVar76 -
                                  (0xff < (short)uVar76),CONCAT14(cVar37,uVar61));
                cVar38 = (0 < (short)uVar77) * ((short)uVar77 < 0x100) * (char)uVar77 -
                         (0xff < (short)uVar77);
                uVar65 = CONCAT17((0 < (short)uVar78) * ((short)uVar78 < 0x100) * (char)uVar78 -
                                  (0xff < (short)uVar78),CONCAT16(cVar38,uVar64));
                cVar39 = (0 < (short)uVar79) * ((short)uVar79 < 0x100) * (char)uVar79 -
                         (0xff < (short)uVar79);
                auVar66._0_10_ =
                     CONCAT19((0 < (short)uVar80) * ((short)uVar80 < 0x100) * (char)uVar80 -
                              (0xff < (short)uVar80),CONCAT18(cVar39,uVar65));
                cVar40 = (0 < (short)uVar81) * ((short)uVar81 < 0x100) * (char)uVar81 -
                         (0xff < (short)uVar81);
                auVar66[10] = cVar40;
                auVar66[0xb] = (0 < (short)uVar82) * ((short)uVar82 < 0x100) * (char)uVar82 -
                               (0xff < (short)uVar82);
                cVar41 = (0 < (short)uVar83) * ((short)uVar83 < 0x100) * (char)uVar83 -
                         (0xff < (short)uVar83);
                auVar68[0xc] = cVar41;
                auVar68._0_12_ = auVar66;
                auVar68[0xd] = (0 < (short)uVar84) * ((short)uVar84 < 0x100) * (char)uVar84 -
                               (0xff < (short)uVar84);
                cVar42 = (0 < (short)uVar85) * ((short)uVar85 < 0x100) * (char)uVar85 -
                         (0xff < (short)uVar85);
                auVar70[0xe] = cVar42;
                auVar70._0_14_ = auVar68;
                auVar70[0xf] = (0 < (short)uVar86) * ((short)uVar86 < 0x100) * (char)uVar86 -
                               (0xff < (short)uVar86);
                sVar13 = (short)((uint)uVar61 >> 0x10);
                sVar14 = (short)((uint6)uVar64 >> 0x20);
                sVar15 = (short)((ulonglong)uVar65 >> 0x30);
                sVar16 = (short)((unkuint10)auVar66._0_10_ >> 0x40);
                sVar17 = auVar66._10_2_;
                sVar18 = auVar68._12_2_;
                sVar19 = auVar70._14_2_;
                sVar20 = (short)((uint)uVar88 >> 0x10);
                sVar21 = (short)((uint6)uVar89 >> 0x20);
                sVar22 = (short)((ulonglong)uVar90 >> 0x30);
                sVar23 = (short)((unkuint10)auVar91._0_10_ >> 0x40);
                sVar24 = auVar91._10_2_;
                sVar25 = auVar93._12_2_;
                sVar26 = auVar95._14_2_;
                pcVar8 = (char *)(uVar1 + lVar60);
                *pcVar8 = (0 < sVar63) * (sVar63 < 0x100) * cVar35 - (0xff < sVar63);
                pcVar8[1] = (0 < sVar13) * (sVar13 < 0x100) * cVar36 - (0xff < sVar13);
                pcVar8[2] = (0 < sVar14) * (sVar14 < 0x100) * cVar37 - (0xff < sVar14);
                pcVar8[3] = (0 < sVar15) * (sVar15 < 0x100) * cVar38 - (0xff < sVar15);
                pcVar8[4] = (0 < sVar16) * (sVar16 < 0x100) * cVar39 - (0xff < sVar16);
                pcVar8[5] = (0 < sVar17) * (sVar17 < 0x100) * cVar40 - (0xff < sVar17);
                pcVar8[6] = (0 < sVar18) * (sVar18 < 0x100) * cVar41 - (0xff < sVar18);
                pcVar8[7] = (0 < sVar19) * (sVar19 < 0x100) * cVar42 - (0xff < sVar19);
                pcVar8[8] = (0 < sVar87) * (sVar87 < 0x100) * cVar27 - (0xff < sVar87);
                pcVar8[9] = (0 < sVar20) * (sVar20 < 0x100) * cVar28 - (0xff < sVar20);
                pcVar8[10] = (0 < sVar21) * (sVar21 < 0x100) * cVar29 - (0xff < sVar21);
                pcVar8[0xb] = (0 < sVar22) * (sVar22 < 0x100) * cVar30 - (0xff < sVar22);
                pcVar8[0xc] = (0 < sVar23) * (sVar23 < 0x100) * cVar31 - (0xff < sVar23);
                pcVar8[0xd] = (0 < sVar24) * (sVar24 < 0x100) * cVar32 - (0xff < sVar24);
                pcVar8[0xe] = (0 < sVar25) * (sVar25 < 0x100) * cVar33 - (0xff < sVar25);
                pcVar8[0xf] = (0 < sVar26) * (sVar26 < 0x100) * cVar34 - (0xff < sVar26);
                lVar60 = lVar60 + 0x10;
              } while (lVar54 != lVar60);
            }
          }
          uVar52 = 0;
          do {
            *(undefined1 *)(lVar11 + lVar56) = *(undefined1 *)(uVar55 + uVar52);
            lVar56 = lVar56 + 1;
            uVar52 = uVar52 + 4;
          } while (uVar53 != uVar52);
        }
        plVar9[2] = lVar56;
        return;
      }
      lVar56 = plVar9[2];
      if ((ulonglong)(*plVar9 - lVar56) < uVar53) {
        pdb_142d7f1b0(plVar9,lVar56,uVar53,1,1);
        lVar56 = plVar9[2];
      }
      else if (uVar53 == 0) goto LAB_142568bdb;
      pub_142e32760(plVar9[1] + lVar56,uVar52,uVar53);
LAB_142568bdb:
      plVar9[2] = lVar56 + uVar53;
      return;
    }
    if (*(char *)param_3[2] == '\x03') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143516950);
    }
    pdb_1417dbdf0(&uStack_78,param_2 + 2);
    lVar56 = plVar9[2];
    if ((ulonglong)(*plVar9 - lVar56) < puStack_68) {
      pbStack_50 = pbStack_70;
      uStack_48 = uStack_78;
      pdb_142d7f1b0(plVar9,lVar56,puStack_68,1,1);
      lVar56 = plVar9[2];
      uStack_b8 = uStack_48;
      pbStack_70 = pbStack_50;
LAB_142568938:
      pub_142e32760(plVar9[1] + lVar56,pbStack_70,puStack_68);
    }
    else {
      uStack_b8 = uStack_78;
      if (puStack_68 != (undefined4 *)0x0) goto LAB_142568938;
    }
    plVar9[2] = lVar56 + (longlong)puStack_68;
    pbStack_b0 = pbStack_70;
    goto joined_r0x000142568954;
  }
  pdb_140dabcd0(&pbStack_98);
  auVar70 = ZEXT416(uStack_80) * (undefined1  [16])0x4 * ZEXT416(uStack_7c);
  uVar52 = auVar70._0_8_;
  if (auVar70._8_8_ != 0) {
    uStack_39 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143516a80);
  }
  if (uStack_88 < uVar52) {
    uStack_39 = 1;
    pdb_142dc8420(0,uVar52,uStack_88,&UNK_143516a98);
                    /* WARNING: Does not return */
    pcVar12 = (code *)invalidInstructionException();
    (*pcVar12)();
  }
  puVar57 = puStack_90;
  for (uVar52 = uVar52 & 0x1ffffffffffffffc; uVar52 != 0; uVar52 = uVar52 - 4) {
    uStack_39 = 1;
    uVar61 = pdb_1417dc3c0();
    *puVar57 = uVar61;
    uStack_39 = 1;
    uVar61 = pdb_1417dc3c0();
    puVar57[1] = uVar61;
    uStack_39 = 1;
    uVar61 = pdb_1417dc3c0(puVar57[2]);
    puVar57[2] = uVar61;
    puVar57 = puVar57 + 4;
  }
  pcVar8 = (char *)*param_3;
  plVar9 = (longlong *)param_3[1];
  pcVar10 = (char *)param_3[2];
  lVar56 = param_3[3];
  uStack_78 = 9;
  uStack_39 = 0;
  pbStack_70 = pbStack_98;
  puStack_68 = puStack_90;
  pdb_140dabc60(&uStack_b8,&uStack_78);
  pbVar51 = pbStack_b0;
  if (*pcVar8 == '\0') {
    if (*(char *)(lVar56 + 0x16) == '\x01') {
      uVar52 = uStack_a8 & 0x7ffffffffffffffc;
      lVar56 = plVar9[2];
      uVar43 = _DAT_142f4f8d0;
      uVar44 = _UNK_142f4f8d2;
      uVar45 = _UNK_142f4f8d4;
      uVar46 = _UNK_142f4f8d6;
      uVar47 = _UNK_142f4f8d8;
      uVar48 = _UNK_142f4f8da;
      uVar49 = _UNK_142f4f8dc;
      uVar50 = _UNK_142f4f8de;
      if ((ulonglong)(*plVar9 - lVar56) < uVar52 >> 2) {
        pdb_142d7f1b0(plVar9,lVar56,uVar52 >> 2,1,1);
        lVar56 = plVar9[2];
        uVar43 = _DAT_142f4f8d0;
        uVar44 = _UNK_142f4f8d2;
        uVar45 = _UNK_142f4f8d4;
        uVar46 = _UNK_142f4f8d6;
        uVar47 = _UNK_142f4f8d8;
        uVar48 = _UNK_142f4f8da;
        uVar49 = _UNK_142f4f8dc;
        uVar50 = _UNK_142f4f8de;
      }
      _DAT_142f4f8d0 = uVar43;
      _UNK_142f4f8d2 = uVar44;
      _UNK_142f4f8d4 = uVar45;
      _UNK_142f4f8d6 = uVar46;
      _UNK_142f4f8d8 = uVar47;
      _UNK_142f4f8da = uVar48;
      _UNK_142f4f8dc = uVar49;
      _UNK_142f4f8de = uVar50;
      if (uVar52 != 0) {
        lVar11 = plVar9[1];
        pbVar58 = pbVar51;
        if (0x3f < uVar52 - 4) {
          uVar53 = uVar52 - 4 >> 2;
          pbVar2 = (byte *)(lVar11 + lVar56);
          if ((pbVar51 + (uVar52 - 3) <= pbVar2) || (pbVar2 + uVar53 + 1 <= pbVar51)) {
            uVar53 = uVar53 + 1;
            uVar55 = 0x10;
            if ((uVar53 & 0xf) != 0) {
              uVar55 = (ulonglong)((uint)uVar53 & 0xf);
            }
            lVar54 = uVar53 - uVar55;
            lVar56 = lVar56 + lVar54;
            uVar52 = uVar52 + lVar54 * -4;
            pbVar58 = pbVar51 + lVar54 * 4;
            lVar60 = 0;
            do {
              puVar3 = (ushort *)(pbVar51 + lVar60 * 4);
              puVar5 = (ushort *)(pbVar51 + lVar60 * 4 + 0x10);
              puVar6 = (ushort *)(pbVar51 + lVar60 * 4 + 0x20);
              puVar7 = (ushort *)(pbVar51 + lVar60 * 4 + 0x30);
              uVar79 = *puVar7 & uVar43;
              uVar80 = puVar7[1] & uVar44;
              uVar81 = puVar7[2] & uVar45;
              uVar82 = puVar7[3] & uVar46;
              uVar83 = puVar7[4] & uVar47;
              uVar84 = puVar7[5] & uVar48;
              uVar85 = puVar7[6] & uVar49;
              uVar86 = puVar7[7] & uVar50;
              uVar62 = *puVar6 & uVar43;
              uVar72 = puVar6[1] & uVar44;
              uVar73 = puVar6[2] & uVar45;
              uVar74 = puVar6[3] & uVar46;
              uVar75 = puVar6[4] & uVar47;
              uVar76 = puVar6[5] & uVar48;
              uVar77 = puVar6[6] & uVar49;
              uVar78 = puVar6[7] & uVar50;
              cVar27 = (0 < (short)uVar62) * ((short)uVar62 < 0x100) * (char)uVar62 -
                       (0xff < (short)uVar62);
              sVar87 = CONCAT11((0 < (short)uVar72) * ((short)uVar72 < 0x100) * (char)uVar72 -
                                (0xff < (short)uVar72),cVar27);
              cVar28 = (0 < (short)uVar73) * ((short)uVar73 < 0x100) * (char)uVar73 -
                       (0xff < (short)uVar73);
              uVar88 = CONCAT13((0 < (short)uVar74) * ((short)uVar74 < 0x100) * (char)uVar74 -
                                (0xff < (short)uVar74),CONCAT12(cVar28,sVar87));
              cVar29 = (0 < (short)uVar75) * ((short)uVar75 < 0x100) * (char)uVar75 -
                       (0xff < (short)uVar75);
              uVar89 = CONCAT15((0 < (short)uVar76) * ((short)uVar76 < 0x100) * (char)uVar76 -
                                (0xff < (short)uVar76),CONCAT14(cVar29,uVar88));
              cVar30 = (0 < (short)uVar77) * ((short)uVar77 < 0x100) * (char)uVar77 -
                       (0xff < (short)uVar77);
              uVar90 = CONCAT17((0 < (short)uVar78) * ((short)uVar78 < 0x100) * (char)uVar78 -
                                (0xff < (short)uVar78),CONCAT16(cVar30,uVar89));
              cVar31 = (0 < (short)uVar79) * ((short)uVar79 < 0x100) * (char)uVar79 -
                       (0xff < (short)uVar79);
              auVar92._0_10_ =
                   CONCAT19((0 < (short)uVar80) * ((short)uVar80 < 0x100) * (char)uVar80 -
                            (0xff < (short)uVar80),CONCAT18(cVar31,uVar90));
              cVar32 = (0 < (short)uVar81) * ((short)uVar81 < 0x100) * (char)uVar81 -
                       (0xff < (short)uVar81);
              auVar92[10] = cVar32;
              auVar92[0xb] = (0 < (short)uVar82) * ((short)uVar82 < 0x100) * (char)uVar82 -
                             (0xff < (short)uVar82);
              cVar33 = (0 < (short)uVar83) * ((short)uVar83 < 0x100) * (char)uVar83 -
                       (0xff < (short)uVar83);
              auVar94[0xc] = cVar33;
              auVar94._0_12_ = auVar92;
              auVar94[0xd] = (0 < (short)uVar84) * ((short)uVar84 < 0x100) * (char)uVar84 -
                             (0xff < (short)uVar84);
              cVar34 = (0 < (short)uVar85) * ((short)uVar85 < 0x100) * (char)uVar85 -
                       (0xff < (short)uVar85);
              auVar96[0xe] = cVar34;
              auVar96._0_14_ = auVar94;
              auVar96[0xf] = (0 < (short)uVar86) * ((short)uVar86 < 0x100) * (char)uVar86 -
                             (0xff < (short)uVar86);
              uVar79 = *puVar5 & uVar43;
              uVar80 = puVar5[1] & uVar44;
              uVar81 = puVar5[2] & uVar45;
              uVar82 = puVar5[3] & uVar46;
              uVar83 = puVar5[4] & uVar47;
              uVar84 = puVar5[5] & uVar48;
              uVar85 = puVar5[6] & uVar49;
              uVar86 = puVar5[7] & uVar50;
              uVar62 = *puVar3 & uVar43;
              uVar72 = puVar3[1] & uVar44;
              uVar73 = puVar3[2] & uVar45;
              uVar74 = puVar3[3] & uVar46;
              uVar75 = puVar3[4] & uVar47;
              uVar76 = puVar3[5] & uVar48;
              uVar77 = puVar3[6] & uVar49;
              uVar78 = puVar3[7] & uVar50;
              cVar35 = (0 < (short)uVar62) * ((short)uVar62 < 0x100) * (char)uVar62 -
                       (0xff < (short)uVar62);
              sVar63 = CONCAT11((0 < (short)uVar72) * ((short)uVar72 < 0x100) * (char)uVar72 -
                                (0xff < (short)uVar72),cVar35);
              cVar36 = (0 < (short)uVar73) * ((short)uVar73 < 0x100) * (char)uVar73 -
                       (0xff < (short)uVar73);
              uVar61 = CONCAT13((0 < (short)uVar74) * ((short)uVar74 < 0x100) * (char)uVar74 -
                                (0xff < (short)uVar74),CONCAT12(cVar36,sVar63));
              cVar37 = (0 < (short)uVar75) * ((short)uVar75 < 0x100) * (char)uVar75 -
                       (0xff < (short)uVar75);
              uVar64 = CONCAT15((0 < (short)uVar76) * ((short)uVar76 < 0x100) * (char)uVar76 -
                                (0xff < (short)uVar76),CONCAT14(cVar37,uVar61));
              cVar38 = (0 < (short)uVar77) * ((short)uVar77 < 0x100) * (char)uVar77 -
                       (0xff < (short)uVar77);
              uVar65 = CONCAT17((0 < (short)uVar78) * ((short)uVar78 < 0x100) * (char)uVar78 -
                                (0xff < (short)uVar78),CONCAT16(cVar38,uVar64));
              cVar39 = (0 < (short)uVar79) * ((short)uVar79 < 0x100) * (char)uVar79 -
                       (0xff < (short)uVar79);
              auVar67._0_10_ =
                   CONCAT19((0 < (short)uVar80) * ((short)uVar80 < 0x100) * (char)uVar80 -
                            (0xff < (short)uVar80),CONCAT18(cVar39,uVar65));
              cVar40 = (0 < (short)uVar81) * ((short)uVar81 < 0x100) * (char)uVar81 -
                       (0xff < (short)uVar81);
              auVar67[10] = cVar40;
              auVar67[0xb] = (0 < (short)uVar82) * ((short)uVar82 < 0x100) * (char)uVar82 -
                             (0xff < (short)uVar82);
              cVar41 = (0 < (short)uVar83) * ((short)uVar83 < 0x100) * (char)uVar83 -
                       (0xff < (short)uVar83);
              auVar69[0xc] = cVar41;
              auVar69._0_12_ = auVar67;
              auVar69[0xd] = (0 < (short)uVar84) * ((short)uVar84 < 0x100) * (char)uVar84 -
                             (0xff < (short)uVar84);
              cVar42 = (0 < (short)uVar85) * ((short)uVar85 < 0x100) * (char)uVar85 -
                       (0xff < (short)uVar85);
              auVar71[0xe] = cVar42;
              auVar71._0_14_ = auVar69;
              auVar71[0xf] = (0 < (short)uVar86) * ((short)uVar86 < 0x100) * (char)uVar86 -
                             (0xff < (short)uVar86);
              sVar13 = (short)((uint)uVar61 >> 0x10);
              sVar14 = (short)((uint6)uVar64 >> 0x20);
              sVar15 = (short)((ulonglong)uVar65 >> 0x30);
              sVar16 = (short)((unkuint10)auVar67._0_10_ >> 0x40);
              sVar17 = auVar67._10_2_;
              sVar18 = auVar69._12_2_;
              sVar19 = auVar71._14_2_;
              sVar20 = (short)((uint)uVar88 >> 0x10);
              sVar21 = (short)((uint6)uVar89 >> 0x20);
              sVar22 = (short)((ulonglong)uVar90 >> 0x30);
              sVar23 = (short)((unkuint10)auVar92._0_10_ >> 0x40);
              sVar24 = auVar92._10_2_;
              sVar25 = auVar94._12_2_;
              sVar26 = auVar96._14_2_;
              pbVar4 = pbVar2 + lVar60;
              *pbVar4 = (0 < sVar63) * (sVar63 < 0x100) * cVar35 - (0xff < sVar63);
              pbVar4[1] = (0 < sVar13) * (sVar13 < 0x100) * cVar36 - (0xff < sVar13);
              pbVar4[2] = (0 < sVar14) * (sVar14 < 0x100) * cVar37 - (0xff < sVar14);
              pbVar4[3] = (0 < sVar15) * (sVar15 < 0x100) * cVar38 - (0xff < sVar15);
              pbVar4[4] = (0 < sVar16) * (sVar16 < 0x100) * cVar39 - (0xff < sVar16);
              pbVar4[5] = (0 < sVar17) * (sVar17 < 0x100) * cVar40 - (0xff < sVar17);
              pbVar4[6] = (0 < sVar18) * (sVar18 < 0x100) * cVar41 - (0xff < sVar18);
              pbVar4[7] = (0 < sVar19) * (sVar19 < 0x100) * cVar42 - (0xff < sVar19);
              pbVar4[8] = (0 < sVar87) * (sVar87 < 0x100) * cVar27 - (0xff < sVar87);
              pbVar4[9] = (0 < sVar20) * (sVar20 < 0x100) * cVar28 - (0xff < sVar20);
              pbVar4[10] = (0 < sVar21) * (sVar21 < 0x100) * cVar29 - (0xff < sVar21);
              pbVar4[0xb] = (0 < sVar22) * (sVar22 < 0x100) * cVar30 - (0xff < sVar22);
              pbVar4[0xc] = (0 < sVar23) * (sVar23 < 0x100) * cVar31 - (0xff < sVar23);
              pbVar4[0xd] = (0 < sVar24) * (sVar24 < 0x100) * cVar32 - (0xff < sVar24);
              pbVar4[0xe] = (0 < sVar25) * (sVar25 < 0x100) * cVar33 - (0xff < sVar25);
              pbVar4[0xf] = (0 < sVar26) * (sVar26 < 0x100) * cVar34 - (0xff < sVar26);
              lVar60 = lVar60 + 0x10;
            } while (lVar54 != lVar60);
          }
        }
        uVar53 = 0;
        do {
          *(byte *)(lVar11 + lVar56) = pbVar58[uVar53];
          lVar56 = lVar56 + 1;
          uVar53 = uVar53 + 4;
        } while (uVar52 != uVar53);
      }
      plVar9[2] = lVar56;
      goto joined_r0x000142568954;
    }
    lVar56 = plVar9[2];
    if ((ulonglong)(*plVar9 - lVar56) < uStack_a8) {
      pdb_142d7f1b0(plVar9,lVar56,uStack_a8,1,1);
      lVar56 = plVar9[2];
LAB_142568bfc:
      pub_142e32760(plVar9[1] + lVar56,pbVar51,uStack_a8);
    }
    else if (uStack_a8 != 0) goto LAB_142568bfc;
    plVar9[2] = lVar56 + uStack_a8;
    goto joined_r0x000142568954;
  }
  if (*pcVar10 == '\x03') {
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143516950);
  }
  pdb_1417dbdf0(&uStack_78,&uStack_b8);
  lVar56 = plVar9[2];
  if ((undefined4 *)(*plVar9 - lVar56) < puStack_68) {
    pbStack_50 = pbStack_70;
    uStack_48 = uStack_78;
    pdb_142d7f1b0(plVar9,lVar56,puStack_68,1,1);
    lVar56 = plVar9[2];
    uVar52 = uStack_48;
    pbStack_70 = pbStack_50;
LAB_14256889b:
    pub_142e32760(plVar9[1] + lVar56,pbStack_70,puStack_68);
  }
  else {
    uVar52 = uStack_78;
    if (puStack_68 != (undefined4 *)0x0) goto LAB_14256889b;
  }
  plVar9[2] = lVar56 + (longlong)puStack_68;
  if (uVar52 != 0) {
    pub_1406abac0(pbStack_70,uVar52,1);
  }
joined_r0x000142568954:
  if (uStack_b8 != 0) {
    pub_1406abac0(pbStack_b0,uStack_b8,1);
  }
  return;
}

