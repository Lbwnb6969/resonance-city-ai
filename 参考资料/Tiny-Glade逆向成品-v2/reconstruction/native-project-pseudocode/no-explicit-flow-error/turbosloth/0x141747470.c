// VA 0x141747470, PDB extent 695 bytes
// turbosloth::asset::AssetBuildError::cause_chain
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::asset::AssetBuildError::cause_chain
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 695 */

undefined8 pdb_141747470(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  byte *arg0;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  byte *pbStack_60;
  longlong lStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lStack_68 = 0;
  pbStack_60 = (byte *)0x8;
  lStack_58 = 0;
  lVar6 = *(longlong *)(param_2 + 0x18);
  lVar5 = *(longlong *)(param_2 + 0x10) + (*(longlong *)(lVar6 + 0x10) - 1U & 0xfffffffffffffff0) +
          0x10;
  uStack_78 = param_1;
  while( true ) {
    if (lVar5 == 0) {
      pdb_142566f10(uStack_78,pbStack_60,lStack_58,&UNK_14332eff8,2);
      arg0 = pbStack_60;
      if (lStack_58 != 0) {
        pbVar7 = pbStack_60 + 8;
        lVar6 = lStack_58;
        do {
          if (*(ulonglong *)(pbVar7 + -8) != 0) {
            pub_1406abac0(*(byte **)pbVar7,*(ulonglong *)(pbVar7 + -8),1);
          }
          pbVar7 = pbVar7 + 0x18;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      if (lStack_68 != 0) {
        pub_1406abac0(arg0,lStack_68 * 0x18,8);
      }
      return uStack_78;
    }
    uStack_98 = 0;
    lStack_90 = 1;
    uStack_88 = 0;
    uStack_a0 = 0x60000020;
    puStack_a8 = &UNK_14332f3d8;
    puStack_b0 = &uStack_98;
    cVar4 = (**(code **)(lVar6 + 0x20))(lVar5,&puStack_b0);
    lVar3 = lStack_58;
    uVar2 = uStack_88;
    if (cVar4 != '\0') break;
    uStack_70 = uStack_98;
    lStack_80 = lStack_90;
    if (lStack_58 == lStack_68) {
      pdb_142d895b0(&lStack_68);
    }
    *(undefined8 *)(pbStack_60 + lVar3 * 0x18) = uStack_70;
    *(longlong *)(pbStack_60 + lVar3 * 0x18 + 8) = lStack_80;
    *(undefined8 *)(pbStack_60 + lVar3 * 0x18 + 0x10) = uVar2;
    lStack_58 = lVar3 + 1;
    puVar1 = (undefined8 *)(lVar6 + 0x30);
    lVar6 = lStack_80;
    lVar5 = (*(code *)*puVar1)(lVar5);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_14332f408,0x37,&uStack_49,&UNK_14332f4c8,&UNK_14332f4b0);
}

