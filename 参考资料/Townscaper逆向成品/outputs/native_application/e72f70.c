// RVA 0xe72f70 | Placemaker.Graphs.Graph$$OnDrawGizmos
// PDB: Graph_OnDrawGizmos_m3D15AFECADBEB3C415712A5A6F3EC4B1A1863414
// Body: [[10e72f70, 10e7303f]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 10a39ed0 Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1
// 10a3e840 Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F
// 10e78170 Graph_U3COnDrawGizmosU3Eg__DrawBoundsGizmoU7C85_0_m4370B4D1CA5FB80519CB2189082AEF6C84F50C19

void __cdecl
Graph_OnDrawGizmos_m3D15AFECADBEB3C415712A5A6F3EC4B1A1863414
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,MethodInfo *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar3;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar10;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 local_1c;
  undefined8 local_c;

  if (DAT_11522848 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1_il2cpp_TypeInfo_var);
    DAT_11522848 = '\x01';
  }
  local_1c.___r_0 = (float)(param_1->___bounds_28).___c0_0.___x_0;
  local_1c.___g_1 = (float)(param_1->___bounds_28).___c0_0.___y_1;
  local_1c.___b_2 = (float)(param_1->___bounds_28).___c0_0.___z_2;
  local_1c.___a_3 = (float)(param_1->___bounds_28).___c1_1.___x_0;
  local_c._0_4_ = (param_1->___bounds_28).___c1_1.___y_1;
  local_c._4_4_ = (param_1->___bounds_28).___c1_1.___z_2;
  iVar2 = param_1->___boundsHeight_27;
  if ((Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1_il2cpp_TypeInfo_var);
  }
  iVar3.___c0_0.___y_1 = (int)local_1c.___g_1;
  iVar3.___c0_0.___x_0 = (int)local_1c.___r_0;
  iVar3.___c0_0.___z_2 = (int)local_1c.___b_2;
  iVar3.___c1_1.___x_0 = (int)local_1c.___a_3;
  iVar3.___c1_1.___y_1 = (int)local_c;
  iVar3.___c1_1.___z_2 = (int)((ulonglong)local_c >> 0x20);
  Graph_U3COnDrawGizmosU3Eg__DrawBoundsGizmoU7C85_0_m4370B4D1CA5FB80519CB2189082AEF6C84F50C19
            (iVar3,iVar2,(MethodInfo *)0x0);
  pCVar10 = Color_get_yellow_m9FD4BDABA7E40E136BE57EE7872CEA6B1B2FA1D1(&local_1c,(MethodInfo *)0x0);
  Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(*pCVar10,(MethodInfo *)0x0);
  uVar1 = (param_1->___border_29).___c1_1.___z_2;
  uVar5 = (param_1->___border_29).___c0_0.___x_0;
  uVar6 = (param_1->___border_29).___c0_0.___y_1;
  uVar7 = (param_1->___border_29).___c0_0.___z_2;
  iVar4.___c0_0.___z_2 = uVar7;
  iVar4.___c0_0.___y_1 = uVar6;
  iVar4.___c0_0.___x_0 = uVar5;
  uVar8 = (param_1->___border_29).___c1_1.___x_0;
  uVar9 = (param_1->___border_29).___c1_1.___y_1;
  iVar4.___c1_1.___y_1 = uVar9;
  iVar4.___c1_1.___x_0 = uVar8;
  iVar4.___c1_1.___z_2 = uVar1;
  Graph_U3COnDrawGizmosU3Eg__DrawBoundsGizmoU7C85_0_m4370B4D1CA5FB80519CB2189082AEF6C84F50C19
            (iVar4,param_1->___maxHeight_32,(MethodInfo *)0x0);
  return;
}
