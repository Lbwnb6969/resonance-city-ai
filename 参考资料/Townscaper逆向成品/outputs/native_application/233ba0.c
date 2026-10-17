// RVA 0x233ba0 | Placemaker.ClickParticleSound$$OnParticleTrigger
// PDB: ClickParticleSound_OnParticleTrigger_mF273925FC2342158FB4C63B4FB8A9352458AB172
// Body: [[10233ba0, 10233cab] [10233caf, 10233dc9]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10192150 memset
// 10196010 _libm_sse2_sqrt_precise
// 1026afc0 Enumerator_get_Current_m219A61A853F50E6015B3FE63741CFDF398F8A52F_gshared
// 103d3290 ManySoundsManager_PlaySound_m3592EAC539461781EFBAD7374A408D7DF47CFB6D
// 10441630 DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
// 105cc160 KeyValuePair_2_get_Key_m2B0C0B873F6584BDB82A68B27A42C13215562BB6_gshared
// 105d0600 ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
// 10674510 Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 11143180 ParticlePhysicsExtensions_GetTriggerParticles_m2EBD57BC2C6EB8BE67A27B760C8349AFFAD0723C

void __cdecl
ClickParticleSound_OnParticleTrigger_mF273925FC2342158FB4C63B4FB8A9352458AB172
          (ClickParticleSound_t944431EAAA22F35853C69BB7352312CFCA8DC633 *param_1,MethodInfo *param_2
          )

{
  ManySoundsManager_tC683AA822F4F7736E44162B15F0992C96CD684D6 *pMVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar2;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar3;
  int iVar4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar5;
  ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D *pVVar6;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar7;
  int iVar8;
  EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *pEVar9;
  undefined4 *puVar10;
  Enumerator_tDC59471D5148D9341C44E818E45BF04091D98514 *pEVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  MethodInfo *pMVar15;
  float local_e0;
  int local_dc;
  float local_d8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_c4;
  undefined8 local_b8;
  ValueTuple_3_tEF9008762923C50FBA1F5E13EFAE26235274202D local_b0;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 local_a0;
  Enumerator_tDC59471D5148D9341C44E818E45BF04091D98514 local_90 [5];

  if (DAT_1151b58f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisParticle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1_m71DA84E7AC26C67668C92AC430B6C1CC19842BAE_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_mDE6836D390C0A24803A32C0FFC99B84C98E3C5FB_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_tCC0CE7E69CB91459C58A64321FFA28FA9AEBFAAF_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m2EB85207944E52474C264C0000A4B4989FA0FDE0_RuntimeMethod_var)
    ;
    DAT_1151b58f = '\x01';
  }
  memset((uchar *)local_90,'\0',0x84);
  local_c4.___x_2 = 0.0;
  local_c4.___y_3 = 0.0;
  local_c4.___z_4 = 0.0;
  if ((ListPool_1_tCC0CE7E69CB91459C58A64321FFA28FA9AEBFAAF_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ListPool_1_tCC0CE7E69CB91459C58A64321FFA28FA9AEBFAAF_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ListPool_1_tCC0CE7E69CB91459C58A64321FFA28FA9AEBFAAF_il2cpp_TypeInfo_var);
  }
  pDVar3 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
           ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                     (ListPool_1_Get_mDE6836D390C0A24803A32C0FFC99B84C98E3C5FB_RuntimeMethod_var);
  iVar4 = ParticlePhysicsExtensions_GetTriggerParticles_m2EBD57BC2C6EB8BE67A27B760C8349AFFAD0723C
                    (param_1->___particles_5,2,
                     (List_1_tA1D5161C2AD941530756A2128C933F0D76F48E95 *)pDVar3,(MethodInfo *)0x0);
  fVar12 = param_1->___lowestSpeed_6 * param_1->___lowestSpeed_6;
  pVVar5 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                     ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_b0,
                      (MethodInfo *)0x0);
  pEVar9 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)0x0;
  local_b8._0_4_ = pVVar5->___x_2;
  local_b8._4_4_ = pVVar5->___y_3;
  local_d8 = pVVar5->___z_4;
  local_e0 = fVar12;
  if (0 < iVar4) {
    local_dc = 0;
    do {
      if (pDVar3 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
      goto LAB_10233dc5;
      if (pDVar3->___entries_1 <= pEVar9) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      puVar10 = (undefined4 *)((int)pDVar3->___buckets_0->m_Items + local_dc);
      pEVar11 = local_90;
      for (iVar8 = 0x21; iVar8 != 0; iVar8 = iVar8 + -1) {
        pEVar11->____list_0 = (LinkedList_1_t555E05F2E497A99E81B02BC6149DEFDB20186689 *)*puVar10;
        puVar10 = puVar10 + 1;
        pEVar11 = (Enumerator_tDC59471D5148D9341C44E818E45BF04091D98514 *)&pEVar11->____node_1;
      }
      pVVar6 = Enumerator_get_Current_m219A61A853F50E6015B3FE63741CFDF398F8A52F_gshared
                         (&local_b0,local_90,(MethodInfo *)0x0);
      local_c4.___x_2 = (float)pVVar6->___Item1_0;
      local_c4.___y_3 = (float)pVVar6->___Item2_1;
      local_c4.___z_4 = (float)pVVar6->___Item3_2;
      fVar14 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                         (&local_c4,(MethodInfo *)0x0);
      if (local_e0 < fVar14) {
        piVar7 = KeyValuePair_2_get_Key_m2B0C0B873F6584BDB82A68B27A42C13215562BB6_gshared
                           (&local_a0,
                            (KeyValuePair_2_tD00B4F68FA99B82C68481A84C9E582504AC3913E *)local_90,
                            (MethodInfo *)0x0);
        local_b8._0_4_ = piVar7->___x_0;
        local_b8._4_4_ = piVar7->___y_1;
        local_d8 = (float)piVar7->___z_2;
        local_e0 = fVar14;
      }
      pEVar9 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
               ((int)&pEVar9->_padding_ + 1);
      local_dc = local_dc + 0x84;
    } while ((int)pEVar9 < iVar4);
  }
  if (fVar12 < local_e0) {
    if ((param_1->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
       (pMVar1 = param_1->___master_4->___manySoundsManager_32,
       pMVar1 == (ManySoundsManager_tC683AA822F4F7736E44162B15F0992C96CD684D6 *)0x0)) {
LAB_10233dc5:
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    dVar13 = (double)local_e0;
    pMVar15 = (MethodInfo *)0x0;
    _libm_sse2_sqrt_precise();
    VVar2.___z_4 = local_d8;
    VVar2.___x_2 = (float)(undefined4)local_b8;
    VVar2.___y_3 = (float)local_b8._4_4_;
    ManySoundsManager_PlaySound_m3592EAC539461781EFBAD7374A408D7DF47CFB6D
              (pMVar1,0xc,VVar2,0.0,(float)dVar13 * __real_3dcccccd,pMVar15);
  }
  DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
            (pDVar3,
             ListPoolExtension_ReturnToPool_TisParticle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1_m71DA84E7AC26C67668C92AC430B6C1CC19842BAE_RuntimeMethod_var
            );
  return;
}
