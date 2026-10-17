// RVA 0x411420 | Placemaker.HoverData$$GetSrcPos
// PDB: HoverData_GetSrcPos_m4EC1E23C74B50F9FDC82C2434092898EC88085D8
// Body: [[10411420, 104114df]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1040e020 HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
// 10674190 Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636

Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __cdecl
HoverData_GetSrcPos_m4EC1E23C74B50F9FDC82C2434092898EC88085D8
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *__return_storage_ptr__,
          HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *param_1,MethodInfo *param_2)

{
  undefined4 uVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  int iVar4;
  float fVar5;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D *pfVar6;
  undefined8 *extraout_EAX;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar7;
  float3_t9500D105F273B3D86BD354142E891C48FFF9F71D local_10;

  if (DAT_1151ca91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    DAT_1151ca91 = '\x01';
  }
  local_10.___y_1 = (param_1->___srcVert_7).___planePos_1.___x_0;
  iVar4 = param_1->___srcHeight_10;
  local_10.___z_2 = (param_1->___srcVert_7).___planePos_1.___y_1;
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
  }
  fVar7.___y_1 = local_10.___z_2;
  fVar7.___x_0 = local_10.___y_1;
  pfVar6 = HexMath_PlaneToWorld_mA7F04B4991353FE7983B1CCF5CCFAEF1C67892F2
                     (&local_10,fVar7,(float)iVar4 + __real_3f000000,(MethodInfo *)0x0);
  uVar1 = pfVar6->___x_0;
  uVar3 = pfVar6->___y_1;
  Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636
            ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)&local_10,(float)uVar1,
             (float)uVar3,pfVar6->___z_2,(MethodInfo *)0x0);
  uVar2 = *extraout_EAX;
  fVar5 = *(float *)(extraout_EAX + 1);
  __return_storage_ptr__->___x_2 = (float)(int)uVar2;
  __return_storage_ptr__->___y_3 = (float)(int)((ulonglong)uVar2 >> 0x20);
  __return_storage_ptr__->___z_4 = fVar5;
  return __return_storage_ptr__;
}
