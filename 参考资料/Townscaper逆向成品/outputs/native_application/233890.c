// RVA 0x233890 | Placemaker.ClickParticleSound$$OnParticleCollision
// PDB: ClickParticleSound_OnParticleCollision_mD0D106AA8646F930EE8B613C9389906532F1BE8E
// Body: [[10233890, 102339a3] [102339a7, 10233b9d]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10196010 _libm_sse2_sqrt_precise
// 103d3290 ManySoundsManager_PlaySound_m3592EAC539461781EFBAD7374A408D7DF47CFB6D
// 10441630 DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
// 105cc160 KeyValuePair_2_get_Key_m2B0C0B873F6584BDB82A68B27A42C13215562BB6_gshared
// 105d0600 ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
// 10674510 Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a4a920 Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
// 10a4aa60 Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 11143100 ParticleCollisionEvent_get_colliderComponent_m9C6F5BA0C22117C6A04E7E050F653B5CBE320F9A
// 11143130 ParticleCollisionEvent_get_velocity_m1EE32F62E2E4FD9BEF5C7A080D386E5133A5505D
// 11143150 ParticlePhysicsExtensions_GetCollisionEvents_m19452DB7C4E2F1FF25544C136B903D03CCFD12BD

void __cdecl
ClickParticleSound_OnParticleCollision_mD0D106AA8646F930EE8B613C9389906532F1BE8E
          (ClickParticleSound_t944431EAAA22F35853C69BB7352312CFCA8DC633 *param_1,
          GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *param_2,MethodInfo *param_3)

{
  float *pfVar1;
  Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32 *pIVar2;
  Maker_t537981F2ED20294ACF4C94693B3268049739203D *pMVar3;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *pVVar4;
  ManySoundsManager_tC683AA822F4F7736E44162B15F0992C96CD684D6 *pMVar5;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar6;
  bool bVar7;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar8;
  int iVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar10;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar11;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar12;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar13;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar14;
  EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *pEVar15;
  int iVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  MethodInfo *pMVar20;
  float local_80;
  float local_78;
  undefined8 local_68;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_5c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_50;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_40;
  ParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD local_30;

  if (DAT_1151b58e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD_mCEA54979106A61D76B3A5F9B752B2E44FDA82293_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_m634F2721C5A952C7E5F32B3411FEA1A7AE94F783_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_tB8EC945941BA4A81AA9A04906235EA8124BACAB7_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mAA87A40BE77081A00704A6584F5C0113C6E636C2_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151b58e = '\x01';
  }
  local_30.___m_Intersection_0.___x_2 = 0.0;
  local_30.___m_Intersection_0.___y_3 = 0.0;
  local_30.___m_Intersection_0.___z_4 = 0.0;
  local_30.___m_Normal_1.___x_2 = 0.0;
  local_5c.___z_4 = 0.0;
  local_30.___m_Normal_1.___y_3 = 0.0;
  local_30.___m_Normal_1.___z_4 = 0.0;
  local_30.___m_Velocity_2.___x_2 = 0.0;
  local_30.___m_Velocity_2.___y_3 = 0.0;
  local_30.___m_Velocity_2.___z_4 = 0.0;
  local_30.___m_ColliderInstanceID_3 = 0;
  local_5c.___x_2 = 0.0;
  local_5c.___y_3 = 0.0;
  if ((ListPool_1_tB8EC945941BA4A81AA9A04906235EA8124BACAB7_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ListPool_1_tB8EC945941BA4A81AA9A04906235EA8124BACAB7_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ListPool_1_tB8EC945941BA4A81AA9A04906235EA8124BACAB7_il2cpp_TypeInfo_var);
  }
  pDVar8 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
           ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                     (ListPool_1_Get_m634F2721C5A952C7E5F32B3411FEA1A7AE94F783_RuntimeMethod_var);
  iVar9 = ParticlePhysicsExtensions_GetCollisionEvents_m19452DB7C4E2F1FF25544C136B903D03CCFD12BD
                    (param_1->___particles_5,param_2,
                     (List_1_tC57F1BA46C89AA33253984801D30F8502BBBFE68 *)pDVar8,(MethodInfo *)0x0);
  fVar17 = param_1->___lowestSpeed_6 * param_1->___lowestSpeed_6;
  pVVar10 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(&local_50,(MethodInfo *)0x0);
  pEVar15 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)0x0;
  local_68._0_4_ = pVVar10->___x_2;
  local_68._4_4_ = pVVar10->___y_3;
  local_78 = pVVar10->___z_4;
  local_80 = fVar17;
  if (0 < iVar9) {
    iVar16 = 0;
    do {
      if (pDVar8 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
      goto LAB_10233b99;
      if (pDVar8->___entries_1 <= pEVar15) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      pIVar2 = pDVar8->___buckets_0;
      pfVar1 = (float *)((int)pIVar2->m_Items + iVar16);
      local_30.___m_Intersection_0.___x_2 = *pfVar1;
      local_30.___m_Intersection_0.___y_3 = pfVar1[1];
      local_30.___m_Intersection_0.___z_4 = pfVar1[2];
      local_30.___m_Normal_1.___x_2 = pfVar1[3];
      pfVar1 = (float *)((int)pIVar2[1].m_Items + iVar16 + -8);
      local_30.___m_Normal_1.___y_3 = *pfVar1;
      local_30.___m_Normal_1.___z_4 = pfVar1[1];
      local_30.___m_Velocity_2.___x_2 = pfVar1[2];
      local_30.___m_Velocity_2.___y_3 = pfVar1[3];
      local_30._32_8_ = *(undefined8 *)((int)pIVar2[2].m_Items + iVar16 + -0x10);
      if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
         (pMVar3 = param_1->___master_4->___maker_6,
         pMVar3 == (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) goto LAB_10233b99;
      pVVar4 = pMVar3->___lastAddedVoxel_12;
      if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
      }
      bVar7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                        ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pVVar4,
                         (MethodInfo *)0x0);
      if (bVar7) {
        pCVar11 = ParticleCollisionEvent_get_colliderComponent_m9C6F5BA0C22117C6A04E7E050F653B5CBE320F9A
                            (&local_30,(MethodInfo *)0x0);
        if (pCVar11 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)
        goto LAB_10233b99;
        pOVar12 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                  Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                            (pCVar11,(MethodInfo *)0x0);
        if (((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
            || (pMVar3 = param_1->___master_4->___maker_6,
               pMVar3 == (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) ||
           (pVVar4 = pMVar3->___lastAddedVoxel_12,
           pVVar4 == (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0)) goto LAB_10233b99;
        pOVar13 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                  Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pVVar4,
                             (MethodInfo *)0x0);
        if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0'
            ) && (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
        }
        bVar7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54
                          (pOVar12,pOVar13,(MethodInfo *)0x0);
        if (!bVar7) goto LAB_10233aa1;
      }
      else {
LAB_10233aa1:
        pVVar10 = ParticleCollisionEvent_get_velocity_m1EE32F62E2E4FD9BEF5C7A080D386E5133A5505D
                            (&local_50,&local_30,(MethodInfo *)0x0);
        local_5c.___x_2 = pVVar10->___x_2;
        local_5c.___y_3 = pVVar10->___y_3;
        local_5c.___z_4 = pVVar10->___z_4;
        fVar19 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                           (&local_5c,(MethodInfo *)0x0);
        if (local_80 < fVar19) {
          piVar14 = KeyValuePair_2_get_Key_m2B0C0B873F6584BDB82A68B27A42C13215562BB6_gshared
                              (&local_40,
                               (KeyValuePair_2_tD00B4F68FA99B82C68481A84C9E582504AC3913E *)&local_30
                               ,(MethodInfo *)0x0);
          local_68._0_4_ = piVar14->___x_0;
          local_68._4_4_ = piVar14->___y_1;
          local_78 = (float)piVar14->___z_2;
          local_80 = fVar19;
        }
      }
      pEVar15 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                ((int)&pEVar15->_padding_ + 1);
      iVar16 = iVar16 + 0x28;
    } while ((int)pEVar15 < iVar9);
  }
  if (fVar17 < local_80) {
    if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
       (pMVar5 = param_1->___master_4->___manySoundsManager_32,
       pMVar5 == (ManySoundsManager_tC683AA822F4F7736E44162B15F0992C96CD684D6 *)0x0)) {
LAB_10233b99:
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    dVar18 = (double)local_80;
    pMVar20 = (MethodInfo *)0x0;
    _libm_sse2_sqrt_precise();
    VVar6.___z_4 = local_78;
    VVar6.___x_2 = (float)(undefined4)local_68;
    VVar6.___y_3 = (float)local_68._4_4_;
    ManySoundsManager_PlaySound_m3592EAC539461781EFBAD7374A408D7DF47CFB6D
              (pMVar5,0xb,VVar6,0.0,(float)dVar18 * __real_3dcccccd,pMVar20);
  }
  DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
            (pDVar8,
             ListPoolExtension_ReturnToPool_TisParticleCollisionEvent_t363B261289BF8C08D435B93F8DC4F5EB45AE26DD_mCEA54979106A61D76B3A5F9B752B2E44FDA82293_RuntimeMethod_var
            );
  return;
}
