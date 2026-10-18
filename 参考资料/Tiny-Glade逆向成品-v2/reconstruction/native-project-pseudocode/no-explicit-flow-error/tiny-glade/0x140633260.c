// VA 0x140633260, PDB extent 2806 bytes
// ron::parse::Parser::float<f32>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: ron::parse::Parser::float<f32>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 2806 */

char * pdb_140633260(char *param_1,undefined8 *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 uVar10;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  char *pcVar17;
  byte bVar18;
  byte bVar19;
  byte *pbVar20;
  byte *pbVar21;
  undefined8 uVar22;
  byte *pbVar23;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar24;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  byte *pbStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined1 uStack_94;
  undefined2 uStack_93;
  undefined1 uStack_91;
  byte *pbStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  byte *pbStack_70;
  byte *pbStack_68;
  char *pcStack_60;
  undefined8 *puStack_58;
  uint uStack_4c;
  undefined8 uStack_48;
  undefined4 *puVar11;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar16 = (undefined8 *)0x18;
  pcStack_60 = param_1;
  puStack_58 = param_2;
  do {
    puVar15 = puStack_58;
    pcVar17 = pcStack_60;
    pbVar7 = (byte *)puVar16[0x285f13de];
    pbVar23 = (byte *)puVar16[0x285f13df];
    pbVar14 = pbVar7;
    cVar3 = pdb_140dcf030(puStack_58,pbVar7,pbVar23);
    if (cVar3 != '\0') {
      pdb_140dd5530(pcVar17,pbVar7,pbVar23);
      return pcVar17;
    }
    pbVar6 = (byte *)pdb_140dd3680(puVar15);
    if (((pbVar23 <= pbVar14) &&
        (pbVar13 = pbVar6, iVar4 = pub_142e32750(pbVar7,pbVar6,pbVar23), puVar15 = puStack_58,
        iVar4 == 0)) && (2 < (ulonglong)((longlong)pbVar14 - (longlong)pbVar23))) {
      if ((pbVar6 + 2)[(longlong)pbVar23] != 0x32 ||
          *(short *)(pbVar6 + (longlong)pbVar23) != 0x3366) {
LAB_1406333cb:
        if ((pbVar6 + 2)[(longlong)pbVar23] != 0x34 ||
            *(short *)(pbVar6 + (longlong)pbVar23) != 0x3666) goto LAB_1406333f0;
        pbVar7 = pbVar23 + 3;
        if (pbVar7 != pbVar14) {
          bVar19 = (pbVar6 + 3)[(longlong)pbVar23];
          uVar5 = (uint)bVar19;
          pbVar14 = pbVar7;
          if ((char)bVar19 < '\0') {
            if (bVar19 < 0xe0) {
              uVar5 = (uVar5 & 0x1f) << 6 | (pbVar6 + 4)[(longlong)pbVar23] & 0x3f;
            }
            else {
              uVar12 = (pbVar6 + 5)[(longlong)pbVar23] & 0x3f |
                       ((pbVar6 + 4)[(longlong)pbVar23] & 0x3f) << 6;
              if (bVar19 < 0xf0) {
                uVar5 = uVar12 | (uVar5 & 0x1f) << 0xc;
              }
              else {
                uVar5 = (uVar5 & 7) << 0x12;
                pbVar13 = (byte *)(ulonglong)uVar5;
                uVar5 = (pbVar6 + 6)[(longlong)pbVar23] & 0x3f | uVar12 << 6 | uVar5;
                if (uVar5 == 0x110000) goto LAB_140633c58;
              }
            }
            if (uVar5 < 0x80) goto LAB_14063329f;
            pbVar7 = (byte *)((ulonglong)(uVar5 >> 9) + _DAT_143ca4a60);
            if (0xe01ff < uVar5) {
              pbVar7 = &UNK_142f89e68;
            }
            bVar19 = _DAT_143ca4a70[(ulonglong)(uVar5 >> 3 & 0x3f) + (ulonglong)*pbVar7 * 0x20] >>
                     ((byte)uVar5 & 7);
          }
          else {
LAB_14063329f:
            bVar19 = *(byte *)(_DAT_143ca4a68 + (ulonglong)uVar5);
          }
          pbVar13 = (byte *)(ulonglong)bVar19;
          if ((bVar19 & 1) != 0) goto LAB_1406333f0;
        }
LAB_140633c58:
        lVar9 = pdb_140dd3680(puStack_58);
        pcVar17 = pcStack_60;
        if (pbVar14 == (byte *)0x0) {
          if (lVar9 != 0) goto LAB_140633c7b;
        }
        else if (pbVar14 < pbVar13) {
          if (-0x41 < (char)pbVar14[lVar9]) {
LAB_140633c7b:
            puVar15[8] = puVar15[5];
            puVar15[6] = puVar15[3];
            puVar15[7] = puVar15[4];
            puVar15[3] = pbVar14 + puVar15[3];
            pbStack_d8 = (byte *)puVar16[0x285f13e1];
            uStack_e0 = 1;
            pdb_140dd53e0(pcStack_60,&uStack_e0,lVar9,pbVar14);
            return pcVar17;
          }
        }
        else if (lVar9 != 0 && pbVar14 == pbVar13) goto LAB_140633c7b;
        pdb_142dc8070(lVar9);
        goto LAB_140633ce6;
      }
      pbVar7 = pbVar23 + 3;
      pbVar20 = pbVar14;
      if (pbVar7 != pbVar14) {
        bVar19 = (pbVar6 + 3)[(longlong)pbVar23];
        pbVar21 = (byte *)(ulonglong)bVar19;
        pbVar20 = pbVar7;
        if ((char)bVar19 < '\0') {
          uVar5 = bVar19 & 0x1f;
          if (bVar19 < 0xe0) {
            uVar12 = uVar5 << 6 | (pbVar6 + 4)[(longlong)pbVar23] & 0x3f;
LAB_1406333aa:
            pbVar21 = (byte *)(ulonglong)uVar12;
          }
          else {
            uVar12 = (pbVar6 + 5)[(longlong)pbVar23] & 0x3f |
                     ((pbVar6 + 4)[(longlong)pbVar23] & 0x3f) << 6;
            if (0xef < bVar19) {
              uVar12 = uVar12 << 6;
              pbVar13 = (byte *)(ulonglong)uVar12;
              uVar12 = (pbVar6 + 6)[(longlong)pbVar23] & 0x3f | uVar12 | (bVar19 & 7) << 0x12;
              if (uVar12 == 0x110000) goto LAB_140633a2e;
              goto LAB_1406333aa;
            }
            uVar12 = uVar12 | uVar5 << 0xc;
            pbVar21 = (byte *)(ulonglong)uVar12;
            pbVar13 = pbVar21;
          }
          if (uVar12 < 0x80) goto LAB_1406333b6;
          pbVar7 = (byte *)(((ulonglong)pbVar21 >> 9) + _DAT_143ca4a60);
          if (0xe01ff < (uint)pbVar21) {
            pbVar7 = &UNK_142f89e68;
          }
          bVar19 = _DAT_143ca4a70
                   [(ulonglong)((uint)((ulonglong)pbVar21 >> 3) & 0x3f) + (ulonglong)*pbVar7 * 0x20]
                   >> ((byte)pbVar21 & 7);
          pbVar13 = _DAT_143ca4a70;
        }
        else {
LAB_1406333b6:
          bVar19 = pbVar21[_DAT_143ca4a68];
        }
        if ((bVar19 & 1) != 0) goto LAB_1406333cb;
      }
LAB_140633a2e:
      lVar9 = pdb_140dd3680(puStack_58);
      pcVar17 = pcStack_60;
      if (pbVar20 == (byte *)0x0) {
        if (lVar9 != 0) goto LAB_140633a5a;
      }
      else if (pbVar20 < pbVar13) {
        if (-0x41 < (char)pbVar20[lVar9]) {
LAB_140633a5a:
          puVar15[8] = puVar15[5];
          puVar15[6] = puVar15[3];
          puVar15[7] = puVar15[4];
          puVar15[3] = pbVar20 + puVar15[3];
          uStack_dc = *(undefined4 *)(puVar16 + 0x285f13e0);
          uStack_e0 = 0;
          pdb_140dd53e0(pcStack_60,&uStack_e0,lVar9,pbVar20);
          return pcVar17;
        }
      }
      else if (lVar9 != 0 && pbVar20 == pbVar13) goto LAB_140633a5a;
      uVar24 = pdb_142dc8070(lVar9);
      goto LAB_140633ac2;
    }
LAB_1406333f0:
    puVar15 = puStack_58;
    pcVar17 = pcStack_60;
    puVar16 = puVar16 + 4;
  } while (puVar16 != (undefined8 *)0xd8);
  pbVar7 = (byte *)pdb_140dd1cf0(puStack_58,pdb_140631920);
  if (pbVar7 == (byte *)0x0) {
    *pcVar17 = '\f';
    return pcVar17;
  }
  cVar3 = pdb_140dccd90(puVar15,0x5f);
  if (cVar3 != '\0') {
    *pcVar17 = '#';
    return pcVar17;
  }
  if (-1 < (longlong)pbVar7) goto LAB_1406335c8;
  uVar22 = 0;
  do {
    pdb_142dc7e2a(uVar22,pbVar7);
LAB_1406335c8:
    pdb_14007ee60();
    uVar22 = 1;
    pbVar14 = (byte *)0x1;
    pbVar6 = pub_1406abab0((ulonglong)pbVar7,1);
  } while (pbVar6 == (byte *)0x0);
  pbStack_68 = (byte *)0x0;
  pbStack_80 = pbVar7;
  pbStack_78 = pbVar7;
  pbStack_70 = pbVar6;
  pbVar7 = (byte *)pdb_140dd3680(puVar15);
  if (pbStack_80 < pbVar14) {
    if ((char)pbVar7[(longlong)pbStack_80] < -0x40) {
LAB_14063397c:
      pdb_142dc8070(pbVar7);
      goto LAB_140633d04;
    }
  }
  else if (pbVar7 == (byte *)0x0 || pbStack_80 != pbVar14) goto LAB_14063397c;
  pbStack_88 = pbVar7 + (longlong)pbStack_80;
  pbVar23 = (byte *)0x0;
  uStack_4c = 0;
  pbVar13 = (byte *)0x0;
  while (pbVar7 != pbStack_88) {
    bVar19 = *pbVar7;
    uVar5 = (uint)bVar19;
    if ((char)bVar19 < '\0') {
      uVar12 = pbVar7[1] & 0x3f;
      pbVar14 = (byte *)(ulonglong)uVar12;
      if (bVar19 < 0xe0) {
        pbVar20 = pbVar7 + 2;
        uVar5 = (uVar5 & 0x1f) << 6 | uVar12;
      }
      else {
        pbVar14 = (byte *)(ulonglong)(uVar12 << 6);
        uVar12 = pbVar7[2] & 0x3f | uVar12 << 6;
        if (bVar19 < 0xf0) {
          pbVar20 = pbVar7 + 3;
          uVar5 = uVar12 | (uVar5 & 0x1f) << 0xc;
        }
        else {
          pbVar20 = pbVar7 + 4;
          uVar5 = pbVar7[3] & 0x3f | uVar12 << 6 | (uVar5 & 7) << 0x12;
          pbVar14 = (byte *)(ulonglong)uVar5;
        }
      }
    }
    else {
      pbVar20 = pbVar7 + 1;
    }
    pbVar7 = pbVar20 + ((longlong)pbVar13 - (longlong)pbVar7);
    pbVar21 = (byte *)0x1;
    bVar2 = true;
    if (uVar5 < 0x5f) {
      if (uVar5 != 0x2e) {
        if (uVar5 != 0x45) goto LAB_1406337f8;
        goto LAB_140633810;
      }
LAB_14063381d:
      uStack_4c = 0;
    }
    else {
      if (uVar5 != 0x65) {
        if (uVar5 == 0x5f) {
          if ((uStack_4c & 1) == 0) {
            puStack_58[8] = puStack_58[5];
            puStack_58[6] = puStack_58[3];
            puStack_58[7] = puStack_58[4];
            puStack_58[3] = pbVar13 + puStack_58[3];
            *pcVar17 = '\r';
            goto LAB_140633bd0;
          }
          do {
            while( true ) {
              pbVar13 = pbVar20;
              if (pbVar13 == pbStack_88) goto LAB_14063392a;
              bVar19 = *pbVar13;
              uVar5 = (uint)bVar19;
              pbVar14 = pbVar13;
              if ((char)bVar19 < '\0') break;
              pbVar20 = pbVar13 + 1;
              pbVar7 = pbVar20 + ((longlong)pbVar7 - (longlong)pbVar13);
joined_r0x0001406337de:
              if (uVar5 != 0x5f) goto LAB_1406337e4;
            }
            if (0xdf < bVar19) {
              uVar12 = pbVar13[2] & 0x3f | (pbVar13[1] & 0x3f) << 6;
              if (bVar19 < 0xf0) {
                pbVar20 = pbVar13 + 3;
                uVar5 = uVar12 | (uVar5 & 0x1f) << 0xc;
                pbVar7 = pbVar20 + ((longlong)pbVar7 - (longlong)pbVar13);
              }
              else {
                pbVar20 = pbVar13 + 4;
                uVar5 = pbVar13[3] & 0x3f | uVar12 << 6 | (uVar5 & 7) << 0x12;
                pbVar7 = pbVar20 + ((longlong)pbVar7 - (longlong)pbVar13);
              }
              goto joined_r0x0001406337de;
            }
            pbVar20 = pbVar13 + 2;
            uVar5 = (uVar5 & 0x1f) << 6 | pbVar13[1] & 0x3f;
            pbVar7 = pbVar20 + ((longlong)pbVar7 - (longlong)pbVar13);
          } while (uVar5 == 0x5f);
LAB_1406337e4:
          if (uVar5 == 0x2e) goto LAB_14063381d;
          if ((uVar5 == 0x45) || (uVar5 == 0x65)) goto LAB_140633810;
          uStack_4c = (uint)CONCAT71((int7)((ulonglong)pbVar13 >> 8),1);
        }
LAB_1406337f8:
        if (9 < uVar5 - 0x30) {
          if (0x7f < uVar5) {
            if (uVar5 < 0x800) {
              pbVar21 = (byte *)0x2;
            }
            else {
              pbVar21 = (byte *)(4 - (ulonglong)(uVar5 < 0x10000));
            }
            bVar2 = false;
          }
          goto LAB_14063382a;
        }
      }
LAB_140633810:
      uStack_4c = (uint)CONCAT71((int7)((ulonglong)pbVar7 >> 8),1);
    }
LAB_14063382a:
    pbVar14 = pbStack_78 + -(longlong)pbVar23;
    if (pbVar14 < pbVar21) {
      pbVar14 = pbVar23;
      pdb_142d7f1b0(&pbStack_78,pbVar23,pbVar21,1,1);
      pbVar6 = pbStack_70;
      if (bVar2) goto LAB_140633640;
LAB_140633846:
      bVar19 = (byte)uVar5 & 0x3f | 0x80;
      if (uVar5 < 0x800) {
        pbVar14 = (byte *)((ulonglong)(uVar5 >> 6) | 0xc0);
        pbVar6[(longlong)pbStack_68] = (byte)pbVar14;
        (pbVar6 + 1)[(longlong)pbStack_68] = bVar19;
      }
      else {
        pbVar14 = (byte *)((ulonglong)(uVar5 >> 6) & 0xffffffffffffff3f | 0x80);
        bVar18 = (byte)(uVar5 >> 0xc);
        if (uVar5 < 0x10000) {
          pbVar6[(longlong)pbStack_68] = bVar18 | 0xe0;
          (pbVar6 + 1)[(longlong)pbStack_68] = (byte)pbVar14;
          (pbVar6 + 2)[(longlong)pbStack_68] = bVar19;
        }
        else {
          pbVar6[(longlong)pbStack_68] = (byte)(uVar5 >> 0x12) | 0xf0;
          (pbVar6 + 1)[(longlong)pbStack_68] = bVar18 & 0x3f | 0x80;
          (pbVar6 + 2)[(longlong)pbStack_68] = (byte)pbVar14;
          (pbVar6 + 3)[(longlong)pbStack_68] = bVar19;
        }
      }
    }
    else {
      pbStack_68 = pbVar23;
      if (!bVar2) goto LAB_140633846;
LAB_140633640:
      pbVar6[(longlong)pbStack_68] = (byte)uVar5;
    }
    pbVar23 = pbVar23 + (longlong)pbVar21;
    pbVar13 = pbVar7;
    pbVar7 = pbVar20;
    pbStack_68 = pbVar23;
  }
LAB_14063392a:
  lVar9 = pdb_140dd3680(puStack_58);
  if (pbStack_80 < pbVar14) {
    if (-0x41 < (char)pbStack_80[lVar9]) {
LAB_1406339a2:
      if ((pbVar14 == pbStack_80) || (pbStack_80[lVar9] != 0x66)) {
LAB_140633b30:
        pbVar7 = pbStack_70;
        pdb_140dd5530(&uStack_e0,pbStack_70,pbVar23);
        if ((char)uStack_e0 == '2') {
          puStack_58[8] = puStack_58[5];
          puStack_58[6] = puStack_58[3];
          puStack_58[7] = puStack_58[4];
          puStack_58[3] = pbStack_80 + puStack_58[3];
          *(undefined4 *)(pcVar17 + 4) = uStack_dc;
          *pcVar17 = '2';
          if (pbStack_78 == (byte *)0x0) {
            return pcVar17;
          }
          pub_1406abac0(pbVar7,(ulonglong)pbStack_78,1);
          return pcVar17;
        }
        pcVar17[3] = uStack_e0._3_1_;
        *(undefined2 *)(pcVar17 + 1) = uStack_e0._1_2_;
        *(undefined8 *)(pcVar17 + 0x18) = uStack_c8;
        *(undefined8 *)(pcVar17 + 0x20) = uStack_c0;
        *(undefined8 *)(pcVar17 + 0x28) = uStack_b8;
        *(undefined8 *)(pcVar17 + 0x30) = uStack_b0;
        *(undefined8 *)(pcVar17 + 0x38) = uStack_a8;
        *(undefined8 *)(pcVar17 + 0x40) = uStack_a0;
        *(byte **)(pcVar17 + 8) = pbStack_d8;
        *(undefined8 *)(pcVar17 + 0x10) = uStack_d0;
        *pcVar17 = (char)uStack_e0;
        *(undefined4 *)(pcVar17 + 4) = uStack_dc;
      }
      else {
        pbVar6 = (byte *)puStack_58[3];
        uStack_f8 = puStack_58[4];
        uStack_f0 = puStack_58[5];
        uVar24 = *(undefined4 *)(puStack_58 + 3);
        *(undefined4 *)(puStack_58 + 6) = uVar24;
        *(undefined4 *)((longlong)puStack_58 + 0x34) = *(undefined4 *)((longlong)puStack_58 + 0x1c);
        *(undefined4 *)(puStack_58 + 7) = *(undefined4 *)(puStack_58 + 4);
        *(undefined4 *)((longlong)puStack_58 + 0x3c) = *(undefined4 *)((longlong)puStack_58 + 0x24);
        puStack_58[8] = puStack_58[5];
        puStack_58[3] = pbStack_80 + (longlong)pbVar6;
        cVar3 = pdb_140dcf030(uVar24,&UNK_142f89fc8);
        puVar15 = puStack_58 + 3;
        puVar16 = puStack_58 + 4;
        uVar24 = extraout_XMM0_Da;
        if (cVar3 == '\0') {
LAB_140633ac2:
          cVar3 = pdb_140dcf030(uVar24,&UNK_142f89fe8,3);
          if (cVar3 == '\0') {
            *puVar15 = pbVar6;
            *(undefined4 *)puVar16 = (undefined4)uStack_f8;
            *(undefined4 *)((longlong)puVar16 + 4) = uStack_f8._4_4_;
            *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_f0;
            *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_f0._4_4_;
            goto LAB_140633b30;
          }
          puVar11 = &uStack_e0;
          uVar5 = pdb_140f706e0(puVar11,pbStack_70,pbVar23);
          uVar10 = SUB81(puVar11,0);
          if ((char)uStack_e0 != '\x01') {
            uStack_98 = 1;
            pbVar23 = pbStack_d8;
            goto LAB_140633bfb;
          }
        }
        else {
          uVar8 = pdb_140f6f160(pbStack_70);
          if ((uVar8 & 1) == 0) {
            uVar10 = (undefined1)(uVar8 >> 0x20);
            uVar5 = (uint)(uVar8 >> 0x28);
            uStack_98 = 0;
LAB_140633bfb:
            uStack_93 = (undefined2)uVar5;
            uStack_91 = (undefined1)(uVar5 >> 0x10);
            puVar15 = (undefined8 *)*puStack_58;
            pbVar7 = (byte *)puStack_58[1];
            pbVar14 = (byte *)puStack_58[3];
            pbVar13 = pbVar14;
            uStack_94 = uVar10;
            pbStack_90 = pbVar23;
            lVar9 = pdb_140631730(pbVar6,pbVar14,puVar15,pbVar7);
            pcVar17 = pcStack_60;
            pbVar23 = pbVar7;
            if (lVar9 != 0) {
              pdb_140dd53e0(pcStack_60,&uStack_98,lVar9,pbVar13);
              goto LAB_140633bd0;
            }
LAB_140633ce6:
            pdb_142dc8070(puVar15,pbVar23,pbVar6,pbVar14,&UNK_142f8a038);
            goto LAB_140633d04;
          }
        }
        *puVar15 = pbVar6;
        *puVar16 = uStack_f8;
        puVar16[1] = uStack_f0;
        *pcVar17 = '\f';
      }
LAB_140633bd0:
      if (pbStack_78 != (byte *)0x0) {
        pub_1406abac0(pbStack_70,(ulonglong)pbStack_78,1);
      }
      return pcVar17;
    }
  }
  else if (pbStack_80 == pbVar14) goto LAB_1406339a2;
  pdb_142dc8070(lVar9);
LAB_140633d04:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

