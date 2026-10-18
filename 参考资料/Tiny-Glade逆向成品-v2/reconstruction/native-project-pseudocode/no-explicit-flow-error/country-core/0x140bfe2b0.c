// VA 0x140bfe2b0, PDB extent 590 bytes
// country_core::systems::wall::shapes::circle::signifiers::edit_line::signifier_edit_circle_line::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/circle/signifiers/edit_line.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::circle::signifiers::edit_line::signifier_edit_circle_line::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/circle/signifiers/edit_line.rs
   Extent: 590 */

undefined8 *
pdb_140bfe2b0(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 auStack_108 [6];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined2 uStack_a0;
  undefined8 uStack_9c;
  undefined8 uStack_94;
  undefined8 uStack_8c;
  undefined2 uStack_84;
  undefined1 uStack_82;
  undefined8 auStack_70 [2];
  longlong *plStack_60;
  longlong *plStack_58;
  byte *pbStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_48 = pub_1406abab0(8,8);
  if (pbStack_48 != (byte *)0x0) {
    uStack_8c = 0x3f80000000000000;
    uStack_94 = 0;
    auStack_108[0] = 0x8000000000000001;
    uStack_d8 = _DAT_142e4e650;
    uStack_d0 = _UNK_142e4e658;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0x4040000000000000;
    uStack_a8 = 1;
    uStack_a0 = 0x101;
    uStack_9c = _DAT_14305b610;
    uStack_84 = 0;
    uStack_82 = 0;
    pdb_1409bba50(auStack_70,auStack_108,param_3,param_4,param_5);
    plVar8 = plStack_60;
    if (plStack_60 == (longlong *)0x0) {
      plVar8 = plStack_58;
    }
    uVar2 = *(undefined8 *)(param_2 + 4);
    lVar3 = plVar8[2];
    if ((ulonglong)(*plVar8 - lVar3) < 0x40) {
      pdb_142d7f1b0(plVar8,lVar3,0x40,1,1);
    }
    lVar4 = plVar8[1];
    *(code **)(lVar4 + lVar3) = pdb_141609f50;
    *(undefined8 *)(lVar4 + 8 + lVar3) = auStack_70[0];
    uVar5 = param_2[1];
    uVar6 = param_2[2];
    uVar7 = param_2[3];
    puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar3);
    *puVar1 = *param_2;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    *(undefined8 *)(lVar4 + 0x20 + lVar3) = uVar2;
    *(undefined8 *)(lVar4 + 0x28 + lVar3) = 0;
    *(undefined4 *)(lVar4 + 0x30 + lVar3) = 0;
    *(undefined1 *)(lVar4 + 0x38 + lVar3) = 0;
    lVar4 = lVar3 + 0x40;
    plVar8[2] = lVar4;
    if ((ulonglong)(*plVar8 - lVar4) < 0x18) {
      pdb_142d7f1b0(plVar8,lVar4,0x18,1,1);
    }
    lVar4 = plVar8[1];
    *(code **)(lVar4 + 0x40 + lVar3) = pdb_14160b9d0;
    *(undefined8 *)(lVar4 + 0x48 + lVar3) = auStack_70[0];
    *(undefined1 *)(lVar4 + 0x50 + lVar3) = 0;
    plVar8[2] = lVar3 + 0x58;
    *(undefined8 *)pbStack_48 = auStack_70[0];
    *param_1 = 1;
    param_1[1] = pbStack_48;
    param_1[2] = 1;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,8);
}

