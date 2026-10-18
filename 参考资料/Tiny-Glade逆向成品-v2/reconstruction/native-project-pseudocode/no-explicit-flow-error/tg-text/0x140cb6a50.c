// VA 0x140cb6a50, PDB extent 59 bytes
// tg_text::TextRenderer::load_font_from_file
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::TextRenderer::load_font_from_file
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
   Extent: 59 */

undefined8 pdb_140cb6a50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong lStack_28;
  undefined1 uStack_19;
  undefined8 uStack_18;
  
  uStack_40 = 0x140cb6a61;
  uVar1 = pdb_140cbea30();
  uStack_40 = 0x140cb6a6f;
  lVar2 = pdb_141cc27f0(uVar1,param_2,param_3);
  if (lVar2 == 0) {
    return 0;
  }
  uStack_18 = 0xfffffffffffffffe;
  uStack_19 = 1;
  lStack_28 = lVar2;
  pdb_140f3f5b0(&uStack_88);
  uStack_38 = uStack_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  uStack_48 = uStack_78;
  uStack_44 = uStack_74;
  uStack_58 = uStack_88;
  uStack_54 = uStack_84;
  uStack_50 = uStack_80;
  uStack_4c = uStack_7c;
  uStack_19 = 0;
  uVar1 = pdb_142df52d0(lVar2,&uStack_58);
  return uVar1;
}

