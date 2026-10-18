// VA 0x14198f860, PDB extent 559 bytes
// country_core::systems::save::save_game::impl$2::to_json_string<country_core::resources::history::HistoryIdentity>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::save_game::impl$2::to_json_string<country_core::resources::history::HistoryIdentity>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
   Extent: 559 */

longlong * pdb_14198f860(longlong *param_1,ulonglong *param_2)

{
  bool bVar1;
  code *pcVar2;
  longlong lVar3;
  uint uVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_80 [40];
  longlong lStack_58;
  byte *pbStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  uVar9 = *param_2;
  pdb_14007ee60();
  pbVar5 = pub_1406abab0(0x80,1);
  if (pbVar5 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x80);
    pcVar2 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar2)();
    return plVar7;
  }
  lStack_58 = 0x80;
  lStack_48 = 0;
  lVar6 = 0x14;
  uVar8 = uVar9;
  if (9999 < uVar9) {
    do {
      uVar8 = uVar9 / 10000;
      iVar10 = (int)uVar9 + (int)uVar8 * -10000;
      uVar4 = (uint)(iVar10 * 0x147b) >> 0x13;
      *(undefined2 *)(auStack_80 + lVar6 + -4) =
           *(undefined2 *)(&UNK_14335cbe8 + (ulonglong)uVar4 * 2);
      *(undefined2 *)(auStack_80 + lVar6 + -2) =
           *(undefined2 *)(&UNK_14335cbe8 + (ulonglong)(iVar10 + uVar4 * -100 & 0xffff) * 2);
      lVar6 = lVar6 + -4;
      bVar1 = 99999999 < uVar9;
      uVar9 = uVar8;
    } while (bVar1);
  }
  if (99 < uVar8) {
    iVar10 = (int)uVar8;
    uVar4 = ((uint)(uVar8 >> 2) & 0xffff) * 0x147b >> 0x11;
    uVar8 = (ulonglong)uVar4;
    *(undefined2 *)(auStack_80 + lVar6 + -2) =
         *(undefined2 *)(&UNK_14335cbe8 + (ulonglong)(iVar10 + uVar4 * -100 & 0xffff) * 2);
    lVar6 = lVar6 + -2;
  }
  pbStack_50 = pbVar5;
  if (uVar8 < 10) {
    auStack_80[lVar6 + -1] = (byte)uVar8 | 0x30;
    lVar6 = lVar6 + -1;
  }
  else {
    *(undefined2 *)(auStack_80 + lVar6 + -2) = *(undefined2 *)(&UNK_14335cbe8 + uVar8 * 2);
    lVar6 = lVar6 + -2;
  }
  uVar9 = 0x14 - lVar6;
  if (uVar9 < 0x81) {
    if (lVar6 == 0x14) {
      uVar9 = 0;
    }
    else {
      pub_142e32760(pbVar5,auStack_80 + lVar6,uVar9);
    }
    lVar11 = 0x80;
  }
  else {
    pdb_142d7f1b0(&lStack_58,0,uVar9,1,1);
    lVar3 = lStack_48;
    pbVar5 = pbStack_50;
    lVar11 = lStack_58;
    pub_142e32760(pbStack_50 + lStack_48,auStack_80 + lVar6,uVar9);
    if (SBORROW8(0,lVar11)) {
      lVar11 = -0x8000000000000000;
      goto LAB_14198f9ce;
    }
    uVar9 = uVar9 + lVar3;
  }
  param_1[2] = uVar9;
LAB_14198f9ce:
  param_1[1] = (longlong)pbVar5;
  *param_1 = lVar11;
  return param_1;
}

