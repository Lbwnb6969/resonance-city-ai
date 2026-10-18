// VA 0x141df6680, PDB extent 549 bytes
// turbosloth::export::to_json_value<asset::mesh::MeshData>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/export.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: turbosloth::export::to_json_value<asset::mesh::MeshData>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/export.rs
   Extent: 549 */

char * pdb_141df6680(char *param_1)

{
  longlong lVar1;
  byte *pbVar2;
  longlong lStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong lStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  char cStack_78;
  undefined4 uStack_77;
  undefined3 uStack_73;
  longlong lStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  pdb_14270fbb0(&lStack_58);
  if (SBORROW8(0,lStack_58)) {
    param_1[8] = '\x01';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    *(undefined **)(param_1 + 0x10) = &UNK_14358b258;
    *param_1 = '\x06';
    return param_1;
  }
  uStack_c0 = uStack_40;
  uStack_bc = uStack_3c;
  uStack_b8 = uStack_38;
  uStack_b4 = uStack_34;
  lStack_d8 = lStack_58;
  uStack_d0 = uStack_50;
  uStack_cc = uStack_4c;
  uStack_c8 = uStack_48;
  uStack_c4 = uStack_44;
  lStack_a8 = -0x8000000000000000;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_21 = 1;
  lVar1 = pdb_142714b70(&lStack_a8,&UNK_1433e86b1,7,&lStack_d8);
  if (lVar1 == 0) {
    uStack_21 = 1;
    lVar1 = pdb_142714dd0(&lStack_a8,&UNK_1433e86b8,10,&uStack_c0);
    if (lVar1 != 0) goto LAB_141df6755;
    uStack_38 = uStack_88;
    uStack_34 = uStack_84;
    uStack_30 = (undefined4)uStack_80;
    uStack_2c = uStack_80._4_4_;
    uStack_48 = uStack_98;
    uStack_44 = uStack_94;
    uStack_40 = (undefined4)uStack_90;
    uStack_3c = uStack_90._4_4_;
    lStack_58 = lStack_a8;
    uStack_50 = uStack_a0;
    uStack_4c = uStack_9c;
    uStack_21 = 0;
    pdb_140ddcdc0(&cStack_78,&lStack_58);
    lVar1 = lStack_70;
    if (cStack_78 != '\x06') {
      *(uint *)(param_1 + 4) = CONCAT31(uStack_73,uStack_77._3_1_);
      *(undefined4 *)(param_1 + 1) = uStack_77;
      *(undefined4 *)(param_1 + 0x10) = uStack_68;
      *(undefined4 *)(param_1 + 0x14) = uStack_64;
      *(undefined4 *)(param_1 + 0x18) = uStack_60;
      *(undefined4 *)(param_1 + 0x1c) = uStack_5c;
      *param_1 = cStack_78;
      *(longlong *)(param_1 + 8) = lStack_70;
      goto LAB_141df6795;
    }
  }
  else {
LAB_141df6755:
    pdb_141df4c80(&lStack_a8);
  }
  lStack_58 = lVar1;
  pdb_14007ee60();
  pbVar2 = pub_1406abab0(8,8);
  if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,8);
  }
  *(longlong *)pbVar2 = lVar1;
  *(byte **)(param_1 + 8) = pbVar2;
  *(undefined **)(param_1 + 0x10) = &UNK_14358b2d0;
  *param_1 = '\x06';
LAB_141df6795:
  pdb_1409875c0(&lStack_d8);
  return param_1;
}

