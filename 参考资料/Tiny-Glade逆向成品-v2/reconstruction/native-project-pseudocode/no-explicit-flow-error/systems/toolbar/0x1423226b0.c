// VA 0x1423226b0, PDB extent 500 bytes
// toolbar::menu::load::show_contextual_buttons
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/load.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::load::show_contextual_buttons
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/load.rs
   Extent: 500 */

void pdb_1423226b0(longlong *param_1,float param_2,float param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7,undefined1 param_8,
                  undefined1 param_9,undefined1 param_10,undefined8 param_11)

{
  float *pfVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  float fVar7;
  undefined1 uStack_db;
  undefined1 uStack_da;
  undefined1 uStack_d9;
  undefined8 uStack_d8;
  longlong *plStack_d0;
  undefined1 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  uStack_db = param_8;
  uStack_da = param_9;
  uStack_d9 = param_10;
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  param_1 = (longlong *)*param_1;
  puStack_80 = &UNK_1434d9cf9;
  uStack_78 = 6;
  uStack_d8 = param_4;
  uVar3 = pdb_140bbbcb0(&puStack_80);
  uVar3 = uVar3 ^ 0xb1695320004fb443;
  uVar6 = uVar3;
  lVar4 = pdb_14072c2d0(param_1);
  *(undefined1 *)(lVar4 + 0x5e) = 0;
  if ((uVar6 & 1) == 0) {
    param_2 = param_2 + _DAT_1434d9af0;
    param_3 = param_3 + _UNK_1434d9af4;
    lVar4 = param_1[2];
    if (lVar4 == *param_1) {
      pdb_142d7f080(param_1);
    }
    lVar2 = param_1[1];
    lVar5 = lVar4 * 0x38;
    fVar7 = (float)_DAT_1430151a0;
    uVar6 = (ulonglong)_DAT_1430151a0 >> 0x20;
    *(undefined4 *)(lVar2 + lVar5) = 4;
    pfVar1 = (float *)(lVar2 + 4 + lVar5);
    *pfVar1 = param_2;
    pfVar1[1] = param_3;
    pfVar1[2] = fVar7;
    pfVar1[3] = (float)uVar6;
    *(undefined4 *)(lVar2 + 0x14 + lVar5) = 1;
    *(undefined8 *)(lVar2 + 0x18 + lVar5) = _DAT_1434d9b00;
    *(ulonglong *)(lVar2 + 0x30 + lVar5) = uVar3;
    param_1[2] = lVar4 + 1;
  }
  puStack_c0 = (undefined8 *)0x0;
  plStack_d0 = param_1;
  puStack_c8 = (undefined1 *)uVar3;
  pdb_141174160(&puStack_80,&plStack_d0,&UNK_1434d9cff,0x18,0);
  lStack_98 = param_7 + 0x79;
  lStack_90 = param_7 + 0x8a;
  lStack_88 = param_7 + 0x10;
  plStack_d0 = (longlong *)&uStack_db;
  puStack_c8 = &uStack_d9;
  puStack_c0 = &uStack_d8;
  uStack_b8 = param_5;
  uStack_b0 = param_6;
  uStack_a8 = param_11;
  puStack_a0 = &uStack_da;
  pdb_14118d410(&puStack_80,&UNK_1434d9d17,4,&plStack_d0);
  return;
}

