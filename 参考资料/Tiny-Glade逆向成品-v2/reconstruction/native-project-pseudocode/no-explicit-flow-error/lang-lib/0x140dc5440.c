// VA 0x140dc5440, PDB extent 211 bytes
// lang_lib::load_locale
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/lang-lib/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: lang_lib::load_locale
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/lang-lib/src/lib.rs
   Extent: 211 */

longlong pdb_140dc5440(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  longlong lStack_38;
  byte *pbStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uVar3 = param_2;
  lVar1 = pdb_140dc5520();
  if (lVar1 == 0) {
    uVar2 = pdb_140dc7210();
    pdb_140f3e9e0(&uStack_58,uVar2,uVar3,&UNK_1431f2847,0x10);
    pbStack_30 = pbStack_50;
    lStack_38 = pdb_140f561c0(pbStack_50,uStack_48,param_1,param_2);
    if (uStack_58 != 0) {
      pub_1406abac0(pbStack_30,uStack_58,1);
    }
    if (lStack_38 != 0) {
      pdb_1404b38e0(&lStack_38);
    }
  }
  return lVar1;
}

