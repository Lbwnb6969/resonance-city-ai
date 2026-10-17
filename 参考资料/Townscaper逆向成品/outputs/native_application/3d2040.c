// RVA 0x3d2040 | Placemaker.Maker$$EndAction
// PDB: Maker_EndAction_mA8F951492DAC231BF67B907D967A4C32EAC97B28
// Body: [[103d2040, 103d2061]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103f8b10 WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54

void __cdecl
Maker_EndAction_mA8F951492DAC231BF67B907D967A4C32EAC97B28
          (Maker_t537981F2ED20294ACF4C94693B3268049739203D *param_1,MethodInfo *param_2)

{
  if (param_1->___master_4 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) {
    WorldMaster_SetDirty_m9B0AB2549CDB37363A5C658018F0D6BD5A58FB54
              (param_1->___master_4,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
