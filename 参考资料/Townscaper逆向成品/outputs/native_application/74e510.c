// RVA 0x74e510 | Placemaker.PaletteHolder$$SelectNextPicker
// PDB: PaletteHolder_SelectNextPicker_m62DFE39D1F6695CB50E9A05BF131EFB0BDD297F3
// Body: [[1074e510, 1074e576]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10325c60 UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared

void __cdecl
PaletteHolder_SelectNextPicker_m62DFE39D1F6695CB50E9A05BF131EFB0BDD297F3
          (PaletteHolder_tF17DB451E623E6EBDCF01A847508D7229E367B0B *param_1,int param_2,
          MethodInfo *param_3)

{
  Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2 *pCVar1;
  int iVar2;
  int iVar3;

  if ((param_1->___palette_5 != (Palette_t19EDAE7484381DAC9BAB2F15FAFFE363553E013A *)0x0) &&
     (pCVar1 = param_1->___palette_5->___voxelColors_4,
     pCVar1 != (Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2 *)0x0)) {
    iVar3 = pCVar1->_padding_;
    iVar2 = param_1->___selectedColorIndex_6;
    if (DAT_1151ebe3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&
                         Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var
                );
      DAT_1151ebe3 = '\x01';
    }
    iVar3 = (iVar2 + iVar3 + param_2) % iVar3;
    param_1->___selectedColorIndex_6 = iVar3;
    if ((UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)param_1->___onNewColor_7 !=
        (UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)0x0) {
      UnityAction_1_Invoke_m34CD3B09DF7371CBA265F13CD7255906D697232D_gshared
                ((UnityAction_1_t5CF46572372725E6225588C466A7AF5C8597AA79 *)param_1->___onNewColor_7
                 ,iVar3,Action_1_Invoke_mF082D8233F09827A1AAEFE88C2D470BA1C0DF301_RuntimeMethod_var)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
