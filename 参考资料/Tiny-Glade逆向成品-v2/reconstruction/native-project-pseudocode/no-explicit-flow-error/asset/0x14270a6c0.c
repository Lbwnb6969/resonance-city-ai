// VA 0x14270a6c0, PDB extent 354 bytes
// asset::prefab::config::impl$6::inherit_from
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: asset::prefab::config::impl$6::inherit_from
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/prefab/config.rs
   Extent: 354 */

void pdb_14270a6c0(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  undefined8 uStack_10;
  int iStack_8;
  
  if ((char)param_1[0x10] == '\0') {
    *(char *)(param_1 + 0x10) = (char)param_2[0x10];
    iVar2 = *param_1;
  }
  else {
    iVar2 = *param_1;
  }
  if (iVar2 == 0) {
    if (*param_2 == 2) {
      iStack_8 = param_2[3];
      uStack_10 = *(undefined8 *)(param_2 + 1);
    }
    *param_1 = *param_2;
    *(undefined8 *)(param_1 + 1) = uStack_10;
    param_1[3] = iStack_8;
    iVar2 = param_1[4];
  }
  else {
    iVar2 = param_1[4];
  }
  if (iVar2 == 0) {
    if (param_2[4] == 2) {
      iStack_8 = param_2[7];
      uStack_10 = *(undefined8 *)(param_2 + 5);
    }
    param_1[4] = param_2[4];
    *(undefined8 *)(param_1 + 5) = uStack_10;
    param_1[7] = iStack_8;
    iVar2 = param_1[8];
  }
  else {
    iVar2 = param_1[8];
  }
  if (iVar2 == 0) {
    if (param_2[8] == 2) {
      iStack_8 = param_2[0xb];
      uStack_10 = *(undefined8 *)(param_2 + 9);
    }
    param_1[8] = param_2[8];
    *(undefined8 *)(param_1 + 9) = uStack_10;
    param_1[0xb] = iStack_8;
    iVar2 = param_1[0xc];
  }
  else {
    iVar2 = param_1[0xc];
  }
  if (iVar2 == 0) {
    if (param_2[0xc] == 2) {
      iStack_8 = param_2[0xf];
      uStack_10 = *(undefined8 *)(param_2 + 0xd);
    }
    param_1[0xc] = param_2[0xc];
    *(undefined8 *)(param_1 + 0xd) = uStack_10;
    param_1[0xf] = iStack_8;
    cVar3 = *(char *)((longlong)param_1 + 0x41);
  }
  else {
    cVar3 = *(char *)((longlong)param_1 + 0x41);
  }
  if (cVar3 == '\x02') {
    bVar1 = *(byte *)((longlong)param_2 + 0x41);
    cVar3 = '\x02';
    if (1 < bVar1) {
      cVar3 = bVar1 - 2;
    }
    if (cVar3 != '\0') {
      if (cVar3 == '\x01') {
        *(undefined1 *)((longlong)param_1 + 0x41) = 3;
        return;
      }
      *(byte *)((longlong)param_1 + 0x41) = bVar1 & 1;
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0x41) = 2;
    return;
  }
  return;
}

