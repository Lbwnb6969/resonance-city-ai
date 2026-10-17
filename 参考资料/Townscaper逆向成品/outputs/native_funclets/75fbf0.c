// RVA 0x75fbf0 | Recovered.function.called_by_75fa10
// PDB: FUN_1075fbf0
// Body: [[1075fbf0, 1075fc58] [1075fc5c, 107600aa]]
// Direct callees:
// 101280f0 il2cpp_runtime_class_init
// 101d9d50 U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
// 1021f8b0 Dictionary_2_Remove_m14B2D4D5F17FDEAB521299EE89FFBC7F12B5BD13_gshared
// 102272c0 Dictionary_2_get_Item_mAC9332C290BEC9951A56C26A360876B4D5814A3E_gshared
// 10419890 Intersections_OrientedBoxOrientedBox_m894BFB99DB493B356A4359E30861B8FDE7751B72
// 10441630 DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
// 107490e0 int3_ToString_m174725CCEE10A8880C17E44DB21966CF484EE667_inline
// 10756500 PropCollider_GetMatrix_mA1BC0388906B93CD2EC0B04D8EE248564AFFB18B
// 1075ac70 PropPlacer_GetChunkMatrix_m9812F8BC3681D6DF69C5CA631F56713EEFAA3975
// 107600cf FUN_107600cf
// 10a377b0 Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD
// 10a37840 Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519
// 10a3c770 Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
// 10a439d0 Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F
// 10a43c00 Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
// 10a4a8b0 Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
// 10f022b0 String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78
// 11036ff0 List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared

void FUN_1075fbf0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  PropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47 *pPVar4;
  Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *pDVar5;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar6;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 MVar7;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar8;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar9;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar10;
  Il2CppClass *pIVar11;
  bool bVar12;
  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *pVVar13;
  int iVar14;
  int iVar15;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar16;
  Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *pDVar17;
  String_t *pSVar18;
  String_t *pSVar19;
  int iVar20;
  int iVar21;
  int unaff_EBP;
  int unaff_ESI;
  uint uVar22;
  int unaff_EDI;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;

  *(int *)(unaff_EBP + -0x1c) = unaff_ESI;
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x11),
             (MethodInfo *)0x0);
  if (*(Exception_t **)(unaff_EBP + -0x18) != (Exception_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_exception(*(Exception_t **)(unaff_EBP + -0x18),(MethodInfo *)0x0);
  }
  if ((unaff_ESI != 0) && (*(int *)(unaff_EBP + -0x68 + unaff_ESI * 4) == 0x45)) {
    *(int *)(unaff_EBP + -0x1c) = unaff_ESI + -1;
    *(int *)(unaff_EBP + -0x58) = unaff_ESI + -1;
  }
  U3CBlockingU3Ed__3_System_IDisposable_Dispose_mEF0C01D581B3CCBB1A69A8FDDD3CAE41E08DFC43
            ((U3CBlockingU3Ed__3_t0ABB38B9148453B222005009759FAEAAA1F193A4 *)(unaff_EBP + -0x12),
             (MethodInfo *)_stringLiteralDA492A6BB9530F4E631834FABB6B9E63E3E4FEF1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (unaff_EDI != 0) {
    iVar14 = *(int *)(unaff_EDI + 0xc);
    while( true ) {
      uVar22 = iVar14 - 1;
      *(uint *)(unaff_EBP + -0x40) = uVar22;
      if ((int)uVar22 < 0) {
        *(undefined1 *)(unaff_EBP + -4) = 0;
        *(undefined4 *)(unaff_EBP + -100 + *(int *)(unaff_EBP + -0x1c) * 4) = 0x201;
        *(int *)(unaff_EBP + -0x58) = *(int *)(unaff_EBP + -0x58) + 1;
        FUN_107600cf();
        return;
      }
      if (*(uint *)(unaff_EDI + 0xc) <= uVar22) {
                    /* WARNING: Subroutine does not return */
        ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                  ((MethodInfo *)0x0);
      }
      pPVar4 = *(PropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47 **)
                (*(int *)(unaff_EDI + 8) + 0x10 + uVar22 * 4);
      *(PropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47 **)(unaff_EBP + -0x38) = pPVar4;
      if (pPVar4 == (PropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47 *)0x0) break;
      pVVar13 = Bounds_get_min_mEDCEC21FB04A8E7196EDE841F7BE9042E1908519
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x15c)
                           ,&pPVar4->___worldBounds_6,(MethodInfo *)0x0);
      fVar28 = __real_3f000000;
      uVar1._0_4_ = pVVar13->___x_2;
      uVar1._4_4_ = pVVar13->___y_3;
      fVar27 = pVVar13->___z_4;
      *(undefined8 *)(unaff_EBP + -0x84) = uVar1;
      *(undefined8 *)(unaff_EBP + -0x90) = uVar1;
      *(undefined8 *)(unaff_EBP + -0x9c) = *(undefined8 *)pVVar13;
      *(float *)(unaff_EBP + -0x94) = fVar27;
      *(float *)(unaff_EBP + -0x30) = *(float *)(unaff_EBP + -0x84) * fVar28;
      *(float *)(unaff_EBP + -0x24) = *(float *)(unaff_EBP + -0x8c) * fVar28;
      *(float *)(unaff_EBP + -0x2c) = *(float *)(unaff_EBP + -0x94) * fVar28;
      pVVar13 = Bounds_get_max_m7562010AAD919B8449B8B90382BFBA4D83C669BD
                          ((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(unaff_EBP + -0x168)
                           ,&pPVar4->___worldBounds_6,(MethodInfo *)0x0);
      fVar28 = __real_3f000000;
      uVar2._0_4_ = pVVar13->___x_2;
      uVar2._4_4_ = pVVar13->___y_3;
      fVar27 = pVVar13->___z_4;
      *(undefined8 *)(unaff_EBP + -0xa8) = uVar2;
      *(undefined8 *)(unaff_EBP + -0xb4) = uVar2;
      *(undefined8 *)(unaff_EBP + -0xc0) = *(undefined8 *)pVVar13;
      *(float *)(unaff_EBP + -0xb8) = fVar27;
      *(float *)(unaff_EBP + -0x28) = *(float *)(unaff_EBP + -0xa8) * fVar28;
      *(float *)(unaff_EBP + -0x68) = *(float *)(unaff_EBP + -0xb0) * fVar28;
      *(float *)(unaff_EBP + -0x3c) = *(float *)(unaff_EBP + -0xb8) * fVar28;
      iVar14 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
                         (*(float *)(unaff_EBP + -0x30),(MethodInfo *)0x0);
      *(int *)(unaff_EBP + -0x70) = iVar14;
      iVar14 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
                         (*(float *)(unaff_EBP + -0x24),(MethodInfo *)0x0);
      *(int *)(unaff_EBP + -0x6c) = iVar14;
      iVar14 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E
                         (*(float *)(unaff_EBP + -0x2c),(MethodInfo *)0x0);
      *(int *)(unaff_EBP + -0x20) = iVar14;
      iVar15 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F
                         (*(float *)(unaff_EBP + -0x28),(MethodInfo *)0x0);
      *(int *)(unaff_EBP + -0x2c) = iVar15;
      iVar15 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F
                         (*(float *)(unaff_EBP + -0x68),(MethodInfo *)0x0);
      *(int *)(unaff_EBP + -0x30) = iVar15;
      iVar15 = Mathf_CeilToInt_m3A3E7C0F6A3CF731411BB90F264F989D8311CC6F
                         (*(float *)(unaff_EBP + -0x3c),(MethodInfo *)0x0);
      *(int *)(unaff_EBP + -0x3c) = iVar15;
      pMVar16 = PropCollider_GetMatrix_mA1BC0388906B93CD2EC0B04D8EE248564AFFB18B
                          ((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                           (unaff_EBP + -0x1a8),pPVar4,(MethodInfo *)0x0);
      iVar15 = *(int *)(unaff_EBP + -0x30);
      fVar27 = pMVar16->___m10_1;
      fVar28 = pMVar16->___m20_2;
      fVar29 = pMVar16->___m30_3;
      *(float *)(unaff_EBP + -0x120) = pMVar16->___m00_0;
      *(float *)(unaff_EBP + -0x11c) = fVar27;
      *(float *)(unaff_EBP + -0x118) = fVar28;
      *(float *)(unaff_EBP + -0x114) = fVar29;
      fVar27 = pMVar16->___m11_5;
      fVar28 = pMVar16->___m21_6;
      fVar29 = pMVar16->___m31_7;
      *(float *)(unaff_EBP + -0x130) = pMVar16->___m01_4;
      *(float *)(unaff_EBP + -300) = fVar27;
      *(float *)(unaff_EBP + -0x128) = fVar28;
      *(float *)(unaff_EBP + -0x124) = fVar29;
      fVar27 = pMVar16->___m12_9;
      fVar28 = pMVar16->___m22_10;
      fVar29 = pMVar16->___m32_11;
      *(float *)(unaff_EBP + -0x140) = pMVar16->___m02_8;
      *(float *)(unaff_EBP + -0x13c) = fVar27;
      *(float *)(unaff_EBP + -0x138) = fVar28;
      *(float *)(unaff_EBP + -0x134) = fVar29;
      fVar27 = pMVar16->___m13_13;
      fVar28 = pMVar16->___m23_14;
      fVar29 = pMVar16->___m33_15;
      *(float *)(unaff_EBP + -0x150) = pMVar16->___m03_12;
      *(float *)(unaff_EBP + -0x14c) = fVar27;
      *(float *)(unaff_EBP + -0x148) = fVar28;
      *(float *)(unaff_EBP + -0x144) = fVar29;
      while (iVar14 < *(int *)(unaff_EBP + -0x3c)) {
        iVar21 = *(int *)(unaff_EBP + -0x2c);
        for (iVar20 = *(int *)(unaff_EBP + -0x6c); *(int *)(unaff_EBP + -0x24) = iVar20,
            iVar20 < iVar15; iVar20 = iVar20 + 1) {
          for (iVar15 = *(int *)(unaff_EBP + -0x70); *(int *)(unaff_EBP + -0x28) = iVar15,
              iVar15 < iVar21; iVar15 = iVar15 + 1) {
            *(int *)(unaff_EBP + -0x50) = iVar20;
            *(int *)(unaff_EBP + -0x54) = iVar15;
            iVar8.___z_2 = iVar14;
            iVar8._0_8_ = *(undefined8 *)(unaff_EBP + -0x54);
            pMVar16 = PropPlacer_GetChunkMatrix_m9812F8BC3681D6DF69C5CA631F56713EEFAA3975
                                ((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)
                                 (unaff_EBP + -0x1a8),
                                 *(PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 **)
                                  (unaff_EBP + 8),iVar8,(MethodInfo *)0x0);
            pIVar11 = Intersections_t5AD1E5C156D73A1FB8F6825D7FB1C42FB7DF984F_il2cpp_TypeInfo_var;
            fVar23 = pMVar16->___m00_0;
            fVar24 = pMVar16->___m10_1;
            fVar25 = pMVar16->___m20_2;
            fVar26 = pMVar16->___m30_3;
            fVar27 = pMVar16->___m01_4;
            fVar28 = pMVar16->___m11_5;
            fVar29 = pMVar16->___m21_6;
            fVar30 = pMVar16->___m31_7;
            fVar31 = pMVar16->___m02_8;
            fVar32 = pMVar16->___m12_9;
            fVar33 = pMVar16->___m22_10;
            fVar34 = pMVar16->___m32_11;
            fVar35 = pMVar16->___m03_12;
            fVar36 = pMVar16->___m13_13;
            fVar37 = pMVar16->___m23_14;
            fVar38 = pMVar16->___m33_15;
            *(float *)(unaff_EBP + -0xf0) = fVar23;
            *(float *)(unaff_EBP + -0xec) = fVar24;
            *(float *)(unaff_EBP + -0xe8) = fVar25;
            *(float *)(unaff_EBP + -0xe4) = fVar26;
            *(float *)(unaff_EBP + -0x100) = fVar27;
            *(float *)(unaff_EBP + -0xfc) = fVar28;
            *(float *)(unaff_EBP + -0xf8) = fVar29;
            *(float *)(unaff_EBP + -0xf4) = fVar30;
            *(float *)(unaff_EBP + -0x110) = fVar31;
            *(float *)(unaff_EBP + -0x10c) = fVar32;
            *(float *)(unaff_EBP + -0x108) = fVar33;
            *(float *)(unaff_EBP + -0x104) = fVar34;
            *(float *)(unaff_EBP + -0xe0) = fVar35;
            *(float *)(unaff_EBP + -0xdc) = fVar36;
            *(float *)(unaff_EBP + -0xd8) = fVar37;
            *(float *)(unaff_EBP + -0xd4) = fVar38;
            if ((pIVar11->has_cctor != '\0') && (pIVar11->cctor_finished == 0)) {
              il2cpp_runtime_class_init(pIVar11);
              fVar23 = *(float *)(unaff_EBP + -0xf0);
              fVar24 = *(float *)(unaff_EBP + -0xec);
              fVar25 = *(float *)(unaff_EBP + -0xe8);
              fVar26 = *(float *)(unaff_EBP + -0xe4);
              fVar27 = *(float *)(unaff_EBP + -0x100);
              fVar28 = *(float *)(unaff_EBP + -0xfc);
              fVar29 = *(float *)(unaff_EBP + -0xf8);
              fVar30 = *(float *)(unaff_EBP + -0xf4);
              fVar31 = *(float *)(unaff_EBP + -0x110);
              fVar32 = *(float *)(unaff_EBP + -0x10c);
              fVar33 = *(float *)(unaff_EBP + -0x108);
              fVar34 = *(float *)(unaff_EBP + -0x104);
              fVar35 = *(float *)(unaff_EBP + -0xe0);
              fVar36 = *(float *)(unaff_EBP + -0xdc);
              fVar37 = *(float *)(unaff_EBP + -0xd8);
              fVar38 = *(float *)(unaff_EBP + -0xd4);
            }
            MVar6.___m01_4 = (float)*(undefined4 *)(unaff_EBP + -0x130);
            MVar6._0_16_ = *(undefined1 (*) [16])(unaff_EBP + -0x120);
            MVar6.___m11_5 = (float)*(undefined4 *)(unaff_EBP + -300);
            MVar6.___m21_6 = (float)*(undefined4 *)(unaff_EBP + -0x128);
            MVar6.___m31_7 = (float)*(undefined4 *)(unaff_EBP + -0x124);
            MVar6.___m02_8 = (float)*(undefined4 *)(unaff_EBP + -0x140);
            MVar6.___m12_9 = (float)*(undefined4 *)(unaff_EBP + -0x13c);
            MVar6.___m22_10 = (float)*(undefined4 *)(unaff_EBP + -0x138);
            MVar6.___m32_11 = (float)*(undefined4 *)(unaff_EBP + -0x134);
            MVar6.___m03_12 = (float)*(undefined4 *)(unaff_EBP + -0x150);
            MVar6.___m13_13 = (float)*(undefined4 *)(unaff_EBP + -0x14c);
            MVar6.___m23_14 = (float)*(undefined4 *)(unaff_EBP + -0x148);
            MVar6.___m33_15 = *(float *)(unaff_EBP + -0x144);
            MVar7.___m10_1 = fVar24;
            MVar7.___m00_0 = fVar23;
            MVar7.___m20_2 = fVar25;
            MVar7.___m30_3 = fVar26;
            MVar7.___m01_4 = fVar27;
            MVar7.___m11_5 = fVar28;
            MVar7.___m21_6 = fVar29;
            MVar7.___m31_7 = fVar30;
            MVar7.___m02_8 = fVar31;
            MVar7.___m12_9 = fVar32;
            MVar7.___m22_10 = fVar33;
            MVar7.___m32_11 = fVar34;
            MVar7.___m03_12 = fVar35;
            MVar7.___m13_13 = fVar36;
            MVar7.___m23_14 = fVar37;
            MVar7.___m33_15 = fVar38;
            bVar12 = Intersections_OrientedBoxOrientedBox_m894BFB99DB493B356A4359E30861B8FDE7751B72
                               (MVar6,MVar7,(MethodInfo *)0x0);
            if (bVar12) {
              pDVar5 = *(Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 **)
                        (*(int *)(unaff_EBP + 8) + 0x24);
              if (pDVar5 == (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)0x0)
              goto LAB_10760306;
              iVar9.___z_2 = iVar14;
              iVar9._0_8_ = *(undefined8 *)(unaff_EBP + -0x54);
              pDVar17 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)
                        Dictionary_2_get_Item_mAC9332C290BEC9951A56C26A360876B4D5814A3E_gshared
                                  (pDVar5,iVar9,
                                   Dictionary_2_get_Item_m0A8D95A9C3C5FB68DB8348F91524BA84A1637321_RuntimeMethod_var
                                  );
              if (pDVar17 == (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)0x0)
              goto LAB_10760306;
              bVar12 = List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared
                                 ((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)pDVar17,
                                  *(Il2CppObject **)(unaff_EBP + -0x38),
                                  List_1_Remove_m8133B882B471FAA0D8C4F7655E672C0EDF943EBF_RuntimeMethod_var
                                 );
              if (!bVar12) {
                *(undefined4 *)(unaff_EBP + -0xc4) = *(undefined4 *)(unaff_EBP + -0x20);
                *(undefined8 *)(unaff_EBP + -0xcc) = *(undefined8 *)(unaff_EBP + -0x54);
                pSVar18 = int3_ToString_m174725CCEE10A8880C17E44DB21966CF484EE667_inline
                                    ((int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 *)
                                     (unaff_EBP + -0xcc),(MethodInfo *)0x0);
                pSVar19 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB
                                    (*(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)
                                      (unaff_EBP + -0x38),(MethodInfo *)0x0);
                pSVar18 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78
                                    (_stringLiteral6B9009A6EF9552C3B2E31F64496CC44380FEA4C6,pSVar18,
                                     _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745,pSVar19,
                                     (MethodInfo *)0x0);
                if ((Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->has_cctor
                     != '\0') &&
                   (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var->
                    cctor_finished == 0)) {
                  il2cpp_runtime_class_init
                            (Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
                }
                Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199
                          ((Il2CppObject *)pSVar18,
                           *(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A **)(unaff_EBP + -0x38)
                           ,(MethodInfo *)0x0);
                iVar15 = *(int *)(unaff_EBP + -0x28);
              }
              if (pDVar17->___entries_1 ==
                  (EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1 *)0x0) {
                pDVar5 = *(Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 **)
                          (*(int *)(unaff_EBP + 8) + 0x24);
                if (pDVar5 == (Dictionary_2_t43A014CDB0984719F37DCAB5C913F212A7902086 *)0x0)
                goto LAB_10760306;
                iVar10.___z_2 = *(int *)(unaff_EBP + -0x20);
                iVar10._0_8_ = *(undefined8 *)(unaff_EBP + -0x54);
                Dictionary_2_Remove_m14B2D4D5F17FDEAB521299EE89FFBC7F12B5BD13_gshared
                          (pDVar5,iVar10,
                           Dictionary_2_Remove_m02498A015139DB0F08510D6C3D8EEE0CA39410B8_RuntimeMethod_var
                          );
                DictPoolExtension_ReturnToPool_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDD2C9A7A949F369D3468B6761D50E4616F295D94_gshared
                          (pDVar17,
                           ListPoolExtension_ReturnToPool_TisPropCollider_t93D4779CCD2806D81E925E636455DDCA21066D47_mA32742D86A2C7EE78AF473047B555860BCCBC2F2_RuntimeMethod_var
                          );
              }
              iVar14 = *(int *)(unaff_EBP + -0x20);
            }
            iVar20 = *(int *)(unaff_EBP + -0x24);
            iVar21 = *(int *)(unaff_EBP + -0x2c);
          }
          iVar15 = *(int *)(unaff_EBP + -0x30);
        }
        iVar14 = iVar14 + 1;
        *(int *)(unaff_EBP + -0x20) = iVar14;
      }
      iVar14 = *(int *)(unaff_EBP + -0x40);
      unaff_EDI = *(int *)(unaff_EBP + -0x44);
    }
  }
LAB_10760306:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
