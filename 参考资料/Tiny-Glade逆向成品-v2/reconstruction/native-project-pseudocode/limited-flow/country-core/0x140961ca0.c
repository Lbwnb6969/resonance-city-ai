// VA 0x140961ca0, PDB extent 360 bytes
// country_core::components::transient_mesh::TransientMeshRegistry::deferred_delete_mesh
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/transient_mesh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::components::transient_mesh::TransientMeshRegistry::deferred_delete_mesh
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/transient_mesh.rs
   Extent: 360 */

void pdb_140961ca0(char *param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  char *pcVar3;
  char cVar4;
  char *pcStack_50;
  undefined1 uStack_48;
  char *pcStack_40;
  uint uStack_34;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  LOCK();
  cVar4 = *param_1;
  if (cVar4 == '\0') {
    *param_1 = '\x01';
  }
  UNLOCK();
  if (cVar4 != '\0') {
    pdb_142dc6be0(param_1);
  }
  puVar2 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uStack_34 = 0;
    cVar4 = param_1[1];
  }
  else {
    uStack_34 = pdb_142dc79e0();
    uStack_34 = uStack_34 ^ 1;
    cVar4 = param_1[1];
  }
  if (cVar4 != '\0') {
    uStack_48 = (undefined1)uStack_34;
    pcStack_50 = param_1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1430276b8,0x2b,&pcStack_50,&UNK_1430276e8,&UNK_1430273e0);
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
  pcStack_40 = param_1;
  if (lVar1 == *(longlong *)(param_1 + 8)) {
    pdb_142d7e8a0(param_1 + 8);
  }
  pcVar3 = pcStack_40;
  *(undefined8 *)(*(longlong *)(pcStack_40 + 0x10) + lVar1 * 8) = param_2;
  *(longlong *)(pcStack_40 + 0x18) = lVar1 + 1;
  if ((((char)uStack_34 == '\0') && ((*puVar2 & 0x7fffffffffffffff) != 0)) &&
     (cVar4 = pdb_142dc79e0(), cVar4 == '\0')) {
    pcVar3[1] = '\x01';
  }
  LOCK();
  cVar4 = *pcVar3;
  *pcVar3 = '\0';
  UNLOCK();
  if (cVar4 != '\x02') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142dc6ca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeByAddressSingle(pcVar3);
  return;
}

