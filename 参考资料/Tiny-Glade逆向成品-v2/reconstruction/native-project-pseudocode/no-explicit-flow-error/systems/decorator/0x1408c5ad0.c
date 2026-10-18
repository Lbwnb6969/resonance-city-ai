// VA 0x1408c5ad0, PDB extent 907 bytes
// system_decorator::decorator_visual::gothic_wall_window::calc_gothic_half_dormer_profile_ws
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/gothic_wall_window.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::decorator_visual::gothic_wall_window::calc_gothic_half_dormer_profile_ws
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/gothic_wall_window.rs
   Extent: 907 */

undefined8 *
pdb_1408c5ad0(undefined8 *param_1,undefined1 param_2,undefined1 param_3,longlong *param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined4 param_12,
             undefined4 param_13,undefined8 param_14)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *arg0;
  ulonglong uVar7;
  byte *pbVar8;
  longlong *plStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 *puStack_98;
  undefined4 *puStack_90;
  undefined8 uStack_88;
  undefined4 *puStack_80;
  longlong *plStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  byte *pbStack_50;
  ulonglong uStack_48;
  longlong *plStack_40;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uStack_60 = param_7;
  uStack_5c = param_8;
  uStack_68 = param_9;
  uStack_64 = param_10;
  uStack_70 = param_12;
  uStack_6c = param_13;
  uStack_32 = param_3;
  uStack_31 = param_2;
  pdb_14007ee60();
  pbStack_50 = pub_1406abab0(0x70,8);
  plStack_40 = param_4;
  if (pbStack_50 == (byte *)0x0) {
    pdb_142dc7e2a(8,0x70);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lStack_58 = 2;
  uStack_48 = 0;
  uStack_c0 = param_14;
  puStack_b8 = &uStack_32;
  puStack_b0 = &uStack_31;
  uStack_a8 = param_5;
  uStack_a0 = param_6;
  puStack_98 = &uStack_60;
  uStack_88 = param_11;
  puStack_80 = &uStack_70;
  plStack_78 = &lStack_58;
  plStack_c8 = param_4;
  puStack_90 = &uStack_68;
  pdb_1408c5e60(&plStack_c8,0);
  pdb_1408c5e60(&plStack_c8,1);
  arg0 = pbStack_50;
  if (uStack_48 != 0) {
    plStack_c8 = *(longlong **)pbStack_50;
    uStack_c0 = *(undefined8 *)(pbStack_50 + 8);
    puStack_b8 = *(undefined1 **)(pbStack_50 + 0x10);
    puStack_b0 = *(undefined1 **)(pbStack_50 + 0x18);
    uStack_a8 = *(undefined8 *)(pbStack_50 + 0x20);
    uStack_a0 = *(undefined8 *)(pbStack_50 + 0x28);
    puStack_98 = *(undefined4 **)(pbStack_50 + 0x30);
    pbStack_50[0] = 0;
    pbStack_50[1] = 0;
    pbStack_50[2] = 0;
    pbStack_50[3] = 0;
    pbStack_50[4] = 0;
    pbStack_50[5] = 0;
    pbStack_50[6] = 0;
    pbStack_50[7] = 0;
    pbStack_50[8] = 4;
    pbStack_50[9] = 0;
    pbStack_50[10] = 0;
    pbStack_50[0xb] = 0;
    pbStack_50[0xc] = 0;
    pbStack_50[0xd] = 0;
    pbStack_50[0xe] = 0;
    pbStack_50[0xf] = 0;
    pbStack_50[0x10] = 0;
    pbStack_50[0x11] = 0;
    pbStack_50[0x12] = 0;
    pbStack_50[0x13] = 0;
    pbStack_50[0x14] = 0;
    pbStack_50[0x15] = 0;
    pbStack_50[0x16] = 0;
    pbStack_50[0x17] = 0;
    pbStack_50[0x18] = 0;
    pbStack_50[0x19] = 0;
    pbStack_50[0x1a] = 0;
    pbStack_50[0x1b] = 0;
    pbStack_50[0x1c] = 0;
    pbStack_50[0x1d] = 0;
    pbStack_50[0x1e] = 0;
    pbStack_50[0x1f] = 0;
    pbStack_50[0x20] = 4;
    pbStack_50[0x21] = 0;
    pbStack_50[0x22] = 0;
    pbStack_50[0x23] = 0;
    pbStack_50[0x24] = 0;
    pbStack_50[0x25] = 0;
    pbStack_50[0x26] = 0;
    pbStack_50[0x27] = 0;
    pbStack_50[0x28] = 0;
    pbStack_50[0x29] = 0;
    pbStack_50[0x2a] = 0;
    pbStack_50[0x2b] = 0;
    pbStack_50[0x2c] = 0;
    pbStack_50[0x2d] = 0;
    pbStack_50[0x2e] = 0;
    pbStack_50[0x2f] = 0;
    pbStack_50[0x30] = 0;
    pbStack_50[0x31] = 0;
    pbStack_50[0x32] = 0;
    pbStack_50[0x33] = 0;
    if (1 < uStack_48) {
      param_1[0xd] = *(undefined8 *)(pbStack_50 + 0x68);
      uVar2 = *(undefined8 *)(pbStack_50 + 0x38);
      uVar3 = *(undefined8 *)(pbStack_50 + 0x40);
      uVar4 = *(undefined8 *)(pbStack_50 + 0x48);
      uVar5 = *(undefined8 *)(pbStack_50 + 0x50);
      uVar6 = *(undefined8 *)(pbStack_50 + 0x60);
      param_1[0xb] = *(undefined8 *)(pbStack_50 + 0x58);
      param_1[0xc] = uVar6;
      param_1[9] = uVar4;
      param_1[10] = uVar5;
      param_1[7] = uVar2;
      param_1[8] = uVar3;
      pbStack_50[0x38] = 0;
      pbStack_50[0x39] = 0;
      pbStack_50[0x3a] = 0;
      pbStack_50[0x3b] = 0;
      pbStack_50[0x3c] = 0;
      pbStack_50[0x3d] = 0;
      pbStack_50[0x3e] = 0;
      pbStack_50[0x3f] = 0;
      pbStack_50[0x40] = 4;
      pbStack_50[0x41] = 0;
      pbStack_50[0x42] = 0;
      pbStack_50[0x43] = 0;
      pbStack_50[0x44] = 0;
      pbStack_50[0x45] = 0;
      pbStack_50[0x46] = 0;
      pbStack_50[0x47] = 0;
      pbStack_50[0x48] = 0;
      pbStack_50[0x49] = 0;
      pbStack_50[0x4a] = 0;
      pbStack_50[0x4b] = 0;
      pbStack_50[0x4c] = 0;
      pbStack_50[0x4d] = 0;
      pbStack_50[0x4e] = 0;
      pbStack_50[0x4f] = 0;
      pbStack_50[0x50] = 0;
      pbStack_50[0x51] = 0;
      pbStack_50[0x52] = 0;
      pbStack_50[0x53] = 0;
      pbStack_50[0x54] = 0;
      pbStack_50[0x55] = 0;
      pbStack_50[0x56] = 0;
      pbStack_50[0x57] = 0;
      pbStack_50[0x58] = 4;
      pbStack_50[0x59] = 0;
      pbStack_50[0x5a] = 0;
      pbStack_50[0x5b] = 0;
      pbStack_50[0x5c] = 0;
      pbStack_50[0x5d] = 0;
      pbStack_50[0x5e] = 0;
      pbStack_50[0x5f] = 0;
      pbStack_50[0x60] = 0;
      pbStack_50[0x61] = 0;
      pbStack_50[0x62] = 0;
      pbStack_50[99] = 0;
      pbStack_50[100] = 0;
      pbStack_50[0x65] = 0;
      pbStack_50[0x66] = 0;
      pbStack_50[0x67] = 0;
      pbStack_50[0x68] = 0;
      pbStack_50[0x69] = 0;
      pbStack_50[0x6a] = 0;
      pbStack_50[0x6b] = 0;
      param_1[6] = puStack_98;
      param_1[4] = uStack_a8;
      param_1[5] = uStack_a0;
      param_1[2] = puStack_b8;
      param_1[3] = puStack_b0;
      *param_1 = plStack_c8;
      param_1[1] = uStack_c0;
      pbVar8 = pbStack_50 + 0x20;
      uVar7 = uStack_48;
      do {
        if (*(longlong *)(pbVar8 + -0x20) != 0) {
          pub_1406abac0(*(byte **)(pbVar8 + -0x18),*(longlong *)(pbVar8 + -0x20) * 0xc,4);
        }
        if (*(longlong *)(pbVar8 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar8,*(longlong *)(pbVar8 + -8) << 2,4);
        }
        pbVar8 = pbVar8 + 0x38;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      if (lStack_58 != 0) {
        pub_1406abac0(arg0,lStack_58 * 0x38,8);
      }
      if (*plStack_40 != 0) {
        pub_1406abac0((byte *)plStack_40[1],*plStack_40 << 3,4);
      }
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(1,uStack_48,&UNK_143016978);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(0,0,&UNK_143016960);
}

