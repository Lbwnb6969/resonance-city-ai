// VA 0x142e29250, PDB extent 231 bytes
// utils::curve::impl$4::get_coord_at_u::closure$1<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D,utils::curve::curve_u::CurveU<utils::curve::CurveCoordSemantic2D> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::curve::impl$4::get_coord_at_u::closure$1<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D,utils::curve::curve_u::CurveU<utils::curve::CurveCoordSemantic2D>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 231 */

void pdb_142e29250(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  ulonglong arg0;
  byte *pbVar1;
  undefined4 *puStack_68;
  code *pcStack_60;
  longlong *plStack_58;
  code *pcStack_50;
  longlong lStack_48;
  byte *pbStack_40;
  longlong lStack_38;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  arg0 = param_3 * 4;
  uStack_2c = param_1;
  pdb_14007ee60();
  pbVar1 = pub_1406abab0(arg0,4);
  if (pbVar1 == (byte *)0x0) {
    pbVar1 = (byte *)pdb_142dc7e2a(4,arg0);
  }
  pub_142e32760(pbVar1,param_2,arg0);
  puStack_68 = &uStack_2c;
  pcStack_60 = pdb_140f70fc0;
  plStack_58 = &lStack_48;
  pcStack_50 = pdb_140fc7fb0;
  lStack_48 = param_3;
  pbStack_40 = pbVar1;
  lStack_38 = param_3;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14359b270,&puStack_68,&UNK_14359b298);
}

