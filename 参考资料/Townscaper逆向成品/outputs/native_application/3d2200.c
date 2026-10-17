// RVA 0x3d2200 | Placemaker.Maker$$RedoCommand
// PDB: Maker_RedoCommand_m560E274202638F4A2C59683DE219C4B0F3576C70
// Body: [[103d2200, 103d2234]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103d2240 Maker_Redo_m8435C7AED24EE7742B8E38213A64F25F650E39C0
// 103e4f40 UiAudio_Play_m3D5C03177FFA38B7D523DB459D115A8854A50AC9

bool __cdecl
Maker_RedoCommand_m560E274202638F4A2C59683DE219C4B0F3576C70
          (Maker_t537981F2ED20294ACF4C94693B3268049739203D *param_1,MethodInfo *param_2)

{
  UiAudio_t2010907E27F3CE85922CDC22C39D5002EB127976 *pUVar1;
  bool bVar2;

  if ((param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (pUVar1 = param_1->___master_4->___uiAudioSourcePool_24,
     pUVar1 != (UiAudio_t2010907E27F3CE85922CDC22C39D5002EB127976 *)0x0)) {
    UiAudio_Play_m3D5C03177FFA38B7D523DB459D115A8854A50AC9
              (pUVar1,param_1->___redoClip_16,true,(MethodInfo *)0x0);
    bVar2 = Maker_Redo_m8435C7AED24EE7742B8E38213A64F25F650E39C0(param_1,(MethodInfo *)0x0);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
