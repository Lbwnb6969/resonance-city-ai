// VA 0x140c72120, PDB extent 289 bytes
// country_core::systems::save::save_game::impl$2::to_json_string<enum2$<core::option::Option<country_core::resources::critters::sheep::control::SheepControlSnapshot> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::save_game::impl$2::to_json_string<enum2$<core::option::Option<country_core::resources::critters::sheep::control::SheepControlSnapshot>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
   Extent: 289 */

ulonglong * pdb_140c72120(ulonglong *param_1,longlong *param_2)

{
  code *pcVar1;
  byte *pbVar2;
  ulonglong *puVar3;
  ulonglong *puStack_40;
  ulonglong uStack_38;
  byte *pbStack_30;
  ulonglong uStack_28;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_14007ee60();
  pbStack_30 = pub_1406abab0(0x80,1);
  if (pbStack_30 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x80);
    pcVar1 = (code *)swi(3);
    puVar3 = (ulonglong *)(*pcVar1)();
    return puVar3;
  }
  uStack_38 = 0x80;
  uStack_28 = 0;
  puStack_40 = &uStack_38;
  if (SBORROW8(0,*param_2)) {
    pbStack_30[0] = 0x6e;
    pbStack_30[1] = 0x75;
    pbStack_30[2] = 0x6c;
    pbStack_30[3] = 0x6c;
    uStack_28 = 4;
    uStack_38 = 0x80;
LAB_140c7218a:
    *param_1 = uStack_38;
    param_1[1] = (ulonglong)pbStack_30;
    param_1[2] = uStack_28;
  }
  else {
    pbVar2 = (byte *)pdb_141b6e3e0(param_2,&puStack_40);
    if (pbVar2 == (byte *)0x0) {
      pbVar2 = pbStack_30;
      if (!SBORROW8(0,uStack_38)) goto LAB_140c7218a;
    }
    else if (uStack_38 != 0) {
      pub_1406abac0(pbStack_30,uStack_38,1);
    }
    param_1[1] = (ulonglong)pbVar2;
    *param_1 = 0x8000000000000000;
  }
  return param_1;
}

