// RVA 0x74fb40 | Placemaker.Ui.PaletteMenu$$.ctor
// PDB: PaletteMenu__ctor_m7897DF99A57E5A092335C16206DF929D5EE3B026
// Body: [[1074fb40, 1074fbf3]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 102322c0 CanvasScalerFitter__ctor_mABF7349539C90DE1EEA9195A6859DC8653C58D21
// 105d2dc0 List_1__ctor_m26649CC81E6E841879C726F4B0713A31F580A556_gshared

void __cdecl
PaletteMenu__ctor_m7897DF99A57E5A092335C16206DF929D5EE3B026
          (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *param_1,MethodInfo *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar6;

  if (DAT_1151ebef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1__ctor_m32D063C26CB5FBA65903B5B6B648CA42C13E021A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_t789C66E6ED4F1C4D2FC9058A93D989705663255B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&RapidButton_t1DC17FBA0032598FFC6C42C0B053F8EBDB1F5D05_il2cpp_TypeInfo_var);
    DAT_1151ebef = '\x01';
  }
  param_1->___selectedPickerIndex_6 = -1;
  pLVar6 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)
           il2cpp_codegen_object_new
                     (List_1_t789C66E6ED4F1C4D2FC9058A93D989705663255B_il2cpp_TypeInfo_var);
  List_1__ctor_m26649CC81E6E841879C726F4B0713A31F580A556_gshared
            (pLVar6,0xf,List_1__ctor_m32D063C26CB5FBA65903B5B6B648CA42C13E021A_RuntimeMethod_var);
  param_1->___palettePickers_7 = (List_1_t789C66E6ED4F1C4D2FC9058A93D989705663255B *)pLVar6;
  param_1->___pickerSize_21 = 40.0;
  if ((RapidButton_t1DC17FBA0032598FFC6C42C0B053F8EBDB1F5D05_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (RapidButton_t1DC17FBA0032598FFC6C42C0B053F8EBDB1F5D05_il2cpp_TypeInfo_var->cctor_finished
         == 0)) {
    il2cpp_runtime_class_init
              (RapidButton_t1DC17FBA0032598FFC6C42C0B053F8EBDB1F5D05_il2cpp_TypeInfo_var);
  }
  pvVar2 = RapidButton_t1DC17FBA0032598FFC6C42C0B053F8EBDB1F5D05_il2cpp_TypeInfo_var->static_fields;
  iVar3 = *(int *)((int)pvVar2 + 0x1c);
  fVar4 = *(float *)((int)pvVar2 + 0x20);
  iVar5 = *(int *)((int)pvVar2 + 0x24);
  uVar1 = *(undefined8 *)((int)pvVar2 + 0x28);
  (param_1->___rapidButton_24).___lastFrame_0 = *(int *)((int)pvVar2 + 0x18);
  (param_1->___rapidButton_24).___count_1 = iVar3;
  (param_1->___rapidButton_24).___t_2 = fVar4;
  (param_1->___rapidButton_24).___countThreshold_3 = iVar5;
  param_1->___updating_25 = true;
  param_1->___snap_26 = true;
  (param_1->___rapidButton_24).___slowSpeed_4 = (float)(int)uVar1;
  (param_1->___rapidButton_24).___fastSpeed_5 = (float)(int)((ulonglong)uVar1 >> 0x20);
  CanvasScalerFitter__ctor_mABF7349539C90DE1EEA9195A6859DC8653C58D21
            ((CanvasScalerFitter_t7CDF0284DC89B01D6C79EF924DAF49D9DA4263C8 *)param_1,
             (MethodInfo *)0x0);
  return;
}
