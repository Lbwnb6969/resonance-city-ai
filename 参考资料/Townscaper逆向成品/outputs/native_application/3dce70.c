// RVA 0x3dce70 | Placemaker.Quads.GridGeneration.MotivationCounter$$AddMotivation
// PDB: MotivationCounter_AddMotivation_mB680A627CA4E6A1E1F7ABD0BF491B3FFC5975E52
// Body: [[103dce70, 103dce80]]
// Direct callees:

int __cdecl
MotivationCounter_AddMotivation_mB680A627CA4E6A1E1F7ABD0BF491B3FFC5975E52
          (MotivationCounter_t0A263E14534ECFAB9C180D71127E5C3713804F1E *param_1,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_2,MethodInfo *param_3)

{
  byte bVar1;

  bVar1 = param_1->___count_0 + 1;
  param_1->___count_0 = bVar1;
  return (uint)bVar1;
}
