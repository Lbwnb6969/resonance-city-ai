// Matched PDB: core::ptr::drop_in_place<country_core::render::sparse_instance_buffer::SparseInstanceBufferAllocation<country_core::resources::roof_tile_ssbo::RoofTileSsbo> >
// VA 0x1404a9710, PDB extent 516 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   core::ptr::drop_in_place<country_core::render::sparse_instance_buffer::SparseInstanceBufferAllocation<country_core::resources::roof_tile_ssbo::RoofTileSsbo>
   >
   Extent: 516 bytes. No whole-program auto-analysis. */

void pdb_1404a9710(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  longlong *plStack_40;
  code *pcStack_38;
  longlong *plStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  plVar2 = param_1 + 1;
  plStack_30 = param_1;
  cVar5 = pdb_1409cb300(plVar2);
  if (cVar5 == '\0') {
    plVar3 = (longlong *)*plStack_30;
    if (plVar3 == (longlong *)0xffffffffffffffff) {
      return;
    }
    lVar6 = *plVar3;
    do {
      if (lVar6 == 0) goto LAB_1404a97fe;
      if (lVar6 < 0) {
        plStack_40 = (longlong *)&UNK_142f3c558;
        pcStack_38 = pdb_1402ed400;
        pdb_142dc83d0(&UNK_142f3c568,&plStack_40,&UNK_142f3c5d8);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      LOCK();
      lVar7 = *plVar3;
      bVar8 = lVar6 == lVar7;
      if (bVar8) {
        *plVar3 = lVar6 + 1;
        lVar7 = lVar6;
      }
      UNLOCK();
      lVar6 = lVar7;
    } while (!bVar8);
    plVar1 = plVar3 + 2;
    LOCK();
    bVar8 = (char)plVar3[2] == '\0';
    if (bVar8) {
      *(undefined1 *)(plVar3 + 2) = 1;
    }
    UNLOCK();
    plStack_40 = plVar3;
    if (!bVar8) {
      pdb_142dbd1a0(plVar1,plStack_30,1000000000);
    }
    pdb_140e9a150(plVar1);
    lVar6 = *plVar2;
    *plVar2 = 0;
    lVar7 = plVar3[5];
    if (lVar7 == plVar3[3]) {
      pdb_142d7e8a0(plVar3 + 3);
    }
    *(longlong *)(plVar3[4] + lVar7 * 8) = lVar6;
    plVar3[5] = lVar7 + 1;
    pdb_140e9a350();
    LOCK();
    bVar8 = (char)*plVar1 == '\x01';
    if (bVar8) {
      *(undefined1 *)plVar1 = 0;
    }
    UNLOCK();
    if (!bVar8) {
      pdb_142dbcef0(plVar1,0);
    }
    LOCK();
    *plStack_40 = *plStack_40 + -1;
    UNLOCK();
    if (*plStack_40 == 0) {
      pdb_140c7ace0(&plStack_40);
    }
  }
LAB_1404a97fe:
  lVar6 = *plStack_30;
  if (lVar6 != -1) {
    LOCK();
    plVar2 = (longlong *)(lVar6 + 8);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      func_0x0001406abac0(lVar6,0x30,8);
    }
  }
  return;
}

