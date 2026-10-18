// VA 0x1409a5d40, PDB extent 392 bytes
// country_core::components::transient_mesh::impl$2::drop
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/transient_mesh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::components::transient_mesh::impl$2::drop
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/transient_mesh.rs
   Extent: 392 */

void pdb_1409a5d40(longlong *param_1)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  char cVar6;
  bool bVar7;
  char *pcStack_50;
  undefined1 uStack_48;
  char *pcStack_40;
  uint uStack_34;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  pcVar1 = (char *)(lVar2 + 0x10);
  LOCK();
  bVar7 = *(char *)(lVar2 + 0x10) == '\0';
  if (bVar7) {
    *(char *)(lVar2 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar7) {
    pdb_142dc6be0(pcVar1);
  }
  puVar5 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uStack_34 = 0;
    cVar6 = *(char *)(lVar2 + 0x11);
  }
  else {
    uStack_34 = pdb_142dc79e0();
    uStack_34 = uStack_34 ^ 1;
    cVar6 = *(char *)(lVar2 + 0x11);
  }
  if (cVar6 != '\0') {
    uStack_48 = (undefined1)uStack_34;
    pcStack_50 = pcVar1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143027c00,0x2b,&pcStack_50,&UNK_143027be0,&UNK_143028160);
  }
  lVar3 = param_1[1];
  lVar4 = *(longlong *)(lVar2 + 0x28);
  pcStack_40 = pcVar1;
  if (lVar4 == *(longlong *)(lVar2 + 0x18)) {
    pdb_142d7e8a0(lVar2 + 0x18);
  }
  *(longlong *)(*(longlong *)(lVar2 + 0x20) + lVar4 * 8) = lVar3;
  *(longlong *)(lVar2 + 0x28) = lVar4 + 1;
  if ((((char)uStack_34 == '\0') && ((*puVar5 & 0x7fffffffffffffff) != 0)) &&
     (cVar6 = pdb_142dc79e0(), cVar6 == '\0')) {
    *(undefined1 *)(lVar2 + 0x11) = 1;
  }
  LOCK();
  cVar6 = *pcStack_40;
  *pcStack_40 = '\0';
  UNLOCK();
  if (cVar6 != '\x02') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142dc6ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeByAddressSingle();
  return;
}

