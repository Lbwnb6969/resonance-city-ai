// VA 0x140a8b6c0, PDB extent 286 bytes
// country_core::resources::audio_resources::AudioSamplesLoadedPromise::recv
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::audio_resources::AudioSamplesLoadedPromise::recv
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/audio_resources.rs
   Extent: 286 */

void pdb_140a8b6c0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lStack_28;
  longlong lStack_20;
  undefined1 uStack_11;
  undefined8 uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 1) {
    lStack_28 = param_1[2];
    lStack_20 = param_1[3];
    if (*(char *)((longlong)param_1 + 9) != '\0') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143044570,0x2b,&lStack_28,&UNK_1430445a0,&UNK_1430441d0);
    }
    if (lStack_28 == 0) {
      cVar2 = pdb_141a9a060(lStack_20,param_1,1000000000);
    }
    else if (lStack_28 == 1) {
      cVar2 = pdb_141a94b90(lStack_20,param_1,1000000000);
    }
    else {
      cVar2 = pdb_141c0d020(lStack_20,param_1,1000000000);
    }
    if (cVar2 != '\x02') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143044570,0x2b,&uStack_11,&UNK_1430445c0,&UNK_1430441e8);
    }
    pdb_14096d970(&lStack_28);
  }
  return;
}

