// VA 0x1422ac910, PDB extent 377 bytes
// toolbar::menu::thumbnail_scroll::impl$3::process_input_action
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/thumbnail_scroll.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::thumbnail_scroll::impl$3::process_input_action
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/thumbnail_scroll.rs
   Extent: 377 */

undefined8 pdb_1422ac910(char *param_1,undefined8 param_2,char *param_3)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined7 uVar6;
  undefined8 uVar5;
  int iVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  int iStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if (*param_3 == '\x01') {
    uVar5 = 0;
    pdb_140938b30(&iStack_34,param_2,0);
    fVar9 = (float)((iStack_34 << 0x1f) >> 0x1f & uStack_30);
    fVar10 = (float)((iStack_34 << 0x1f) >> 0x1f & uStack_2c);
    bVar1 = true;
    lVar8 = 0x20;
    if (_DAT_142e36f28 < SQRT(fVar10 * fVar10 + fVar9 * fVar9)) {
LAB_1422ac9bc:
      *(undefined8 *)(param_1 + lVar8) = uVar5;
    }
    else {
      uVar5 = 0;
      cVar3 = pdb_140938ae0(param_2,0);
      if (cVar3 != '\0') goto LAB_1422ac9bc;
      if (*(longlong *)(param_1 + 0x20) == 0) {
        bVar1 = true;
      }
      else {
        cVar3 = pdb_140938ae0(param_2,0x15);
        if (cVar3 != '\0') {
          uVar5 = *(undefined8 *)(param_1 + 0x28);
          param_1[0x10] = '\x01';
          param_1[0x11] = '\0';
          param_1[0x12] = '\0';
          param_1[0x13] = '\0';
          param_1[0x14] = '\0';
          param_1[0x15] = '\0';
          param_1[0x16] = '\0';
          param_1[0x17] = '\0';
          lVar8 = 0x18;
          bVar1 = false;
          goto LAB_1422ac9bc;
        }
        bVar1 = false;
      }
    }
    cVar3 = pdb_140938ae0(param_2,0x16);
    if (cVar3 == '\0') {
      cVar3 = pdb_140938ae0(param_2,0x17);
      if (cVar3 != '\0') {
        iVar7 = *(int *)(param_1 + 0x58);
        goto joined_r0x0001422ac9ef;
      }
      cVar3 = pdb_140938ae0(param_2,0x19);
      if (cVar3 == '\0') {
        cVar3 = pdb_140938ae0(param_2,0x18);
        if (cVar3 == '\0') goto LAB_1422aca6d;
        iVar7 = 1;
        uVar2 = *(uint *)(param_1 + 0x58);
      }
      else {
        iVar7 = -1;
        uVar2 = *(uint *)(param_1 + 0x58);
      }
      if (uVar2 < 2) {
        param_1[0x77] = '\x01';
        goto LAB_1422aca6d;
      }
    }
    else {
      iVar7 = -*(int *)(param_1 + 0x58);
joined_r0x0001422ac9ef:
      if (iVar7 == 0) goto LAB_1422aca6d;
    }
    if (bVar1) {
      if (*param_1 == '\0') {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 8);
      }
      param_1[0x20] = '\x01';
      param_1[0x21] = '\0';
      param_1[0x22] = '\0';
      param_1[0x23] = '\0';
      param_1[0x24] = '\0';
      param_1[0x25] = '\0';
      param_1[0x26] = '\0';
      param_1[0x27] = '\0';
      *(undefined8 *)(param_1 + 0x28) = uVar5;
      iVar4 = (int)uVar5;
      uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
    }
    else {
      iVar4 = (int)*(undefined8 *)(param_1 + 0x28);
      uVar6 = (undefined7)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 8);
    }
    uVar2 = iVar7 + iVar4;
    uVar5 = CONCAT71(uVar6,1);
    if ((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(param_1 + 0x40))) {
      param_1[0x20] = '\x01';
      param_1[0x21] = '\0';
      param_1[0x22] = '\0';
      param_1[0x23] = '\0';
      param_1[0x24] = '\0';
      param_1[0x25] = '\0';
      param_1[0x26] = '\0';
      param_1[0x27] = '\0';
      *(ulonglong *)(param_1 + 0x28) = (ulonglong)uVar2;
    }
  }
  else {
LAB_1422aca6d:
    uVar5 = 0;
  }
  return uVar5;
}

