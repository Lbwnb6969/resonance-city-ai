// VA 0x140ab4b60, PDB extent 331 bytes
// country_core::startup::swap_replacement_mods::confirm_replacement_mods
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/swap_replacement_mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* Matched PDB project procedure:
   country_core::startup::swap_replacement_mods::confirm_replacement_mods
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/swap_replacement_mods.rs
   Extent: 331 */

void pdb_140ab4b60(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined1 uStack_71;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 uStack_60;
  undefined4 uStack_5f;
  undefined4 uStack_5b;
  undefined4 uStack_57;
  undefined4 uStack_53;
  undefined7 uStack_4f;
  longlong lStack_48;
  undefined *puStack_40;
  longlong lStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  lVar4 = *param_1;
  if (lVar4 != 0) {
    uStack_5f = *(undefined4 *)(lVar4 + 0xa0);
    uStack_5b = *(undefined4 *)(lVar4 + 0xa4);
    uStack_57 = *(undefined4 *)(lVar4 + 0xa8);
    uStack_53 = *(undefined4 *)(lVar4 + 0xac);
    pdb_1415e5b10(&lStack_48,lVar4 + 0x18);
    uStack_80 = (undefined7)CONCAT44(uStack_53,uStack_57);
    uStack_79 = (undefined1)((uint)uStack_53 >> 0x18);
    if (!SBORROW8(0,lStack_48)) {
      uStack_a0 = uStack_57;
      uStack_9c = (undefined4)(CONCAT17(uStack_79,uStack_80) >> 0x20);
      uStack_71 = 1;
      puVar3 = puStack_40;
      lVar4 = lStack_38;
      lVar5 = lStack_48;
      uStack_a8 = CONCAT44(uStack_5b,uStack_5f);
      goto LAB_140ab4be4;
    }
  }
  uStack_71 = 0;
  puVar3 = (undefined *)8;
  lVar4 = 0;
  lVar5 = 0;
LAB_140ab4be4:
  uStack_70 = (undefined4)uStack_a8;
  uStack_6c = uStack_a8._4_4_;
  uStack_68 = uStack_a0;
  uStack_64 = uStack_9c;
  uStack_60 = (undefined1)lVar5;
  uStack_5f = (undefined4)((ulonglong)lVar5 >> 8);
  uStack_5b._0_3_ = (undefined3)((ulonglong)lVar5 >> 0x28);
  uStack_5b._3_1_ = SUB81(puVar3,0);
  uStack_57 = (undefined4)((ulonglong)puVar3 >> 8);
  uStack_53._0_3_ = (undefined3)((ulonglong)puVar3 >> 0x28);
  uStack_53._3_1_ = (undefined1)lVar4;
  uStack_4f = (undefined7)((ulonglong)lVar4 >> 8);
  pdb_140ab3b00(param_2,&uStack_71,puVar3,lVar4);
  if (lVar4 != 0) {
    puVar2 = (undefined8 *)((longlong)puVar3 + 8);
    do {
      if (puVar2[-1] != 0) {
        pub_1406abac0((byte *)*puVar2,puVar2[-1],1);
      }
      puVar2 = puVar2 + 3;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (lVar5 == 0) {
    return;
  }
  puStack_40 = &UNK_140f3c37e;
  uVar1 = GetProcessHeap(puVar3,lVar5 * 0x18);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(uVar1,0,puVar3);
  return;
}

