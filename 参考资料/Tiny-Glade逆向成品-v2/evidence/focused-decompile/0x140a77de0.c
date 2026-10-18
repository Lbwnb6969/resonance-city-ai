// Matched PDB: country_core::resources::world_raster::WorldRaster::new<512>
// VA 0x140a77de0, PDB extent 894 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB: country_core::resources::world_raster::WorldRaster::new<512>
   Extent: 894 bytes. No whole-program auto-analysis. */

undefined8 *
pdb_140a77de0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  
  pdb_14007ee60();
  pdb_14007ee60();
  lVar11 = func_0x0001406abae0(0x40000,1);
  if (lVar11 == 0) {
    pdb_142dc7e2a(1,0x40000);
  }
  else {
    pdb_14007ee60();
    lVar12 = func_0x0001406abae0(0x40000,1);
    if (lVar12 == 0) {
      pdb_142dc7e2a(1,0x40000);
    }
    else {
      uVar21 = param_2[6];
      uVar15 = *(undefined4 *)param_2;
      uVar16 = *(undefined4 *)(param_2 + 1);
      uVar17 = *(undefined4 *)(param_2 + 2);
      uVar18 = *(undefined4 *)(param_2 + 3);
      uVar19 = *(undefined4 *)(param_2 + 4);
      uVar20 = *(undefined4 *)(param_2 + 5);
      pdb_14007ee60();
      lVar13 = func_0x0001406abab0(0x4000,4);
      uVar10 = _UNK_143041c5c;
      uVar9 = _UNK_143041c58;
      uVar8 = _UNK_143041c54;
      uVar7 = _DAT_143041c50;
      if (lVar13 == 0) {
        pdb_142dc7e2a(4,0x4000);
      }
      else {
        lVar14 = 0x1c;
        while( true ) {
          puVar1 = (undefined4 *)(lVar13 + -0x70 + lVar14 * 4);
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          puVar1[2] = uVar9;
          puVar1[3] = uVar10;
          puVar1 = (undefined4 *)(lVar13 + -0x60 + lVar14 * 4);
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          puVar1[2] = uVar9;
          puVar1[3] = uVar10;
          puVar1 = (undefined4 *)(lVar13 + -0x50 + lVar14 * 4);
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          puVar1[2] = uVar9;
          puVar1[3] = uVar10;
          puVar1 = (undefined4 *)(lVar13 + -0x40 + lVar14 * 4);
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          puVar1[2] = uVar9;
          puVar1[3] = uVar10;
          puVar1 = (undefined4 *)(lVar13 + -0x30 + lVar14 * 4);
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          puVar1[2] = uVar9;
          puVar1[3] = uVar10;
          puVar1 = (undefined4 *)(lVar13 + -0x20 + lVar14 * 4);
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          puVar1[2] = uVar9;
          puVar1[3] = uVar10;
          if (lVar14 == 0xffc) break;
          puVar1 = (undefined4 *)(lVar13 + -0x10 + lVar14 * 4);
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          puVar1[2] = uVar9;
          puVar1[3] = uVar10;
          puVar1 = (undefined4 *)(lVar13 + lVar14 * 4);
          *puVar1 = uVar7;
          puVar1[1] = uVar8;
          puVar1[2] = uVar9;
          puVar1[3] = uVar10;
          lVar14 = lVar14 + 0x20;
        }
        *(undefined4 *)(lVar13 + 0x3fe0) = uVar7;
        *(undefined4 *)(lVar13 + 0x3fe4) = uVar8;
        *(undefined4 *)(lVar13 + 0x3fe8) = uVar9;
        *(undefined4 *)(lVar13 + 0x3fec) = uVar10;
        *(undefined4 *)(lVar13 + 0x3ff0) = uVar7;
        *(undefined4 *)(lVar13 + 0x3ff4) = uVar8;
        *(undefined4 *)(lVar13 + 0x3ff8) = uVar9;
        *(undefined4 *)(lVar13 + 0x3ffc) = uVar10;
        pdb_14007ee60();
        lVar14 = func_0x0001406abae0(0x40,1);
        if (lVar14 != 0) {
          *param_1 = 0x40000;
          param_1[1] = lVar11;
          param_1[2] = 0x40000;
          param_1[3] = 0x40000;
          param_1[4] = lVar12;
          param_1[5] = 0x40000;
          func_0x000142e32780(param_1 + 0x13,0,0x204,param_4,uVar15,uVar16,uVar17,uVar18,uVar19,
                              uVar20,uVar21);
          param_1[6] = 0x1000;
          param_1[7] = lVar13;
          param_1[8] = 0x1000;
          uVar21 = param_2[1];
          uVar3 = param_2[2];
          uVar4 = param_2[3];
          uVar5 = param_2[4];
          uVar6 = param_2[5];
          param_1[0xc] = *param_2;
          param_1[0xd] = uVar21;
          param_1[0xe] = uVar3;
          param_1[0xf] = uVar4;
          param_1[0x10] = uVar5;
          param_1[0x11] = uVar6;
          param_1[0x12] = param_2[6];
          param_1[9] = 0x40;
          param_1[10] = lVar14;
          param_1[0xb] = 0x40;
          return param_1;
        }
        pdb_142dc7e2a(1,0x40);
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

