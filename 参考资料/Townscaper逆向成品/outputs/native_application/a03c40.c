// RVA 0xa03c40 | Placemaker.SaveSystem$$UpdateAllTextures
// PDB: SaveSystem_UpdateAllTextures_mC9F6032145ACD2EF448A7702742A2201917B7B9D
// Body: [[10a03c40, 10a03d2a]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1043f140 Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
// 1066da00 Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258
// 1066e3c0 Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
// 1066f450 Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
// 10a03d3c FUN_10a03d3c
// 11149190 ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477

void __cdecl
SaveSystem_UpdateAllTextures_mC9F6032145ACD2EF448A7702742A2201917B7B9D
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,MethodInfo *param_2)

{
  int iVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  Il2CppObject *pIVar3;
  int iVar4;
  Il2CppObject_u_0 IVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__SaveSystem_UpdateAllTextures_mC9F6032145ACD2EF448A7702742A2201917B7B9D;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  if (DAT_115201b9 == '\0') {
    ExceptionList = &pvStack_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Component_GetComponent_TisMetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB_mBB9DA225704AE067D654F3C50333BDF7FDC1A1B6_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralCA031B51F2F046738D15F4A756B028BE24EC00BC);
    DAT_115201b9 = '\x01';
  }
  local_8 = 0;
  if (param_1->___metaSaveContainer_9 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0)
  {
    iVar1 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05
                      (param_1->___metaSaveContainer_9,(MethodInfo *)0x0);
    iVar4 = 1;
    while( true ) {
      if (iVar1 <= iVar4) {
        FUN_10a03d3c();
        return;
      }
      if (param_1->___metaSaveContainer_9 ==
          (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
      pTVar2 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C
                         (param_1->___metaSaveContainer_9,iVar4,(MethodInfo *)0x0);
      if (pTVar2 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) break;
      pIVar3 = Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pTVar2,
                          Component_GetComponent_TisMetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB_mBB9DA225704AE067D654F3C50333BDF7FDC1A1B6_RuntimeMethod_var
                         );
      if (pIVar3 == (Il2CppObject *)0x0) break;
      if ((float)pIVar3[6].field0_0x0 <= (float)pIVar3[6].monitor) {
        if (pIVar3[5].field0_0x0.klass == (Il2CppClass *)0x0) break;
        ImageConversion_LoadImage_m5BB4FBA0565E698ED5C6F25F7A0A5F83CADD7477
                  ((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)pIVar3[3].field0_0x0.klass
                   ,(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726 *)
                    (pIVar3[5].field0_0x0.klass)->declaringType,(MethodInfo *)0x0);
        IVar5 = (Il2CppObject_u_0)
                Time_get_unscaledTime_m85A3479E3D78D05FEDEEFEF36944AC5EF9B31258((MethodInfo *)0x0);
        pIVar3[6].field0_0x0 = IVar5;
      }
      iVar4 = iVar4 + 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
