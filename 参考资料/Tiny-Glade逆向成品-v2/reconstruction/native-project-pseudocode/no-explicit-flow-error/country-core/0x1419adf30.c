// VA 0x1419adf30, PDB extent 5772 bytes
// country_core::systems::backend::input::calculate_input_delta::calculate_input_delta
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/input/calculate_input_delta.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::backend::input::calculate_input_delta::calculate_input_delta
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/input/calculate_input_delta.rs
   Extent: 5772 */

void pdb_1419adf30(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  float in_XMM2_Da;
  
  lVar3 = *param_1;
  *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
  piVar4 = (int *)*param_3;
  fVar1 = *(float *)(*param_2 + 0x58);
  *(undefined8 *)(piVar4 + 0x54) = *(undefined8 *)(lVar3 + 0x5c);
  *(undefined8 *)(piVar4 + 0x56) = *(undefined8 *)(lVar3 + 100);
  *(undefined8 *)(piVar4 + 0x58) = *(undefined8 *)(lVar3 + 0x6c);
  *(undefined8 *)(piVar4 + 0x5c) = *(undefined8 *)(lVar3 + 0x7c);
  *(undefined8 *)(piVar4 + 0x5a) = *(undefined8 *)(lVar3 + 0x74);
  uVar8 = *(ulonglong *)(lVar3 + 0x84);
  *(ulonglong *)(piVar4 + 0x5e) = uVar8;
  if (*(char *)(lVar3 + 0x30) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0x8c) ^ 1) << 2;
  }
  else {
    iVar2 = *piVar4;
    fVar7 = (float)piVar4[1];
    uVar8 = (ulonglong)(uint)fVar7;
    if (*(byte *)(lVar3 + 0x8c) == 0) {
      if (iVar2 != 1) {
        uVar8 = 0;
      }
      iVar5 = 3;
    }
    else if (iVar2 == 2) {
      fVar6 = fVar7;
      if ((fVar7 <= 0.0) &&
         (fVar6 = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        fVar6 = _DAT_142e37ad4;
      }
      uVar8 = (ulonglong)(uint)(fVar6 - fVar1);
      iVar5 = 2;
    }
    else {
      iVar5 = 1;
      in_XMM2_Da = 0.0;
      if (iVar2 != 1) goto LAB_1419ae00c;
      uVar8 = (ulonglong)(uint)(fVar7 + fVar1);
      iVar5 = 1;
    }
    in_XMM2_Da = (float)uVar8;
  }
LAB_1419ae00c:
  *piVar4 = iVar5;
  piVar4[1] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x31) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0x8d) ^ 1) << 2;
    fVar7 = (float)uVar8;
  }
  else {
    iVar2 = piVar4[2];
    fVar7 = (float)piVar4[3];
    if (*(byte *)(lVar3 + 0x8d) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
      fVar7 = in_XMM2_Da;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
      fVar7 = in_XMM2_Da;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
        fVar7 = in_XMM2_Da;
      }
    }
  }
  piVar4[2] = iVar5;
  piVar4[3] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x32) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0x8e) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[4];
    fVar7 = (float)piVar4[5];
    if (*(byte *)(lVar3 + 0x8e) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
      fVar7 = in_XMM2_Da;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
      fVar7 = in_XMM2_Da;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
        fVar7 = in_XMM2_Da;
      }
    }
  }
  piVar4[4] = iVar5;
  piVar4[5] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x33) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0x8f) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[6];
    fVar7 = (float)piVar4[7];
    if (*(byte *)(lVar3 + 0x8f) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
      fVar7 = in_XMM2_Da;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
      fVar7 = in_XMM2_Da;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
        fVar7 = in_XMM2_Da;
      }
    }
  }
  piVar4[6] = iVar5;
  piVar4[7] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x34) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0x90) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[8];
    fVar7 = (float)piVar4[9];
    if (*(byte *)(lVar3 + 0x90) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
      fVar7 = in_XMM2_Da;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
      fVar7 = in_XMM2_Da;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
        fVar7 = in_XMM2_Da;
      }
    }
  }
  piVar4[8] = iVar5;
  piVar4[9] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x35) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0x91) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[10];
    fVar7 = (float)piVar4[0xb];
    if (*(byte *)(lVar3 + 0x91) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
      fVar7 = in_XMM2_Da;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
      fVar7 = in_XMM2_Da;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
        fVar7 = in_XMM2_Da;
      }
    }
  }
  piVar4[10] = iVar5;
  piVar4[0xb] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x36) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0x92) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0xc];
    fVar7 = (float)piVar4[0xd];
    if (*(byte *)(lVar3 + 0x92) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
      fVar7 = in_XMM2_Da;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
      fVar7 = in_XMM2_Da;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
        fVar7 = in_XMM2_Da;
      }
    }
  }
  piVar4[0xc] = iVar5;
  piVar4[0xd] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x37) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0x93) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0xe];
    fVar7 = (float)piVar4[0xf];
    if (*(byte *)(lVar3 + 0x93) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
      fVar7 = in_XMM2_Da;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
      fVar7 = in_XMM2_Da;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
        fVar7 = in_XMM2_Da;
      }
    }
  }
  piVar4[0xe] = iVar5;
  piVar4[0xf] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x38) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0x94) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x10];
    fVar7 = (float)piVar4[0x11];
    if (*(byte *)(lVar3 + 0x94) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
      fVar7 = in_XMM2_Da;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
      fVar7 = in_XMM2_Da;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
        fVar7 = in_XMM2_Da;
      }
    }
  }
  piVar4[0x10] = iVar5;
  piVar4[0x11] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x39) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0x95) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x12];
    fVar7 = (float)piVar4[0x13];
    if (*(byte *)(lVar3 + 0x95) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
      fVar7 = in_XMM2_Da;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
      fVar7 = in_XMM2_Da;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
        fVar7 = in_XMM2_Da;
      }
    }
  }
  piVar4[0x12] = iVar5;
  piVar4[0x13] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x3a) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0x96) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x14];
    fVar7 = (float)piVar4[0x15];
    if (*(byte *)(lVar3 + 0x96) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
      fVar7 = in_XMM2_Da;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
      fVar7 = in_XMM2_Da;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
        fVar7 = in_XMM2_Da;
      }
    }
  }
  piVar4[0x14] = iVar5;
  piVar4[0x15] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x3b) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0x97) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x16];
    fVar7 = (float)piVar4[0x17];
    if (*(byte *)(lVar3 + 0x97) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
      fVar7 = in_XMM2_Da;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
      fVar7 = in_XMM2_Da;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
        fVar7 = in_XMM2_Da;
      }
    }
  }
  piVar4[0x16] = iVar5;
  piVar4[0x17] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x3c) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0x98) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x18];
    fVar7 = (float)piVar4[0x19];
    if (*(byte *)(lVar3 + 0x98) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
      fVar7 = in_XMM2_Da;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
      fVar7 = in_XMM2_Da;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
        fVar7 = in_XMM2_Da;
      }
    }
  }
  piVar4[0x18] = iVar5;
  piVar4[0x19] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x3d) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0x99) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x1a];
    fVar7 = (float)piVar4[0x1b];
    if (*(byte *)(lVar3 + 0x99) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
      fVar7 = in_XMM2_Da;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
      fVar7 = in_XMM2_Da;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
        fVar7 = in_XMM2_Da;
      }
    }
  }
  piVar4[0x1a] = iVar5;
  piVar4[0x1b] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x3e) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0x9a) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x1c];
    fVar7 = (float)piVar4[0x1d];
    if (*(byte *)(lVar3 + 0x9a) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
      fVar7 = in_XMM2_Da;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
      fVar7 = in_XMM2_Da;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
        fVar7 = in_XMM2_Da;
      }
    }
  }
  piVar4[0x1c] = iVar5;
  piVar4[0x1d] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x3f) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0x9b) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x1e];
    fVar7 = (float)piVar4[0x1f];
    if (*(byte *)(lVar3 + 0x9b) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
      fVar7 = in_XMM2_Da;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
      fVar7 = in_XMM2_Da;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
        fVar7 = in_XMM2_Da;
      }
    }
  }
  piVar4[0x1e] = iVar5;
  piVar4[0x1f] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x40) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0x9c) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x20];
    fVar7 = (float)piVar4[0x21];
    if (*(byte *)(lVar3 + 0x9c) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
      fVar7 = in_XMM2_Da;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
      fVar7 = in_XMM2_Da;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
        fVar7 = in_XMM2_Da;
      }
    }
  }
  piVar4[0x20] = iVar5;
  piVar4[0x21] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x41) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0x9d) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x22];
    fVar7 = (float)piVar4[0x23];
    if (*(byte *)(lVar3 + 0x9d) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
      fVar7 = in_XMM2_Da;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
      fVar7 = in_XMM2_Da;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
        fVar7 = in_XMM2_Da;
      }
    }
  }
  piVar4[0x22] = iVar5;
  piVar4[0x23] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x42) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0x9e) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x24];
    fVar7 = (float)piVar4[0x25];
    if (*(byte *)(lVar3 + 0x9e) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
      fVar7 = in_XMM2_Da;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
      fVar7 = in_XMM2_Da;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
        fVar7 = in_XMM2_Da;
      }
    }
  }
  piVar4[0x24] = iVar5;
  piVar4[0x25] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x43) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0x9f) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x26];
    fVar7 = (float)piVar4[0x27];
    if (*(byte *)(lVar3 + 0x9f) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
      fVar7 = in_XMM2_Da;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
      fVar7 = in_XMM2_Da;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
        fVar7 = in_XMM2_Da;
      }
    }
  }
  piVar4[0x26] = iVar5;
  piVar4[0x27] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x44) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0xa0) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x28];
    fVar7 = (float)piVar4[0x29];
    if (*(byte *)(lVar3 + 0xa0) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
      fVar7 = in_XMM2_Da;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
      fVar7 = in_XMM2_Da;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
        fVar7 = in_XMM2_Da;
      }
    }
  }
  piVar4[0x28] = iVar5;
  piVar4[0x29] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x45) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0xa1) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x2a];
    fVar7 = (float)piVar4[0x2b];
    if (*(byte *)(lVar3 + 0xa1) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
      fVar7 = in_XMM2_Da;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
      fVar7 = in_XMM2_Da;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
        fVar7 = in_XMM2_Da;
      }
    }
  }
  piVar4[0x2a] = iVar5;
  piVar4[0x2b] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x46) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0xa2) ^ 1) << 2;
  }
  else {
    iVar5 = piVar4[0x2c];
    fVar7 = (float)piVar4[0x2d];
    if (*(byte *)(lVar3 + 0xa2) == 0) {
      if (iVar5 != 1) {
        fVar7 = 0.0;
      }
      iVar5 = 3;
    }
    else if (iVar5 == 2) {
      in_XMM2_Da = 0.0;
      fVar6 = fVar7;
      if ((fVar7 <= 0.0) &&
         (fVar6 = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        fVar6 = _DAT_142e37ad4;
      }
      fVar7 = fVar6 - fVar1;
      iVar5 = 2;
    }
    else if (iVar5 == 1) {
      fVar6 = fVar7 + fVar1;
      fVar7 = fVar6;
      if (fVar6 >= _DAT_142e3787c) {
        fVar7 = _DAT_142e3b1d8;
      }
      iVar5 = 2 - (uint)(fVar6 < _DAT_142e3787c);
    }
    else {
      iVar5 = 1;
      fVar7 = 0.0;
    }
  }
  piVar4[0x2c] = iVar5;
  piVar4[0x2d] = (int)fVar7;
  if (*(char *)(lVar3 + 0x47) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0xa3) ^ 1) << 2;
  }
  else {
    iVar5 = piVar4[0x2e];
    fVar7 = (float)piVar4[0x2f];
    if (*(byte *)(lVar3 + 0xa3) == 0) {
      if (iVar5 != 1) {
        fVar7 = 0.0;
      }
      iVar5 = 3;
    }
    else if (iVar5 == 2) {
      in_XMM2_Da = 0.0;
      fVar6 = fVar7;
      if ((fVar7 <= 0.0) &&
         (fVar6 = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        fVar6 = _DAT_142e37ad4;
      }
      fVar7 = fVar6 - fVar1;
      iVar5 = 2;
    }
    else if (iVar5 == 1) {
      fVar6 = fVar7 + fVar1;
      fVar7 = fVar6;
      if (fVar6 >= _DAT_142e3787c) {
        fVar7 = _DAT_142e3b1d8;
      }
      iVar5 = 2 - (uint)(fVar6 < _DAT_142e3787c);
    }
    else {
      iVar5 = 1;
      fVar7 = 0.0;
    }
  }
  piVar4[0x2e] = iVar5;
  piVar4[0x2f] = (int)fVar7;
  if (*(char *)(lVar3 + 0x48) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0xa4) ^ 1) << 2;
  }
  else {
    iVar5 = piVar4[0x30];
    fVar7 = (float)piVar4[0x31];
    if (*(byte *)(lVar3 + 0xa4) == 0) {
      if (iVar5 != 1) {
        fVar7 = 0.0;
      }
      iVar5 = 3;
    }
    else if (iVar5 == 2) {
      in_XMM2_Da = 0.0;
      fVar6 = fVar7;
      if ((fVar7 <= 0.0) &&
         (fVar6 = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        fVar6 = _DAT_142e37ad4;
      }
      fVar7 = fVar6 - fVar1;
      iVar5 = 2;
    }
    else if (iVar5 == 1) {
      fVar6 = fVar7 + fVar1;
      fVar7 = fVar6;
      if (fVar6 >= _DAT_142e3787c) {
        fVar7 = _DAT_142e3b1d8;
      }
      iVar5 = 2 - (uint)(fVar6 < _DAT_142e3787c);
    }
    else {
      iVar5 = 1;
      fVar7 = 0.0;
    }
  }
  piVar4[0x30] = iVar5;
  piVar4[0x31] = (int)fVar7;
  if (*(char *)(lVar3 + 0x49) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0xa5) ^ 1) << 2;
  }
  else {
    iVar5 = piVar4[0x32];
    fVar7 = (float)piVar4[0x33];
    if (*(byte *)(lVar3 + 0xa5) == 0) {
      if (iVar5 != 1) {
        fVar7 = 0.0;
      }
      iVar5 = 3;
    }
    else if (iVar5 == 2) {
      in_XMM2_Da = 0.0;
      fVar6 = fVar7;
      if ((fVar7 <= 0.0) &&
         (fVar6 = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        fVar6 = _DAT_142e37ad4;
      }
      fVar7 = fVar6 - fVar1;
      iVar5 = 2;
    }
    else if (iVar5 == 1) {
      fVar6 = fVar7 + fVar1;
      fVar7 = fVar6;
      if (fVar6 >= _DAT_142e3787c) {
        fVar7 = _DAT_142e3b1d8;
      }
      iVar5 = 2 - (uint)(fVar6 < _DAT_142e3787c);
    }
    else {
      iVar5 = 1;
      fVar7 = 0.0;
    }
  }
  piVar4[0x32] = iVar5;
  piVar4[0x33] = (int)fVar7;
  if (*(char *)(lVar3 + 0x4a) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0xa6) ^ 1) << 2;
  }
  else {
    iVar5 = piVar4[0x34];
    fVar7 = (float)piVar4[0x35];
    if (*(byte *)(lVar3 + 0xa6) == 0) {
      if (iVar5 != 1) {
        fVar7 = 0.0;
      }
      iVar5 = 3;
    }
    else if (iVar5 == 2) {
      in_XMM2_Da = 0.0;
      fVar6 = fVar7;
      if ((fVar7 <= 0.0) &&
         (fVar6 = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        fVar6 = _DAT_142e37ad4;
      }
      fVar7 = fVar6 - fVar1;
      iVar5 = 2;
    }
    else if (iVar5 == 1) {
      fVar6 = fVar7 + fVar1;
      fVar7 = fVar6;
      if (fVar6 >= _DAT_142e3787c) {
        fVar7 = _DAT_142e3b1d8;
      }
      iVar5 = 2 - (uint)(fVar6 < _DAT_142e3787c);
    }
    else {
      iVar5 = 1;
      fVar7 = 0.0;
    }
  }
  piVar4[0x34] = iVar5;
  piVar4[0x35] = (int)fVar7;
  if (*(char *)(lVar3 + 0x4b) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0xa7) ^ 1) << 2;
  }
  else {
    iVar5 = piVar4[0x36];
    fVar7 = (float)piVar4[0x37];
    if (*(byte *)(lVar3 + 0xa7) == 0) {
      if (iVar5 != 1) {
        fVar7 = 0.0;
      }
      iVar5 = 3;
    }
    else if (iVar5 == 2) {
      in_XMM2_Da = 0.0;
      fVar6 = fVar7;
      if ((fVar7 <= 0.0) &&
         (fVar6 = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        fVar6 = _DAT_142e37ad4;
      }
      fVar7 = fVar6 - fVar1;
      iVar5 = 2;
    }
    else if (iVar5 == 1) {
      fVar6 = fVar7 + fVar1;
      fVar7 = fVar6;
      if (fVar6 >= _DAT_142e3787c) {
        fVar7 = _DAT_142e3b1d8;
      }
      iVar5 = 2 - (uint)(fVar6 < _DAT_142e3787c);
    }
    else {
      iVar5 = 1;
      fVar7 = 0.0;
    }
  }
  piVar4[0x36] = iVar5;
  piVar4[0x37] = (int)fVar7;
  if (*(char *)(lVar3 + 0x4c) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0xa8) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x38];
    fVar7 = (float)piVar4[0x39];
    if (*(byte *)(lVar3 + 0xa8) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
      }
    }
  }
  piVar4[0x38] = iVar5;
  piVar4[0x39] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x4d) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0xa9) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x3a];
    fVar7 = (float)piVar4[0x3b];
    if (*(byte *)(lVar3 + 0xa9) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
      }
    }
  }
  piVar4[0x3a] = iVar5;
  piVar4[0x3b] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x4e) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0xaa) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x3c];
    fVar7 = (float)piVar4[0x3d];
    if (*(byte *)(lVar3 + 0xaa) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
      }
    }
  }
  piVar4[0x3c] = iVar5;
  piVar4[0x3d] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x4f) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0xab) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x3e];
    fVar7 = (float)piVar4[0x3f];
    if (*(byte *)(lVar3 + 0xab) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
      }
    }
  }
  piVar4[0x3e] = iVar5;
  piVar4[0x3f] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x50) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0xac) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x40];
    fVar7 = (float)piVar4[0x41];
    if (*(byte *)(lVar3 + 0xac) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
      }
    }
  }
  piVar4[0x40] = iVar5;
  piVar4[0x41] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x51) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0xad) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x42];
    fVar7 = (float)piVar4[0x43];
    if (*(byte *)(lVar3 + 0xad) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
      }
    }
  }
  piVar4[0x42] = iVar5;
  piVar4[0x43] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x52) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0xae) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x44];
    fVar7 = (float)piVar4[0x45];
    if (*(byte *)(lVar3 + 0xae) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
      }
    }
  }
  piVar4[0x44] = iVar5;
  piVar4[0x45] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x53) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0xaf) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x46];
    fVar7 = (float)piVar4[0x47];
    if (*(byte *)(lVar3 + 0xaf) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
      }
    }
  }
  piVar4[0x46] = iVar5;
  piVar4[0x47] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x54) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0xb0) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x48];
    fVar7 = (float)piVar4[0x49];
    if (*(byte *)(lVar3 + 0xb0) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
      }
    }
  }
  piVar4[0x48] = iVar5;
  piVar4[0x49] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x55) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0xb1) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x4a];
    fVar7 = (float)piVar4[0x4b];
    if (*(byte *)(lVar3 + 0xb1) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
      }
    }
  }
  piVar4[0x4a] = iVar5;
  piVar4[0x4b] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x56) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0xb2) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x4c];
    fVar7 = (float)piVar4[0x4d];
    if (*(byte *)(lVar3 + 0xb2) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
      }
    }
  }
  piVar4[0x4c] = iVar5;
  piVar4[0x4d] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x57) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0xb3) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x4e];
    fVar7 = (float)piVar4[0x4f];
    if (*(byte *)(lVar3 + 0xb3) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
      }
    }
  }
  piVar4[0x4e] = iVar5;
  piVar4[0x4f] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x58) == '\0') {
    iVar5 = (uint)(*(byte *)(lVar3 + 0xb4) ^ 1) << 2;
  }
  else {
    iVar2 = piVar4[0x50];
    fVar7 = (float)piVar4[0x51];
    if (*(byte *)(lVar3 + 0xb4) == 0) {
      in_XMM2_Da = fVar7;
      if (iVar2 != 1) {
        in_XMM2_Da = 0.0;
      }
      iVar5 = 3;
    }
    else if (iVar2 == 2) {
      in_XMM2_Da = fVar7;
      if ((fVar7 <= 0.0) &&
         (in_XMM2_Da = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)) {
        in_XMM2_Da = _DAT_142e37ad4;
      }
      in_XMM2_Da = in_XMM2_Da - fVar1;
      iVar5 = 2;
    }
    else {
      in_XMM2_Da = 0.0;
      iVar5 = 1;
      if (iVar2 == 1) {
        in_XMM2_Da = fVar7 + fVar1;
        iVar5 = 1;
      }
    }
  }
  piVar4[0x50] = iVar5;
  piVar4[0x51] = (int)in_XMM2_Da;
  if (*(char *)(lVar3 + 0x59) == '\0') {
    piVar4[0x52] = (uint)(*(byte *)(lVar3 + 0xb5) ^ 1) << 2;
    piVar4[0x53] = (int)in_XMM2_Da;
    return;
  }
  iVar5 = piVar4[0x52];
  fVar7 = (float)piVar4[0x53];
  if (*(byte *)(lVar3 + 0xb5) == 0) {
    if (iVar5 != 1) {
      fVar7 = 0.0;
    }
    piVar4[0x52] = 3;
    piVar4[0x53] = (int)fVar7;
    return;
  }
  if (iVar5 == 2) {
    fVar6 = fVar7;
    if ((fVar7 <= 0.0) && (fVar6 = fVar7 + _DAT_142e3b1d8, fVar7 + _DAT_142e3b1d8 <= _DAT_142e37ad4)
       ) {
      fVar6 = _DAT_142e37ad4;
    }
    piVar4[0x52] = 2;
    piVar4[0x53] = (int)(fVar6 - fVar1);
    return;
  }
  fVar6 = 0.0;
  if (iVar5 == 1) {
    fVar6 = fVar1 + fVar7;
  }
  piVar4[0x52] = 1;
  piVar4[0x53] = (int)fVar6;
  return;
}

