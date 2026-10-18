// VA 0x140847c10, PDB extent 184 bytes
// system_wall_constructor::utils::trim_rows::impl$0::above_to_below
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/trim_rows.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::utils::trim_rows::impl$0::above_to_below
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/trim_rows.rs
   Extent: 184 */

void pdb_140847c10(longlong *param_1,ulonglong param_2,float param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if ((param_3 < 0.0) || (_DAT_142e36f28 < param_3)) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc83b0(&UNK_143306950,0x2a,&UNK_143306980);
  }
  param_2 = param_2 & 0xffffffff;
  uVar1 = *(ulonglong *)(*param_1 + 0x28);
  if (uVar1 <= param_2) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(param_2,uVar1,&UNK_1433065d8);
  }
  if (param_2 + 1 < uVar1) {
    lVar3 = *(longlong *)(*param_1 + 0x20);
    uVar4 = pdb_140de9fd0(*(undefined4 *)(lVar3 + param_2 * 4),
                          *(undefined4 *)(lVar3 + 4 + param_2 * 4));
    lVar3 = *(longlong *)(param_1[1] + 0x10);
    if (lVar3 != 0) {
      lVar2 = *(longlong *)(param_1[1] + 8);
      lVar3 = lVar3 * 0x20;
      if (lVar2 + lVar3 != 0x20) {
        *(undefined4 *)(lVar2 + lVar3 + -4) = uVar4;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14300b950);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(param_2 + 1,uVar1,&UNK_1433065f0);
}

