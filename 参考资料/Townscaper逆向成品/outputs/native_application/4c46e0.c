// RVA 0x4c46e0 | Placemaker.Ui.Dim$$SetState
// PDB: Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7
// Body: [[104c46e0, 104c4840]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e8590 UpdateState_Snap_m4E46213E0C57037828811FB0C271E6FB3CD3E632
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Dim_SetState_mC79FD89FAE6C84C208CD7516D03FE4F3867D5CF7
          (Dim_tDEE64760B7C8CB136E65987008BB21CB16FDA5C6 *param_1,int param_2,MethodInfo *param_3)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;

  if (param_2 == 0) {
    if (param_1->___alphaState_5 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
    goto LAB_104c483c;
    param_1->___alphaState_5->___speed_7 = 8.0;
    if (param_1->___alphaState_5 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
    goto LAB_104c483c;
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___alphaState_5,false,(MethodInfo *)0x0);
    if (param_1->___blurState_7 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
    goto LAB_104c483c;
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___blurState_7,false,(MethodInfo *)0x0);
    if (param_1->___alphaState_5 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
    goto LAB_104c483c;
    if (param_1->___alphaState_5->____current_0 == __real_3f800000) {
      if (param_1->___dimOrDark_6 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
      goto LAB_104c483c;
      if (param_1->___dimOrDark_6->____current_0 == __real_3f800000) {
        if (param_1->___blurState_7 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
        goto LAB_104c483c;
        UpdateState_Snap_m4E46213E0C57037828811FB0C271E6FB3CD3E632
                  (param_1->___blurState_7,(MethodInfo *)0x0);
      }
    }
  }
  else {
    if (param_2 == 1) {
      if (param_1->___alphaState_5 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
      goto LAB_104c483c;
      param_1->___alphaState_5->___speed_7 = 16.0;
      if (param_1->___alphaState_5 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
      goto LAB_104c483c;
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (param_1->___alphaState_5,true,(MethodInfo *)0x0);
      if (param_1->___dimOrDark_6 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
      goto LAB_104c483c;
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (param_1->___dimOrDark_6,false,(MethodInfo *)0x0);
      pUVar1 = param_1->___blurState_7;
    }
    else {
      if (param_2 != 2) goto LAB_104c480e;
      if (param_1->___alphaState_5 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
      goto LAB_104c483c;
      param_1->___alphaState_5->___speed_7 = 16.0;
      if (param_1->___alphaState_5 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
      goto LAB_104c483c;
      UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
                (param_1->___alphaState_5,true,(MethodInfo *)0x0);
      pUVar1 = param_1->___dimOrDark_6;
    }
    if (pUVar1 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) goto LAB_104c483c;
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (pUVar1,true,(MethodInfo *)0x0);
  }
LAB_104c480e:
  if (param_1->___alphaState_5 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    if (param_1->___alphaState_5->____current_0 == ___real_00000000) {
      if (param_1->___dimOrDark_6 == (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0)
      goto LAB_104c483c;
      UpdateState_Snap_m4E46213E0C57037828811FB0C271E6FB3CD3E632
                (param_1->___dimOrDark_6,(MethodInfo *)0x0);
    }
    return;
  }
LAB_104c483c:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
