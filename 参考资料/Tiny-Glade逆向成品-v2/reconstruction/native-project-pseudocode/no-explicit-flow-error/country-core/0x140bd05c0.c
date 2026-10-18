// VA 0x140bd05c0, PDB extent 1307 bytes
// country_core::systems::wall::adjust_wall_height::ui_adjust_wall_height_mode::history_record_adjust_wall_height
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/adjust_wall_height/ui_adjust_wall_height_mode.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::adjust_wall_height::ui_adjust_wall_height_mode::history_record_adjust_wall_height
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/adjust_wall_height/ui_adjust_wall_height_mode.rs
   Extent: 1307 */

void pdb_140bd05c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 param_6,longlong *param_7)

{
  undefined1 auVar1 [16];
  char cVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  char *pcVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  ushort uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  byte bVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  longlong alStack_70 [7];
  
  puVar3 = (ulonglong *)*param_2;
  lVar4 = param_2[1];
  uVar10 = *puVar3;
  uVar14 = 0;
  uVar18 = uVar10 - *(ulonglong *)(lVar4 + 0x18);
  if (uVar10 < *(ulonglong *)(lVar4 + 0x18)) {
    uVar18 = uVar14;
  }
  uVar12 = uVar10 - *(ulonglong *)(lVar4 + 0x38);
  if (uVar10 < *(ulonglong *)(lVar4 + 0x38)) {
    uVar12 = uVar14;
  }
  uVar10 = *(ulonglong *)(lVar4 + 0x30);
  uVar20 = uVar10 - uVar12;
  if (uVar10 < uVar12) {
    uVar20 = uVar14;
  }
  uVar5 = *(ulonglong *)(lVar4 + 0x10);
  uVar13 = uVar5 - uVar18;
  if (uVar5 < uVar18) {
    uVar13 = uVar14;
  }
  uVar14 = *(ulonglong *)(lVar4 + 0x40);
  *puVar3 = uVar14 - (uVar13 + uVar20);
  if (uVar5 >= uVar18 && uVar5 - uVar18 != 0 || uVar10 >= uVar12 && uVar10 - uVar12 != 0) {
    *puVar3 = uVar14;
    pcVar6 = (char *)*param_1;
    if (((*(uint *)(pcVar6 + 0x20) & *(uint *)(pcVar6 + 0x28)) != 0) && (*pcVar6 != '\0')) {
      fVar31 = *(float *)(pcVar6 + 0x24);
      fVar30 = *(float *)(pcVar6 + 0x2c);
      lVar4 = *(longlong *)(pcVar6 + 8);
      param_5 = (longlong *)*param_5;
      if (param_5[3] != 0) {
        alStack_70[0] = lVar4;
        uVar10 = pdb_1400af0a0(param_5 + 4,alStack_70);
        lVar11 = *param_5;
        bVar21 = (byte)(uVar10 >> 0x39);
        auVar23 = ZEXT216(CONCAT11(bVar21,bVar21));
        auVar23 = pshuflw(auVar23,auVar23,0);
        lVar15 = 0;
        while( true ) {
          uVar10 = uVar10 & param_5[1];
          auVar1 = *(undefined1 (*) [16])(lVar11 + uVar10);
          auVar27[0] = -(auVar1[0] == auVar23[0]);
          auVar27[1] = -(auVar1[1] == auVar23[1]);
          auVar27[2] = -(auVar1[2] == auVar23[2]);
          auVar27[3] = -(auVar1[3] == auVar23[3]);
          auVar27[4] = -(auVar1[4] == auVar23[4]);
          auVar27[5] = -(auVar1[5] == auVar23[5]);
          auVar27[6] = -(auVar1[6] == auVar23[6]);
          auVar27[7] = -(auVar1[7] == auVar23[7]);
          auVar27[8] = -(auVar1[8] == auVar23[0]);
          auVar27[9] = -(auVar1[9] == auVar23[1]);
          auVar27[10] = -(auVar1[10] == auVar23[2]);
          auVar27[0xb] = -(auVar1[0xb] == auVar23[3]);
          auVar27[0xc] = -(auVar1[0xc] == auVar23[4]);
          auVar27[0xd] = -(auVar1[0xd] == auVar23[5]);
          auVar27[0xe] = -(auVar1[0xe] == auVar23[6]);
          auVar27[0xf] = -(auVar1[0xf] == auVar23[7]);
          uVar17 = (ushort)(SUB161(auVar27 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar27[0xf] >> 7) << 0xf;
          uVar16 = (uint)uVar17;
          while (uVar17 != 0) {
            uVar8 = 0;
            for (uVar9 = uVar16; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar8 = uVar8 + 1;
            }
            lVar19 = (uVar8 + uVar10 & param_5[1]) * -0x2b0;
            if (lVar4 == *(longlong *)(lVar11 + -0x2b0 + lVar19)) {
              lVar11 = lVar11 + lVar19;
              if ((*(ulonglong *)(lVar11 + -0x298) < 2) || (*(float *)(lVar11 + -0x278) <= 0.0))
              goto LAB_140bd0aaa;
              cVar2 = *(char *)(lVar11 + -8);
              lVar11 = pdb_140b54cf0(param_5,lVar4,param_6);
              if (lVar11 == 0) {
                fVar22 = _DAT_142e37988;
                if (cVar2 == '\0') {
                  fVar22 = _DAT_142e36f50;
                }
              }
              else {
                fVar22 = *(float *)(&UNK_143021a18 +
                                   (ulonglong)(*(float *)(lVar11 + 0x30) <= _DAT_142e3b1d8) * 4);
              }
              if (fVar22 <= fVar31) {
                fVar22 = fVar31;
              }
              fVar31 = _DAT_142e37874;
              if (cVar2 == '\0') {
                fVar31 = _DAT_143008730;
              }
              if (fVar22 <= fVar31) {
                fVar31 = fVar22;
              }
              goto LAB_140bd07c1;
            }
            uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
            uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
          }
          auVar24[0] = -(auVar1[0] == -1);
          auVar24[1] = -(auVar1[1] == -1);
          auVar24[2] = -(auVar1[2] == -1);
          auVar24[3] = -(auVar1[3] == -1);
          auVar24[4] = -(auVar1[4] == -1);
          auVar24[5] = -(auVar1[5] == -1);
          auVar24[6] = -(auVar1[6] == -1);
          auVar24[7] = -(auVar1[7] == -1);
          auVar24[8] = -(auVar1[8] == -1);
          auVar24[9] = -(auVar1[9] == -1);
          auVar24[10] = -(auVar1[10] == -1);
          auVar24[0xb] = -(auVar1[0xb] == -1);
          auVar24[0xc] = -(auVar1[0xc] == -1);
          auVar24[0xd] = -(auVar1[0xd] == -1);
          auVar24[0xe] = -(auVar1[0xe] == -1);
          auVar24[0xf] = -(auVar1[0xf] == -1);
          if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar24 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar24 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x2f,0) & 1) != 0) || (SUB161(auVar24 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
          uVar10 = uVar10 + lVar15 + 0x10;
          lVar15 = lVar15 + 0x10;
        }
      }
LAB_140bd07c1:
      alStack_70[0] = lVar4;
      if (param_5[3] != 0) {
        uVar10 = pdb_1400af0a0(param_5 + 4,alStack_70);
        lVar11 = *param_5;
        bVar21 = (byte)(uVar10 >> 0x39);
        auVar23 = ZEXT216(CONCAT11(bVar21,bVar21));
        auVar23 = pshuflw(auVar23,auVar23,0);
        lVar15 = 0;
        do {
          uVar10 = uVar10 & param_5[1];
          auVar1 = *(undefined1 (*) [16])(lVar11 + uVar10);
          auVar28[0] = -(auVar1[0] == auVar23[0]);
          auVar28[1] = -(auVar1[1] == auVar23[1]);
          auVar28[2] = -(auVar1[2] == auVar23[2]);
          auVar28[3] = -(auVar1[3] == auVar23[3]);
          auVar28[4] = -(auVar1[4] == auVar23[4]);
          auVar28[5] = -(auVar1[5] == auVar23[5]);
          auVar28[6] = -(auVar1[6] == auVar23[6]);
          auVar28[7] = -(auVar1[7] == auVar23[7]);
          auVar28[8] = -(auVar1[8] == auVar23[0]);
          auVar28[9] = -(auVar1[9] == auVar23[1]);
          auVar28[10] = -(auVar1[10] == auVar23[2]);
          auVar28[0xb] = -(auVar1[0xb] == auVar23[3]);
          auVar28[0xc] = -(auVar1[0xc] == auVar23[4]);
          auVar28[0xd] = -(auVar1[0xd] == auVar23[5]);
          auVar28[0xe] = -(auVar1[0xe] == auVar23[6]);
          auVar28[0xf] = -(auVar1[0xf] == auVar23[7]);
          uVar17 = (ushort)(SUB161(auVar28 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar28[0xf] >> 7) << 0xf;
          uVar16 = (uint)uVar17;
          while (uVar17 != 0) {
            uVar8 = 0;
            for (uVar9 = uVar16; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              uVar8 = uVar8 + 1;
            }
            lVar19 = (uVar8 + uVar10 & param_5[1]) * -0x2b0;
            if (lVar4 == *(longlong *)(lVar11 + -0x2b0 + lVar19)) {
              lVar11 = lVar11 + lVar19;
              if ((*(ulonglong *)(lVar11 + -0x298) < 2) || (*(float *)(lVar11 + -0x278) <= 0.0)) {
LAB_140bd0aaa:
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_1430642f0);
              }
              cVar2 = *(char *)(lVar11 + -8);
              lVar11 = pdb_140b54cf0(param_5,lVar4,param_6);
              if (lVar11 == 0) {
                fVar22 = _DAT_142e37988;
                if (cVar2 == '\0') {
                  fVar22 = _DAT_142e36f50;
                }
              }
              else {
                fVar22 = *(float *)(&UNK_143021a18 +
                                   (ulonglong)(*(float *)(lVar11 + 0x30) <= _DAT_142e3b1d8) * 4);
              }
              if (fVar22 <= fVar30) {
                fVar22 = fVar30;
              }
              fVar30 = _DAT_142e37874;
              if (cVar2 == '\0') {
                fVar30 = _DAT_143008730;
              }
              if (fVar22 <= fVar30) {
                fVar30 = fVar22;
              }
              goto LAB_140bd090a;
            }
            uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
            uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
          }
          auVar25[0] = -(auVar1[0] == -1);
          auVar25[1] = -(auVar1[1] == -1);
          auVar25[2] = -(auVar1[2] == -1);
          auVar25[3] = -(auVar1[3] == -1);
          auVar25[4] = -(auVar1[4] == -1);
          auVar25[5] = -(auVar1[5] == -1);
          auVar25[6] = -(auVar1[6] == -1);
          auVar25[7] = -(auVar1[7] == -1);
          auVar25[8] = -(auVar1[8] == -1);
          auVar25[9] = -(auVar1[9] == -1);
          auVar25[10] = -(auVar1[10] == -1);
          auVar25[0xb] = -(auVar1[0xb] == -1);
          auVar25[0xc] = -(auVar1[0xc] == -1);
          auVar25[0xd] = -(auVar1[0xd] == -1);
          auVar25[0xe] = -(auVar1[0xe] == -1);
          auVar25[0xf] = -(auVar1[0xf] == -1);
          if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar25 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar25 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar25 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar25 >> 0x2f,0) & 1) != 0) || (SUB161(auVar25 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar25 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar25 >> 0x47,0) & 1) != 0) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') break;
          uVar10 = uVar10 + lVar15 + 0x10;
          lVar15 = lVar15 + 0x10;
        } while( true );
      }
LAB_140bd090a:
      if ((fVar31 != fVar30) || (NAN(fVar31) || NAN(fVar30))) {
        *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
        uVar7 = *param_4;
        pdb_140ae2d30(alStack_70,lVar4);
        pdb_140ae5180(uVar7,alStack_70,&UNK_14304f050);
        if (param_5[3] != 0) {
          alStack_70[0] = lVar4;
          uVar10 = pdb_1400af0a0(param_5 + 4,alStack_70);
          lVar11 = *param_5;
          bVar21 = (byte)(uVar10 >> 0x39);
          auVar23 = ZEXT216(CONCAT11(bVar21,bVar21));
          auVar23 = pshuflw(auVar23,auVar23,0);
          lVar15 = 0;
          while( true ) {
            uVar10 = uVar10 & param_5[1];
            auVar1 = *(undefined1 (*) [16])(lVar11 + uVar10);
            auVar29[0] = -(auVar1[0] == auVar23[0]);
            auVar29[1] = -(auVar1[1] == auVar23[1]);
            auVar29[2] = -(auVar1[2] == auVar23[2]);
            auVar29[3] = -(auVar1[3] == auVar23[3]);
            auVar29[4] = -(auVar1[4] == auVar23[4]);
            auVar29[5] = -(auVar1[5] == auVar23[5]);
            auVar29[6] = -(auVar1[6] == auVar23[6]);
            auVar29[7] = -(auVar1[7] == auVar23[7]);
            auVar29[8] = -(auVar1[8] == auVar23[0]);
            auVar29[9] = -(auVar1[9] == auVar23[1]);
            auVar29[10] = -(auVar1[10] == auVar23[2]);
            auVar29[0xb] = -(auVar1[0xb] == auVar23[3]);
            auVar29[0xc] = -(auVar1[0xc] == auVar23[4]);
            auVar29[0xd] = -(auVar1[0xd] == auVar23[5]);
            auVar29[0xe] = -(auVar1[0xe] == auVar23[6]);
            auVar29[0xf] = -(auVar1[0xf] == auVar23[7]);
            uVar17 = (ushort)(SUB161(auVar29 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar29[0xf] >> 7) << 0xf;
            uVar16 = (uint)uVar17;
            while (uVar17 != 0) {
              uVar8 = 0;
              for (uVar9 = uVar16; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                uVar8 = uVar8 + 1;
              }
              lVar19 = (uVar8 + uVar10 & param_5[1]) * -0x2b0;
              if (lVar4 == *(longlong *)(lVar11 + -0x2b0 + lVar19)) {
                lVar11 = lVar11 + lVar19;
                if ((*(ulonglong *)(lVar11 + -0x298) < 2) || (*(float *)(lVar11 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_1430643c8);
                }
                if (*(uint *)(lVar11 + -0x50) < 2) {
                  *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
                  lVar4 = *param_7;
                  lVar11 = *(longlong *)(lVar4 + 0x30);
                  uVar7 = *(undefined8 *)(lVar4 + 0x40);
                  if (lVar11 == *(longlong *)(lVar4 + 0x20)) {
                    pdb_142d7e8a0(lVar4 + 0x20);
                  }
                  *(undefined8 *)(*(longlong *)(lVar4 + 0x28) + lVar11 * 8) = uVar7;
                  *(longlong *)(lVar4 + 0x30) = lVar11 + 1;
                  *(longlong *)(lVar4 + 0x40) = *(longlong *)(lVar4 + 0x40) + 1;
                }
                goto LAB_140bd0a5c;
              }
              uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
              uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
            }
            auVar26[0] = -(auVar1[0] == -1);
            auVar26[1] = -(auVar1[1] == -1);
            auVar26[2] = -(auVar1[2] == -1);
            auVar26[3] = -(auVar1[3] == -1);
            auVar26[4] = -(auVar1[4] == -1);
            auVar26[5] = -(auVar1[5] == -1);
            auVar26[6] = -(auVar1[6] == -1);
            auVar26[7] = -(auVar1[7] == -1);
            auVar26[8] = -(auVar1[8] == -1);
            auVar26[9] = -(auVar1[9] == -1);
            auVar26[10] = -(auVar1[10] == -1);
            auVar26[0xb] = -(auVar1[0xb] == -1);
            auVar26[0xc] = -(auVar1[0xc] == -1);
            auVar26[0xd] = -(auVar1[0xd] == -1);
            auVar26[0xe] = -(auVar1[0xe] == -1);
            auVar26[0xf] = -(auVar1[0xf] == -1);
            if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar26 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar26 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar26 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar26 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar26 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar26 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar26 >> 0x3f,0) & 1) != 0) || (SUB161(auVar26 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar26 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar26 >> 0x57,0) & 1) != 0) || (SUB161(auVar26 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar26 >> 0x67,0) & 1) != 0) || (SUB161(auVar26 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar26 >> 0x77,0) & 1) != 0) || auVar26[0xf] < '\0') break;
            uVar10 = uVar10 + lVar15 + 0x10;
            lVar15 = lVar15 + 0x10;
          }
        }
      }
    }
LAB_140bd0a5c:
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6[4] = '\0';
    pcVar6[5] = '\0';
    pcVar6[6] = '\0';
    pcVar6[7] = '\0';
    pcVar6[0x10] = '\0';
    pcVar6[0x11] = '\0';
    pcVar6[0x12] = '\0';
    pcVar6[0x13] = '\0';
    pcVar6[0x18] = '\0';
    pcVar6[0x19] = '\0';
    pcVar6[0x1a] = '\0';
    pcVar6[0x1b] = '\0';
    pcVar6[0x20] = '\0';
    pcVar6[0x21] = '\0';
    pcVar6[0x22] = '\0';
    pcVar6[0x23] = '\0';
    pcVar6[0x28] = '\0';
    pcVar6[0x29] = '\0';
    pcVar6[0x2a] = '\0';
    pcVar6[0x2b] = '\0';
  }
  return;
}

