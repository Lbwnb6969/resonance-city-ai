// RVA 0x41b740 | Os.Utils.Intersections$$TriangleTriangle
// PDB: Intersections_TriangleTriangle_m4C27EC8EE6FFC7F1F7F69CAA874910977E048F17
// Body: [[1041b740, 1041bb87]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1022dfd0 Vector3_Max_m1BEB59C24069DAAE250E28C903B047431DC53155_inline
// 1022e070 Vector3_Min_m400631CF8796AD247ABBAC2E40FD5BED64FA9BD0_inline
// 1041b090 Intersections_TriangleTriangleInternal_m640087FEEA5ED18268DE27894AC4185F19A145C8

bool __cdecl
Intersections_TriangleTriangle_m4C27EC8EE6FFC7F1F7F69CAA874910977E048F17
          (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_3,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_4,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_5,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_6,float param_7,
          MethodInfo *param_8)

{
  bool bVar1;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar2;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_4c;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_40;
  undefined8 local_34;
  float local_2c;
  undefined8 local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;

  if (DAT_1151cabe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var)
    ;
    DAT_1151cabe = '\x01';
  }
  pVVar2 = Vector3_Min_m400631CF8796AD247ABBAC2E40FD5BED64FA9BD0_inline
                     (&local_40,param_2,param_3,(MethodInfo *)0x0);
  pVVar2 = Vector3_Min_m400631CF8796AD247ABBAC2E40FD5BED64FA9BD0_inline
                     (&local_40,param_1,*pVVar2,(MethodInfo *)0x0);
  local_28._0_4_ = pVVar2->___x_2;
  local_28._4_4_ = pVVar2->___y_3;
  local_20 = pVVar2->___z_4;
  pVVar2 = Vector3_Max_m1BEB59C24069DAAE250E28C903B047431DC53155_inline
                     (&local_40,param_2,param_3,(MethodInfo *)0x0);
  pVVar2 = Vector3_Max_m1BEB59C24069DAAE250E28C903B047431DC53155_inline
                     (&local_40,param_1,*pVVar2,(MethodInfo *)0x0);
  local_34._0_4_ = pVVar2->___x_2;
  local_34._4_4_ = pVVar2->___y_3;
  local_2c = pVVar2->___z_4;
  pVVar2 = Vector3_Min_m400631CF8796AD247ABBAC2E40FD5BED64FA9BD0_inline
                     (&local_40,param_5,param_6,(MethodInfo *)0x0);
  pVVar2 = Vector3_Min_m400631CF8796AD247ABBAC2E40FD5BED64FA9BD0_inline
                     (&local_4c,param_4,*pVVar2,(MethodInfo *)0x0);
  local_40.___x_2 = pVVar2->___x_2;
  local_40.___y_3 = pVVar2->___y_3;
  local_40.___z_4 = pVVar2->___z_4;
  pVVar2 = Vector3_Max_m1BEB59C24069DAAE250E28C903B047431DC53155_inline
                     (&local_4c,param_5,param_6,(MethodInfo *)0x0);
  pVVar2 = Vector3_Max_m1BEB59C24069DAAE250E28C903B047431DC53155_inline
                     (&local_4c,param_4,*pVVar2,(MethodInfo *)0x0);
  local_c = (float)local_28 - param_7;
  local_14 = local_28._4_4_ - param_7;
  local_1c = local_20 - param_7;
  local_8 = (float)local_34 + param_7;
  local_10 = local_34._4_4_ + param_7;
  local_18 = local_2c + param_7;
  local_34._0_4_ = pVVar2->___x_2;
  local_34._4_4_ = pVVar2->___y_3;
  local_2c = pVVar2->___z_4;
  if ((Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->cctor_finished ==
      0)) {
    il2cpp_runtime_class_init
              (Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var);
  }
  if (((((local_40.___x_2 <= local_8) && (local_c <= (float)local_34)) &&
       (local_40.___y_3 <= local_10)) &&
      ((local_14 <= local_34._4_4_ && (local_40.___z_4 <= local_18)))) && (local_1c <= local_2c)) {
    if ((Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->cctor_finished
        == 0)) {
      il2cpp_runtime_class_init
                (Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var);
    }
    bVar1 = Intersections_TriangleTriangleInternal_m640087FEEA5ED18268DE27894AC4185F19A145C8
                      (param_1,param_2,param_3,param_4,param_5,param_6,param_7,(MethodInfo *)0x0);
    if (bVar1) {
      if ((Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var->
          cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var);
      }
      bVar1 = Intersections_TriangleTriangleInternal_m640087FEEA5ED18268DE27894AC4185F19A145C8
                        (param_4,param_5,param_6,param_1,param_2,param_3,param_7,(MethodInfo *)0x0);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}
