// VA 0x142a93410, PDB extent 313 bytes
// ron::de::impl$5::next_element_seed<core::marker::PhantomData<u8> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: ron::de::impl$5::next_element_seed<core::marker::PhantomData<u8> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/lib.rs
   Extent: 313 */

char * pdb_142a93410(char *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  char *pcVar3;
  int *piVar4;
  char cStack_60;
  byte bStack_5f;
  undefined8 uStack_5e;
  undefined8 uStack_56;
  undefined8 uStack_4e;
  undefined8 uStack_46;
  undefined8 uStack_3e;
  undefined8 uStack_36;
  undefined8 uStack_2e;
  undefined6 uStack_26;
  undefined2 uStack_20;
  undefined6 uStack_1e;
  
  pdb_140dca8b0(&cStack_60);
  if (cStack_60 == '2') {
    if ((bStack_5f & 1) == 0) {
      param_1[0] = '2';
      param_1[1] = '\0';
      return param_1;
    }
    pcVar3 = (char *)*param_2;
    if (*pcVar3 != '\0') {
      if (*(longlong *)(pcVar3 + 8) == 0) {
        *param_1 = '0';
        return param_1;
      }
      *(longlong *)(pcVar3 + 8) = *(longlong *)(pcVar3 + 8) + -1;
      pcVar3 = (char *)*param_2;
    }
    pdb_142d06870(&cStack_60,pcVar3 + 0x10);
    bVar1 = bStack_5f;
    if (cStack_60 != '2') {
      *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_1e,uStack_20);
      *(undefined8 *)(param_1 + 0x32) = uStack_2e;
      *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_20,uStack_26);
      *(undefined8 *)(param_1 + 0x22) = uStack_3e;
      *(undefined8 *)(param_1 + 0x2a) = uStack_36;
      *(undefined8 *)(param_1 + 0x12) = uStack_4e;
      *(undefined8 *)(param_1 + 0x1a) = uStack_46;
      *(undefined8 *)(param_1 + 2) = uStack_5e;
      *(undefined8 *)(param_1 + 10) = uStack_56;
      *param_1 = cStack_60;
      param_1[1] = bStack_5f;
      return param_1;
    }
    piVar4 = (int *)*param_2;
    if (*piVar4 == 1) {
      lVar2 = -1;
      if (*(longlong *)(piVar4 + 2) + 1 != 0) {
        lVar2 = *(longlong *)(piVar4 + 2) + 1;
      }
      *(longlong *)(piVar4 + 2) = lVar2;
      piVar4 = (int *)*param_2;
    }
    pdb_140dd3ab0(&cStack_60,piVar4 + 4);
    if (cStack_60 == '2') {
      *(byte *)((longlong)param_2 + 9) = bStack_5f;
      param_1[2] = bVar1;
      param_1[0] = '2';
      param_1[1] = '\x01';
      return param_1;
    }
  }
  *(ulonglong *)(param_1 + 0x40) = CONCAT62(uStack_1e,uStack_20);
  *(undefined8 *)(param_1 + 0x32) = uStack_2e;
  *(ulonglong *)(param_1 + 0x3a) = CONCAT26(uStack_20,uStack_26);
  *(undefined8 *)(param_1 + 0x22) = uStack_3e;
  *(undefined8 *)(param_1 + 0x2a) = uStack_36;
  *(undefined8 *)(param_1 + 0x12) = uStack_4e;
  *(undefined8 *)(param_1 + 0x1a) = uStack_46;
  *(undefined8 *)(param_1 + 2) = uStack_5e;
  *(undefined8 *)(param_1 + 10) = uStack_56;
  *param_1 = cStack_60;
  param_1[1] = bStack_5f;
  return param_1;
}

