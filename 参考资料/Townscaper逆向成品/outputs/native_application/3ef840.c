// RVA 0x3ef840 | Placemaker.Quads.Vert$$ContainsVert
// PDB: Vert_ContainsVert_m5D59338CB1DC69EB6FC88F70450F820D9092A74A
// Body: [[103ef840, 103efa84]]
// Direct callees:
// 10806aa0 Quad_ContainsVert_m79B7819458561993C6823FD8A99DD1E85018DF5C

bool __cdecl
Vert_ContainsVert_m5D59338CB1DC69EB6FC88F70450F820D9092A74A
          (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *param_1,
          int2_t40DB794B47A2943AB7E9BC67442B6B8173FBB568 param_2,MethodInfo *param_3)

{
  bool bVar1;

  switch(param_1->___quadCount_8) {
  case '\x01':
    bVar1 = Quad_ContainsVert_m79B7819458561993C6823FD8A99DD1E85018DF5C
                      (&param_1->___q0_2,param_2,(MethodInfo *)0x0);
    return bVar1;
  case '\x02':
    bVar1 = Quad_ContainsVert_m79B7819458561993C6823FD8A99DD1E85018DF5C
                      (&param_1->___q0_2,param_2,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = Quad_ContainsVert_m79B7819458561993C6823FD8A99DD1E85018DF5C
                        (&param_1->___q1_3,param_2,(MethodInfo *)0x0);
      return bVar1;
    }
    break;
  case '\x03':
    bVar1 = Quad_ContainsVert_m79B7819458561993C6823FD8A99DD1E85018DF5C
                      (&param_1->___q0_2,param_2,(MethodInfo *)0x0);
    if ((!bVar1) &&
       (bVar1 = Quad_ContainsVert_m79B7819458561993C6823FD8A99DD1E85018DF5C
                          (&param_1->___q1_3,param_2,(MethodInfo *)0x0), !bVar1)) {
      bVar1 = Quad_ContainsVert_m79B7819458561993C6823FD8A99DD1E85018DF5C
                        (&param_1->___q2_4,param_2,(MethodInfo *)0x0);
      return bVar1;
    }
    break;
  case '\x04':
    bVar1 = Quad_ContainsVert_m79B7819458561993C6823FD8A99DD1E85018DF5C
                      (&param_1->___q0_2,param_2,(MethodInfo *)0x0);
    if (((!bVar1) &&
        (bVar1 = Quad_ContainsVert_m79B7819458561993C6823FD8A99DD1E85018DF5C
                           (&param_1->___q1_3,param_2,(MethodInfo *)0x0), !bVar1)) &&
       (bVar1 = Quad_ContainsVert_m79B7819458561993C6823FD8A99DD1E85018DF5C
                          (&param_1->___q2_4,param_2,(MethodInfo *)0x0), !bVar1)) {
      bVar1 = Quad_ContainsVert_m79B7819458561993C6823FD8A99DD1E85018DF5C
                        (&param_1->___q3_5,param_2,(MethodInfo *)0x0);
      return bVar1;
    }
    break;
  case '\x05':
    bVar1 = Quad_ContainsVert_m79B7819458561993C6823FD8A99DD1E85018DF5C
                      (&param_1->___q0_2,param_2,(MethodInfo *)0x0);
    if (((!bVar1) &&
        (bVar1 = Quad_ContainsVert_m79B7819458561993C6823FD8A99DD1E85018DF5C
                           (&param_1->___q1_3,param_2,(MethodInfo *)0x0), !bVar1)) &&
       ((bVar1 = Quad_ContainsVert_m79B7819458561993C6823FD8A99DD1E85018DF5C
                           (&param_1->___q2_4,param_2,(MethodInfo *)0x0), !bVar1 &&
        (bVar1 = Quad_ContainsVert_m79B7819458561993C6823FD8A99DD1E85018DF5C
                           (&param_1->___q3_5,param_2,(MethodInfo *)0x0), !bVar1)))) {
      bVar1 = Quad_ContainsVert_m79B7819458561993C6823FD8A99DD1E85018DF5C
                        (&param_1->___q4_6,param_2,(MethodInfo *)0x0);
      return bVar1;
    }
    break;
  case '\x06':
    bVar1 = Quad_ContainsVert_m79B7819458561993C6823FD8A99DD1E85018DF5C
                      (&param_1->___q0_2,param_2,(MethodInfo *)0x0);
    if ((((!bVar1) &&
         (bVar1 = Quad_ContainsVert_m79B7819458561993C6823FD8A99DD1E85018DF5C
                            (&param_1->___q1_3,param_2,(MethodInfo *)0x0), !bVar1)) &&
        (bVar1 = Quad_ContainsVert_m79B7819458561993C6823FD8A99DD1E85018DF5C
                           (&param_1->___q2_4,param_2,(MethodInfo *)0x0), !bVar1)) &&
       ((bVar1 = Quad_ContainsVert_m79B7819458561993C6823FD8A99DD1E85018DF5C
                           (&param_1->___q3_5,param_2,(MethodInfo *)0x0), !bVar1 &&
        (bVar1 = Quad_ContainsVert_m79B7819458561993C6823FD8A99DD1E85018DF5C
                           (&param_1->___q4_6,param_2,(MethodInfo *)0x0), !bVar1)))) {
      bVar1 = Quad_ContainsVert_m79B7819458561993C6823FD8A99DD1E85018DF5C
                        (&param_1->___q5_7,param_2,(MethodInfo *)0x0);
      return bVar1;
    }
    break;
  default:
    return false;
  }
  return true;
}
