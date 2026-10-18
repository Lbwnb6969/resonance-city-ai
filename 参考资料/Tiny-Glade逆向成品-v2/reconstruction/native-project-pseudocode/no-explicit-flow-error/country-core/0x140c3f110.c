// VA 0x140c3f110, PDB extent 251 bytes
// country_core::resources::walls::decorator_storage::DecoratorStorage::apply_decorator_place
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::walls::decorator_storage::DecoratorStorage::apply_decorator_place
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_storage.rs
   Extent: 251 */

void pdb_140c3f110(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  char cStack_7e;
  undefined1 auStack_78 [96];
  
  if (*(char *)(param_1 + 0x1b0) == '\0') {
    uStack_7f = *(undefined1 *)((longlong)param_2 + 0x69);
    uStack_88 = *(undefined4 *)((longlong)param_2 + 100);
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    cStack_7e = (DAT_143cb2d0c == '\0') * '\x05';
    uStack_d8 = *(undefined4 *)(param_2 + 2);
    uStack_d4 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_d0 = *(undefined4 *)(param_2 + 3);
    uStack_cc = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_c8 = param_2[4];
    uStack_c0 = param_2[5];
    uStack_b8 = *(undefined4 *)(param_2 + 6);
    uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x34);
    uStack_b0 = *(undefined4 *)(param_2 + 7);
    uStack_ac = *(undefined4 *)((longlong)param_2 + 0x3c);
    uStack_a8 = param_2[8];
    uStack_a0 = *(undefined4 *)(param_2 + 9);
    uStack_9c = *(undefined4 *)((longlong)param_2 + 0x4c);
    uStack_98 = *(undefined4 *)(param_2 + 10);
    uStack_94 = *(undefined4 *)((longlong)param_2 + 0x54);
    uStack_90 = param_2[0xb];
    uVar2 = *param_2;
    uVar3 = param_2[1];
    uVar5 = uVar2;
    uStack_84 = uVar1;
    uStack_80 = param_3;
    uVar4 = pdb_140c3f210(uStack_d8,uVar2,uVar3);
    uStack_f0 = uVar2;
    uStack_e8 = uVar3;
    uStack_e0 = uVar5;
    pdb_140c8f970(auStack_78,uVar4,uVar1,&uStack_d8,&uStack_f0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_14306c3c9,0x21,&UNK_14306ce90);
}

