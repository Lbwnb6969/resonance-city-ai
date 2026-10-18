// VA 0x140bae660, PDB extent 658 bytes
// country_core::systems::wall::eraser::bulldoze_params::BulldozeParams::play_bulldoze_sound
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/bulldoze_params.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::eraser::bulldoze_params::BulldozeParams::play_bulldoze_sound
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/eraser/bulldoze_params.rs
   Extent: 658 */

void pdb_140bae660(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ushort uVar15;
  longlong lVar16;
  longlong lVar17;
  byte bVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  longlong lStack_48;
  undefined8 uStack_40;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  lStack_48 = param_2;
  if (plVar2[3] != 0) {
    uVar10 = pdb_1400af0a0(plVar2 + 4,&lStack_48);
    lVar17 = *plVar2;
    bVar18 = (byte)(uVar10 >> 0x39);
    auVar20 = ZEXT216(CONCAT11(bVar18,bVar18));
    auVar20 = pshuflw(auVar20,auVar20,0);
    lVar13 = 0;
    while( true ) {
      uVar10 = uVar10 & plVar2[1];
      auVar22 = *(undefined1 (*) [16])(lVar17 + uVar10);
      auVar26[0] = -(auVar22[0] == auVar20[0]);
      auVar26[1] = -(auVar22[1] == auVar20[1]);
      auVar26[2] = -(auVar22[2] == auVar20[2]);
      auVar26[3] = -(auVar22[3] == auVar20[3]);
      auVar26[4] = -(auVar22[4] == auVar20[4]);
      auVar26[5] = -(auVar22[5] == auVar20[5]);
      auVar26[6] = -(auVar22[6] == auVar20[6]);
      auVar26[7] = -(auVar22[7] == auVar20[7]);
      auVar26[8] = -(auVar22[8] == auVar20[0]);
      auVar26[9] = -(auVar22[9] == auVar20[1]);
      auVar26[10] = -(auVar22[10] == auVar20[2]);
      auVar26[0xb] = -(auVar22[0xb] == auVar20[3]);
      auVar26[0xc] = -(auVar22[0xc] == auVar20[4]);
      auVar26[0xd] = -(auVar22[0xd] == auVar20[5]);
      auVar26[0xe] = -(auVar22[0xe] == auVar20[6]);
      auVar26[0xf] = -(auVar22[0xf] == auVar20[7]);
      uVar15 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
      uVar14 = (uint)uVar15;
      while (uVar15 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar14; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        lVar16 = (uVar5 + uVar10 & plVar2[1]) * -0x2b0;
        if (param_2 == *(longlong *)(lVar17 + -0x2b0 + lVar16)) {
          lVar17 = lVar17 + lVar16;
          if ((1 < *(ulonglong *)(lVar17 + -0x298)) && (0.0 < *(float *)(lVar17 + -0x278))) {
            lVar13 = *(longlong *)(lVar17 + -0x260);
            lStack_48 = _DAT_14305a4b0;
            uStack_40 = _DAT_14305a4a0;
            if (lVar13 != 0) {
              puVar3 = *(undefined4 **)(lVar17 + -0x268);
              uVar10 = lVar13 * 0xc - 0xc;
              auVar20._8_8_ = 0;
              auVar20._0_8_ = uVar10;
              if ((SUB164(auVar20 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 3 & 1) == 0) {
                puVar11 = puVar3 + 3;
                auVar24._4_4_ = puVar3[2];
                auVar24._0_4_ = *puVar3;
                auVar24._8_8_ = 0;
                auVar9._8_8_ = _UNK_14305a4b8;
                auVar9._0_8_ = _DAT_14305a4b0;
                auVar21 = minps(auVar9,auVar24);
                lStack_48 = auVar21._0_8_;
                auVar8._8_8_ = _UNK_14305a4a8;
                auVar8._0_8_ = _DAT_14305a4a0;
                auVar22 = maxps(auVar8,auVar24);
                uStack_40 = auVar22._0_8_;
              }
              else {
                auVar22._8_8_ = _UNK_14305a4a8;
                auVar22._0_8_ = _DAT_14305a4a0;
                auVar21._8_8_ = _UNK_14305a4b8;
                auVar21._0_8_ = _DAT_14305a4b0;
                puVar11 = puVar3;
              }
              if (0xb < uVar10) {
                do {
                  auVar25._4_4_ = puVar11[2];
                  auVar25._0_4_ = *puVar11;
                  auVar25._8_8_ = 0;
                  auVar27._4_4_ = puVar11[5];
                  auVar27._0_4_ = puVar11[3];
                  auVar27._8_8_ = 0;
                  auVar20 = minps(auVar21,auVar25);
                  auVar22 = maxps(auVar22,auVar25);
                  auVar21 = minps(auVar20,auVar27);
                  auVar22 = maxps(auVar22,auVar27);
                  puVar11 = puVar11 + 6;
                  lStack_48 = auVar21._0_8_;
                  uStack_40 = auVar22._0_8_;
                } while (puVar11 != puVar3 + lVar13 * 3);
              }
            }
            pdb_140deebd0(&lStack_48);
            uVar1 = *(undefined1 *)(lVar17 + -9);
            fVar19 = (float)pdb_140de8220();
            **(undefined4 **)(param_1 + 0x208) = *(undefined4 *)(param_1 + 0x214);
            lVar17 = *(longlong *)(param_1 + 0x1f8);
            lVar13 = *(longlong *)(lVar17 + 0x30);
            uVar4 = *(undefined8 *)(lVar17 + 0x40);
            if (lVar13 == *(longlong *)(lVar17 + 0x20)) {
              pdb_142d7e6e0(lVar17 + 0x20);
            }
            fVar7 = 0.0;
            if (0.0 <= fVar19) {
              fVar7 = fVar19;
            }
            fVar19 = _DAT_142e36f28;
            if (fVar7 <= _DAT_142e36f28) {
              fVar19 = fVar7;
            }
            lVar16 = *(longlong *)(lVar17 + 0x28);
            lVar12 = lVar13 * 0x20;
            *(undefined8 *)(lVar16 + lVar12) = uVar4;
            *(undefined1 *)(lVar16 + 8 + lVar12) = 0;
            *(undefined1 *)(lVar16 + 9 + lVar12) = uVar1;
            *(float *)(lVar16 + 0xc + lVar12) = fVar19;
            *(undefined4 *)(lVar16 + 0x18 + lVar12) = *(undefined4 *)(param_3 + 1);
            *(undefined8 *)(lVar16 + 0x10 + lVar12) = *param_3;
            *(longlong *)(lVar17 + 0x30) = lVar13 + 1;
            *(longlong *)(lVar17 + 0x40) = *(longlong *)(lVar17 + 0x40) + 1;
            return;
          }
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_143060fd0);
        }
        uVar15 = (ushort)(uVar14 - 1) & (ushort)uVar14;
        uVar14 = CONCAT22((short)(uVar14 - 1 >> 0x10),uVar15);
      }
      auVar23[0] = -(auVar22[0] == -1);
      auVar23[1] = -(auVar22[1] == -1);
      auVar23[2] = -(auVar22[2] == -1);
      auVar23[3] = -(auVar22[3] == -1);
      auVar23[4] = -(auVar22[4] == -1);
      auVar23[5] = -(auVar22[5] == -1);
      auVar23[6] = -(auVar22[6] == -1);
      auVar23[7] = -(auVar22[7] == -1);
      auVar23[8] = -(auVar22[8] == -1);
      auVar23[9] = -(auVar22[9] == -1);
      auVar23[10] = -(auVar22[10] == -1);
      auVar23[0xb] = -(auVar22[0xb] == -1);
      auVar23[0xc] = -(auVar22[0xc] == -1);
      auVar23[0xd] = -(auVar22[0xd] == -1);
      auVar23[0xe] = -(auVar22[0xe] == -1);
      auVar23[0xf] = -(auVar22[0xf] == -1);
      if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar23 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar23 >> 0x3f,0) & 1) != 0) || (SUB161(auVar23 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar23 >> 0x4f,0) & 1) != 0) || (SUB161(auVar23 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar23 >> 0x5f,0) & 1) != 0) || (SUB161(auVar23 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar23 >> 0x6f,0) & 1) != 0) || (SUB161(auVar23 >> 0x77,0) & 1) != 0) ||
          auVar23[0xf] < '\0') break;
      uVar10 = uVar10 + lVar13 + 0x10;
      lVar13 = lVar13 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143060fe8);
}

