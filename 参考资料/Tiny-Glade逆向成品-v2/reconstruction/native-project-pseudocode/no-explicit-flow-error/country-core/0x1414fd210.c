// VA 0x1414fd210, PDB extent 682 bytes
// country_core::resources::walls::window_cuts::WindowCutRecords::extend<core::iter::adapters::copied::Copied<core::slice::iter::Iter<country_core::resources::walls::window_cuts::WindowCutRecord> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/window_cuts.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::window_cuts::WindowCutRecords::extend<core::iter::adapters::copied::Copied<core::slice::iter::Iter<country_core::resources::walls::window_cuts::WindowCutRecord>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/window_cuts.rs
   Extent: 682 */

void pdb_1414fd210(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined1 (*pauVar7) [16];
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ushort uVar12;
  longlong lVar13;
  byte bVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong lStack_98;
  undefined5 uStack_90;
  undefined3 uStack_8b;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  char cStack_7b;
  undefined2 uStack_7a;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lStack_98 = param_2;
  uVar5 = pdb_1400af0a0(param_1 + 4,&lStack_98);
  lVar17 = *param_1;
  bVar14 = (byte)(uVar5 >> 0x38);
  bVar15 = bVar14 >> 1;
  auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
  auVar16 = pshuflw(auVar16,auVar16,0);
  lVar10 = 0;
  uVar11 = uVar5;
  do {
    uVar11 = uVar11 & param_1[1];
    auVar2 = *(undefined1 (*) [16])(lVar17 + uVar11);
    auVar19[0] = -(auVar2[0] == auVar16[0]);
    auVar19[1] = -(auVar2[1] == auVar16[1]);
    auVar19[2] = -(auVar2[2] == auVar16[2]);
    auVar19[3] = -(auVar2[3] == auVar16[3]);
    auVar19[4] = -(auVar2[4] == auVar16[4]);
    auVar19[5] = -(auVar2[5] == auVar16[5]);
    auVar19[6] = -(auVar2[6] == auVar16[6]);
    auVar19[7] = -(auVar2[7] == auVar16[7]);
    auVar19[8] = -(auVar2[8] == auVar16[0]);
    auVar19[9] = -(auVar2[9] == auVar16[1]);
    auVar19[10] = -(auVar2[10] == auVar16[2]);
    auVar19[0xb] = -(auVar2[0xb] == auVar16[3]);
    auVar19[0xc] = -(auVar2[0xc] == auVar16[4]);
    auVar19[0xd] = -(auVar2[0xd] == auVar16[5]);
    auVar19[0xe] = -(auVar2[0xe] == auVar16[6]);
    auVar19[0xf] = -(auVar2[0xf] == auVar16[7]);
    uVar12 = (ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
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
    uVar9 = (uint)uVar12;
    while (uVar12 != 0) {
      uVar8 = 0;
      for (uVar4 = uVar9; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      lVar13 = (uVar8 + uVar11 & param_1[1]) * -0x60;
      if (*(longlong *)(lVar17 + -0x60 + lVar13) == param_2) {
        pauVar7 = (undefined1 (*) [16])(lVar17 + lVar13);
        goto LAB_1414fd3c1;
      }
      uVar12 = (ushort)(uVar9 - 1) & (ushort)uVar9;
      uVar9 = CONCAT22((short)(uVar9 - 1 >> 0x10),uVar12);
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
                  || (SUB161(auVar18 >> 0x27,0) & 1) != 0) || (SUB161(auVar18 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar18 >> 0x37,0) & 1) != 0) || (SUB161(auVar18 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar18 >> 0x47,0) & 1) != 0) || (SUB161(auVar18 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar18 >> 0x57,0) & 1) != 0) || (SUB161(auVar18 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar18 >> 0x67,0) & 1) != 0) || (SUB161(auVar18 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar18 >> 0x77,0) & 1) != 0) || auVar18[0xf] < '\0') {
      if (param_1[2] == 0) {
        pdb_142de12b0(param_1,1,param_1 + 4,CONCAT71((int7)(uVar11 >> 8),1));
      }
      pdb_140a69e60(&uStack_90);
      pauVar3 = (undefined1 (*) [16])*param_1;
      uVar11 = param_1[1];
      uVar5 = uVar5 & uVar11;
      auVar16 = *(undefined1 (*) [16])(*pauVar3 + uVar5);
      uVar12 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar16[0xf] >> 7) << 0xf;
      uVar9 = (uint)uVar12;
      if (uVar12 == 0) {
        lVar17 = 0x10;
        do {
          uVar5 = uVar5 + lVar17 & uVar11;
          auVar16 = *(undefined1 (*) [16])(*pauVar3 + uVar5);
          lVar17 = lVar17 + 0x10;
          uVar9 = (uint)(ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar16[0xf] >> 7) << 0xf);
        } while (uVar9 == 0);
      }
      uVar8 = 0;
      for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        uVar8 = uVar8 + 1;
      }
      uVar5 = uVar8 + uVar5 & uVar11;
      bVar15 = (*pauVar3)[uVar5];
      if (-1 < (char)bVar15) {
        auVar16 = *pauVar3;
        uVar9 = 0;
        for (uVar8 = (uint)(ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar16[0xf] >> 7) << 0xf); (uVar8 & 1) == 0;
            uVar8 = uVar8 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        uVar5 = (ulonglong)uVar9;
        bVar15 = (*pauVar3)[uVar5];
      }
      bVar14 = bVar14 >> 1;
      (*pauVar3)[uVar5] = bVar14;
      pauVar3[1][uVar5 - 0x10 & uVar11] = bVar14;
      pauVar7 = pauVar3 + uVar5 * -6;
      *(undefined8 *)pauVar3[uVar5 * -6 + -1] = uStack_48;
      *(undefined8 *)(pauVar3[uVar5 * -6 + -1] + 8) = uStack_40;
      *(undefined8 *)pauVar3[uVar5 * -6 + -2] = uStack_58;
      *(undefined8 *)(pauVar3[uVar5 * -6 + -2] + 8) = uStack_50;
      *(undefined8 *)pauVar3[uVar5 * -6 + -3] = uStack_68;
      *(undefined8 *)(pauVar3[uVar5 * -6 + -3] + 8) = uStack_60;
      *(undefined8 *)pauVar3[uVar5 * -6 + -4] = uStack_78;
      *(undefined8 *)(pauVar3[uVar5 * -6 + -4] + 8) = uStack_70;
      *(ulonglong *)pauVar3[uVar5 * -6 + -5] = CONCAT35(uStack_83,uStack_88);
      *(ulonglong *)(pauVar3[uVar5 * -6 + -5] + 8) =
           CONCAT26(uStack_7a,CONCAT15(cStack_7b,uStack_80));
      *(longlong *)pauVar3[uVar5 * -6 + -6] = param_2;
      *(ulonglong *)(pauVar3[uVar5 * -6 + -6] + 8) = CONCAT35(uStack_8b,uStack_90);
      lVar17 = param_1[3] - _UNK_142e47bf8;
      param_1[2] = param_1[2] - ((ulonglong)bVar15 & 0xffffffffffffff01);
      param_1[3] = lVar17;
      lStack_98 = param_2;
LAB_1414fd3c1:
      plVar6 = (longlong *)pdb_140a69e30(pauVar7[-6] + 8);
      uVar11 = (ulonglong)((longlong)param_4 - (longlong)param_3) >> 5;
      if ((ulonglong)(*plVar6 - plVar6[2]) < uVar11) {
        pdb_142d7f1b0(plVar6,plVar6[2],uVar11,4,0x20);
      }
      if (param_3 != param_4) {
        do {
          cStack_7b = *(char *)((longlong)param_3 + 0x1d);
          if (cStack_7b == '\x02') {
            return;
          }
          uStack_7a = *(undefined2 *)((longlong)param_3 + 0x1e);
          plVar1 = param_3 + 4;
          lStack_98 = *param_3;
          uStack_88 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_3 + 0xd) >> 0x18);
          uStack_83 = (undefined3)*(undefined8 *)((longlong)param_3 + 0x15);
          uStack_80 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x15) >> 0x18);
          uStack_90 = (undefined5)param_3[1];
          uStack_8b = (undefined3)((ulonglong)param_3[1] >> 0x28);
          pdb_140a6a390(plVar6,&lStack_98);
          param_3 = plVar1;
        } while (plVar1 != param_4);
      }
      return;
    }
    uVar11 = uVar11 + lVar10 + 0x10;
    lVar10 = lVar10 + 0x10;
  } while( true );
}

