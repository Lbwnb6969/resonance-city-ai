// RVA 0xa09800 | Placemaker.ShadowBakerCamera$$OnPostRender
// PDB: ShadowBakerCamera_OnPostRender_mC5E83396A1B0B274FDF969BEFBAEA690A69B33F0
// Body: [[10a09800, 10a09820]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a36ea0 Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32

void __cdecl
ShadowBakerCamera_OnPostRender_mC5E83396A1B0B274FDF969BEFBAEA690A69B33F0
          (ShadowBakerCamera_t353B95AFAE9B6851EFB8265C152417294ECBF1EF *param_1,MethodInfo *param_2)

{
  if ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1->___cam_4 !=
      (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)0x0) {
    Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32
              ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1->___cam_4,false,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
