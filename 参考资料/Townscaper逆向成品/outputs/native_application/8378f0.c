// RVA 0x8378f0 | Placemaker.FastCoroutines$$FastIterate
// PDB: FastCoroutines_FastIterate_m69AE3367AF5EF60CB968CB174DADEA58CC46BA60
// Body: [[108378f0, 10837a7e] [10837a80, 10837b6a]]
// Direct callees:
// 1003e420 Invoke
// 100547c0 List_1_get_Item_m05503F475DFF429174902337394B6C6DE3713CCD_inline
// 101280f0 il2cpp_runtime_class_init
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d8380 OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
// 10278860 Stopwatch_Restart_mCACD336DA0A4A8BF67F2E74C9C2DA93484047D3B
// 102789f0 Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5
// 1092a850 List_1_RemoveAt_m97BC6F336D5FBC7FEFECCA39CABFB059564D0A27_gshared

/* WARNING: Removing unreachable block (ram,0x10837b23) */

bool __cdecl
FastCoroutines_FastIterate_m69AE3367AF5EF60CB968CB174DADEA58CC46BA60
          (int param_1,MethodInfo *param_2)

{
  undefined8 uVar1;
  Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *pSVar2;
  eoeYwvfgkcyqvOuhSvCpfjKvcGW_t36596F2FF79D37D2776C7BB369E698B363118273 *peVar3;
  int iVar4;
  long64 lVar5;
  eoeYwvfgkcyqvOuhSvCpfjKvcGW_t36596F2FF79D37D2776C7BB369E698B363118273 local_1c;
  undefined8 local_10;

  if (DAT_1151f3cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_RemoveAt_m8DC782907E24C5BCF1943D18CC9AF74A86B1FDBC_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mCA517117AD1EFF23EFBABFABA7256CD5E928888F_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mDF942E7C5689B0E7EBE47755B6C9F65F86BF1A7C_RuntimeMethod_var)
    ;
    DAT_1151f3cd = '\x01';
  }
  if ((FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->has_cctor !=
       '\0') &&
     (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->cctor_finished
      == 0)) {
    il2cpp_runtime_class_init
              (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var);
  }
  pSVar2 = *(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 **)
            ((int)FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->
                  static_fields + 4);
  if (pSVar2 != (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)0x0) {
    Stopwatch_Restart_mCACD336DA0A4A8BF67F2E74C9C2DA93484047D3B(pSVar2,(MethodInfo *)0x0);
    do {
      if ((FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->has_cctor
           != '\0') &&
         (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->
          cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var);
      }
      if (*(int *)FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->
                  static_fields == 0) goto LAB_10837b66;
      if (*(int *)(*(int *)FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var
                           ->static_fields + 0xc) < 1) break;
      if ((FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->has_cctor
           != '\0') &&
         (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->
          cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var);
      }
      if (*(List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E **)
           FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->
           static_fields == (List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E *)0x0)
      goto LAB_10837b66;
      peVar3 = List_1_get_Item_m05503F475DFF429174902337394B6C6DE3713CCD_inline
                         (&local_1c,
                          *(List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E **)
                           FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var
                           ->static_fields,0,
                          List_1_get_Item_mDF942E7C5689B0E7EBE47755B6C9F65F86BF1A7C_RuntimeMethod_var
                         );
      uVar1._0_4_ = peVar3->___MqzGhJGEFjxUdcjoHTfdmpUvoKhv_0;
      uVar1._4_4_ = peVar3->___JcmgDDuATuYwIOWhebgtdHoiXsW_1;
      local_10._0_1_ = (char)(undefined4)uVar1;
      local_10 = uVar1;
      if ((char)local_10 == '\0') {
        while( true ) {
          if ((Il2CppObject *)uVar1._4_4_ == (Il2CppObject *)0x0) goto LAB_10837b66;
          iVar4 = InterfaceFuncInvoker0<int>::Invoke
                            (0,
                             IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var
                             ,(Il2CppObject *)uVar1._4_4_);
          if ((char)iVar4 == '\0') break;
          if ((FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->
               has_cctor != '\0') &&
             (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->
              cctor_finished == 0)) {
            il2cpp_runtime_class_init
                      (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var)
            ;
          }
          pSVar2 = *(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 **)
                    ((int)FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var
                          ->static_fields + 4);
          if (pSVar2 == (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)0x0)
          goto LAB_10837b66;
          lVar5 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5
                            (pSVar2,(MethodInfo *)0x0);
          iVar4 = (int)((ulonglong)lVar5 >> 0x20);
          if ((param_1 >> 0x1f <= iVar4) &&
             ((param_1 >> 0x1f < iVar4 || ((uint)param_1 <= (uint)lVar5)))) goto LAB_10837adb;
        }
        if ((FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->has_cctor
             != '\0') &&
           (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->
            cctor_finished == 0)) {
          il2cpp_runtime_class_init
                    (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var);
        }
        if (*(List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 **)
             FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->
             static_fields == (List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 *)0x0)
        goto LAB_10837b66;
        List_1_RemoveAt_m97BC6F336D5FBC7FEFECCA39CABFB059564D0A27_gshared
                  (*(List_1_tF204174495F6CCC4FC6094B441010B48BDE04555 **)
                    FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->
                    static_fields,0,
                   List_1_RemoveAt_m8DC782907E24C5BCF1943D18CC9AF74A86B1FDBC_RuntimeMethod_var);
      }
      else {
        if ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
            peVar3->___pMiBnalMLaKhnIIVCmUXzEYnDvX_2 ==
            (OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)0x0) goto LAB_10837b66;
        OnLocalizeCallback_Invoke_m8B28CFE294965737AFDCB15C1BFD40C7B4A43906
                  ((OnLocalizeCallback_t7105F8A7A90E819EE717D6CACA6F8A4EA82890AE *)
                   peVar3->___pMiBnalMLaKhnIIVCmUXzEYnDvX_2,(MethodInfo *)0x0);
      }
LAB_10837adb:
      if ((FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->has_cctor
           != '\0') &&
         (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->
          cctor_finished == 0)) {
        il2cpp_runtime_class_init
                  (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var);
      }
      pSVar2 = *(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 **)
                ((int)FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->
                      static_fields + 4);
      if (pSVar2 == (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)0x0) goto LAB_10837b66;
      lVar5 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5
                        (pSVar2,(MethodInfo *)0x0);
    } while (lVar5 <= param_1);
    if ((FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->has_cctor !=
         '\0') &&
       (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->cctor_finished
        == 0)) {
      il2cpp_runtime_class_init
                (FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var);
    }
    if (*(int *)FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var->
                static_fields != 0) {
      return 0 < *(int *)(*(int *)FastCoroutines_t3ABB2BDAC5D7EC1B904E8CDCDB49D749D153C60F_il2cpp_TypeInfo_var
                                  ->static_fields + 0xc);
    }
  }
LAB_10837b66:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
