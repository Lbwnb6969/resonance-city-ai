// VA 0x141c2f360, PDB extent 659 bytes
// turbosloth::store::DiskStore::read_source_file
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: turbosloth::store::DiskStore::read_source_file
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 659 */

undefined4 *
pdb_141c2f360(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong *puVar4;
  char cVar5;
  longlong *plVar6;
  bool bVar7;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  longlong *plStack_50;
  uint uStack_44;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  plVar6 = (longlong *)pdb_141c2f600(param_2,param_3,param_4);
  plVar1 = plVar6 + 2;
  LOCK();
  bVar7 = (char)plVar6[2] == '\0';
  if (bVar7) {
    *(char *)(plVar6 + 2) = '\x01';
  }
  UNLOCK();
  plStack_50 = plVar6;
  if (!bVar7) {
    pdb_142dc6be0(plVar1);
  }
  puVar4 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uStack_44 = 0;
    cVar5 = *(char *)((longlong)plVar6 + 0x11);
  }
  else {
    uStack_44 = pdb_142dc79e0();
    uStack_44 = uStack_44 ^ 1;
    cVar5 = *(char *)((longlong)plVar6 + 0x11);
  }
  if (cVar5 != '\0') {
    uVar3 = (uint)uStack_c0 >> 8;
    uStack_c0 = CONCAT31((int3)uVar3,(char)uStack_44);
    uStack_c8 = plVar1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14339fb38,0x2b,&uStack_c8,&UNK_14339fc48,&UNK_14339f138);
  }
  plStack_58 = plVar1;
  pdb_141c2d780(&uStack_c8,plVar6 + 4,param_3,param_4);
  plVar1 = plVar6 + 2;
  if ((((char)uStack_44 == '\0') && ((*puVar4 & 0x7fffffffffffffff) != 0)) &&
     (cVar5 = pdb_142dc79e0(), cVar5 == '\0')) {
    *(undefined1 *)((longlong)plVar6 + 0x11) = 1;
  }
  LOCK();
  lVar2 = *plVar1;
  *(char *)plVar1 = '\0';
  UNLOCK();
  if ((char)lVar2 == '\x02') {
    pdb_142dc6ca0(plVar1);
  }
  *(undefined8 *)(param_1 + 0x18) = uStack_68;
  *(undefined8 *)(param_1 + 0x1a) = uStack_60;
  *(undefined8 *)(param_1 + 0x14) = uStack_78;
  *(undefined8 *)(param_1 + 0x16) = uStack_70;
  *(undefined8 *)(param_1 + 0x10) = uStack_88;
  *(undefined8 *)(param_1 + 0x12) = uStack_80;
  param_1[0xc] = uStack_98;
  param_1[0xd] = uStack_94;
  param_1[0xe] = uStack_90;
  param_1[0xf] = uStack_8c;
  param_1[8] = uStack_a8;
  param_1[9] = uStack_a4;
  param_1[10] = uStack_a0;
  param_1[0xb] = uStack_9c;
  param_1[4] = uStack_b8;
  param_1[5] = uStack_b4;
  param_1[6] = uStack_b0;
  param_1[7] = uStack_ac;
  *param_1 = (undefined4)uStack_c8;
  param_1[1] = uStack_c8._4_4_;
  param_1[2] = uStack_c0;
  param_1[3] = uStack_bc;
  LOCK();
  *plStack_50 = *plStack_50 + -1;
  UNLOCK();
  if (*plStack_50 == 0) {
    pdb_140dd77d0(&plStack_50);
  }
  return param_1;
}

