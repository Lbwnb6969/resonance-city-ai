// VA 0x140a3d920, PDB extent 286 bytes
// country_core::systems::steam::AppSteamIntegration::try_new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::steam::AppSteamIntegration::try_new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/steam/mod.rs
   Extent: 286 */

longlong * pdb_140a3d920(longlong *param_1)

{
  undefined1 uStack_89;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  code *pcStack_70;
  longlong lStack_68;
  undefined *puStack_60;
  longlong lStack_58;
  longlong lStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined *puStack_18;
  undefined8 **ppuStack_10;
  
  puStack_88 = &UNK_14303bbe7;
  uStack_80 = 7;
  if (2 < *_DAT_143ca8e90) {
    ppuStack_78 = &puStack_88;
    pcStack_70 = pdb_1402ed400;
    lStack_68 = 0;
    puStack_60 = &UNK_14303bc41;
    lStack_58 = 0x1c;
    lStack_50 = 0;
    puStack_48 = &UNK_14303bc14;
    uStack_40 = 0x2c;
    uStack_38 = 3;
    puStack_30 = &UNK_14303bc41;
    uStack_28 = 0x1c;
    uStack_20 = 0x7600000001;
    puStack_18 = &UNK_14303bbee;
    ppuStack_10 = &ppuStack_78;
    pdb_140f332f0(&uStack_89,&lStack_68);
  }
  pdb_140c51bb0(&lStack_68,0x218a86);
  if (lStack_68 != 3) {
    param_1[3] = lStack_50;
  }
  param_1[1] = (longlong)puStack_60;
  param_1[2] = lStack_58;
  *param_1 = lStack_68;
  return param_1;
}

