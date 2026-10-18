// VA 0x140cb5ec0, PDB extent 1104 bytes
// tg_text::TextFragment::set_internal_scaled_metrics
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::TextFragment::set_internal_scaled_metrics
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
   Extent: 1104 */

void pdb_140cb5ec0(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  undefined1 auStack_358 [16];
  undefined1 auStack_348 [320];
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  longlong lStack_1f8;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  longlong lStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong lStack_70;
  byte *pbStack_68;
  undefined8 *puStack_60;
  undefined1 uStack_51;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  uStack_78 = param_2;
  uStack_74 = param_3;
  pdb_141cbe0a0(&uStack_90,param_1,&uStack_78);
  if (!SBORROW8(0,CONCAT44(uStack_8c,uStack_90))) {
    uStack_b8 = uStack_80;
    uStack_c8 = uStack_90;
    uStack_c4 = uStack_8c;
    uStack_c0 = uStack_88;
    uStack_bc = uStack_84;
    uStack_51 = 1;
    pdb_140cc65a0(&uStack_208,param_2,param_3);
    pbStack_68 = (byte *)CONCAT44(uStack_1fc,uStack_200);
    lStack_70 = lStack_1f8;
    puStack_60 = (undefined8 *)0x0;
    pbVar2 = pbStack_68;
    while( true ) {
      lStack_b0 = (longlong)puStack_60;
      if ((undefined8 *)lStack_70 == puStack_60) break;
      puStack_60 = (undefined8 *)((longlong)puStack_60 + 1);
      pdb_141cbd3e0(pbVar2);
      pbVar2 = pbVar2 + 0xb0;
    }
    if (CONCAT44(uStack_204,uStack_208) != 0) {
      pub_1406abac0(pbStack_68,CONCAT44(uStack_204,uStack_208) * 0xb0,8);
    }
    lStack_1f8 = uStack_80;
    uStack_208 = uStack_90;
    uStack_204 = uStack_8c;
    uStack_200 = uStack_88;
    uStack_1fc = uStack_84;
    pub_142e32760(auStack_348,&uStack_208,0x140);
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    puStack_60 = param_1;
    pdb_141cbd000(param_1);
    puVar1 = puStack_60;
    *puStack_60 = 0;
    puStack_60[4] = 0x8000000000000000;
    pub_142e32760(puStack_60 + 5,auStack_358,0x150);
    *(undefined4 *)(puVar1 + 0x2f) = 0;
    *(ulonglong *)((longlong)puVar1 + 0x17c) = CONCAT44(uStack_a4,uStack_a8);
    *(ulonglong *)((longlong)puVar1 + 0x184) = CONCAT44(uStack_9c,uStack_a0);
    *(ulonglong *)((longlong)puVar1 + 0x189) =
         CONCAT17(uStack_94,CONCAT43(uStack_98,uStack_9c._1_3_));
    *(undefined4 *)(puVar1 + 0x33) = 4;
  }
  return;
}

