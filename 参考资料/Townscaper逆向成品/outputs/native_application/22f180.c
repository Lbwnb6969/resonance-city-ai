// RVA 0x22f180 | Placemaker.ByteQube$$GetOriented
// PDB: ByteQube_GetOriented_m206660F962E0C0533434C2A823856EB8C0250D22
// Body: [[1022f180, 1022f259]]
// Direct callees:
// 1022f760 ByteQube_get_Item_mE3492B70E811E9F3F8B624387821C58CEB8E2DE8

ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 __cdecl
ByteQube_GetOriented_m206660F962E0C0533434C2A823856EB8C0250D22
          (ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 *param_1,
          ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 param_2,MethodInfo *param_3)

{
  ByteQube_tF71134A3E9F43437AFBE59D8B5F352AE75B814B2 BVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;

  uVar2 = ByteQube_get_Item_mE3492B70E811E9F3F8B624387821C58CEB8E2DE8
                    (param_1,param_2._0_4_ & 0xff,(MethodInfo *)0x0);
  uVar3 = ByteQube_get_Item_mE3492B70E811E9F3F8B624387821C58CEB8E2DE8
                    (param_1,(uint)param_2._0_4_ >> 8 & 0xff,(MethodInfo *)0x0);
  uVar4 = ByteQube_get_Item_mE3492B70E811E9F3F8B624387821C58CEB8E2DE8
                    (param_1,(uint)param_2._0_4_ >> 0x10 & 0xff,(MethodInfo *)0x0);
  uVar5 = ByteQube_get_Item_mE3492B70E811E9F3F8B624387821C58CEB8E2DE8
                    (param_1,(uint)param_2._0_4_ >> 0x18,(MethodInfo *)0x0);
  uVar6 = ByteQube_get_Item_mE3492B70E811E9F3F8B624387821C58CEB8E2DE8
                    (param_1,param_2._4_4_ & 0xff,(MethodInfo *)0x0);
  uVar7 = ByteQube_get_Item_mE3492B70E811E9F3F8B624387821C58CEB8E2DE8
                    (param_1,(uint)param_2._4_4_ >> 8 & 0xff,(MethodInfo *)0x0);
  uVar8 = ByteQube_get_Item_mE3492B70E811E9F3F8B624387821C58CEB8E2DE8
                    (param_1,(uint)param_2._4_4_ >> 0x10 & 0xff,(MethodInfo *)0x0);
  uVar9 = ByteQube_get_Item_mE3492B70E811E9F3F8B624387821C58CEB8E2DE8
                    (param_1,(uint)param_2._4_4_ >> 0x18,(MethodInfo *)0x0);
  BVar1.___v1_1 = uVar3;
  BVar1.___v0_0 = uVar2;
  BVar1.___v2_2 = uVar4;
  BVar1.___v3_3 = uVar5;
  BVar1.___v4_4 = uVar6;
  BVar1.___v5_5 = uVar7;
  BVar1.___v6_6 = uVar8;
  BVar1.___v7_7 = uVar9;
  return BVar1;
}
