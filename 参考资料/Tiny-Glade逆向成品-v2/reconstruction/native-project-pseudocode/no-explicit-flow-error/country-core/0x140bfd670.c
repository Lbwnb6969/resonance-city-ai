// VA 0x140bfd670, PDB extent 534 bytes
// country_core::systems::wall::shapes::circle::signifiers::edit_arrow::signifier_edit_circle_arrow::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/circle/signifiers/edit_arrow.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::circle::signifiers::edit_arrow::signifier_edit_circle_arrow::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/circle/signifiers/edit_arrow.rs
   Extent: 534 */

undefined8 *
pdb_140bfd670(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 auStack_f0 [2];
  longlong *plStack_e0;
  longlong *plStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  byte *pbStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_60;
  ulonglong uStack_5c;
  undefined8 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined1 uStack_42;
  byte *pbStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_38 = pub_1406abab0(8,8);
  if (pbStack_38 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  pdb_14007ee60();
  pbStack_b8 = pub_1406abab0(10,1);
  if (pbStack_b8 != (byte *)0x0) {
    pbStack_b8[0] = 0x66;
    pbStack_b8[1] = 0x6c;
    pbStack_b8[2] = 0x61;
    pbStack_b8[3] = 0x74;
    pbStack_b8[4] = 0x5f;
    pbStack_b8[5] = 0x61;
    pbStack_b8[6] = 0x72;
    pbStack_b8[7] = 0x72;
    pbStack_b8[8] = 0x6f;
    pbStack_b8[9] = 0x77;
    uStack_4c = *(undefined4 *)(param_2 + 3);
    uStack_54 = param_2[2];
    uStack_98 = *param_2;
    uStack_90 = param_2[1];
    uStack_c8 = 0x8000000000000000;
    uStack_c0 = 10;
    uStack_b0 = 10;
    uStack_88 = 0x4000000000000001;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 2;
    uStack_68 = 1;
    uStack_60 = 0x100;
    uStack_5c = (ulonglong)_DAT_142e36f28;
    uStack_48 = 0x3f800000;
    uStack_44 = 0;
    uStack_42 = 0;
    pdb_1409bba50(auStack_f0,&uStack_c8,param_3,param_4,param_5);
    if (plStack_e0 == (longlong *)0x0) {
      plStack_e0 = plStack_d8;
    }
    lVar1 = plStack_e0[2];
    if ((ulonglong)(*plStack_e0 - lVar1) < 0x18) {
      pdb_142d7f1b0(plStack_e0,lVar1,0x18,1,1);
    }
    lVar2 = plStack_e0[1];
    *(code **)(lVar2 + lVar1) = pdb_14160b9d0;
    *(undefined8 *)(lVar2 + 8 + lVar1) = auStack_f0[0];
    *(undefined1 *)(lVar2 + 0x10 + lVar1) = 0;
    plStack_e0[2] = lVar1 + 0x18;
    *(undefined8 *)pbStack_38 = auStack_f0[0];
    *param_1 = 1;
    param_1[1] = pbStack_38;
    param_1[2] = 1;
    return param_1;
  }
  pdb_142dc7e2a(1,10);
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

