// RVA 0x880500 | Placemaker.BitMeshQuadChange$$System.IComparable<Placemaker.BitMeshQuadChange>.CompareTo
// PDB: BitMeshQuadChange_System_IComparableU3CPlacemaker_BitMeshQuadChangeU3E_CompareTo_m2438F26C3C0A91CE1052449CB2D1BE1276B2CF5F
// Body: [[10880500, 10880545]]
// Direct callees:
// 108936c0 Byte_CompareTo_m9B9F61F5B96CED94E4848B71CECBF02F495BDB88
// 10905ba0 Int32_CompareTo_m2DD1093B956B4D96C3AC3C27FDEE3CA447B044D3

int __cdecl
BitMeshQuadChange_System_IComparableU3CPlacemaker_BitMeshQuadChangeU3E_CompareTo_m2438F26C3C0A91CE1052449CB2D1BE1276B2CF5F
          (BitMeshQuadChange_tB1BDB9EAB0735E968980987E56292B9998481CD4 *param_1,
          BitMeshQuadChange_tB1BDB9EAB0735E968980987E56292B9998481CD4 param_2,MethodInfo *param_3)

{
  int iVar1;

  iVar1 = Int32_CompareTo_m2DD1093B956B4D96C3AC3C27FDEE3CA447B044D3
                    (&(param_1->___hexPos_1).___x_0,param_2.___hexPos_1.___x_0,(MethodInfo *)0x0);
  if (iVar1 == 0) {
    iVar1 = Int32_CompareTo_m2DD1093B956B4D96C3AC3C27FDEE3CA447B044D3
                      (&(param_1->___hexPos_1).___y_1,param_2.___hexPos_1.___y_1,(MethodInfo *)0x0);
    if (iVar1 == 0) {
      iVar1 = Byte_CompareTo_m9B9F61F5B96CED94E4848B71CECBF02F495BDB88
                        (&param_1->___quadIndex_0,param_1->___quadIndex_0,(MethodInfo *)0x0);
    }
  }
  return iVar1;
}
