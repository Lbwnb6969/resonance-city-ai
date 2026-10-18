// VA 0x140a24920, PDB extent 431 bytes
// country_core::meta_commander::commander_update::closure$0
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/meta_commander.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::meta_commander::commander_update::closure$0
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/meta_commander.rs
   Extent: 431 */

void pdb_140a24920(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  ulonglong *puVar4;
  char cVar5;
  bool bVar6;
  longlong lStack_58;
  undefined1 uStack_50;
  longlong lStack_48;
  undefined8 uStack_40;
  uint uStack_38;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  lVar3 = *param_1;
  lVar1 = lVar3 + 0x10;
  LOCK();
  bVar6 = *(char *)(lVar3 + 0x10) == '\0';
  if (bVar6) {
    *(char *)(lVar3 + 0x10) = '\x01';
  }
  UNLOCK();
  uStack_40 = param_2;
  if (!bVar6) {
    uStack_31 = 1;
    pdb_142dc6be0(lVar1);
  }
  puVar4 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uStack_38 = 0;
    cVar5 = *(char *)(lVar3 + 0x11);
  }
  else {
    uStack_31 = 1;
    uStack_38 = pdb_142dc79e0();
    uStack_38 = uStack_38 ^ 1;
    cVar5 = *(char *)(lVar3 + 0x11);
  }
  if (cVar5 != '\0') {
    uStack_50 = (undefined1)uStack_38;
    lStack_58 = lVar1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143039598,0x2b,&lStack_58,&UNK_1430395e8,&UNK_143038e48);
  }
  lStack_48 = lVar1;
  pdb_141b46ec0(lVar3 + 0x18,param_2);
  pcVar2 = (char *)(lVar3 + 0x10);
  if (((char)uStack_38 == '\0') && ((*puVar4 & 0x7fffffffffffffff) != 0)) {
    uStack_31 = 0;
    cVar5 = pdb_142dc79e0();
    if (cVar5 == '\0') {
      *(undefined1 *)(lVar3 + 0x11) = 1;
    }
  }
  LOCK();
  cVar5 = *pcVar2;
  *pcVar2 = '\0';
  UNLOCK();
  if (cVar5 == '\x02') {
    uStack_31 = 0;
    pdb_142dc6ca0(pcVar2);
  }
  return;
}

