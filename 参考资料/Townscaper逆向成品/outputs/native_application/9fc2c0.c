// RVA 0x9fc2c0 | Placemaker.Ui.SaveCard$$<Setup>b__12_1
// PDB: SaveCard_U3CSetupU3Eb__12_1_mC4D5AC87D35DF5A0159D9AABA314325C3E113E85
// Body: [[109fc2c0, 109fc395]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 103e9610 UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4

void __cdecl
SaveCard_U3CSetupU3Eb__12_1_mC4D5AC87D35DF5A0159D9AABA314325C3E113E85
          (SaveCard_t0D4BB910CDF8BB065BDBE2557107FC323BDAAC67 *param_1,uchar param_2,
          MethodInfo *param_3)

{
  if (param_2 == '\0') {
    if (param_1->___scaleXY_12 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
                (param_1->___scaleXY_12,1.0,(MethodInfo *)0x0);
      if (param_1->___scaleZ_11 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
                  (param_1->___scaleZ_11,1.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else if (param_2 == '\x01') {
    if (param_1->___scaleXY_12 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
                (param_1->___scaleXY_12,1.02,(MethodInfo *)0x0);
      if (param_1->___scaleZ_11 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
                  (param_1->___scaleZ_11,1.2,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    if (param_2 != '\x02') {
      return;
    }
    if (param_1->___scaleXY_12 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
      UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
                (param_1->___scaleXY_12,0.98,(MethodInfo *)0x0);
      if (param_1->___scaleZ_11 != (UpdateState_t98E9471CE9E6143673037ED493B616DF354F3A4C *)0x0) {
        UpdateState_set_target_mE17720317B95AD21B3A598B430573508DBB96BE4
                  (param_1->___scaleZ_11,0.95,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
