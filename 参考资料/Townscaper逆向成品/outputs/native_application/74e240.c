// RVA 0x74e240 | Placemaker.Modules.OrientedModule$$get_isEmpty
// PDB: OrientedModule_get_isEmpty_m3E996BAFD5B1770335261B325379C97C111D54EC
// Body: [[1074e240, 1074e25c]]
// Direct callees:
// 108805f0 Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70

bool __cdecl
OrientedModule_get_isEmpty_m3E996BAFD5B1770335261B325379C97C111D54EC
          (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *param_1,MethodInfo *param_2)

{
  bool bVar1;

  bVar1 = Bitwise_IsBitSet_mDECCB4076F66983FF22C752B60269245CF22AE70
                    (param_1->___flags_1,5,(MethodInfo *)0x0);
  return bVar1;
}
