// VA 0x140accba0, PDB extent 435 bytes
// country_core::systems::save::save_game::impl$2::to_json_string<country_core::resources::time_of_day::TimeOfDay>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::save_game::impl$2::to_json_string<country_core::resources::time_of_day::TimeOfDay>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
   Extent: 435 */

ulonglong * pdb_140accba0(ulonglong *param_1,longlong param_2)

{
  code *pcVar1;
  byte *pbVar2;
  ulonglong *puVar3;
  ulonglong *puStack_58;
  ulonglong uStack_50;
  byte *pbStack_48;
  ulonglong uStack_40;
  undefined2 uStack_38;
  ulonglong **ppuStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_48 = pub_1406abab0(0x80,1);
  if (pbStack_48 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x80);
    pcVar1 = (code *)swi(3);
    puVar3 = (ulonglong *)(*pcVar1)();
    return puVar3;
  }
  uStack_50 = 0x80;
  puStack_58 = &uStack_50;
  *pbStack_48 = 0x7b;
  uStack_40 = 1;
  uStack_38 = 0x100;
  ppuStack_30 = &puStack_58;
  pbVar2 = (byte *)pdb_141b82660(&uStack_38,&DAT_14304c998,0xb,param_2 + 8);
  if (pbVar2 == (byte *)0x0) {
    if ((char)uStack_38 == '\0') {
      pbVar2 = (byte *)pdb_141b82660(&uStack_38,&UNK_14304c9a3,0xf,param_2 + 0xc);
      if (pbVar2 == (byte *)0x0) {
        if ((char)uStack_38 != '\0') goto LAB_140accc2e;
        pbVar2 = (byte *)pdb_141b82660(&uStack_38,&UNK_14304c9b2,0x10,param_2 + 0x10);
        if (pbVar2 == (byte *)0x0) {
          if (((uStack_38 & 1) == 0) && (uStack_38._1_1_ != '\0')) {
            pdb_140172c20(*ppuStack_30,&UNK_14304c960,1);
          }
          pbVar2 = pbStack_48;
          if (!SBORROW8(0,uStack_50)) {
            *param_1 = uStack_50;
            param_1[1] = (ulonglong)pbStack_48;
            param_1[2] = uStack_40;
            return param_1;
          }
          goto LAB_140accc74;
        }
      }
    }
    else {
LAB_140accc2e:
      pbVar2 = (byte *)pdb_142db8610();
    }
  }
  if (uStack_50 != 0) {
    pub_1406abac0(pbStack_48,uStack_50,1);
  }
LAB_140accc74:
  param_1[1] = (ulonglong)pbVar2;
  *param_1 = 0x8000000000000000;
  return param_1;
}

