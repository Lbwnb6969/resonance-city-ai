// VA 0x140cf7690, PDB extent 476 bytes
// clutter_icon_pipe::read_f32x2_attribute
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: clutter_icon_pipe::read_f32x2_attribute
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
   Extent: 476 */

void pdb_140cf7690(undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong alStack_40 [3];
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  puStack_b8 = &UNK_143087b98;
  uStack_b0 = 9;
  pcVar2 = (char *)pdb_141c0c220(&UNK_143087b98,9,param_2);
  pcVar1 = _DAT_143cad928;
  if (pcVar2 == (char *)0x0) {
    pcVar2 = _DAT_143cad928;
  }
  pcVar2 = (char *)pdb_141c0c220(&UNK_1430885e9,6,pcVar2);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = pcVar1;
  }
  if (*pcVar2 == '\x04') {
    uStack_70 = *(undefined ***)(pcVar2 + 0x10);
    uStack_68 = (code *)(*(longlong *)(pcVar2 + 0x18) * 0x20 + (longlong)uStack_70);
    alStack_40[0] = 0;
    uStack_60 = alStack_40;
    pdb_141d60120(&uStack_a8,&uStack_70);
    if (alStack_40[0] == 0) {
      param_1[2] = CONCAT44(uStack_94,uStack_98);
      *param_1 = CONCAT44(uStack_a4,uStack_a8);
      param_1[1] = CONCAT44(uStack_9c,uStack_a0);
    }
    else {
      param_1[1] = alStack_40[0];
      *param_1 = 0x8000000000000000;
      if (CONCAT44(uStack_a4,uStack_a8) != 0) {
        pub_1406abac0((byte *)CONCAT44(uStack_9c,uStack_a0),CONCAT44(uStack_a4,uStack_a8) << 3,4);
      }
    }
  }
  else {
    uStack_70 = &puStack_b8;
    uStack_68 = pdb_1402ed400;
    pdb_140f60760(alStack_40,&UNK_1433d3ea7,&uStack_70);
    uStack_21 = 1;
    pdb_140f3f5b0(&uStack_70);
    uStack_88 = uStack_50;
    uStack_84 = uStack_4c;
    uStack_80 = uStack_48;
    uStack_7c = uStack_44;
    uStack_98 = (undefined4)uStack_60;
    uStack_94 = uStack_60._4_4_;
    uStack_90 = uStack_58;
    uStack_8c = uStack_54;
    uStack_a8 = (undefined4)uStack_70;
    uStack_a4 = uStack_70._4_4_;
    uStack_a0 = (undefined4)uStack_68;
    uStack_9c = uStack_68._4_4_;
    uStack_21 = 0;
    uVar3 = pdb_142df7230(alStack_40,&uStack_a8);
    param_1[1] = uVar3;
    *param_1 = 0x8000000000000000;
  }
  return;
}

