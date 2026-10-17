// RVA 0xa09c30 | Placemaker.ShadowBaker$$MaybeUpdateAngle
// PDB: ShadowBaker_MaybeUpdateAngle_mFF76993FFF920A7D662CA12B4C6ADD8275B86144
// Body: [[10a09c30, 10a09e57]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1065f5a0 Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
// 106685e0 Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
// 10670140 Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
// 10a39fa0 Color_op_Implicit_mECB4D0C812888ADAEE478E633B2ECF8F8FDB96C5
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a3eaf0 Gradient_Evaluate_m02EA0BFD41864C8673A29333EBC4569C9DAA3E37
// 10a43e90 Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616

void __cdecl
ShadowBaker_MaybeUpdateAngle_mFF76993FFF920A7D662CA12B4C6ADD8275B86144
          (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *param_1,MethodInfo *param_2)

{
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar1;
  int iVar2;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar3;
  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *pQVar4;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar5;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar6;
  float fVar7;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 local_18;
  float local_8;

  if (DAT_115201e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427_il2cpp_TypeInfo_var);
    DAT_115201e6 = '\x01';
  }
  if (param_1->___angleDirty_29 == false) {
    return;
  }
  pCVar1 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___cam_7;
  param_1->___framingDirty_28 = true;
  param_1->___angleDirty_29 = false;
  if (pCVar1 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
    pTVar3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       (pCVar1,(MethodInfo *)0x0);
    local_8 = (param_1->___current_20).___x_0;
    fVar7 = (param_1->___current_20).___y_1;
    if ((ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427_il2cpp_TypeInfo_var->cctor_finished ==
        0)) {
      il2cpp_runtime_class_init
                (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427_il2cpp_TypeInfo_var);
    }
    fVar7 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(2.0,90.0,fVar7,(MethodInfo *)0x0);
    pQVar4 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3
                       ((Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)&local_18,fVar7,
                        local_8 * __real_43b40000,0.0,(MethodInfo *)0x0);
    if (pTVar3 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4
                (pTVar3,*pQVar4,(MethodInfo *)0x0);
      iVar2 = *(int *)((int)ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427_il2cpp_TypeInfo_var
                            ->static_fields + 0x10);
      if (param_1->___sunColor_22 != (Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 *)0x0) {
        pCVar5 = Gradient_Evaluate_m02EA0BFD41864C8673A29333EBC4569C9DAA3E37
                           (&local_18,param_1->___sunColor_22,(param_1->___current_20).___y_1,
                            (MethodInfo *)0x0);
        pVVar6 = Color_op_Implicit_mECB4D0C812888ADAEE478E633B2ECF8F8FDB96C5
                           ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)&local_18,*pCVar5,
                            (MethodInfo *)0x0);
        Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
                  (iVar2,*pVVar6,(MethodInfo *)0x0);
        iVar2 = *(int *)((int)ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427_il2cpp_TypeInfo_var
                              ->static_fields + 0x14);
        if (param_1->___shadowColor_23 != (Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 *)0x0)
        {
          pCVar5 = Gradient_Evaluate_m02EA0BFD41864C8673A29333EBC4569C9DAA3E37
                             (&local_18,param_1->___shadowColor_23,(param_1->___current_20).___y_1,
                              (MethodInfo *)0x0);
          pVVar6 = Color_op_Implicit_mECB4D0C812888ADAEE478E633B2ECF8F8FDB96C5
                             ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)&local_18,*pCVar5
                              ,(MethodInfo *)0x0);
          Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
                    (iVar2,*pVVar6,(MethodInfo *)0x0);
          iVar2 = *(int *)((int)ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427_il2cpp_TypeInfo_var
                                ->static_fields + 0x18);
          if (param_1->___bgColor_24 != (Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 *)0x0) {
            pCVar5 = Gradient_Evaluate_m02EA0BFD41864C8673A29333EBC4569C9DAA3E37
                               (&local_18,param_1->___bgColor_24,(param_1->___current_20).___y_1,
                                (MethodInfo *)0x0);
            pVVar6 = Color_op_Implicit_mECB4D0C812888ADAEE478E633B2ECF8F8FDB96C5
                               ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)&local_18,
                                *pCVar5,(MethodInfo *)0x0);
            Shader_SetGlobalVector_m241FC10C437094156CA0C6CC299A3F09404CE1F3
                      (iVar2,*pVVar6,(MethodInfo *)0x0);
            param_1->___shouldBake_31 = true;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
