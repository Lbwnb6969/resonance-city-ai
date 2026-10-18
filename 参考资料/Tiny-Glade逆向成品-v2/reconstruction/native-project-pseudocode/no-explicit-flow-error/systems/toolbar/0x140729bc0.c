// VA 0x140729bc0, PDB extent 323 bytes
// toolbar::mei::widgets::impl$19::pre_update
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::mei::widgets::impl$19::pre_update
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/widgets.rs
   Extent: 323 */

void pdb_140729bc0(byte *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  float fVar5;
  float fStack_48;
  float fStack_44;
  float *pfStack_40;
  code *pcStack_38;
  float *pfStack_30;
  code *pcStack_28;
  
  pfStack_30 = (float *)CONCAT44(pfStack_30._4_4_,0x17161819);
  uVar1 = param_2[1];
  lVar3 = 0;
  do {
    bVar2 = pdb_14093a1c0(uVar1,*(undefined1 *)((longlong)&pfStack_30 + lVar3));
    if (bVar2 != 0) break;
    bVar4 = lVar3 != 3;
    lVar3 = lVar3 + 1;
  } while (bVar4);
  param_1[0x3a] = param_1[0x39];
  param_1[0x39] = bVar2;
  if ((*(byte *)*param_2 & 0x40) == 0) {
    bVar2 = 0;
  }
  else {
    if ((*param_1 & bVar2) == 0) {
      return;
    }
    fVar5 = _DAT_142e37878 + *(float *)(param_1 + 0x28);
    fStack_44 = (float)*(ulonglong *)(param_1 + 8) * fVar5;
    fStack_48 = (*(float *)(param_1 + 0x28) + fStack_44) -
                (fVar5 * (float)*(ulonglong *)(param_1 + 0x18) + _DAT_142fa5b20);
    if (fStack_48 <= 0.0) {
      fStack_48 = 0.0;
    }
    if (fStack_44 < fStack_48) {
      pfStack_40 = &fStack_48;
      pcStack_38 = pdb_140f705d0;
      pfStack_30 = &fStack_44;
      pcStack_28 = pdb_140f705d0;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_142fa5c78,&pfStack_40,&UNK_142fa5d18);
    }
    if (fStack_48 <= *(float *)(param_1 + 0x30)) {
      fStack_48 = *(float *)(param_1 + 0x30);
    }
    if (fStack_48 <= fStack_44) {
      fStack_44 = fStack_48;
    }
    *(float *)(param_1 + 0x30) = fStack_44;
    bVar2 = 1;
  }
  param_1[0x38] = bVar2;
  return;
}

