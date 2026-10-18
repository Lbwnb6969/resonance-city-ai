// VA 0x140a882d0, PDB extent 5 bytes
// country_core::utils::debug_viz::DebugSphere::show_for
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::utils::debug_viz::DebugSphere::show_for
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/debug_viz.rs
   Extent: 5 */

void pdb_140a882d0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  uint *puVar6;
  byte *pbVar7;
  undefined8 uVar8;
  ulonglong uStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  ulonglong uStack_c0;
  byte *pbStack_b8;
  ulonglong uStack_b0;
  uint *puStack_a8;
  undefined *puStack_a0;
  uint *puStack_98;
  undefined8 uStack_90;
  uint uStack_88;
  uint *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  uVar8 = *(undefined8 *)(&UNK_14304aa28 + (ulonglong)*param_1 * 8);
  uVar3 = *(undefined8 *)(&UNK_14304aa58 + (ulonglong)*param_1 * 8);
  uStack_88 = param_1[7];
  uStack_90 = *(undefined8 *)(param_1 + 5);
  uVar1 = param_1[4];
  uVar2 = param_1[8];
  pcStack_78 = pdb_140ab79f0;
  puStack_80 = param_1;
  pdb_140f60760(&uStack_d0,&UNK_143049fac,&puStack_80);
  uVar5 = param_1[9];
  pdb_14007ee60();
  puVar6 = (uint *)pub_1406abab0(0x38,8);
  if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x38);
  }
  puVar6[0] = 1;
  puVar6[1] = 0;
  puVar6[2] = 1;
  puVar6[3] = 0;
  *(undefined8 *)(puVar6 + 4) = uVar3;
  *(undefined8 *)(puVar6 + 6) = uVar8;
  *(undefined8 *)(puVar6 + 8) = uStack_90;
  puVar6[10] = uStack_88;
  puVar6[0xb] = uVar1;
  puVar6[0xc] = uVar2;
  *(byte *)(puVar6 + 0xd) = (byte)uVar5;
  pcStack_78 = (code *)&UNK_143049fe0;
  puStack_80 = puVar6;
  if (-1 < (longlong)uStack_c0) {
    if (uStack_c0 == 0) {
      pbVar7 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      uVar8 = 1;
      pbVar7 = pub_1406abab0(uStack_c0,1);
      if (pbVar7 == (byte *)0x0) goto LAB_140ab0b41;
      pub_142e32760(pbVar7,(byte *)CONCAT71(uStack_c7,uStack_c8),uStack_c0);
    }
    if (uStack_d0 != 0) {
      pub_1406abac0((byte *)CONCAT71(uStack_c7,uStack_c8),uStack_d0,1);
    }
    uStack_d0 = param_2[1];
    uStack_c8 = *(undefined1 *)(param_2 + 2);
    uStack_b0 = uStack_c0;
    puStack_a0 = &UNK_143049fe0;
    pbStack_b8 = pbVar7;
    puStack_a8 = puVar6;
    pdb_141a88350(*param_2,&uStack_d0);
    return;
  }
  uVar8 = 0;
LAB_140ab0b41:
  puStack_98 = puVar6;
  pdb_142dc7e2a(uVar8,uStack_c0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

