// VA 0x1424e8720, PDB extent 373 bytes
// turbosloth::asset::impl$25::clone_boxed<clutter_pack_pipe::ClutterIconImage,anyhow::Error,clutter_pack_pipe::BakeClutterIcon>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::impl$25::clone_boxed<clutter_pack_pipe::ClutterIconImage,anyhow::Error,clutter_pack_pipe::BakeClutterIcon>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 373 */

void pdb_1424e8720(undefined8 *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  ulonglong uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  ulonglong arg0;
  
  uVar2 = param_1[4];
  arg0 = uVar2 << 4;
  if (arg0 < 0x7ffffffffffffff1 && uVar2 >> 0x3c == 0) goto LAB_1424e8773;
  puVar7 = (undefined8 *)0x0;
  do {
    param_1 = puVar7;
    pdb_142dc7e2a(param_1,arg0);
LAB_1424e8773:
    uVar3 = *param_1;
    uVar4 = param_1[1];
    if (arg0 == 0) {
      pbVar8 = (byte *)0x10;
      goto LAB_1424e87e5;
    }
    lVar5 = param_1[3];
    pdb_14007ee60();
    pbVar8 = pub_1406abab0(arg0,0x10);
    puVar7 = (undefined8 *)0x10;
  } while (pbVar8 == (byte *)0x0);
  if (uVar2 != 0) {
    uVar9 = 0;
    uVar11 = uVar2;
    do {
      if (arg0 == uVar9) break;
      uVar6 = ((undefined8 *)(lVar5 + uVar9))[1];
      *(undefined8 *)(pbVar8 + uVar9) = *(undefined8 *)(lVar5 + uVar9);
      *(undefined8 *)(pbVar8 + uVar9 + 8) = uVar6;
      uVar9 = uVar9 + 0x10;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
LAB_1424e87e5:
  bVar1 = *(byte *)(param_1 + 5);
  pdb_14007ee60();
  pbVar10 = pub_1406abab0(0x30,0x10);
  if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(0x10,0x30);
  }
  *(undefined8 *)pbVar10 = uVar3;
  *(undefined8 *)(pbVar10 + 8) = uVar4;
  *(ulonglong *)(pbVar10 + 0x10) = uVar2;
  *(byte **)(pbVar10 + 0x18) = pbVar8;
  *(ulonglong *)(pbVar10 + 0x20) = uVar2;
  pbVar10[0x28] = bVar1;
  return;
}

