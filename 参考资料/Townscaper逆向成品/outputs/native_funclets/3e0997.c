// RVA 0x3e0997 | Recovered.function.called_by_3de5e0
// PDB: FUN_103e0997
// Body: [[103e0997, 103e09fb]]
// Direct callees:
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 103e0a46 FUN_103e0a46

void FUN_103e0997(void)

{
  undefined4 uVar1;
  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *pLVar2;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar3;
  Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *pDVar4;
  Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *pDVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar9;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar10;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar11;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar12;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar13;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar14;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar15;
  int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 iVar16;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar17;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E VVar18;
  MethodInfo *pMVar19;
  Il2CppClass *pIVar20;
  bool bVar21;
  int iVar22;
  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *pCVar23;
  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *pOVar24;
  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *pEVar25;
  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *pOVar26;
  Material_t8927C00353A72755313F046D0CE85178AE8218EE *pMVar27;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar28;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar29;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar30;
  Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *pAVar31;
  eoeYwvfgkcyqvOuhSvCpfjKvcGW_t36596F2FF79D37D2776C7BB369E698B363118273 *peVar32;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar33;
  String_t *pSVar34;
  String_t *pSVar35;
  String_t *pSVar36;
  OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360 OVar37;
  Il2CppObject *pIVar38;
  Il2CppObject *pIVar39;
  Exception_t *pEVar40;
  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *pLVar41;
  int iVar42;
  undefined1 *puVar43;
  int unaff_EBP;
  int iVar44;
  int unaff_ESI;
  int iVar45;
  List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *pLVar46;
  Exception_t *unaff_EDI;
  float10 extraout_ST0;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar47;

  *(int *)(unaff_EBP + -0x1c) = unaff_ESI;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x288),
             Enumerator_Dispose_m480514E651BC90B3F524CCE1462E6426D0F12364_RuntimeMethod_var);
  if (unaff_EDI != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(unaff_EDI,(MethodInfo *)0x0);
  }
  pIVar38 = *(Il2CppObject **)(unaff_EBP + -0x74);
  if ((unaff_ESI != 0) && (*(int *)(unaff_EBP + -0x164 + unaff_ESI * 4) == 0x9fb)) {
    unaff_ESI = unaff_ESI + -1;
    *(int *)(unaff_EBP + -0x1c) = unaff_ESI;
    *(int *)(unaff_EBP + -0x150) = unaff_ESI;
  }
  do {
    if (pIVar38 == (Il2CppObject *)0x0) goto LAB_103e28c9;
    iVar22 = InterfaceFuncInvoker0<int>::Invoke
                       (0,IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var,
                        pIVar38);
    if ((char)iVar22 == '\0') {
      *(undefined4 *)(unaff_EBP + -0x160 + unaff_ESI * 4) = 0xa15;
      *(int *)(unaff_EBP + -0x150) = *(int *)(unaff_EBP + -0x150) + 1;
      FUN_103e0a46();
      return;
    }
    pCVar23 = (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)
              InterfaceFuncInvoker0<int>::Invoke
                        (0,
                         IEnumerator_1_t410369E77AF5FBCF0814A07B279351813272D150_il2cpp_TypeInfo_var
                         ,pIVar38);
    if (pCVar23 == (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)0x0) goto LAB_103e28c9;
    pOVar24 = Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
                        (pCVar23,(bool)((char)unaff_EBP + '$'),
                         Component_TryGetComponent_TisPropMeshReference_t3675C7FF17B0DAAD79E80C0EA6B32A7278245E69_mA0FF3023F767502EF6640CB87F6D15748433BBDD_RuntimeMethod_var
                        );
  } while ((char)pOVar24 == '\0');
  if ((*(int *)(unaff_EBP + -0x1dc) != 0) &&
     (pLVar2 = *(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 **)
                (*(int *)(unaff_EBP + -0x1dc) + 0xc),
     pLVar2 != (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)0x0)) {
    pEVar25 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF
                        ((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)
                         (unaff_EBP + -0x410),pLVar2,
                         List_1_GetEnumerator_m27D5DE804DC04EC004BADF42DA9C256C0472AF27_RuntimeMethod_var
                        );
    iVar22 = pEVar25->___index_1;
    iVar45 = pEVar25->___version_2;
    pSVar34 = pEVar25->___current_3;
    *(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 **)(unaff_EBP + -0x288) = pEVar25->___list_0;
    *(int *)(unaff_EBP + -0x284) = iVar22;
    *(int *)(unaff_EBP + -0x280) = iVar45;
    *(String_t **)(unaff_EBP + -0x27c) = pSVar34;
    *(undefined1 *)(unaff_EBP + -4) = 5;
LAB_103dfda0:
    do {
      do {
        do {
          do {
            bVar21 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared
                               ((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)
                                (unaff_EBP + -0x288),
                                Enumerator_MoveNext_m4FFF46C2277B3F90E529CF62038401690164A494_RuntimeMethod_var
                               );
            if (!bVar21) {
              *(undefined1 *)(unaff_EBP + -4) = 4;
              *(undefined4 *)(unaff_EBP + -0x160 + *(int *)(unaff_EBP + -0x1c) * 4) = 0x9fb;
              *(int *)(unaff_EBP + -0x150) = *(int *)(unaff_EBP + -0x150) + 1;
              FUN_103e0997();
              return;
            }
            iVar22 = *(int *)(unaff_EBP + -0x27c);
            if (iVar22 == 0) goto LAB_103e28c9;
            pMVar3 = *(MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A **)(iVar22 + 8);
          } while (*(char *)(iVar22 + 0x10) != '\0');
          if (pMVar3 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0)
          goto LAB_103e28c9;
          pOVar26 = (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)
                    MeshFilter_get_sharedMesh_mDCB12AB93E6E5F477F55A14990A7AB5F1B06F19E
                              (pMVar3,(MethodInfo *)0x0);
          if ((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->has_cctor !=
               '\0') &&
             (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var->cctor_finished
              == 0)) {
            il2cpp_runtime_class_init
                      (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
          }
          bVar21 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499
                             (pOVar26,(MethodInfo *)0x0);
        } while (!bVar21);
        pOVar24 = Component_GetComponentsInChildren_TisRuntimeObject_m1D678E828943F6A8613DC24926420EDA6EBFBF7E_gshared
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pMVar3,
                             (bool)((char)unaff_EBP + ' '),
                             Component_TryGetComponent_TisMeshRenderer_tCD983A2F635E12BCB0BAA2E635D96A318757908B_m6CCB6E2E588C6CCECCC927291FB4291B1FE73289_RuntimeMethod_var
                            );
      } while ((char)pOVar24 == '\0');
      *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(*(int *)(unaff_EBP + -0xa4) + 0x10);
      if (*(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C **)(unaff_EBP + -0x1e0) ==
          (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C *)0x0) goto LAB_103e28c9;
      pMVar27 = Renderer_GetSharedMaterial_m273D9ED2135F4A6808C4E814BA13E346F4231DFD
                          (*(Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C **)
                            (unaff_EBP + -0x1e0),(MethodInfo *)0x0);
      if (*(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)(unaff_EBP + -0x30) ==
          (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)0x0) goto LAB_103e28c9;
      bVar21 = List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared
                         (*(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 **)(unaff_EBP + -0x30),
                          (Il2CppObject *)pMVar27,
                          List_1_Contains_m631A61127CAE4A180CC066347B119BB013A955EC_RuntimeMethod_var
                         );
    } while (!bVar21);
    if (*(Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 **)(unaff_EBP + -0x14c) !=
        (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0) {
      Dictionary_2_Clear_m03F6E27B9533062BA140D8F18D7B7A24CE042834_gshared
                (*(Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 **)(unaff_EBP + -0x14c),
                 Dictionary_2_Clear_m191DF7FB0C93C167D7030AACC2CAC71225D1CDA9_RuntimeMethod_var);
      if (pOVar26 != (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)0x0) {
        Mesh_GetVertices_mCC533BC8D4A9F14BA1A54BABB11B01750C153015
                  ((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)pOVar26,
                   *(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 **)(unaff_EBP + -0x8c),
                   (MethodInfo *)0x0);
        Mesh_GetUVs_m96301FD499B68EE943AAD288935AD0E3012B4E22
                  ((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)pOVar26,0,
                   *(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 **)(unaff_EBP + -0x78),
                   (MethodInfo *)0x0);
        Mesh_GetNormals_m6B9DD7FDA70DF058D215915597BCBF6450D6E243
                  ((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)pOVar26,
                   *(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 **)(unaff_EBP + -0x108),
                   (MethodInfo *)0x0);
        Mesh_GetTangents_m950F26B38C1009C9B65C3C5B27785A2076C28351
                  ((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)pOVar26,
                   *(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A **)(unaff_EBP + -0x10c),
                   (MethodInfo *)0x0);
        Mesh_GetTriangles_m2A219EA6034D366619F22C912BF4BB911E2D06FB
                  ((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)pOVar26,
                   *(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 **)(unaff_EBP + -0x28),0,
                   (MethodInfo *)0x0);
        *(undefined4 *)(unaff_EBP + -0x2a8) = *(undefined4 *)(unaff_EBP + -800);
        *(undefined4 *)(unaff_EBP + -0x2a4) = *(undefined4 *)(unaff_EBP + -0x31c);
        *(undefined4 *)(unaff_EBP + -0x2a0) = *(undefined4 *)(unaff_EBP + -0x318);
        *(undefined4 *)(unaff_EBP + -0x29c) = *(undefined4 *)(unaff_EBP + -0x314);
        *(undefined4 *)(unaff_EBP + -0x2b8) = *(undefined4 *)(unaff_EBP + -0x310);
        *(undefined4 *)(unaff_EBP + -0x2b4) = *(undefined4 *)(unaff_EBP + -0x30c);
        *(undefined4 *)(unaff_EBP + -0x2b0) = *(undefined4 *)(unaff_EBP + -0x308);
        *(undefined4 *)(unaff_EBP + -0x2ac) = *(undefined4 *)(unaff_EBP + -0x304);
        *(undefined4 *)(unaff_EBP + -0x2c8) = *(undefined4 *)(unaff_EBP + -0x300);
        *(undefined4 *)(unaff_EBP + -0x2c4) = *(undefined4 *)(unaff_EBP + -0x2fc);
        *(undefined4 *)(unaff_EBP + -0x2c0) = *(undefined4 *)(unaff_EBP + -0x2f8);
        *(undefined4 *)(unaff_EBP + -700) = *(undefined4 *)(unaff_EBP + -0x2f4);
        *(undefined4 *)(unaff_EBP + -0x2d8) = *(undefined4 *)(unaff_EBP + -0x2f0);
        *(undefined4 *)(unaff_EBP + -0x2d4) = *(undefined4 *)(unaff_EBP + -0x2ec);
        *(undefined4 *)(unaff_EBP + -0x2d0) = *(undefined4 *)(unaff_EBP + -0x2e8);
        *(undefined4 *)(unaff_EBP + -0x2cc) = *(undefined4 *)(unaff_EBP + -0x2e4);
        pTVar28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                            ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pMVar3,
                             (MethodInfo *)0x0);
        if (pTVar28 != (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) {
          pMVar29 = Transform_get_localToWorldMatrix_m6B810B0F20BA5DE48009461A4D662DD8BFF6A3CC
                              ((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                               (unaff_EBP + -0x480),pTVar28,(MethodInfo *)0x0);
          MVar9.___m01_4 = (float)*(undefined4 *)(unaff_EBP + -0x2b8);
          MVar9._0_16_ = *(undefined1 (*) [16])(unaff_EBP + -0x2a8);
          MVar9.___m11_5 = (float)*(undefined4 *)(unaff_EBP + -0x2b4);
          MVar9.___m21_6 = (float)*(undefined4 *)(unaff_EBP + -0x2b0);
          MVar9.___m31_7 = (float)*(undefined4 *)(unaff_EBP + -0x2ac);
          MVar9.___m02_8 = (float)*(undefined4 *)(unaff_EBP + -0x2c8);
          MVar9.___m12_9 = (float)*(undefined4 *)(unaff_EBP + -0x2c4);
          MVar9.___m22_10 = (float)*(undefined4 *)(unaff_EBP + -0x2c0);
          MVar9.___m32_11 = (float)*(undefined4 *)(unaff_EBP + -700);
          MVar9.___m03_12 = (float)*(undefined4 *)(unaff_EBP + -0x2d8);
          MVar9.___m13_13 = (float)*(undefined4 *)(unaff_EBP + -0x2d4);
          MVar9.___m23_14 = (float)*(undefined4 *)(unaff_EBP + -0x2d0);
          MVar9.___m33_15 = *(float *)(unaff_EBP + -0x2cc);
          MVar10.___m23_14._2_2_ = (short)((uint)pMVar29->___m23_14 >> 0x10);
          MVar10._0_58_ = *(undefined1 (*) [58])pMVar29;
          MVar10.___m33_15 = pMVar29->___m33_15;
          pMVar29 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F
                              ((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                               (unaff_EBP + -0x4c0),MVar9,MVar10,(MethodInfo *)0x0);
          pLVar46 = *(List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B **)(unaff_EBP + -0x10c);
          fVar6 = pMVar29->___m10_1;
          fVar7 = pMVar29->___m20_2;
          fVar8 = pMVar29->___m30_3;
          *(float *)(unaff_EBP + -0x3f0) = pMVar29->___m00_0;
          *(float *)(unaff_EBP + -0x3ec) = fVar6;
          *(float *)(unaff_EBP + -1000) = fVar7;
          *(float *)(unaff_EBP + -0x3e4) = fVar8;
          fVar6 = pMVar29->___m11_5;
          fVar7 = pMVar29->___m21_6;
          fVar8 = pMVar29->___m31_7;
          *(float *)(unaff_EBP + -0x3e0) = pMVar29->___m01_4;
          *(float *)(unaff_EBP + -0x3dc) = fVar6;
          *(float *)(unaff_EBP + -0x3d8) = fVar7;
          *(float *)(unaff_EBP + -0x3d4) = fVar8;
          fVar6 = pMVar29->___m12_9;
          fVar7 = pMVar29->___m22_10;
          fVar8 = pMVar29->___m32_11;
          *(float *)(unaff_EBP + -0x3d0) = pMVar29->___m02_8;
          *(float *)(unaff_EBP + -0x3cc) = fVar6;
          *(float *)(unaff_EBP + -0x3c8) = fVar7;
          *(float *)(unaff_EBP + -0x3c4) = fVar8;
          fVar6 = pMVar29->___m13_13;
          fVar7 = pMVar29->___m23_14;
          fVar8 = pMVar29->___m33_15;
          *(float *)(unaff_EBP + -0x3c0) = pMVar29->___m03_12;
          *(float *)(unaff_EBP + -0x3bc) = fVar6;
          *(float *)(unaff_EBP + -0x3b8) = fVar7;
          *(float *)(unaff_EBP + -0x3b4) = fVar8;
          if (pLVar46 != (List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B *)0x0) {
            pLVar41 = *(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)(unaff_EBP + -0x28);
            iVar22 = pLVar46->____size_2;
            *(int *)(unaff_EBP + -0x68) = iVar22;
            if (pLVar41 != (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)0x0) {
              iVar45 = pLVar41->____size_2;
              *(int *)(unaff_EBP + -0x88) = iVar45;
              if (*(char *)(unaff_EBP + -0xa5) != '\0') {
                iVar45 = iVar45 / 2;
                *(int *)(unaff_EBP + -0x5c) = iVar45;
                iVar22 = iVar45;
                while (iVar44 = iVar22 + -3, -1 < iVar44) {
                  pGVar30 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                      (pLVar41,iVar44,
                                       List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var
                                      );
                  *(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 **)(unaff_EBP + -0x30) =
                       pGVar30;
                  pGVar30 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                      (*(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)
                                        (unaff_EBP + -0x28),iVar22 + -2,
                                       List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var
                                      );
                  *(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 **)(unaff_EBP + -0x58) =
                       pGVar30;
                  pGVar30 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                      (*(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)
                                        (unaff_EBP + -0x28),iVar22 + -1,
                                       List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var
                                      );
                  *(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 **)(unaff_EBP + -100) =
                       pGVar30;
                  iVar45 = iVar45 + iVar44;
                  pGVar30 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                      (*(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)
                                        (unaff_EBP + -0x28),iVar45,
                                       List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var
                                      );
                  *(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 **)(unaff_EBP + -0x38) =
                       pGVar30;
                  pGVar30 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                      (*(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)
                                        (unaff_EBP + -0x28),iVar45 + 2,
                                       List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var
                                      );
                  *(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 **)(unaff_EBP + -0x60) =
                       pGVar30;
                  pGVar30 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                      (*(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)
                                        (unaff_EBP + -0x28),iVar45 + 1,
                                       List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var
                                      );
                  if (((*(int *)(unaff_EBP + -0x30) == *(int *)(unaff_EBP + -0x38)) &&
                      (*(int *)(unaff_EBP + -0x58) == *(int *)(unaff_EBP + -0x60))) &&
                     (*(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 **)(unaff_EBP + -100)
                      == pGVar30)) {
                    List_1_RemoveRange_m3775CEC5D6576A395D657F5D0382875DA79D542B_gshared
                              (*(List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 **)
                                (unaff_EBP + -0x28),iVar45,3,
                               List_1_RemoveRange_m415CC40F3C018F1D693A921F3C55EBA0C7E36086_RuntimeMethod_var
                              );
                  }
                  iVar45 = *(int *)(unaff_EBP + -0x5c);
                  pLVar41 = *(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)
                             (unaff_EBP + -0x28);
                  iVar22 = iVar44;
                }
                iVar45 = pLVar41->____size_2;
                iVar22 = *(int *)(unaff_EBP + -0x68);
                pLVar46 = *(List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B **)(unaff_EBP + -0x10c)
                ;
                *(int *)(unaff_EBP + -0x88) = iVar45;
              }
              iVar44 = 0;
LAB_103e0101:
              *(int *)(unaff_EBP + -0x84) = iVar44;
LAB_103e0107:
              if (iVar45 <= iVar44) goto LAB_103dfda0;
              if (iVar22 != 0) {
                pGVar30 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                    (pLVar41,iVar44,
                                     List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var
                                    );
                pAVar31 = List_1_get_Item_m3381EC9666791D6F0F66A792B066A3C44194CB0E_inline
                                    ((Action_t83AC0DDF06C96E2330A7F1FD4688409FD8704429 *)
                                     (unaff_EBP + -0x420),pLVar46,(int)pGVar30,
                                     List_1_get_Item_mBC15B4BA533085E756DCF99A50854221DC56EACD_RuntimeMethod_var
                                    );
                if ((float)pAVar31->___actionId_4 <= __real_3f000000 &&
                    __real_3f000000 != (float)pAVar31->___actionId_4) goto code_r0x103e0148;
              }
              iVar42 = -1;
              iVar22 = 0;
              *(undefined4 *)(unaff_EBP + -0x38) = 0xffffffff;
              *(undefined4 *)(unaff_EBP + -100) = 0xffffffff;
              *(undefined4 *)(unaff_EBP + -0xd0) = 0xffffffff;
              *(undefined4 *)(unaff_EBP + -0x58) = 0xffffffff;
              *(undefined4 *)(unaff_EBP + -0x5c) = 0xffffffff;
              *(undefined4 *)(unaff_EBP + -200) = 0xffffffff;
              *(undefined4 *)(unaff_EBP + -0x60) = 0xffffffff;
              *(undefined4 *)(unaff_EBP + -0x6c) = 0xffffffff;
              while( true ) {
                *(int *)(unaff_EBP + -0x30) = iVar22;
                *(int *)(unaff_EBP + -0xd4) = iVar42;
                pMVar19 =
                List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var;
                if (2 < iVar22) break;
                *(int *)(unaff_EBP + -0x84) = iVar44 + 1;
                pGVar30 = List_1_get_Item_m1E85E7CDA3459102B9FD665388559843378C2B4C_inline
                                    (*(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)
                                      (unaff_EBP + -0x28),iVar44,pMVar19);
                if (*(List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E **)(unaff_EBP + -0x8c) ==
                    (List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E *)0x0) goto LAB_103e28c9;
                peVar32 = List_1_get_Item_m05503F475DFF429174902337394B6C6DE3713CCD_inline
                                    ((eoeYwvfgkcyqvOuhSvCpfjKvcGW_t36596F2FF79D37D2776C7BB369E698B363118273
                                      *)(unaff_EBP + -0x350),
                                     *(List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E **)
                                      (unaff_EBP + -0x8c),(int)pGVar30,
                                     List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var
                                    );
                *(undefined8 *)(unaff_EBP + -0x16c) = *(undefined8 *)peVar32;
                *(String_t **)(unaff_EBP + -0x164) = peVar32->___pMiBnalMLaKhnIIVCmUXzEYnDvX_2;
                if (*(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 **)(unaff_EBP + -0x78) ==
                    (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)0x0) goto LAB_103e28c9;
                VVar47 = List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_inline
                                   (*(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 **)
                                     (unaff_EBP + -0x78),(int)pGVar30,
                                    List_1_get_Item_m3E1AEDD64868D9F6901AFBF0FA6B0A7A0001BA1E_RuntimeMethod_var
                                   );
                uVar1 = *(undefined4 *)(unaff_EBP + -0x1e8);
                *(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(unaff_EBP + -0x1e8) = VVar47;
                *(undefined4 *)(unaff_EBP + -0x1a8) = uVar1;
                *(undefined4 *)(unaff_EBP + -0x1a4) = *(undefined4 *)(unaff_EBP + -0x1e4);
                if (*(List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E **)(unaff_EBP + -0x108) ==
                    (List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E *)0x0) goto LAB_103e28c9;
                peVar32 = List_1_get_Item_m05503F475DFF429174902337394B6C6DE3713CCD_inline
                                    ((eoeYwvfgkcyqvOuhSvCpfjKvcGW_t36596F2FF79D37D2776C7BB369E698B363118273
                                      *)(unaff_EBP + -0x360),
                                     *(List_1_t53AF55B454D8F397374C0C834D8CED4D0F98FB6E **)
                                      (unaff_EBP + -0x108),(int)pGVar30,
                                     List_1_get_Item_m554804AC447B0BA1F93C64E863FF7DB0527AFED9_RuntimeMethod_var
                                    );
                *(undefined8 *)(unaff_EBP + -0x178) = *(undefined8 *)peVar32;
                *(String_t **)(unaff_EBP + -0x170) = peVar32->___pMiBnalMLaKhnIIVCmUXzEYnDvX_2;
                VVar17.___z_4 = *(float *)(unaff_EBP + -0x164);
                VVar17._0_8_ = *(undefined8 *)(unaff_EBP + -0x16c);
                pVVar33 = Matrix4x4_MultiplyPoint_mE92BEE4DED3B602983C2BBE06C44AD29564EDA83
                                    ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                     (unaff_EBP + -0x370),
                                     (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                                     (unaff_EBP + -0x3f0),VVar17,(MethodInfo *)0x0);
                *(undefined8 *)(unaff_EBP + -0x16c) = *(undefined8 *)pVVar33;
                *(float *)(unaff_EBP + -0x164) = pVVar33->___z_4;
                VVar18.___z_4 = *(float *)(unaff_EBP + -0x170);
                VVar18._0_8_ = *(undefined8 *)(unaff_EBP + -0x178);
                pVVar33 = Matrix4x4_MultiplyVector_m88C4BE23EB0B45BB701514AF3E1CA5A857F8212C
                                    ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)
                                     (unaff_EBP + -0x248),
                                     (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                                     (unaff_EBP + -0x3f0),VVar18,(MethodInfo *)0x0);
                pMVar19 =
                Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F_RuntimeMethod_var
                ;
                pDVar4 = *(Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 **)
                          (unaff_EBP + -0x14c);
                *(undefined8 *)(unaff_EBP + -0x178) = *(undefined8 *)pVVar33;
                *(float *)(unaff_EBP + -0x170) = pVVar33->___z_4;
                VVar11.___z_4._0_2_ = (short)*(undefined4 *)(unaff_EBP + -0x164);
                VVar11._0_8_ = *(undefined8 *)(unaff_EBP + -0x16c);
                VVar11.___z_4._2_2_ = (short)((uint)*(undefined4 *)(unaff_EBP + -0x164) >> 0x10);
                bVar21 = Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
                                   ((Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *)pDVar4
                                    ,VVar11,(int *)(unaff_EBP + -0xd4),pMVar19);
                pMVar19 =
                Dictionary_2_Add_m9AC91289D62D2E402ADFE8851B2AB06D455B575B_RuntimeMethod_var;
                if (!bVar21) {
                  pIVar38 = *(Il2CppObject **)(unaff_EBP + -0x34);
                  puVar43 = (undefined1 *)((int)&pIVar38->field0_0x0 + 1);
                  *(undefined1 **)(unaff_EBP + -0x34) = puVar43;
                  *(undefined1 **)(unaff_EBP + -0xc0) = puVar43;
                  *(Il2CppObject **)(unaff_EBP + -0xd4) = pIVar38;
                  iVar12.___z_2._0_2_ = (short)*(undefined4 *)(unaff_EBP + -0x164);
                  iVar12._0_8_ = *(undefined8 *)(unaff_EBP + -0x16c);
                  iVar12.___z_2._2_2_ = (short)((uint)*(undefined4 *)(unaff_EBP + -0x164) >> 0x10);
                  Dictionary_2_Add_mC7CA898B55B5DD408021AC5F79BB3CFE242FAF0C_gshared
                            (pDVar4,iVar12,pIVar38,pMVar19);
                  pIVar38 = *(Il2CppObject **)(unaff_EBP + -0x2c);
                  pSVar34 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                      ((float *)(unaff_EBP + -0x16c),
                                       _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                       pIVar38,(MethodInfo *)0x0);
                  pSVar35 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                      ((float *)(unaff_EBP + -0x168),
                                       _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                       pIVar38,(MethodInfo *)0x0);
                  pSVar36 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                      ((float *)(unaff_EBP + -0x164),
                                       _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                       *(Il2CppObject **)(unaff_EBP + -0x2c),(MethodInfo *)0x0);
                  OVar37 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                           String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                                     (_stringLiteralA26A34280DD1B7D521F02EE549D6F2B1B939A0EF,
                                      (Il2CppObject *)pSVar34,(Il2CppObject *)pSVar35,
                                      (Il2CppObject *)pSVar36,(MethodInfo *)0x0);
                  if (*(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)(unaff_EBP + -0x4c) ==
                      (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_103e28c9;
                  List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                            (*(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)
                              (unaff_EBP + -0x4c),OVar37,
                             List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var)
                  ;
                }
                pDVar5 = *(Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 **)
                          (unaff_EBP + -0x130);
                if (pDVar5 == (Dictionary_2_tB4F178E5AD7F0B1D880F4624DC4ED82D5052F920 *)0x0)
                goto LAB_103e28c9;
                iVar15.___y_1._2_2_ = (short)((uint)*(undefined4 *)(unaff_EBP + -0x1a4) >> 0x10);
                iVar15._0_6_ = *(undefined6 *)(unaff_EBP + -0x1a8);
                bVar21 = Dictionary_2_TryGetValue_mA3D568BC1487F80294B1510559EDAE366F1F4887_gshared
                                   (pDVar5,iVar15,(Il2CppObject **)(unaff_EBP + -0xd0),
                                    Dictionary_2_TryGetValue_m375A0838D4429C9E3FE27D14B80AEA51C86A1265_RuntimeMethod_var
                                   );
                pMVar19 =
                Dictionary_2_Add_m2BFB6987D35DE2246B731A46FEBD4D47776B7E78_RuntimeMethod_var;
                if (bVar21) {
                  pIVar38 = *(Il2CppObject **)(unaff_EBP + -0x2c);
                }
                else {
                  pIVar38 = *(Il2CppObject **)(unaff_EBP + -0x3c);
                  puVar43 = (undefined1 *)((int)&pIVar38->field0_0x0 + 1);
                  *(Il2CppObject **)(unaff_EBP + -0xd0) = pIVar38;
                  *(undefined1 **)(unaff_EBP + -0x3c) = puVar43;
                  *(undefined1 **)(unaff_EBP + -0xb4) = puVar43;
                  iVar16.___y_1._0_2_ = (short)*(undefined4 *)(unaff_EBP + -0x1a4);
                  iVar16.___x_0 = *(undefined4 *)(unaff_EBP + -0x1a8);
                  iVar16.___y_1._2_2_ = (short)((uint)*(undefined4 *)(unaff_EBP + -0x1a4) >> 0x10);
                  Dictionary_2_Add_m01FEB2F3B89795A9E2DF74E83079B76347F934F6_gshared
                            (pDVar5,iVar16,pIVar38,pMVar19);
                  pIVar38 = *(Il2CppObject **)(unaff_EBP + -0x2c);
                  pSVar35 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                      ((float *)(unaff_EBP + -0x1a8),
                                       _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                       pIVar38,(MethodInfo *)0x0);
                  *(double *)(unaff_EBP + -0x128) = (double)*(float *)(unaff_EBP + -0x1a4);
                  _CIfmod();
                  pSVar34 = _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3;
                  *(float *)(unaff_EBP + -0x124) = (float)extraout_ST0;
                  pSVar34 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                      ((float *)(unaff_EBP + -0x124),pSVar34,pIVar38,
                                       (MethodInfo *)0x0);
                  OVar37 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                           String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66
                                     (_stringLiteral79443EA6B541034C604FE9A19395BF95CCE71A22,
                                      (Il2CppObject *)pSVar35,(Il2CppObject *)pSVar34,
                                      (MethodInfo *)0x0);
                  if (*(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)(unaff_EBP + -0x50) ==
                      (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_103e28c9;
                  List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                            (*(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)
                              (unaff_EBP + -0x50),OVar37,
                             List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var)
                  ;
                }
                pDVar4 = *(Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 **)
                          (unaff_EBP + -0x134);
                if (pDVar4 == (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)0x0)
                goto LAB_103e28c9;
                VVar13.___z_4._2_2_ = (short)((uint)*(undefined4 *)(unaff_EBP + -0x170) >> 0x10);
                VVar13._0_10_ = *(unkbyte10 *)(unaff_EBP + -0x178);
                bVar21 = Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F
                                   ((Dictionary_2_t8E87E58777505762FF5F4E631F2FDB80F651D1C7 *)pDVar4
                                    ,VVar13,(int *)(unaff_EBP + -200),
                                    Dictionary_2_TryGetValue_m51EC0B2C281B630CFFE71169FCB6AF1F3E35826F_RuntimeMethod_var
                                   );
                pMVar19 =
                Dictionary_2_Add_m9AC91289D62D2E402ADFE8851B2AB06D455B575B_RuntimeMethod_var;
                if (!bVar21) {
                  pIVar39 = *(Il2CppObject **)(unaff_EBP + -0x70);
                  puVar43 = (undefined1 *)((int)&pIVar39->field0_0x0 + 1);
                  *(undefined1 **)(unaff_EBP + -0x70) = puVar43;
                  *(undefined1 **)(unaff_EBP + -0xe8) = puVar43;
                  *(Il2CppObject **)(unaff_EBP + -200) = pIVar39;
                  iVar14.___z_2._0_2_ = (short)*(undefined4 *)(unaff_EBP + -0x170);
                  iVar14._0_8_ = *(undefined8 *)(unaff_EBP + -0x178);
                  iVar14.___z_2._2_2_ = (short)((uint)*(undefined4 *)(unaff_EBP + -0x170) >> 0x10);
                  Dictionary_2_Add_mC7CA898B55B5DD408021AC5F79BB3CFE242FAF0C_gshared
                            (pDVar4,iVar14,pIVar39,pMVar19);
                  pSVar34 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                      ((float *)(unaff_EBP + -0x178),
                                       _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                       pIVar38,(MethodInfo *)0x0);
                  pSVar35 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                      ((float *)(unaff_EBP + -0x174),
                                       _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                       *(Il2CppObject **)(unaff_EBP + -0x2c),(MethodInfo *)0x0);
                  pSVar36 = Single_ToString_m7631D332703B4197EAA7DC0BA067CE7E16334D8B
                                      ((float *)(unaff_EBP + -0x170),
                                       _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3,
                                       *(Il2CppObject **)(unaff_EBP + -0x2c),(MethodInfo *)0x0);
                  OVar37 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                           String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6
                                     (_stringLiteral93F9354DB37CAD8FD3A321410534387A582EED79,
                                      (Il2CppObject *)pSVar34,(Il2CppObject *)pSVar35,
                                      (Il2CppObject *)pSVar36,(MethodInfo *)0x0);
                  if (*(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)(unaff_EBP + -0x90) ==
                      (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_103e28c9;
                  List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                            (*(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)
                              (unaff_EBP + -0x90),OVar37,
                             List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var)
                  ;
                }
                uVar1 = *(undefined4 *)(unaff_EBP + -100);
                iVar42 = *(int *)(unaff_EBP + -0x38);
                iVar44 = *(int *)(unaff_EBP + -0x84);
                *(int *)(unaff_EBP + -100) = *(int *)(unaff_EBP + -0xd4) + 1;
                iVar22 = *(int *)(unaff_EBP + -200);
                *(undefined4 *)(unaff_EBP + -0x38) = uVar1;
                *(undefined4 *)(unaff_EBP + -200) = *(undefined4 *)(unaff_EBP + -0x60);
                uVar1 = *(undefined4 *)(unaff_EBP + -0x6c);
                *(int *)(unaff_EBP + -0x6c) = iVar22 + 1;
                iVar22 = *(int *)(unaff_EBP + -0xd0);
                *(undefined4 *)(unaff_EBP + -0x60) = uVar1;
                *(undefined4 *)(unaff_EBP + -0xd0) = *(undefined4 *)(unaff_EBP + -0x58);
                uVar1 = *(undefined4 *)(unaff_EBP + -0x5c);
                *(int *)(unaff_EBP + -0x5c) = iVar22 + 1;
                *(undefined4 *)(unaff_EBP + -0x58) = uVar1;
                iVar22 = *(int *)(unaff_EBP + -0x30) + 1;
              }
              iVar45 = *(int *)(unaff_EBP + -0x88);
              pLVar41 = *(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)(unaff_EBP + -0x28);
              iVar22 = *(int *)(unaff_EBP + -0x68);
              pLVar46 = *(List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B **)(unaff_EBP + -0x10c);
              if (iVar42 != -1) {
                pOVar24 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)
                          il2cpp_array_new_specific
                                    (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var
                                     ,9);
                *(undefined4 *)(unaff_EBP + -0x228) = *(undefined4 *)(unaff_EBP + -0xd4);
                pIVar38 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                           ,(void *)(unaff_EBP + -0x228));
                if (pOVar24 == (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE *)0x0)
                goto LAB_103e28c9;
                if (pIVar38 != (Il2CppObject *)0x0) {
                  pIVar39 = IsInst(pIVar38,*(Il2CppClass **)(pOVar24->_padding_ + 0x20));
                  if (pIVar39 == (Il2CppObject *)0x0) {
                    pEVar40 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                    il2cpp_codegen_raise_exception(pEVar40,(MethodInfo *)0x0);
                  }
                }
                ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar24,0,pIVar38);
                *(undefined4 *)(unaff_EBP + -0x104) = *(undefined4 *)(unaff_EBP + -0xd0);
                pIVar38 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                           ,(void *)(unaff_EBP + -0x104));
                if (pIVar38 != (Il2CppObject *)0x0) {
                  pIVar39 = IsInst(pIVar38,*(Il2CppClass **)(pOVar24->_padding_ + 0x20));
                  if (pIVar39 == (Il2CppObject *)0x0) {
                    pEVar40 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                    il2cpp_codegen_raise_exception(pEVar40,(MethodInfo *)0x0);
                  }
                }
                ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar24,1,pIVar38);
                *(undefined4 *)(unaff_EBP + -0x100) = *(undefined4 *)(unaff_EBP + -200);
                pIVar38 = il2cpp_value_box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var
                                           ,(void *)(unaff_EBP + -0x100));
                if (pIVar38 != (Il2CppObject *)0x0) {
                  pIVar39 = IsInst(pIVar38,*(Il2CppClass **)(pOVar24->_padding_ + 0x20));
                  if (pIVar39 == (Il2CppObject *)0x0) {
                    pEVar40 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                    il2cpp_codegen_raise_exception(pEVar40,(MethodInfo *)0x0);
                  }
                }
                ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar24,2,pIVar38);
                pIVar20 = Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
                *(undefined4 *)(unaff_EBP + -0xfc) = *(undefined4 *)(unaff_EBP + -0x38);
                pIVar38 = il2cpp_value_box(pIVar20,(void *)(unaff_EBP + -0xfc));
                if (pIVar38 != (Il2CppObject *)0x0) {
                  pIVar39 = IsInst(pIVar38,*(Il2CppClass **)(pOVar24->_padding_ + 0x20));
                  if (pIVar39 == (Il2CppObject *)0x0) {
                    pEVar40 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                    il2cpp_codegen_raise_exception(pEVar40,(MethodInfo *)0x0);
                  }
                }
                ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar24,3,pIVar38);
                pIVar20 = Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
                *(undefined4 *)(unaff_EBP + -0xf8) = *(undefined4 *)(unaff_EBP + -0x58);
                pIVar38 = il2cpp_value_box(pIVar20,(void *)(unaff_EBP + -0xf8));
                if (pIVar38 != (Il2CppObject *)0x0) {
                  pIVar39 = IsInst(pIVar38,*(Il2CppClass **)(pOVar24->_padding_ + 0x20));
                  if (pIVar39 == (Il2CppObject *)0x0) {
                    pEVar40 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                    il2cpp_codegen_raise_exception(pEVar40,(MethodInfo *)0x0);
                  }
                }
                ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar24,4,pIVar38);
                pIVar20 = Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
                *(undefined4 *)(unaff_EBP + -0xf4) = *(undefined4 *)(unaff_EBP + -0x60);
                pIVar38 = il2cpp_value_box(pIVar20,(void *)(unaff_EBP + -0xf4));
                if (pIVar38 != (Il2CppObject *)0x0) {
                  pIVar39 = IsInst(pIVar38,*(Il2CppClass **)(pOVar24->_padding_ + 0x20));
                  if (pIVar39 == (Il2CppObject *)0x0) {
                    pEVar40 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                    il2cpp_codegen_raise_exception(pEVar40,(MethodInfo *)0x0);
                  }
                }
                ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar24,5,pIVar38);
                pIVar20 = Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
                *(undefined4 *)(unaff_EBP + -0xac) = *(undefined4 *)(unaff_EBP + -100);
                pIVar38 = il2cpp_value_box(pIVar20,(void *)(unaff_EBP + -0xac));
                if (pIVar38 != (Il2CppObject *)0x0) {
                  pIVar39 = IsInst(pIVar38,*(Il2CppClass **)(pOVar24->_padding_ + 0x20));
                  if (pIVar39 == (Il2CppObject *)0x0) {
                    pEVar40 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                    il2cpp_codegen_raise_exception(pEVar40,(MethodInfo *)0x0);
                  }
                }
                ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar24,6,pIVar38);
                pIVar20 = Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
                *(undefined4 *)(unaff_EBP + -0x98) = *(undefined4 *)(unaff_EBP + -0x5c);
                pIVar38 = il2cpp_value_box(pIVar20,(void *)(unaff_EBP + -0x98));
                if (pIVar38 != (Il2CppObject *)0x0) {
                  pIVar39 = IsInst(pIVar38,*(Il2CppClass **)(pOVar24->_padding_ + 0x20));
                  if (pIVar39 == (Il2CppObject *)0x0) {
                    pEVar40 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                    il2cpp_codegen_raise_exception(pEVar40,(MethodInfo *)0x0);
                  }
                }
                ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar24,7,pIVar38);
                pIVar20 = Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
                *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + -0x6c);
                pIVar38 = il2cpp_value_box(pIVar20,(void *)(unaff_EBP + -0x24));
                if (pIVar38 != (Il2CppObject *)0x0) {
                  pIVar39 = IsInst(pIVar38,*(Il2CppClass **)(pOVar24->_padding_ + 0x20));
                  if (pIVar39 == (Il2CppObject *)0x0) {
                    pEVar40 = il2cpp_codegen_get_array_type_mismatch_exception();
                    /* WARNING: Subroutine does not return */
                    il2cpp_codegen_raise_exception(pEVar40,(MethodInfo *)0x0);
                  }
                }
                ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE::SetAt(pOVar24,8,pIVar38);
                OVar37 = (OrientedModule_tD15D03D4F343A41B93F51D1C2A4C01B45F864360)
                         String_Format_mCED6767EA5FEE6F15ABCD5B4F9150D1284C2795B
                                   (_stringLiteralD3A51F9772FB32EDF87B5B88D5BDD5815CBD9890,pOVar24,
                                    (MethodInfo *)0x0);
                if (*(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)(unaff_EBP + -0x54) ==
                    (List_1_tAC387D40AA794C98425777894B362093CF4E78AC *)0x0) goto LAB_103e28c9;
                List_1_Add_m26E436E942C0D78604AF993391CF75E380733F23_gshared
                          (*(List_1_tAC387D40AA794C98425777894B362093CF4E78AC **)(unaff_EBP + -0x54)
                           ,OVar37,
                           List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
                iVar44 = *(int *)(unaff_EBP + -0x84);
                iVar45 = *(int *)(unaff_EBP + -0x88);
                pLVar41 = *(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)(unaff_EBP + -0x28);
                iVar22 = *(int *)(unaff_EBP + -0x68);
                pLVar46 = *(List_1_tB3BD89AB8461F1F93A48898145C094951CFC2F0B **)(unaff_EBP + -0x10c)
                ;
              }
              goto LAB_103e0107;
            }
          }
        }
      }
    }
  }
LAB_103e28c9:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
code_r0x103e0148:
  iVar45 = *(int *)(unaff_EBP + -0x88);
  iVar44 = iVar44 + 3;
  pLVar41 = *(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 **)(unaff_EBP + -0x28);
  iVar22 = *(int *)(unaff_EBP + -0x68);
  goto LAB_103e0101;
}
