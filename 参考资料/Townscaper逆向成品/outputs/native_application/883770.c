// RVA 0x883770 | Placemaker.Life.ButterflyLanding$$Placemaker.Props.IPropEnable.OnEnable
// PDB: ButterflyLanding_Placemaker_Props_IPropEnable_OnEnable_m64D510AB0FD696F3D742FEA83BFED62B75D2A158
// Body: [[10883770, 10883795]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10880d40 ButterflyFlock_AddLanding_m6B149E9F3047EC90B5B005CA25951E28F3637CA0

void __cdecl
ButterflyLanding_Placemaker_Props_IPropEnable_OnEnable_m64D510AB0FD696F3D742FEA83BFED62B75D2A158
          (ButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B *param_1,
          WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_2,MethodInfo *param_3)

{
  if ((param_2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (param_2->___butterflyFlock_30 !=
      (ButterflyFlock_t232314275686A150CB7BF02C9493FBAB75C6DDFD *)0x0)) {
    ButterflyFlock_AddLanding_m6B149E9F3047EC90B5B005CA25951E28F3637CA0
              (param_2->___butterflyFlock_30,param_1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
