// VA 0x1403c6bc0, PDB extent 571 bytes
// tiny_glade::aftermath::impl$0::default
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/aftermath.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::aftermath::impl$0::default
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/aftermath.rs
   Extent: 571 */

undefined1 * pdb_1403c6bc0(undefined1 *param_1,undefined8 param_2)

{
  byte *pbVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined7 *puVar6;
  ulonglong *puStack_e0;
  code *pcStack_d8;
  longlong *plStack_d0;
  code *pcStack_c8;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 **ppuStack_68;
  ulonglong uStack_60;
  byte *pbStack_58;
  undefined7 *puStack_50;
  longlong lStack_40;
  undefined1 uStack_31;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uVar3 = pdb_140dc74c0();
  pdb_140f3e9e0(&uStack_60,uVar3,param_2,&UNK_142f4ef81,0x12);
  pbVar1 = pbStack_58;
  puVar6 = puStack_50;
  cVar2 = pdb_140f3ec10(pbStack_58);
  if (cVar2 != '\0') {
    lVar4 = pdb_140f4eda0(pbVar1);
    puVar6 = puStack_50;
    if (lVar4 != 0) {
      lStack_40 = lVar4;
      if (*_DAT_143ca8e90 != 0) {
        pcStack_d8 = pdb_140f58250;
        plStack_d0 = &lStack_40;
        pcStack_c8 = pdb_140f56800;
        uStack_c0 = 0;
        uStack_b9 = 0;
        uStack_b8 = 0x142f4f168;
        uStack_b1 = 0;
        uStack_b0 = 0x15;
        uStack_a9 = 0;
        uStack_a8 = 0;
        uStack_a1 = 0;
        uStack_a0 = 0x142f4efe8;
        uStack_99 = 0;
        uStack_98 = 0x22;
        uStack_90 = 1;
        puStack_88 = &UNK_142f4f168;
        uStack_80 = 0x15;
        uStack_78 = 0x1a00000001;
        puStack_70 = &UNK_142f4f14c;
        ppuStack_68 = &puStack_e0;
        puVar6 = &uStack_c0;
        puStack_e0 = &uStack_60;
        pdb_140f332f0(&uStack_31);
      }
      pdb_1404b38e0(&lStack_40);
    }
  }
  plVar5 = (longlong *)pdb_140f3bda0();
  if ((char)plVar5[2] == '\x01') {
    lVar4 = *plVar5;
    puVar6 = (undefined7 *)plVar5[1];
  }
  else {
    lVar4 = pdb_140f4fd10();
    *plVar5 = lVar4;
    plVar5[1] = (longlong)puVar6;
    *(undefined1 *)(plVar5 + 2) = 1;
  }
  *plVar5 = lVar4 + 1;
  uVar3 = _UNK_142f4f098;
  uStack_a9 = (undefined1)_DAT_142f4f090;
  uStack_a8 = (undefined7)((ulonglong)_DAT_142f4f090 >> 8);
  uStack_a1 = (undefined1)_UNK_142f4f098;
  uStack_a0 = (undefined7)((ulonglong)_UNK_142f4f098 >> 8);
  uStack_b9 = (undefined1)_DAT_142f4f080;
  uStack_b8 = (undefined7)((ulonglong)_DAT_142f4f080 >> 8);
  uStack_b1 = (undefined1)_UNK_142f4f088;
  uStack_b0 = (undefined7)((ulonglong)_UNK_142f4f088 >> 8);
  *param_1 = 0;
  *(ulonglong *)(param_1 + 1) = CONCAT17(uStack_b9,uStack_c0);
  *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_b1,uStack_b8);
  *(ulonglong *)(param_1 + 0x11) = CONCAT17(uStack_a9,uStack_b0);
  *(ulonglong *)(param_1 + 0x19) = CONCAT17(uStack_a1,uStack_a8);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  *(longlong *)(param_1 + 0x28) = lVar4;
  *(undefined7 **)(param_1 + 0x30) = puVar6;
  if (uStack_60 != 0) {
    pub_1406abac0(pbStack_58,uStack_60,1);
  }
  return param_1;
}

