// VA 0x142b39250, PDB extent 605 bytes
// tg_text::TextFragment::set_text<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tg_text::TextFragment::set_text<ref$<str$> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-text/src/lib.rs
   Extent: 605 */

void pdb_142b39250(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong arg1;
  longlong lVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  ulonglong uStack_b8;
  undefined8 uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 *puStack_78;
  ulonglong uStack_70;
  byte *pbStack_68;
  ulonglong uStack_60;
  undefined1 uStack_52;
  char cStack_51;
  undefined8 uStack_50;
  
  uStack_50 = 0xfffffffffffffffe;
  uVar4 = param_3 == 0;
  if (-1 < (longlong)param_3) goto LAB_142b39289;
  lVar1 = 0;
  do {
    param_1 = lVar1;
    uVar4 = 1;
    param_2 = param_3;
    pdb_142dc7e2a(param_1,param_3);
LAB_142b39289:
    if ((bool)uVar4) {
      pbStack_68 = (byte *)0x1;
      goto LAB_142b392c6;
    }
    pdb_14007ee60();
    pbStack_68 = pub_1406abab0(param_3,1);
    lVar1 = 1;
  } while (pbStack_68 == (byte *)0x0);
  pub_142e32760(pbStack_68,param_2,param_3);
LAB_142b392c6:
  uStack_70 = param_3;
  uStack_60 = param_3;
  if ((!SBORROW8(0,*(longlong *)(param_1 + 0x1e8))) && (*(ulonglong *)(param_1 + 0x1f8) == param_3))
  {
    iVar2 = pub_142e32750(*(undefined8 *)(param_1 + 0x1f0),pbStack_68,param_3);
    if (iVar2 == 0) {
      cStack_51 = 1;
      cVar3 = '\x01';
      pdb_142d270b0(param_1);
      goto LAB_142b393bf;
    }
  }
  uStack_b0 = *(undefined8 *)(param_1 + 0x208);
  uStack_b8 = *(longlong *)(param_1 + 0x200) >> 0x3f &
              *(longlong *)(param_1 + 0x200) + 0x8000000000000001U;
  uStack_a8 = *(ulonglong *)(param_1 + 0x210);
  uStack_98 = *(undefined4 *)(param_1 + 0x220);
  uStack_94 = *(undefined4 *)(param_1 + 0x224);
  uStack_90 = *(undefined4 *)(param_1 + 0x228);
  uStack_8c = *(undefined4 *)(param_1 + 0x22c);
  uStack_a0 = *(ulonglong *)(param_1 + 0x218);
  uStack_52 = 1;
  uStack_88 = &uStack_70;
  uStack_80 = &uStack_b8;
  puStack_78 = &uStack_52;
  cStack_51 = 1;
  pdb_142d26e90(param_1,&uStack_88);
  puStack_78 = (undefined1 *)uStack_60;
  uStack_88 = (ulonglong *)uStack_70;
  uStack_80 = (ulonglong *)pbStack_68;
  arg1 = *(ulonglong *)(param_1 + 0x1e8);
  if ((!SBORROW8(0,arg1)) && (arg1 != 0)) {
    pub_1406abac0(*(byte **)(param_1 + 0x1f0),arg1,1);
  }
  *(undefined1 **)(param_1 + 0x1f8) = puStack_78;
  *(undefined4 *)(param_1 + 0x1e8) = (undefined4)uStack_88;
  *(undefined4 *)(param_1 + 0x1ec) = uStack_88._4_4_;
  *(undefined4 *)(param_1 + 0x1f0) = (undefined4)uStack_80;
  *(undefined4 *)(param_1 + 500) = uStack_80._4_4_;
  cVar3 = '\0';
LAB_142b393bf:
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = uStack_a8 & 0xffffffffffffff00;
  cStack_51 = cVar3;
  pdb_140cca2c0(param_1,&uStack_b8);
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = uStack_a0 & 0xffffffffffffff00;
  uStack_b8 = 1;
  cStack_51 = cVar3;
  pdb_140ccb450(param_1,&uStack_b8);
  uStack_b8 = CONCAT44(uStack_b8._4_4_,0x14);
  cStack_51 = cVar3;
  pdb_140cb5d90(param_1,&uStack_b8);
  if ((cVar3 != '\0') && (uStack_70 != 0)) {
    pub_1406abac0(pbStack_68,uStack_70,1);
  }
  return;
}

