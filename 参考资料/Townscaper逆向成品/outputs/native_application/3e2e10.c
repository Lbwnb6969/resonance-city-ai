// RVA 0x3e2e10 | Placemaker.Ui.ObjExporter$$.ctor
// PDB: ObjExporter__ctor_mFF2D112F72B3A0F0A222EA620AF2FDF4C53D20FE
// Body: [[103e2e10, 103e2e55]]
// Direct callees:
// 101275a0 il2cpp_array_new_specific
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10a36df0 Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0

void __cdecl
ObjExporter__ctor_mFF2D112F72B3A0F0A222EA620AF2FDF4C53D20FE
          (ObjExporter_t9F614C11BF7AC2CAC258AD8A31553921ACD0C77D *param_1,MethodInfo *param_2)

{
  MaterialToExportU5BU5D_t43F4DF2F51BEE3F7F7120F11D1C3367DE738ADA3 *pMVar1;

  if (DAT_1151c89a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       MaterialToExportU5BU5D_t43F4DF2F51BEE3F7F7120F11D1C3367DE738ADA3_il2cpp_TypeInfo_var
              );
    DAT_1151c89a = '\x01';
  }
  pMVar1 = (MaterialToExportU5BU5D_t43F4DF2F51BEE3F7F7120F11D1C3367DE738ADA3 *)
           il2cpp_array_new_specific
                     (MaterialToExportU5BU5D_t43F4DF2F51BEE3F7F7120F11D1C3367DE738ADA3_il2cpp_TypeInfo_var
                      ,4);
  param_1->___materialsToExport_5 = pMVar1;
  Behaviour__ctor_mCACD3614226521EA607B0F3640C0FAC7EACCBCE0
            ((Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 *)param_1,(MethodInfo *)0x0);
  return;
}
