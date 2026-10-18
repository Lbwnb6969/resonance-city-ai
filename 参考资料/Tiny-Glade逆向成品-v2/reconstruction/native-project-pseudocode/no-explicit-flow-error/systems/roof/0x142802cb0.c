// VA 0x142802cb0, PDB extent 476 bytes
// arc_swap::debt::helping::Slots::help<arc_swap::strategy::hybrid::impl$5::wait_for_readers::closure_env$0<enum2$<core::option::Option<alloc::sync::Arc<alloc::string::String,alloc::alloc::Global> > >,arc_swap::strategy::hybrid::DefaultConfig>,enum2$<core::option::Option<alloc::sync::Arc<alloc::string::String,alloc::alloc::Global> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   arc_swap::debt::helping::Slots::help<arc_swap::strategy::hybrid::impl$5::wait_for_readers::closure_env$0<enum2$<core::option::Option<alloc::sync::Arc<alloc::string::String,alloc::alloc::Global>
   > 
   >,arc_swap::strategy::hybrid::DefaultConfig>,enum2$<core::option::Option<alloc::sync::Arc<alloc::string::String,alloc::alloc::Global>
   > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/lib.rs
   Extent: 476 */

void pdb_142802cb0(longlong param_1,ulonglong *param_2,ulonglong param_3,longlong param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  bool bVar9;
  ulonglong *puStack_60;
  ulonglong *puStack_58;
  ulonglong *puStack_50;
  code *pcStack_48;
  ulonglong auStack_40 [2];
  
  auStack_40[1] = 0xfffffffffffffffe;
  auStack_40[0] = *param_2;
  puVar3 = *(undefined8 **)(param_4 + 8);
  switch((uint)auStack_40[0] & 3) {
  case 0:
code_r0x000142802cec:
    if (auStack_40[0] != 0) goto code_r0x000142802e26;
    break;
  case 2:
    do {
      while (param_2[2] == param_3) {
        puStack_50 = (ulonglong *)*puVar3;
        puVar8 = param_2;
        plVar6 = (longlong *)pdb_141f111c0(&puStack_50);
        puStack_50 = (ulonglong *)0x0;
        pcStack_48 = (code *)puVar8;
        if (plVar6 != (longlong *)0x0) {
          if (puVar8 == (ulonglong *)0x0) {
            LOCK();
            if (*plVar6 == 0) {
              *plVar6 = 3;
            }
            UNLOCK();
          }
          else {
            LOCK();
            uVar7 = *puVar8;
            *puVar8 = *puVar8 + 1;
            UNLOCK();
            if (*puVar8 == 0 || SCARRY8(uVar7,1) != (longlong)*puVar8 < 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            LOCK();
            puVar1 = (ulonglong *)*plVar6;
            if (puVar8 + 2 == puVar1) {
              *plVar6 = 3;
            }
            UNLOCK();
            if (puVar8 + 2 != puVar1) {
              LOCK();
              *puVar8 = *puVar8 - 1;
              UNLOCK();
              puStack_60 = puVar8;
              if (*puVar8 == 0) {
                pdb_140ea23f0(&puStack_60);
              }
            }
          }
        }
        puStack_58 = (ulonglong *)pcStack_48;
        puVar8 = (ulonglong *)((longlong)pcStack_48 + 0x10);
        if (pcStack_48 == (code *)0x0) {
          puVar8 = (ulonglong *)0x0;
        }
        uVar4 = param_2[4];
        plVar6 = *(longlong **)(param_1 + 0x20);
        LOCK();
        lVar2 = *plVar6;
        *plVar6 = (longlong)puVar8;
        UNLOCK();
        LOCK();
        uVar7 = *param_2;
        bVar9 = auStack_40[0] == uVar7;
        if (bVar9) {
          *param_2 = (ulonglong)plVar6 | 1;
          uVar7 = auStack_40[0];
        }
        UNLOCK();
        if (bVar9) {
          LOCK();
          *(ulonglong *)(param_1 + 0x20) = uVar4;
          UNLOCK();
          return;
        }
        auStack_40[0] = uVar7;
        if (pcStack_48 != (code *)0x0) {
          LOCK();
          *(ulonglong *)pcStack_48 = *(ulonglong *)pcStack_48 - 1;
          UNLOCK();
          if (*(ulonglong *)pcStack_48 == 0) {
            pdb_140ea23f0(&puStack_58,param_2,uVar4,lVar2);
          }
        }
        switch((uint)auStack_40[0] & 3) {
        case 0:
          goto code_r0x000142802cec;
        case 1:
          goto code_r0x000142802cf5;
        case 3:
          goto code_r0x000142802e26;
        }
      }
      uVar7 = *param_2;
      if (uVar7 == auStack_40[0]) {
        return;
      }
      auStack_40[0] = uVar7;
      switch((uint)uVar7 & 3) {
      case 0:
        goto code_r0x000142802cec;
      case 1:
        goto code_r0x000142802cf5;
      case 3:
        goto code_r0x000142802e26;
      }
    } while( true );
  case 3:
code_r0x000142802e26:
    puStack_50 = auStack_40;
    pcStack_48 = pdb_140f717e0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_14359b3f8,&puStack_50,&UNK_14359b440);
  }
code_r0x000142802cf5:
  return;
}

