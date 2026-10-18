// VA 0x14021e0e0, PDB extent 409 bytes
// country_core::utils::drain_events<enum2$<country_core::resources::window::OsWindowCmd> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::utils::drain_events<enum2$<country_core::resources::window::OsWindowCmd> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/mod.rs
   Extent: 409 */

undefined8 pdb_14021e0e0(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  longlong lStack_38;
  longlong lStack_30;
  longlong lStack_28;
  longlong lStack_20;
  undefined8 uStack_18;
  
  auVar5 = _DAT_142e34380;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar6 = *(longlong *)(param_2 + 0x70);
    uVar9 = 0x2b10cb340ce82aa7;
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(param_2 + 0x78);
      auVar2 = *(undefined1 (*) [16])(lVar6 + uVar9);
      auVar13[0] = -(auVar2[0] == DAT_142e34380);
      auVar13[1] = -(auVar2[1] == DAT_142e34380._1_1_);
      auVar13[2] = -(auVar2[2] == DAT_142e34380._2_1_);
      auVar13[3] = -(auVar2[3] == DAT_142e34380._3_1_);
      auVar13[4] = -(auVar2[4] == DAT_142e34380._4_1_);
      auVar13[5] = -(auVar2[5] == DAT_142e34380._5_1_);
      auVar13[6] = -(auVar2[6] == DAT_142e34380._6_1_);
      auVar13[7] = -(auVar2[7] == DAT_142e34380._7_1_);
      auVar13[8] = -(auVar2[8] == DAT_142e34380._8_1_);
      auVar13[9] = -(auVar2[9] == DAT_142e34380._9_1_);
      auVar13[10] = -(auVar2[10] == DAT_142e34380._10_1_);
      auVar13[0xb] = -(auVar2[0xb] == DAT_142e34380._11_1_);
      auVar13[0xc] = -(auVar2[0xc] == DAT_142e34380._12_1_);
      auVar13[0xd] = -(auVar2[0xd] == DAT_142e34380._13_1_);
      auVar13[0xe] = -(auVar2[0xe] == DAT_142e34380._14_1_);
      auVar13[0xf] = -(auVar2[0xf] == DAT_142e34380._15_1_);
      uVar7 = (ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
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
              (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe | (ushort)(auVar13[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar7;
      while (uVar7 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar11; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar8 = uVar3 + uVar9 & *(ulonglong *)(param_2 + 0x78);
        pcVar1 = (char *)(lVar6 + -0x18 + uVar8 * -0x18);
        auVar14[0] = -(*pcVar1 == DAT_142e60e70);
        auVar14[1] = -(pcVar1[1] == DAT_142e60e70._1_1_);
        auVar14[2] = -(pcVar1[2] == DAT_142e60e70._2_1_);
        auVar14[3] = -(pcVar1[3] == DAT_142e60e70._3_1_);
        auVar14[4] = -(pcVar1[4] == DAT_142e60e70._4_1_);
        auVar14[5] = -(pcVar1[5] == DAT_142e60e70._5_1_);
        auVar14[6] = -(pcVar1[6] == DAT_142e60e70._6_1_);
        auVar14[7] = -(pcVar1[7] == DAT_142e60e70._7_1_);
        auVar14[8] = -(pcVar1[8] == DAT_142e60e70._8_1_);
        auVar14[9] = -(pcVar1[9] == DAT_142e60e70._9_1_);
        auVar14[10] = -(pcVar1[10] == DAT_142e60e70._10_1_);
        auVar14[0xb] = -(pcVar1[0xb] == DAT_142e60e70._11_1_);
        auVar14[0xc] = -(pcVar1[0xc] == DAT_142e60e70._12_1_);
        auVar14[0xd] = -(pcVar1[0xd] == DAT_142e60e70._13_1_);
        auVar14[0xe] = -(pcVar1[0xe] == DAT_142e60e70._14_1_);
        auVar14[0xf] = -(pcVar1[0xf] == DAT_142e60e70._15_1_);
        if ((ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar14[0xf] >> 7) << 0xf) == 0xffff) {
          uVar9 = *(ulonglong *)(lVar6 + uVar8 * -0x18 + -8);
          if ((uVar9 < *(ulonglong *)(param_2 + 0x210)) &&
             (uVar9 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar9 * 8), uVar9 != 0)) {
            lVar6 = ~uVar9 * 0x40;
            if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar6) != 0) {
              lVar6 = *(longlong *)(param_2 + 0x1d8) + lVar6;
              lStack_50 = *(longlong *)(lVar6 + 0x10);
              *(undefined4 *)(lVar6 + 0x3c) = *(undefined4 *)(param_2 + 0x5a8);
              *(undefined8 *)(lStack_50 + 0x18) = *(undefined8 *)(lStack_50 + 0x40);
              lStack_28 = lStack_50 + 0x20;
              *(undefined8 *)(lStack_50 + 0x38) = *(undefined8 *)(lStack_50 + 0x40);
              lStack_60 = *(longlong *)(lStack_50 + 8);
              lStack_48 = *(longlong *)(lStack_50 + 0x10);
              *(undefined8 *)(lStack_50 + 0x10) = 0;
              lStack_58 = lStack_60 + lStack_48 * 8;
              lStack_20 = *(longlong *)(lStack_50 + 0x30);
              *(undefined8 *)(lStack_50 + 0x30) = 0;
              lStack_38 = *(longlong *)(lStack_50 + 0x28);
              lStack_30 = lStack_38 + lStack_20 * 8;
              uStack_40 = 0;
              uStack_18 = 0;
              pdb_14017ffd0(auVar5._0_8_,&lStack_60);
              return param_1;
            }
          }
          goto LAB_14021e26c;
        }
        uVar7 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar7);
      }
      auVar12[0] = -(auVar2[0] == -1);
      auVar12[1] = -(auVar2[1] == -1);
      auVar12[2] = -(auVar2[2] == -1);
      auVar12[3] = -(auVar2[3] == -1);
      auVar12[4] = -(auVar2[4] == -1);
      auVar12[5] = -(auVar2[5] == -1);
      auVar12[6] = -(auVar2[6] == -1);
      auVar12[7] = -(auVar2[7] == -1);
      auVar12[8] = -(auVar2[8] == -1);
      auVar12[9] = -(auVar2[9] == -1);
      auVar12[10] = -(auVar2[10] == -1);
      auVar12[0xb] = -(auVar2[0xb] == -1);
      auVar12[0xc] = -(auVar2[0xc] == -1);
      auVar12[0xd] = -(auVar2[0xd] == -1);
      auVar12[0xe] = -(auVar2[0xe] == -1);
      auVar12[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar12 >> 7,0) & 1) != 0 || (SUB161(auVar12 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar12 >> 0x17,0) & 1) != 0) || (SUB161(auVar12 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar12 >> 0x27,0) & 1) != 0) || (SUB161(auVar12 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar12 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar12 >> 0x3f,0) & 1) != 0) || (SUB161(auVar12 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar12 >> 0x4f,0) & 1) != 0) || (SUB161(auVar12 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar12 >> 0x5f,0) & 1) != 0) || (SUB161(auVar12 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar12 >> 0x6f,0) & 1) != 0) || (SUB161(auVar12 >> 0x77,0) & 1) != 0) ||
          auVar12[0xf] < '\0') break;
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
LAB_14021e26c:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_142e60f98);
}

