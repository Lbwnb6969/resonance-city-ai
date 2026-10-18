// VA 0x140bcfa20, PDB extent 1649 bytes
// country_core::systems::wall::adjust_wall_height::ui_adjust_wall_height_mode::ui_adjust_wall_height_mode
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/adjust_wall_height/ui_adjust_wall_height_mode.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::adjust_wall_height::ui_adjust_wall_height_mode::ui_adjust_wall_height_mode
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/adjust_wall_height/ui_adjust_wall_height_mode.rs
   Extent: 1649 */

void pdb_140bcfa20(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong *in_R9;
  ulonglong uVar18;
  ushort uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  byte bVar26;
  float extraout_XMM0_Da;
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 *in_stack_00000040;
  longlong *in_stack_00000048;
  longlong *in_stack_00000058;
  longlong *in_stack_00000060;
  longlong lStack_f8;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_c0;
  undefined1 auStack_94 [4];
  float fStack_90;
  
  puVar6 = (ulonglong *)*in_stack_00000040;
  lVar23 = in_stack_00000040[1];
  uVar24 = *puVar6;
  uVar15 = 0;
  uVar12 = uVar24 - *(ulonglong *)(lVar23 + 0x18);
  if (uVar24 < *(ulonglong *)(lVar23 + 0x18)) {
    uVar12 = uVar15;
  }
  uVar13 = uVar24 - *(ulonglong *)(lVar23 + 0x38);
  if (uVar24 < *(ulonglong *)(lVar23 + 0x38)) {
    uVar13 = uVar15;
  }
  uVar24 = *(ulonglong *)(lVar23 + 0x10);
  uVar18 = *(ulonglong *)(lVar23 + 0x30);
  uVar20 = uVar18 - uVar13;
  if (uVar18 < uVar13) {
    uVar20 = uVar15;
  }
  uVar17 = uVar24 - uVar12;
  if (uVar24 < uVar12) {
    uVar17 = uVar15;
  }
  uVar15 = *(ulonglong *)(lVar23 + 0x40);
  lVar16 = *(longlong *)(lVar23 + 8);
  lVar23 = *(longlong *)(lVar23 + 0x28);
  *puVar6 = (uVar15 - uVar20) - uVar17;
  if (uVar24 >= uVar12 && uVar24 - uVar12 != 0 || uVar18 >= uVar13 && uVar18 - uVar13 != 0) {
    lVar23 = lVar23 + uVar13 * 0x10;
    lVar16 = lVar16 + uVar12 * 0x10;
    uVar22 = 0;
    if (uVar24 < uVar12) {
      lVar16 = 8;
    }
    uVar17 = lVar16 + -0x10 + uVar17 * 0x10;
    if (uVar24 <= uVar12) {
      uVar17 = uVar22;
    }
    if (uVar18 < uVar13) {
      lVar23 = 8;
    }
    uVar24 = lVar23 + -0x10 + uVar20 * 0x10;
    if (uVar18 <= uVar13) {
      uVar24 = uVar17;
    }
    *puVar6 = uVar15;
    puVar6 = (ulonglong *)*in_stack_00000038;
    lVar23 = in_stack_00000038[1];
    uVar12 = *puVar6;
    uVar15 = uVar12 - *(ulonglong *)(lVar23 + 0x18);
    if (uVar12 < *(ulonglong *)(lVar23 + 0x18)) {
      uVar15 = uVar22;
    }
    uVar13 = uVar12 - *(ulonglong *)(lVar23 + 0x38);
    if (uVar12 < *(ulonglong *)(lVar23 + 0x38)) {
      uVar13 = uVar22;
    }
    uVar12 = *(ulonglong *)(lVar23 + 0x30);
    uVar18 = uVar12 - uVar13;
    if (uVar12 < uVar13) {
      uVar18 = uVar22;
    }
    uVar20 = *(ulonglong *)(lVar23 + 0x10);
    uVar17 = uVar20 - uVar15;
    if (uVar20 < uVar15) {
      uVar17 = uVar22;
    }
    uVar22 = *(ulonglong *)(lVar23 + 0x40);
    *puVar6 = uVar22 - (uVar17 + uVar18);
    if (uVar20 >= uVar15 && uVar20 - uVar15 != 0 || uVar12 >= uVar13 && uVar12 - uVar13 != 0) {
      *puVar6 = uVar22;
      in_R9 = (longlong *)*in_R9;
      lVar23 = *(longlong *)(uVar24 + 8);
      lStack_f8 = lVar23;
      if (in_R9[3] != 0) {
        uVar12 = pdb_1400af0a0(in_R9 + 4,&lStack_f8);
        lVar16 = *in_R9;
        bVar26 = (byte)(uVar12 >> 0x39);
        auVar27 = ZEXT216(CONCAT11(bVar26,bVar26));
        auVar27 = pshuflw(auVar27,auVar27,0);
        lVar14 = 0;
        while( true ) {
          uVar12 = uVar12 & in_R9[1];
          auVar4 = *(undefined1 (*) [16])(lVar16 + uVar12);
          auVar30[0] = -(auVar4[0] == auVar27[0]);
          auVar30[1] = -(auVar4[1] == auVar27[1]);
          auVar30[2] = -(auVar4[2] == auVar27[2]);
          auVar30[3] = -(auVar4[3] == auVar27[3]);
          auVar30[4] = -(auVar4[4] == auVar27[4]);
          auVar30[5] = -(auVar4[5] == auVar27[5]);
          auVar30[6] = -(auVar4[6] == auVar27[6]);
          auVar30[7] = -(auVar4[7] == auVar27[7]);
          auVar30[8] = -(auVar4[8] == auVar27[0]);
          auVar30[9] = -(auVar4[9] == auVar27[1]);
          auVar30[10] = -(auVar4[10] == auVar27[2]);
          auVar30[0xb] = -(auVar4[0xb] == auVar27[3]);
          auVar30[0xc] = -(auVar4[0xc] == auVar27[4]);
          auVar30[0xd] = -(auVar4[0xd] == auVar27[5]);
          auVar30[0xe] = -(auVar4[0xe] == auVar27[6]);
          auVar30[0xf] = -(auVar4[0xf] == auVar27[7]);
          uVar19 = (ushort)(SUB161(auVar30 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                   (ushort)(auVar30[0xf] >> 7) << 0xf;
          uVar11 = (uint)uVar19;
          while (uVar19 != 0) {
            uVar9 = 0;
            for (uVar10 = uVar11; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
              uVar9 = uVar9 + 1;
            }
            lVar21 = (uVar9 + uVar12 & in_R9[1]) * -0x2b0;
            if (lVar23 == *(longlong *)(lVar16 + -0x2b0 + lVar21)) {
              lVar16 = lVar16 + lVar21;
              if ((*(ulonglong *)(lVar16 + -0x298) < 2) || (*(float *)(lVar16 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143064308);
              }
              pdb_140de83c0();
              puVar7 = (undefined8 *)*in_stack_00000030;
              if (*(char *)(puVar7 + 2) == '\0') {
                uVar5 = *(undefined4 *)((longlong)in_stack_00000030 + 0x1c);
                puVar8 = (undefined4 *)in_stack_00000030[2];
                *puVar8 = uVar5;
                pdb_140bd00a0(&lStack_f8);
                *(undefined4 *)(puVar7 + 2) = 1;
                *(undefined4 *)((longlong)puVar7 + 0x14) = (undefined4)lStack_f8;
                uVar1 = *(undefined4 *)(lVar16 + -0x20);
                *(undefined4 *)(puVar7 + 4) = 1;
                *(undefined4 *)((longlong)puVar7 + 0x24) = uVar1;
                *(undefined4 *)(puVar7 + 5) = 1;
                *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar1;
                *puVar8 = uVar5;
                *puVar7 = 1;
                puVar7[1] = lVar23;
                uVar1 = *(undefined4 *)((longlong)in_stack_00000060 + 0x1c);
                puVar8 = (undefined4 *)in_stack_00000060[2];
                *puVar8 = uVar1;
                lVar14 = *in_stack_00000060;
                lStack_f8 = 0;
                fStack_f0 = (float)*(undefined8 *)(uVar24 + 8);
                uStack_ec = (undefined4)((ulonglong)*(undefined8 *)(uVar24 + 8) >> 0x20);
                uStack_e8 = 1;
                uStack_e4 = 0;
                lVar21 = *in_stack_00000058;
                pdb_140aa3450(lVar14,&lStack_f8,2,lVar21,in_stack_00000028,&UNK_143064338,0x12);
                *puVar8 = uVar1;
                pdb_140c419b0(lVar14,lVar23,lVar21);
                *puVar8 = uVar1;
                lVar25 = lVar21 + 0x90;
                if (*(longlong *)(lVar21 + 0x90) == 0) {
                  lVar25 = 0;
                }
                lStack_f8 = 1;
                fStack_f0 = (float)lVar25;
                uStack_ec = (undefined4)((ulonglong)lVar25 >> 0x20);
                uStack_e8 = 0;
                uStack_e4 = 0;
                uStack_c0 = 0;
                pdb_1414e0e70(&lStack_f8,lVar14 + 0x30);
                if (*(char *)(puVar7 + 2) == '\0') {
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8150(&UNK_143064350);
                }
              }
              uVar11 = pdb_1419a9060(lVar16 + -0x270);
              uVar12 = (ulonglong)uVar11;
              uVar24 = *(ulonglong *)(lVar16 + -0x260);
              if (uVar24 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc81f2(uVar12,uVar24,&UNK_14335e4e0);
              }
              uVar15 = uVar12 + 1;
              if (uVar15 < uVar24) {
                lVar14 = *(longlong *)(lVar16 + -0x268);
                fVar28 = _DAT_142e36f28 - extraout_XMM0_Da;
                fVar32 = *(float *)(lVar14 + 8 + uVar15 * 0xc) * extraout_XMM0_Da +
                         fVar28 * *(float *)(lVar14 + 8 + uVar12 * 0xc);
                uVar2 = *(undefined8 *)(lVar14 + uVar12 * 0xc);
                uVar3 = *(undefined8 *)(lVar14 + uVar15 * 0xc);
                fVar33 = (float)uVar3 * extraout_XMM0_Da + (float)uVar2 * fVar28;
                fVar28 = (float)((ulonglong)uVar3 >> 0x20) * extraout_XMM0_Da +
                         (float)((ulonglong)uVar2 >> 0x20) * fVar28;
                lStack_f8 = CONCAT44(fVar28,fVar33);
                uStack_ec = 0;
                uStack_e8 = 0x3f800000;
                uStack_e4 = 0;
                fStack_f0 = fVar32;
                pdb_140bce5a0(auStack_94);
                if (*(int *)(puVar7 + 3) == 1) {
                  fVar31 = (fStack_90 + *(float *)((longlong)puVar7 + 0x1c)) - fVar28;
                  *(undefined4 *)in_stack_00000048[2] =
                       *(undefined4 *)((longlong)in_stack_00000048 + 0x1c);
                  lVar16 = *in_stack_00000048;
                  lVar14 = *(longlong *)(lVar16 + 0x30);
                  uVar2 = *(undefined8 *)(lVar16 + 0x40);
                  if (lVar14 == *(longlong *)(lVar16 + 0x20)) {
                    pdb_142d7e7c0(lVar16 + 0x20);
                  }
                  lVar21 = *(longlong *)(lVar16 + 0x28);
                  lVar25 = lVar14 * 0x30;
                  *(undefined4 *)(lVar21 + lVar25) = 1;
                  *(ulonglong *)(lVar21 + 4 + lVar25) = CONCAT44(fVar28,fVar33);
                  *(float *)(lVar21 + 0xc + lVar25) = fVar32;
                  *(undefined4 *)(lVar21 + 0x10 + lVar25) = 1;
                  *(float *)(lVar21 + 0x14 + lVar25) = fVar31;
                  *(longlong *)(lVar21 + 0x18 + lVar25) = lVar23;
                  *(undefined2 *)(lVar21 + 0x20 + lVar25) = 0;
                  *(undefined8 *)(lVar21 + 0x28 + lVar25) = uVar2;
                  *(longlong *)(lVar16 + 0x30) = lVar14 + 1;
                  *(longlong *)(lVar16 + 0x40) = *(longlong *)(lVar16 + 0x40) + 1;
                  *(undefined4 *)in_stack_00000030[2] =
                       *(undefined4 *)((longlong)in_stack_00000030 + 0x1c);
                  *(undefined4 *)(puVar7 + 5) = 1;
                  lVar23 = 0x2c;
                }
                else {
                  fVar31 = (fVar28 + *(float *)(lVar16 + -0x20)) - fStack_90;
                  *(undefined4 *)in_stack_00000030[2] =
                       *(undefined4 *)((longlong)in_stack_00000030 + 0x1c);
                  *(undefined4 *)(puVar7 + 3) = 1;
                  lVar23 = 0x1c;
                }
                *(float *)((longlong)puVar7 + lVar23) = fVar31;
                return;
              }
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar15,uVar24,&UNK_14335e4f8);
            }
            uVar19 = (ushort)(uVar11 - 1) & (ushort)uVar11;
            uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar19);
          }
          auVar29[0] = -(auVar4[0] == -1);
          auVar29[1] = -(auVar4[1] == -1);
          auVar29[2] = -(auVar4[2] == -1);
          auVar29[3] = -(auVar4[3] == -1);
          auVar29[4] = -(auVar4[4] == -1);
          auVar29[5] = -(auVar4[5] == -1);
          auVar29[6] = -(auVar4[6] == -1);
          auVar29[7] = -(auVar4[7] == -1);
          auVar29[8] = -(auVar4[8] == -1);
          auVar29[9] = -(auVar4[9] == -1);
          auVar29[10] = -(auVar4[10] == -1);
          auVar29[0xb] = -(auVar4[0xb] == -1);
          auVar29[0xc] = -(auVar4[0xc] == -1);
          auVar29[0xd] = -(auVar4[0xd] == -1);
          auVar29[0xe] = -(auVar4[0xe] == -1);
          auVar29[0xf] = -(auVar4[0xf] == -1);
          if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar29 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar29 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar29 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar29 >> 0x2f,0) & 1) != 0) || (SUB161(auVar29 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar29 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar29 >> 0x47,0) & 1) != 0) || (SUB161(auVar29 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar29 >> 0x57,0) & 1) != 0) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') break;
          uVar12 = uVar12 + lVar14 + 0x10;
          lVar14 = lVar14 + 0x10;
        }
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143064320);
    }
  }
  return;
}

