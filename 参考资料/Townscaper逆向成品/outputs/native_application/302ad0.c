// RVA 0x302ad0 | Placemaker.TextSaveSystem$$SaveToString
// PDB: TextSaveSystem_SaveToString_m33876E3566CFFAC799F4F59B483E6A9E96373D5A
// Body: [[10302ad0, 10302c5b] [10302c65, 103030fe] [1030312e, 103031d3] [103031e0, 103034f3] [103034fd, 103035ac] [103035b8, 103035e7] [103035f9, 103038bf]]
// Direct callees:
// 10054090 SetAt
// 10066d50 List_1_get_Item_m4C460F2F32FE7765229CC9FA6D7A3840779916B2_inline
// 101275a0 il2cpp_array_new_specific
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10301b00 TextSaveSystem_AddValue_m66777D3A870D6A21ED8B435E910EA85D88287CFD
// 10441630 DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
// 105d0600 ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
// 106c9050 Enumerator_MoveNext_mD75F6C020DBA9AEC41D9AD2400B1B59CF4FB865A_gshared
// 1088f200 BitArray_Get_m8F334881C262C112865FE98A64C11C5090CFCA86
// 1088f2b0 BitArray_Set_mA16A2CBB10C6F3FB78885109803F2C7325864F8A
// 1088f7b0 BitArray_set_Length_mA4B0BAC652E52B67C499AAC1B7CE4CF673149AB0
// 10a3c6b0 Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
// 10a437e0 Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0
// 10a439d0 Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F
// 10a43fd0 Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A
// 10a440d0 Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10cf6720 DictPool_2_Get_m2ACE07EEC74C81F7E511DFC440B39A5175BD81CE_gshared
// 10cf75f0 Dictionary_2_Add_m0FF70AAADDD2640FDE073BB8D7573E95DD3C5954_gshared
// 10cf86d0 Dictionary_2_GetEnumerator_m6C0B300F32865986C8D7B339620546C0BFF4F30D_gshared
// 10f03210 String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E
// 10f09d80 String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70
// 1101a670 Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1_gshared
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

String_t * __cdecl
TextSaveSystem_SaveToString_m33876E3566CFFAC799F4F59B483E6A9E96373D5A
          (List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *param_1,
          List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *param_2,MethodInfo *param_3)

{
  KeyValuePair_2_t9E395A3A5964146977029A8B4ECE091A2ED5B19E *pKVar1;
  CU5BU5D_t6BD815B0F2359902DCDF7F57D894A578DF09EE88 *pCVar2;
  CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *this;
  undefined4 uVar3;
  KeyValuePair_2_t9E395A3A5964146977029A8B4ECE091A2ED5B19E KVar4;
  undefined1 *puVar5;
  bool bVar6;
  V_t2C4FF2B994717C0763FC7587F2B998766A7145F5 VVar7;
  wchar_t wVar8;
  int iVar9;
  uint uVar10;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar11;
  Enumerator_t422CDF583628437EEE8599A7AA3F52CA93612E67 *pEVar12;
  Il2CppArray *pIVar13;
  String_t *pSVar14;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar15;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar16;
  List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *pLVar17;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar18;
  int iVar19;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar20;
  EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *pEVar21;
  Exception_t *pEVar22;
  int iVar23;
  ContainerID_t776BD2D5F21768F1E61C66C18445FBD00AA09259 CVar24;
  Enumerator_t422CDF583628437EEE8599A7AA3F52CA93612E67 local_a4;
  Enumerator_t01C67709CE5D52660166662380B9C0851DA3F4DC local_88;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_70;
  KeyValuePair_2_t9E395A3A5964146977029A8B4ECE091A2ED5B19E local_6c;
  int2U5BU5D_t5B28DA25BC7C47BEAF4BDBB7F78B1BA7E9CBA49E *local_60;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_5c;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_58;
  undefined4 local_54;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_50;
  Exception_t *local_4c;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_48;
  Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *local_44;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_40;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_3c;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_38;
  char local_31;
  Exception_t *local_30;
  EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *local_2c;
  uint local_28;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_24;
  char local_1d;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_1c;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &__ehhandler__TextSaveSystem_SaveToString_m33876E3566CFFAC799F4F59B483E6A9E96373D5A;
  local_10 = ExceptionList;
  local_14 = &stack0xffffff50;
  ExceptionList = &local_10;
  puVar5 = &stack0xffffff50;
  if (DAT_1151c222 == '\0') {
    ExceptionList = &local_10;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&DictPool_2_Get_m2ACE07EEC74C81F7E511DFC440B39A5175BD81CE_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&DictPool_2_tF251C5D8289593798E2988EB7DC65BDCEE791EC9_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_Add_m2721B332C7315B8590D01121005560C8A4824279_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_GetEnumerator_m90798E0FC9DA37F5EB2B07708DA16785A875BA3C_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_Dispose_mAB3849C30A786AA06BE075D2FE85FA65FB38D975_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_MoveNext_mD75F6C020DBA9AEC41D9AD2400B1B59CF4FB865A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Enumerator_get_Current_mCCDEB62B9FB818006DAAAD7798C7D396D3472038_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       KeyValuePair_2_get_Key_mE3B72B1BB3B8DD41788D39A3AF38E6A94B241400_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_m241128D5276523F0F1C96D3E65AE9BEA91AB9F8A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m0FE7FF3D46BDCFA7B64F80C148193D307CE858E0_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m4C460F2F32FE7765229CC9FA6D7A3840779916B2_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mC83ED23996631967BFD7046DD8C80E90074F97D6_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral820B44FE7B951AD99B8B5DEF2BBD7E4EA178C130);
    DAT_1151c222 = '\x01';
    puVar5 = local_14;
  }
  local_14 = puVar5;
  local_30 = (Exception_t *)0x0;
  local_88.___current_3.___value_1 = 0;
  local_88.___getEnumeratorRetType_4 = 0;
  iVar23 = 0;
  local_1d = '\0';
  local_50.___moduleIndex_0 = 0;
  local_50.___flags_1 = '\0';
  local_50._3_1_ = 0;
  local_54._0_2_ = 0;
  local_54._2_1_ = '\0';
  local_54._3_1_ = 0;
  local_44 = (Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)0x0;
  local_48 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x7fffffff;
  local_24 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x80000000;
  local_18.___moduleIndex_0 = 0;
  local_18.___flags_1 = '\0';
  local_18._3_1_ = 0;
  local_28 = 0;
  local_88.___dictionary_0 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0;
  local_88.___version_1 = 0;
  local_88.___index_2 = 0;
  local_88.___current_3.___key_0 = 0;
  if (param_1 != (List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *)0x0) {
    local_2c = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)param_1->____size_2;
    local_38.___moduleIndex_0 = 0;
    local_38.___flags_1 = '\0';
    local_38._3_1_ = 0;
    if (0 < (int)local_2c) {
      local_3c.___moduleIndex_0 = 0;
      local_3c.___flags_1 = '\0';
      local_3c._3_1_ = 0;
      do {
        if ((uint)param_1->____size_2 <= (uint)local_38) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        pCVar2 = param_1->____items_1;
        KVar4 = *(KeyValuePair_2_t9E395A3A5964146977029A8B4ECE091A2ED5B19E *)
                 ((int)&pCVar2->m_Items[0].___x_0 + (int)local_3c);
        local_40 = *(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *)
                    ((int)&pCVar2->m_Items[0].___count_2 + (int)local_3c);
        local_6c._0_4_ = KVar4._0_4_;
        uVar3 = local_6c._0_4_;
        local_6c = KVar4;
        if (local_1d == '\0') {
          pKVar1 = (KeyValuePair_2_t9E395A3A5964146977029A8B4ECE091A2ED5B19E *)
                   ((int)&pCVar2->m_Items[0].___x_0 + (int)local_3c);
          local_24 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)pKVar1->___value_1;
          local_a4.___current_3 = *pKVar1;
          local_1d = '\x01';
          local_18.___moduleIndex_0 = local_6c.___key_0;
          local_18.___flags_1 = local_6c._2_1_;
          local_18._3_1_ = local_6c._3_1_;
          local_50.___moduleIndex_0 = local_6c.___key_0;
          local_50.___flags_1 = local_6c._2_1_;
          local_50._3_1_ = local_6c._3_1_;
          local_54._0_2_ = local_6c.___key_0;
          local_54._2_1_ = local_6c._2_1_;
          local_54._3_1_ = local_6c._3_1_;
          local_a4.___getEnumeratorRetType_4 = (int)local_40;
          local_48 = local_24;
        }
        else {
          if ((OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)local_6c._0_4_ != local_18)
          {
            iVar9 = local_6c._0_4_ - (int)local_18;
            local_44 = (Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)
                       Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A
                                 ((int)local_44,iVar9,(MethodInfo *)0x0);
            KVar4 = local_6c;
            local_6c.___key_0 = (wchar_t)uVar3;
            local_6c._2_1_ = SUB41(uVar3,2);
            local_6c._3_1_ = SUB41(uVar3,3);
            local_18.___moduleIndex_0 = local_6c.___key_0;
            local_18.___flags_1 = local_6c._2_1_;
            local_18._3_1_ = local_6c._3_1_;
          }
          local_6c = KVar4;
          iVar9 = local_6c.___value_1;
          local_48 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                     Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519
                               ((int)local_48,local_6c.___value_1,(MethodInfo *)0x0);
          local_24 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                     Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A
                               ((int)local_24,iVar9,(MethodInfo *)0x0);
        }
        iVar19 = 0;
        iVar9 = iVar23;
        if (0 < (int)local_40) {
          do {
            iVar23 = iVar9 + 1;
            if (param_2 == (List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *)0x0)
            goto LAB_103038b3;
            VVar7 = List_1_get_Item_m4C460F2F32FE7765229CC9FA6D7A3840779916B2_inline
                              (param_2,iVar9,
                               List_1_get_Item_m4C460F2F32FE7765229CC9FA6D7A3840779916B2_RuntimeMethod_var
                              );
            local_1c.___moduleIndex_0._0_1_ = VVar7.___t_0;
            local_1c.___moduleIndex_0._1_1_ = VVar7.___h_1;
            OVar20 = local_1c;
            if (VVar7.___h_1 != '\0') {
              local_1c.___moduleIndex_0._0_1_ = VVar7.___t_0;
              local_28 = local_28 | 1 << ((byte)local_1c.___moduleIndex_0 & 0x1f);
            }
            iVar19 = iVar19 + 1;
            iVar9 = iVar23;
            local_1c = OVar20;
          } while (iVar19 < (int)local_40);
        }
        local_38 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)local_38 + 1);
        local_3c = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)local_3c + 0xc);
      } while ((int)local_38 < (int)local_2c);
    }
    iVar23 = Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0((int)local_50,(MethodInfo *)0x0);
    iVar9 = Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0((int)local_48,(MethodInfo *)0x0);
    iVar23 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(iVar23,iVar9,(MethodInfo *)0x0);
    if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->cctor_finished
        == 0)) {
      il2cpp_runtime_class_init
                (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
    }
    OVar20.___moduleIndex_0 = 0;
    OVar20.___flags_1 = '\0';
    OVar20._3_1_ = 0;
    if (0 < iVar23 * 2) {
      uVar10 = 1;
      do {
        uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
        OVar20 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)OVar20 + 1);
      } while ((int)uVar10 <= iVar23 * 2);
    }
    iVar23 = (int)local_24 - (int)local_48;
    if (OVar20 == (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = 1 << ((char)OVar20.___moduleIndex_0 - 1U & 0x1f);
    }
    local_1c = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)local_50 + iVar9);
    local_40 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
               ((int)&local_48->_padding_ + iVar9);
    if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->cctor_finished
        == 0)) {
      il2cpp_runtime_class_init
                (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
    }
    OVar18.___moduleIndex_0 = 0;
    OVar18.___flags_1 = '\0';
    OVar18._3_1_ = 0;
    local_58.___moduleIndex_0 = 0;
    local_58.___flags_1 = '\0';
    local_58._3_1_ = 0;
    if (0 < (int)local_44) {
      uVar10 = 1;
      do {
        uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
        OVar18 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)OVar18 + 1);
        local_58 = OVar18;
      } while ((int)uVar10 <= (int)local_44);
    }
    OVar15.___moduleIndex_0 = 0;
    OVar15.___flags_1 = '\0';
    OVar15._3_1_ = 0;
    local_5c.___moduleIndex_0 = 0;
    local_5c.___flags_1 = '\0';
    local_5c._3_1_ = 0;
    if (0 < iVar23) {
      uVar10 = 1;
      do {
        uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
        OVar15 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)OVar15 + 1);
        local_5c = OVar15;
      } while ((int)uVar10 <= iVar23);
    }
    local_3c = local_5c;
    local_38 = local_58;
    if ((ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->has_cctor != '\0'
        ) && (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
      il2cpp_runtime_class_init
                (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var);
    }
    pDVar11 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
              ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                        (ListPool_1_Get_m241128D5276523F0F1C96D3E65AE9BEA91AB9F8A_RuntimeMethod_var)
    ;
    local_70 = pDVar11;
    local_24 = pDVar11;
    if (DAT_1151c220 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                ((uint *)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      DAT_1151c220 = '\x01';
    }
    if (pDVar11 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar11,OVar20,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar11,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x5,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      if (DAT_1151c220 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
        DAT_1151c220 = '\x01';
      }
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar11,local_58,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar11,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x5,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      if (DAT_1151c220 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
        DAT_1151c220 = '\x01';
      }
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar11,local_5c,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar11,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x5,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      if (DAT_1151c220 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
        DAT_1151c220 = '\x01';
      }
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar11,local_1c,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar11,OVar20,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      if (DAT_1151c220 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
        DAT_1151c220 = '\x01';
      }
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar11,local_40,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar11,OVar20,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      local_18.___moduleIndex_0 = 0;
      local_18.___flags_1 = '\0';
      local_18._3_1_ = 0;
      if ((DictPool_2_tF251C5D8289593798E2988EB7DC65BDCEE791EC9_il2cpp_TypeInfo_var->has_cctor !=
           '\0') &&
         (DictPool_2_tF251C5D8289593798E2988EB7DC65BDCEE791EC9_il2cpp_TypeInfo_var->cctor_finished
          == 0)) {
        il2cpp_runtime_class_init
                  (DictPool_2_tF251C5D8289593798E2988EB7DC65BDCEE791EC9_il2cpp_TypeInfo_var);
      }
      local_44 = (Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)
                 DictPool_2_Get_m2ACE07EEC74C81F7E511DFC440B39A5175BD81CE_gshared
                           (4,
                            DictPool_2_Get_m2ACE07EEC74C81F7E511DFC440B39A5175BD81CE_RuntimeMethod_var
                           );
      uVar10 = local_28;
      CVar24.___id_0 = (String_t *)0x0;
      do {
        if ((uVar10 & 1 << ((byte)CVar24.___id_0 & 0x1f)) != 0) {
          local_18 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)local_18 + 1);
          if (local_44 == (Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)0x0)
          goto LAB_103038b3;
          Dictionary_2_Add_m0FF70AAADDD2640FDE073BB8D7573E95DD3C5954_gshared
                    (local_44,CVar24,(Il2CppObject *)local_18,
                     Dictionary_2_Add_m2721B332C7315B8590D01121005560C8A4824279_RuntimeMethod_var);
        }
        CVar24.___id_0 = (String_t *)((int)&(CVar24.___id_0)->_padding_ + 1);
      } while ((int)CVar24.___id_0 < 0xf);
      if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor
           != '\0') &&
         (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
          cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
      }
      if (DAT_1151c220 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  ((uint *)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
        DAT_1151c220 = '\x01';
      }
      OVar20 = local_18;
      pDVar11 = local_24;
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)local_24,local_18,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar11,
                 (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)0x4,
                 List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
      if (local_44 != (Dictionary_2_tEA4B2BF0506761EBF1E0D271C1D279EC2F5AB787 *)0x0) {
        pEVar12 = Dictionary_2_GetEnumerator_m6C0B300F32865986C8D7B339620546C0BFF4F30D_gshared
                            (&local_a4,
                             (Dictionary_2_t6038072EFAE5A8CB14D22025B7FDAC58A3F65A52 *)local_44,
                             Dictionary_2_GetEnumerator_m90798E0FC9DA37F5EB2B07708DA16785A875BA3C_RuntimeMethod_var
                            );
        local_88.___dictionary_0 =
             (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)pEVar12->___dictionary_0;
        local_88.___version_1 = pEVar12->___version_1;
        local_88.___index_2 = pEVar12->___index_2;
        local_88.___current_3.___key_0 = *(int *)&pEVar12->___current_3;
        local_88._16_8_ = *(undefined8 *)&(pEVar12->___current_3).___value_1;
        local_8 = 0;
        while (bVar6 = Enumerator_MoveNext_mD75F6C020DBA9AEC41D9AD2400B1B59CF4FB865A_gshared
                                 (&local_88,
                                  Enumerator_MoveNext_mD75F6C020DBA9AEC41D9AD2400B1B59CF4FB865A_RuntimeMethod_var
                                 ), iVar23 = local_88.___current_3.___key_0, bVar6) {
          if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
               has_cctor != '\0') &&
             (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var)
            ;
          }
          pDVar11 = local_24;
          TextSaveSystem_AddValue_m66777D3A870D6A21ED8B435E910EA85D88287CFD
                    ((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)local_24,iVar23,4,
                     (MethodInfo *)0x0);
        }
        local_8 = 0xffffffff;
        U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
                  ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)&local_88,
                   Enumerator_Dispose_mAB3849C30A786AA06BE075D2FE85FA65FB38D975_RuntimeMethod_var);
        if (local_30 != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_codegen_raise_exception(local_30,(MethodInfo *)0x0);
        }
        if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor
             != '\0') &&
           (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
            cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
        }
        OVar16.___moduleIndex_0 = 0;
        OVar16.___flags_1 = '\0';
        OVar16._3_1_ = 0;
        local_40.___moduleIndex_0 = 0;
        local_40.___flags_1 = '\0';
        local_40._3_1_ = 0;
        if (0 < (int)OVar20 + 1) {
          uVar10 = 1;
          do {
            uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
            OVar16 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)OVar16 + 1);
            local_40 = OVar16;
          } while ((int)uVar10 <= (int)OVar20 + 1);
        }
        local_31 = '\x01';
        local_4c = (Exception_t *)((1 << ((byte)local_40.___moduleIndex_0 & 0x1f)) + -1);
        local_30 = (Exception_t *)0x0;
        local_18.___moduleIndex_0 = 0;
        local_18.___flags_1 = '\0';
        local_18._3_1_ = 0;
        if (0 < (int)local_2c) {
          local_28 = 0;
          do {
            OVar18 = local_18;
            OVar20 = local_50;
            local_38 = local_18;
            if ((Exception_t *)param_1->____size_2 <= local_30) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            local_a4.___current_3 =
                 *(KeyValuePair_2_t9E395A3A5964146977029A8B4ECE091A2ED5B19E *)
                  ((int)&param_1->____items_1->m_Items[0].___x_0 + local_28);
            local_1c = *(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *)
                        ((int)&param_1->____items_1->m_Items[0].___count_2 + local_28);
            local_6c = local_a4.___current_3;
            if (local_31 == '\0') {
              local_6c._0_4_ = local_a4.___current_3._0_4_;
              if ((OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)local_6c._0_4_ ==
                  local_50) {
                if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (
                            TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                            );
                }
                TextSaveSystem_AddValue_m66777D3A870D6A21ED8B435E910EA85D88287CFD
                          ((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pDVar11,0,1,
                           (MethodInfo *)0x0);
              }
              else {
                local_50.___moduleIndex_0 = local_6c.___key_0;
                local_50.___flags_1 = local_6c._2_1_;
                local_50._3_1_ = local_6c._3_1_;
                iVar23 = local_6c._0_4_ - (int)OVar20;
                if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (
                            TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                            );
                }
                TextSaveSystem_AddValue_m66777D3A870D6A21ED8B435E910EA85D88287CFD
                          ((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pDVar11,1,1,
                           (MethodInfo *)0x0);
                TextSaveSystem_AddValue_m66777D3A870D6A21ED8B435E910EA85D88287CFD
                          ((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pDVar11,iVar23,
                           (int)local_58,(MethodInfo *)0x0);
                OVar18 = local_38;
              }
            }
            else {
              local_31 = '\0';
            }
            if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                 has_cctor != '\0') &&
               (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (
                        TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                        );
            }
            TextSaveSystem_AddValue_m66777D3A870D6A21ED8B435E910EA85D88287CFD
                      ((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pDVar11,
                       local_6c.___value_1 - (int)local_48,(int)local_5c,(MethodInfo *)0x0);
            if ((int)local_1c < 1) {
              if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                   has_cctor != '\0') &&
                 (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (
                          TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                          );
              }
              TextSaveSystem_AddValue_m66777D3A870D6A21ED8B435E910EA85D88287CFD
                        ((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pDVar11,0,1,
                         (MethodInfo *)0x0);
LAB_1030344b:
              if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                   has_cctor != '\0') &&
                 (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (
                          TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                          );
              }
              TextSaveSystem_AddValue_m66777D3A870D6A21ED8B435E910EA85D88287CFD
                        ((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pDVar11,(int)local_4c,
                         (int)local_40,(MethodInfo *)0x0);
            }
            else {
              if (param_2 == (List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *)0x0)
              goto LAB_103038b3;
              VVar7 = List_1_get_Item_m4C460F2F32FE7765229CC9FA6D7A3840779916B2_inline
                                (param_2,(int)local_18,
                                 List_1_get_Item_m4C460F2F32FE7765229CC9FA6D7A3840779916B2_RuntimeMethod_var
                                );
              local_60 = (int2U5BU5D_t5B28DA25BC7C47BEAF4BDBB7F78B1BA7E9CBA49E *)
                         CONCAT22(local_60._2_2_,VVar7);
              local_18 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)((int)OVar18 + 1)
              ;
              if (VVar7.___h_1 != '\0') {
                local_18 = OVar18;
              }
              local_38._1_3_ = 0;
              local_38.___moduleIndex_0._0_1_ = VVar7.___h_1 == '\0';
              if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                   has_cctor != '\0') &&
                 (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (
                          TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                          );
              }
              TextSaveSystem_AddValue_m66777D3A870D6A21ED8B435E910EA85D88287CFD
                        ((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pDVar11,(int)local_38,1
                         ,(MethodInfo *)0x0);
              local_3c.___moduleIndex_0 = 1;
              local_3c.___flags_1 = '\0';
              local_3c._3_1_ = 0;
              if ((int)local_38 < (int)local_1c) {
                do {
                  OVar20 = local_18;
                  local_18 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                             ((int)local_18 + 1);
                  VVar7 = List_1_get_Item_m4C460F2F32FE7765229CC9FA6D7A3840779916B2_inline
                                    (param_2,(int)OVar20,
                                     List_1_get_Item_m4C460F2F32FE7765229CC9FA6D7A3840779916B2_RuntimeMethod_var
                                    );
                  local_54._2_1_ = VVar7.___t_0;
                  local_54._3_1_ = VVar7.___h_1;
                  if ((int)local_3c < (int)(uint)((ushort)VVar7 >> 8)) {
                    iVar23 = (uint)((ushort)VVar7 >> 8) - (int)local_3c;
                    local_3c = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                               ((int)local_3c + iVar23);
                    do {
                      if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                           ->has_cctor != '\0') &&
                         (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                          ->cctor_finished == 0)) {
                        il2cpp_runtime_class_init
                                  (
                                  TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                                  );
                      }
                      TextSaveSystem_AddValue_m66777D3A870D6A21ED8B435E910EA85D88287CFD
                                ((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pDVar11,0,
                                 (int)local_40,(MethodInfo *)0x0);
                      iVar23 = iVar23 + -1;
                    } while (iVar23 != 0);
                    VVar7 = local_54._2_2_;
                  }
                  iVar23 = Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1_gshared
                                     ((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                                      local_44,(uint)VVar7.___t_0,
                                      Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1_RuntimeMethod_var
                                     );
                  if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                       ->has_cctor != '\0') &&
                     (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (
                              TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                              );
                  }
                  TextSaveSystem_AddValue_m66777D3A870D6A21ED8B435E910EA85D88287CFD
                            ((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pDVar11,iVar23,
                             (int)local_40,(MethodInfo *)0x0);
                  local_38 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                             ((int)local_38 + 1);
                  local_3c = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                             ((int)local_3c + 1);
                } while ((int)local_38 < (int)local_1c);
              }
              if ((int)local_3c < 0x100) goto LAB_1030344b;
            }
            local_28 = local_28 + 0xc;
            local_30 = (Exception_t *)((int)&local_30->_padding_ + 1);
          } while ((int)local_30 < (int)local_2c);
        }
        if (local_1d == '\0') {
          if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
              0)) {
            il2cpp_runtime_class_init
                      (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
          }
          Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
                    ((Il2CppObject *)_stringLiteral820B44FE7B951AD99B8B5DEF2BBD7E4EA178C130,
                     (MethodInfo *)0x0);
        }
        local_2c = pDVar11->___entries_1;
        pLVar17 = (List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *)0x0;
        param_1 = (List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *)0x0;
        pEVar21 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)&DAT_00000001;
        if (1 < (int)local_2c) {
          iVar23 = 0x14;
          do {
            if (local_24->___entries_1 <= pEVar21) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            pEVar21 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                      ((int)&pEVar21->_padding_ + 2);
            pLVar17 = (List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *)
                      ((int)&pLVar17->_padding_ +
                      *(int *)((int)&((int2U5BU5D_t5B28DA25BC7C47BEAF4BDBB7F78B1BA7E9CBA49E *)
                                     (((int2U5BU5D_t5B28DA25BC7C47BEAF4BDBB7F78B1BA7E9CBA49E *)
                                      local_24->___buckets_0)->m_Items + -2))->_padding_ + iVar23));
            iVar23 = iVar23 + 8;
            param_1 = pLVar17;
          } while ((int)pEVar21 < (int)local_2c);
        }
        if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor
             != '\0') &&
           (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
            cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
        }
        if (*(int *)TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                    static_fields != 0) {
          if (*(int *)(*(int *)TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                               ->static_fields + 0xc) < (int)param_1) {
            if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                 has_cctor != '\0') &&
               (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (
                        TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                        );
            }
            if (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                 TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                 static_fields == (BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 *)0x0)
            goto LAB_103038b3;
            BitArray_set_Length_mA4B0BAC652E52B67C499AAC1B7CE4CF673149AB0
                      (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                        TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                        ->static_fields,(int)param_1,(MethodInfo *)0x0);
          }
          iVar23 = 0;
          pEVar22 = (Exception_t *)0x0;
          if (0 < (int)local_2c) {
            do {
              if ((Exception_t *)local_24->___entries_1 <= pEVar22) {
                local_4c = pEVar22;
                    /* WARNING: Subroutine does not return */
                ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                          ((MethodInfo *)0x0);
              }
              local_60 = (int2U5BU5D_t5B28DA25BC7C47BEAF4BDBB7F78B1BA7E9CBA49E *)
                         local_24->___buckets_0;
              local_1c = *(OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 *)
                          (&local_60->m_Items[0].___x_0 + (int)pEVar22);
              local_4c = (Exception_t *)((int)&pEVar22->_padding_ + 1);
              local_30 = (Exception_t *)((int)&pEVar22->_padding_ + 2);
              if ((Exception_t *)local_24->___entries_1 <= local_4c) {
                    /* WARNING: Subroutine does not return */
                ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                          ((MethodInfo *)0x0);
              }
              iVar19 = 0;
              local_4c = (Exception_t *)(&local_60->m_Items[0].___y_1)[(int)&pEVar22->_padding_];
              iVar9 = iVar23;
              if (0 < (int)local_4c) {
                do {
                  if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                       ->has_cctor != '\0') &&
                     (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (
                              TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                              );
                  }
                  iVar23 = iVar9 + 1;
                  if (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                       TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                       ->static_fields == (BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 *)0x0)
                  goto LAB_103038b3;
                  BitArray_Set_mA16A2CBB10C6F3FB78885109803F2C7325864F8A
                            (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                              TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                              ->static_fields,iVar9,(bool)((byte)local_1c.___moduleIndex_0 & 1),
                             (MethodInfo *)0x0);
                  local_1c = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                             ((int)local_1c >> 1);
                  iVar19 = iVar19 + 1;
                  iVar9 = iVar23;
                } while (iVar19 < (int)local_4c);
              }
              pEVar22 = local_30;
            } while ((int)local_30 < (int)local_2c);
          }
          if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
               has_cctor != '\0') &&
             (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var)
            ;
          }
          local_30 = (Exception_t *)
                     Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F
                               ((float)(int)param_1 /
                                (float)*(int *)((int)
                                                  TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                                                  ->static_fields + 8),(MethodInfo *)0x0);
          iVar9 = 0;
          iVar23 = *(int *)((int)TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                                 ->static_fields + 4);
          if (iVar23 != 0) {
            if (*(int *)(iVar23 + 0xc) < (int)local_30) {
              pIVar13 = il2cpp_array_new_specific
                                  (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var
                                   ,(uint)local_30);
              if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                   has_cctor != '\0') &&
                 (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (
                          TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                          );
              }
              *(Il2CppArray **)
               ((int)TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                     static_fields + 4) = pIVar13;
            }
            local_28 = 0;
            if (0 < (int)local_30) {
              do {
                local_2c = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)0x0;
                local_1c.___moduleIndex_0 = 0;
                local_1c.___flags_1 = '\0';
                local_1c._3_1_ = 0;
                iVar23 = 1;
                while( true ) {
                  if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                       ->has_cctor != '\0') &&
                     (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (
                              TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                              );
                  }
                  if ((*(int *)((int)TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                                     ->static_fields + 8) <= (int)local_1c) ||
                     ((int)param_1 <= iVar9)) break;
                  if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                       ->has_cctor != '\0') &&
                     (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (
                              TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                              );
                  }
                  if (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                       TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                       ->static_fields == (BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 *)0x0)
                  goto LAB_103038b3;
                  bVar6 = BitArray_Get_m8F334881C262C112865FE98A64C11C5090CFCA86
                                    (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                                      TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                                      ->static_fields,iVar9,(MethodInfo *)0x0);
                  if (bVar6) {
                    local_2c = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                               ((int)&((EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                                      (local_2c->m_Items + -1))->_padding_ + iVar23);
                  }
                  iVar23 = iVar23 * 2;
                  local_1c = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                             ((int)local_1c + 1);
                  iVar9 = iVar9 + 1;
                }
                if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (
                            TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                            );
                }
                this = *(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 **)
                        ((int)TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                              ->static_fields + 4);
                if ((TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var
                     ->has_cctor != '\0') &&
                   (TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (
                            TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var
                            );
                }
                if ((*(String_t **)
                      TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var
                      ->static_fields == (String_t *)0x0) ||
                   (wVar8 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70
                                      (*(String_t **)
                                        TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var
                                        ->static_fields,(int)local_2c,(MethodInfo *)0x0),
                   this == (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 *)0x0))
                goto LAB_103038b3;
                CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34::SetAt(this,local_28,wVar8);
                local_28 = local_28 + 1;
              } while ((int)local_28 < (int)local_30);
            }
            pEVar22 = local_30;
            if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                 has_cctor != '\0') &&
               (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (
                        TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                        );
            }
            String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E
                      ((String_t *)0x0,
                       *(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 **)
                        ((int)TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                              ->static_fields + 4),0,(int)pEVar22,(MethodInfo *)0x0);
            DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                      ((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)local_44,
                       DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_RuntimeMethod_var
                      );
            DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                      (local_24,
                       ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
                      );
            pSVar14 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E
                                ((String_t *)0x0,
                                 *(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34 **)
                                  ((int)TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                                        ->static_fields + 4),0,(int)pEVar22,(MethodInfo *)0x0);
            ExceptionList = local_10;
            return pSVar14;
          }
        }
      }
    }
  }
LAB_103038b3:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
