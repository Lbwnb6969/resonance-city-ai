// VA 0x142611ed0, PDB extent 465 bytes
// clutter_pack_pipe::build_clutter_packs::async_fn$0::closure$1<country_core::startup::load_clutter_packs::impl$0::spawn::async_block$0::closure_env$0>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   clutter_pack_pipe::build_clutter_packs::async_fn$0::closure$1<country_core::startup::load_clutter_packs::impl$0::spawn::async_block$0::closure_env$0>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 465 */

void pdb_142611ed0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 *puStack_40;
  code *pcStack_38;
  undefined8 *puStack_30;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  uVar2 = *param_1;
  puStack_30 = param_2;
  if (*_DAT_143ca8e90 != 0) {
    pcStack_48 = pdb_140094770;
    pcStack_38 = pdb_140001020;
    uStack_b8 = 0;
    pcStack_b0 = (code *)&UNK_1435557f6;
    puStack_a8 = (undefined8 *)0x11;
    uStack_a0 = 0;
    puStack_98 = &UNK_1435557d2;
    uStack_90 = 0x23;
    uStack_88 = 1;
    puStack_80 = &UNK_1435557f6;
    uStack_78 = 0x11;
    uStack_70 = 0x20400000001;
    puStack_68 = &UNK_14355589a;
    puStack_60 = &uStack_50;
    uStack_21 = 1;
    uStack_50 = uVar2;
    puStack_40 = param_2;
    pdb_140f332f0(&uStack_22,&uStack_b8);
  }
  plVar3 = (longlong *)param_1[1];
  uStack_21 = 1;
  pdb_140f60be0(&uStack_50,uVar2);
  uStack_90 = puStack_30[2];
  uStack_a0 = *puStack_30;
  puStack_98 = (undefined *)puStack_30[1];
  uStack_b8 = uStack_50;
  pcStack_b0 = pcStack_48;
  puStack_a8 = puStack_40;
  lVar4 = plVar3[2];
  if (lVar4 == *plVar3) {
    pdb_142d7e7c0(plVar3);
  }
  lVar5 = plVar3[1];
  lVar6 = lVar4 * 0x30;
  puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar6);
  *puVar1 = puStack_98;
  puVar1[1] = uStack_90;
  puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar6);
  *puVar1 = puStack_a8;
  puVar1[1] = uStack_a0;
  *(undefined8 *)(lVar5 + lVar6) = uStack_b8;
  ((undefined8 *)(lVar5 + lVar6))[1] = pcStack_b0;
  plVar3[2] = lVar4 + 1;
  return;
}

