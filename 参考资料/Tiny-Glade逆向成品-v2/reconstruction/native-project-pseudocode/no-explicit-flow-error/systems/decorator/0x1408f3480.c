// VA 0x1408f3480, PDB extent 481 bytes
// system_decorator::blueprint::DecoratorBlueprint::set_interaction_mesh
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::blueprint::DecoratorBlueprint::set_interaction_mesh
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
   Extent: 481 */

void pdb_1408f3480(longlong param_1,undefined8 param_2,uint *param_3,uint *param_4)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  uint *puStack_50;
  code *pcStack_48;
  uint *puStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  longlong lStack_20;
  undefined1 uStack_11;
  undefined8 uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
  uVar5 = param_3[1] & 0x7fffffff;
  uStack_30 = param_2;
  uStack_28 = param_2;
  if ((((*param_3 & 0x7fffffff) < 0x7f800000) && (uVar5 < 0x7f800000)) &&
     ((param_3[2] & 0x7fffffff) < 0x7f800000)) {
    uVar3 = *(undefined8 *)param_4;
    uVar4 = *(undefined8 *)(param_4 + 2);
    auVar2._4_4_ = -(uint)((float)(_UNK_142e377e4 & param_4[1]) < _UNK_14301cce4);
    auVar2._0_4_ = -(uint)((float)(_DAT_142e377e0 & *param_4) < _DAT_14301cce0);
    auVar2._8_4_ = -(uint)((float)(_UNK_142e377e8 & param_4[2]) < _UNK_14301cce8);
    auVar2._12_4_ = -(uint)((float)(_UNK_142e377ec & param_4[3]) < _UNK_14301ccec);
    iVar6 = movmskps(CONCAT31((int3)(uVar5 >> 8),uVar5 < 0x7f800000),auVar2);
    if (iVar6 == 0xf) {
      pcStack_48 = (code *)CONCAT44(pcStack_48._4_4_,param_3[2]);
      puStack_50 = *(uint **)param_3;
      lStack_20 = param_1;
      if (*(int *)(param_1 + 0x80) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x90);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          pdb_140c7b7a0(param_1 + 0x90);
        }
      }
      *(undefined4 *)(lStack_20 + 0x80) = 0;
      *(uint **)(lStack_20 + 0x84) = puStack_50;
      *(undefined4 *)(lStack_20 + 0x8c) = pcStack_48._0_4_;
      *(undefined8 *)(lStack_20 + 0x90) = uStack_28;
      *(undefined8 *)(lStack_20 + 0xa0) = uVar3;
      *(undefined8 *)(lStack_20 + 0xa8) = uVar4;
      return;
    }
  }
  pcStack_48 = pdb_140f33d80;
  pcStack_38 = pdb_140f33730;
  uStack_11 = 1;
  puStack_50 = param_3;
  puStack_40 = param_4;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14301ce90,&puStack_50,&UNK_14301cec8);
}

