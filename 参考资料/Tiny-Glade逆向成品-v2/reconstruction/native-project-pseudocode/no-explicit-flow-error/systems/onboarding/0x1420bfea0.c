// VA 0x1420bfea0, PDB extent 693 bytes
// system_onboarding::hint_binding::BindingHintDisplay::adjacent<enum2$<core::option::Option<ref$<enum2$<country_core::game_key_bindings::InputBinding> > > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_binding.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_onboarding::hint_binding::BindingHintDisplay::adjacent<enum2$<core::option::Option<ref$<enum2$<country_core::game_key_bindings::InputBinding>
   > > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_binding.rs
   Extent: 693 */

undefined4 * pdb_1420bfea0(undefined4 *param_1,int *param_2,uint *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  byte *pbVar9;
  ushort uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  ushort uVar16;
  undefined8 in_R10;
  undefined4 uVar17;
  bool bVar18;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  ushort uStack_8a;
  ushort uStack_88;
  ushort uStack_86;
  uint uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  longlong lStack_48;
  int iStack_34;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  iStack_34 = *param_2;
  if (iStack_34 == 0xcc) {
    lVar2 = *(longlong *)(param_2 + 6);
    iStack_58 = (int)*(longlong *)(param_2 + 2);
    iStack_54 = param_2[3];
    iStack_50 = param_2[4];
    iStack_4c = param_2[5];
    if (param_3 == (uint *)0x0) {
      uStack_90 = 0xc5;
      uVar10 = uStack_8a;
    }
    else {
      uVar15 = *param_3;
      uVar10 = (ushort)param_3[1];
      if (uVar15 == 0xc3 && uVar10 < 3) {
        uStack_8c = 0;
        uStack_90 = 199;
        uStack_88 = *(ushort *)((longlong)param_3 + 6);
      }
      else {
        uStack_84 = param_3[2];
        uStack_8c = (undefined2)uVar15;
        uStack_8a = (ushort)(uVar15 >> 0x10);
        uStack_90 = 200;
        uStack_88 = uVar10;
        uStack_86 = *(ushort *)((longlong)param_3 + 6);
        uVar10 = uStack_8a;
      }
    }
    if (lVar2 == *(longlong *)(param_2 + 2)) {
      lStack_48 = lVar2;
      pdb_142d7e7c0(&iStack_58);
    }
    lVar8 = CONCAT44(iStack_4c,iStack_50);
    lVar11 = lVar2 * 0x30;
    puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar11);
    *puVar1 = uStack_70;
    puVar1[1] = uStack_68;
    puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar11);
    *puVar1 = uStack_80;
    puVar1[1] = uStack_78;
    *(undefined8 *)(lVar8 + lVar11) = CONCAT26(uVar10,CONCAT24(uStack_8c,uStack_90));
    ((undefined8 *)(lVar8 + lVar11))[1] = CONCAT44(uStack_84,CONCAT22(uStack_86,uStack_88));
    *(longlong *)(param_1 + 6) = lVar2 + 1;
    *(ulonglong *)(param_1 + 2) = CONCAT44(iStack_54,iStack_58);
    *(ulonglong *)(param_1 + 4) = CONCAT44(iStack_4c,iStack_50);
  }
  else {
    puVar14 = param_3;
    pdb_14007ee60();
    uVar13 = (uint)puVar14;
    uVar10 = 0x60;
    pbVar9 = pub_1406abab0(0x60,8);
    uVar15 = (uint)param_4;
    uVar16 = (ushort)in_R10;
    if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x60);
    }
    uVar12 = 0;
    if (param_3 == (uint *)0x0) {
      uVar17 = 0xc5;
    }
    else {
      uVar12 = *param_3;
      uVar10 = (ushort)param_3[1];
      uVar13 = (uint)uVar10;
      uVar16 = *(ushort *)((longlong)param_3 + 6);
      uVar15 = (uint)CONCAT71((int7)((ulonglong)param_4 >> 8),uVar12 == 0xc3);
      bVar18 = uVar10 < 3;
      if (uVar12 == 0xc3 && bVar18) {
        uVar17 = 199;
        uVar12 = 0;
        uVar10 = uVar16;
        uVar16 = (ushort)CONCAT71((int7)((ulonglong)in_R10 >> 8),bVar18);
      }
      else {
        uVar15 = param_3[2];
        uVar13 = uVar12 >> 0x10;
        uVar12 = uVar12 & 0xffff;
        uVar17 = 200;
      }
    }
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)(param_2 + 2);
    uVar5 = *(undefined8 *)(param_2 + 4);
    uVar6 = *(undefined8 *)(param_2 + 6);
    uVar7 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(pbVar9 + 0x20) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(pbVar9 + 0x28) = uVar7;
    *(undefined8 *)(pbVar9 + 0x10) = uVar5;
    *(undefined8 *)(pbVar9 + 0x18) = uVar6;
    *(undefined8 *)pbVar9 = uVar3;
    *(undefined8 *)(pbVar9 + 8) = uVar4;
    *(undefined4 *)(pbVar9 + 0x30) = uVar17;
    *(uint *)(pbVar9 + 0x34) = uVar13 << 0x10 | uVar12;
    *(ushort *)(pbVar9 + 0x38) = uVar10;
    *(ushort *)(pbVar9 + 0x3a) = uVar16;
    *(uint *)(pbVar9 + 0x3c) = uVar15;
    *(undefined8 *)(param_1 + 2) = 2;
    *(byte **)(param_1 + 4) = pbVar9;
    *(undefined8 *)(param_1 + 6) = 2;
  }
  *param_1 = 0xcc;
  return param_1;
}

