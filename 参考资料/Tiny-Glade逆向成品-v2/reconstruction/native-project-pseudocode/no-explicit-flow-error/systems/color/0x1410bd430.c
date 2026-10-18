// VA 0x1410bd430, PDB extent 305 bytes
// system_color::wall_color_slots::default_filled<country_core::resources::walls::wall_render_slots::SlotWallIdSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/wall_color_slots.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_color::wall_color_slots::default_filled<country_core::resources::walls::wall_render_slots::SlotWallIdSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/wall_color_slots.rs
   Extent: 305 */

ulonglong * pdb_1410bd430(ulonglong *param_1,ulonglong param_2)

{
  byte *pbVar1;
  code *pcVar2;
  ulonglong uVar3;
  byte *pbVar4;
  ulonglong *puVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar7 = param_2;
  uVar3 = pdb_140a6ad60();
  uVar6 = (undefined4)uVar7;
  if ((uVar3 & 1) == 0) {
    pdb_142dc8110(&UNK_143287c70,0x30,&UNK_143287cd0);
    pcVar2 = (code *)swi(3);
    puVar5 = (ulonglong *)(*pcVar2)();
    return puVar5;
  }
  uVar7 = param_2 * 4;
  if (uVar7 < 0x7ffffffffffffffd && param_2 >> 0x3e == 0) goto LAB_1410bd481;
  do {
    uVar3 = uVar7;
    pdb_142dc7e2a();
    uVar6 = (undefined4)uVar3;
LAB_1410bd481:
    if (uVar7 == 0) {
      pbVar4 = (byte *)0x4;
      uVar3 = 0;
      break;
    }
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(uVar7,4);
    uVar3 = param_2;
  } while (pbVar4 == (byte *)0x0);
  pbVar8 = pbVar4;
  if (param_2 < 2) {
    if (param_2 == 0) goto LAB_1410bd52f;
  }
  else {
    if (param_2 < 9) {
      lVar9 = 1;
    }
    else {
      uVar10 = param_2 - 1 & 0xfffffffffffffff8;
      pbVar8 = pbVar4 + uVar10 * 4;
      lVar9 = uVar10 + 1;
      uVar7 = 0;
      do {
        pbVar1 = pbVar4 + uVar7 * 4;
        *(undefined4 *)pbVar1 = uVar6;
        *(undefined4 *)(pbVar1 + 4) = uVar6;
        *(undefined4 *)(pbVar1 + 8) = uVar6;
        *(undefined4 *)(pbVar1 + 0xc) = uVar6;
        pbVar1 = pbVar4 + uVar7 * 4 + 0x10;
        *(undefined4 *)pbVar1 = uVar6;
        *(undefined4 *)(pbVar1 + 4) = uVar6;
        *(undefined4 *)(pbVar1 + 8) = uVar6;
        *(undefined4 *)(pbVar1 + 0xc) = uVar6;
        uVar7 = uVar7 + 8;
      } while (uVar10 != uVar7);
      if (param_2 - 1 == uVar10) goto LAB_1410bd52c;
    }
    lVar9 = param_2 - lVar9;
    do {
      *(undefined4 *)pbVar8 = uVar6;
      pbVar8 = pbVar8 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
LAB_1410bd52c:
  *(undefined4 *)pbVar8 = uVar6;
LAB_1410bd52f:
  *param_1 = uVar3;
  param_1[1] = (ulonglong)pbVar4;
  param_1[2] = param_2;
  return param_1;
}

