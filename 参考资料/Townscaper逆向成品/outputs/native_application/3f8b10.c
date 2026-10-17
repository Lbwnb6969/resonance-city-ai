// RVA 0x3f8b10 | Placemaker.WorldMaster$$SetDirty
// PDB: WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54
// Body: [[103f8b10, 103f8b49]]
// Direct callees:
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258

void __cdecl
WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54
          (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_1,MethodInfo *param_2)

{
  float fVar1;

  if (param_1->___anyChange_59 == false) {
    param_1->___anyChange_59 = true;
    fVar1 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
    param_1->___lastStartChangeTime_61 = fVar1;
  }
  fVar1 = Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
  param_1->___lastChangeTime_60 = fVar1;
  return;
}
