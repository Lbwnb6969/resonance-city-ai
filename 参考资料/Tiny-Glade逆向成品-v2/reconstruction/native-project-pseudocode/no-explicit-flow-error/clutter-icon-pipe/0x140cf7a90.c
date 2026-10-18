// VA 0x140cf7a90, PDB extent 1607 bytes
// clutter_icon_pipe::packaged_texture_blob_path
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: clutter_icon_pipe::packaged_texture_blob_path
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
   Extent: 1607 */

undefined8 * pdb_140cf7a90(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  byte *pbVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uStack_108;
  longlong lStack_100;
  byte *pbStack_f8;
  longlong lStack_f0;
  byte *pbStack_e8;
  longlong lStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong lStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *puStack_68;
  longlong lStack_60;
  byte *pbStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_108 = param_2;
  lStack_100 = param_3;
  pdb_141d63f20(&uStack_98,&UNK_143088670,0x1f);
  pdb_141d62370(&uStack_d8,&uStack_98,&UNK_143088670,0x1f);
  lStack_60 = CONCAT44(uStack_d4,uStack_d8);
  pbVar4 = (byte *)CONCAT44(uStack_cc,uStack_d0);
  if (SBORROW8(0,lStack_60)) {
    param_1[1] = pbVar4;
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  lVar5 = CONCAT44(uStack_c4,uStack_c8);
  puStack_68 = param_1;
  pbStack_58 = pbVar4;
  if (lVar5 != 0) {
    pbVar7 = pbVar4 + lVar5 * 0x40;
    pbVar6 = pbVar4;
    do {
      plVar2 = (longlong *)pdb_14043b7e0(pbVar6 + 0x10);
      if (((pbVar4 == (byte *)0xc) &&
          ((int)plVar2[1] == 0x7473696c && *plVar2 == 0x2d65727574786574)) &&
         (*(longlong *)(pbVar6 + 0x38) == 0x25)) {
        pbVar4 = &UNK_1433d4310;
        iVar1 = pub_142e32750(*(undefined8 *)(pbVar6 + 0x30),&UNK_1433d4310,0x25);
        if (iVar1 == 0) {
          pdb_141d640f0(&lStack_f0,&UNK_143088670,0x1f,*(undefined8 *)pbVar6,
                        *(undefined8 *)(pbVar6 + 8));
          if (SBORROW8(0,lStack_f0)) {
            pbStack_f8 = pbStack_e8;
            uStack_49 = 1;
            pdb_140f3f5b0(&uStack_98);
            uStack_b8 = uStack_78;
            uStack_b4 = uStack_74;
            uStack_b0 = uStack_70;
            uStack_ac = uStack_6c;
            uStack_c8 = (undefined4)uStack_88;
            uStack_c4 = uStack_88._4_4_;
            uStack_c0 = uStack_80;
            uStack_bc = uStack_7c;
            uStack_d8 = (undefined4)uStack_98;
            uStack_d4 = uStack_98._4_4_;
            uStack_d0 = (undefined4)uStack_90;
            uStack_cc = uStack_90._4_4_;
            uStack_98 = (undefined8 *)&UNK_1430886b6;
            uStack_90 = (code *)0x21;
            uStack_88 = pbStack_e8;
            uStack_49 = 0;
            uVar3 = pdb_142df7ba0(&uStack_98,&uStack_d8);
            goto LAB_140cf7c80;
          }
          lStack_a8 = lStack_f0;
          if (lStack_e0 == 0) goto LAB_140cf7dee;
          lVar9 = 0;
          goto LAB_140cf7d37;
        }
      }
      pbVar6 = pbVar6 + 0x40;
    } while (pbVar6 != pbVar7);
  }
  pdb_140f3f5b0(&uStack_98);
  uVar3 = pdb_142df75c0(&UNK_14308868f,0x27,&uStack_98);
LAB_140cf7c80:
  puStack_68[1] = uVar3;
  *puStack_68 = 0x8000000000000000;
  lVar9 = lStack_60;
  puVar8 = puStack_68;
  pbVar4 = pbStack_58;
  goto LAB_140cf7ca7;
  while (lVar9 = lVar9 + 0x50, lStack_e0 * 0x50 != lVar9) {
LAB_140cf7d37:
    if ((*(longlong *)(pbStack_e8 + lVar9 + 0x20) == param_3) &&
       (iVar1 = pub_142e32750(*(undefined8 *)(pbStack_e8 + lVar9 + 0x18),param_2,param_3),
       iVar1 == 0)) {
      pdb_141c2d570(&uStack_d8,*(undefined8 *)(pbStack_e8 + lVar9),
                    *(undefined8 *)(pbStack_e8 + lVar9 + 8));
      pbStack_a0 = (byte *)CONCAT44(uStack_cc,uStack_d0);
      pdb_140f3e9e0(&uStack_98,&UNK_143088670,0x1f,pbStack_a0,CONCAT44(uStack_c4,uStack_c8));
      puVar8 = puStack_68;
      if (CONCAT44(uStack_d4,uStack_d8) != 0) {
        pub_1406abac0(pbStack_a0,CONCAT44(uStack_d4,uStack_d8),1);
      }
      puVar8[2] = uStack_88;
      puVar8[3] = CONCAT44(uStack_7c,uStack_80);
      *puVar8 = uStack_98;
      puVar8[1] = uStack_90;
      pbVar4 = pbStack_e8 + 0x18;
      lVar9 = lStack_e0;
      do {
        if (*(ulonglong *)(pbVar4 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar4,*(ulonglong *)(pbVar4 + -8),1);
        }
        pbVar4 = pbVar4 + 0x50;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      if (lStack_a8 != 0) {
        pub_1406abac0(pbStack_e8,lStack_a8 * 0x50,0x10);
      }
      pbVar4 = pbStack_58 + 0x30;
      do {
        if (*(ulonglong *)(pbVar4 + -0x20) != 0) {
          pub_1406abac0(*(byte **)(pbVar4 + -0x18),*(ulonglong *)(pbVar4 + -0x20),1);
        }
        if (*(ulonglong *)(pbVar4 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar4,*(ulonglong *)(pbVar4 + -8),1);
        }
        pbVar4 = pbVar4 + 0x40;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      goto LAB_140cf7f45;
    }
  }
LAB_140cf7dee:
  uStack_98 = &uStack_108;
  uStack_90 = pdb_1402ed420;
  pdb_140f60760(&lStack_f0,&UNK_1433d3ec2,&uStack_98);
  uStack_4a = 1;
  pdb_140f3f5b0(&uStack_98);
  puVar8 = puStack_68;
  uStack_b8 = uStack_78;
  uStack_b4 = uStack_74;
  uStack_b0 = uStack_70;
  uStack_ac = uStack_6c;
  uStack_c8 = (undefined4)uStack_88;
  uStack_c4 = uStack_88._4_4_;
  uStack_c0 = uStack_80;
  uStack_bc = uStack_7c;
  uStack_d8 = (undefined4)uStack_98;
  uStack_d4 = uStack_98._4_4_;
  uStack_d0 = (undefined4)uStack_90;
  uStack_cc = uStack_90._4_4_;
  uStack_4a = 0;
  uVar3 = pdb_142df7230(&lStack_f0,&uStack_d8);
  puVar8[1] = uVar3;
  *puVar8 = 0x8000000000000000;
  if (lStack_e0 != 0) {
    pbVar4 = pbStack_e8 + 0x18;
    lVar9 = lStack_e0;
    do {
      if (*(ulonglong *)(pbVar4 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar4,*(ulonglong *)(pbVar4 + -8),1);
      }
      pbVar4 = pbVar4 + 0x50;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  lVar9 = lStack_60;
  pbVar4 = pbStack_58;
  if (lStack_a8 != 0) {
    pub_1406abac0(pbStack_e8,lStack_a8 * 0x50,0x10);
  }
LAB_140cf7ca7:
  lStack_60 = lVar9;
  pbStack_58 = pbVar4;
  if (lVar5 != 0) {
    pbVar4 = pbVar4 + 0x30;
    do {
      if (*(ulonglong *)(pbVar4 + -0x20) != 0) {
        pub_1406abac0(*(byte **)(pbVar4 + -0x18),*(ulonglong *)(pbVar4 + -0x20),1);
      }
      if (*(ulonglong *)(pbVar4 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar4,*(ulonglong *)(pbVar4 + -8),1);
      }
      pbVar4 = pbVar4 + 0x40;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
LAB_140cf7f45:
  if (lStack_60 != 0) {
    pub_1406abac0(pbStack_58,lStack_60 << 6,0x10);
  }
  return puVar8;
}

