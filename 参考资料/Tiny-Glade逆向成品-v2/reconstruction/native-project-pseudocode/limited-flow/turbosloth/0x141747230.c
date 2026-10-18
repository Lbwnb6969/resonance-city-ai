// VA 0x141747230, PDB extent 360 bytes
// turbosloth::asset::BuildContext::register_dependency
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: turbosloth::asset::BuildContext::register_dependency
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 360 */

void pdb_141747230(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  longlong lVar2;
  ulonglong *puVar3;
  char cVar4;
  bool bVar5;
  char *pcStack_50;
  undefined1 uStack_48;
  char *pcStack_40;
  uint uStack_34;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    pcVar1 = (char *)(lVar2 + 0x10);
    LOCK();
    bVar5 = *(char *)(lVar2 + 0x10) == '\0';
    if (bVar5) {
      *(char *)(lVar2 + 0x10) = '\x01';
    }
    UNLOCK();
    if (!bVar5) {
      pdb_142dc6be0(pcVar1);
    }
    puVar3 = _DAT_143ca8f38;
    if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
      uStack_34 = 0;
      cVar4 = *(char *)(lVar2 + 0x11);
    }
    else {
      uStack_34 = pdb_142dc79e0();
      uStack_34 = uStack_34 ^ 1;
      cVar4 = *(char *)(lVar2 + 0x11);
    }
    if (cVar4 != '\0') {
      uStack_48 = (undefined1)uStack_34;
      pcStack_50 = pcVar1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14332f508,0x2b,&pcStack_50,&UNK_14332f4e8,&UNK_14332efe0);
    }
    pcStack_40 = pcVar1;
    pdb_142566bd0(lVar2 + 0x18,*(undefined8 *)(*param_2 + 0x20),*(undefined8 *)(*param_2 + 0x28));
    if ((((char)uStack_34 == '\0') && ((*puVar3 & 0x7fffffffffffffff) != 0)) &&
       (cVar4 = pdb_142dc79e0(), cVar4 == '\0')) {
      *(undefined1 *)(lVar2 + 0x11) = 1;
    }
    LOCK();
    cVar4 = *pcStack_40;
    *pcStack_40 = '\0';
    UNLOCK();
    if (cVar4 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x000142dc6ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      WakeByAddressSingle();
      return;
    }
  }
  return;
}

