// RVA 0x306220 | Placemaker.Ui.Toucher$$EndRotation
// PDB: Toucher_EndRotation_mB89A777581B5DF43B94E4617FF7E7DF26E33F8B5
// Body: [[10306220, 10306278] [1030627c, 10306306] [1030630e, 1030641c]]
// Direct callees:
// 1018e950 il2cpp_codegen_initialize_runtime_metadata
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 1040d9d0 HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C
// 10672d70 Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828
// 1074d0b0 OrbitalCamera_SetRotationSpeed_m4E9D701C0CA3721B1C92C22B5E2FE4274575E512
// 10aa2e60 ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929

void __cdecl
Toucher_EndRotation_mB89A777581B5DF43B94E4617FF7E7DF26E33F8B5
          (Toucher_tE538137A40B930BDCF3263642CE03F76BF793CD7 *param_1,MethodInfo *param_2)

{
  float *pfVar1;
  float *pfVar2;
  List_1_tA3D43DA6B033AD0101D886905D7B48670ED02B64 *pLVar3;
  int iVar4;
  int iVar5;
  OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *pOVar6;
  float fVar7;
  int3_t24C3AF0DAAFE1D27B75D7C9DF9ADCE4253D3D921 iVar8;
  int iVar9;
  MethodInfo *unaff_EDI;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 VVar15;
  float2_tCB7B81181978EDE17722C533A55E345D9A413274 fVar16;
  float fStack_c;

  if (DAT_1151c235 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Count_mCBB050B1AA63876AB4584F0077A8D91B4CE5223A_RuntimeMethod_var
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m6EECC3FC4E0A41DD6D13168838EA761279A25715_RuntimeMethod_var)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              ((uint *)&List_1_get_Item_m8F921F9923811381D91C988BBB2BE27C530067CB_RuntimeMethod_var)
    ;
    DAT_1151c235 = '\x01';
  }
  pLVar3 = param_1->___trackers_9;
  if (pLVar3 != (List_1_tA3D43DA6B033AD0101D886905D7B48670ED02B64 *)0x0) {
    if ((uint)pLVar3->____size_2 <= (uint)param_1->___lastRotator_11) {
                    /* WARNING: Subroutine does not return */
      ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                ((MethodInfo *)0x0);
    }
    iVar4 = *(int *)(pLVar3->____items_1 + param_1->___lastRotator_11 * 4 + 0x10);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x78) != 0)) {
      iVar9 = *(int *)(*(int *)(iVar4 + 0x78) + 0xc);
      if (2 < iVar9) {
        uVar10 = iVar9 - 2;
        iVar9 = uVar10 * 0x30;
        fVar14 = *(float *)(iVar4 + 0x6c);
        fVar13 = *(float *)(iVar4 + 0x6c);
        fVar11 = fVar13 - __real_3dcccccd;
        do {
          iVar5 = *(int *)(iVar4 + 0x78);
          if (iVar5 == 0) goto LAB_10306418;
          if (*(uint *)(iVar5 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929
                      ((MethodInfo *)0x0);
          }
          pfVar1 = (float *)(*(int *)(iVar5 + 8) + 0x3c + iVar9);
          pfVar2 = (float *)(*(int *)(iVar5 + 8) + 0x30 + iVar9);
          fVar7 = pfVar2[3];
          if (*pfVar1 <= fVar11 && fVar11 != *pfVar1) break;
          iVar9 = iVar9 + -0x30;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
        fVar11 = *(float *)(iVar4 + 0x60) - *pfVar2;
        fVar12 = *(float *)(iVar4 + 100) - pfVar2[1];
        VVar15 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828((MethodInfo *)0x0);
        fVar13 = fVar11 - fVar13;
        fStack_c = VVar15.___y_1;
        fStack_c = fVar12 - fStack_c;
        if (__real_2edbe6fe <= fStack_c * fStack_c + fVar13 * fVar13) {
          fVar14 = fVar14 - fVar7;
          if (param_1->___master_6 != (UiMaster_t018C92156145AE695FB5FB2E9C21190142BBA554 *)0x0) {
            pOVar6 = param_1->___master_6->___orbitalCamera_15;
            iVar8.___y_1 = (int)((fVar12 / fVar14) * __real_3ecccccd);
            iVar8.___x_0 = (int)((fVar11 / fVar14) * __real_3ecccccd);
            iVar8.___z_2 = 0;
            fVar16 = (float2_tCB7B81181978EDE17722C533A55E345D9A413274)
                     HexMath_GetHex2_mFE370B9F18E277F09222DA7AA412F5D3F575589C(iVar8,unaff_EDI);
            if (pOVar6 != (OrbitalCamera_tA81155A4B20F5C74A36D50FDF91DF4D97B28069D *)0x0) {
              OrbitalCamera_SetRotationSpeed_m4E9D701C0CA3721B1C92C22B5E2FE4274575E512
                        (pOVar6,fVar16,(MethodInfo *)0x0);
              return;
            }
          }
          goto LAB_10306418;
        }
      }
      return;
    }
  }
LAB_10306418:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
