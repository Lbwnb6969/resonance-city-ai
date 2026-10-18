// VA 0x140cf80e0, PDB extent 375 bytes
// clutter_icon_pipe::create_texture_from_packaged_blob
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_icon_pipe::create_texture_from_packaged_blob
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
   Extent: 375 */

undefined8
pdb_140cf80e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             ulonglong param_5)

{
  longlong lVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lStack_e8;
  undefined8 uStack_e0;
  ulonglong uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong lStack_98;
  undefined8 uStack_90;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_44 [20];
  
  lVar3 = 0;
  if (0x1b < param_5) {
    lVar3 = param_5 - 0x1c;
  }
  uVar2 = *(ushort *)(param_4 + 0xc + lVar3);
  if (uVar2 < 0x100) {
    lVar1 = param_4 + lVar3;
    lStack_e8 = (ulonglong)
                (*(int *)(param_4 + 4 + lVar3) << 0x10 | (uint)*(ushort *)(param_4 + lVar3)) << 0x20
    ;
    uStack_e0 = CONCAT17(1,CONCAT16(*(undefined1 *)(lVar1 + 0x10),
                                    CONCAT15((char)uVar2,
                                             CONCAT14(8,CONCAT22(1,*(undefined2 *)
                                                                    (param_4 + 8 + lVar3))))));
    uStack_d8 = CONCAT71(uStack_d8._1_7_,*(undefined1 *)(param_4 + 0x11 + lVar3));
    pdb_140e1d540(auStack_44,&lStack_e8,*(undefined2 *)(lVar1 + 0xe));
    uStack_e0 = *(int *)(lVar1 + 0x14) + lVar1 + 0x14;
    uStack_d8 = (ulonglong)*(uint *)(lVar1 + 0x18);
    lStack_e8 = 3;
    pdb_141afce80(&lStack_98,param_1,param_2,param_3,auStack_44,&lStack_e8);
    if (lStack_98 == 0xb) {
      return 0;
    }
    uStack_a8 = uStack_58;
    uStack_a4 = uStack_54;
    uStack_a0 = uStack_50;
    uStack_9c = uStack_4c;
    uStack_b8 = uStack_68;
    uStack_b4 = uStack_64;
    uStack_b0 = uStack_60;
    uStack_ac = uStack_5c;
    uStack_c8 = uStack_78;
    uStack_c4 = uStack_74;
    uStack_c0 = uStack_70;
    uStack_bc = uStack_6c;
    uStack_d0 = uStack_80;
    uStack_cc = uStack_7c;
    lStack_e8 = lStack_98;
    uStack_e0 = uStack_90;
    pdb_142df7fb0(&lStack_e8);
  }
  else {
    pdb_142df8220();
  }
  return 1;
}

