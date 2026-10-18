// VA 0x140b21c50, PDB extent 713 bytes
// country_core::systems::render_loop::compute_passes::grass2::grass2_debug_overlays
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/grass2.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::grass2::grass2_debug_overlays
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/grass2.rs
   Extent: 713 */

void pdb_140b21c50(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int iStack_c8;
  undefined4 uStack_c4;
  undefined1 uStack_c0;
  undefined8 uStack_bc;
  undefined4 uStack_b4;
  undefined4 auStack_b0 [2];
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 auStack_64 [8];
  undefined8 uStack_5c;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 *puStack_48;
  int *piStack_40;
  
  bVar7 = DAT_143cb2d00;
  bVar6 = DAT_143cb2cf8;
  if (DAT_143cb2d00 == DAT_143cb2cf8 && (DAT_143cb2d00 & 1) == 0) {
    return;
  }
  iStack_c8 = 0;
  if (0 < _DAT_143cb2cfc) {
    iStack_c8 = _DAT_143cb2cfc;
  }
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar8 = *(longlong *)(param_2 + 0x70);
    uVar11 = 0x1d6a82b468dfb8a2;
    lVar12 = 0;
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(param_2 + 0x78);
      auVar2 = *(undefined1 (*) [16])(lVar8 + uVar11);
      auVar15[0] = -(auVar2[0] == DAT_142e34ec0);
      auVar15[1] = -(auVar2[1] == DAT_142e34ec0._1_1_);
      auVar15[2] = -(auVar2[2] == DAT_142e34ec0._2_1_);
      auVar15[3] = -(auVar2[3] == DAT_142e34ec0._3_1_);
      auVar15[4] = -(auVar2[4] == DAT_142e34ec0._4_1_);
      auVar15[5] = -(auVar2[5] == DAT_142e34ec0._5_1_);
      auVar15[6] = -(auVar2[6] == DAT_142e34ec0._6_1_);
      auVar15[7] = -(auVar2[7] == DAT_142e34ec0._7_1_);
      auVar15[8] = -(auVar2[8] == DAT_142e34ec0._8_1_);
      auVar15[9] = -(auVar2[9] == DAT_142e34ec0._9_1_);
      auVar15[10] = -(auVar2[10] == DAT_142e34ec0._10_1_);
      auVar15[0xb] = -(auVar2[0xb] == DAT_142e34ec0._11_1_);
      auVar15[0xc] = -(auVar2[0xc] == DAT_142e34ec0._12_1_);
      auVar15[0xd] = -(auVar2[0xd] == DAT_142e34ec0._13_1_);
      auVar15[0xe] = -(auVar2[0xe] == DAT_142e34ec0._14_1_);
      auVar15[0xf] = -(auVar2[0xf] == DAT_142e34ec0._15_1_);
      uVar9 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe | (ushort)(auVar15[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar13; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar10 = uVar4 + uVar11 & *(ulonglong *)(param_2 + 0x78);
        pcVar1 = (char *)(lVar8 + -0x18 + uVar10 * -0x18);
        auVar16[0] = -(*pcVar1 == DAT_142e60e60);
        auVar16[1] = -(pcVar1[1] == DAT_142e60e60._1_1_);
        auVar16[2] = -(pcVar1[2] == DAT_142e60e60._2_1_);
        auVar16[3] = -(pcVar1[3] == DAT_142e60e60._3_1_);
        auVar16[4] = -(pcVar1[4] == DAT_142e60e60._4_1_);
        auVar16[5] = -(pcVar1[5] == DAT_142e60e60._5_1_);
        auVar16[6] = -(pcVar1[6] == DAT_142e60e60._6_1_);
        auVar16[7] = -(pcVar1[7] == DAT_142e60e60._7_1_);
        auVar16[8] = -(pcVar1[8] == DAT_142e60e60._8_1_);
        auVar16[9] = -(pcVar1[9] == DAT_142e60e60._9_1_);
        auVar16[10] = -(pcVar1[10] == DAT_142e60e60._10_1_);
        auVar16[0xb] = -(pcVar1[0xb] == DAT_142e60e60._11_1_);
        auVar16[0xc] = -(pcVar1[0xc] == DAT_142e60e60._12_1_);
        auVar16[0xd] = -(pcVar1[0xd] == DAT_142e60e60._13_1_);
        auVar16[0xe] = -(pcVar1[0xe] == DAT_142e60e60._14_1_);
        auVar16[0xf] = -(pcVar1[0xf] == DAT_142e60e60._15_1_);
        if ((ushort)((ushort)(SUB161(auVar16 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar16[0xf] >> 7) << 0xf) == 0xffff) {
          uVar11 = *(ulonglong *)(lVar8 + uVar10 * -0x18 + -8);
          if ((uVar11 < *(ulonglong *)(param_2 + 0x210)) &&
             (uVar11 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar11 * 8), uVar11 != 0)) {
            lVar8 = ~uVar11 * 0x40;
            if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar8) != 0) {
              uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 0x1d8) + lVar8 + 0x10);
              pdb_141525100(&uStack_78,uVar3,param_1);
              pdb_141527850(auStack_b0,uVar3,param_1);
              uStack_54 = uStack_a0;
              uStack_5c = uStack_a8;
              pdb_141765440(param_1,&UNK_143055d3c,0x16,&UNK_143055d52,0x40,auStack_64);
              uStack_b4 = uStack_68;
              uStack_c4 = uStack_78;
              uStack_c0 = uStack_74;
              uStack_bc = uStack_70;
              if ((bVar7 & 1) != 0) {
                auStack_b0[0] = 0;
                uStack_90 = 1;
                uStack_80 = 0;
                uStack_a8 = param_3;
                uStack_88 = param_4;
                pdb_14174df90(param_1,&UNK_143055e68,0x18,auStack_b0,&uStack_c4,&iStack_c8);
              }
              if (bVar6 != 0) {
                auStack_b0[0] = 0;
                uStack_50 = param_5;
                puStack_48 = &uStack_c4;
                piStack_40 = &iStack_c8;
                uStack_a8 = param_3;
                pdb_14175b010(param_1,&UNK_143055e80,0x16,auStack_b0,&uStack_50);
              }
              pdb_141534ac0(uVar3,param_1);
              pdb_1415367a0(uVar3,param_1);
              return;
            }
          }
          goto LAB_140b21f0c;
        }
        uVar9 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar9);
      }
      auVar14[0] = -(auVar2[0] == -1);
      auVar14[1] = -(auVar2[1] == -1);
      auVar14[2] = -(auVar2[2] == -1);
      auVar14[3] = -(auVar2[3] == -1);
      auVar14[4] = -(auVar2[4] == -1);
      auVar14[5] = -(auVar2[5] == -1);
      auVar14[6] = -(auVar2[6] == -1);
      auVar14[7] = -(auVar2[7] == -1);
      auVar14[8] = -(auVar2[8] == -1);
      auVar14[9] = -(auVar2[9] == -1);
      auVar14[10] = -(auVar2[10] == -1);
      auVar14[0xb] = -(auVar2[0xb] == -1);
      auVar14[0xc] = -(auVar2[0xc] == -1);
      auVar14[0xd] = -(auVar2[0xd] == -1);
      auVar14[0xe] = -(auVar2[0xe] == -1);
      auVar14[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar14 >> 7,0) & 1) != 0 || (SUB161(auVar14 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar14 >> 0x17,0) & 1) != 0) || (SUB161(auVar14 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar14 >> 0x27,0) & 1) != 0) || (SUB161(auVar14 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar14 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar14 >> 0x3f,0) & 1) != 0) || (SUB161(auVar14 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar14 >> 0x4f,0) & 1) != 0) || (SUB161(auVar14 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar14 >> 0x5f,0) & 1) != 0) || (SUB161(auVar14 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar14 >> 0x6f,0) & 1) != 0) || (SUB161(auVar14 >> 0x77,0) & 1) != 0) ||
          auVar14[0xf] < '\0') break;
      uVar11 = uVar11 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
LAB_140b21f0c:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143055e50);
}

