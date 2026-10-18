// VA 0x14021eb90, PDB extent 249 bytes
// country_core::utils::get_res<enum2$<country_core::resources::gui::EscMenuState> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::utils::get_res<enum2$<country_core::resources::gui::EscMenuState> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/mod.rs
   Extent: 249 */

undefined8 pdb_14021eb90(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x70);
    uVar8 = 0xf1335775cdf5bf9c;
    lVar9 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(param_1 + 0x78);
      pcVar1 = (char *)(lVar5 + uVar8);
      auVar12[0] = -(*pcVar1 == DAT_142e34070);
      auVar12[1] = -(pcVar1[1] == UNK_142e34071);
      auVar12[2] = -(pcVar1[2] == UNK_142e34072);
      auVar12[3] = -(pcVar1[3] == UNK_142e34073);
      auVar12[4] = -(pcVar1[4] == UNK_142e34074);
      auVar12[5] = -(pcVar1[5] == UNK_142e34075);
      auVar12[6] = -(pcVar1[6] == UNK_142e34076);
      auVar12[7] = -(pcVar1[7] == UNK_142e34077);
      auVar12[8] = -(pcVar1[8] == UNK_142e34078);
      auVar12[9] = -(pcVar1[9] == UNK_142e34079);
      auVar12[10] = -(pcVar1[10] == UNK_142e3407a);
      auVar12[0xb] = -(pcVar1[0xb] == UNK_142e3407b);
      auVar12[0xc] = -(pcVar1[0xc] == UNK_142e3407c);
      auVar12[0xd] = -(pcVar1[0xd] == UNK_142e3407d);
      auVar12[0xe] = -(pcVar1[0xe] == UNK_142e3407e);
      auVar12[0xf] = -(pcVar1[0xf] == UNK_142e3407f);
      uVar6 = (ushort)(SUB161(auVar12 >> 7,0) & 1) | (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
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
      uVar10 = (uint)uVar6;
      while (uVar6 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar7 = uVar3 + uVar8 & *(ulonglong *)(param_1 + 0x78);
        pcVar2 = (char *)(lVar5 + -0x18 + uVar7 * -0x18);
        auVar13[0] = -(*pcVar2 == DAT_142e34080);
        auVar13[1] = -(pcVar2[1] == UNK_142e34081);
        auVar13[2] = -(pcVar2[2] == UNK_142e34082);
        auVar13[3] = -(pcVar2[3] == UNK_142e34083);
        auVar13[4] = -(pcVar2[4] == UNK_142e34084);
        auVar13[5] = -(pcVar2[5] == UNK_142e34085);
        auVar13[6] = -(pcVar2[6] == UNK_142e34086);
        auVar13[7] = -(pcVar2[7] == UNK_142e34087);
        auVar13[8] = -(pcVar2[8] == UNK_142e34088);
        auVar13[9] = -(pcVar2[9] == UNK_142e34089);
        auVar13[10] = -(pcVar2[10] == UNK_142e3408a);
        auVar13[0xb] = -(pcVar2[0xb] == UNK_142e3408b);
        auVar13[0xc] = -(pcVar2[0xc] == UNK_142e3408c);
        auVar13[0xd] = -(pcVar2[0xd] == UNK_142e3408d);
        auVar13[0xe] = -(pcVar2[0xe] == UNK_142e3408e);
        auVar13[0xf] = -(pcVar2[0xf] == UNK_142e3408f);
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
          uVar8 = *(ulonglong *)(lVar5 + uVar7 * -0x18 + -8);
          if ((uVar8 < *(ulonglong *)(param_1 + 0x210)) &&
             (uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar8 * 8), uVar8 != 0)) {
            lVar5 = ~uVar8 * 0x40;
            if (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + lVar5) != 0) {
              return *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + lVar5 + 0x10);
            }
          }
          goto LAB_14021ec80;
        }
        uVar6 = (ushort)(uVar10 - 1) & (ushort)uVar10;
        uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar6);
      }
      auVar11[0] = -(*pcVar1 == -1);
      auVar11[1] = -(pcVar1[1] == -1);
      auVar11[2] = -(pcVar1[2] == -1);
      auVar11[3] = -(pcVar1[3] == -1);
      auVar11[4] = -(pcVar1[4] == -1);
      auVar11[5] = -(pcVar1[5] == -1);
      auVar11[6] = -(pcVar1[6] == -1);
      auVar11[7] = -(pcVar1[7] == -1);
      auVar11[8] = -(pcVar1[8] == -1);
      auVar11[9] = -(pcVar1[9] == -1);
      auVar11[10] = -(pcVar1[10] == -1);
      auVar11[0xb] = -(pcVar1[0xb] == -1);
      auVar11[0xc] = -(pcVar1[0xc] == -1);
      auVar11[0xd] = -(pcVar1[0xd] == -1);
      auVar11[0xe] = -(pcVar1[0xe] == -1);
      auVar11[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar11 >> 7,0) & 1) != 0 || (SUB161(auVar11 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar11 >> 0x17,0) & 1) != 0) || (SUB161(auVar11 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar11 >> 0x27,0) & 1) != 0) || (SUB161(auVar11 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar11 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar11 >> 0x3f,0) & 1) != 0) || (SUB161(auVar11 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar11 >> 0x4f,0) & 1) != 0) || (SUB161(auVar11 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar11 >> 0x5f,0) & 1) != 0) || (SUB161(auVar11 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar11 >> 0x6f,0) & 1) != 0) || (SUB161(auVar11 >> 0x77,0) & 1) != 0) ||
          auVar11[0xf] < '\0') break;
      uVar8 = uVar8 + lVar9 + 0x10;
      lVar9 = lVar9 + 0x10;
    }
  }
LAB_14021ec80:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(param_2);
}

