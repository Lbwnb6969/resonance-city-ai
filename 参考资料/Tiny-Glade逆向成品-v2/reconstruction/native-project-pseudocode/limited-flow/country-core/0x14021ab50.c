// VA 0x14021ab50, PDB extent 7473 bytes
// country_core::resources::history::color_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/color_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* Matched PDB project procedure:
   country_core::resources::history::color_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/color_edit.rs
   Extent: 7473 */

byte * pdb_14021ab50(longlong param_1,longlong *param_2,byte *param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined *puVar3;
  longlong lVar4;
  byte *extraout_RAX;
  byte *pbVar5;
  byte bVar6;
  undefined **ppuVar7;
  longlong unaff_RBX;
  undefined8 *puVar8;
  undefined8 *unaff_RBP;
  float10 in_ST0;
  undefined1 auStack_3d18 [15272];
  undefined8 uStack_170;
  ulonglong in_stack_fffffffffffffe98;
  undefined *puStack_140;
  longlong *plStack_138;
  undefined *puStack_130;
  longlong *plStack_128;
  undefined *puStack_120;
  longlong *plStack_118;
  undefined *puStack_110;
  longlong *plStack_108;
  undefined *puStack_100;
  longlong *plStack_f8;
  undefined *puStack_f0;
  longlong *plStack_e8;
  undefined *puStack_e0;
  longlong *plStack_d8;
  undefined *puStack_d0;
  longlong *plStack_c8;
  undefined *puStack_c0;
  longlong *plStack_b8;
  undefined *puStack_b0;
  longlong *plStack_a8;
  undefined *puStack_a0;
  longlong *plStack_98;
  undefined *puStack_90;
  longlong *plStack_88;
  undefined *puStack_80;
  longlong *plStack_78;
  undefined *puStack_70;
  longlong *plStack_68;
  undefined *puStack_60;
  longlong *plStack_58;
  undefined *puStack_50;
  longlong *plStack_48;
  undefined *puStack_40;
  longlong *plStack_38;
  undefined *puStack_30;
  longlong *plStack_28;
  
  bVar6 = 5;
  if (2 < *(byte *)(param_1 + 8)) {
    bVar6 = *(byte *)(param_1 + 8) - 3;
  }
  puVar3 = &UNK_142e60de0 + *(int *)(&UNK_142e60de0 + (ulonglong)bVar6 * 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar6) {
  case 0:
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c1d4;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    uStack_170 = 0x14021abbe;
    puVar3 = (undefined *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e60a8a,4);
    if (puVar3 != (undefined *)0x0) {
code_r0x00014021bfaf:
      plStack_38 = (longlong *)0x1;
      puStack_60 = &UNK_142db8fda;
      puStack_30 = puVar3;
      pdb_14007ee60();
      puStack_60 = &UNK_142db8fe9;
      pbVar5 = pub_1406abab0(0x28,8);
      if (pbVar5 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        puStack_60 = &UNK_142db901a;
        pdb_142dc7e11(8,0x28);
      }
      pbVar5[0x20] = 0;
      pbVar5[0x21] = 0;
      pbVar5[0x22] = 0;
      pbVar5[0x23] = 0;
      pbVar5[0x24] = 0;
      pbVar5[0x25] = 0;
      pbVar5[0x26] = 0;
      pbVar5[0x27] = 0;
      *(longlong **)(pbVar5 + 0x10) = plStack_28;
      pbVar5[0x18] = 0;
      pbVar5[0x19] = 0;
      pbVar5[0x1a] = 0;
      pbVar5[0x1b] = 0;
      pbVar5[0x1c] = 0;
      pbVar5[0x1d] = 0;
      pbVar5[0x1e] = 0;
      pbVar5[0x1f] = 0;
      *(longlong **)pbVar5 = plStack_38;
      *(undefined **)(pbVar5 + 8) = puStack_30;
      return pbVar5;
    }
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c63e;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x3a;
    plVar1[2] = lVar4 + 1;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c664;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puStack_130._0_2_ = 0x100;
    uStack_170 = 0x14021ac2c;
    plStack_128 = param_2;
    pbVar5 = (byte *)pdb_14053ee10(&puStack_130,&UNK_142e60a9b,7,param_1 + 0x10);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    if ((char)puStack_130 == '\x01') {
code_r0x00014021bfc3:
                    /* WARNING: Subroutine does not return */
      uStack_170 = 0x14021bfdb;
      pdb_142dc83b0(&UNK_142e60cfc,0x28,&UNK_142e60d70);
    }
    uStack_170 = 0x14021ac5b;
    pbVar5 = (byte *)pdb_14054a9f0(&puStack_130,&UNK_142e60aa2,4,param_1 + 0x18);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    uStack_170 = 0x14021ac82;
    pbVar5 = (byte *)pdb_14021dc60(&puStack_130,&UNK_142e60aa6,2,param_1 + 0x1c);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    ppuVar7 = &puStack_130;
    break;
  case 1:
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c203;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    uStack_170 = 0x14021b804;
    puVar3 = (undefined *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e60aa8,10);
    if (puVar3 != (undefined *)0x0) goto code_r0x00014021bfaf;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c68a;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x3a;
    plVar1[2] = lVar4 + 1;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c6b0;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puStack_120._0_2_ = 0x100;
    uStack_170 = 0x14021b872;
    plStack_118 = param_2;
    pbVar5 = (byte *)pdb_14053ee10(&puStack_120,&UNK_142e60a9b,7,param_1 + 0x10);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    if ((char)puStack_120 == '\x01') goto code_r0x00014021bfc3;
    uStack_170 = 0x14021b8a1;
    pbVar5 = (byte *)pdb_14054a9f0(&puStack_120,&UNK_142e60aa2,4,param_1 + 0x18);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    uStack_170 = 0x14021b8c8;
    pbVar5 = (byte *)pdb_14021dc60(&puStack_120,&UNK_142e60aa6,2,param_1 + 0x1c);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    ppuVar7 = &puStack_120;
    break;
  case 2:
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c118;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    uStack_170 = 0x14021b39f;
    puVar3 = (undefined *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e60ab2,0xf);
    if (puVar3 != (undefined *)0x0) goto code_r0x00014021bfaf;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c50e;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x3a;
    plVar1[2] = lVar4 + 1;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c534;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puStack_110._0_2_ = 0x100;
    uStack_170 = 0x14021b40d;
    plStack_108 = param_2;
    pbVar5 = (byte *)pdb_14053ee10(&puStack_110,&UNK_142e60a9b,7,param_1 + 0x10);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    if ((char)puStack_110 == '\x01') goto code_r0x00014021bfc3;
    uStack_170 = 0x14021b43c;
    pbVar5 = (byte *)pdb_14054a9f0(&puStack_110,&UNK_142e60aa2,4,param_1 + 0x18);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    uStack_170 = 0x14021b463;
    pbVar5 = (byte *)pdb_14021dc60(&puStack_110,&UNK_142e60aa6,2,param_1 + 0x1c);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    ppuVar7 = &puStack_110;
    break;
  case 3:
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c176;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    uStack_170 = 0x14021b5d1;
    puVar3 = (undefined *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e60ac1,4);
    if (puVar3 != (undefined *)0x0) goto code_r0x00014021bfaf;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c5a6;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x3a;
    plVar1[2] = lVar4 + 1;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c5cc;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puStack_100._0_2_ = 0x100;
    uStack_170 = 0x14021b63f;
    plStack_f8 = param_2;
    pbVar5 = (byte *)pdb_14053ee10(&puStack_100,&UNK_142e60a9b,7,param_1 + 0x10);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    if ((char)puStack_100 == '\x01') goto code_r0x00014021bfc3;
    uStack_170 = 0x14021b66e;
    pbVar5 = (byte *)pdb_14054a9f0(&puStack_100,&UNK_142e60aa2,4,param_1 + 0x18);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    uStack_170 = 0x14021b695;
    pbVar5 = (byte *)pdb_14021dc60(&puStack_100,&UNK_142e60aa6,2,param_1 + 0x1c);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    ppuVar7 = &puStack_100;
    break;
  case 4:
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c08b;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    uStack_170 = 0x14021b037;
    puVar3 = (undefined *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e60ac5,4);
    if (puVar3 != (undefined *)0x0) goto code_r0x00014021bfaf;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c42a;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x3a;
    plVar1[2] = lVar4 + 1;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c450;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puStack_f0._0_2_ = 0x100;
    uStack_170 = 0x14021b0a8;
    plStack_e8 = param_2;
    pbVar5 = (byte *)pdb_14053ee10(&puStack_f0,&UNK_142e60a9b,7,param_1 + 0x10);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    if ((char)puStack_f0 == '\x01') goto code_r0x00014021bfc3;
    uStack_170 = 0x14021b0d7;
    pbVar5 = (byte *)pdb_14054a9f0(&puStack_f0,&UNK_142e60aa2,4,param_1 + 0x18);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    uStack_170 = 0x14021b0fe;
    pbVar5 = (byte *)pdb_14021dc60(&puStack_f0,&UNK_142e60aa6,2,param_1 + 0x1c);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    ppuVar7 = &puStack_f0;
    break;
  case 5:
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c261;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    uStack_170 = 0x14021ba36;
    puVar3 = (undefined *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e60ac9,8);
    if (puVar3 != (undefined *)0x0) goto code_r0x00014021bfaf;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c722;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x3a;
    plVar1[2] = lVar4 + 1;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c748;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puStack_e0._0_2_ = 0x100;
    uStack_170 = 0x14021baac;
    plStack_d8 = param_2;
    pbVar5 = (byte *)pdb_14053ee10(&puStack_e0,&UNK_142e60a9b,7,param_1);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    if ((char)puStack_e0 == '\x01') goto code_r0x00014021bfc3;
    uStack_170 = 0x14021bae1;
    pbVar5 = (byte *)pdb_1405474b0(&puStack_e0,&UNK_142e60aa2,4,param_1 + 8);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    uStack_170 = 0x14021bb0b;
    pbVar5 = (byte *)pdb_14021db70(&puStack_e0,&UNK_142e60aa6,2,param_1 + 0x14);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    ppuVar7 = &puStack_e0;
    break;
  case 6:
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c2bf;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    uStack_170 = 0x14021bc7c;
    puVar3 = (undefined *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e60ad1,9);
    if (puVar3 != (undefined *)0x0) goto code_r0x00014021bfaf;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c7ba;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x3a;
    plVar1[2] = lVar4 + 1;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c7e0;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puStack_d0._0_2_ = 0x100;
    uStack_170 = 0x14021bcf3;
    plStack_c8 = param_2;
    pbVar5 = (byte *)pdb_14054abf0(&puStack_d0,&UNK_142e60ada,0xc,param_1 + 0xc);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    if ((char)puStack_d0 == '\x01') goto code_r0x00014021bfc3;
    uStack_170 = 0x14021bd28;
    pbVar5 = (byte *)pdb_14054a9f0(&puStack_d0,&UNK_142e60aa2,4,param_1 + 0x10);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    uStack_170 = 0x14021bd52;
    pbVar5 = (byte *)pdb_14021dc60(&puStack_d0,&UNK_142e60aa6,2,param_1 + 0x14);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    ppuVar7 = &puStack_d0;
    break;
  case 7:
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c1a5;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    uStack_170 = 0x14021b6e0;
    puVar3 = (undefined *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e60ae6,0xb);
    if (puVar3 != (undefined *)0x0) goto code_r0x00014021bfaf;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c5f2;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x3a;
    plVar1[2] = lVar4 + 1;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c618;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puStack_c0._0_2_ = 0x100;
    uStack_170 = 0x14021b757;
    plStack_b8 = param_2;
    pbVar5 = (byte *)pdb_14054abf0(&puStack_c0,&UNK_142e60ada,0xc,param_1 + 0xc);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    if ((char)puStack_c0 == '\x01') goto code_r0x00014021bfc3;
    uStack_170 = 0x14021b78c;
    pbVar5 = (byte *)pdb_14054a9f0(&puStack_c0,&UNK_142e60aa2,4,param_1 + 0x10);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    uStack_170 = 0x14021b7b6;
    pbVar5 = (byte *)pdb_14021dc60(&puStack_c0,&UNK_142e60aa6,2,param_1 + 0x14);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    ppuVar7 = &puStack_c0;
    break;
  case 8:
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c31d;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    uStack_170 = 0x14021bec4;
    puVar3 = (undefined *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e60af1,10);
    if (puVar3 != (undefined *)0x0) goto code_r0x00014021bfaf;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c852;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x3a;
    plVar1[2] = lVar4 + 1;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c878;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puStack_b0._0_2_ = 0x100;
    uStack_170 = 0x14021bf3b;
    plStack_a8 = param_2;
    pbVar5 = (byte *)pdb_14053ee10(&puStack_b0,&UNK_142e60a9b,7,param_1 + 0x10);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    if ((char)puStack_b0 == '\x01') goto code_r0x00014021bfc3;
    uStack_170 = 0x14021bf68;
    pbVar5 = (byte *)pdb_14054a9f0(&puStack_b0,&UNK_142e60aa2,4,param_1 + 0x18);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    uStack_170 = 0x14021bf8e;
    pbVar5 = (byte *)pdb_14021dc60(&puStack_b0,&UNK_142e60aa6,2,param_1 + 0x1c);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    ppuVar7 = &puStack_b0;
    break;
  case 9:
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c0e9;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    uStack_170 = 0x14021b27c;
    puVar3 = (undefined *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e60afb,0xb);
    if (puVar3 != (undefined *)0x0) goto code_r0x00014021bfaf;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c4c2;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x3a;
    plVar1[2] = lVar4 + 1;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c4e8;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puStack_a0._0_2_ = 0x100;
    uStack_170 = 0x14021b2f2;
    plStack_98 = param_2;
    pbVar5 = (byte *)pdb_14054abf0(&puStack_a0,&UNK_142e60ada,0xc,param_1);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    if ((char)puStack_a0 == '\x01') goto code_r0x00014021bfc3;
    uStack_170 = 0x14021b327;
    pbVar5 = (byte *)pdb_14053e0d0(&puStack_a0,&UNK_142e60aa2,4,param_1 + 4);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    uStack_170 = 0x14021b351;
    pbVar5 = (byte *)pdb_14021db40(&puStack_a0,&UNK_142e60aa6,2,param_1 + 5);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    ppuVar7 = &puStack_a0;
    break;
  case 10:
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c2ee;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    uStack_170 = 0x14021bda0;
    puVar3 = (undefined *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e60b06,10);
    if (puVar3 != (undefined *)0x0) goto code_r0x00014021bfaf;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c806;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x3a;
    plVar1[2] = lVar4 + 1;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c82c;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puStack_90._0_2_ = 0x100;
    uStack_170 = 0x14021be17;
    plStack_88 = param_2;
    pbVar5 = (byte *)pdb_14054abf0(&puStack_90,&UNK_142e60ada,0xc,param_1 + 0xc);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    if ((char)puStack_90 == '\x01') goto code_r0x00014021bfc3;
    uStack_170 = 0x14021be4c;
    pbVar5 = (byte *)pdb_1405432b0(&puStack_90,&UNK_142e60aa2,4,param_1 + 0x10);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    uStack_170 = 0x14021be76;
    pbVar5 = (byte *)pdb_14021dc00(&puStack_90,&UNK_142e60aa6,2,param_1 + 0x14);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    ppuVar7 = &puStack_90;
    break;
  case 0xb:
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c05c;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    uStack_170 = 0x14021af14;
    puVar3 = (undefined *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e60b10,0xc);
    if (puVar3 != (undefined *)0x0) goto code_r0x00014021bfaf;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c3de;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x3a;
    plVar1[2] = lVar4 + 1;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c404;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puStack_80._0_2_ = 0x100;
    uStack_170 = 0x14021af8a;
    plStack_78 = param_2;
    pbVar5 = (byte *)pdb_14054abf0(&puStack_80,&UNK_142e60ada,0xc,param_1);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    if ((char)puStack_80 == '\x01') goto code_r0x00014021bfc3;
    uStack_170 = 0x14021afbf;
    pbVar5 = (byte *)pdb_14053e0d0(&puStack_80,&UNK_142e60aa2,4,param_1 + 4);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    uStack_170 = 0x14021afe9;
    pbVar5 = (byte *)pdb_14021db40(&puStack_80,&UNK_142e60aa6,2,param_1 + 5);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    ppuVar7 = &puStack_80;
    break;
  case 0xc:
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c0ba;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    uStack_170 = 0x14021b149;
    puVar3 = (undefined *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e60b1c,0xe);
    if (puVar3 != (undefined *)0x0) goto code_r0x00014021bfaf;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c476;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x3a;
    plVar1[2] = lVar4 + 1;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c49c;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puStack_140._0_2_ = 0x100;
    uStack_170 = 0x14021b1b7;
    plStack_138 = param_2;
    pbVar5 = (byte *)pdb_14054abf0(&puStack_140,&UNK_142e60ada,0xc,param_1 + 0xc);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    if ((char)puStack_140 == '\x01') goto code_r0x00014021bfc3;
    uStack_170 = 0x14021b1e6;
    pbVar5 = (byte *)pdb_14053f010(&puStack_140,&UNK_142e60b2a,6,param_1 + 0x18);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    uStack_170 = 0x14021b20a;
    pbVar5 = (byte *)pdb_14021dc60(&puStack_140,&UNK_142e60aa2,4,param_1 + 0x10);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    uStack_170 = 0x14021b231;
    pbVar5 = (byte *)pdb_14021dc60(&puStack_140,&UNK_142e60aa6,2,param_1 + 0x14);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    ppuVar7 = &puStack_140;
    break;
  case 0xd:
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c290;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    uStack_170 = 0x14021bb59;
    puVar3 = (undefined *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e60b30,0xc);
    if (puVar3 != (undefined *)0x0) goto code_r0x00014021bfaf;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c76e;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x3a;
    plVar1[2] = lVar4 + 1;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c794;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puStack_70._0_2_ = 0x100;
    uStack_170 = 0x14021bbcf;
    plStack_68 = param_2;
    pbVar5 = (byte *)pdb_14054abf0(&puStack_70,&UNK_142e60ada,0xc,param_1);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    if ((char)puStack_70 == '\x01') goto code_r0x00014021bfc3;
    uStack_170 = 0x14021bc04;
    pbVar5 = (byte *)pdb_14054d110(&puStack_70,&UNK_142e60aa2,4,param_1 + 4);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    uStack_170 = 0x14021bc2e;
    pbVar5 = (byte *)pdb_14021dba0(&puStack_70,&UNK_142e60aa6,2,param_1 + 5);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    ppuVar7 = &puStack_70;
    break;
  case 0xe:
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c02d;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    uStack_170 = 0x14021adf1;
    puVar3 = (undefined *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e60b3c,0xb);
    if (puVar3 != (undefined *)0x0) goto code_r0x00014021bfaf;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c392;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x3a;
    plVar1[2] = lVar4 + 1;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c3b8;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puStack_60 = (undefined *)CONCAT62(puStack_60._2_6_,0x100);
    uStack_170 = 0x14021ae67;
    plStack_58 = param_2;
    pbVar5 = (byte *)pdb_14054abf0(&puStack_60,&UNK_142e60ada,0xc,param_1);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    if ((char)puStack_60 == '\x01') goto code_r0x00014021bfc3;
    uStack_170 = 0x14021ae9c;
    pbVar5 = (byte *)pdb_14053e0d0(&puStack_60,&UNK_142e60aa2,4,param_1 + 4);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    uStack_170 = 0x14021aec6;
    pbVar5 = (byte *)pdb_14021db40(&puStack_60,&UNK_142e60aa6,2,param_1 + 5);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    ppuVar7 = &puStack_60;
    break;
  case 0xf:
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c147;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    uStack_170 = 0x14021b4ae;
    puVar3 = (undefined *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e60b47,0xd);
    if (puVar3 != (undefined *)0x0) goto code_r0x00014021bfaf;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c55a;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x3a;
    plVar1[2] = lVar4 + 1;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c580;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puStack_50._0_2_ = 0x100;
    uStack_170 = 0x14021b524;
    plStack_48 = param_2;
    pbVar5 = (byte *)pdb_14054abf0(&puStack_50,&UNK_142e60ada,0xc,param_1);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    if ((char)puStack_50 == '\x01') goto code_r0x00014021bfc3;
    uStack_170 = 0x14021b559;
    pbVar5 = (byte *)pdb_140543540(&puStack_50,&UNK_142e60aa2,4,param_1 + 4);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    uStack_170 = 0x14021b583;
    pbVar5 = (byte *)pdb_14021db10(&puStack_50,&UNK_142e60aa6,2,param_1 + 5);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    ppuVar7 = &puStack_50;
    break;
  case 0x10:
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021bffe;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    uStack_170 = 0x14021accd;
    puVar3 = (undefined *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e60b54,10);
    if (puVar3 != (undefined *)0x0) goto code_r0x00014021bfaf;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c346;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x3a;
    plVar1[2] = lVar4 + 1;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c36c;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puStack_40._0_2_ = 0x100;
    uStack_170 = 0x14021ad44;
    plStack_38 = param_2;
    pbVar5 = (byte *)pdb_14054abf0(&puStack_40,&UNK_142e60ada,0xc,param_1 + 0xc);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    if ((char)puStack_40 == '\x01') goto code_r0x00014021bfc3;
    uStack_170 = 0x14021ad79;
    pbVar5 = (byte *)pdb_14054a9f0(&puStack_40,&UNK_142e60aa2,4,param_1 + 0x10);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    uStack_170 = 0x14021ada3;
    pbVar5 = (byte *)pdb_14021dc60(&puStack_40,&UNK_142e60aa6,2,param_1 + 0x14);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    ppuVar7 = &puStack_40;
    break;
  case 0x11:
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c232;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    uStack_170 = 0x14021b913;
    puVar3 = (undefined *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e60b5e,0xc);
    if (puVar3 != (undefined *)0x0) goto code_r0x00014021bfaf;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c6d6;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x3a;
    plVar1[2] = lVar4 + 1;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      uStack_170 = 0x14021c6fc;
      pdb_142d7f1b0(plVar1,lVar4,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puStack_30 = (undefined *)CONCAT62(puStack_30._2_6_,0x100);
    uStack_170 = 0x14021b989;
    plStack_28 = param_2;
    pbVar5 = (byte *)pdb_14054abf0(&puStack_30,&UNK_142e60ada,0xc,param_1);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    if ((char)puStack_30 == '\x01') goto code_r0x00014021bfc3;
    uStack_170 = 0x14021b9be;
    pbVar5 = (byte *)pdb_14053d8b0(&puStack_30,&UNK_142e60aa2,4,param_1 + 4);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    uStack_170 = 0x14021b9e8;
    pbVar5 = (byte *)pdb_14021dc30(&puStack_30,&UNK_142e60aa6,2,param_1 + 5);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    ppuVar7 = &puStack_30;
    break;
  case 0x12:
    pbVar5 = (byte *)0x0;
    if (puVar3 != (undefined *)0x0) {
      uStack_170 = 0x14021ca93;
      pub_1406abac0((byte *)unaff_RBP[-9],(longlong)puVar3 * 0xc,4);
      pbVar5 = extraout_RAX;
    }
    return pbVar5;
  case 0x13:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x14:
    pbVar5 = (byte *)CONCAT71((int7)((ulonglong)puVar3 >> 8),(byte)puVar3 ^ *param_3);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    if ((char)puStack_100 == '\x01') {
                    /* WARNING: Subroutine does not return */
      uStack_170 = 0x14021d1d1;
      pdb_142dc83b0(&UNK_142e60cfc,0x28,&UNK_142e60d70);
    }
    uStack_170 = 0x14021cd07;
    pbVar5 = (byte *)pdb_1405417f0(&puStack_100,&UNK_142e60c7e,5,param_1 + 2);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    ppuVar7 = &puStack_100;
    goto code_r0x00014021d197;
  case 0x15:
    uStack_170 = 0x14021cf1a;
    pbVar5 = (byte *)pdb_14021dc00(&UNK_142e60de0,param_2,9);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    uStack_170 = 0x14021cf41;
    pbVar5 = (byte *)pdb_14021dc00(&puStack_140,&UNK_142e60c48,8,param_1 + 0x20);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    ppuVar7 = &puStack_140;
    goto code_r0x00014021d197;
  case 0x16:
    uStack_170 = 0x14021cbc6;
    pbVar5 = (byte *)pdb_14054a9f0(&UNK_142e60de0,param_2,8);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    uStack_170 = 0x14021cbed;
    pbVar5 = (byte *)pdb_14021db70(&puStack_130,&UNK_142e60bc0,0xf,param_1 + 8);
    if (pbVar5 != (byte *)0x0) {
      return pbVar5;
    }
    ppuVar7 = &puStack_130;
code_r0x00014021d197:
    uStack_170 = 0x14021d19c;
    pdb_14021dc90(ppuVar7);
    return (byte *)0x0;
  case 0x17:
    uRamae64fd3bac1efd3b = in((short)param_2);
    puVar8 = (undefined8 *)&stack0xfffffffffffffe98;
    cVar2 = '\x1c';
    do {
      unaff_RBP = unaff_RBP + -1;
      puVar8 = puVar8 + -1;
      *puVar8 = *unaff_RBP;
      cVar2 = cVar2 + -1;
    } while ('\0' < cVar2);
    *(undefined1 *)((longlong)param_2 + 1) =
         *(undefined1 *)(param_1 + 2 + (ulonglong)((in_stack_fffffffffffffe98 & 0x400) != 0) * -2);
    *(undefined1 *)((longlong)param_2 + -0x5f0302c5) = 0x3b;
    *(uint *)(unaff_RBX + -0x52be02c5) =
         *(uint *)(unaff_RBX + -0x52be02c5) ^ (int)auStack_3d18 - 0xe0U;
    *(float *)((longlong)param_2 + -0x596902c5) = (float)in_ST0;
    *(undefined1 *)param_2 = 0x3b;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uStack_170 = 0x14021bfa0;
  pdb_14021dc90(ppuVar7);
  return (byte *)0x0;
}

