// VA 0x14198b030, PDB extent 692 bytes
// country_core::systems::garden::record_garden_history::record_garden_history
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/garden/record_garden_history.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::garden::record_garden_history::record_garden_history
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/garden/record_garden_history.rs
   Extent: 692 */

void pdb_14198b030(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  byte *arg1;
  byte *pbVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  byte *pbStack_80;
  undefined4 uStack_74;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  puVar4 = (ulonglong *)*param_2;
  lVar5 = param_2[1];
  uVar6 = *puVar4;
  uVar14 = 0;
  uVar11 = uVar6 - *(ulonglong *)(lVar5 + 0x18);
  if (uVar6 < *(ulonglong *)(lVar5 + 0x18)) {
    uVar11 = uVar14;
  }
  uVar13 = uVar6 - *(ulonglong *)(lVar5 + 0x38);
  if (uVar6 < *(ulonglong *)(lVar5 + 0x38)) {
    uVar13 = uVar14;
  }
  uVar6 = *(ulonglong *)(lVar5 + 0x30);
  uVar15 = uVar6 - uVar13;
  if (uVar6 < uVar13) {
    uVar15 = uVar14;
  }
  uVar7 = *(ulonglong *)(lVar5 + 0x10);
  uVar12 = uVar7 - uVar11;
  if (uVar7 < uVar11) {
    uVar12 = uVar14;
  }
  uVar14 = *(ulonglong *)(lVar5 + 0x40);
  *puVar4 = uVar14 - (uVar12 + uVar15);
  if (uVar7 >= uVar11 && uVar7 - uVar11 != 0 || uVar6 >= uVar13 && uVar6 - uVar13 != 0) {
    *puVar4 = uVar14;
    lVar5 = *param_1;
    uStack_74 = *(undefined4 *)(lVar5 + 0x1698);
    uVar1 = *(undefined4 *)(lVar5 + 0x169c);
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    lVar8 = *(longlong *)(lVar5 + 0x1678);
    pbVar10 = *(byte **)(lVar5 + 0x1680);
    lVar9 = *(longlong *)(lVar5 + 0x1688);
    uVar2 = *(undefined4 *)(lVar5 + 0x1690);
    uVar3 = *(undefined1 *)(lVar5 + 0x1694);
    *(undefined8 *)(lVar5 + 0x1678) = 0;
    *(undefined8 *)(lVar5 + 0x1680) = 4;
    *(undefined8 *)(lVar5 + 0x1688) = 0;
    *(undefined4 *)(lVar5 + 0x1690) = 0;
    *(undefined1 *)(lVar5 + 0x1694) = 0;
    *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1 + 0x3c);
    lVar5 = param_1[4];
    uVar6 = lVar9 * 0xc;
    uVar11 = uVar6;
    arg1 = (byte *)pdb_140f606e0(4);
    pbStack_80 = arg1;
    if (uVar11 != 0) {
      pdb_14007ee60();
      pbStack_80 = pub_1406abab0(uVar11,(ulonglong)arg1);
    }
    if (pbStack_80 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(arg1,uVar11);
    }
    pbStack_80[0] = 1;
    pbStack_80[1] = 0;
    pbStack_80[2] = 0;
    pbStack_80[3] = 0;
    pbStack_80[4] = 0;
    pbStack_80[5] = 0;
    pbStack_80[6] = 0;
    pbStack_80[7] = 0;
    pbStack_80[8] = 1;
    pbStack_80[9] = 0;
    pbStack_80[10] = 0;
    pbStack_80[0xb] = 0;
    pbStack_80[0xc] = 0;
    pbStack_80[0xd] = 0;
    pbStack_80[0xe] = 0;
    pbStack_80[0xf] = 0;
    pub_142e32760(pbStack_80 + 0x10,pbVar10,uVar6);
    if (lVar8 != 0) {
      pub_1406abac0(pbVar10,lVar8 * 0xc,4);
    }
    uStack_b0 = 1;
    uStack_a8 = (byte *)0x1;
    uStack_a0 = uStack_74;
    uStack_98 = pbStack_80;
    uStack_84 = CONCAT31(uStack_84._1_3_,uVar3);
    uStack_9c = uVar1;
    uStack_90 = lVar9;
    uStack_88 = uVar2;
    pdb_14007ee60();
    pbVar10 = pub_1406abab0(0x30,8);
    if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x30);
    }
    *(undefined4 *)(pbVar10 + 0x20) = (undefined4)uStack_90;
    *(undefined4 *)(pbVar10 + 0x24) = uStack_90._4_4_;
    *(undefined4 *)(pbVar10 + 0x28) = uStack_88;
    *(undefined4 *)(pbVar10 + 0x2c) = uStack_84;
    *(undefined4 *)(pbVar10 + 0x10) = uStack_a0;
    *(undefined4 *)(pbVar10 + 0x14) = uStack_9c;
    *(undefined4 *)(pbVar10 + 0x18) = (undefined4)uStack_98;
    *(undefined4 *)(pbVar10 + 0x1c) = uStack_98._4_4_;
    *(undefined4 *)pbVar10 = (undefined4)uStack_b0;
    *(undefined4 *)(pbVar10 + 4) = uStack_b0._4_4_;
    *(undefined4 *)(pbVar10 + 8) = (undefined4)uStack_a8;
    *(undefined4 *)(pbVar10 + 0xc) = uStack_a8._4_4_;
    uStack_b0 = 6;
    uStack_a8 = pbVar10;
    pdb_140ae5180(lVar5,&uStack_b0,&UNK_143035080);
  }
  return;
}

