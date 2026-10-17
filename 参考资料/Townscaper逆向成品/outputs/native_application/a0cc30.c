// RVA 0xa0cc30 | Placemaker.Ui.SideMenu$$Toggle
// PDB: SideMenu_Toggle_mACD1F01D06929DAA462BEEC83BBD55F6A045A9C2
// Body: [[10a0cc30, 10a0cc61]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9500 UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15

void __cdecl
SideMenu_Toggle_mACD1F01D06929DAA462BEEC83BBD55F6A045A9C2
          (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *param_1,MethodInfo *param_2)

{
  UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *pUVar1;
  bool bVar2;

  pUVar1 = param_1->___openState_8;
  if (pUVar1 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    bVar2 = UpdateState_get_targetBool_m46A8B6EC49CDAA67B6301431418CB0F23E1F915F
                      (pUVar1,(MethodInfo *)0x0);
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (pUVar1,!bVar2,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
