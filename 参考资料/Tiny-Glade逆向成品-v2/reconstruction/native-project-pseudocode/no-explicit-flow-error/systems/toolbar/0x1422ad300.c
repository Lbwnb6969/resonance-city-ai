// VA 0x1422ad300, PDB extent 300 bytes
// toolbar::menu::thumbnail_scroll::impl$0::create_node_content
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/thumbnail_scroll.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::thumbnail_scroll::impl$0::create_node_content
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/thumbnail_scroll.rs
   Extent: 300 */

undefined8 * pdb_1422ad300(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uStack_58;
  longlong *plStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  plStack_28 = param_2;
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(0x48,8);
  if (pbVar4 != (byte *)0x0) {
    pbVar4[0] = 1;
    pbVar4[1] = 0;
    pbVar4[2] = 0;
    pbVar4[3] = 0;
    pbVar4[4] = 0;
    pbVar4[5] = 0;
    pbVar4[6] = 0;
    pbVar4[7] = 0;
    pbVar4[8] = 1;
    pbVar4[9] = 0;
    pbVar4[10] = 0;
    pbVar4[0xb] = 0;
    pbVar4[0xc] = 0;
    pbVar4[0xd] = 0;
    pbVar4[0xe] = 0;
    pbVar4[0xf] = 0;
    pbVar4[0x10] = 0;
    pbVar4[0x14] = 0;
    pbVar4[0x15] = 0;
    pbVar4[0x16] = 0;
    pbVar4[0x17] = 0;
    *(ulonglong *)(pbVar4 + 0x18) = (ulonglong)uStack_58;
    pbVar4[0x20] = 0;
    pbVar4[0x21] = 0;
    pbVar4[0x22] = 0;
    pbVar4[0x23] = 0;
    pbVar4[0x24] = 0;
    pbVar4[0x25] = 0;
    pbVar4[0x26] = 0;
    pbVar4[0x27] = 0;
    pbVar4[0x28] = 0;
    pbVar4[0x29] = 0;
    pbVar4[0x2a] = 0;
    pbVar4[0x2b] = 0;
    pbVar4[0x2c] = 0;
    pbVar4[0x2d] = 0;
    pbVar4[0x2e] = 0;
    pbVar4[0x2f] = 0;
    pbVar4[0x30] = 0;
    pbVar4[0x31] = 0;
    pbVar4[0x32] = 0;
    pbVar4[0x33] = 0;
    pbVar4[0x34] = 0;
    pbVar4[0x35] = 0;
    pbVar4[0x36] = 0;
    pbVar4[0x37] = 0;
    pbVar4[0x35] = 0;
    pbVar4[0x36] = 0;
    pbVar4[0x37] = 0;
    pbVar4[0x38] = 0;
    pbVar4[0x39] = 0;
    pbVar4[0x3a] = 0;
    pbVar4[0x3b] = 0;
    pbVar4[0x3c] = 0;
    pbVar4[0x3d] = 0;
    pbVar4[0x3e] = 0;
    pbVar4[0x3f] = 0;
    pbVar4[0x40] = 0;
    pbVar4[0x41] = 0;
    pbVar4[0x42] = 0;
    pbVar4[0x43] = 0;
    pbVar4[0x44] = 0;
    param_1[8] = 0;
    *(undefined4 *)(param_1 + 0xb) = 1;
    *param_1 = 0;
    uVar3 = _UNK_1434d143c;
    uVar2 = _UNK_1434d1438;
    uVar1 = _UNK_1434d1434;
    *(undefined4 *)(param_1 + 9) = _DAT_1434d1430;
    *(undefined4 *)((longlong)param_1 + 0x4c) = uVar1;
    *(undefined4 *)(param_1 + 10) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x54) = uVar3;
    param_1[2] = 0;
    *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
    *(undefined8 *)((longlong)param_1 + 100) = 0;
    *(undefined8 *)((longlong)param_1 + 0x6c) = 0x3f80000000000000;
    param_1[7] = pbVar4;
    *(undefined4 *)(param_1 + 6) = 0;
    param_1[4] = 0;
    *(undefined4 *)((longlong)param_1 + 0x74) = 1;
    LOCK();
    *param_2 = *param_2 + -1;
    UNLOCK();
    if (*param_2 == 0) {
      pdb_140cb5640(&plStack_28);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x48);
}

