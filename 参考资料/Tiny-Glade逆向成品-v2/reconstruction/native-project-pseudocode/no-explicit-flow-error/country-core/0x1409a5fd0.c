// VA 0x1409a5fd0, PDB extent 591 bytes
// country_core::resources::image_formation::impl$0::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/image_formation.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::image_formation::impl$0::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/image_formation.rs
   Extent: 591 */

undefined8 * pdb_1409a5fd0(undefined8 *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  pdb_14007ee60();
  pbVar7 = pub_1406abab0(7,1);
  if (pbVar7 == (byte *)0x0) {
    pdb_142dc7e2a(1,7);
  }
  else {
    uVar2 = CONCAT31(_UNK_1430693cf,DAT_1430693ce);
    *(undefined4 *)(pbVar7 + 3) = uVar2;
    uVar5 = _DAT_1430693cb;
    *(undefined4 *)pbVar7 = _DAT_1430693cb;
    pdb_14007ee60();
    pbVar8 = pub_1406abab0(7,1);
    if (pbVar8 != (byte *)0x0) {
      *(undefined4 *)(pbVar8 + 3) = uVar2;
      *(undefined4 *)pbVar8 = uVar5;
      uVar6 = DAT_143cb2d0c;
      pdb_14007ee60();
      pbVar9 = pub_1406abab0(7,1);
      if (pbVar9 != (byte *)0x0) {
        *(undefined4 *)(pbVar9 + 3) = uVar2;
        *(undefined4 *)pbVar9 = uVar5;
        param_1[6] = 0;
        *(undefined8 *)((longlong)param_1 + 0x35) = 0;
        param_1[0xe] = 0;
        *(undefined8 *)((longlong)param_1 + 0x75) = 0;
        *param_1 = 7;
        param_1[1] = pbVar7;
        param_1[2] = 7;
        uVar4 = _UNK_143020ea8;
        uVar3 = _DAT_143020ea0;
        param_1[3] = _DAT_143020ea0;
        param_1[4] = uVar4;
        *(undefined1 *)(param_1 + 5) = 0;
        *(undefined1 *)((longlong)param_1 + 0x3d) = 1;
        param_1[8] = 7;
        param_1[9] = pbVar8;
        param_1[10] = 7;
        param_1[0xb] = uVar3;
        param_1[0xc] = uVar4;
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)((longlong)param_1 + 0x7d) = 1;
        param_1[0x10] = 7;
        param_1[0x11] = pbVar9;
        param_1[0x12] = 7;
        param_1[0x13] = uVar3;
        param_1[0x14] = uVar4;
        *(undefined1 *)(param_1 + 0x15) = 0;
        param_1[0x16] = _DAT_143028540;
        *(undefined4 *)(param_1 + 0x17) = 0;
        *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
        *(undefined1 *)((longlong)param_1 + 0xbd) = uVar6;
        *(undefined1 *)(param_1 + 0x18) = 1;
        return param_1;
      }
      pdb_142dc7e2a(1,7);
      goto LAB_1409a6180;
    }
  }
  pdb_142dc7e2a(1,7);
LAB_1409a6180:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

