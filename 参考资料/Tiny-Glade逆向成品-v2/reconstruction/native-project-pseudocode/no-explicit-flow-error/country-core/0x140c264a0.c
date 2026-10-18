// VA 0x140c264a0, PDB extent 275 bytes
// country_core::resources::clutter_registry::ClutterRegistry::external_ids_for_mod
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::clutter_registry::ClutterRegistry::external_ids_for_mod
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
   Extent: 275 */

undefined8 pdb_140c264a0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  ulonglong uStack_78;
  byte *pbStack_70;
  undefined1 (*pauStack_60) [16];
  undefined1 (*pauStack_58) [16];
  undefined8 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  ulonglong *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pauStack_60 = (undefined1 (*) [16])&UNK_14306af28;
  pauStack_58 = (undefined1 (*) [16])pdb_1402ed400;
  puStack_50 = &uStack_30;
  pcStack_48 = pdb_141304770;
  uStack_30 = param_3;
  pdb_140f60760(&uStack_78,&UNK_14306af38,&pauStack_60);
  pauStack_60 = *(undefined1 (**) [16])(param_2 + 0x80);
  puStack_50 = (undefined8 *)(*pauStack_60 + *(longlong *)(param_2 + 0x88) + 1);
  auVar1 = *pauStack_60;
  uStack_40 = *(undefined8 *)(param_2 + 0x98);
  pauStack_58 = pauStack_60 + 1;
  pcStack_48 = (code *)CONCAT62(pcStack_48._2_6_,
                                ~((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar1[0xf] >> 7) << 0xf));
  puStack_38 = &uStack_78;
  pdb_1415ef7b0(param_1,&pauStack_60);
  if (uStack_78 != 0) {
    pub_1406abac0(pbStack_70,uStack_78,1);
  }
  return param_1;
}

