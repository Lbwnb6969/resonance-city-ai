// VA 0x140b20f60, PDB extent 1674 bytes
// country_core::systems::render_loop::compute_passes::grass2::grass2_compute_main
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/grass2.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::grass2::grass2_compute_main
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/grass2.rs
   Extent: 1674 */

void pdb_140b20f60(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  ulonglong uVar13;
  undefined7 uVar15;
  undefined7 uVar16;
  undefined8 uVar14;
  uint uVar17;
  longlong lVar18;
  ushort uVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined1 auStack_100 [20];
  undefined1 *puStack_ec;
  undefined8 uStack_e4;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  int iStack_68;
  undefined4 uStack_64;
  ulonglong *puStack_60;
  ulonglong *puStack_58;
  ulonglong *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar8 = *(longlong *)(param_1 + 0x130);
  if (lVar8 == *(longlong *)(param_1 + 0x120)) {
    pdb_142d8afd0(param_1 + 0x120);
  }
  lVar18 = *(longlong *)(param_1 + 0x128);
  *(undefined **)(lVar18 + lVar8 * 0x10) = &UNK_143055dab;
  *(undefined8 *)(lVar18 + 8 + lVar8 * 0x10) = 0x1a;
  *(longlong *)(param_1 + 0x130) = lVar8 + 1;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar8 = *(longlong *)(param_2 + 0x70);
    uVar3 = *(ulonglong *)(param_2 + 0x78);
    uVar13 = 0x1d6a82b468dfb8a2;
    lVar18 = 0;
    while( true ) {
      uVar13 = uVar13 & uVar3;
      pcVar1 = (char *)(lVar8 + uVar13);
      auVar25[0] = -(*pcVar1 == DAT_142e34ec0);
      auVar25[1] = -(pcVar1[1] == UNK_142e34ec1);
      auVar25[2] = -(pcVar1[2] == UNK_142e34ec2);
      auVar25[3] = -(pcVar1[3] == UNK_142e34ec3);
      auVar25[4] = -(pcVar1[4] == UNK_142e34ec4);
      auVar25[5] = -(pcVar1[5] == UNK_142e34ec5);
      auVar25[6] = -(pcVar1[6] == UNK_142e34ec6);
      auVar25[7] = -(pcVar1[7] == UNK_142e34ec7);
      auVar25[8] = -(pcVar1[8] == UNK_142e34ec8);
      auVar25[9] = -(pcVar1[9] == UNK_142e34ec9);
      auVar25[10] = -(pcVar1[10] == UNK_142e34eca);
      auVar25[0xb] = -(pcVar1[0xb] == UNK_142e34ecb);
      auVar25[0xc] = -(pcVar1[0xc] == UNK_142e34ecc);
      auVar25[0xd] = -(pcVar1[0xd] == UNK_142e34ecd);
      auVar25[0xe] = -(pcVar1[0xe] == UNK_142e34ece);
      auVar25[0xf] = -(pcVar1[0xf] == UNK_142e34ecf);
      uVar19 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf;
      uVar17 = (uint)uVar19;
      while (uVar19 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar17; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar20 = uVar5 + uVar13 & uVar3;
        pcVar2 = (char *)(lVar8 + -0x18 + uVar20 * -0x18);
        auVar26[0] = -(*pcVar2 == DAT_142e60e60);
        auVar26[1] = -(pcVar2[1] == UNK_142e60e61);
        auVar26[2] = -(pcVar2[2] == UNK_142e60e62);
        auVar26[3] = -(pcVar2[3] == UNK_142e60e63);
        auVar26[4] = -(pcVar2[4] == UNK_142e60e64);
        auVar26[5] = -(pcVar2[5] == UNK_142e60e65);
        auVar26[6] = -(pcVar2[6] == UNK_142e60e66);
        auVar26[7] = -(pcVar2[7] == UNK_142e60e67);
        auVar26[8] = -(pcVar2[8] == UNK_142e60e68);
        auVar26[9] = -(pcVar2[9] == UNK_142e60e69);
        auVar26[10] = -(pcVar2[10] == UNK_142e60e6a);
        auVar26[0xb] = -(pcVar2[0xb] == UNK_142e60e6b);
        auVar26[0xc] = -(pcVar2[0xc] == UNK_142e60e6c);
        auVar26[0xd] = -(pcVar2[0xd] == UNK_142e60e6d);
        auVar26[0xe] = -(pcVar2[0xe] == UNK_142e60e6e);
        auVar26[0xf] = -(pcVar2[0xf] == UNK_142e60e6f);
        if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar26[0xf] >> 7) << 0xf) == 0xffff) {
          uVar13 = *(ulonglong *)(lVar8 + uVar20 * -0x18 + -8);
          if (*(ulonglong *)(param_2 + 0x210) <= uVar13) goto LAB_140b214d8;
          uVar13 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar13 * 8);
          if (uVar13 == 0) goto LAB_140b214d8;
          lVar18 = *(longlong *)(param_2 + 0x1d8);
          lVar21 = ~uVar13 * 0x40;
          if (*(longlong *)(lVar18 + 0x20 + lVar21) == 0) goto LAB_140b214d8;
          uVar4 = *(undefined8 *)(lVar21 + lVar18 + 0x10);
          uVar13 = 0x7057b4358e925fdb;
          lVar21 = 0;
          goto LAB_140b210ed;
        }
        uVar19 = (ushort)(uVar17 - 1) & (ushort)uVar17;
        uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar19);
      }
      auVar23[0] = -(*pcVar1 == -1);
      auVar23[1] = -(pcVar1[1] == -1);
      auVar23[2] = -(pcVar1[2] == -1);
      auVar23[3] = -(pcVar1[3] == -1);
      auVar23[4] = -(pcVar1[4] == -1);
      auVar23[5] = -(pcVar1[5] == -1);
      auVar23[6] = -(pcVar1[6] == -1);
      auVar23[7] = -(pcVar1[7] == -1);
      auVar23[8] = -(pcVar1[8] == -1);
      auVar23[9] = -(pcVar1[9] == -1);
      auVar23[10] = -(pcVar1[10] == -1);
      auVar23[0xb] = -(pcVar1[0xb] == -1);
      auVar23[0xc] = -(pcVar1[0xc] == -1);
      auVar23[0xd] = -(pcVar1[0xd] == -1);
      auVar23[0xe] = -(pcVar1[0xe] == -1);
      auVar23[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar23 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar23 >> 0x3f,0) & 1) != 0) || (SUB161(auVar23 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar23 >> 0x4f,0) & 1) != 0) || (SUB161(auVar23 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar23 >> 0x5f,0) & 1) != 0) || (SUB161(auVar23 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar23 >> 0x6f,0) & 1) != 0) || (SUB161(auVar23 >> 0x77,0) & 1) != 0) ||
          auVar23[0xf] < '\0') break;
      uVar13 = uVar13 + lVar18 + 0x10;
      lVar18 = lVar18 + 0x10;
    }
  }
LAB_140b214d8:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143055dc8);
LAB_140b210ed:
  uVar13 = uVar13 & uVar3;
  auVar25 = *(undefined1 (*) [16])(lVar8 + uVar13);
  auVar27[0] = -(auVar25[0] == DAT_142e33d90);
  auVar27[1] = -(auVar25[1] == DAT_142e33d90._1_1_);
  auVar27[2] = -(auVar25[2] == DAT_142e33d90._2_1_);
  auVar27[3] = -(auVar25[3] == DAT_142e33d90._3_1_);
  auVar27[4] = -(auVar25[4] == DAT_142e33d90._4_1_);
  auVar27[5] = -(auVar25[5] == DAT_142e33d90._5_1_);
  auVar27[6] = -(auVar25[6] == DAT_142e33d90._6_1_);
  auVar27[7] = -(auVar25[7] == DAT_142e33d90._7_1_);
  auVar27[8] = -(auVar25[8] == DAT_142e33d90._8_1_);
  auVar27[9] = -(auVar25[9] == DAT_142e33d90._9_1_);
  auVar27[10] = -(auVar25[10] == DAT_142e33d90._10_1_);
  auVar27[0xb] = -(auVar25[0xb] == DAT_142e33d90._11_1_);
  auVar27[0xc] = -(auVar25[0xc] == DAT_142e33d90._12_1_);
  auVar27[0xd] = -(auVar25[0xd] == DAT_142e33d90._13_1_);
  auVar27[0xe] = -(auVar25[0xe] == DAT_142e33d90._14_1_);
  auVar27[0xf] = -(auVar25[0xf] == DAT_142e33d90._15_1_);
  uVar19 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
  uVar17 = (uint)uVar19;
  while (uVar19 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar17; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar20 = uVar5 + uVar13 & uVar3;
    pcVar1 = (char *)(lVar8 + -0x18 + uVar20 * -0x18);
    auVar28[0] = -(*pcVar1 == DAT_142e34350);
    auVar28[1] = -(pcVar1[1] == DAT_142e34350._1_1_);
    auVar28[2] = -(pcVar1[2] == DAT_142e34350._2_1_);
    auVar28[3] = -(pcVar1[3] == DAT_142e34350._3_1_);
    auVar28[4] = -(pcVar1[4] == DAT_142e34350._4_1_);
    auVar28[5] = -(pcVar1[5] == DAT_142e34350._5_1_);
    auVar28[6] = -(pcVar1[6] == DAT_142e34350._6_1_);
    auVar28[7] = -(pcVar1[7] == DAT_142e34350._7_1_);
    auVar28[8] = -(pcVar1[8] == DAT_142e34350._8_1_);
    auVar28[9] = -(pcVar1[9] == DAT_142e34350._9_1_);
    auVar28[10] = -(pcVar1[10] == DAT_142e34350._10_1_);
    auVar28[0xb] = -(pcVar1[0xb] == DAT_142e34350._11_1_);
    auVar28[0xc] = -(pcVar1[0xc] == DAT_142e34350._12_1_);
    auVar28[0xd] = -(pcVar1[0xd] == DAT_142e34350._13_1_);
    auVar28[0xe] = -(pcVar1[0xe] == DAT_142e34350._14_1_);
    auVar28[0xf] = -(pcVar1[0xf] == DAT_142e34350._15_1_);
    if ((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) | (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe | (ushort)(auVar28[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar3 = *(ulonglong *)(lVar8 + uVar20 * -0x18 + -8);
      if (((uVar3 < *(ulonglong *)(param_2 + 0x210)) &&
          (uVar3 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar3 * 8), uVar3 != 0)) &&
         (lVar8 = ~uVar3 * 0x40, *(longlong *)(lVar18 + 0x20 + lVar8) != 0)) {
        lVar18 = lVar18 + lVar8;
        uVar9 = *(undefined8 *)(lVar18 + 0x10);
        uVar15 = (undefined7)((ulonglong)lVar18 >> 8);
        uVar11 = 0x15;
        puStack_60 = (ulonglong *)pdb_140a2db30(uVar9);
        uVar12 = 0x12;
        uVar16 = uVar15;
        puStack_58 = (ulonglong *)pdb_140a2db30(uVar9);
        uVar14 = CONCAT71(uVar16,5);
        puStack_50 = (ulonglong *)pdb_140a2db30(uVar9);
        pdb_14152e750(auStack_100,uVar4,param_1);
        pdb_14152c940(&puStack_98,uVar4,param_1);
        pdb_1415291c0(&uStack_210,uVar4,param_1);
        pdb_141527850(&uStack_188,uVar4,param_1);
        uStack_dc = puStack_88._0_4_;
        puStack_ec = puStack_98;
        uStack_e4 = puStack_90;
        uStack_d8 = uStack_210;
        uStack_d0 = uStack_208;
        uStack_c8 = uStack_200;
        uStack_c4 = uStack_188;
        uStack_bc = uStack_180;
        uStack_b4 = uStack_178;
        pdb_140e29980(param_1,&uStack_d8);
        pdb_141765440(param_1,&UNK_143055d3c,0x16,&UNK_143055d52,0x40,&uStack_c4);
        iVar10 = 0;
        if (0 < _DAT_143cb2cfc) {
          iVar10 = _DAT_143cb2cfc;
        }
        iVar22 = -1;
        if (DAT_143cb2d01 != '\0') {
          iVar22 = iVar10;
        }
        uStack_b0 = 0;
        uStack_a8 = 8;
        uStack_a0 = 0;
        uVar9 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331c02,0x24,&uStack_b0);
        pdb_140e291c0(&uStack_188,&UNK_143331c02,0x24,uVar9,param_1);
        puStack_90 = &puStack_ec;
        puStack_98 = auStack_100;
        uStack_64 = 0xd;
        puStack_88 = &uStack_d8;
        uStack_70 = uVar14;
        iStack_68 = iVar22;
        uStack_80 = uVar11;
        uStack_7f = uVar15;
        uStack_78 = uVar12;
        uStack_77 = uVar16;
        pdb_14178d190(&uStack_210,&uStack_188,&puStack_98);
        pub_142e32760(&uStack_188,&uStack_210,0x88);
        puStack_98 = _DAT_1430556a0;
        puStack_90 = (undefined8 *)_UNK_1430556a8;
        pdb_140e28810(&uStack_188,&puStack_98);
        pdb_14153a2c0(uVar4,param_1);
        pdb_141539000(uVar4,param_1);
        pdb_1415393c0(uVar4,param_1);
        pdb_1415367a0(uVar4,param_1);
        puVar7 = puStack_50;
        pdb_140e9a350(puStack_50);
        pdb_140e9a350((ulonglong)puVar7 | 1);
        LOCK();
        uVar3 = *puVar7;
        *puVar7 = *puVar7 - 0x10;
        UNLOCK();
        if ((uVar3 & 0xfffffffffffffff2) == 0x12) {
          pdb_142dbbf50(puVar7);
        }
        puVar7 = puStack_58;
        pdb_140e9a350(puStack_58);
        pdb_140e9a350((ulonglong)puVar7 | 1);
        LOCK();
        uVar3 = *puVar7;
        *puVar7 = *puVar7 - 0x10;
        UNLOCK();
        if ((uVar3 & 0xfffffffffffffff2) == 0x12) {
          pdb_142dbbf50(puVar7);
        }
        puVar7 = puStack_60;
        pdb_140e9a350(puStack_60);
        pdb_140e9a350((ulonglong)puVar7 | 1);
        LOCK();
        uVar3 = *puVar7;
        *puVar7 = *puVar7 - 0x10;
        UNLOCK();
        if ((uVar3 & 0xfffffffffffffff2) == 0x12) {
          pdb_142dbbf50(puVar7);
          lVar8 = *(longlong *)(param_1 + 0x130);
          if (lVar8 != *(longlong *)(param_1 + 0x120)) goto LAB_140b214a4;
        }
        else {
          lVar8 = *(longlong *)(param_1 + 0x130);
          if (lVar8 != *(longlong *)(param_1 + 0x120)) goto LAB_140b214a4;
        }
        pdb_142d8afd0(param_1 + 0x120);
LAB_140b214a4:
        *(undefined8 *)(*(longlong *)(param_1 + 0x128) + lVar8 * 0x10) = 0;
        *(longlong *)(param_1 + 0x130) = lVar8 + 1;
        return;
      }
      goto LAB_140b214e4;
    }
    uVar19 = (ushort)(uVar17 - 1) & (ushort)uVar17;
    uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar19);
  }
  auVar24[0] = -(auVar25[0] == -1);
  auVar24[1] = -(auVar25[1] == -1);
  auVar24[2] = -(auVar25[2] == -1);
  auVar24[3] = -(auVar25[3] == -1);
  auVar24[4] = -(auVar25[4] == -1);
  auVar24[5] = -(auVar25[5] == -1);
  auVar24[6] = -(auVar25[6] == -1);
  auVar24[7] = -(auVar25[7] == -1);
  auVar24[8] = -(auVar25[8] == -1);
  auVar24[9] = -(auVar25[9] == -1);
  auVar24[10] = -(auVar25[10] == -1);
  auVar24[0xb] = -(auVar25[0xb] == -1);
  auVar24[0xc] = -(auVar25[0xc] == -1);
  auVar24[0xd] = -(auVar25[0xd] == -1);
  auVar24[0xe] = -(auVar25[0xe] == -1);
  auVar24[0xf] = -(auVar25[0xf] == -1);
  if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') {
LAB_140b214e4:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143055de0);
  }
  uVar13 = uVar13 + lVar21 + 0x10;
  lVar21 = lVar21 + 0x10;
  goto LAB_140b210ed;
}

