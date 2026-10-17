// RVA 0x3dcef0 | Placemaker.Quads.GridGeneration.MotivationCounter$$RemoveMotivation
// PDB: MotivationCounter_RemoveMotivation_m3047334055B8ECC6F01CFAF8E94626B272E7D23D
// Body: [[103dcef0, 103dcf00]]
// Direct callees:

int __cdecl
MotivationCounter_RemoveMotivation_m3047334055B8ECC6F01CFAF8E94626B272E7D23D
          (MotivationCounter_t0A263E14534ECFAB9C180D71127E5C3713804F1E *param_1,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_2,MethodInfo *param_3)

{
  byte bVar1;

  bVar1 = param_1->___count_0 - 1;
  param_1->___count_0 = bVar1;
  return (uint)bVar1;
}
