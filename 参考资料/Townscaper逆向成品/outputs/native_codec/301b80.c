// RVA 0x301b80 | TextSaveSystem.GetBitsPerCharacter
// PDB: TextSaveSystem_GetBitsPerCharacter_m59A460F8D203562F5F2D399D327D7C839BAD29EE
// Body: [[10301b80, 10301b9a]]
// Direct callees:

int __cdecl
TextSaveSystem_GetBitsPerCharacter_m59A460F8D203562F5F2D399D327D7C839BAD29EE(MethodInfo *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;

  iVar3 = 1;
  uVar2 = 2;
  do {
    iVar1 = iVar3;
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
    iVar3 = iVar3 + 1;
  } while ((int)uVar2 < 0x41);
  return iVar1;
}
