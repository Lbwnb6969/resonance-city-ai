// VA 0x1403fdc40, PDB extent 508 bytes
// arc_swap::debt::helping::Slots::help<arc_swap::strategy::hybrid::impl$5::wait_for_readers::closure_env$0<enum2$<core::option::Option<alloc::sync::Arc<alloc::string::String,alloc::alloc::Global> > >,arc_swap::strategy::hybrid::DefaultConfig>,enum2$<core::option::Option<alloc::sync::Arc<alloc::string::String,alloc::alloc::Global> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   arc_swap::debt::helping::Slots::help<arc_swap::strategy::hybrid::impl$5::wait_for_readers::closure_env$0<enum2$<core::option::Option<alloc::sync::Arc<alloc::string::String,alloc::alloc::Global>
   > 
   >,arc_swap::strategy::hybrid::DefaultConfig>,enum2$<core::option::Option<alloc::sync::Arc<alloc::string::String,alloc::alloc::Global>
   > > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 508 */

void pdb_1403fdc40(longlong param_1,ulonglong *param_2,ulonglong param_3,longlong param_4)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  bool bVar8;
  ulonglong *puStack_60;
  ulonglong *puStack_58;
  ulonglong *puStack_50;
  code *pcStack_48;
  ulonglong auStack_40 [2];
  
  auStack_40[1] = 0xfffffffffffffffe;
  auStack_40[0] = *param_2;
  puVar2 = *(undefined8 **)(param_4 + 8);
  switch((uint)auStack_40[0] & 3) {
  case 0:
code_r0x0001403fdc7c:
    if (auStack_40[0] != 0) goto code_r0x0001403fddd1;
    break;
  case 2:
    do {
      while (param_2[2] == param_3) {
        puStack_50 = (ulonglong *)*puVar2;
        puVar6 = param_2;
        plVar5 = (longlong *)pdb_14052c290(&puStack_50);
        puStack_50 = (ulonglong *)0x0;
        pcStack_48 = (code *)puVar6;
        if (plVar5 != (longlong *)0x0) {
          if (puVar6 == (ulonglong *)0x0) {
            LOCK();
            if (*plVar5 == 0) {
              *plVar5 = 3;
            }
            UNLOCK();
          }
          else {
            LOCK();
            uVar7 = *puVar6;
            *puVar6 = *puVar6 + 1;
            UNLOCK();
            if (*puVar6 == 0 || SCARRY8(uVar7,1) != (longlong)*puVar6 < 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            LOCK();
            puVar1 = (ulonglong *)*plVar5;
            if (puVar6 + 2 == puVar1) {
              *plVar5 = 3;
            }
            UNLOCK();
            if (puVar6 + 2 != puVar1) {
              LOCK();
              *puVar6 = *puVar6 - 1;
              UNLOCK();
              puStack_60 = puVar6;
              if (*puVar6 == 0) {
                pdb_140ea23f0(&puStack_60);
              }
            }
          }
        }
        puVar6 = (ulonglong *)((longlong)pcStack_48 + 0x10);
        if (pcStack_48 == (code *)0x0) {
          puVar6 = (ulonglong *)0x0;
        }
        uVar3 = param_2[4];
        plVar5 = *(longlong **)(param_1 + 0x20);
        LOCK();
        *plVar5 = (longlong)puVar6;
        UNLOCK();
        LOCK();
        uVar7 = *param_2;
        bVar8 = auStack_40[0] == uVar7;
        if (bVar8) {
          *param_2 = (ulonglong)plVar5 | 1;
          uVar7 = auStack_40[0];
        }
        UNLOCK();
        if (bVar8) {
          LOCK();
          *(ulonglong *)(param_1 + 0x20) = uVar3;
          UNLOCK();
          return;
        }
        puStack_58 = (ulonglong *)pcStack_48;
        auStack_40[0] = uVar7;
        if (pcStack_48 != (code *)0x0) {
          LOCK();
          *(ulonglong *)pcStack_48 = *(ulonglong *)pcStack_48 - 1;
          UNLOCK();
          if (*(ulonglong *)pcStack_48 == 0) {
            pdb_140ea23f0(&puStack_58);
          }
        }
        switch((uint)auStack_40[0] & 3) {
        case 0:
          goto code_r0x0001403fdc7c;
        case 1:
          goto code_r0x0001403fdc85;
        case 3:
          goto code_r0x0001403fddd1;
        }
      }
      uVar7 = *param_2;
      if (uVar7 == auStack_40[0]) {
        return;
      }
      auStack_40[0] = uVar7;
      switch((uint)uVar7 & 3) {
      case 0:
        goto code_r0x0001403fdc7c;
      case 1:
        goto code_r0x0001403fdc85;
      case 3:
        goto code_r0x0001403fddd1;
      }
    } while( true );
  case 3:
code_r0x0001403fddd1:
    puStack_50 = auStack_40;
    pcStack_48 = pdb_140f717e0;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_142f55db1,&puStack_50,&UNK_142f55df8);
  }
code_r0x0001403fdc85:
  return;
}

