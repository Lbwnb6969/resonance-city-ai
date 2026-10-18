// VA 0x140caef60, PDB extent 4710 bytes
// tg_package_integrity::verify_package_manifest
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tg-package-integrity/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tg_package_integrity::verify_package_manifest
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tg-package-integrity/src/lib.rs
   Extent: 4710 */

longlong * pdb_140caef60(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  undefined1 (*pauVar29) [16];
  char cVar30;
  char cVar31;
  int iVar32;
  longlong *plVar33;
  ulonglong uVar34;
  undefined1 (*pauVar35) [16];
  undefined1 (*pauVar36) [16];
  longlong lVar37;
  undefined1 (*pauVar38) [16];
  uint uVar39;
  undefined1 (*unaff_R13) [16];
  code *arg1;
  undefined1 (*pauVar40) [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auStack_218 [32];
  undefined1 (*pauStack_1f8) [16];
  undefined1 (*pauStack_1f0) [16];
  undefined1 (*pauStack_1e8) [16];
  undefined1 (*pauStack_1e0) [16];
  undefined1 (*pauStack_1d8) [16];
  undefined1 (*pauStack_1d0) [16];
  undefined1 (*pauStack_1c8) [16];
  undefined1 (*pauStack_1c0) [16];
  undefined1 auStack_1b8 [16];
  longlong lStack_1a8;
  undefined1 (*pauStack_1a0) [16];
  undefined1 (**ppauStack_190) [16];
  undefined1 (*pauStack_188) [16];
  undefined1 (*pauStack_180) [16];
  undefined1 (**ppauStack_178) [16];
  undefined1 (*pauStack_170) [16];
  undefined8 uStack_168;
  undefined1 (*pauStack_160) [16];
  undefined1 (*pauStack_158) [16];
  undefined1 (*pauStack_150) [16];
  undefined1 (*pauStack_148) [16];
  undefined1 (*pauStack_140) [16];
  undefined1 (*pauStack_138) [16];
  undefined1 (*pauStack_130) [16];
  longlong lStack_128;
  longlong lStack_120;
  undefined1 (*pauStack_110) [16];
  longlong lStack_108;
  undefined1 (*pauStack_100) [16];
  undefined1 (*pauStack_f8) [16];
  undefined1 (*pauStack_f0) [16];
  undefined1 (*pauStack_e8) [16];
  undefined1 (*pauStack_e0) [16];
  longlong lStack_d8;
  undefined1 (*pauStack_d0) [16];
  undefined1 (*pauStack_c8) [16];
  undefined1 (*pauStack_c0) [16];
  longlong lStack_b8;
  undefined1 (*pauStack_b0) [16];
  undefined1 (*pauStack_a8) [16];
  undefined1 (*pauStack_a0) [16];
  longlong lStack_98;
  undefined1 (*pauStack_90) [16];
  undefined1 (*pauStack_88) [16];
  undefined1 (*pauStack_80) [16];
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  pdb_140f3e9e0(&pauStack_f8,&UNK_1430785f0,1,&UNK_1430785d8,0x18);
  pauStack_80 = pauStack_f0;
  pdb_140f55fb0(&pauStack_138,pauStack_f0,pauStack_e8);
  if (pauStack_f8 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_80,(ulonglong)pauStack_f8,1);
  }
  lVar37 = lStack_128;
  if (SBORROW8(0,(longlong)pauStack_138)) {
    pauStack_1e8 = pauStack_130;
    pauStack_1c8 = (undefined1 (*) [16])0x0;
    pauStack_1c0 = (undefined1 (*) [16])0x1;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auStack_1b8._8_8_;
    auStack_1b8 = auVar2 << 0x40;
    pauStack_e8 = (undefined1 (*) [16])0x60000020;
    pauStack_f0 = (undefined1 (*) [16])&UNK_143078610;
    pauStack_f8 = (undefined1 (*) [16])&pauStack_1c8;
    cVar30 = pdb_140f59780(&pauStack_1e8,&pauStack_f8);
    pauVar38 = pauStack_1c0;
    pauVar35 = pauStack_1c8;
    if (cVar30 == '\0') {
      uVar1 = auStack_1b8._0_8_;
      pdb_1404b38e0(&pauStack_1e8);
      param_1[1] = (longlong)pauVar35;
      param_1[2] = (longlong)pauVar38;
      param_1[3] = uVar1;
      *param_1 = -0x7fffffffffffffff;
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143078640,0x37,&uStack_71,&UNK_143078700,&UNK_1430786e8);
  }
  pauStack_80 = pauStack_138;
  pauStack_148 = pauStack_130;
  pdb_140faf160(auStack_218,pauStack_130,lStack_128);
  pauStack_f8 = (undefined1 (*) [16])0xf52dad71b327e45a;
  pdb_141cb37c0(auStack_218,&pauStack_f8);
  if ((short)pauStack_f8 != 0) {
    *param_1 = -0x8000000000000000;
    goto LAB_140caf983;
  }
  pauVar35 = pauStack_148;
  pdb_141cb3970(&pauStack_f8,pauStack_148,lVar37);
  pauVar36 = pauStack_e8;
  pauVar38 = pauStack_f0;
  if (SBORROW8(0,(longlong)pauStack_f8)) {
    pauStack_110 = pauStack_f0;
    pauStack_a8 = (undefined1 (*) [16])0x0;
    pauStack_a0 = (undefined1 (*) [16])0x1;
    lStack_98 = 0;
    uStack_168 = 0x60000020;
    ppauStack_178 = &pauStack_a8;
    pauStack_170 = (undefined1 (*) [16])&UNK_143078610;
    cVar30 = pdb_140de07e0(&pauStack_110,&ppauStack_178);
    if (cVar30 != '\0') {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143078640,0x37,&uStack_71,&UNK_143078700,&UNK_1430786e8);
    }
    auStack_1b8._0_8_ = lStack_98;
    pauStack_1c8 = pauStack_a8;
    pauStack_1c0 = pauStack_a0;
    pauStack_90 = pauVar38;
    if (*(longlong *)*pauVar38 == 1) {
      pdb_1404b38e0(*pauVar38 + 8);
    }
    else if ((*(longlong *)*pauVar38 == 0) && (*(ulonglong *)pauVar38[1] != 0)) {
      pub_1406abac0(*(byte **)(*pauVar38 + 8),*(ulonglong *)pauVar38[1],1);
    }
    pub_1406abac0((byte *)pauStack_90,0x28,8);
    lStack_128 = auStack_1b8._0_8_;
    lStack_120 = auStack_1b8._8_8_;
    pauStack_138 = pauStack_1c8;
    pauStack_130 = pauStack_1c0;
    param_1[3] = auStack_1b8._0_8_;
    param_1[4] = auStack_1b8._8_8_;
    param_1[1] = (longlong)pauStack_1c8;
    param_1[2] = (longlong)pauStack_1c0;
    *param_1 = -0x7ffffffffffffffe;
    goto LAB_140caf983;
  }
  pauStack_1d8 = pauStack_e8;
  pauStack_1d0 = pauStack_e0;
  pauVar38 = pauStack_1d0;
  pauStack_1e8 = pauStack_f8;
  pauStack_1e0 = pauStack_f0;
  pauStack_1d0._0_4_ = (int)pauStack_e0;
  if ((int)pauStack_1d0 == 1) {
    pauStack_140 = pauStack_f0;
    pauStack_1d0 = pauVar38;
    plVar33 = (longlong *)pdb_140f3bda0();
    if ((char)plVar33[2] == '\x01') {
      lStack_d8 = *plVar33;
      pauVar35 = (undefined1 (*) [16])plVar33[1];
    }
    else {
      lStack_d8 = pdb_140f4fd10();
      *plVar33 = lStack_d8;
      plVar33[1] = (longlong)pauVar35;
      *(undefined1 *)(plVar33 + 2) = 1;
    }
    *plVar33 = lStack_d8 + 1;
    pauStack_e8 = (undefined1 (*) [16])_DAT_143078550;
    pauStack_e0 = _UNK_143078558;
    pauStack_f8 = _DAT_143078540;
    pauStack_f0 = _UNK_143078548;
    pauStack_d0 = pauVar35;
    if (pauVar36 != (undefined1 (*) [16])0x0) {
      pdb_142df4c30(&pauStack_f8,pauVar36,&lStack_d8,1);
      pauVar35 = (undefined1 (*) [16])0x0;
      do {
        pdb_140f60be0(&pauStack_138,pauStack_140 + (longlong)pauVar35 * 3);
        pdb_141cb6d80(&pauStack_f8,&pauStack_138);
        pauVar35 = (undefined1 (*) [16])(*pauVar35 + 1);
      } while (pauVar35 != pauVar36);
    }
    cVar28 = UNK_14307851f;
    cVar27 = UNK_14307851e;
    cVar26 = UNK_14307851d;
    cVar25 = UNK_14307851c;
    cVar24 = UNK_14307851b;
    cVar23 = UNK_14307851a;
    cVar22 = UNK_143078519;
    cVar21 = UNK_143078518;
    cVar20 = UNK_143078517;
    cVar19 = UNK_143078516;
    cVar18 = UNK_143078515;
    cVar17 = UNK_143078514;
    cVar16 = UNK_143078513;
    cVar15 = UNK_143078512;
    cVar14 = UNK_143078511;
    cVar13 = DAT_143078510;
    cVar12 = UNK_143078507;
    cVar11 = UNK_143078506;
    cVar10 = UNK_143078505;
    cVar9 = UNK_143078504;
    cVar8 = UNK_143078503;
    cVar7 = UNK_143078502;
    cVar6 = UNK_143078501;
    cVar30 = DAT_143078500;
    auStack_1b8._8_8_ = pauStack_e0;
    auStack_1b8._0_8_ = pauStack_e8;
    lStack_1a8 = lStack_d8;
    pauStack_1a0 = pauStack_d0;
    pauStack_1c8 = pauStack_f8;
    pauStack_1c0 = pauStack_f0;
    pauStack_160 = (undefined1 (*) [16])0x0;
    pauStack_158 = (undefined1 (*) [16])0x8;
    pauStack_150 = (undefined1 (*) [16])0x0;
    pauStack_110 = (undefined1 (*) [16])0x0;
    lStack_108 = 8;
    pauStack_100 = (undefined1 (*) [16])0x0;
    pauVar38 = pauStack_140 + (longlong)pauVar36 * 3;
    pauVar35 = pauStack_140;
LAB_140caf310:
    pauVar40 = pauVar35;
    pauVar35 = pauVar40 + 3;
    if (pauVar40 != pauVar38) {
      pcVar3 = *(char **)(*pauVar40 + 8);
      pauStack_1f8 = pauVar40;
      if (*(longlong *)pauVar40[1] == 0x18) goto code_r0x000140caf333;
      goto LAB_140caf356;
    }
    pauStack_138 = (undefined1 (*) [16])0x0;
    pauStack_130 = (undefined1 (*) [16])0x8;
    lStack_128 = 0;
    pauStack_f8 = (undefined1 (*) [16])0x0;
    pauStack_f0 = (undefined1 (*) [16])0x1;
    pauStack_e8 = (undefined1 (*) [16])0x0;
    pdb_141cb55e0(&UNK_1430785f0,1,&pauStack_f8,(undefined1 (*) [16])&pauStack_1c8,&pauStack_138);
    pauVar35 = pauStack_1c0;
    if (((pauStack_150 == (undefined1 (*) [16])0x0) && (pauStack_100 == (undefined1 (*) [16])0x0))
       && (lStack_128 == 0)) {
      *param_1 = -0x7ffffffffffffffc;
      pdb_1404ca240(&pauStack_138);
      pdb_1404ca240(&pauStack_110);
      pdb_1404ca240(&pauStack_160);
      pdb_140989d00((undefined1 (*) [16])&pauStack_1c8);
      pauVar35 = pauStack_140;
      goto joined_r0x000140caf636;
    }
    pauStack_e8 = pauStack_150;
    pauStack_f8 = pauStack_160;
    pauStack_f0 = pauStack_158;
    pauStack_d0 = pauStack_100;
    pauStack_e0 = pauStack_110;
    lStack_d8 = lStack_108;
    pauStack_c8 = pauStack_138;
    pauStack_c0 = pauStack_130;
    lStack_b8 = lStack_128;
    param_1[8] = lStack_128;
    param_1[6] = (longlong)pauStack_138;
    param_1[7] = (longlong)pauStack_130;
    *param_1 = (longlong)pauStack_160;
    param_1[1] = (longlong)pauStack_158;
    param_1[4] = lStack_108;
    param_1[5] = (longlong)pauStack_100;
    param_1[2] = (longlong)pauStack_150;
    param_1[3] = (longlong)pauStack_110;
    if (pauStack_1c0 != (undefined1 (*) [16])0x0) {
      if (auStack_1b8._8_8_ != 0) {
        auVar2 = *pauStack_1c8;
        pauVar38 = pauStack_1c8 + 1;
        uVar39 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
        lVar37 = auStack_1b8._8_8_;
        pauVar40 = pauStack_1c8;
        do {
          if ((short)uVar39 == 0) {
            do {
              auVar2 = *pauVar38;
              pauVar40 = pauVar40 + -0x18;
              pauVar38 = pauVar38 + 1;
              uVar39 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar39 == 0);
          }
          uVar4 = 0;
          for (uVar5 = uVar39; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          uVar34 = *(ulonglong *)((longlong)pauVar40 + (ulonglong)uVar4 * -0x18 + -0x18);
          if (uVar34 != 0) {
            pub_1406abac0(*(byte **)((longlong)pauVar40 + (ulonglong)uVar4 * -0x18 + -0x10),uVar34,1
                         );
          }
          uVar39 = uVar39 - 1 & uVar39;
          lVar37 = lVar37 + -1;
        } while (lVar37 != 0);
      }
      uVar34 = (longlong)pauVar35 * 0x18 + 0x27U & 0xfffffffffffffff0;
      arg1 = (code *)(pauVar35[1] + uVar34 + 1);
      if (arg1 != (code *)0x0) {
        pub_1406abac0((byte *)((longlong)pauStack_1c8 - uVar34),(ulonglong)arg1,0x10);
      }
    }
    pauVar35 = pauStack_140;
    if (pauVar36 != (undefined1 (*) [16])0x0) {
      pauVar38 = pauStack_140 + 2;
      do {
        if (*(ulonglong *)pauVar38[-2] != 0) {
          pub_1406abac0(*(byte **)(pauVar38[-2] + 8),*(ulonglong *)pauVar38[-2],1);
        }
        if (*(ulonglong *)(pauVar38[-1] + 8) != 0) {
          pub_1406abac0(*(byte **)*pauVar38,*(ulonglong *)(pauVar38[-1] + 8),1);
        }
        pauVar38 = pauVar38 + 3;
        pauVar36 = (undefined1 (*) [16])(pauVar36[-1] + 0xf);
      } while (pauVar36 != (undefined1 (*) [16])0x0);
    }
  }
  else {
    *param_1 = -0x7ffffffffffffffd;
    *(int *)(param_1 + 1) = (int)pauStack_1d0;
    pauVar35 = pauStack_f0;
joined_r0x000140caf636:
    if (pauVar36 != (undefined1 (*) [16])0x0) {
      pauVar38 = pauVar35 + 2;
      do {
        if (*(ulonglong *)pauVar38[-2] != 0) {
          pub_1406abac0(*(byte **)(pauVar38[-2] + 8),*(ulonglong *)pauVar38[-2],1);
        }
        if (*(ulonglong *)(pauVar38[-1] + 8) != 0) {
          pub_1406abac0(*(byte **)*pauVar38,*(ulonglong *)(pauVar38[-1] + 8),1);
        }
        pauVar38 = pauVar38 + 3;
        pauVar36 = (undefined1 (*) [16])(pauVar36[-1] + 0xf);
      } while (pauVar36 != (undefined1 (*) [16])0x0);
    }
  }
  if (pauStack_1e8 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauVar35,(longlong)pauStack_1e8 * 0x30,8);
  }
LAB_140caf983:
  if (pauStack_80 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_148,(ulonglong)pauStack_80,1);
  }
  return param_1;
code_r0x000140caf333:
  auVar41[0] = -(*pcVar3 == cVar13);
  auVar41[1] = -(pcVar3[1] == cVar14);
  auVar41[2] = -(pcVar3[2] == cVar15);
  auVar41[3] = -(pcVar3[3] == cVar16);
  auVar41[4] = -(pcVar3[4] == cVar17);
  auVar41[5] = -(pcVar3[5] == cVar18);
  auVar41[6] = -(pcVar3[6] == cVar19);
  auVar41[7] = -(pcVar3[7] == cVar20);
  auVar41[8] = -(pcVar3[8] == cVar21);
  auVar41[9] = -(pcVar3[9] == cVar22);
  auVar41[10] = -(pcVar3[10] == cVar23);
  auVar41[0xb] = -(pcVar3[0xb] == cVar24);
  auVar41[0xc] = -(pcVar3[0xc] == cVar25);
  auVar41[0xd] = -(pcVar3[0xd] == cVar26);
  auVar41[0xe] = -(pcVar3[0xe] == cVar27);
  auVar41[0xf] = -(pcVar3[0xf] == cVar28);
  uVar1 = *(undefined8 *)(pcVar3 + 0x10);
  auVar42[0] = -((char)uVar1 == cVar30);
  auVar42[1] = -((char)((ulonglong)uVar1 >> 8) == cVar6);
  auVar42[2] = -((char)((ulonglong)uVar1 >> 0x10) == cVar7);
  auVar42[3] = -((char)((ulonglong)uVar1 >> 0x18) == cVar8);
  auVar42[4] = -((char)((ulonglong)uVar1 >> 0x20) == cVar9);
  auVar42[5] = -((char)((ulonglong)uVar1 >> 0x28) == cVar10);
  auVar42[6] = -((char)((ulonglong)uVar1 >> 0x30) == cVar11);
  auVar42[7] = -((char)((ulonglong)uVar1 >> 0x38) == cVar12);
  auVar42[8] = 0xff;
  auVar42[9] = 0xff;
  auVar42[10] = 0xff;
  auVar42[0xb] = 0xff;
  auVar42[0xc] = 0xff;
  auVar42[0xd] = 0xff;
  auVar42[0xe] = 0xff;
  auVar42[0xf] = 0xff;
  auVar42 = auVar42 & auVar41;
  if ((ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) | (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar42 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar42 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar42 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar42 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar42 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar42 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar42 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar42 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar42 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar42 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar42 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar42 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar42 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar42[0xf] >> 7) << 0xf) != 0xffff) {
LAB_140caf356:
    pdb_140f3e9e0(&pauStack_138,&UNK_1430785f0,1,pcVar3,*(longlong *)pauVar40[1]);
    pauStack_90 = pauStack_130;
    pdb_140f55fb0(&ppauStack_178,pauStack_130,lStack_128);
    ppauStack_190 = ppauStack_178;
    if (SBORROW8(0,(longlong)ppauStack_178)) {
      pauStack_a8 = pauStack_170;
      pauStack_f8 = (undefined1 (*) [16])&pauStack_1f8;
      pauStack_f0 = (undefined1 (*) [16])pdb_140493e10;
      pauStack_e8 = (undefined1 (*) [16])&pauStack_a8;
      pauStack_e0 = (undefined1 (*) [16])pdb_140f56800;
      pdb_140f4e8b0(&UNK_1430785f1,&pauStack_f8);
      pdb_140f60be0(&pauStack_f8,pauVar40);
      unaff_R13 = pauStack_e8;
      pauStack_88 = pauStack_f8;
      pauStack_b0 = pauStack_f0;
      pdb_1404b38e0(&pauStack_a8);
      iVar32 = 1;
    }
    else {
      pauStack_1f0 = pauStack_170;
      pdb_140faf160(&pauStack_f8,pauStack_170,uStack_168);
      pauStack_a8 = (undefined1 (*) [16])0x0;
      pauStack_a0 = (undefined1 (*) [16])0x1;
      lStack_98 = 0;
      uStack_168 = 0x60000020;
      ppauStack_178 = &pauStack_a8;
      pauStack_170 = (undefined1 (*) [16])&UNK_143078610;
      cVar31 = pdb_140fae350(&pauStack_f8,&ppauStack_178);
      if (cVar31 != '\0') {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143078640,0x37,&uStack_71,&UNK_143078700,&UNK_1430786e8);
      }
      pauStack_180 = pauStack_a8;
      pauStack_188 = pauStack_a0;
      if ((*(longlong *)(pauVar40[2] + 8) == lStack_98) &&
         (iVar32 = pub_142e32750(*(undefined8 *)pauVar40[2],pauStack_a0), iVar32 == 0)) {
        iVar32 = 0;
      }
      else {
        pdb_140f60be0(&pauStack_f8,pauVar40);
        iVar32 = 2;
        pauStack_88 = pauStack_f8;
        pauStack_b0 = pauStack_f0;
        unaff_R13 = pauStack_e8;
      }
      if (pauStack_180 != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)pauStack_188,(ulonglong)pauStack_180,1);
      }
      if (ppauStack_190 != (undefined1 (**) [16])0x0) {
        pub_1406abac0((byte *)pauStack_1f0,(ulonglong)ppauStack_190,1);
      }
    }
    if (pauStack_138 != (undefined1 (*) [16])0x0) {
      pub_1406abac0((byte *)pauStack_90,(ulonglong)pauStack_138,1);
    }
    pauVar29 = pauStack_100;
    pauVar40 = pauStack_150;
    if (iVar32 != 0) {
      if (iVar32 == 1) {
        if (pauStack_150 == pauStack_160) {
          pdb_142d7e830(&pauStack_160);
        }
        *(undefined1 (**) [16])((longlong)pauStack_158 + (longlong)pauVar40 * 0x18) = pauStack_88;
        *(undefined1 (**) [16])((longlong)pauStack_158 + (longlong)pauVar40 * 0x18 + 8) =
             pauStack_b0;
        *(undefined1 (**) [16])((longlong)pauStack_158 + (longlong)pauVar40 * 0x18 + 0x10) =
             unaff_R13;
        pauStack_150 = (undefined1 (*) [16])(*pauVar40 + 1);
      }
      else {
        if (pauStack_100 == pauStack_110) {
          pdb_142d7e830(&pauStack_110);
        }
        *(undefined1 (**) [16])(lStack_108 + (longlong)pauVar29 * 0x18) = pauStack_88;
        *(undefined1 (**) [16])(lStack_108 + 8 + (longlong)pauVar29 * 0x18) = pauStack_b0;
        *(undefined1 (**) [16])(lStack_108 + 0x10 + (longlong)pauVar29 * 0x18) = unaff_R13;
        pauStack_100 = (undefined1 (*) [16])(*pauVar29 + 1);
      }
    }
  }
  goto LAB_140caf310;
}

