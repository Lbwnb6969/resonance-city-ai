// VA 0x14093b9d0, PDB extent 590 bytes
// country_core::systems::backend::input::reset_input_state::reset_input_state
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/input/reset_input_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::backend::input::reset_input_state::reset_input_state
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/input/reset_input_state.rs
   Extent: 590 */

void pdb_14093b9d0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x1c);
  puVar2 = (undefined4 *)param_1[2];
  *puVar2 = uVar1;
  puVar3 = (undefined4 *)*param_1;
  uVar9 = *(undefined8 *)(puVar3 + 0x2c);
  uStack_28 = (undefined4)((ulonglong)*(undefined8 *)(puVar3 + 0x2a) >> 0x20);
  uVar10 = *(undefined8 *)(puVar3 + 0x27);
  uVar11 = *(undefined8 *)(puVar3 + 0x29);
  uStack_2c = (undefined4)((ulonglong)uVar11 >> 0x20);
  uVar12 = *(undefined8 *)(puVar3 + 0x17);
  uVar13 = *(undefined8 *)(puVar3 + 0x19);
  uVar14 = *(undefined8 *)(puVar3 + 0x1b);
  uVar15 = *(undefined8 *)(puVar3 + 0x1d);
  uVar16 = *(undefined8 *)(puVar3 + 0x1f);
  uVar17 = *(undefined8 *)(puVar3 + 0x21);
  uVar18 = *(undefined8 *)(puVar3 + 0x23);
  uVar19 = *(undefined8 *)(puVar3 + 0x25);
  *(undefined8 *)(puVar3 + 0x17) = 0;
  *(undefined8 *)(puVar3 + 0x19) = 0;
  *(undefined8 *)(puVar3 + 0x1b) = 0;
  *(undefined8 *)(puVar3 + 0x1d) = 0;
  *(undefined8 *)(puVar3 + 0x1f) = 0;
  *(undefined8 *)(puVar3 + 0x21) = 0;
  *(undefined8 *)(puVar3 + 0x23) = 0;
  *(undefined8 *)(puVar3 + 0x25) = 0;
  *(undefined8 *)(puVar3 + 0x27) = 0;
  *(undefined8 *)(puVar3 + 0x29) = 0;
  *(undefined8 *)((longlong)puVar3 + 0xa6) = 0;
  *(undefined8 *)((longlong)puVar3 + 0xae) = 0;
  *puVar2 = uVar1;
  *(ulonglong *)(puVar3 + 0x13) = CONCAT44(uStack_28,uStack_2c);
  *(undefined8 *)(puVar3 + 0x15) = uVar9;
  *(undefined8 *)(puVar3 + 0x10) = uVar10;
  *(undefined8 *)(puVar3 + 0x12) = uVar11;
  uStack_78 = (undefined4)uVar12;
  uStack_74 = (undefined4)((ulonglong)uVar12 >> 0x20);
  uStack_70 = (undefined4)uVar13;
  uStack_6c = (undefined4)((ulonglong)uVar13 >> 0x20);
  uStack_68 = (undefined4)uVar14;
  uStack_64 = (undefined4)((ulonglong)uVar14 >> 0x20);
  uStack_60 = (undefined4)uVar15;
  uStack_5c = (undefined4)((ulonglong)uVar15 >> 0x20);
  uStack_58 = (undefined4)uVar16;
  uStack_54 = (undefined4)((ulonglong)uVar16 >> 0x20);
  uStack_50 = (undefined4)uVar17;
  uStack_4c = (undefined4)((ulonglong)uVar17 >> 0x20);
  uStack_48 = (undefined4)uVar18;
  uStack_44 = (undefined4)((ulonglong)uVar18 >> 0x20);
  uStack_40 = (undefined4)uVar19;
  uStack_3c = (undefined4)((ulonglong)uVar19 >> 0x20);
  puVar3[0xc] = uStack_48;
  puVar3[0xd] = uStack_44;
  puVar3[0xe] = uStack_40;
  puVar3[0xf] = uStack_3c;
  puVar3[8] = uStack_58;
  puVar3[9] = uStack_54;
  puVar3[10] = uStack_50;
  puVar3[0xb] = uStack_4c;
  puVar3[4] = uStack_68;
  puVar3[5] = uStack_64;
  puVar3[6] = uStack_60;
  puVar3[7] = uStack_5c;
  *puVar3 = uStack_78;
  puVar3[1] = uStack_74;
  puVar3[2] = uStack_70;
  puVar3[3] = uStack_6c;
  puVar20 = (ulonglong *)*param_2;
  lVar4 = param_2[1];
  uVar5 = *puVar20;
  uVar22 = 0;
  uVar21 = uVar5 - *(ulonglong *)(lVar4 + 0x18);
  if (uVar5 < *(ulonglong *)(lVar4 + 0x18)) {
    uVar21 = uVar22;
  }
  uVar24 = uVar5 - *(ulonglong *)(lVar4 + 0x38);
  if (uVar5 < *(ulonglong *)(lVar4 + 0x38)) {
    uVar24 = uVar22;
  }
  uVar5 = *(ulonglong *)(lVar4 + 0x30);
  uVar25 = uVar5 - uVar24;
  if (uVar5 < uVar24) {
    uVar25 = uVar22;
  }
  uVar23 = uVar24 & 0xffffffffffffff00;
  uVar6 = *(ulonglong *)(lVar4 + 0x10);
  uVar26 = uVar6 - uVar21;
  if (uVar6 < uVar21) {
    uVar26 = uVar22;
  }
  uVar22 = *(ulonglong *)(lVar4 + 0x40);
  *puVar20 = uVar22 - (uVar26 + uVar25);
  if ((uVar6 < uVar21 || uVar6 - uVar21 == 0) && (uVar5 < uVar24 || uVar5 - uVar24 == 0)) {
    puVar20 = (ulonglong *)*param_3;
    lVar4 = param_3[1];
    uVar5 = *puVar20;
    uVar22 = 0;
    uVar21 = uVar5 - *(ulonglong *)(lVar4 + 0x18);
    if (uVar5 < *(ulonglong *)(lVar4 + 0x18)) {
      uVar21 = uVar22;
    }
    uVar24 = uVar5 - *(ulonglong *)(lVar4 + 0x38);
    if (uVar5 < *(ulonglong *)(lVar4 + 0x38)) {
      uVar24 = uVar22;
    }
    uVar5 = *(ulonglong *)(lVar4 + 0x30);
    uVar25 = uVar5 - uVar24;
    if (uVar5 < uVar24) {
      uVar25 = uVar22;
    }
    bVar8 = uVar5 < uVar24 || uVar5 - uVar24 == 0;
    uVar23 = CONCAT71((int7)(uVar24 >> 8),bVar8);
    uVar5 = *(ulonglong *)(lVar4 + 0x10);
    uVar24 = uVar5 - uVar21;
    if (uVar5 < uVar21) {
      uVar24 = uVar22;
    }
    uVar22 = *(ulonglong *)(lVar4 + 0x40);
    *puVar20 = uVar22 - (uVar24 + uVar25);
    if ((uVar5 < uVar21 || uVar5 - uVar21 == 0) && bVar8) {
      return;
    }
  }
  *puVar20 = uVar22;
  *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
  puVar7 = (undefined8 *)*param_4;
  if (puVar7[3] != 0) {
    uVar5 = puVar7[1];
    if (uVar5 == 0) {
      uVar21 = 0;
    }
    else {
      pub_142e32780(*puVar7,CONCAT71((int7)(uVar23 >> 8),0xff),uVar5 + 0x11);
      uVar21 = (uVar5 + 1 & 0xfffffffffffffff8) - (uVar5 + 1 >> 3);
      if (uVar5 < 8) {
        uVar21 = uVar5;
      }
    }
    puVar7[3] = 0;
    puVar7[2] = uVar21;
  }
  if (puVar7[7] != 0) {
    uVar5 = puVar7[5];
    if (uVar5 == 0) {
      uVar21 = 0;
    }
    else {
      pub_142e32780(puVar7[4],0xff,uVar5 + 0x11);
      uVar21 = (uVar5 + 1 & 0xfffffffffffffff8) - (uVar5 + 1 >> 3);
      if (uVar5 < 8) {
        uVar21 = uVar5;
      }
    }
    puVar7[7] = 0;
    puVar7[6] = uVar21;
  }
  if (puVar7[0xb] != 0) {
    uVar5 = puVar7[9];
    if (uVar5 == 0) {
      uVar21 = 0;
    }
    else {
      pub_142e32780(puVar7[8],0xff,uVar5 + 0x11);
      uVar21 = (uVar5 + 1 & 0xfffffffffffffff8) - (uVar5 + 1 >> 3);
      if (uVar5 < 8) {
        uVar21 = uVar5;
      }
    }
    puVar7[0xb] = 0;
    puVar7[10] = uVar21;
  }
  return;
}

