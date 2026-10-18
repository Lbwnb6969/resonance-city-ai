// VA 0x1403fd8c0, PDB extent 444 bytes
// arc_swap::debt::helping::Slots::help<arc_swap::strategy::hybrid::impl$5::wait_for_readers::closure_env$0<alloc::sync::Arc<enum2$<core::result::Result<std::path::PathBuf,enum2$<theme_defs::EventDataError> > >,alloc::alloc::Global>,arc_swap::strategy::hybrid::DefaultConfig>,alloc::sync::Arc<enum2$<core::result::Result<std::path::PathBuf,enum2$<theme_defs::EventDataError> > >,alloc::alloc::Global> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   arc_swap::debt::helping::Slots::help<arc_swap::strategy::hybrid::impl$5::wait_for_readers::closure_env$0<alloc::sync::Arc<enum2$<core::result::Result<std::path::PathBuf,enum2$<theme_defs::EventDataError>
   > 
   >,alloc::alloc::Global>,arc_swap::strategy::hybrid::DefaultConfig>,alloc::sync::Arc<enum2$<core::result::Result<std::path::PathBuf,enum2$<theme_defs::EventDataError>
   > >,alloc::alloc::Global> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 444 */

void pdb_1403fd8c0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  longlong *plStack_60;
  longlong *plStack_58;
  longlong *plStack_50;
  code *pcStack_48;
  longlong alStack_40 [2];
  
  alStack_40[1] = 0xfffffffffffffffe;
  alStack_40[0] = *param_2;
  puVar2 = *(undefined8 **)(param_4 + 8);
  plVar7 = param_2;
  switch((uint)alStack_40[0] & 3) {
  case 0:
code_r0x0001403fd8ff:
    if (alStack_40[0] != 0) goto code_r0x0001403fda0f;
    break;
  case 2:
    do {
      while (param_2[2] == param_3) {
        plStack_50 = (longlong *)*puVar2;
        plStack_50 = (longlong *)pdb_14052c360(&plStack_50);
        pcStack_48 = (code *)0x0;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          lVar6 = *plStack_50;
          *plStack_50 = *plStack_50 + 1;
          UNLOCK();
          if (*plStack_50 == 0 || SCARRY8(lVar6,1) != *plStack_50 < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          LOCK();
          plVar1 = (longlong *)*plVar7;
          if (plStack_50 + 2 == plVar1) {
            *plVar7 = 3;
          }
          UNLOCK();
          if (plStack_50 + 2 != plVar1) {
            LOCK();
            *plStack_50 = *plStack_50 + -1;
            UNLOCK();
            plStack_60 = plStack_50;
            if (*plStack_50 == 0) {
              pdb_1406b1150(&plStack_60);
            }
          }
        }
        plStack_58 = plStack_50;
        lVar3 = param_2[4];
        puVar4 = *(undefined8 **)(param_1 + 0x20);
        LOCK();
        *puVar4 = plStack_50 + 2;
        UNLOCK();
        plVar7 = (longlong *)((ulonglong)puVar4 | 1);
        LOCK();
        lVar6 = *param_2;
        bVar8 = alStack_40[0] == lVar6;
        if (bVar8) {
          *param_2 = (longlong)plVar7;
          lVar6 = alStack_40[0];
        }
        UNLOCK();
        if (bVar8) {
          LOCK();
          *(longlong *)(param_1 + 0x20) = lVar3;
          UNLOCK();
          return;
        }
        LOCK();
        *plStack_50 = *plStack_50 + -1;
        UNLOCK();
        alStack_40[0] = lVar6;
        if (*plStack_50 == 0) {
          pdb_1406b1150(&plStack_58);
        }
        switch((uint)alStack_40[0] & 3) {
        case 0:
          goto code_r0x0001403fd8ff;
        case 1:
          goto code_r0x0001403fd908;
        case 3:
          goto code_r0x0001403fda0f;
        }
      }
      lVar6 = *param_2;
      if (lVar6 == alStack_40[0]) {
        return;
      }
      alStack_40[0] = lVar6;
      switch((uint)lVar6 & 3) {
      case 0:
        goto code_r0x0001403fd8ff;
      case 1:
        goto code_r0x0001403fd908;
      case 3:
        goto code_r0x0001403fda0f;
      }
    } while( true );
  case 3:
code_r0x0001403fda0f:
    plStack_50 = alStack_40;
    pcStack_48 = pdb_140f717e0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_142f55db1,&plStack_50,&UNK_142f55df8);
  }
code_r0x0001403fd908:
  return;
}

