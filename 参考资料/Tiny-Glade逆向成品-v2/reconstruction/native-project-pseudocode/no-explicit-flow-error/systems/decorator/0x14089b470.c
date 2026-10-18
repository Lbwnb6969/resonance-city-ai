// VA 0x14089b470, PDB extent 138 bytes
// system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::determine_segment_type
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::stairs_graph_and_requests::determine_segment_type
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/stairs_graph_and_requests.rs
   Extent: 138 */

char pdb_14089b470(undefined8 *param_1,longlong param_2,float *param_3,longlong param_4)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc81f2(0,0,&UNK_1430136e0);
  }
  if (param_2 != 0) {
    fVar2 = (float)*param_1 - (float)param_1[param_2 + -1];
    fVar3 = (float)((ulonglong)*param_1 >> 0x20) - (float)((ulonglong)param_1[param_2 + -1] >> 0x20)
    ;
    fVar2 = (float)((uint)(*param_3 - param_3[param_4 + -1]) & _DAT_142e377e0) /
            SQRT(fVar3 * fVar3 + fVar2 * fVar2);
    cVar1 = '\x03';
    if (fVar2 <= _DAT_142e37874) {
      cVar1 = (_DAT_142e37ae4 < fVar2) + '\x01';
    }
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(0,0,&UNK_1430136f8);
}

