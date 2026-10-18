// VA 0x140a21330, PDB extent 8 bytes
// country_core::systems::render_loop::draw_passes::draw_shaders::stars::impl$0::build
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/draw_shaders/stars.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::draw_passes::draw_shaders::stars::impl$0::build
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/draw_passes/draw_shaders/stars.rs
   Extent: 8 */

longlong pdb_140a21330(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 uStack_19;
  undefined1 *puStack_18;
  code *pcStack_10;
  
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar5 = *(longlong *)(param_2 + 0x70);
    uVar6 = 0x51f059ef4072646d;
    lVar7 = 0;
    while( true ) {
      uVar6 = uVar6 & *(ulonglong *)(param_2 + 0x78);
      auVar2 = *(undefined1 (*) [16])(lVar5 + uVar6);
      auVar12[0] = -(auVar2[0] == DAT_142e347b0);
      auVar12[1] = -(auVar2[1] == DAT_142e347b0._1_1_);
      auVar12[2] = -(auVar2[2] == DAT_142e347b0._2_1_);
      auVar12[3] = -(auVar2[3] == DAT_142e347b0._3_1_);
      auVar12[4] = -(auVar2[4] == DAT_142e347b0._4_1_);
      auVar12[5] = -(auVar2[5] == DAT_142e347b0._5_1_);
      auVar12[6] = -(auVar2[6] == DAT_142e347b0._6_1_);
      auVar12[7] = -(auVar2[7] == DAT_142e347b0._7_1_);
      auVar12[8] = -(auVar2[8] == DAT_142e347b0._8_1_);
      auVar12[9] = -(auVar2[9] == DAT_142e347b0._9_1_);
      auVar12[10] = -(auVar2[10] == DAT_142e347b0._10_1_);
      auVar12[0xb] = -(auVar2[0xb] == DAT_142e347b0._11_1_);
      auVar12[0xc] = -(auVar2[0xc] == DAT_142e347b0._12_1_);
      auVar12[0xd] = -(auVar2[0xd] == DAT_142e347b0._13_1_);
      auVar12[0xe] = -(auVar2[0xe] == DAT_142e347b0._14_1_);
      auVar12[0xf] = -(auVar2[0xf] == DAT_142e347b0._15_1_);
      uVar9 = (ushort)(SUB161(auVar12 >> 7,0) & 1) | (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe | (ushort)(auVar12[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar9;
      while (uVar9 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar8; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar10 = uVar3 + uVar6 & *(ulonglong *)(param_2 + 0x78);
        pcVar1 = (char *)(lVar5 + -0x18 + uVar10 * -0x18);
        auVar13[0] = -(*pcVar1 == UNK_142f62700);
        auVar13[1] = -(pcVar1[1] == UNK_142f62700._1_1_);
        auVar13[2] = -(pcVar1[2] == UNK_142f62700._2_1_);
        auVar13[3] = -(pcVar1[3] == UNK_142f62700._3_1_);
        auVar13[4] = -(pcVar1[4] == UNK_142f62700._4_1_);
        auVar13[5] = -(pcVar1[5] == UNK_142f62700._5_1_);
        auVar13[6] = -(pcVar1[6] == UNK_142f62700._6_1_);
        auVar13[7] = -(pcVar1[7] == UNK_142f62700._7_1_);
        auVar13[8] = -(pcVar1[8] == UNK_142f62700._8_1_);
        auVar13[9] = -(pcVar1[9] == UNK_142f62700._9_1_);
        auVar13[10] = -(pcVar1[10] == UNK_142f62700._10_1_);
        auVar13[0xb] = -(pcVar1[0xb] == UNK_142f62700._11_1_);
        auVar13[0xc] = -(pcVar1[0xc] == UNK_142f62700._12_1_);
        auVar13[0xd] = -(pcVar1[0xd] == UNK_142f62700._13_1_);
        auVar13[0xe] = -(pcVar1[0xe] == UNK_142f62700._14_1_);
        auVar13[0xf] = -(pcVar1[0xf] == UNK_142f62700._15_1_);
        if ((ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar13[0xf] >> 7) << 0xf) == 0xffff) {
          uVar6 = *(ulonglong *)(lVar5 + uVar10 * -0x18 + -8);
          if ((uVar6 < *(ulonglong *)(param_2 + 0x210)) &&
             (uVar6 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar6 * 8), uVar6 != 0)) {
            lVar5 = ~uVar6 * 0x40;
            if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar5) != 0) {
              lVar5 = *(longlong *)(param_2 + 0x1d8) + lVar5;
              *(undefined4 *)(lVar5 + 0x3c) = *(undefined4 *)(param_2 + 0x5a8);
              pdb_141a12090(*(undefined8 *)(lVar5 + 0x10));
              return param_2;
            }
          }
          goto code_r0x000140c955b8;
        }
        uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
      }
      auVar11[0] = -(auVar2[0] == -1);
      auVar11[1] = -(auVar2[1] == -1);
      auVar11[2] = -(auVar2[2] == -1);
      auVar11[3] = -(auVar2[3] == -1);
      auVar11[4] = -(auVar2[4] == -1);
      auVar11[5] = -(auVar2[5] == -1);
      auVar11[6] = -(auVar2[6] == -1);
      auVar11[7] = -(auVar2[7] == -1);
      auVar11[8] = -(auVar2[8] == -1);
      auVar11[9] = -(auVar2[9] == -1);
      auVar11[10] = -(auVar2[10] == -1);
      auVar11[0xb] = -(auVar2[0xb] == -1);
      auVar11[0xc] = -(auVar2[0xc] == -1);
      auVar11[0xd] = -(auVar2[0xd] == -1);
      auVar11[0xe] = -(auVar2[0xe] == -1);
      auVar11[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar11 >> 7,0) & 1) != 0 || (SUB161(auVar11 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar11 >> 0x17,0) & 1) != 0) || (SUB161(auVar11 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar11 >> 0x27,0) & 1) != 0) || (SUB161(auVar11 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar11 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar11 >> 0x3f,0) & 1) != 0) || (SUB161(auVar11 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar11 >> 0x4f,0) & 1) != 0) || (SUB161(auVar11 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar11 >> 0x5f,0) & 1) != 0) || (SUB161(auVar11 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar11 >> 0x6f,0) & 1) != 0) || (SUB161(auVar11 >> 0x77,0) & 1) != 0) ||
          auVar11[0xf] < '\0') break;
      uVar6 = uVar6 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
code_r0x000140c955b8:
  puStack_18 = &uStack_19;
  pcStack_10 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_143076eb8,&puStack_18,&UNK_143076ea0);
}

