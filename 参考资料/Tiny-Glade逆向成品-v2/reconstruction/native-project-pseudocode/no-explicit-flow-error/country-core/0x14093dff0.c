// VA 0x14093dff0, PDB extent 421 bytes
// country_core::systems::ivy::impl$0::insert_ivy_resources
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::ivy::impl$0::insert_ivy_resources
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/mod.rs
   Extent: 421 */

void pdb_14093dff0(undefined8 param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined1 uStack_b4;
  undefined1 uStack_b3;
  undefined2 uStack_b2;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  plVar2 = (longlong *)pdb_14008d710(0);
  if (plVar2 != (longlong *)0x0) {
    lStack_88 = *plVar2;
    lStack_80 = plVar2[1];
    *plVar2 = *plVar2 + 1;
    uStack_98 = _DAT_1430662a0;
    uStack_90 = _UNK_1430662a8;
    uStack_a8 = _DAT_143066290;
    uStack_a4 = _UNK_143066294;
    uStack_a0 = _UNK_143066298;
    uStack_9c = _UNK_14306629c;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_78 = 1;
    uStack_60 = CONCAT71(uStack_60._1_7_,1);
    uVar3 = pdb_1418fcf40(param_1,&uStack_a8);
    pdb_1414a8010(&uStack_120,0x2d);
    uStack_b0 = 3;
    uStack_b3 = 0;
    uStack_b8 = 0x3d888889;
    uStack_c8 = _DAT_143022bb0;
    uStack_d0 = 0x33e99999a;
    pdb_1414a82a0(&uStack_120,0x7b);
    uStack_38 = CONCAT71(uStack_af,uStack_b0);
    uStack_40 = CONCAT26(uStack_b2,CONCAT15(uStack_b3,CONCAT14(uStack_b4,uStack_b8)));
    uStack_48 = uStack_c0;
    uStack_58 = uStack_d0;
    uStack_50 = uStack_c8;
    uStack_68 = uStack_e0;
    uStack_60 = uStack_d8;
    uStack_a8 = uStack_120;
    uStack_a4 = uStack_11c;
    uStack_a0 = uStack_118;
    uStack_9c = uStack_114;
    uStack_30 = 0xbca3d70a;
    uVar3 = pdb_1418f7bb0(uVar3,&uStack_a8);
    plVar2 = (longlong *)pdb_14008d710(0);
    if (plVar2 != (longlong *)0x0) {
      lStack_88 = *plVar2;
      lStack_80 = plVar2[1];
      *plVar2 = *plVar2 + 1;
      uStack_98 = _DAT_14303e550;
      uStack_90 = _UNK_14303e558;
      uStack_a8 = _DAT_14303e540;
      uStack_a4 = _UNK_14303e544;
      uStack_a0 = _UNK_14303e548;
      uStack_9c = _UNK_14303e54c;
      uVar3 = pdb_141911380(uVar3,&uStack_a8);
      pdb_1419135b0(uVar3,0x15,0);
      return;
    }
  }
  pdb_142dc7890(&UNK_143326860);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

