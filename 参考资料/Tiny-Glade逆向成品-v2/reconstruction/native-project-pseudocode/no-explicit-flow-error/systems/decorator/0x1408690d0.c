// VA 0x1408690d0, PDB extent 5 bytes
// system_decorator::ui_systems::ui_move_decorator::_::impl$0::init_access
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_move_decorator.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_decorator::ui_systems::ui_move_decorator::_::impl$0::init_access
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/ui_systems/ui_move_decorator.rs
   Extent: 5 */

void pdb_1408690d0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined1 auStack_188 [176];
  undefined1 auStack_d8 [72];
  longlong alStack_90 [2];
  ulonglong uStack_80;
  undefined *puStack_70;
  undefined1 uStack_41;
  undefined1 *puStack_40;
  code *pcStack_38;
  longlong lStack_30;
  undefined8 uStack_28;
  
  if ((*(char *)(param_3 + 0x93) == '\0') &&
     ((uVar2 = *(ulonglong *)(param_1 + 0x10), *(ulonglong *)(param_3 + 0x70) <= uVar2 ||
      ((*(ulonglong *)(*(longlong *)(param_3 + 0x60) + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) == 0
      )))) {
    puStack_70 = &UNK_1414cdffe;
    pdb_140edd3c0(param_3);
    if ((*(char *)(param_3 + 0x93) == '\0') &&
       ((uVar2 = *(ulonglong *)(param_1 + 0x18), *(ulonglong *)(param_3 + 0x70) <= uVar2 ||
        ((*(ulonglong *)(*(longlong *)(param_3 + 0x60) + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) ==
         0)))) {
      puStack_70 = &UNK_1414ce02e;
      pdb_140edd3c0(param_3);
      puStack_70 = &UNK_1414ce03f;
      pdb_1409f14e0(param_1,param_2,param_3,param_4);
      if ((*(char *)(param_3 + 0x93) == '\0') &&
         ((uVar2 = *(ulonglong *)(param_1 + 0x20), *(ulonglong *)(param_3 + 0x70) <= uVar2 ||
          ((*(ulonglong *)(*(longlong *)(param_3 + 0x60) + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1)
           == 0)))) {
        pdb_140edc2d0(auStack_d8);
        if (uStack_80 < uVar2 + 1) {
          uStack_28 = (code *)CONCAT17(1,(undefined7)uStack_28);
          pdb_142dc5e40(alStack_90,uVar2 + 1,&UNK_143235d70);
        }
        puVar1 = (ulonglong *)(alStack_90[0] + (uVar2 >> 6) * 8);
        *puVar1 = *puVar1 | 1L << ((byte)uVar2 & 0x3f);
        pub_142e32760(auStack_188,auStack_d8,0xb0);
        uStack_28 = (code *)((ulonglong)uStack_28 & 0xffffffffffffff);
        pdb_140edd5d0(param_3,auStack_188);
        return;
      }
    }
  }
  lStack_30 = param_2 + 4;
  puStack_40 = &uStack_41;
  pcStack_38 = pdb_140f33ec0;
  uStack_28 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
  puStack_70 = &UNK_1414ce0b4;
  pdb_142dc83d0(&UNK_143313af0,&puStack_40,&UNK_143313c00);
}

