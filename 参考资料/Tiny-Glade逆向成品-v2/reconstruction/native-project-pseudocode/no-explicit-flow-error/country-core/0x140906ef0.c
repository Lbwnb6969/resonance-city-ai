// VA 0x140906ef0, PDB extent 5 bytes
// country_core::resources::world_raster_defs::_::impl$0::init_access
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::resources::world_raster_defs::_::impl$0::init_access
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/world_raster.rs
   Extent: 5 */

void pdb_140906ef0(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_1a0 [176];
  undefined1 auStack_f0 [72];
  longlong alStack_a8 [2];
  ulonglong uStack_98;
  undefined *apuStack_90 [2];
  ulonglong uStack_80;
  undefined1 uStack_61;
  undefined1 *puStack_60;
  code *pcStack_58;
  longlong lStack_50;
  code *pcStack_48;
  
  apuStack_90[0] = &UNK_141681372;
  pdb_1416bdf70();
  apuStack_90[0] = &UNK_141681380;
  pdb_1416bdf70(param_1 + 8,param_2,param_3);
  apuStack_90[0] = &UNK_14168138e;
  pdb_1416bdf70(param_1 + 0x10,param_2,param_3);
  apuStack_90[0] = &UNK_14168139c;
  pdb_1416bdf70(param_1 + 0x18,param_2,param_3);
  apuStack_90[0] = &UNK_1416813aa;
  pdb_1416bdf70(param_1 + 0x20,param_2,param_3);
  apuStack_90[0] = &UNK_1416813b8;
  pdb_1416bdf70(param_1 + 0x28,param_2,param_3);
  if ((*(char *)(param_3 + 0x93) != '\0') ||
     ((uVar3 = *(ulonglong *)(param_1 + 0x30), uVar3 < *(ulonglong *)(param_3 + 0x70) &&
      ((*(ulonglong *)(*(longlong *)(param_3 + 0x60) + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0
      )))) {
    lStack_50 = param_2 + 4;
    puStack_60 = &uStack_61;
    pcStack_58 = pdb_140f33ec0;
    pcStack_48 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
    apuStack_90[0] = &UNK_141681458;
    pdb_142dc83d0(&UNK_1433260d8,&puStack_60,&UNK_143326180);
  }
  if ((*(char *)(param_3 + 0x92) == '\0') &&
     ((*(ulonglong *)(param_3 + 0x58) <= uVar3 ||
      ((*(ulonglong *)(*(longlong *)(param_3 + 0x48) + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) == 0
      )))) {
    pdb_140edc2d0(auStack_f0);
    uVar1 = uVar3 + 1;
    if (uStack_98 < uVar1) {
      pdb_142dc5e40(alStack_a8,uVar1,&UNK_143235d70);
    }
    uVar4 = 1L << ((byte)uVar3 & 0x3f);
    puVar2 = (ulonglong *)(alStack_a8[0] + (uVar3 >> 6) * 8);
    *puVar2 = *puVar2 | uVar4;
    if (uStack_80 < uVar1) {
      pdb_142dc5e40(apuStack_90,uVar1,&UNK_143235d70);
    }
    *(ulonglong *)(apuStack_90[0] + (uVar3 >> 6) * 8) =
         *(ulonglong *)(apuStack_90[0] + (uVar3 >> 6) * 8) | uVar4;
    pub_142e32760(auStack_1a0,auStack_f0,0xb0);
    pdb_140edd5d0(param_3,auStack_1a0);
    return;
  }
  lStack_50 = param_2 + 4;
  puStack_60 = &uStack_61;
  pcStack_58 = pdb_140f33ec0;
  pcStack_48 = pdb_140f33ec0;
                    /* WARNING: Subroutine does not return */
  apuStack_90[0] = &UNK_141681494;
  pdb_142dc83d0(&UNK_143326018,&puStack_60,&UNK_1433260c0);
}

