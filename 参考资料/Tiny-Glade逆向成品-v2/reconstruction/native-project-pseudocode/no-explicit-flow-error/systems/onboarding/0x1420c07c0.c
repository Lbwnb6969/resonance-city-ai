// VA 0x1420c07c0, PDB extent 773 bytes
// system_onboarding::hint_binding::BindingHintDisplay::alternate<array$<enum2$<core::option::Option<ref$<enum2$<country_core::game_key_bindings::InputBinding> > > >,4> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_binding.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_onboarding::hint_binding::BindingHintDisplay::alternate<array$<enum2$<core::option::Option<ref$<enum2$<country_core::game_key_bindings::InputBinding>
   > > >,4> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_binding.rs
   Extent: 773 */

undefined4 * pdb_1420c07c0(undefined4 *param_1,int *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  longlong lStack_48;
  int iStack_34;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  iStack_34 = *param_2;
  if (iStack_34 != 0xcb) {
    pdb_14007ee60();
    pbVar10 = pub_1406abab0(0x60,8);
    if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x60);
    }
    puVar14 = (undefined4 *)*param_3;
    uVar9 = 0xc4;
    if (puVar14 == (undefined4 *)0x0) {
      uVar16 = 0xc4;
      puVar14 = (undefined4 *)param_3[1];
      uVar12 = 0;
      uVar11 = 0;
      if (puVar14 != (undefined4 *)0x0) goto LAB_1420c088d;
LAB_1420c098e:
      uVar17 = 0;
      puVar14 = (undefined4 *)param_3[2];
      if (puVar14 != (undefined4 *)0x0) goto LAB_1420c08a7;
LAB_1420c09a1:
      uVar11 = 0;
      uVar18 = 0xc4;
      puVar14 = (undefined4 *)param_3[3];
    }
    else {
      uVar16 = *puVar14;
      uVar12 = *(undefined8 *)(puVar14 + 1);
      puVar14 = (undefined4 *)param_3[1];
      uVar11 = uVar12;
      if (puVar14 == (undefined4 *)0x0) goto LAB_1420c098e;
LAB_1420c088d:
      uVar9 = *puVar14;
      uVar17 = *(undefined8 *)(puVar14 + 1);
      puVar14 = (undefined4 *)param_3[2];
      uVar12 = uVar11;
      if (puVar14 == (undefined4 *)0x0) goto LAB_1420c09a1;
LAB_1420c08a7:
      uVar18 = *puVar14;
      uVar11 = *(undefined8 *)(puVar14 + 1);
      puVar14 = (undefined4 *)param_3[3];
    }
    uVar19 = 0xc4;
    uVar15 = 0;
    if (puVar14 != (undefined4 *)0x0) {
      uVar19 = *puVar14;
      uVar15 = *(undefined8 *)(puVar14 + 1);
    }
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)(param_2 + 2);
    uVar5 = *(undefined8 *)(param_2 + 4);
    uVar6 = *(undefined8 *)(param_2 + 6);
    uVar7 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(pbVar10 + 0x20) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(pbVar10 + 0x28) = uVar7;
    *(undefined8 *)(pbVar10 + 0x10) = uVar5;
    *(undefined8 *)(pbVar10 + 0x18) = uVar6;
    *(undefined8 *)pbVar10 = uVar3;
    *(undefined8 *)(pbVar10 + 8) = uVar4;
    *(undefined4 *)(pbVar10 + 0x30) = uVar16;
    *(undefined8 *)(pbVar10 + 0x34) = uVar12;
    *(undefined4 *)(pbVar10 + 0x3c) = uVar9;
    *(undefined8 *)(pbVar10 + 0x40) = uVar17;
    *(undefined4 *)(pbVar10 + 0x48) = uVar18;
    *(undefined8 *)(pbVar10 + 0x4c) = uVar11;
    *(undefined4 *)(pbVar10 + 0x54) = uVar19;
    *(undefined8 *)(pbVar10 + 0x58) = uVar15;
    *(undefined8 *)(param_1 + 2) = 2;
    *(byte **)(param_1 + 4) = pbVar10;
    *(undefined8 *)(param_1 + 6) = 2;
    goto LAB_1420c0a00;
  }
  lVar2 = *(longlong *)(param_2 + 6);
  iStack_58 = (int)*(longlong *)(param_2 + 2);
  iStack_54 = param_2[3];
  iStack_50 = param_2[4];
  iStack_4c = param_2[5];
  puVar14 = (undefined4 *)*param_3;
  uVar9 = 0xc4;
  if (puVar14 == (undefined4 *)0x0) {
    uVar16 = 0xc4;
    puVar14 = (undefined4 *)param_3[1];
    uVar12 = 0;
    uVar11 = 0;
    if (puVar14 != (undefined4 *)0x0) goto LAB_1420c0825;
LAB_1420c08d9:
    uVar17 = 0;
    puVar14 = (undefined4 *)param_3[2];
    if (puVar14 != (undefined4 *)0x0) goto LAB_1420c083f;
LAB_1420c08ec:
    uVar11 = 0;
    uVar18 = 0xc4;
  }
  else {
    uVar16 = *puVar14;
    uVar12 = *(undefined8 *)(puVar14 + 1);
    puVar14 = (undefined4 *)param_3[1];
    uVar11 = uVar12;
    if (puVar14 == (undefined4 *)0x0) goto LAB_1420c08d9;
LAB_1420c0825:
    uVar9 = *puVar14;
    uVar17 = *(undefined8 *)(puVar14 + 1);
    puVar14 = (undefined4 *)param_3[2];
    uVar12 = uVar11;
    if (puVar14 == (undefined4 *)0x0) goto LAB_1420c08ec;
LAB_1420c083f:
    uVar18 = *puVar14;
    uVar11 = *(undefined8 *)(puVar14 + 1);
  }
  uVar19 = 0xc4;
  puVar14 = (undefined4 *)param_3[3];
  uVar15 = 0;
  if (puVar14 != (undefined4 *)0x0) {
    uVar19 = *puVar14;
    uVar15 = *(undefined8 *)(puVar14 + 1);
  }
  uStack_8c = (undefined4)uVar12;
  uStack_88 = (undefined4)((ulonglong)uVar12 >> 0x20);
  uStack_74 = (undefined4)uVar11;
  uStack_70 = (undefined4)((ulonglong)uVar11 >> 0x20);
  if (lVar2 == *(longlong *)(param_2 + 2)) {
    lStack_48 = lVar2;
    pdb_142d7e7c0(&iStack_58);
  }
  lVar8 = CONCAT44(iStack_4c,iStack_50);
  lVar13 = lVar2 * 0x30;
  puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar13);
  *puVar1 = CONCAT44(uVar19,uStack_70);
  puVar1[1] = uVar15;
  puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar13);
  *puVar1 = uVar17;
  puVar1[1] = CONCAT44(uStack_74,uVar18);
  *(undefined8 *)(lVar8 + lVar13) = CONCAT44(uStack_8c,uVar16);
  ((undefined8 *)(lVar8 + lVar13))[1] = CONCAT44(uVar9,uStack_88);
  *(longlong *)(param_1 + 6) = lVar2 + 1;
  *(ulonglong *)(param_1 + 2) = CONCAT44(iStack_54,iStack_58);
  *(ulonglong *)(param_1 + 4) = CONCAT44(iStack_4c,iStack_50);
LAB_1420c0a00:
  *param_1 = 0xcb;
  return param_1;
}

