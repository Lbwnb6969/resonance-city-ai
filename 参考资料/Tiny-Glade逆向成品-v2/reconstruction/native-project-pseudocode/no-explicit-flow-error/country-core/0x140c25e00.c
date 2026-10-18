// VA 0x140c25e00, PDB extent 306 bytes
// country_core::resources::clutter_registry::ClutterRegistry::picker_items
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::clutter_registry::ClutterRegistry::picker_items
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/clutter_registry.rs
   Extent: 306 */

undefined8 pdb_140c25e00(undefined8 param_1,longlong param_2,undefined1 param_3)

{
  longlong lStack_90;
  undefined1 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  longlong lStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  undefined8 uStack_50;
  longlong lStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  longlong lStack_30;
  longlong lStack_28;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  puStack_80 = &uStack_38;
  uStack_18 = 0xfffffffffffffffe;
  uStack_38 = 0;
  lStack_30 = 8;
  lStack_28 = 0;
  uStack_50 = 0;
  lStack_48 = 8;
  lStack_40 = 0;
  puStack_88 = &uStack_19;
  puStack_78 = &uStack_50;
  lStack_90 = param_2;
  uStack_19 = param_3;
  pdb_1418cc140(*(longlong *)(param_2 + 0x70),
                *(longlong *)(param_2 + 0x70) + *(longlong *)(param_2 + 0x78) * 8,&lStack_90);
  puStack_78 = (undefined8 *)(lStack_30 + lStack_28 * 8);
  lStack_58 = lStack_48 + lStack_40 * 8;
  lStack_90 = lStack_30;
  puStack_88 = (undefined1 *)lStack_30;
  puStack_80 = (undefined8 *)uStack_38;
  lStack_70 = lStack_48;
  lStack_68 = lStack_48;
  uStack_60 = uStack_50;
  pdb_1415ff160(param_1,&lStack_90);
  return param_1;
}

