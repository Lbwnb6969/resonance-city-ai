// VA 0x140a01e80, PDB extent 5 bytes
// country_core::systems::world_raster::_::impl$0::init_access
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::world_raster::_::impl$0::init_access
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
   Extent: 5 */

void pdb_140a01e80(undefined8 *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_1a0 [176];
  undefined1 auStack_f0 [72];
  longlong alStack_a8 [2];
  ulonglong uStack_98;
  longlong alStack_90 [2];
  ulonglong uStack_80;
  undefined *puStack_70;
  undefined *puStack_50;
  undefined1 uStack_41;
  undefined8 uStack_40;
  code *pcStack_38;
  longlong lStack_30;
  code *pcStack_28;
  
  puStack_70 = &UNK_1416efb5e;
  pdb_1416be050(*param_1);
  puStack_70 = &UNK_1416efb6c;
  pdb_1416bdf70(param_1 + 1,param_2,param_3);
  if ((*(char *)(param_3 + 0x93) == '\0') &&
     ((uVar3 = param_1[2], *(ulonglong *)(param_3 + 0x70) <= uVar3 ||
      ((*(ulonglong *)(*(longlong *)(param_3 + 0x60) + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) == 0
      )))) {
    puStack_70 = &UNK_1416efba0;
    pdb_140edd3c0(param_3);
    if ((*(char *)(param_3 + 0x93) == '\0') &&
       ((uVar3 = param_1[3], *(ulonglong *)(param_3 + 0x70) <= uVar3 ||
        ((*(ulonglong *)(*(longlong *)(param_3 + 0x60) + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) ==
         0)))) {
      puStack_70 = &UNK_1416efbd8;
      pdb_140edd3c0(param_3);
      puStack_70 = &UNK_1416efbe6;
      pdb_1416bdf70(param_1 + 4,param_2,param_3);
      if ((*(char *)(param_3 + 0x93) != '\0') ||
         ((uVar3 = param_1[5], uVar3 < *(ulonglong *)(param_3 + 0x70) &&
          ((*(ulonglong *)(*(longlong *)(param_3 + 0x60) + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1)
           != 0)))) {
                    /* WARNING: Subroutine does not return */
        puStack_50 = &UNK_1416be00c;
        pdb_142dc83d0(&UNK_1433260d8,&stack0xffffffffffffffe0,&UNK_143326180);
      }
      if ((*(char *)(param_3 + 0x92) == '\0') &&
         ((*(ulonglong *)(param_3 + 0x58) <= uVar3 ||
          ((*(ulonglong *)(*(longlong *)(param_3 + 0x48) + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1)
           == 0)))) {
        pcStack_38 = (code *)0xfffffffffffffffe;
        pdb_140edc2d0(auStack_f0);
        uVar1 = uVar3 + 1;
        if (uStack_98 < uVar1) {
          uStack_40 = (undefined1 *)CONCAT17(1,(undefined7)uStack_40);
          pdb_142dc5e40(alStack_a8,uVar1,&UNK_143235d70);
        }
        uVar4 = 1L << ((byte)uVar3 & 0x3f);
        puVar2 = (ulonglong *)(alStack_a8[0] + (uVar3 >> 6) * 8);
        *puVar2 = *puVar2 | uVar4;
        if (uStack_80 < uVar1) {
          uStack_40 = (undefined1 *)CONCAT17(1,(undefined7)uStack_40);
          pdb_142dc5e40(alStack_90,uVar1,&UNK_143235d70);
        }
        puVar2 = (ulonglong *)(alStack_90[0] + (uVar3 >> 6) * 8);
        *puVar2 = *puVar2 | uVar4;
        pub_142e32760(auStack_1a0,auStack_f0,0xb0);
        uStack_40 = (undefined1 *)((ulonglong)uStack_40 & 0xffffffffffffff);
        pdb_140edd5d0(param_3,auStack_1a0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      puStack_50 = &UNK_1416be048;
      pdb_142dc83d0(&UNK_143326018,&stack0xffffffffffffffe0,&UNK_1433260c0);
    }
  }
  lStack_30 = param_2 + 4;
  uStack_40 = &uStack_41;
  pcStack_38 = pdb_140f33ec0;
  pcStack_28 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
  puStack_70 = &UNK_1416efc39;
  pdb_142dc83d0(&UNK_143325780,&uStack_40,&UNK_143325890);
}

