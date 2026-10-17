// RVA 0x876ae0 | Placemaker.BigMeshList$$Get
// PDB: BigMeshList_Get_mB56201B36D8A4B03909471604B8EBBAD81FF023B
// Body: [[10876ae0, 10876c20]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 105d0600 ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared

BigMeshList_t3F987CA1D1189C06B52252DF8E11DDDEFC5F7336 * __cdecl
BigMeshList_Get_mB56201B36D8A4B03909471604B8EBBAD81FF023B
          (BigMeshList_t3F987CA1D1189C06B52252DF8E11DDDEFC5F7336 *__return_storage_ptr__,
          MethodInfo *param_1)

{
  undefined1 uVar1;
  MethodInfo *pMVar2;
  Il2CppClass *pIVar3;
  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *pLVar4;
  List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *pLVar5;
  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *pLVar6;
  List_1_tB0F39AA9932C0CBAB5ABE300843C20A72BBB544E *pLVar7;

  if (DAT_1151f5b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_m241128D5276523F0F1C96D3E65AE9BEA91AB9F8A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_m8CA671D4142D0597A69B71DE8F838D74E2DD76AE_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_mC058C3EA28BE749501B71D6C9F86C90181EBC5C6_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_Get_mC6674CD7B21804B7CBB40528A57AF96BDE2CF73A_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&ListPool_1_t9800B873CCC213E97D0B76C1CAC6A461D3075524_il2cpp_TypeInfo_var);
    DAT_1151f5b1 = '\x01';
  }
  pIVar3 = ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var;
  __return_storage_ptr__->___verts_0 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0;
  __return_storage_ptr__->___normals_1 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)0x0;
  __return_storage_ptr__->___tangents_2 = (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)0x0;
  __return_storage_ptr__->___uvs_3 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0;
  __return_storage_ptr__->___tris_4 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)0x0;
  if ((ListPool_1_t5BDF82F857834E06CC7B1B3DD34171214411062B_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (pIVar3->cctor_finished == 0)) {
    il2cpp_runtime_class_init(pIVar3);
  }
  pLVar4 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)
           ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                     (ListPool_1_Get_mC6674CD7B21804B7CBB40528A57AF96BDE2CF73A_RuntimeMethod_var);
  pMVar2 = ListPool_1_Get_mC6674CD7B21804B7CBB40528A57AF96BDE2CF73A_RuntimeMethod_var;
  __return_storage_ptr__->___verts_0 = pLVar4;
  pLVar4 = (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)
           ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared(pMVar2);
  __return_storage_ptr__->___normals_1 = pLVar4;
  if ((ListPool_1_t9800B873CCC213E97D0B76C1CAC6A461D3075524_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ListPool_1_t9800B873CCC213E97D0B76C1CAC6A461D3075524_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ListPool_1_t9800B873CCC213E97D0B76C1CAC6A461D3075524_il2cpp_TypeInfo_var);
  }
  pLVar5 = (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)
           ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                     (ListPool_1_Get_m8CA671D4142D0597A69B71DE8F838D74E2DD76AE_RuntimeMethod_var);
  __return_storage_ptr__->___tangents_2 = pLVar5;
  if ((ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ListPool_1_t7DD711B5AA8913A0925EC46599ED877BD2585698_il2cpp_TypeInfo_var);
  }
  pLVar6 = (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)
           ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                     (ListPool_1_Get_mC058C3EA28BE749501B71D6C9F86C90181EBC5C6_RuntimeMethod_var);
  __return_storage_ptr__->___uvs_3 = pLVar6;
  if ((ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->has_cctor != '\0')
     && (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var->cctor_finished ==
         0)) {
    il2cpp_runtime_class_init
              (ListPool_1_t2D2B00C678E6EC8FBF294B968D02CF4EF6565150_il2cpp_TypeInfo_var);
  }
  pLVar7 = ListPool_1_Get_m1FD033F0BFD60C36317CB492F1788390335C2CBE_gshared
                     (ListPool_1_Get_m241128D5276523F0F1C96D3E65AE9BEA91AB9F8A_RuntimeMethod_var);
  __return_storage_ptr__->___tris_4 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)pLVar7;
  return __return_storage_ptr__;
}
