// RVA 0x87ad70 | Placemaker.Life.BirdFlock$$OnReset
// PDB: BirdFlock_OnReset_m261CC66C8482D2A43C97315404268011DB886E60
// Body: [[1087ad70, 1087ade6] [1087adea, 1087ae9c]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 105d1420 List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
// 1066efe0 Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
// 10879180 BirdFlock_CalculateOptimalLandings_m68E711C414D6CFA05A1347CB4032308852958BEA
// 1087efe0 BirdFlock_SetLanding_mA7B5BA5BD831833CBA54D626B3CA707E564F8DA3
// 10a3aa80 Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
// 10a46960 MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
BirdFlock_OnReset_m261CC66C8482D2A43C97315404268011DB886E60
          (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *param_1,MethodInfo *param_2)

{
  List_1_tF12B8ECABFB01DFF6CE11CBC139AC6115179DCC9 *pLVar1;
  Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *pBVar2;
  MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *pMVar3;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar4;
  BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *pBVar5;
  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *pTVar6;
  List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *pLVar7;
  uint uVar8;

  pBVar5 = param_1;
  if (DAT_1151f5bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_Clear_mA36E18D7013D281435312C108E9BB2286AA88822_RuntimeMethod_var);
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mC5C87EB162C43A4BC22E218C3A2D95DB961F5420_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_mA819AC4D6EC8BABA8328B8366A4F71E7BB7FB982_RuntimeMethod_var)
    ;
    DAT_1151f5bd = '\x01';
  }
  pLVar7 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)param_1->___birds_17;
  if (pLVar7 != (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
    uVar8 = pLVar7->____size_2 - 1;
    if (-1 < (int)uVar8) {
      param_1 = (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *)(uVar8 * 4 + 0x10);
      do {
        pLVar1 = pBVar5->___birds_17;
        if (pLVar1 == (List_1_tF12B8ECABFB01DFF6CE11CBC139AC6115179DCC9 *)0x0) goto LAB_1087ae98;
        if ((uint)pLVar1->____size_2 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                    ((MethodInfo *)0x0);
        }
        pBVar2 = *(Bird_t844A261674A59156BC85FE5538301FE90489C0E8 **)
                  (pLVar1->____items_1 + (int)&param_1->_padding_);
        if (pBVar2 == (Bird_t844A261674A59156BC85FE5538301FE90489C0E8 *)0x0) goto LAB_1087ae98;
        pMVar3 = pBVar2->___mf0_6;
        if (pBVar2->___mf1_7 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0)
        goto LAB_1087ae98;
        pMVar4 = pBVar5->___glideMesh_11;
        MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                  (pBVar2->___mf1_7,pMVar4,(MethodInfo *)0x0);
        if (pMVar3 == (MeshFilter_t763BB2BBF3881176AD25E4570E6DD215BA0AA51A *)0x0)
        goto LAB_1087ae98;
        MeshFilter_set_sharedMesh_mC96D5F9AE4BC1D186221F568A4C3CE23572EC958
                  (pMVar3,pMVar4,(MethodInfo *)0x0);
        BirdFlock_SetLanding_mA7B5BA5BD831833CBA54D626B3CA707E564F8DA3
                  (pBVar5,pBVar2,(BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *)0x0,
                   (MethodInfo *)0x0);
        pTVar6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F
                           ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)pBVar2,
                            (MethodInfo *)0x0);
        if (pTVar6 == (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)0x0) goto LAB_1087ae98;
        Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E
                  (pTVar6,pBVar5->___disabledBirds_16,(MethodInfo *)0x0);
        param_1 = (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *)
                  &param_1[-1].___lastOrbitTime_35;
        uVar8 = uVar8 - 1;
        pBVar2->___statePrev_17 = '\x04';
        pBVar2->___stateNext_18 = '\x04';
      } while (-1 < (int)uVar8);
      pLVar7 = (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)pBVar5->___birds_17;
    }
    if (pLVar7 != (List_1_t9AAD8217D3BF8F2B4750AD496F9C87CFC41876B7 *)0x0) {
      List_1_Clear_m4335002B0D1AECDD647452579DC34E13BD1B83CD_gshared
                (pLVar7,List_1_Clear_mA36E18D7013D281435312C108E9BB2286AA88822_RuntimeMethod_var);
      pBVar5->___activeBirdsCount_20 = '\0';
      pBVar5->___optimalBirdCountDirty_25 = true;
      BirdFlock_CalculateOptimalLandings_m68E711C414D6CFA05A1347CB4032308852958BEA
                (pBVar5,(MethodInfo *)0x0);
      return;
    }
  }
LAB_1087ae98:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
