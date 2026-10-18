// VA 0x140ac8910, PDB extent 1412 bytes
// country_core::systems::egui_input::EguiInputResource::on_keyboard_input
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/egui_input.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::egui_input::EguiInputResource::on_keyboard_input
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/egui_input.rs
   Extent: 1412 */

void pdb_140ac8910(longlong param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  char cVar10;
  byte *pbVar11;
  uint uVar12;
  undefined4 *puVar13;
  byte *pbVar14;
  ulonglong uVar15;
  ulonglong unaff_RBX;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined2 uStack_6a;
  undefined2 uStack_68;
  undefined4 uStack_64;
  byte *pbStack_60;
  ulonglong uStack_58;
  undefined8 uStack_50;
  
  uVar7 = *param_2;
  switch(uVar7) {
  case 3:
    bVar3 = *(byte *)(param_2 + 0x13);
    *(byte *)(param_1 + 0xb8) = bVar3 ^ 1;
    break;
  default:
    bVar3 = *(byte *)(param_2 + 0x13);
    break;
  case 6:
    bVar3 = *(byte *)(param_2 + 0x13);
    *(byte *)(param_1 + 0xb9) = bVar3 ^ 1;
    break;
  case 0xb:
    bVar3 = *(byte *)(param_2 + 0x13);
    *(byte *)(param_1 + 0xba) = bVar3 ^ 1;
    break;
  case 0xe:
  case 0x10:
    bVar3 = *(byte *)(param_2 + 0x13);
    *(byte *)(param_1 + 0xbc) = bVar3 ^ 1;
    break;
  case 0x12:
    goto LAB_140ac8da8;
  }
  if (bVar3 == 0) {
    bVar4 = *(byte *)(param_2 + 8);
    unaff_RBX = (ulonglong)bVar4;
    if (unaff_RBX != 0x1b) {
      puVar13 = param_2;
      pbVar11 = (byte *)pdb_140f334c0(param_2 + 8);
      pbVar14 = (byte *)((longlong)puVar13 + (longlong)pbVar11);
      do {
        if (pbVar11 == pbVar14) {
LAB_140ac8aaf:
          cVar10 = '\x01';
          if (0x17 < bVar4) {
            cVar10 = bVar4 - 0x18;
          }
          if (cVar10 == '\0') {
            uVar16 = *(ulonglong *)(param_2 + 0xc);
            if (-1 < (longlong)uVar16) goto LAB_140ac8e09;
            pdb_142dc7e2a(0,uVar16);
          }
          else if (cVar10 == '\x01') {
            uVar16 = unaff_RBX;
            if (bVar4 < 0x18) {
              lVar18 = (longlong)param_2 + 0x21;
              goto joined_r0x000140ac8ada;
            }
            pdb_142dc8420(0,unaff_RBX,0x17,&UNK_14304cfa0);
            goto code_r0x000140ac8de8;
          }
          uVar15 = *(ulonglong *)(param_2 + 10);
          if ((uVar15 < 0x21) && (*(ulonglong *)(param_2 + 0xc) < 0x81)) {
            uVar16 = *(ulonglong *)(param_2 + 0xc) + uVar15;
            lVar18 = (longlong)&UNK_14304d030 - uVar15;
            if (uVar16 != 0) goto LAB_140ac8adc;
            goto LAB_140ac8b56;
          }
          goto LAB_140ac8db9;
        }
        bVar5 = *pbVar11;
        uVar12 = (uint)bVar5;
        if ((char)bVar5 < '\0') {
          pbVar1 = pbVar11 + 1;
          if (bVar5 < 0xe0) {
            pbVar11 = pbVar11 + 2;
            uVar12 = (uVar12 & 0x1f) << 6 | *pbVar1 & 0x3f;
          }
          else {
            uVar17 = pbVar11[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
            if (bVar5 < 0xf0) {
              pbVar11 = pbVar11 + 3;
              uVar12 = uVar17 | (uVar12 & 0x1f) << 0xc;
            }
            else {
              uVar12 = pbVar11[3] & 0x3f | uVar17 << 6 | (uVar12 & 7) << 0x12;
              if (uVar12 == 0x110000) goto LAB_140ac8aaf;
              pbVar11 = pbVar11 + 4;
            }
          }
        }
        else {
          pbVar11 = pbVar11 + 1;
        }
      } while ((0x1f < uVar12) && (0x20 < uVar12 - 0x7f));
    }
  }
LAB_140ac8bac:
  uVar16 = CONCAT71((int7)(unaff_RBX >> 8),0x67);
  cVar10 = 'g';
  switch(uVar7) {
  case 0:
    bVar4 = *(byte *)(param_2 + 2);
    uVar15 = (ulonglong)bVar4;
    cVar10 = '\x01';
    if (0x17 < uVar15) {
      cVar10 = bVar4 - 0x18;
    }
    if (cVar10 != '\0') {
      if (cVar10 != '\x01') {
        uVar8 = *(ulonglong *)(param_2 + 4);
        if ((0x20 < uVar8) || (0x80 < *(ulonglong *)(param_2 + 6))) {
LAB_140ac8db9:
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_14304cfb8,0x3e,&UNK_14304cff8);
        }
        uVar15 = *(ulonglong *)(param_2 + 6) + uVar8;
        lVar18 = (longlong)&UNK_14304d030 - uVar8;
        goto code_r0x000140ac8d11;
      }
      if (bVar4 < 0x18) {
        lVar18 = (longlong)param_2 + 9;
        goto code_r0x000140ac8d11;
      }
code_r0x000140ac8de8:
      pdb_142dc8420(0);
      do {
        pdb_142dc7e2a(1,uVar16);
LAB_140ac8e09:
        lVar18 = *(longlong *)(param_2 + 10) + 0x10;
joined_r0x000140ac8ada:
        if (uVar16 == 0) goto LAB_140ac8b56;
LAB_140ac8adc:
        pdb_14007ee60();
        pbStack_60 = pub_1406abab0(uVar16,1);
      } while (pbStack_60 == (byte *)0x0);
      pub_142e32760(pbStack_60,lVar18,uVar16);
      goto LAB_140ac8b5c;
    }
    uVar15 = *(ulonglong *)(param_2 + 6);
    lVar18 = *(longlong *)(param_2 + 4) + 0x10;
code_r0x000140ac8d11:
    cVar10 = pdb_140d4df70(lVar18,uVar15);
    break;
  case 0x11:
    cVar10 = '\a';
    break;
  case 0x12:
    cVar10 = '\x05';
    break;
  case 0x13:
    cVar10 = '\b';
    break;
  case 0x14:
    cVar10 = '\0';
    break;
  case 0x15:
    cVar10 = '\x01';
    break;
  case 0x16:
    cVar10 = '\x02';
    break;
  case 0x17:
    cVar10 = '\x03';
    break;
  case 0x18:
    cVar10 = '\f';
    break;
  case 0x19:
    cVar10 = '\v';
    break;
  case 0x1a:
    cVar10 = '\x0e';
    break;
  case 0x1b:
    cVar10 = '\r';
    break;
  case 0x1c:
    cVar10 = '\x06';
    break;
  case 0x21:
    cVar10 = '\n';
    break;
  case 0x24:
    cVar10 = '\t';
    break;
  case 0x2d:
    cVar10 = '\x04';
    break;
  case 0x112:
    cVar10 = 'D';
    break;
  case 0x113:
    cVar10 = 'E';
    break;
  case 0x114:
    cVar10 = 'F';
    break;
  case 0x115:
    cVar10 = 'G';
    break;
  case 0x116:
    cVar10 = 'H';
    break;
  case 0x117:
    cVar10 = 'I';
    break;
  case 0x118:
    cVar10 = 'J';
    break;
  case 0x119:
    cVar10 = 'K';
    break;
  case 0x11a:
    cVar10 = 'L';
    break;
  case 0x11b:
    cVar10 = 'M';
    break;
  case 0x11c:
    cVar10 = 'N';
    break;
  case 0x11d:
    cVar10 = 'O';
    break;
  case 0x11e:
    cVar10 = 'P';
    break;
  case 0x11f:
    cVar10 = 'Q';
    break;
  case 0x120:
    cVar10 = 'R';
    break;
  case 0x121:
    cVar10 = 'S';
    break;
  case 0x122:
    cVar10 = 'T';
    break;
  case 0x123:
    cVar10 = 'U';
    break;
  case 0x124:
    cVar10 = 'V';
    break;
  case 0x125:
    cVar10 = 'W';
  }
  if ((byte)(*(char *)(param_2 + 0x10) + 0x6aU) < 0xde) {
    uVar16 = (ulonglong)(byte)(&UNK_14304d0d8)[(byte)(*(char *)(param_2 + 0x10) + 0x6aU)];
  }
  if (cVar10 == 'g') {
    cVar10 = (char)uVar16;
  }
  if (cVar10 != 'g') {
    uVar6 = *(undefined1 *)(param_1 + 0xbc);
    uStack_6a = (undefined2)*(undefined4 *)(param_1 + 0xb8);
    uStack_68 = (undefined2)((uint)*(undefined4 *)(param_1 + 0xb8) >> 0x10);
    uStack_64 = CONCAT31(uStack_64._1_3_,(char)uVar16);
    lVar18 = *(longlong *)(param_1 + 0x30);
    if (lVar18 == *(longlong *)(param_1 + 0x20)) {
      pdb_142d7ede0(param_1 + 0x20);
    }
    lVar9 = *(longlong *)(param_1 + 0x28);
    *(undefined8 *)(lVar9 + 0x20 + lVar18 * 0x28) = uStack_50;
    puVar2 = (undefined8 *)(lVar9 + 0x10 + lVar18 * 0x28);
    *puVar2 = pbStack_60;
    puVar2[1] = uStack_58;
    puVar2 = (undefined8 *)(lVar9 + lVar18 * 0x28);
    *puVar2 = CONCAT26(uStack_6a,(uint6)(CONCAT14(bVar3,6) ^ 0x100000000));
    puVar2[1] = CONCAT44(uStack_64,CONCAT13(cVar10,CONCAT12(uVar6,uStack_68)));
    *(longlong *)(param_1 + 0x30) = lVar18 + 1;
  }
LAB_140ac8da8:
  return;
LAB_140ac8b56:
  pbStack_60 = (byte *)0x1;
LAB_140ac8b5c:
  uStack_64 = (undefined4)(uVar16 >> 0x20);
  lVar18 = *(longlong *)(param_1 + 0x30);
  if (lVar18 == *(longlong *)(param_1 + 0x20)) {
    pdb_142d7ede0(param_1 + 0x20);
  }
  lVar9 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(lVar9 + 0x20 + lVar18 * 0x28) = uStack_50;
  puVar2 = (undefined8 *)(lVar9 + 0x10 + lVar18 * 0x28);
  *puVar2 = pbStack_60;
  puVar2[1] = uVar16;
  puVar13 = (undefined4 *)(lVar9 + lVar18 * 0x28);
  *puVar13 = 5;
  puVar13[1] = CONCAT22(uStack_6a,CONCAT11(uStack_6b,uStack_6c));
  puVar13[2] = (int)uVar16;
  puVar13[3] = uStack_64;
  unaff_RBX = lVar18 + 1;
  *(ulonglong *)(param_1 + 0x30) = unaff_RBX;
  uStack_58 = uVar16;
  goto LAB_140ac8bac;
}

