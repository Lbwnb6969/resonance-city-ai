// RVA 0x3d99f0 | Placemaker.ModuleMath$$GetBidirectionalHash
// PDB: ModuleMath_GetBidirectionalHash_m7EA0FCC0508F78D5226F4E5517696DF03A07FB7C
// Body: [[103d99f0, 103d9a34]]
// Direct callees:
// 1074e110 OrientedModule_GetHashCode_m67546325E472F69511CE7281E0F1E9537602C1CD

int __cdecl
ModuleMath_GetBidirectionalHash_m7EA0FCC0508F78D5226F4E5517696DF03A07FB7C
          (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 param_1,
          OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 param_2,MethodInfo *param_3)

{
  int iVar1;
  int iVar2;

  iVar1 = OrientedModule_GetHashCode_m67546325E472F69511CE7281E0F1E9537602C1CD
                    (&param_1,(MethodInfo *)0x0);
  iVar2 = OrientedModule_GetHashCode_m67546325E472F69511CE7281E0F1E9537602C1CD
                    (&param_2,(MethodInfo *)0x0);
  if (iVar2 <= iVar1) {
    return iVar2 * 0x184d + iVar1 * 0x1849;
  }
  return iVar2 * 0x1849 + iVar1 * 0x184d;
}
