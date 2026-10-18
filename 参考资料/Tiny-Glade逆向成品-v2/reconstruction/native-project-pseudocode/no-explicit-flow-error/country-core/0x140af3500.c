// VA 0x140af3500, PDB extent 172 bytes
// country_core::resources::walls::decorator_archivist::_::impl$0::validate_param
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_archivist::_::impl$0::validate_param
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
   Extent: 172 */

void pdb_140af3500(undefined8 *param_1,ulonglong param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar2 = 6;
  puVar3 = &UNK_143050af0;
  if (param_2 < *(ulonglong *)(param_4 + 0x210)) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + param_2 * 8);
    if ((uVar1 != 0) && (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + ~uVar1 * 0x40) != 0))
    {
      uVar2 = 0x15;
      puVar3 = &UNK_143050af6;
      if ((param_3 < *(ulonglong *)(param_4 + 0x210)) &&
         ((uVar1 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + param_3 * 8), uVar1 != 0 &&
          (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + ~uVar1 * 0x40) != 0)))) {
        *param_1 = 0x8000000000000001;
        return;
      }
    }
  }
  param_1[1] = &UNK_143050784;
  param_1[2] = 0x17;
  param_1[3] = 0x8000000000000000;
  param_1[4] = puVar3;
  param_1[5] = uVar2;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = 0x8000000000000000;
  return;
}

