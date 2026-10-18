// VA 0x140b02e20, PDB extent 2020 bytes
// country_core::systems::render_loop::draw_passes::custom_cursor_pass::custom_cursor_pass
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/custom_cursor_pass.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::custom_cursor_pass::custom_cursor_pass
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/custom_cursor_pass.rs
   Extent: 2020 */

void pdb_140b02e20(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  char cVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined *puVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ushort uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined *unaff_R12;
  longlong unaff_R13;
  undefined1 *unaff_R14;
  ulonglong uVar22;
  undefined *unaff_R15;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auStack_bc [20];
  undefined4 auStack_a8 [2];
  undefined8 uStack_a0;
  undefined8 *puStack_88;
  undefined *puStack_80;
  undefined1 *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  longlong *plStack_60;
  undefined8 uStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  cVar11 = pdb_140e94b40();
  plStack_50 = (longlong *)CONCAT71(plStack_50._1_7_,cVar11);
  if (cVar11 == '\0') goto LAB_140b02fdb;
  unaff_R15 = &UNK_143053979;
  unaff_R14 = (undefined1 *)0x57;
  uVar17 = 0x57;
  lVar12 = pdb_140b05ec0(&UNK_143053979);
  if (lVar12 == 1) {
    if (uVar17 < 0x58) {
      unaff_R15 = &UNK_143053979;
      uVar13 = pdb_140b05ec0(&UNK_143053979);
      if ((uVar13 & 1) != 0) {
        if (0x57 < uVar17 + 2) goto LAB_140b034d6;
        unaff_R14 = (undefined1 *)(0x55 - uVar17);
        unaff_R15 = &UNK_14305397b + uVar17;
      }
      goto LAB_140b02ec0;
    }
  }
  else {
LAB_140b02ec0:
    puVar14 = &UNK_14305313a;
    unaff_R12 = &UNK_1430530ed;
    do {
      pbVar1 = puVar14 + -1;
      uVar16 = (uint)(char)*pbVar1;
      if ((int)uVar16 < 0) {
        bVar5 = puVar14[-2];
        if ((char)bVar5 < -0x40) {
          bVar6 = puVar14[-3];
          if ((char)bVar6 < -0x40) {
            pbVar2 = puVar14 + -4;
            puVar14 = puVar14 + -4;
            uVar16 = bVar6 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar14 = puVar14 + -3;
            uVar16 = bVar6 & 0xf;
          }
          uVar16 = bVar5 & 0x3f | uVar16 << 6;
        }
        else {
          puVar14 = puVar14 + -2;
          uVar16 = bVar5 & 0x1f;
        }
        uVar16 = (uint)(*pbVar1 & 0x3f) | uVar16 << 6;
        if (uVar16 != 0x5c) goto LAB_140b02f49;
LAB_140b02f5f:
        if ((undefined *)0x4d < puVar14 + -0x1430530ec) goto LAB_140b03493;
        unaff_R13 = 0x4c - (longlong)(puVar14 + -0x1430530ed);
        unaff_R12 = puVar14 + 1;
        goto LAB_140b02f83;
      }
      puVar14 = puVar14 + -1;
      if (uVar16 == 0x5c) goto LAB_140b02f5f;
LAB_140b02f49:
      if (uVar16 == 0x2f) goto LAB_140b02f5f;
    } while (puVar14 != &UNK_1430530ed);
    unaff_R13 = 0x4d;
LAB_140b02f83:
    plVar15 = (longlong *)pdb_140e97000();
    if ((char)plVar15[0xd] != '\x01') goto LAB_140b0345f;
    do {
      if (*plVar15 == 0) {
        *plVar15 = -1;
        plStack_60 = plVar15;
        uStack_58 = pdb_140e94f10(plVar15 + 1,unaff_R15,unaff_R14,unaff_R12,unaff_R13,1,0);
        *plStack_60 = *plStack_60 + 1;
LAB_140b02fdb:
        if (*(longlong *)(param_2 + 0x88) != 0) {
          lVar12 = *(longlong *)(param_2 + 0x70);
          uVar17 = *(ulonglong *)(param_2 + 0x78);
          uVar13 = 0x7d09499a2a58ccaf;
          lVar18 = 0;
          while( true ) {
            uVar13 = uVar13 & uVar17;
            pcVar3 = (char *)(lVar12 + uVar13);
            auVar27[0] = -(*pcVar3 == DAT_142e34280);
            auVar27[1] = -(pcVar3[1] == DAT_142e34280._1_1_);
            auVar27[2] = -(pcVar3[2] == DAT_142e34280._2_1_);
            auVar27[3] = -(pcVar3[3] == DAT_142e34280._3_1_);
            auVar27[4] = -(pcVar3[4] == DAT_142e34280._4_1_);
            auVar27[5] = -(pcVar3[5] == DAT_142e34280._5_1_);
            auVar27[6] = -(pcVar3[6] == DAT_142e34280._6_1_);
            auVar27[7] = -(pcVar3[7] == DAT_142e34280._7_1_);
            auVar27[8] = -(pcVar3[8] == DAT_142e34280._8_1_);
            auVar27[9] = -(pcVar3[9] == DAT_142e34280._9_1_);
            auVar27[10] = -(pcVar3[10] == DAT_142e34280._10_1_);
            auVar27[0xb] = -(pcVar3[0xb] == DAT_142e34280._11_1_);
            auVar27[0xc] = -(pcVar3[0xc] == DAT_142e34280._12_1_);
            auVar27[0xd] = -(pcVar3[0xd] == DAT_142e34280._13_1_);
            auVar27[0xe] = -(pcVar3[0xe] == DAT_142e34280._14_1_);
            auVar27[0xf] = -(pcVar3[0xf] == DAT_142e34280._15_1_);
            uVar19 = (ushort)(SUB161(auVar27 >> 7,0) & 1) |
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
            uVar16 = (uint)uVar19;
            while (uVar19 != 0) {
              uVar9 = 0;
              for (uVar10 = uVar16; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
                uVar9 = uVar9 + 1;
              }
              uVar20 = uVar9 + uVar13 & uVar17;
              pcVar4 = (char *)(lVar12 + -0x18 + uVar20 * -0x18);
              auVar28[0] = -(*pcVar4 == DAT_142e42330);
              auVar28[1] = -(pcVar4[1] == UNK_142e42331);
              auVar28[2] = -(pcVar4[2] == UNK_142e42332);
              auVar28[3] = -(pcVar4[3] == UNK_142e42333);
              auVar28[4] = -(pcVar4[4] == UNK_142e42334);
              auVar28[5] = -(pcVar4[5] == UNK_142e42335);
              auVar28[6] = -(pcVar4[6] == UNK_142e42336);
              auVar28[7] = -(pcVar4[7] == UNK_142e42337);
              auVar28[8] = -(pcVar4[8] == UNK_142e42338);
              auVar28[9] = -(pcVar4[9] == UNK_142e42339);
              auVar28[10] = -(pcVar4[10] == UNK_142e4233a);
              auVar28[0xb] = -(pcVar4[0xb] == UNK_142e4233b);
              auVar28[0xc] = -(pcVar4[0xc] == UNK_142e4233c);
              auVar28[0xd] = -(pcVar4[0xd] == UNK_142e4233d);
              auVar28[0xe] = -(pcVar4[0xe] == UNK_142e4233e);
              auVar28[0xf] = -(pcVar4[0xf] == UNK_142e4233f);
              if ((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
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
                          (ushort)(auVar28[0xf] >> 7) << 0xf) == 0xffff) {
                uVar13 = *(ulonglong *)(lVar12 + uVar20 * -0x18 + -8);
                uVar20 = *(ulonglong *)(param_2 + 0x210);
                if (uVar20 <= uVar13) goto LAB_140b03179;
                lVar18 = *(longlong *)(param_2 + 0x208);
                uVar13 = *(ulonglong *)(lVar18 + uVar13 * 8);
                if (uVar13 == 0) goto LAB_140b03179;
                lVar7 = *(longlong *)(param_2 + 0x1d8);
                lVar21 = ~uVar13 * 0x40;
                if (*(longlong *)(lVar7 + 0x20 + lVar21) == 0) goto LAB_140b03179;
                if (*(char *)(*(longlong *)(lVar21 + lVar7 + 0x10) + 0xf4) == '\0')
                goto LAB_140b033ea;
                uVar13 = 0x7138c34c528b712f;
                lVar21 = 0;
                goto LAB_140b0310b;
              }
              uVar19 = (ushort)(uVar16 - 1) & (ushort)uVar16;
              uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar19);
            }
            auVar24[0] = -(*pcVar3 == -1);
            auVar24[1] = -(pcVar3[1] == -1);
            auVar24[2] = -(pcVar3[2] == -1);
            auVar24[3] = -(pcVar3[3] == -1);
            auVar24[4] = -(pcVar3[4] == -1);
            auVar24[5] = -(pcVar3[5] == -1);
            auVar24[6] = -(pcVar3[6] == -1);
            auVar24[7] = -(pcVar3[7] == -1);
            auVar24[8] = -(pcVar3[8] == -1);
            auVar24[9] = -(pcVar3[9] == -1);
            auVar24[10] = -(pcVar3[10] == -1);
            auVar24[0xb] = -(pcVar3[0xb] == -1);
            auVar24[0xc] = -(pcVar3[0xc] == -1);
            auVar24[0xd] = -(pcVar3[0xd] == -1);
            auVar24[0xe] = -(pcVar3[0xe] == -1);
            auVar24[0xf] = -(pcVar3[0xf] == -1);
            if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar24 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar24 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar24 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x3f,0) & 1) != 0) || (SUB161(auVar24 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
            uVar13 = uVar13 + lVar18 + 0x10;
            lVar18 = lVar18 + 0x10;
          }
        }
LAB_140b03179:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143053140);
      }
LAB_140b03453:
      plVar15 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140b0345f:
      plVar15 = (longlong *)pdb_142d8ec20(plVar15,0);
    } while (plVar15 != (longlong *)0x0);
LAB_140b03487:
    pdb_142dc7890(&UNK_143326860);
LAB_140b03493:
    pdb_142dc8070(&UNK_1430530ed,0x4d);
  }
  pdb_142dc8070(&UNK_143053979,0x57,0);
LAB_140b034d6:
  pdb_142dc8070(&UNK_143053979,0x57);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
LAB_140b0310b:
  uVar13 = uVar13 & uVar17;
  pcVar3 = (char *)(lVar12 + uVar13);
  auVar29[0] = -(*pcVar3 == DAT_142e33d90);
  auVar29[1] = -(pcVar3[1] == DAT_142e33d90._1_1_);
  auVar29[2] = -(pcVar3[2] == DAT_142e33d90._2_1_);
  auVar29[3] = -(pcVar3[3] == DAT_142e33d90._3_1_);
  auVar29[4] = -(pcVar3[4] == DAT_142e33d90._4_1_);
  auVar29[5] = -(pcVar3[5] == DAT_142e33d90._5_1_);
  auVar29[6] = -(pcVar3[6] == DAT_142e33d90._6_1_);
  auVar29[7] = -(pcVar3[7] == DAT_142e33d90._7_1_);
  auVar29[8] = -(pcVar3[8] == DAT_142e33d90._8_1_);
  auVar29[9] = -(pcVar3[9] == DAT_142e33d90._9_1_);
  auVar29[10] = -(pcVar3[10] == DAT_142e33d90._10_1_);
  auVar29[0xb] = -(pcVar3[0xb] == DAT_142e33d90._11_1_);
  auVar29[0xc] = -(pcVar3[0xc] == DAT_142e33d90._12_1_);
  auVar29[0xd] = -(pcVar3[0xd] == DAT_142e33d90._13_1_);
  auVar29[0xe] = -(pcVar3[0xe] == DAT_142e33d90._14_1_);
  auVar29[0xf] = -(pcVar3[0xf] == DAT_142e33d90._15_1_);
  uVar19 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
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
           (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf;
  uVar16 = (uint)uVar19;
  while (uVar19 != 0) {
    uVar9 = 0;
    for (uVar10 = uVar16; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar9 = uVar9 + 1;
    }
    uVar22 = uVar9 + uVar13 & uVar17;
    pcVar4 = (char *)(lVar12 + -0x18 + uVar22 * -0x18);
    auVar30[0] = -(*pcVar4 == DAT_142e340c0);
    auVar30[1] = -(pcVar4[1] == DAT_142e340c0._1_1_);
    auVar30[2] = -(pcVar4[2] == DAT_142e340c0._2_1_);
    auVar30[3] = -(pcVar4[3] == DAT_142e340c0._3_1_);
    auVar30[4] = -(pcVar4[4] == DAT_142e340c0._4_1_);
    auVar30[5] = -(pcVar4[5] == DAT_142e340c0._5_1_);
    auVar30[6] = -(pcVar4[6] == DAT_142e340c0._6_1_);
    auVar30[7] = -(pcVar4[7] == DAT_142e340c0._7_1_);
    auVar30[8] = -(pcVar4[8] == DAT_142e340c0._8_1_);
    auVar30[9] = -(pcVar4[9] == DAT_142e340c0._9_1_);
    auVar30[10] = -(pcVar4[10] == DAT_142e340c0._10_1_);
    auVar30[0xb] = -(pcVar4[0xb] == DAT_142e340c0._11_1_);
    auVar30[0xc] = -(pcVar4[0xc] == DAT_142e340c0._12_1_);
    auVar30[0xd] = -(pcVar4[0xd] == DAT_142e340c0._13_1_);
    auVar30[0xe] = -(pcVar4[0xe] == DAT_142e340c0._14_1_);
    auVar30[0xf] = -(pcVar4[0xf] == DAT_142e340c0._15_1_);
    if ((ushort)((ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar13 = *(ulonglong *)(lVar12 + uVar22 * -0x18 + -8);
      if (((uVar20 <= uVar13) || (uVar13 = *(ulonglong *)(lVar18 + uVar13 * 8), uVar13 == 0)) ||
         (lVar21 = ~uVar13 * 0x40, *(longlong *)(lVar7 + 0x20 + lVar21) == 0)) goto LAB_140b0333f;
      unaff_R15 = (undefined *)((longlong)&uStack_68 + 4);
      uVar13 = **(ulonglong **)(lVar21 + lVar7 + 0x10);
      auVar23._0_8_ = uVar13 & 0xffffffff;
      auVar23._8_4_ = (int)(uVar13 >> 0x20);
      auVar23._12_4_ = 0;
      uStack_68 = CONCAT44((float)(SUB168(auVar23 | _DAT_142e33010,8) - DAT_142e33010._8_8_),
                           (float)(SUB168(auVar23 | _DAT_142e33010,0) - (double)DAT_142e33010));
      uVar13 = 0x1d6a82b468dfb8a2;
      lVar21 = 0;
      goto LAB_140b0320e;
    }
    uVar19 = (ushort)(uVar16 - 1) & (ushort)uVar16;
    uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar19);
  }
  auVar25[0] = -(*pcVar3 == -1);
  auVar25[1] = -(pcVar3[1] == -1);
  auVar25[2] = -(pcVar3[2] == -1);
  auVar25[3] = -(pcVar3[3] == -1);
  auVar25[4] = -(pcVar3[4] == -1);
  auVar25[5] = -(pcVar3[5] == -1);
  auVar25[6] = -(pcVar3[6] == -1);
  auVar25[7] = -(pcVar3[7] == -1);
  auVar25[8] = -(pcVar3[8] == -1);
  auVar25[9] = -(pcVar3[9] == -1);
  auVar25[10] = -(pcVar3[10] == -1);
  auVar25[0xb] = -(pcVar3[0xb] == -1);
  auVar25[0xc] = -(pcVar3[0xc] == -1);
  auVar25[0xd] = -(pcVar3[0xd] == -1);
  auVar25[0xe] = -(pcVar3[0xe] == -1);
  auVar25[0xf] = -(pcVar3[0xf] == -1);
  if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar25 >> 0x17,0) & 1) != 0) || (SUB161(auVar25 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar25 >> 0x27,0) & 1) != 0) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar25 >> 0x37,0) & 1) != 0) || (SUB161(auVar25 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar25 >> 0x47,0) & 1) != 0) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') {
LAB_140b0333f:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143053158);
  }
  uVar13 = uVar13 + lVar21 + 0x10;
  lVar21 = lVar21 + 0x10;
  goto LAB_140b0310b;
LAB_140b0320e:
  uVar13 = uVar13 & uVar17;
  pcVar3 = (char *)(lVar12 + uVar13);
  auVar34[0] = -(*pcVar3 == DAT_142e34ec0);
  auVar34[1] = -(pcVar3[1] == DAT_142e34ec0._1_1_);
  auVar34[2] = -(pcVar3[2] == DAT_142e34ec0._2_1_);
  auVar34[3] = -(pcVar3[3] == DAT_142e34ec0._3_1_);
  auVar34[4] = -(pcVar3[4] == DAT_142e34ec0._4_1_);
  auVar34[5] = -(pcVar3[5] == DAT_142e34ec0._5_1_);
  auVar34[6] = -(pcVar3[6] == DAT_142e34ec0._6_1_);
  auVar34[7] = -(pcVar3[7] == DAT_142e34ec0._7_1_);
  auVar34[8] = -(pcVar3[8] == DAT_142e34ec0._8_1_);
  auVar34[9] = -(pcVar3[9] == DAT_142e34ec0._9_1_);
  auVar34[10] = -(pcVar3[10] == DAT_142e34ec0._10_1_);
  auVar34[0xb] = -(pcVar3[0xb] == DAT_142e34ec0._11_1_);
  auVar34[0xc] = -(pcVar3[0xc] == DAT_142e34ec0._12_1_);
  auVar34[0xd] = -(pcVar3[0xd] == DAT_142e34ec0._13_1_);
  auVar34[0xe] = -(pcVar3[0xe] == DAT_142e34ec0._14_1_);
  auVar34[0xf] = -(pcVar3[0xf] == DAT_142e34ec0._15_1_);
  uVar19 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf;
  uVar16 = (uint)uVar19;
  while (uVar19 != 0) {
    uVar9 = 0;
    for (uVar10 = uVar16; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar9 = uVar9 + 1;
    }
    uVar22 = uVar9 + uVar13 & uVar17;
    pcVar4 = (char *)(lVar12 + -0x18 + uVar22 * -0x18);
    auVar35[0] = -(*pcVar4 == DAT_142e60e60);
    auVar35[1] = -(pcVar4[1] == DAT_142e60e60._1_1_);
    auVar35[2] = -(pcVar4[2] == DAT_142e60e60._2_1_);
    auVar35[3] = -(pcVar4[3] == DAT_142e60e60._3_1_);
    auVar35[4] = -(pcVar4[4] == DAT_142e60e60._4_1_);
    auVar35[5] = -(pcVar4[5] == DAT_142e60e60._5_1_);
    auVar35[6] = -(pcVar4[6] == DAT_142e60e60._6_1_);
    auVar35[7] = -(pcVar4[7] == DAT_142e60e60._7_1_);
    auVar35[8] = -(pcVar4[8] == DAT_142e60e60._8_1_);
    auVar35[9] = -(pcVar4[9] == DAT_142e60e60._9_1_);
    auVar35[10] = -(pcVar4[10] == DAT_142e60e60._10_1_);
    auVar35[0xb] = -(pcVar4[0xb] == DAT_142e60e60._11_1_);
    auVar35[0xc] = -(pcVar4[0xc] == DAT_142e60e60._12_1_);
    auVar35[0xd] = -(pcVar4[0xd] == DAT_142e60e60._13_1_);
    auVar35[0xe] = -(pcVar4[0xe] == DAT_142e60e60._14_1_);
    auVar35[0xf] = -(pcVar4[0xf] == DAT_142e60e60._15_1_);
    if ((ushort)((ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar13 = *(ulonglong *)(lVar12 + uVar22 * -0x18 + -8);
      if (((uVar20 <= uVar13) || (uVar13 = *(ulonglong *)(lVar18 + uVar13 * 8), uVar13 == 0)) ||
         (lVar21 = ~uVar13 * 0x40, *(longlong *)(lVar7 + 0x20 + lVar21) == 0)) goto LAB_140b03435;
      param_2 = *(longlong *)(lVar21 + lVar7 + 0x10);
      uVar13 = 0x7057b4358e925fdb;
      lVar21 = 0;
      goto LAB_140b032cd;
    }
    uVar19 = (ushort)(uVar16 - 1) & (ushort)uVar16;
    uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar19);
  }
  auVar31[0] = -(*pcVar3 == -1);
  auVar31[1] = -(pcVar3[1] == -1);
  auVar31[2] = -(pcVar3[2] == -1);
  auVar31[3] = -(pcVar3[3] == -1);
  auVar31[4] = -(pcVar3[4] == -1);
  auVar31[5] = -(pcVar3[5] == -1);
  auVar31[6] = -(pcVar3[6] == -1);
  auVar31[7] = -(pcVar3[7] == -1);
  auVar31[8] = -(pcVar3[8] == -1);
  auVar31[9] = -(pcVar3[9] == -1);
  auVar31[10] = -(pcVar3[10] == -1);
  auVar31[0xb] = -(pcVar3[0xb] == -1);
  auVar31[0xc] = -(pcVar3[0xc] == -1);
  auVar31[0xd] = -(pcVar3[0xd] == -1);
  auVar31[0xe] = -(pcVar3[0xe] == -1);
  auVar31[0xf] = -(pcVar3[0xf] == -1);
  if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar31 >> 0x17,0) & 1) != 0) || (SUB161(auVar31 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar31 >> 0x27,0) & 1) != 0) || (SUB161(auVar31 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar31 >> 0x37,0) & 1) != 0) || (SUB161(auVar31 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar31 >> 0x47,0) & 1) != 0) || (SUB161(auVar31 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar31 >> 0x57,0) & 1) != 0) || (SUB161(auVar31 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar31 >> 0x67,0) & 1) != 0) || (SUB161(auVar31 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar31 >> 0x77,0) & 1) != 0) || auVar31[0xf] < '\0') {
LAB_140b03435:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143053170);
  }
  uVar13 = uVar13 + lVar21 + 0x10;
  lVar21 = lVar21 + 0x10;
  goto LAB_140b0320e;
LAB_140b032cd:
  uVar13 = uVar13 & uVar17;
  auVar27 = *(undefined1 (*) [16])(lVar12 + uVar13);
  auVar32[0] = -(auVar27[0] == DAT_142e33d90);
  auVar32[1] = -(auVar27[1] == DAT_142e33d90._1_1_);
  auVar32[2] = -(auVar27[2] == DAT_142e33d90._2_1_);
  auVar32[3] = -(auVar27[3] == DAT_142e33d90._3_1_);
  auVar32[4] = -(auVar27[4] == DAT_142e33d90._4_1_);
  auVar32[5] = -(auVar27[5] == DAT_142e33d90._5_1_);
  auVar32[6] = -(auVar27[6] == DAT_142e33d90._6_1_);
  auVar32[7] = -(auVar27[7] == DAT_142e33d90._7_1_);
  auVar32[8] = -(auVar27[8] == DAT_142e33d90._8_1_);
  auVar32[9] = -(auVar27[9] == DAT_142e33d90._9_1_);
  auVar32[10] = -(auVar27[10] == DAT_142e33d90._10_1_);
  auVar32[0xb] = -(auVar27[0xb] == DAT_142e33d90._11_1_);
  auVar32[0xc] = -(auVar27[0xc] == DAT_142e33d90._12_1_);
  auVar32[0xd] = -(auVar27[0xd] == DAT_142e33d90._13_1_);
  auVar32[0xe] = -(auVar27[0xe] == DAT_142e33d90._14_1_);
  auVar32[0xf] = -(auVar27[0xf] == DAT_142e33d90._15_1_);
  uVar19 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf;
  uVar16 = (uint)uVar19;
joined_r0x000140b032e6:
  if (uVar19 != 0) {
    uVar9 = 0;
    for (uVar10 = uVar16; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar9 = uVar9 + 1;
    }
    uVar22 = uVar9 + uVar13 & uVar17;
    pcVar3 = (char *)(lVar12 + -0x18 + uVar22 * -0x18);
    auVar33[0] = -(*pcVar3 == DAT_142e34350);
    auVar33[1] = -(pcVar3[1] == DAT_142e34350._1_1_);
    auVar33[2] = -(pcVar3[2] == DAT_142e34350._2_1_);
    auVar33[3] = -(pcVar3[3] == DAT_142e34350._3_1_);
    auVar33[4] = -(pcVar3[4] == DAT_142e34350._4_1_);
    auVar33[5] = -(pcVar3[5] == DAT_142e34350._5_1_);
    auVar33[6] = -(pcVar3[6] == DAT_142e34350._6_1_);
    auVar33[7] = -(pcVar3[7] == DAT_142e34350._7_1_);
    auVar33[8] = -(pcVar3[8] == DAT_142e34350._8_1_);
    auVar33[9] = -(pcVar3[9] == DAT_142e34350._9_1_);
    auVar33[10] = -(pcVar3[10] == DAT_142e34350._10_1_);
    auVar33[0xb] = -(pcVar3[0xb] == DAT_142e34350._11_1_);
    auVar33[0xc] = -(pcVar3[0xc] == DAT_142e34350._12_1_);
    auVar33[0xd] = -(pcVar3[0xd] == DAT_142e34350._13_1_);
    auVar33[0xe] = -(pcVar3[0xe] == DAT_142e34350._14_1_);
    auVar33[0xf] = -(pcVar3[0xf] == DAT_142e34350._15_1_);
    if ((ushort)((ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1
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
                ) != 0xffff) goto code_r0x000140b03313;
    uVar17 = *(ulonglong *)(lVar12 + uVar22 * -0x18 + -8);
    if (((uVar17 < uVar20) && (uVar17 = *(ulonglong *)(lVar18 + uVar17 * 8), uVar17 != 0)) &&
       (lVar12 = ~uVar17 * 0x40, *(longlong *)(lVar7 + 0x20 + lVar12) != 0)) {
      unaff_R12 = *(undefined **)(lVar7 + lVar12 + 0x10);
      unaff_R14 = auStack_bc;
      pdb_141527cf0(unaff_R14,param_2,param_1);
      auStack_a8[0] = 0;
      puStack_88 = &uStack_68;
      uStack_a0 = param_3;
      puStack_80 = unaff_R15;
      puStack_78 = unaff_R14;
      puStack_70 = unaff_R12;
      pdb_141762b50(param_1,&UNK_1430531a0,0xd,auStack_a8,&puStack_88);
      pdb_141535bd0(param_2,param_1);
      unaff_R13 = 0xffff;
LAB_140b033ea:
      if ((char)plStack_50 == '\0') {
        return;
      }
      plVar15 = (longlong *)pdb_140e97000();
      if (((char)plVar15[0xd] == '\x01') ||
         (plVar15 = (longlong *)pdb_142d8ec20(plVar15,0), plVar15 != (longlong *)0x0)) {
        if (*plVar15 == 0) {
          *plVar15 = -1;
          plStack_50 = plVar15;
          pdb_140e95370(plVar15 + 1,uStack_58);
          *plStack_50 = *plStack_50 + 1;
          return;
        }
        goto LAB_140b03453;
      }
      goto LAB_140b03487;
    }
    goto LAB_140b03444;
  }
  auVar26[0] = -(auVar27[0] == -1);
  auVar26[1] = -(auVar27[1] == -1);
  auVar26[2] = -(auVar27[2] == -1);
  auVar26[3] = -(auVar27[3] == -1);
  auVar26[4] = -(auVar27[4] == -1);
  auVar26[5] = -(auVar27[5] == -1);
  auVar26[6] = -(auVar27[6] == -1);
  auVar26[7] = -(auVar27[7] == -1);
  auVar26[8] = -(auVar27[8] == -1);
  auVar26[9] = -(auVar27[9] == -1);
  auVar26[10] = -(auVar27[10] == -1);
  auVar26[0xb] = -(auVar27[0xb] == -1);
  auVar26[0xc] = -(auVar27[0xc] == -1);
  auVar26[0xd] = -(auVar27[0xd] == -1);
  auVar26[0xe] = -(auVar27[0xe] == -1);
  auVar26[0xf] = -(auVar27[0xf] == -1);
  if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 || (SUB161(auVar26 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar26 >> 0x17,0) & 1) != 0) || (SUB161(auVar26 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar26 >> 0x27,0) & 1) != 0) || (SUB161(auVar26 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar26 >> 0x37,0) & 1) != 0) || (SUB161(auVar26 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar26 >> 0x47,0) & 1) != 0) || (SUB161(auVar26 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar26 >> 0x57,0) & 1) != 0) || (SUB161(auVar26 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar26 >> 0x67,0) & 1) != 0) || (SUB161(auVar26 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar26 >> 0x77,0) & 1) != 0) || auVar26[0xf] < '\0') {
LAB_140b03444:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143053188);
  }
  uVar13 = uVar13 + lVar21 + 0x10;
  lVar21 = lVar21 + 0x10;
  goto LAB_140b032cd;
code_r0x000140b03313:
  uVar19 = (ushort)(uVar16 - 1) & (ushort)uVar16;
  uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar19);
  goto joined_r0x000140b032e6;
}

