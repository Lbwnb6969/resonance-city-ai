// RVA 0x301b60 | Placemaker.TextSaveSystem$$GetBitCount
// PDB: TextSaveSystem_GetBitCount_m71136207B63C0D00B043CAC554BF1BA5BE89221C
// Body: [[10301b60, 10301b7a]]
// Direct callees:

int __cdecl
TextSaveSystem_GetBitCount_m71136207B63C0D00B043CAC554BF1BA5BE89221C
          (int param_1,MethodInfo *param_2)

{
  int iVar1;
  uint uVar2;

  iVar1 = 0;
  if (0 < param_1) {
    uVar2 = 1;
    do {
      uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
      iVar1 = iVar1 + 1;
    } while ((int)uVar2 <= param_1);
  }
  return iVar1;
}
