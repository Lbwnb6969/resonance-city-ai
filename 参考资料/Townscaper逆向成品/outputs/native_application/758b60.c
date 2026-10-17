// RVA 0x758b60 | Placemaker.Props.PropNode$$get_moteveeIndex
// PDB: PropNode_get_moteveeIndex_m71F77B36E8419E9E069DC62D7E8050D80C81253F
// Body: [[10758b60, 10758b77]]
// Direct callees:

int __cdecl
PropNode_get_moteveeIndex_m71F77B36E8419E9E069DC62D7E8050D80C81253F
          (PropNode_t2B7B710DA9BFB110770C3D9CA688CC5F3BD5A952 *param_1,MethodInfo *param_2)

{
  return (uint)param_1->___overlapCount_14 + (uint)param_1->___childCount_13 +
         (uint)param_1->___parentCount_12;
}
