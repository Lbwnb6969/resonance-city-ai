// VA 0x140a08d00, PDB extent 5 bytes
// country_core::systems::ui::resources::slider3d::_::impl$0::init_access
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/slider3d.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ui::resources::slider3d::_::impl$0::init_access
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/resources/slider3d.rs
   Extent: 5 */

void pdb_140a08d00(ulonglong *param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined1 auStack_188 [176];
  undefined1 auStack_d8 [72];
  longlong alStack_90 [2];
  ulonglong uStack_80;
  undefined *puStack_70;
  undefined1 uStack_39;
  undefined1 *puStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  code *pcStack_20;
  
  if ((*(char *)(param_3 + 0x93) == '\0') &&
     ((uVar2 = *param_1, *(ulonglong *)(param_3 + 0x70) <= uVar2 ||
      ((*(ulonglong *)(*(longlong *)(param_3 + 0x60) + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) == 0
      )))) {
    puStack_70 = &UNK_141b1f2d4;
    pdb_140edd3c0(param_3);
    if ((*(char *)(param_3 + 0x93) == '\0') &&
       ((uVar2 = param_1[1], *(ulonglong *)(param_3 + 0x70) <= uVar2 ||
        ((*(ulonglong *)(*(longlong *)(param_3 + 0x60) + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) ==
         0)))) {
      puStack_70 = &UNK_141b1f304;
      pdb_140edd3c0(param_3);
      if ((*(char *)(param_3 + 0x93) == '\0') &&
         ((uVar2 = param_1[6], *(ulonglong *)(param_3 + 0x70) <= uVar2 ||
          ((*(ulonglong *)(*(longlong *)(param_3 + 0x60) + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1)
           == 0)))) {
        pcStack_20 = (code *)0xfffffffffffffffe;
        pdb_140edc2d0(auStack_d8);
        if (uStack_80 < uVar2 + 1) {
          uStack_28 = CONCAT17(1,(undefined7)uStack_28);
          pdb_142dc5e40(alStack_90,uVar2 + 1,&UNK_143235d70);
        }
        puVar1 = (ulonglong *)(alStack_90[0] + (uVar2 >> 6) * 8);
        *puVar1 = *puVar1 | 1L << ((byte)uVar2 & 0x3f);
        pub_142e32760(auStack_188,auStack_d8,0xb0);
        uStack_28 = uStack_28 & 0xffffffffffffff;
        pdb_140edd5d0(param_3,auStack_188);
        return;
      }
    }
  }
  uStack_28 = param_2 + 4;
  puStack_38 = &uStack_39;
  pcStack_30 = pdb_140f33ec0;
  pcStack_20 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
  puStack_70 = &UNK_141b1f377;
  pdb_142dc83d0(&UNK_143325780,&puStack_38,&UNK_143325890);
}

