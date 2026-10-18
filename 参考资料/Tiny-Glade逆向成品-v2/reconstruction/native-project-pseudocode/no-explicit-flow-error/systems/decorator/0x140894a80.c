// VA 0x140894a80, PDB extent 702 bytes
// system_decorator::decorator_visual::playermade_stairs::stairs_lazy_update::stairs_subscribe_lazy
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_lazy_update.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::stairs_lazy_update::stairs_subscribe_lazy
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_lazy_update.rs
   Extent: 702 */

void pdb_140894a80(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong lStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  longlong lStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lStack_70 = 0;
  uStack_68 = 8;
  lStack_60 = 0;
  lStack_78 = CONCAT53(lStack_78._3_5_,0x90000);
  lStack_78 = CONCAT62(lStack_78._2_6_,0x100);
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x1c);
  uVar3 = *param_1;
  puVar4 = (undefined4 *)param_1[2];
  for (lVar6 = 0; lVar6 != 3; lVar6 = lVar6 + 1) {
    uVar1 = *(undefined1 *)((longlong)&lStack_78 + lVar6);
    *puVar4 = uVar2;
    uStack_49 = 1;
    lStack_58 = pdb_1409ef480(uVar3,uVar1);
    lVar5 = lStack_60;
    if (lStack_60 == lStack_70) {
      pdb_142d7e8a0(&lStack_70);
    }
    *(longlong *)(uStack_68 + lVar5 * 8) = lStack_58;
    lStack_60 = lVar5 + 1;
  }
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_49 = 1;
  lStack_88 = pdb_1409c5d10(*param_2 + 0x18);
  lVar6 = lStack_60;
  lStack_58 = lStack_88;
  if (lStack_60 == lStack_70) {
    pdb_142d7e8a0(&lStack_70);
  }
  *(longlong *)(uStack_68 + lVar6 * 8) = lStack_58;
  lStack_60 = lVar6 + 1;
  *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_49 = 1;
  lStack_88 = pdb_1409c5d10(*param_3 + 0x18);
  lVar6 = lStack_60;
  lStack_58 = lStack_88;
  if (lStack_60 == lStack_70) {
    pdb_142d7e8a0(&lStack_70);
  }
  *(longlong *)(uStack_68 + lVar6 * 8) = lStack_58;
  lStack_78 = lVar6 + 1;
  lStack_88 = lStack_70;
  uStack_80 = (undefined4)uStack_68;
  uStack_7c = uStack_68._4_4_;
  uStack_49 = 0;
  lStack_60 = lStack_78;
  pdb_1414ba140(param_4,&lStack_88,&UNK_143012ee8);
  return;
}

