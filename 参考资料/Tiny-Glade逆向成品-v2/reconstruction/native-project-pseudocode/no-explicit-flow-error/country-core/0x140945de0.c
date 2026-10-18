// VA 0x140945de0, PDB extent 575 bytes
// country_core::systems::terrain::impl$0::insert_terrain_resources
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::terrain::impl$0::insert_terrain_resources
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/terrain/mod.rs
   Extent: 575 */

void pdb_140945de0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  undefined8 uStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  byte *pbStack_40;
  longlong lStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uStack_a8 = _DAT_143022d40;
  pbStack_a0 = (byte *)((ulonglong)pbStack_a0 & 0xffffffffffffff00);
  uVar3 = pdb_1419140c0((int)_DAT_143022d40,&uStack_a8);
  uStack_a8 = CONCAT71(uStack_a8._1_7_,0x12);
  uVar3 = pdb_14190e020(uVar3,&uStack_a8);
  uStack_a8 = 0;
  pbStack_a0 = (byte *)0x0;
  uStack_98 = (ulonglong)uStack_98._4_4_ << 0x20;
  uVar3 = pdb_141906c90(uVar3,&uStack_a8);
  pdb_14007ee60();
  pbVar4 = pub_1406abab0(0x80000,4);
  if (pbVar4 != (byte *)0x0) {
    uStack_48 = 0x20000;
    lStack_38 = 0;
    pbStack_40 = pbVar4;
    pdb_1415e04a0(&uStack_48,0x20000,0);
    uVar2 = _DAT_1430218e0;
    uStack_98 = lStack_38;
    uStack_a8 = uStack_48;
    pbStack_a0 = pbStack_40;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = _DAT_1430218e0;
    uStack_90 = 0;
    uStack_88 = 8;
    uStack_70 = 8;
    uVar3 = pdb_141909270(uVar3,&uStack_a8);
    pdb_14007ee60();
    pbVar4 = pub_1406abab0(0x80000,4);
    if (pbVar4 != (byte *)0x0) {
      uStack_48 = 0x20000;
      lStack_38 = 0;
      pbStack_40 = pbVar4;
      pdb_1415e04a0(&uStack_48,0x20000,0);
      uStack_98 = lStack_38;
      uStack_a8 = uStack_48;
      pbStack_a0 = pbStack_40;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_68 = 0;
      uStack_60 = 0;
      uStack_58 = uVar2;
      uStack_90 = 0;
      uStack_88 = 8;
      uStack_70 = 8;
      uVar3 = pdb_1418f5490(uVar3,&uStack_a8);
      uVar3 = pdb_1418f97c0(uVar3,0);
      uStack_a8 = 0;
      pbStack_a0 = (byte *)((ulonglong)pbStack_a0 & 0xffffffffffffff00);
      pdb_1418f4450(uVar3,&uStack_a8);
      return;
    }
  }
  pdb_142dc7e2a(4,0x80000);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

