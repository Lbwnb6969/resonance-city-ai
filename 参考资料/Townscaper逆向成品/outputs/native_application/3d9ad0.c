// RVA 0x3d9ad0 | Placemaker.ModuleMath$$GetDoubleHash
// PDB: ModuleMath_GetDoubleHash_m5062B6859FB1FF50B67401729D5C9C51D375EE2A
// Body: [[103d9ad0, 103d9aff]]
// Direct callees:
// 1074e110 OrientedModule_GetHashCode_m67546325E472F69511CE7281E0F1E9537602C1CD

int __cdecl
ModuleMath_GetDoubleHash_m5062B6859FB1FF50B67401729D5C9C51D375EE2A
          (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 param_1,
          OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 param_2,MethodInfo *param_3)

{
  int iVar1;
  int iVar2;

  iVar1 = OrientedModule_GetHashCode_m67546325E472F69511CE7281E0F1E9537602C1CD
                    (&param_1,(MethodInfo *)0x0);
  iVar2 = OrientedModule_GetHashCode_m67546325E472F69511CE7281E0F1E9537602C1CD
                    (&param_2,(MethodInfo *)0x0);
  return iVar2 * 0x1849 + iVar1 * 0x184d;
}
