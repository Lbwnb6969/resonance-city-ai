// VA 0x1421210e0, PDB extent 870 bytes
// system_color::style_changes::StyleScene::wall_style
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_sample.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::style_changes::StyleScene::wall_style
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_sample.rs
   Extent: 870 */

void pdb_1421210e0(undefined4 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 uVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  int *piVar22;
  longlong lVar23;
  uint uVar24;
  ushort uVar25;
  longlong lVar26;
  longlong lVar27;
  byte bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uStack_90;
  undefined4 uStack_88;
  ulonglong uStack_80;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  
  uStack_80 = param_3;
  uVar17 = pdb_140b0e4b0(*param_2,param_3);
  if (uVar17 == 0) goto LAB_142121289;
  uVar7 = param_2[4];
  uVar18 = pdb_140b54b40(uVar7,param_3);
  if ((uVar18 & 0xffffffff) == 0) {
LAB_1421211e8:
    lVar27 = 0;
  }
  else {
    lVar27 = param_2[0x29];
    uVar21 = uVar18 & 0xffffffff ^ 0xffffffff;
    if (((*(ulonglong *)(lVar27 + 0x10) <= uVar21) ||
        (piVar22 = (int *)(uVar21 * 0x18 + *(longlong *)(lVar27 + 8)),
        piVar22[4] != (int)(uVar18 >> 0x20))) || (*piVar22 == 0)) goto LAB_1421211e8;
    lVar23 = param_2[0x28];
    uVar18 = *(ulonglong *)(piVar22 + 2);
    if ((*(ulonglong *)(lVar23 + 0x38) <= (uVar18 & 0xffffffff)) ||
       ((*(ulonglong *)(*(longlong *)(lVar23 + 0x28) + (uVar18 >> 6 & 0x3ffffff) * 8) >>
         (uVar18 & 0x3f) & 1) == 0)) goto LAB_1421211e8;
    if (*(ulonglong *)(lVar23 + 0x110) <
        *(ulonglong *)(*(longlong *)(lVar27 + 0x1a0) + 0x40 + (uVar18 >> 0x20) * 0x48)) {
      lVar27 = *(longlong *)(lVar27 + 0x1a0) + (uVar18 >> 0x20) * 0x48;
      uVar18 = *(ulonglong *)(*(longlong *)(lVar27 + 0x38) + *(ulonglong *)(lVar23 + 0x110) * 8);
      if (uVar18 == 0) goto LAB_142121436;
      lVar27 = *(longlong *)(*(longlong *)(lVar27 + 0x18) + 0x10 + ~uVar18 * 0x30);
    }
    else {
LAB_142121436:
      lVar27 = 0;
    }
    lVar27 = (ulonglong)(uint)~piVar22[1] * 0x58 + lVar27;
  }
  uVar4 = *(undefined1 *)(uVar17 + 0x69);
  uVar5 = *(undefined1 *)(uVar17 + 0x6e);
  uVar6 = *(undefined1 *)(uVar17 + 0x6c);
  uVar1 = *(undefined4 *)(uVar17 + 0x60);
  uVar12 = pdb_1409cf7d0(param_2[0x2b],param_3);
  uVar13 = pdb_1409cf7d0(param_2[0x2f],param_3);
  uVar14 = pdb_1409cf7d0(param_2[0x33],param_3);
  uVar15 = pdb_1409cf7d0(param_2[0x14],param_3);
  uVar2 = *(undefined4 *)(uVar17 + 100);
  uVar18 = pdb_140b54f80(uVar7,param_3,&UNK_14345fa28);
  if (uVar18 != 0) {
    if (lVar27 == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = pdb_140b77b50(lVar27);
    }
    uVar21 = pdb_14092fe00(&uStack_74,uVar18,uVar16);
    plVar8 = (longlong *)param_2[0xc];
    if (plVar8[3] != 0) {
      uVar21 = pdb_140fc4ba0(plVar8 + 4,&uStack_80);
      uVar18 = plVar8[1];
      bVar28 = (byte)(uVar21 >> 0x39);
      auVar29 = ZEXT216(CONCAT11(bVar28,bVar28));
      auVar29 = pshuflw(auVar29,auVar29,0);
      lVar23 = 0;
      while( true ) {
        uVar21 = uVar21 & uVar18;
        auVar3 = *(undefined1 (*) [16])(*plVar8 + uVar21);
        auVar31[0] = -(auVar3[0] == auVar29[0]);
        auVar31[1] = -(auVar3[1] == auVar29[1]);
        auVar31[2] = -(auVar3[2] == auVar29[2]);
        auVar31[3] = -(auVar3[3] == auVar29[3]);
        auVar31[4] = -(auVar3[4] == auVar29[4]);
        auVar31[5] = -(auVar3[5] == auVar29[5]);
        auVar31[6] = -(auVar3[6] == auVar29[6]);
        auVar31[7] = -(auVar3[7] == auVar29[7]);
        auVar31[8] = -(auVar3[8] == auVar29[0]);
        auVar31[9] = -(auVar3[9] == auVar29[1]);
        auVar31[10] = -(auVar3[10] == auVar29[2]);
        auVar31[0xb] = -(auVar3[0xb] == auVar29[3]);
        auVar31[0xc] = -(auVar3[0xc] == auVar29[4]);
        auVar31[0xd] = -(auVar3[0xd] == auVar29[5]);
        auVar31[0xe] = -(auVar3[0xe] == auVar29[6]);
        auVar31[0xf] = -(auVar3[0xf] == auVar29[7]);
        uVar25 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf
        ;
        uVar24 = (uint)uVar25;
        while (uVar25 != 0) {
          uVar9 = 0;
          for (uVar10 = uVar24; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
            uVar9 = uVar9 + 1;
          }
          lVar26 = *plVar8 + (uVar9 + uVar21 & uVar18) * -0x20;
          if (param_3 == *(ulonglong *)(lVar26 + -0x20)) {
            if (*(longlong *)(lVar26 + -8) == 0) {
              uVar16 = 0;
            }
            else {
              uVar21 = pdb_1409cf7d0(param_2[0x10]);
              uVar17 = uVar21 & 0xffffffff;
              uVar16 = 1;
              uVar18 = param_3;
            }
            goto joined_r0x00014212142b;
          }
          uVar25 = (ushort)(uVar24 - 1) & (ushort)uVar24;
          uVar24 = CONCAT22((short)(uVar24 - 1 >> 0x10),uVar25);
        }
        auVar30[0] = -(auVar3[0] == -1);
        auVar30[1] = -(auVar3[1] == -1);
        auVar30[2] = -(auVar3[2] == -1);
        auVar30[3] = -(auVar3[3] == -1);
        auVar30[4] = -(auVar3[4] == -1);
        auVar30[5] = -(auVar3[5] == -1);
        auVar30[6] = -(auVar3[6] == -1);
        auVar30[7] = -(auVar3[7] == -1);
        auVar30[8] = -(auVar3[8] == -1);
        auVar30[9] = -(auVar3[9] == -1);
        auVar30[10] = -(auVar3[10] == -1);
        auVar30[0xb] = -(auVar3[0xb] == -1);
        auVar30[0xc] = -(auVar3[0xc] == -1);
        auVar30[0xd] = -(auVar3[0xd] == -1);
        auVar30[0xe] = -(auVar3[0xe] == -1);
        auVar30[0xf] = -(auVar3[0xf] == -1);
        if ((((((((((((((((SUB161(auVar30 >> 7,0) & 1) != 0 || (SUB161(auVar30 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar30 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar30 >> 0x1f,0) & 1) != 0) || (SUB161(auVar30 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar30 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar30 >> 0x37,0) & 1) != 0) || (SUB161(auVar30 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar30 >> 0x47,0) & 1) != 0) || (SUB161(auVar30 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar30 >> 0x57,0) & 1) != 0) || (SUB161(auVar30 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar30 >> 0x67,0) & 1) != 0) || (SUB161(auVar30 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar30 >> 0x77,0) & 1) != 0) || auVar30[0xf] < '\0') break;
        uVar21 = uVar21 + lVar23 + 0x10;
        lVar23 = lVar23 + 0x10;
      }
    }
    uVar16 = 0;
joined_r0x00014212142b:
    if (lVar27 == 0) {
      uVar11 = (undefined1)uVar21;
      uVar20 = (undefined4)uVar18;
      uVar19 = 2;
    }
    else {
      uVar11 = pdb_140b77b50(lVar27);
      uVar20 = *(undefined4 *)(lVar27 + 0x50);
      uStack_88 = *(undefined4 *)(lVar27 + 0x48);
      uStack_90 = *(undefined8 *)(lVar27 + 0x40);
      uVar19 = *(undefined1 *)(lVar27 + 0x3d);
    }
    *param_1 = uVar16;
    param_1[1] = (int)uVar17;
    *(undefined8 *)(param_1 + 2) = uStack_74;
    param_1[4] = uStack_6c;
    param_1[5] = uVar20;
    *(undefined8 *)(param_1 + 6) = uStack_90;
    param_1[8] = uStack_88;
    *(undefined1 *)(param_1 + 9) = uVar11;
    *(undefined1 *)((longlong)param_1 + 0x25) = uVar19;
    param_1[10] = uVar1;
    param_1[0xb] = uVar12;
    param_1[0xc] = uVar13;
    param_1[0xd] = uVar14;
    param_1[0xe] = uVar15;
    param_1[0xf] = uVar2;
    *(undefined1 *)(param_1 + 0x10) = uVar4;
    *(undefined1 *)((longlong)param_1 + 0x41) = uVar6;
    *(undefined1 *)((longlong)param_1 + 0x42) = uVar5;
    return;
  }
LAB_142121289:
  *param_1 = 2;
  return;
}

