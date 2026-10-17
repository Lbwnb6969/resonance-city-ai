// RVA 0x4c5410 | Placemaker.Ui.DistanceFieldSettings$$set_outline
// PDB: DistanceFieldSettings_set_outline_mB211677067FD7474DDAA57978D86EEA201FE3940
// Body: [[104c5410, 104c5459]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 107af260 BaseMeshEffect_get_graphic_m4FAFDA7300251A13F7DDE689145C54E8B971688D

void __cdecl
DistanceFieldSettings_set_outline_mB211677067FD7474DDAA57978D86EEA201FE3940
          (DistanceFieldSettings_t32A1F46960279189113D2CB327EF91E0A25D1CC0 *param_1,float param_2,
          MethodInfo *param_3)

{
  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *pGVar1;

  if (param_1->____outline_6 != param_2) {
    param_1->____outline_6 = param_2;
    pGVar1 = BaseMeshEffect_get_graphic_m4FAFDA7300251A13F7DDE689145C54E8B971688D
                       ((BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA *)param_1,
                        (MethodInfo *)0x0);
    if (pGVar1 == (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_codegen_raise_null_reference_exception();
    }
    (**(code **)(pGVar1->_padding_ + 0x19c))(pGVar1,*(undefined4 *)(pGVar1->_padding_ + 0x1a0));
  }
  return;
}
