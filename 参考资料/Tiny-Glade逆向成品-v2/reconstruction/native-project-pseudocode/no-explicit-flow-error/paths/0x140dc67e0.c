// VA 0x140dc67e0, PDB extent 2601 bytes
// paths::initialize_paths
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/paths/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: paths::initialize_paths
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/paths/src/lib.rs
   Extent: 2601 */

code * pdb_140dc67e0(undefined8 param_1,longlong param_2)

{
  ulonglong arg1;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  byte *pbVar10;
  code *arg0;
  bool bVar11;
  longlong lStack_198;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  code *pcStack_128;
  undefined8 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  code *pcStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  code *pcStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  longlong lStack_d0;
  undefined8 *puStack_c8;
  code *pcStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  code *pcStack_60;
  code *pcStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    pdb_140dc7240(&uStack_98);
    if (SBORROW8(0,(longlong)uStack_98)) {
      return uStack_90;
    }
    uStack_f8 = (undefined4)uStack_88;
    uStack_f4 = uStack_88._4_4_;
    uStack_f0 = uStack_80;
    uStack_ec = uStack_7c;
    puStack_108 = uStack_98;
    pcStack_60 = uStack_90;
  }
  else {
    pdb_140f3e010();
    pcStack_60 = uStack_90;
    pdb_140f3e9e0(&puStack_108,uStack_90,uStack_88,&UNK_1431f2a38,10);
    if (uStack_98 != (undefined8 *)0x0) {
      pub_1406abac0((byte *)pcStack_60,(ulonglong)uStack_98,1);
    }
    pcStack_60 = pcStack_100;
  }
  uVar2 = CONCAT44(uStack_f4,uStack_f8);
  puStack_c8 = &uStack_138;
  pcStack_c0 = pdb_140f72a40;
  uStack_138 = param_1;
  pcStack_100 = pcStack_60;
  pdb_140f60760(&uStack_98,&UNK_1431f29d8,&puStack_c8);
  pcStack_58 = uStack_90;
  pdb_140f3e9e0(&uStack_160,pcStack_60,uVar2,uStack_90,uStack_88);
  if (uStack_98 != (undefined8 *)0x0) {
    pub_1406abac0((byte *)pcStack_58,(ulonglong)uStack_98,1);
  }
  pcStack_58 = (code *)CONCAT44(uStack_154,uStack_158);
  uVar1 = CONCAT44(uStack_14c,uStack_150);
  uStack_49 = 1;
  pdb_140f3e9e0(&uStack_98,pcStack_58,uVar1,&UNK_1431f29e1,5);
  uStack_49 = 1;
  pdb_141dd87b0(&puStack_c8,&uStack_98);
  pcVar7 = pcStack_c0;
  puVar3 = puStack_c8;
  if (puStack_c8 == (undefined8 *)0x0) {
LAB_140dc6c5b:
    arg1 = CONCAT44(uStack_15c,uStack_160);
    pcVar9 = pcStack_c0;
    arg0 = pcStack_60;
  }
  else {
    uStack_49 = 1;
    pdb_140f3e9e0(&uStack_98,pcStack_58,uVar1,&UNK_1431f29e6,10);
    uStack_49 = 1;
    pdb_141dd87b0(&puStack_c8,&uStack_98);
    pcVar8 = pcStack_c0;
    puVar4 = puStack_c8;
    if (puStack_c8 == (undefined8 *)0x0) {
      arg1 = CONCAT44(uStack_15c,uStack_160);
      pcVar9 = pcStack_c0;
      arg0 = pcStack_60;
    }
    else {
      uStack_49 = 1;
      pdb_140f3e9e0(&uStack_98,pcStack_58,uVar1,&UNK_1431f29f0,3);
      uStack_49 = 1;
      pdb_141dd87b0(&puStack_c8,&uStack_98);
      puVar5 = puStack_c8;
      if (puStack_c8 != (undefined8 *)0x0) {
        pcStack_130 = pcStack_c0;
        uStack_49 = 1;
        pdb_140f3e9e0(&uStack_98,pcStack_58,uVar1,&UNK_1431f29f3,0xd);
        uStack_49 = 1;
        pdb_141dd87b0(&puStack_c8,&uStack_98);
        if (puStack_c8 == (undefined8 *)0x0) goto LAB_140dc6c5b;
        puStack_120 = puStack_c8;
        pcStack_128 = pcStack_c0;
        uStack_49 = 1;
        pdb_140f3e9e0(&uStack_98,pcStack_58,uVar1,&UNK_1431f2a00,0xc);
        uStack_49 = 1;
        pdb_141dd87b0(&puStack_c8,&uStack_98);
        puVar6 = puStack_c8;
        if (puStack_c8 != (undefined8 *)0x0) {
          pcStack_118 = pcStack_c0;
          uStack_88 = CONCAT44(uStack_14c,uStack_150);
          uStack_80 = uStack_148;
          uStack_7c = uStack_144;
          uStack_98 = (undefined8 *)CONCAT44(uStack_15c,uStack_160);
          uStack_90 = (code *)CONCAT44(uStack_154,uStack_158);
          uStack_49 = 0;
          pdb_141dd87b0(&puStack_c8,&uStack_98);
          pcVar9 = pcStack_c0;
          arg0 = pcStack_60;
          if (puStack_c8 != (undefined8 *)0x0) {
            puStack_e0 = puStack_c8;
            pcStack_e8 = pcStack_c0;
            uStack_49 = 0;
            pdb_140f4c140(&lStack_198);
            if (!SBORROW8(0,lStack_198)) {
              lStack_d0 = lStack_198;
              uStack_d8 = uStack_190;
              uStack_178 = uStack_188;
              uStack_174 = uStack_184;
              uStack_170 = uStack_180;
              uStack_16c = uStack_17c;
              pdb_14007ee60();
              pbVar10 = pub_1406abab0(0x20,8);
              if (pbVar10 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                pdb_142dc7e11(8,0x20);
              }
              *(undefined4 *)(pbVar10 + 0x10) = uStack_178;
              *(undefined4 *)(pbVar10 + 0x14) = uStack_174;
              *(undefined4 *)(pbVar10 + 0x18) = uStack_170;
              *(undefined4 *)(pbVar10 + 0x1c) = uStack_16c;
              lStack_d0 = *(longlong *)(pbVar10 + 0x10);
              uStack_49 = 0;
              pdb_140f3e010(&uStack_98,pcStack_60,uVar2);
              pdb_14007ee60();
              pbVar10 = pub_1406abab0(0x20,8);
              if (pbVar10 != (byte *)0x0) {
                *(undefined4 *)(pbVar10 + 0x10) = (undefined4)uStack_88;
                *(undefined4 *)(pbVar10 + 0x14) = uStack_88._4_4_;
                *(undefined4 *)(pbVar10 + 0x18) = uStack_80;
                *(undefined4 *)(pbVar10 + 0x1c) = uStack_7c;
                *(undefined4 *)pbVar10 = (undefined4)uStack_98;
                *(undefined4 *)(pbVar10 + 4) = uStack_98._4_4_;
                *(undefined4 *)(pbVar10 + 8) = (undefined4)uStack_90;
                *(undefined4 *)(pbVar10 + 0xc) = uStack_90._4_4_;
                pcStack_58 = *(code **)(pbVar10 + 8);
                uStack_110 = *(undefined8 *)(pbVar10 + 0x10);
                pdb_140f5fd10(&uStack_98,puStack_e0,pcStack_e8);
                pcStack_c0 = pdb_140001020;
                puStack_c8 = &uStack_98;
                pdb_140f4e780(&UNK_1431f2a42,&puStack_c8);
                if ((!SBORROW8(0,(longlong)uStack_98)) && (uStack_98 != (undefined8 *)0x0)) {
                  pub_1406abac0((byte *)uStack_90,(ulonglong)uStack_98,1);
                }
                pdb_140f5fd10(&uStack_98,puVar3,pcVar7);
                pcStack_c0 = pdb_140001020;
                puStack_c8 = &uStack_98;
                pdb_140f4e780(&UNK_1431f2a4d,&puStack_c8);
                if ((!SBORROW8(0,(longlong)uStack_98)) && (uStack_98 != (undefined8 *)0x0)) {
                  pub_1406abac0((byte *)uStack_90,(ulonglong)uStack_98,1);
                }
                bVar11 = _DAT_143cb2d20 == (undefined8 *)0x0;
                _DAT_143cb2d20 = puVar3;
                _DAT_143cb2d28 = pcVar7;
                _DAT_143cb2d30 = puVar4;
                _DAT_143cb2d38 = pcVar8;
                _DAT_143cb2d40 = puStack_e0;
                _DAT_143cb2d48 = pcStack_e8;
                _DAT_143cb2d50 = puVar5;
                _DAT_143cb2d58 = pcStack_130;
                _DAT_143cb2d60 = uStack_d8;
                _DAT_143cb2d68 = lStack_d0;
                _DAT_143cb2d70 = puStack_120;
                _DAT_143cb2d78 = pcStack_128;
                _DAT_143cb2d80 = puVar6;
                _DAT_143cb2d88 = pcStack_118;
                _DAT_143cb2d90 = pcStack_58;
                _DAT_143cb2d98 = uStack_110;
                if (bVar11) {
                  if (puStack_108 != (undefined8 *)0x0) {
                    pub_1406abac0((byte *)pcStack_60,(ulonglong)puStack_108,1);
                  }
                  return (code *)0x0;
                }
                    /* WARNING: Subroutine does not return */
                pdb_142dc83d0(&UNK_1431f2a58,0x51,&UNK_1431f2a80);
              }
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(8,0x20);
            }
            uStack_140 = uStack_190;
            uStack_4a = 1;
            pdb_140f3f5b0(&uStack_98);
            uStack_a8 = uStack_78;
            uStack_a4 = uStack_74;
            uStack_a0 = uStack_70;
            uStack_9c = uStack_6c;
            uStack_b8 = (undefined4)uStack_88;
            uStack_b4 = uStack_88._4_4_;
            uStack_b0 = uStack_80;
            uStack_ac = uStack_7c;
            puStack_c8 = uStack_98;
            pcStack_c0 = uStack_90;
            uStack_98 = (undefined8 *)&UNK_1431f2a0c;
            uStack_90 = (code *)0xd;
            uStack_88 = uStack_190;
            uStack_4a = 0;
            pcVar9 = (code *)pdb_142dffc90(&uStack_98,&puStack_c8);
            arg0 = pcStack_60;
          }
          goto LAB_140dc6c7d;
        }
      }
      arg1 = CONCAT44(uStack_15c,uStack_160);
      pcVar9 = pcStack_c0;
      arg0 = pcStack_60;
    }
  }
  pcStack_c0 = pcVar9;
  pcStack_60 = arg0;
  if (arg1 != 0) {
    pub_1406abac0((byte *)pcStack_58,arg1,1);
  }
LAB_140dc6c7d:
  if (puStack_108 != (undefined8 *)0x0) {
    pub_1406abac0((byte *)arg0,(ulonglong)puStack_108,1);
  }
  return pcVar9;
}

