// VA 0x140acf2d0, PDB extent 1126 bytes
// country_core::systems::mod_editor::read_manifest
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::mod_editor::read_manifest
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
   Extent: 1126 */

undefined8 * pdb_140acf2d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  byte *pbStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  undefined8 uStack_a0;
  byte *pbStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  longlong lStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  byte *pbStack_50;
  byte *pbStack_48;
  byte *pbStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_140f3e9e0(&pbStack_b0,param_2,param_3,&UNK_14304d9a8,7);
  pbStack_48 = pbStack_a8;
  pdb_140f3e9e0(&uStack_88,pbStack_a8,uStack_a0,&UNK_14304dc20,0xc);
  pbStack_40 = uStack_80;
  pdb_140f55fb0(&pbStack_c8,uStack_80,uStack_78);
  if (uStack_88 != (longlong *)0x0) {
    pub_1406abac0(pbStack_40,(ulonglong)uStack_88,1);
  }
  if (SBORROW8(0,(longlong)pbStack_c8)) {
    pbStack_90 = pbStack_c0;
    lStack_68 = 0;
    pbStack_60 = (byte *)0x1;
    uStack_58 = 0;
    uStack_78 = 0x60000020;
    uStack_88 = &lStack_68;
    uStack_80 = &UNK_14304e0c8;
    cVar3 = pdb_140f59780(&pbStack_90,&uStack_88);
    uVar4 = uStack_58;
    pbVar1 = pbStack_60;
    lVar2 = lStack_68;
    if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14304e0f8,0x37,&uStack_31,&UNK_14304e358,&UNK_14304e1a0);
    }
    pdb_1404b38e0(&pbStack_90);
    param_1[1] = lVar2;
    param_1[2] = pbVar1;
    param_1[3] = uVar4;
    *param_1 = 1;
    pbVar1 = pbStack_b0;
  }
  else {
    pbStack_40 = pbStack_c8;
    if (pbStack_b0 != (byte *)0x0) {
      pub_1406abac0(pbStack_48,(ulonglong)pbStack_b0,1);
    }
    pbStack_48 = pbStack_c0;
    pdb_14164c2a0(&lStack_68,pbStack_c0,uStack_b8);
    pbVar1 = pbStack_60;
    if (SBORROW8(0,lStack_68)) {
      pbStack_c8 = pbStack_60;
      uStack_88 = (longlong *)0x0;
      uStack_80 = (byte *)0x1;
      uStack_78 = 0;
      uStack_a0 = 0x60000020;
      pbStack_a8 = &UNK_14304e0c8;
      pbStack_b0 = (byte *)&uStack_88;
      cVar3 = pdb_140de07e0(&pbStack_c8,&pbStack_b0);
      if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14304e0f8,0x37,&uStack_31,&UNK_14304e358,&UNK_14304e1a0);
      }
      param_1[3] = uStack_78;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_88;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_88._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)param_1 + 0x14) = uStack_80._4_4_;
      pbStack_50 = pbVar1;
      if (*(longlong *)pbVar1 == 1) {
        pdb_1404b38e0(pbVar1 + 8);
      }
      else if ((*(longlong *)pbVar1 == 0) && (*(ulonglong *)(pbVar1 + 0x10) != 0)) {
        pub_1406abac0(*(byte **)(pbVar1 + 8),*(ulonglong *)(pbVar1 + 0x10),1);
      }
      pub_1406abac0(pbStack_50,0x28,8);
      uVar4 = 1;
    }
    else {
      param_1[3] = uStack_58;
      param_1[1] = lStack_68;
      param_1[2] = pbStack_60;
      uVar4 = 0;
    }
    *param_1 = uVar4;
    pbVar1 = pbStack_40;
  }
  if (pbVar1 != (byte *)0x0) {
    pub_1406abac0(pbStack_48,(ulonglong)pbVar1,1);
  }
  return param_1;
}

