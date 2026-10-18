// VA 0x140a08550, PDB extent 642 bytes
// country_core::systems::ui::debug_visualize_volumes::debug_visualize_volumes::closure$3
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/debug_visualize_volumes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui::debug_visualize_volumes::debug_visualize_volumes::closure$3
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/debug_visualize_volumes.rs
   Extent: 642 */

undefined8 *
pdb_140a08550(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  ulonglong arg0;
  undefined8 uVar6;
  undefined8 auStack_110 [2];
  longlong *plStack_100;
  longlong *plStack_f8;
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  byte *pbStack_d8;
  ulonglong uStack_d0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_88;
  undefined2 uStack_80;
  ulonglong uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined2 uStack_64;
  undefined1 uStack_62;
  undefined8 uStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_50 = pub_1406abab0(8,8);
  if (pbStack_50 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  arg0 = uVar1 * 0xc;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
    uVar6 = 0;
LAB_140a085c2:
    pdb_142dc7e2a(uVar6,arg0);
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  uVar2 = *(undefined8 *)(param_2 + 8);
  uStack_58 = param_4;
  if (arg0 == 0) {
    pbStack_d8 = (byte *)0x4;
    uStack_e0 = 0;
  }
  else {
    pdb_14007ee60();
    uVar6 = 4;
    pbStack_d8 = pub_1406abab0(arg0,4);
    uStack_e0 = uVar1;
    if (pbStack_d8 == (byte *)0x0) goto LAB_140a085c2;
  }
  if (uVar1 != 0) {
    pub_142e32760(pbStack_d8,uVar2,arg0);
  }
  uStack_6c = 0x3f80000000000000;
  uStack_74 = 0;
  uStack_e8 = 0x8000000000000002;
  uStack_b8 = _DAT_142e4e650;
  uStack_b0 = _UNK_142e4e658;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 2;
  uStack_88 = 1;
  uStack_80 = 0x100;
  uStack_7c = (ulonglong)_DAT_142e36f28;
  uStack_64 = 0x100;
  uStack_62 = 0;
  uStack_d0 = uVar1;
  pdb_1409bba50(auStack_110,&uStack_e8,param_3,uStack_58,param_5);
  if (plStack_100 == (longlong *)0x0) {
    plStack_100 = plStack_f8;
  }
  lVar3 = plStack_100[2];
  if ((ulonglong)(*plStack_100 - lVar3) < 0x18) {
    pdb_142d7f1b0(plStack_100,lVar3,0x18,1,1);
  }
  lVar4 = plStack_100[1];
  *(code **)(lVar4 + lVar3) = pdb_141608f40;
  *(undefined8 *)(lVar4 + 8 + lVar3) = auStack_110[0];
  *(undefined1 *)(lVar4 + 0x10 + lVar3) = 0;
  plStack_100[2] = lVar3 + 0x18;
  *(undefined8 *)pbStack_50 = auStack_110[0];
  *param_1 = 1;
  param_1[1] = pbStack_50;
  param_1[2] = 1;
  return param_1;
}

