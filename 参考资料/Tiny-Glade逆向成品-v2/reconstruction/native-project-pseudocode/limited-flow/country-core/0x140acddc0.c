// VA 0x140acddc0, PDB extent 694 bytes
// country_core::systems::mod_editor::EditingMod::dismiss_modal
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure: country_core::systems::mod_editor::EditingMod::dismiss_modal
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
   Extent: 694 */

void pdb_140acddc0(longlong param_1)

{
  ulonglong arg1;
  byte *arg0;
  code *pcVar1;
  byte *arg0_00;
  longlong lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  ulonglong uStack_b8;
  byte *pbStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  ulonglong *puStack_78;
  code *pcStack_70;
  ulonglong uStack_68;
  byte *pbStack_60;
  ulonglong uStack_58;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  arg1 = *(ulonglong *)(param_1 + 0x100);
  arg0 = *(byte **)(param_1 + 0x108);
  uVar5 = *(undefined8 *)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x100) = 0x8000000000000006;
  if ((longlong)arg1 < 0) {
    switch(arg1) {
    default:
      if (arg0 != (byte *)0x0) {
        uVar4 = GetProcessHeap(uVar5,arg0);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        HeapFree(uVar4,0,uVar5);
        return;
      }
      break;
    case 0x8000000000000002:
    case 0x8000000000000003:
    case 0x8000000000000004:
    case 0x8000000000000006:
      break;
    }
  }
  else {
    uStack_a0 = *(undefined4 *)(param_1 + 0x118);
    uStack_9c = *(undefined4 *)(param_1 + 0x11c);
    uStack_98 = *(undefined4 *)(param_1 + 0x120);
    uStack_94 = *(undefined4 *)(param_1 + 0x124);
    uStack_90 = *(undefined4 *)(param_1 + 0x128);
    uStack_8c = *(undefined4 *)(param_1 + 300);
    arg0_00 = *(byte **)(param_1 + 0x128);
    uStack_88 = *(undefined4 *)(param_1 + 0x130);
    uStack_84 = *(undefined4 *)(param_1 + 0x134);
    uVar4 = *(undefined8 *)(param_1 + 0x130);
    uStack_80 = *(undefined8 *)(param_1 + 0x138);
    uStack_b8 = arg1;
    pbStack_b0 = arg0;
    uStack_a8 = uVar5;
    lVar2 = pdb_140f3ecf0(arg0_00,uVar4);
    if (lVar2 == 0) {
      pbVar3 = (byte *)0x1;
      uStack_68 = 0;
      uStack_58 = 0;
    }
    else {
      pdb_140f5fd10(&uStack_68,lVar2,uVar4);
      pbVar3 = pbStack_60;
      if (SBORROW8(0,uStack_68)) {
        if ((longlong)uStack_58 < 0) {
          uVar5 = 0;
LAB_140acde8d:
          pdb_142dc7e2a(uVar5,uStack_58);
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        if (uStack_58 == 0) {
          pbVar3 = (byte *)0x1;
          uStack_58 = 0;
          uStack_68 = 0;
        }
        else {
          pdb_14007ee60();
          pbVar3 = pub_1406abab0(uStack_58,1);
          uVar5 = 1;
          if (pbVar3 == (byte *)0x0) goto LAB_140acde8d;
          pub_142e32760(pbVar3,pbStack_60,uStack_58);
          uStack_68 = uStack_58;
        }
      }
    }
    puStack_78 = &uStack_68;
    pcStack_70 = pdb_140001020;
    pbStack_60 = pbVar3;
    pdb_140f60760(auStack_d0,&UNK_14304db49,&puStack_78);
    if (uStack_68 != 0) {
      pub_1406abac0(pbStack_60,uStack_68,1);
    }
    uStack_58 = uStack_c0;
    pdb_140acec60(param_1,&uStack_68);
    if (arg1 != 0) {
      pub_1406abac0(arg0,arg1,1);
    }
    if (CONCAT44(uStack_94,uStack_98) != 0) {
      pub_1406abac0(arg0_00,CONCAT44(uStack_94,uStack_98),1);
    }
  }
  return;
}

