// VA 0x1420c0160, PDB extent 456 bytes
// system_onboarding::hint_binding::BindingHintDisplay::together<enum2$<system_onboarding::hint_binding::BindingHintDisplay> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_binding.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_onboarding::hint_binding::BindingHintDisplay::together<enum2$<system_onboarding::hint_binding::BindingHintDisplay>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_binding.rs
   Extent: 456 */

undefined4 * pdb_1420c0160(undefined4 *param_1,int *param_2,undefined8 *param_3)

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
  longlong lVar10;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  longlong lStack_58;
  int *piStack_48;
  undefined8 *puStack_40;
  int iStack_34;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  iStack_34 = *param_2;
  piStack_48 = param_2;
  puStack_40 = param_3;
  if (iStack_34 == 0xcd) {
    iStack_68 = (int)*(longlong *)(param_2 + 2);
    iStack_64 = param_2[3];
    iStack_60 = param_2[4];
    iStack_5c = param_2[5];
    lVar2 = *(longlong *)(param_2 + 6);
    if (lVar2 == *(longlong *)(param_2 + 2)) {
      lStack_58 = lVar2;
      pdb_142d7e7c0(&iStack_68);
    }
    lVar8 = CONCAT44(iStack_5c,iStack_60);
    lVar10 = lVar2 * 0x30;
    uVar3 = *puStack_40;
    uVar4 = puStack_40[1];
    uVar5 = puStack_40[2];
    uVar6 = puStack_40[3];
    uVar7 = puStack_40[5];
    puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar10);
    *puVar1 = puStack_40[4];
    puVar1[1] = uVar7;
    puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar10);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    *(undefined8 *)(lVar8 + lVar10) = uVar3;
    ((undefined8 *)(lVar8 + lVar10))[1] = uVar4;
    *(longlong *)(param_1 + 6) = lVar2 + 1;
    *(ulonglong *)(param_1 + 2) = CONCAT44(iStack_64,iStack_68);
    *(ulonglong *)(param_1 + 4) = CONCAT44(iStack_5c,iStack_60);
  }
  else {
    pdb_14007ee60();
    pbVar9 = pub_1406abab0(0x60,8);
    if (pbVar9 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(8,0x60);
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
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    *(undefined8 *)(pbVar9 + 0x30) = *param_3;
    *(undefined8 *)(pbVar9 + 0x38) = uVar3;
    *(undefined8 *)(pbVar9 + 0x40) = uVar4;
    *(undefined8 *)(pbVar9 + 0x48) = uVar5;
    *(undefined8 *)(pbVar9 + 0x50) = uVar6;
    *(undefined8 *)(pbVar9 + 0x58) = uVar7;
    *(undefined8 *)(param_1 + 2) = 2;
    *(byte **)(param_1 + 4) = pbVar9;
    *(undefined8 *)(param_1 + 6) = 2;
  }
  *param_1 = 0xcd;
  return param_1;
}

