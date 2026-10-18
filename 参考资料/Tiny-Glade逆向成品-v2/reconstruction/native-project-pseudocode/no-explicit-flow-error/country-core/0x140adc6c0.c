// VA 0x140adc6c0, PDB extent 213 bytes
// country_core::systems::wall::shapes::rectangle::ui_create_rectangle::rectangle_signifier::closure$0::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_create_rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::rectangle::ui_create_rectangle::rectangle_signifier::closure$0::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/ui_create_rectangle.rs
   Extent: 213 */

undefined8 * pdb_140adc6c0(undefined8 *param_1)

{
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  byte *pbStack_70;
  longlong lStack_58;
  byte *pbStack_50;
  longlong lStack_40;
  byte *pbStack_38;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_140df37e0(&lStack_58);
  pdb_1419ac1a0(&uStack_90,&lStack_58,_DAT_142e36f50);
  param_1[2] = uStack_80;
  *param_1 = uStack_90;
  param_1[1] = uStack_88;
  if (lStack_78 != 0) {
    pub_1406abac0(pbStack_70,lStack_78 << 2,4);
  }
  if (lStack_58 != 0) {
    pub_1406abac0(pbStack_50,lStack_58 << 3,4);
  }
  if (lStack_40 != 0) {
    pub_1406abac0(pbStack_38,lStack_40 << 2,4);
  }
  return param_1;
}

