// VA 0x140a86ba0, PDB extent 428 bytes
// country_core::resources::plant_sample_raster::PlantSampleRaster::restore_composite
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/plant_sample_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::plant_sample_raster::PlantSampleRaster::restore_composite
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/plant_sample_raster.rs
   Extent: 428 */

void pdb_140a86ba0(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte *arg0;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lStack_60;
  longlong lStack_58;
  undefined4 *puStack_50;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)(param_2 + 4);
  lStack_60 = param_1[2];
  lStack_58 = lVar1;
  puStack_50 = param_2;
  if (lVar1 != lStack_60) {
    uStack_41 = 1;
    pdb_142dc7fb4(0,&lStack_58,&lStack_60,0);
    goto LAB_140a86cf2;
  }
  lVar2 = *(longlong *)(param_2 + 2);
  for (lVar8 = lVar2; lVar8 != lVar2 + lVar1 * 4; lVar8 = lVar8 + 4) {
    uStack_41 = 1;
    pdb_140a86ea0();
  }
  arg0 = (byte *)param_1[1];
  iVar7 = pub_142e32750(lVar2,arg0,lVar1 * 4);
  lVar8 = param_1[5];
  if (lVar1 == lVar8 && iVar7 == 0) {
    iVar7 = pub_142e32750(lVar2,param_1[4],lVar1 * 4);
    if (iVar7 != 0) goto LAB_140a86c4b;
  }
  else {
LAB_140a86c4b:
    pub_142e32780(param_1 + 0x10,0xff,0x200);
    *(undefined1 *)((longlong)param_1 + 0x283) = 1;
  }
  if (*param_1 != 0) {
    pub_1406abac0(arg0,*param_1 << 2,1);
  }
  lVar1 = *(longlong *)(puStack_50 + 4);
  param_1[2] = lVar1;
  uVar4 = puStack_50[1];
  uVar5 = puStack_50[2];
  uVar6 = puStack_50[3];
  *(undefined4 *)param_1 = *puStack_50;
  *(undefined4 *)((longlong)param_1 + 4) = uVar4;
  *(undefined4 *)(param_1 + 1) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
  if (lVar8 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x000142e32760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    memcpy(param_1[4],param_1[1],lVar8 << 2);
    return;
  }
  uStack_41 = 0;
  pdb_142dc85e0(lVar8,lVar1,&UNK_143043520);
LAB_140a86cf2:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

