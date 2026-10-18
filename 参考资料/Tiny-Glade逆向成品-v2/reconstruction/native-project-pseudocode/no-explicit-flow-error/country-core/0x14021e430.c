// VA 0x14021e430, PDB extent 429 bytes
// country_core::utils::get_last_event<enum2$<country_core::resources::mouse_capture::OsCursorCaptureCmd> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::utils::get_last_event<enum2$<country_core::resources::mouse_capture::OsCursorCaptureCmd>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/mod.rs
   Extent: 429 */

undefined8 pdb_14021e430(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  undefined8 uVar8;
  ushort uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 auStack_6c [3];
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
  
  auVar6 = _DAT_142e34500;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar7 = *(longlong *)(param_2 + 0x70);
    uVar11 = 0x6cfc0d8785dbd1e6;
    lVar12 = 0;
    while( true ) {
      uVar11 = uVar11 & *(ulonglong *)(param_2 + 0x78);
      auVar2 = *(undefined1 (*) [16])(lVar7 + uVar11);
      auVar15[0] = -(auVar2[0] == DAT_142e34500);
      auVar15[1] = -(auVar2[1] == DAT_142e34500._1_1_);
      auVar15[2] = -(auVar2[2] == DAT_142e34500._2_1_);
      auVar15[3] = -(auVar2[3] == DAT_142e34500._3_1_);
      auVar15[4] = -(auVar2[4] == DAT_142e34500._4_1_);
      auVar15[5] = -(auVar2[5] == DAT_142e34500._5_1_);
      auVar15[6] = -(auVar2[6] == DAT_142e34500._6_1_);
      auVar15[7] = -(auVar2[7] == DAT_142e34500._7_1_);
      auVar15[8] = -(auVar2[8] == DAT_142e34500._8_1_);
      auVar15[9] = -(auVar2[9] == DAT_142e34500._9_1_);
      auVar15[10] = -(auVar2[10] == DAT_142e34500._10_1_);
      auVar15[0xb] = -(auVar2[0xb] == DAT_142e34500._11_1_);
      auVar15[0xc] = -(auVar2[0xc] == DAT_142e34500._12_1_);
      auVar15[0xd] = -(auVar2[0xd] == DAT_142e34500._13_1_);
      auVar15[0xe] = -(auVar2[0xe] == DAT_142e34500._14_1_);
      auVar15[0xf] = -(auVar2[0xf] == DAT_142e34500._15_1_);
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
        pcVar1 = (char *)(lVar7 + -0x18 + uVar10 * -0x18);
        auVar16[0] = -(*pcVar1 == DAT_142e34dd0);
        auVar16[1] = -(pcVar1[1] == DAT_142e34dd0._1_1_);
        auVar16[2] = -(pcVar1[2] == DAT_142e34dd0._2_1_);
        auVar16[3] = -(pcVar1[3] == DAT_142e34dd0._3_1_);
        auVar16[4] = -(pcVar1[4] == DAT_142e34dd0._4_1_);
        auVar16[5] = -(pcVar1[5] == DAT_142e34dd0._5_1_);
        auVar16[6] = -(pcVar1[6] == DAT_142e34dd0._6_1_);
        auVar16[7] = -(pcVar1[7] == DAT_142e34dd0._7_1_);
        auVar16[8] = -(pcVar1[8] == DAT_142e34dd0._8_1_);
        auVar16[9] = -(pcVar1[9] == DAT_142e34dd0._9_1_);
        auVar16[10] = -(pcVar1[10] == DAT_142e34dd0._10_1_);
        auVar16[0xb] = -(pcVar1[0xb] == DAT_142e34dd0._11_1_);
        auVar16[0xc] = -(pcVar1[0xc] == DAT_142e34dd0._12_1_);
        auVar16[0xd] = -(pcVar1[0xd] == DAT_142e34dd0._13_1_);
        auVar16[0xe] = -(pcVar1[0xe] == DAT_142e34dd0._14_1_);
        auVar16[0xf] = -(pcVar1[0xf] == DAT_142e34dd0._15_1_);
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
          uVar11 = *(ulonglong *)(lVar7 + uVar10 * -0x18 + -8);
          if ((uVar11 < *(ulonglong *)(param_2 + 0x210)) &&
             (uVar11 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar11 * 8), uVar11 != 0)) {
            lVar7 = ~uVar11 * 0x40;
            if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar7) != 0) {
              lVar7 = *(longlong *)(param_2 + 0x1d8) + lVar7;
              lStack_50 = *(longlong *)(lVar7 + 0x10);
              *(undefined4 *)(lVar7 + 0x3c) = *(undefined4 *)(param_2 + 0x5a8);
              *(undefined8 *)(lStack_50 + 0x18) = *(undefined8 *)(lStack_50 + 0x40);
              lStack_28 = lStack_50 + 0x20;
              *(undefined8 *)(lStack_50 + 0x38) = *(undefined8 *)(lStack_50 + 0x40);
              lStack_60 = *(longlong *)(lStack_50 + 8);
              lStack_48 = *(longlong *)(lStack_50 + 0x10);
              *(undefined8 *)(lStack_50 + 0x10) = 0;
              lStack_58 = lStack_60 + lStack_48 * 0x18;
              lStack_20 = *(longlong *)(lStack_50 + 0x30);
              *(undefined8 *)(lStack_50 + 0x30) = 0;
              lStack_38 = *(longlong *)(lStack_50 + 0x28);
              lStack_30 = lStack_38 + lStack_20 * 0x18;
              auStack_6c[0] = 3;
              uStack_40 = 0;
              uStack_18 = 0;
              pdb_140489c80(auVar6._0_8_,&lStack_60,auStack_6c);
              return param_1;
            }
          }
          goto LAB_14021e5d7;
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
LAB_14021e5d7:
  pdb_142d7e620();
  pcVar3 = (code *)swi(3);
  uVar8 = (*pcVar3)();
  return uVar8;
}

