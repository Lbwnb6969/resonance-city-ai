// VA 0x142989aa0, PDB extent 821 bytes
// toolbar::toolbar_startup::toolbar_setup
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/toolbar_startup.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::toolbar_startup::toolbar_setup
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/toolbar_startup.rs
   Extent: 821 */

void pdb_142989aa0(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_178 [152];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [48];
  undefined1 auStack_98 [52];
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined4 uStack_54;
  longlong lStack_50;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  pdb_1411bdca0(auStack_178);
  uStack_e0 = 0;
  uStack_d8 = 8;
  uStack_d0 = 0;
  uVar2 = *(undefined4 *)((longlong)param_1 + 0x1c);
  puVar3 = (undefined4 *)param_1[2];
  *puVar3 = uVar2;
  lStack_50 = *param_1;
  pdb_14117a690();
  lVar5 = lStack_50;
  if (*(longlong *)(lStack_50 + 0x98) != 0) {
    pub_1406abac0(*(byte **)(lStack_50 + 0xa0),*(longlong *)(lStack_50 + 0x98) * 0x28,8);
  }
  pub_142e32760(lVar5,auStack_178,0xb0);
  *puVar3 = uVar2;
  lVar4 = *param_2;
  pdb_142986fc0(auStack_98,lVar5,lVar4 + 0xe8,param_3);
  *puVar3 = uVar2;
  uStack_43 = 1;
  pdb_142b57670(auStack_c8,lVar5,lVar4 + 0xe8,param_3);
  *puVar3 = uVar2;
  uStack_41 = 1;
  uStack_42 = 1;
  pdb_142b59970(&uStack_64,lVar5,param_3);
  uStack_41 = 0;
  uStack_42 = 1;
  pdb_1411b05f0(param_3,auStack_98,&UNK_143608890);
  uStack_41 = 0;
  uStack_42 = 0;
  pdb_1411b0480(param_3,auStack_c8,&UNK_1436088a8);
  plVar6 = *(longlong **)(param_3 + 8);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = *(longlong **)(param_3 + 0x10);
  }
  lVar5 = plVar6[2];
  if ((ulonglong)(*plVar6 - lVar5) < 0x1c) {
    uStack_41 = 0;
    uStack_42 = 0;
    pdb_142d7f1b0(plVar6,lVar5,0x1c,1,1);
  }
  lVar4 = plVar6[1];
  *(code **)(lVar4 + lVar5) = pdb_1411aeeb0;
  puVar1 = (undefined8 *)(lVar4 + 8 + lVar5);
  *puVar1 = uStack_64;
  puVar1[1] = uStack_5c;
  *(undefined4 *)(lVar4 + 0x18 + lVar5) = uStack_54;
  plVar6[2] = lVar5 + 0x1c;
  return;
}

