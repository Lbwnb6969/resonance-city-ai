// RVA 0x22f260 | Placemaker.ByteQube$$GetWrappedIndex
// PDB: ByteQube_GetWrappedIndex_m3AD455F1977AFA25F0D724A11EDB0FBB8F245A9C
// Body: [[1022f260, 1022f27d]]
// Direct callees:

int __cdecl
ByteQube_GetWrappedIndex_m3AD455F1977AFA25F0D724A11EDB0FBB8F245A9C
          (int param_1,int param_2,MethodInfo *param_3)

{
  uint uVar1;

  uVar1 = param_1 + 4U & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  return uVar1 + param_2 * 4;
}
