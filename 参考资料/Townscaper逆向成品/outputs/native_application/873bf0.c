// RVA 0x873bf0 | Placemaker.AudioSnapshotManager$$OnApplicationFocus
// PDB: AudioSnapshotManager_OnApplicationFocus_m30ABB4C484143E4DD3566244025D3DB5F8672BC9
// Body: [[10873bf0, 10873c12]]
// Direct callees:
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32

void __cdecl
AudioSnapshotManager_OnApplicationFocus_m30ABB4C484143E4DD3566244025D3DB5F8672BC9
          (AudioSnapshotManager_t66BAA6CAC9AB3DCDC75491A9CE370CA0FAF7A5B4 *param_1,bool param_2,
          MethodInfo *param_3)

{
  param_1->___windowFocused_6 = param_2;
  Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,true,(MethodInfo *)0x0);
  return;
}
