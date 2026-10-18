// VA 0x1417dbdf0, PDB extent 1483 bytes
// asset_pipe::texture_processing::compress
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture_processing.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: asset_pipe::texture_processing::compress
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/texture_processing.rs
   Extent: 1483 */

void pdb_1417dbdf0(ulonglong *param_1,longlong param_2,uint param_3)

{
  uint *puVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  short sVar10;
  short sVar11;
  short sVar12;
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
  char cVar24;
  char cVar31;
  undefined8 uVar39;
  ushort uVar40;
  ushort uVar41;
  ushort uVar42;
  ushort uVar43;
  ushort uVar44;
  ushort uVar45;
  ushort uVar46;
  ushort uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  char cVar51;
  longlong lVar52;
  byte bVar53;
  code *pcVar54;
  bool bVar55;
  bool bVar56;
  ushort uVar57;
  short sVar58;
  ushort uVar65;
  ushort uVar66;
  ushort uVar67;
  ushort uVar68;
  ushort uVar69;
  ushort uVar70;
  ushort uVar71;
  ushort uVar72;
  ushort uVar73;
  ushort uVar74;
  ushort uVar75;
  ushort uVar76;
  ushort uVar77;
  ushort uVar78;
  ushort uVar79;
  short sVar80;
  code *pcStack_128;
  code *pcStack_120;
  uint *puStack_118;
  code *pcStack_110;
  char *pcStack_108;
  code *pcStack_100;
  ulonglong uStack_f8;
  code *pcStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  code *pcStack_d8;
  ulonglong uStack_d0;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  code **ppcStack_90;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  byte *pbStack_70;
  undefined1 uStack_61;
  ulonglong uStack_60;
  code *pcStack_58;
  char cStack_49;
  undefined8 uStack_48;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  undefined4 uVar59;
  undefined6 uVar60;
  undefined8 uVar61;
  undefined1 auVar62 [12];
  undefined1 auVar63 [14];
  undefined1 auVar64 [16];
  undefined4 uVar81;
  undefined6 uVar82;
  undefined8 uVar83;
  undefined1 auVar84 [12];
  undefined1 auVar85 [14];
  undefined1 auVar86 [16];
  
  uStack_48 = 0xfffffffffffffffe;
  cVar51 = (char)param_3;
  puVar1 = (uint *)(param_2 + 0x18);
  uVar6 = *puVar1;
  uVar7 = *(uint *)(param_2 + 0x1c);
  uVar39 = *(undefined8 *)puVar1;
  uVar83 = *(undefined8 *)puVar1;
  uVar61 = *(undefined8 *)puVar1;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (ulonglong)uVar6 * 4;
  uVar48 = SUB168(auVar9 * ZEXT416(uVar7),0);
  cStack_49 = cVar51;
  if (SUB168(auVar9 * ZEXT416(uVar7),8) != 0) {
LAB_1417dc2a2:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143516a50);
  }
  uVar50 = (ulonglong)param_3;
  pcStack_58 = *(code **)(param_2 + 0x10);
  if (pcStack_58 < uVar48) {
    pdb_142dc8420(0,uVar48,pcStack_58,&UNK_143516a68);
    goto LAB_1417dc2a2;
  }
  uStack_74 = uVar7 * uVar6 + 0xf >> 4;
  pcVar8 = *(code **)(param_2 + 8);
  if ((uVar48 & 0x7ffffffffffffffc) == 0) {
    bVar55 = true;
  }
  else {
    lVar52 = 0;
    do {
      bVar55 = pcVar8[lVar52 + 3] == (code)0xff;
      if (!bVar55) break;
      bVar56 = (uVar48 & 0x7ffffffffffffffc) - 4 != lVar52;
      lVar52 = lVar52 + 4;
    } while (bVar56);
  }
  uVar48 = (ulonglong)uStack_74 << (4U - (cVar51 == '\x01') & 0x3f);
  uStack_60 = uVar48;
  if (uStack_74 == 0) {
    pbStack_70 = (byte *)0x1;
    uVar48 = *_DAT_143ca8e90;
  }
  else {
    pdb_14007ee60();
    pbStack_70 = pub_1406abae0(uVar48,1);
    if (pbStack_70 == (byte *)0x0) {
      pdb_142dc7e2a(1,uStack_60);
      goto LAB_1417dc2bd;
    }
    uVar48 = *_DAT_143ca8e90;
  }
  if (2 < uVar48) {
    pcStack_128 = (code *)&uStack_78;
    pcStack_120 = pdb_140f71a50;
    puStack_118 = &uStack_7c;
    pcStack_110 = pdb_140f71a50;
    pcStack_108 = &cStack_49;
    pcStack_100 = pdb_1417dd470;
    pcStack_e8 = (code *)0x0;
    puStack_e0 = &UNK_143338c11;
    pcStack_d8 = (code *)0x1e;
    uStack_d0 = 0;
    iStack_c8 = 0x43338be5;
    uStack_c4 = 1;
    uStack_c0 = 0x2b;
    iStack_bc = 0;
    uStack_b8 = 3;
    puStack_b0 = &UNK_143338c11;
    uStack_a8 = 0x1e;
    uStack_a0 = 0x2d000000001;
    puStack_98 = &UNK_1433392b8;
    ppcStack_90 = &pcStack_128;
    uStack_7c = uVar7;
    uStack_78 = uVar6;
    pdb_140f332f0(&uStack_61,&pcStack_e8);
  }
  if (cVar51 == '\0') {
    puStack_e0 = (undefined *)((ulonglong)pcStack_58 & 0x7ffffffffffffffc);
    uStack_d0 = (ulonglong)((uint)pcStack_58 & 3);
    pcStack_d8 = pcVar8 + (longlong)puStack_e0;
    iStack_c8 = 4;
    uStack_c4 = 0;
    pcStack_e8 = pcVar8;
    pdb_142569660(&pcStack_128,&pcStack_e8);
    puStack_e0 = (undefined *)((longlong)puStack_118 * 2);
    pcStack_58 = pcStack_120;
    pcStack_e8 = pcStack_120;
    uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar6 * 2);
    pcStack_d8 = (code *)uVar61;
    pdb_142569dc0(&pcStack_e8,pbStack_70,uStack_60);
    if (pcStack_128 != (code *)0x0) {
      pub_1406abac0((byte *)pcStack_58,(longlong)pcStack_128 * 2,1);
    }
  }
  else if ((param_3 & 0xff) == 1) {
    uVar48 = (ulonglong)pcStack_58 & 0x7ffffffffffffffc;
    uVar50 = uVar48 >> 2;
    uStack_f8 = uVar50;
    pcStack_58 = (code *)uVar48;
    if (uVar48 == 0) {
      pcStack_f0 = (code *)0x1;
      puStack_e0 = (undefined *)0x0;
    }
    else {
      pdb_14007ee60();
      pcStack_f0 = (code *)pub_1406abab0(uVar50,1);
      uVar47 = _UNK_142f4f8de;
      uVar46 = _UNK_142f4f8dc;
      uVar45 = _UNK_142f4f8da;
      uVar44 = _UNK_142f4f8d8;
      uVar43 = _UNK_142f4f8d6;
      uVar42 = _UNK_142f4f8d4;
      uVar41 = _UNK_142f4f8d2;
      uVar40 = _DAT_142f4f8d0;
      if (pcStack_f0 == (code *)0x0) {
LAB_1417dc2bd:
        pdb_142dc7e2a(1,uVar50);
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
      if ((uVar48 - 4 < 0x40) ||
         ((uVar50 = uVar48 - 4 >> 2, pcStack_f0 < pcVar8 + (uVar48 - 3) &&
          (pcVar8 < pcStack_f0 + uVar50 + 1)))) {
        puStack_e0 = (undefined *)0x0;
        pcVar54 = pcVar8;
      }
      else {
        uVar50 = uVar50 + 1;
        uVar49 = 0x10;
        if ((uVar50 & 0xf) != 0) {
          uVar49 = (ulonglong)((uint)uVar50 & 0xf);
        }
        puStack_e0 = (undefined *)(uVar50 - uVar49);
        uVar48 = uVar48 + (longlong)puStack_e0 * -4;
        pcVar54 = pcVar8 + (longlong)puStack_e0 * 4;
        lVar52 = 0;
        do {
          pcVar2 = pcVar8 + lVar52 * 4;
          pcVar3 = pcVar8 + lVar52 * 4 + 0x10;
          pcVar4 = pcVar8 + lVar52 * 4 + 0x20;
          pcVar5 = pcVar8 + lVar52 * 4 + 0x30;
          uVar72 = *(ushort *)pcVar5 & uVar40;
          uVar73 = *(ushort *)(pcVar5 + 2) & uVar41;
          uVar74 = *(ushort *)(pcVar5 + 4) & uVar42;
          uVar75 = *(ushort *)(pcVar5 + 6) & uVar43;
          uVar76 = *(ushort *)(pcVar5 + 8) & uVar44;
          uVar77 = *(ushort *)(pcVar5 + 10) & uVar45;
          uVar78 = *(ushort *)(pcVar5 + 0xc) & uVar46;
          uVar79 = *(ushort *)(pcVar5 + 0xe) & uVar47;
          uVar57 = *(ushort *)pcVar4 & uVar40;
          uVar65 = *(ushort *)(pcVar4 + 2) & uVar41;
          uVar66 = *(ushort *)(pcVar4 + 4) & uVar42;
          uVar67 = *(ushort *)(pcVar4 + 6) & uVar43;
          uVar68 = *(ushort *)(pcVar4 + 8) & uVar44;
          uVar69 = *(ushort *)(pcVar4 + 10) & uVar45;
          uVar70 = *(ushort *)(pcVar4 + 0xc) & uVar46;
          uVar71 = *(ushort *)(pcVar4 + 0xe) & uVar47;
          cVar51 = (0 < (short)uVar57) * ((short)uVar57 < 0x100) * (char)uVar57 -
                   (0xff < (short)uVar57);
          sVar80 = CONCAT11((0 < (short)uVar65) * ((short)uVar65 < 0x100) * (char)uVar65 -
                            (0xff < (short)uVar65),cVar51);
          cVar24 = (0 < (short)uVar66) * ((short)uVar66 < 0x100) * (char)uVar66 -
                   (0xff < (short)uVar66);
          uVar81 = CONCAT13((0 < (short)uVar67) * ((short)uVar67 < 0x100) * (char)uVar67 -
                            (0xff < (short)uVar67),CONCAT12(cVar24,sVar80));
          cVar25 = (0 < (short)uVar68) * ((short)uVar68 < 0x100) * (char)uVar68 -
                   (0xff < (short)uVar68);
          uVar82 = CONCAT15((0 < (short)uVar69) * ((short)uVar69 < 0x100) * (char)uVar69 -
                            (0xff < (short)uVar69),CONCAT14(cVar25,uVar81));
          cVar26 = (0 < (short)uVar70) * ((short)uVar70 < 0x100) * (char)uVar70 -
                   (0xff < (short)uVar70);
          uVar83 = CONCAT17((0 < (short)uVar71) * ((short)uVar71 < 0x100) * (char)uVar71 -
                            (0xff < (short)uVar71),CONCAT16(cVar26,uVar82));
          cVar27 = (0 < (short)uVar72) * ((short)uVar72 < 0x100) * (char)uVar72 -
                   (0xff < (short)uVar72);
          auVar84._0_10_ =
               CONCAT19((0 < (short)uVar73) * ((short)uVar73 < 0x100) * (char)uVar73 -
                        (0xff < (short)uVar73),CONCAT18(cVar27,uVar83));
          cVar28 = (0 < (short)uVar74) * ((short)uVar74 < 0x100) * (char)uVar74 -
                   (0xff < (short)uVar74);
          auVar84[10] = cVar28;
          auVar84[0xb] = (0 < (short)uVar75) * ((short)uVar75 < 0x100) * (char)uVar75 -
                         (0xff < (short)uVar75);
          cVar29 = (0 < (short)uVar76) * ((short)uVar76 < 0x100) * (char)uVar76 -
                   (0xff < (short)uVar76);
          auVar85[0xc] = cVar29;
          auVar85._0_12_ = auVar84;
          auVar85[0xd] = (0 < (short)uVar77) * ((short)uVar77 < 0x100) * (char)uVar77 -
                         (0xff < (short)uVar77);
          cVar30 = (0 < (short)uVar78) * ((short)uVar78 < 0x100) * (char)uVar78 -
                   (0xff < (short)uVar78);
          auVar86[0xe] = cVar30;
          auVar86._0_14_ = auVar85;
          auVar86[0xf] = (0 < (short)uVar79) * ((short)uVar79 < 0x100) * (char)uVar79 -
                         (0xff < (short)uVar79);
          uVar72 = *(ushort *)pcVar3 & uVar40;
          uVar73 = *(ushort *)(pcVar3 + 2) & uVar41;
          uVar74 = *(ushort *)(pcVar3 + 4) & uVar42;
          uVar75 = *(ushort *)(pcVar3 + 6) & uVar43;
          uVar76 = *(ushort *)(pcVar3 + 8) & uVar44;
          uVar77 = *(ushort *)(pcVar3 + 10) & uVar45;
          uVar78 = *(ushort *)(pcVar3 + 0xc) & uVar46;
          uVar79 = *(ushort *)(pcVar3 + 0xe) & uVar47;
          uVar57 = *(ushort *)pcVar2 & uVar40;
          uVar65 = *(ushort *)(pcVar2 + 2) & uVar41;
          uVar66 = *(ushort *)(pcVar2 + 4) & uVar42;
          uVar67 = *(ushort *)(pcVar2 + 6) & uVar43;
          uVar68 = *(ushort *)(pcVar2 + 8) & uVar44;
          uVar69 = *(ushort *)(pcVar2 + 10) & uVar45;
          uVar70 = *(ushort *)(pcVar2 + 0xc) & uVar46;
          uVar71 = *(ushort *)(pcVar2 + 0xe) & uVar47;
          cVar31 = (0 < (short)uVar57) * ((short)uVar57 < 0x100) * (char)uVar57 -
                   (0xff < (short)uVar57);
          sVar58 = CONCAT11((0 < (short)uVar65) * ((short)uVar65 < 0x100) * (char)uVar65 -
                            (0xff < (short)uVar65),cVar31);
          cVar32 = (0 < (short)uVar66) * ((short)uVar66 < 0x100) * (char)uVar66 -
                   (0xff < (short)uVar66);
          uVar59 = CONCAT13((0 < (short)uVar67) * ((short)uVar67 < 0x100) * (char)uVar67 -
                            (0xff < (short)uVar67),CONCAT12(cVar32,sVar58));
          cVar33 = (0 < (short)uVar68) * ((short)uVar68 < 0x100) * (char)uVar68 -
                   (0xff < (short)uVar68);
          uVar60 = CONCAT15((0 < (short)uVar69) * ((short)uVar69 < 0x100) * (char)uVar69 -
                            (0xff < (short)uVar69),CONCAT14(cVar33,uVar59));
          cVar34 = (0 < (short)uVar70) * ((short)uVar70 < 0x100) * (char)uVar70 -
                   (0xff < (short)uVar70);
          uVar61 = CONCAT17((0 < (short)uVar71) * ((short)uVar71 < 0x100) * (char)uVar71 -
                            (0xff < (short)uVar71),CONCAT16(cVar34,uVar60));
          cVar35 = (0 < (short)uVar72) * ((short)uVar72 < 0x100) * (char)uVar72 -
                   (0xff < (short)uVar72);
          auVar62._0_10_ =
               CONCAT19((0 < (short)uVar73) * ((short)uVar73 < 0x100) * (char)uVar73 -
                        (0xff < (short)uVar73),CONCAT18(cVar35,uVar61));
          cVar36 = (0 < (short)uVar74) * ((short)uVar74 < 0x100) * (char)uVar74 -
                   (0xff < (short)uVar74);
          auVar62[10] = cVar36;
          auVar62[0xb] = (0 < (short)uVar75) * ((short)uVar75 < 0x100) * (char)uVar75 -
                         (0xff < (short)uVar75);
          cVar37 = (0 < (short)uVar76) * ((short)uVar76 < 0x100) * (char)uVar76 -
                   (0xff < (short)uVar76);
          auVar63[0xc] = cVar37;
          auVar63._0_12_ = auVar62;
          auVar63[0xd] = (0 < (short)uVar77) * ((short)uVar77 < 0x100) * (char)uVar77 -
                         (0xff < (short)uVar77);
          cVar38 = (0 < (short)uVar78) * ((short)uVar78 < 0x100) * (char)uVar78 -
                   (0xff < (short)uVar78);
          auVar64[0xe] = cVar38;
          auVar64._0_14_ = auVar63;
          auVar64[0xf] = (0 < (short)uVar79) * ((short)uVar79 < 0x100) * (char)uVar79 -
                         (0xff < (short)uVar79);
          sVar10 = (short)((uint)uVar59 >> 0x10);
          sVar11 = (short)((uint6)uVar60 >> 0x20);
          sVar12 = (short)((ulonglong)uVar61 >> 0x30);
          sVar13 = (short)((unkuint10)auVar62._0_10_ >> 0x40);
          sVar14 = auVar62._10_2_;
          sVar15 = auVar63._12_2_;
          sVar16 = auVar64._14_2_;
          sVar17 = (short)((uint)uVar81 >> 0x10);
          sVar18 = (short)((uint6)uVar82 >> 0x20);
          sVar19 = (short)((ulonglong)uVar83 >> 0x30);
          sVar20 = (short)((unkuint10)auVar84._0_10_ >> 0x40);
          sVar21 = auVar84._10_2_;
          sVar22 = auVar85._12_2_;
          sVar23 = auVar86._14_2_;
          pcVar2 = pcStack_f0 + lVar52;
          *pcVar2 = (code)((0 < sVar58) * (sVar58 < 0x100) * cVar31 - (0xff < sVar58));
          pcVar2[1] = (code)((0 < sVar10) * (sVar10 < 0x100) * cVar32 - (0xff < sVar10));
          pcVar2[2] = (code)((0 < sVar11) * (sVar11 < 0x100) * cVar33 - (0xff < sVar11));
          pcVar2[3] = (code)((0 < sVar12) * (sVar12 < 0x100) * cVar34 - (0xff < sVar12));
          pcVar2[4] = (code)((0 < sVar13) * (sVar13 < 0x100) * cVar35 - (0xff < sVar13));
          pcVar2[5] = (code)((0 < sVar14) * (sVar14 < 0x100) * cVar36 - (0xff < sVar14));
          pcVar2[6] = (code)((0 < sVar15) * (sVar15 < 0x100) * cVar37 - (0xff < sVar15));
          pcVar2[7] = (code)((0 < sVar16) * (sVar16 < 0x100) * cVar38 - (0xff < sVar16));
          pcVar2[8] = (code)((0 < sVar80) * (sVar80 < 0x100) * cVar51 - (0xff < sVar80));
          pcVar2[9] = (code)((0 < sVar17) * (sVar17 < 0x100) * cVar24 - (0xff < sVar17));
          pcVar2[10] = (code)((0 < sVar18) * (sVar18 < 0x100) * cVar25 - (0xff < sVar18));
          pcVar2[0xb] = (code)((0 < sVar19) * (sVar19 < 0x100) * cVar26 - (0xff < sVar19));
          pcVar2[0xc] = (code)((0 < sVar20) * (sVar20 < 0x100) * cVar27 - (0xff < sVar20));
          pcVar2[0xd] = (code)((0 < sVar21) * (sVar21 < 0x100) * cVar28 - (0xff < sVar21));
          pcVar2[0xe] = (code)((0 < sVar22) * (sVar22 < 0x100) * cVar29 - (0xff < sVar22));
          pcVar2[0xf] = (code)((0 < sVar23) * (sVar23 < 0x100) * cVar30 - (0xff < sVar23));
          lVar52 = lVar52 + 0x10;
        } while (puStack_e0 != (undefined *)lVar52);
      }
      uVar50 = 0;
      do {
        pcStack_f0[(longlong)puStack_e0] = pcVar54[uVar50];
        puStack_e0 = (undefined *)((longlong)puStack_e0 + 1);
        uVar50 = uVar50 + 4;
      } while (uVar48 != uVar50);
    }
    uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar6);
    pcStack_e8 = pcStack_f0;
    pcStack_d8 = (code *)uVar39;
    pdb_142569d40(&pcStack_e8,pbStack_70,uStack_60);
    uVar48 = uStack_60;
    uStack_60 = uVar48;
    if (pcStack_58 != (code *)0x0) {
      pub_1406abac0((byte *)pcStack_f0,uStack_f8,1);
      uStack_60 = uVar48;
    }
  }
  else {
    pcStack_120 = pcStack_58;
    pcStack_110 = (code *)CONCAT44(pcStack_110._4_4_,uVar6 << 2);
    pcStack_e8 = _DAT_143338b00;
    puStack_e0 = (undefined *)_UNK_143338b08;
    pcStack_d8 = (code *)_DAT_1431e6ee0;
    uStack_d0 = _UNK_1431e6ee8;
    bVar53 = bVar55 ^ 1;
    iStack_c8 = (uint)bVar53 + (uint)bVar53;
    iStack_bc = (uint)bVar53 << 2;
    puStack_b0 = (undefined *)CONCAT35(puStack_b0._5_3_,0x100000000);
    uStack_c4 = 0xc;
    uStack_c0 = 8;
    uStack_b8 = 0x200000000;
    puStack_b0 = (undefined *)CONCAT44(puStack_b0._4_4_,4 - (uint)bVar55);
    pcStack_128 = pcVar8;
    puStack_118 = (uint *)uVar83;
    pdb_142569e40(&pcStack_e8,&pcStack_128,pbStack_70,uStack_60);
  }
  *param_1 = uStack_60;
  param_1[1] = (ulonglong)pbStack_70;
  param_1[2] = uStack_60;
  return;
}

