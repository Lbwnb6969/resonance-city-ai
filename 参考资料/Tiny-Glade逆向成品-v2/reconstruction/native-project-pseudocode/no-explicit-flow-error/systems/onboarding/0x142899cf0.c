// VA 0x142899cf0, PDB extent 415 bytes
// system_onboarding::exponential_back_off::exponential_back_off
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/exponential_back_off.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_onboarding::exponential_back_off::exponential_back_off
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/exponential_back_off.rs
   Extent: 415 */

void pdb_142899cf0(longlong *param_1,float *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  float fVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char cVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  float *pfStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  float **ppfStack_50;
  longlong *plStack_48;
  
  lVar4 = *param_4;
  *param_2 = *(float *)(lVar4 + 0x28) + *param_2;
  puVar5 = (ulonglong *)*param_3;
  lVar11 = param_3[1];
  uVar6 = *puVar5;
  uVar14 = 0;
  uVar16 = uVar6 - *(ulonglong *)(lVar11 + 0x18);
  if (uVar6 < *(ulonglong *)(lVar11 + 0x18)) {
    uVar16 = uVar14;
  }
  uVar9 = uVar6 - *(ulonglong *)(lVar11 + 0x38);
  if (uVar6 < *(ulonglong *)(lVar11 + 0x38)) {
    uVar9 = uVar14;
  }
  uVar6 = *(ulonglong *)(lVar11 + 0x30);
  uVar12 = uVar6 - uVar9;
  if (uVar9 > uVar6) {
    uVar12 = uVar14;
  }
  uVar7 = *(ulonglong *)(lVar11 + 0x10);
  uVar13 = uVar7 - uVar16;
  if (uVar16 > uVar7) {
    uVar13 = uVar14;
  }
  uVar14 = *(ulonglong *)(lVar11 + 0x40);
  *puVar5 = uVar14 - (uVar13 + uVar12);
  if (uVar16 <= uVar7 && uVar7 - uVar16 != 0 || uVar9 <= uVar6 && uVar6 - uVar9 != 0) {
    *puVar5 = uVar14;
    *param_2 = 0.0;
    lVar11 = *param_1;
  }
  else {
    lVar11 = *param_1;
    if (_DAT_142e37844 < *param_2 || _DAT_142e37844 == *param_2) {
      uVar10 = *(undefined4 *)((longlong)param_1 + 0x1c);
      puVar15 = (undefined4 *)param_1[2];
      goto LAB_142899dc3;
    }
  }
  fVar1 = *(float *)(lVar4 + 0x28);
  uVar10 = *(undefined4 *)((longlong)param_1 + 0x1c);
  puVar15 = (undefined4 *)param_1[2];
  *puVar15 = uVar10;
  *(float *)(lVar11 + 0x400) = fVar1 + *(float *)(lVar11 + 0x400);
LAB_142899dc3:
  uVar2 = *(undefined1 *)(lVar11 + 0x404);
  uVar3 = *(undefined1 *)(lVar11 + 0x405);
  uStack_68 = param_8;
  uStack_60 = param_7;
  uStack_58 = param_9;
  ppfStack_50 = &pfStack_70;
  *puVar15 = uVar10;
  pfStack_70 = param_2;
  plStack_48 = param_4;
  cVar8 = pdb_142899e90(&uStack_68,lVar11 + 0x3f0,0,uVar2);
  if (cVar8 == '\0') {
    *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
    param_6 = (undefined8 *)*param_6;
    *param_6 = 0;
    *(undefined2 *)(param_6 + 1) = 0;
    *(undefined1 *)(lVar11 + 0x404) = 0;
  }
  *puVar15 = uVar10;
  cVar8 = pdb_142899e90(&uStack_68,lVar11 + 0x3f8,1,uVar3);
  if (cVar8 == '\0') {
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    param_5 = (undefined8 *)*param_5;
    *param_5 = 0;
    *(undefined2 *)(param_5 + 1) = 0;
    *puVar15 = uVar10;
    *(undefined1 *)(lVar11 + 0x405) = 0;
  }
  return;
}

