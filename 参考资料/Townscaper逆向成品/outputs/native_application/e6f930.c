// RVA 0xe6f930 | Placemaker.Graphs.Graph$$IsCoordinateAllowed
// PDB: Graph_IsCoordinateAllowed_mA7A88E2C6C1123906D52DBE1DD360FC64E8663E5
// Body: [[10e6f930, 10e6fbd8]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1040d9e0 HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
// 10836300 ExtraMath_Contains_m5605C45E9F053FEF949FD7FFBFE244B35E3D0AE1
// 108363d0 ExtraMath_Encapsulate_m3E293B7DFEBAEBE115B40E36EF21F04F419C5938
// 10a43d20 Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
// 10a43fd0 Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A

bool __cdecl
Graph_IsCoordinateAllowed_mA7A88E2C6C1123906D52DBE1DD360FC64E8663E5
          (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *param_1,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_2,int param_3,MethodInfo *param_4)

{
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar1;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar2;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F iVar3;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar4;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar5;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar6;
  bool bVar7;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *piVar8;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F *piVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  int3x2_t46BD20B6395352D24BFF91DD4E49249C2171424F local_3c;
  int local_24;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iStack_20;
  undefined8 local_14;
  undefined8 local_c;

  if (DAT_11522839 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var);
    DAT_11522839 = '\x01';
  }
  if ((HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(HexMath_t4312AE966A0D48F077ED3A457B3CFA477D03EE26_il2cpp_TypeInfo_var)
    ;
  }
  piVar8 = HexMath_GetHex3_m8FD40C9075C9411B4BCBC8E14392C7A98329EA6D
                     (&iStack_20,param_2,(MethodInfo *)0x0);
  iVar10 = piVar8->___z_2;
  iVar6 = *piVar8;
  iVar5 = *piVar8;
  local_14._0_4_ = piVar8->___x_0;
  local_14._4_4_ = piVar8->___y_1;
  local_c._0_4_ = (param_1->___bounds_28).___c1_1.___y_1;
  local_c._4_4_ = (param_1->___bounds_28).___c1_1.___z_2;
  local_3c.___c0_0.___z_2 = (param_1->___bounds_28).___c0_0.___x_0;
  local_3c.___c1_1.___x_0 = (param_1->___bounds_28).___c0_0.___y_1;
  local_3c.___c1_1.___y_1 = (param_1->___bounds_28).___c0_0.___z_2;
  local_3c.___c1_1.___z_2 = (param_1->___bounds_28).___c1_1.___x_0;
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
  }
  iVar1.___c0_0.___y_1 = local_3c.___c1_1.___x_0;
  iVar1.___c0_0.___x_0 = local_3c.___c0_0.___z_2;
  iVar1.___c0_0.___z_2 = local_3c.___c1_1.___y_1;
  iVar1.___c1_1.___x_0 = local_3c.___c1_1.___z_2;
  iVar1.___c1_1.___y_1 = (int)local_c;
  iVar1.___c1_1.___z_2 = (int)((ulonglong)local_c >> 0x20);
  iVar4.___z_2 = iVar10;
  iVar4.___x_0 = (undefined4)local_14;
  iVar4.___y_1 = local_14._4_4_;
  bVar7 = ExtraMath_Contains_m5605C45E9F053FEF949FD7FFBFE244B35E3D0AE1
                    (iVar1,iVar4,(MethodInfo *)0x0);
  if ((!bVar7) || (param_1->___boundsHeight_27 < param_3 + 1)) {
    local_3c.___c0_0.___z_2 = (param_1->___bounds_28).___c0_0.___x_0;
    local_3c.___c1_1.___x_0 = (param_1->___bounds_28).___c0_0.___y_1;
    local_3c.___c1_1.___y_1 = (param_1->___bounds_28).___c0_0.___z_2;
    local_3c.___c1_1.___z_2 = (param_1->___bounds_28).___c1_1.___x_0;
    local_14._0_4_ = (param_1->___bounds_28).___c1_1.___y_1;
    local_14._4_4_ = (param_1->___bounds_28).___c1_1.___z_2;
    if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
       && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished
           == 0)) {
      il2cpp_runtime_class_init
                (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    }
    iVar2.___c0_0.___y_1 = local_3c.___c1_1.___x_0;
    iVar2.___c0_0.___x_0 = local_3c.___c0_0.___z_2;
    iVar2.___c0_0.___z_2 = local_3c.___c1_1.___y_1;
    iVar2.___c1_1.___x_0 = local_3c.___c1_1.___z_2;
    iVar2.___c1_1.___y_1 = (int)local_14;
    iVar2.___c1_1.___z_2 = (int)((ulonglong)local_14 >> 0x20);
    piVar9 = ExtraMath_Encapsulate_m3E293B7DFEBAEBE115B40E36EF21F04F419C5938
                       (&local_3c,iVar2,iVar5,(MethodInfo *)0x0);
    local_24 = (piVar9->___c0_0).___x_0;
    iStack_20.___x_0 = (piVar9->___c0_0).___y_1;
    iStack_20.___y_1 = (piVar9->___c0_0).___z_2;
    iStack_20.___z_2 = (piVar9->___c1_1).___x_0;
    local_3c.___c1_1.___y_1 = (piVar9->___c1_1).___y_1;
    local_3c.___c1_1.___z_2 = (piVar9->___c1_1).___z_2;
    iVar10 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A
                       (param_1->___boundsHeight_27,param_3 + 1,(MethodInfo *)0x0);
    fVar11 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                       (64.0,256.0,(float)iVar10,(MethodInfo *)0x0);
    iVar10 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A
                       (iStack_20.___z_2 - local_24,local_3c.___c1_1.___y_1 - iStack_20.___x_0,
                        (MethodInfo *)0x0);
    iVar10 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A
                       (iVar10,local_3c.___c1_1.___z_2 - iStack_20.___y_1,(MethodInfo *)0x0);
    fVar12 = Mathf_InverseLerp_mCD2E6F9ADCFFB40EB7D3086E444DF2C702F9C29B
                       (256.0,512.0,(float)iVar10 * __real_3f000000,(MethodInfo *)0x0);
    if (__real_3f800000 < fVar12 + fVar11) {
      return false;
    }
  }
  local_3c.___c0_0.___z_2 = (param_1->___viewBounds_31).___c0_0.___x_0;
  local_3c.___c1_1.___x_0 = (param_1->___viewBounds_31).___c0_0.___y_1;
  local_3c.___c1_1.___y_1 = (param_1->___viewBounds_31).___c0_0.___z_2;
  local_3c.___c1_1.___z_2 = (param_1->___viewBounds_31).___c1_1.___x_0;
  local_14._0_4_ = (param_1->___viewBounds_31).___c1_1.___y_1;
  local_14._4_4_ = (param_1->___viewBounds_31).___c1_1.___z_2;
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
  }
  iVar3.___c0_0.___y_1 = local_3c.___c1_1.___x_0;
  iVar3.___c0_0.___x_0 = local_3c.___c0_0.___z_2;
  iVar3.___c0_0.___z_2 = local_3c.___c1_1.___y_1;
  iVar3.___c1_1.___x_0 = local_3c.___c1_1.___z_2;
  iVar3.___c1_1.___y_1 = (int)local_14;
  iVar3.___c1_1.___z_2 = (int)((ulonglong)local_14 >> 0x20);
  bVar7 = ExtraMath_Contains_m5605C45E9F053FEF949FD7FFBFE244B35E3D0AE1
                    (iVar3,iVar6,(MethodInfo *)0x0);
  return bVar7;
}
