// RVA 0x883140 | Placemaker.Life.ButterflyFlock$$RemoveLanding
// PDB: ButterflyFlock_RemoveLanding_mECC4118E039A7452C22E3617D175A4EEDFEF4DBD
// Body: [[10883140, 108832ca]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1043efe0 Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066efe0 Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 108833e0 ButterflyFlock_SetLanding_m95DE165838E4D59EEAAB965D1050601B77B5B014
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a44370 Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
// 10a46960 MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499

void __cdecl
ButterflyFlock_RemoveLanding_mECC4118E039A7452C22E3617D175A4EEDFEF4DBD
          (ButterflyFlock_t232314275686A150CB7BF02C9493FBAB75C6DDFD *param_1,
          ButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B *param_2,MethodInfo *param_3)

{
  Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E *pBVar1;
  bool bVar2;
  int iVar3;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar4;
  int iVar5;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar6;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar7;

  if (DAT_1151f5d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponentInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m3C4C9611718950DB969825FED1991AED4AB6BD42_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151f5d7 = '\x01';
  }
  param_1->___landingCount_13 = param_1->___landingCount_13 + -1;
  iVar3 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD
                    ((float)param_1->___landingCount_13 * __real_3d4ccccd * __real_3f8ccccd,
                     (MethodInfo *)0x0);
  if ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_1->___activeButterflies_9 !=
      (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
    pTVar4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                       ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                        param_1->___activeButterflies_9,(MethodInfo *)0x0);
    if (pTVar4 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
      iVar5 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                        (pTVar4,(MethodInfo *)0x0);
      if (param_2 != (ButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B *)0x0) {
        pBVar1 = param_2->___butterfly_4;
        if (iVar5 <= iVar3) {
          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
          }
          bVar2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                            ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pBVar1,
                             (MethodInfo *)0x0);
          if (bVar2) {
            pBVar1 = param_2->___butterfly_4;
            ButterflyFlock_SetLanding_m95DE165838E4D59EEAAB965D1050601B77B5B014
                      (param_1,pBVar1,
                       (ButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B *)0x0,
                       (MethodInfo *)0x0);
            if (pBVar1 == (Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E *)0x0)
            goto LAB_108832c6;
            if (pBVar1->___state_11 == '\x02') {
              pMVar6 = (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)
                       Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared
                                 ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar1,
                                  Component_GetComponentInChildren_TisMeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A_m3C4C9611718950DB969825FED1991AED4AB6BD42_RuntimeMethod_var
                                 );
              if (pMVar6 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0)
              goto LAB_108832c6;
              MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                        (pMVar6,param_1->___flapMesh_6,(MethodInfo *)0x0);
            }
            pBVar1->___state_11 = '\0';
          }
          return;
        }
        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        }
        bVar2 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                          ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pBVar1,
                           (MethodInfo *)0x0);
        if (bVar2) {
          if (param_2->___butterfly_4 == (Butterfly_tD88FB24FED212100B54898A76CACE40F8EBAC53E *)0x0)
          goto LAB_108832c6;
          pCVar7 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                   Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                             ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                              param_2->___butterfly_4,(MethodInfo *)0x0);
        }
        else {
          if (param_1->___activeButterflies_9 ==
              (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_108832c6;
          pCVar7 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
                   Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                             (param_1->___activeButterflies_9,0,(MethodInfo *)0x0);
        }
        if (pCVar7 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) {
          pTVar4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                             (pCVar7,(MethodInfo *)0x0);
          if (pTVar4 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
            Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                      (pTVar4,param_1->___disabledButterflies_10,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_108832c6:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
