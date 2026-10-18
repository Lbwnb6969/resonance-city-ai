// VA 0x140b8c170, PDB extent 644 bytes
// country_core::systems::wall::shapes::circle::ui_edit_circle::show_full_circle_signifier
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/circle/ui_edit_circle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::shapes::circle::ui_edit_circle::show_full_circle_signifier
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/circle/ui_edit_circle.rs
   Extent: 644 */

void pdb_140b8c170(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulonglong uStack_d8;
  byte *pbStack_d0;
  ulonglong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 *puStack_a8;
  code *pcStack_a0;
  undefined4 *puStack_98;
  code *pcStack_90;
  undefined4 *puStack_88;
  code *pcStack_80;
  byte *pbStack_78;
  undefined8 uStack_70;
  
  uVar3 = param_6;
  uVar2 = param_5;
  uStack_70 = 0xfffffffffffffffe;
  uStack_b8 = (byte *)&uStack_c0;
  uStack_b0 = pdb_140b8eda0;
  pcStack_a0 = pdb_140b8ecf0;
  puStack_98 = &param_5;
  pcStack_90 = pdb_140f70fc0;
  puStack_88 = &param_6;
  pcStack_80 = pdb_140f70fc0;
  uStack_c0 = param_3;
  puStack_a8 = param_4;
  pdb_140f60760(&uStack_d8,&UNK_14305dd20,&uStack_b8);
  uStack_b8._0_4_ = *param_4;
  uStack_b8._4_4_ = param_4[1];
  uStack_b0._0_4_ = param_4[2];
  uStack_b0._4_4_ = param_4[3];
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(0x28,8);
  if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x28);
  }
  pbVar4[0] = 1;
  pbVar4[1] = 0;
  pbVar4[2] = 0;
  pbVar4[3] = 0;
  pbVar4[4] = 0;
  pbVar4[5] = 0;
  pbVar4[6] = 0;
  pbVar4[7] = 0;
  pbVar4[8] = 1;
  pbVar4[9] = 0;
  pbVar4[10] = 0;
  pbVar4[0xb] = 0;
  pbVar4[0xc] = 0;
  pbVar4[0xd] = 0;
  pbVar4[0xe] = 0;
  pbVar4[0xf] = 0;
  *(undefined4 *)(pbVar4 + 0x10) = (undefined4)uStack_b8;
  *(undefined4 *)(pbVar4 + 0x14) = uStack_b8._4_4_;
  *(undefined4 *)(pbVar4 + 0x18) = (undefined4)uStack_b0;
  *(undefined4 *)(pbVar4 + 0x1c) = uStack_b0._4_4_;
  *(undefined4 *)(pbVar4 + 0x20) = uVar2;
  *(undefined4 *)(pbVar4 + 0x24) = uVar3;
  uStack_b0 = (code *)&UNK_14305dd38;
  uStack_b8 = pbVar4;
  if ((longlong)uStack_c8 < 0) {
    uVar6 = 0;
    pbStack_78 = pbVar4;
LAB_140b8c27c:
    pdb_142dc7e2a(uVar6,uStack_c8);
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (uStack_c8 == 0) {
    pbVar5 = (byte *)0x1;
  }
  else {
    pbStack_78 = pbVar4;
    pdb_14007ee60();
    uVar6 = 1;
    pbVar5 = pub_1406abab0(uStack_c8,1);
    if (pbVar5 == (byte *)0x0) goto LAB_140b8c27c;
    pub_142e32760(pbVar5,pbStack_d0,uStack_c8);
    pbVar4 = pbStack_78;
  }
  uStack_b0 = (code *)((ulonglong)uStack_b0 & 0xffffffffffffff00);
  puStack_a8 = (undefined4 *)uStack_c8;
  puStack_98 = (undefined4 *)uStack_c8;
  puStack_88 = (undefined4 *)&UNK_14305dd38;
  uStack_b8 = (byte *)param_2;
  pcStack_a0 = (code *)pbVar5;
  pcStack_90 = (code *)pbVar4;
  pdb_141a88350(param_1,&uStack_b8);
  if (uStack_d8 != 0) {
    pub_1406abac0(pbStack_d0,uStack_d8,1);
  }
  return;
}

