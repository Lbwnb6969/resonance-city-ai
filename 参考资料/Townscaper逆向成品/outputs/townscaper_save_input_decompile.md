# Townscaper Ghidra decompilation

- Program: /GameAssembly.dll
- Image base: 10000000

## TextSaveSystem_SaveToString (RVA 0x302ad0)

- Address: `10302ad0`
- Function: `TextSaveSystem_SaveToString_m33876E3566CFFAC799F4F59B483E6A9E96373D5A`
- Body: `[[10302ad0, 10302c5b] [10302c65, 103030fe] [1030312e, 103031d3] [103031e0, 103034f3] [103034fd, 103035ac] [103035b8, 103035e7] [103035f9, 103038bf]]`
- Called functions:
  - `il2cpp_codegen_initialize_runtime_metadata` at `1018e950`
  - `il2cpp_codegen_raise_exception` at `1018eab0`
  - `BitArray_Set_mA16A2CBB10C6F3FB78885109803F2C7325864F8A` at `1088f2b0`
  - `DictPool_2_Get_m2ACE07EEC74C81F7E511DFC440B39A5175BD81CE_gshared` at `10cf6720`
  - `il2cpp_codegen_raise_null_reference_exception` at `1018eae0`
  - `Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0` at `10a437e0`
  - `Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F` at `10a439d0`
  - `DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared` at `10441630`
  - `ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929` at `10aa2e60`
  - `BitArray_set_Length_mA4B0BAC652E52B67C499AAC1B7CE4CF673149AB0` at `1088f7b0`
  - `BitArray_Get_m8F334881C262C112865FE98A64C11C5090CFCA86` at `1088f200`
  - `String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E` at `10f03210`
  - `List_1_get_Item_m4C460F2F32FE7765229CC9FA6D7A3840779916B2_inline` at `10066d50`
  - `Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485` at `10a3c6b0`
  - `il2cpp_array_new_specific` at `101275a0`
  - `Dictionary_2_Add_m0FF70AAADDD2640FDE073BB8D7573E95DD3C5954_gshared` at `10cf75f0`
  - `SetAt` at `10054090`
  - `Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A` at `10a43fd0`
  - `Dictionary_2_get_Item_mFFEEBA09EA430B994459C2D86ADEE218592742A1_gshared` at `1101a670`
  - `il2cpp_runtime_class_init` at `101280f0`
  - `Enumerator_MoveNext_mD75F6C020DBA9AEC41D9AD2400B1B59CF4FB865A_gshared` at `106c9050`
  - `ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared` at `105d0600`
  - `Dictionary_2_GetEnumerator_m6C0B300F32865986C8D7B339620546C0BFF4F30D_gshared` at `10cf86d0`
  - `String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70` at `10f09d80`
  - `Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519` at `10a440d0`
  - `U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43` at `101d9d50`
  - `List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared` at `1102ffd0`
  - `TextSaveSystem_AddValue_m66777D3A870D6A21ED8B435E910EA85D88287CFD` at `10301b00`

```c

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


```

## TextSaveSystem_LoadFromString (RVA 0x301d60)

- Address: `10301d60`
- Function: `TextSaveSystem_LoadFromString_mCADEA552BBD342F6290459E31BB3F0CC6C4857E3`
- Body: `[[10301d60, 103026e8]]`
- Called functions:
  - `il2cpp_codegen_initialize_runtime_metadata` at `1018e950`
  - `il2cpp_codegen_raise_exception` at `1018eab0`
  - `BitArray_Set_mA16A2CBB10C6F3FB78885109803F2C7325864F8A` at `1088f2b0`
  - `SetAt` at `1003e770`
  - `il2cpp_codegen_get_array_type_mismatch_exception` at `1018e700`
  - `il2cpp_codegen_raise_null_reference_exception` at `1018eae0`
  - `Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared` at `10d00a20`
  - `il2cpp_runtime_class_init` at `101280f0`
  - `TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778` at `103027e0`
  - `List_1_Add_m71E8CD0B2AF5D8E5A569180C94FED858C0891768_gshared` at `1103ef20`
  - `DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared` at `10441630`
  - `List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared` at `10928710`
  - `BitArray_set_Length_mA4B0BAC652E52B67C499AAC1B7CE4CF673149AB0` at `1088f7b0`
  - `BitArray_Get_m8F334881C262C112865FE98A64C11C5090CFCA86` at `1088f200`
  - `String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70` at `10f09d80`
  - `ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared` at `105cffe0`
  - `List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline` at `1003e740`
  - `IsInst` at `1018e500`
  - `String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B` at `10f04ed0`
  - `Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485` at `10a3c6b0`
  - `il2cpp_array_new_specific` at `101275a0`
  - `il2cpp_value_box` at `10128ae0`
  - `List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared` at `1102ffd0`

```c

bool __cdecl
TextSaveSystem_LoadFromString_mCADEA552BBD342F6290459E31BB3F0CC6C4857E3
          (String_t *param_1,List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *param_2,
          List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *param_3,MethodInfo *param_4)

{
  Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *pDVar1;
  lPrlJXakJJslcdwEscDRVlSyavN_t3EC56E5EB8A0EA296A3B64931F0A1445B1D41430 lVar2;
  V_t2C4FF2B994717C0763FC7587F2B998766A7145F5 VVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  wchar_t wVar7;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar8;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar9;
  int iVar10;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar11;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *this;
  Il2CppObject *pIVar12;
  Il2CppObject *pIVar13;
  String_t *pSVar14;
  Exception_t *pEVar15;
  uint uVar16;
  char cVar17;
  AchievementID_t13562D86FC9C116E950E863A44792F46EBFFE67D AVar18;
  int iVar19;
  List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *pLVar20;
  int iVar21;
  MethodInfo *pMVar22;
  undefined8 local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_20;
  int local_1c;
  Il2CppObject *local_18;
  int local_14;
  int local_10;
  undefined2 local_c;
  undefined2 uStack_a;
  int local_8;

  if (DAT_1151c223 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m47B1353567BAAAADCDE97525F692911B90D4A216_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_mDACBB18E39AD629118308EC0D7936A3FD5B73A91_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m6BB46856D8BA929F469492C9CA2F7CAFFA6E3B99_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m71E8CD0B2AF5D8E5A569180C94FED858C0891768_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral1B907846A1129B9EE076E1326AF8AD2F72C25B4B);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral8F9FF3B1C930027A842164E69BB459E3B16D6CC0);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA3ED9566B8976A292BDA91905361994EC2D90085);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralBCB84C3CA9F0097077DEFA7C6BACFF38DC27BA84);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_il2cpp_TypeInfo_var);
    DAT_1151c223 = '\x01';
  }
  pSVar14 = param_1;
  local_18 = (Il2CppObject *)0x0;
  local_40 = 0;
  if (param_1 == (String_t *)0x0) goto LAB_103026e4;
  iVar10 = param_1->___m_stringLength_0;
  if (iVar10 != 0) {
    if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->cctor_finished
        == 0)) {
      il2cpp_runtime_class_init
                (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
    }
    local_10 = *(int *)((int)TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                             ->static_fields + 8) * iVar10;
    if (0x13 < local_10) {
      local_8 = 0;
      if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor
           != '\0') &&
         (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
          cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
      }
      if (*(int *)TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                  static_fields == 0) {
LAB_103026e4:
                    /* WARNING: Subroutine does not return */
        il2cpp_codegen_raise_null_reference_exception();
      }
      if (*(int *)(*(int *)TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                           ->static_fields + 0xc) < local_10) {
        if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor
             != '\0') &&
           (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
            cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
        }
        if (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
             TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
             static_fields == (BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 *)0x0)
        goto LAB_103026e4;
        BitArray_set_Length_mA4B0BAC652E52B67C499AAC1B7CE4CF673149AB0
                  (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                    TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                    static_fields,local_10,(MethodInfo *)0x0);
      }
      iVar21 = 0;
      iVar19 = local_10;
      if (0 < iVar10) {
        do {
          wVar7 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70
                            (pSVar14,iVar21,(MethodInfo *)0x0);
          AVar18.___id_0._2_2_ = 0;
          AVar18.___id_0._0_2_ = wVar7;
          if ((TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var->
               has_cctor != '\0') &&
             (TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (
                      TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var
                      );
          }
          pDVar1 = *(Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B **)
                    ((int)TextSaveAlphabet_t945404E53821F386E7B732C38AE12CC2CE674063_il2cpp_TypeInfo_var
                          ->static_fields + 4);
          if (pDVar1 == (Dictionary_2_t05DA59462DB2B73E336E6741454AE4A402C9178B *)0x0)
          goto LAB_103026e4;
          bVar6 = Dictionary_2_TryGetValue_m2377E865A8C08B77CE2108585784C9118DAE4E2A_gshared
                            (pDVar1,AVar18,&local_18,
                             Dictionary_2_TryGetValue_m47B1353567BAAAADCDE97525F692911B90D4A216_RuntimeMethod_var
                            );
          if (!bVar6) {
            return false;
          }
          iVar19 = 0;
          while( true ) {
            if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                 has_cctor != '\0') &&
               (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (
                        TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                        );
            }
            if (*(int *)((int)TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                              ->static_fields + 8) <= iVar19) break;
            if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                 has_cctor != '\0') &&
               (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                cctor_finished == 0)) {
              il2cpp_runtime_class_init
                        (
                        TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                        );
            }
            iVar5 = local_8;
            local_8 = local_8 + 1;
            if (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                 TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                 static_fields == (BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 *)0x0)
            goto LAB_103026e4;
            BitArray_Set_mA16A2CBB10C6F3FB78885109803F2C7325864F8A
                      (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                        TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                        ->static_fields,iVar5,(bool)((byte)local_18 & 1),(MethodInfo *)0x0);
            local_18 = (Il2CppObject *)((int)local_18 >> 1);
            iVar19 = iVar19 + 1;
          }
          iVar21 = iVar21 + 1;
          pSVar14 = param_1;
          iVar19 = local_10;
        } while (iVar21 < iVar10);
      }
      do {
        local_10 = iVar19;
        iVar10 = local_10;
        if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor
             != '\0') &&
           (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
            cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
        }
        if (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
             TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
             static_fields == (BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 *)0x0)
        goto LAB_103026e4;
        bVar6 = BitArray_Get_m8F334881C262C112865FE98A64C11C5090CFCA86
                          (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                            TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                            ->static_fields,iVar10 + -1,(MethodInfo *)0x0);
      } while ((!bVar6) && (iVar19 = iVar10 + -1, 0 < iVar10));
      local_8 = 0;
      if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor
           != '\0') &&
         (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
          cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
      }
      iVar19 = TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
                         (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                           TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                           ->static_fields,&local_8,5,(MethodInfo *)0x0);
      local_2c = TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
                           (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                             TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                             ->static_fields,&local_8,5,(MethodInfo *)0x0);
      local_30 = TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
                           (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                             TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                             ->static_fields,&local_8,5,(MethodInfo *)0x0);
      if (iVar10 < local_8 + iVar19 * 2 + 1) {
        if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
           && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished
               == 0)) {
          il2cpp_runtime_class_init
                    (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
        }
        Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
                  ((Il2CppObject *)_stringLiteralA3ED9566B8976A292BDA91905361994EC2D90085,
                   (MethodInfo *)0x0);
        return false;
      }
      if (iVar19 == 0) {
        iVar21 = 0;
      }
      else {
        iVar21 = 1 << ((char)iVar19 - 1U & 0x1f);
      }
      if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor
           != '\0') &&
         (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
          cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
      }
      local_1c = TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
                           (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                             TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                             ->static_fields,&local_8,iVar19,(MethodInfo *)0x0);
      local_1c = local_1c - iVar21;
      local_38 = TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
                           (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                             TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                             ->static_fields,&local_8,iVar19,(MethodInfo *)0x0);
      local_38 = local_38 - iVar21;
      if (local_8 + 4 <= iVar10) {
        if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->has_cctor
             != '\0') &&
           (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
            cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var);
        }
        iVar19 = TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
                           (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                             TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                             ->static_fields,&local_8,4,(MethodInfo *)0x0);
        local_14 = iVar19;
        if (local_8 + iVar19 * 4 <= iVar10) {
          if ((ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->has_cctor
               != '\0') &&
             (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var);
          }
          pDVar8 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                   ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared
                             (iVar19,
                              ListPool_1_Get_mDACBB18E39AD629118308EC0D7936A3FD5B73A91_RuntimeMethod_var
                             );
          iVar19 = 0;
          local_20 = pDVar8;
          if (0 < local_14) {
            do {
              if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                   has_cctor != '\0') &&
                 (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                  cctor_finished == 0)) {
                il2cpp_runtime_class_init
                          (
                          TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                          );
              }
              OVar9 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                      TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
                                (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                                  TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                                  ->static_fields,&local_8,4,(MethodInfo *)0x0);
              if (pDVar8 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
              goto LAB_103026e4;
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar8,OVar9,
                         List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
              iVar19 = iVar19 + 1;
            } while (iVar19 < local_14);
          }
          if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
               has_cctor != '\0') &&
             (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var)
            ;
          }
          iVar19 = 0;
          local_24 = 0;
          if (0 < local_14 + 1) {
            uVar16 = 1;
            do {
              uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
              iVar19 = iVar19 + 1;
              local_24 = iVar19;
            } while ((int)uVar16 <= local_14 + 1);
          }
          cVar17 = '\x01';
          param_1 = (String_t *)CONCAT13(1,param_1._0_3_);
          local_40 = CONCAT44((1 << ((byte)local_24 & 0x1f)) + -1,(undefined4)local_40);
          pLVar20 = param_3;
          if (local_8 < iVar10) {
            do {
              if (cVar17 == '\0') {
                if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (
                            TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                            );
                }
                iVar10 = TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
                                   (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                                     TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                                     ->static_fields,&local_8,1,(MethodInfo *)0x0);
                if (iVar10 == 1) {
                  if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                       ->has_cctor != '\0') &&
                     (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                      cctor_finished == 0)) {
                    il2cpp_runtime_class_init
                              (
                              TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                              );
                  }
                  iVar10 = TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
                                     (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                                       TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                                       ->static_fields,&local_8,local_2c,(MethodInfo *)0x0);
                  local_1c = local_1c + iVar10;
                }
              }
              else {
                param_1 = (String_t *)((uint)param_1 & 0xffffff);
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
              local_28 = TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
                                   (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                                     TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                                     ->static_fields,&local_8,local_30,(MethodInfo *)0x0);
              iVar19 = 0;
              local_28 = local_28 + local_38;
              iVar10 = TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
                                 (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                                   TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                                   ->static_fields,&local_8,1,(MethodInfo *)0x0);
              if (iVar10 == 1) {
                _local_c = CONCAT22(uStack_a,0xf);
                if (pLVar20 == (List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *)0x0)
                goto LAB_103026e4;
                List_1_Add_m71E8CD0B2AF5D8E5A569180C94FED858C0891768_gshared
                          (pLVar20,(V_t2C4FF2B994717C0763FC7587F2B998766A7145F5)0xf,
                           List_1_Add_m71E8CD0B2AF5D8E5A569180C94FED858C0891768_RuntimeMethod_var);
                iVar19 = 1;
              }
              cVar17 = '\x01';
              while( true ) {
                if ((TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                     has_cctor != '\0') &&
                   (TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (
                            TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                            );
                }
                iVar10 = TextSaveSystem_ReadValue_m91249AC973E0DA5568FF85F758F9784FB0CFD778
                                   (*(BitArray_t5AA7A3FADA9F63D23407525B6CDC96FBB70275A0 **)
                                     TextSaveSystem_t956961580AE154D054EA79BB0B998185E01B6A14_il2cpp_TypeInfo_var
                                     ->static_fields,&local_8,local_24,(MethodInfo *)0x0);
                if (iVar10 == local_40._4_4_) break;
                if (iVar10 != 0) {
                  iVar10 = iVar10 + -1;
                  if ((local_14 <= iVar10) || (iVar10 < 0)) {
                    this = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)
                           il2cpp_array_new_specific
                                     (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var
                                      ,4);
                    local_40 = CONCAT44(iVar10,(undefined4)local_40);
                    pIVar12 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                               ,(void *)((int)&local_40 + 4));
                    if (this != (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0) {
                      if ((pIVar12 != (Il2CppObject *)0x0) &&
                         (pIVar13 = IsInst(pIVar12,*(Il2CppClass **)(this->_padding_ + 0x20)),
                         pIVar13 == (Il2CppObject *)0x0)) {
                        pMVar22 = (MethodInfo *)0x0;
                        pEVar15 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                        il2cpp_codegen_raise_exception(pEVar15,pMVar22);
                      }
                      ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(this,0,pIVar12);
                      local_38 = local_14;
                      pIVar12 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                                 ,&local_38);
                      if ((pIVar12 != (Il2CppObject *)0x0) &&
                         (pIVar13 = IsInst(pIVar12,*(Il2CppClass **)(this->_padding_ + 0x20)),
                         pIVar13 == (Il2CppObject *)0x0)) {
                        pMVar22 = (MethodInfo *)0x0;
                        pEVar15 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                        il2cpp_codegen_raise_exception(pEVar15,pMVar22);
                      }
                      ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(this,1,pIVar12);
                      param_1 = (String_t *)CONCAT13(cVar17,param_1._0_3_);
                      pIVar12 = il2cpp_value_box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var
                                                 ,(void *)((int)&param_1 + 3));
                      if ((pIVar12 != (Il2CppObject *)0x0) &&
                         (pIVar13 = IsInst(pIVar12,*(Il2CppClass **)(this->_padding_ + 0x20)),
                         pIVar13 == (Il2CppObject *)0x0)) {
                        pMVar22 = (MethodInfo *)0x0;
                        pEVar15 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                        il2cpp_codegen_raise_exception(pEVar15,pMVar22);
                      }
                      ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(this,2,pIVar12);
                      local_34 = local_1c;
                      local_30 = local_28;
                      pIVar12 = il2cpp_value_box(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568_il2cpp_TypeInfo_var
                                                 ,&local_34);
                      if ((pIVar12 != (Il2CppObject *)0x0) &&
                         (pIVar13 = IsInst(pIVar12,*(Il2CppClass **)(this->_padding_ + 0x20)),
                         pIVar13 == (Il2CppObject *)0x0)) {
                        pMVar22 = (MethodInfo *)0x0;
                        pEVar15 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                        il2cpp_codegen_raise_exception(pEVar15,pMVar22);
                      }
                      ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(this,3,pIVar12);
                      pSVar14 = String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B
                                          (_stringLiteralBCB84C3CA9F0097077DEFA7C6BACFF38DC27BA84,
                                           this,(MethodInfo *)0x0);
                      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->
                           has_cctor != '\0') &&
                         (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->
                          cctor_finished == 0)) {
                        il2cpp_runtime_class_init
                                  (
                                  Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var
                                  );
                      }
                      Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
                                ((Il2CppObject *)pSVar14,(MethodInfo *)0x0);
                      DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                                (local_20,
                                 ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
                                );
                      return false;
                    }
                    goto LAB_103026e4;
                  }
                  if (local_20 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
                  goto LAB_103026e4;
                  local_c = CONCAT11(cVar17,(undefined1)local_c);
                  pGVar11 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                      ((List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)local_20,
                                       iVar10,
                                       List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var
                                      );
                  uVar4 = _local_c;
                  pLVar20 = param_3;
                  _local_c = CONCAT31(stack0xfffffff5,(uchar)pGVar11);
                  if (param_3 == (List_1_tF9A565374BF86F9FF1DA3261675EC468D2A0EC4B *)0x0)
                  goto LAB_103026e4;
                  VVar3.___h_1 = (uchar)((uint)uVar4 >> 8);
                  VVar3.___t_0 = (uchar)pGVar11;
                  List_1_Add_m71E8CD0B2AF5D8E5A569180C94FED858C0891768_gshared
                            (param_3,VVar3,
                             List_1_Add_m71E8CD0B2AF5D8E5A569180C94FED858C0891768_RuntimeMethod_var)
                  ;
                  iVar19 = iVar19 + 1;
                  if (cVar17 == -1) break;
                }
                cVar17 = cVar17 + '\x01';
              }
              if (param_2 == (List_1_t65B5CE5C2CCE2EE12BA01A686F7853869760B043 *)0x0)
              goto LAB_103026e4;
              lVar2.___NLVTHAlcYUOUXlkWNcQMDFfDJvH_1 = local_28;
              lVar2.___OFxIPpGxSUDTJEgqhfJRLIfXynV_0 = local_1c;
              lVar2.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._0_1_ = (char)iVar19;
              lVar2.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._1_1_ = (char)((uint)iVar19 >> 8);
              lVar2.___goUQCKzJmFEdxabJRHcPmEGvlCq_2._2_2_ = (short)((uint)iVar19 >> 0x10);
              List_1_Add_m0E7FCB6DD5C9E46B53F22A80420F5500017D3142_gshared
                        ((List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)param_2,lVar2,
                         List_1_Add_m6BB46856D8BA929F469492C9CA2F7CAFFA6E3B99_RuntimeMethod_var);
              pDVar8 = local_20;
              if (local_10 <= local_8) break;
              cVar17 = param_1._3_1_;
            } while( true );
          }
          DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                    (pDVar8,
                     ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
                    );
          return true;
        }
      }
      if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0')
         && (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished ==
             0)) {
        il2cpp_runtime_class_init
                  (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
      }
      Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
                ((Il2CppObject *)_stringLiteral8F9FF3B1C930027A842164E69BB459E3B16D6CC0,
                 (MethodInfo *)0x0);
      return false;
    }
    if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->cctor_finished == 0)) {
      il2cpp_runtime_class_init(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)
      ;
    }
    Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485
              ((Il2CppObject *)_stringLiteral1B907846A1129B9EE076E1326AF8AD2F72C25B4B,
               (MethodInfo *)0x0);
  }
  return false;
}


```

## SaveSystem_get_storageContainer (RVA 0xa04020)

- Address: `10a04020`
- Function: `SaveSystem_get_storageContainer_mED5F478B1B99CE01EE6AD829DAE146705411F68E`
- Body: `[[10a04020, 10a04108]]`
- Called functions:
  - `il2cpp_codegen_initialize_runtime_metadata` at `1018e950`
  - `il2cpp_codegen_raise_null_reference_exception` at `1018eae0`
  - `SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462` at `1026bae0`
  - `GetInterfaceInvokeDataFromVTableSlowPath` at `10156c40`

```c

Il2CppObject * __cdecl
SaveSystem_get_storageContainer_mED5F478B1B99CE01EE6AD829DAE146705411F68E
          (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *param_1,MethodInfo *param_2)

{
  Il2CppClass *pIVar1;
  ushort uVar2;
  String_t *pSVar3;
  VirtualInvokeData *pVVar4;
  Il2CppObject *pIVar5;

  if (DAT_115201a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8);
    DAT_115201a4 = '\x01';
  }
  if (`struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized == false) {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var);
    `struct_Il2CppObject*___cdecl_Platform_get_SDK_m22BFADA660A0C166EE96936AB9A6C23915E6CB3F_inline(MethodInfo_const*)'
    ::__l2::s_Il2CppMethodInitialized = true;
  }
  pIVar5 = *(Il2CppObject **)
            Platform_tFCB0DECED6100708E85A7495E5F89EFAC65C7072_il2cpp_TypeInfo_var->static_fields;
  pSVar3 = SR_GetString_m9DC7F3962EEB239017A1A4C443F52047B5BC7462
                     (_stringLiteralE541D26859D264DEB1E7847324CA9C765F331CF8,(MethodInfo *)0x0);
  if (pIVar5 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  pIVar1 = (pIVar5->field0_0x0).klass;
  uVar2 = 0;
  if (pIVar1->interface_offsets_count != 0) {
    do {
      if (pIVar1->interfaceOffsets[uVar2].interfaceType ==
          IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var) {
        pIVar5 = (Il2CppObject *)
                 (*(code *)(&pIVar1[1].implementedInterfaces)
                           [pIVar1->interfaceOffsets[uVar2].offset * 2])
                           (pIVar5,pSVar3,
                            (Il2CppRuntimeInterfaceOffsetPair *)
                            (&pIVar1[1].implementedInterfaces +
                            pIVar1->interfaceOffsets[uVar2].offset * 2)[1]);
        return pIVar5;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < pIVar1->interface_offsets_count);
  }
  pVVar4 = il2cpp::vm::ClassInlines::GetInterfaceInvokeDataFromVTableSlowPath
                     (pIVar5,
                      IPlatformSDK_t445C2B3B280259FC57B4D89D7580436E90078756_il2cpp_TypeInfo_var,0xb
                     );
  pIVar5 = (Il2CppObject *)(*pVVar4->methodPtr)(pIVar5,pSVar3,pVVar4->method);
  return pIVar5;
}


```

## ActionInputManager_Update (RVA 0x870d80)

- Address: `10870d80`
- Function: `ActionInputManager_Update_m7849C114537D4FD4384F861ACF464F464249A3C3`
- Body: `[[10870d80, 10871827]]`
- Called functions:
  - `il2cpp_codegen_initialize_runtime_metadata` at `1018e950`
  - `Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710` at `10674620`
  - `PaletteMenu_HoldSelectNextPicker_m292444E1B1C754D009B42F4063F4D39F294EB986` at `1074e910`
  - `Player_GetAnyNegativeButtonDown_m799EFDF18DC8CB2D1EDAEA0025611C4749E18B17` at `10f1a500`
  - `UiMaster_GetSmoothAxis2D_m34BBE48972B315AF58B4E3D1101F8D1FB11F0C18` at `103e5c10`
  - `il2cpp_codegen_raise_null_reference_exception` at `1018eae0`
  - `Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E` at `10f1c7d0`
  - `ControllerHelper_GetLastActiveController_mB2923A2560C998865D9AF56E5825F082F9F00D6B` at `10d662c0`
  - `HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C` at `1040d9d0`
  - `Player_GetButton_m3A5FD78D51E3D08C47ADFAB33E1DF2CEC2F81976` at `10f1f2e0`
  - `GamepadScreenCursor_OnCameraRotate_mD64E8FA0469684F7DC1244910FA34B12E8793E04` at `1083e550`
  - `OrbitalCamera_RotateCamera_m14BF8D0602D4FB258657AD6114A51CC1712E0B67` at `1074cd50`
  - `Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499` at `10a4aa60`
  - `Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828` at `10672d70`
  - `OrbitalCamera_WASDCamera_m8ABA519BE3A243A7A068DD40800AA49016169197` at `1074d360`
  - `Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84` at `1066d9d0`
  - `Controller_get_type_mADBE045CF65DAEADA33460C5F1AEC6F0A206A71E` at `10d183c0`
  - `CommandFeedbacker_Feedback_mEE4F5EE3E478F56D5B53F16D86CC8EC71FE1D5E9` at `10233df0`
  - `SideMenu_Toggle_mACD1F01D06929DAA462BEEC83BBD55F6A045A9C2` at `10a0cc30`
  - `Maker_HoldUndo_m053A57BEFBC9BBA1825020A962A6D36C7BC3396A` at `103d20d0`
  - `Player_GetNegativeButton_m5C6ABDFC3CEDADC26025EBED847DB1F44560A27A` at `10f22000`
  - `il2cpp_runtime_class_init` at `101280f0`
  - `ControlLegend_Open_m83C3AFC5161EBD9BB146AB45A99C7AE18B7DCD39` at `10236d20`
  - `UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F` at `103e9500`
  - `OrbitalCamera_GamepadZoom_m037ED8CCBF438DC4576F6E338A561406E9818F38` at `10749590`
  - `Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96` at `10f1d410`
  - `Maker_HoldRedo_m929447CD54819FA3745AB4D5F9A2652A478798A6` at `103d2070`
  - `Player_GetAnyButton_m1D11D46554676B814AD56C5BE93A18282595D106` at `10f1a460`
  - `Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6` at `10674590`
  - `Player_GetAnyButtonDown_m914E51A27FEE5F7C6CDB812F96E194BF44EF944E` at `10f1a250`
  - `Player_GetAnyNegativeButton_m98F4E3603D0736CC528FC9FDACE690356603F7B2` at `10f1a6e0`
  - `PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234` at `1074f300`

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
ActionInputManager_Update_m7849C114537D4FD4384F861ACF464F464249A3C3
          (ActionInputManager_t5A1DB58B471D890F8E6A3314C6F6B597E49AD32F *param_1,MethodInfo *param_2
          )

{
  Axis_t86B3B312CB3BFF0650F3EFCA96B325694A1377A0 AVar1;
  Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *pPVar2;
  GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *pGVar3;
  OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *pOVar4;
  UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *pUVar5;
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar6;
  SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *pSVar7;
  SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *pSVar8;
  Maker_t537981F2ED20294ACF4C94693B3268049739203D *pMVar9;
  InputModeManager_t01E99A79BA01878A68D72A50C3060B585610CF08 *pIVar10;
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar11;
  SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *pSVar12;
  ControlLegend_tB336AC9E8DC444437364CA0FDD6C0BBEFB647025 *pCVar13;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar14;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar15;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar16;
  bool bVar17;
  Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33 *pCVar18;
  int iVar19;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar20;
  CommandFeedbacker_t476CB1AAEE70903FB99B435AD4211A0714263692 *pCVar21;
  PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *pPVar22;
  MethodInfo *unaff_EDI;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar23;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar24;
  float fVar25;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1c;
  undefined1 local_10 [8];
  float local_8;

  if (DAT_1151f58d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral0057E5B09A0B1D6C5BFF7C8E2659AD1EDCA0CAE2);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral18E6316ADA637DB2A17BD50EEDBE17672A060DED);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2B688FEC1C5963DF868D1C220FC430D26F09D446);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral2F341A531DD3EB9069C8ECD752B622131880DEE4);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral42E468BB7A2B02210D9028EF1F46DD660609E1EB);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral54E7FE0A6CCD37786532EEC6E7C887B815DE7603);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral5D801DA57C7CA80192EC3DFD6B4E7AAB80B67CA7);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral613F48ED6182E4798F6A4F55704639C0E85460DE);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral724F6EF07C0D3FFFD32A55027218B65FB4F377E1);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral7658FB35C79C6DD973249030E049D8750AC5D3A7);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral79D9DEA6810B56C9550EDA58CE1A145D53478507);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral7FF91F25421EA2C956A80BC67A2E718FDDAF7D1F);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral85CC9C2242FDEC5E8C733F1216706FC9DA66AA83);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral88547CFAF5AB9F8B80AD9E3FEA8F6B0C2F316D9B);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteral906D4CEA4D36D12CCF9AA85FF5577543B979FA35);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralA27C417E6D32418D7DCE681211EDADD684A87AAA);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralB328877C1DB6F9B0686602041A5E85E53E39B262);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralB33F4B4E0FF129008E749B8B712638253CD555A0);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralCAA46419FC7BD5D42C561977A2BAC4F2AD55835A);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralCC46685EB5E95A384993E8AA30BE0A01AA8101F6);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralD16EE1865792E115514D073AAE88ADDA76678163);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralE11498CF91157950F41BC7EA2EBD5FAD00B6E68A);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&_stringLiteralFE8412772CA2903F3E7E2D2EF7AEF5758301150F);
    DAT_1151f58d = '\x01';
  }
  if (param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
  goto LAB_10871823;
  pPVar2 = param_1->___master_4->___player_43;
  if (pPVar2 == (Player_t64E5862AF574099CB9D64941CF5AAFD551EDA05E *)0x0) {
    return;
  }
  if ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var)
    ;
  }
  if (`bool___cdecl_ReInput_get_isReady_mB524470981623D3BBF529259E252979E1E3408CF_inline(MethodInfo_const*)'
      ::__l2::s_Il2CppMethodInitialized == false) {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var);
    `bool___cdecl_ReInput_get_isReady_mB524470981623D3BBF529259E252979E1E3408CF_inline(MethodInfo_const*)'
    ::__l2::s_Il2CppMethodInitialized = true;
  }
  if ((ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var)
    ;
  }
  if (*(char *)((int)ReInput_t3D6E57DF9B2102E51F100A7CE3AD9F74E3C46194_il2cpp_TypeInfo_var->
                     static_fields + 0x1c) == '\0') {
    return;
  }
  bVar17 = Player_GetAnyButton_m1D11D46554676B814AD56C5BE93A18282595D106(pPVar2,(MethodInfo *)0x0);
  if ((bVar17) ||
     (bVar17 = Player_GetAnyNegativeButton_m98F4E3603D0736CC528FC9FDACE690356603F7B2
                         (pPVar2,(MethodInfo *)0x0), bVar17)) {
    fVar25 = Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E
                       (pPVar2,_stringLiteral18E6316ADA637DB2A17BD50EEDBE17672A060DED,
                        (MethodInfo *)0x0);
    if (fVar25 != ___real_00000000) {
      if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
         (pGVar3 = param_1->___master_4->___gamepadScreenCursor_18,
         pGVar3 == (GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *)0x0))
      goto LAB_10871823;
      GamepadScreenCursor_OnCameraRotate_mD64E8FA0469684F7DC1244910FA34B12E8793E04
                (pGVar3,(MethodInfo *)0x0);
      if (pPVar2->___controllers_7 ==
          (ControllerHelper_t7321E4C8D92738EAD49659BFD68FB9A9C7E6D268 *)0x0) goto LAB_10871823;
      pCVar18 = ControllerHelper_GetLastActiveController_mB2923A2560C998865D9AF56E5825F082F9F00D6B
                          (pPVar2->___controllers_7,(MethodInfo *)0x0);
      if ((pCVar18 != (Controller_tC967CEC588E336CE7B3FCC4F766EE89275253D33 *)0x0) &&
         (iVar19 = Controller_get_type_mADBE045CF65DAEADA33460C5F1AEC6F0A206A71E
                             (pCVar18,(MethodInfo *)0x0), iVar19 == 0)) {
        fVar25 = fVar25 * __real_3ecccccd;
      }
      if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
         (pOVar4 = param_1->___master_4->___orbitalCamera_15,
         pOVar4 == (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0))
      goto LAB_10871823;
      OrbitalCamera_GamepadZoom_m037ED8CCBF438DC4576F6E338A561406E9818F38
                (pOVar4,fVar25,(MethodInfo *)0x0);
    }
    if (param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
    goto LAB_10871823;
    join_0x00000008_0x00000000_ =
         UiMaster_GetSmoothAxis2D_m34BBE48972B315AF58B4E3D1101F8D1FB11F0C18
                   (param_1->___master_4,_stringLiteralB328877C1DB6F9B0686602041A5E85E53E39B262,
                    _stringLiteral7FF91F25421EA2C956A80BC67A2E718FDDAF7D1F,(MethodInfo *)0x0);
    VVar23 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
    fVar25 = (float)local_10._4_4_ - local_1c.___y_3;
    local_1c.___y_3 = VVar23.___x_0;
    local_1c.___z_4 = VVar23.___y_1;
    if (__real_2edbe6fe <=
        (local_8 - local_1c.___z_4) * (local_8 - local_1c.___z_4) + fVar25 * fVar25) {
      pUVar5 = param_1->___master_4;
      if (pUVar5 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) goto LAB_10871823;
      pOVar4 = pUVar5->___orbitalCamera_15;
      if (pUVar5->___gamepadScreenCursor_18 ==
          (GamepadScreenCursor_t16442AD23130B50028C8F87084D1AC48DB3F8DB0 *)0x0) goto LAB_10871823;
      GamepadScreenCursor_OnCameraRotate_mD64E8FA0469684F7DC1244910FA34B12E8793E04
                (pUVar5->___gamepadScreenCursor_18,(MethodInfo *)0x0);
      fVar25 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84
                         ((MethodInfo *)0x0);
      if ((((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
           (pWVar6 = param_1->___master_4->___worldMaster_5,
           pWVar6 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) ||
          (pSVar7 = pWVar6->___saveSystem_35,
          pSVar7 == (SaveSystem_tD1A08EAD160E031C05938AC63F3AA4825C691C92 *)0x0)) ||
         (pSVar8 = pSVar7->___settingsData_10,
         pSVar8 == (SettingsData_t30CD9D6FCE66CFF6FA25505CC0D4FF98CE403617 *)0x0))
      goto LAB_10871823;
      AVar1 = pSVar8->___axis_5;
      local_1c.___y_3 = __real_3f800000;
      if (AVar1.___rotationXInverted_0 != false) {
        local_1c.___y_3 = __real_bf800000;
      }
      local_1c.___y_3 = (float)local_10._4_4_ * fVar25 * __real_43340000 * local_1c.___y_3;
      local_1c.___z_4 = __real_bf800000;
      if (AVar1.___rotationYInverted_1 == false) {
        local_1c.___z_4 = __real_3f800000;
      }
      local_1c.___z_4 = local_8 * fVar25 * __real_43340000 * local_1c.___z_4;
      iVar16.___y_1 = (int)local_1c.___z_4;
      iVar16.___x_0 = (int)local_1c.___y_3;
      iVar16.___z_2 = 0;
      fVar24 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
               HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar16,unaff_EDI);
      if (pOVar4 == (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0)
      goto LAB_10871823;
      OrbitalCamera_RotateCamera_m14BF8D0602D4FB258657AD6114A51CC1712E0B67
                (pOVar4,fVar24,(MethodInfo *)0x0);
    }
    Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(&local_1c,(MethodInfo *)0x0);
    local_1c.___z_4 =
         Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E
                   (pPVar2,_stringLiteral724F6EF07C0D3FFFD32A55027218B65FB4F377E1,(MethodInfo *)0x0)
    ;
    local_1c.___y_3 =
         Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E
                   (pPVar2,_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A,(MethodInfo *)0x0)
    ;
    local_1c.___x_2 =
         Player_GetAxis_mF22EA1C33DFDEC6BB8466692D4FDAB058B819C2E
                   (pPVar2,_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E,(MethodInfo *)0x0)
    ;
    pVVar20 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)local_10,
                         (MethodInfo *)0x0);
    fVar25 = local_1c.___z_4;
    VVar14.___y_3 = local_1c.___y_3;
    VVar14.___x_2 = local_1c.___x_2;
    VVar14.___z_4 = local_1c.___z_4;
    bVar17 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710
                       (VVar14,*pVVar20,(MethodInfo *)0x0);
    if (bVar17) {
      if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
         (pOVar4 = param_1->___master_4->___orbitalCamera_15,
         pOVar4 == (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0))
      goto LAB_10871823;
      VVar15.___y_3 = local_1c.___y_3;
      VVar15.___x_2 = local_1c.___x_2;
      VVar15.___z_4 = fVar25;
      OrbitalCamera_WASDCamera_m8ABA519BE3A243A7A068DD40800AA49016169197
                (pOVar4,VVar15,(MethodInfo *)0x0);
    }
    bVar17 = Player_GetButton_m3A5FD78D51E3D08C47ADFAB33E1DF2CEC2F81976
                       (pPVar2,_stringLiteralE11498CF91157950F41BC7EA2EBD5FAD00B6E68A,
                        (MethodInfo *)0x0);
    if (bVar17) {
      if (((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
          (pWVar6 = param_1->___master_4->___worldMaster_5,
          pWVar6 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) ||
         (pMVar9 = pWVar6->___maker_6,
         pMVar9 == (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) goto LAB_10871823;
      bVar17 = Maker_HoldUndo_m053A57BEFBC9BBA1825020A962A6D36C7BC3396A(pMVar9,(MethodInfo *)0x0);
      if (bVar17) {
        if (param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
        goto LAB_10871823;
        pCVar21 = param_1->___master_4->___undoFeedbacker_21;
LAB_108712b3:
        if (pCVar21 != (CommandFeedbacker_t476CB1AAEE70903FB99B435AD4211A0714263692 *)0x0) {
          CommandFeedbacker_Feedback_mEE4F5EE3E478F56D5B53F16D86CC8EC71FE1D5E9
                    (pCVar21,(MethodInfo *)0x0);
        }
      }
    }
    else {
      bVar17 = Player_GetNegativeButton_m5C6ABDFC3CEDADC26025EBED847DB1F44560A27A
                         (pPVar2,_stringLiteralE11498CF91157950F41BC7EA2EBD5FAD00B6E68A,
                          (MethodInfo *)0x0);
      if (bVar17) {
        if (((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
            (pWVar6 = param_1->___master_4->___worldMaster_5,
            pWVar6 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) ||
           (pMVar9 = pWVar6->___maker_6,
           pMVar9 == (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0)) goto LAB_10871823;
        bVar17 = Maker_HoldRedo_m929447CD54819FA3745AB4D5F9A2652A478798A6(pMVar9,(MethodInfo *)0x0);
        if (bVar17) {
          if (param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
          goto LAB_10871823;
          pCVar21 = param_1->___master_4->___redoFeedbacker_22;
          goto LAB_108712b3;
        }
      }
    }
    if (((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
        (pIVar10 = param_1->___master_4->___inputModeManager_19,
        pIVar10 == (InputModeManager_t01E99A79BA01878A68D72A50C3060B585610CF08 *)0x0)) ||
       (pUVar11 = pIVar10->___gamepadState_6,
       pUVar11 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) goto LAB_10871823;
    bVar17 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                       (pUVar11,(MethodInfo *)0x0);
    if (bVar17) {
      if (((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
          (pSVar12 = param_1->___master_4->___sideMenu_8,
          pSVar12 == (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)) ||
         (pUVar11 = pSVar12->___openState_8,
         pUVar11 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0))
      goto LAB_10871823;
      bVar17 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                         (pUVar11,(MethodInfo *)0x0);
      if (bVar17) goto LAB_1087138b;
    }
    bVar17 = Player_GetButton_m3A5FD78D51E3D08C47ADFAB33E1DF2CEC2F81976
                       (pPVar2,_stringLiteral42E468BB7A2B02210D9028EF1F46DD660609E1EB,
                        (MethodInfo *)0x0);
    if (bVar17) {
      if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
         (pPVar22 = param_1->___master_4->___paletteMenu_9,
         pPVar22 == (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0))
      goto LAB_10871823;
      iVar19 = 1;
    }
    else {
      bVar17 = Player_GetNegativeButton_m5C6ABDFC3CEDADC26025EBED847DB1F44560A27A
                         (pPVar2,_stringLiteral42E468BB7A2B02210D9028EF1F46DD660609E1EB,
                          (MethodInfo *)0x0);
      if (!bVar17) goto LAB_1087138b;
      if ((param_1->___master_4 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) ||
         (pPVar22 = param_1->___master_4->___paletteMenu_9,
         pPVar22 == (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0))
      goto LAB_10871823;
      iVar19 = -1;
    }
    PaletteMenu_HoldSelectNextPicker_m292444E1B1C754D009B42F4063F4D39F294EB986
              (pPVar22,iVar19,(MethodInfo *)0x0);
  }
LAB_1087138b:
  bVar17 = Player_GetAnyButtonDown_m914E51A27FEE5F7C6CDB812F96E194BF44EF944E
                     (pPVar2,(MethodInfo *)0x0);
  if ((!bVar17) &&
     (bVar17 = Player_GetAnyNegativeButtonDown_m799EFDF18DC8CB2D1EDAEA0025611C4749E18B17
                         (pPVar2,(MethodInfo *)0x0), !bVar17)) {
    return;
  }
  bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                     (pPVar2,_stringLiteral5D801DA57C7CA80192EC3DFD6B4E7AAB80B67CA7,
                      (MethodInfo *)0x0);
  pUVar5 = param_1->___master_4;
  if (bVar17) {
    if ((pUVar5 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
       (pUVar5->___sideMenu_8 != (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *)0x0)) {
      SideMenu_Toggle_mACD1F01D06929DAA462BEEC83BBD55F6A045A9C2
                (pUVar5->___sideMenu_8,(MethodInfo *)0x0);
      return;
    }
  }
  else if (pUVar5 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    pCVar13 = pUVar5->___switchControlLegend_20;
    if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
       (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0))
    {
      il2cpp_runtime_class_init
                (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    }
    bVar17 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                       ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pCVar13,
                        (MethodInfo *)0x0);
    if ((bVar17) &&
       (bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                           (pPVar2,_stringLiteralFE8412772CA2903F3E7E2D2EF7AEF5758301150F,
                            (MethodInfo *)0x0), bVar17)) {
      if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
         (pCVar13 = param_1->___master_4->___switchControlLegend_20,
         pCVar13 != (ControlLegend_tB336AC9E8DC444437364CA0FDD6C0BBEFB647025 *)0x0)) {
        ControlLegend_Open_m83C3AFC5161EBD9BB146AB45A99C7AE18B7DCD39(pCVar13,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                         (pPVar2,_stringLiteralB33F4B4E0FF129008E749B8B712638253CD555A0,
                          (MethodInfo *)0x0);
      if (bVar17) {
        if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
           (pPVar22 = param_1->___master_4->___paletteMenu_9,
           pPVar22 != (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)) {
          PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                    (pPVar22,0,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                           (pPVar2,_stringLiteralA27C417E6D32418D7DCE681211EDADD684A87AAA,
                            (MethodInfo *)0x0);
        if (bVar17) {
          if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
             (pPVar22 = param_1->___master_4->___paletteMenu_9,
             pPVar22 != (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)) {
            PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                      (pPVar22,1,(MethodInfo *)0x0);
            return;
          }
        }
        else {
          bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                             (pPVar2,_stringLiteralCAA46419FC7BD5D42C561977A2BAC4F2AD55835A,
                              (MethodInfo *)0x0);
          if (bVar17) {
            if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
               && (pPVar22 = param_1->___master_4->___paletteMenu_9,
                  pPVar22 != (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)) {
              PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                        (pPVar22,2,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                               (pPVar2,_stringLiteral85CC9C2242FDEC5E8C733F1216706FC9DA66AA83,
                                (MethodInfo *)0x0);
            if (bVar17) {
              if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0
                  ) && (pPVar22 = param_1->___master_4->___paletteMenu_9,
                       pPVar22 != (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)) {
                PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                          (pPVar22,3,(MethodInfo *)0x0);
                return;
              }
            }
            else {
              bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                                 (pPVar2,_stringLiteralCC46685EB5E95A384993E8AA30BE0A01AA8101F6,
                                  (MethodInfo *)0x0);
              if (bVar17) {
                if ((param_1->___master_4 !=
                     (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                   (pPVar22 = param_1->___master_4->___paletteMenu_9,
                   pPVar22 != (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)) {
                  PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                            (pPVar22,4,(MethodInfo *)0x0);
                  return;
                }
              }
              else {
                bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                                   (pPVar2,_stringLiteral2F341A531DD3EB9069C8ECD752B622131880DEE4,
                                    (MethodInfo *)0x0);
                if (bVar17) {
                  if ((param_1->___master_4 !=
                       (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                     (pPVar22 = param_1->___master_4->___paletteMenu_9,
                     pPVar22 != (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)) {
                    PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                              (pPVar22,5,(MethodInfo *)0x0);
                    return;
                  }
                }
                else {
                  bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                                     (pPVar2,_stringLiteral906D4CEA4D36D12CCF9AA85FF5577543B979FA35,
                                      (MethodInfo *)0x0);
                  if (bVar17) {
                    if ((param_1->___master_4 !=
                         (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                       (pPVar22 = param_1->___master_4->___paletteMenu_9,
                       pPVar22 != (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)) {
                      PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                                (pPVar22,6,(MethodInfo *)0x0);
                      return;
                    }
                  }
                  else {
                    bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                                       (pPVar2,
                                        _stringLiteral88547CFAF5AB9F8B80AD9E3FEA8F6B0C2F316D9B,
                                        (MethodInfo *)0x0);
                    if (bVar17) {
                      if ((param_1->___master_4 !=
                           (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                         (pPVar22 = param_1->___master_4->___paletteMenu_9,
                         pPVar22 != (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)) {
                        PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                                  (pPVar22,7,(MethodInfo *)0x0);
                        return;
                      }
                    }
                    else {
                      bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                                         (pPVar2,
                                          _stringLiteralD16EE1865792E115514D073AAE88ADDA76678163,
                                          (MethodInfo *)0x0);
                      if (bVar17) {
                        if ((param_1->___master_4 !=
                             (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                           (pPVar22 = param_1->___master_4->___paletteMenu_9,
                           pPVar22 != (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0))
                        {
                          PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                                    (pPVar22,8,(MethodInfo *)0x0);
                          return;
                        }
                      }
                      else {
                        bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                                           (pPVar2,
                                            _stringLiteral613F48ED6182E4798F6A4F55704639C0E85460DE,
                                            (MethodInfo *)0x0);
                        if (bVar17) {
                          if ((param_1->___master_4 !=
                               (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                             (pPVar22 = param_1->___master_4->___paletteMenu_9,
                             pPVar22 != (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0
                             )) {
                            PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                                      (pPVar22,9,(MethodInfo *)0x0);
                            return;
                          }
                        }
                        else {
                          bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                                             (pPVar2,
                                              _stringLiteral2B688FEC1C5963DF868D1C220FC430D26F09D446
                                              ,(MethodInfo *)0x0);
                          if (bVar17) {
                            if ((param_1->___master_4 !=
                                 (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                               (pPVar22 = param_1->___master_4->___paletteMenu_9,
                               pPVar22 !=
                               (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)) {
                              PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                                        (pPVar22,10,(MethodInfo *)0x0);
                              return;
                            }
                          }
                          else {
                            bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                                               (pPVar2,
                                                _stringLiteral0057E5B09A0B1D6C5BFF7C8E2659AD1EDCA0CAE2
                                                ,(MethodInfo *)0x0);
                            if (bVar17) {
                              if ((param_1->___master_4 !=
                                   (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                                 (pPVar22 = param_1->___master_4->___paletteMenu_9,
                                 pPVar22 !=
                                 (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)) {
                                PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                                          (pPVar22,0xb,(MethodInfo *)0x0);
                                return;
                              }
                            }
                            else {
                              bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                                                 (pPVar2,
                                                  _stringLiteral54E7FE0A6CCD37786532EEC6E7C887B815DE7603
                                                  ,(MethodInfo *)0x0);
                              if (bVar17) {
                                if ((param_1->___master_4 !=
                                     (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                                   (pPVar22 = param_1->___master_4->___paletteMenu_9,
                                   pPVar22 !=
                                   (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)) {
                                  PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                                            (pPVar22,0xc,(MethodInfo *)0x0);
                                  return;
                                }
                              }
                              else {
                                bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                                                   (pPVar2,
                                                  _stringLiteral7658FB35C79C6DD973249030E049D8750AC5D3A7
                                                  ,(MethodInfo *)0x0);
                                if (!bVar17) {
                                  bVar17 = Player_GetButtonDown_m4B8130F1476D81CB142F9E302182DD196C4F5E96
                                                     (pPVar2,
                                                  _stringLiteral79D9DEA6810B56C9550EDA58CE1A145D53478507
                                                  ,(MethodInfo *)0x0);
                                  if (bVar17) {
                                    if ((param_1->___master_4 ==
                                         (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
                                       || (pPVar22 = param_1->___master_4->___paletteMenu_9,
                                          pPVar22 ==
                                          (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)
                                          0x0)) goto LAB_10871823;
                                    PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                                              (pPVar22,0xe,(MethodInfo *)0x0);
                                  }
                                  return;
                                }
                                if ((param_1->___master_4 !=
                                     (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
                                   (pPVar22 = param_1->___master_4->___paletteMenu_9,
                                   pPVar22 !=
                                   (PaletteMenu_tF5DC99C89B93E9D402B3CFF9C429F936BDDE3D4F *)0x0)) {
                                  PaletteMenu_SelectPicker_m40511EC73AD6D05F77090EA4C3F05D4D852B4234
                                            (pPVar22,0xd,(MethodInfo *)0x0);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_10871823:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}


```

## MasterClicker_AddClick (RVA 0x3d36a0)

- Address: `103d36a0`
- Function: `MasterClicker_AddClick_m1D3961B08F73F3D7485F435A010A1D6E2FC5A588`
- Body: `[[103d36a0, 103d3966]]`
- Called functions:
  - `il2cpp_codegen_initialize_runtime_metadata` at `1018e950`
  - `Graph_AddVoxel_m8DC64182D8C8E2121CF9A32EAAC802220D0632E5` at `10e6ae80`
  - `HoverData_GetDstPos_m954AC74C1765D7F7B0059250AF2FD3A5931CF2DE` at `10411350`
  - `WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54` at `103f8b10`
  - `Graph_IsCoordinateAllowed_mA7A88E2C6C1123906D52DBE1DD360FC64E8663E5` at `10e6f930`
  - `il2cpp_codegen_raise_null_reference_exception` at `1018eae0`
  - `il2cpp_runtime_class_init` at `101280f0`
  - `UiMaster_get_clickEffect_m7AADAA32653D9FB04C5C08337A01F509D2C7C04A` at `103e7640`
  - `WorldMaster_StartCounting_m1C8980E4643971850821AE4A0797965E2C9848D9` at `103f8b50`
  - `Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499` at `10a4aa60`
  - `ClickEffect_Click_mD0044657A569753AE52D3D70EE09E7FC7162AEA0` at `10233000`
  - `UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC` at `103e7660`
  - `Maker_BeginNewAction_m310ABB525D243F6B8F34DD4BA38B6AED68121FA6` at `103d1b50`
  - `Vert_get_full_mF672FC1B2C851470B6A7E77668A03F98FE2B89F3` at `103efd90`
  - `GridGenerator_GetVertOrIterate_mF2570AA2C7B01FB5837594B3A834CB0838D99B06` at `10e125c0`
  - `Maker_AddAction_m630C6F9FFCC6D52A0F1D02442BA3BF0A476AD6B5` at `103d1920`
  - `UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58` at `103e7680`

```c

Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 * __cdecl
MasterClicker_AddClick_m1D3961B08F73F3D7485F435A010A1D6E2FC5A588
          (MasterClicker_t3CC2EEB38FD790B0557073353FD781FDE8459BED *param_1,MethodInfo *param_2)

{
  GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *pGVar1;
  Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *pGVar2;
  float fVar3;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar4;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar5;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar6;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar7;
  float fVar8;
  bool bVar9;
  schar sVar10;
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *pHVar11;
  Maker_t537981F2ED20294ACF4C94693B3268049739203D *pMVar12;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *pVVar13;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar14;
  ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *pCVar15;
  int iVar16;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *pVVar17;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *pVVar18;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C local_384;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C local_1d4;
  undefined1 local_24 [16];
  HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *local_14;
  Maker_t537981F2ED20294ACF4C94693B3268049739203D *local_10;
  Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *local_c;
  schar local_5;

  if (DAT_1151c85f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
    DAT_1151c85f = '\x01';
  }
  if (param_1->___master_7 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
  goto LAB_103d3962;
  pHVar11 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                      (param_1->___master_7,(MethodInfo *)0x0);
  if (pHVar11 == (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0) goto LAB_103d3962;
  if ((pHVar11->___validAdd_20 == false) || (param_1->___dragging_12 != false)) {
    return (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0;
  }
  if (param_1->___master_7 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
  goto LAB_103d3962;
  pMVar12 = UiMaster_get_maker_mA567D1B87101A1318D89E3956439C85A98433C58
                      (param_1->___master_7,(MethodInfo *)0x0);
  local_10 = pMVar12;
  if (param_1->___master_7 == (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0)
  goto LAB_103d3962;
  pHVar11 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                      (param_1->___master_7,(MethodInfo *)0x0);
  local_14 = pHVar11;
  if (pMVar12 == (Maker_t537981F2ED20294ACF4C94693B3268049739203D *)0x0) goto LAB_103d3962;
  local_5 = param_1->___currentVoxelType_8;
  if (pMVar12->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
  goto LAB_103d3962;
  WorldMaster_StartCounting_m1C8980E4643971850821AE4A0797965E2C9848D9
            (pMVar12->___master_4,(MethodInfo *)0x0);
  if (pHVar11 == (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *)0x0) goto LAB_103d3962;
  local_c = (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)pHVar11->___dstHeight_11;
  pVVar13 = &pHVar11->___dstVert_8;
  pVVar18 = &local_1d4;
  for (iVar16 = 0x6c; iVar16 != 0; iVar16 = iVar16 + -1) {
    (pVVar18->___hexPos_0).___x_0 = (pVVar13->___hexPos_0).___x_0;
    pVVar13 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar13->___hexPos_0).___y_1;
    pVVar18 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar18->___hexPos_0).___y_1;
  }
  bVar9 = Vert_get_full_mF672FC1B2C851470B6A7E77668A03F98FE2B89F3(&local_1d4,(MethodInfo *)0x0);
  if (!bVar9) {
    if ((local_10->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
       (pGVar1 = local_10->___master_4->___grid_5,
       pGVar1 == (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *)0x0)) goto LAB_103d3962;
    iVar6.___y_1 = local_1d4.___hexPos_0.___y_1;
    iVar6.___x_0 = local_1d4.___hexPos_0.___x_0;
    pVVar13 = GridGenerator_GetVertOrIterate_mF2570AA2C7B01FB5837594B3A834CB0838D99B06
                        (&local_384,pGVar1,iVar6,
                         (Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F *)0x0,(MethodInfo *)0x0);
    pVVar18 = &local_1d4;
    for (iVar16 = 0x6c; iVar16 != 0; iVar16 = iVar16 + -1) {
      (pVVar18->___hexPos_0).___x_0 = (pVVar13->___hexPos_0).___x_0;
      pVVar13 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar13->___hexPos_0).___y_1;
      pVVar18 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar18->___hexPos_0).___y_1;
    }
  }
  bVar9 = Vert_get_full_mF672FC1B2C851470B6A7E77668A03F98FE2B89F3(&local_1d4,(MethodInfo *)0x0);
  pMVar12 = local_10;
  if (bVar9) {
    if ((local_10->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
       (pGVar2 = local_10->___master_4->___graph_7,
       pGVar2 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) goto LAB_103d3962;
    iVar7.___y_1 = local_1d4.___hexPos_0.___y_1;
    iVar7.___x_0 = local_1d4.___hexPos_0.___x_0;
    bVar9 = Graph_IsCoordinateAllowed_mA7A88E2C6C1123906D52DBE1DD360FC64E8663E5
                      (pGVar2,iVar7,(int)local_c,(MethodInfo *)0x0);
    if (!bVar9) goto LAB_103d38e2;
    Maker_BeginNewAction_m310ABB525D243F6B8F34DD4BA38B6AED68121FA6(pMVar12,(MethodInfo *)0x0);
    pVVar17 = local_c;
    sVar10 = local_5;
    if (local_c == (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0) {
      sVar10 = '\x0f';
    }
    local_c = (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)CONCAT31(local_c._1_3_,sVar10);
    if ((pMVar12->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) ||
       (pGVar2 = pMVar12->___master_4->___graph_7,
       pGVar2 == (Graph_tDC5AE41BC05693C04A5CDBD0B676687CB5E880F1 *)0x0)) goto LAB_103d3962;
    iVar5.___y_1 = local_1d4.___hexPos_0.___y_1;
    iVar5.___x_0 = local_1d4.___hexPos_0.___x_0;
    local_c = Graph_AddVoxel_m8DC64182D8C8E2121CF9A32EAAC802220D0632E5
                        (pGVar2,iVar5,(uchar)pVVar17,sVar10,true,(MethodInfo *)0x0);
    pMVar12->___lastAddedVoxel_12 = local_c;
    pVVar14 = HoverData_GetDstPos_m954AC74C1765D7F7B0059250AF2FD3A5931CF2DE
                        ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(local_24 + 4),
                         local_14,(MethodInfo *)0x0);
    fVar8 = pVVar14->___y_3;
    fVar3 = pVVar14->___z_4;
    (pMVar12->___lastActionPos_13).___x_2 = pVVar14->___x_2;
    (pMVar12->___lastActionPos_13).___y_3 = fVar8;
    (pMVar12->___lastActionPos_13).___z_4 = fVar3;
    iVar4.___y_1 = local_1d4.___hexPos_0.___y_1;
    iVar4.___x_0 = local_1d4.___hexPos_0.___x_0;
    Maker_AddAction_m630C6F9FFCC6D52A0F1D02442BA3BF0A476AD6B5
              ((Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *)local_24,pMVar12,iVar4,
               (uchar)pVVar17,'\x12',sVar10,(MethodInfo *)0x0);
    if (pMVar12->___master_4 == (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)
    goto LAB_103d3962;
    WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54
              (pMVar12->___master_4,(MethodInfo *)0x0);
    pVVar17 = local_c;
  }
  else {
LAB_103d38e2:
    pVVar17 = (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0;
  }
  if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor != '\0') &&
     (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished == 0)) {
    il2cpp_runtime_class_init(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
  }
  bVar9 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                    ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)pVVar17,(MethodInfo *)0x0);
  if (!bVar9) {
    return (Voxel_t81074B08247C522E75A8D6DF5B87CBAABA1B43F3 *)0x0;
  }
  if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
    pCVar15 = UiMaster_get_clickEffect_m7AADAA32653D9FB04C5C08337A01F509D2C7C04A
                        (param_1->___master_7,(MethodInfo *)0x0);
    if (param_1->___master_7 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
      pHVar11 = UiMaster_get_hoverData_mEA27829A32F095E68FBBE542DC09AD54CFE86BFC
                          (param_1->___master_7,(MethodInfo *)0x0);
      if (pCVar15 != (ClickEffect_tBCD86683B07033E006B57D3C879935BD4A547F85 *)0x0) {
        ClickEffect_Click_mD0044657A569753AE52D3D70EE09E7FC7162AEA0
                  (pCVar15,pHVar11,true,pVVar17,(MethodInfo *)0x0);
        return pVVar17;
      }
    }
  }
LAB_103d3962:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}


```

## WorldMaster_Load_SaveData (RVA 0x3f83d0)

- Address: `103f83d0`
- Function: `WorldMaster_Load_m183DF3726AB27223C577BD74FC1F7BC66FA9919E`
- Body: `[[103f83d0, 103f8413]]`
- Called functions:
  - `SaveData_ReadNonImageDataFrom_m555D61BB42582A4E6702001232BD3FFA23E42D00` at `109fdd50`
  - `il2cpp_codegen_raise_null_reference_exception` at `1018eae0`

```c

void __cdecl
WorldMaster_Load_m183DF3726AB27223C577BD74FC1F7BC66FA9919E
          (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_1,
          SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *param_2,MethodInfo *param_3)

{
  SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *pSVar1;

  pSVar1 = param_1->___saveData_42;
  if (pSVar1 != param_2) {
    if (pSVar1 == (SaveData_t108FDD1E782E68BC3B924BE75B58816350034188 *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    SaveData_ReadNonImageDataFrom_m555D61BB42582A4E6702001232BD3FFA23E42D00
              (pSVar1,param_2,(MethodInfo *)0x0);
  }
  param_1->___state_57 = '\x01';
  param_1->___anyChange_59 = false;
  param_1->___lastChangeTime_60 = -1.0;
  return;
}


```
