// RVA 0x2ffcd0 | Placemaker.Ui.SunButton$$PushValues
// PDB: SunButton_PushValues_m04DC91916BB4295D1340C6D34FA63C802F13F749
// Body: [[102ffcd0, 102ffd13]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a0afd0 ShadowBaker_SetAngle_m5C36D66DB1DE079F87F08B9BB716C990FCEEB918

void __cdecl
SunButton_PushValues_m04DC91916BB4295D1340C6D34FA63C802F13F749
          (SunButton_t215E5C834FF2974681639E044A8C9F4D225EAE67 *param_1,MethodInfo *param_2)

{
  WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *pWVar1;
  ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *pSVar2;

  if ((param_1->___master_4 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) &&
     (pWVar1 = param_1->___master_4->___worldMaster_5,
     pWVar1 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0)) {
    pSVar2 = pWVar1->___shadowBaker_31;
    if (pSVar2 != (ShadowBaker_t6F06B45A35DED9505A63AA08A159E2BD749BD427 *)0x0) {
      ShadowBaker_SetAngle_m5C36D66DB1DE079F87F08B9BB716C990FCEEB918
                (pSVar2,param_1->___current_17,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
