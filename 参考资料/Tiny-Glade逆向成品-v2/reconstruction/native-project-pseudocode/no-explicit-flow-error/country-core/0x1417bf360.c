// VA 0x1417bf360, PDB extent 288 bytes
// country_core::resources::walls::decorator::_::impl$0::serialize<serde_json::value::ser::Serializer>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator::_::impl$0::serialize<serde_json::value::ser::Serializer>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 288 */

void pdb_1417bf360(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (1 < (ulonglong)*(byte *)(param_2 + 0x22)) {
    lVar1 = (ulonglong)*(byte *)(param_2 + 0x22) - 1;
  }
                    /* WARNING: Could not emulate address calculation at 0x0001417bf378 */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_143337620 + *(int *)(&UNK_143337620 + lVar1 * 4)))
            (&UNK_143337620 + *(int *)(&UNK_143337620 + lVar1 * 4));
  return;
}

