// VA 0x141c5e050, PDB extent 255 bytes
// country_core::systems::save::save_thread::impl$2::from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_thread.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::save::save_thread::impl$2::from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_thread.rs
   Extent: 255 */

undefined8 * pdb_141c5e050(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  char cVar3;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 *puStack_18;
  ulonglong *puStack_10;
  
  uStack_28 = (ulonglong **)CONCAT44(_UNK_14332c154,_DAT_14332c150);
  uStack_20 = (code *)CONCAT44(_UNK_14332c15c,_UNK_14332c158);
  puStack_18 = param_2;
  puStack_10 = (ulonglong *)
               (**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2,&uStack_28);
  if (puStack_10 != (ulonglong *)0x0) {
    uVar1 = *puStack_10;
    uVar2 = (uint)(uVar1 >> 0x20);
    switch((uint)uVar1 & 3) {
    case 0:
      if (*(char *)(uVar1 + 0x10) != '\x18') goto LAB_141c5e114;
      goto code_r0x000141c5e0cb;
    case 1:
      cVar3 = *(char *)(uVar1 + 0xf);
      break;
    case 2:
      if ((uVar1 >> 0x20 == 0x27) || (uVar2 == 0x70)) goto code_r0x000141c5e0cb;
      goto LAB_141c5e114;
    case 3:
      cVar3 = '*';
      if (uVar2 < 0x2a) {
        cVar3 = (char)(uVar1 >> 0x20);
      }
    }
    if (cVar3 == '\x18') {
code_r0x000141c5e0cb:
      uStack_28 = &puStack_10;
      uStack_20 = pdb_140562de0;
      pdb_140f60760(param_1 + 1,&UNK_1433a1d74,&uStack_28);
      *param_1 = 0;
      return param_1;
    }
  }
LAB_141c5e114:
  uStack_28 = &puStack_18;
  uStack_20 = pdb_140677530;
  pdb_140f60760(param_1 + 1,&UNK_1433a1d74,&uStack_28);
  *param_1 = 1;
  return param_1;
}

