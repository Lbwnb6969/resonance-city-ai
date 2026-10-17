// RVA 0x8435d0 | Placemaker.Ui.GenericMenuNavigator$$.ctor
// PDB: GenericMenuNavigator__ctor_mA2961785A0D5B7102D2C03D5BCB947B728BF9260
// Body: [[108435d0, 10843653]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
GenericMenuNavigator__ctor_mA2961785A0D5B7102D2C03D5BCB947B728BF9260
          (GenericMenuNavigator_t8DD7647D5CEEB4AE0E944F8565B0F21478F1A333 *param_1,
          MethodInfo *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  int iVar3;
  float fVar4;
  int iVar5;

  if (DAT_1151f44b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RapidButton_t1DC17FBA0032598FFC6C42C0B053F8EBDB1F5D05_il2cpp_TypeInfo_var);
    DAT_1151f44b = '\x01';
  }
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
  (param_1->___rapidX_9).___lastFrame_0 = *(int *)((int)pvVar2 + 0x30);
  (param_1->___rapidX_9).___count_1 = iVar3;
  (param_1->___rapidX_9).___t_2 = fVar4;
  (param_1->___rapidX_9).___countThreshold_3 = iVar5;
  (param_1->___rapidX_9).___slowSpeed_4 = (float)(int)uVar1;
  (param_1->___rapidX_9).___fastSpeed_5 = (float)(int)((ulonglong)uVar1 >> 0x20);
  pvVar2 = RapidButton_t1DC17FBA0032598FFC6C42C0B053F8EBDB1F5D05_il2cpp_TypeInfo_var->static_fields;
  iVar3 = *(int *)((int)pvVar2 + 0x34);
  fVar4 = *(float *)((int)pvVar2 + 0x38);
  iVar5 = *(int *)((int)pvVar2 + 0x3c);
  uVar1 = *(undefined8 *)((int)pvVar2 + 0x40);
  (param_1->___rapidY_10).___lastFrame_0 = *(int *)((int)pvVar2 + 0x30);
  (param_1->___rapidY_10).___count_1 = iVar3;
  (param_1->___rapidY_10).___t_2 = fVar4;
  (param_1->___rapidY_10).___countThreshold_3 = iVar5;
  (param_1->___rapidY_10).___slowSpeed_4 = (float)(int)uVar1;
  (param_1->___rapidY_10).___fastSpeed_5 = (float)(int)((ulonglong)uVar1 >> 0x20);
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
