// VA 0x140576f10, PDB extent 146 bytes
// tiny_glade::panic_reporter::setup_panic_hook
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::panic_reporter::setup_panic_hook
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/mod.rs
   Extent: 146 */

undefined8 * pdb_140576f10(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  
  uVar4 = pdb_140f4e120();
  pdb_14007ee60();
  pbVar5 = pub_1406abab0(0x10,8);
  if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x10);
  }
  *(undefined8 *)pbVar5 = uVar4;
  *(undefined8 *)(pbVar5 + 8) = param_2;
  if ((uRam0000000143cb2ec8 & 0x7fffffffffffffff) != 0) {
    cVar3 = pdb_142dc79e0();
    if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14323f75a,0x69,&UNK_14323f790);
    }
  }
  puVar6 = (undefined8 *)0x0;
  LOCK();
  bVar9 = uRam0000000143cb2e48 == 0;
  if (bVar9) {
    uRam0000000143cb2e48 = 0x3fffffff;
  }
  else {
    puVar6 = (undefined8 *)(ulonglong)uRam0000000143cb2e48;
  }
  UNLOCK();
  if (!bVar9) {
    puVar6 = (undefined8 *)pdb_142dc6e70(0x143cb2e48);
  }
  puVar2 = puRam0000000143cb2e58;
  lVar8 = (longlong)pbRam0000000143cb2e50;
  puRam0000000143cb2e58 = (undefined8 *)&UNK_142f6c040;
  LOCK();
  iVar1 = uRam0000000143cb2e48 + 0xc0000001;
  UNLOCK();
  uVar7 = uRam0000000143cb2e48 + 0xc0000001;
  uRam0000000143cb2e48 = iVar1;
  pbRam0000000143cb2e50 = pbVar5;
  if (0x3fffffff < uVar7) {
    puVar6 = (undefined8 *)pdb_142dc6fa0(0x143cb2e48);
  }
  if (lVar8 != 0) {
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(lVar8);
    }
    puVar6 = puVar2;
    if (puVar2[1] != 0) {
      if (0x10 < (ulonglong)puVar2[2]) {
        lVar8 = *(longlong *)(lVar8 + -8);
      }
      uVar4 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar6 = (undefined8 *)HeapFree(uVar4,0,lVar8);
      return puVar6;
    }
  }
  return puVar6;
}

