// VA 0x14093e620, PDB extent 456 bytes
// country_core::systems::utils::impl$0::add_stages
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/utils.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::utils::impl$0::add_stages
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/utils.rs
   Extent: 456 */

longlong pdb_14093e620(longlong param_1)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 uStack_91;
  undefined1 *puStack_90;
  code *apcStack_88 [3];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x70);
    uVar8 = 0x54ee8e6eba18355;
    lVar9 = 0;
    while( true ) {
      uVar8 = uVar8 & *(ulonglong *)(param_1 + 0x78);
      auVar2 = *(undefined1 (*) [16])(lVar7 + uVar8);
      auVar14[0] = -(auVar2[0] == DAT_142e64500);
      auVar14[1] = -(auVar2[1] == DAT_142e64500._1_1_);
      auVar14[2] = -(auVar2[2] == DAT_142e64500._2_1_);
      auVar14[3] = -(auVar2[3] == DAT_142e64500._3_1_);
      auVar14[4] = -(auVar2[4] == DAT_142e64500._4_1_);
      auVar14[5] = -(auVar2[5] == DAT_142e64500._5_1_);
      auVar14[6] = -(auVar2[6] == DAT_142e64500._6_1_);
      auVar14[7] = -(auVar2[7] == DAT_142e64500._7_1_);
      auVar14[8] = -(auVar2[8] == DAT_142e64500._8_1_);
      auVar14[9] = -(auVar2[9] == DAT_142e64500._9_1_);
      auVar14[10] = -(auVar2[10] == DAT_142e64500._10_1_);
      auVar14[0xb] = -(auVar2[0xb] == DAT_142e64500._11_1_);
      auVar14[0xc] = -(auVar2[0xc] == DAT_142e64500._12_1_);
      auVar14[0xd] = -(auVar2[0xd] == DAT_142e64500._13_1_);
      auVar14[0xe] = -(auVar2[0xe] == DAT_142e64500._14_1_);
      auVar14[0xf] = -(auVar2[0xf] == DAT_142e64500._15_1_);
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
        uVar5 = 0;
        for (uVar6 = uVar10; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar12 = uVar5 + uVar8 & *(ulonglong *)(param_1 + 0x78);
        pcVar1 = (char *)(lVar7 + -0x18 + uVar12 * -0x18);
        auVar15[0] = -(*pcVar1 == DAT_143022c00);
        auVar15[1] = -(pcVar1[1] == DAT_143022c00._1_1_);
        auVar15[2] = -(pcVar1[2] == DAT_143022c00._2_1_);
        auVar15[3] = -(pcVar1[3] == DAT_143022c00._3_1_);
        auVar15[4] = -(pcVar1[4] == DAT_143022c00._4_1_);
        auVar15[5] = -(pcVar1[5] == DAT_143022c00._5_1_);
        auVar15[6] = -(pcVar1[6] == DAT_143022c00._6_1_);
        auVar15[7] = -(pcVar1[7] == DAT_143022c00._7_1_);
        auVar15[8] = -(pcVar1[8] == DAT_143022c00._8_1_);
        auVar15[9] = -(pcVar1[9] == DAT_143022c00._9_1_);
        auVar15[10] = -(pcVar1[10] == DAT_143022c00._10_1_);
        auVar15[0xb] = -(pcVar1[0xb] == DAT_143022c00._11_1_);
        auVar15[0xc] = -(pcVar1[0xc] == DAT_143022c00._12_1_);
        auVar15[0xd] = -(pcVar1[0xd] == DAT_143022c00._13_1_);
        auVar15[0xe] = -(pcVar1[0xe] == DAT_143022c00._14_1_);
        auVar15[0xf] = -(pcVar1[0xf] == DAT_143022c00._15_1_);
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
          uVar8 = *(ulonglong *)(lVar7 + uVar12 * -0x18 + -8);
          if ((uVar8 < *(ulonglong *)(param_1 + 0x210)) &&
             (uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0x208) + uVar8 * 8), uVar8 != 0)) {
            lVar7 = ~uVar8 * 0x40;
            if (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x20 + lVar7) != 0) {
              lVar7 = *(longlong *)(param_1 + 0x1d8) + lVar7;
              uVar4 = *(undefined8 *)(lVar7 + 0x10);
              uVar3 = *(undefined4 *)(param_1 + 0x5a8);
              *(undefined4 *)(lVar7 + 0x3c) = uVar3;
              pdb_141a1c360(uVar4);
              *(undefined4 *)(lVar7 + 0x3c) = uVar3;
              pdb_141a1c230(uVar4);
              pdb_1415eb150(apcStack_88,0);
              uStack_48 = _DAT_143333d60;
              uStack_40 = _UNK_143333d68;
              uStack_58 = _DAT_143333d50;
              uStack_50 = _UNK_143333d58;
              uStack_70 = 0;
              uStack_68 = 8;
              uStack_60 = 0;
              puStack_90 = (undefined1 *)0x8000000000000000;
              pdb_140c97ef0(param_1,&puStack_90,&UNK_143023740);
              return param_1;
            }
          }
          goto LAB_14093e7b9;
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
LAB_14093e7b9:
  puStack_90 = &uStack_91;
  apcStack_88[0] = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_143023b28,&puStack_90,&UNK_143023728);
}

