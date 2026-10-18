// VA 0x140a882e0, PDB extent 895 bytes
// country_core::utils::debug_viz::DebugRectangle2d::show
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::utils::debug_viz::DebugRectangle2d::show
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
   Extent: 895 */

void pdb_140a882e0(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 uVar6;
  ulonglong uStack_100;
  byte *pbStack_f8;
  ulonglong uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  byte *pbStack_d0;
  ulonglong uStack_c8;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 *puStack_a8;
  code *pcStack_a0;
  byte *pbStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  pdb_140df3ac0(&uStack_b8,param_1 + 5,param_1[0xb]);
  puVar3 = puStack_a8;
  uStack_78 = uStack_b8;
  uStack_70 = uStack_b0;
  if (pcStack_a0 != (code *)0x0) {
    pub_1406abac0(pbStack_98,(longlong)pcStack_a0 << 2,4);
  }
  uVar1 = param_1[4];
  uStack_e8 = *param_1;
  uStack_e4 = param_1[1];
  uStack_e0 = param_1[2];
  uStack_dc = param_1[3];
  uStack_b0 = pdb_140f705d0;
  pcStack_a0 = pdb_140a8fac0;
  pbStack_98 = (byte *)&uStack_e8;
  pcStack_90 = pdb_140a8fba0;
  uStack_61 = 0;
  uStack_b8 = (byte *)(param_1 + 0xb);
  puStack_a8 = param_1 + 5;
  pdb_140f60760(&uStack_100,&UNK_143043ac3,&uStack_b8);
  uStack_b8._0_4_ = uStack_e8;
  uStack_b8._4_4_ = uStack_e4;
  uStack_b0._0_4_ = uStack_e0;
  uStack_b0._4_4_ = uStack_dc;
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(0x48,8);
  uStack_c8 = uStack_100;
  pbStack_c0 = pbStack_f8;
  if (pbVar4 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x48);
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
  *(undefined8 *)(pbVar4 + 0x10) = uStack_78;
  *(undefined8 *)(pbVar4 + 0x18) = uStack_70;
  *(undefined4 **)(pbVar4 + 0x20) = puVar3;
  *(undefined4 *)(pbVar4 + 0x28) = (undefined4)uStack_b8;
  *(undefined4 *)(pbVar4 + 0x2c) = uStack_b8._4_4_;
  *(undefined4 *)(pbVar4 + 0x30) = (undefined4)uStack_b0;
  *(undefined4 *)(pbVar4 + 0x34) = uStack_b0._4_4_;
  *(undefined4 **)(pbVar4 + 0x38) = puVar3;
  *(undefined4 *)(pbVar4 + 0x40) = uVar1;
  uStack_b0 = (code *)&UNK_143043ac8;
  uStack_b8 = pbVar4;
  if ((longlong)uStack_f0 < 0) {
    uVar6 = 0;
LAB_140a88435:
    pbStack_d0 = pbVar4;
    pdb_142dc7e2a(uVar6,uStack_f0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (uStack_f0 == 0) {
    pbVar5 = (byte *)0x1;
  }
  else {
    pdb_14007ee60();
    uVar6 = 1;
    pbVar5 = pub_1406abab0(uStack_f0,1);
    if (pbVar5 == (byte *)0x0) goto LAB_140a88435;
    pub_142e32760(pbVar5,pbStack_f8,uStack_f0);
  }
  uStack_b0 = (code *)CONCAT71(uStack_b0._1_7_,2);
  puStack_a8 = (undefined4 *)uStack_f0;
  pbStack_98 = (byte *)uStack_f0;
  puStack_88 = &UNK_143043ac8;
  pcStack_a0 = (code *)pbVar5;
  pcStack_90 = (code *)pbVar4;
  pdb_141a88350(param_2,&uStack_b8);
  if (uStack_c8 != 0) {
    pub_1406abac0(pbStack_c0,uStack_c8,1);
  }
  return;
}

