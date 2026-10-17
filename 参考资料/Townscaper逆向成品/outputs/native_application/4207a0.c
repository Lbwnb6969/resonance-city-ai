// RVA 0x4207a0 | Placemaker.Ui.KeyboardAndMouseControlRemap$$OnIsElementAllowed
// PDB: KeyboardAndMouseControlRemap_OnIsElementAllowed_m78029C0D590962615A534924639962261FE0F324
// Body: [[104207a0, 10420922]]
// Direct callees:
// 10128030 il2cpp_object_unbox
// 101280f0 il2cpp_runtime_class_init
// 10128ae0 il2cpp_value_box
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018ea90 il2cpp_codegen_object_new
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d17c0 BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0
// 101d8560 OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
// 10db5f00 InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A
// 11031e30 List_1_Find_mBE8A91B51D29EC296321E6070FCD76081576B31E_gshared

bool __cdecl
KeyboardAndMouseControlRemap_OnIsElementAllowed_m78029C0D590962615A534924639962261FE0F324
          (KeyboardAndMouseControlRemap_t2C7DF50DD90CC4E9372E1B2BB2E5935B9578EC37 *param_1,
          ControllerPollingInfo_t5D163A3C235BAC5ABD42E199C2751F2D410A1FB0 param_2,
          MethodInfo *param_3)

{
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar1;
  Il2CppObject *pIVar2;
  String_t *pSVar3;
  int *piVar4;
  BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *pBVar5;
  OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *pOVar6;
  bool bVar7;
  int local_8;

  if (DAT_1151cb12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var);
    DAT_1151cb12 = '\x01';
  }
  local_8 = param_2.___GJeToslGtRgKfxfJpqXxlgoTqIO_10;
  pIVar2 = il2cpp_value_box(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var,
                            &local_8);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pSVar3 = (String_t *)
             (**(code **)&(pIVar2->field0_0x0).klass[1].byval_arg.attrs)
                       (pIVar2,(pIVar2->field0_0x0).klass[1].this_arg.data.dummy);
    piVar4 = il2cpp_object_unbox(pIVar2);
    local_8 = *piVar4;
    if (DAT_1151cb13 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&
                         KeyboardAndMouseControlRemap_t2C7DF50DD90CC4E9372E1B2BB2E5935B9578EC37_il2cpp_TypeInfo_var
                );
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&List_1_Find_m76949A7B2F486F40D736C25F73896E5483279FC1_RuntimeMethod_var);
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&
                         Predicate_1__ctor_m6B6D8E35C0E83BBC784E881CCFA837ED78F48F14_RuntimeMethod_var
                );
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&Predicate_1_t782ED4F640A61B7ACA1DD787F7C4993C746207B3_il2cpp_TypeInfo_var)
      ;
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&
                         U3CU3Ec__DisplayClass29_0_U3CCanKeyBeMappedU3Eb__0_m7ED4603B66110C9C6038A0E80DF37907787659C6_RuntimeMethod_var
                );
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&
                         U3CU3Ec__DisplayClass29_0_tFB6D0BB24378FEAEF30CE3D9E0B7ADC7BF6F5051_il2cpp_TypeInfo_var
                );
      DAT_1151cb13 = '\x01';
    }
    pBVar5 = (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)
             il2cpp_codegen_object_new
                       (
                       U3CU3Ec__DisplayClass29_0_tFB6D0BB24378FEAEF30CE3D9E0B7ADC7BF6F5051_il2cpp_TypeInfo_var
                       );
    BreakPoint__ctor_m1900245FA061B6C11A6ADD2176B3A5BEF5D8C8B0(pBVar5,(MethodInfo *)0x0);
    if (pBVar5 != (BreakPoint_tABF120926FAFBCAFD11FDB91A7B559AE59449C78 *)0x0) {
      pBVar5->___name_0 = pSVar3;
      bVar7 = true;
      if ((KeyboardAndMouseControlRemap_t2C7DF50DD90CC4E9372E1B2BB2E5935B9578EC37_il2cpp_TypeInfo_var
           ->has_cctor != '\0') &&
         (KeyboardAndMouseControlRemap_t2C7DF50DD90CC4E9372E1B2BB2E5935B9578EC37_il2cpp_TypeInfo_var
          ->cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (
                  KeyboardAndMouseControlRemap_t2C7DF50DD90CC4E9372E1B2BB2E5935B9578EC37_il2cpp_TypeInfo_var
                  );
      }
      pLVar1 = *(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)
                KeyboardAndMouseControlRemap_t2C7DF50DD90CC4E9372E1B2BB2E5935B9578EC37_il2cpp_TypeInfo_var
                ->static_fields;
      pOVar6 = (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
               il2cpp_codegen_object_new
                         (Predicate_1_t782ED4F640A61B7ACA1DD787F7C4993C746207B3_il2cpp_TypeInfo_var)
      ;
      OnLocalizeCallback__ctor_mC5E4BBDA280956DAE73CF88FFA849312228BECE4
                (pOVar6,(Il2CppObject *)pBVar5,
                 (int)
                 U3CU3Ec__DisplayClass29_0_U3CCanKeyBeMappedU3Eb__0_m7ED4603B66110C9C6038A0E80DF37907787659C6_RuntimeMethod_var
                 ,Predicate_1__ctor_m6B6D8E35C0E83BBC784E881CCFA837ED78F48F14_RuntimeMethod_var);
      if (pLVar1 != (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
        pIVar2 = List_1_Find_mBE8A91B51D29EC296321E6070FCD76081576B31E_gshared
                           (pLVar1,(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB *)pOVar6,
                            List_1_Find_m76949A7B2F486F40D736C25F73896E5483279FC1_RuntimeMethod_var)
        ;
        if ((pIVar2 != (Il2CppObject *)0x0) ||
           (bVar7 = false, param_1->___buttonMapState_16 == false)) {
          return bVar7;
        }
        param_1->___buttonMapState_16 = false;
        if (param_1->___inputMapper_11 !=
            (InputMapper_tEA4DC41995ECCD501FE44781A16D568B91806505 *)0x0) {
          InputMapper_Stop_m439AEDEF502A790055D13AACA82F0C086F0DD69A
                    (param_1->___inputMapper_11,(MethodInfo *)0x0);
          if (param_1->___darkenState_10 !=
              (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
            UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                      (param_1->___darkenState_10,false,(MethodInfo *)0x0);
            return false;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
