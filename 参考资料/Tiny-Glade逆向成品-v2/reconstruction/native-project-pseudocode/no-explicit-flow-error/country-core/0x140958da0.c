// VA 0x140958da0, PDB extent 9 bytes
// country_core::render::nani::gpu_world::impl$14::grow<country_core::shader::inc::stone_foundation_surface::StoneFoundationSurfaceInstanceData>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::render::nani::gpu_world::impl$14::grow<country_core::shader::inc::stone_foundation_surface::StoneFoundationSurfaceInstanceData>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/gpu_world.rs
   Extent: 9 */

longlong * pdb_140958da0(longlong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  byte *pbVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  uint uStack_9c;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  ulonglong uStack_78;
  byte *pbStack_70;
  ulonglong uStack_68;
  byte *pbStack_60;
  ulonglong uStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  plVar4 = (longlong *)(param_2 + 0x18);
  uStack_48 = 0xfffffffffffffffe;
  uVar5 = *(ulonglong *)(param_2 + 0x28);
  uVar7 = param_4 - uVar5;
  if (param_4 < uVar5 || uVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143382a98,0x2d,&UNK_143382ac8);
  }
  uVar2 = pdb_140e1d1f0(param_4 << 6,CONCAT62((int6)((ulonglong)plVar4 >> 0x10),0x12),1);
  uVar2 = pdb_140e1d260(uVar2,0x10);
  pdb_1415d1d50(&lStack_c8,param_3,&UNK_143382b67,0x22,uVar2,0);
  uStack_58 = lStack_c0;
  if (lStack_c8 != 0xb) {
    param_1[8] = lStack_88;
    param_1[9] = lStack_80;
    param_1[6] = lStack_98;
    param_1[7] = lStack_90;
    param_1[4] = CONCAT44(uStack_a4,uStack_a8);
    param_1[5] = CONCAT44(uStack_9c,uStack_a0);
    param_1[2] = lStack_b8;
    param_1[3] = CONCAT44(uStack_ac,uStack_b0);
    *param_1 = lStack_c8;
    param_1[1] = lStack_c0;
    return param_1;
  }
  pbStack_70 = *(byte **)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0x10;
  *(undefined8 *)(param_2 + 0x28) = 0;
  uStack_49 = 1;
  uStack_4a = 1;
  uStack_78 = uVar5;
  uStack_68 = uVar5;
  pdb_142d7f1b0(&uStack_78,uVar5,uVar7,0x10,0x40);
  uVar8 = uStack_68;
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 - 1;
    uStack_a8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    lStack_b8 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    lStack_c8 = 0;
    lStack_c0 = 0;
    lStack_98 = 0;
    lStack_90 = 0;
    lVar6 = uStack_68 * 0x40;
    pbVar3 = pbStack_70 + lVar6 + 0x30;
    pbVar3[0] = 0;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    pbVar3[4] = 0;
    pbVar3[5] = 0;
    pbVar3[6] = 0;
    pbVar3[7] = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    pbVar3 = pbStack_70 + lVar6;
    pbVar3[0] = 0;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    pbVar3[4] = 0;
    pbVar3[5] = 0;
    pbVar3[6] = 0;
    pbVar3[7] = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    pbVar3 = pbStack_70 + lVar6 + 0x20;
    pbVar3[0] = 0;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    pbVar3[4] = 0;
    pbVar3[5] = 0;
    pbVar3[6] = 0;
    pbVar3[7] = 0;
    *(ulonglong *)(pbVar3 + 8) = (ulonglong)uStack_9c << 0x20;
    pbVar3 = pbStack_70 + lVar6 + 0x10;
    pbVar3[0] = 0;
    pbVar3[1] = 0;
    pbVar3[2] = 0;
    pbVar3[3] = 0;
    pbVar3[4] = 0;
    pbVar3[5] = 0;
    pbVar3[6] = 0;
    pbVar3[7] = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    uVar8 = uStack_68 + 1;
  }
  if (param_4 != uVar5 + 1) {
    pbVar3 = pbStack_70 + uVar8 * 0x40 + 0x40;
    lVar6 = 0;
    do {
      pbVar3[-0x10] = 0;
      pbVar3[-0xf] = 0;
      pbVar3[-0xe] = 0;
      pbVar3[-0xd] = 0;
      pbVar3[-0xc] = 0;
      pbVar3[-0xb] = 0;
      pbVar3[-10] = 0;
      pbVar3[-9] = 0;
      pbVar3[-8] = 0;
      pbVar3[-7] = 0;
      pbVar3[-6] = 0;
      pbVar3[-5] = 0;
      pbVar3[-4] = 0;
      pbVar3[-3] = 0;
      pbVar3[-2] = 0;
      pbVar3[-1] = 0;
      pbVar3[-0x20] = 0;
      pbVar3[-0x1f] = 0;
      pbVar3[-0x1e] = 0;
      pbVar3[-0x1d] = 0;
      pbVar3[-0x1c] = 0;
      pbVar3[-0x1b] = 0;
      pbVar3[-0x1a] = 0;
      pbVar3[-0x19] = 0;
      *(ulonglong *)(pbVar3 + -0x18) = (ulonglong)uStack_9c << 0x20;
      pbVar3[-0x30] = 0;
      pbVar3[-0x2f] = 0;
      pbVar3[-0x2e] = 0;
      pbVar3[-0x2d] = 0;
      pbVar3[-0x2c] = 0;
      pbVar3[-0x2b] = 0;
      pbVar3[-0x2a] = 0;
      pbVar3[-0x29] = 0;
      pbVar3[-0x28] = 0;
      pbVar3[-0x27] = 0;
      pbVar3[-0x26] = 0;
      pbVar3[-0x25] = 0;
      pbVar3[-0x24] = 0;
      pbVar3[-0x23] = 0;
      pbVar3[-0x22] = 0;
      pbVar3[-0x21] = 0;
      pbVar3[-0x40] = 0;
      pbVar3[-0x3f] = 0;
      pbVar3[-0x3e] = 0;
      pbVar3[-0x3d] = 0;
      pbVar3[-0x3c] = 0;
      pbVar3[-0x3b] = 0;
      pbVar3[-0x3a] = 0;
      pbVar3[-0x39] = 0;
      pbVar3[-0x38] = 0;
      pbVar3[-0x37] = 0;
      pbVar3[-0x36] = 0;
      pbVar3[-0x35] = 0;
      pbVar3[-0x34] = 0;
      pbVar3[-0x33] = 0;
      pbVar3[-0x32] = 0;
      pbVar3[-0x31] = 0;
      lStack_c8 = 0;
      lStack_c0 = 0;
      lStack_b8 = 0;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      lStack_98 = 0;
      lStack_90 = 0;
      pbVar3[0x30] = 0;
      pbVar3[0x31] = 0;
      pbVar3[0x32] = 0;
      pbVar3[0x33] = 0;
      pbVar3[0x34] = 0;
      pbVar3[0x35] = 0;
      pbVar3[0x36] = 0;
      pbVar3[0x37] = 0;
      pbVar3[0x38] = 0;
      pbVar3[0x39] = 0;
      pbVar3[0x3a] = 0;
      pbVar3[0x3b] = 0;
      pbVar3[0x3c] = 0;
      pbVar3[0x3d] = 0;
      pbVar3[0x3e] = 0;
      pbVar3[0x3f] = 0;
      pbVar3[0x20] = 0;
      pbVar3[0x21] = 0;
      pbVar3[0x22] = 0;
      pbVar3[0x23] = 0;
      pbVar3[0x24] = 0;
      pbVar3[0x25] = 0;
      pbVar3[0x26] = 0;
      pbVar3[0x27] = 0;
      *(ulonglong *)(pbVar3 + 0x28) = (ulonglong)uStack_9c << 0x20;
      pbVar3[0x10] = 0;
      pbVar3[0x11] = 0;
      pbVar3[0x12] = 0;
      pbVar3[0x13] = 0;
      pbVar3[0x14] = 0;
      pbVar3[0x15] = 0;
      pbVar3[0x16] = 0;
      pbVar3[0x17] = 0;
      pbVar3[0x18] = 0;
      pbVar3[0x19] = 0;
      pbVar3[0x1a] = 0;
      pbVar3[0x1b] = 0;
      pbVar3[0x1c] = 0;
      pbVar3[0x1d] = 0;
      pbVar3[0x1e] = 0;
      pbVar3[0x1f] = 0;
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      pbVar3[2] = 0;
      pbVar3[3] = 0;
      pbVar3[4] = 0;
      pbVar3[5] = 0;
      pbVar3[6] = 0;
      pbVar3[7] = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      pbVar3 = pbVar3 + 0x80;
      lVar6 = lVar6 + -2;
    } while (-lVar6 != uVar7);
    uVar8 = uVar8 - lVar6;
  }
  if (uVar8 < uStack_78) {
    uVar5 = uStack_78 << 6;
    if (uVar8 == 0) {
      pub_1406abac0(pbStack_70,uVar5,0x10);
      pbVar3 = (byte *)0x10;
    }
    else {
      pbStack_60 = pbStack_70;
      pbVar3 = pub_1406abad0(pbStack_70,uVar5,0x10,uVar8 << 6);
      if (pbVar3 == (byte *)0x0) {
        uStack_58 = uVar5;
        pdb_142dc7e2a(0x10,uVar8 << 6);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
    }
  }
  else {
    pbVar3 = pbStack_70;
  }
  *(byte **)(param_2 + 0x20) = pbVar3;
  *(ulonglong *)(param_2 + 0x28) = uVar8;
  pbStack_60 = (byte *)plVar4;
  pdb_140989660(plVar4);
  *(ulonglong *)pbStack_60 = uStack_58;
  LOCK();
  *(longlong *)((longlong)pbStack_60 + 0x18) = 0;
  UNLOCK();
  param_4 = param_4 - 1;
  uVar5 = *(ulonglong *)((longlong)pbStack_60 + 0x18);
  do {
    uVar7 = param_4;
    if (uVar5 <= param_4) {
      uVar7 = uVar5;
    }
    LOCK();
    uVar8 = *(ulonglong *)((longlong)pbStack_60 + 0x18);
    bVar9 = uVar5 == uVar8;
    if (bVar9) {
      *(ulonglong *)((longlong)pbStack_60 + 0x18) = uVar7;
      uVar8 = uVar5;
    }
    UNLOCK();
    uVar5 = uVar8;
  } while (!bVar9);
  uVar5 = *(ulonglong *)((longlong)pbStack_60 + 0x20);
  do {
    uVar7 = param_4;
    if (param_4 < uVar5) {
      uVar7 = uVar5;
    }
    LOCK();
    uVar8 = *(ulonglong *)((longlong)pbStack_60 + 0x20);
    bVar9 = uVar5 == uVar8;
    if (bVar9) {
      *(ulonglong *)((longlong)pbStack_60 + 0x20) = uVar7;
      uVar8 = uVar5;
    }
    UNLOCK();
    uVar5 = uVar8;
  } while (!bVar9);
  *param_1 = 0xb;
  return param_1;
}

