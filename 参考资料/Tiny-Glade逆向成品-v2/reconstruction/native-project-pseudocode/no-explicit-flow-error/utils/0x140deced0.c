// VA 0x140deced0, PDB extent 239 bytes
// utils::natural_cubic::Spline3D::find_segment_and_dt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/utils/src/natural_cubic.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: utils::natural_cubic::Spline3D::find_segment_and_dt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/utils/src/natural_cubic.rs
   Extent: 239 */

longlong pdb_140deced0(longlong param_1,float param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fStack_28;
  float fStack_24;
  float *pfStack_20;
  code *pcStack_18;
  float *pfStack_10;
  code *pcStack_8;
  
  fStack_28 = *(float *)(param_1 + 0x18);
  fStack_24 = *(float *)(param_1 + 0x1c);
  if (fStack_24 < fStack_28) {
    pfStack_20 = &fStack_28;
    pcStack_18 = pdb_140f705d0;
    pfStack_10 = &fStack_24;
    pcStack_8 = pdb_140f705d0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_1431feeb0,&pfStack_20,&UNK_1431fef50);
  }
  if (fStack_28 <= param_2) {
    fStack_28 = param_2;
  }
  if (fStack_28 <= fStack_24) {
    fStack_24 = fStack_28;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  uVar5 = 0;
  if (uVar2 != 0) {
    lVar4 = 0;
    lVar3 = lVar4;
    uVar5 = uVar2;
    if (uVar2 != 1) {
      do {
        lVar4 = lVar3 + (uVar5 >> 1);
        if (fStack_24 < *(float *)(lVar1 + lVar4 * 0x40)) {
          lVar4 = lVar3;
        }
        uVar5 = uVar5 - (uVar5 >> 1);
        lVar3 = lVar4;
      } while (1 < uVar5);
    }
    lVar4 = (ulonglong)(*(float *)(lVar1 + lVar4 * 0x40) <= fStack_24) + lVar4;
    uVar5 = lVar4 + -1 + (ulonglong)(lVar4 == 0);
  }
  if (uVar2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(uVar5,uVar2,&UNK_1431ff2f8);
  }
  return lVar1 + uVar5 * 0x40;
}

