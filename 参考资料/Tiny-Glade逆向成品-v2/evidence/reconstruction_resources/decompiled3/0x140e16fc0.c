// Matched PDB: rhapsody::raw::texture::impl$14::next
// VA 0x140e16fc0, PDB extent 562 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: rhapsody::raw::texture::impl$14::next
   Extent: 562 bytes. No whole-program auto-analysis. */

longlong * pdb_140e16fc0(longlong *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ushort *puVar2;
  longlong lVar3;
  code *pcVar4;
  ulonglong uVar5;
  ushort uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  char acStack_d8 [8];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong uStack_b8;
  longlong lStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong *puStack_88;
  code *pcStack_80;
  ushort *puStack_78;
  code *pcStack_70;
  undefined4 *puStack_68;
  code *pcStack_60;
  ulonglong *puStack_58;
  code *pcStack_50;
  ushort *puStack_48;
  code *pcStack_40;
  
  plVar7 = (longlong *)((longlong)param_2 + 0x1c);
  puVar1 = (ulonglong *)(param_2 + 5);
  puVar2 = (ushort *)((longlong)param_2 + 0x2a);
  pdb_140e1e590(acStack_d8,plVar7);
  if (acStack_d8[0] == '\0') {
    do {
      uVar6 = (short)(int)*puVar1 + 1;
      if (*puVar2 <= uVar6) {
        lStack_b0 = param_2[1];
        if (lStack_b0 == 0) {
          *param_1 = 0;
          return param_1;
        }
        goto LAB_140e17197;
      }
      *(ushort *)puVar1 = uVar6;
      *(int *)((longlong)param_2 + 0x24) = (int)param_2[3];
      *plVar7 = param_2[2];
      pdb_140e1e590(acStack_d8,plVar7);
    } while (acStack_d8[0] == '\0');
  }
  uStack_a8 = uStack_d0;
  uStack_a4 = uStack_cc;
  uStack_a0 = uStack_c8;
  uStack_9c = uStack_c4;
  uVar8 = param_2[1];
  if (uVar8 == 0) {
    uVar8 = 0x3d;
    pdb_142dc83d0(&UNK_14320b2c8,0x3d,&UNK_14320b340);
  }
  else {
    uVar5 = CONCAT44(uStack_cc,uStack_d0);
    if (uVar5 <= uVar8) {
      lVar3 = *param_2;
      *(undefined4 *)(param_1 + 3) = 0;
      param_1[2] = 0;
      *(ulonglong *)((longlong)param_1 + 0x1c) = CONCAT44(uStack_c4,uStack_c8);
      *(undefined4 *)((longlong)param_1 + 0x24) = uStack_c0;
      uVar6 = *(ushort *)(param_2 + 5);
      *param_2 = lVar3 + uVar5;
      param_2[1] = uVar8 - uVar5;
      *param_1 = lVar3;
      param_1[1] = uVar5;
      *(undefined4 *)(param_1 + 5) = uStack_bc;
      *(uint *)((longlong)param_1 + 0x2c) = (uint)uVar6;
      return param_1;
    }
  }
  puStack_88 = &uStack_b8;
  pcStack_80 = pdb_140f72a40;
  puStack_78 = (ushort *)&uStack_a8;
  pcStack_70 = pdb_140f72a40;
  pcStack_60 = pdb_140e19290;
  pcStack_50 = pdb_140f71140;
  pcStack_40 = pdb_140f71140;
  uStack_b8 = uVar8;
  puStack_68 = (undefined4 *)puStack_78;
  puStack_58 = puVar1;
  puStack_48 = puVar2;
  pdb_142dc83d0(&UNK_14320b358,&puStack_88,&UNK_14320b398);
LAB_140e17197:
  pcStack_80 = pdb_140f71140;
  pcStack_70 = pdb_140f71140;
  puStack_88 = puVar1;
  puStack_78 = puVar2;
  pdb_142dc7fb4(0,&lStack_b0,&UNK_14320b3b0,&UNK_14320b3b8,&puStack_88,&UNK_14320b428);
  pcVar4 = (code *)swi(3);
  plVar7 = (longlong *)(*pcVar4)();
  return plVar7;
}

