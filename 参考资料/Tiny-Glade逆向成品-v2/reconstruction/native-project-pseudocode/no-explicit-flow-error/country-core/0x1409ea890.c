// VA 0x1409ea890, PDB extent 1908 bytes
// country_core::systems::render_loop::compute_passes::reset_indirect_args::reset_indirect_args
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/reset_indirect_args.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::reset_indirect_args::reset_indirect_args
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/reset_indirect_args.rs
   Extent: 1908 */

void pdb_1409ea890(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  int *piVar6;
  undefined8 uVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  ushort uVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_1a0 [16];
  undefined4 uStack_190;
  undefined8 *puStack_18c;
  longlong lStack_184;
  undefined4 uStack_17c;
  undefined8 *puStack_178;
  longlong lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 *puStack_148;
  longlong lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  longlong lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined2 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int *piStack_58;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar15 = *(longlong *)(param_2 + 0x70);
    uVar16 = 0x1d6a82b468dfb8a2;
    lVar17 = 0;
    while( true ) {
      uVar16 = uVar16 & *(ulonglong *)(param_2 + 0x78);
      auVar4 = *(undefined1 (*) [16])(lVar15 + uVar16);
      auVar23[0] = -(auVar4[0] == DAT_142e34ec0);
      auVar23[1] = -(auVar4[1] == DAT_142e34ec0._1_1_);
      auVar23[2] = -(auVar4[2] == DAT_142e34ec0._2_1_);
      auVar23[3] = -(auVar4[3] == DAT_142e34ec0._3_1_);
      auVar23[4] = -(auVar4[4] == DAT_142e34ec0._4_1_);
      auVar23[5] = -(auVar4[5] == DAT_142e34ec0._5_1_);
      auVar23[6] = -(auVar4[6] == DAT_142e34ec0._6_1_);
      auVar23[7] = -(auVar4[7] == DAT_142e34ec0._7_1_);
      auVar23[8] = -(auVar4[8] == DAT_142e34ec0._8_1_);
      auVar23[9] = -(auVar4[9] == DAT_142e34ec0._9_1_);
      auVar23[10] = -(auVar4[10] == DAT_142e34ec0._10_1_);
      auVar23[0xb] = -(auVar4[0xb] == DAT_142e34ec0._11_1_);
      auVar23[0xc] = -(auVar4[0xc] == DAT_142e34ec0._12_1_);
      auVar23[0xd] = -(auVar4[0xd] == DAT_142e34ec0._13_1_);
      auVar23[0xe] = -(auVar4[0xe] == DAT_142e34ec0._14_1_);
      auVar23[0xf] = -(auVar4[0xf] == DAT_142e34ec0._15_1_);
      uVar19 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
      uVar18 = (uint)uVar19;
      while (uVar19 != 0) {
        uVar9 = 0;
        for (uVar10 = uVar18; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
          uVar9 = uVar9 + 1;
        }
        uVar20 = uVar9 + uVar16 & *(ulonglong *)(param_2 + 0x78);
        pcVar3 = (char *)(lVar15 + -0x18 + uVar20 * -0x18);
        auVar24[0] = -(*pcVar3 == DAT_142e60e60);
        auVar24[1] = -(pcVar3[1] == DAT_142e60e60._1_1_);
        auVar24[2] = -(pcVar3[2] == DAT_142e60e60._2_1_);
        auVar24[3] = -(pcVar3[3] == DAT_142e60e60._3_1_);
        auVar24[4] = -(pcVar3[4] == DAT_142e60e60._4_1_);
        auVar24[5] = -(pcVar3[5] == DAT_142e60e60._5_1_);
        auVar24[6] = -(pcVar3[6] == DAT_142e60e60._6_1_);
        auVar24[7] = -(pcVar3[7] == DAT_142e60e60._7_1_);
        auVar24[8] = -(pcVar3[8] == DAT_142e60e60._8_1_);
        auVar24[9] = -(pcVar3[9] == DAT_142e60e60._9_1_);
        auVar24[10] = -(pcVar3[10] == DAT_142e60e60._10_1_);
        auVar24[0xb] = -(pcVar3[0xb] == DAT_142e60e60._11_1_);
        auVar24[0xc] = -(pcVar3[0xc] == DAT_142e60e60._12_1_);
        auVar24[0xd] = -(pcVar3[0xd] == DAT_142e60e60._13_1_);
        auVar24[0xe] = -(pcVar3[0xe] == DAT_142e60e60._14_1_);
        auVar24[0xf] = -(pcVar3[0xf] == DAT_142e60e60._15_1_);
        if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar24[0xf] >> 7) << 0xf) == 0xffff) {
          uVar16 = *(ulonglong *)(lVar15 + uVar20 * -0x18 + -8);
          if ((uVar16 < *(ulonglong *)(param_2 + 0x210)) &&
             (uVar16 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar16 * 8), uVar16 != 0)) {
            lVar15 = ~uVar16 * 0x40;
            if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar15) != 0) {
              uVar5 = *(undefined8 *)(*(longlong *)(param_2 + 0x1d8) + lVar15 + 0x10);
              pdb_14152ebf0(auStack_1a0,uVar5,param_1);
              pdb_14152b6c0(&puStack_98,uVar5,param_1);
              uStack_17c = (undefined4)uStack_88;
              puStack_18c = puStack_98;
              lStack_184 = lStack_90;
              piVar6 = *(int **)(param_1 + 0x1e8);
              if (*piVar6 != 1) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_143032da8);
              }
              piVar1 = piVar6 + 2;
              LOCK();
              bVar21 = (char)piVar6[2] == '\0';
              if (bVar21) {
                *(char *)(piVar6 + 2) = '\x01';
              }
              UNLOCK();
              if (!bVar21) {
                pdb_142dbd1a0(piVar1);
              }
              piStack_58 = piVar1;
              pdb_140e9a150(piVar1);
              uVar7 = *(undefined8 *)(param_1 + 0x1e8);
              uStack_49 = 1;
              pdb_140e26410(&puStack_98,piVar6 + 4,uVar7,0x80,0);
              uVar12 = _UNK_143021a08;
              uVar11 = _DAT_143021a00;
              if (lStack_90 == 0x80) {
                *puStack_98 = _DAT_143021a00;
                puStack_98[1] = uVar12;
                puStack_98[2] = uVar11;
                puStack_98[3] = uVar12;
                puStack_98[4] = uVar11;
                puStack_98[5] = uVar12;
                puStack_98[6] = uVar11;
                puStack_98[7] = uVar12;
                puStack_98[8] = uVar11;
                puStack_98[9] = uVar12;
                puStack_98[10] = uVar11;
                puStack_98[0xb] = uVar12;
                puStack_98[0xc] = uVar11;
                puStack_98[0xd] = uVar12;
                puStack_98[0xe] = uVar11;
                puStack_98[0xf] = uVar12;
                uStack_128 = uStack_78;
                uStack_120 = uStack_70;
                uStack_138 = uStack_88;
                uStack_130 = uStack_80;
                puStack_148 = puStack_98;
                lStack_140 = lStack_90;
                uStack_4a = 1;
                uStack_4b = 1;
                pdb_140e26410(&puStack_98,piVar6 + 4,uVar7,0x1cc,0);
                if (lStack_90 == 0x1cc) {
                  pub_142e32760(puStack_98,&UNK_143032538,0x1cc);
                  puStack_178 = puStack_98;
                  lStack_170 = lStack_90;
                  uStack_168 = uStack_88;
                  uStack_160 = uStack_80;
                  uStack_158 = uStack_78;
                  uStack_150 = uStack_70;
                  uStack_4c = 1;
                  pdb_140e9a350();
                  LOCK();
                  bVar21 = (char)*piStack_58 == '\x01';
                  if (bVar21) {
                    *(char *)piStack_58 = '\0';
                  }
                  UNLOCK();
                  if (!bVar21) {
                    uStack_4c = 1;
                    pdb_142dbcef0(piStack_58,0);
                  }
                  uStack_4c = 1;
                  pdb_140e29900(&puStack_118,param_1,&UNK_143032704,0x13);
                  uVar7 = uStack_108;
                  lVar15 = lStack_110;
                  puVar14 = puStack_118;
                  if (lStack_110 != 0) {
                    puVar2 = puStack_118 + 0x1b;
                    uStack_4d = 1;
                    lStack_a8 = param_1;
                    uStack_a0 = uVar5;
                    pdb_141764080(puStack_118[0x19],puStack_118[0x1a],puVar2,puStack_118[0x10],
                                  puStack_118[0x11],uStack_e0,lStack_110,uStack_108,uStack_190,0x35,
                                  *(undefined4 *)(puStack_118 + 0x49));
                    uVar13 = uStack_17c;
                    uStack_4d = 1;
                    pdb_141764080(puVar14[0x19],puVar14[0x1a],puVar2,puVar14[0x10],puVar14[0x11],
                                  uStack_e0,lVar15,uVar7,uStack_17c,0x35,
                                  *(undefined4 *)(puVar14 + 0x49));
                    uStack_68 = uStack_e8;
                    uStack_78 = uStack_f8;
                    uStack_70 = uStack_f0;
                    uStack_88 = uStack_108;
                    uStack_80 = uStack_100;
                    puStack_98 = puStack_118;
                    lStack_90 = lStack_110;
                    uStack_b8 = uStack_190;
                    uStack_b4 = uVar13;
                    uStack_d8 = uStack_138;
                    uStack_b0 = (undefined4)uStack_120;
                    uStack_c8 = uStack_128;
                    uStack_d0 = uStack_168;
                    uStack_ac = (undefined4)uStack_150;
                    uStack_c0 = uStack_158;
                    uStack_4d = 0;
                    pdb_14177b110(&puStack_98,&uStack_d8);
                    uVar5 = uStack_a0;
                    lVar15 = lStack_a8;
                    pdb_141538380(uStack_a0,lStack_a8);
                    pdb_141539c80(uVar5,lVar15);
                    return;
                  }
                  uStack_4d = 1;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8150(&UNK_143332e78);
                }
                pdb_142dc85e0(lStack_90,0x1cc,&UNK_143389710);
              }
              else {
                pdb_142dc85e0(lStack_90,0x80,&UNK_143389710);
              }
                    /* WARNING: Does not return */
              pcVar8 = (code *)invalidInstructionException();
              (*pcVar8)();
            }
          }
          goto LAB_1409ead41;
        }
        uVar19 = (ushort)(uVar18 - 1) & (ushort)uVar18;
        uVar18 = CONCAT22((short)(uVar18 - 1 >> 0x10),uVar19);
      }
      auVar22[0] = -(auVar4[0] == -1);
      auVar22[1] = -(auVar4[1] == -1);
      auVar22[2] = -(auVar4[2] == -1);
      auVar22[3] = -(auVar4[3] == -1);
      auVar22[4] = -(auVar4[4] == -1);
      auVar22[5] = -(auVar4[5] == -1);
      auVar22[6] = -(auVar4[6] == -1);
      auVar22[7] = -(auVar4[7] == -1);
      auVar22[8] = -(auVar4[8] == -1);
      auVar22[9] = -(auVar4[9] == -1);
      auVar22[10] = -(auVar4[10] == -1);
      auVar22[0xb] = -(auVar4[0xb] == -1);
      auVar22[0xc] = -(auVar4[0xc] == -1);
      auVar22[0xd] = -(auVar4[0xd] == -1);
      auVar22[0xe] = -(auVar4[0xe] == -1);
      auVar22[0xf] = -(auVar4[0xf] == -1);
      if ((((((((((((((((SUB161(auVar22 >> 7,0) & 1) != 0 || (SUB161(auVar22 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar22 >> 0x17,0) & 1) != 0) || (SUB161(auVar22 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar22 >> 0x27,0) & 1) != 0) || (SUB161(auVar22 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar22 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar22 >> 0x3f,0) & 1) != 0) || (SUB161(auVar22 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar22 >> 0x4f,0) & 1) != 0) || (SUB161(auVar22 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar22 >> 0x5f,0) & 1) != 0) || (SUB161(auVar22 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar22 >> 0x6f,0) & 1) != 0) || (SUB161(auVar22 >> 0x77,0) & 1) != 0) ||
          auVar22[0xf] < '\0') break;
      uVar16 = uVar16 + lVar17 + 0x10;
      lVar17 = lVar17 + 0x10;
    }
  }
LAB_1409ead41:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143032520);
}

