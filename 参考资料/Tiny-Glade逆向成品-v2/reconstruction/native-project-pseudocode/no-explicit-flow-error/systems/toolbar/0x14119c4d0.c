// VA 0x14119c4d0, PDB extent 2059 bytes
// image::io::reader::Reader::decode<std::io::buffered::bufreader::BufReader<std::fs::File> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   image::io::reader::Reader::decode<std::io::buffered::bufreader::BufReader<std::fs::File> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 2059 */

longlong * pdb_14119c4d0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  byte *pbVar2;
  code *pcVar3;
  byte *pbVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  bool bVar15;
  undefined8 uStack_718;
  undefined8 uStack_710;
  byte *pbStack_708;
  undefined8 *puStack_700;
  longlong lStack_6f8;
  longlong lStack_6f0;
  longlong lStack_6e8;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined4 uStack_6d8;
  undefined4 uStack_6d4;
  undefined1 auStack_6d0 [688];
  byte *pbStack_420;
  byte *pbStack_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  longlong lStack_400;
  longlong lStack_3f8;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined1 auStack_3d8 [688];
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  byte *pbStack_f8;
  byte *pbStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong lStack_d8;
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
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  byte *pbStack_70;
  longlong lStack_68;
  undefined8 *puStack_60;
  byte *pbStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  cVar1 = (char)param_2[10];
  if (cVar1 == '\x0f') {
    *param_1 = -0x7ffffffffffffffd;
    *(undefined1 *)(param_1 + 1) = 0xf;
    param_1[4] = -0x7ffffffffffffffd;
    if (param_2[5] != 0) {
      pub_1406abac0((byte *)param_2[4],param_2[5],1);
    }
    CloseHandle(param_2[9]);
    return param_1;
  }
  pbVar2 = (byte *)*param_2;
  pbVar12 = (byte *)param_2[1];
  uVar13 = (undefined4)param_2[2];
  uStack_e4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_e0 = (undefined4)param_2[3];
  uVar14 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_128 = (undefined4)param_2[4];
  uStack_124 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_120 = (undefined4)param_2[5];
  uStack_11c = *(undefined4 *)((longlong)param_2 + 0x2c);
  uStack_118 = (undefined4)param_2[6];
  uStack_114 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_110 = (undefined4)param_2[7];
  uStack_10c = *(undefined4 *)((longlong)param_2 + 0x3c);
  uStack_108 = (undefined4)param_2[8];
  uStack_104 = *(undefined4 *)((longlong)param_2 + 0x44);
  uStack_100 = (undefined4)param_2[9];
  uStack_fc = *(undefined4 *)((longlong)param_2 + 0x4c);
  pbStack_f8 = pbVar2;
  pbStack_f0 = pbVar12;
  uStack_e8 = uVar13;
  uStack_dc = uVar14;
  uStack_7c = uStack_e4;
  uStack_78 = uStack_e0;
  if (cVar1 == '\0') {
    lStack_d8 = param_2[4];
    uStack_d0 = (undefined4)param_2[5];
    uStack_cc = *(undefined4 *)((longlong)param_2 + 0x2c);
    uStack_c8 = (undefined4)param_2[6];
    uStack_c4 = *(undefined4 *)((longlong)param_2 + 0x34);
    uStack_c0 = (undefined4)param_2[7];
    uStack_bc = *(undefined4 *)((longlong)param_2 + 0x3c);
    uStack_b8 = (undefined4)param_2[8];
    uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x44);
    uStack_b0 = (undefined4)param_2[9];
    uStack_ac = *(undefined4 *)((longlong)param_2 + 0x4c);
    uStack_49 = 0;
    pdb_1423427a0(&pbStack_420,&lStack_d8,&pbStack_f8);
    pbVar11 = pbStack_418;
    pbVar4 = pbStack_420;
    pbStack_70 = (byte *)CONCAT44(pbStack_70._4_4_,uVar13);
    pbStack_58 = (byte *)CONCAT44(uStack_40c,uStack_410);
    puStack_60 = (undefined8 *)CONCAT44(uStack_404,uStack_408);
    lVar5 = CONCAT44(uStack_3ec,uStack_3f0);
    uStack_98 = uStack_3e8;
    uStack_94 = uStack_3e4;
    uStack_90 = uStack_3e0;
    uStack_8c = uStack_3dc;
    pbVar10 = pbStack_58;
    uVar6 = uStack_3e8;
    uVar7 = uStack_3e4;
    uVar8 = uStack_3e0;
    uVar9 = uStack_3dc;
    if (pbStack_420 != (byte *)0x2) {
      uStack_74 = uVar14;
      lStack_68 = lVar5;
      pub_142e32760(auStack_6d0,auStack_3d8,0x2b0);
      uStack_718 = pbVar4;
      uStack_710 = pbVar11;
      pbStack_708 = pbStack_58;
      puStack_700 = puStack_60;
      lStack_6f8 = lStack_400;
      lStack_6f0 = lStack_3f8;
      lStack_6e8 = lStack_68;
      uStack_6e0 = uStack_98;
      uStack_6dc = uStack_94;
      uStack_6d8 = uStack_90;
      uStack_6d4 = uStack_8c;
      pdb_14007ee60();
      pbVar10 = pub_1406abab0(0x2f8,8);
      if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x2f8);
      }
      pub_142e32760(pbVar10,&uStack_718,0x2f8);
      puStack_60 = (undefined8 *)&UNK_1432a00c0;
      uVar13 = pbStack_70._0_4_;
      uVar14 = uStack_74;
      goto LAB_14119c9a3;
    }
  }
  else if (cVar1 == '\x01') {
    lStack_d8 = param_2[4];
    uStack_d0 = (undefined4)param_2[5];
    uStack_cc = *(undefined4 *)((longlong)param_2 + 0x2c);
    uStack_c8 = (undefined4)param_2[6];
    uStack_c4 = *(undefined4 *)((longlong)param_2 + 0x34);
    uStack_c0 = (undefined4)param_2[7];
    uStack_bc = *(undefined4 *)((longlong)param_2 + 0x3c);
    uStack_b8 = (undefined4)param_2[8];
    uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x44);
    uStack_b0 = (undefined4)param_2[9];
    uStack_ac = *(undefined4 *)((longlong)param_2 + 0x4c);
    uStack_49 = 0;
    pdb_1423419c0(&pbStack_420,&lStack_d8);
    pbVar11 = pbStack_418;
    pbVar4 = (byte *)CONCAT44(uStack_40c,uStack_410);
    puStack_60 = (undefined8 *)CONCAT44(uStack_404,uStack_408);
    pbStack_58 = (byte *)lStack_3f8;
    lVar5 = CONCAT44(uStack_3ec,uStack_3f0);
    uStack_98 = uStack_3e8;
    uStack_94 = uStack_3e4;
    uStack_90 = uStack_3e0;
    uStack_8c = uStack_3dc;
    pbVar10 = pbVar4;
    uVar6 = uStack_3e8;
    uVar7 = uStack_3e4;
    uVar8 = uStack_3e0;
    uVar9 = uStack_3dc;
    if ((int)pbStack_420 != 1) {
      lStack_68 = lStack_400;
      pbStack_70 = pbVar12;
      pdb_14007ee60();
      pbVar10 = pub_1406abab0(0x40,8);
      if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x40);
      }
      *(byte **)pbVar10 = pbVar11;
      *(byte **)(pbVar10 + 8) = pbVar4;
      *(undefined8 **)(pbVar10 + 0x10) = puStack_60;
      *(longlong *)(pbVar10 + 0x18) = lStack_68;
      *(byte **)(pbVar10 + 0x20) = pbStack_58;
      *(longlong *)(pbVar10 + 0x28) = lVar5;
      *(undefined4 *)(pbVar10 + 0x30) = uStack_98;
      *(undefined4 *)(pbVar10 + 0x34) = uStack_94;
      *(undefined4 *)(pbVar10 + 0x38) = uStack_90;
      *(undefined4 *)(pbVar10 + 0x3c) = uStack_8c;
      puStack_60 = (undefined8 *)&UNK_1432a0110;
      pbVar12 = pbStack_70;
      goto LAB_14119c9a3;
    }
  }
  else {
    uStack_d0 = CONCAT31(uStack_d0._1_3_,cVar1);
    lStack_d8 = -0x8000000000000000;
    uStack_49 = 1;
    pdb_140d9d680(&pbStack_420,&lStack_d8);
    pbVar10 = pbStack_418;
    pbVar11 = pbStack_420;
    puStack_60 = (undefined8 *)CONCAT44(uStack_40c,uStack_410);
    lStack_68 = CONCAT44(uStack_404,uStack_408);
    pbStack_58 = (byte *)lStack_400;
    uStack_a8 = uStack_3f0;
    uStack_a4 = uStack_3ec;
    uStack_a0 = uStack_3e8;
    uStack_9c = uStack_3e4;
    pbStack_70 = pbVar12;
    if (CONCAT44(uStack_11c,uStack_120) != 0) {
      pub_1406abac0((byte *)CONCAT44(uStack_124,uStack_128),CONCAT44(uStack_11c,uStack_120),1);
    }
    CloseHandle(CONCAT44(uStack_fc,uStack_100));
    lVar5 = lStack_3f8;
    uVar6 = uStack_a8;
    uVar7 = uStack_a4;
    uVar8 = uStack_a0;
    uVar9 = uStack_9c;
    pbVar12 = pbStack_70;
    lStack_400 = lStack_68;
    lStack_3f8 = (longlong)pbStack_58;
  }
  uStack_9c = uVar9;
  uStack_a0 = uVar8;
  uStack_a4 = uVar7;
  uStack_a8 = uVar6;
  if (pbVar11 != (byte *)0x800000000000000a) {
    param_1[3] = lStack_400;
    param_1[4] = lStack_3f8;
    param_1[5] = lVar5;
    param_1[6] = CONCAT44(uStack_a4,uStack_a8);
    param_1[7] = CONCAT44(uStack_9c,uStack_a0);
    *param_1 = (longlong)pbVar11;
    param_1[1] = (longlong)pbVar10;
    param_1[2] = (longlong)puStack_60;
    return param_1;
  }
LAB_14119c9a3:
  uStack_4a = 1;
  pbStack_58 = pbVar10;
  pbVar11 = (byte *)(*(code *)puStack_60[7])();
  if ((pbVar2 == (byte *)0x1) &&
     (bVar15 = pbVar12 < pbVar11, pbVar12 = pbVar12 + -(longlong)pbVar11, bVar15)) {
    *param_1 = -0x7ffffffffffffff9;
    param_1[1] = 3;
    pcVar3 = (code *)*puStack_60;
  }
  else {
    uStack_40c = uStack_7c;
    uStack_408 = uStack_78;
    uStack_4a = 1;
    pbStack_420 = pbVar2;
    pbStack_418 = pbVar12;
    uStack_410 = uVar13;
    uStack_404 = uVar14;
    (*(code *)puStack_60[8])(&uStack_718,pbStack_58,&pbStack_420);
    if (uStack_718 == (byte *)0x800000000000000a) {
      uStack_4a = 0;
      pdb_142343570(param_1,pbStack_58,puStack_60);
      return param_1;
    }
    param_1[6] = lStack_6e8;
    param_1[7] = CONCAT44(uStack_6dc,uStack_6e0);
    param_1[4] = lStack_6f8;
    param_1[5] = lStack_6f0;
    param_1[2] = (longlong)pbStack_708;
    param_1[3] = (longlong)puStack_700;
    *(undefined4 *)param_1 = (undefined4)uStack_718;
    *(undefined4 *)((longlong)param_1 + 4) = uStack_718._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_710;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_710._4_4_;
    pcVar3 = (code *)*puStack_60;
  }
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(pbStack_58);
  }
  if (puStack_60[1] != 0) {
    pub_1406abac0(pbStack_58,puStack_60[1],puStack_60[2]);
  }
  return param_1;
}

