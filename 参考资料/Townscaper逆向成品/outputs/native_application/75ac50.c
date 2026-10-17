// RVA 0x75ac50 | Placemaker.PropPlacer$$FirstTurnOn
// PDB: PropPlacer_FirstTurnOn_mDAD601B32E02D353EC24EDEF65996152A212A667
// Body: [[1075ac50, 1075ac64]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception

void __cdecl
PropPlacer_FirstTurnOn_mDAD601B32E02D353EC24EDEF65996152A212A667
          (PropPlacer_t7A1CA1B6B595666ECD64B1E747D73CCB16533245 *param_1,
          PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_2,MethodInfo *param_3)

{
  if (param_2 != (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *)0x0) {
    param_2->___hasBeenTurnedOn_8 = true;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
