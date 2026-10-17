// RVA 0xa0c390 | Placemaker.Ui.SideMenuNavigator$$.ctor
// PDB: SideMenuNavigator__ctor_mCD9D7106D91FCD5C0A806385D3D277CDE66B5916
// Body: [[10a0c390, 10a0c499]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 102322c0 CanvasScalerFitter__ctor_mABF7349539C90DE1EEA9195A6859DC8653C58D21
// 103e9240 UpdateState__ctor_m4FA115E5F4FDC20495FA72780F11CD43FCF0497B
// 105d32b0 List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared

void __cdecl
SideMenuNavigator__ctor_mCD9D7106D91FCD5C0A806385D3D277CDE66B5916
          (SideMenuNavigator_t9DFC84A605D0E07F19F44B68113C049C20755F72 *param_1,MethodInfo *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar6;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar7;

  if (DAT_115201f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m7AD3156FDEC423A0BFE1BC96FCAA641CA2919E90_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_tC930FD3BB6BA4225ACDD3DC317BCA69F43A80325_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RapidButton_t1DC17FBA0032598FFC6C42C0B053F8EBDB1F5D05_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
    DAT_115201f2 = '\x01';
  }
  pLVar6 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_tC930FD3BB6BA4225ACDD3DC317BCA69F43A80325_il2cpp_TypeInfo_var);
  List_1__ctor_mEB46AE8EAB1679289138BB9868EB8DE660FBC1B2_gshared
            (pLVar6,List_1__ctor_m7AD3156FDEC423A0BFE1BC96FCAA641CA2919E90_RuntimeMethod_var);
  param_1->___navigableButtons_7 = (List_1_tC930FD3BB6BA4225ACDD3DC317BCA69F43A80325 *)pLVar6;
  pUVar7 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m4FA115E5F4FDC20495FA72780F11CD43FCF0497B(pUVar7,(MethodInfo *)0x0);
  param_1->___targetArrowY_8 = pUVar7;
  pUVar7 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m4FA115E5F4FDC20495FA72780F11CD43FCF0497B(pUVar7,(MethodInfo *)0x0);
  param_1->___targetArrowX_9 = pUVar7;
  pUVar7 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m4FA115E5F4FDC20495FA72780F11CD43FCF0497B(pUVar7,(MethodInfo *)0x0);
  param_1->___openState_10 = pUVar7;
  if ((RapidButton_t1DC17FBA0032598FFC6C42C0B053F8EBDB1F5D05_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (RapidButton_t1DC17FBA0032598FFC6C42C0B053F8EBDB1F5D05_il2cpp_TypeInfo_var->cctor_finished
         == 0)) {
    il2cpp_runtime_class_init
              (RapidButton_t1DC17FBA0032598FFC6C42C0B053F8EBDB1F5D05_il2cpp_TypeInfo_var);
  }
  pvVar2 = RapidButton_t1DC17FBA0032598FFC6C42C0B053F8EBDB1F5D05_il2cpp_TypeInfo_var->static_fields;
  iVar3 = *(int *)((int)pvVar2 + 0x34);
  fVar4 = *(float *)((int)pvVar2 + 0x38);
  iVar5 = *(int *)((int)pvVar2 + 0x3c);
  uVar1 = *(undefined8 *)((int)pvVar2 + 0x40);
  (param_1->___rapidY_12).___lastFrame_0 = *(int *)((int)pvVar2 + 0x30);
  (param_1->___rapidY_12).___count_1 = iVar3;
  (param_1->___rapidY_12).___t_2 = fVar4;
  (param_1->___rapidY_12).___countThreshold_3 = iVar5;
  (param_1->___rapidY_12).___slowSpeed_4 = (float)(int)uVar1;
  (param_1->___rapidY_12).___fastSpeed_5 = (float)(int)((ulonglong)uVar1 >> 0x20);
  pvVar2 = RapidButton_t1DC17FBA0032598FFC6C42C0B053F8EBDB1F5D05_il2cpp_TypeInfo_var->static_fields;
  iVar3 = *(int *)((int)pvVar2 + 0x34);
  fVar4 = *(float *)((int)pvVar2 + 0x38);
  iVar5 = *(int *)((int)pvVar2 + 0x3c);
  uVar1 = *(undefined8 *)((int)pvVar2 + 0x40);
  (param_1->___rapidX_13).___lastFrame_0 = *(int *)((int)pvVar2 + 0x30);
  (param_1->___rapidX_13).___count_1 = iVar3;
  (param_1->___rapidX_13).___t_2 = fVar4;
  (param_1->___rapidX_13).___countThreshold_3 = iVar5;
  (param_1->___rapidX_13).___slowSpeed_4 = (float)(int)uVar1;
  (param_1->___rapidX_13).___fastSpeed_5 = (float)(int)((ulonglong)uVar1 >> 0x20);
  CanvasScalerFitter__ctor_mABF7349539C90DE1EEA9195A6859DC8653C58D21
            ((CanvasScalerFitter_t7CDF0284DC89B01D6C79EF924DAF49D9DA4263C8 *)param_1,
             (MethodInfo *)0x0);
  return;
}
