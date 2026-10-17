// RVA 0x87f8c0 | Placemaker.Life.BirdFlock$$UprootRadius
// PDB: BirdFlock_UprootRadius_m51C3EB1C297B41F21BE80455DB820CBE093C0F44
// Body: [[1087f8c0, 1087f9e7] [1087f9f5, 1087fac1]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 104485b0 ExtraMath_BinarySearch_TisRuntimeObject_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m3112A01954ED9625C65A13CC3AA81C7E70302248_gshared
// 10674510 Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
// 10837030 ExtraMath_SetX_m2698FE33F0D90A0F524CBBD50D3928F7A38B97C6
// 1087f4d0 BirdFlock_UprootBird_mFC6249072B6FF234B72CD0060E94EDA0AB728F6D
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
BirdFlock_UprootRadius_m51C3EB1C297B41F21BE80455DB820CBE093C0F44
          (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *param_1,
          Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E param_2,float param_3,float param_4,
          MethodInfo *param_5)

{
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar1;
  List_1_tF12B8ECABFB01DFF6CE11CBC139AC6115179DCC9 *pLVar2;
  Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *pBVar3;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar4;
  uint uVar5;
  int iVar6;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_4c;
  undefined8 local_40;
  float local_38;
  undefined8 local_34;
  undefined8 local_28;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1c;
  int local_10;
  float local_c;
  float local_8;

  if (DAT_1151f5c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ExtraMath_BinarySearch_TisBird_t844A261674A59156BC85FE5538301FE90489C0E8_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mEBA2585DE66871AD09DA91EB48EA0A6CDA3FC3D1_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mC5C87EB162C43A4BC22E218C3A2D95DB961F5420_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mA819AC4D6EC8BABA8328B8366A4F71E7BB7FB982_RuntimeMethod_var)
    ;
    DAT_1151f5c1 = '\x01';
  }
  local_1c.___x_2 = 0.0;
  local_1c.___y_3 = 0.0;
  local_1c.___z_4 = 0.0;
  pLVar1 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)param_1->___birds_17;
  if ((ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ExtraMath_tEE3935E3B55F6B23A46234F144D072C78C7EDEC2_il2cpp_TypeInfo_var);
  }
  pVVar4 = ExtraMath_SetX_m2698FE33F0D90A0F524CBBD50D3928F7A38B97C6
                     (&local_4c,param_2,param_2.___x_2 - param_3,(MethodInfo *)0x0);
  uVar5 = ExtraMath_BinarySearch_TisRuntimeObject_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m3112A01954ED9625C65A13CC3AA81C7E70302248_gshared
                    (pLVar1,*pVVar4,
                     ExtraMath_BinarySearch_TisBird_t844A261674A59156BC85FE5538301FE90489C0E8_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mEBA2585DE66871AD09DA91EB48EA0A6CDA3FC3D1_RuntimeMethod_var
                    );
  if ((int)uVar5 < 0) {
    uVar5 = ~uVar5;
  }
  local_8 = param_2.___x_2 + param_3;
  if (param_1->___birds_17 != (List_1_tF12B8ECABFB01DFF6CE11CBC139AC6115179DCC9 *)0x0) {
    local_10 = param_1->___birds_17->____size_2;
    if ((int)uVar5 < local_10) {
      iVar6 = uVar5 * 4 + 0x10;
      do {
        pLVar2 = param_1->___birds_17;
        if (pLVar2 == (List_1_tF12B8ECABFB01DFF6CE11CBC139AC6115179DCC9 *)0x0) goto LAB_1087fabd;
        if ((uint)pLVar2->____size_2 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        pBVar3 = *(Bird_t844A261674A59156BC85FE5538301FE90489C0E8 **)(pLVar2->____items_1 + iVar6);
        if (pBVar3 == (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)0x0) goto LAB_1087fabd;
        if (local_8 < (pBVar3->___pos_14).___x_2) {
          return;
        }
        local_34._0_4_ = (pBVar3->___pos_14).___x_2;
        local_34._4_4_ = (pBVar3->___pos_14).___y_3;
        local_38 = (pBVar3->___pos_14).___z_4;
        local_40._0_4_ = (pBVar3->___pos_14).___x_2;
        local_40._4_4_ = (pBVar3->___pos_14).___y_3;
        local_4c.___z_4 = local_38 - param_2.___z_4;
        local_1c.___y_3 = (float)local_34._4_4_ - param_2.___y_3;
        local_1c.___x_2 = (float)(undefined4)local_34 - param_2.___x_2;
        local_28 = local_34;
        local_1c.___z_4 = local_4c.___z_4;
        local_c = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249
                            (&local_1c,(MethodInfo *)0x0);
        if (local_c <= param_3 * param_3) {
          BirdFlock_UprootBird_mFC6249072B6FF234B72CD0060E94EDA0AB728F6D
                    (param_1,pBVar3,param_4,(MethodInfo *)0x0);
        }
        uVar5 = uVar5 + 1;
        iVar6 = iVar6 + 4;
      } while ((int)uVar5 < local_10);
    }
    return;
  }
LAB_1087fabd:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
