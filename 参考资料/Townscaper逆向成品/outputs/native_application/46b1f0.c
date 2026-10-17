// RVA 0x46b1f0 | <PrivateImplementationDetails>$$ComputeStringHash
// PDB: U3CPrivateImplementationDetailsU3E_ComputeStringHash_m0825D5837FC6B8C6BFFB7EA78B069E62B801F386
// Body: [[1046b1f0, 1046b232]]
// Direct callees:
// 10f09d80 String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70

uint __cdecl
U3CPrivateImplementationDetailsU3E_ComputeStringHash_m0825D5837FC6B8C6BFFB7EA78B069E62B801F386
          (String_t *param_1,MethodInfo *param_2)

{
  wchar_t wVar1;
  uint uVar2;
  int iVar3;

  if (param_1 != (String_t *)0x0) {
    uVar2 = 0x811c9dc5;
    for (iVar3 = 0; iVar3 < param_1->___m_stringLength_0; iVar3 = iVar3 + 1) {
      wVar1 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70
                        (param_1,iVar3,(MethodInfo *)0x0);
      uVar2 = ((ushort)wVar1 ^ uVar2) * 0x1000193;
    }
    return uVar2;
  }
  return 0;
}
