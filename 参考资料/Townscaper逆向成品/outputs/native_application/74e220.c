// RVA 0x74e220 | Placemaker.Modules.OrientedModule$$get_isDecor
// PDB: OrientedModule_get_isDecor_m25882F19B14AAAC3FA7D76AD25D8482BA176DCAC
// Body: [[1074e220, 1074e23c]]
// Direct callees:
// 108805f0 Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70

bool __cdecl
OrientedModule_get_isDecor_m25882F19B14AAAC3FA7D76AD25D8482BA176DCAC
          (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *param_1,MethodInfo *param_2)

{
  bool bVar1;

  bVar1 = Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
                    (param_1->___flags_1,4,(MethodInfo *)0x0);
  return bVar1;
}
