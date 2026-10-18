// VA 0x1408a2c80, PDB extent 181 bytes
// system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::create_stairs_collider
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/playermade_stairs_assemble_visuals.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::create_stairs_collider
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/playermade_stairs_assemble_visuals.rs
   Extent: 181 */

void pdb_1408a2c80(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_58;
  longlong *plStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [24];
  
  if (*param_3 == '\x11') {
    pdb_1405de690(&uStack_78,param_1,param_2,param_4,param_5);
    if (cStack_58 != '\x11') {
      LOCK();
      *plStack_40 = *plStack_40 + -1;
      UNLOCK();
      if (*plStack_40 == 0) {
        pdb_140c7b7a0(&plStack_40);
      }
    }
    return;
  }
  uStack_38 = *(undefined8 *)param_3;
  uStack_30 = *(undefined8 *)(param_3 + 8);
  uStack_28 = *(undefined4 *)(param_3 + 0x10);
  uStack_24 = *(undefined4 *)(param_3 + 0x14);
  uStack_20 = *(undefined4 *)(param_3 + 0x18);
  uStack_1c = *(undefined4 *)(param_3 + 0x1c);
  uStack_68 = _DAT_143014200;
  uStack_60 = _UNK_143014208;
  uStack_78 = _DAT_1430141f0;
  uStack_74 = _UNK_1430141f4;
  uStack_70 = _UNK_1430141f8;
  uStack_6c = _UNK_1430141fc;
  pdb_1414e64b0(auStack_18,param_1,param_2,param_4,param_5,&uStack_38,&uStack_78);
  return;
}

