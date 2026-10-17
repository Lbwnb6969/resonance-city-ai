// RVA 0x3ef580 | Placemaker.Quads.Vert$$AddQuad
// PDB: Vert_AddQuad_mC116BD476DFEF5F3BB2DD0F5CBC80343CF75761B
// Body: [[103ef580, 103ef838]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10196a10 _CIatan2
// 103efaa0 Vert_GetQuad_mB89B530B14247DDDC03EAFB5F4A164CE65DD9D03
// 103efc20 Vert_SetQuad_m61AC0195487D320418C363F86EF064BB34E1E526
// 10807240 Quad_get_planePos_mB50996FEE1C86377D56D008237455657B38EB3DD

void __cdecl
Vert_AddQuad_mC116BD476DFEF5F3BB2DD0F5CBC80343CF75761B
          (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *param_1,
          Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB param_2,MethodInfo *param_3)

{
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB QVar1;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB QVar2;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *pVVar3;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB *pQVar4;
  char cVar5;
  int iVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float fVar7;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB local_9c;
  Quad_t1E4E0FD4F68559FA20870CFBD24EB4162BEDBDAB local_58;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 local_14;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 local_c;

  pVVar3 = param_1;
  local_58.___quadIndex_0 = param_2.___quadIndex_0;
  local_58._1_3_ = param_2._1_3_;
  local_58.___v0_1.___x_0 = param_2.___v0_1.___x_0;
  local_58.___v0_1.___y_1 = param_2.___v0_1.___y_1;
  local_58.___v1_2.___x_0 = param_2.___v1_2.___x_0;
  local_58.___p3_8.___y_1 = param_2.___p3_8.___y_1;
  local_58.___v1_2.___y_1 = param_2.___v1_2.___y_1;
  local_58.___v2_3.___x_0 = param_2.___v2_3.___x_0;
  local_58.___v2_3.___y_1 = param_2.___v2_3.___y_1;
  local_58.___v3_4.___x_0 = param_2.___v3_4.___x_0;
  local_58.___v3_4.___y_1 = param_2.___v3_4.___y_1;
  local_58.___p0_5.___x_0 = param_2.___p0_5.___x_0;
  local_58.___p0_5.___y_1 = param_2.___p0_5.___y_1;
  local_58.___p1_6.___x_0 = param_2.___p1_6.___x_0;
  local_58.___p1_6.___y_1 = param_2.___p1_6.___y_1;
  local_58.___p2_7.___x_0 = param_2.___p2_7.___x_0;
  local_58.___p2_7.___y_1 = param_2.___p2_7.___y_1;
  local_58.___p3_8.___x_0 = param_2.___p3_8.___x_0;
  local_c = Quad_get_planePos_mB50996FEE1C86377D56D008237455657B38EB3DD(&local_58,(MethodInfo *)0x0)
  ;
  param_2.___p3_8.___y_1 = (param_1->___planePos_1).___y_1;
  if (`float___cdecl_math_atan2_mFFA7942F9F41993E3F752E630DB45D0B4104034C_inline(float,float,MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized == false) {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
    `float___cdecl_math_atan2_mFFA7942F9F41993E3F752E630DB45D0B4104034C_inline(float,float,MethodInfo_const*)'
    ::__l2::s_Il2CppMethodInitialized = true;
  }
  param_2.___p3_8.___y_1 = local_c.___y_1 - param_2.___p3_8.___y_1;
  if ((Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
  }
  param_2.___p3_8 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)(double)param_2.___p3_8.___y_1
  ;
  _CIatan2();
  cVar5 = param_1->___quadCount_8;
  iVar6 = 0;
  param_2.___p3_8 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)(double)extraout_ST0;
  param_1 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)(float)extraout_ST0;
  if ('\0' < cVar5) {
    do {
      pQVar4 = Vert_GetQuad_mB89B530B14247DDDC03EAFB5F4A164CE65DD9D03
                         (&param_2,pVVar3,iVar6,(MethodInfo *)0x0);
      local_9c.___quadIndex_0 = pQVar4->___quadIndex_0;
      local_9c._1_3_ = *(undefined3 *)&pQVar4->field_0x1;
      local_9c.___v0_1.___x_0 = (pQVar4->___v0_1).___x_0;
      local_9c.___v0_1.___y_1 = (pQVar4->___v0_1).___y_1;
      local_9c.___v1_2.___x_0 = (pQVar4->___v1_2).___x_0;
      local_9c.___v1_2.___y_1 = (pQVar4->___v1_2).___y_1;
      local_9c.___v2_3.___x_0 = (pQVar4->___v2_3).___x_0;
      local_9c.___v2_3.___y_1 = (pQVar4->___v2_3).___y_1;
      local_9c.___v3_4.___x_0 = (pQVar4->___v3_4).___x_0;
      local_9c.___v3_4.___y_1 = (pQVar4->___v3_4).___y_1;
      local_9c.___p0_5.___x_0 = (pQVar4->___p0_5).___x_0;
      local_9c.___p0_5.___y_1 = (pQVar4->___p0_5).___y_1;
      local_9c.___p1_6.___x_0 = (pQVar4->___p1_6).___x_0;
      local_9c.___p1_6.___y_1 = (pQVar4->___p1_6).___y_1;
      local_9c.___p2_7.___x_0 = (pQVar4->___p2_7).___x_0;
      local_9c.___p2_7.___y_1 = (pQVar4->___p2_7).___y_1;
      local_9c.___p3_8.___x_0 = (pQVar4->___p3_8).___x_0;
      local_9c.___p3_8.___y_1 = (pQVar4->___p3_8).___y_1;
      local_14 = Quad_get_planePos_mB50996FEE1C86377D56D008237455657B38EB3DD
                           (&local_9c,(MethodInfo *)0x0);
      param_2.___p3_8.___y_1 = (pVVar3->___planePos_1).___x_0;
      fVar7 = (pVVar3->___planePos_1).___y_1;
      local_c.___y_1 = fVar7;
      if (`float___cdecl_math_atan2_mFFA7942F9F41993E3F752E630DB45D0B4104034C_inline(float,float,MethodInfo_const*)'
          ::__l2::s_Il2CppMethodInitialized == false) {
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
        `float___cdecl_math_atan2_mFFA7942F9F41993E3F752E630DB45D0B4104034C_inline(float,float,MethodInfo_const*)'
        ::__l2::s_Il2CppMethodInitialized = true;
      }
      param_2.___p3_8.___y_1 = local_14.___x_0 - param_2.___p3_8.___y_1;
      local_c.___y_1 = local_14.___y_1 - local_c.___y_1;
      fVar7 = local_c.___y_1;
      if ((Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->has_cctor != '\0') &&
         (Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var->cctor_finished == 0))
      {
        il2cpp_runtime_class_init
                  (Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
        fVar7 = local_c.___y_1;
      }
      param_2.___p3_8 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)(double)fVar7;
      _CIatan2();
      param_2.___p3_8 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)(double)extraout_ST0_00;
      if ((float)param_1 < (float)extraout_ST0_00) {
        QVar1.___v0_1.___x_0 = local_58.___v0_1.___x_0;
        QVar1.___quadIndex_0 = local_58.___quadIndex_0;
        QVar1._1_3_ = local_58._1_3_;
        QVar1.___v0_1.___y_1 = local_58.___v0_1.___y_1;
        QVar1.___v1_2.___x_0 = local_58.___v1_2.___x_0;
        QVar1.___v1_2.___y_1 = local_58.___v1_2.___y_1;
        QVar1.___v2_3.___x_0 = local_58.___v2_3.___x_0;
        QVar1.___v2_3.___y_1 = local_58.___v2_3.___y_1;
        QVar1.___v3_4.___x_0 = local_58.___v3_4.___x_0;
        QVar1.___v3_4.___y_1 = local_58.___v3_4.___y_1;
        QVar1.___p0_5.___x_0 = local_58.___p0_5.___x_0;
        QVar1.___p0_5.___y_1 = local_58.___p0_5.___y_1;
        QVar1.___p1_6.___x_0 = local_58.___p1_6.___x_0;
        QVar1.___p1_6.___y_1 = local_58.___p1_6.___y_1;
        QVar1.___p2_7.___x_0 = local_58.___p2_7.___x_0;
        QVar1.___p2_7.___y_1 = local_58.___p2_7.___y_1;
        QVar1.___p3_8.___x_0 = local_58.___p3_8.___x_0;
        QVar1.___p3_8.___y_1 = local_58.___p3_8.___y_1;
        Vert_SetQuad_m61AC0195487D320418C363F86EF064BB34E1E526(pVVar3,iVar6,QVar1,(MethodInfo *)0x0)
        ;
        param_1 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)(float)(double)param_2.___p3_8;
        local_58.___p3_8.___y_1 = local_9c.___p3_8.___y_1;
        local_58.___quadIndex_0 = local_9c.___quadIndex_0;
        local_58._1_3_ = local_9c._1_3_;
        local_58.___v0_1.___x_0 = local_9c.___v0_1.___x_0;
        local_58.___v0_1.___y_1 = local_9c.___v0_1.___y_1;
        local_58.___v1_2.___x_0 = local_9c.___v1_2.___x_0;
        local_58.___v1_2.___y_1 = local_9c.___v1_2.___y_1;
        local_58.___v2_3.___x_0 = local_9c.___v2_3.___x_0;
        local_58.___v2_3.___y_1 = local_9c.___v2_3.___y_1;
        local_58.___v3_4.___x_0 = local_9c.___v3_4.___x_0;
        local_58.___v3_4.___y_1 = local_9c.___v3_4.___y_1;
        local_58.___p0_5.___x_0 = local_9c.___p0_5.___x_0;
        local_58.___p0_5.___y_1 = local_9c.___p0_5.___y_1;
        local_58.___p1_6.___x_0 = local_9c.___p1_6.___x_0;
        local_58.___p1_6.___y_1 = local_9c.___p1_6.___y_1;
        local_58.___p2_7.___x_0 = local_9c.___p2_7.___x_0;
        local_58.___p2_7.___y_1 = local_9c.___p2_7.___y_1;
        local_58.___p3_8.___x_0 = local_9c.___p3_8.___x_0;
      }
      cVar5 = pVVar3->___quadCount_8;
      iVar6 = iVar6 + 1;
    } while (iVar6 < cVar5);
  }
  QVar2.___v0_1.___x_0 = local_58.___v0_1.___x_0;
  QVar2.___quadIndex_0 = local_58.___quadIndex_0;
  QVar2._1_3_ = local_58._1_3_;
  QVar2.___v0_1.___y_1 = local_58.___v0_1.___y_1;
  QVar2.___v1_2.___x_0 = local_58.___v1_2.___x_0;
  QVar2.___v1_2.___y_1 = local_58.___v1_2.___y_1;
  QVar2.___v2_3.___x_0 = local_58.___v2_3.___x_0;
  QVar2.___v2_3.___y_1 = local_58.___v2_3.___y_1;
  QVar2.___v3_4.___x_0 = local_58.___v3_4.___x_0;
  QVar2.___v3_4.___y_1 = local_58.___v3_4.___y_1;
  QVar2.___p0_5.___x_0 = local_58.___p0_5.___x_0;
  QVar2.___p0_5.___y_1 = local_58.___p0_5.___y_1;
  QVar2.___p1_6.___x_0 = local_58.___p1_6.___x_0;
  QVar2.___p1_6.___y_1 = local_58.___p1_6.___y_1;
  QVar2.___p2_7.___x_0 = local_58.___p2_7.___x_0;
  QVar2.___p2_7.___y_1 = local_58.___p2_7.___y_1;
  QVar2.___p3_8.___x_0 = local_58.___p3_8.___x_0;
  QVar2.___p3_8.___y_1 = local_58.___p3_8.___y_1;
  Vert_SetQuad_m61AC0195487D320418C363F86EF064BB34E1E526(pVVar3,(int)cVar5,QVar2,(MethodInfo *)0x0);
  pVVar3->___quadCount_8 = pVVar3->___quadCount_8 + '\x01';
  return;
}
