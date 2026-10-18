// Matched PDB: country_core::resources::world_raster_defs::AllWorldRasterWrite::write
// VA 0x1409061a0, PDB extent 2108 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: country_core::resources::world_raster_defs::AllWorldRasterWrite::write
   Extent: 2108 bytes. No whole-program auto-analysis. */

void pdb_1409061a0(longlong *param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_80 [24];
  longlong *plStack_68;
  code *pcStack_60;
  longlong *plStack_58;
  code *pcStack_50;
  longlong lStack_48;
  longlong alStack_40 [2];
  
  alStack_40[1] = 0xfffffffffffffffe;
  lVar3 = param_2;
  if ((param_3 == 0) || (lVar3 = param_2 + 0x28, SBORROW8(0,*(longlong *)(param_2 + 0x10)))) {
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    lVar2 = *param_1;
    if (*(longlong *)(lVar2 + 0x10) != 0) {
      func_0x000142e32780(*(undefined8 *)(lVar2 + 8),0);
    }
  }
  else {
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    lVar2 = *param_1;
    lStack_48 = *(longlong *)(param_2 + 0x20);
    alStack_40[0] = *(longlong *)(lVar2 + 0x10);
    if (lStack_48 != alStack_40[0]) {
      plStack_68 = alStack_40;
      pcStack_60 = pdb_140f72a40;
      plStack_58 = &lStack_48;
      pcStack_50 = pdb_140f72a40;
      pdb_140a77380(auStack_80,&plStack_68);
      plStack_68 = (longlong *)pdb_142de92b0(auStack_80);
      pdb_142dc8170(&UNK_14301ebd0,0x2b,&plStack_68,&UNK_14301ebb0,&UNK_14301eac8);
      goto LAB_140906884;
    }
    func_0x000142e32760(*(undefined8 *)(lVar2 + 8),*(undefined8 *)(param_2 + 0x18));
  }
  param_2 = param_2 + param_3 * 0x28;
  func_0x000142e32780(lVar2 + 0x98,0xff,0x200);
  *(undefined1 *)(lVar2 + 0x299) = 1;
  lVar2 = param_2;
  if ((lVar3 == param_2) || (lVar2 = lVar3 + 0x28, SBORROW8(0,*(longlong *)(lVar3 + 0x10)))) {
    *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1 + 0x3c);
    lVar4 = param_1[4];
    if (*(longlong *)(lVar4 + 0x10) != 0) {
      func_0x000142e32780(*(undefined8 *)(lVar4 + 8),0);
    }
  }
  else {
    *(undefined4 *)param_1[6] = *(undefined4 *)((longlong)param_1 + 0x3c);
    lVar4 = param_1[4];
    lStack_48 = *(longlong *)(lVar3 + 0x20);
    alStack_40[0] = *(longlong *)(lVar4 + 0x10);
    if (lStack_48 != alStack_40[0]) {
      plStack_68 = alStack_40;
      pcStack_60 = pdb_140f72a40;
      plStack_58 = &lStack_48;
      pcStack_50 = pdb_140f72a40;
      pdb_140a77380(auStack_80,&plStack_68);
      plStack_68 = (longlong *)pdb_142de92b0(auStack_80);
      pdb_142dc8170(&UNK_14301ebd0,0x2b,&plStack_68,&UNK_14301ebb0,&UNK_14301eac8);
      goto LAB_140906884;
    }
    func_0x000142e32760(*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar3 + 0x18));
  }
  func_0x000142e32780(lVar4 + 0x98,0xff,0x200);
  *(undefined1 *)(lVar4 + 0x299) = 1;
  lVar3 = param_2;
  if ((lVar2 == param_2) || (lVar3 = lVar2 + 0x28, SBORROW8(0,*(longlong *)(lVar2 + 0x10)))) {
    *(undefined4 *)param_1[10] = *(undefined4 *)((longlong)param_1 + 0x5c);
    lVar4 = param_1[8];
    if (*(longlong *)(lVar4 + 0x10) != 0) {
      func_0x000142e32780(*(undefined8 *)(lVar4 + 8),0);
    }
  }
  else {
    *(undefined4 *)param_1[10] = *(undefined4 *)((longlong)param_1 + 0x5c);
    lVar4 = param_1[8];
    lStack_48 = *(longlong *)(lVar2 + 0x20);
    alStack_40[0] = *(longlong *)(lVar4 + 0x10);
    if (lStack_48 != alStack_40[0]) {
      plStack_68 = alStack_40;
      pcStack_60 = pdb_140f72a40;
      plStack_58 = &lStack_48;
      pcStack_50 = pdb_140f72a40;
      pdb_140a77380(auStack_80,&plStack_68);
      plStack_68 = (longlong *)pdb_142de92b0(auStack_80);
      pdb_142dc8170(&UNK_14301ebd0,0x2b,&plStack_68,&UNK_14301ebb0,&UNK_14301eac8);
      goto LAB_140906884;
    }
    func_0x000142e32760(*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar2 + 0x18));
  }
  func_0x000142e32780(lVar4 + 0x98,0xff,0x200);
  *(undefined1 *)(lVar4 + 0x299) = 1;
  lVar2 = param_2;
  if ((lVar3 == param_2) || (lVar2 = lVar3 + 0x28, SBORROW8(0,*(longlong *)(lVar3 + 0x10)))) {
    *(undefined4 *)param_1[0xe] = *(undefined4 *)((longlong)param_1 + 0x7c);
    lVar4 = param_1[0xc];
    if (*(longlong *)(lVar4 + 0x10) != 0) {
      func_0x000142e32780(*(undefined8 *)(lVar4 + 8),0);
    }
  }
  else {
    *(undefined4 *)param_1[0xe] = *(undefined4 *)((longlong)param_1 + 0x7c);
    lVar4 = param_1[0xc];
    lStack_48 = *(longlong *)(lVar3 + 0x20);
    alStack_40[0] = *(longlong *)(lVar4 + 0x10);
    if (lStack_48 != alStack_40[0]) {
      plStack_68 = alStack_40;
      pcStack_60 = pdb_140f72a40;
      plStack_58 = &lStack_48;
      pcStack_50 = pdb_140f72a40;
      pdb_140a77380(auStack_80,&plStack_68);
      plStack_68 = (longlong *)pdb_142de92b0(auStack_80);
      pdb_142dc8170(&UNK_14301ebd0,0x2b,&plStack_68,&UNK_14301ebb0,&UNK_14301eac8);
      goto LAB_140906884;
    }
    func_0x000142e32760(*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar3 + 0x18));
  }
  func_0x000142e32780(lVar4 + 0x98,0xff,0x200);
  *(undefined1 *)(lVar4 + 0x299) = 1;
  lVar3 = lVar2;
  if ((lVar2 == param_2) || (lVar3 = lVar2 + 0x28, SBORROW8(0,*(longlong *)(lVar2 + 0x10)))) {
    *(undefined4 *)param_1[0x12] = *(undefined4 *)((longlong)param_1 + 0x9c);
    lVar4 = param_1[0x10];
    if (*(longlong *)(lVar4 + 0x10) != 0) {
      func_0x000142e32780(*(undefined8 *)(lVar4 + 8),0);
    }
  }
  else {
    *(undefined4 *)param_1[0x12] = *(undefined4 *)((longlong)param_1 + 0x9c);
    lVar4 = param_1[0x10];
    lStack_48 = *(longlong *)(lVar2 + 0x20);
    alStack_40[0] = *(longlong *)(lVar4 + 0x10);
    if (lStack_48 != alStack_40[0]) {
      plStack_68 = alStack_40;
      pcStack_60 = pdb_140f72a40;
      plStack_58 = &lStack_48;
      pcStack_50 = pdb_140f72a40;
      pdb_140a77380(auStack_80,&plStack_68);
      plStack_68 = (longlong *)pdb_142de92b0(auStack_80);
      pdb_142dc8170(&UNK_14301ebd0,0x2b,&plStack_68,&UNK_14301ebb0,&UNK_14301eac8);
      goto LAB_140906884;
    }
    func_0x000142e32760(*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar2 + 0x18));
  }
  func_0x000142e32780(lVar4 + 0x98,0xff,0x200);
  *(undefined1 *)(lVar4 + 0x299) = 1;
  lVar2 = lVar3;
  if ((lVar3 == param_2) || (lVar2 = lVar3 + 0x28, SBORROW8(0,*(longlong *)(lVar3 + 0x10)))) {
    *(undefined4 *)param_1[0x16] = *(undefined4 *)((longlong)param_1 + 0xbc);
    lVar4 = param_1[0x14];
    if (*(longlong *)(lVar4 + 0x10) != 0) {
      func_0x000142e32780(*(undefined8 *)(lVar4 + 8),0);
    }
  }
  else {
    *(undefined4 *)param_1[0x16] = *(undefined4 *)((longlong)param_1 + 0xbc);
    lVar4 = param_1[0x14];
    lStack_48 = *(longlong *)(lVar3 + 0x20);
    alStack_40[0] = *(longlong *)(lVar4 + 0x10);
    if (lStack_48 != alStack_40[0]) {
      plStack_68 = alStack_40;
      pcStack_60 = pdb_140f72a40;
      plStack_58 = &lStack_48;
      pcStack_50 = pdb_140f72a40;
      pdb_140a77380(auStack_80,&plStack_68);
      plStack_68 = (longlong *)pdb_142de92b0(auStack_80);
      pdb_142dc8170(&UNK_14301ebd0,0x2b,&plStack_68,&UNK_14301ebb0,&UNK_14301eac8);
      goto LAB_140906884;
    }
    func_0x000142e32760(*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar3 + 0x18));
  }
  func_0x000142e32780(lVar4 + 0x98,0xff,0x200);
  *(undefined1 *)(lVar4 + 0x299) = 1;
  if ((lVar2 == param_2) || (SBORROW8(0,*(longlong *)(lVar2 + 0x10)))) {
    *(undefined4 *)param_1[0x1a] = *(undefined4 *)((longlong)param_1 + 0xdc);
    lVar3 = param_1[0x18];
    if (*(longlong *)(lVar3 + 0x10) != 0) {
      func_0x000142e32780(*(undefined8 *)(lVar3 + 8),0);
    }
  }
  else {
    *(undefined4 *)param_1[0x1a] = *(undefined4 *)((longlong)param_1 + 0xdc);
    lVar3 = param_1[0x18];
    lStack_48 = *(longlong *)(lVar2 + 0x20);
    alStack_40[0] = *(longlong *)(lVar3 + 0x10);
    if (lStack_48 != alStack_40[0]) {
      plStack_68 = alStack_40;
      pcStack_60 = pdb_140f72a40;
      plStack_58 = &lStack_48;
      pcStack_50 = pdb_140f72a40;
      pdb_140a77380(auStack_80,&plStack_68);
      plStack_68 = (longlong *)pdb_142de92b0(auStack_80);
      pdb_142dc8170(&UNK_14301ebd0,0x2b,&plStack_68,&UNK_14301ebb0,&UNK_14301eac8);
LAB_140906884:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    func_0x000142e32760(*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar2 + 0x18));
  }
  func_0x000142e32780(lVar3 + 0x98,0xff,0x200);
  *(undefined1 *)(lVar3 + 0x299) = 1;
  return;
}

