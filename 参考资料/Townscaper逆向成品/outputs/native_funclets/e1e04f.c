// RVA 0xe1e04f | Recovered.function.called_by_e1de60
// PDB: FUN_10e1e04f
// Body: [[10e1e04f, 10e1e1d5]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 1021c6c0 Dictionary_2_Add_m01FEB2F3B89795A9E2DF74E83079B76347F934F6_gshared
// 1021c780 Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
// 10267d60 Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 10893f10 Byte_ToString_m6A11C71EB9B8031596645EA1A4C2430721B282B5
// 10906300 Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411
// 10a3ca70 Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7
// 10e1e1f0 FUN_10e1e1f0
// 10f022b0 String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78
// 11032ae0 List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared

void FUN_10e1e04f(void)

{
  Il2CppObject *pIVar1;
  int iVar2;
  int iVar3;
  Il2CppClass *pIVar4;
  bool bVar5;
  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *pEVar6;
  String_t *pSVar7;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;

  *(int *)(unaff_EBP + -0x18) = unaff_ESI;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x6c),
             Enumerator_Dispose_m0D4815060AC903CE2A779C5E6E4893549C46D065_RuntimeMethod_var);
  if (*(Exception_t **)(unaff_EBP + -0x14) != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x14),(MethodInfo *)0x0);
  }
  if ((unaff_ESI != 0) && (*(int *)(unaff_EBP + -0x40 + unaff_ESI * 4) == 0x4c)) {
    *(int *)(unaff_EBP + -0x18) = unaff_ESI + -1;
    *(int *)(unaff_EBP + -0x30) = unaff_ESI + -1;
  }
  if (*(Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 **)(unaff_EDI + 0x1c) !=
      (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
    Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
              (*(Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 **)(unaff_EDI + 0x1c),
               Dictionary_2_Clear_m9E7CFED24CEE61E78287F03BC1C7A601DA3E25A4_RuntimeMethod_var);
    if (*(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)(unaff_EDI + 0x18) !=
        (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) {
      pEVar6 = List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared
                         ((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)
                          (unaff_EBP + -0x7c),
                          *(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)(unaff_EDI + 0x18),
                          List_1_GetEnumerator_m76EEACE1D91A088E4499D8E07A48DA832068CBEB_RuntimeMethod_var
                         );
      iVar2 = pEVar6->___index_1;
      iVar3 = pEVar6->___version_2;
      pIVar1 = pEVar6->___current_3;
      *(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)(unaff_EBP + -0x4c) = pEVar6->___list_0;
      *(int *)(unaff_EBP + -0x48) = iVar2;
      *(int *)(unaff_EBP + -0x44) = iVar3;
      *(Il2CppObject **)(unaff_EBP + -0x40) = pIVar1;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      do {
        bVar5 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                          ((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)
                           (unaff_EBP + -0x4c),
                           Enumerator_MoveNext_mEFAA469356EA0ECAAF15CFBBB274DB1412855033_RuntimeMethod_var
                          );
        if (!bVar5) {
          *(undefined4 *)(unaff_EBP + -0x3c + *(int *)(unaff_EBP + -0x18) * 4) = 0xfe;
          *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 1;
          FUN_10e1e1f0();
          return;
        }
        pIVar1 = *(Il2CppObject **)(unaff_EBP + -0x40);
        if (pIVar1 == (Il2CppObject *)0x0) break;
        if ((1 < *(byte *)&pIVar1[3].field0_0x0) && (*(char *)((int)&pIVar1[2].monitor + 1) != -1))
        {
          pSVar7 = Byte_ToString_m6A11C71EB9B8031596645EA1A4C2430721B282B5
                             ((uchar *)((int)&pIVar1[2].monitor + 1),(MethodInfo *)0x0);
          *(String_t **)(unaff_EBP + -0x20) = pSVar7;
          *(undefined4 *)(unaff_EBP + -0x1c) = 0xff;
          pSVar7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411
                             ((int *)(unaff_EBP + -0x1c),(MethodInfo *)0x0);
          pSVar7 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78
                             (_stringLiteralC24ADD3C3162599CC76CDA8C08E47DEB60C03EF2,
                              *(String_t **)(unaff_EBP + -0x20),
                              _stringLiteral0C2C7A9E7436DA4E0013C1BB4B0A6143CE0F38ED,pSVar7,
                              (MethodInfo *)0x0);
          pIVar4 = Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
          *(String_t **)(unaff_EBP + -0x20) = pSVar7;
          if ((pIVar4->has_cctor != '\0') && (pIVar4->cctor_finished == 0)) {
            il2cpp_runtime_class_init(pIVar4);
            pSVar7 = *(String_t **)(unaff_EBP + -0x20);
          }
          Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7
                    ((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
          if (pIVar1[3].monitor == (MonitorData *)0x0) break;
          List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                    ((List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pIVar1[3].monitor,
                     List_1_Clear_m6BE528E6DE3484A7ADBCF7A125B9D3B399AAD8D2_RuntimeMethod_var);
          *(undefined2 *)((int)&pIVar1[2].monitor + 1) = 0;
          *(undefined1 *)&pIVar1[3].field0_0x0 = 0;
        }
        if (*(Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 **)(unaff_EDI + 0x1c) ==
            (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) break;
        Dictionary_2_Add_m01FEB2F3B89795A9E2DF74E83079B76347F934F6_gshared
                  (*(Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 **)(unaff_EDI + 0x1c),
                   *(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)&pIVar1[1].monitor,pIVar1,
                   Dictionary_2_Add_m34AE37553D78729D41753F107B3A7ACB1462F602_RuntimeMethod_var);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
