// VA 0x140c00770, PDB extent 870 bytes
// country_core::systems::backend::input::input_replay_for_trailers::do_input_replay_ui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/input/input_replay_for_trailers.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::backend::input::input_replay_for_trailers::do_input_replay_ui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/input/input_replay_for_trailers.rs
   Extent: 870 */

void pdb_140c00770(undefined8 param_1,longlong *param_2,longlong param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined8 uStack_138;
  undefined8 uStack_130;
  longlong *aplStack_128 [10];
  ulonglong uStack_d8;
  byte *pbStack_d0;
  longlong *plStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *plStack_98;
  undefined4 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined4 uStack_73;
  undefined3 uStack_6f;
  undefined8 uStack_68;
  undefined1 uStack_60;
  ulonglong *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
  puVar3 = (undefined4 *)param_2[2];
  *puVar3 = uVar2;
  lVar4 = *param_2;
  pcVar1 = (char *)(lVar4 + 0xcc);
  pdb_140572d40(&uStack_d8,&UNK_143067e9f,0x16);
  uStack_60 = 0;
  uStack_68 = pcVar1;
  pdb_140d10190(&uStack_138,&uStack_d8,param_1);
  LOCK();
  *aplStack_128[0] = *aplStack_128[0] + -1;
  UNLOCK();
  if (*aplStack_128[0] == 0) {
    pdb_140d71bf0(aplStack_128);
  }
  if (*pcVar1 == '\x01') {
    if (*(longlong *)(param_3 + 0x40) == -0x7ffffffffffffffc) {
      uStack_138 = &puStack_58;
      puStack_58 = *(ulonglong **)(param_3 + 0x38);
      uStack_130 = pdb_140f72a40;
      pdb_140f60760(&uStack_d8,&UNK_143067eb5,&uStack_138);
    }
    else {
      pdb_14007ee60();
      pbStack_d0 = pub_1406abab0(1,1);
      if (pbStack_d0 == (byte *)0x0) {
        pdb_142dc7e2a(1,1);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *pbStack_d0 = 0x2d;
      uStack_d8 = 1;
      plStack_c8 = (longlong *)0x1;
    }
    pcStack_50 = pdb_140001020;
    puStack_58 = &uStack_d8;
    pdb_140f60760(&uStack_138,&UNK_143067eb7,&puStack_58);
    if (uStack_d8 != 0) {
      pub_1406abac0(pbStack_d0,uStack_d8,1);
    }
    pcVar1 = uStack_68;
    plStack_98 = aplStack_128[0];
    uStack_a8 = (undefined4)uStack_138;
    uStack_a4 = uStack_138._4_4_;
    uStack_a0 = (undefined4)uStack_130;
    uStack_9c = uStack_130._4_4_;
    uStack_78 = 0;
    uStack_73 = 0;
    uStack_6f = 0;
    uStack_d8 = 3;
    uStack_c0 = 6;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_68 = (char *)CONCAT53(uStack_68._3_5_,0x20200);
    uVar6 = uStack_68;
    uStack_68._6_2_ = SUB82(pcVar1,6);
    uStack_68._0_6_ = CONCAT15(2,(int5)uVar6);
    pdb_140d7b910(&uStack_138,&uStack_d8,param_1);
    LOCK();
    *aplStack_128[0] = *aplStack_128[0] + -1;
    UNLOCK();
    if (*aplStack_128[0] == 0) {
      pdb_140d71bf0(aplStack_128);
    }
    pdb_140ca1fb0(&uStack_d8,&UNK_143067ece,0x1a);
    pdb_140d7b910(&uStack_138,&uStack_d8,param_1);
    LOCK();
    *aplStack_128[0] = *aplStack_128[0] + -1;
    UNLOCK();
    if (*aplStack_128[0] == 0) {
      pdb_140d71bf0(aplStack_128);
    }
    pdb_140ca1fb0(&uStack_d8,&UNK_143067ee8,0xc);
    pdb_140d7b910(&uStack_138,&uStack_d8,param_1);
    LOCK();
    *aplStack_128[0] = *aplStack_128[0] + -1;
    UNLOCK();
    if (*aplStack_128[0] == 0) {
      pdb_140d71bf0(aplStack_128);
    }
    *puVar3 = uVar2;
    pdb_140572d40(&uStack_d8,&UNK_143067ef4,0xc);
    uStack_60 = 0;
    uStack_68 = (char *)(lVar4 + 0xcb);
    pdb_140d10190(&uStack_138,&uStack_d8,param_1);
    LOCK();
    *aplStack_128[0] = *aplStack_128[0] + -1;
    UNLOCK();
    if (*aplStack_128[0] == 0) {
      pdb_140d71bf0(aplStack_128);
    }
    pdb_14007ee60();
    pbVar7 = pub_1406abab0(0x10,8);
    if (pbVar7 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x10);
    }
    *(longlong *)pbVar7 = param_3;
    *(longlong *)(pbVar7 + 8) = param_3 + 0x40;
    pdb_140b33930(&uStack_d8,param_1,0,pbVar7,&UNK_143068168);
    LOCK();
    *plStack_c8 = *plStack_c8 + -1;
    UNLOCK();
    if (*plStack_c8 == 0) {
      pdb_140d71bf0(&plStack_c8);
    }
  }
  return;
}

