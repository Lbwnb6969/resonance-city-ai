// VA 0x141c255b0, PDB extent 198 bytes
// country_core::systems::history::replay_wall::WallReplayCmd::new
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_wall.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::history::replay_wall::WallReplayCmd::new
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/history/replay_wall.rs
   Extent: 198 */

undefined8 * pdb_141c255b0(undefined8 *param_1,longlong *param_2,char param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cStack_5a;
  undefined1 uStack_59;
  byte *pbStack_58;
  undefined *puStack_50;
  char *pcStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  cStack_5a = param_3;
  uStack_59 = param_4;
  pdb_14007ee60();
  pbStack_58 = pub_1406abab0(0x10,8);
  if (param_3 == '\0') {
    if (pbStack_58 == (byte *)0x0) goto LAB_141c25666;
    puStack_50 = &UNK_14339dfe8;
  }
  else {
    if (pbStack_58 == (byte *)0x0) {
LAB_141c25666:
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x10);
    }
    puStack_50 = &UNK_14339e020;
  }
  *(longlong *)pbStack_58 = lVar1;
  *(longlong *)(pbStack_58 + 8) = lVar2 * 0x10 + lVar1;
  pcStack_48 = &cStack_5a;
  puStack_40 = &uStack_59;
  pdb_1415f1750(&uStack_38,&pbStack_58);
  param_1[2] = 0;
  param_1[3] = uStack_28;
  *param_1 = uStack_38;
  param_1[1] = uStack_30;
  *(char *)(param_1 + 4) = param_3;
  return param_1;
}

