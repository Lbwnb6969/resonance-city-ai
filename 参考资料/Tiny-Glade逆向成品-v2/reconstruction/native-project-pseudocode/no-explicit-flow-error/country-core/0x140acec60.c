// VA 0x140acec60, PDB extent 555 bytes
// country_core::systems::mod_editor::EditingMod::log
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::mod_editor::EditingMod::log
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/mod_editor.rs
   Extent: 555 */

void pdb_140acec60(longlong param_1,undefined8 *param_2)

{
  ulonglong *puVar1;
  ulonglong arg1;
  byte *arg0;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 **ppuStack_70;
  undefined8 *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  puStack_48 = param_2;
  if (2 < *_DAT_143ca8e90) {
    pcStack_60 = pdb_140001020;
    uStack_c8 = 0;
    puStack_c0 = &UNK_14304db08;
    uStack_b8 = 0x21;
    uStack_b0 = 0;
    puStack_a8 = &UNK_14304d9d1;
    uStack_a0 = 0x2d;
    uStack_98 = 3;
    puStack_90 = &UNK_14304db08;
    uStack_88 = 0x21;
    uStack_80 = 0xe900000001;
    puStack_78 = &UNK_14304dbf8;
    uStack_39 = 1;
    ppuStack_70 = &puStack_68;
    puStack_68 = param_2;
    pdb_140f332f0(&uStack_3a,&uStack_c8);
  }
  puVar5 = puStack_48;
  lVar6 = *(longlong *)(param_1 + 0x70);
  if (lVar6 == 500) {
    puVar1 = *(ulonglong **)(param_1 + 0x68);
    arg1 = *puVar1;
    arg0 = (byte *)puVar1[1];
    pub_142e32770(puVar1,puVar1 + 3,0x2ec8);
    *(undefined8 *)(param_1 + 0x70) = 499;
    lVar6 = 499;
    if (arg1 != 0) {
      if (SBORROW8(0,arg1)) {
        uStack_39 = 1;
        pdb_142dc7ef8(0,499,&UNK_14304dc08);
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      pub_1406abac0(arg0,arg1,1);
    }
  }
  uStack_50 = *puVar5;
  uStack_58 = puVar5[1];
  uVar2 = puVar5[2];
  if (lVar6 == *(longlong *)(param_1 + 0x60)) {
    pdb_142d895b0();
  }
  lVar3 = *(longlong *)(param_1 + 0x68);
  *(undefined8 *)(lVar3 + lVar6 * 0x18) = uStack_50;
  *(undefined8 *)(lVar3 + 8 + lVar6 * 0x18) = uStack_58;
  *(undefined8 *)(lVar3 + 0x10 + lVar6 * 0x18) = uVar2;
  *(longlong *)(param_1 + 0x70) = lVar6 + 1;
  return;
}

