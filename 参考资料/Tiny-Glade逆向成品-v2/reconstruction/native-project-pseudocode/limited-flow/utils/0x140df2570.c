// VA 0x140df2570, PDB extent 826 bytes
// utils::geometry::rectangle::Rectangle2d::get_closest_u_from_pos
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: utils::geometry::rectangle::Rectangle2d::get_closest_u_from_pos
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/geometry/rectangle.rs
   Extent: 826 */

void pdb_140df2570(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float afStack_88 [4];
  float fStack_78;
  undefined8 uStack_74;
  float fStack_6c;
  
  lVar1 = pdb_140df2c60();
  afStack_88[3] = (float)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  fStack_78 = (float)*(undefined8 *)(param_1 + 0x10);
  if (0.0 < fStack_78 * afStack_88[3]) {
    lVar3 = lVar1;
    if (lVar1 == 4) {
      lVar3 = 0;
    }
    afStack_88[1] = afStack_88[3] * _DAT_143057f30;
    afStack_88[0] = fStack_78 * _UNK_143057f34;
    afStack_88[3] = afStack_88[3] * _UNK_143057f38;
    fStack_78 = fStack_78 * _UNK_143057f3c;
    afStack_88[2] = afStack_88[0];
    uStack_74 = CONCAT44(fStack_78,afStack_88[3]);
    fStack_6c = afStack_88[1];
    lVar2 = 0;
    if (param_2 != 4) {
      lVar2 = param_2;
    }
    uStack_74 = CONCAT44(fStack_78,afStack_88[3]);
                    /* WARNING: Could not recover jumptable at 0x000140df2649. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_1431ffda4 + *(int *)(&UNK_1431ffda4 + lVar1 * 4)))
              (lVar2,0,*(undefined8 *)(param_1 + 8),*(undefined8 *)(afStack_88 + lVar3 * 2));
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_1431ffa1a,0x23,&UNK_1431ffc38);
}

