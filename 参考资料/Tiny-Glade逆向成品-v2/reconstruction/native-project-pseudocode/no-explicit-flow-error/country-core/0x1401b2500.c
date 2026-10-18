// VA 0x1401b2500, PDB extent 163 bytes
// country_core::resources::walls::decorator_subtype::_::impl$0::validate_param
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_subtype.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_subtype::_::impl$0::validate_param
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_subtype.rs
   Extent: 163 */

void pdb_1401b2500(undefined8 *param_1,ulonglong param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined *puVar2;
  
  puVar2 = &UNK_142e5fafc;
  if (param_2 < *(ulonglong *)(param_4 + 0x210)) {
    uVar1 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + param_2 * 8);
    if ((((uVar1 != 0) &&
         (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + ~uVar1 * 0x40) != 0)) &&
        (puVar2 = &UNK_142e5faf2, param_3 < *(ulonglong *)(param_4 + 0x210))) &&
       ((uVar1 = *(ulonglong *)(*(longlong *)(param_4 + 0x208) + param_3 * 8), uVar1 != 0 &&
        (*(longlong *)(*(longlong *)(param_4 + 0x1d8) + 0x20 + ~uVar1 * 0x40) != 0)))) {
      *param_1 = 0x8000000000000001;
      return;
    }
  }
  param_1[1] = &UNK_142e521b0;
  param_1[2] = 0x17;
  param_1[3] = 0x8000000000000000;
  param_1[4] = puVar2;
  param_1[5] = 10;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = 0x8000000000000000;
  return;
}

