// RVA 0x411df0 | Placemaker.HoverData$$OnGamepadMoveAdd
// PDB: HoverData_OnGamepadMoveAdd_mF980359DBFA7E2C01D832376658F420E30EA55DF
// Body: [[10411df0, 10411e25]]
// Direct callees:

void __cdecl
HoverData_OnGamepadMoveAdd_mF980359DBFA7E2C01D832376658F420E30EA55DF
          (HoverData_t14F4E30D60384FB7DB47D81775CB2091DE7C9D55 *param_1,MethodInfo *param_2)

{
  int iVar1;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *pVVar2;
  Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *pVVar3;

  param_1->___srcHeight_10 = param_1->___dstHeight_11;
  pVVar2 = &param_1->___dstVert_8;
  pVVar3 = &param_1->___srcVert_7;
  for (iVar1 = 0x6c; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pVVar3->___hexPos_0).___x_0 = (pVVar2->___hexPos_0).___x_0;
    pVVar2 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar2->___hexPos_0).___y_1;
    pVVar3 = (Vert_t18972B9474E2BFE0EB14C63B94473AA726934A9C *)&(pVVar3->___hexPos_0).___y_1;
  }
  param_1->___validAdd_20 = false;
  param_1->___occupied_16 = true;
  return;
}
