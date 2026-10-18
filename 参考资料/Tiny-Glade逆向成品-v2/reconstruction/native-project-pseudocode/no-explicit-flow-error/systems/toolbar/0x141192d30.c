// VA 0x141192d30, PDB extent 411 bytes
// toolbar::menu::report_bug::ui::closure$5
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::menu::report_bug::ui::closure$5
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
   Extent: 411 */

void pdb_141192d30(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uStack_68;
  byte *pbStack_60;
  undefined8 uStack_58;
  ulonglong *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  uStack_68 = 0;
  pbStack_60 = (byte *)0x1;
  uStack_58 = 0;
  uVar5 = 0x19;
  uVar4 = pdb_140dc6290(&UNK_14329f0b6,0x19);
  uStack_48 = 1;
  uStack_40 = 0;
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x1c);
  puVar2 = (undefined4 *)param_1[2];
  *puVar2 = uVar1;
  lVar3 = *param_1;
  puStack_50 = &uStack_68;
  pdb_141175bc0(param_2,uVar4,uVar5,&puStack_50,0,lVar3 + 0x1c);
  uVar5 = 0x17;
  uVar4 = pdb_140dc6290(&UNK_14329f0cf,0x17);
  uStack_48 = 1;
  uStack_40 = 0;
  *puVar2 = uVar1;
  puStack_50 = &uStack_68;
  pdb_141175bc0(param_2,uVar4,uVar5,&puStack_50,0,lVar3 + 0x1d);
  uVar5 = 0x1a;
  uVar4 = pdb_140dc6290(&UNK_14329f0e6,0x1a);
  uStack_48 = 1;
  uStack_40 = 0;
  *puVar2 = uVar1;
  puStack_50 = &uStack_68;
  pdb_141175bc0(param_2,uVar4,uVar5,&puStack_50,0,lVar3 + 0x1e);
  if (uStack_68 != 0) {
    pub_1406abac0(pbStack_60,uStack_68,1);
  }
  return;
}

