// VA 0x1410bd570, PDB extent 322 bytes
// system_color::wall_color_slots::default_filled<country_core::resources::color_id::StoneFoundationColorIdSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/wall_color_slots.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_color::wall_color_slots::default_filled<country_core::resources::color_id::StoneFoundationColorIdSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/wall_color_slots.rs
   Extent: 322 */

ulonglong * pdb_1410bd570(ulonglong *param_1,ulonglong param_2)

{
  byte *pbVar1;
  code *pcVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  byte *pbVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  
  uVar4 = pdb_1409d0480();
  if ((uVar4 & 1) == 0) {
    pdb_142dc8110(&UNK_143287c70,0x30,&UNK_143287cd0);
    pcVar2 = (code *)swi(3);
    puVar6 = (ulonglong *)(*pcVar2)();
    return puVar6;
  }
  uVar7 = param_2 * 4;
  if (uVar7 < 0x7ffffffffffffffd && param_2 >> 0x3e == 0) goto LAB_1410bd5c2;
  uVar11 = 0;
  do {
    uVar4 = pdb_142dc7e2a(uVar11);
LAB_1410bd5c2:
    uVar3 = (undefined4)(uVar4 >> 0x20);
    if (uVar7 == 0) {
      pbVar5 = (byte *)0x4;
      uVar4 = 0;
      break;
    }
    pdb_14007ee60();
    uVar11 = 4;
    pbVar5 = pub_1406abab0(uVar7,4);
    uVar4 = param_2;
  } while (pbVar5 == (byte *)0x0);
  pbVar8 = pbVar5;
  if (param_2 < 2) {
    if (param_2 == 0) goto LAB_1410bd67f;
  }
  else {
    if (param_2 < 9) {
      lVar9 = 1;
    }
    else {
      uVar10 = param_2 - 1 & 0xfffffffffffffff8;
      pbVar8 = pbVar5 + uVar10 * 4;
      lVar9 = uVar10 + 1;
      uVar7 = 0;
      do {
        pbVar1 = pbVar5 + uVar7 * 4;
        *(undefined4 *)pbVar1 = uVar3;
        *(undefined4 *)(pbVar1 + 4) = uVar3;
        *(undefined4 *)(pbVar1 + 8) = uVar3;
        *(undefined4 *)(pbVar1 + 0xc) = uVar3;
        pbVar1 = pbVar5 + uVar7 * 4 + 0x10;
        *(undefined4 *)pbVar1 = uVar3;
        *(undefined4 *)(pbVar1 + 4) = uVar3;
        *(undefined4 *)(pbVar1 + 8) = uVar3;
        *(undefined4 *)(pbVar1 + 0xc) = uVar3;
        uVar7 = uVar7 + 8;
      } while (uVar10 != uVar7);
      if (param_2 - 1 == uVar10) goto LAB_1410bd67c;
    }
    lVar9 = param_2 - lVar9;
    do {
      *(undefined4 *)pbVar8 = uVar3;
      pbVar8 = pbVar8 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
LAB_1410bd67c:
  *(undefined4 *)pbVar8 = uVar3;
LAB_1410bd67f:
  *param_1 = uVar4;
  param_1[1] = (ulonglong)pbVar5;
  param_1[2] = param_2;
  return param_1;
}

