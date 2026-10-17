// RVA 0x4c4850 | Placemaker.Ui.Dim$$.ctor
// PDB: Dim__ctor_m6A3F21E3796DFFEC5D86241CA32D57D5A4393FBD
// Body: [[104c4850, 104c4915]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 103e8fa0 UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
// 10a39c60 Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982

void __cdecl
Dim__ctor_m6A3F21E3796DFFEC5D86241CA32D57D5A4393FBD
          (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *param_1,MethodInfo *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar4;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar5;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 local_14;

  if (DAT_1151d131 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
    DAT_1151d131 = '\x01';
  }
  pUVar4 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A(pUVar4,1.0,(MethodInfo *)0x0);
  param_1->___alphaState_5 = pUVar4;
  pUVar4 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A(pUVar4,1.0,(MethodInfo *)0x0);
  param_1->___dimOrDark_6 = pUVar4;
  pUVar4 = (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)
           il2cpp_codegen_object_new
                     (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C_il2cpp_TypeInfo_var);
  UpdateState__ctor_m01EDA66F473C3B671CEAC53B590884913324808A(pUVar4,0.0,(MethodInfo *)0x0);
  param_1->___blurState_7 = pUVar4;
  pCVar5 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(&local_14,(MethodInfo *)0x0);
  fVar1 = pCVar5->___g_1;
  fVar2 = pCVar5->___b_2;
  fVar3 = pCVar5->___a_3;
  (param_1->___dimColor_8).___r_0 = pCVar5->___r_0;
  (param_1->___dimColor_8).___g_1 = fVar1;
  (param_1->___dimColor_8).___b_2 = fVar2;
  (param_1->___dimColor_8).___a_3 = fVar3;
  pCVar5 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(&local_14,(MethodInfo *)0x0);
  fVar1 = pCVar5->___g_1;
  fVar2 = pCVar5->___b_2;
  fVar3 = pCVar5->___a_3;
  (param_1->___darkColor_9).___r_0 = pCVar5->___r_0;
  (param_1->___darkColor_9).___g_1 = fVar1;
  (param_1->___darkColor_9).___b_2 = fVar2;
  (param_1->___darkColor_9).___a_3 = fVar3;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
