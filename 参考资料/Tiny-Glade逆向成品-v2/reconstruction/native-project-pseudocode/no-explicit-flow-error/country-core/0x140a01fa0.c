// VA 0x140a01fa0, PDB extent 596 bytes
// country_core::systems::world_raster::record_raster_history
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::world_raster::record_raster_history
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
   Extent: 596 */

void pdb_140a01fa0(longlong *param_1,byte param_2,code *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte *arg1;
  byte *pbVar9;
  ulonglong arg0;
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
  lVar8 = (ulonglong)param_2 * 0x470;
  lVar4 = *param_1;
  uStack_74 = *(undefined4 *)(lVar4 + 0x68 + lVar8);
  uVar1 = *(undefined4 *)(lVar4 + 0x6c + lVar8);
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar5 = *(longlong *)(lVar4 + 0x48 + lVar8);
  pbVar9 = *(byte **)(lVar4 + 0x50 + lVar8);
  lVar6 = *(longlong *)(lVar4 + 0x58 + lVar8);
  uVar2 = *(undefined4 *)(lVar4 + 0x60 + lVar8);
  uVar3 = *(undefined1 *)(lVar4 + 100 + lVar8);
  *(undefined8 *)(lVar4 + 0x48 + lVar8) = 0;
  *(undefined8 *)(lVar4 + 0x50 + lVar8) = 4;
  *(undefined8 *)(lVar4 + 0x58 + lVar8) = 0;
  *(undefined4 *)(lVar4 + 0x60 + lVar8) = 0;
  *(undefined1 *)(lVar4 + 100 + lVar8) = 0;
  *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1 + 0x3c);
  lVar4 = param_1[4];
  uVar7 = lVar6 * 0xc;
  arg0 = uVar7;
  arg1 = (byte *)pdb_140f606e0(4);
  pbStack_80 = arg1;
  if (arg0 != 0) {
    pdb_14007ee60();
    pbStack_80 = pub_1406abab0(arg0,(ulonglong)arg1);
  }
  if (pbStack_80 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(arg1,arg0);
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
  pub_142e32760(pbStack_80 + 0x10,pbVar9,uVar7);
  if (lVar5 != 0) {
    pub_1406abac0(pbVar9,lVar5 * 0xc,4);
  }
  uStack_b0 = 1;
  uStack_a8 = 1;
  uStack_a0 = uStack_74;
  uStack_98 = pbStack_80;
  uStack_84 = CONCAT31(uStack_84._1_3_,uVar3);
  uStack_9c = uVar1;
  uStack_90 = lVar6;
  uStack_88 = uVar2;
  pdb_14007ee60();
  pbVar9 = pub_1406abab0(0x30,8);
  if (pbVar9 != (byte *)0x0) {
    *(undefined4 *)(pbVar9 + 0x20) = (undefined4)uStack_90;
    *(undefined4 *)(pbVar9 + 0x24) = uStack_90._4_4_;
    *(undefined4 *)(pbVar9 + 0x28) = uStack_88;
    *(undefined4 *)(pbVar9 + 0x2c) = uStack_84;
    *(undefined4 *)(pbVar9 + 0x10) = uStack_a0;
    *(undefined4 *)(pbVar9 + 0x14) = uStack_9c;
    *(undefined4 *)(pbVar9 + 0x18) = (undefined4)uStack_98;
    *(undefined4 *)(pbVar9 + 0x1c) = uStack_98._4_4_;
    *(undefined4 *)pbVar9 = (undefined4)uStack_b0;
    *(undefined4 *)(pbVar9 + 4) = uStack_b0._4_4_;
    *(undefined4 *)(pbVar9 + 8) = (undefined4)uStack_a8;
    *(undefined4 *)(pbVar9 + 0xc) = uStack_a8._4_4_;
    (*param_3)(&uStack_b0,pbVar9);
    pdb_140ae5180(lVar4,&uStack_b0,&UNK_143035080);
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x30);
}

