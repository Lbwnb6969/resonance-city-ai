// VA 0x1424e85c0, PDB extent 267 bytes
// turbosloth::asset::impl$25::clone_boxed<clutter_pack_pipe::ClutterGlbImport,anyhow::Error,clutter_pack_pipe::ImportClutterGlb>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::impl$25::clone_boxed<clutter_pack_pipe::ClutterGlbImport,anyhow::Error,clutter_pack_pipe::ImportClutterGlb>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 267 */

void pdb_1424e85c0(longlong param_1)

{
  ulonglong arg0;
  undefined8 uVar1;
  longlong lVar2;
  byte *pbVar3;
  ulonglong *puVar4;
  undefined1 uVar5;
  
  arg0 = *(ulonglong *)(param_1 + 0x10);
  uVar5 = arg0 == 0;
  if (-1 < (longlong)arg0) goto LAB_1424e85ef;
  uVar5 = true;
  lVar2 = 0;
  while( true ) {
    param_1 = lVar2;
    pdb_142dc7e2a(param_1,arg0);
LAB_1424e85ef:
    if ((bool)uVar5) break;
    uVar1 = *(undefined8 *)(param_1 + 8);
    pdb_14007ee60();
    pbVar3 = pub_1406abab0(arg0,1);
    uVar5 = pbVar3 == (byte *)0x0;
    lVar2 = 1;
    if (!(bool)uVar5) {
      pub_142e32760(pbVar3,uVar1,arg0);
LAB_1424e8630:
      uVar5 = *(undefined1 *)(param_1 + 0x18);
      pdb_14007ee60();
      puVar4 = (ulonglong *)pub_1406abab0(0x20,8);
      if (puVar4 != (ulonglong *)0x0) {
        *puVar4 = arg0;
        puVar4[1] = (ulonglong)pbVar3;
        puVar4[2] = arg0;
        *(undefined1 *)(puVar4 + 3) = uVar5;
        return;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x20);
    }
  }
  pbVar3 = (byte *)0x1;
  goto LAB_1424e8630;
}

