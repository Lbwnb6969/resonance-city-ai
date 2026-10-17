// RVA 0x758b30 | Placemaker.Props.PropNode$$get_anchorIndex
// PDB: PropNode_get_anchorIndex_m9330A4CF8B5D35B37506BB21493735011A4F5049
// Body: [[10758b30, 10758b4d]]
// Direct callees:

int __cdecl
PropNode_get_anchorIndex_m9330A4CF8B5D35B37506BB21493735011A4F5049
          (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_1,MethodInfo *param_2)

{
  return (uint)param_1->___moteveeCount_15 + (uint)param_1->___overlapCount_14 +
         (uint)param_1->___childCount_13 + (uint)param_1->___parentCount_12;
}
