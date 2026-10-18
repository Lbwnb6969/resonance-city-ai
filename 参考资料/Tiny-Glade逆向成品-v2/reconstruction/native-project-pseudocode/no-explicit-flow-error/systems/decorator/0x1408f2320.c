// VA 0x1408f2320, PDB extent 418 bytes
// system_decorator::blueprint::show_max_wall_y
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_decorator::blueprint::show_max_wall_y
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
   Extent: 418 */

void pdb_1408f2320(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong lStack_c8;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  ulonglong uStack_60;
  undefined4 *puStack_58;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong lStack_30;
  undefined4 uStack_28;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  lStack_88 = *(longlong *)(param_1 + 0x90);
  uStack_60 = *(ulonglong *)(param_1 + 0x98);
  lStack_80 = lStack_88 + uStack_60 * 0xc;
  lStack_78 = *(longlong *)(param_1 + 0xe0);
  uVar1 = *(ulonglong *)(param_1 + 0xe8);
  lStack_70 = lStack_78 + uVar1 * 4;
  if (uVar1 < uStack_60) {
    uStack_60 = uVar1;
  }
  uStack_68 = 0;
  puStack_58 = &uStack_28;
  uStack_28 = param_2;
  pdb_1414972f0(&uStack_40,&lStack_88);
  if (*(int *)(param_1 + 600) != 2) {
    if (lStack_30 == 0) {
      uStack_21 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14301cde0);
    }
    plVar2 = (longlong *)CONCAT44(uStack_34,uStack_38);
    lStack_88 = *plVar2;
    lStack_80 = CONCAT44(lStack_80._4_4_,(int)plVar2[1]);
    if (lStack_30 == CONCAT44(uStack_3c,uStack_40)) {
      uStack_21 = 1;
      pdb_142db7820(&uStack_40);
      plVar2 = (longlong *)CONCAT44(uStack_34,uStack_38);
    }
    *(undefined4 *)((longlong)plVar2 + lStack_30 * 0xc + 8) = (undefined4)lStack_80;
    *(longlong *)((longlong)plVar2 + lStack_30 * 0xc) = lStack_88;
    lStack_30 = lStack_30 + 1;
  }
  lStack_c8 = lStack_30;
  uStack_d8 = uStack_40;
  uStack_d4 = uStack_3c;
  uStack_d0 = uStack_38;
  uStack_cc = uStack_34;
  uStack_21 = 0;
  pdb_140a89130(&lStack_88,&uStack_d8);
  uStack_21 = 0;
  pdb_140a891b0(&uStack_d8,&lStack_88);
  uStack_21 = 0;
  pdb_140a89100(&lStack_88,&uStack_d8,_DAT_142e3788c);
  uStack_21 = 0;
  pdb_140a89170(&lStack_88,param_3);
  return;
}

