// RVA 0x3dfae4 | Recovered.function.called_by_3de5e0
// PDB: FUN_103dfae4
// Body: [[103dfae4, 103dfb45]]
// Direct callees:
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 103dfb8d FUN_103dfb8d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dfae4(void)

{
  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *pLVar1;
  undefined4 uVar2;
  Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *pDVar3;
  Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *pDVar4;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar5;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar6;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar7;
  MethodInfo *pMVar8;
  Il2CppClass *pIVar9;
  bool bVar10;
  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *pEVar11;
  int iVar12;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar13;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *pAVar14;
  int iVar15;
  eoeYwvfgkcyqvOuhSvCpfjKvcGW_t36596F2FF79D37D2776C7BB369E698B363118273 *peVar16;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar17;
  String_t *pSVar18;
  String_t *pSVar19;
  String_t *pSVar20;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar21;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *this;
  Il2CppObject *pIVar22;
  Il2CppObject *pIVar23;
  Exception_t *pEVar24;
  undefined1 *puVar25;
  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *pLVar26;
  int unaff_EBP;
  List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *pLVar27;
  int iVar28;
  int unaff_ESI;
  int iVar29;
  Exception_t *unaff_EDI;
  float10 extraout_ST0;
  float fVar30;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar31;

  *(int *)(unaff_EBP + -0x1c) = unaff_ESI;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x268),
             Enumerator_Dispose_m8222297DD2654B108B75C908CDFBD7D6AF7C8E69_RuntimeMethod_var);
  if (unaff_EDI != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(unaff_EDI,(MethodInfo *)0x0);
  }
  if ((unaff_ESI != 0) && (*(int *)(unaff_EBP + -0x164 + unaff_ESI * 4) == 0x51f)) {
    unaff_ESI = unaff_ESI + -1;
    *(int *)(unaff_EBP + -0x1c) = unaff_ESI;
    *(int *)(unaff_EBP + -0x150) = unaff_ESI;
  }
  while( true ) {
    bVar10 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                       ((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(unaff_EBP + -0x278)
                        ,
                        Enumerator_MoveNext_mC8EFC64ACD0BD264530EC1341BFD1FA2D06F7CBA_RuntimeMethod_var
                       );
    if (!bVar10) {
      *(undefined4 *)(unaff_EBP + -0x160 + unaff_ESI * 4) = 0x53b;
      *(int *)(unaff_EBP + -0x150) = *(int *)(unaff_EBP + -0x150) + 1;
      FUN_103dfb8d();
      return;
    }
    iVar15 = *(int *)(unaff_EBP + -0x26c);
    pLVar1 = *(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)
              (*(int *)(unaff_EBP + -0xa4) + 0x10);
    if ((iVar15 == 0) || (pLVar1 == (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0))
    goto LAB_103e28c9;
    bVar10 = List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared
                       (pLVar1,*(Il2CppObject **)(iVar15 + 0xc),
                        List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC_RuntimeMethod_var)
    ;
    if (bVar10) break;
    unaff_ESI = *(int *)(unaff_EBP + -0x1c);
  }
  if (*(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 **)(iVar15 + 0x10) !=
      (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0) {
    pEVar11 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF
                        ((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)
                         (unaff_EBP + -0x440),
                         *(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 **)(iVar15 + 0x10),
                         List_1_GetEnumerator_m437694725739E4A4A5D602CBF3F2C85B0ACFA6A4_RuntimeMethod_var
                        );
    iVar15 = pEVar11->___index_1;
    iVar12 = pEVar11->___version_2;
    pSVar18 = pEVar11->___current_3;
    *(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 **)(unaff_EBP + -0x268) = pEVar11->___list_0;
    *(int *)(unaff_EBP + -0x264) = iVar15;
    *(int *)(unaff_EBP + -0x260) = iVar12;
    *(String_t **)(unaff_EBP + -0x25c) = pSVar18;
    *(undefined1 *)(unaff_EBP + -4) = 1;
LAB_103df1a0:
    bVar10 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                       ((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(unaff_EBP + -0x268)
                        ,
                        Enumerator_MoveNext_mDC261D7340126A64E1CC38D3FEA974BF7E068DD4_RuntimeMethod_var
                       );
    if (!bVar10) {
      *(undefined1 *)(unaff_EBP + -4) = 0;
      *(undefined4 *)(unaff_EBP + -0x160 + *(int *)(unaff_EBP + -0x1c) * 4) = 0x51f;
      *(int *)(unaff_EBP + -0x150) = *(int *)(unaff_EBP + -0x150) + 1;
      FUN_103dfae4();
      return;
    }
    iVar15 = *(int *)(unaff_EBP + -0x25c);
    if (iVar15 != 0) {
      pLVar27 = *(List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B **)(iVar15 + 0x2c);
      pLVar26 = *(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)(iVar15 + 0x34);
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(iVar15 + 0x24);
      *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar15 + 0x30);
      uVar2 = *(undefined4 *)(iVar15 + 0x28);
      *(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)(unaff_EBP + -0x84) = pLVar26;
      *(undefined4 *)(unaff_EBP + -0x110) = uVar2;
      *(List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B **)(unaff_EBP + -0x40) = pLVar27;
      if (pLVar27 != (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0) {
        iVar15 = pLVar27->____size_2;
        *(int *)(unaff_EBP + -0x38) = iVar15;
        if (pLVar26 != (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0) {
          iVar12 = pLVar26->____size_2;
          iVar29 = 0;
          *(int *)(unaff_EBP + -0x58) = iVar12;
LAB_103df20d:
          *(int *)(unaff_EBP + -0x88) = iVar29;
LAB_103df213:
          if (iVar12 <= iVar29) goto LAB_103df1a0;
          if (0 < iVar15) {
            pGVar13 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                (pLVar26,iVar29,
                                 List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var
                                );
            pAVar14 = List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_inline
                                ((Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *)
                                 (unaff_EBP + -0x400),pLVar27,(int)pGVar13,
                                 List_1_get_Item_mBC15B4BA533085E756DCF99A50854221DC56EACD_RuntimeMethod_var
                                );
            pLVar26 = *(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)(unaff_EBP + -0x84);
            if ((float)pAVar14->___actionId_4 <= __real_3f000000 &&
                __real_3f000000 != (float)pAVar14->___actionId_4) goto code_r0x103df256;
          }
          iVar28 = -1;
          iVar15 = 0;
          *(undefined4 *)(unaff_EBP + -0x74) = 0xffffffff;
          *(undefined4 *)(unaff_EBP + -0x5c) = 0xffffffff;
          *(undefined4 *)(unaff_EBP + -0xdc) = 0xffffffff;
          *(undefined4 *)(unaff_EBP + -0x68) = 0xffffffff;
          *(undefined4 *)(unaff_EBP + -100) = 0xffffffff;
          *(undefined4 *)(unaff_EBP + -0xd8) = 0xffffffff;
          *(undefined4 *)(unaff_EBP + -0x6c) = 0xffffffff;
          *(undefined4 *)(unaff_EBP + -0x60) = 0xffffffff;
          while( true ) {
            *(int *)(unaff_EBP + -0x44) = iVar15;
            *(int *)(unaff_EBP + -0xb8) = iVar28;
            pMVar8 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var;
            if (2 < iVar15) break;
            *(int *)(unaff_EBP + -0x88) = iVar29 + 1;
            pGVar13 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                (pLVar26,iVar29,pMVar8);
            if (*(List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E **)(unaff_EBP + -0x20) ==
                (List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E *)0x0) goto LAB_103e28c9;
            peVar16 = List_1_get_Item_m05503F475DFF429174902337394B6C6DE3713CCD_inline
                                ((eoeYwvfgkcyqvOuhSvCpfjKvcGW_t36596F2FF79D37D2776C7BB369E698B363118273
                                  *)(unaff_EBP + -600),
                                 *(List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E **)
                                  (unaff_EBP + -0x20),(int)pGVar13,
                                 List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var
                                );
            pVVar17 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                 (unaff_EBP + -0x330),
                                 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                                 (unaff_EBP + -800),
                                 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E)*peVar16,
                                 (MethodInfo *)0x0);
            *(undefined8 *)(unaff_EBP + -0x1c8) = *(undefined8 *)pVVar17;
            *(float *)(unaff_EBP + -0x1c0) = pVVar17->___z_4;
            if (*(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 **)(unaff_EBP + -0x30) ==
                (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0) goto LAB_103e28c9;
            VVar31 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                               (*(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 **)
                                 (unaff_EBP + -0x30),(int)pGVar13,
                                List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var
                               );
            uVar2 = *(undefined4 *)(unaff_EBP + -0x80);
            *(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(unaff_EBP + -0x80) = VVar31;
            *(undefined4 *)(unaff_EBP + -0x198) = uVar2;
            *(undefined4 *)(unaff_EBP + -0x194) = *(undefined4 *)(unaff_EBP + -0x7c);
            if (*(List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E **)(unaff_EBP + -0x110) ==
                (List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E *)0x0) goto LAB_103e28c9;
            peVar16 = List_1_get_Item_m05503F475DFF429174902337394B6C6DE3713CCD_inline
                                ((eoeYwvfgkcyqvOuhSvCpfjKvcGW_t36596F2FF79D37D2776C7BB369E698B363118273
                                  *)(unaff_EBP + -0x340),
                                 *(List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E **)
                                  (unaff_EBP + -0x110),(int)pGVar13,
                                 List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var
                                );
            *(undefined8 *)(unaff_EBP + -0x1bc) = *(undefined8 *)peVar16;
            pSVar18 = peVar16->___pMiBnalMLaKhnIIVCmUXzEYnDvX_2;
            *(undefined8 *)(unaff_EBP + -0x120) = *(undefined8 *)(unaff_EBP + -0x1c8);
            fVar30 = *(float *)(unaff_EBP + -0x1c8) * ___real_43800000;
            *(String_t **)(unaff_EBP + -0x1b4) = pSVar18;
            *(undefined4 *)(unaff_EBP + -0x118) = *(undefined4 *)(unaff_EBP + -0x1c0);
            fVar30 = bankers_roundf(fVar30);
            *(float *)(unaff_EBP + -0x140) = fVar30;
            *(undefined4 *)(unaff_EBP + -0x120) = *(undefined4 *)(unaff_EBP + -0x140);
            fVar30 = bankers_roundf(*(float *)(unaff_EBP + -0x11c) * ___real_43800000);
            *(float *)(unaff_EBP + -0x140) = fVar30;
            *(undefined4 *)(unaff_EBP + -0x11c) = *(undefined4 *)(unaff_EBP + -0x140);
            fVar30 = bankers_roundf(*(float *)(unaff_EBP + -0x118) * ___real_43800000);
            pDVar3 = *(Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 **)(unaff_EBP + -300);
            *(float *)(unaff_EBP + -0x140) = fVar30;
            *(undefined4 *)(unaff_EBP + -0x118) = *(undefined4 *)(unaff_EBP + -0x140);
            iVar15 = *(int *)(unaff_EBP + -0x118);
            bVar10 = Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
                               ((Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *)pDVar3,
                                *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                 (unaff_EBP + -0x120),(int *)(unaff_EBP + -0xb8),
                                Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F_RuntimeMethod_var
                               );
            pMVar8 = Dictionary_2_Add_m9AC91289D62D2E402ADFE8851B2AB06D455B575B_RuntimeMethod_var;
            if (!bVar10) {
              pIVar22 = *(Il2CppObject **)(unaff_EBP + -0x34);
              puVar25 = (undefined1 *)((int)&pIVar22->field0_0x0 + 1);
              *(Il2CppObject **)(unaff_EBP + -0xb8) = pIVar22;
              *(undefined1 **)(unaff_EBP + -0x34) = puVar25;
              *(undefined1 **)(unaff_EBP + -0xc0) = puVar25;
              iVar5.___z_2 = iVar15;
              iVar5._0_8_ = *(undefined8 *)(unaff_EBP + -0x120);
              Dictionary_2_Add_mC7CA898B55B5DD408021AC5F79BB3CFE242FAF0C_gshared
                        (pDVar3,iVar5,pIVar22,pMVar8);
              pIVar22 = *(Il2CppObject **)(unaff_EBP + -0x2c);
              pSVar18 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                  ((float *)(unaff_EBP + -0x1c8),
                                   _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,pIVar22,
                                   (MethodInfo *)0x0);
              pSVar19 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                  ((float *)(unaff_EBP + -0x1c4),
                                   _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,pIVar22,
                                   (MethodInfo *)0x0);
              pSVar20 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                  ((float *)(unaff_EBP + -0x1c0),
                                   _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                   *(Il2CppObject **)(unaff_EBP + -0x2c),(MethodInfo *)0x0);
              OVar21 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                       String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                                 (_stringLiteralA26A34280DD1B7D521F02EE549D6F2B1B939A0EF,
                                  (Il2CppObject *)pSVar18,(Il2CppObject *)pSVar19,
                                  (Il2CppObject *)pSVar20,(MethodInfo *)0x0);
              if (*(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)(unaff_EBP + -0x4c) ==
                  (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_103e28c9;
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        (*(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)(unaff_EBP + -0x4c),
                         OVar21,
                         List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
            }
            pDVar4 = *(Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 **)
                      (unaff_EBP + -0x130);
            if (pDVar4 == (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)
            goto LAB_103e28c9;
            bVar10 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                               (pDVar4,*(int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 *)
                                        (unaff_EBP + -0x198),(Il2CppObject **)(unaff_EBP + -0xdc),
                                Dictionary_2_TryGetValue_m375A0838D4429C9E3FE27D14B80AEA51C86A1265_RuntimeMethod_var
                               );
            pMVar8 = Dictionary_2_Add_m2BFB6987D35DE2246B731A46FEBD4D47776B7E78_RuntimeMethod_var;
            if (bVar10) {
              pIVar22 = *(Il2CppObject **)(unaff_EBP + -0x2c);
            }
            else {
              pIVar22 = *(Il2CppObject **)(unaff_EBP + -0x3c);
              puVar25 = (undefined1 *)((int)&pIVar22->field0_0x0 + 1);
              *(Il2CppObject **)(unaff_EBP + -0xdc) = pIVar22;
              *(undefined1 **)(unaff_EBP + -0x3c) = puVar25;
              *(undefined1 **)(unaff_EBP + -0xb4) = puVar25;
              iVar7.___y_1 = *(int *)(unaff_EBP + -0x194);
              iVar7.___x_0 = *(int *)(unaff_EBP + -0x198);
              Dictionary_2_Add_m01FEB2F3B89795A9E2DF74E83079B76347F934F6_gshared
                        (pDVar4,iVar7,pIVar22,pMVar8);
              pIVar22 = *(Il2CppObject **)(unaff_EBP + -0x2c);
              pSVar19 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                  ((float *)(unaff_EBP + -0x198),
                                   _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,pIVar22,
                                   (MethodInfo *)0x0);
              *(double *)(unaff_EBP + -0x148) = (double)*(float *)(unaff_EBP + -0x194);
              _CIfmod();
              pSVar18 = _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3;
              *(float *)(unaff_EBP + -0x124) = (float)extraout_ST0;
              pSVar18 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                  ((float *)(unaff_EBP + -0x124),pSVar18,pIVar22,(MethodInfo *)0x0);
              OVar21 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                       String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66
                                 (_stringLiteral79443EA6B541034C604FE9A19395BF95CCE71A22,
                                  (Il2CppObject *)pSVar19,(Il2CppObject *)pSVar18,(MethodInfo *)0x0)
              ;
              if (*(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)(unaff_EBP + -0x50) ==
                  (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_103e28c9;
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        (*(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)(unaff_EBP + -0x50),
                         OVar21,
                         List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
            }
            pDVar3 = *(Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 **)
                      (unaff_EBP + -0x134);
            if (pDVar3 == (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)0x0)
            goto LAB_103e28c9;
            bVar10 = Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
                               ((Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *)pDVar3,
                                *(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                 (unaff_EBP + -0x1bc),(int *)(unaff_EBP + -0xd8),
                                Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F_RuntimeMethod_var
                               );
            pMVar8 = Dictionary_2_Add_m9AC91289D62D2E402ADFE8851B2AB06D455B575B_RuntimeMethod_var;
            if (!bVar10) {
              pIVar23 = *(Il2CppObject **)(unaff_EBP + -0x70);
              puVar25 = (undefined1 *)((int)&pIVar23->field0_0x0 + 1);
              *(undefined1 **)(unaff_EBP + -0x70) = puVar25;
              *(undefined1 **)(unaff_EBP + -0xe8) = puVar25;
              *(Il2CppObject **)(unaff_EBP + -0xd8) = pIVar23;
              iVar6.___z_2 = *(int *)(unaff_EBP + -0x1b4);
              iVar6._0_8_ = *(undefined8 *)(unaff_EBP + -0x1bc);
              Dictionary_2_Add_mC7CA898B55B5DD408021AC5F79BB3CFE242FAF0C_gshared
                        (pDVar3,iVar6,pIVar23,pMVar8);
              pSVar18 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                  ((float *)(unaff_EBP + -0x1bc),
                                   _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,pIVar22,
                                   (MethodInfo *)0x0);
              pSVar19 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                  ((float *)(unaff_EBP + -0x1b8),
                                   _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                   *(Il2CppObject **)(unaff_EBP + -0x2c),(MethodInfo *)0x0);
              pSVar20 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                  ((float *)(unaff_EBP + -0x1b4),
                                   _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                   *(Il2CppObject **)(unaff_EBP + -0x2c),(MethodInfo *)0x0);
              OVar21 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                       String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                                 (_stringLiteral93F9354DB37CAD8FD3A321410534387A582EED79,
                                  (Il2CppObject *)pSVar18,(Il2CppObject *)pSVar19,
                                  (Il2CppObject *)pSVar20,(MethodInfo *)0x0);
              if (*(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)(unaff_EBP + -0x90) ==
                  (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_103e28c9;
              List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                        (*(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)(unaff_EBP + -0x90),
                         OVar21,
                         List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
            }
            uVar2 = *(undefined4 *)(unaff_EBP + -0x5c);
            iVar15 = *(int *)(unaff_EBP + -0xd8);
            iVar12 = *(int *)(unaff_EBP + -0xdc);
            iVar28 = *(int *)(unaff_EBP + -0x74);
            *(int *)(unaff_EBP + -0x5c) = *(int *)(unaff_EBP + -0xb8) + 1;
            *(undefined4 *)(unaff_EBP + -0xd8) = *(undefined4 *)(unaff_EBP + -0x6c);
            *(undefined4 *)(unaff_EBP + -0x6c) = *(undefined4 *)(unaff_EBP + -0x60);
            *(int *)(unaff_EBP + -0x60) = iVar15 + 1;
            pLVar26 = *(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)(unaff_EBP + -0x84);
            *(undefined4 *)(unaff_EBP + -0xdc) = *(undefined4 *)(unaff_EBP + -0x68);
            *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(unaff_EBP + -100);
            *(undefined4 *)(unaff_EBP + -0x74) = uVar2;
            iVar15 = *(int *)(unaff_EBP + -0x44) + 1;
            iVar29 = *(int *)(unaff_EBP + -0x88);
            *(int *)(unaff_EBP + -100) = iVar12 + 1;
          }
          iVar12 = *(int *)(unaff_EBP + -0x58);
          pLVar27 = *(List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B **)(unaff_EBP + -0x40);
          iVar15 = *(int *)(unaff_EBP + -0x38);
          if (iVar28 != -1) {
            this = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)
                   il2cpp_array_new_specific
                             (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var
                              ,9);
            *(undefined4 *)(unaff_EBP + -0x218) = *(undefined4 *)(unaff_EBP + -0xb8);
            pIVar22 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                       ,(void *)(unaff_EBP + -0x218));
            if (this == (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0)
            goto LAB_103e28c9;
            if (pIVar22 != (Il2CppObject *)0x0) {
              pIVar23 = IsInst(pIVar22,*(Il2CppClass **)(this->_padding_ + 0x20));
              if (pIVar23 == (Il2CppObject *)0x0) {
                pEVar24 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                il2cpp_codegen_raise_exception(pEVar24,(MethodInfo *)0x0);
              }
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(this,0,pIVar22);
            *(undefined4 *)(unaff_EBP + -0x214) = *(undefined4 *)(unaff_EBP + -0xdc);
            pIVar22 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                       ,(void *)(unaff_EBP + -0x214));
            if (pIVar22 != (Il2CppObject *)0x0) {
              pIVar23 = IsInst(pIVar22,*(Il2CppClass **)(this->_padding_ + 0x20));
              if (pIVar23 == (Il2CppObject *)0x0) {
                pEVar24 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                il2cpp_codegen_raise_exception(pEVar24,(MethodInfo *)0x0);
              }
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(this,1,pIVar22);
            *(undefined4 *)(unaff_EBP + -0x210) = *(undefined4 *)(unaff_EBP + -0xd8);
            pIVar22 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                       ,(void *)(unaff_EBP + -0x210));
            if (pIVar22 != (Il2CppObject *)0x0) {
              pIVar23 = IsInst(pIVar22,*(Il2CppClass **)(this->_padding_ + 0x20));
              if (pIVar23 == (Il2CppObject *)0x0) {
                pEVar24 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                il2cpp_codegen_raise_exception(pEVar24,(MethodInfo *)0x0);
              }
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(this,2,pIVar22);
            pIVar9 = Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
            *(undefined4 *)(unaff_EBP + -0x234) = *(undefined4 *)(unaff_EBP + -0x74);
            pIVar22 = il2cpp_value_box(pIVar9,(void *)(unaff_EBP + -0x234));
            if (pIVar22 != (Il2CppObject *)0x0) {
              pIVar23 = IsInst(pIVar22,*(Il2CppClass **)(this->_padding_ + 0x20));
              if (pIVar23 == (Il2CppObject *)0x0) {
                pEVar24 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                il2cpp_codegen_raise_exception(pEVar24,(MethodInfo *)0x0);
              }
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(this,3,pIVar22);
            *(undefined4 *)(unaff_EBP + -0x22c) = *(undefined4 *)(unaff_EBP + -0x68);
            pIVar22 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                       ,(void *)(unaff_EBP + -0x22c));
            if (pIVar22 != (Il2CppObject *)0x0) {
              pIVar23 = IsInst(pIVar22,*(Il2CppClass **)(this->_padding_ + 0x20));
              if (pIVar23 == (Il2CppObject *)0x0) {
                pEVar24 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                il2cpp_codegen_raise_exception(pEVar24,(MethodInfo *)0x0);
              }
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(this,4,pIVar22);
            *(undefined4 *)(unaff_EBP + -0x230) = *(undefined4 *)(unaff_EBP + -0x6c);
            pIVar22 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                       ,(void *)(unaff_EBP + -0x230));
            if (pIVar22 != (Il2CppObject *)0x0) {
              pIVar23 = IsInst(pIVar22,*(Il2CppClass **)(this->_padding_ + 0x20));
              if (pIVar23 == (Il2CppObject *)0x0) {
                pEVar24 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                il2cpp_codegen_raise_exception(pEVar24,(MethodInfo *)0x0);
              }
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(this,5,pIVar22);
            pIVar9 = Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
            *(undefined4 *)(unaff_EBP + -0x21c) = *(undefined4 *)(unaff_EBP + -0x5c);
            pIVar22 = il2cpp_value_box(pIVar9,(void *)(unaff_EBP + -0x21c));
            if (pIVar22 != (Il2CppObject *)0x0) {
              pIVar23 = IsInst(pIVar22,*(Il2CppClass **)(this->_padding_ + 0x20));
              if (pIVar23 == (Il2CppObject *)0x0) {
                pEVar24 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                il2cpp_codegen_raise_exception(pEVar24,(MethodInfo *)0x0);
              }
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(this,6,pIVar22);
            *(undefined4 *)(unaff_EBP + -0x220) = *(undefined4 *)(unaff_EBP + -100);
            pIVar22 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                       ,(void *)(unaff_EBP + -0x220));
            if (pIVar22 != (Il2CppObject *)0x0) {
              pIVar23 = IsInst(pIVar22,*(Il2CppClass **)(this->_padding_ + 0x20));
              if (pIVar23 == (Il2CppObject *)0x0) {
                pEVar24 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                il2cpp_codegen_raise_exception(pEVar24,(MethodInfo *)0x0);
              }
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(this,7,pIVar22);
            *(undefined4 *)(unaff_EBP + -0x224) = *(undefined4 *)(unaff_EBP + -0x60);
            pIVar22 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                       ,(void *)(unaff_EBP + -0x224));
            if (pIVar22 != (Il2CppObject *)0x0) {
              pIVar23 = IsInst(pIVar22,*(Il2CppClass **)(this->_padding_ + 0x20));
              if (pIVar23 == (Il2CppObject *)0x0) {
                pEVar24 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                il2cpp_codegen_raise_exception(pEVar24,(MethodInfo *)0x0);
              }
            }
            ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(this,8,pIVar22);
            OVar21 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                     String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B
                               (_stringLiteralD3A51F9772FB32EDF87B5B88D5BDD5815CBD9890,this,
                                (MethodInfo *)0x0);
            if (*(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)(unaff_EBP + -0x54) ==
                (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_103e28c9;
            List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                      (*(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)(unaff_EBP + -0x54),
                       OVar21,List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var
                      );
            iVar29 = *(int *)(unaff_EBP + -0x88);
            pLVar26 = *(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)(unaff_EBP + -0x84);
            pLVar27 = *(List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B **)(unaff_EBP + -0x40);
            iVar12 = *(int *)(unaff_EBP + -0x58);
            iVar15 = *(int *)(unaff_EBP + -0x38);
          }
          goto LAB_103df213;
        }
      }
    }
  }
LAB_103e28c9:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
code_r0x103df256:
  iVar12 = *(int *)(unaff_EBP + -0x58);
  iVar29 = iVar29 + 3;
  iVar15 = *(int *)(unaff_EBP + -0x38);
  goto LAB_103df20d;
}
