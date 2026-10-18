// VA 0x1408a57d0, PDB extent 148 bytes
// system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::determine_ladder_support
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/playermade_stairs_assemble_visuals.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::determine_ladder_support
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/playermade_stairs/playermade_stairs_assemble_visuals.rs
   Extent: 148 */

char pdb_1408a57d0(longlong param_1,longlong param_2,int *param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  int *piVar4;
  bool bVar5;
  
  piVar4 = param_3 + 8;
  pcVar2 = param_4 + 0x14;
  if (*(float *)(param_1 + 4) <= *(float *)(param_2 + 4) &&
      *(float *)(param_2 + 4) != *(float *)(param_1 + 4)) {
    piVar4 = param_3;
    pcVar2 = param_4;
    param_3 = param_3 + 8;
  }
  bVar3 = true;
  bVar5 = true;
  if ((char)piVar4[6] == '\x01') {
    if (*piVar4 != 2) {
      bVar5 = (float)piVar4[1] <= _DAT_1430140b0;
      cVar1 = (char)param_3[6];
      goto joined_r0x0001408a580c;
    }
    bVar5 = *pcVar2 == '\0';
  }
  cVar1 = (char)param_3[6];
joined_r0x0001408a580c:
  if ((cVar1 == '\x01') && (*param_3 != 2)) {
    bVar3 = (float)param_3[1] <= _DAT_1430140b0;
  }
  if (!bVar5) {
    return '\x04' - bVar3;
  }
  if (bVar3 != false) {
    return '\0';
  }
  if ((*piVar4 != 2) && ((float)piVar4[1] <= _DAT_1430140b0)) {
    return '\x01';
  }
  return '\x02';
}

