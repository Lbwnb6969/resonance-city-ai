// VA 0x14068c950, PDB extent 1774 bytes
// tiny_glade::gui::settings::do_gui_escape_menu_settings::closure$2
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x00014068ce66) overlaps instruction at (ram,0x00014068ce65)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::gui::settings::do_gui_escape_menu_settings::closure$2
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/settings.rs
   Extent: 1774 */

void pdb_14068c950(undefined8 *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined8 ******ppppppuVar2;
  undefined8 ******arg0;
  longlong lVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  ulonglong uVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined8 *******pppppppuVar23;
  longlong lVar24;
  uint *puVar25;
  uint uVar26;
  int iVar27;
  undefined *puVar28;
  uint *puVar29;
  undefined1 auStack_1a8 [32];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  ulonglong uStack_140;
  byte bStack_138;
  undefined7 uStack_137;
  undefined *puStack_130;
  undefined8 *******pppppppuStack_128;
  undefined1 auStack_120 [128];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  byte *pbStack_88;
  longlong lStack_80;
  uint *puStack_78;
  undefined *puStack_70;
  uint *puStack_68;
  undefined8 uStack_60;
  
  puVar21 = auStack_1a8;
  pppppppuVar23 = &pppppppuStack_128;
  uStack_60 = 0xfffffffffffffffe;
  uStack_a0 = param_2;
  puStack_90 = param_1;
  pdb_14007ee60();
  puStack_68 = (uint *)pub_1406abab0(0x78,8);
  if (puStack_68 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x78);
  }
  uVar15 = 0x13;
  uVar8 = pdb_140dc6290(&UNK_142f957a9);
  uVar16 = 0x13;
  pbStack_88 = (byte *)uVar15;
  uVar15 = pdb_140dc6290(&UNK_142f957bc);
  uVar17 = 0x12;
  uVar9 = pdb_140dc6290(&UNK_142f957cf);
  uVar18 = 0x10;
  uVar10 = pdb_140dc6290(&UNK_142f957e1);
  uVar19 = 0x16;
  uVar11 = pdb_140dc6290(&UNK_142f957f1);
  *(undefined8 *)puStack_68 = uVar8;
  *(byte **)(puStack_68 + 2) = pbStack_88;
  *(undefined1 *)(puStack_68 + 4) = 3;
  *(undefined8 *)(puStack_68 + 6) = uVar15;
  *(undefined8 *)(puStack_68 + 8) = uVar16;
  *(undefined1 *)(puStack_68 + 10) = 0;
  *(undefined8 *)(puStack_68 + 0xc) = uVar9;
  *(undefined8 *)(puStack_68 + 0xe) = uVar17;
  *(undefined1 *)(puStack_68 + 0x10) = 5;
  *(undefined8 *)(puStack_68 + 0x12) = uVar10;
  *(undefined8 *)(puStack_68 + 0x14) = uVar18;
  *(undefined1 *)(puStack_68 + 0x16) = 6;
  *(undefined8 *)(puStack_68 + 0x18) = uVar11;
  *(undefined8 *)(puStack_68 + 0x1a) = uVar19;
  *(undefined1 *)(puStack_68 + 0x1c) = 9;
  lStack_80 = 5;
  puStack_78 = puStack_68;
  puStack_70 = (undefined *)0x5;
  lVar24 = 5;
  if (DAT_143cb2ba0 != '\0') {
    pdb_142d7e830(&lStack_80);
    *(undefined **)(puStack_78 + 0x1e) = &UNK_142f95807;
    puStack_78[0x20] = 3;
    puStack_78[0x21] = 0;
    *(undefined1 *)(puStack_78 + 0x22) = 8;
    puStack_70 = (undefined *)0x6;
    lVar24 = 6;
    if (lStack_80 != 6) goto LAB_14068caf7;
  }
  pdb_142d7e830(&lStack_80);
LAB_14068caf7:
  lVar3 = (ulonglong)(uint)((int)lVar24 * 8) * 3;
  *(undefined **)((longlong)puStack_78 + lVar3) = &UNK_142f9580a;
  *(undefined8 *)((longlong)puStack_78 + lVar3 + 8) = 5;
  *(undefined1 *)((longlong)puStack_78 + lVar3 + 0x10) = 7;
  uVar4 = _DAT_142f57af0;
  puStack_70 = (undefined *)(lVar24 + 1);
  puVar25 = (uint *)((longlong)puStack_78 + lVar3 + 0x18);
  pbStack_88 = (byte *)*puStack_90;
  uStack_98 = puStack_90[1];
  puVar1 = puStack_78;
  while (puVar29 = puVar1, puVar1 != puVar25) {
    while( true ) {
      pdb_140f5f4f0(&uStack_140,*(undefined8 *)puVar29,*(undefined8 *)(puVar29 + 2));
      puStack_68 = (uint *)CONCAT71(uStack_137,bStack_138);
      puVar28 = puStack_130;
      pdb_1407339e0(auStack_188,uStack_a0);
      pdb_140726290(auStack_170,auStack_188,uVar4);
      pdb_140725ed0(auStack_188,auStack_170,2);
      pdb_140726180(auStack_170,auStack_188,4);
      bVar12 = (byte)puVar29[4];
      bVar6 = *pbStack_88;
      if (*pbStack_88 < 3) {
        bVar6 = 4;
      }
      if (bVar12 < 3) {
        bVar12 = 4;
      }
      pdb_140725e90(auStack_158,auStack_170,bVar6 == bVar12);
      uVar8 = pdb_140725900(auStack_158);
      cVar7 = pdb_140732b50(uVar8);
      puVar1 = puVar29 + 6;
      if (cVar7 == '\0') break;
      if (uStack_140 == 0) {
        bVar12 = (byte)puVar29[4];
        uVar13 = (ulonglong)bVar12;
        uVar26 = (uint)(byte)(bVar12 - 3);
        if (bVar12 < 3) {
          uVar26 = 1;
        }
        bVar6 = 3;
        puVar20 = &UNK_142f958f0 + *(int *)(&UNK_142f958f0 + (ulonglong)uVar26 * 4);
        puVar22 = auStack_1a8;
        bVar5 = 3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(bVar12) {
        case 3:
          goto code_r0x00014068ccf0;
        case 4:
          goto code_r0x00014068cccd;
        case 5:
          goto code_r0x00014068ccd5;
        case 6:
          goto code_r0x00014068ccd9;
        case 7:
          goto code_r0x00014068ccd1;
        case 8:
          goto code_r0x00014068cce1;
        case 9:
          goto code_r0x00014068cce5;
        case 10:
          goto code_r0x00014068ccdd;
        case 0xb:
          goto code_r0x00010a1edd56;
        case 0xc:
          goto code_r0x00014068ce68;
        case 0xd:
          goto code_r0x00014068ce56;
        case 0xe:
          goto code_r0x00014068ce5a;
        case 0xf:
          goto code_r0x00014068ce52;
        case 0x10:
          goto code_r0x00014068ce62;
        case 0x11:
          goto code_r0x00014068ce66;
        default:
          goto code_r0x00014068ce5e;
        }
      }
      pub_1406abac0((byte *)puStack_68,uStack_140,1);
      bVar12 = (byte)puVar29[4];
      uVar13 = (ulonglong)bVar12;
      uVar26 = (uint)(byte)(bVar12 - 3);
      if (bVar12 < 3) {
        uVar26 = 1;
      }
      bVar6 = 3;
      puVar20 = &UNK_142f958f0 + *(int *)(&UNK_142f958f0 + (ulonglong)uVar26 * 4);
      puVar22 = auStack_1a8;
      bVar5 = 3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(bVar12) {
      case 3:
        break;
      case 4:
code_r0x00014068cccd:
        bVar5 = bVar12;
        break;
      case 5:
code_r0x00014068ccd5:
        bVar5 = 5;
        break;
      case 6:
code_r0x00014068ccd9:
        bVar5 = 6;
        break;
      case 7:
code_r0x00014068ccd1:
        bVar5 = 7;
        break;
      case 8:
code_r0x00014068cce1:
        bVar5 = 8;
        break;
      case 9:
code_r0x00014068cce5:
        bVar5 = 9;
        break;
      case 10:
code_r0x00014068ccdd:
        bVar5 = 10;
        break;
      case 0xb:
code_r0x00010a1edd56:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0xc:
        goto code_r0x00014068ce68;
      case 0xd:
code_r0x00014068ce56:
        cRam0000000000000003 = cRam0000000000000003 + '\x03';
        goto code_r0x00014068ce3b;
      case 0xe:
code_r0x00014068ce5a:
        bVar6 = 3;
        *puVar1 = *puVar1 >> 1 | (uint)((*puVar1 & 1) != 0) << 0x1f;
        puVar22 = auStack_1a8;
        goto code_r0x00014068ce5e;
      case 0xf:
code_r0x00014068ce52:
        puVar21 = auStack_120;
        pppppppuVar23 = pppppppuStack_128;
        goto code_r0x00014068ce3b;
      case 0x10:
code_r0x00014068ce62:
        puVar20 = (undefined *)CONCAT71((int7)((ulonglong)puVar20 >> 8),uRam000000000c634805);
code_r0x00014068ce68:
        iVar27 = 0x42f958f0;
        piVar14 = (int *)((ulonglong)bRam0000000000000004 - 1);
        if (piVar14 != (int *)0x0 && (int)puVar1 >> 1 == 0) {
          puVar20 = (undefined *)((ulonglong)puVar20 & 0xffffffff);
          goto code_r0x00014068ce11;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      case 0x11:
code_r0x00014068ce66:
        bVar6 = 3;
        uVar13 = (ulonglong)*(uint *)(puVar20 + uVar13 * 4);
        puVar22 = auStack_1a8;
      default:
        goto code_r0x00014068ce5e;
      }
code_r0x00014068ccf0:
      bStack_138 = bVar5;
      uStack_140 = 7;
      pdb_140a003a0(uStack_98);
      puVar29 = puVar1;
      if (puVar1 == puVar25) goto LAB_14068cd18;
    }
    if (uStack_140 != 0) {
      pub_1406abac0((byte *)puStack_68,uStack_140,1);
    }
  }
LAB_14068cd18:
  if (puStack_70 != (undefined *)0x0) {
    bVar12 = *pbStack_88;
    if (*pbStack_88 < 3) {
      bVar12 = 4;
    }
    lVar24 = 0;
    puVar20 = (undefined *)0x0;
    do {
      bVar6 = *(byte *)((longlong)puStack_78 + lVar24 + 0x10);
      if (bVar6 < 3) {
        bVar6 = 4;
      }
      if (bVar6 == bVar12) goto LAB_14068cd81;
      puVar20 = puVar20 + 1;
      lVar24 = lVar24 + 0x18;
    } while ((longlong)puStack_70 * 0x18 != lVar24);
  }
  puVar20 = (undefined *)0x0;
LAB_14068cd81:
  piVar14 = (int *)puStack_90[2];
  iVar27 = *piVar14;
  puVar22 = auStack_1a8;
  if (iVar27 != 0) {
    if (iVar27 < 1) {
      iVar27 = iVar27 + 1;
      do {
        puVar28 = puStack_70;
        if (puStack_70 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8510(&UNK_142f95828);
        }
code_r0x00014068ce11:
        puVar20 = puVar20 + (longlong)puVar28 + -1;
        if (((ulonglong)puVar20 | (ulonglong)puVar28) >> 0x20 == 0) {
          puVar20 = (undefined *)
                    (((ulonglong)puVar20 & 0xffffffff) % ((ulonglong)puVar28 & 0xffffffff));
        }
        else {
          puVar20 = (undefined *)((ulonglong)puVar20 % (ulonglong)puVar28);
        }
        *piVar14 = iVar27;
        iVar27 = iVar27 + 1;
      } while (iVar27 != 1);
    }
    else {
      uVar26 = iVar27 + 1;
      do {
        if (puStack_70 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8510(&UNK_142f95840);
        }
        puVar20 = puVar20 + 1;
        if (((ulonglong)puVar20 | (ulonglong)puStack_70) >> 0x20 == 0) {
          puVar20 = (undefined *)
                    (((ulonglong)puVar20 & 0xffffffff) % ((ulonglong)puStack_70 & 0xffffffff));
        }
        else {
          puVar20 = (undefined *)((ulonglong)puVar20 % (ulonglong)puStack_70);
        }
        *piVar14 = uVar26 - 2;
        uVar26 = uVar26 - 1;
      } while (1 < uVar26);
    }
    puVar21 = auStack_1a8;
    if (puStack_70 <= puVar20) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(puVar20,puStack_70,&UNK_142f95810);
    }
code_r0x00014068ce3b:
    bVar6 = *(byte *)(pppppppuVar23[0x16] + (longlong)puVar20 * 3 + 2);
    bVar12 = 1;
    if (2 < bVar6) {
      bVar12 = bVar6 - 3;
    }
    uVar13 = (ulonglong)bVar12;
    puVar22 = puVar21;
code_r0x00014068ce5e:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch(&UNK_142f95910 + *(int *)(&UNK_142f95910 + uVar13 * 4)) {
    case (undefined *)0x14068ce6e:
      bVar6 = 3;
      break;
    case (undefined *)0x14068ce72:
      bVar6 = 7;
      break;
    case (undefined *)0x14068ce76:
      bVar6 = 5;
      break;
    case (undefined *)0x14068ce7a:
      bVar6 = 6;
      break;
    case (undefined *)0x14068ce7e:
      bVar6 = 10;
      break;
    case (undefined *)0x14068ce82:
      bVar6 = 8;
      break;
    case (undefined *)0x14068ce86:
      bVar6 = 9;
    }
    *(byte *)(pppppppuVar23 + -2) = bVar6;
    pppppppuVar23[-3] = (undefined8 ******)0x7;
    ppppppuVar2 = pppppppuVar23[0x12];
    *(undefined8 *)(puVar22 + -8) = 0x14068cea3;
    pdb_140a003a0(ppppppuVar2,pppppppuVar23 + -3);
  }
  ppppppuVar2 = pppppppuVar23[0x15];
  if (ppppppuVar2 != (undefined8 ******)0x0) {
    arg0 = pppppppuVar23[0x16];
    *(undefined8 *)(puVar22 + -8) = 0x14068ceca;
    pub_1406abac0((byte *)arg0,(longlong)ppppppuVar2 * 0x18,8);
  }
  return;
}

