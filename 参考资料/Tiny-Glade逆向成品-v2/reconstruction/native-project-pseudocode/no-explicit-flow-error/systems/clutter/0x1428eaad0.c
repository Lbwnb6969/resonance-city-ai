// VA 0x1428eaad0, PDB extent 560 bytes
// core::str::pattern::TwoWaySearcher::next_back<enum2$<core::str::pattern::MatchOnly> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   core::str::pattern::TwoWaySearcher::next_back<enum2$<core::str::pattern::MatchOnly> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/lib.rs
   Extent: 560 */

void pdb_1428eaad0(undefined8 *param_1,longlong param_2,longlong param_3,ulonglong param_4,
                  longlong param_5,ulonglong param_6,byte param_7)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  char *pcVar11;
  
  uVar5 = *(ulonglong *)(param_2 + 0x28);
  uVar8 = uVar5 - param_6;
  if (uVar8 < param_4) {
    uVar4 = *(ulonglong *)(param_2 + 8);
    uVar10 = *(ulonglong *)(param_2 + 0x38);
    do {
      uVar7 = param_6;
      if ((*(ulonglong *)(param_2 + 0x18) >> ((ulonglong)*(byte *)(param_3 + uVar8) & 0x3f) & 1) ==
          0) {
        *(ulonglong *)(param_2 + 0x28) = uVar8;
        uVar5 = uVar8;
      }
      else {
        uVar6 = uVar4;
        if (uVar10 < uVar4) {
          uVar6 = uVar10;
        }
        if ((param_7 & 1) != 0) {
          uVar6 = uVar4;
        }
        if (uVar6 - 1 < param_6) {
          lVar9 = -uVar6;
          pcVar11 = (char *)(param_5 + -1 + uVar6);
          uVar6 = uVar6 + uVar8;
          do {
            uVar6 = uVar6 - 1;
            if (lVar9 == 0) goto LAB_1428eac09;
            if (param_4 <= uVar6) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar6,param_4,&UNK_1435b26c0);
            }
            cVar2 = *pcVar11;
            lVar9 = lVar9 + 1;
            pcVar11 = pcVar11 + -1;
          } while (cVar2 == *(char *)(param_3 + uVar6));
          uVar5 = (uVar5 - uVar4) - lVar9;
          *(ulonglong *)(param_2 + 0x28) = uVar5;
        }
        else {
          if (uVar6 != 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(uVar6 - 1,param_6,&UNK_1435b26a8);
          }
LAB_1428eac09:
          uVar7 = uVar10;
          if (param_7 != 0) {
            uVar7 = param_6;
          }
          uVar6 = uVar4;
          do {
            if (uVar7 <= uVar6) {
              *(ulonglong *)(param_2 + 0x28) = uVar8;
              if (param_7 == 0) {
                *(ulonglong *)(param_2 + 0x38) = param_6;
              }
              param_1[1] = uVar8;
              param_1[2] = uVar5;
              uVar3 = 1;
              goto LAB_1428eac9b;
            }
            if (param_6 <= uVar6) {
              if (uVar4 <= param_6) {
                uVar4 = param_6;
              }
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar4,param_6,&UNK_1435b2678);
            }
            if (param_4 <= uVar8 + uVar6) {
              uVar5 = uVar8 + uVar4;
              if (uVar8 + uVar4 < param_4) {
                uVar5 = param_4;
              }
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(uVar5,param_4,&UNK_1435b2690);
            }
            pcVar11 = (char *)(param_5 + uVar6);
            pcVar1 = (char *)(param_3 + uVar8 + uVar6);
            uVar6 = uVar6 + 1;
          } while (*pcVar11 == *pcVar1);
          uVar5 = uVar5 - *(ulonglong *)(param_2 + 0x10);
          *(ulonglong *)(param_2 + 0x28) = uVar5;
          uVar7 = *(ulonglong *)(param_2 + 0x10);
        }
      }
      if (param_7 == 0) {
        *(ulonglong *)(param_2 + 0x38) = uVar7;
        uVar10 = uVar7;
      }
      uVar8 = uVar5 - param_6;
    } while (uVar8 < param_4);
  }
  *(undefined8 *)(param_2 + 0x28) = 0;
  uVar3 = 0;
LAB_1428eac9b:
  *param_1 = uVar3;
  return;
}

