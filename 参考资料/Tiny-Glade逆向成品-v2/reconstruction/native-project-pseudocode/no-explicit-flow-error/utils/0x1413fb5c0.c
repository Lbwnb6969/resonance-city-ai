// VA 0x1413fb5c0, PDB extent 214 bytes
// utils::curve::CurveInternalCoord::new_for_point_count<utils::curve::CurveCoordSemanticThresholded3D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   utils::curve::CurveInternalCoord::new_for_point_count<utils::curve::CurveCoordSemanticThresholded3D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 214 */

ulonglong pdb_1413fb5c0(ulonglong param_1,float param_2,ulonglong param_3)

{
  float fStack_34;
  ulonglong uStack_30;
  ulonglong uStack_28;
  ulonglong *puStack_20;
  code *pcStack_18;
  ulonglong *puStack_10;
  code *pcStack_8;
  
  fStack_34 = param_2;
  uStack_30 = param_1;
  uStack_28 = param_3;
  if ((param_2 < 0.0) || (_DAT_142e36f28 < param_2)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dd94e0(&fStack_34);
  }
  if (param_3 <= param_1) {
    puStack_20 = &uStack_30;
    pcStack_18 = pdb_140f72a40;
    puStack_10 = &uStack_28;
    pcStack_8 = pdb_140f72a40;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_1433069b0,&puStack_20,&UNK_1433069d0);
  }
  if (param_1 + 1 < param_3) {
    return param_1 & 0xffffffff;
  }
  if ((param_2 != 0.0) || (NAN(param_2))) {
    pdb_142db0bc2(0,&fStack_34,&UNK_143306508,0);
  }
  else if (param_1 != 0) {
    return param_1 - 1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143306a00);
}

