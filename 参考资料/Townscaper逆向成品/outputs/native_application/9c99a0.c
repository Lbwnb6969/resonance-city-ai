// RVA 0x9c99a0 | Placemaker.Ui.StandardButton.<>c__DisplayClass3_0$$<Placemaker.Ui.UiMaster.IUiSetup.OnSetup>b__0
// PDB: U3CU3Ec__DisplayClass3_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m5D377B105E5B1ED1A6898B6AB192D400C2378F53
// Body: [[109c99a0, 109c9b1f]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9610 UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
U3CU3Ec__DisplayClass3_0_U3CPlacemaker_Ui_UiMaster_IUiSetup_OnSetupU3Eb__0_m5D377B105E5B1ED1A6898B6AB192D400C2378F53
          (U3CU3Ec__DisplayClass3_0_t2D000AA72DDF89A5E24FDB9F4C159EF4A3E33FB9 *param_1,uchar param_2
          ,MethodInfo *param_3)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  float fVar2;

  if (param_2 == '\0') {
    if ((param_1->___U3CU3E4__this_0 ==
         (StandardButton_t89F04B0BB4F3A135A70948960E00F79B2AA0B2A3 *)0x0) ||
       (pUVar1 = param_1->___U3CU3E4__this_0->___scaleXY_5,
       pUVar1 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) goto LAB_109c9b1b;
    UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4(pUVar1,1.0,(MethodInfo *)0x0);
    if ((param_1->___U3CU3E4__this_0 ==
         (StandardButton_t89F04B0BB4F3A135A70948960E00F79B2AA0B2A3 *)0x0) ||
       (pUVar1 = param_1->___U3CU3E4__this_0->___scaleZ_4,
       pUVar1 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) goto LAB_109c9b1b;
    fVar2 = 1.0;
LAB_109c9ad6:
    UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4(pUVar1,fVar2,(MethodInfo *)0x0)
    ;
  }
  else {
    if (param_2 == '\x01') {
      if (param_1->___U3CU3E4__this_0 ==
          (StandardButton_t89F04B0BB4F3A135A70948960E00F79B2AA0B2A3 *)0x0) goto LAB_109c9b1b;
      pUVar1 = param_1->___U3CU3E4__this_0->___scaleXY_5;
      if (param_1->___baseButton_1 == (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0)
      goto LAB_109c9b1b;
      fVar2 = __real_3f828f5c;
      if (param_1->___baseButton_1->____disabled_9 != false) {
        fVar2 = __real_3f800000;
      }
      if (pUVar1 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_109c9b1b;
      UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
                (pUVar1,fVar2,(MethodInfo *)0x0);
      if (param_1->___U3CU3E4__this_0 ==
          (StandardButton_t89F04B0BB4F3A135A70948960E00F79B2AA0B2A3 *)0x0) goto LAB_109c9b1b;
      pUVar1 = param_1->___U3CU3E4__this_0->___scaleZ_4;
      if (param_1->___baseButton_1 == (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0)
      goto LAB_109c9b1b;
      fVar2 = __real_3f99999a;
      if (param_1->___baseButton_1->____disabled_9 != false) {
        fVar2 = __real_3f800000;
      }
      if (pUVar1 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_109c9b1b;
      goto LAB_109c9ad6;
    }
    if (param_2 == '\x02') {
      if ((param_1->___U3CU3E4__this_0 ==
           (StandardButton_t89F04B0BB4F3A135A70948960E00F79B2AA0B2A3 *)0x0) ||
         (pUVar1 = param_1->___U3CU3E4__this_0->___scaleXY_5,
         pUVar1 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) goto LAB_109c9b1b;
      UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
                (pUVar1,0.98,(MethodInfo *)0x0);
      if ((param_1->___U3CU3E4__this_0 ==
           (StandardButton_t89F04B0BB4F3A135A70948960E00F79B2AA0B2A3 *)0x0) ||
         (pUVar1 = param_1->___U3CU3E4__this_0->___scaleZ_4,
         pUVar1 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) goto LAB_109c9b1b;
      fVar2 = 0.95;
      goto LAB_109c9ad6;
    }
  }
  if (param_1->___baseButton_1 == (BaseButton_tAC6372317B2E4EDCF629E5ED7D229B2876B82F0C *)0x0) {
LAB_109c9b1b:
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  if (param_1->___baseButton_1->____disabled_9 != false) {
    if ((param_1->___U3CU3E4__this_0 ==
         (StandardButton_t89F04B0BB4F3A135A70948960E00F79B2AA0B2A3 *)0x0) ||
       (pUVar1 = param_1->___U3CU3E4__this_0->___scaleXY_5,
       pUVar1 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)) goto LAB_109c9b1b;
    UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
              (pUVar1,pUVar1->____target_1 * ___real_3f70a3d7,(MethodInfo *)0x0);
  }
  return;
}
