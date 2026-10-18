// VA 0x1409ba5d0, PDB extent 1048 bytes
// country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::generate_wall_draw_lists_shadow
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::gpu_generate_draw_lists::generate_wall_draw_lists_shadow
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/gpu_generate_draw_lists.rs
   Extent: 1048 */

void pdb_1409ba5d0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  ushort uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined1 auStack_fc [20];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  undefined1 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uStack_50 = param_3;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar7 = *(longlong *)(param_2 + 0x70);
    uVar9 = 0x1d6a82b468dfb8a2;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(param_2 + 0x78);
      auVar2 = *(undefined1 (*) [16])(lVar7 + uVar9);
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
      uVar12 = (ushort)(SUB161(auVar15 >> 7,0) & 1) | (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
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
      uVar11 = (uint)uVar12;
      while (uVar12 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar11; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar13 = uVar5 + uVar9 & *(ulonglong *)(param_2 + 0x78);
        pcVar1 = (char *)(lVar7 + -0x18 + uVar13 * -0x18);
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
          uVar9 = *(ulonglong *)(lVar7 + uVar13 * -0x18 + -8);
          if ((uVar9 < *(ulonglong *)(param_2 + 0x210)) &&
             (uVar9 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar9 * 8), uVar9 != 0)) {
            lVar7 = ~uVar9 * 0x40;
            if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar7) != 0) {
              uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 0x1d8) + lVar7 + 0x10);
              uStack_39 = 1;
              puStack_60 = param_4;
              uStack_58 = param_3;
              pdb_1415240d0(auStack_fc,uVar3,param_1);
              uStack_39 = 1;
              pdb_14152b6c0(&uStack_188,uVar3,param_1);
              uStack_39 = 1;
              pdb_14152afd0(&uStack_210,uVar3,param_1);
              uStack_d8 = uStack_178;
              uStack_e8 = uStack_188;
              uStack_e0 = uStack_180;
              uStack_d4 = uStack_210;
              uStack_cc = uStack_208;
              uStack_c4 = uStack_200;
              uVar4 = *param_4;
              uStack_88 = 0;
              uStack_80 = 8;
              uStack_78 = 0;
              uStack_3a = 1;
              puStack_70 = param_4;
              uStack_68 = param_3;
              uStack_48 = param_3;
              uVar8 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331c9f,0x31,&uStack_88)
              ;
              uStack_3a = 1;
              pdb_140e291c0(&uStack_210,&UNK_143331c9f,0x31,uVar8,param_1);
              puStack_b8 = &uStack_e8;
              puStack_b0 = &uStack_d4;
              puStack_a8 = param_4 + 1;
              uStack_98 = 0;
              uStack_90 = 0x10;
              uStack_3a = 1;
              puStack_c0 = auStack_fc;
              uStack_a0 = uVar4;
              pdb_141793780(&uStack_188,&uStack_210,&puStack_c0);
              uStack_3a = 0;
              pdb_141782600(&uStack_188,uStack_48);
              uStack_39 = 0;
              pdb_141535d20(uVar3,param_1);
              uStack_39 = 0;
              pdb_141539c80(uVar3,param_1);
              uStack_39 = 0;
              pdb_1415398c0(uVar3,param_1);
              return;
            }
          }
          goto LAB_1409ba8ca;
        }
        uVar12 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar12);
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
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_1409ba8ca:
  uStack_3b = 1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14302af30);
}

