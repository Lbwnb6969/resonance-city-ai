// VA 0x14021caa0, PDB extent 2456 bytes
// country_core::resources::history::roof_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/roof_edit.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* Matched PDB project procedure:
   country_core::resources::history::roof_edit::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/history/roof_edit.rs
   Extent: 2456 */

byte * pdb_14021caa0(undefined1 *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined *puVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined **ppuVar5;
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
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      pdb_142d7f1b0(plVar1,lVar4,1,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puVar2 = (undefined *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e60b9e,10);
    if (puVar2 != (undefined *)0x0) {
code_r0x00014021d1a8:
      plStack_38 = (longlong *)0x1;
      puStack_60 = &UNK_142db8fda;
      puStack_30 = puVar2;
      pdb_14007ee60();
      puStack_60 = &UNK_142db8fe9;
      pbVar3 = pub_1406abab0(0x28,8);
      if (pbVar3 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        puStack_60 = &UNK_142db901a;
        pdb_142dc7e11(8,0x28);
      }
      pbVar3[0x20] = 0;
      pbVar3[0x21] = 0;
      pbVar3[0x22] = 0;
      pbVar3[0x23] = 0;
      pbVar3[0x24] = 0;
      pbVar3[0x25] = 0;
      pbVar3[0x26] = 0;
      pbVar3[0x27] = 0;
      *(longlong **)(pbVar3 + 0x10) = plStack_28;
      pbVar3[0x18] = 0;
      pbVar3[0x19] = 0;
      pbVar3[0x1a] = 0;
      pbVar3[0x1b] = 0;
      pbVar3[0x1c] = 0;
      pbVar3[0x1d] = 0;
      pbVar3[0x1e] = 0;
      pbVar3[0x1f] = 0;
      *(longlong **)pbVar3 = plStack_38;
      *(undefined **)(pbVar3 + 8) = puStack_30;
      return pbVar3;
    }
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      pdb_142d7f1b0(plVar1,lVar4,1,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x3a;
    plVar1[2] = lVar4 + 1;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      pdb_142d7f1b0(plVar1,lVar4,1,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puStack_60 = (undefined *)CONCAT62(puStack_60._2_6_,0x100);
    plStack_58 = param_2;
    pbVar3 = (byte *)pdb_14053ee10(&puStack_60,&UNK_142e60ba8,10,param_1 + 0x30);
    if (pbVar3 != (byte *)0x0) {
      return pbVar3;
    }
    if ((char)puStack_60 != '\x01') {
      pbVar3 = (byte *)pdb_140547a40(&puStack_60,&UNK_142e60bb2,6,param_1 + 0x14);
      if (pbVar3 != (byte *)0x0) {
        return pbVar3;
      }
      if ((char)puStack_60 != '\x01') {
        pbVar3 = (byte *)pdb_14054a9f0(&puStack_60,&UNK_142e60bb8,8,param_1 + 4);
        if (pbVar3 != (byte *)0x0) {
          return pbVar3;
        }
        pbVar3 = (byte *)pdb_14021db70(&puStack_60,&UNK_142e60bc0,0xf,param_1 + 8);
        if (pbVar3 != (byte *)0x0) {
          return pbVar3;
        }
        ppuVar5 = &puStack_60;
code_r0x00014021d197:
        pdb_14021dc90(ppuVar5);
        return (byte *)0x0;
      }
    }
    break;
  case 1:
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      pdb_142d7f1b0(plVar1,lVar4,1,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puVar2 = (undefined *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e60bcf,10);
    if (puVar2 != (undefined *)0x0) goto code_r0x00014021d1a8;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      pdb_142d7f1b0(plVar1,lVar4,1,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x3a;
    plVar1[2] = lVar4 + 1;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      pdb_142d7f1b0(plVar1,lVar4,1,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puStack_50._0_2_ = 0x100;
    plStack_48 = param_2;
    pbVar3 = (byte *)pdb_14053ee10(&puStack_50,&UNK_142e60ba8,10,param_1 + 0x30);
    if (pbVar3 != (byte *)0x0) {
      return pbVar3;
    }
    if ((char)puStack_50 != '\x01') {
      pbVar3 = (byte *)pdb_140547a40(&puStack_50,&UNK_142e60bb2,6,param_1 + 0x14);
      if (pbVar3 != (byte *)0x0) {
        return pbVar3;
      }
      if ((char)puStack_50 != '\x01') {
        pbVar3 = (byte *)pdb_14054a9f0(&puStack_50,&UNK_142e60bb8,8,param_1 + 4);
        if (pbVar3 != (byte *)0x0) {
          return pbVar3;
        }
        pbVar3 = (byte *)pdb_14021db70(&puStack_50,&UNK_142e60bc0,0xf,param_1 + 8);
        if (pbVar3 != (byte *)0x0) {
          return pbVar3;
        }
        ppuVar5 = &puStack_50;
        goto code_r0x00014021d197;
      }
    }
    break;
  case 2:
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      pdb_142d7f1b0(plVar1,lVar4,1,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puVar2 = (undefined *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e60bd9,10);
    if (puVar2 != (undefined *)0x0) goto code_r0x00014021d1a8;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      pdb_142d7f1b0(plVar1,lVar4,1,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x3a;
    plVar1[2] = lVar4 + 1;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      pdb_142d7f1b0(plVar1,lVar4,1,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puStack_70._0_2_ = 0x100;
    plStack_68 = param_2;
    pbVar3 = (byte *)pdb_14053ee10(&puStack_70,&UNK_142e60ba8,10,param_1 + 0x28);
    if (pbVar3 != (byte *)0x0) {
      return pbVar3;
    }
    if ((char)puStack_70 != '\x01') {
      pbVar3 = (byte *)pdb_1405432b0(&puStack_70,&UNK_142e60be3,0xb,param_1 + 4);
      if (pbVar3 != (byte *)0x0) {
        return pbVar3;
      }
      if ((char)puStack_70 != '\x01') {
        pbVar3 = (byte *)pdb_1405432b0(&puStack_70,&UNK_142e60bee,0xc,param_1 + 8);
        if (pbVar3 != (byte *)0x0) {
          return pbVar3;
        }
        pbVar3 = (byte *)pdb_14021dbd0(&puStack_70,&UNK_142e60bfa,0xf,param_1 + 0x30);
        if (pbVar3 != (byte *)0x0) {
          return pbVar3;
        }
        pbVar3 = (byte *)pdb_14021dc00(&puStack_70,&UNK_142e60c09,10,param_1 + 0xc);
        if (pbVar3 != (byte *)0x0) {
          return pbVar3;
        }
        pbVar3 = (byte *)pdb_14021dc00(&puStack_70,&UNK_142e60c13,9,param_1 + 0x10);
        if (pbVar3 != (byte *)0x0) {
          return pbVar3;
        }
        pbVar3 = (byte *)pdb_14021dc00(&puStack_70,&UNK_142e60c1c,10,param_1 + 0x14);
        if (pbVar3 != (byte *)0x0) {
          return pbVar3;
        }
        pbVar3 = (byte *)pdb_14021dc00(&puStack_70,&UNK_142e60c26,0xb,param_1 + 0x18);
        if (pbVar3 != (byte *)0x0) {
          return pbVar3;
        }
        pbVar3 = (byte *)pdb_14021dbd0(&puStack_70,&UNK_142e60c31,0xe,param_1 + 0x38);
        if (pbVar3 != (byte *)0x0) {
          return pbVar3;
        }
        pbVar3 = (byte *)pdb_14021dc00(&puStack_70,&UNK_142e60c3f,9,param_1 + 0x1c);
        if (pbVar3 != (byte *)0x0) {
          return pbVar3;
        }
        pbVar3 = (byte *)pdb_14021dc00(&puStack_70,&UNK_142e60c48,8,param_1 + 0x20);
        if (pbVar3 != (byte *)0x0) {
          return pbVar3;
        }
        ppuVar5 = &puStack_70;
        goto code_r0x00014021d197;
      }
    }
    break;
  case 3:
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      pdb_142d7f1b0(plVar1,lVar4,1,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puVar2 = (undefined *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e60c50,0x12);
    if (puVar2 != (undefined *)0x0) goto code_r0x00014021d1a8;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      pdb_142d7f1b0(plVar1,lVar4,1,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x3a;
    plVar1[2] = lVar4 + 1;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      pdb_142d7f1b0(plVar1,lVar4,1,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puStack_40._0_2_ = 0x100;
    plStack_38 = param_2;
    pbVar3 = (byte *)pdb_14053ee10(&puStack_40,&UNK_142e60ba8,10,param_1 + 8);
    if (pbVar3 != (byte *)0x0) {
      return pbVar3;
    }
    if ((char)puStack_40 != '\x01') {
      pbVar3 = (byte *)pdb_140545c90(&puStack_40,&UNK_142e60aa2,4,param_1 + 1);
      if (pbVar3 != (byte *)0x0) {
        return pbVar3;
      }
      if ((char)puStack_40 != '\x01') {
        pbVar3 = (byte *)pdb_140545c90(&puStack_40,&UNK_142e60aa6,2,param_1 + 2);
        if (pbVar3 != (byte *)0x0) {
          return pbVar3;
        }
        ppuVar5 = &puStack_40;
        goto code_r0x00014021d197;
      }
    }
    break;
  case 4:
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      pdb_142d7f1b0(plVar1,lVar4,1,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puVar2 = (undefined *)pdb_14054e5c0(param_2,param_2 + 1,&UNK_142e60c62,0x16);
    if (puVar2 != (undefined *)0x0) goto code_r0x00014021d1a8;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      pdb_142d7f1b0(plVar1,lVar4,1,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x3a;
    plVar1[2] = lVar4 + 1;
    plVar1 = (longlong *)*param_2;
    lVar4 = plVar1[2];
    if (*plVar1 == lVar4) {
      pdb_142d7f1b0(plVar1,lVar4,1,1,1);
      lVar4 = plVar1[2];
    }
    *(undefined1 *)(plVar1[1] + lVar4) = 0x7b;
    plVar1[2] = lVar4 + 1;
    puStack_30 = (undefined *)CONCAT62(puStack_30._2_6_,0x100);
    plStack_28 = param_2;
    pbVar3 = (byte *)pdb_14053ee10(&puStack_30,&UNK_142e60ba8,10,param_1 + 8);
    if (pbVar3 != (byte *)0x0) {
      return pbVar3;
    }
    if ((char)puStack_30 != '\x01') {
      pbVar3 = (byte *)pdb_1405417f0(&puStack_30,&UNK_142e60c78,6,param_1 + 1);
      if (pbVar3 != (byte *)0x0) {
        return pbVar3;
      }
      if ((char)puStack_30 != '\x01') {
        pbVar3 = (byte *)pdb_1405417f0(&puStack_30,&UNK_142e60c7e,5,param_1 + 2);
        if (pbVar3 != (byte *)0x0) {
          return pbVar3;
        }
        ppuVar5 = &puStack_30;
        goto code_r0x00014021d197;
      }
    }
    break;
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc83b0(&UNK_142e60cfc,0x28,&UNK_142e60d70);
}

