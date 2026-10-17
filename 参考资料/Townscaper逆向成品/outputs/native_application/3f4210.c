// RVA 0x3f4210 | Placemaker.WaveFunctionCollapse$$IteratePropagationCount
// PDB: WaveFunctionCollapse_IteratePropagationCount_m97082727FDA2F225E45C4B9C67142D33203BBD71
// Body: [[103f4210, 103f4228]]
// Direct callees:

void __cdecl
WaveFunctionCollapse_IteratePropagationCount_m97082727FDA2F225E45C4B9C67142D33203BBD71
          (WaveFunctionCollapse_t70F8917FC43B0A37E3BD8CD8D6F6B4C59214F8A9 *param_1,
          MethodInfo *param_2)

{
  if (param_1->___propagationCounter_5 == param_1->___lastStartedPropagation_6) {
    param_1->___propagationCounter_5 = param_1->___propagationCounter_5 + 4;
  }
  return;
}
