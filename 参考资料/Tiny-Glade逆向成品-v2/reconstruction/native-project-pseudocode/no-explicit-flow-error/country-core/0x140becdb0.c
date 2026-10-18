// VA 0x140becdb0, PDB extent 521 bytes
// country_core::resources::in_progress_curve::InProgressCurve::try_add_raw_input_points
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/in_progress_curve.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::in_progress_curve::InProgressCurve::try_add_raw_input_points
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/in_progress_curve.rs
   Extent: 521 */

char * pdb_140becdb0(char *param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong arg0;
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  longlong lVar9;
  char cStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  byte *pbStack_58;
  ulonglong uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_1419a74d0(&cStack_68);
  if (cStack_68 != '\x03') {
    *(ulonglong *)(param_1 + 8) = CONCAT71(uStack_5f,uStack_60);
    *(ulonglong *)(param_1 + 1) = CONCAT17(uStack_60,uStack_67);
    goto LAB_140becf23;
  }
  arg0 = param_4 * 8;
  if (param_4 == 0) {
    pbStack_58 = (byte *)0x8;
    uStack_50 = 0;
  }
  else {
    pdb_14007ee60();
    pbStack_58 = pub_1406abab0(arg0,8);
    uVar3 = _UNK_143065938;
    uVar2 = _DAT_143065930;
    if (pbStack_58 == (byte *)0x0) {
      pdb_142dc7e2a(8,arg0);
      pcVar1 = (code *)swi(3);
      pcVar4 = (char *)(*pcVar1)();
      return pcVar4;
    }
    uStack_50 = 1;
    pbVar8 = pbStack_58;
    if (param_4 != 1) {
      uVar5 = 1;
      uStack_50 = param_4;
      if (4 < param_4) {
        uVar6 = param_4 - 1 & 0xfffffffffffffffc;
        pbVar8 = pbStack_58 + uVar6 * 8;
        uVar5 = uVar6 + 1;
        uVar7 = 0;
        do {
          *(undefined8 *)(pbStack_58 + uVar7 * 8) = uVar2;
          *(undefined8 *)(pbStack_58 + uVar7 * 8 + 8) = uVar3;
          *(undefined8 *)(pbStack_58 + uVar7 * 8 + 0x10) = uVar2;
          *(undefined8 *)(pbStack_58 + uVar7 * 8 + 0x10 + 8) = uVar3;
          uVar7 = uVar7 + 4;
        } while (uVar6 != uVar7);
        if (param_4 - 1 == uVar6) goto LAB_140bece96;
      }
      do {
        uVar5 = uVar5 + 1;
        pbVar8[0] = 1;
        pbVar8[1] = 0;
        pbVar8[2] = 0;
        pbVar8[3] = 0;
        pbVar8[4] = 0;
        pbVar8[5] = 0;
        pbVar8[6] = 0;
        pbVar8[7] = 0;
        pbVar8 = pbVar8 + 8;
      } while (param_4 != uVar5);
    }
LAB_140bece96:
    pbVar8[0] = 1;
    pbVar8[1] = 0;
    pbVar8[2] = 0;
    pbVar8[3] = 0;
    pbVar8[4] = 0;
    pbVar8[5] = 0;
    pbVar8[6] = 0;
    pbVar8[7] = 0;
  }
  uVar5 = param_4 & 0x1fffffffffffffff;
  lVar9 = *(longlong *)(param_2 + 0x48);
  if ((ulonglong)(*(longlong *)(param_2 + 0x38) - lVar9) < uVar5) {
    pdb_142d7f1b0(param_2 + 0x38,lVar9,uVar5,8,8);
    lVar9 = *(longlong *)(param_2 + 0x48);
LAB_140becee8:
    pub_142e32760(lVar9 * 8 + *(longlong *)(param_2 + 0x40),pbStack_58,arg0);
  }
  else if (param_4 != 0) goto LAB_140becee8;
  *(ulonglong *)(param_2 + 0x48) = lVar9 + uVar5;
  if (uStack_50 != 0) {
    pub_1406abac0(pbStack_58,uStack_50 << 3,8);
  }
LAB_140becf23:
  *param_1 = cStack_68;
  return param_1;
}

