// VA 0x141a826b0, PDB extent 1120 bytes
// country_core::render::shadowed_buffer::ShadowedBuffer::grow<country_core::resources::placement_data::PlacementDataSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/shadowed_buffer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::shadowed_buffer::ShadowedBuffer::grow<country_core::resources::placement_data::PlacementDataSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/shadowed_buffer.rs
   Extent: 1120 */

ulonglong *
pdb_141a826b0(ulonglong *param_1,ulonglong *param_2,undefined8 param_3,ulonglong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  ulonglong uStack_b8;
  byte *pbStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong *puStack_60;
  ulonglong uStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar3 = param_2[2];
  uVar6 = param_4 - uVar3;
  if (param_4 < uVar3 || uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143382a98,0x2d,&UNK_143382ac8);
  }
  uVar2 = pdb_140e1d1f0(param_4 * 0x30,0x12,1);
  uVar2 = pdb_140e1d260(uVar2,4);
  pdb_1415d1d50(&uStack_b8,param_3,&UNK_143382c4e,0x11,uVar2,0);
  uStack_58 = (ulonglong)pbStack_b0;
  if (uStack_b8 == 0xb) {
    uStack_68 = (ulonglong)pbStack_b0;
    pbStack_b0 = (byte *)param_2[1];
    param_2[1] = 4;
    param_2[2] = 0;
    uStack_49 = 1;
    uStack_4a = 1;
    uStack_b8 = uVar3;
    uStack_a8 = uVar3;
    pdb_142d7f1b0(&uStack_b8,uVar3,uVar6,4,0x30);
    uVar2 = _DAT_1430254a0;
    uVar8 = uStack_a8;
    if ((uVar6 & 3) != 0) {
      pbVar4 = pbStack_b0 + uStack_a8 * 0x30 + 8;
      uVar7 = 0;
      do {
        *(undefined8 *)(pbVar4 + -8) = uVar2;
        pbVar4[0] = 0;
        pbVar4[1] = 0;
        pbVar4[2] = 0;
        pbVar4[3] = 0;
        pbVar4[4] = 0;
        pbVar4[5] = 0;
        pbVar4[6] = 0;
        pbVar4[7] = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
        pbVar4[0x10] = 0;
        pbVar4[0x11] = 0;
        pbVar4[0x12] = 0;
        pbVar4[0x13] = 0;
        pbVar4[0x14] = 0;
        pbVar4[0x15] = 0;
        pbVar4[0x16] = 0;
        pbVar4[0x17] = 0;
        pbVar4[0x18] = 0;
        pbVar4[0x19] = 0;
        pbVar4[0x1a] = 0;
        pbVar4[0x1b] = 0;
        pbVar4[0x1c] = 0;
        pbVar4[0x1d] = 0;
        pbVar4[0x1e] = 0;
        pbVar4[0x1f] = 0;
        pbVar4[0x20] = 0;
        pbVar4[0x21] = 0;
        pbVar4[0x22] = 0;
        pbVar4[0x23] = 0;
        pbVar4[0x24] = 0;
        pbVar4[0x25] = 0;
        pbVar4[0x26] = 0;
        pbVar4[0x27] = 0;
        uVar7 = uVar7 + 1;
        pbVar4 = pbVar4 + 0x30;
      } while ((uVar6 & 3) != uVar7);
      uVar8 = uStack_a8 + uVar7;
      uVar6 = uVar6 - uVar7;
    }
    uVar2 = _DAT_1430254a0;
    if (uVar3 - param_4 < 0xfffffffffffffffd) {
      pbVar4 = pbStack_b0 + uVar8 * 0x30 + 0x98;
      lVar5 = 0;
      do {
        *(undefined8 *)(pbVar4 + -0x98) = uVar2;
        pbVar4[-0x90] = 0;
        pbVar4[-0x8f] = 0;
        pbVar4[-0x8e] = 0;
        pbVar4[-0x8d] = 0;
        pbVar4[-0x8c] = 0;
        pbVar4[-0x8b] = 0;
        pbVar4[-0x8a] = 0;
        pbVar4[-0x89] = 0;
        pbVar4[-0x88] = 0;
        pbVar4[-0x87] = 0;
        pbVar4[-0x86] = 0;
        pbVar4[-0x85] = 0;
        pbVar4[-0x84] = 0;
        pbVar4[-0x83] = 0;
        pbVar4[-0x82] = 0;
        pbVar4[-0x81] = 0;
        pbVar4[-0x80] = 0;
        pbVar4[-0x7f] = 0;
        pbVar4[-0x7e] = 0;
        pbVar4[-0x7d] = 0;
        pbVar4[-0x7c] = 0;
        pbVar4[-0x7b] = 0;
        pbVar4[-0x7a] = 0;
        pbVar4[-0x79] = 0;
        pbVar4[-0x78] = 0;
        pbVar4[-0x77] = 0;
        pbVar4[-0x76] = 0;
        pbVar4[-0x75] = 0;
        pbVar4[-0x74] = 0;
        pbVar4[-0x73] = 0;
        pbVar4[-0x72] = 0;
        pbVar4[-0x71] = 0;
        pbVar4[-0x70] = 0;
        pbVar4[-0x6f] = 0;
        pbVar4[-0x6e] = 0;
        pbVar4[-0x6d] = 0;
        pbVar4[-0x6c] = 0;
        pbVar4[-0x6b] = 0;
        pbVar4[-0x6a] = 0;
        pbVar4[-0x69] = 0;
        *(undefined8 *)(pbVar4 + -0x68) = uVar2;
        pbVar4[-0x60] = 0;
        pbVar4[-0x5f] = 0;
        pbVar4[-0x5e] = 0;
        pbVar4[-0x5d] = 0;
        pbVar4[-0x5c] = 0;
        pbVar4[-0x5b] = 0;
        pbVar4[-0x5a] = 0;
        pbVar4[-0x59] = 0;
        pbVar4[-0x58] = 0;
        pbVar4[-0x57] = 0;
        pbVar4[-0x56] = 0;
        pbVar4[-0x55] = 0;
        pbVar4[-0x54] = 0;
        pbVar4[-0x53] = 0;
        pbVar4[-0x52] = 0;
        pbVar4[-0x51] = 0;
        pbVar4[-0x50] = 0;
        pbVar4[-0x4f] = 0;
        pbVar4[-0x4e] = 0;
        pbVar4[-0x4d] = 0;
        pbVar4[-0x4c] = 0;
        pbVar4[-0x4b] = 0;
        pbVar4[-0x4a] = 0;
        pbVar4[-0x49] = 0;
        pbVar4[-0x48] = 0;
        pbVar4[-0x47] = 0;
        pbVar4[-0x46] = 0;
        pbVar4[-0x45] = 0;
        pbVar4[-0x44] = 0;
        pbVar4[-0x43] = 0;
        pbVar4[-0x42] = 0;
        pbVar4[-0x41] = 0;
        pbVar4[-0x40] = 0;
        pbVar4[-0x3f] = 0;
        pbVar4[-0x3e] = 0;
        pbVar4[-0x3d] = 0;
        pbVar4[-0x3c] = 0;
        pbVar4[-0x3b] = 0;
        pbVar4[-0x3a] = 0;
        pbVar4[-0x39] = 0;
        *(undefined8 *)(pbVar4 + -0x38) = uVar2;
        pbVar4[-0x30] = 0;
        pbVar4[-0x2f] = 0;
        pbVar4[-0x2e] = 0;
        pbVar4[-0x2d] = 0;
        pbVar4[-0x2c] = 0;
        pbVar4[-0x2b] = 0;
        pbVar4[-0x2a] = 0;
        pbVar4[-0x29] = 0;
        pbVar4[-0x28] = 0;
        pbVar4[-0x27] = 0;
        pbVar4[-0x26] = 0;
        pbVar4[-0x25] = 0;
        pbVar4[-0x24] = 0;
        pbVar4[-0x23] = 0;
        pbVar4[-0x22] = 0;
        pbVar4[-0x21] = 0;
        pbVar4[-0x20] = 0;
        pbVar4[-0x1f] = 0;
        pbVar4[-0x1e] = 0;
        pbVar4[-0x1d] = 0;
        pbVar4[-0x1c] = 0;
        pbVar4[-0x1b] = 0;
        pbVar4[-0x1a] = 0;
        pbVar4[-0x19] = 0;
        pbVar4[-0x18] = 0;
        pbVar4[-0x17] = 0;
        pbVar4[-0x16] = 0;
        pbVar4[-0x15] = 0;
        pbVar4[-0x14] = 0;
        pbVar4[-0x13] = 0;
        pbVar4[-0x12] = 0;
        pbVar4[-0x11] = 0;
        pbVar4[-0x10] = 0;
        pbVar4[-0xf] = 0;
        pbVar4[-0xe] = 0;
        pbVar4[-0xd] = 0;
        pbVar4[-0xc] = 0;
        pbVar4[-0xb] = 0;
        pbVar4[-10] = 0;
        pbVar4[-9] = 0;
        *(undefined8 *)(pbVar4 + -8) = uVar2;
        pbVar4[0] = 0;
        pbVar4[1] = 0;
        pbVar4[2] = 0;
        pbVar4[3] = 0;
        pbVar4[4] = 0;
        pbVar4[5] = 0;
        pbVar4[6] = 0;
        pbVar4[7] = 0;
        pbVar4[8] = 0;
        pbVar4[9] = 0;
        pbVar4[10] = 0;
        pbVar4[0xb] = 0;
        pbVar4[0xc] = 0;
        pbVar4[0xd] = 0;
        pbVar4[0xe] = 0;
        pbVar4[0xf] = 0;
        pbVar4[0x10] = 0;
        pbVar4[0x11] = 0;
        pbVar4[0x12] = 0;
        pbVar4[0x13] = 0;
        pbVar4[0x14] = 0;
        pbVar4[0x15] = 0;
        pbVar4[0x16] = 0;
        pbVar4[0x17] = 0;
        pbVar4[0x18] = 0;
        pbVar4[0x19] = 0;
        pbVar4[0x1a] = 0;
        pbVar4[0x1b] = 0;
        pbVar4[0x1c] = 0;
        pbVar4[0x1d] = 0;
        pbVar4[0x1e] = 0;
        pbVar4[0x1f] = 0;
        pbVar4[0x20] = 0;
        pbVar4[0x21] = 0;
        pbVar4[0x22] = 0;
        pbVar4[0x23] = 0;
        pbVar4[0x24] = 0;
        pbVar4[0x25] = 0;
        pbVar4[0x26] = 0;
        pbVar4[0x27] = 0;
        pbVar4 = pbVar4 + 0xc0;
        lVar5 = lVar5 + -4;
      } while (-lVar5 != uVar6);
      uVar8 = uVar8 - lVar5;
    }
    pbVar4 = pbStack_b0;
    if (uVar8 < uStack_b8) {
      uVar3 = uStack_b8 * 0x30;
      if (uVar8 == 0) {
        pub_1406abac0(pbStack_b0,uVar3,4);
        pbVar4 = (byte *)0x4;
      }
      else {
        puStack_60 = (ulonglong *)pbStack_b0;
        pbVar4 = pub_1406abad0(pbStack_b0,uVar3,4,uVar8 * 0x30);
        if (pbVar4 == (byte *)0x0) {
          uStack_58 = uVar3;
          pdb_142dc7e2a(4,uVar8 * 0x30);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
    }
    param_2[1] = (ulonglong)pbVar4;
    param_2[2] = uVar8;
    puStack_60 = param_2;
    pdb_140989660(param_2);
    *puStack_60 = uStack_58;
    LOCK();
    puStack_60[3] = 0;
    UNLOCK();
    param_4 = param_4 - 1;
    uVar3 = puStack_60[3];
    do {
      uVar6 = param_4;
      if (uVar3 <= param_4) {
        uVar6 = uVar3;
      }
      LOCK();
      uVar8 = puStack_60[3];
      bVar9 = uVar3 == uVar8;
      if (bVar9) {
        puStack_60[3] = uVar6;
        uVar8 = uVar3;
      }
      UNLOCK();
      uVar3 = uVar8;
    } while (!bVar9);
    uVar3 = puStack_60[4];
    do {
      uVar6 = param_4;
      if (param_4 < uVar3) {
        uVar6 = uVar3;
      }
      LOCK();
      uVar8 = puStack_60[4];
      bVar9 = uVar3 == uVar8;
      if (bVar9) {
        puStack_60[4] = uVar6;
        uVar8 = uVar3;
      }
      UNLOCK();
      uVar3 = uVar8;
    } while (!bVar9);
    *param_1 = 0xb;
  }
  else {
    param_1[8] = uStack_78;
    param_1[9] = uStack_70;
    param_1[6] = uStack_88;
    param_1[7] = uStack_80;
    param_1[4] = uStack_98;
    param_1[5] = uStack_90;
    param_1[2] = uStack_a8;
    param_1[3] = uStack_a0;
    *param_1 = uStack_b8;
    param_1[1] = (ulonglong)pbStack_b0;
  }
  return param_1;
}

