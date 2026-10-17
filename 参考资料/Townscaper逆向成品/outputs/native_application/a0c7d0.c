// RVA 0xa0c7d0 | Placemaker.Ui.SideMenu$$Open
// PDB: SideMenu_Open_mBB91D95970ED849216B1D14742AD330000743CF6
// Body: [[10a0c7d0, 10a0c7f0]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9590 UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15

void __cdecl
SideMenu_Open_mBB91D95970ED849216B1D14742AD330000743CF6
          (SideMenu_tD900EEBEF28F284D7567E3D721E0DA61C0F5D1DF *param_1,MethodInfo *param_2)

{
  if (param_1->___openState_8 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
    UpdateState_set_targetBool_mAFFC1E8AAEA9F42D23AFAA95795E0159A6108F15
              (param_1->___openState_8,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
