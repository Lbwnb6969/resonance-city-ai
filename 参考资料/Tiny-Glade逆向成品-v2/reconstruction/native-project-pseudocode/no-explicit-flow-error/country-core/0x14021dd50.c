// VA 0x14021dd50, PDB extent 290 bytes
// country_core::utils::get_res_mut<tiny_glade::gui::settings::LastAppliedVideoSettings>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::utils::get_res_mut<tiny_glade::gui::settings::LastAppliedVideoSettings>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/mod.rs
   Extent: 290 */

undefined8 * pdb_14021dd50(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar10 = *(longlong *)(param_2 + 0x70);
    uVar11 = 0xe6f984b638e88706;
    lVar12 = 0;
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar10 + uVar11);
      auVar14[0] = -(*pcVar1 == DAT_142e33cb0);
      auVar14[1] = -(pcVar1[1] == UNK_142e33cb1);
      auVar14[2] = -(pcVar1[2] == UNK_142e33cb2);
      auVar14[3] = -(pcVar1[3] == UNK_142e33cb3);
      auVar14[4] = -(pcVar1[4] == UNK_142e33cb4);
      auVar14[5] = -(pcVar1[5] == UNK_142e33cb5);
      auVar14[6] = -(pcVar1[6] == UNK_142e33cb6);
      auVar14[7] = -(pcVar1[7] == UNK_142e33cb7);
      auVar14[8] = -(pcVar1[8] == UNK_142e33cb8);
      auVar14[9] = -(pcVar1[9] == UNK_142e33cb9);
      auVar14[10] = -(pcVar1[10] == UNK_142e33cba);
      auVar14[0xb] = -(pcVar1[0xb] == UNK_142e33cbb);
      auVar14[0xc] = -(pcVar1[0xc] == UNK_142e33cbc);
      auVar14[0xd] = -(pcVar1[0xd] == UNK_142e33cbd);
      auVar14[0xe] = -(pcVar1[0xe] == UNK_142e33cbe);
      auVar14[0xf] = -(pcVar1[0xf] == UNK_142e33cbf);
      uVar8 = (ushort)(SUB161(auVar14 >> 7,0) & 1) | (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
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
      uVar7 = (uint)uVar8;
      while (uVar8 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar7; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar9 = uVar5 + uVar11 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar10 + -0x18 + uVar9 * -0x18);
        auVar15[0] = -(*pcVar2 == DAT_142e34e20);
        auVar15[1] = -(pcVar2[1] == UNK_142e34e21);
        auVar15[2] = -(pcVar2[2] == UNK_142e34e22);
        auVar15[3] = -(pcVar2[3] == UNK_142e34e23);
        auVar15[4] = -(pcVar2[4] == UNK_142e34e24);
        auVar15[5] = -(pcVar2[5] == UNK_142e34e25);
        auVar15[6] = -(pcVar2[6] == UNK_142e34e26);
        auVar15[7] = -(pcVar2[7] == UNK_142e34e27);
        auVar15[8] = -(pcVar2[8] == UNK_142e34e28);
        auVar15[9] = -(pcVar2[9] == UNK_142e34e29);
        auVar15[10] = -(pcVar2[10] == UNK_142e34e2a);
        auVar15[0xb] = -(pcVar2[0xb] == UNK_142e34e2b);
        auVar15[0xc] = -(pcVar2[0xc] == UNK_142e34e2c);
        auVar15[0xd] = -(pcVar2[0xd] == UNK_142e34e2d);
        auVar15[0xe] = -(pcVar2[0xe] == UNK_142e34e2e);
        auVar15[0xf] = -(pcVar2[0xf] == UNK_142e34e2f);
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
          uVar11 = *(ulonglong *)(lVar10 + uVar9 * -0x18 + -8);
          if ((uVar11 < *(ulonglong *)(param_2 + 0x210)) &&
             (uVar11 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar11 * 8), uVar11 != 0)) {
            lVar10 = ~uVar11 * 0x40;
            if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar10) != 0) {
              lVar10 = *(longlong *)(param_2 + 0x1d8) + lVar10;
              uVar3 = *(undefined4 *)(param_2 + 0x5ac);
              uVar4 = *(undefined4 *)(param_2 + 0x5a8);
              *param_1 = *(undefined8 *)(lVar10 + 0x10);
              param_1[1] = lVar10 + 0x38;
              param_1[2] = lVar10 + 0x3c;
              *(undefined4 *)(param_1 + 3) = uVar3;
              *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
              return param_1;
            }
          }
          goto LAB_14021de69;
        }
        uVar8 = (ushort)(uVar7 - 1) & (ushort)uVar7;
        uVar7 = CONCAT22((short)(uVar7 - 1 >> 0x10),uVar8);
      }
      auVar13[0] = -(*pcVar1 == -1);
      auVar13[1] = -(pcVar1[1] == -1);
      auVar13[2] = -(pcVar1[2] == -1);
      auVar13[3] = -(pcVar1[3] == -1);
      auVar13[4] = -(pcVar1[4] == -1);
      auVar13[5] = -(pcVar1[5] == -1);
      auVar13[6] = -(pcVar1[6] == -1);
      auVar13[7] = -(pcVar1[7] == -1);
      auVar13[8] = -(pcVar1[8] == -1);
      auVar13[9] = -(pcVar1[9] == -1);
      auVar13[10] = -(pcVar1[10] == -1);
      auVar13[0xb] = -(pcVar1[0xb] == -1);
      auVar13[0xc] = -(pcVar1[0xc] == -1);
      auVar13[0xd] = -(pcVar1[0xd] == -1);
      auVar13[0xe] = -(pcVar1[0xe] == -1);
      auVar13[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar13 >> 7,0) & 1) != 0 || (SUB161(auVar13 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar13 >> 0x17,0) & 1) != 0) || (SUB161(auVar13 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar13 >> 0x27,0) & 1) != 0) || (SUB161(auVar13 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar13 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar13 >> 0x3f,0) & 1) != 0) || (SUB161(auVar13 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar13 >> 0x4f,0) & 1) != 0) || (SUB161(auVar13 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar13 >> 0x5f,0) & 1) != 0) || (SUB161(auVar13 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar13 >> 0x6f,0) & 1) != 0) || (SUB161(auVar13 >> 0x77,0) & 1) != 0) ||
          auVar13[0xf] < '\0') break;
      uVar11 = uVar11 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
LAB_14021de69:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(param_3);
}

