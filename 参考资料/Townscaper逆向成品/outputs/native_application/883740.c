// RVA 0x883740 | Placemaker.Life.ButterflyLanding$$Placemaker.Props.IPropEnable.OnDisable
// PDB: ButterflyLanding_Placemaker_Props_IPropEnable_OnDisable_mF679A85E713AA6ADA7A76524DC76E1DC00C11CE3
// Body: [[10883740, 10883765]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10883140 ButterflyFlock_RemoveLanding_mECC4118E039A7452C22E3617D175A4EEDFEF4DBD

void __cdecl
ButterflyLanding_Placemaker_Props_IPropEnable_OnDisable_mF679A85E713AA6ADA7A76524DC76E1DC00C11CE3
          (ButterflyLanding_t7CB933CAC325175F465615B454645E4BA106654B *param_1,
          WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *param_2,MethodInfo *param_3)

{
  if ((param_2 != (WorldMaster_t915742D5E4E90C287CFAED27AE171E2F4E21708A *)0x0) &&
     (param_2->___butterflyFlock_30 !=
      (ButterflyFlock_t232314275686A150CB7BF02C9493FBAB75C6DDFD *)0x0)) {
    ButterflyFlock_RemoveLanding_mECC4118E039A7452C22E3617D175A4EEDFEF4DBD
              (param_2->___butterflyFlock_30,param_1,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
