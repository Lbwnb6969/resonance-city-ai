// VA 0x142895e80, PDB extent 311 bytes
// system_onboarding::hint_temp_eraser::hint_temp_eraser
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_temp_eraser.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_temp_eraser::hint_temp_eraser
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_temp_eraser.rs
   Extent: 311 */

void pdb_142895e80(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined4 auStack_98 [2];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  puVar2 = (undefined4 *)*param_1;
  uStack_58 = *(undefined8 *)(puVar2 + 4);
  uStack_68 = *puVar2;
  uStack_60 = puVar2[2];
  uStack_5c = puVar2[3];
  uStack_64 = (undefined2)puVar2[1];
  uStack_62 = (undefined2)((uint)puVar2[1] >> 0x10);
  cVar5 = pdb_140a3b010(&uStack_68);
  if (cVar5 != '\a') {
    cVar5 = pdb_140ae2d10(*param_2);
    uVar7 = 0x13;
    if (cVar5 != '\0') {
      uVar7 = 0x1a;
    }
    puVar2 = (undefined4 *)param_4[2];
    *puVar2 = *(undefined4 *)((longlong)param_4 + 0x1c);
    param_4 = (longlong *)*param_4;
    lVar3 = *param_3;
    uStack_64 = pdb_140a44d70(CONCAT71((int7)((ulonglong)puVar2 >> 8),0x10));
    uStack_68 = 0xca;
    uVar8 = 0;
    if (*(longlong *)(lVar3 + 0x298) != 0) {
      uVar8 = *(undefined8 *)(lVar3 + 0x290);
    }
    pdb_1420c0500(auStack_98,&uStack_68,uVar8);
    uStack_48 = uStack_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    uStack_58 = CONCAT44(uStack_84,uStack_88);
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    uStack_68 = auStack_98[0];
    uStack_64 = (undefined2)auStack_98[1];
    uStack_62 = (undefined2)((uint)auStack_98[1] >> 0x10);
    uStack_60 = uStack_90;
    uStack_5c = uStack_8c;
    lVar3 = param_4[2];
    uStack_38 = uVar7;
    if (lVar3 == *param_4) {
      pdb_142d7f080(param_4);
    }
    lVar4 = param_4[1];
    lVar6 = lVar3 * 0x38;
    *(ulonglong *)(lVar4 + 0x30 + lVar6) = CONCAT71(uStack_37,uStack_38);
    puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar6);
    *puVar1 = CONCAT44(uStack_44,uStack_48);
    puVar1[1] = CONCAT44(uStack_3c,uStack_40);
    puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar6);
    *puVar1 = uStack_58;
    puVar1[1] = CONCAT44(uStack_4c,uStack_50);
    *(undefined8 *)(lVar4 + lVar6) = CONCAT26(uStack_62,CONCAT24(uStack_64,uStack_68));
    ((undefined8 *)(lVar4 + lVar6))[1] = CONCAT44(uStack_5c,uStack_60);
    param_4[2] = lVar3 + 1;
  }
  return;
}

