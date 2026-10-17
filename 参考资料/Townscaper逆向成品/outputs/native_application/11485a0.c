// RVA 0x11485a0 | FuryStudios.BuildSystem.BuildInfo$$get_RevisionCommitTime
// PDB: BuildInfo_get_RevisionCommitTime_m41531193C5E6743C7ECB39D45B5586C64601448A
// Body: [[111485a0, 111485ec]]
// Direct callees:
// 106eb810 DateTime__ctor_mD17BC147184B06220C3FD44EBF50238A3894ADD7

DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 __cdecl
BuildInfo_get_RevisionCommitTime_m41531193C5E6743C7ECB39D45B5586C64601448A
          (BuildInfo_t8C9552D09FFA63A1340A4E782467FD34D6616CCE *param_1,MethodInfo *param_2)

{
  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 DVar1;

  DVar1.___dateData_44 = 0;
  DateTime__ctor_mD17BC147184B06220C3FD44EBF50238A3894ADD7
            ((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)&stack0xfffffff4,
             *(long64 *)((int)&(param_1->___revisionCommitTime_7).___ticks_0 + 4),0,
             (MethodInfo *)0x0);
  return (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405)DVar1.___dateData_44;
}
