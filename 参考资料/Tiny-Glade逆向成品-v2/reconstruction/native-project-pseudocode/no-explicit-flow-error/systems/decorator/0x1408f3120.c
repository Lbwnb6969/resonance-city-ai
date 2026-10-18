// VA 0x1408f3120, PDB extent 723 bytes
// system_decorator::blueprint::DecoratorBlueprint::set_colliders
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_decorator::blueprint::DecoratorBlueprint::set_colliders
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/blueprint.rs
   Extent: 723 */

void pdb_1408f3120(longlong param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
                  uint *param_5)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  uint *puStack_60;
  code *pcStack_58;
  uint *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  longlong lStack_38;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uVar5 = param_4[1] & 0x7fffffff;
  uStack_40 = param_2;
  if ((((*param_4 & 0x7fffffff) < 0x7f800000) && (uVar5 < 0x7f800000)) &&
     ((param_4[2] & 0x7fffffff) < 0x7f800000)) {
    uVar3 = *(undefined8 *)param_5;
    uVar4 = *(undefined8 *)(param_5 + 2);
    auVar2._4_4_ = -(uint)((float)(_UNK_142e377e4 & param_5[1]) < _UNK_14301cce4);
    auVar2._0_4_ = -(uint)((float)(_DAT_142e377e0 & *param_5) < _DAT_14301cce0);
    auVar2._8_4_ = -(uint)((float)(_UNK_142e377e8 & param_5[2]) < _UNK_14301cce8);
    auVar2._12_4_ = -(uint)((float)(_UNK_142e377ec & param_5[3]) < _UNK_14301ccec);
    iVar6 = movmskps(CONCAT31((int3)(uVar5 >> 8),uVar5 < 0x7f800000),auVar2);
    if (iVar6 == 0xf) {
      uVar5 = param_4[2];
      puStack_60 = *(uint **)param_4;
      lStack_38 = param_1;
      pcStack_58._0_4_ = uVar5;
      if (*(int *)(param_1 + 0x50) == 0) {
        plVar1 = *(longlong **)(param_1 + 0x60);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          pdb_140c7b7a0(param_1 + 0x60);
        }
      }
      *(undefined4 *)(lStack_38 + 0x50) = 0;
      *(uint **)(lStack_38 + 0x54) = puStack_60;
      *(uint *)(lStack_38 + 0x5c) = (uint)pcStack_58;
      *(undefined8 *)(lStack_38 + 0x60) = uStack_40;
      *(undefined8 *)(lStack_38 + 0x70) = uVar3;
      *(undefined8 *)(lStack_38 + 0x78) = uVar4;
      pcStack_58 = (code *)CONCAT44(pcStack_58._4_4_,param_4[2]);
      puStack_60 = *(uint **)param_4;
      uVar3 = *(undefined8 *)param_5;
      uVar4 = *(undefined8 *)(param_5 + 2);
      uStack_40 = param_3;
      if (*(int *)(lStack_38 + 0x80) == 0) {
        plVar1 = *(longlong **)(lStack_38 + 0x90);
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          pdb_140c7b7a0(lStack_38 + 0x90);
        }
      }
      *(undefined4 *)(lStack_38 + 0x80) = 0;
      *(uint **)(lStack_38 + 0x84) = puStack_60;
      *(uint *)(lStack_38 + 0x8c) = (uint)pcStack_58;
      *(undefined8 *)(lStack_38 + 0x90) = uStack_40;
      *(undefined8 *)(lStack_38 + 0xa0) = uVar3;
      *(undefined8 *)(lStack_38 + 0xa8) = uVar4;
      return;
    }
  }
  pcStack_58 = pdb_140f33d80;
  puStack_50 = param_5;
  pcStack_48 = pdb_140f33730;
  uStack_29 = 1;
  uStack_2a = 1;
  puStack_60 = param_4;
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14301ce48,&puStack_60,&UNK_14301ce78);
}

