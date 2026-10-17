// RVA 0x750030 | Placemaker.Palette$$.ctor
// PDB: Palette__ctor_m568A43FA824C54E75C7770105E6AF14C643E6C1F
// Body: [[10750030, 10750075]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10667a00 ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063

void __cdecl
Palette__ctor_m568A43FA824C54E75C7770105E6AF14C643E6C1F
          (Palette_t19EDAE7484381DAC9BAB2F15FAFFE363553E013A *param_1,MethodInfo *param_2)

{
  Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2 *pCVar1;

  if (DAT_1151ebe2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2_il2cpp_TypeInfo_var)
    ;
    DAT_1151ebe2 = '\x01';
  }
  pCVar1 = (Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2 *)
           il2cpp_array_new_specific
                     (Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2_il2cpp_TypeInfo_var,
                      0x20);
  param_1->___voxelColors_4 = pCVar1;
  ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063
            ((ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A *)param_1,(MethodInfo *)0x0
            );
  return;
}
