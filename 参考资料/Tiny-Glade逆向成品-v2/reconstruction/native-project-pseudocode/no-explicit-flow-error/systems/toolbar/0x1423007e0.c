// VA 0x1423007e0, PDB extent 544 bytes
// toolbar::menu::report_bug::impl$8::prepare_layout
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::menu::report_bug::impl$8::prepare_layout
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
   Extent: 544 */

undefined8 * pdb_1423007e0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  ulonglong arg1;
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong lStack_78;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  uVar1 = -(uint)((**(byte **)(param_3 + 0x18) & 1) == 0) | 0xffffffc0;
  if (*(char *)(param_2 + 0x28) == '\0') {
    uVar1 = (**(byte **)(param_3 + 0x18) & 1) * 0x20 - 0xe0;
  }
  pdb_14043b7d0(param_2);
  pdb_140a1aa60(&uStack_60);
  pdb_140cb9350(&uStack_88,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  lVar4 = lStack_50;
  uStack_48 = CONCAT44(uStack_84,uStack_88);
  uStack_68 = CONCAT44(uStack_7c,uStack_80);
  if (lStack_50 == CONCAT44(uStack_5c,uStack_60)) {
    pdb_142d7e6e0(&uStack_60);
  }
  lVar2 = CONCAT44(uStack_54,uStack_58);
  lVar3 = lVar4 * 0x20;
  *(undefined8 *)(lVar2 + lVar3) = uStack_48;
  *(undefined8 *)(lVar2 + 8 + lVar3) = uStack_68;
  *(longlong *)(lVar2 + 0x10 + lVar3) = lStack_78;
  *(undefined1 *)(lVar2 + 0x18 + lVar3) = 1;
  lStack_78 = lVar4 + 1;
  uStack_88 = uStack_60;
  uStack_84 = uStack_5c;
  uStack_80 = uStack_58;
  uStack_7c = uStack_54;
  pdb_140cb8ed0(&uStack_60,&uStack_88,uVar1);
  pdb_140cb9100(param_2,&uStack_60,*(undefined8 *)(param_3 + 0x10),&UNK_1434d7688);
  if (lStack_50 != 0) {
    pbVar5 = (byte *)CONCAT44(uStack_54,uStack_58) + 8;
    lVar4 = lStack_50;
    do {
      arg1 = *(ulonglong *)(pbVar5 + -8);
      if ((-1 < (longlong)arg1) && (arg1 != 0)) {
        pub_1406abac0(*(byte **)pbVar5,arg1,1);
      }
      pbVar5 = pbVar5 + 0x20;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (CONCAT44(uStack_5c,uStack_60) != 0) {
    pub_1406abac0((byte *)CONCAT44(uStack_54,uStack_58),CONCAT44(uStack_5c,uStack_60) << 5,8);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}

