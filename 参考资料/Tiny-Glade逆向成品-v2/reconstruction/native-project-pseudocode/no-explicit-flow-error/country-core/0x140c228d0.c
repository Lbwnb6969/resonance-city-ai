// VA 0x140c228d0, PDB extent 413 bytes
// country_core::resources::stairs_walls::StairsPillarProposals::add
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs_walls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::stairs_walls::StairsPillarProposals::add
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs_walls.rs
   Extent: 413 */

void pdb_140c228d0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ushort uVar15;
  longlong lVar16;
  byte bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_50;
  byte *pbStack_48;
  undefined8 uStack_40;
  longlong lStack_38;
  byte *pbStack_30;
  
  if (param_1[3] == 0) {
    lVar12 = *param_2;
  }
  else {
    uVar10 = pdb_1400af0a0(param_1 + 4);
    bVar17 = (byte)(uVar10 >> 0x39);
    auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
    auVar18 = pshuflw(auVar18,auVar18,0);
    lVar12 = *param_2;
    lVar13 = 0;
    while( true ) {
      uVar10 = uVar10 & param_1[1];
      auVar2 = *(undefined1 (*) [16])(*param_1 + uVar10);
      auVar20[0] = -(auVar2[0] == auVar18[0]);
      auVar20[1] = -(auVar2[1] == auVar18[1]);
      auVar20[2] = -(auVar2[2] == auVar18[2]);
      auVar20[3] = -(auVar2[3] == auVar18[3]);
      auVar20[4] = -(auVar2[4] == auVar18[4]);
      auVar20[5] = -(auVar2[5] == auVar18[5]);
      auVar20[6] = -(auVar2[6] == auVar18[6]);
      auVar20[7] = -(auVar2[7] == auVar18[7]);
      auVar20[8] = -(auVar2[8] == auVar18[0]);
      auVar20[9] = -(auVar2[9] == auVar18[1]);
      auVar20[10] = -(auVar2[10] == auVar18[2]);
      auVar20[0xb] = -(auVar2[0xb] == auVar18[3]);
      auVar20[0xc] = -(auVar2[0xc] == auVar18[4]);
      auVar20[0xd] = -(auVar2[0xd] == auVar18[5]);
      auVar20[0xe] = -(auVar2[0xe] == auVar18[6]);
      auVar20[0xf] = -(auVar2[0xf] == auVar18[7]);
      uVar15 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
      uVar14 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar14; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        lVar16 = *param_1 + (uVar3 + uVar10 & param_1[1]) * -0x20;
        if (lVar12 == *(longlong *)(lVar16 + -0x20)) {
          lVar12 = *(longlong *)(lVar16 + -8);
          if (lVar12 == *(longlong *)(lVar16 + -0x18)) {
            pdb_142d8d940(lVar16 + -0x18);
          }
          lVar13 = *(longlong *)(lVar16 + -0x10);
          lVar11 = lVar12 * 0x2c;
          uVar5 = *param_3;
          uVar6 = param_3[1];
          uVar7 = param_3[2];
          uVar8 = param_3[3];
          uVar9 = *(undefined8 *)((longlong)param_3 + 0x24);
          puVar1 = (undefined8 *)(lVar13 + 0x1c + lVar11);
          *puVar1 = *(undefined8 *)((longlong)param_3 + 0x1c);
          puVar1[1] = uVar9;
          puVar1 = (undefined8 *)(lVar13 + 0x10 + lVar11);
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          *(undefined8 *)(lVar13 + lVar11) = uVar5;
          ((undefined8 *)(lVar13 + lVar11))[1] = uVar6;
          *(longlong *)(lVar16 + -8) = lVar12 + 1;
          return;
        }
        uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
      }
      auVar19[0] = -(auVar2[0] == -1);
      auVar19[1] = -(auVar2[1] == -1);
      auVar19[2] = -(auVar2[2] == -1);
      auVar19[3] = -(auVar2[3] == -1);
      auVar19[4] = -(auVar2[4] == -1);
      auVar19[5] = -(auVar2[5] == -1);
      auVar19[6] = -(auVar2[6] == -1);
      auVar19[7] = -(auVar2[7] == -1);
      auVar19[8] = -(auVar2[8] == -1);
      auVar19[9] = -(auVar2[9] == -1);
      auVar19[10] = -(auVar2[10] == -1);
      auVar19[0xb] = -(auVar2[0xb] == -1);
      auVar19[0xc] = -(auVar2[0xc] == -1);
      auVar19[0xd] = -(auVar2[0xd] == -1);
      auVar19[0xe] = -(auVar2[0xe] == -1);
      auVar19[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar19 >> 0x3f,0) & 1) != 0) || (SUB161(auVar19 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar19 >> 0x4f,0) & 1) != 0) || (SUB161(auVar19 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar19 >> 0x5f,0) & 1) != 0) || (SUB161(auVar19 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar19 >> 0x6f,0) & 1) != 0) || (SUB161(auVar19 >> 0x77,0) & 1) != 0) ||
          auVar19[0xf] < '\0') break;
      uVar10 = uVar10 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
  pdb_14007ee60();
  pbStack_48 = pub_1406abab0(0x2c,4);
  if (pbStack_48 != (byte *)0x0) {
    uVar5 = *param_3;
    uVar6 = param_3[1];
    uVar7 = param_3[2];
    uVar8 = param_3[3];
    uVar9 = *(undefined8 *)((longlong)param_3 + 0x24);
    *(undefined8 *)(pbStack_48 + 0x1c) = *(undefined8 *)((longlong)param_3 + 0x1c);
    *(undefined8 *)(pbStack_48 + 0x24) = uVar9;
    *(undefined8 *)(pbStack_48 + 0x10) = uVar7;
    *(undefined8 *)(pbStack_48 + 0x18) = uVar8;
    *(undefined8 *)pbStack_48 = uVar5;
    *(undefined8 *)(pbStack_48 + 8) = uVar6;
    uStack_50 = 1;
    uStack_40 = 1;
    pdb_1417b7fd0(&lStack_38,param_1,lVar12,&uStack_50);
    if ((!SBORROW8(0,lStack_38)) && (lStack_38 != 0)) {
      pub_1406abac0(pbStack_30,lStack_38 * 0x2c,4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(4,0x2c);
}

