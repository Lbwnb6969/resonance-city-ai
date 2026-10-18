// VA 0x141b00000, PDB extent 903 bytes
// country_core::startup::load_mod_textures::packaged_textures
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_mod_textures.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::load_mod_textures::packaged_textures
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_mod_textures.rs
   Extent: 903 */

undefined8 * pdb_141b00000(undefined8 *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *arg1;
  byte *pbVar6;
  longlong lVar7;
  longlong unaff_R13;
  byte *unaff_R14;
  byte *pbVar8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 *puStack_70;
  longlong lStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  arg1 = (longlong *)&UNK_14338c9d8;
  pdb_1417fc060(&lStack_68,&UNK_14338c9d8,0x1f);
  if (!SBORROW8(0,lStack_68)) {
    uStack_c8 = (byte *)CONCAT44(uStack_5c,uStack_60);
    pbVar8 = uStack_c8;
    uStack_c0 = CONCAT44(uStack_54,uStack_58);
    lVar5 = uStack_c0;
    lStack_d0 = lStack_68;
    puStack_70 = param_1;
    if (uStack_c0 == 0) {
      bVar1 = false;
    }
    else {
      lVar7 = uStack_c0 << 6;
      unaff_R14 = uStack_c8 + 0x10;
      unaff_R13 = 0;
      do {
        plVar4 = (longlong *)pdb_14043b7e0(unaff_R14 + unaff_R13);
        if (((arg1 == (longlong *)0xc) &&
            ((int)plVar4[1] == 0x7473696c && *plVar4 == 0x2d65727574786574)) &&
           (*(longlong *)(pbVar8 + unaff_R13 + 0x38) == 0x25)) {
          arg1 = (longlong *)&DAT_14333e441;
          iVar3 = pub_142e32750(*(undefined8 *)(pbVar8 + unaff_R13 + 0x30),&DAT_14333e441,0x25);
          if (iVar3 == 0) {
            unaff_R14 = *(byte **)(pbVar8 + unaff_R13);
            unaff_R13 = *(longlong *)(pbVar8 + unaff_R13 + 8);
            bVar1 = true;
            goto LAB_141b000f1;
          }
        }
        unaff_R13 = unaff_R13 + 0x40;
      } while (lVar7 != unaff_R13);
      bVar1 = false;
LAB_141b000f1:
      pbVar6 = pbVar8 + 0x30;
      do {
        if (*(ulonglong *)(pbVar6 + -0x20) != 0) {
          pub_1406abac0(*(byte **)(pbVar6 + -0x18),*(ulonglong *)(pbVar6 + -0x20),1);
        }
        arg1 = *(longlong **)(pbVar6 + -8);
        if (arg1 != (longlong *)0x0) {
          pub_1406abac0(*(byte **)pbVar6,(ulonglong)arg1,1);
        }
        pbVar6 = pbVar6 + 0x40;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    param_1 = puStack_70;
    if (lStack_68 != 0) {
      arg1 = (longlong *)(lStack_68 << 6);
      pub_1406abac0(pbVar8,(ulonglong)arg1,0x10);
    }
    if (!bVar1) goto LAB_141b001f6;
    arg1 = (longlong *)&UNK_14338c9d8;
    pdb_1417fc430(&lStack_d0,&UNK_14338c9d8,0x1f,unaff_R14,unaff_R13);
    lVar5 = lStack_d0;
    if (!SBORROW8(0,lStack_d0)) {
      uStack_60 = (undefined4)uStack_c8;
      uStack_5c = uStack_c8._4_4_;
      uStack_58 = (undefined4)uStack_c0;
      uStack_54 = uStack_c0._4_4_;
      lStack_68 = lStack_d0;
      pdb_141a32400(param_1,uStack_c8,uStack_c8 + uStack_c0 * 0x50);
      if (uStack_c0 != 0) {
        pbVar8 = uStack_c8 + 0x18;
        lVar7 = uStack_c0;
        do {
          if (*(ulonglong *)(pbVar8 + -8) != 0) {
            pub_1406abac0(*(byte **)pbVar8,*(ulonglong *)(pbVar8 + -8),1);
          }
          pbVar8 = pbVar8 + 0x50;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (lVar5 == 0) {
        return param_1;
      }
      pub_1406abac0(uStack_c8,lVar5 * 0x50,0x10);
      return param_1;
    }
  }
  pdb_1404b38e0();
LAB_141b001f6:
  if (*_DAT_143ca8e90 != 0) {
    lStack_d0 = 0;
    uStack_c8 = &UNK_14338ca74;
    uStack_c0 = 0x28;
    uStack_b8 = 0;
    puStack_b0 = &UNK_14338ca3f;
    uStack_a8 = 0x34;
    uStack_a0 = 1;
    puStack_98 = &UNK_14338ca74;
    uStack_90 = 0x28;
    uStack_88 = 0xbc00000001;
    puStack_80 = &UNK_14338c9f7;
    uStack_78 = 0x91;
    arg1 = &lStack_d0;
    pdb_140f332f0(&uStack_49);
  }
  plVar4 = (longlong *)pdb_140f3bda0();
  if ((char)plVar4[2] == '\x01') {
    lVar5 = *plVar4;
    arg1 = (longlong *)plVar4[1];
  }
  else {
    lVar5 = pdb_140f4fd10();
    *plVar4 = lVar5;
    plVar4[1] = (longlong)arg1;
    *(undefined1 *)(plVar4 + 2) = 1;
  }
  *plVar4 = lVar5 + 1;
  uVar2 = _UNK_14338cce8;
  param_1[2] = _DAT_14338cce0;
  param_1[3] = uVar2;
  uVar2 = _UNK_14338ccd8;
  *param_1 = _DAT_14338ccd0;
  param_1[1] = uVar2;
  param_1[4] = lVar5;
  param_1[5] = arg1;
  return param_1;
}

