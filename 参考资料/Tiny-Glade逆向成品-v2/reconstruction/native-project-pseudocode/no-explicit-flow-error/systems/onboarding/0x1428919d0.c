// VA 0x1428919d0, PDB extent 1015 bytes
// system_onboarding::hint_quick_tool_palette::hint_quick_tool_palette
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_quick_tool_palette.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_onboarding::hint_quick_tool_palette::hint_quick_tool_palette
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_quick_tool_palette.rs
   Extent: 1015 */

void pdb_1428919d0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong *param_7,longlong *param_8)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  undefined4 uStack_e8;
  undefined2 uStack_e4;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  undefined6 uStack_6e;
  longlong *plStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar3 = (ulonglong *)*param_5;
  lVar7 = param_5[1];
  uVar9 = *puVar3;
  uVar11 = 0;
  uVar14 = uVar9 - *(ulonglong *)(lVar7 + 0x18);
  if (uVar9 < *(ulonglong *)(lVar7 + 0x18)) {
    uVar14 = uVar11;
  }
  uVar12 = uVar9 - *(ulonglong *)(lVar7 + 0x38);
  if (uVar9 < *(ulonglong *)(lVar7 + 0x38)) {
    uVar12 = uVar11;
  }
  lVar8 = uVar14 * 0x38 + *(longlong *)(lVar7 + 8);
  uVar9 = *(ulonglong *)(lVar7 + 0x10) - uVar14;
  if (*(ulonglong *)(lVar7 + 0x10) < uVar14) {
    lVar8 = 8;
    uVar9 = uVar11;
  }
  lVar16 = uVar12 * 0x38 + *(longlong *)(lVar7 + 0x28);
  uVar14 = *(ulonglong *)(lVar7 + 0x30) - uVar12;
  if (*(ulonglong *)(lVar7 + 0x30) < uVar12) {
    lVar16 = 8;
    uVar14 = uVar11;
  }
  *puVar3 = (*(longlong *)(lVar7 + 0x40) - uVar14) - uVar9;
  lVar10 = uVar14 * 0x38 + lVar16;
  lVar7 = lVar8;
  plStack_68 = param_2;
  plStack_60 = param_1;
  plStack_58 = param_4;
  plStack_50 = param_3;
  do {
    if ((lVar7 == 0) || (lVar7 == uVar9 * 0x38 + lVar8)) {
      if ((lVar16 == 0) || (lVar16 == lVar10)) break;
      lVar15 = 0;
      lVar7 = lVar16;
      lVar16 = lVar16 + 0x38;
    }
    else {
      lVar15 = lVar7 + 0x38;
    }
    *puVar3 = *puVar3 + 1;
    bVar5 = pdb_140b44180(lVar7);
    uVar11 = uVar11 + bVar5;
    lVar7 = lVar15;
  } while( true );
  uVar2 = *(undefined4 *)((longlong)param_6 + 0x1c);
  puVar4 = (undefined4 *)param_6[2];
  *puVar4 = uVar2;
  puVar3 = (ulonglong *)*param_6;
  *puVar3 = *puVar3 + uVar11;
  cVar6 = pdb_140938b60(*(undefined4 *)(*plStack_68 + 0x68),*(undefined4 *)(*plStack_68 + 0x6c));
  lVar7 = *plStack_60;
  if (cVar6 == '\0') {
    if (*(char *)(lVar7 + 0x40f) != '\0') {
      return;
    }
    if (*puVar3 < 5) {
      return;
    }
    lVar8 = *plStack_58;
    lVar16 = plStack_58[1];
    if (*(char *)(lVar8 + 0x108) == '\0') {
      lVar10 = 0;
      do {
        if (*(longlong *)(lVar8 + 0x100) << 2 == lVar10) goto LAB_142891cc8;
        lVar15 = (ulonglong)*(uint *)(*(longlong *)(lVar8 + 0xf8) + lVar10) * 0xa0;
        lVar10 = lVar10 + 4;
      } while (*(longlong *)(*(longlong *)(lVar16 + 0x100) + 0x58 + lVar15) == 0);
      lVar15 = *(longlong *)(lVar16 + 0x100) + lVar15;
      uVar9 = (ulonglong)*(uint *)(lVar15 + 0x94);
      if (*(ulonglong *)(lVar8 + 0x110) <
          *(ulonglong *)(*(longlong *)(lVar16 + 0x1a0) + 0x40 + uVar9 * 0x48)) {
        lVar16 = *(longlong *)(lVar16 + 0x1a0) + uVar9 * 0x48;
        uVar9 = *(ulonglong *)(*(longlong *)(lVar16 + 0x38) + *(ulonglong *)(lVar8 + 0x110) * 8);
        if (uVar9 == 0) goto LAB_142891c8b;
        lVar8 = *(longlong *)(*(longlong *)(lVar16 + 0x18) + 0x10 + ~uVar9 * 0x30);
      }
      else {
LAB_142891c8b:
        lVar8 = 0;
      }
      cVar6 = *(char *)((ulonglong)~*(uint *)(*(longlong *)(lVar15 + 0x50) + 8) + lVar8);
    }
    else {
      lVar10 = 0;
      do {
        if (*(longlong *)(lVar8 + 0x100) << 2 == lVar10) goto LAB_142891cc8;
        uVar9 = (ulonglong)*(uint *)(*(longlong *)(lVar8 + 0xf8) + lVar10);
        lVar10 = lVar10 + 4;
      } while (*(longlong *)(*(longlong *)(lVar16 + 0x1a0) + 0x10 + uVar9 * 0x48) == 0);
      lVar16 = *(longlong *)(lVar16 + 0x1a0) + uVar9 * 0x48;
      cVar6 = cRam0000000000000000;
      if ((*(ulonglong *)(lVar8 + 0x110) < *(ulonglong *)(lVar16 + 0x40)) &&
         (uVar9 = *(ulonglong *)(*(longlong *)(lVar16 + 0x38) + *(ulonglong *)(lVar8 + 0x110) * 8),
         uVar9 != 0)) {
        cVar6 = **(char **)(*(longlong *)(lVar16 + 0x18) + 0x10 + ~uVar9 * 0x30);
      }
    }
    if (cVar6 == '\x17') {
      fVar17 = *(float *)(*plStack_50 + 0x28);
      *puVar4 = uVar2;
      fVar17 = fVar17 + *(float *)(puVar3 + 1);
      *(float *)(puVar3 + 1) = fVar17;
      if (_DAT_142f3e554 <= fVar17) goto LAB_142891b05;
    }
LAB_142891cc8:
    puVar4 = (undefined4 *)param_7[2];
    *puVar4 = *(undefined4 *)((longlong)param_7 + 0x1c);
    lVar8 = *param_7;
    uStack_e4 = pdb_140a44d70(CONCAT71((int7)((ulonglong)puVar4 >> 8),0xd));
    uStack_e8 = 0xca;
    uVar13 = 0;
    if (*(longlong *)(lVar7 + 0x2b0) != 0) {
      uVar13 = *(undefined8 *)(lVar7 + 0x2a8);
    }
    pdb_1420c0500(&uStack_a0,&uStack_e8,uVar13);
    uStack_70 = 0x1700;
    uStack_b8 = 7;
    lVar7 = *(longlong *)(lVar8 + 0x28);
    if (lVar7 == *(longlong *)(lVar8 + 0x18)) {
      pdb_142d8d780(lVar8 + 0x18);
    }
    lVar16 = *(longlong *)(lVar8 + 0x20);
    lVar10 = lVar7 * 0x50;
    puVar1 = (undefined8 *)(lVar16 + 0x40 + lVar10);
    *puVar1 = uStack_78;
    puVar1[1] = CONCAT62(uStack_6e,uStack_70);
    puVar1 = (undefined8 *)(lVar16 + 0x30 + lVar10);
    *puVar1 = uStack_88;
    puVar1[1] = uStack_80;
    puVar1 = (undefined8 *)(lVar16 + 0x20 + lVar10);
    *puVar1 = uStack_98;
    puVar1[1] = uStack_90;
    puVar1 = (undefined8 *)(lVar16 + 0x10 + lVar10);
    *puVar1 = uStack_a8;
    puVar1[1] = uStack_a0;
    *(undefined8 *)(lVar16 + lVar10) = CONCAT44(uStack_b4,uStack_b8);
    ((undefined8 *)(lVar16 + lVar10))[1] = uStack_b0;
    *(longlong *)(lVar8 + 0x28) = lVar7 + 1;
  }
  else {
    if (*(char *)(lVar7 + 0x40f) != '\0') {
      return;
    }
LAB_142891b05:
    *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
    lVar7 = *param_8;
    lVar8 = *(longlong *)(lVar7 + 0x30);
    uVar13 = *(undefined8 *)(lVar7 + 0x40);
    if (lVar8 == *(longlong *)(lVar7 + 0x20)) {
      pdb_142d7e980(lVar7 + 0x20);
    }
    lVar16 = *(longlong *)(lVar7 + 0x28);
    *(undefined8 *)(lVar16 + lVar8 * 0x10) = uVar13;
    *(undefined1 *)(lVar16 + 8 + lVar8 * 0x10) = 0x17;
    *(longlong *)(lVar7 + 0x30) = lVar8 + 1;
    *(longlong *)(lVar7 + 0x40) = *(longlong *)(lVar7 + 0x40) + 1;
  }
  return;
}

