// RVA 0x759d00 | Placemaker.PropPlacer$$AddSmoothTangentsToMesh
// PDB: PropPlacer_AddSmoothTangentsToMesh_mA0EA9AA5D7990FD171F008338DEEE66CE2DFF35D
// Body: [[10759d00, 1075a00e] [1075a018, 1075a03e] [1075a04b, 1075a06b] [1075a072, 1075a097] [1075a0a1, 1075a0d1] [1075a0de, 1075a10b] [1075a115, 1075a7fe] [1075a802, 1075a886] [1075a88d, 1075a9c3] [1075a9ca, 1075a9f7] [1075a9fb, 1075aa26] [1075aa2a, 1075aa7c] [1075aa80, 1075aba2]]
// Direct callees:
// 10068d20 Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
// 10068e90 List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1021c740 Dictionary_2_Add_mC7CA898B55B5DD408021AC5F79BB3CFE242FAF0C_gshared
// 10224a40 Dictionary_2_TryGetValue_m47EBC230535FB0C18A841ACED71E994C678CBCB8_gshared
// 103e2fe0 Vector4_op_Addition_m3456C2E0202FF7A30CA7211D40FA80A6FA28B1D0_inline
// 103e3060 Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline
// 10441630 DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
// 105cffe0 ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared
// 105d1260 List_1_AddRange_m8704F52E688E545812CCE7D22B75C986E0EF9135_gshared
// 105d1290 List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
// 105d1fe0 List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
// 105d34c0 List_1_set_Item_m403F0570AA35580309E3C4DF5E58D9172C8E589E_gshared
// 10673490 Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1
// 10673720 Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4
// 10674430 Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5
// 10674590 Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
// 10674e60 Vector4_get_normalized_m8BC0F9409DFA7EF4B3BE23774B3753F6F9045137
// 10675010 Vector4_get_zero_m9E807FEBC8B638914DF4A0BA87C0BD95A19F5200
// 10675160 Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB
// 10a46da0 Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE
// 10a46f10 Mesh_GetIndexCount_m3ADD772F77C8EDE1CC2ABD9BA58BC70F0AD18EC0
// 10a470d0 Mesh_GetNormals_m6B9DD7FDA70DF058D215915597BCBF6450D6E243
// 10a472a0 Mesh_GetTriangles_m2A219EA6034D366619F22C912BF4BB911E2D06FB
// 10a47630 Mesh_GetUVs_m96301FD499B68EE943AAD288935AD0E3012B4E22
// 10a47670 Mesh_GetVertices_mCC533BC8D4A9F14BA1A54BABB11B01750C153015
// 10a47c10 Mesh_SetNormals_m10B6C93B59F4BC8F5D959CD79494F3FCDB67B168
// 10a47fe0 Mesh_SetTangents_m728C5E61FD6656209686AE3F6734686A2F4E549E
// 10a482b0 Mesh_SetTriangles_mF74536E3A39AECF33809A7D23AFF54A1CFC37129
// 10a48560 Mesh_SetUVs_mDDD16F3EC3434233E34F18221FFD47F8AEA7BCCE
// 10a48620 Mesh_SetVertices_m08C90A1665735C09E15E17DE1A8CD9F196762BCD
// 10a488e0 Mesh_get_vertexCount_m1EF3DD16EE298B955311F53EA1CAF05007A7722F
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10cf6720 DictPool_2_Get_m2ACE07EEC74C81F7E511DFC440B39A5175BD81CE_gshared
// 1102ffd0 List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared

void __cdecl
PropPlacer_AddSmoothTangentsToMesh_mA0EA9AA5D7990FD171F008338DEEE66CE2DFF35D
          (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *param_1,
          Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *param_2,MethodInfo *param_3)

{
  float *pfVar1;
  undefined1 (*pauVar2) [12];
  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0 CVar3;
  OrientedModuleU5BU5D_t5FB3F51015D20D376230E56F126039FF90EE44C4 *pOVar4;
  Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4 *pVVar5;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar6;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar7;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar9;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar10;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar11;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar12;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar13;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar14;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 VVar15;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar16;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar17;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar18;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar19;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar20;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar21;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar22;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar23;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar24;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar25;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar26;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar27;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar28;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar29;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar30;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar31;
  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 KVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  uint uVar42;
  Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *pDVar43;
  EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *pEVar44;
  bool bVar45;
  int iVar46;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar47;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar48;
  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0 CVar49;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar50;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *pVVar51;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *pAVar52;
  MethodInfo *unaff_EDI;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_2a0;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 local_290;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_280;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_270;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 local_260;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_250;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 local_240;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_230;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_220;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_210;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_200;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1f0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1e0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1d0;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_1c0;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 local_1b0;
  float local_198;
  float local_18c;
  float local_180;
  float local_174;
  float local_168;
  float local_15c;
  float local_150;
  float local_144;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_140;
  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 local_130;
  float local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_ec;
  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0 local_e4;
  undefined8 local_e0;
  undefined8 local_d4;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_c8;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E local_9c;
  float local_90;
  int iStack_8c;
  undefined4 uStack_88;
  float fStack_84;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_80;
  undefined8 local_7c;
  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0 local_74;
  Il2CppObject *local_70;
  undefined8 local_6c;
  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0 local_64;
  undefined8 local_60;
  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0 local_58;
  float local_54;
  float local_50;
  Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *local_4c;
  EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *local_48;
  EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *local_44;
  EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *local_40;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_3c;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_38;
  EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *local_34;
  uint local_30;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_2c;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *local_28;
  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0 local_24;
  int local_20;
  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0 local_1c;
  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0 local_18;
  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0 local_14;

  if (DAT_1151ec4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       DictPoolExtension_ReturnToPool_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m5BD0D2BF815778FED87B53F0C5F407237A937297_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&DictPool_2_Get_mFD6AD6182BD97D67F06BA7EA4B89C4B075FB6502_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&DictPool_2_t740B064567E4938A0FD3731EB6B4919E3E1D6873_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&Dictionary_2_Add_m9AC91289D62D2E402ADFE8851B2AB06D455B575B_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD3F429D6B9C185725B5C44BFB5C3E7823D97F166_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m11374E7CCB77FCB77D3C672C64C47DDA6EF2BD06_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       ListPoolExtension_ReturnToPool_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m993F917E4C86BE94F4A096C9A7AB572A6CB08BDD_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_m9F28C3E654977D961EDC9DB9F0C86C84FDE997A3_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_mD475E0F293B8576520F79BAC8835B3FDA8F889A9_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_mDACBB18E39AD629118308EC0D7936A3FD5B73A91_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_mF618A81B71B5112F0E9DB441EE3515E8C32464CC_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t9800B873CCC213E97D0B76C1CAC6A461D3075524_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_AddRange_m540C40BF3FA73FB89A16CF721E7F3E84998903C9_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_AddRange_m7446E642547606757C513F52A561F3443C468EC0_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_m637DB31CF77746D0A935939E71999D8D3741EC7A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&
                       List_1_RemoveRange_mA0BE611FE983A096483C5AF63AF2AD4C180C32D1_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_m65035CF9CB2C49CFD5E7AB76FE5A7D860BDCD530_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mBC15B4BA533085E756DCF99A50854221DC56EACD_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_set_Item_m8FD13D7FBB9FF111E04333055A0048CD53D0F6C7_RuntimeMethod_var)
    ;
    DAT_1151ec4d = '\x01';
  }
  local_40 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)0x0;
  local_44 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)0x0;
  local_48 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)0x0;
  local_9c.___x_2 = 0.0;
  local_9c.___y_3 = 0.0;
  local_9c.___z_4 = 0.0;
  local_70 = (Il2CppObject *)0x0;
  local_130.___x_1 = 0.0;
  local_130.___y_2 = 0.0;
  local_130.___z_3 = 0.0;
  local_130.___w_4 = 0.0;
  if (param_2 != (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0) {
    iVar46 = Mesh_get_vertexCount_m1EF3DD16EE298B955311F53EA1CAF05007A7722F
                       (param_2,(MethodInfo *)0x0);
    local_20 = iVar46;
    local_30 = Mesh_GetIndexCount_m3ADD772F77C8EDE1CC2ABD9BA58BC70F0AD18EC0
                         (param_2,0,(MethodInfo *)0x0);
    if ((ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var->has_cctor != '\0'
        ) && (ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
      il2cpp_runtime_class_init
                (ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var);
    }
    iVar46 = iVar46 * 2;
    local_28 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
               ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared
                         (iVar46,
                          ListPool_1_Get_m9F28C3E654977D961EDC9DB9F0C86C84FDE997A3_RuntimeMethod_var
                         );
    local_38 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
               ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared
                         (iVar46,
                          ListPool_1_Get_m9F28C3E654977D961EDC9DB9F0C86C84FDE997A3_RuntimeMethod_var
                         );
    if ((ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var->has_cctor != '\0'
        ) && (ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
      il2cpp_runtime_class_init
                (ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var);
    }
    local_3c = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
               ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared
                         (iVar46,
                          ListPool_1_Get_mD475E0F293B8576520F79BAC8835B3FDA8F889A9_RuntimeMethod_var
                         );
    if ((ListPool_1_t9800B873CCC213E97D0B76C1CAC6A461D3075524_il2cpp_TypeInfo_var->has_cctor != '\0'
        ) && (ListPool_1_t9800B873CCC213E97D0B76C1CAC6A461D3075524_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
      il2cpp_runtime_class_init
                (ListPool_1_t9800B873CCC213E97D0B76C1CAC6A461D3075524_il2cpp_TypeInfo_var);
    }
    pDVar47 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
              ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared
                        (iVar46,
                         ListPool_1_Get_mF618A81B71B5112F0E9DB441EE3515E8C32464CC_RuntimeMethod_var)
    ;
    local_80 = pDVar47;
    if ((ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->has_cctor != '\0'
        ) && (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
      il2cpp_runtime_class_init
                (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var);
    }
    pDVar48 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
              ListPool_1_Get_m115ABCD645C890A36F58D2AFB9D56068DDD2CE56_gshared
                        (local_30 * 2,
                         ListPool_1_Get_mDACBB18E39AD629118308EC0D7936A3FD5B73A91_RuntimeMethod_var)
    ;
    local_2c = pDVar48;
    if ((DictPool_2_t740B064567E4938A0FD3731EB6B4919E3E1D6873_il2cpp_TypeInfo_var->has_cctor != '\0'
        ) && (DictPool_2_t740B064567E4938A0FD3731EB6B4919E3E1D6873_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
      il2cpp_runtime_class_init
                (DictPool_2_t740B064567E4938A0FD3731EB6B4919E3E1D6873_il2cpp_TypeInfo_var);
    }
    local_4c = (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)
               DictPool_2_Get_m2ACE07EEC74C81F7E511DFC440B39A5175BD81CE_gshared
                         (local_20,
                          DictPool_2_Get_mFD6AD6182BD97D67F06BA7EA4B89C4B075FB6502_RuntimeMethod_var
                         );
    Mesh_GetVertices_mCC533BC8D4A9F14BA1A54BABB11B01750C153015
              (param_2,(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)local_28,
               (MethodInfo *)0x0);
    Mesh_GetNormals_m6B9DD7FDA70DF058D215915597BCBF6450D6E243
              (param_2,(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)local_38,
               (MethodInfo *)0x0);
    Mesh_GetUVs_m96301FD499B68EE943AAD288935AD0E3012B4E22
              (param_2,0,(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)local_3c,
               (MethodInfo *)0x0);
    Mesh_GetTriangles_m2A219EA6034D366619F22C912BF4BB911E2D06FB
              (param_2,(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pDVar48,0,
               (MethodInfo *)0x0);
    CVar49.___rgba_0 = 0;
    if (0 < (int)local_30) {
      do {
        pDVar47 = local_80;
        uVar42 = CVar49.___rgba_0 + 1;
        local_18 = CVar49;
        local_14 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)uVar42;
        if (pDVar48 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
        goto LAB_1075ab9e;
        CVar3 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)pDVar48->___entries_1;
        if ((uint)CVar3 <= (uint)CVar49) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        pOVar4 = (OrientedModuleU5BU5D_t5FB3F51015D20D376230E56F126039FF90EE44C4 *)
                 pDVar48->___buckets_0;
        local_1c = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)
                   ((Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0 *)
                   (pOVar4->m_Items + CVar49.___rgba_0))->___rgba_0;
        local_18.___rgba_0 = CVar49.___rgba_0 + 2;
        if ((uint)CVar3 <= uVar42) {
          local_14 = local_18;
          local_18 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)uVar42;
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        local_24 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)
                   ((Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0 *)
                   (pOVar4->m_Items + CVar49.___rgba_0 + 1))->___rgba_0;
        local_14.___rgba_0 = CVar49.___rgba_0 + 3;
        if ((uint)CVar3 <= (uint)local_18) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        local_18 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)
                   ((Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0 *)
                   (pOVar4[1].m_Items + CVar49.___rgba_0 + -4))->___rgba_0;
        if (local_28 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
        goto LAB_1075ab9e;
        CVar49 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)local_28->___entries_1;
        if ((uint)CVar49 <= (uint)local_1c) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        pVVar5 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4 *)local_28->___buckets_0;
        local_a8._0_4_ = pVVar5->m_Items[local_1c.___rgba_0].___x_2;
        local_a8._4_4_ = pVVar5->m_Items[local_1c.___rgba_0].___y_3;
        local_64 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)
                   pVVar5->m_Items[local_1c.___rgba_0].___z_4;
        local_6c = local_a8;
        local_1c = local_64;
        if ((uint)CVar49 <= (uint)local_24) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        local_b0._0_4_ = pVVar5->m_Items[local_24.___rgba_0].___x_2;
        local_b0._4_4_ = pVVar5->m_Items[local_24.___rgba_0].___y_3;
        local_74 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)
                   pVVar5->m_Items[local_24.___rgba_0].___z_4;
        local_7c = local_b0;
        local_24 = local_74;
        if ((uint)CVar49 <= (uint)local_18) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        local_b8._0_4_ = pVVar5->m_Items[local_18.___rgba_0].___x_2;
        local_b8._4_4_ = pVVar5->m_Items[local_18.___rgba_0].___y_3;
        local_50 = (float)local_b0._4_4_ - (float)local_a8._4_4_;
        local_e4 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)
                   pVVar5->m_Items[local_18.___rgba_0].___z_4;
        local_120 = (float)(undefined4)local_b0;
        uStack_11c = 0;
        uStack_118 = 0;
        uStack_114 = 0;
        local_90 = (float)(undefined4)local_b0 - (float)(undefined4)local_a8;
        local_198 = (float)local_74 - (float)local_64;
        local_100 = (float)(undefined4)local_a8;
        uStack_fc = 0;
        uStack_f8 = 0;
        uStack_f4 = 0;
        iStack_8c = 0;
        uStack_88 = 0;
        fStack_84 = 0.0;
        local_e0._0_4_ = pVVar5->m_Items[local_18.___rgba_0].___x_2;
        local_e0._4_4_ = pVVar5->m_Items[local_18.___rgba_0].___y_3;
        local_ec._0_4_ = pVVar5->m_Items[local_18.___rgba_0].___x_2;
        local_ec._4_4_ = pVVar5->m_Items[local_18.___rgba_0].___y_3;
        local_150 = (float)local_e4 - (float)local_64;
        VVar9.___y_3 = local_50;
        VVar9.___x_2 = local_90;
        VVar9.___z_4 = local_198;
        VVar24.___y_3 = (float)local_e0._4_4_ - (float)local_a8._4_4_;
        VVar24.___x_2 = (float)(undefined4)local_e0 - (float)(undefined4)local_a8;
        VVar24.___z_4 = local_150;
        local_d4 = local_e0;
        local_60 = local_b8;
        local_58 = local_e4;
        local_54 = local_198;
        local_18 = local_e4;
        pVVar50 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4
                            (&local_1c0,VVar9,VVar24,(MethodInfo *)0x0);
        local_9c.___x_2 = pVVar50->___x_2;
        local_9c.___y_3 = pVVar50->___y_3;
        local_9c.___z_4 = pVVar50->___z_4;
        pVVar50 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5
                            (&local_1d0,&local_9c,(MethodInfo *)0x0);
        pVVar51 = Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB
                            (&local_200,*pVVar50,(MethodInfo *)0x0);
        local_110 = pVVar51->___x_1;
        fStack_10c = pVVar51->___y_2;
        fStack_108 = pVVar51->___z_3;
        fStack_104 = pVVar51->___w_4;
        local_168 = local_54;
        local_15c = (float)local_58 - (float)local_64;
        VVar10.___y_3 = local_50;
        VVar10.___x_2 = local_90;
        VVar10.___z_4 = local_54;
        VVar25.___y_3 = local_60._4_4_ - local_6c._4_4_;
        VVar25.___x_2 = (float)local_60 - local_100;
        VVar25.___z_4 = local_15c;
        local_50 = Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1
                             (VVar10,VVar25,(MethodInfo *)0x0);
        local_180 = (float)local_58 - (float)local_74;
        local_174 = (float)local_64 - (float)local_74;
        VVar11.___y_3 = local_60._4_4_ - local_7c._4_4_;
        VVar11.___x_2 = (float)local_60 - local_120;
        VVar11.___z_4 = local_180;
        VVar26.___y_3 = local_6c._4_4_ - local_7c._4_4_;
        VVar26.___x_2 = local_100 - local_120;
        VVar26.___z_4 = local_174;
        local_54 = Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1
                             (VVar11,VVar26,(MethodInfo *)0x0);
        local_144 = (float)local_64 - (float)local_58;
        local_18c = (float)local_74 - (float)local_58;
        VVar12.___y_3 = local_6c._4_4_ - local_60._4_4_;
        VVar12.___x_2 = local_100 - (float)local_60;
        VVar12.___z_4 = local_144;
        VVar27.___y_3 = local_7c._4_4_ - local_60._4_4_;
        VVar27.___x_2 = local_120 - (float)local_60;
        VVar27.___z_4 = local_18c;
        local_34 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                   Vector3_Angle_m3715AB03A36C59D8CF08F8D71E2F46454EB884C1
                             (VVar12,VVar27,(MethodInfo *)0x0);
        pDVar43 = local_4c;
        if (local_4c == (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)0x0)
        goto LAB_1075ab9e;
        iVar16.___z_2 = local_1c.___rgba_0;
        iVar16.___x_0 = (undefined4)local_a8;
        iVar16.___y_1 = local_a8._4_4_;
        bVar45 = Dictionary_2_TryGetValue_m47EBC230535FB0C18A841ACED71E994C678CBCB8_gshared
                           (local_4c,iVar16,(Il2CppObject **)&local_40,
                            Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F_RuntimeMethod_var
                           );
        if (!bVar45) {
          if (pDVar47 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
          goto LAB_1075ab9e;
          local_40 = pDVar47->___entries_1;
          iVar17.___z_2 = local_1c.___rgba_0;
          iVar17.___x_0 = (undefined4)local_a8;
          iVar17.___y_1 = local_a8._4_4_;
          Dictionary_2_Add_mC7CA898B55B5DD408021AC5F79BB3CFE242FAF0C_gshared
                    (pDVar43,iVar17,(Il2CppObject *)local_40,
                     Dictionary_2_Add_m9AC91289D62D2E402ADFE8851B2AB06D455B575B_RuntimeMethod_var);
          pVVar50 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                              (&local_1e0,(MethodInfo *)0x0);
          pVVar51 = Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB
                              (&local_210,*pVVar50,(MethodInfo *)0x0);
          uVar33 = pVVar51->___y_2;
          uVar34 = pVVar51->___z_3;
          uVar35 = pVVar51->___w_4;
          KVar28.___value_1 = (Il2CppObject *)uVar35;
          KVar28.___key_0.___dateData_44._4_4_ = uVar34;
          KVar28.___key_0.___dateData_44._0_4_ = uVar33;
          KVar28._12_4_ = List_1_Add_m637DB31CF77746D0A935939E71999D8D3741EC7A_RuntimeMethod_var;
          List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
                    ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pDVar47,KVar28,unaff_EDI);
        }
        VVar18.___z_4 = (float)local_24.___rgba_0;
        VVar18.___x_2 = (float)(undefined4)local_b0;
        VVar18.___y_3 = (float)local_b0._4_4_;
        bVar45 = Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
                           ((Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *)pDVar43,VVar18
                            ,(int *)&local_44,
                            Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F_RuntimeMethod_var
                           );
        if (!bVar45) {
          if (pDVar47 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
          goto LAB_1075ab9e;
          local_44 = pDVar47->___entries_1;
          iVar19.___z_2 = local_24.___rgba_0;
          iVar19.___x_0 = (undefined4)local_b0;
          iVar19.___y_1 = local_b0._4_4_;
          Dictionary_2_Add_mC7CA898B55B5DD408021AC5F79BB3CFE242FAF0C_gshared
                    (pDVar43,iVar19,(Il2CppObject *)local_44,
                     Dictionary_2_Add_m9AC91289D62D2E402ADFE8851B2AB06D455B575B_RuntimeMethod_var);
          pVVar50 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                              (&local_1f0,(MethodInfo *)0x0);
          pVVar51 = Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB
                              (&local_220,*pVVar50,(MethodInfo *)0x0);
          uVar36 = pVVar51->___y_2;
          uVar37 = pVVar51->___z_3;
          uVar38 = pVVar51->___w_4;
          KVar29.___value_1 = (Il2CppObject *)uVar38;
          KVar29.___key_0.___dateData_44._4_4_ = uVar37;
          KVar29.___key_0.___dateData_44._0_4_ = uVar36;
          KVar29._12_4_ = List_1_Add_m637DB31CF77746D0A935939E71999D8D3741EC7A_RuntimeMethod_var;
          List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
                    ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pDVar47,KVar29,unaff_EDI);
        }
        VVar20.___z_4 = (float)local_18.___rgba_0;
        VVar20.___x_2 = (float)(undefined4)local_b8;
        VVar20.___y_3 = (float)local_b8._4_4_;
        bVar45 = Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
                           ((Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *)pDVar43,VVar20
                            ,(int *)&local_48,
                            Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F_RuntimeMethod_var
                           );
        if (!bVar45) {
          if (pDVar47 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
          goto LAB_1075ab9e;
          local_48 = pDVar47->___entries_1;
          iVar21.___z_2 = local_18.___rgba_0;
          iVar21.___x_0 = (undefined4)local_b8;
          iVar21.___y_1 = local_b8._4_4_;
          Dictionary_2_Add_mC7CA898B55B5DD408021AC5F79BB3CFE242FAF0C_gshared
                    (pDVar43,iVar21,(Il2CppObject *)local_48,
                     Dictionary_2_Add_m9AC91289D62D2E402ADFE8851B2AB06D455B575B_RuntimeMethod_var);
          pVVar50 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6
                              (&local_c8,(MethodInfo *)0x0);
          pVVar51 = Vector4_op_Implicit_mDCFA56E9D34979E1E2BFE6C2D61F1768D934A8EB
                              (&local_230,*pVVar50,(MethodInfo *)0x0);
          uVar39 = pVVar51->___y_2;
          uVar40 = pVVar51->___z_3;
          uVar41 = pVVar51->___w_4;
          KVar30.___value_1 = (Il2CppObject *)uVar41;
          KVar30.___key_0.___dateData_44._4_4_ = uVar40;
          KVar30.___key_0.___dateData_44._0_4_ = uVar39;
          KVar30._12_4_ = List_1_Add_m637DB31CF77746D0A935939E71999D8D3741EC7A_RuntimeMethod_var;
          List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
                    ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pDVar47,KVar30,unaff_EDI);
        }
        pEVar44 = local_40;
        if (pDVar47 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
        goto LAB_1075ab9e;
        pAVar52 = List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_inline
                            (&local_240,(List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)pDVar47,
                             (int)local_40,
                             List_1_get_Item_mBC15B4BA533085E756DCF99A50854221DC56EACD_RuntimeMethod_var
                            );
        local_90 = (float)(pAVar52->___hexPos_0).___x_0;
        iStack_8c = (pAVar52->___hexPos_0).___y_1;
        uStack_88._0_1_ = pAVar52->___height_1;
        uStack_88._1_1_ = pAVar52->___inType_2;
        uStack_88._2_1_ = pAVar52->___outType_3;
        uStack_88._3_1_ = pAVar52->field_0xb;
        fStack_84 = (float)pAVar52->___actionId_4;
        VVar13.___y_2 = fStack_10c;
        VVar13.___x_1 = local_110;
        VVar13.___z_3 = fStack_108;
        VVar13.___w_4 = fStack_104;
        pVVar51 = Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline
                            (&local_2a0,VVar13,local_50,(MethodInfo *)0x0);
        VVar6.___y_2 = (float)iStack_8c;
        VVar6.___x_1 = local_90;
        VVar6.___z_3 = (float)uStack_88;
        VVar6.___w_4 = fStack_84;
        pVVar51 = Vector4_op_Addition_m3456C2E0202FF7A30CA7211D40FA80A6FA28B1D0_inline
                            (&local_250,VVar6,*pVVar51,(MethodInfo *)0x0);
        List_1_set_Item_m403F0570AA35580309E3C4DF5E58D9172C8E589E_gshared
                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pDVar47,(int)pEVar44,
                   (KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57)*pVVar51,
                   List_1_set_Item_m8FD13D7FBB9FF111E04333055A0048CD53D0F6C7_RuntimeMethod_var);
        pEVar44 = local_44;
        pAVar52 = List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_inline
                            (&local_260,(List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)pDVar47,
                             (int)local_44,
                             List_1_get_Item_mBC15B4BA533085E756DCF99A50854221DC56EACD_RuntimeMethod_var
                            );
        local_90 = (float)(pAVar52->___hexPos_0).___x_0;
        iStack_8c = (pAVar52->___hexPos_0).___y_1;
        uStack_88._0_1_ = pAVar52->___height_1;
        uStack_88._1_1_ = pAVar52->___inType_2;
        uStack_88._2_1_ = pAVar52->___outType_3;
        uStack_88._3_1_ = pAVar52->field_0xb;
        fStack_84 = (float)pAVar52->___actionId_4;
        VVar14.___y_2 = fStack_10c;
        VVar14.___x_1 = local_110;
        VVar14.___z_3 = fStack_108;
        VVar14.___w_4 = fStack_104;
        pVVar51 = Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline
                            (&local_270,VVar14,local_54,(MethodInfo *)0x0);
        VVar7.___y_2 = (float)iStack_8c;
        VVar7.___x_1 = local_90;
        VVar7.___z_3 = (float)uStack_88;
        VVar7.___w_4 = fStack_84;
        pVVar51 = Vector4_op_Addition_m3456C2E0202FF7A30CA7211D40FA80A6FA28B1D0_inline
                            (&local_280,VVar7,*pVVar51,(MethodInfo *)0x0);
        List_1_set_Item_m403F0570AA35580309E3C4DF5E58D9172C8E589E_gshared
                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pDVar47,(int)pEVar44,
                   (KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57)*pVVar51,
                   List_1_set_Item_m8FD13D7FBB9FF111E04333055A0048CD53D0F6C7_RuntimeMethod_var);
        pEVar44 = local_48;
        pAVar52 = List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_inline
                            (&local_290,(List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)pDVar47,
                             (int)local_48,
                             List_1_get_Item_mBC15B4BA533085E756DCF99A50854221DC56EACD_RuntimeMethod_var
                            );
        local_90 = (float)(pAVar52->___hexPos_0).___x_0;
        iStack_8c = (pAVar52->___hexPos_0).___y_1;
        uStack_88._0_1_ = pAVar52->___height_1;
        uStack_88._1_1_ = pAVar52->___inType_2;
        uStack_88._2_1_ = pAVar52->___outType_3;
        uStack_88._3_1_ = pAVar52->field_0xb;
        fStack_84 = (float)pAVar52->___actionId_4;
        VVar15.___y_2 = fStack_10c;
        VVar15.___x_1 = local_110;
        VVar15.___z_3 = fStack_108;
        VVar15.___w_4 = fStack_104;
        pVVar51 = Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111_inline
                            ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)&local_1b0,VVar15,
                             (float)local_34,(MethodInfo *)0x0);
        VVar8.___y_2 = (float)iStack_8c;
        VVar8.___x_1 = local_90;
        VVar8.___z_3 = (float)uStack_88;
        VVar8.___w_4 = fStack_84;
        pVVar51 = Vector4_op_Addition_m3456C2E0202FF7A30CA7211D40FA80A6FA28B1D0_inline
                            (&local_140,VVar8,*pVVar51,(MethodInfo *)0x0);
        List_1_set_Item_m403F0570AA35580309E3C4DF5E58D9172C8E589E_gshared
                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pDVar47,(int)pEVar44,
                   (KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57)*pVVar51,
                   List_1_set_Item_m8FD13D7FBB9FF111E04333055A0048CD53D0F6C7_RuntimeMethod_var);
        CVar49 = local_14;
        pDVar48 = local_2c;
      } while (local_14.___rgba_0 < (int)local_30);
    }
    if (pDVar47 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) {
      local_24 = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)pDVar47->___entries_1;
      local_14.___rgba_0 = 0;
      if (0 < local_24.___rgba_0) {
        iVar46 = 0;
        do {
          if (pDVar47->___entries_1 <= (uint)local_14) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          pfVar1 = (float *)((int)pDVar47->___buckets_0->m_Items + iVar46);
          local_130.___x_1 = *pfVar1;
          local_130.___y_2 = pfVar1[1];
          local_130.___z_3 = pfVar1[2];
          local_130.___w_4 = pfVar1[3];
          pVVar51 = Vector4_get_normalized_m8BC0F9409DFA7EF4B3BE23774B3753F6F9045137
                              (&local_140,&local_130,(MethodInfo *)0x0);
          List_1_set_Item_m403F0570AA35580309E3C4DF5E58D9172C8E589E_gshared
                    ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pDVar47,local_14.___rgba_0,
                     (KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57)*pVVar51,
                     List_1_set_Item_m8FD13D7FBB9FF111E04333055A0048CD53D0F6C7_RuntimeMethod_var);
          local_14.___rgba_0 = local_14.___rgba_0 + 1;
          iVar46 = iVar46 + 0x10;
          pDVar48 = local_2c;
        } while (local_14.___rgba_0 < local_24.___rgba_0);
      }
      local_18.___rgba_0 = 0;
      if (0 < local_20) {
        local_14.___rgba_0 = 0;
        do {
          if (local_28 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
          goto LAB_1075ab9e;
          if (local_28->___entries_1 <= (uint)local_18) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          local_34 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)local_28->___buckets_0
          ;
          if (local_4c == (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)0x0)
          goto LAB_1075ab9e;
          iVar22.___z_2 = *(int *)((int)&local_34->m_Items[0].___key_2 + local_14.___rgba_0);
          iVar22._0_8_ = *(undefined8 *)
                          ((int)&local_34->m_Items[0].___hashCode_0 + local_14.___rgba_0);
          bVar45 = Dictionary_2_TryGetValue_m47EBC230535FB0C18A841ACED71E994C678CBCB8_gshared
                             (local_4c,iVar22,&local_70,
                              Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F_RuntimeMethod_var
                             );
          if (bVar45) {
            pAVar52 = List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_inline
                                (&local_1b0,
                                 (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)pDVar47,
                                 (int)local_70,
                                 List_1_get_Item_mBC15B4BA533085E756DCF99A50854221DC56EACD_RuntimeMethod_var
                                );
          }
          else {
            pAVar52 = (Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *)
                      Vector4_get_zero_m9E807FEBC8B638914DF4A0BA87C0BD95A19F5200
                                (&local_140,(MethodInfo *)0x0);
          }
          KVar31._12_4_ = List_1_Add_m637DB31CF77746D0A935939E71999D8D3741EC7A_RuntimeMethod_var;
          KVar31._0_12_ = *(undefined1 (*) [12])&(pAVar52->___hexPos_0).___y_1;
          List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
                    ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pDVar47,KVar31,unaff_EDI);
          local_14.___rgba_0 = local_14.___rgba_0 + 0xc;
          local_18.___rgba_0 = local_18.___rgba_0 + 1;
          pDVar48 = local_2c;
        } while (local_18.___rgba_0 < local_20);
      }
      List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
                ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pDVar47,0,local_24.___rgba_0,
                 List_1_RemoveRange_mA0BE611FE983A096483C5AF63AF2AD4C180C32D1_RuntimeMethod_var);
      if (((local_28 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0) &&
          (List_1_AddRange_m8704F52E688E545812CCE7D22B75C986E0EF9135_gshared
                     ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)local_28,
                      (Il2CppObject *)local_28,
                      List_1_AddRange_m7446E642547606757C513F52A561F3443C468EC0_RuntimeMethod_var),
          local_38 != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)) &&
         (List_1_AddRange_m8704F52E688E545812CCE7D22B75C986E0EF9135_gshared
                    ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)local_38,
                     (Il2CppObject *)local_38,
                     List_1_AddRange_m7446E642547606757C513F52A561F3443C468EC0_RuntimeMethod_var),
         local_3c != (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)) {
        List_1_AddRange_m8704F52E688E545812CCE7D22B75C986E0EF9135_gshared
                  ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)local_3c,
                   (Il2CppObject *)local_3c,
                   List_1_AddRange_m540C40BF3FA73FB89A16CF721E7F3E84998903C9_RuntimeMethod_var);
        local_1c.___rgba_0 = 0;
        if (0 < (int)local_30) {
          local_14.___rgba_0 = 0x14;
          do {
            if (pDVar48 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
            goto LAB_1075ab9e;
            if (pDVar48->___entries_1 <= (uint)local_1c) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                      ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar48,
                       (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                       (*(int *)((int)(((OrientedModuleU5BU5D_t5FB3F51015D20D376230E56F126039FF90EE44C4
                                         *)pDVar48->___buckets_0)->m_Items + -5) +
                                local_14.___rgba_0) + local_20),
                       List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
            local_34 = (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)
                       (local_1c.___rgba_0 + 1);
            if (pDVar48->___entries_1 <= local_1c.___rgba_0 + 2U) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                      ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar48,
                       (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                       (*(int *)((int)(((OrientedModuleU5BU5D_t5FB3F51015D20D376230E56F126039FF90EE44C4
                                         *)pDVar48->___buckets_0)->m_Items + 1) +
                                local_14.___rgba_0 + -0x10) + local_20),
                       List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
            if (pDVar48->___entries_1 <= local_34) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                      ((List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)pDVar48,
                       (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                       (*(int *)((int)&((OrientedModuleU5BU5D_t5FB3F51015D20D376230E56F126039FF90EE44C4
                                         *)(((OrientedModuleU5BU5D_t5FB3F51015D20D376230E56F126039FF90EE44C4
                                              *)pDVar48->___buckets_0)->m_Items + -4))->_padding_ +
                                local_14.___rgba_0) + local_20),
                       List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
            local_1c.___rgba_0 = local_1c.___rgba_0 + 3;
            local_14.___rgba_0 = local_14.___rgba_0 + 0xc;
          } while (local_1c.___rgba_0 < (int)local_30);
        }
        local_1c = (Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D_u_0)0x0;
        if (0 < local_20) {
          iVar46 = 0;
          do {
            if (pDVar47->___entries_1 <= (uint)local_1c) {
                    /* WARNING: Subroutine does not return */
              ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                        ((MethodInfo *)0x0);
            }
            pauVar2 = (undefined1 (*) [12])((int)pDVar47->___buckets_0->m_Items + iVar46);
            local_c8.___x_2 = *(float *)*pauVar2;
            local_c8.___y_3 = *(float *)(*pauVar2 + 4);
            local_c8.___z_4 = *(float *)(*pauVar2 + 8);
            uStack_bc = 0x3f800000;
            KVar23._12_4_ = 0x3f800000;
            KVar23._0_12_ = *pauVar2;
            List_1_set_Item_m403F0570AA35580309E3C4DF5E58D9172C8E589E_gshared
                      ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pDVar47,(int)local_1c,
                       KVar23,
                       List_1_set_Item_m8FD13D7FBB9FF111E04333055A0048CD53D0F6C7_RuntimeMethod_var);
            uStack_bc = 0;
            KVar32.___key_0.___dateData_44._4_4_ = local_c8.___z_4;
            KVar32.___key_0.___dateData_44._0_4_ = local_c8.___y_3;
            KVar32.___value_1 = (Il2CppObject *)0x0;
            KVar32._12_4_ = List_1_Add_m637DB31CF77746D0A935939E71999D8D3741EC7A_RuntimeMethod_var;
            List_1_Add_m510FF466C1BB8A0CA4CBA691BCEF00C3230C2336_gshared
                      ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pDVar47,KVar32,unaff_EDI)
            ;
            local_1c.___rgba_0 = (int)(int *)local_1c + 1;
            iVar46 = iVar46 + 0x10;
            pDVar48 = local_2c;
          } while (local_1c.___rgba_0 < local_20);
        }
        Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE(param_2,(MethodInfo *)0x0);
        Mesh_SetVertices_m08C90A1665735C09E15E17DE1A8CD9F196762BCD
                  (param_2,(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)local_28,
                   (MethodInfo *)0x0);
        Mesh_SetNormals_m10B6C93B59F4BC8F5D959CD79494F3FCDB67B168
                  (param_2,(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)local_38,
                   (MethodInfo *)0x0);
        Mesh_SetUVs_mDDD16F3EC3434233E34F18221FFD47F8AEA7BCCE
                  (param_2,0,(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)local_3c,
                   (MethodInfo *)0x0);
        Mesh_SetTangents_m728C5E61FD6656209686AE3F6734686A2F4E549E
                  (param_2,(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)pDVar47,
                   (MethodInfo *)0x0);
        Mesh_SetTriangles_mF74536E3A39AECF33809A7D23AFF54A1CFC37129
                  (param_2,(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pDVar48,0,
                   (MethodInfo *)0x0);
        DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                  (local_28,
                   ListPoolExtension_ReturnToPool_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m11374E7CCB77FCB77D3C672C64C47DDA6EF2BD06_RuntimeMethod_var
                  );
        DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                  (local_38,
                   ListPoolExtension_ReturnToPool_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m11374E7CCB77FCB77D3C672C64C47DDA6EF2BD06_RuntimeMethod_var
                  );
        DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                  (local_3c,
                   ListPoolExtension_ReturnToPool_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mD3F429D6B9C185725B5C44BFB5C3E7823D97F166_RuntimeMethod_var
                  );
        DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                  (pDVar47,
                   ListPoolExtension_ReturnToPool_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m993F917E4C86BE94F4A096C9A7AB572A6CB08BDD_RuntimeMethod_var
                  );
        DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                  (pDVar48,
                   ListPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4FAE16C446DE4B6D743099F3150D9D87901166AE_RuntimeMethod_var
                  );
        DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                  ((Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)local_4c,
                   DictPoolExtension_ReturnToPool_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m5BD0D2BF815778FED87B53F0C5F407237A937297_RuntimeMethod_var
                  );
        return;
      }
    }
  }
LAB_1075ab9e:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
