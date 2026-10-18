// VA 0x1400fd490, PDB extent 236 bytes
// tiny_glade::render_loop::compile_main_render_graph::closure$0::explain
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/render_loop.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   tiny_glade::render_loop::compile_main_render_graph::closure$0::explain
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/render_loop.rs
   Extent: 236 */

undefined4 pdb_1400fd490(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_89;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined *puStack_18;
  undefined8 **ppuStack_10;
  
  if (((char)param_1 != '\0') && (4 < *_DAT_143ca8e90)) {
    puStack_78 = &uStack_88;
    pcStack_70 = pdb_1402ed400;
    uStack_68 = 0;
    puStack_60 = &UNK_142e4282b;
    uStack_58 = 0x17;
    uStack_50 = 0;
    puStack_48 = &UNK_142e4250e;
    uStack_40 = 0x24;
    uStack_38 = 5;
    puStack_30 = &UNK_142e4282b;
    uStack_28 = 0x17;
    uStack_20 = 0x16b00000001;
    puStack_18 = &UNK_142e42846;
    ppuStack_10 = &puStack_78;
    uStack_88 = param_2;
    uStack_80 = param_3;
    pdb_140f332f0(&uStack_89,&uStack_68);
  }
  return param_1;
}

