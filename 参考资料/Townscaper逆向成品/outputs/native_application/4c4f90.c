// RVA 0x4c4f90 | Placemaker.Ui.DistanceFieldMask$$SetDirty
// PDB: DistanceFieldMask_SetDirty_m2A316E82E0B874FE9DD93D8204D259C741B35961
// Body: [[104c4f90, 104c4fc0]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 107af260 BaseMeshEffect_get_graphic_m4FAFDA7300251A13F7DDE689145C54E8B971688D

void __cdecl
DistanceFieldMask_SetDirty_m2A316E82E0B874FE9DD93D8204D259C741B35961
          (DistanceFieldMask_t24D3AF7EA4ACC3024F916C27CA2EA096B36D22B2 *param_1,MethodInfo *param_2)

{
  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *pGVar1;

  pGVar1 = BaseMeshEffect_get_graphic_m4FAFDA7300251A13F7DDE689145C54E8B971688D
                     ((BaseMeshEffect_tC7D44B0AC6406BAC3E4FC4579A43FC135BDB6FDA *)param_1,
                      (MethodInfo *)0x0);
  if (pGVar1 != (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 *)0x0) {
    (**(code **)(pGVar1->_padding_ + 0x19c))(pGVar1,*(undefined4 *)(pGVar1->_padding_ + 0x1a0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
