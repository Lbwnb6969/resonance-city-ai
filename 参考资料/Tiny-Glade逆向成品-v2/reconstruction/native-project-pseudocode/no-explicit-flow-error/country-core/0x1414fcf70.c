// VA 0x1414fcf70, PDB extent 670 bytes
// country_core::resources::walls::wall_holes::WallHoles::extend<core::iter::adapters::copied::Copied<core::slice::iter::Iter<tuple$<utils::wall_space::WallSpaceRegion,country_core::resources::walls::wall_holes::HoleType> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_holes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::wall_holes::WallHoles::extend<core::iter::adapters::copied::Copied<core::slice::iter::Iter<tuple$<utils::wall_space::WallSpaceRegion,country_core::resources::walls::wall_holes::HoleType>
   > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_holes.rs
   Extent: 670 */

void pdb_1414fcf70(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ushort uVar12;
  longlong lVar13;
  byte bVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong lStack_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_a8 = param_2;
  uVar5 = pdb_1400af0a0(param_1 + 4,&lStack_a8);
  lVar11 = *param_1;
  bVar14 = (byte)(uVar5 >> 0x38);
  bVar15 = bVar14 >> 1;
  auVar16 = ZEXT216(CONCAT11(bVar15,bVar15));
  auVar16 = pshuflw(auVar16,auVar16,0);
  lVar9 = 0;
  uVar10 = uVar5;
  do {
    uVar10 = uVar10 & param_1[1];
    auVar2 = *(undefined1 (*) [16])(lVar11 + uVar10);
    auVar18[0] = -(auVar2[0] == auVar16[0]);
    auVar18[1] = -(auVar2[1] == auVar16[1]);
    auVar18[2] = -(auVar2[2] == auVar16[2]);
    auVar18[3] = -(auVar2[3] == auVar16[3]);
    auVar18[4] = -(auVar2[4] == auVar16[4]);
    auVar18[5] = -(auVar2[5] == auVar16[5]);
    auVar18[6] = -(auVar2[6] == auVar16[6]);
    auVar18[7] = -(auVar2[7] == auVar16[7]);
    auVar18[8] = -(auVar2[8] == auVar16[0]);
    auVar18[9] = -(auVar2[9] == auVar16[1]);
    auVar18[10] = -(auVar2[10] == auVar16[2]);
    auVar18[0xb] = -(auVar2[0xb] == auVar16[3]);
    auVar18[0xc] = -(auVar2[0xc] == auVar16[4]);
    auVar18[0xd] = -(auVar2[0xd] == auVar16[5]);
    auVar18[0xe] = -(auVar2[0xe] == auVar16[6]);
    auVar18[0xf] = -(auVar2[0xf] == auVar16[7]);
    uVar12 = (ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
    uVar8 = (uint)uVar12;
    while (uVar12 != 0) {
      uVar7 = 0;
      for (uVar4 = uVar8; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      lVar13 = (uVar7 + uVar10 & param_1[1]) * -0x68;
      if (*(longlong *)(lVar11 + -0x68 + lVar13) == param_2) {
        lVar11 = lVar11 + lVar13;
        goto LAB_1414fd11a;
      }
      uVar12 = (ushort)(uVar8 - 1) & (ushort)uVar8;
      uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar12);
    }
    auVar17[0] = -(auVar2[0] == -1);
    auVar17[1] = -(auVar2[1] == -1);
    auVar17[2] = -(auVar2[2] == -1);
    auVar17[3] = -(auVar2[3] == -1);
    auVar17[4] = -(auVar2[4] == -1);
    auVar17[5] = -(auVar2[5] == -1);
    auVar17[6] = -(auVar2[6] == -1);
    auVar17[7] = -(auVar2[7] == -1);
    auVar17[8] = -(auVar2[8] == -1);
    auVar17[9] = -(auVar2[9] == -1);
    auVar17[10] = -(auVar2[10] == -1);
    auVar17[0xb] = -(auVar2[0xb] == -1);
    auVar17[0xc] = -(auVar2[0xc] == -1);
    auVar17[0xd] = -(auVar2[0xd] == -1);
    auVar17[0xe] = -(auVar2[0xe] == -1);
    auVar17[0xf] = -(auVar2[0xf] == -1);
    if ((((((((((((((((SUB161(auVar17 >> 7,0) & 1) != 0 || (SUB161(auVar17 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar17 >> 0x17,0) & 1) != 0) || (SUB161(auVar17 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar17 >> 0x27,0) & 1) != 0) || (SUB161(auVar17 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar17 >> 0x37,0) & 1) != 0) || (SUB161(auVar17 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar17 >> 0x47,0) & 1) != 0) || (SUB161(auVar17 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar17 >> 0x57,0) & 1) != 0) || (SUB161(auVar17 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar17 >> 0x67,0) & 1) != 0) || (SUB161(auVar17 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar17 >> 0x77,0) & 1) != 0) || auVar17[0xf] < '\0') {
      if (param_1[2] == 0) {
        pdb_142da66e0(param_1,1,param_1 + 4,CONCAT71((int7)(uVar10 >> 8),1));
      }
      pdb_140c2ac50(&lStack_a0);
      pauVar3 = (undefined1 (*) [16])*param_1;
      uVar10 = param_1[1];
      uVar5 = uVar5 & uVar10;
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
      uVar8 = (uint)uVar12;
      if (uVar12 == 0) {
        lVar11 = 0x10;
        do {
          uVar5 = uVar5 + lVar11 & uVar10;
          auVar16 = *(undefined1 (*) [16])(*pauVar3 + uVar5);
          lVar11 = lVar11 + 0x10;
          uVar8 = (uint)(ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
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
        } while (uVar8 == 0);
      }
      uVar7 = 0;
      for (; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
        uVar7 = uVar7 + 1;
      }
      uVar5 = uVar7 + uVar5 & uVar10;
      bVar15 = (*pauVar3)[uVar5];
      if (-1 < (char)bVar15) {
        auVar16 = *pauVar3;
        uVar8 = 0;
        for (uVar7 = (uint)(ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
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
                                   (ushort)(byte)(auVar16[0xf] >> 7) << 0xf); (uVar7 & 1) == 0;
            uVar7 = uVar7 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        uVar5 = (ulonglong)uVar8;
        bVar15 = (*pauVar3)[uVar5];
      }
      bVar14 = bVar14 >> 1;
      (*pauVar3)[uVar5] = bVar14;
      pauVar3[1][uVar5 - 0x10 & uVar10] = bVar14;
      lVar9 = uVar5 * -0x68;
      lVar11 = (longlong)pauVar3 + lVar9;
      *(undefined8 *)((longlong)pauVar3 + lVar9 + -8) = uStack_48;
      puVar1 = (undefined8 *)((longlong)pauVar3 + lVar9 + -0x18);
      *puVar1 = uStack_58;
      puVar1[1] = uStack_50;
      puVar1 = (undefined8 *)((longlong)pauVar3 + lVar9 + -0x28);
      *puVar1 = uStack_68;
      puVar1[1] = uStack_60;
      puVar1 = (undefined8 *)((longlong)pauVar3 + lVar9 + -0x38);
      *puVar1 = uStack_78;
      puVar1[1] = uStack_70;
      puVar1 = (undefined8 *)((longlong)pauVar3 + lVar9 + -0x48);
      *puVar1 = uStack_88;
      puVar1[1] = uStack_80;
      puVar1 = (undefined8 *)((longlong)pauVar3 + lVar9 + -0x58);
      *puVar1 = uStack_98;
      puVar1[1] = uStack_90;
      plVar6 = (longlong *)((longlong)pauVar3 + lVar9 + -0x68);
      *plVar6 = param_2;
      plVar6[1] = lStack_a0;
      lVar9 = param_1[3] - _UNK_142e47bf8;
      param_1[2] = param_1[2] - ((ulonglong)bVar15 & 0xffffffffffffff01);
      param_1[3] = lVar9;
      lStack_a8 = param_2;
LAB_1414fd11a:
      plVar6 = (longlong *)pdb_140c2ab90(lVar11 + -0x60);
      uVar5 = ((ulonglong)((longlong)param_4 - (longlong)param_3) >> 2) * -0x3333333333333333;
      uVar10 = *plVar6 - plVar6[2];
      if (uVar10 <= uVar5 && uVar5 - uVar10 != 0) {
        pdb_142d7f1b0(plVar6,plVar6[2],uVar5,4,0x14);
      }
      if (param_3 != param_4) {
        do {
          if ((char)param_3[2] == '\x05') {
            return;
          }
          lStack_a8 = *param_3;
          lStack_a0 = param_3[1];
          param_3 = (longlong *)((longlong)param_3 + 0x14);
          pdb_140c2b5e0(plVar6,&lStack_a8);
        } while (param_3 != param_4);
      }
      return;
    }
    uVar10 = uVar10 + lVar9 + 0x10;
    lVar9 = lVar9 + 0x10;
  } while( true );
}

