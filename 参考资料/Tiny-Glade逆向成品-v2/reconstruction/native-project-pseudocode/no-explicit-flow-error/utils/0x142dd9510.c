// VA 0x142dd9510, PDB extent 251 bytes
// utils::curve::impl$4::get_coord_at_u::closure$1<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D,utils::curve::curve_u::CurveUBoundless<utils::curve::CurveCoordSemantic2D> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::curve::impl$4::get_coord_at_u::closure$1<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D,utils::curve::curve_u::CurveUBoundless<utils::curve::CurveCoordSemantic2D>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 251 */

void pdb_142dd9510(undefined4 *param_1,undefined8 param_2,longlong param_3)

{
  ulonglong arg0;
  byte *pbVar1;
  undefined4 *puStack_70;
  code *pcStack_68;
  longlong *plStack_60;
  code *pcStack_58;
  longlong lStack_50;
  byte *pbStack_48;
  longlong lStack_40;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uStack_34 = *param_1;
  pbVar1 = (byte *)0x4;
  if (param_3 != 0) {
    arg0 = param_3 * 4;
    pdb_14007ee60();
    pbVar1 = pub_1406abab0(arg0,4);
    if (pbVar1 == (byte *)0x0) {
      pbVar1 = (byte *)pdb_142dc7e2a(4,arg0);
    }
    pub_142e32760(pbVar1,param_2,arg0);
  }
  puStack_70 = &uStack_34;
  pcStack_68 = pdb_140f70fc0;
  plStack_60 = &lStack_50;
  pcStack_58 = pdb_1413e6b60;
  lStack_50 = param_3;
  pbStack_48 = pbVar1;
  lStack_40 = param_3;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_143306598,&puStack_70,&UNK_1433065c0);
}

