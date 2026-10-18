// VA 0x140a8ccc0, PDB extent 160 bytes
// country_core::resources::audio_resources::AudioCore::instantiate_audio
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::audio_resources::AudioCore::instantiate_audio
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
   Extent: 160 */

undefined8 *
pdb_140a8ccc0(undefined8 *param_1,longlong *param_2,undefined8 param_3,ulonglong param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  if (*param_2 == 0) {
    uVar4 = param_4 == 0;
    uVar2 = param_3;
    if (-1 < (longlong)param_4) goto LAB_140a8ccf7;
    uVar3 = 0;
    do {
      uVar4 = 1;
      pdb_142dc7e2a(uVar3,param_4);
      uVar2 = param_3;
LAB_140a8ccf7:
      if ((bool)uVar4) {
        pbVar1 = (byte *)0x1;
        goto LAB_140a8cd3a;
      }
      param_3 = uVar2;
      pdb_14007ee60();
      uVar3 = 1;
      pbVar1 = pub_1406abab0(param_4,1);
    } while (pbVar1 == (byte *)0x0);
    pub_142e32760(pbVar1,uVar2,param_4);
LAB_140a8cd3a:
    *param_1 = 0;
    param_1[2] = param_4;
    param_1[3] = pbVar1;
    param_1[4] = param_4;
    *(undefined1 *)(param_1 + 5) = 2;
  }
  else {
    pdb_140a8b180(param_1,*param_2 + 0x10);
  }
  return param_1;
}

