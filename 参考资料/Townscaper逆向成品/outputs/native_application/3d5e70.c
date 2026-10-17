// RVA 0x3d5e70 | Placemaker.MetaSave$$get_shouldBeInPool
// PDB: MetaSave_get_shouldBeInPool_m16F8C76FBAACCC5432BB207B82CFBABC476B9DB9
// Body: [[103d5e70, 103d5e81]]
// Direct callees:

bool __cdecl
MetaSave_get_shouldBeInPool_m16F8C76FBAACCC5432BB207B82CFBABC476B9DB9
          (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *param_1,MethodInfo *param_2)

{
  return (param_1->___state_18 & 0xc0U) != 0;
}
