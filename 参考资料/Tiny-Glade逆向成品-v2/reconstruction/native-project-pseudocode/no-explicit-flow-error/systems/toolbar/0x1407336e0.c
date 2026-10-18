// VA 0x1407336e0, PDB extent 506 bytes
// toolbar::mei::core::MeiContext::load_font_table
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::mei::core::MeiContext::load_font_table
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/mei/config.rs
   Extent: 506 */

void pdb_1407336e0(longlong param_1)

{
  longlong *plVar1;
  char acStack_100 [8];
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  byte *pbStack_28;
  undefined8 *puStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pdb_140737780(acStack_100,&UNK_142fa6cc0,0x16);
  if (acStack_100[0] != '2') {
    uStack_38 = uStack_a0;
    uStack_48 = uStack_b0;
    uStack_40 = uStack_a8;
    uStack_58 = uStack_c0;
    uStack_50 = uStack_b8;
    uStack_68 = uStack_d0;
    uStack_64 = uStack_cc;
    uStack_60 = uStack_c8;
    uStack_5c = uStack_c4;
    uStack_78 = uStack_e0;
    uStack_74 = uStack_dc;
    uStack_70 = uStack_d8;
    uStack_6c = uStack_d4;
    uStack_88 = uStack_f0;
    uStack_84 = uStack_ec;
    uStack_80 = uStack_e8;
    uStack_7c = uStack_e4;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_142fa6190,0x2b,&uStack_98,&UNK_142fa6170,&UNK_142fa6cd8);
  }
  uStack_68 = uStack_d8;
  uStack_64 = uStack_d4;
  uStack_60 = uStack_d0;
  uStack_5c = uStack_cc;
  uStack_78 = uStack_e8;
  uStack_74 = uStack_e4;
  uStack_70 = uStack_e0;
  uStack_6c = uStack_dc;
  uStack_88 = uStack_f8;
  uStack_84 = uStack_f4;
  uStack_80 = uStack_f0;
  uStack_7c = uStack_ec;
  uStack_98 = 1;
  uStack_90 = 1;
  pdb_14007ee60();
  pbStack_28 = pub_1406abab0(0x40,8);
  if (pbStack_28 != (byte *)0x0) {
    *(undefined4 *)(pbStack_28 + 0x30) = uStack_68;
    *(undefined4 *)(pbStack_28 + 0x34) = uStack_64;
    *(undefined4 *)(pbStack_28 + 0x38) = uStack_60;
    *(undefined4 *)(pbStack_28 + 0x3c) = uStack_5c;
    *(undefined4 *)(pbStack_28 + 0x20) = uStack_78;
    *(undefined4 *)(pbStack_28 + 0x24) = uStack_74;
    *(undefined4 *)(pbStack_28 + 0x28) = uStack_70;
    *(undefined4 *)(pbStack_28 + 0x2c) = uStack_6c;
    *(undefined4 *)(pbStack_28 + 0x10) = uStack_88;
    *(undefined4 *)(pbStack_28 + 0x14) = uStack_84;
    *(undefined4 *)(pbStack_28 + 0x18) = uStack_80;
    *(undefined4 *)(pbStack_28 + 0x1c) = uStack_7c;
    *(undefined4 *)pbStack_28 = (undefined4)uStack_98;
    *(undefined4 *)(pbStack_28 + 4) = uStack_98._4_4_;
    *(undefined4 *)(pbStack_28 + 8) = (undefined4)uStack_90;
    *(undefined4 *)(pbStack_28 + 0xc) = uStack_90._4_4_;
    plVar1 = *(longlong **)(param_1 + 0x270);
    puStack_20 = (undefined8 *)(param_1 + 0x270);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      pdb_140cb5640(puStack_20);
    }
    *puStack_20 = pbStack_28;
    return;
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc7e11(8,0x40);
}

