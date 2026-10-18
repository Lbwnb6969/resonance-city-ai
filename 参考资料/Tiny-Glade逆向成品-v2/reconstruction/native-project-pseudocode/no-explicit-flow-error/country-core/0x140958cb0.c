// VA 0x140958cb0, PDB extent 9 bytes
// country_core::render::nani::gpu_world::impl$14::grow<country_core::render::nani::instance_data::GothicWindowBricksInstanceData>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::impl$14::grow<country_core::render::nani::instance_data::GothicWindowBricksInstanceData>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 9 */

longlong * pdb_140958cb0(longlong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulonglong uStack_a0;
  byte *pbStack_98;
  ulonglong uStack_90;
  byte *pbStack_88;
  ulonglong uStack_80;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  plVar10 = (longlong *)(param_2 + 0x18);
  uStack_70 = 0xfffffffffffffffe;
  uVar11 = *(ulonglong *)(param_2 + 0x28);
  uVar13 = param_4 - uVar11;
  if (param_4 < uVar11 || uVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143382a98,0x2d,&UNK_143382ac8);
  }
  uVar8 = pdb_140e1d1f0(param_4 << 7,CONCAT62((int6)((ulonglong)plVar10 >> 0x10),0x12),1);
  uVar8 = pdb_140e1d260(uVar8,4);
  pdb_1415d1d50(&lStack_128,param_3,&UNK_143382cb2,0x1e,uVar8,0);
  uStack_80 = lStack_120;
  if (lStack_128 != 0xb) {
    param_1[8] = lStack_e8;
    param_1[9] = lStack_e0;
    param_1[6] = lStack_f8;
    param_1[7] = lStack_f0;
    param_1[4] = lStack_108;
    param_1[5] = lStack_100;
    param_1[2] = lStack_118;
    param_1[3] = lStack_110;
    *param_1 = lStack_128;
    param_1[1] = lStack_120;
    return param_1;
  }
  pbStack_98 = *(byte **)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 4;
  *(undefined8 *)(param_2 + 0x28) = 0;
  uStack_71 = 1;
  uStack_72 = 1;
  uStack_a0 = uVar11;
  uStack_90 = uVar11;
  pdb_142d7f1b0(&uStack_a0,uVar11,uVar13,4,0x80);
  lVar7 = _UNK_1433200e8;
  lVar6 = _DAT_1433200e0;
  lVar5 = _UNK_1433200d8;
  lVar4 = _DAT_1433200d0;
  lVar3 = _UNK_1433200c8;
  lVar2 = _DAT_1433200c0;
  uVar14 = uStack_90;
  if ((uVar13 & 1) != 0) {
    uVar13 = uVar13 - 1;
    lStack_f8 = 0;
    lStack_f0 = 0;
    lStack_e8 = 0;
    lStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    lVar12 = uStack_90 * 0x80;
    *(longlong *)(pbStack_98 + lVar12) = _DAT_1433200c0;
    *(longlong *)(pbStack_98 + lVar12 + 8) = lVar3;
    *(longlong *)(pbStack_98 + lVar12 + 0x10) = lVar4;
    *(longlong *)(pbStack_98 + lVar12 + 0x10 + 8) = lVar5;
    *(longlong *)(pbStack_98 + lVar12 + 0x20) = lVar6;
    *(longlong *)(pbStack_98 + lVar12 + 0x20 + 8) = lVar7;
    pbVar9 = pbStack_98 + lVar12 + 0x30;
    pbVar9[0] = 0;
    pbVar9[1] = 0;
    pbVar9[2] = 0;
    pbVar9[3] = 0;
    pbVar9[4] = 0;
    pbVar9[5] = 0;
    pbVar9[6] = 0;
    pbVar9[7] = 0;
    pbVar9[8] = 0;
    pbVar9[9] = 0;
    pbVar9[10] = 0;
    pbVar9[0xb] = 0;
    pbVar9[0xc] = 0;
    pbVar9[0xd] = 0;
    pbVar9[0xe] = 0;
    pbVar9[0xf] = 0;
    pbVar9 = pbStack_98 + lVar12 + 0x40;
    pbVar9[0] = 0;
    pbVar9[1] = 0;
    pbVar9[2] = 0;
    pbVar9[3] = 0;
    pbVar9[4] = 0;
    pbVar9[5] = 0;
    pbVar9[6] = 0;
    pbVar9[7] = 0;
    pbVar9[8] = 0;
    pbVar9[9] = 0;
    pbVar9[10] = 0;
    pbVar9[0xb] = 0;
    pbVar9[0xc] = 0;
    pbVar9[0xd] = 0;
    pbVar9[0xe] = 0;
    pbVar9[0xf] = 0;
    pbVar9 = pbStack_98 + lVar12 + 0x50;
    pbVar9[0] = 0;
    pbVar9[1] = 0;
    pbVar9[2] = 0;
    pbVar9[3] = 0;
    pbVar9[4] = 0;
    pbVar9[5] = 0;
    pbVar9[6] = 0;
    pbVar9[7] = 0;
    pbVar9[8] = 0;
    pbVar9[9] = 0;
    pbVar9[10] = 0;
    pbVar9[0xb] = 0;
    pbVar9[0xc] = 0;
    pbVar9[0xd] = 0;
    pbVar9[0xe] = 0;
    pbVar9[0xf] = 0;
    pbVar9 = pbStack_98 + lVar12 + 0x60;
    pbVar9[0] = 0;
    pbVar9[1] = 0;
    pbVar9[2] = 0;
    pbVar9[3] = 0;
    pbVar9[4] = 0;
    pbVar9[5] = 0;
    pbVar9[6] = 0;
    pbVar9[7] = 0;
    pbVar9[8] = 0;
    pbVar9[9] = 0;
    pbVar9[10] = 0;
    pbVar9[0xb] = 0;
    pbVar9[0xc] = 0;
    pbVar9[0xd] = 0;
    pbVar9[0xe] = 0;
    pbVar9[0xf] = 0;
    pbVar9 = pbStack_98 + lVar12 + 0x70;
    pbVar9[0] = 0;
    pbVar9[1] = 0;
    pbVar9[2] = 0;
    pbVar9[3] = 0;
    pbVar9[4] = 0;
    pbVar9[5] = 0;
    pbVar9[6] = 0;
    pbVar9[7] = 0;
    pbVar9[8] = 0;
    pbVar9[9] = 0;
    pbVar9[10] = 0;
    pbVar9[0xb] = 0;
    pbVar9[0xc] = 0;
    pbVar9[0xd] = 0;
    pbVar9[0xe] = 0;
    pbVar9[0xf] = 0;
    uVar14 = uStack_90 + 1;
    lStack_108 = lVar6;
    lStack_100 = lVar7;
    lStack_118 = lVar4;
    lStack_110 = lVar5;
    lStack_128 = lVar2;
    lStack_120 = lVar3;
    lVar2 = _DAT_1433200c0;
    lVar3 = _UNK_1433200c8;
    lVar4 = _DAT_1433200d0;
    lVar5 = _UNK_1433200d8;
    lVar6 = _DAT_1433200e0;
    lVar7 = _UNK_1433200e8;
  }
  _DAT_1433200c0 = lVar2;
  _UNK_1433200c8 = lVar3;
  _DAT_1433200d0 = lVar4;
  _UNK_1433200d8 = lVar5;
  _DAT_1433200e0 = lVar6;
  _UNK_1433200e8 = lVar7;
  if (param_4 != uVar11 + 1) {
    pbVar9 = pbStack_98 + uVar14 * 0x80 + 0x80;
    lVar12 = 0;
    do {
      pbVar9[-0x10] = 0;
      pbVar9[-0xf] = 0;
      pbVar9[-0xe] = 0;
      pbVar9[-0xd] = 0;
      pbVar9[-0xc] = 0;
      pbVar9[-0xb] = 0;
      pbVar9[-10] = 0;
      pbVar9[-9] = 0;
      pbVar9[-8] = 0;
      pbVar9[-7] = 0;
      pbVar9[-6] = 0;
      pbVar9[-5] = 0;
      pbVar9[-4] = 0;
      pbVar9[-3] = 0;
      pbVar9[-2] = 0;
      pbVar9[-1] = 0;
      pbVar9[-0x20] = 0;
      pbVar9[-0x1f] = 0;
      pbVar9[-0x1e] = 0;
      pbVar9[-0x1d] = 0;
      pbVar9[-0x1c] = 0;
      pbVar9[-0x1b] = 0;
      pbVar9[-0x1a] = 0;
      pbVar9[-0x19] = 0;
      pbVar9[-0x18] = 0;
      pbVar9[-0x17] = 0;
      pbVar9[-0x16] = 0;
      pbVar9[-0x15] = 0;
      pbVar9[-0x14] = 0;
      pbVar9[-0x13] = 0;
      pbVar9[-0x12] = 0;
      pbVar9[-0x11] = 0;
      pbVar9[-0x30] = 0;
      pbVar9[-0x2f] = 0;
      pbVar9[-0x2e] = 0;
      pbVar9[-0x2d] = 0;
      pbVar9[-0x2c] = 0;
      pbVar9[-0x2b] = 0;
      pbVar9[-0x2a] = 0;
      pbVar9[-0x29] = 0;
      pbVar9[-0x28] = 0;
      pbVar9[-0x27] = 0;
      pbVar9[-0x26] = 0;
      pbVar9[-0x25] = 0;
      pbVar9[-0x24] = 0;
      pbVar9[-0x23] = 0;
      pbVar9[-0x22] = 0;
      pbVar9[-0x21] = 0;
      pbVar9[-0x40] = 0;
      pbVar9[-0x3f] = 0;
      pbVar9[-0x3e] = 0;
      pbVar9[-0x3d] = 0;
      pbVar9[-0x3c] = 0;
      pbVar9[-0x3b] = 0;
      pbVar9[-0x3a] = 0;
      pbVar9[-0x39] = 0;
      pbVar9[-0x38] = 0;
      pbVar9[-0x37] = 0;
      pbVar9[-0x36] = 0;
      pbVar9[-0x35] = 0;
      pbVar9[-0x34] = 0;
      pbVar9[-0x33] = 0;
      pbVar9[-0x32] = 0;
      pbVar9[-0x31] = 0;
      pbVar9[-0x50] = 0;
      pbVar9[-0x4f] = 0;
      pbVar9[-0x4e] = 0;
      pbVar9[-0x4d] = 0;
      pbVar9[-0x4c] = 0;
      pbVar9[-0x4b] = 0;
      pbVar9[-0x4a] = 0;
      pbVar9[-0x49] = 0;
      pbVar9[-0x48] = 0;
      pbVar9[-0x47] = 0;
      pbVar9[-0x46] = 0;
      pbVar9[-0x45] = 0;
      pbVar9[-0x44] = 0;
      pbVar9[-0x43] = 0;
      pbVar9[-0x42] = 0;
      pbVar9[-0x41] = 0;
      *(longlong *)(pbVar9 + -0x60) = lVar6;
      *(longlong *)(pbVar9 + -0x58) = lVar7;
      *(longlong *)(pbVar9 + -0x70) = lVar4;
      *(longlong *)(pbVar9 + -0x68) = lVar5;
      *(longlong *)(pbVar9 + -0x80) = lVar2;
      *(longlong *)(pbVar9 + -0x78) = lVar3;
      lStack_f8 = 0;
      lStack_f0 = 0;
      lStack_e8 = 0;
      lStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      *(longlong *)pbVar9 = lVar2;
      *(longlong *)(pbVar9 + 8) = lVar3;
      *(longlong *)(pbVar9 + 0x10) = lVar4;
      *(longlong *)(pbVar9 + 0x18) = lVar5;
      *(longlong *)(pbVar9 + 0x20) = lVar6;
      *(longlong *)(pbVar9 + 0x28) = lVar7;
      pbVar9[0x30] = 0;
      pbVar9[0x31] = 0;
      pbVar9[0x32] = 0;
      pbVar9[0x33] = 0;
      pbVar9[0x34] = 0;
      pbVar9[0x35] = 0;
      pbVar9[0x36] = 0;
      pbVar9[0x37] = 0;
      pbVar9[0x38] = 0;
      pbVar9[0x39] = 0;
      pbVar9[0x3a] = 0;
      pbVar9[0x3b] = 0;
      pbVar9[0x3c] = 0;
      pbVar9[0x3d] = 0;
      pbVar9[0x3e] = 0;
      pbVar9[0x3f] = 0;
      pbVar9[0x40] = 0;
      pbVar9[0x41] = 0;
      pbVar9[0x42] = 0;
      pbVar9[0x43] = 0;
      pbVar9[0x44] = 0;
      pbVar9[0x45] = 0;
      pbVar9[0x46] = 0;
      pbVar9[0x47] = 0;
      pbVar9[0x48] = 0;
      pbVar9[0x49] = 0;
      pbVar9[0x4a] = 0;
      pbVar9[0x4b] = 0;
      pbVar9[0x4c] = 0;
      pbVar9[0x4d] = 0;
      pbVar9[0x4e] = 0;
      pbVar9[0x4f] = 0;
      pbVar9[0x50] = 0;
      pbVar9[0x51] = 0;
      pbVar9[0x52] = 0;
      pbVar9[0x53] = 0;
      pbVar9[0x54] = 0;
      pbVar9[0x55] = 0;
      pbVar9[0x56] = 0;
      pbVar9[0x57] = 0;
      pbVar9[0x58] = 0;
      pbVar9[0x59] = 0;
      pbVar9[0x5a] = 0;
      pbVar9[0x5b] = 0;
      pbVar9[0x5c] = 0;
      pbVar9[0x5d] = 0;
      pbVar9[0x5e] = 0;
      pbVar9[0x5f] = 0;
      pbVar9[0x60] = 0;
      pbVar9[0x61] = 0;
      pbVar9[0x62] = 0;
      pbVar9[99] = 0;
      pbVar9[100] = 0;
      pbVar9[0x65] = 0;
      pbVar9[0x66] = 0;
      pbVar9[0x67] = 0;
      pbVar9[0x68] = 0;
      pbVar9[0x69] = 0;
      pbVar9[0x6a] = 0;
      pbVar9[0x6b] = 0;
      pbVar9[0x6c] = 0;
      pbVar9[0x6d] = 0;
      pbVar9[0x6e] = 0;
      pbVar9[0x6f] = 0;
      pbVar9[0x70] = 0;
      pbVar9[0x71] = 0;
      pbVar9[0x72] = 0;
      pbVar9[0x73] = 0;
      pbVar9[0x74] = 0;
      pbVar9[0x75] = 0;
      pbVar9[0x76] = 0;
      pbVar9[0x77] = 0;
      pbVar9[0x78] = 0;
      pbVar9[0x79] = 0;
      pbVar9[0x7a] = 0;
      pbVar9[0x7b] = 0;
      pbVar9[0x7c] = 0;
      pbVar9[0x7d] = 0;
      pbVar9[0x7e] = 0;
      pbVar9[0x7f] = 0;
      pbVar9 = pbVar9 + 0x100;
      lVar12 = lVar12 + -2;
    } while (-lVar12 != uVar13);
    uVar14 = uVar14 - lVar12;
    lStack_108 = lVar6;
    lStack_100 = lVar7;
    lStack_118 = lVar4;
    lStack_110 = lVar5;
    lStack_128 = lVar2;
    lStack_120 = lVar3;
  }
  if (uVar14 < uStack_a0) {
    uVar11 = uStack_a0 << 7;
    if (uVar14 == 0) {
      pub_1406abac0(pbStack_98,uVar11,4);
      pbVar9 = (byte *)0x4;
    }
    else {
      pbStack_88 = pbStack_98;
      pbVar9 = pub_1406abad0(pbStack_98,uVar11,4,uVar14 << 7);
      if (pbVar9 == (byte *)0x0) {
        uStack_80 = uVar11;
        pdb_142dc7e2a(4,uVar14 << 7);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
  }
  else {
    pbVar9 = pbStack_98;
  }
  *(byte **)(param_2 + 0x20) = pbVar9;
  *(ulonglong *)(param_2 + 0x28) = uVar14;
  pbStack_88 = (byte *)plVar10;
  pdb_140989660(plVar10);
  *(ulonglong *)pbStack_88 = uStack_80;
  LOCK();
  *(longlong *)((longlong)pbStack_88 + 0x18) = 0;
  UNLOCK();
  param_4 = param_4 - 1;
  uVar11 = *(ulonglong *)((longlong)pbStack_88 + 0x18);
  do {
    uVar13 = param_4;
    if (uVar11 <= param_4) {
      uVar13 = uVar11;
    }
    LOCK();
    uVar14 = *(ulonglong *)((longlong)pbStack_88 + 0x18);
    bVar15 = uVar11 == uVar14;
    if (bVar15) {
      *(ulonglong *)((longlong)pbStack_88 + 0x18) = uVar13;
      uVar14 = uVar11;
    }
    UNLOCK();
    uVar11 = uVar14;
  } while (!bVar15);
  uVar11 = *(ulonglong *)((longlong)pbStack_88 + 0x20);
  do {
    uVar13 = param_4;
    if (param_4 < uVar11) {
      uVar13 = uVar11;
    }
    LOCK();
    uVar14 = *(ulonglong *)((longlong)pbStack_88 + 0x20);
    bVar15 = uVar11 == uVar14;
    if (bVar15) {
      *(ulonglong *)((longlong)pbStack_88 + 0x20) = uVar13;
      uVar14 = uVar11;
    }
    UNLOCK();
    uVar11 = uVar14;
  } while (!bVar15);
  *param_1 = 0xb;
  return param_1;
}

