// VA 0x1418c22e0, PDB extent 575 bytes
// country_core::systems::save::save_game::impl$2::to_json_string<country_core::resources::history::history_chain::HistoryChainIndex>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::save_game::impl$2::to_json_string<country_core::resources::history::history_chain::HistoryChainIndex>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_game.rs
   Extent: 575 */

longlong * pdb_1418c22e0(longlong *param_1,uint *param_2)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_80 [40];
  longlong lStack_58;
  byte *pbStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  ulonglong uVar9;
  
  uStack_40 = 0xfffffffffffffffe;
  uVar1 = *param_2;
  pdb_14007ee60();
  pbVar5 = pub_1406abab0(0x80,1);
  if (pbVar5 == (byte *)0x0) {
    pdb_142dc7e2a(1,0x80);
    pcVar2 = (code *)swi(3);
    plVar7 = (longlong *)(*pcVar2)();
    return plVar7;
  }
  lStack_58 = 0x80;
  uVar8 = -uVar1;
  if ((int)-uVar1 < 0) {
    uVar8 = uVar1;
  }
  lStack_48 = 0;
  lVar6 = 0xb;
  uVar10 = uVar8;
  if (uVar8 < 10000) {
    uVar9 = (ulonglong)uVar8;
    if (uVar8 < 100) goto LAB_1418c2405;
LAB_1418c23b9:
    uVar10 = (uVar8 & 0xffff) / 100;
    uVar9 = (ulonglong)uVar10;
    *(undefined2 *)(auStack_80 + lVar6 + -2) =
         *(undefined2 *)(&UNK_143356798 + (ulonglong)(uVar8 + uVar10 * -100 & 0xffff) * 2);
    lVar6 = lVar6 + -2;
    if (9 < uVar10) goto LAB_1418c23e9;
LAB_1418c240e:
    auStack_80[lVar6 + -1] = (byte)uVar9 | 0x30;
    lVar6 = lVar6 + -1;
  }
  else {
    do {
      uVar3 = uVar10;
      uVar9 = (ulonglong)uVar3 / 10000;
      uVar8 = uVar3 / 10000;
      *(undefined2 *)(auStack_80 + lVar6 + -4) =
           *(undefined2 *)(&UNK_143356798 + (ulonglong)((uVar3 % 10000) / 100) * 2);
      *(undefined2 *)(auStack_80 + lVar6 + -2) =
           *(undefined2 *)(&UNK_143356798 + (ulonglong)((uVar3 % 10000) % 100) * 2);
      lVar6 = lVar6 + -4;
      uVar10 = uVar3 / 10000;
    } while (99999999 < uVar3);
    if (99 < uVar3 / 10000) goto LAB_1418c23b9;
LAB_1418c2405:
    if ((uint)uVar9 < 10) goto LAB_1418c240e;
LAB_1418c23e9:
    *(undefined2 *)(auStack_80 + lVar6 + -2) = *(undefined2 *)(&UNK_143356798 + uVar9 * 2);
    lVar6 = lVar6 + -2;
  }
  if ((int)uVar1 < 0) {
    auStack_80[lVar6 + -1] = 0x2d;
    lVar6 = lVar6 + -1;
  }
  uVar9 = 0xb - lVar6;
  pbStack_50 = pbVar5;
  if (uVar9 < 0x81) {
    if (lVar6 == 0xb) {
      uVar9 = 0;
    }
    else {
      pub_142e32760(pbVar5,auStack_80 + lVar6,uVar9);
    }
    lVar11 = 0x80;
  }
  else {
    pdb_142d7f1b0(&lStack_58,0,uVar9,1,1);
    lVar4 = lStack_48;
    pbVar5 = pbStack_50;
    lVar11 = lStack_58;
    pub_142e32760(pbStack_50 + lStack_48,auStack_80 + lVar6,uVar9);
    if (SBORROW8(0,lVar11)) {
      lVar11 = -0x8000000000000000;
      goto LAB_1418c2461;
    }
    uVar9 = uVar9 + lVar4;
  }
  param_1[2] = uVar9;
LAB_1418c2461:
  param_1[1] = (longlong)pbVar5;
  *param_1 = lVar11;
  return param_1;
}

