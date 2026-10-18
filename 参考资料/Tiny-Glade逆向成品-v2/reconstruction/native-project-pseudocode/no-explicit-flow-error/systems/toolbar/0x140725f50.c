// VA 0x140725f50, PDB extent 490 bytes
// toolbar::mei::widgets::MenuButtonView::hotkey
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::MenuButtonView::hotkey
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 490 */

longlong * pdb_140725f50(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ushort uVar15;
  byte bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong *plStack_80;
  ulonglong uStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  char cStack_60;
  longlong *plStack_58;
  ulonglong uStack_50;
  undefined8 uStack_48;
  
  cVar6 = (char)param_3;
  lVar8 = pdb_14116dd60(param_2);
  *(char *)(lVar8 + 0x25d) = cVar6;
  if (cVar6 == '\x14') {
LAB_14072610c:
    param_1[2] = param_2[2];
    lVar8 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar8;
    return param_1;
  }
  plVar3 = (longlong *)*param_2;
  lVar8 = param_2[1];
  lStack_68 = lVar8;
  cStack_60 = cVar6;
  uVar9 = pdb_141176f40(&lStack_68);
  uVar9 = uVar9 ^ 0xb1695320004fb443;
  uVar11 = uVar9;
  lVar10 = pdb_14072c2d0(plVar3);
  *(undefined1 *)(lVar10 + 0x5e) = 0;
  if ((uVar11 & 1) == 0) {
    lVar10 = plVar3[2];
    if (lVar10 == *plVar3) {
      pdb_142d7f080(plVar3);
    }
    lVar13 = plVar3[1];
    lVar12 = lVar10 * 0x38;
    *(undefined8 *)(lVar13 + lVar12) = 3;
    *(longlong *)(lVar13 + 0x10 + lVar12) = lVar8;
    uVar7 = _UNK_142fa5c58;
    puVar1 = (undefined8 *)(lVar13 + 0x18 + lVar12);
    *puVar1 = _DAT_142fa5c50;
    puVar1[1] = uVar7;
    *(undefined8 *)(lVar13 + 0x28 + lVar12) = _DAT_142e37960;
    *(ulonglong *)(lVar13 + 0x30 + lVar12) = uVar9;
    plVar3[2] = lVar10 + 1;
  }
  uStack_70 = 0;
  plStack_80 = plVar3;
  uStack_78 = uVar9;
  if (plVar3[0x39] != 0) {
    uVar11 = pdb_1400af0a0(plVar3 + 0x3a,&uStack_78);
    lVar10 = plVar3[0x36];
    bVar16 = (byte)(uVar11 >> 0x39);
    auVar17 = ZEXT216(CONCAT11(bVar16,bVar16));
    auVar17 = pshuflw(auVar17,auVar17,0);
    lVar13 = 0;
    while( true ) {
      uVar11 = uVar11 & plVar3[0x37];
      auVar2 = *(undefined1 (*) [16])(lVar10 + uVar11);
      auVar19[0] = -(auVar2[0] == auVar17[0]);
      auVar19[1] = -(auVar2[1] == auVar17[1]);
      auVar19[2] = -(auVar2[2] == auVar17[2]);
      auVar19[3] = -(auVar2[3] == auVar17[3]);
      auVar19[4] = -(auVar2[4] == auVar17[4]);
      auVar19[5] = -(auVar2[5] == auVar17[5]);
      auVar19[6] = -(auVar2[6] == auVar17[6]);
      auVar19[7] = -(auVar2[7] == auVar17[7]);
      auVar19[8] = -(auVar2[8] == auVar17[0]);
      auVar19[9] = -(auVar2[9] == auVar17[1]);
      auVar19[10] = -(auVar2[10] == auVar17[2]);
      auVar19[0xb] = -(auVar2[0xb] == auVar17[3]);
      auVar19[0xc] = -(auVar2[0xc] == auVar17[4]);
      auVar19[0xd] = -(auVar2[0xd] == auVar17[5]);
      auVar19[0xe] = -(auVar2[0xe] == auVar17[6]);
      auVar19[0xf] = -(auVar2[0xf] == auVar17[7]);
      uVar15 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf;
      uVar14 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar14; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar12 = (uVar4 + uVar11 & plVar3[0x37]) * -0xd8;
        if (uVar9 == *(ulonglong *)(lVar10 + -0xd8 + lVar12)) {
          *(undefined4 *)(lVar10 + lVar12 + -0x14) = 0x43480000;
          uStack_48 = uStack_70;
          plStack_58 = plStack_80;
          uStack_50 = uStack_78;
          pdb_141173360(&plStack_80,&plStack_58,lVar8 * 0xcafebabe,param_3);
          goto LAB_14072610c;
        }
        uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
      }
      auVar18[0] = -(auVar2[0] == -1);
      auVar18[1] = -(auVar2[1] == -1);
      auVar18[2] = -(auVar2[2] == -1);
      auVar18[3] = -(auVar2[3] == -1);
      auVar18[4] = -(auVar2[4] == -1);
      auVar18[5] = -(auVar2[5] == -1);
      auVar18[6] = -(auVar2[6] == -1);
      auVar18[7] = -(auVar2[7] == -1);
      auVar18[8] = -(auVar2[8] == -1);
      auVar18[9] = -(auVar2[9] == -1);
      auVar18[10] = -(auVar2[10] == -1);
      auVar18[0xb] = -(auVar2[0xb] == -1);
      auVar18[0xc] = -(auVar2[0xc] == -1);
      auVar18[0xd] = -(auVar2[0xd] == -1);
      auVar18[0xe] = -(auVar2[0xe] == -1);
      auVar18[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar18 >> 7,0) & 1) != 0 || (SUB161(auVar18 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar18 >> 0x17,0) & 1) != 0) || (SUB161(auVar18 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar18 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar18 >> 0x3f,0) & 1) != 0) || (SUB161(auVar18 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar18 >> 0x4f,0) & 1) != 0) || (SUB161(auVar18 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || (SUB161(auVar18 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar18 >> 0x6f,0) & 1) != 0) || (SUB161(auVar18 >> 0x77,0) & 1) != 0) ||
          auVar18[0xf] < '\0') break;
      uVar11 = uVar11 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142fa6b48);
}

