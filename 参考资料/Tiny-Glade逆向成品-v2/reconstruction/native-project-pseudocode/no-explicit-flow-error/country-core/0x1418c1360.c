// VA 0x1418c1360, PDB extent 371 bytes
// country_core::resources::session::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::session::_::impl$0::deserialize::impl$0::visit_str<serde_json::error::Error>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/session.rs
   Extent: 371 */

void pdb_1418c1360(undefined1 *param_1,int *param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 5) {
    if (((char)param_2[1] != 'n' || *param_2 != 0x65646c4f) &&
       ((char)param_2[1] != 'n' || *param_2 != 0x65646c6f)) goto LAB_1418c14a1;
    param_1[1] = 1;
  }
  else if (param_3 == 7) {
    if ((*(int *)((longlong)param_2 + 3) != 0x79726577 || *param_2 != 0x776f6c46) &&
       (*(int *)((longlong)param_2 + 3) != 0x79726577 || *param_2 != 0x776f6c66))
    goto LAB_1418c14a1;
    param_1[1] = 2;
  }
  else {
    if (param_3 != 6) {
LAB_1418c14a1:
      uVar1 = pdb_142d8f140(param_2,param_3,&UNK_143356270,10);
      *(undefined8 *)(param_1 + 8) = uVar1;
      *param_1 = 1;
      return;
    }
    if (((short)param_2[1] == 0x7265 && *param_2 == 0x6d6d7553) ||
       ((short)param_2[1] == 0x7265 && *param_2 == 0x6d6d7573)) {
      param_1[1] = 0;
    }
    else if (((short)param_2[1] == 0x6e6d && *param_2 == 0x75747541) ||
            ((short)param_2[1] == 0x6e6d && *param_2 == 0x75747561)) {
      param_1[1] = 3;
    }
    else {
      if (((short)param_2[1] != 0x7265 || *param_2 != 0x746e6957) &&
         ((short)param_2[1] != 0x7265 || *param_2 != 0x746e6977)) goto LAB_1418c14a1;
      param_1[1] = 4;
    }
  }
  *param_1 = 0;
  return;
}

