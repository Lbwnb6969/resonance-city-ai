// VA 0x140b38410, PDB extent 2074 bytes
// country_core::systems::render_loop::compute_passes::dof_autofocus::calculate_dof_autofocus
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/dof_autofocus.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::dof_autofocus::calculate_dof_autofocus
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/dof_autofocus.rs
   Extent: 2074 */

void pdb_140b38410(longlong param_1,longlong param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  longlong lVar18;
  ushort uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  ulonglong uVar28;
  longlong lVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined8 uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined8 uStack_200;
  undefined1 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [20];
  undefined8 uStack_19c;
  undefined8 uStack_194;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined8 uStack_184;
  undefined4 uStack_17c;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar13 = *(longlong *)(param_2 + 0x70);
    uVar6 = *(ulonglong *)(param_2 + 0x78);
    uVar22 = 0x17b2b0983155443e;
    lVar23 = 0;
    while( true ) {
      uVar22 = uVar22 & uVar6;
      pcVar1 = (char *)(lVar13 + uVar22);
      auVar51[0] = -(*pcVar1 == DAT_142e42310);
      auVar51[1] = -(pcVar1[1] == UNK_142e42311);
      auVar51[2] = -(pcVar1[2] == UNK_142e42312);
      auVar51[3] = -(pcVar1[3] == UNK_142e42313);
      auVar51[4] = -(pcVar1[4] == UNK_142e42314);
      auVar51[5] = -(pcVar1[5] == UNK_142e42315);
      auVar51[6] = -(pcVar1[6] == UNK_142e42316);
      auVar51[7] = -(pcVar1[7] == UNK_142e42317);
      auVar51[8] = -(pcVar1[8] == UNK_142e42318);
      auVar51[9] = -(pcVar1[9] == UNK_142e42319);
      auVar51[10] = -(pcVar1[10] == UNK_142e4231a);
      auVar51[0xb] = -(pcVar1[0xb] == UNK_142e4231b);
      auVar51[0xc] = -(pcVar1[0xc] == UNK_142e4231c);
      auVar51[0xd] = -(pcVar1[0xd] == UNK_142e4231d);
      auVar51[0xe] = -(pcVar1[0xe] == UNK_142e4231e);
      auVar51[0xf] = -(pcVar1[0xf] == UNK_142e4231f);
      uVar19 = (ushort)(SUB161(auVar51 >> 7,0) & 1) | (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe | (ushort)(auVar51[0xf] >> 7) << 0xf;
      uVar16 = (uint)uVar19;
      while (uVar19 != 0) {
        uVar25 = 0;
        for (uVar11 = uVar16; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          uVar25 = uVar25 + 1;
        }
        uVar20 = uVar25 + uVar22 & uVar6;
        pcVar2 = (char *)(lVar13 + -0x18 + uVar20 * -0x18);
        auVar37[0] = -(*pcVar2 == DAT_142e42320);
        auVar37[1] = -(pcVar2[1] == UNK_142e42321);
        auVar37[2] = -(pcVar2[2] == UNK_142e42322);
        auVar37[3] = -(pcVar2[3] == UNK_142e42323);
        auVar37[4] = -(pcVar2[4] == UNK_142e42324);
        auVar37[5] = -(pcVar2[5] == UNK_142e42325);
        auVar37[6] = -(pcVar2[6] == UNK_142e42326);
        auVar37[7] = -(pcVar2[7] == UNK_142e42327);
        auVar37[8] = -(pcVar2[8] == UNK_142e42328);
        auVar37[9] = -(pcVar2[9] == UNK_142e42329);
        auVar37[10] = -(pcVar2[10] == UNK_142e4232a);
        auVar37[0xb] = -(pcVar2[0xb] == UNK_142e4232b);
        auVar37[0xc] = -(pcVar2[0xc] == UNK_142e4232c);
        auVar37[0xd] = -(pcVar2[0xd] == UNK_142e4232d);
        auVar37[0xe] = -(pcVar2[0xe] == UNK_142e4232e);
        auVar37[0xf] = -(pcVar2[0xf] == UNK_142e4232f);
        if ((ushort)((ushort)(SUB161(auVar37 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar37[0xf] >> 7) << 0xf) == 0xffff) {
          uVar22 = *(ulonglong *)(lVar13 + uVar20 * -0x18 + -8);
          uVar20 = *(ulonglong *)(param_2 + 0x210);
          if (uVar20 <= uVar22) goto LAB_140b38693;
          lVar23 = *(longlong *)(param_2 + 0x208);
          uVar22 = *(ulonglong *)(lVar23 + uVar22 * 8);
          if (uVar22 == 0) goto LAB_140b38693;
          lVar7 = *(longlong *)(param_2 + 0x1d8);
          lVar18 = ~uVar22 * 0x40;
          if (*(longlong *)(lVar7 + 0x20 + lVar18) == 0) goto LAB_140b38693;
          uVar22 = 0x7138c34c528b712f;
          lVar21 = 0;
          goto LAB_140b3855d;
        }
        uVar19 = (ushort)(uVar16 - 1) & (ushort)uVar16;
        uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar19);
      }
      auVar32[0] = -(*pcVar1 == -1);
      auVar32[1] = -(pcVar1[1] == -1);
      auVar32[2] = -(pcVar1[2] == -1);
      auVar32[3] = -(pcVar1[3] == -1);
      auVar32[4] = -(pcVar1[4] == -1);
      auVar32[5] = -(pcVar1[5] == -1);
      auVar32[6] = -(pcVar1[6] == -1);
      auVar32[7] = -(pcVar1[7] == -1);
      auVar32[8] = -(pcVar1[8] == -1);
      auVar32[9] = -(pcVar1[9] == -1);
      auVar32[10] = -(pcVar1[10] == -1);
      auVar32[0xb] = -(pcVar1[0xb] == -1);
      auVar32[0xc] = -(pcVar1[0xc] == -1);
      auVar32[0xd] = -(pcVar1[0xd] == -1);
      auVar32[0xe] = -(pcVar1[0xe] == -1);
      auVar32[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar32 >> 7,0) & 1) != 0 || (SUB161(auVar32 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar32 >> 0x17,0) & 1) != 0) || (SUB161(auVar32 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar32 >> 0x27,0) & 1) != 0) || (SUB161(auVar32 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar32 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar32 >> 0x3f,0) & 1) != 0) || (SUB161(auVar32 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar32 >> 0x4f,0) & 1) != 0) || (SUB161(auVar32 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar32 >> 0x5f,0) & 1) != 0) || (SUB161(auVar32 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar32 >> 0x6f,0) & 1) != 0) || (SUB161(auVar32 >> 0x77,0) & 1) != 0) ||
          auVar32[0xf] < '\0') break;
      uVar22 = uVar22 + lVar23 + 0x10;
      lVar23 = lVar23 + 0x10;
    }
  }
LAB_140b38693:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143058058);
LAB_140b3855d:
  uVar22 = uVar22 & uVar6;
  pcVar1 = (char *)(lVar13 + uVar22);
  auVar38[0] = -(*pcVar1 == DAT_142e33d90);
  auVar38[1] = -(pcVar1[1] == DAT_142e33d90._1_1_);
  auVar38[2] = -(pcVar1[2] == DAT_142e33d90._2_1_);
  auVar38[3] = -(pcVar1[3] == DAT_142e33d90._3_1_);
  auVar38[4] = -(pcVar1[4] == DAT_142e33d90._4_1_);
  auVar38[5] = -(pcVar1[5] == DAT_142e33d90._5_1_);
  auVar38[6] = -(pcVar1[6] == DAT_142e33d90._6_1_);
  auVar38[7] = -(pcVar1[7] == DAT_142e33d90._7_1_);
  auVar38[8] = -(pcVar1[8] == DAT_142e33d90._8_1_);
  auVar38[9] = -(pcVar1[9] == DAT_142e33d90._9_1_);
  auVar38[10] = -(pcVar1[10] == DAT_142e33d90._10_1_);
  auVar38[0xb] = -(pcVar1[0xb] == DAT_142e33d90._11_1_);
  auVar38[0xc] = -(pcVar1[0xc] == DAT_142e33d90._12_1_);
  auVar38[0xd] = -(pcVar1[0xd] == DAT_142e33d90._13_1_);
  auVar38[0xe] = -(pcVar1[0xe] == DAT_142e33d90._14_1_);
  auVar38[0xf] = -(pcVar1[0xf] == DAT_142e33d90._15_1_);
  uVar19 = (ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf;
  uVar16 = (uint)uVar19;
  while (uVar19 != 0) {
    uVar25 = 0;
    for (uVar11 = uVar16; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
      uVar25 = uVar25 + 1;
    }
    uVar28 = uVar25 + uVar22 & uVar6;
    pcVar2 = (char *)(lVar13 + -0x18 + uVar28 * -0x18);
    auVar39[0] = -(*pcVar2 == DAT_142e340c0);
    auVar39[1] = -(pcVar2[1] == DAT_142e340c0._1_1_);
    auVar39[2] = -(pcVar2[2] == DAT_142e340c0._2_1_);
    auVar39[3] = -(pcVar2[3] == DAT_142e340c0._3_1_);
    auVar39[4] = -(pcVar2[4] == DAT_142e340c0._4_1_);
    auVar39[5] = -(pcVar2[5] == DAT_142e340c0._5_1_);
    auVar39[6] = -(pcVar2[6] == DAT_142e340c0._6_1_);
    auVar39[7] = -(pcVar2[7] == DAT_142e340c0._7_1_);
    auVar39[8] = -(pcVar2[8] == DAT_142e340c0._8_1_);
    auVar39[9] = -(pcVar2[9] == DAT_142e340c0._9_1_);
    auVar39[10] = -(pcVar2[10] == DAT_142e340c0._10_1_);
    auVar39[0xb] = -(pcVar2[0xb] == DAT_142e340c0._11_1_);
    auVar39[0xc] = -(pcVar2[0xc] == DAT_142e340c0._12_1_);
    auVar39[0xd] = -(pcVar2[0xd] == DAT_142e340c0._13_1_);
    auVar39[0xe] = -(pcVar2[0xe] == DAT_142e340c0._14_1_);
    auVar39[0xf] = -(pcVar2[0xf] == DAT_142e340c0._15_1_);
    if ((ushort)((ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar22 = *(ulonglong *)(lVar13 + uVar28 * -0x18 + -8);
      if (((uVar20 <= uVar22) || (uVar22 = *(ulonglong *)(lVar23 + uVar22 * 8), uVar22 == 0)) ||
         (lVar21 = ~uVar22 * 0x40, *(longlong *)(lVar7 + 0x20 + lVar21) == 0)) goto LAB_140b387c2;
      puVar8 = *(ulonglong **)(lVar21 + lVar7 + 0x10);
      uVar22 = 0xade7b9c51f765c3a;
      lVar21 = 0;
      goto LAB_140b38626;
    }
    uVar19 = (ushort)(uVar16 - 1) & (ushort)uVar16;
    uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar19);
  }
  goto LAB_140b385b0;
LAB_140b38626:
  uVar22 = uVar22 & uVar6;
  pcVar1 = (char *)(lVar13 + uVar22);
  auVar40[0] = -(*pcVar1 == DAT_142e33f50);
  auVar40[1] = -(pcVar1[1] == DAT_142e33f50._1_1_);
  auVar40[2] = -(pcVar1[2] == DAT_142e33f50._2_1_);
  auVar40[3] = -(pcVar1[3] == DAT_142e33f50._3_1_);
  auVar40[4] = -(pcVar1[4] == DAT_142e33f50._4_1_);
  auVar40[5] = -(pcVar1[5] == DAT_142e33f50._5_1_);
  auVar40[6] = -(pcVar1[6] == DAT_142e33f50._6_1_);
  auVar40[7] = -(pcVar1[7] == DAT_142e33f50._7_1_);
  auVar40[8] = -(pcVar1[8] == DAT_142e33f50._8_1_);
  auVar40[9] = -(pcVar1[9] == DAT_142e33f50._9_1_);
  auVar40[10] = -(pcVar1[10] == DAT_142e33f50._10_1_);
  auVar40[0xb] = -(pcVar1[0xb] == DAT_142e33f50._11_1_);
  auVar40[0xc] = -(pcVar1[0xc] == DAT_142e33f50._12_1_);
  auVar40[0xd] = -(pcVar1[0xd] == DAT_142e33f50._13_1_);
  auVar40[0xe] = -(pcVar1[0xe] == DAT_142e33f50._14_1_);
  auVar40[0xf] = -(pcVar1[0xf] == DAT_142e33f50._15_1_);
  uVar19 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[0xf] >> 7) << 0xf;
  uVar16 = (uint)uVar19;
  while (uVar19 != 0) {
    uVar25 = 0;
    for (uVar11 = uVar16; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
      uVar25 = uVar25 + 1;
    }
    uVar28 = uVar25 + uVar22 & uVar6;
    pcVar2 = (char *)(lVar13 + -0x18 + uVar28 * -0x18);
    auVar41[0] = -(*pcVar2 == DAT_142e646f0);
    auVar41[1] = -(pcVar2[1] == DAT_142e646f0._1_1_);
    auVar41[2] = -(pcVar2[2] == DAT_142e646f0._2_1_);
    auVar41[3] = -(pcVar2[3] == DAT_142e646f0._3_1_);
    auVar41[4] = -(pcVar2[4] == DAT_142e646f0._4_1_);
    auVar41[5] = -(pcVar2[5] == DAT_142e646f0._5_1_);
    auVar41[6] = -(pcVar2[6] == DAT_142e646f0._6_1_);
    auVar41[7] = -(pcVar2[7] == DAT_142e646f0._7_1_);
    auVar41[8] = -(pcVar2[8] == DAT_142e646f0._8_1_);
    auVar41[9] = -(pcVar2[9] == DAT_142e646f0._9_1_);
    auVar41[10] = -(pcVar2[10] == DAT_142e646f0._10_1_);
    auVar41[0xb] = -(pcVar2[0xb] == DAT_142e646f0._11_1_);
    auVar41[0xc] = -(pcVar2[0xc] == DAT_142e646f0._12_1_);
    auVar41[0xd] = -(pcVar2[0xd] == DAT_142e646f0._13_1_);
    auVar41[0xe] = -(pcVar2[0xe] == DAT_142e646f0._14_1_);
    auVar41[0xf] = -(pcVar2[0xf] == DAT_142e646f0._15_1_);
    if ((ushort)((ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe | (ushort)(auVar41[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar22 = *(ulonglong *)(lVar13 + uVar28 * -0x18 + -8);
      if (((uVar20 <= uVar22) || (uVar22 = *(ulonglong *)(lVar23 + uVar22 * 8), uVar22 == 0)) ||
         (lVar21 = ~uVar22 * 0x40, *(longlong *)(lVar7 + 0x20 + lVar21) == 0)) goto LAB_140b387ce;
      lVar21 = *(longlong *)(lVar21 + lVar7 + 0x10);
      lVar29 = (ulonglong)*(byte *)(lVar21 + 0x4d0) * 8;
      lVar9 = *(longlong *)(&UNK_143058ca8 + lVar29);
      lVar29 = *(longlong *)(&UNK_143058cd8 + lVar29);
      uVar3 = *(undefined4 *)(lVar21 + 0x18 + lVar9);
      bVar5 = *(byte *)(lVar21 + 0x128 + lVar29);
      uVar16 = *(uint *)(lVar21 + lVar9);
      uVar27 = 0xffffffff;
      uVar26 = 0;
      if ((**(char **)(lVar18 + lVar7 + 0x10) != '\x10') || (uVar26 = 0, 1 < uVar16))
      goto LAB_140b3881c;
      uVar22 = 0x77d49562ba6c89f7;
      lVar18 = 0;
      goto LAB_140b38751;
    }
    uVar19 = (ushort)(uVar16 - 1) & (ushort)uVar16;
    uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar19);
  }
  goto LAB_140b38676;
LAB_140b38751:
  uVar22 = uVar22 & uVar6;
  pcVar1 = (char *)(lVar13 + uVar22);
  auVar47[0] = -(*pcVar1 == DAT_142e34220);
  auVar47[1] = -(pcVar1[1] == DAT_142e34220._1_1_);
  auVar47[2] = -(pcVar1[2] == DAT_142e34220._2_1_);
  auVar47[3] = -(pcVar1[3] == DAT_142e34220._3_1_);
  auVar47[4] = -(pcVar1[4] == DAT_142e34220._4_1_);
  auVar47[5] = -(pcVar1[5] == DAT_142e34220._5_1_);
  auVar47[6] = -(pcVar1[6] == DAT_142e34220._6_1_);
  auVar47[7] = -(pcVar1[7] == DAT_142e34220._7_1_);
  auVar47[8] = -(pcVar1[8] == DAT_142e34220._8_1_);
  auVar47[9] = -(pcVar1[9] == DAT_142e34220._9_1_);
  auVar47[10] = -(pcVar1[10] == DAT_142e34220._10_1_);
  auVar47[0xb] = -(pcVar1[0xb] == DAT_142e34220._11_1_);
  auVar47[0xc] = -(pcVar1[0xc] == DAT_142e34220._12_1_);
  auVar47[0xd] = -(pcVar1[0xd] == DAT_142e34220._13_1_);
  auVar47[0xe] = -(pcVar1[0xe] == DAT_142e34220._14_1_);
  auVar47[0xf] = -(pcVar1[0xf] == DAT_142e34220._15_1_);
  uVar19 = (ushort)(SUB161(auVar47 >> 7,0) & 1) | (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe | (ushort)(auVar47[0xf] >> 7) << 0xf;
  uVar25 = (uint)uVar19;
  while( true ) {
    if (uVar19 == 0) goto LAB_140b387a3;
    uVar11 = 0;
    for (uVar12 = uVar25; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
      uVar11 = uVar11 + 1;
    }
    uVar28 = uVar11 + uVar22 & uVar6;
    pcVar2 = (char *)(lVar13 + -0x18 + uVar28 * -0x18);
    auVar48[0] = -(*pcVar2 == DAT_142e64870);
    auVar48[1] = -(pcVar2[1] == DAT_142e64870._1_1_);
    auVar48[2] = -(pcVar2[2] == DAT_142e64870._2_1_);
    auVar48[3] = -(pcVar2[3] == DAT_142e64870._3_1_);
    auVar48[4] = -(pcVar2[4] == DAT_142e64870._4_1_);
    auVar48[5] = -(pcVar2[5] == DAT_142e64870._5_1_);
    auVar48[6] = -(pcVar2[6] == DAT_142e64870._6_1_);
    auVar48[7] = -(pcVar2[7] == DAT_142e64870._7_1_);
    auVar48[8] = -(pcVar2[8] == DAT_142e64870._8_1_);
    auVar48[9] = -(pcVar2[9] == DAT_142e64870._9_1_);
    auVar48[10] = -(pcVar2[10] == DAT_142e64870._10_1_);
    auVar48[0xb] = -(pcVar2[0xb] == DAT_142e64870._11_1_);
    auVar48[0xc] = -(pcVar2[0xc] == DAT_142e64870._12_1_);
    auVar48[0xd] = -(pcVar2[0xd] == DAT_142e64870._13_1_);
    auVar48[0xe] = -(pcVar2[0xe] == DAT_142e64870._14_1_);
    auVar48[0xf] = -(pcVar2[0xf] == DAT_142e64870._15_1_);
    if ((ushort)((ushort)(SUB161(auVar48 >> 7,0) & 1) | (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe | (ushort)(auVar48[0xf] >> 7) << 0xf
                ) == 0xffff) break;
    uVar19 = (ushort)(uVar25 - 1) & (ushort)uVar25;
    uVar25 = CONCAT22((short)(uVar25 - 1 >> 0x10),uVar19);
  }
  uVar22 = *(ulonglong *)(lVar13 + uVar28 * -0x18 + -8);
  if (((uVar20 <= uVar22) || (uVar22 = *(ulonglong *)(lVar23 + uVar22 * 8), uVar22 == 0)) ||
     (lVar18 = ~uVar22 * 0x40, *(longlong *)(lVar7 + 0x20 + lVar18) == 0)) goto LAB_140b38935;
  uVar27 = *(undefined4 *)(*(longlong *)(lVar18 + lVar7 + 0x10) + 4);
  uVar26 = 1;
LAB_140b3881c:
  iVar15 = 2;
  if (1 < uVar16) {
    iVar15 = uVar16 - 2;
  }
  if (iVar15 == 2) {
    lVar18 = 0x14;
    lVar24 = 0x10;
LAB_140b3884e:
    uVar49 = CONCAT44(_UNK_142f89644 - *(float *)(lVar9 + lVar21 + lVar18) * _UNK_142e36f64,
                      _DAT_142e36f50 +
                      (*(float *)(lVar9 + lVar21 + lVar24) /
                      ((float)(uint)*puVar8 / (float)*(uint *)((longlong)puVar8 + 4))) *
                      _DAT_142e36f60);
    uVar17 = 0;
  }
  else {
    if (iVar15 == 1) {
      lVar18 = 8;
      lVar24 = 4;
      goto LAB_140b3884e;
    }
    uVar22 = 0xac85b006918a30ef;
    lVar18 = 0;
    while( true ) {
      uVar22 = uVar22 & uVar6;
      pcVar1 = (char *)(lVar13 + uVar22);
      auVar43[0] = -(*pcVar1 == DAT_142e33f50);
      auVar43[1] = -(pcVar1[1] == DAT_142e33f50._1_1_);
      auVar43[2] = -(pcVar1[2] == DAT_142e33f50._2_1_);
      auVar43[3] = -(pcVar1[3] == DAT_142e33f50._3_1_);
      auVar43[4] = -(pcVar1[4] == DAT_142e33f50._4_1_);
      auVar43[5] = -(pcVar1[5] == DAT_142e33f50._5_1_);
      auVar43[6] = -(pcVar1[6] == DAT_142e33f50._6_1_);
      auVar43[7] = -(pcVar1[7] == DAT_142e33f50._7_1_);
      auVar43[8] = -(pcVar1[8] == DAT_142e33f50._8_1_);
      auVar43[9] = -(pcVar1[9] == DAT_142e33f50._9_1_);
      auVar43[10] = -(pcVar1[10] == DAT_142e33f50._10_1_);
      auVar43[0xb] = -(pcVar1[0xb] == DAT_142e33f50._11_1_);
      auVar43[0xc] = -(pcVar1[0xc] == DAT_142e33f50._12_1_);
      auVar43[0xd] = -(pcVar1[0xd] == DAT_142e33f50._13_1_);
      auVar43[0xe] = -(pcVar1[0xe] == DAT_142e33f50._14_1_);
      auVar43[0xf] = -(pcVar1[0xf] == DAT_142e33f50._15_1_);
      uVar19 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe | (ushort)(auVar43[0xf] >> 7) << 0xf;
      uVar16 = (uint)uVar19;
      if (uVar19 != 0) break;
LAB_140b38918:
      auVar35[0] = -(*pcVar1 == -1);
      auVar35[1] = -(pcVar1[1] == -1);
      auVar35[2] = -(pcVar1[2] == -1);
      auVar35[3] = -(pcVar1[3] == -1);
      auVar35[4] = -(pcVar1[4] == -1);
      auVar35[5] = -(pcVar1[5] == -1);
      auVar35[6] = -(pcVar1[6] == -1);
      auVar35[7] = -(pcVar1[7] == -1);
      auVar35[8] = -(pcVar1[8] == -1);
      auVar35[9] = -(pcVar1[9] == -1);
      auVar35[10] = -(pcVar1[10] == -1);
      auVar35[0xb] = -(pcVar1[0xb] == -1);
      auVar35[0xc] = -(pcVar1[0xc] == -1);
      auVar35[0xd] = -(pcVar1[0xd] == -1);
      auVar35[0xe] = -(pcVar1[0xe] == -1);
      auVar35[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar35 >> 0x17,0) & 1) != 0) || (SUB161(auVar35 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar35 >> 0x27,0) & 1) != 0) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar35 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar35 >> 0x3f,0) & 1) != 0) || (SUB161(auVar35 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar35 >> 0x4f,0) & 1) != 0) || (SUB161(auVar35 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar35 >> 0x5f,0) & 1) != 0) || (SUB161(auVar35 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar35 >> 0x6f,0) & 1) != 0) || (SUB161(auVar35 >> 0x77,0) & 1) != 0) ||
          auVar35[0xf] < '\0') {
LAB_140b38c1d:
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_1430580b8);
      }
      uVar22 = uVar22 + lVar18 + 0x10;
      lVar18 = lVar18 + 0x10;
    }
    while( true ) {
      uVar25 = 0;
      for (uVar11 = uVar16; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
        uVar25 = uVar25 + 1;
      }
      uVar28 = uVar25 + uVar22 & uVar6;
      pcVar2 = (char *)(lVar13 + -0x18 + uVar28 * -0x18);
      auVar44[0] = -(*pcVar2 == DAT_142e33f60);
      auVar44[1] = -(pcVar2[1] == DAT_142e33f60._1_1_);
      auVar44[2] = -(pcVar2[2] == DAT_142e33f60._2_1_);
      auVar44[3] = -(pcVar2[3] == DAT_142e33f60._3_1_);
      auVar44[4] = -(pcVar2[4] == DAT_142e33f60._4_1_);
      auVar44[5] = -(pcVar2[5] == DAT_142e33f60._5_1_);
      auVar44[6] = -(pcVar2[6] == DAT_142e33f60._6_1_);
      auVar44[7] = -(pcVar2[7] == DAT_142e33f60._7_1_);
      auVar44[8] = -(pcVar2[8] == DAT_142e33f60._8_1_);
      auVar44[9] = -(pcVar2[9] == DAT_142e33f60._9_1_);
      auVar44[10] = -(pcVar2[10] == DAT_142e33f60._10_1_);
      auVar44[0xb] = -(pcVar2[0xb] == DAT_142e33f60._11_1_);
      auVar44[0xc] = -(pcVar2[0xc] == DAT_142e33f60._12_1_);
      auVar44[0xd] = -(pcVar2[0xd] == DAT_142e33f60._13_1_);
      auVar44[0xe] = -(pcVar2[0xe] == DAT_142e33f60._14_1_);
      auVar44[0xf] = -(pcVar2[0xf] == DAT_142e33f60._15_1_);
      if ((ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar44[0xf] >> 7) << 0xf) == 0xffff) break;
      uVar19 = (ushort)(uVar16 - 1) & (ushort)uVar16;
      uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar19);
      if (uVar19 == 0) goto LAB_140b38918;
    }
    uVar22 = *(ulonglong *)(lVar13 + uVar28 * -0x18 + -8);
    if (((uVar20 <= uVar22) || (uVar22 = *(ulonglong *)(lVar23 + uVar22 * 8), uVar22 == 0)) ||
       (lVar18 = ~uVar22 * 0x40, *(longlong *)(lVar7 + 0x20 + lVar18) == 0)) goto LAB_140b38c1d;
    uVar49 = **(undefined8 **)(lVar18 + lVar7 + 0x10);
    auVar50._0_4_ = (float)uVar49 + _DAT_142e36f60;
    auVar50._4_4_ = (float)((ulonglong)uVar49 >> 0x20) + _UNK_142e36f64;
    auVar50._8_4_ = _UNK_142e36f68 + 0.0;
    auVar50._12_4_ = _UNK_142e36f6c + 0.0;
    auVar30._0_8_ = *puVar8 & 0xffffffff;
    auVar30._8_4_ = (int)(*puVar8 >> 0x20);
    auVar30._12_4_ = 0;
    auVar31._0_4_ = (float)(SUB168(auVar30 | _DAT_142e33010,0) - (double)DAT_142e33010);
    auVar31._4_4_ = (float)(SUB168(auVar30 | _DAT_142e33010,8) - DAT_142e33010._8_8_);
    auVar31._8_8_ = 0;
    auVar51 = divps(auVar50,auVar31);
    uVar49 = auVar51._0_8_;
    uVar17 = 1;
  }
  uVar22 = 0x1d6a82b468dfb8a2;
  lVar18 = 0;
  do {
    uVar22 = uVar22 & uVar6;
    auVar51 = *(undefined1 (*) [16])(lVar13 + uVar22);
    auVar45[0] = -(auVar51[0] == DAT_142e34ec0);
    auVar45[1] = -(auVar51[1] == DAT_142e34ec0._1_1_);
    auVar45[2] = -(auVar51[2] == DAT_142e34ec0._2_1_);
    auVar45[3] = -(auVar51[3] == DAT_142e34ec0._3_1_);
    auVar45[4] = -(auVar51[4] == DAT_142e34ec0._4_1_);
    auVar45[5] = -(auVar51[5] == DAT_142e34ec0._5_1_);
    auVar45[6] = -(auVar51[6] == DAT_142e34ec0._6_1_);
    auVar45[7] = -(auVar51[7] == DAT_142e34ec0._7_1_);
    auVar45[8] = -(auVar51[8] == DAT_142e34ec0._8_1_);
    auVar45[9] = -(auVar51[9] == DAT_142e34ec0._9_1_);
    auVar45[10] = -(auVar51[10] == DAT_142e34ec0._10_1_);
    auVar45[0xb] = -(auVar51[0xb] == DAT_142e34ec0._11_1_);
    auVar45[0xc] = -(auVar51[0xc] == DAT_142e34ec0._12_1_);
    auVar45[0xd] = -(auVar51[0xd] == DAT_142e34ec0._13_1_);
    auVar45[0xe] = -(auVar51[0xe] == DAT_142e34ec0._14_1_);
    auVar45[0xf] = -(auVar51[0xf] == DAT_142e34ec0._15_1_);
    uVar19 = (ushort)(SUB161(auVar45 >> 7,0) & 1) | (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe | (ushort)(auVar45[0xf] >> 7) << 0xf;
    uVar16 = (uint)uVar19;
    while (uVar19 != 0) {
      uVar25 = 0;
      for (uVar11 = uVar16; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
        uVar25 = uVar25 + 1;
      }
      uVar28 = uVar25 + uVar22 & uVar6;
      pcVar1 = (char *)(lVar13 + -0x18 + uVar28 * -0x18);
      auVar46[0] = -(*pcVar1 == DAT_142e60e60);
      auVar46[1] = -(pcVar1[1] == DAT_142e60e60._1_1_);
      auVar46[2] = -(pcVar1[2] == DAT_142e60e60._2_1_);
      auVar46[3] = -(pcVar1[3] == DAT_142e60e60._3_1_);
      auVar46[4] = -(pcVar1[4] == DAT_142e60e60._4_1_);
      auVar46[5] = -(pcVar1[5] == DAT_142e60e60._5_1_);
      auVar46[6] = -(pcVar1[6] == DAT_142e60e60._6_1_);
      auVar46[7] = -(pcVar1[7] == DAT_142e60e60._7_1_);
      auVar46[8] = -(pcVar1[8] == DAT_142e60e60._8_1_);
      auVar46[9] = -(pcVar1[9] == DAT_142e60e60._9_1_);
      auVar46[10] = -(pcVar1[10] == DAT_142e60e60._10_1_);
      auVar46[0xb] = -(pcVar1[0xb] == DAT_142e60e60._11_1_);
      auVar46[0xc] = -(pcVar1[0xc] == DAT_142e60e60._12_1_);
      auVar46[0xd] = -(pcVar1[0xd] == DAT_142e60e60._13_1_);
      auVar46[0xe] = -(pcVar1[0xe] == DAT_142e60e60._14_1_);
      auVar46[0xf] = -(pcVar1[0xf] == DAT_142e60e60._15_1_);
      if ((ushort)((ushort)(SUB161(auVar46 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar46 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar46 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar46 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar46 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar46 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar46 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar46 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar46 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar46 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar46 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar46 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar46 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar46 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar46 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar46[0xf] >> 7) << 0xf) == 0xffff) {
        uVar6 = *(ulonglong *)(lVar13 + uVar28 * -0x18 + -8);
        if (((uVar6 < uVar20) && (uVar6 = *(ulonglong *)(lVar23 + uVar6 * 8), uVar6 != 0)) &&
           (lVar13 = ~uVar6 * 0x40, *(longlong *)(lVar7 + 0x20 + lVar13) != 0)) {
          uVar10 = *(undefined8 *)(lVar7 + lVar13 + 0x10);
          pdb_14152d280(auStack_1b0,uVar10,param_1);
          pdb_14152a8e0(&uStack_100,uVar10,param_1);
          uStack_18c = uStack_f0;
          uStack_19c = uStack_100;
          uStack_194 = uStack_f8;
          uVar4 = *(undefined4 *)(lVar21 + 0x118 + lVar29);
          uStack_1c8 = 0;
          uStack_1c0 = 8;
          uStack_1b8 = 0;
          uVar14 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_1433315cb,0x24,&uStack_1c8);
          pdb_140e291c0(&uStack_188,&UNK_1433315cb,0x24,uVar14,param_1);
          uStack_200 = param_3;
          puStack_1f8 = auStack_1b0;
          puStack_1f0 = &uStack_19c;
          uStack_1e8 = uVar49;
          uStack_1e0 = uVar4;
          uStack_1dc = uVar17;
          uStack_1d8 = uVar27;
          uStack_1d4 = uVar26;
          uStack_1d0 = uVar3;
          uStack_1cc = (uint)bVar5;
          pdb_14178ea00(&uStack_100,&uStack_188,&uStack_200);
          uStack_184 = 0x800000008;
          uStack_17c = 1;
          uStack_188 = 1;
          pdb_140e28810(&uStack_100,&uStack_188);
          pdb_141538ec0(uVar10,param_1);
          pdb_141537200(uVar10,param_1);
          return;
        }
        goto LAB_140b38c11;
      }
      uVar19 = (ushort)(uVar16 - 1) & (ushort)uVar16;
      uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar19);
    }
    auVar36[0] = -(auVar51[0] == -1);
    auVar36[1] = -(auVar51[1] == -1);
    auVar36[2] = -(auVar51[2] == -1);
    auVar36[3] = -(auVar51[3] == -1);
    auVar36[4] = -(auVar51[4] == -1);
    auVar36[5] = -(auVar51[5] == -1);
    auVar36[6] = -(auVar51[6] == -1);
    auVar36[7] = -(auVar51[7] == -1);
    auVar36[8] = -(auVar51[8] == -1);
    auVar36[9] = -(auVar51[9] == -1);
    auVar36[10] = -(auVar51[10] == -1);
    auVar36[0xb] = -(auVar51[0xb] == -1);
    auVar36[0xc] = -(auVar51[0xc] == -1);
    auVar36[0xd] = -(auVar51[0xd] == -1);
    auVar36[0xe] = -(auVar51[0xe] == -1);
    auVar36[0xf] = -(auVar51[0xf] == -1);
    if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar36 >> 0x17,0) & 1) != 0) || (SUB161(auVar36 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar36 >> 0x27,0) & 1) != 0) || (SUB161(auVar36 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar36 >> 0x37,0) & 1) != 0) || (SUB161(auVar36 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar36 >> 0x47,0) & 1) != 0) || (SUB161(auVar36 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar36 >> 0x57,0) & 1) != 0) || (SUB161(auVar36 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar36 >> 0x67,0) & 1) != 0) || (SUB161(auVar36 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar36 >> 0x77,0) & 1) != 0) || auVar36[0xf] < '\0') {
LAB_140b38c11:
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1430580d0);
    }
    uVar22 = uVar22 + lVar18 + 0x10;
    lVar18 = lVar18 + 0x10;
  } while( true );
LAB_140b387a3:
  auVar42[0] = -(*pcVar1 == -1);
  auVar42[1] = -(pcVar1[1] == -1);
  auVar42[2] = -(pcVar1[2] == -1);
  auVar42[3] = -(pcVar1[3] == -1);
  auVar42[4] = -(pcVar1[4] == -1);
  auVar42[5] = -(pcVar1[5] == -1);
  auVar42[6] = -(pcVar1[6] == -1);
  auVar42[7] = -(pcVar1[7] == -1);
  auVar42[8] = -(pcVar1[8] == -1);
  auVar42[9] = -(pcVar1[9] == -1);
  auVar42[10] = -(pcVar1[10] == -1);
  auVar42[0xb] = -(pcVar1[0xb] == -1);
  auVar42[0xc] = -(pcVar1[0xc] == -1);
  auVar42[0xd] = -(pcVar1[0xd] == -1);
  auVar42[0xe] = -(pcVar1[0xe] == -1);
  auVar42[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar42 >> 7,0) & 1) != 0 || (SUB161(auVar42 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar42 >> 0x17,0) & 1) != 0) || (SUB161(auVar42 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar42 >> 0x27,0) & 1) != 0) || (SUB161(auVar42 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar42 >> 0x37,0) & 1) != 0) || (SUB161(auVar42 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar42 >> 0x47,0) & 1) != 0) || (SUB161(auVar42 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar42 >> 0x57,0) & 1) != 0) || (SUB161(auVar42 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar42 >> 0x67,0) & 1) != 0) || (SUB161(auVar42 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar42 >> 0x77,0) & 1) != 0) || auVar42[0xf] < '\0') {
LAB_140b38935:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430580a0);
  }
  uVar22 = uVar22 + lVar18 + 0x10;
  lVar18 = lVar18 + 0x10;
  goto LAB_140b38751;
LAB_140b38676:
  auVar34[0] = -(*pcVar1 == -1);
  auVar34[1] = -(pcVar1[1] == -1);
  auVar34[2] = -(pcVar1[2] == -1);
  auVar34[3] = -(pcVar1[3] == -1);
  auVar34[4] = -(pcVar1[4] == -1);
  auVar34[5] = -(pcVar1[5] == -1);
  auVar34[6] = -(pcVar1[6] == -1);
  auVar34[7] = -(pcVar1[7] == -1);
  auVar34[8] = -(pcVar1[8] == -1);
  auVar34[9] = -(pcVar1[9] == -1);
  auVar34[10] = -(pcVar1[10] == -1);
  auVar34[0xb] = -(pcVar1[0xb] == -1);
  auVar34[0xc] = -(pcVar1[0xc] == -1);
  auVar34[0xd] = -(pcVar1[0xd] == -1);
  auVar34[0xe] = -(pcVar1[0xe] == -1);
  auVar34[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 || (SUB161(auVar34 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar34 >> 0x17,0) & 1) != 0) || (SUB161(auVar34 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar34 >> 0x27,0) & 1) != 0) || (SUB161(auVar34 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar34 >> 0x37,0) & 1) != 0) || (SUB161(auVar34 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar34 >> 0x47,0) & 1) != 0) || (SUB161(auVar34 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar34 >> 0x57,0) & 1) != 0) || (SUB161(auVar34 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar34 >> 0x67,0) & 1) != 0) || (SUB161(auVar34 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar34 >> 0x77,0) & 1) != 0) || auVar34[0xf] < '\0') {
LAB_140b387ce:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143058088);
  }
  uVar22 = uVar22 + lVar21 + 0x10;
  lVar21 = lVar21 + 0x10;
  goto LAB_140b38626;
LAB_140b385b0:
  auVar33[0] = -(*pcVar1 == -1);
  auVar33[1] = -(pcVar1[1] == -1);
  auVar33[2] = -(pcVar1[2] == -1);
  auVar33[3] = -(pcVar1[3] == -1);
  auVar33[4] = -(pcVar1[4] == -1);
  auVar33[5] = -(pcVar1[5] == -1);
  auVar33[6] = -(pcVar1[6] == -1);
  auVar33[7] = -(pcVar1[7] == -1);
  auVar33[8] = -(pcVar1[8] == -1);
  auVar33[9] = -(pcVar1[9] == -1);
  auVar33[10] = -(pcVar1[10] == -1);
  auVar33[0xb] = -(pcVar1[0xb] == -1);
  auVar33[0xc] = -(pcVar1[0xc] == -1);
  auVar33[0xd] = -(pcVar1[0xd] == -1);
  auVar33[0xe] = -(pcVar1[0xe] == -1);
  auVar33[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 || (SUB161(auVar33 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar33 >> 0x17,0) & 1) != 0) || (SUB161(auVar33 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar33 >> 0x27,0) & 1) != 0) || (SUB161(auVar33 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar33 >> 0x37,0) & 1) != 0) || (SUB161(auVar33 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar33 >> 0x47,0) & 1) != 0) || (SUB161(auVar33 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar33 >> 0x57,0) & 1) != 0) || (SUB161(auVar33 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar33 >> 0x67,0) & 1) != 0) || (SUB161(auVar33 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar33 >> 0x77,0) & 1) != 0) || auVar33[0xf] < '\0') {
LAB_140b387c2:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143058070);
  }
  uVar22 = uVar22 + lVar21 + 0x10;
  lVar21 = lVar21 + 0x10;
  goto LAB_140b3855d;
}

