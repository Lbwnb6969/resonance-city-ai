// VA 0x140b04a60, PDB extent 522 bytes
// country_core::systems::render_loop::compute_passes::apply_screen_shadows::compute_shadow_mask_mean
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/apply_screen_shadows.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::apply_screen_shadows::compute_shadow_mask_mean
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/apply_screen_shadows.rs
   Extent: 522 */

void pdb_140b04a60(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [20];
  undefined8 uStack_154;
  undefined8 uStack_14c;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar6 = *(longlong *)(param_2 + 0x70);
    uVar8 = 0x1d6a82b468dfb8a2;
    lVar9 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(param_2 + 0x78);
      auVar2 = *(undefined1 (*) [16])(lVar6 + uVar8);
      auVar14[0] = -(auVar2[0] == DAT_142e34ec0);
      auVar14[1] = -(auVar2[1] == DAT_142e34ec0._1_1_);
      auVar14[2] = -(auVar2[2] == DAT_142e34ec0._2_1_);
      auVar14[3] = -(auVar2[3] == DAT_142e34ec0._3_1_);
      auVar14[4] = -(auVar2[4] == DAT_142e34ec0._4_1_);
      auVar14[5] = -(auVar2[5] == DAT_142e34ec0._5_1_);
      auVar14[6] = -(auVar2[6] == DAT_142e34ec0._6_1_);
      auVar14[7] = -(auVar2[7] == DAT_142e34ec0._7_1_);
      auVar14[8] = -(auVar2[8] == DAT_142e34ec0._8_1_);
      auVar14[9] = -(auVar2[9] == DAT_142e34ec0._9_1_);
      auVar14[10] = -(auVar2[10] == DAT_142e34ec0._10_1_);
      auVar14[0xb] = -(auVar2[0xb] == DAT_142e34ec0._11_1_);
      auVar14[0xc] = -(auVar2[0xc] == DAT_142e34ec0._12_1_);
      auVar14[0xd] = -(auVar2[0xd] == DAT_142e34ec0._13_1_);
      auVar14[0xe] = -(auVar2[0xe] == DAT_142e34ec0._14_1_);
      auVar14[0xf] = -(auVar2[0xf] == DAT_142e34ec0._15_1_);
      uVar11 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe | (ushort)(auVar14[0xf] >> 7) << 0xf;
      uVar10 = (uint)uVar11;
      while (uVar11 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar10; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar12 = uVar4 + uVar8 & *(ulonglong *)(param_2 + 0x78);
        pcVar1 = (char *)(lVar6 + -0x18 + uVar12 * -0x18);
        auVar15[0] = -(*pcVar1 == DAT_142e60e60);
        auVar15[1] = -(pcVar1[1] == DAT_142e60e60._1_1_);
        auVar15[2] = -(pcVar1[2] == DAT_142e60e60._2_1_);
        auVar15[3] = -(pcVar1[3] == DAT_142e60e60._3_1_);
        auVar15[4] = -(pcVar1[4] == DAT_142e60e60._4_1_);
        auVar15[5] = -(pcVar1[5] == DAT_142e60e60._5_1_);
        auVar15[6] = -(pcVar1[6] == DAT_142e60e60._6_1_);
        auVar15[7] = -(pcVar1[7] == DAT_142e60e60._7_1_);
        auVar15[8] = -(pcVar1[8] == DAT_142e60e60._8_1_);
        auVar15[9] = -(pcVar1[9] == DAT_142e60e60._9_1_);
        auVar15[10] = -(pcVar1[10] == DAT_142e60e60._10_1_);
        auVar15[0xb] = -(pcVar1[0xb] == DAT_142e60e60._11_1_);
        auVar15[0xc] = -(pcVar1[0xc] == DAT_142e60e60._12_1_);
        auVar15[0xd] = -(pcVar1[0xd] == DAT_142e60e60._13_1_);
        auVar15[0xe] = -(pcVar1[0xe] == DAT_142e60e60._14_1_);
        auVar15[0xf] = -(pcVar1[0xf] == DAT_142e60e60._15_1_);
        if ((ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar15[0xf] >> 7) << 0xf) == 0xffff) {
          uVar8 = *(ulonglong *)(lVar6 + uVar12 * -0x18 + -8);
          if ((uVar8 < *(ulonglong *)(param_2 + 0x210)) &&
             (uVar8 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar8 * 8), uVar8 != 0)) {
            lVar6 = ~uVar8 * 0x40;
            if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar6) != 0) {
              uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 0x1d8) + lVar6 + 0x10);
              pdb_141529b00(auStack_168,uVar3,param_1);
              pdb_14152b470(&uStack_140,uVar3,param_1);
              uStack_144 = uStack_130;
              uStack_154 = uStack_140;
              uStack_14c = uStack_138;
              uStack_180 = 0;
              uStack_178 = 8;
              uStack_170 = 0;
              uVar7 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_1433318ef,0x22,&uStack_180
                                   );
              pdb_140e291c0(&uStack_b8,&UNK_1433318ef,0x22,uVar7,param_1);
              pdb_1417859f0(&uStack_140,&uStack_b8,auStack_168,&uStack_154);
              uStack_b8 = _DAT_143052780;
              uStack_b0 = _UNK_143052788;
              pdb_140e28810(&uStack_140,&uStack_b8);
              pdb_141537840(uVar3,param_1);
              pdb_14153a040(uVar3,param_1);
              return;
            }
          }
          goto LAB_140b04c5d;
        }
        uVar11 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar11);
      }
      auVar13[0] = -(auVar2[0] == -1);
      auVar13[1] = -(auVar2[1] == -1);
      auVar13[2] = -(auVar2[2] == -1);
      auVar13[3] = -(auVar2[3] == -1);
      auVar13[4] = -(auVar2[4] == -1);
      auVar13[5] = -(auVar2[5] == -1);
      auVar13[6] = -(auVar2[6] == -1);
      auVar13[7] = -(auVar2[7] == -1);
      auVar13[8] = -(auVar2[8] == -1);
      auVar13[9] = -(auVar2[9] == -1);
      auVar13[10] = -(auVar2[10] == -1);
      auVar13[0xb] = -(auVar2[0xb] == -1);
      auVar13[0xc] = -(auVar2[0xc] == -1);
      auVar13[0xd] = -(auVar2[0xd] == -1);
      auVar13[0xe] = -(auVar2[0xe] == -1);
      auVar13[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar13 >> 7,0) & 1) != 0 || (SUB161(auVar13 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar13 >> 0x17,0) & 1) != 0) || (SUB161(auVar13 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar13 >> 0x27,0) & 1) != 0) || (SUB161(auVar13 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar13 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar13 >> 0x3f,0) & 1) != 0) || (SUB161(auVar13 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar13 >> 0x4f,0) & 1) != 0) || (SUB161(auVar13 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar13 >> 0x5f,0) & 1) != 0) || (SUB161(auVar13 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar13 >> 0x6f,0) & 1) != 0) || (SUB161(auVar13 >> 0x77,0) & 1) != 0) ||
          auVar13[0xf] < '\0') break;
      uVar8 = uVar8 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
LAB_140b04c5d:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143053440);
}

