// VA 0x14030e9e0, PDB extent 330 bytes
// concurrent_queue::bounded::Bounded::pop<async_task::runnable::Runnable<tuple$<> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   concurrent_queue::bounded::Bounded::pop<async_task::runnable::Runnable<tuple$<> > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 330 */

undefined1 * pdb_14030e9e0(undefined1 *param_1,ulonglong *param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  bool bVar8;
  
  uVar7 = *param_2;
  uVar3 = param_2[0x23];
  uVar5 = param_2[0x21] - 1 & uVar7;
  if (uVar5 < uVar3) {
    uVar2 = -param_2[0x20] & uVar7;
    do {
      uVar3 = *(ulonglong *)(param_2[0x22] + uVar5 * 0x10);
      if (uVar7 + 1 == uVar3) {
        if (param_2[0x23] <= uVar5 + 1) {
          uVar3 = uVar2 + param_2[0x20];
        }
        LOCK();
        uVar4 = *param_2;
        bVar8 = uVar7 == uVar4;
        if (bVar8) {
          *param_2 = uVar3;
          uVar4 = uVar7;
        }
        UNLOCK();
        if (bVar8) {
          plVar6 = (longlong *)(param_2[0x22] + uVar5 * 0x10);
          *plVar6 = uVar7 + param_2[0x20];
          *(longlong *)(param_1 + 8) = plVar6[1];
          uVar1 = 0;
LAB_14030eb10:
          *param_1 = uVar1;
          return param_1;
        }
      }
      else {
        if (uVar3 == uVar7) {
          LOCK();
          UNLOCK();
          if ((~param_2[0x21] & param_2[0x10]) == uVar7) {
            if ((param_2[0x21] & param_2[0x10]) == 0) {
              param_1[1] = 0;
            }
            else {
              param_1[1] = 1;
            }
            uVar1 = 1;
            goto LAB_14030eb10;
          }
        }
        else {
          pdb_140f502e0();
        }
        uVar4 = *param_2;
      }
      uVar3 = param_2[0x23];
      uVar5 = param_2[0x21] - 1 & uVar4;
      uVar2 = -param_2[0x20] & uVar4;
      uVar7 = uVar4;
    } while (uVar5 < uVar3);
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2(uVar5,uVar3,&UNK_142f3be70);
}

