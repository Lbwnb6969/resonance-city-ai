// VA 0x140c2bb20, PDB extent 631 bytes
// country_core::resources::walls::wall_holes::WallHoles::add
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_holes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::walls::wall_holes::WallHoles::add
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/wall_holes.rs
   Extent: 631 */

void pdb_140c2bb20(undefined8 *param_1,longlong param_2,longlong *param_3,undefined1 param_4)

{
  char *pcVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 (*pauVar12) [16];
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ushort uVar16;
  longlong lVar17;
  byte bVar18;
  byte bVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  longlong lStack_68;
  longlong lStack_60;
  undefined1 uStack_58;
  uint3 uStack_53;
  undefined5 uStack_50;
  undefined8 uStack_4b;
  undefined3 uStack_43;
  undefined5 uStack_40;
  undefined7 uStack_3b;
  undefined4 uStack_34;
  
  lStack_68 = param_2;
  uVar10 = pdb_1400af0a0(param_1 + 4,&lStack_68);
  pauVar12 = (undefined1 (*) [16])*param_1;
  uVar11 = param_1[1];
  bVar18 = (byte)(uVar10 >> 0x38);
  bVar19 = bVar18 >> 1;
  auVar20 = ZEXT216(CONCAT11(bVar19,bVar19));
  auVar20 = pshuflw(auVar20,auVar20,0);
  lVar14 = 0;
  uVar15 = uVar10;
  do {
    uVar15 = uVar15 & uVar11;
    pcVar1 = *pauVar12 + uVar15;
    auVar22[0] = -(*pcVar1 == auVar20[0]);
    auVar22[1] = -(pcVar1[1] == auVar20[1]);
    auVar22[2] = -(pcVar1[2] == auVar20[2]);
    auVar22[3] = -(pcVar1[3] == auVar20[3]);
    auVar22[4] = -(pcVar1[4] == auVar20[4]);
    auVar22[5] = -(pcVar1[5] == auVar20[5]);
    auVar22[6] = -(pcVar1[6] == auVar20[6]);
    auVar22[7] = -(pcVar1[7] == auVar20[7]);
    auVar22[8] = -(pcVar1[8] == auVar20[0]);
    auVar22[9] = -(pcVar1[9] == auVar20[1]);
    auVar22[10] = -(pcVar1[10] == auVar20[2]);
    auVar22[0xb] = -(pcVar1[0xb] == auVar20[3]);
    auVar22[0xc] = -(pcVar1[0xc] == auVar20[4]);
    auVar22[0xd] = -(pcVar1[0xd] == auVar20[5]);
    auVar22[0xe] = -(pcVar1[0xe] == auVar20[6]);
    auVar22[0xf] = -(pcVar1[0xf] == auVar20[7]);
    uVar16 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
    uVar13 = (uint)uVar16;
    while (uVar16 != 0) {
      uVar9 = 0;
      for (uVar7 = uVar13; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      lVar17 = (uVar9 + uVar15 & uVar11) * -0x68;
      if (*(longlong *)((longlong)pauVar12 + lVar17 + -0x68) == param_2) {
        lVar17 = (longlong)pauVar12 + lVar17;
        iVar5 = *(int *)(lVar17 + -0x60);
        goto joined_r0x000140c2bbe6;
      }
      uVar16 = (ushort)(uVar13 - 1) & (ushort)uVar13;
      uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar16);
    }
    auVar21[0] = -(*pcVar1 == -1);
    auVar21[1] = -(pcVar1[1] == -1);
    auVar21[2] = -(pcVar1[2] == -1);
    auVar21[3] = -(pcVar1[3] == -1);
    auVar21[4] = -(pcVar1[4] == -1);
    auVar21[5] = -(pcVar1[5] == -1);
    auVar21[6] = -(pcVar1[6] == -1);
    auVar21[7] = -(pcVar1[7] == -1);
    auVar21[8] = -(pcVar1[8] == -1);
    auVar21[9] = -(pcVar1[9] == -1);
    auVar21[10] = -(pcVar1[10] == -1);
    auVar21[0xb] = -(pcVar1[0xb] == -1);
    auVar21[0xc] = -(pcVar1[0xc] == -1);
    auVar21[0xd] = -(pcVar1[0xd] == -1);
    auVar21[0xe] = -(pcVar1[0xe] == -1);
    auVar21[0xf] = -(pcVar1[0xf] == -1);
    if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar21 >> 0x37,0) & 1) != 0) || (SUB161(auVar21 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar21 >> 0x47,0) & 1) != 0) || (SUB161(auVar21 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar21 >> 0x57,0) & 1) != 0) || (SUB161(auVar21 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar21 >> 0x67,0) & 1) != 0) || (SUB161(auVar21 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar21 >> 0x77,0) & 1) != 0) || auVar21[0xf] < '\0') {
      if (param_1[2] == 0) {
        pdb_142da66e0(param_1,1,param_1 + 4,CONCAT71((int7)(uVar15 >> 8),1));
        pauVar12 = (undefined1 (*) [16])*param_1;
        uVar11 = param_1[1];
      }
      uStack_50 = 0;
      uStack_4b = 0;
      uStack_43 = 0;
      uStack_40 = 0;
      uStack_3b = 0;
      uStack_34 = 0;
      uVar10 = uVar10 & uVar11;
      auVar20 = *(undefined1 (*) [16])(*pauVar12 + uVar10);
      uVar16 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
               (ushort)(byte)(auVar20[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar16;
      if (uVar16 == 0) {
        lVar14 = 0x10;
        do {
          uVar10 = uVar10 + lVar14 & uVar11;
          auVar20 = *(undefined1 (*) [16])(*pauVar12 + uVar10);
          lVar14 = lVar14 + 0x10;
          uVar13 = (uint)(ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
                                  (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar20[0xf] >> 7) << 0xf);
        } while (uVar13 == 0);
      }
      uVar9 = 0;
      for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
        uVar9 = uVar9 + 1;
      }
      uVar15 = uVar9 + uVar10 & uVar11;
      bVar19 = (*pauVar12)[uVar15];
      if (-1 < (char)bVar19) {
        auVar20 = *pauVar12;
        uVar13 = 0;
        for (uVar9 = (uint)(ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
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
                                    (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar20[0xf] >> 7) << 0xf); (uVar9 & 1) == 0;
            uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar13 = uVar13 + 1;
        }
        uVar15 = (ulonglong)uVar13;
        bVar19 = (*pauVar12)[uVar15];
      }
      bVar18 = bVar18 >> 1;
      (*pauVar12)[uVar15] = bVar18;
      pauVar12[1][uVar15 - 0x10 & uVar11] = bVar18;
      param_1[2] = param_1[2] - (ulonglong)(bVar19 & 1);
      lVar14 = uVar15 * -0x68;
      lVar17 = (longlong)pauVar12 + lVar14;
      *(longlong *)((longlong)pauVar12 + lVar14 + -0x68) = param_2;
      *(undefined1 (*) [16])((longlong)pauVar12 + lVar14 + -0x60) = (undefined1  [16])0x0;
      *(undefined8 *)((longlong)pauVar12 + lVar14 + -0x50) = 4;
      *(undefined1 (*) [16])((longlong)pauVar12 + lVar14 + -0x48) = (undefined1  [16])0x0;
      *(undefined8 *)((longlong)pauVar12 + lVar14 + -0x38) = 4;
      *(undefined8 *)((longlong)pauVar12 + lVar14 + -0x30) = 0;
      *(undefined4 *)((longlong)pauVar12 + lVar14 + -0x28) = 0;
      *(undefined1 *)((longlong)pauVar12 + lVar14 + -0x24) = 0;
      puVar3 = (ulonglong *)((longlong)pauVar12 + lVar14 + -0x23);
      *puVar3 = (ulonglong)uStack_53;
      puVar3[1] = 0;
      puVar4 = (undefined8 *)((longlong)pauVar12 + lVar14 + -0x13);
      *puVar4 = 0;
      puVar4[1] = 0;
      *(undefined4 *)((longlong)pauVar12 + lVar14 + -4) = 0;
      param_1[3] = param_1[3] + 1;
      iVar5 = *(int *)(lVar17 + -0x60);
joined_r0x000140c2bbe6:
      if (iVar5 == 1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14306bc30,0x9b,&UNK_14306bcb8);
      }
      lStack_68 = *param_3;
      lStack_60 = param_3[1];
      uStack_58 = param_4;
      uVar11 = pdb_140bbb520(&lStack_68);
      *(longlong *)(lVar17 + -0x20) = *(longlong *)(lVar17 + -0x20) + uVar11;
      *(ulonglong *)(lVar17 + -0x18) = *(ulonglong *)(lVar17 + -0x18) ^ uVar11;
      lVar14 = *(longlong *)(lVar17 + -0x48);
      if (lVar14 == *(longlong *)(lVar17 + -0x58)) {
        pdb_142d8d5c0(lVar17 + -0x58);
      }
      lVar6 = *(longlong *)(lVar17 + -0x50);
      lVar8 = param_3[1];
      plVar2 = (longlong *)(lVar6 + lVar14 * 0x14);
      *plVar2 = *param_3;
      plVar2[1] = lVar8;
      *(undefined1 *)(lVar6 + 0x10 + lVar14 * 0x14) = param_4;
      *(longlong *)(lVar17 + -0x48) = lVar14 + 1;
      return;
    }
    uVar15 = uVar15 + lVar14 + 0x10;
    lVar14 = lVar14 + 0x10;
  } while( true );
}

