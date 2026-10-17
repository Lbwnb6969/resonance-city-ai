// RVA 0x4114e0 | Placemaker.HoverData$$IsOccupied
// PDB: HoverData_IsOccupied_mCA43C16A8002B1F7A713E250610DB3DE378AA916
// Body: [[104114e0, 104115b1]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10224ac0 Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10e6b990 Graph_BinaryTreeSearchVoxel_m2C96187B15BB3902E10EB13D8D0CD126668C54AC
// 10e6f930 Graph_IsCoordinateAllowed_mA7A88E2C6C1123906D52DBE1DD360FC64E8663E5

bool __cdecl
HoverData_IsOccupied_mCA43C16A8002B1F7A713E250610DB3DE378AA916
          (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *param_1,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_2,int param_3,MethodInfo *param_4)

{
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar1;
  Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *pDVar2;
  bool bVar3;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar4;
  uint uVar5;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *local_8;

  if (DAT_1151ca95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
              );
    DAT_1151ca95 = '\x01';
  }
  local_8 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0;
  if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (pGVar1 = param_1->___master_4->___graph_7,
     pGVar1 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
    bVar3 = Graph_IsCoordinateAllowed_mA7A88E2C6C1123906D52DBE1DD360FC64E8663E5
                      (pGVar1,param_2,param_3,(MethodInfo *)0x0);
    if (!bVar3) {
      return false;
    }
    if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
        (pGVar1 = param_1->___master_4->___graph_7,
        pGVar1 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) &&
       (pDVar2 = (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)pGVar1->___cornerDict_16,
       pDVar2 != (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)) {
      bVar3 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                        (pDVar2,param_2,(Il2CppObject **)&local_8,
                         Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
                        );
      if (!bVar3) {
        return false;
      }
      if (((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
          (pGVar1 = param_1->___master_4->___graph_7,
          local_8 != (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0)) &&
         (pTVar4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                             (local_8,(MethodInfo *)0x0),
         pGVar1 != (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) {
        uVar5 = Graph_BinaryTreeSearchVoxel_m2C96187B15BB3902E10EB13D8D0CD126668C54AC
                          (pGVar1,pTVar4,param_3,(MethodInfo *)0x0);
        return uVar5 < 0x80000000;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
