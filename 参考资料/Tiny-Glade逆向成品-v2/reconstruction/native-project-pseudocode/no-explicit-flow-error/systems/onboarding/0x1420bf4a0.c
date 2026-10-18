// VA 0x1420bf4a0, PDB extent 475 bytes
// system_onboarding::hint_state::hint_text_source
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_state.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_onboarding::hint_state::hint_text_source
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/onboarding/src/hint_state.rs
   Extent: 475 */

void pdb_1420bf4a0(ulonglong *param_1,char param_2)

{
  code *pcVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  char *pcStack_88;
  undefined8 uStack_80;
  byte *pbStack_78;
  char **ppcStack_70;
  code *pcStack_68;
  char **ppcStack_60;
  code *pcStack_58;
  char *pcStack_50;
  code *pcStack_48;
  char acStack_39 [9];
  
  acStack_39[1] = -2;
  acStack_39[2] = -1;
  acStack_39[3] = -1;
  acStack_39[4] = -1;
  acStack_39[5] = -1;
  acStack_39[6] = -1;
  acStack_39[7] = -1;
  acStack_39[8] = -1;
  acStack_39[0] = param_2;
  if (param_2 == '\x12') {
    uVar3 = 0x12;
    pcStack_50 = (char *)pdb_140dc6290(&UNK_143453080);
    ppcStack_70 = &pcStack_50;
    puVar5 = &UNK_143453092;
    pcStack_48 = (code *)uVar3;
  }
  else {
    if (param_2 != '\x02') {
      pcStack_50 = acStack_39;
      pcStack_48 = pdb_1420bfa10;
      pdb_140f60760(&ppcStack_70,&UNK_14345309a,&pcStack_50);
      pbStack_78 = (byte *)pcStack_68;
      uVar3 = pdb_140dc6290();
      if (-1 < (longlong)ppcStack_60) {
        if (ppcStack_60 == (char **)0x0) {
          pbVar2 = (byte *)0x1;
        }
        else {
          pdb_14007ee60();
          uVar4 = 1;
          pbVar2 = pub_1406abab0((ulonglong)ppcStack_60,1);
          if (pbVar2 == (byte *)0x0) goto LAB_1420bf5bb;
          pub_142e32760(pbVar2,uVar3,ppcStack_60);
        }
        *param_1 = (ulonglong)ppcStack_60;
        param_1[1] = (ulonglong)pbVar2;
        param_1[2] = (ulonglong)ppcStack_60;
        if (ppcStack_70 == (char **)0x0) {
          return;
        }
        pub_1406abac0(pbStack_78,(ulonglong)ppcStack_70,1);
        return;
      }
      uVar4 = 0;
LAB_1420bf5bb:
      pdb_142dc7e2a(uVar4,ppcStack_60);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar3 = 0x10;
    pcStack_88 = (char *)pdb_140dc6290(&UNK_14345305b);
    uVar4 = 0x10;
    uStack_80 = uVar3;
    pcStack_50 = (char *)pdb_140dc6290(&UNK_14345306b);
    ppcStack_70 = &pcStack_88;
    ppcStack_60 = &pcStack_50;
    pcStack_58 = pdb_1402ed400;
    puVar5 = &UNK_14345307b;
    pcStack_48 = (code *)uVar4;
  }
  pcStack_68 = pdb_1402ed400;
  pdb_140f60760(param_1,puVar5,&ppcStack_70);
  return;
}

