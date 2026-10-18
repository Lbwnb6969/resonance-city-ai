// VA 0x140b2f930, PDB extent 532 bytes
// turbosloth::asset::impl$25::clone_boxed<clutter_pack_pipe::ClutterIconImage,anyhow::Error,clutter_pack_pipe::mod_icons::BakeModClutterIcon>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::impl$25::clone_boxed<clutter_pack_pipe::ClutterIconImage,anyhow::Error,clutter_pack_pipe::mod_icons::BakeModClutterIcon>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 532 */

void pdb_140b2f930(byte *param_1)

{
  byte bVar1;
  ulonglong arg0;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  byte bVar5;
  byte *pbVar6;
  ulonglong *puVar7;
  byte *unaff_RBX;
  ulonglong arg0_00;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined7 uStack_7f;
  undefined7 uStack_5f;
  
  arg0 = *(ulonglong *)(param_1 + 0x10);
  uVar9 = arg0 == 0;
  if (-1 < (longlong)arg0) goto LAB_140b2f963;
  unaff_RBX = (byte *)0x0;
  do {
    uVar9 = 1;
    param_1 = unaff_RBX;
    pdb_142dc7e2a(unaff_RBX,arg0);
LAB_140b2f963:
    if ((bool)uVar9) {
      pbVar6 = (byte *)0x1;
      bVar1 = param_1[0x18];
      lVar2 = *(longlong *)(param_1 + 0x20);
      goto joined_r0x000140b2f9c3;
    }
    uVar8 = *(undefined8 *)(param_1 + 8);
    pdb_14007ee60();
    unaff_RBX = (byte *)0x1;
    pbVar6 = pub_1406abab0(arg0,1);
  } while (pbVar6 == (byte *)0x0);
  pub_142e32760(pbVar6,uVar8,arg0);
  bVar1 = param_1[0x18];
  lVar2 = *(longlong *)(param_1 + 0x20);
joined_r0x000140b2f9c3:
  if (SBORROW8(0,lVar2)) {
    bVar5 = 0;
    arg0_00 = 0x8000000000000000;
  }
  else {
    arg0_00 = *(ulonglong *)(param_1 + 0x30);
    if ((longlong)arg0_00 < 0) {
      uVar8 = 0;
LAB_140b2f9d5:
      pdb_142dc7e2a(uVar8,arg0_00);
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (arg0_00 == 0) {
      unaff_RBX = (byte *)0x1;
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      pdb_14007ee60();
      uVar8 = 1;
      unaff_RBX = pub_1406abab0(arg0_00,1);
      if (unaff_RBX == (byte *)0x0) goto LAB_140b2f9d5;
      pub_142e32760(unaff_RBX,uVar3,arg0_00);
    }
    bVar5 = param_1[0x38];
  }
  pdb_14007ee60();
  puVar7 = (ulonglong *)pub_1406abab0(0x40,8);
  if (puVar7 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x40);
  }
  puVar7[6] = arg0_00;
  puVar7[7] = CONCAT71(uStack_5f,bVar5);
  puVar7[4] = arg0_00;
  puVar7[5] = (ulonglong)unaff_RBX;
  puVar7[2] = arg0;
  puVar7[3] = CONCAT71(uStack_7f,bVar1);
  *puVar7 = arg0;
  puVar7[1] = (ulonglong)pbVar6;
  return;
}

