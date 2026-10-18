// VA 0x141b2bfc0, PDB extent 435 bytes
// country_core::systems::save::save_game::impl$2::to_json_string<country_core::resources::weather::PrecipitationSaveState>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::save_game::impl$2::to_json_string<country_core::resources::weather::PrecipitationSaveState>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
   Extent: 435 */

ulonglong * pdb_141b2bfc0(ulonglong *param_1,longlong param_2)

{
  code *pcVar1;
  byte *pbVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
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
  pbVar2 = (byte *)pdb_141b82660(&uStack_38,&UNK_143392a6e,8,param_2);
  if (pbVar2 == (byte *)0x0) {
    if ((char)uStack_38 == '\x01') {
      pbVar2 = (byte *)pdb_142db8610();
    }
    else {
      pbVar2 = (byte *)pdb_141b85940(&uStack_38,&UNK_143392a0c,6,param_2 + 4);
      if (pbVar2 == (byte *)0x0) {
        if (((uStack_38 & 1) == 0) && (uStack_38._1_1_ != '\0')) {
          puVar3 = *ppuStack_30;
          uVar4 = puVar3[2];
          if (*puVar3 == uVar4) {
            pdb_142d7f1b0(puVar3,uVar4,1,1,1);
            uVar4 = puVar3[2];
          }
          *(undefined1 *)(puVar3[1] + uVar4) = 0x7d;
          puVar3[2] = uVar4 + 1;
        }
        pbVar2 = pbStack_48;
        if (!SBORROW8(0,uStack_50)) {
          *param_1 = uStack_50;
          param_1[1] = (ulonglong)pbStack_48;
          param_1[2] = uStack_40;
          return param_1;
        }
        goto LAB_141b2c096;
      }
    }
  }
  if (uStack_50 != 0) {
    pub_1406abac0(pbStack_48,uStack_50,1);
  }
LAB_141b2c096:
  param_1[1] = (ulonglong)pbVar2;
  *param_1 = 0x8000000000000000;
  return param_1;
}

