// VA 0x141b2c180, PDB extent 483 bytes
// country_core::systems::save::save_game::impl$2::to_json_string<country_core::resources::weather::FogSaveState>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::save_game::impl$2::to_json_string<country_core::resources::weather::FogSaveState>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
   Extent: 483 */

ulonglong * pdb_141b2c180(ulonglong *param_1,longlong param_2)

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
  pbVar2 = (byte *)pdb_141b82660(&uStack_38,&UNK_1433929f4,9,param_2);
  if (pbVar2 == (byte *)0x0) {
    if ((char)uStack_38 == '\0') {
      pbVar2 = (byte *)pdb_141b82660(&uStack_38,&UNK_1433929fd,6,param_2 + 4);
      if (pbVar2 == (byte *)0x0) {
        if ((char)uStack_38 != '\0') goto LAB_141b2c20d;
        pbVar2 = (byte *)pdb_141b82660(&uStack_38,&UNK_143392a03,9,param_2 + 8);
        if (pbVar2 == (byte *)0x0) {
          if ((char)uStack_38 != '\0') goto LAB_141b2c20d;
          pbVar2 = (byte *)pdb_141b85940(&uStack_38,&UNK_143392a0c,6,param_2 + 0xc);
          if (pbVar2 == (byte *)0x0) {
            if (((uStack_38 & 1) == 0) && (uStack_38._1_1_ != '\0')) {
              pdb_140172c20(*ppuStack_30,&UNK_143391d68,1);
            }
            pbVar2 = pbStack_48;
            if (!SBORROW8(0,uStack_50)) {
              *param_1 = uStack_50;
              param_1[1] = (ulonglong)pbStack_48;
              param_1[2] = uStack_40;
              return param_1;
            }
            goto LAB_141b2c253;
          }
        }
      }
    }
    else {
LAB_141b2c20d:
      pbVar2 = (byte *)pdb_142db8610();
    }
  }
  if (uStack_50 != 0) {
    pub_1406abac0(pbStack_48,uStack_50,1);
  }
LAB_141b2c253:
  param_1[1] = (ulonglong)pbVar2;
  *param_1 = 0x8000000000000000;
  return param_1;
}

