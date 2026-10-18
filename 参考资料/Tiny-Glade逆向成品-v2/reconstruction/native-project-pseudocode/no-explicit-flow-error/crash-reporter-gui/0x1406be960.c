// VA 0x1406be960, PDB extent 504 bytes
// core::str::pattern::TwoWaySearcher::next<enum2$<core::str::pattern::MatchOnly> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   core::str::pattern::TwoWaySearcher::next<enum2$<core::str::pattern::MatchOnly> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/crash-reporter-gui/src/lib.rs
   Extent: 504 */

void pdb_1406be960(undefined8 *param_1,ulonglong *param_2,longlong param_3,ulonglong param_4,
                  longlong param_5,ulonglong param_6,char param_7)

{
  ulonglong uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar5 = param_2[4];
  uVar6 = (uVar5 + param_6) - 1;
  if (param_4 <= uVar6) {
LAB_1406bead4:
    param_2[4] = param_4;
    uVar4 = 0;
LAB_1406beb06:
    *param_1 = uVar4;
    return;
  }
  uVar7 = *param_2;
  uVar8 = param_2[6];
LAB_1406be9e7:
  if ((param_2[3] >> ((ulonglong)*(byte *)(param_3 + uVar6) & 0x3f) & 1) == 0) {
    uVar5 = uVar5 + param_6;
    param_2[4] = uVar5;
    if (param_7 != '\0') goto LAB_1406be9d7;
LAB_1406bea5f:
    uVar6 = 0;
    goto LAB_1406be9d0;
  }
  uVar6 = uVar7;
  if (uVar7 < uVar8) {
    uVar6 = uVar8;
  }
  if (param_7 != '\0') {
    uVar6 = uVar7;
  }
  uVar9 = uVar6;
  do {
    if (param_6 <= uVar9) {
      uVar6 = uVar7;
      uVar9 = uVar8;
      if (param_7 != '\0') {
        uVar9 = 0;
      }
      goto LAB_1406bea90;
    }
    if (param_4 <= uVar5 + uVar9) {
      uVar7 = uVar6 + uVar5;
      if (uVar6 + uVar5 < param_4) {
        uVar7 = param_4;
      }
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar7,param_4,&UNK_142f988d8);
    }
    uVar1 = uVar9 + 1;
    pcVar2 = (char *)(param_5 + uVar9);
    pcVar3 = (char *)(param_3 + uVar5 + uVar9);
    uVar9 = uVar1;
  } while (*pcVar2 == *pcVar3);
  uVar5 = (uVar5 - uVar7) + uVar1;
  param_2[4] = uVar5;
  if (param_7 == '\0') goto LAB_1406bea5f;
  goto LAB_1406be9d7;
  while( true ) {
    uVar6 = uVar6 - 1;
    if (param_6 <= uVar6) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar6,param_6,&UNK_142f988a8);
    }
    uVar1 = uVar6 + uVar5;
    if (param_4 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar1,param_4,&UNK_142f988c0);
    }
    if (*(char *)(param_5 + uVar6) != *(char *)(param_3 + uVar1)) break;
LAB_1406bea90:
    if (uVar6 <= uVar9) {
      param_2[4] = param_6 + uVar5;
      if (param_7 == '\0') {
        param_2[6] = 0;
      }
      param_1[1] = uVar5;
      param_1[2] = param_6 + uVar5;
      uVar4 = 1;
      goto LAB_1406beb06;
    }
  }
  uVar5 = uVar5 + param_2[2];
  param_2[4] = uVar5;
  uVar6 = param_6 - param_2[2];
  if (param_7 == '\0') {
LAB_1406be9d0:
    param_2[6] = uVar6;
    uVar8 = uVar6;
  }
LAB_1406be9d7:
  uVar6 = (param_6 - 1) + uVar5;
  if (param_4 <= uVar6) goto LAB_1406bead4;
  goto LAB_1406be9e7;
}

