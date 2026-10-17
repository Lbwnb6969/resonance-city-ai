// RVA 0x3d5e30 | Placemaker.MetaSave$$get_isBroken
// PDB: MetaSave_get_isBroken_m975083F67D58355316AD58AE0BF439CDF946354C
// Body: [[103d5e30, 103d5e41]]
// Direct callees:

bool __cdecl
MetaSave_get_isBroken_m975083F67D58355316AD58AE0BF439CDF946354C
          (MetaSave_tA6122910ED60AD47BC2C1795BA0582026B9210CB *param_1,MethodInfo *param_2)

{
  return (param_1->___state_18 & 0xe0U) != 0;
}
