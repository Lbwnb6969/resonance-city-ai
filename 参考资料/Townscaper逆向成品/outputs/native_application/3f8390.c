// RVA 0x3f8390 | Placemaker.WorldMaster$$LateUpdate
// PDB: WorldMaster_LateUpdate_mCC486BD7CCFEDB7AEB1BD532F3DA6ED3FB0A45FF
// Body: [[103f8390, 103f83c8]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10756b00 PropMeshAnimator_OnLateUpdate_m7E80777E311404696B4145AD189622386A280623
// 10878300 BigMeshMaster_OnLateUpdate_mCA8934163A16F42B5655CA5DB8AD9BBF54BFB8E3

void __cdecl
WorldMaster_LateUpdate_mCC486BD7CCFEDB7AEB1BD532F3DA6ED3FB0A45FF
          (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_1,MethodInfo *param_2)

{
  if (param_1->___propMeshAnimator_28 !=
      (PropMeshAnimator_tAF8D79D16BC77F3BB624F43819B4332F1B422A82 *)0x0) {
    PropMeshAnimator_OnLateUpdate_m7E80777E311404696B4145AD189622386A280623
              (param_1->___propMeshAnimator_28,(MethodInfo *)0x0);
    if (param_1->___bigMeshMaster_36 !=
        (BigMeshMaster_tB49299A7222D79082E2CF76D694051F86B8E3DCA *)0x0) {
      BigMeshMaster_OnLateUpdate_mCA8934163A16F42B5655CA5DB8AD9BBF54BFB8E3
                (param_1->___bigMeshMaster_36,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
