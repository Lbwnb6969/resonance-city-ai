// VA 0x1417cc480, PDB extent 472 bytes
// country_core::resources::stairs::stairs_state::_::impl$0::serialize<serde_json::value::ser::Serializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::stairs::stairs_state::_::impl$0::serialize<serde_json::value::ser::Serializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/stairs/stairs_state.rs
   Extent: 472 */

undefined1 * pdb_1417cc480(undefined1 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  undefined1 uStack_50;
  undefined4 uStack_4f;
  undefined2 uStack_4b;
  undefined1 uStack_49;
  undefined7 uStack_48;
  undefined1 uStack_41;
  uint7 uStack_40;
  undefined1 uStack_39;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_140ddca20(&uStack_50,&UNK_143337c77,0xe,2);
  lStack_68 = CONCAT17(uStack_49,CONCAT25(uStack_4b,CONCAT41(uStack_4f,uStack_50)));
  lStack_60 = CONCAT17(uStack_41,uStack_48);
  if (SBORROW8(0,lStack_68)) {
    *(longlong *)(param_1 + 8) = lStack_60;
    *param_1 = 6;
  }
  else {
    lVar2 = CONCAT17(uStack_39,uStack_40);
    uVar1 = *param_2;
    uStack_50 = 2;
    uStack_48 = 0;
    uStack_41 = 0;
    uStack_40 = (uint7)uVar1;
    uStack_39 = 0;
    if (lVar2 == lStack_68) {
      pdb_142db0ce0(&lStack_68,-lStack_68);
    }
    lVar3 = lVar2 * 0x20;
    *(undefined1 *)(lStack_60 + lVar3) = 2;
    *(undefined8 *)(lStack_60 + 8 + lVar3) = 0;
    *(ulonglong *)(lStack_60 + 0x10 + lVar3) = (ulonglong)uVar1;
    lVar3 = lVar2 + 1;
    uVar1 = param_2[1];
    uStack_50 = 2;
    uStack_48 = 0;
    uStack_41 = 0;
    uStack_40 = (uint7)uVar1;
    uStack_39 = 0;
    if (lVar3 == lStack_68) {
      lStack_58 = lVar3;
      pdb_142db0ce0(&lStack_68);
    }
    lVar3 = lVar3 * 0x20;
    *(undefined1 *)(lStack_60 + lVar3) = 2;
    *(undefined8 *)(lStack_60 + 8 + lVar3) = 0;
    *(ulonglong *)(lStack_60 + 0x10 + lVar3) = (ulonglong)uVar1;
    uStack_49 = (undefined1)lStack_68;
    uStack_48 = (undefined7)((ulonglong)lStack_68 >> 8);
    uStack_41 = (undefined1)lStack_60;
    *param_1 = 4;
    param_1[1] = uStack_50;
    *(undefined4 *)(param_1 + 2) = uStack_4f;
    *(undefined2 *)(param_1 + 6) = uStack_4b;
    param_1[8] = uStack_49;
    *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_41,uStack_48);
    *(longlong *)(param_1 + 0x10) = lStack_60;
    *(longlong *)(param_1 + 0x18) = lVar2 + 2;
  }
  return param_1;
}

