// VA 0x1417c19b0, PDB extent 167 bytes
// country_core::resources::walls::decorator::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator.rs
   Extent: 167 */

void pdb_1417c19b0(undefined1 *param_1,int *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 4) {
    if (*param_2 == 0x6c6c6157) {
      param_1[1] = 0;
    }
    else {
      if (*param_2 != 0x666f6f52) goto LAB_1417c1a25;
      param_1[1] = 1;
    }
  }
  else if (param_3 == 7) {
    if (*(int *)((longlong)param_2 + 3) != 0x6e696172 || *param_2 != 0x72726554) {
LAB_1417c1a25:
      uVar1 = pdb_142d8f140(param_2,param_3,&UNK_143336a70,4);
      *(undefined8 *)(param_1 + 8) = uVar1;
      *param_1 = 1;
      return;
    }
    param_1[1] = 2;
  }
  else {
    if ((param_3 != 5) || ((char)param_2[1] != 'r' || *param_2 != 0x69617453)) goto LAB_1417c1a25;
    param_1[1] = 3;
  }
  *param_1 = 0;
  return;
}

