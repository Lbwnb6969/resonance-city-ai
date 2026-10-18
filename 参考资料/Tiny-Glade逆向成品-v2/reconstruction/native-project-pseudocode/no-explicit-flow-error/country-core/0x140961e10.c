// VA 0x140961e10, PDB extent 695 bytes
// country_core::components::transient_mesh::TransientMeshRegistry::drain_meshes_to_delete<country_core::systems::backend::transient_mesh::delete_dropped_transient_meshes::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/transient_mesh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::components::transient_mesh::TransientMeshRegistry::drain_meshes_to_delete<country_core::systems::backend::transient_mesh::delete_dropped_transient_meshes::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/components/transient_mesh.rs
   Extent: 695 */

void pdb_140961e10(char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  char *pcVar8;
  char cVar9;
  longlong lVar10;
  char *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  undefined4 uStack_5c;
  char *pcStack_58;
  uint uStack_50;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  LOCK();
  cVar9 = *param_1;
  if (cVar9 == '\0') {
    *param_1 = '\x01';
  }
  UNLOCK();
  if (cVar9 != '\0') {
    pdb_142dc6be0(param_1);
  }
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uStack_50 = 0;
    cVar9 = param_1[1];
  }
  else {
    uStack_50 = pdb_142dc79e0();
    uStack_50 = uStack_50 ^ 1;
    cVar9 = param_1[1];
  }
  if (cVar9 != '\0') {
    uVar7 = (ulonglong)puStack_c8 >> 8;
    puStack_c8 = (undefined *)CONCAT71((int7)uVar7,(char)uStack_50);
    pcStack_d0 = param_1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_1430276b8,0x2b,&pcStack_d0,&UNK_1430276e8,&UNK_1430273f8);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  pcStack_58 = param_1;
  if (lVar2 != 0) {
    lStack_70 = *(longlong *)(param_1 + 0x10);
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_68 = *param_2;
    puVar3 = (undefined4 *)param_2[2];
    uVar1 = *(undefined4 *)((longlong)param_3 + 0x1c);
    uVar4 = *param_3;
    puVar5 = (undefined4 *)param_3[2];
    lVar10 = 0;
    do {
      uVar6 = *(undefined8 *)(lStack_70 + lVar10);
      if (4 < *_DAT_143ca8e90) {
        pcStack_d0 = (char *)0x0;
        puStack_c8 = &UNK_143027603;
        uStack_c0 = 0x2e;
        uStack_b8 = 0;
        puStack_b0 = &UNK_1430275c9;
        uStack_a8 = 0x39;
        uStack_a0 = 5;
        puStack_98 = &UNK_143027603;
        uStack_90 = 0x2e;
        uStack_88 = 0x1200000001;
        puStack_80 = &UNK_1430275b0;
        uStack_78 = 0x33;
        pdb_140f332f0(&uStack_49,&pcStack_d0);
      }
      *puVar3 = uStack_5c;
      pdb_140a2d600(uStack_68,uVar6);
      *puVar5 = uVar1;
      pdb_140a4ff40(uVar4,uVar6);
      lVar10 = lVar10 + 8;
    } while (lVar2 << 3 != lVar10);
  }
  pcVar8 = pcStack_58;
  pcStack_58[0x18] = '\0';
  pcStack_58[0x19] = '\0';
  pcStack_58[0x1a] = '\0';
  pcStack_58[0x1b] = '\0';
  pcStack_58[0x1c] = '\0';
  pcStack_58[0x1d] = '\0';
  pcStack_58[0x1e] = '\0';
  pcStack_58[0x1f] = '\0';
  if ((((char)uStack_50 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) &&
     (cVar9 = pdb_142dc79e0(), cVar9 == '\0')) {
    pcVar8[1] = '\x01';
  }
  LOCK();
  cVar9 = *pcVar8;
  *pcVar8 = '\0';
  UNLOCK();
  if (cVar9 == '\x02') {
    pdb_142dc6ca0(pcVar8);
  }
  return;
}

