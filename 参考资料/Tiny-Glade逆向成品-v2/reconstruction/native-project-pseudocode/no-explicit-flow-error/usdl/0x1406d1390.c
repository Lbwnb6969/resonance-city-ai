// VA 0x1406d1390, PDB extent 86 bytes
// usdl::video::VideoSubsystem::current_video_driver
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl::video::VideoSubsystem::current_video_driver
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl/src/video.rs
   Extent: 86 */

undefined8 pdb_1406d1390(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  char acStack_20 [8];
  undefined8 uStack_18;
  
  lVar1 = pdb_14100b220();
  if (lVar1 != 0) {
    lVar2 = pub_142e32b70(lVar1);
    pdb_140f64a50(acStack_20,lVar1,lVar2 + 1);
    uVar3 = 1;
    if (acStack_20[0] == '\0') {
      uVar3 = uStack_18;
    }
    return uVar3;
  }
  return 1;
}

