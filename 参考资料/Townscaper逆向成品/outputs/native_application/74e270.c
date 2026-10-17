// RVA 0x74e270 | Placemaker.Modules.OrientedModule$$op_Equality
// PDB: OrientedModule_op_Equality_mABF1D046329DBB7B3B48A2EE353845D5EE75AEB1
// Body: [[1074e270, 1074e28e]]
// Direct callees:

bool __cdecl
OrientedModule_op_Equality_mABF1D046329DBB7B3B48A2EE353845D5EE75AEB1
          (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 param_1,
          OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 param_2,MethodInfo *param_3)

{
  if (param_1.___moduleIndex_0 != param_2.___moduleIndex_0) {
    return false;
  }
  return param_1.___flags_1 == param_2.___flags_1;
}
