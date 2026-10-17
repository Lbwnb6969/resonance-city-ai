// Matched PDB: rhapsody::raw::texture::impl$12::next
// VA 0x140e1e590, PDB extent 323 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB: rhapsody::raw::texture::impl$12::next
   Extent: 323 bytes. No whole-program auto-analysis. */

undefined8 * pdb_140e1e590(undefined8 *param_1,ushort *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  code *pcVar8;
  short sVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  char cVar12;
  ushort uVar13;
  ushort uVar14;
  
  bVar1 = (byte)param_2[4];
  if (*(byte *)((longlong)param_2 + 9) <= bVar1) {
    uVar10 = 0;
LAB_140e1e6a7:
    *param_1 = uVar10;
    return param_1;
  }
  bVar2 = (byte)param_2[3];
  if (bVar2 == 0) {
    pdb_142dc84f0(&UNK_14320db98);
  }
  else {
    bVar3 = *(byte *)((longlong)param_2 + 7);
    if (bVar3 != 0) {
      uVar4 = *param_2;
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      *param_2 = uVar4 >> 1;
      param_2[1] = uVar5 >> 1;
      uVar13 = uVar6 >> 1;
      param_2[2] = uVar13;
      uVar7 = *(undefined4 *)param_2;
      if (CONCAT24(uVar13,uVar7) == 0) {
        cVar12 = -1;
      }
      else {
        sVar9 = (short)((uint)uVar7 >> 0x10);
        uVar14 = 1;
        if (1 < (ushort)uVar7) {
          uVar14 = (ushort)uVar7;
        }
        *param_2 = uVar14;
        param_2[1] = sVar9 + (ushort)(sVar9 == 0);
        if (uVar13 < 2) {
          uVar13 = 1;
        }
        param_2[2] = uVar13;
        cVar12 = bVar1 + 1;
      }
      *(char *)(param_2 + 4) = cVar12;
      param_1[1] = (ulonglong)(byte)param_2[5] * (ulonglong)uVar6 *
                   (ulonglong)
                   (ushort)((uVar4 / bVar2 + 1) - (ushort)((ushort)(uVar4 % (ushort)bVar2) == 0)) *
                   (ulonglong)
                   (ushort)((uVar5 / bVar3 + 1) - (ushort)((ushort)(uVar5 % (ushort)bVar3) == 0));
      *(uint *)(param_1 + 2) = (uint)uVar4;
      *(uint *)((longlong)param_1 + 0x14) = (uint)uVar5;
      *(uint *)(param_1 + 3) = (uint)uVar6;
      *(uint *)((longlong)param_1 + 0x1c) = (uint)bVar1;
      uVar10 = 1;
      goto LAB_140e1e6a7;
    }
  }
  pdb_142dc84f0(&UNK_14320dbb0);
  pcVar8 = (code *)swi(3);
  puVar11 = (undefined8 *)(*pcVar8)();
  return puVar11;
}

