// VA 0x140470cf0, PDB extent 1660 bytes
// tiny_glade::panic_reporter::reverse_backtrace::impl$0::fmt
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/reverse_backtrace.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::panic_reporter::reverse_backtrace::impl$0::fmt
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/reverse_backtrace.rs
   Extent: 1660 */

undefined8 pdb_140470cf0(longlong *param_1,ulonglong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  char cVar53;
  undefined8 *puVar54;
  ulonglong uVar55;
  undefined8 *puVar56;
  longlong lVar57;
  longlong lVar58;
  longlong lVar59;
  longlong lVar60;
  bool bVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  ulonglong *puStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 uStack_1a8;
  ulonglong uStack_1a0;
  byte *pbStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulonglong *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 uStack_138;
  ulonglong uStack_130;
  ulonglong *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  longlong lStack_108;
  ulonglong uStack_100;
  longlong lStack_f8;
  ulonglong uStack_f0;
  ulonglong uStack_e8;
  byte *pbStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulonglong uStack_c8;
  byte *pbStack_c0;
  ulonglong uStack_b8;
  undefined1 auStack_b0 [8];
  longlong lStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  undefined1 uStack_81;
  undefined8 uStack_80;
  
  uStack_80 = 0xfffffffffffffffe;
  pdb_140f4c140(&uStack_1a0);
  uStack_d8 = uStack_190;
  uStack_d0 = uStack_188;
  uStack_e8 = uStack_1a0;
  pbStack_e0 = pbStack_198;
  pdb_1400e7bd0(auStack_b0,*(undefined8 *)(*param_1 + 8),*(undefined8 *)(*param_1 + 0x10));
  uVar55 = uStack_a0 >> 1;
  if (uVar55 != 0) {
    puVar56 = (undefined8 *)(uStack_a0 * 0x40 + lStack_a8 + -0x10);
    puVar54 = (undefined8 *)(lStack_a8 + 0x30);
    do {
      uVar2 = puVar54[-6];
      uVar3 = puVar54[-5];
      uVar4 = puVar56[-5];
      puVar54[-6] = puVar56[-6];
      puVar54[-5] = uVar4;
      puVar56[-6] = uVar2;
      puVar56[-5] = uVar3;
      uVar2 = puVar54[-4];
      uVar3 = puVar54[-3];
      uVar4 = puVar56[-3];
      puVar54[-4] = puVar56[-4];
      puVar54[-3] = uVar4;
      puVar56[-4] = uVar2;
      puVar56[-3] = uVar3;
      uVar2 = puVar54[-2];
      uVar3 = puVar54[-1];
      uVar4 = puVar56[-1];
      puVar54[-2] = puVar56[-2];
      puVar54[-1] = uVar4;
      puVar56[-2] = uVar2;
      puVar56[-1] = uVar3;
      uVar2 = *puVar54;
      uVar3 = puVar54[1];
      uVar4 = puVar56[1];
      *puVar54 = *puVar56;
      puVar54[1] = uVar4;
      *puVar56 = uVar2;
      puVar56[1] = uVar3;
      puVar54 = puVar54 + 8;
      puVar56 = puVar56 + -8;
      uVar55 = uVar55 - 1;
    } while (uVar55 != 0);
  }
  bVar52 = UNK_142f5b52f;
  bVar51 = UNK_142f5b52e;
  bVar50 = UNK_142f5b52d;
  bVar49 = UNK_142f5b52c;
  bVar48 = UNK_142f5b52b;
  bVar47 = UNK_142f5b52a;
  bVar46 = UNK_142f5b529;
  bVar45 = UNK_142f5b528;
  bVar44 = UNK_142f5b527;
  bVar43 = UNK_142f5b526;
  bVar42 = UNK_142f5b525;
  bVar41 = UNK_142f5b524;
  bVar40 = UNK_142f5b523;
  bVar39 = UNK_142f5b522;
  bVar38 = UNK_142f5b521;
  bVar37 = DAT_142f5b520;
  bVar36 = UNK_142f5b51f;
  bVar35 = UNK_142f5b51e;
  bVar34 = UNK_142f5b51d;
  bVar33 = UNK_142f5b51c;
  bVar32 = UNK_142f5b51b;
  bVar31 = UNK_142f5b51a;
  bVar30 = UNK_142f5b519;
  bVar29 = UNK_142f5b518;
  bVar28 = UNK_142f5b517;
  bVar27 = UNK_142f5b516;
  bVar26 = UNK_142f5b515;
  bVar25 = UNK_142f5b514;
  bVar24 = UNK_142f5b513;
  bVar23 = UNK_142f5b512;
  bVar22 = UNK_142f5b511;
  bVar21 = DAT_142f5b510;
  bVar20 = UNK_142f5b50f;
  bVar19 = UNK_142f5b50e;
  bVar18 = UNK_142f5b50d;
  bVar17 = UNK_142f5b50c;
  bVar16 = UNK_142f5b50b;
  bVar15 = UNK_142f5b50a;
  bVar14 = UNK_142f5b509;
  bVar13 = UNK_142f5b508;
  bVar12 = UNK_142f5b507;
  bVar11 = UNK_142f5b506;
  bVar10 = UNK_142f5b505;
  bVar9 = UNK_142f5b504;
  bVar8 = UNK_142f5b503;
  bVar7 = UNK_142f5b502;
  bVar6 = UNK_142f5b501;
  bVar5 = DAT_142f5b500;
  uStack_118 = 0;
  uStack_110 = 0;
  puStack_128 = &uStack_e8;
  puStack_120 = &UNK_142f5b550;
  uStack_f0 = uStack_a0;
  lStack_f8 = uStack_a0 * 0x40 + lStack_a8;
  uStack_90 = 0;
  lVar57 = lStack_a8;
  uVar55 = 0;
  uStack_130 = param_2;
  do {
    if (lVar57 == lStack_f8) {
      uVar55 = uStack_f0;
      if (uStack_90 <= uStack_f0) {
LAB_14047107e:
        if (uVar55 <= uStack_a0) {
          if (uStack_90 != uVar55) {
            lVar57 = lStack_a8 + uStack_90 * 0x40;
            lVar60 = uVar55 * 0x40 + uStack_90 * -0x40;
            do {
              puStack_178 = (undefined *)0x0;
              puStack_180 = &uStack_130;
              cVar53 = pdb_140e9cc70(&puStack_180,lVar57);
              puStack_180[3] = puStack_180[3] + 1;
              if (cVar53 != '\0') {
                pdb_1404b83f0(auStack_b0);
                if (SBORROW8(0,uStack_e8)) {
                  pdb_1404b38e0(&pbStack_e0);
                  return 1;
                }
                if (uStack_e8 == 0) {
                  return 1;
                }
                pub_1406abac0(pbStack_e0,uStack_e8,1);
                return 1;
              }
              lVar57 = lVar57 + 0x40;
              lVar60 = lVar60 + -0x40;
            } while (lVar60 != 0);
          }
          pdb_1404b83f0(auStack_b0);
          if (SBORROW8(0,uStack_e8)) {
            pdb_1404b38e0(&pbStack_e0);
          }
          else if (uStack_e8 != 0) {
            pub_1406abac0(pbStack_e0,uStack_e8,1);
          }
          return 0;
        }
      }
LAB_1404711c3:
      pdb_142dc8420(uStack_90,uVar55,uStack_a0,&UNK_142f5b5b8);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lStack_108 = lVar57 + 0x40;
    uStack_100 = uVar55 + 1;
    bVar61 = SBORROW8(0,*(longlong *)(lVar57 + 0x28));
    lVar60 = *(longlong *)(lVar57 + 0x38);
    if (bVar61) {
      lVar60 = 0;
    }
    lVar58 = *(longlong *)(lVar57 + 0x30);
    if (bVar61) {
      lVar58 = 8;
    }
    lVar57 = lVar58;
    uStack_98 = uVar55;
    while (lVar59 = lVar57, lVar57 = lStack_108, uVar55 = uStack_100,
          lVar59 != lVar60 * 0x58 + lVar58) {
      pdb_140e9b3f0(&puStack_180,lVar59);
      if (puStack_180 == (ulonglong *)0x3) {
        lVar57 = lVar59 + 0x58;
      }
      else {
        uStack_1a8 = uStack_138;
        uStack_1b8 = uStack_148;
        uStack_1b4 = uStack_144;
        uStack_1b0 = uStack_140;
        uStack_1ac = uStack_13c;
        uStack_1c8 = uStack_158;
        uStack_1c4 = uStack_154;
        uStack_1c0 = uStack_150;
        uStack_1bc = uStack_14c;
        uStack_1d8 = uStack_168;
        uStack_1d0 = uStack_160;
        puStack_1e8 = puStack_178;
        uStack_1e0 = uStack_170;
        puStack_1f0 = puStack_180;
        uStack_c8 = 0;
        pbStack_c0 = (byte *)0x1;
        uStack_b8 = 0;
        uStack_170 = 0x60000020;
        puStack_180 = &uStack_c8;
        puStack_178 = &UNK_142e3a758;
        cVar53 = pdb_140e9bee0(&puStack_1f0,&puStack_180);
        if (cVar53 != '\0') {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_142e3a788,0x37,&uStack_81,&UNK_142e3a868,&UNK_142e3a830);
        }
        lVar57 = lVar59 + 0x58;
        if (!SBORROW8(0,uStack_c8)) {
          if (uStack_b8 < 0x16) {
            if (0xf < uStack_b8) goto LAB_140470fea;
          }
          else {
            auVar62[0] = -(*pbStack_c0 == bVar21);
            auVar62[1] = -(pbStack_c0[1] == bVar22);
            auVar62[2] = -(pbStack_c0[2] == bVar23);
            auVar62[3] = -(pbStack_c0[3] == bVar24);
            auVar62[4] = -(pbStack_c0[4] == bVar25);
            auVar62[5] = -(pbStack_c0[5] == bVar26);
            auVar62[6] = -(pbStack_c0[6] == bVar27);
            auVar62[7] = -(pbStack_c0[7] == bVar28);
            auVar62[8] = -(pbStack_c0[8] == bVar29);
            auVar62[9] = -(pbStack_c0[9] == bVar30);
            auVar62[10] = -(pbStack_c0[10] == bVar31);
            auVar62[0xb] = -(pbStack_c0[0xb] == bVar32);
            auVar62[0xc] = -(pbStack_c0[0xc] == bVar33);
            auVar62[0xd] = -(pbStack_c0[0xd] == bVar34);
            auVar62[0xe] = -(pbStack_c0[0xe] == bVar35);
            auVar62[0xf] = -(pbStack_c0[0xf] == bVar36);
            auVar64[0] = -(pbStack_c0[6] == bVar5);
            auVar64[1] = -(pbStack_c0[7] == bVar6);
            auVar64[2] = -(pbStack_c0[8] == bVar7);
            auVar64[3] = -(pbStack_c0[9] == bVar8);
            auVar64[4] = -(pbStack_c0[10] == bVar9);
            auVar64[5] = -(pbStack_c0[0xb] == bVar10);
            auVar64[6] = -(pbStack_c0[0xc] == bVar11);
            auVar64[7] = -(pbStack_c0[0xd] == bVar12);
            auVar64[8] = -(pbStack_c0[0xe] == bVar13);
            auVar64[9] = -(pbStack_c0[0xf] == bVar14);
            auVar64[10] = -(pbStack_c0[0x10] == bVar15);
            auVar64[0xb] = -(pbStack_c0[0x11] == bVar16);
            auVar64[0xc] = -(pbStack_c0[0x12] == bVar17);
            auVar64[0xd] = -(pbStack_c0[0x13] == bVar18);
            auVar64[0xe] = -(pbStack_c0[0x14] == bVar19);
            auVar64[0xf] = -(pbStack_c0[0x15] == bVar20);
            auVar64 = auVar64 & auVar62;
            if ((ushort)((ushort)(SUB161(auVar64 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar64 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar64 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar64 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar64 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar64 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar64 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar64 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar64 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar64 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar64 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar64 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar64 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar64[0xf] >> 7) << 0xf) == 0xffff) {
              if (uStack_c8 != 0) {
                pub_1406abac0(pbStack_c0,uStack_c8,1);
              }
              uVar55 = uStack_98;
              if (uStack_98 < uStack_90) goto LAB_1404711c3;
              goto LAB_14047107e;
            }
LAB_140470fea:
            auVar63[0] = -(*pbStack_c0 == bVar37);
            auVar63[1] = -(pbStack_c0[1] == bVar38);
            auVar63[2] = -(pbStack_c0[2] == bVar39);
            auVar63[3] = -(pbStack_c0[3] == bVar40);
            auVar63[4] = -(pbStack_c0[4] == bVar41);
            auVar63[5] = -(pbStack_c0[5] == bVar42);
            auVar63[6] = -(pbStack_c0[6] == bVar43);
            auVar63[7] = -(pbStack_c0[7] == bVar44);
            auVar63[8] = -(pbStack_c0[8] == bVar45);
            auVar63[9] = -(pbStack_c0[9] == bVar46);
            auVar63[10] = -(pbStack_c0[10] == bVar47);
            auVar63[0xb] = -(pbStack_c0[0xb] == bVar48);
            auVar63[0xc] = -(pbStack_c0[0xc] == bVar49);
            auVar63[0xd] = -(pbStack_c0[0xd] == bVar50);
            auVar63[0xe] = -(pbStack_c0[0xe] == bVar51);
            auVar63[0xf] = -(pbStack_c0[0xf] == bVar52);
            if ((ushort)((ushort)(SUB161(auVar63 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar63 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar63 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar63 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar63 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar63 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar63 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar63 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar63 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar63 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar63 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar63 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar63 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar63[0xf] >> 7) << 0xf) == 0xffff) {
              uStack_90 = uStack_98;
            }
          }
          lVar57 = lVar59 + 0x58;
          if (uStack_c8 != 0) {
            pub_1406abac0(pbStack_c0,uStack_c8,1);
          }
        }
      }
    }
  } while( true );
}

