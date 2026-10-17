// RVA 0x4bc8b0 | CornerImage$$.ctor
// PDB: CornerImage__ctor_m1F02FB588226CA670396485BDC768C00A80E6363
// Body: [[104bc8b0, 104bc8f4]]
// Direct callees:
// 10c66470 MaskableGraphic__ctor_m89126DB114322D1D18F67BA3B8D0695FF1371A4D

void __cdecl
CornerImage__ctor_m1F02FB588226CA670396485BDC768C00A80E6363
          (CornerImage_tFE05FFD4093FAB3D12C2523D9DC70CED309CF6F2 *param_1,MethodInfo *param_2)

{
  param_1->___innerSize_37 = 10.0;
  (param_1->___quadrants_38).___c0_0.___x_0 = true;
  (param_1->___quadrants_38).___c0_0.___y_1 = true;
  (param_1->___quadrants_38).___c0_0.___z_2 = true;
  (param_1->___quadrants_38).___c1_1.___x_0 = true;
  *(undefined4 *)&(param_1->___quadrants_38).___c1_1.___y_1 = 0x1010101;
  (param_1->___quadrants_38).___c2_2.___z_2 = true;
  param_1->____progress_40 = 1.0;
  MaskableGraphic__ctor_m89126DB114322D1D18F67BA3B8D0695FF1371A4D
            ((MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE *)param_1,(MethodInfo *)0x0)
  ;
  return;
}
