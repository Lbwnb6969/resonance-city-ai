// VA 0x140c6fe70, PDB extent 395 bytes
// country_core::resources::session::import::ImportMenu::read
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session/import.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::session::import::ImportMenu::read
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session/import.rs
   Extent: 395 */

undefined8 * pdb_140c6fe70(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong *plStack_68;
  longlong lStack_60;
  byte *pbStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  longlong lStack_40;
  longlong lStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  lVar2 = param_2;
  uVar1 = pdb_140dc6750();
  pdb_140a93620(&uStack_48,uVar1,lVar2);
  pdb_1415ff590(&lStack_60,*(longlong *)(param_2 + 8),
                *(longlong *)(param_2 + 0x10) * 0x1c + *(longlong *)(param_2 + 8));
  lStack_70 = lStack_38 * 0x1c + lStack_40;
  lStack_78 = lStack_40;
  plStack_68 = &lStack_60;
  pdb_1415ea160(&uStack_90,&lStack_78);
  param_1[2] = lStack_38;
  *param_1 = uStack_48;
  param_1[1] = lStack_40;
  param_1[5] = uStack_80;
  param_1[3] = uStack_90;
  param_1[4] = uStack_88;
  if (lStack_50 != 0) {
    pbVar3 = pbStack_58 + 8;
    lVar2 = lStack_50;
    do {
      if (*(ulonglong *)(pbVar3 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar3,*(ulonglong *)(pbVar3 + -8),1);
      }
      pbVar3 = pbVar3 + 0x38;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if (lStack_60 != 0) {
    pub_1406abac0(pbStack_58,lStack_60 * 0x38,8);
  }
  return param_1;
}

