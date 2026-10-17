// RVA 0x74e110 | Placemaker.Modules.OrientedModule$$GetHashCode
// PDB: OrientedModule_GetHashCode_m67546325E472F69511CE7281E0F1E9537602C1CD
// Body: [[1074e110, 1074e12c]]
// Direct callees:

int __cdecl
OrientedModule_GetHashCode_m67546325E472F69511CE7281E0F1E9537602C1CD
          (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *param_1,MethodInfo *param_2)

{
  return (uint)param_1->___flags_1 * 0xd01 + (uint)param_1->___moduleIndex_0 * 0x107;
}
