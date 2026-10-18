// VA 0x140724a20, PDB extent 187 bytes
// toolbar::mei::widgets::tweaker::impl$4::decrease
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::widgets::tweaker::impl$4::decrease
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets/tweaker.rs
   Extent: 187 */

void pdb_140724a20(undefined8 *param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fStack_60;
  float fStack_5c;
  float *pfStack_58;
  code *pcStack_50;
  float *pfStack_48;
  code *pcStack_40;
  
  fVar5 = *(float *)((longlong)param_1 + 0xc);
  fVar4 = *(float *)(param_1 + 2);
  fVar1 = *(float *)(param_1 + 1);
  pfVar2 = (float *)*param_1;
  fVar3 = (float)pub_142e32b00((*pfVar2 - fVar1) / fVar1);
  fVar3 = fVar3 * fVar1;
  *pfVar2 = fVar3;
  if (fVar5 <= fVar4) {
    if (fVar5 <= fVar3) {
      fVar5 = fVar3;
    }
    if (fVar5 <= fVar4) {
      fVar4 = fVar5;
    }
    *pfVar2 = fVar4;
    return;
  }
  pfStack_58 = &fStack_60;
  pcStack_50 = pdb_140f705d0;
  pfStack_48 = &fStack_5c;
  pcStack_40 = pdb_140f705d0;
  fStack_60 = fVar5;
  fStack_5c = fVar4;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_142fa5b28,&pfStack_58,&UNK_142fa5bc8);
}

