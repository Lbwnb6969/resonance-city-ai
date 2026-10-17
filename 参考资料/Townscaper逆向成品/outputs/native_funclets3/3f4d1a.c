// RVA 0x3f4d1a | Recovered.function.called_by_3f4c2a
// PDB: FUN_103f4d1a
// Body: [[103f4d1a, 103f4e08] [103f4e38, 103f4e4c]]
// Direct callees:
// 1018eab0 il2cpp_codegen_raise_exception
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 10267a70 Enumerator_MoveNext_m0B2C9CBAE032A4CDC37FD0014D2DB9FCF1CF2AAA_gshared
// 103f0cd0 WaveFunctionCollapse_DrawPropagationGizmo_m2758253CC9839CB047793E44C382F8F999601FCE
// 103f4e17 FUN_103f4e17
// 10929360 List_1_GetEnumerator_m33D86DCCDEABB81C19C43D86384329C638768820_gshared
// 10a39c90 Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B
// 10a3e840 Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F

void FUN_103f4d1a(void)

{
  Exception_t *pEVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar6;
  Enumerator_t0DC239D1F15EC8F5087E71C9CD5051ACE82ECC94 *pEVar7;
  int unaff_EBP;
  WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *unaff_ESI;
  int unaff_EDI;

  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x7c),
             Enumerator_Dispose_m3BEE7BD58B6E94D5B7984D74F3D82DB3044969E3_RuntimeMethod_var);
  if (*(Exception_t **)(unaff_EBP + -0x14) != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x14),(MethodInfo *)0x0);
  }
  if ((unaff_EDI != 0) && (*(int *)(unaff_EBP + -0x5c + unaff_EDI * 4) == 0xc0)) {
    unaff_EDI = unaff_EDI + -1;
  }
  pCVar6 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B
                     ((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(unaff_EBP + -0x38),
                      (MethodInfo *)0x0);
  Gizmos_set_color_m937ACC6288C81BAFFC3449FAA03BB4F680F4E74F(*pCVar6,(MethodInfo *)0x0);
  if ((List_1_tDBABB161DDD6447C01B5B703F3E7E389D20F19B3 *)unaff_ESI->___removeNeighbors_7 !=
      (List_1_tDBABB161DDD6447C01B5B703F3E7E389D20F19B3 *)0x0) {
    pEVar7 = List_1_GetEnumerator_m33D86DCCDEABB81C19C43D86384329C638768820_gshared
                       ((Enumerator_t0DC239D1F15EC8F5087E71C9CD5051ACE82ECC94 *)(unaff_EBP + -0x60),
                        (List_1_tDBABB161DDD6447C01B5B703F3E7E389D20F19B3 *)
                        unaff_ESI->___removeNeighbors_7,
                        List_1_GetEnumerator_mC744CE68921C25709FE287E352E1F2D0340A39A8_RuntimeMethod_var
                       );
    iVar2 = pEVar7->___index_1;
    iVar3 = pEVar7->___version_2;
    iVar4 = (pEVar7->___current_3).___LozxQHDUasgVhVpgQCMsCoaOoRQa_0;
    *(List_1_tDBABB161DDD6447C01B5B703F3E7E389D20F19B3 **)(unaff_EBP + -0x7c) = pEVar7->___list_0;
    *(int *)(unaff_EBP + -0x78) = iVar2;
    *(int *)(unaff_EBP + -0x74) = iVar3;
    *(int *)(unaff_EBP + -0x70) = iVar4;
    *(undefined8 *)(unaff_EBP + -0x6c) =
         *(undefined8 *)&(pEVar7->___current_3).___nysCgOHzXLJTixhwqDGEUxXIXWD_1;
    *(int *)(unaff_EBP + -100) = (pEVar7->___current_3).___EgdvCLoZaqSUnykugCTymxPkenh_3;
    *(undefined4 *)(unaff_EBP + -4) = 6;
    while( true ) {
      bVar5 = Enumerator_MoveNext_m0B2C9CBAE032A4CDC37FD0014D2DB9FCF1CF2AAA_gshared
                        ((Enumerator_tDCDA72D8E356FA5D029699408566C8C3ABB834A6 *)(unaff_EBP + -0x7c)
                         ,
                         Enumerator_MoveNext_mE21B7F5CB49EECCB84E71872C553E1BBFA8890C0_RuntimeMethod_var
                        );
      if (!bVar5) break;
      WaveFunctionCollapse_DrawPropagationGizmo_m2758253CC9839CB047793E44C382F8F999601FCE
                (unaff_ESI,
                 *(Propagation_tFD3C7A39084AE25C9740FC8A98A0BCA4079543BA *)(unaff_EBP + -0x70),
                 (MethodInfo *)0x0);
    }
    *(undefined4 *)(unaff_EBP + -0x58 + unaff_EDI * 4) = 0x102;
    pEVar1 = *(Exception_t **)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
              ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x7c),
               Enumerator_Dispose_m3BEE7BD58B6E94D5B7984D74F3D82DB3044969E3_RuntimeMethod_var);
    if (pEVar1 == (Exception_t *)0x0) {
      FUN_103f4e17();
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(pEVar1,(MethodInfo *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
