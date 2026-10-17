// RVA 0xe6ba50 | Placemaker.Graphs.Graph$$CheckVoxel
// PDB: Graph_CheckVoxel_mC4411DDFC003E18F50C7B6E92EC0B664BECEA672
// Body: [[10e6ba50, 10e6bad6]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10224ac0 Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10e6b990 Graph_BinaryTreeSearchVoxel_m2C96187B15BB3902E10EB13D8D0CD126668C54AC

bool __cdecl
Graph_CheckVoxel_mC4411DDFC003E18F50C7B6E92EC0B664BECEA672
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_2,int param_3,MethodInfo *param_4)

{
  bool bVar1;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar2;
  int iVar3;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *local_8;

  if (DAT_11522833 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
              );
    DAT_11522833 = '\x01';
  }
  local_8 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0;
  if ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)param_1->___cornerDict_16 !=
      (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
    bVar1 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                      ((Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)
                       param_1->___cornerDict_16,param_2,(Il2CppObject **)&local_8,
                       Dictionary_2_TryGetValue_m7CD86CBDE7329C1D843BC96375DD0679B3592EDB_RuntimeMethod_var
                      );
    if (bVar1) {
      if (local_8 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_10e6bad2;
      pTVar2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                         (local_8,(MethodInfo *)0x0);
      iVar3 = Graph_BinaryTreeSearchVoxel_m2C96187B15BB3902E10EB13D8D0CD126668C54AC
                        (param_1,pTVar2,param_3,(MethodInfo *)0x0);
      if (-1 < iVar3) {
        return true;
      }
    }
    return false;
  }
LAB_10e6bad2:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
