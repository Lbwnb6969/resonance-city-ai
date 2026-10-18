// VA 0x140847cd0, PDB extent 241 bytes
// system_wall_constructor::utils::trim_rows::impl$0::below_to_above
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/trim_rows.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::utils::trim_rows::impl$0::below_to_above
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/utils/trim_rows.rs
   Extent: 241 */

void pdb_140847cd0(longlong *param_1,ulonglong param_2,float param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  
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
    lVar2 = *(longlong *)(*param_1 + 0x20);
    uVar7 = pdb_140de9fd0(*(undefined4 *)(lVar2 + param_2 * 4),
                          *(undefined4 *)(lVar2 + 4 + param_2 * 4));
    plVar3 = (longlong *)param_1[1];
    lVar2 = param_1[3];
    lVar4 = plVar3[2];
    if (lVar4 == *plVar3) {
      pdb_142d7e6e0(plVar3);
    }
    lVar5 = plVar3[1];
    lVar6 = lVar4 * 0x20;
    *(undefined8 *)(lVar5 + lVar6) = 0;
    ((undefined8 *)(lVar5 + lVar6))[1] = 0;
    *(longlong *)(lVar5 + 0x10 + lVar6) = lVar2;
    *(undefined4 *)(lVar5 + 0x18 + lVar6) = uVar7;
    *(undefined4 *)(lVar5 + 0x1c + lVar6) = 0x3f800000;
    plVar3[2] = lVar4 + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(param_2 + 1,uVar1,&UNK_1433065f0);
}

