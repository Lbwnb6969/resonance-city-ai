// VA 0x140b0eb60, PDB extent 568 bytes
// country_core::resources::walls::inner_walls::InnerWalls::new_wall
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_walls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::walls::inner_walls::InnerWalls::new_wall
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/inner_walls.rs
   Extent: 568 */

undefined8 pdb_140b0eb60(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puStack_128;
  code *pcStack_120;
  longlong lStack_110;
  byte *pbStack_108;
  longlong lStack_b8;
  undefined *puStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  undefined *puStack_98;
  longlong lStack_90;
  longlong lStack_88;
  undefined *puStack_80;
  longlong lStack_78;
  longlong lStack_70;
  undefined *puStack_68;
  undefined **ppuStack_60;
  longlong lStack_58;
  longlong lStack_50;
  ulonglong uStack_40;
  longlong *plStack_38;
  undefined1 uStack_29;
  undefined8 uStack_28;
  
  uStack_28 = 0xfffffffffffffffe;
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  if (uVar1 < 0x20000) {
    lVar3 = *(longlong *)(param_1 + 0xc0) + 1;
    *(longlong *)(param_1 + 0xc0) = lVar3;
    lStack_58 = param_2[0xc];
    lStack_50 = param_2[0xd];
    puStack_68 = (undefined *)param_2[10];
    ppuStack_60 = (undefined **)param_2[0xb];
    lStack_78 = param_2[8];
    lStack_70 = param_2[9];
    lStack_b8 = *param_2;
    puStack_b0 = (undefined *)param_2[1];
    lStack_a8 = param_2[2];
    lStack_a0 = param_2[3];
    puStack_98 = (undefined *)param_2[4];
    lStack_90 = param_2[5];
    lStack_88 = param_2[6];
    puStack_80 = (undefined *)param_2[7];
    uStack_40 = uVar1;
    plStack_38 = param_2;
    pdb_1417b3e60(&puStack_128,param_1,lVar3,&lStack_b8);
    if (!SBORROW8(0,(longlong)puStack_128)) {
      if (puStack_128 != (undefined *)0x0) {
        pub_1406abac0((byte *)pcStack_120,(longlong)puStack_128 << 3,4);
      }
      if (lStack_110 != 0) {
        pub_1406abac0(pbStack_108,lStack_110 << 2,4);
      }
    }
    uVar2 = 1;
    pdb_1403b05d0(param_1 + 0x30,lVar3);
  }
  else {
    if (1 < *_DAT_143ca8e90) {
      puStack_128 = &UNK_143054578;
      pcStack_120 = pdb_140f72a40;
      lStack_b8 = 0;
      puStack_b0 = &UNK_143054511;
      lStack_a8 = 0x2b;
      lStack_a0 = 0;
      puStack_98 = &UNK_1430543fd;
      lStack_90 = 0x36;
      lStack_88 = 2;
      puStack_80 = &UNK_143054511;
      lStack_78 = 0x2b;
      lStack_70 = 0x5700000001;
      puStack_68 = &UNK_143054580;
      ppuStack_60 = &puStack_128;
      uStack_40 = uVar1;
      plStack_38 = param_2;
      pdb_140f332f0(&uStack_29,&lStack_b8);
      param_2 = plStack_38;
    }
    if (*param_2 != 0) {
      pub_1406abac0((byte *)param_2[1],*param_2 << 3,4);
    }
    if (param_2[3] != 0) {
      pub_1406abac0((byte *)param_2[4],param_2[3] << 2,4);
    }
    uVar2 = 0;
  }
  return uVar2;
}

