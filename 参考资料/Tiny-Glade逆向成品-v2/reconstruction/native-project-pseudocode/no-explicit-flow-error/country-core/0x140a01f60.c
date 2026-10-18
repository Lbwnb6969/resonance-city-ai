// VA 0x140a01f60, PDB extent 49 bytes
// country_core::systems::world_raster::_::impl$0::init_access
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::world_raster::_::impl$0::init_access
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/world_raster.rs
   Extent: 49 */

void pdb_140a01f60(undefined8 *param_1,undefined8 param_2,longlong param_3)

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
  undefined *puStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_21;
  undefined1 *puStack_20;
  
  uStack_40 = 0x140a01f7c;
  pdb_1416be050(*param_1);
  if ((*(char *)(param_3 + 0x93) != '\0') ||
     ((uVar3 = param_1[1], uVar3 < *(ulonglong *)(param_3 + 0x70) &&
      ((*(ulonglong *)(*(longlong *)(param_3 + 0x60) + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0
      )))) {
    puStack_20 = &uStack_21;
                    /* WARNING: Subroutine does not return */
    puStack_50 = &UNK_1416be00c;
    pdb_142dc83d0(&UNK_1433260d8,&puStack_20,&UNK_143326180);
  }
  if ((*(char *)(param_3 + 0x92) == '\0') &&
     ((*(ulonglong *)(param_3 + 0x58) <= uVar3 ||
      ((*(ulonglong *)(*(longlong *)(param_3 + 0x48) + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) == 0
      )))) {
    uStack_38 = 0xfffffffffffffffe;
    pdb_140edc2d0(auStack_f0);
    uVar1 = uVar3 + 1;
    if (uStack_98 < uVar1) {
      uStack_40 = CONCAT17(1,(undefined7)uStack_40);
      pdb_142dc5e40(alStack_a8,uVar1,&UNK_143235d70);
    }
    uVar4 = 1L << ((byte)uVar3 & 0x3f);
    puVar2 = (ulonglong *)(alStack_a8[0] + (uVar3 >> 6) * 8);
    *puVar2 = *puVar2 | uVar4;
    if (uStack_80 < uVar1) {
      uStack_40 = CONCAT17(1,(undefined7)uStack_40);
      pdb_142dc5e40(alStack_90,uVar1,&UNK_143235d70);
    }
    puVar2 = (ulonglong *)(alStack_90[0] + (uVar3 >> 6) * 8);
    *puVar2 = *puVar2 | uVar4;
    pub_142e32760(auStack_1a0,auStack_f0,0xb0);
    uStack_40 = uStack_40 & 0xffffffffffffff;
    pdb_140edd5d0(param_3,auStack_1a0);
    return;
  }
  puStack_20 = &uStack_21;
                    /* WARNING: Subroutine does not return */
  puStack_50 = &UNK_1416be048;
  pdb_142dc83d0(&UNK_143326018,&puStack_20,&UNK_1433260c0);
}

