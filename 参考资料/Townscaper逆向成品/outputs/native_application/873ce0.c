// RVA 0x873ce0 | Placemaker.AudioSnapshotManager$$Update
// PDB: AudioSnapshotManager_Update_mDDC5D112E93D357DC234530AACC454F188D9B289
// Body: [[10873ce0, 10873d23]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
// 111438b0 AudioMixerSnapshot_TransitionTo_mB44DB7A66A7E5A9B589E8F16095D84D2F9778925

void __cdecl
AudioSnapshotManager_Update_mDDC5D112E93D357DC234530AACC454F188D9B289
          (AudioSnapshotManager_t66BAA6CAC9AB3DCDC75491A9CE370CA0FAF7A5B4 *param_1,
          MethodInfo *param_2)

{
  AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3 *pAVar1;

  if ((param_1->___alphaDim_7 == false) && (param_1->___windowFocused_6 != false)) {
    pAVar1 = param_1->___inFocusSnapshot_4;
  }
  else {
    pAVar1 = param_1->___outOfFocusSnapshot_5;
  }
  if (pAVar1 != (AudioMixerSnapshot_tEB4566F3038FC0FD462321FB9B93450DCC9BD9A3 *)0x0) {
    AudioMixerSnapshot_TransitionTo_mB44DB7A66A7E5A9B589E8F16095D84D2F9778925
              (pAVar1,0.5,(MethodInfo *)0x0);
    Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
              ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,false,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
