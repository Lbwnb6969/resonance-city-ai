// RVA 0x2fb9e0 | Placemaker.Graphs.Square$$SetRelation
// PDB: Square_SetRelation_m102CB342DDE7254B6A59CFA5D31BD7C3B855EB5F
// Body: [[102fb9e0, 102fbae8]]
// Direct callees:
// 1018e960 il2cpp_codegen_initialize_runtime_metadata_inline
// 1018ea90 il2cpp_codegen_object_new
// 1018eab0 il2cpp_codegen_raise_exception
// 101d95c0 Relation__ctor_mC55495B76B66E4A318A8CC1244EF7BA745FD13C1
// 10904b90 IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523

void __cdecl
Square_SetRelation_m102CB342DDE7254B6A59CFA5D31BD7C3B855EB5F
          (Square_tD1B7B6748B35059E198069769341DA3192352B8F *param_1,schar param_2,schar param_3,
          Square_tD1B7B6748B35059E198069769341DA3192352B8F *param_4,MethodInfo *param_5)

{
  Il2CppClass *pIVar1;
  Exception_t *pEVar2;
  MethodInfo *pMVar3;
  Relation_tBDEA21F6612D1B192B48D774F81E570F3F915DD3 local_c;

  switch(param_2) {
  case '\0':
    local_c.___qube_0 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0;
    local_c.___indexInOther_1 = '\0';
    local_c._5_3_ = 0;
    Relation__ctor_mC55495B76B66E4A318A8CC1244EF7BA745FD13C1
              (&local_c,(Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)param_4,param_3,
               (MethodInfo *)0x0);
    (param_1->___q0_4).___square_0 =
         (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)local_c.___qube_0;
    (param_1->___q0_4).___indexInOther_1 = local_c.___indexInOther_1;
    *(undefined3 *)&(param_1->___q0_4).field_0x5 = local_c._5_3_;
    return;
  case '\x01':
    local_c.___qube_0 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0;
    local_c.___indexInOther_1 = '\0';
    local_c._5_3_ = 0;
    Relation__ctor_mC55495B76B66E4A318A8CC1244EF7BA745FD13C1
              (&local_c,(Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)param_4,param_3,
               (MethodInfo *)0x0);
    (param_1->___q1_5).___square_0 =
         (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)local_c.___qube_0;
    (param_1->___q1_5).___indexInOther_1 = local_c.___indexInOther_1;
    *(undefined3 *)&(param_1->___q1_5).field_0x5 = local_c._5_3_;
    return;
  case '\x02':
    local_c.___qube_0 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0;
    local_c.___indexInOther_1 = '\0';
    local_c._5_3_ = 0;
    Relation__ctor_mC55495B76B66E4A318A8CC1244EF7BA745FD13C1
              (&local_c,(Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)param_4,param_3,
               (MethodInfo *)0x0);
    (param_1->___q2_6).___square_0 =
         (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)local_c.___qube_0;
    (param_1->___q2_6).___indexInOther_1 = local_c.___indexInOther_1;
    *(undefined3 *)&(param_1->___q2_6).field_0x5 = local_c._5_3_;
    return;
  case '\x03':
    local_c.___qube_0 = (Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)0x0;
    local_c.___indexInOther_1 = '\0';
    local_c._5_3_ = 0;
    Relation__ctor_mC55495B76B66E4A318A8CC1244EF7BA745FD13C1
              (&local_c,(Qube_t8C31154E8A7991EF0943BFF4DB5E3BA7B39F8DE7 *)param_4,param_3,
               (MethodInfo *)0x0);
    (param_1->___q3_7).___square_0 =
         (Square_tD1B7B6748B35059E198069769341DA3192352B8F *)local_c.___qube_0;
    (param_1->___q3_7).___indexInOther_1 = local_c.___indexInOther_1;
    *(undefined3 *)&(param_1->___q3_7).field_0x5 = local_c._5_3_;
    return;
  default:
    pIVar1 = il2cpp_codegen_initialize_runtime_metadata_inline
                       ((uint *)&
                                IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var
                       );
    pEVar2 = (Exception_t *)il2cpp_codegen_object_new(pIVar1);
    IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523
              ((IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)pEVar2,
               (MethodInfo *)0x0);
    pMVar3 = il2cpp_codegen_initialize_runtime_metadata_inline
                       ((uint *)&
                                Square_SetRelation_m102CB342DDE7254B6A59CFA5D31BD7C3B855EB5F_RuntimeMethod_var
                       );
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar2,pMVar3);
  }
}
