// RVA 0x3f8ae0 | Placemaker.WorldMaster$$ResetSaveCurrentTimer
// PDB: WorldMaster_ResetSaveCurrentTimer_m1F76634B665C7F9B82C84D20189CD479157FCF49
// Body: [[103f8ae0, 103f8afd]]
// Direct callees:
// 1066d9a0 Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844

void __cdecl
WorldMaster_ResetSaveCurrentTimer_m1F76634B665C7F9B82C84D20189CD479157FCF49
          (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_1,MethodInfo *param_2)

{
  float fVar1;

  fVar1 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844((MethodInfo *)0x0);
  param_1->___saveCurrentTime_48 = fVar1 + __real_41200000;
  return;
}
