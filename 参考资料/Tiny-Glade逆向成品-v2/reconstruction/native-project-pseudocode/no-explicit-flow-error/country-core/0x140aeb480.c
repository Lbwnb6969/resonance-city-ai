// VA 0x140aeb480, PDB extent 931 bytes
// country_core::systems::ui_clutter::ui_focus_decoclutter::decoclutter_focus_bbx
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_clutter/ui_focus_decoclutter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui_clutter::ui_focus_decoclutter::decoclutter_focus_bbx
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui_clutter/ui_focus_decoclutter.rs
   Extent: 931 */

longlong * pdb_140aeb480(longlong *param_1,longlong param_2,longlong *param_3)

{
  char *pcVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ushort uVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong lStack_50;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  undefined8 uStack_20;
  
  lStack_38 = param_2;
  if (param_3[0x13] != 0) {
    uVar6 = pdb_1417c5550(param_3 + 0x14,&lStack_38);
    lVar9 = param_3[0x10];
    bVar5 = (byte)(uVar6 >> 0x39);
    auVar13 = ZEXT216(CONCAT11(bVar5,bVar5));
    auVar13 = pshuflw(auVar13,auVar13,0);
    lVar8 = 0;
    while( true ) {
      uVar6 = uVar6 & param_3[0x11];
      pcVar1 = (char *)(lVar9 + uVar6);
      auVar17[0] = -(*pcVar1 == auVar13[0]);
      auVar17[1] = -(pcVar1[1] == auVar13[1]);
      auVar17[2] = -(pcVar1[2] == auVar13[2]);
      auVar17[3] = -(pcVar1[3] == auVar13[3]);
      auVar17[4] = -(pcVar1[4] == auVar13[4]);
      auVar17[5] = -(pcVar1[5] == auVar13[5]);
      auVar17[6] = -(pcVar1[6] == auVar13[6]);
      auVar17[7] = -(pcVar1[7] == auVar13[7]);
      auVar17[8] = -(pcVar1[8] == auVar13[0]);
      auVar17[9] = -(pcVar1[9] == auVar13[1]);
      auVar17[10] = -(pcVar1[10] == auVar13[2]);
      auVar17[0xb] = -(pcVar1[0xb] == auVar13[3]);
      auVar17[0xc] = -(pcVar1[0xc] == auVar13[4]);
      auVar17[0xd] = -(pcVar1[0xd] == auVar13[5]);
      auVar17[0xe] = -(pcVar1[0xe] == auVar13[6]);
      auVar17[0xf] = -(pcVar1[0xf] == auVar13[7]);
      uVar11 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe | (ushort)(auVar17[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar12 = (uVar3 + uVar6 & param_3[0x11]) * -0x70;
        if (param_2 == *(longlong *)(lVar9 + -0x70 + lVar12)) {
          lVar9 = lVar9 + lVar12;
          if (*(longlong *)(lVar9 + -0x68) == 3) goto LAB_140aeb559;
          param_3 = (longlong *)(lVar9 + -0x60);
          goto LAB_140aeb56a;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
      }
      auVar14[0] = -(*pcVar1 == -1);
      auVar14[1] = -(pcVar1[1] == -1);
      auVar14[2] = -(pcVar1[2] == -1);
      auVar14[3] = -(pcVar1[3] == -1);
      auVar14[4] = -(pcVar1[4] == -1);
      auVar14[5] = -(pcVar1[5] == -1);
      auVar14[6] = -(pcVar1[6] == -1);
      auVar14[7] = -(pcVar1[7] == -1);
      auVar14[8] = -(pcVar1[8] == -1);
      auVar14[9] = -(pcVar1[9] == -1);
      auVar14[10] = -(pcVar1[10] == -1);
      auVar14[0xb] = -(pcVar1[0xb] == -1);
      auVar14[0xc] = -(pcVar1[0xc] == -1);
      auVar14[0xd] = -(pcVar1[0xd] == -1);
      auVar14[0xe] = -(pcVar1[0xe] == -1);
      auVar14[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar14 >> 7,0) & 1) != 0 || (SUB161(auVar14 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar14 >> 0x17,0) & 1) != 0) || (SUB161(auVar14 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar14 >> 0x27,0) & 1) != 0) || (SUB161(auVar14 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar14 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar14 >> 0x3f,0) & 1) != 0) || (SUB161(auVar14 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar14 >> 0x4f,0) & 1) != 0) || (SUB161(auVar14 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar14 >> 0x5f,0) & 1) != 0) || (SUB161(auVar14 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar14 >> 0x6f,0) & 1) != 0) || (SUB161(auVar14 >> 0x77,0) & 1) != 0) ||
          auVar14[0xf] < '\0') break;
      uVar6 = uVar6 + lVar8 + 0x10;
      lVar8 = lVar8 + 0x10;
    }
  }
LAB_140aeb559:
  if (*param_3 == 3) {
    pdb_142dc8110(&UNK_14306aed6,0x32,&UNK_14306af08);
    pcVar2 = (code *)swi(3);
    puVar7 = (undefined8 *)(*pcVar2)();
    return puVar7;
  }
  param_3 = param_3 + 1;
LAB_140aeb56a:
  lVar9 = param_3[3];
  lStack_38 = *(longlong *)(lVar9 + 0x40);
  lStack_30 = *(longlong *)(lVar9 + 0x48);
  lStack_28 = *(longlong *)(lVar9 + 0x50);
  uStack_20 = *(longlong *)(lVar9 + 0x58);
  lStack_50 = param_2;
  if (_DAT_143ca44f8 != 0) {
    pdb_142deb292(&DAT_143ca44c8);
  }
  if (_DAT_143ca44e0 != 0) {
    uVar6 = pdb_1417c5550(0x143ca44e8,&lStack_50);
    bVar5 = (byte)(uVar6 >> 0x39);
    auVar13 = ZEXT216(CONCAT11(bVar5,bVar5));
    auVar13 = pshuflw(auVar13,auVar13,0);
    lVar9 = 0;
    while( true ) {
      uVar6 = uVar6 & _DAT_143ca44d0;
      pcVar1 = (char *)(_DAT_143ca44c8 + uVar6);
      auVar18[0] = -(*pcVar1 == auVar13[0]);
      auVar18[1] = -(pcVar1[1] == auVar13[1]);
      auVar18[2] = -(pcVar1[2] == auVar13[2]);
      auVar18[3] = -(pcVar1[3] == auVar13[3]);
      auVar18[4] = -(pcVar1[4] == auVar13[4]);
      auVar18[5] = -(pcVar1[5] == auVar13[5]);
      auVar18[6] = -(pcVar1[6] == auVar13[6]);
      auVar18[7] = -(pcVar1[7] == auVar13[7]);
      auVar18[8] = -(pcVar1[8] == auVar13[0]);
      auVar18[9] = -(pcVar1[9] == auVar13[1]);
      auVar18[10] = -(pcVar1[10] == auVar13[2]);
      auVar18[0xb] = -(pcVar1[0xb] == auVar13[3]);
      auVar18[0xc] = -(pcVar1[0xc] == auVar13[4]);
      auVar18[0xd] = -(pcVar1[0xd] == auVar13[5]);
      auVar18[0xe] = -(pcVar1[0xe] == auVar13[6]);
      auVar18[0xf] = -(pcVar1[0xf] == auVar13[7]);
      uVar11 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar8 = _DAT_143ca44c8 + (uVar3 + uVar6 & _DAT_143ca44d0) * -0x10;
        if (param_2 == *(longlong *)(lVar8 + -0x10)) {
          bVar5 = *(char *)(lVar8 + -8) - 0x22;
          if ((bVar5 < 9) && ((0x107U >> (bVar5 & 0x1f) & 1) != 0)) {
            lVar9 = (ulonglong)bVar5 * 4;
            uStack_44 = *(undefined4 *)(&UNK_143050704 + lVar9);
            uStack_40 = *(undefined4 *)(&UNK_143050728 + lVar9);
            uStack_3c = *(undefined4 *)(&UNK_14305074c + lVar9);
            pdb_140df4370(&lStack_38,&uStack_44);
          }
          goto LAB_140aeb6ab;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
      }
      auVar15[0] = -(*pcVar1 == -1);
      auVar15[1] = -(pcVar1[1] == -1);
      auVar15[2] = -(pcVar1[2] == -1);
      auVar15[3] = -(pcVar1[3] == -1);
      auVar15[4] = -(pcVar1[4] == -1);
      auVar15[5] = -(pcVar1[5] == -1);
      auVar15[6] = -(pcVar1[6] == -1);
      auVar15[7] = -(pcVar1[7] == -1);
      auVar15[8] = -(pcVar1[8] == -1);
      auVar15[9] = -(pcVar1[9] == -1);
      auVar15[10] = -(pcVar1[10] == -1);
      auVar15[0xb] = -(pcVar1[0xb] == -1);
      auVar15[0xc] = -(pcVar1[0xc] == -1);
      auVar15[0xd] = -(pcVar1[0xd] == -1);
      auVar15[0xe] = -(pcVar1[0xe] == -1);
      auVar15[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar15 >> 0x17,0) & 1) != 0) || (SUB161(auVar15 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar15 >> 0x27,0) & 1) != 0) || (SUB161(auVar15 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar15 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar15 >> 0x3f,0) & 1) != 0) || (SUB161(auVar15 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar15 >> 0x4f,0) & 1) != 0) || (SUB161(auVar15 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar15 >> 0x5f,0) & 1) != 0) || (SUB161(auVar15 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar15 >> 0x6f,0) & 1) != 0) || (SUB161(auVar15 >> 0x77,0) & 1) != 0) ||
          auVar15[0xf] < '\0') break;
      uVar6 = uVar6 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
LAB_140aeb6ab:
  lStack_50 = param_2;
  if (_DAT_143ca44f8 != 0) {
    pdb_142deb292(&DAT_143ca44c8);
  }
  if (_DAT_143ca44e0 != 0) {
    uVar6 = pdb_1417c5550(0x143ca44e8,&lStack_50);
    bVar5 = (byte)(uVar6 >> 0x39);
    auVar13 = ZEXT216(CONCAT11(bVar5,bVar5));
    auVar13 = pshuflw(auVar13,auVar13,0);
    lVar9 = 0;
    while( true ) {
      uVar6 = uVar6 & _DAT_143ca44d0;
      auVar17 = *(undefined1 (*) [16])(_DAT_143ca44c8 + uVar6);
      auVar19[0] = -(auVar17[0] == auVar13[0]);
      auVar19[1] = -(auVar17[1] == auVar13[1]);
      auVar19[2] = -(auVar17[2] == auVar13[2]);
      auVar19[3] = -(auVar17[3] == auVar13[3]);
      auVar19[4] = -(auVar17[4] == auVar13[4]);
      auVar19[5] = -(auVar17[5] == auVar13[5]);
      auVar19[6] = -(auVar17[6] == auVar13[6]);
      auVar19[7] = -(auVar17[7] == auVar13[7]);
      auVar19[8] = -(auVar17[8] == auVar13[0]);
      auVar19[9] = -(auVar17[9] == auVar13[1]);
      auVar19[10] = -(auVar17[10] == auVar13[2]);
      auVar19[0xb] = -(auVar17[0xb] == auVar13[3]);
      auVar19[0xc] = -(auVar17[0xc] == auVar13[4]);
      auVar19[0xd] = -(auVar17[0xd] == auVar13[5]);
      auVar19[0xe] = -(auVar17[0xe] == auVar13[6]);
      auVar19[0xf] = -(auVar17[0xf] == auVar13[7]);
      uVar11 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar8 = _DAT_143ca44c8 + (uVar3 + uVar6 & _DAT_143ca44d0) * -0x10;
        if (param_2 == *(longlong *)(lVar8 + -0x10)) {
          if (*(char *)(lVar8 + -8) == '\"') {
            fStack_48 = (uStack_20._4_4_ - (float)uStack_20) * 0.0 * _DAT_142e36f60;
            lStack_50 = CONCAT44((uStack_20._4_4_ - (float)uStack_20) * _UNK_142e36f64,fStack_48);
            pdb_140df43c0(&lStack_38,&lStack_50);
          }
          goto LAB_140aeb7aa;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
      }
      auVar16[0] = -(auVar17[0] == -1);
      auVar16[1] = -(auVar17[1] == -1);
      auVar16[2] = -(auVar17[2] == -1);
      auVar16[3] = -(auVar17[3] == -1);
      auVar16[4] = -(auVar17[4] == -1);
      auVar16[5] = -(auVar17[5] == -1);
      auVar16[6] = -(auVar17[6] == -1);
      auVar16[7] = -(auVar17[7] == -1);
      auVar16[8] = -(auVar17[8] == -1);
      auVar16[9] = -(auVar17[9] == -1);
      auVar16[10] = -(auVar17[10] == -1);
      auVar16[0xb] = -(auVar17[0xb] == -1);
      auVar16[0xc] = -(auVar17[0xc] == -1);
      auVar16[0xd] = -(auVar17[0xd] == -1);
      auVar16[0xe] = -(auVar17[0xe] == -1);
      auVar16[0xf] = -(auVar17[0xf] == -1);
      if ((((((((((((((((SUB161(auVar16 >> 7,0) & 1) != 0 || (SUB161(auVar16 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar16 >> 0x17,0) & 1) != 0) || (SUB161(auVar16 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar16 >> 0x27,0) & 1) != 0) || (SUB161(auVar16 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar16 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar16 >> 0x3f,0) & 1) != 0) || (SUB161(auVar16 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar16 >> 0x4f,0) & 1) != 0) || (SUB161(auVar16 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar16 >> 0x5f,0) & 1) != 0) || (SUB161(auVar16 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar16 >> 0x6f,0) & 1) != 0) || (SUB161(auVar16 >> 0x77,0) & 1) != 0) ||
          auVar16[0xf] < '\0') break;
      uVar6 = uVar6 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
LAB_140aeb7aa:
  param_1[2] = lStack_28;
  param_1[3] = uStack_20;
  *param_1 = lStack_38;
  param_1[1] = lStack_30;
  return param_1;
}

