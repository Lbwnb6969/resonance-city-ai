// RVA 0x74e340 | Placemaker.Modules.OrientedModule$$set_orientation
// PDB: OrientedModule_set_orientation_m845FBA3E29799AFB91A9B3740007B0C36A3E7DCA
// Body: [[1074e340, 1074e352]]
// Direct callees:

void __cdecl
OrientedModule_set_orientation_m845FBA3E29799AFB91A9B3740007B0C36A3E7DCA
          (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *param_1,int param_2,
          MethodInfo *param_3)

{
  param_1->___flags_1 = param_1->___flags_1 & 0xf8 | (byte)param_2;
  return;
}
