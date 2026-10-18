// VA 0x1409640e0, PDB extent 410 bytes
// country_core::systems::render_loop::draw_passes::draw_shaders::draw_bricks::indirect_draw_bricks
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/draw_shaders/draw_bricks.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::draw_shaders::draw_bricks::indirect_draw_bricks
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/draw_shaders/draw_bricks.rs
   Extent: 410 */

void pdb_1409640e0(int *param_1,longlong param_2,undefined1 param_3,ulonglong param_4,
                  longlong param_5)

{
  char *pcVar1;
  char *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ushort uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  char cVar17;
  longlong lVar18;
  longlong lVar19;
  byte bVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  longlong alStack_50 [6];
  
  iVar14 = (int)param_4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_3) {
  default:
    if ((param_4 >> 0x28 & 1) != 0) {
      return;
    }
    if (*(longlong *)(param_2 + 0x88) != 0) {
      lVar8 = *(longlong *)(param_2 + 0x70);
      uVar7 = 0x4a33d41d47a6b10e;
      lVar18 = 0;
      while( true ) {
        uVar7 = uVar7 & *(ulonglong *)(param_2 + 0x78);
        pcVar1 = (char *)(lVar8 + uVar7);
        auVar21[0] = -(*pcVar1 == DAT_142e34d60);
        auVar21[1] = -(pcVar1[1] == UNK_142e34d61);
        auVar21[2] = -(pcVar1[2] == UNK_142e34d62);
        auVar21[3] = -(pcVar1[3] == UNK_142e34d63);
        auVar21[4] = -(pcVar1[4] == UNK_142e34d64);
        auVar21[5] = -(pcVar1[5] == UNK_142e34d65);
        auVar21[6] = -(pcVar1[6] == UNK_142e34d66);
        auVar21[7] = -(pcVar1[7] == UNK_142e34d67);
        auVar21[8] = -(pcVar1[8] == UNK_142e34d68);
        auVar21[9] = -(pcVar1[9] == UNK_142e34d69);
        auVar21[10] = -(pcVar1[10] == UNK_142e34d6a);
        auVar21[0xb] = -(pcVar1[0xb] == UNK_142e34d6b);
        auVar21[0xc] = -(pcVar1[0xc] == UNK_142e34d6c);
        auVar21[0xd] = -(pcVar1[0xd] == UNK_142e34d6d);
        auVar21[0xe] = -(pcVar1[0xe] == UNK_142e34d6e);
        auVar21[0xf] = -(pcVar1[0xf] == UNK_142e34d6f);
        uVar11 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf
        ;
        uVar13 = (uint)uVar11;
        while (uVar11 != 0) {
          uVar5 = 0;
          for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
            uVar5 = uVar5 + 1;
          }
          uVar9 = uVar5 + uVar7 & *(ulonglong *)(param_2 + 0x78);
          pcVar2 = (char *)(lVar8 + -0x18 + uVar9 * -0x18);
          auVar27[0] = -(*pcVar2 == DAT_142e64880);
          auVar27[1] = -(pcVar2[1] == UNK_142e64881);
          auVar27[2] = -(pcVar2[2] == UNK_142e64882);
          auVar27[3] = -(pcVar2[3] == UNK_142e64883);
          auVar27[4] = -(pcVar2[4] == UNK_142e64884);
          auVar27[5] = -(pcVar2[5] == UNK_142e64885);
          auVar27[6] = -(pcVar2[6] == UNK_142e64886);
          auVar27[7] = -(pcVar2[7] == UNK_142e64887);
          auVar27[8] = -(pcVar2[8] == UNK_142e64888);
          auVar27[9] = -(pcVar2[9] == UNK_142e64889);
          auVar27[10] = -(pcVar2[10] == UNK_142e6488a);
          auVar27[0xb] = -(pcVar2[0xb] == UNK_142e6488b);
          auVar27[0xc] = -(pcVar2[0xc] == UNK_142e6488c);
          auVar27[0xd] = -(pcVar2[0xd] == UNK_142e6488d);
          auVar27[0xe] = -(pcVar2[0xe] == UNK_142e6488e);
          auVar27[0xf] = -(pcVar2[0xf] == UNK_142e6488f);
          if ((ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
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
                      (ushort)(auVar27[0xf] >> 7) << 0xf) == 0xffff) {
            uVar7 = *(ulonglong *)(lVar8 + uVar9 * -0x18 + -8);
            if ((*(ulonglong *)(param_2 + 0x210) <= uVar7) ||
               (uVar7 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar7 * 8), uVar7 == 0))
            goto code_r0x00014096424c;
            lVar8 = ~uVar7 * 0x40;
            if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar8) == 0)
            goto code_r0x00014096424c;
            if (*(char *)(*(longlong *)(*(longlong *)(param_2 + 0x1d8) + lVar8 + 0x10) + 0x10) ==
                '\0') {
              if ((param_4 >> 0x20 & 1) != 0) {
                return;
              }
            }
            else if ((param_4 >> 0x20 & 1) != 0) {
              uVar7 = 0x13 - (ulonglong)(iVar14 == 0);
              goto code_r0x0001409641e2;
            }
            uVar7 = 0x11 - (ulonglong)(iVar14 == 0);
            goto code_r0x0001409641e2;
          }
          uVar11 = (ushort)(uVar13 - 1) & (ushort)uVar13;
          uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar11);
        }
        auVar23[0] = -(*pcVar1 == -1);
        auVar23[1] = -(pcVar1[1] == -1);
        auVar23[2] = -(pcVar1[2] == -1);
        auVar23[3] = -(pcVar1[3] == -1);
        auVar23[4] = -(pcVar1[4] == -1);
        auVar23[5] = -(pcVar1[5] == -1);
        auVar23[6] = -(pcVar1[6] == -1);
        auVar23[7] = -(pcVar1[7] == -1);
        auVar23[8] = -(pcVar1[8] == -1);
        auVar23[9] = -(pcVar1[9] == -1);
        auVar23[10] = -(pcVar1[10] == -1);
        auVar23[0xb] = -(pcVar1[0xb] == -1);
        auVar23[0xc] = -(pcVar1[0xc] == -1);
        auVar23[0xd] = -(pcVar1[0xd] == -1);
        auVar23[0xe] = -(pcVar1[0xe] == -1);
        auVar23[0xf] = -(pcVar1[0xf] == -1);
        if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar23 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar23 >> 0x1f,0) & 1) != 0) || (SUB161(auVar23 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar23 >> 0x37,0) & 1) != 0) || (SUB161(auVar23 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar23 >> 0x47,0) & 1) != 0) || (SUB161(auVar23 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar23 >> 0x57,0) & 1) != 0) || (SUB161(auVar23 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar23 >> 0x77,0) & 1) != 0) || auVar23[0xf] < '\0') break;
        uVar7 = uVar7 + lVar18 + 0x10;
        lVar18 = lVar18 + 0x10;
      }
    }
code_r0x00014096424c:
                    /* WARNING: Subroutine does not return */
    alStack_50[0] = 0x140964258;
    pdb_142dc8150(&UNK_143027598);
  case 2:
    cVar17 = '\0';
    break;
  case 3:
    cVar17 = '\x01';
    break;
  case 4:
    cVar17 = '\x02';
  }
  if (((cVar17 == (char)(param_4 >> 0x30) && iVar14 == 1) & (byte)(param_4 >> 0x28) & 1) == 0) {
    return;
  }
  uVar7 = (ulonglong)((ushort)(param_4 >> 0x30) & 3) | 0x14;
code_r0x0001409641e2:
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar8 = *(longlong *)(param_2 + 0x70);
    uVar9 = *(ulonglong *)(param_2 + 0x78);
    uVar15 = 0x59a9ebec036a11fe;
    lVar18 = 0;
    while( true ) {
      uVar15 = uVar15 & uVar9;
      pcVar1 = (char *)(lVar8 + uVar15);
      auVar28[0] = -(*pcVar1 == DAT_142e33bd0);
      auVar28[1] = -(pcVar1[1] == UNK_142e33bd1);
      auVar28[2] = -(pcVar1[2] == UNK_142e33bd2);
      auVar28[3] = -(pcVar1[3] == UNK_142e33bd3);
      auVar28[4] = -(pcVar1[4] == UNK_142e33bd4);
      auVar28[5] = -(pcVar1[5] == UNK_142e33bd5);
      auVar28[6] = -(pcVar1[6] == UNK_142e33bd6);
      auVar28[7] = -(pcVar1[7] == UNK_142e33bd7);
      auVar28[8] = -(pcVar1[8] == UNK_142e33bd8);
      auVar28[9] = -(pcVar1[9] == UNK_142e33bd9);
      auVar28[10] = -(pcVar1[10] == UNK_142e33bda);
      auVar28[0xb] = -(pcVar1[0xb] == UNK_142e33bdb);
      auVar28[0xc] = -(pcVar1[0xc] == UNK_142e33bdc);
      auVar28[0xd] = -(pcVar1[0xd] == UNK_142e33bdd);
      auVar28[0xe] = -(pcVar1[0xe] == UNK_142e33bde);
      auVar28[0xf] = -(pcVar1[0xf] == UNK_142e33bdf);
      uVar11 = (ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar12 = uVar5 + uVar15 & uVar9;
        pcVar2 = (char *)(lVar8 + -0x18 + uVar12 * -0x18);
        auVar29[0] = -(*pcVar2 == DAT_142e34980);
        auVar29[1] = -(pcVar2[1] == UNK_142e34981);
        auVar29[2] = -(pcVar2[2] == UNK_142e34982);
        auVar29[3] = -(pcVar2[3] == UNK_142e34983);
        auVar29[4] = -(pcVar2[4] == UNK_142e34984);
        auVar29[5] = -(pcVar2[5] == UNK_142e34985);
        auVar29[6] = -(pcVar2[6] == UNK_142e34986);
        auVar29[7] = -(pcVar2[7] == UNK_142e34987);
        auVar29[8] = -(pcVar2[8] == UNK_142e34988);
        auVar29[9] = -(pcVar2[9] == UNK_142e34989);
        auVar29[10] = -(pcVar2[10] == UNK_142e3498a);
        auVar29[0xb] = -(pcVar2[0xb] == UNK_142e3498b);
        auVar29[0xc] = -(pcVar2[0xc] == UNK_142e3498c);
        auVar29[0xd] = -(pcVar2[0xd] == UNK_142e3498d);
        auVar29[0xe] = -(pcVar2[0xe] == UNK_142e3498e);
        auVar29[0xf] = -(pcVar2[0xf] == UNK_142e3498f);
        if ((ushort)((ushort)(SUB161(auVar29 >> 7,0) & 1) |
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
                    (ushort)(auVar29[0xf] >> 7) << 0xf) == 0xffff) {
          uVar15 = *(ulonglong *)(lVar8 + uVar12 * -0x18 + -8);
          if (*(ulonglong *)(param_2 + 0x210) <= uVar15) goto LAB_140af4cda;
          uVar15 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar15 * 8);
          if (uVar15 == 0) goto LAB_140af4cda;
          lVar18 = *(longlong *)(param_2 + 0x1d8);
          lVar19 = ~uVar15 * 0x40;
          if (*(longlong *)(lVar18 + 0x20 + lVar19) == 0) goto LAB_140af4cda;
          plVar3 = *(longlong **)(lVar19 + lVar18 + 0x10);
          uVar15 = 0x1d6a82b468dfb8a2;
          lVar19 = 0;
          goto LAB_140af4b7c;
        }
        uVar11 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar11);
      }
      auVar24[0] = -(*pcVar1 == -1);
      auVar24[1] = -(pcVar1[1] == -1);
      auVar24[2] = -(pcVar1[2] == -1);
      auVar24[3] = -(pcVar1[3] == -1);
      auVar24[4] = -(pcVar1[4] == -1);
      auVar24[5] = -(pcVar1[5] == -1);
      auVar24[6] = -(pcVar1[6] == -1);
      auVar24[7] = -(pcVar1[7] == -1);
      auVar24[8] = -(pcVar1[8] == -1);
      auVar24[9] = -(pcVar1[9] == -1);
      auVar24[10] = -(pcVar1[10] == -1);
      auVar24[0xb] = -(pcVar1[0xb] == -1);
      auVar24[0xc] = -(pcVar1[0xc] == -1);
      auVar24[0xd] = -(pcVar1[0xd] == -1);
      auVar24[0xe] = -(pcVar1[0xe] == -1);
      auVar24[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar24 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar24 >> 0x3f,0) & 1) != 0) || (SUB161(auVar24 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar24 >> 0x4f,0) & 1) != 0) || (SUB161(auVar24 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar24 >> 0x5f,0) & 1) != 0) || (SUB161(auVar24 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar24 >> 0x6f,0) & 1) != 0) || (SUB161(auVar24 >> 0x77,0) & 1) != 0) ||
          auVar24[0xf] < '\0') break;
      uVar15 = uVar15 + lVar18 + 0x10;
      lVar18 = lVar18 + 0x10;
    }
  }
LAB_140af4cda:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143051090);
LAB_140af4b7c:
  uVar15 = uVar15 & uVar9;
  auVar21 = *(undefined1 (*) [16])(lVar8 + uVar15);
  auVar30[0] = -(auVar21[0] == DAT_142e34ec0);
  auVar30[1] = -(auVar21[1] == DAT_142e34ec0._1_1_);
  auVar30[2] = -(auVar21[2] == DAT_142e34ec0._2_1_);
  auVar30[3] = -(auVar21[3] == DAT_142e34ec0._3_1_);
  auVar30[4] = -(auVar21[4] == DAT_142e34ec0._4_1_);
  auVar30[5] = -(auVar21[5] == DAT_142e34ec0._5_1_);
  auVar30[6] = -(auVar21[6] == DAT_142e34ec0._6_1_);
  auVar30[7] = -(auVar21[7] == DAT_142e34ec0._7_1_);
  auVar30[8] = -(auVar21[8] == DAT_142e34ec0._8_1_);
  auVar30[9] = -(auVar21[9] == DAT_142e34ec0._9_1_);
  auVar30[10] = -(auVar21[10] == DAT_142e34ec0._10_1_);
  auVar30[0xb] = -(auVar21[0xb] == DAT_142e34ec0._11_1_);
  auVar30[0xc] = -(auVar21[0xc] == DAT_142e34ec0._12_1_);
  auVar30[0xd] = -(auVar21[0xd] == DAT_142e34ec0._13_1_);
  auVar30[0xe] = -(auVar21[0xe] == DAT_142e34ec0._14_1_);
  auVar30[0xf] = -(auVar21[0xf] == DAT_142e34ec0._15_1_);
  uVar11 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf;
  uVar13 = (uint)uVar11;
  while (uVar11 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar12 = uVar5 + uVar15 & uVar9;
    pcVar1 = (char *)(lVar8 + -0x18 + uVar12 * -0x18);
    auVar31[0] = -(*pcVar1 == DAT_142e60e60);
    auVar31[1] = -(pcVar1[1] == DAT_142e60e60._1_1_);
    auVar31[2] = -(pcVar1[2] == DAT_142e60e60._2_1_);
    auVar31[3] = -(pcVar1[3] == DAT_142e60e60._3_1_);
    auVar31[4] = -(pcVar1[4] == DAT_142e60e60._4_1_);
    auVar31[5] = -(pcVar1[5] == DAT_142e60e60._5_1_);
    auVar31[6] = -(pcVar1[6] == DAT_142e60e60._6_1_);
    auVar31[7] = -(pcVar1[7] == DAT_142e60e60._7_1_);
    auVar31[8] = -(pcVar1[8] == DAT_142e60e60._8_1_);
    auVar31[9] = -(pcVar1[9] == DAT_142e60e60._9_1_);
    auVar31[10] = -(pcVar1[10] == DAT_142e60e60._10_1_);
    auVar31[0xb] = -(pcVar1[0xb] == DAT_142e60e60._11_1_);
    auVar31[0xc] = -(pcVar1[0xc] == DAT_142e60e60._12_1_);
    auVar31[0xd] = -(pcVar1[0xd] == DAT_142e60e60._13_1_);
    auVar31[0xe] = -(pcVar1[0xe] == DAT_142e60e60._14_1_);
    auVar31[0xf] = -(pcVar1[0xf] == DAT_142e60e60._15_1_);
    if ((ushort)((ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1
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
                ) == 0xffff) {
      uVar9 = *(ulonglong *)(lVar8 + uVar12 * -0x18 + -8);
      if (((uVar9 < *(ulonglong *)(param_2 + 0x210)) &&
          (uVar9 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar9 * 8), uVar9 != 0)) &&
         (lVar8 = ~uVar9 * 0x40, *(longlong *)(lVar18 + 0x20 + lVar8) != 0)) {
        if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc83b0(&UNK_1430510d8,0xf,&UNK_1430510e8);
        }
        uVar4 = *(undefined8 *)(lVar18 + lVar8 + 0x10);
        lVar8 = *(longlong *)(param_1 + 2);
        alStack_50[0] = lVar8;
        if (plVar3[3] != 0) {
          uVar9 = pdb_1400af0a0(plVar3 + 4,alStack_50);
          lVar18 = *plVar3;
          bVar20 = (byte)(uVar9 >> 0x39);
          auVar21 = ZEXT216(CONCAT11(bVar20,bVar20));
          auVar21 = pshuflw(auVar21,auVar21,0);
          lVar19 = 0;
          while( true ) {
            uVar9 = uVar9 & plVar3[1];
            auVar27 = *(undefined1 (*) [16])(lVar18 + uVar9);
            auVar26[0] = -(auVar27[0] == auVar21[0]);
            auVar26[1] = -(auVar27[1] == auVar21[1]);
            auVar26[2] = -(auVar27[2] == auVar21[2]);
            auVar26[3] = -(auVar27[3] == auVar21[3]);
            auVar26[4] = -(auVar27[4] == auVar21[4]);
            auVar26[5] = -(auVar27[5] == auVar21[5]);
            auVar26[6] = -(auVar27[6] == auVar21[6]);
            auVar26[7] = -(auVar27[7] == auVar21[7]);
            auVar26[8] = -(auVar27[8] == auVar21[0]);
            auVar26[9] = -(auVar27[9] == auVar21[1]);
            auVar26[10] = -(auVar27[10] == auVar21[2]);
            auVar26[0xb] = -(auVar27[0xb] == auVar21[3]);
            auVar26[0xc] = -(auVar27[0xc] == auVar21[4]);
            auVar26[0xd] = -(auVar27[0xd] == auVar21[5]);
            auVar26[0xe] = -(auVar27[0xe] == auVar21[6]);
            auVar26[0xf] = -(auVar27[0xf] == auVar21[7]);
            uVar11 = (ushort)(SUB161(auVar26 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar26[0xf] >> 7) << 0xf;
            uVar13 = (uint)uVar11;
            while (uVar11 != 0) {
              uVar5 = 0;
              for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
                uVar5 = uVar5 + 1;
              }
              lVar16 = (uVar5 + uVar9 & plVar3[1]) * -0x30;
              if (lVar8 == *(longlong *)(lVar18 + -0x30 + lVar16)) {
                lVar18 = lVar18 + lVar16;
                pdb_141528190(alStack_50,uVar4,param_5);
                lVar8 = pdb_141a076a0(param_5,lVar18 + -0x28);
                uVar10 = pdb_140e17290(lVar18 + -0x10,lVar8);
                *(byte *)(lVar8 + 0x28a) = *(byte *)(lVar8 + 0x28a) | 1;
                *(undefined8 *)(lVar8 + 200) = uVar10;
                if (*(char *)(lVar18 + -4) == '\0') {
                  pdb_140e25450(param_5);
                }
                else {
                  *(byte *)(param_5 + 0x288) = *(byte *)(param_5 + 0x288) | 0x80;
                  *(byte *)(param_5 + 0x83) = *(byte *)(param_5 + 0x83) | 2;
                  *(undefined1 *)(param_5 + 0x82) = 0;
                }
                pdb_140e24cb0(param_5,alStack_50,uVar7 * 0x14,1);
                pdb_141535a80(uVar4,param_5);
                return;
              }
              uVar11 = (ushort)(uVar13 - 1) & (ushort)uVar13;
              uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar11);
            }
            auVar22[0] = -(auVar27[0] == -1);
            auVar22[1] = -(auVar27[1] == -1);
            auVar22[2] = -(auVar27[2] == -1);
            auVar22[3] = -(auVar27[3] == -1);
            auVar22[4] = -(auVar27[4] == -1);
            auVar22[5] = -(auVar27[5] == -1);
            auVar22[6] = -(auVar27[6] == -1);
            auVar22[7] = -(auVar27[7] == -1);
            auVar22[8] = -(auVar27[8] == -1);
            auVar22[9] = -(auVar27[9] == -1);
            auVar22[10] = -(auVar27[10] == -1);
            auVar22[0xb] = -(auVar27[0xb] == -1);
            auVar22[0xc] = -(auVar27[0xc] == -1);
            auVar22[0xd] = -(auVar27[0xd] == -1);
            auVar22[0xe] = -(auVar27[0xe] == -1);
            auVar22[0xf] = -(auVar27[0xf] == -1);
            if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar22 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar22 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar22 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar22 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar22 >> 0x3f,0) & 1) != 0) || (SUB161(auVar22 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar22 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar22 >> 0x57,0) & 1) != 0) || (SUB161(auVar22 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar22 >> 0x67,0) & 1) != 0) || (SUB161(auVar22 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar22 >> 0x77,0) & 1) != 0) || auVar22[0xf] < '\0') break;
            uVar9 = uVar9 + lVar19 + 0x10;
            lVar19 = lVar19 + 0x10;
          }
        }
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1430510c0);
      }
      goto LAB_140af4d44;
    }
    uVar11 = (ushort)(uVar13 - 1) & (ushort)uVar13;
    uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar11);
  }
  auVar25[0] = -(auVar21[0] == -1);
  auVar25[1] = -(auVar21[1] == -1);
  auVar25[2] = -(auVar21[2] == -1);
  auVar25[3] = -(auVar21[3] == -1);
  auVar25[4] = -(auVar21[4] == -1);
  auVar25[5] = -(auVar21[5] == -1);
  auVar25[6] = -(auVar21[6] == -1);
  auVar25[7] = -(auVar21[7] == -1);
  auVar25[8] = -(auVar21[8] == -1);
  auVar25[9] = -(auVar21[9] == -1);
  auVar25[10] = -(auVar21[10] == -1);
  auVar25[0xb] = -(auVar21[0xb] == -1);
  auVar25[0xc] = -(auVar21[0xc] == -1);
  auVar25[0xd] = -(auVar21[0xd] == -1);
  auVar25[0xe] = -(auVar21[0xe] == -1);
  auVar25[0xf] = -(auVar21[0xf] == -1);
  if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar25 >> 0x37,0) & 1) != 0) || (SUB161(auVar25 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar25 >> 0x47,0) & 1) != 0) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') {
LAB_140af4d44:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430510a8);
  }
  uVar15 = uVar15 + lVar19 + 0x10;
  lVar19 = lVar19 + 0x10;
  goto LAB_140af4b7c;
}

