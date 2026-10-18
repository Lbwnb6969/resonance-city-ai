// VA 0x140a77de0, PDB extent 894 bytes
// country_core::resources::world_raster::WorldRaster::new<512>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::world_raster::WorldRaster::new<512>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
   Extent: 894 */

undefined8 *
pdb_140a77de0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  longlong lVar14;
  byte *pbVar15;
  
  pdb_14007ee60();
  pdb_14007ee60();
  pbVar11 = pub_1406abae0(0x40000,1);
  if (pbVar11 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x40000);
  }
  else {
    pdb_14007ee60();
    pbVar12 = pub_1406abae0(0x40000,1);
    if (pbVar12 == (byte *)0x0) {
      pdb_142dc7e2a(1,0x40000);
    }
    else {
      pdb_14007ee60(*(undefined4 *)param_2,*(undefined4 *)(param_2 + 2),*(undefined4 *)(param_2 + 4)
                    ,param_4,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 1),
                    *(undefined4 *)(param_2 + 2),*(undefined4 *)(param_2 + 3),
                    *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 5),param_2[6]);
      pbVar13 = pub_1406abab0(0x4000,4);
      uVar10 = _UNK_143041c5c;
      uVar9 = _UNK_143041c58;
      uVar8 = _UNK_143041c54;
      uVar7 = _DAT_143041c50;
      if (pbVar13 == (byte *)0x0) {
        pdb_142dc7e2a(4,0x4000);
      }
      else {
        lVar14 = 0x1c;
        while( true ) {
          pbVar15 = pbVar13 + lVar14 * 4 + -0x70;
          *(undefined4 *)pbVar15 = uVar7;
          *(undefined4 *)(pbVar15 + 4) = uVar8;
          *(undefined4 *)(pbVar15 + 8) = uVar9;
          *(undefined4 *)(pbVar15 + 0xc) = uVar10;
          pbVar15 = pbVar13 + lVar14 * 4 + -0x60;
          *(undefined4 *)pbVar15 = uVar7;
          *(undefined4 *)(pbVar15 + 4) = uVar8;
          *(undefined4 *)(pbVar15 + 8) = uVar9;
          *(undefined4 *)(pbVar15 + 0xc) = uVar10;
          pbVar15 = pbVar13 + lVar14 * 4 + -0x50;
          *(undefined4 *)pbVar15 = uVar7;
          *(undefined4 *)(pbVar15 + 4) = uVar8;
          *(undefined4 *)(pbVar15 + 8) = uVar9;
          *(undefined4 *)(pbVar15 + 0xc) = uVar10;
          pbVar15 = pbVar13 + lVar14 * 4 + -0x40;
          *(undefined4 *)pbVar15 = uVar7;
          *(undefined4 *)(pbVar15 + 4) = uVar8;
          *(undefined4 *)(pbVar15 + 8) = uVar9;
          *(undefined4 *)(pbVar15 + 0xc) = uVar10;
          pbVar15 = pbVar13 + lVar14 * 4 + -0x30;
          *(undefined4 *)pbVar15 = uVar7;
          *(undefined4 *)(pbVar15 + 4) = uVar8;
          *(undefined4 *)(pbVar15 + 8) = uVar9;
          *(undefined4 *)(pbVar15 + 0xc) = uVar10;
          pbVar15 = pbVar13 + lVar14 * 4 + -0x20;
          *(undefined4 *)pbVar15 = uVar7;
          *(undefined4 *)(pbVar15 + 4) = uVar8;
          *(undefined4 *)(pbVar15 + 8) = uVar9;
          *(undefined4 *)(pbVar15 + 0xc) = uVar10;
          if (lVar14 == 0xffc) break;
          pbVar15 = pbVar13 + lVar14 * 4 + -0x10;
          *(undefined4 *)pbVar15 = uVar7;
          *(undefined4 *)(pbVar15 + 4) = uVar8;
          *(undefined4 *)(pbVar15 + 8) = uVar9;
          *(undefined4 *)(pbVar15 + 0xc) = uVar10;
          pbVar15 = pbVar13 + lVar14 * 4;
          *(undefined4 *)pbVar15 = uVar7;
          *(undefined4 *)(pbVar15 + 4) = uVar8;
          *(undefined4 *)(pbVar15 + 8) = uVar9;
          *(undefined4 *)(pbVar15 + 0xc) = uVar10;
          lVar14 = lVar14 + 0x20;
        }
        *(undefined4 *)(pbVar13 + 0x3fe0) = uVar7;
        *(undefined4 *)(pbVar13 + 0x3fe4) = uVar8;
        *(undefined4 *)(pbVar13 + 0x3fe8) = uVar9;
        *(undefined4 *)(pbVar13 + 0x3fec) = uVar10;
        *(undefined4 *)(pbVar13 + 0x3ff0) = uVar7;
        *(undefined4 *)(pbVar13 + 0x3ff4) = uVar8;
        *(undefined4 *)(pbVar13 + 0x3ff8) = uVar9;
        *(undefined4 *)(pbVar13 + 0x3ffc) = uVar10;
        pdb_14007ee60();
        pbVar15 = pub_1406abae0(0x40,1);
        if (pbVar15 != (byte *)0x0) {
          *param_1 = 0x40000;
          param_1[1] = pbVar11;
          param_1[2] = 0x40000;
          param_1[3] = 0x40000;
          param_1[4] = pbVar12;
          param_1[5] = 0x40000;
          pub_142e32780(param_1 + 0x13,0,0x204);
          param_1[6] = 0x1000;
          param_1[7] = pbVar13;
          param_1[8] = 0x1000;
          uVar2 = param_2[1];
          uVar3 = param_2[2];
          uVar4 = param_2[3];
          uVar5 = param_2[4];
          uVar6 = param_2[5];
          param_1[0xc] = *param_2;
          param_1[0xd] = uVar2;
          param_1[0xe] = uVar3;
          param_1[0xf] = uVar4;
          param_1[0x10] = uVar5;
          param_1[0x11] = uVar6;
          param_1[0x12] = param_2[6];
          param_1[9] = 0x40;
          param_1[10] = pbVar15;
          param_1[0xb] = 0x40;
          return param_1;
        }
        pdb_142dc7e2a(1,0x40);
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

