// VA 0x1424e8440, PDB extent 335 bytes
// turbosloth::asset::impl$3::to_archive_bytes<clutter_pack_pipe::ClutterObjectList>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   turbosloth::asset::impl$3::to_archive_bytes<clutter_pack_pipe::ClutterObjectList>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 335 */

ulonglong * pdb_1424e8440(ulonglong *param_1,undefined8 param_2)

{
  code *pcVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  byte *pbStack_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  byte *pbStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  uStack_80 = 1;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_88 = param_2;
  pdb_1416f3ed0(&pbStack_68,&UNK_1433389b0,&uStack_88);
  if (pbStack_68 == (byte *)0x0) {
    param_1[1] = 1;
    param_1[2] = (ulonglong)&UNK_143071248;
    *param_1 = 0x8000000000000000;
  }
  else {
    if ((longlong)uStack_58 < 0) {
      uVar3 = 0;
LAB_1424e849e:
      uStack_50 = uStack_60;
      pbStack_48 = pbStack_68;
      pdb_142dc7e2a(uVar3,uStack_58);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    if (uStack_58 == 0) {
      pbVar2 = (byte *)0x1;
    }
    else {
      pdb_14007ee60();
      uVar3 = 1;
      pbVar2 = pub_1406abab0(uStack_58,1);
      if (pbVar2 == (byte *)0x0) goto LAB_1424e849e;
      pub_142e32760(pbVar2,pbStack_68,uStack_58);
    }
    if (uStack_60 != 0) {
      pub_1406abac0(pbStack_68,uStack_60,0x10);
    }
    *param_1 = uStack_58;
    param_1[1] = (ulonglong)pbVar2;
    param_1[2] = uStack_58;
  }
  return param_1;
}

