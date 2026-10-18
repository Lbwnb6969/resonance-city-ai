// Matched PDB: country_core::resources::rt::bvh::build_gpu_bvh
// VA 0x140c5d4d0, PDB extent 1232 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: country_core::resources::rt::bvh::build_gpu_bvh
   Extent: 1232 bytes. No whole-program auto-analysis. */

undefined8 * pdb_140c5d4d0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  longlong unaff_R15;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  longlong lStack_180;
  longlong lStack_178;
  longlong lStack_170;
  longlong lStack_148;
  undefined8 uStack_140;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  longlong lStack_e0;
  undefined *puStack_d8;
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
  longlong lStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  uVar16 = param_3;
  if (param_3 < 0x2aaaaaaaaaaaaab) goto LAB_140c5d511;
  puVar8 = (undefined8 *)0x0;
  do {
    param_2 = unaff_R15;
    param_1 = puVar8;
    pdb_142dc7e2a();
    uVar16 = param_3;
LAB_140c5d511:
    if (uVar16 == 0) {
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
    param_3 = uVar16;
    pdb_14007ee60();
    puVar15 = (undefined4 *)0x10;
    lVar9 = func_0x0001406abab0(uVar16 * 0x30,0x10);
    puVar8 = (undefined8 *)0x10;
    unaff_R15 = uVar16 * 0x30;
  } while (lVar9 == 0);
  if (uVar16 == 1) {
    uVar10 = 0;
  }
  else {
    puVar15 = (undefined4 *)(param_2 + 0x40);
    puVar17 = (undefined4 *)(lVar9 + 0x50);
    uVar10 = 0;
    do {
      uVar13 = puVar15[-0xf];
      uVar14 = puVar15[-0xe];
      uVar2 = puVar15[-0xd];
      uVar3 = puVar15[-0xc];
      uVar4 = puVar15[-0xb];
      uVar5 = puVar15[-10];
      uVar6 = puVar15[-9];
      uVar7 = puVar15[-8];
      puVar17[-0x14] = puVar15[-0x10];
      puVar17[-0x13] = uVar13;
      puVar17[-0x12] = uVar14;
      puVar17[-0x11] = uVar14;
      puVar17[-0x10] = uVar2;
      puVar17[-0xf] = uVar3;
      puVar17[-0xe] = uVar4;
      puVar17[-0xd] = uVar4;
      puVar17[-0xc] = uVar5;
      puVar17[-0xb] = uVar6;
      puVar17[-10] = uVar7;
      puVar17[-9] = uVar7;
      uVar13 = puVar15[-5];
      uVar14 = puVar15[-4];
      uVar2 = puVar15[-3];
      uVar3 = puVar15[-2];
      uVar4 = puVar15[-1];
      uVar5 = *puVar15;
      uVar6 = puVar15[1];
      uVar7 = puVar15[2];
      puVar17[-8] = puVar15[-6];
      puVar17[-7] = uVar13;
      puVar17[-6] = uVar14;
      puVar17[-5] = uVar14;
      puVar17[-4] = uVar2;
      puVar17[-3] = uVar3;
      puVar17[-2] = uVar4;
      puVar17[-1] = uVar4;
      *puVar17 = uVar5;
      puVar17[1] = uVar6;
      puVar17[2] = uVar7;
      puVar17[3] = uVar7;
      uVar10 = uVar10 + 2;
      puVar15 = puVar15 + 0x14;
      puVar17 = puVar17 + 0x18;
    } while ((uVar16 & 0x3fffffffffffffe) != uVar10);
    if ((uVar16 & 1) == 0) goto LAB_140c5d64a;
  }
  puVar17 = (undefined4 *)(param_2 + uVar10 * 0x28);
  uVar13 = puVar17[1];
  uVar14 = puVar17[2];
  puVar1 = (undefined4 *)(param_2 + 0xc + uVar10 * 0x28);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  puVar1 = (undefined4 *)(param_2 + 0x18 + uVar10 * 0x28);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  lVar11 = uVar10 * 0x30;
  puVar1 = (undefined4 *)(lVar9 + lVar11);
  *puVar1 = *puVar17;
  puVar1[1] = uVar13;
  puVar1[2] = uVar14;
  puVar1[3] = uVar14;
  puVar17 = (undefined4 *)(lVar9 + 0x10 + lVar11);
  *puVar17 = uVar2;
  puVar17[1] = uVar3;
  puVar17[2] = uVar4;
  puVar17[3] = uVar4;
  puVar17 = (undefined4 *)(lVar9 + 0x20 + lVar11);
  *puVar17 = uVar5;
  puVar17[1] = uVar6;
  puVar17[2] = uVar7;
  puVar17[3] = uVar7;
LAB_140c5d64a:
  uVar13 = SUB84(puVar15,0);
  uStack_68 = uVar16;
  lStack_60 = lVar9;
  uStack_58 = uVar16;
  uStack_50 = uVar16;
  uVar12 = pdb_140f3c9d0();
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_c8 = CONCAT53(uStack_c8._3_5_,0x10000);
  uStack_c8 = CONCAT71(uStack_c8._1_7_,4);
  lStack_e0 = 1;
  puStack_d8 = (undefined *)_DAT_1430348f0;
  puStack_d0 = (ulonglong *)0x4040000000000003;
  uStack_50 = uVar16;
  pdb_141c88ad0(&uStack_198,lVar9,uVar16,&lStack_e0,&uStack_f0);
  uVar14 = (undefined4)lVar9;
  uStack_100 = pdb_140f3c9d0();
  uStack_f8 = uVar14;
  if (4 < *_DAT_143ca8e90) {
    uStack_110 = pdb_140f3c790(&uStack_100,uVar12,uVar13);
    uStack_108 = (undefined4)uVar12;
    puStack_80 = &uStack_110;
    pcStack_78 = pdb_140f72840;
    lStack_e0 = 0;
    puStack_d8 = &UNK_14306f4ce;
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
    pdb_140f332f0(&uStack_41,&lStack_e0);
  }
  lVar9 = lStack_178 + lStack_170 * 4;
  lStack_e0 = lStack_178;
  puStack_d0 = &uStack_68;
  puStack_d8 = (undefined *)lVar9;
  pdb_1415efff0(&puStack_80,&lStack_e0);
  lStack_e0 = lStack_178;
  puStack_d8 = (undefined *)lVar9;
  puStack_d0 = (ulonglong *)param_2;
  uStack_c8 = uVar16;
  pdb_1415f81d0(&uStack_128,&lStack_e0);
  param_1[2] = uStack_188;
  *param_1 = uStack_198;
  param_1[1] = uStack_190;
  param_1[5] = uStack_70;
  param_1[3] = puStack_80;
  param_1[4] = pcStack_78;
  param_1[8] = uStack_118;
  *(undefined4 *)(param_1 + 6) = uStack_128;
  *(undefined4 *)((longlong)param_1 + 0x34) = uStack_124;
  *(undefined4 *)(param_1 + 7) = uStack_120;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_11c;
  if (lStack_180 != 0) {
    func_0x0001406abac0(lStack_178,lStack_180 << 2,4);
  }
  if ((!SBORROW8(0,lStack_148)) && (lStack_148 != 0)) {
    func_0x0001406abac0(uStack_140,lStack_148 << 5,0x10);
  }
  if (uStack_68 != 0) {
    func_0x0001406abac0(lStack_60,uStack_68 * 0x30,0x10);
  }
  return param_1;
}

