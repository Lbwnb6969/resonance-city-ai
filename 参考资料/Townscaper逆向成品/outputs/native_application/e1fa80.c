// RVA 0xe1fa80 | Placemaker.GridGenerator$$UnmotivateBit
// PDB: GridGenerator_UnmotivateBit_mCC6A107500D684467262D4D4FF03C12FA3624192
// Body: [[10e1fa80, 10e1fadf]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10a3aa50 Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
// 10a3dc10 GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86
// 10e1f970 GridGenerator_UnmotivateBitChildren_mF908929B91A65FB891B215B7E1D58D18B198AC83
// 10e1fbf0 GridGenerator_UnmotivatePatch_m6BD5A9EE5049C6640E7C01A666B5D43B029F419A

void __cdecl
GridGenerator_UnmotivateBit_mCC6A107500D684467262D4D4FF03C12FA3624192
          (GridGenerator_t4080E01F135D6CA5928683203C03B1609B9DDFE0 *param_1,
          GridBit_t23465B0696352D0154A3D888F98761FDAED90C75 *param_2,MethodInfo *param_3)

{
  uchar *puVar1;
  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *pGVar2;

  if (param_2 != (GridBit_t23465B0696352D0154A3D888F98761FDAED90C75 *)0x0) {
    puVar1 = &param_2->___motivations_5;
    *puVar1 = *puVar1 + 0xff;
    if (*puVar1 == '\0') {
      pGVar2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B
                         ((Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *)param_2,
                          (MethodInfo *)0x0);
      if (pGVar2 == (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)0x0) goto LAB_10e1fadb;
      GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(pGVar2,false,(MethodInfo *)0x0)
      ;
      if (param_2->___state_9 < 4) {
        GridGenerator_UnmotivateBitChildren_mF908929B91A65FB891B215B7E1D58D18B198AC83
                  (param_1,param_2,(MethodInfo *)0x0);
      }
      GridGenerator_UnmotivatePatch_m6BD5A9EE5049C6640E7C01A666B5D43B029F419A
                (param_1,param_2->___hexPos_4,param_2->___hexPos_4,(MethodInfo *)0x0);
    }
    return;
  }
LAB_10e1fadb:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
