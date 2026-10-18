// VA 0x1406d1170, PDB extent 220 bytes
// usdl::video::VideoSubsystem::display_name
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::video::VideoSubsystem::display_name
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
   Extent: 220 */

undefined8 * pdb_1406d1170(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  longlong lStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  
  lVar1 = pdb_14100ae90(param_3);
  if (lVar1 == 0) {
LAB_1406d11c8:
    pdb_1406d0840(param_1 + 1);
    uVar3 = 1;
  }
  else {
    lVar2 = pub_142e32b70(lVar1);
    pdb_140f601a0(&lStack_40,lVar1,lVar2 + 1);
    if (SBORROW8(0,lStack_40)) {
      if ((longlong)uStack_30 < 0) {
        uVar3 = 0;
LAB_1406d11bd:
        pdb_142dc7e2a(uVar3,uStack_30);
        goto LAB_1406d11c8;
      }
      if (uStack_30 == 0) {
        pbVar4 = (byte *)0x1;
      }
      else {
        pdb_14007ee60();
        uVar3 = 1;
        pbVar4 = pub_1406abab0(uStack_30,1);
        if (pbVar4 == (byte *)0x0) goto LAB_1406d11bd;
        pub_142e32760(pbVar4,uStack_38,uStack_30);
      }
      param_1[1] = uStack_30;
      param_1[2] = pbVar4;
      param_1[3] = uStack_30;
    }
    else {
      param_1[3] = uStack_30;
      param_1[1] = lStack_40;
      param_1[2] = uStack_38;
    }
    uVar3 = 0;
  }
  *param_1 = uVar3;
  return param_1;
}

