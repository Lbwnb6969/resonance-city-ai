// VA 0x1417043b0, PDB extent 2169 bytes
// country_core::startup::load_glade_grading::load_glade_grading
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_glade_grading.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::load_glade_grading::load_glade_grading
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_glade_grading.rs
   Extent: 2169 */

void pdb_1417043b0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  char *pcVar2;
  ulonglong *puVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  code *pcVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  byte *pbVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined1 uVar17;
  longlong lVar18;
  ulonglong *puVar19;
  undefined4 *puVar20;
  ulonglong uStack_148;
  byte *pbStack_140;
  undefined8 uStack_138;
  ulonglong uStack_128;
  byte *pbStack_120;
  undefined8 uStack_118;
  byte *pbStack_110;
  longlong lStack_108;
  ulonglong *puStack_100;
  byte *pbStack_f8;
  byte *pbStack_f0;
  ulonglong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  byte *pbStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulonglong uStack_98;
  undefined4 uStack_90;
  undefined1 uStack_8c;
  undefined2 uStack_8b;
  undefined1 uStack_89;
  ulonglong uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  lStack_108 = *param_2;
  lVar14 = 0;
  do {
    if (*(longlong *)(lStack_108 + 0x10) == lVar14) {
      lVar14 = (ulonglong)*(byte *)(lStack_108 + 0x98) * 8;
      pdb_140f3e9e0(&uStack_148,&UNK_1430450c6,0xc,*(undefined8 *)(&UNK_143328778 + lVar14),
                    *(undefined8 *)(&UNK_143328750 + lVar14));
      pbStack_c0 = pbStack_140;
      pdb_140f3e9e0(&uStack_b8,pbStack_140,uStack_138,&UNK_14332708e,0xc);
      pdb_1416432f0(&uStack_128,&uStack_b8);
      if (SBORROW8(0,uStack_128)) {
        pdb_140f36c40(&pbStack_120);
        if (uStack_148 != 0) {
          pub_1406abac0(pbStack_c0,uStack_148,1);
        }
        pdb_14007ee60();
        pbStack_f0 = pub_1406abab0(7,1);
        if (pbStack_f0 == (byte *)0x0) goto LAB_141704a78;
        *(uint *)(pbStack_f0 + 3) = CONCAT31(_UNK_1430693cf,DAT_1430693ce);
        *(undefined4 *)pbStack_f0 = _DAT_1430693cb;
        uStack_d0 = uStack_d0 & 0xffffffffffffff00;
        pbStack_f8 = (byte *)0x7;
        uStack_e8 = 7;
        uStack_e0 = CONCAT44(_UNK_143020ea4,_DAT_143020ea0);
        uStack_d8 = CONCAT44(_UNK_143020eac,_UNK_143020ea8);
        uVar17 = 0;
      }
      else {
        puStack_100 = (ulonglong *)uStack_128;
        pbStack_110 = pbStack_120;
        pdb_1416507d0(&uStack_b8,pbStack_120,uStack_118);
        if (SBORROW8(0,(longlong)uStack_b8)) {
          pbStack_f8 = uStack_b0;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_143327518,0x2b,&pbStack_f8,&UNK_1433274f8,&UNK_1433270d0);
        }
        uStack_d0 = CONCAT17(uStack_89,CONCAT25(uStack_8b,CONCAT14(uStack_8c,uStack_90)));
        uStack_d8 = uStack_98;
        uStack_e8 = uStack_a8;
        uStack_e0 = uStack_a0;
        pbStack_f8 = uStack_b8;
        pbStack_f0 = uStack_b0;
        if (puStack_100 != (ulonglong *)0x0) {
          pub_1406abac0(pbStack_110,(ulonglong)puStack_100,1);
        }
        if (SBORROW8(0,uStack_128)) {
          pdb_140f36c40(&pbStack_120);
        }
        if (uStack_148 != 0) {
          pub_1406abac0(pbStack_c0,uStack_148,1);
        }
        uVar17 = (undefined1)uStack_d0;
      }
      uVar16 = *(undefined4 *)((longlong)param_1 + 0x1c);
      puVar20 = (undefined4 *)param_1[2];
      *puVar20 = uVar16;
      puVar19 = (ulonglong *)*param_1;
      pdb_140f60be0(&uStack_b8,&pbStack_f8);
      uStack_a0 = uStack_e0;
      uStack_98 = uStack_d8;
      uStack_90._0_1_ = uVar17;
      if (*puVar19 != 0) {
        pub_1406abac0((byte *)puVar19[1],*puVar19,1);
        uVar17 = (undefined1)uStack_d0;
      }
      puVar19[4] = uStack_98;
      *(undefined1 *)(puVar19 + 5) = (undefined1)uStack_90;
      *(uint *)((longlong)puVar19 + 0x29) = CONCAT13(uStack_8c,uStack_90._1_3_);
      *(undefined2 *)((longlong)puVar19 + 0x2d) = uStack_8b;
      *(undefined1 *)((longlong)puVar19 + 0x2f) = uStack_89;
      *(undefined4 *)(puVar19 + 2) = (undefined4)uStack_a8;
      *(undefined4 *)((longlong)puVar19 + 0x14) = uStack_a8._4_4_;
      *(undefined4 *)(puVar19 + 3) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)puVar19 + 0x1c) = uStack_a0._4_4_;
      *(undefined4 *)puVar19 = (undefined4)uStack_b8;
      *(undefined4 *)((longlong)puVar19 + 4) = uStack_b8._4_4_;
      *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_b0;
      *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_b0._4_4_;
      *(undefined8 *)((longlong)puVar19 + 0x36) = 0;
      puVar19[6] = 0;
      pdb_140f60be0(&uStack_b8,&pbStack_f8);
      uStack_a0 = uStack_e0;
      uStack_98 = uStack_d8;
      uVar6 = puVar19[8];
      uStack_90._0_1_ = uVar17;
      if (uVar6 != 0) {
        pub_1406abac0((byte *)puVar19[9],uVar6,1);
        uVar17 = (undefined1)uStack_d0;
      }
      puVar19[0xc] = uStack_98;
      *(undefined1 *)(puVar19 + 0xd) = (undefined1)uStack_90;
      *(uint *)((longlong)puVar19 + 0x69) = CONCAT13(uStack_8c,uStack_90._1_3_);
      *(undefined2 *)((longlong)puVar19 + 0x6d) = uStack_8b;
      *(undefined1 *)((longlong)puVar19 + 0x6f) = uStack_89;
      *(undefined4 *)(puVar19 + 10) = (undefined4)uStack_a8;
      *(undefined4 *)((longlong)puVar19 + 0x54) = uStack_a8._4_4_;
      *(undefined4 *)(puVar19 + 0xb) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)puVar19 + 0x5c) = uStack_a0._4_4_;
      *(undefined4 *)(puVar19 + 8) = (undefined4)uStack_b8;
      *(undefined4 *)((longlong)puVar19 + 0x44) = uStack_b8._4_4_;
      *(undefined4 *)(puVar19 + 9) = (undefined4)uStack_b0;
      *(undefined4 *)((longlong)puVar19 + 0x4c) = uStack_b0._4_4_;
      *(undefined8 *)((longlong)puVar19 + 0x76) = 0;
      puVar19[0xe] = 0;
      pdb_140f60be0(&uStack_b8,&pbStack_f8);
      uStack_90 = CONCAT31(uStack_90._1_3_,uVar17);
      uStack_a0 = uStack_e0;
      uStack_98 = uStack_d8;
      uVar6 = puVar19[0x10];
      if (uVar6 != 0) {
        pub_1406abac0((byte *)puVar19[0x11],uVar6,1);
      }
      puVar19[0x14] = uStack_98;
      *(undefined1 *)(puVar19 + 0x15) = (undefined1)uStack_90;
      *(uint *)((longlong)puVar19 + 0xa9) = CONCAT13(uStack_8c,uStack_90._1_3_);
      *(undefined2 *)((longlong)puVar19 + 0xad) = uStack_8b;
      *(undefined1 *)((longlong)puVar19 + 0xaf) = uStack_89;
      puVar19[0x12] = uStack_a8;
      puVar19[0x13] = uStack_a0;
      puVar19[0x10] = (ulonglong)uStack_b8;
      puVar19[0x11] = (ulonglong)uStack_b0;
      *(undefined8 *)((longlong)puVar19 + 0xb6) = 0;
      puVar19[0x16] = 0;
      if (pbStack_f8 != (byte *)0x0) {
        pub_1406abac0(pbStack_f0,(ulonglong)pbStack_f8,1);
      }
      goto LAB_1417048c0;
    }
    pcVar2 = (char *)(*(longlong *)(lStack_108 + 8) + lVar14);
    lVar14 = lVar14 + 1;
  } while (*pcVar2 != '\0');
  uVar16 = *(undefined4 *)((longlong)param_1 + 0x1c);
  puVar20 = (undefined4 *)param_1[2];
  *puVar20 = uVar16;
  puVar19 = (ulonglong *)*param_1;
  pdb_14007ee60();
  pbVar13 = pub_1406abab0(0x16,1);
  uVar10 = _UNK_1433270f0;
  uVar9 = _DAT_1433270e8;
  if (pbVar13 != (byte *)0x0) {
    *(undefined8 *)pbVar13 = _DAT_1433270e8;
    *(undefined8 *)(pbVar13 + 8) = uVar10;
    pbVar13[0xe] = 0x6d;
    pbVar13[0xf] = 0x61;
    pbVar13[0x10] = 0x5f;
    pbVar13[0x11] = 0x37;
    pbVar13[0x12] = 0x30;
    pbVar13[0x13] = 0x39;
    pbVar13[0x14] = 0x5f;
    pbVar13[0x15] = 0x31;
    if (*puVar19 != 0) {
      pub_1406abac0((byte *)puVar19[1],*puVar19,1);
    }
    *puVar19 = 0x16;
    puVar19[1] = (ulonglong)pbVar13;
    puVar19[2] = 0x16;
    uVar8 = _UNK_143326e58;
    uVar6 = _DAT_143326e50;
    puVar19[3] = _DAT_143326e50;
    puVar19[4] = uVar8;
    *(undefined1 *)(puVar19 + 5) = 0;
    puVar19[6] = 0;
    *(undefined8 *)((longlong)puVar19 + 0x36) = 0;
    pdb_14007ee60();
    pbVar13 = pub_1406abab0(0x16,1);
    if (pbVar13 != (byte *)0x0) {
      *(undefined8 *)pbVar13 = uVar9;
      *(undefined8 *)(pbVar13 + 8) = uVar10;
      pbVar13[0xe] = 0x6d;
      pbVar13[0xf] = 0x61;
      pbVar13[0x10] = 0x5f;
      pbVar13[0x11] = 0x37;
      pbVar13[0x12] = 0x30;
      pbVar13[0x13] = 0x39;
      pbVar13[0x14] = 0x5f;
      pbVar13[0x15] = 0x31;
      if (puVar19[8] != 0) {
        pub_1406abac0((byte *)puVar19[9],puVar19[8],1);
      }
      puVar19[8] = 0x16;
      puVar19[9] = (ulonglong)pbVar13;
      puVar19[10] = 0x16;
      puVar19[0xb] = uVar6;
      puVar19[0xc] = uVar8;
      *(undefined1 *)(puVar19 + 0xd) = 0;
      puVar19[0xe] = 0;
      *(undefined8 *)((longlong)puVar19 + 0x76) = 0;
      pdb_14007ee60();
      pbVar13 = pub_1406abab0(0x16,1);
      if (pbVar13 != (byte *)0x0) {
        *(undefined8 *)pbVar13 = uVar9;
        *(undefined8 *)(pbVar13 + 8) = uVar10;
        pbVar13[0xe] = 0x6d;
        pbVar13[0xf] = 0x61;
        pbVar13[0x10] = 0x5f;
        pbVar13[0x11] = 0x37;
        pbVar13[0x12] = 0x30;
        pbVar13[0x13] = 0x39;
        pbVar13[0x14] = 0x5f;
        pbVar13[0x15] = 0x31;
        if (puVar19[0x10] != 0) {
          pub_1406abac0((byte *)puVar19[0x11],puVar19[0x10],1);
        }
        puVar19[0x10] = 0x16;
        puVar19[0x11] = (ulonglong)pbVar13;
        puVar19[0x12] = 0x16;
        puVar19[0x13] = uVar6;
        puVar19[0x14] = uVar8;
        *(undefined1 *)(puVar19 + 0x15) = 0;
        puVar19[0x16] = 0;
        *(undefined8 *)((longlong)puVar19 + 0xb6) = 0;
LAB_1417048c0:
        if (!SBORROW8(0,*(longlong *)(lStack_108 + 0x30))) {
          pbStack_c0 = (byte *)(lStack_108 + 0x30);
          *puVar20 = uVar16;
          puStack_100 = (ulonglong *)(lStack_108 + 0x60);
          lVar14 = 0;
          lVar18 = 0;
          do {
            lVar11 = lStack_108;
            lVar1 = lVar14 + 0x40;
            lVar12 = lVar1;
            lVar15 = lVar14;
            if (lVar18 == 0) {
              if (lVar1 == 0xc0) {
                return;
              }
              lVar18 = 1;
              lVar12 = lVar14 + 0x80;
              lVar15 = lVar1;
            }
            lVar14 = lVar12;
            puVar3 = (ulonglong *)((longlong)puVar19 + lVar15);
            uVar17 = *(undefined1 *)(lStack_108 + 0x58);
            pdb_140f60be0(&pbStack_f8,pbStack_c0);
            uVar6 = uStack_d0;
            uStack_d0 = CONCAT71(uStack_d0._1_7_,uVar17);
            uVar8 = uStack_d0;
            uStack_e0 = *(ulonglong *)(lVar11 + 0x48);
            uStack_d8 = *(ulonglong *)(lVar11 + 0x50);
            uStack_80 = (undefined4)puStack_100[1];
            uStack_88 = *puStack_100;
            uVar4 = *(undefined1 *)(lVar11 + 0x6c);
            uVar5 = *(undefined1 *)(lVar11 + 0x6d);
            uStack_a8 = uStack_e8;
            uStack_90._1_3_ = (undefined3)(uVar6 >> 8);
            uStack_90 = CONCAT31(uStack_90._1_3_,uVar17);
            uStack_8c = (undefined1)(uVar6 >> 0x20);
            uStack_d0._5_2_ = SUB82(uVar6,5);
            uStack_8b = uStack_d0._5_2_;
            uStack_d0._7_1_ = SUB81(uVar6,7);
            uStack_89 = uStack_d0._7_1_;
            uStack_b8 = pbStack_f8;
            uStack_b0 = pbStack_f0;
            uStack_d0 = uVar8;
            uStack_a0 = uStack_e0;
            uStack_98 = uStack_d8;
            if (*(ulonglong *)((longlong)puVar19 + lVar15) != 0) {
              pub_1406abac0((byte *)puVar3[1],*(ulonglong *)((longlong)puVar19 + lVar15),1);
            }
            lVar18 = lVar18 + 1;
            *(undefined1 *)((longlong)puVar3 + 0x2c) = uStack_8c;
            *(undefined2 *)((longlong)puVar3 + 0x2d) = uStack_8b;
            *(undefined1 *)((longlong)puVar3 + 0x2f) = uStack_89;
            puVar3[6] = uStack_88;
            *(undefined4 *)(puVar3 + 7) = uStack_80;
            puVar3[4] = uStack_98;
            puVar3[5] = CONCAT17(uStack_89,CONCAT25(uStack_8b,CONCAT14(uStack_8c,uStack_90)));
            puVar3[2] = uStack_a8;
            puVar3[3] = uStack_a0;
            *puVar3 = (ulonglong)uStack_b8;
            puVar3[1] = (ulonglong)uStack_b0;
            *(undefined1 *)((longlong)puVar3 + 0x3c) = uVar4;
            *(undefined1 *)((longlong)puVar3 + 0x3d) = uVar5;
          } while (lVar14 != 0xc0);
        }
        return;
      }
    }
  }
  pdb_142dc7e2a(1,0x16);
LAB_141704a78:
  pdb_142dc7e2a(1,7);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

