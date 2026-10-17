// Matched PDB: alloc::vec::spec_from_iter::impl$0::from_iter<country_core::systems::render_loop::compute_passes::grass2::Grass2CardPointPlantOffsetSsbo,core::iter::adapters::map::Map<core::slice::iter::Chunks<u32>,country_core::systems::render_loop::compute_passes::grass2::load_grass2_card_point_plant_offsets::closure_env$1> >
// VA 0x1415ea9b0, PDB extent 551 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   alloc::vec::spec_from_iter::impl$0::from_iter<country_core::systems::render_loop::compute_passes::grass2::Grass2CardPointPlantOffsetSsbo,core::iter::adapters::map::Map<core::slice::iter::Chunks<u32>,country_core::systems::render_loop::compute_passes::grass2::load_grass2_card_point_plant_offsets::closure_env$1>
   >
   Extent: 551 bytes. No whole-program auto-analysis. */

ulonglong * pdb_1415ea9b0(ulonglong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  code *pcVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined8 uVar8;
  ushort *puVar9;
  ulonglong uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar6 = param_2[1];
  uVar2 = param_2[2];
  if (uVar6 == 0) {
    uVar4 = 0;
  }
  else {
    if (uVar2 == 0) {
      pdb_142dc84f0(&UNK_1433202e0);
      goto LAB_1415eab78;
    }
    if ((uVar6 | uVar2) >> 0x20 == 0) {
      uVar4 = (uVar6 & 0xffffffff) / (uVar2 & 0xffffffff);
      uVar5 = (uVar6 & 0xffffffff) % (uVar2 & 0xffffffff);
    }
    else {
      uVar4 = uVar6 / uVar2;
      uVar5 = uVar6 % uVar2;
    }
    uVar4 = (uVar4 + 1) - (ulonglong)(uVar5 == 0);
  }
  uVar5 = uVar4 * 4;
  if (uVar5 < 0x7ffffffffffffffd && uVar4 >> 0x3e == 0) goto LAB_1415eaa4b;
  uVar8 = 0;
  do {
    pdb_142dc7e2a(uVar8);
LAB_1415eaa4b:
    if (uVar5 == 0) {
      uStack_58 = 4;
      uVar4 = 0;
      break;
    }
    pdb_14007ee60();
    uVar8 = 4;
    uStack_58 = func_0x0001406abab0(uVar5);
  } while (uStack_58 == 0);
  uStack_50 = 0;
  uStack_60 = uVar4;
  if (uVar6 == 0) {
    uStack_50 = 0;
    goto LAB_1415eaac4;
  }
  if (uVar2 == 0) {
LAB_1415eab78:
    pdb_142dc84f0(&UNK_1433202e0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  puVar9 = (ushort *)*param_2;
  if ((uVar6 | uVar2) >> 0x20 == 0) {
    uVar5 = ((uVar6 & 0xffffffff) / (uVar2 & 0xffffffff) + 1) -
            (ulonglong)((uVar6 & 0xffffffff) % (uVar2 & 0xffffffff) == 0);
    if (uVar5 <= uVar4) goto LAB_1415eaabb;
LAB_1415eaafb:
    pdb_142d7f1b0(&uStack_60,0,uVar5,4,4);
    uVar4 = uStack_58;
  }
  else {
    uVar5 = (uVar6 / uVar2 + 1) - (ulonglong)(uVar6 % uVar2 == 0);
    if (uVar4 < uVar5) goto LAB_1415eaafb;
LAB_1415eaabb:
    uStack_50 = 0;
    uVar4 = uStack_58;
  }
  do {
    uVar5 = uVar6;
    if (uVar2 < uVar6) {
      uVar5 = uVar2;
    }
    uVar7 = 0;
    if (uVar5 != 1) {
      uVar7 = *(int *)(puVar9 + 2) << 0x10;
    }
    uVar1 = *puVar9;
    puVar9 = puVar9 + uVar5 * 2;
    uVar6 = uVar6 - uVar5;
    *(uint *)(uVar4 + uStack_50 * 4) = uVar1 | uVar7;
    uStack_50 = uStack_50 + 1;
  } while (uVar6 != 0);
LAB_1415eaac4:
  param_1[2] = uStack_50;
  *param_1 = uStack_60;
  param_1[1] = uStack_58;
  return param_1;
}

