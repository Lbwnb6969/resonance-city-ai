// VA 0x1419a76a0, PDB extent 295 bytes
// utils::curve::Curve::crashy_lerp<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   utils::curve::Curve::crashy_lerp<glam::f32::vec2::Vec2,utils::curve::CurveCoordSemantic2D>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/curve/mod.rs
   Extent: 295 */

longlong *
pdb_1419a76a0(longlong *param_1,longlong param_2,longlong param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined4 uStack_7c;
  longlong *plStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined4 *puStack_58;
  longlong lStack_50;
  longlong lStack_48;
  undefined8 *puStack_40;
  longlong *plStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puStack_40 = *(undefined8 **)(param_2 + 0x10);
  plStack_38 = *(longlong **)(param_3 + 0x10);
  uStack_7c = param_4;
  if (puStack_40 != plStack_38) {
    plStack_78 = (longlong *)&puStack_40;
    pcStack_70 = pdb_140f72a40;
    uStack_68 = &plStack_38;
    pcStack_60 = pdb_140f72a40;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14335e388,&plStack_78,param_5);
  }
  plStack_78 = *(longlong **)(param_2 + 8);
  pcStack_70 = (code *)(plStack_78 + (longlong)puStack_40);
  uStack_68 = (longlong **)0x0;
  puStack_58 = &uStack_7c;
  pcStack_60 = (code *)param_3;
  pdb_1415ffb10(&plStack_38,&plStack_78);
  pdb_140080c90(&plStack_78,&plStack_38,0);
  if (!SBORROW8(0,(longlong)plStack_78)) {
    param_1[6] = lStack_48;
    param_1[4] = (longlong)puStack_58;
    param_1[5] = lStack_50;
    param_1[2] = (longlong)uStack_68;
    param_1[3] = (longlong)pcStack_60;
    *param_1 = (longlong)plStack_78;
    param_1[1] = (longlong)pcStack_70;
    return param_1;
  }
  plStack_38 = (longlong *)pcStack_70;
  uStack_30 = (undefined4)uStack_68;
  uStack_2c = uStack_68._4_4_;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_14335e278,0x2b,&plStack_38,&UNK_14335e258,param_5);
}

