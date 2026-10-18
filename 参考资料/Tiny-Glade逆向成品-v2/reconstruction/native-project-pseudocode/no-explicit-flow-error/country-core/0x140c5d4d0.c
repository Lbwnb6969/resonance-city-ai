// VA 0x140c5d4d0, PDB extent 1232 bytes
// country_core::resources::rt::bvh::build_gpu_bvh
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/rt/bvh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::rt::bvh::build_gpu_bvh
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/rt/bvh.rs
   Extent: 1232 */

undefined8 * pdb_140c5d4d0(undefined8 *param_1,ulonglong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  ulonglong uVar17;
  byte *pbVar18;
  ulonglong unaff_R15;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  longlong lStack_180;
  byte *pbStack_178;
  longlong lStack_170;
  longlong lStack_148;
  byte *pbStack_140;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  ulonglong *puStack_d0;
  ulonglong uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 **ppuStack_88;
  undefined8 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  ulonglong uStack_68;
  byte *pbStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  uVar17 = param_3;
  if (param_3 < 0x2aaaaaaaaaaaaab) goto LAB_140c5d511;
  puVar9 = (undefined8 *)0x0;
  do {
    param_2 = unaff_R15;
    param_1 = puVar9;
    pdb_142dc7e2a();
    uVar17 = param_3;
LAB_140c5d511:
    if (uVar17 == 0) {
      *param_1 = 0;
      param_1[1] = 4;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 4;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 4;
      param_1[8] = 0;
      return param_1;
    }
    param_3 = uVar17;
    pdb_14007ee60();
    puVar16 = (undefined4 *)0x10;
    pbVar10 = pub_1406abab0(uVar17 * 0x30,0x10);
    puVar9 = (undefined8 *)0x10;
    unaff_R15 = uVar17 * 0x30;
  } while (pbVar10 == (byte *)0x0);
  if (uVar17 == 1) {
    uVar11 = 0;
  }
  else {
    puVar16 = (undefined4 *)(param_2 + 0x40);
    pbVar18 = pbVar10 + 0x50;
    uVar11 = 0;
    do {
      uVar14 = puVar16[-0xf];
      uVar15 = puVar16[-0xe];
      uVar3 = puVar16[-0xd];
      uVar4 = puVar16[-0xc];
      uVar5 = puVar16[-0xb];
      uVar6 = puVar16[-10];
      uVar7 = puVar16[-9];
      uVar8 = puVar16[-8];
      *(undefined4 *)(pbVar18 + -0x50) = puVar16[-0x10];
      *(undefined4 *)(pbVar18 + -0x4c) = uVar14;
      *(undefined4 *)(pbVar18 + -0x48) = uVar15;
      *(undefined4 *)(pbVar18 + -0x44) = uVar15;
      *(undefined4 *)(pbVar18 + -0x40) = uVar3;
      *(undefined4 *)(pbVar18 + -0x3c) = uVar4;
      *(undefined4 *)(pbVar18 + -0x38) = uVar5;
      *(undefined4 *)(pbVar18 + -0x34) = uVar5;
      *(undefined4 *)(pbVar18 + -0x30) = uVar6;
      *(undefined4 *)(pbVar18 + -0x2c) = uVar7;
      *(undefined4 *)(pbVar18 + -0x28) = uVar8;
      *(undefined4 *)(pbVar18 + -0x24) = uVar8;
      uVar14 = puVar16[-5];
      uVar15 = puVar16[-4];
      uVar3 = puVar16[-3];
      uVar4 = puVar16[-2];
      uVar5 = puVar16[-1];
      uVar6 = *puVar16;
      uVar7 = puVar16[1];
      uVar8 = puVar16[2];
      *(undefined4 *)(pbVar18 + -0x20) = puVar16[-6];
      *(undefined4 *)(pbVar18 + -0x1c) = uVar14;
      *(undefined4 *)(pbVar18 + -0x18) = uVar15;
      *(undefined4 *)(pbVar18 + -0x14) = uVar15;
      *(undefined4 *)(pbVar18 + -0x10) = uVar3;
      *(undefined4 *)(pbVar18 + -0xc) = uVar4;
      *(undefined4 *)(pbVar18 + -8) = uVar5;
      *(undefined4 *)(pbVar18 + -4) = uVar5;
      *(undefined4 *)pbVar18 = uVar6;
      *(undefined4 *)(pbVar18 + 4) = uVar7;
      *(undefined4 *)(pbVar18 + 8) = uVar8;
      *(undefined4 *)(pbVar18 + 0xc) = uVar8;
      uVar11 = uVar11 + 2;
      puVar16 = puVar16 + 0x14;
      pbVar18 = pbVar18 + 0x60;
    } while ((uVar17 & 0x3fffffffffffffe) != uVar11);
    if ((uVar17 & 1) == 0) goto LAB_140c5d64a;
  }
  puVar1 = (undefined4 *)(param_2 + uVar11 * 0x28);
  uVar14 = puVar1[1];
  uVar15 = puVar1[2];
  puVar2 = (undefined4 *)(param_2 + 0xc + uVar11 * 0x28);
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  puVar2 = (undefined4 *)(param_2 + 0x18 + uVar11 * 0x28);
  uVar6 = *puVar2;
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  lVar12 = uVar11 * 0x30;
  pbVar18 = pbVar10 + lVar12;
  *(undefined4 *)pbVar18 = *puVar1;
  *(undefined4 *)(pbVar18 + 4) = uVar14;
  *(undefined4 *)(pbVar18 + 8) = uVar15;
  *(undefined4 *)(pbVar18 + 0xc) = uVar15;
  pbVar18 = pbVar10 + lVar12 + 0x10;
  *(undefined4 *)pbVar18 = uVar3;
  *(undefined4 *)(pbVar18 + 4) = uVar4;
  *(undefined4 *)(pbVar18 + 8) = uVar5;
  *(undefined4 *)(pbVar18 + 0xc) = uVar5;
  pbVar18 = pbVar10 + lVar12 + 0x20;
  *(undefined4 *)pbVar18 = uVar6;
  *(undefined4 *)(pbVar18 + 4) = uVar7;
  *(undefined4 *)(pbVar18 + 8) = uVar8;
  *(undefined4 *)(pbVar18 + 0xc) = uVar8;
LAB_140c5d64a:
  uVar14 = SUB84(puVar16,0);
  uStack_68 = uVar17;
  pbStack_60 = pbVar10;
  uStack_58 = uVar17;
  uStack_50 = uVar17;
  uVar13 = pdb_140f3c9d0();
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_c8 = CONCAT53(uStack_c8._3_5_,0x10000);
  uStack_c8 = CONCAT71(uStack_c8._1_7_,4);
  pbStack_e0 = (byte *)0x1;
  pbStack_d8 = (byte *)_DAT_1430348f0;
  puStack_d0 = (ulonglong *)0x4040000000000003;
  uStack_50 = uVar17;
  pdb_141c88ad0(&uStack_198,pbVar10,uVar17,&pbStack_e0,&uStack_f0);
  uVar15 = SUB84(pbVar10,0);
  uStack_100 = pdb_140f3c9d0();
  uStack_f8 = uVar15;
  if (4 < *_DAT_143ca8e90) {
    uStack_110 = pdb_140f3c790(&uStack_100,uVar13,uVar14);
    uStack_108 = (undefined4)uVar13;
    puStack_80 = &uStack_110;
    pcStack_78 = pdb_140f72840;
    pbStack_e0 = (byte *)0x0;
    pbStack_d8 = &UNK_14306f4ce;
    puStack_d0 = (ulonglong *)0x20;
    uStack_c8 = 0;
    puStack_c0 = &UNK_14306f4a2;
    uStack_b8 = 0x2b;
    uStack_b0 = 5;
    puStack_a8 = &UNK_14306f4ce;
    uStack_a0 = 0x20;
    uStack_98 = 0x6400000001;
    puStack_90 = &UNK_14306f47d;
    ppuStack_88 = &puStack_80;
    pdb_140f332f0(&uStack_41,&pbStack_e0);
  }
  pbStack_e0 = pbStack_178;
  puStack_d0 = &uStack_68;
  pbStack_d8 = pbStack_178 + lStack_170 * 4;
  pdb_1415efff0(&puStack_80,&pbStack_e0);
  pbStack_e0 = pbStack_178;
  pbStack_d8 = pbStack_178 + lStack_170 * 4;
  puStack_d0 = (ulonglong *)param_2;
  uStack_c8 = uVar17;
  pdb_1415f81d0(&uStack_128,&pbStack_e0);
  param_1[2] = uStack_188;
  *param_1 = uStack_198;
  param_1[1] = uStack_190;
  param_1[5] = uStack_70;
  param_1[3] = puStack_80;
  param_1[4] = pcStack_78;
  param_1[8] = uStack_118;
  param_1[6] = uStack_128;
  param_1[7] = uStack_120;
  if (lStack_180 != 0) {
    pub_1406abac0(pbStack_178,lStack_180 << 2,4);
  }
  if ((!SBORROW8(0,lStack_148)) && (lStack_148 != 0)) {
    pub_1406abac0(pbStack_140,lStack_148 << 5,0x10);
  }
  if (uStack_68 != 0) {
    pub_1406abac0(pbStack_60,uStack_68 * 0x30,0x10);
  }
  return param_1;
}

