// VA 0x1408de350, PDB extent 946 bytes
// system_decorator::derive_decorator_subtype::is_half_dormer
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/derive_decorator_subtype.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_decorator::derive_decorator_subtype::is_half_dormer
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/derive_decorator_subtype.rs
   Extent: 946 */

bool pdb_1408de350(ulonglong param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  char *pcVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  char cVar13;
  uint uVar14;
  undefined8 uVar15;
  code *pcVar16;
  ulonglong uVar17;
  longlong lVar18;
  ushort uVar19;
  ulonglong uVar20;
  byte bVar21;
  char cVar23;
  char cVar24;
  float extraout_XMM0_Da;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  undefined1 auVar22 [16];
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  char cStack_c4;
  char cStack_c3;
  float fStack_c0;
  char *pcStack_b8;
  code *pcStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 auStack_84 [19];
  
  if (1 < *(uint *)(param_4 + 600)) {
    return false;
  }
  if (param_5 != 0) {
    cVar13 = pdb_140b77b50(param_5);
    if (cVar13 != '\0') {
      return false;
    }
    cVar13 = pdb_140b77b60(param_5);
    if (cVar13 != '\0') {
      uVar15 = pdb_140a84d90(param_5 + 8);
      pdb_140b77190(&pcStack_b8,param_5);
      if ((char)pcStack_b8 == '\0') {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_14301a8a8);
      }
      pdb_140dea260(auStack_84,param_3,param_4);
      pcVar16 = (code *)pdb_140df2280(uVar15,auStack_84[0]);
      if (pcStack_b0 == pcVar16) {
        return false;
      }
      if (pcStack_a8 == pcVar16) {
        return false;
      }
    }
  }
  pdb_140dea260(&uStack_90,param_3,param_4);
  uVar14 = pdb_14148cd70(param_4 + 0x88,uStack_90,uStack_88);
  uVar6 = *(ulonglong *)(param_4 + 0xe8);
  uVar17 = (ulonglong)uVar14;
  if (uVar6 <= uVar17) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar17,uVar6,&UNK_14301a8c0);
  }
  if (uVar6 <= uVar17 + 1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar17 + 1,uVar6,&UNK_14301a8c0);
  }
  if (2 < param_1) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_14301a8d8,0x28,&UNK_14301a900);
  }
  fVar3 = *(float *)(*(longlong *)(param_4 + 0xe0) + uVar17 * 4);
  fVar4 = *(float *)(*(longlong *)(param_4 + 0xe0) + 4 + uVar17 * 4);
  cStack_c3 = (char)(0x160600 >> ((byte)((int)param_1 << 3) & 0x1f));
  cStack_c4 = pdb_140c44ba0(param_2);
  if (param_6[3] != 0) {
    uVar17 = pdb_1413f0300(param_6 + 4,&cStack_c4);
    fVar10 = _DAT_142e36f50;
    lVar7 = *param_6;
    uVar6 = param_6[1];
    bVar21 = (byte)(uVar17 >> 0x39);
    auVar22 = ZEXT216(CONCAT11(bVar21,bVar21));
    auVar22 = pshuflw(auVar22,auVar22,0);
    cVar13 = auVar22[0];
    cVar23 = auVar22[1];
    cVar24 = auVar22[2];
    cVar25 = auVar22[3];
    cVar26 = auVar22[4];
    cVar27 = auVar22[5];
    cVar28 = auVar22[6];
    cVar29 = auVar22[7];
    if (cStack_c4 != '\x1a') {
      lVar18 = 0;
      do {
        uVar17 = uVar17 & uVar6;
        pcVar1 = (char *)(lVar7 + uVar17);
        auVar33[0] = -(*pcVar1 == cVar13);
        auVar33[1] = -(pcVar1[1] == cVar23);
        auVar33[2] = -(pcVar1[2] == cVar24);
        auVar33[3] = -(pcVar1[3] == cVar25);
        auVar33[4] = -(pcVar1[4] == cVar26);
        auVar33[5] = -(pcVar1[5] == cVar27);
        auVar33[6] = -(pcVar1[6] == cVar28);
        auVar33[7] = -(pcVar1[7] == cVar29);
        auVar33[8] = -(pcVar1[8] == cVar13);
        auVar33[9] = -(pcVar1[9] == cVar23);
        auVar33[10] = -(pcVar1[10] == cVar24);
        auVar33[0xb] = -(pcVar1[0xb] == cVar25);
        auVar33[0xc] = -(pcVar1[0xc] == cVar26);
        auVar33[0xd] = -(pcVar1[0xd] == cVar27);
        auVar33[0xe] = -(pcVar1[0xe] == cVar28);
        auVar33[0xf] = -(pcVar1[0xf] == cVar29);
        uVar19 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf
        ;
        uVar14 = (uint)uVar19;
        while (uVar19 != 0) {
          uVar8 = 0;
          for (uVar9 = uVar14; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
            uVar8 = uVar8 + 1;
          }
          uVar20 = uVar8 + uVar17 & uVar6;
          cVar5 = *(char *)(lVar7 + -0x48 + uVar20 * -0x48);
          if (((cVar5 != '\x1a') && (cStack_c4 == cVar5)) &&
             (cStack_c3 == *(char *)(lVar7 + uVar20 * -0x48 + -0x47))) {
LAB_1408de5e9:
            puVar2 = (undefined8 *)(lVar7 + -0x20 + uVar20 * -0x48);
            pcStack_b8 = (char *)*puVar2;
            pcStack_b0 = (code *)puVar2[1];
            puVar2 = (undefined8 *)(lVar7 + -0x10 + uVar20 * -0x48);
            pcStack_a8 = (code *)*puVar2;
            uVar15 = puVar2[1];
            uStack_a0._0_4_ = (float)uVar15;
            fVar11 = (float)uStack_a0;
            uStack_a0._4_4_ = (float)((ulonglong)uVar15 >> 0x20);
            fVar12 = uStack_a0._4_4_;
            fVar30 = (float)uStack_a0 + uStack_a0._4_4_;
            uStack_a0 = uVar15;
            pdb_140df4540(&cStack_c4,&pcStack_b0,fVar30 * _DAT_142e36f50);
            return extraout_XMM0_Da * (fVar4 - fVar3) + fVar3 <
                   ((fVar12 - fVar11) + fStack_c0) * fVar10 + fStack_8c;
          }
          uVar19 = (ushort)(uVar14 - 1) & (ushort)uVar14;
          uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar19);
        }
        auVar32[0] = -(*pcVar1 == -1);
        auVar32[1] = -(pcVar1[1] == -1);
        auVar32[2] = -(pcVar1[2] == -1);
        auVar32[3] = -(pcVar1[3] == -1);
        auVar32[4] = -(pcVar1[4] == -1);
        auVar32[5] = -(pcVar1[5] == -1);
        auVar32[6] = -(pcVar1[6] == -1);
        auVar32[7] = -(pcVar1[7] == -1);
        auVar32[8] = -(pcVar1[8] == -1);
        auVar32[9] = -(pcVar1[9] == -1);
        auVar32[10] = -(pcVar1[10] == -1);
        auVar32[0xb] = -(pcVar1[0xb] == -1);
        auVar32[0xc] = -(pcVar1[0xc] == -1);
        auVar32[0xd] = -(pcVar1[0xd] == -1);
        auVar32[0xe] = -(pcVar1[0xe] == -1);
        auVar32[0xf] = -(pcVar1[0xf] == -1);
        if ((((((((((((((((SUB161(auVar32 >> 7,0) & 1) != 0 || (SUB161(auVar32 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar32 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar32 >> 0x1f,0) & 1) != 0) || (SUB161(auVar32 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar32 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar32 >> 0x37,0) & 1) != 0) || (SUB161(auVar32 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar32 >> 0x47,0) & 1) != 0) || (SUB161(auVar32 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar32 >> 0x57,0) & 1) != 0) || (SUB161(auVar32 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar32 >> 0x67,0) & 1) != 0) || (SUB161(auVar32 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar32 >> 0x77,0) & 1) != 0) || auVar32[0xf] < '\0') goto LAB_1408de694;
        uVar17 = uVar17 + lVar18 + 0x10;
        lVar18 = lVar18 + 0x10;
      } while( true );
    }
    lVar18 = 0;
    while( true ) {
      uVar17 = uVar17 & uVar6;
      pcVar1 = (char *)(lVar7 + uVar17);
      auVar22[0] = -(*pcVar1 == cVar13);
      auVar22[1] = -(pcVar1[1] == cVar23);
      auVar22[2] = -(pcVar1[2] == cVar24);
      auVar22[3] = -(pcVar1[3] == cVar25);
      auVar22[4] = -(pcVar1[4] == cVar26);
      auVar22[5] = -(pcVar1[5] == cVar27);
      auVar22[6] = -(pcVar1[6] == cVar28);
      auVar22[7] = -(pcVar1[7] == cVar29);
      auVar22[8] = -(pcVar1[8] == cVar13);
      auVar22[9] = -(pcVar1[9] == cVar23);
      auVar22[10] = -(pcVar1[10] == cVar24);
      auVar22[0xb] = -(pcVar1[0xb] == cVar25);
      auVar22[0xc] = -(pcVar1[0xc] == cVar26);
      auVar22[0xd] = -(pcVar1[0xd] == cVar27);
      auVar22[0xe] = -(pcVar1[0xe] == cVar28);
      auVar22[0xf] = -(pcVar1[0xf] == cVar29);
      uVar19 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
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
      uVar14 = (uint)uVar19;
      while (uVar19 != 0) {
        uVar8 = 0;
        for (uVar9 = uVar14; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
          uVar8 = uVar8 + 1;
        }
        uVar20 = uVar8 + uVar17 & uVar6;
        if (*(char *)(lVar7 + -0x48 + uVar20 * -0x48) == '\x1a') goto LAB_1408de5e9;
        uVar19 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar19);
      }
      auVar31[0] = -(*pcVar1 == -1);
      auVar31[1] = -(pcVar1[1] == -1);
      auVar31[2] = -(pcVar1[2] == -1);
      auVar31[3] = -(pcVar1[3] == -1);
      auVar31[4] = -(pcVar1[4] == -1);
      auVar31[5] = -(pcVar1[5] == -1);
      auVar31[6] = -(pcVar1[6] == -1);
      auVar31[7] = -(pcVar1[7] == -1);
      auVar31[8] = -(pcVar1[8] == -1);
      auVar31[9] = -(pcVar1[9] == -1);
      auVar31[10] = -(pcVar1[10] == -1);
      auVar31[0xb] = -(pcVar1[0xb] == -1);
      auVar31[0xc] = -(pcVar1[0xc] == -1);
      auVar31[0xd] = -(pcVar1[0xd] == -1);
      auVar31[0xe] = -(pcVar1[0xe] == -1);
      auVar31[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar31 >> 0x17,0) & 1) != 0) || (SUB161(auVar31 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar31 >> 0x27,0) & 1) != 0) || (SUB161(auVar31 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar31 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar31 >> 0x3f,0) & 1) != 0) || (SUB161(auVar31 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar31 >> 0x4f,0) & 1) != 0) || (SUB161(auVar31 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar31 >> 0x5f,0) & 1) != 0) || (SUB161(auVar31 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar31 >> 0x6f,0) & 1) != 0) || (SUB161(auVar31 >> 0x77,0) & 1) != 0) ||
          auVar31[0xf] < '\0') break;
      uVar17 = uVar17 + lVar18 + 0x10;
      lVar18 = lVar18 + 0x10;
    }
  }
LAB_1408de694:
  pcStack_b8 = &cStack_c4;
  pcStack_b0 = pdb_1408de200;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14301a820,&pcStack_b8,&UNK_14301a850);
}

