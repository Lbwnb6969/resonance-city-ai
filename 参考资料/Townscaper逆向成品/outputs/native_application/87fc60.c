// RVA 0x87fc60 | Placemaker.Life.BirdLanding$$Placemaker.Props.IPropEnable.OnDisable
// PDB: BirdLanding_Placemaker_Props_IPropEnable_OnDisable_m32695DEAED23463A3CF1E245632B1369371302BB
// Body: [[1087fc60, 1087fc87]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10878af0 BirdFlock_AddOrRemoveLanding_mE8E1507EE9349122D3CF84EE203E296906EC871F

void __cdecl
BirdLanding_Placemaker_Props_IPropEnable_OnDisable_m32695DEAED23463A3CF1E245632B1369371302BB
          (BirdLanding_t6227281B13B2EC09BEF20A08C1F99289306DC1BB *param_1,
          WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_2,MethodInfo *param_3)

{
  if ((param_2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (param_2->___flock_21 != (BirdFlock_tB63DB4CEF81D7D9D17C18531A0BEEEA771442436 *)0x0)) {
    BirdFlock_AddOrRemoveLanding_mE8E1507EE9349122D3CF84EE203E296906EC871F
              (param_2->___flock_21,param_1,false,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
