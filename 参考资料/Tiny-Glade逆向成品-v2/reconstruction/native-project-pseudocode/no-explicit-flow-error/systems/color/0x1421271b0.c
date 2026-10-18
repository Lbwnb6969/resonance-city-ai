// VA 0x1421271b0, PDB extent 312 bytes
// system_color::style_picker::restore_picker_before_history
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_picker.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_color::style_picker::restore_picker_before_history
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/color/src/style_picker.rs
   Extent: 312 */

void pdb_1421271b0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lStack_70;
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
  longlong lStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  puVar2 = (ulonglong *)*param_1;
  lVar3 = param_1[1];
  uVar4 = *puVar2;
  uVar11 = 0;
  uVar12 = uVar4 - *(ulonglong *)(lVar3 + 0x18);
  if (uVar4 < *(ulonglong *)(lVar3 + 0x18)) {
    uVar12 = uVar11;
  }
  uVar10 = uVar4 - *(ulonglong *)(lVar3 + 0x38);
  if (uVar4 < *(ulonglong *)(lVar3 + 0x38)) {
    uVar10 = uVar11;
  }
  uVar4 = *(ulonglong *)(lVar3 + 0x30);
  uVar8 = uVar4 - uVar10;
  if (uVar4 < uVar10) {
    uVar8 = uVar11;
  }
  uVar5 = *(ulonglong *)(lVar3 + 0x10);
  uVar9 = uVar5 - uVar12;
  if (uVar5 < uVar12) {
    uVar9 = uVar11;
  }
  uVar11 = *(ulonglong *)(lVar3 + 0x40);
  *puVar2 = uVar11 - (uVar9 + uVar8);
  if (uVar5 >= uVar12 && uVar5 - uVar12 != 0 || uVar4 >= uVar10 && uVar4 - uVar10 != 0) {
    *puVar2 = uVar11;
    uVar1 = *(undefined4 *)((longlong)param_2 + 0x1c);
    puVar6 = (undefined4 *)param_2[2];
    *puVar6 = uVar1;
    plVar7 = (longlong *)*param_2;
    lVar3 = *plVar7;
    *plVar7 = -0x8000000000000000;
    if (!SBORROW8(0,lVar3)) {
      uStack_68 = (undefined4)plVar7[1];
      uStack_64 = *(undefined4 *)((longlong)plVar7 + 0xc);
      uStack_60 = (undefined4)plVar7[2];
      uStack_5c = *(undefined4 *)((longlong)plVar7 + 0x14);
      uStack_58 = (undefined4)plVar7[3];
      uStack_54 = *(undefined4 *)((longlong)plVar7 + 0x1c);
      uStack_50 = (undefined4)plVar7[4];
      uStack_4c = *(undefined4 *)((longlong)plVar7 + 0x24);
      uStack_48 = (undefined4)plVar7[5];
      uStack_44 = *(undefined4 *)((longlong)plVar7 + 0x2c);
      uStack_40 = (undefined4)plVar7[6];
      uStack_3c = *(undefined4 *)((longlong)plVar7 + 0x34);
      lStack_38 = plVar7[7];
      lStack_70 = lVar3;
      pdb_142121690(param_3,&lStack_70,1);
      if (lVar3 != 0) {
        pub_1406abac0((byte *)CONCAT44(uStack_64,uStack_68),lVar3 << 5,8);
      }
      pdb_14109d800(&uStack_58);
    }
    *puVar6 = uVar1;
    *(byte *)(plVar7 + 0x11) = *(byte *)(plVar7 + 0x11) | !SBORROW8(0,lVar3);
  }
  return;
}

