// RVA 0x3d20d0 | Placemaker.Maker$$HoldUndo
// PDB: Maker_HoldUndo_m053A57BEFBC9BBA1825020A962A6D36C7BC3396A
// Body: [[103d20d0, 103d2121]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d25f0 Maker_Undo_m04FE233B3A64C6FA8F9A71C1E55BA4D95C34F6FF
// 103e4f40 UiAudio_Play_m3D5C03177FFA38B7D523DB459D115A8854A50AC9
// 1080ca70 RapidButton_Press_m508A157BD53C95B915525654F053E976B2CD7619

bool __cdecl
Maker_HoldUndo_m053A57BEFBC9BBA1825020A962A6D36C7BC3396A
          (Maker_t537981F2ED20294ACF4C94693B3268049739203D *param_1,MethodInfo *param_2)

{
  UiAudio_t2010907E27F3CE85922CDC22C39D5002EB127976 *pUVar1;
  bool bVar2;

  bVar2 = RapidButton_Press_m508A157BD53C95B915525654F053E976B2CD7619
                    (&param_1->___rapidButton_14,1.0,(MethodInfo *)0x0);
  if (!bVar2) {
    return false;
  }
  if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (pUVar1 = param_1->___master_4->___uiAudioSourcePool_24,
     pUVar1 != (UiAudio_t2010907E27F3CE85922CDC22C39D5002EB127976 *)0x0)) {
    UiAudio_Play_m3D5C03177FFA38B7D523DB459D115A8854A50AC9
              (pUVar1,param_1->___undoClip_15,true,(MethodInfo *)0x0);
    bVar2 = Maker_Undo_m04FE233B3A64C6FA8F9A71C1E55BA4D95C34F6FF(param_1,(MethodInfo *)0x0);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
