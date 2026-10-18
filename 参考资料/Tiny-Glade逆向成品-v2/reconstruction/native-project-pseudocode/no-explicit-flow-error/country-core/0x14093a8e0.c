// VA 0x14093a8e0, PDB extent 2369 bytes
// country_core::systems::render_loop::vermeer::vermeer_pass
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/vermeer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::render_loop::vermeer::vermeer_pass
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/vermeer.rs
   Extent: 2369 */

undefined8
pdb_14093a8e0(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4,
             undefined1 param_5)

{
  char *pcVar1;
  char *pcVar2;
  ushort uVar3;
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
  byte bVar22;
  undefined4 *puVar23;
  undefined1 (*pauVar24) [16];
  longlong lVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  ushort uVar28;
  ulonglong uVar29;
  uint uVar30;
  longlong lVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  longlong alStack_1c8 [2];
  undefined1 uStack_1b8;
  int aiStack_140 [7];
  undefined4 uStack_124;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_b8 [8];
  undefined4 uStack_b0;
  undefined4 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  longlong lStack_78;
  undefined1 (*pauStack_70) [16];
  undefined1 uStack_65;
  ushort uStack_64;
  undefined1 uStack_62;
  byte bStack_61;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar25 = *(longlong *)(param_2 + 0x70);
    uVar27 = 0x46265f2c702dc4e8;
    lVar31 = 0;
    while( true ) {
      uVar27 = uVar27 & *(ulonglong *)(param_2 + 0x78);
      pcVar1 = (char *)(lVar25 + uVar27);
      auVar41[0] = -(*pcVar1 == DAT_142e34140);
      auVar41[1] = -(pcVar1[1] == DAT_142e34140._1_1_);
      auVar41[2] = -(pcVar1[2] == DAT_142e34140._2_1_);
      auVar41[3] = -(pcVar1[3] == DAT_142e34140._3_1_);
      auVar41[4] = -(pcVar1[4] == DAT_142e34140._4_1_);
      auVar41[5] = -(pcVar1[5] == DAT_142e34140._5_1_);
      auVar41[6] = -(pcVar1[6] == DAT_142e34140._6_1_);
      auVar41[7] = -(pcVar1[7] == DAT_142e34140._7_1_);
      auVar41[8] = -(pcVar1[8] == DAT_142e34140._8_1_);
      auVar41[9] = -(pcVar1[9] == DAT_142e34140._9_1_);
      auVar41[10] = -(pcVar1[10] == DAT_142e34140._10_1_);
      auVar41[0xb] = -(pcVar1[0xb] == DAT_142e34140._11_1_);
      auVar41[0xc] = -(pcVar1[0xc] == DAT_142e34140._12_1_);
      auVar41[0xd] = -(pcVar1[0xd] == DAT_142e34140._13_1_);
      auVar41[0xe] = -(pcVar1[0xe] == DAT_142e34140._14_1_);
      auVar41[0xf] = -(pcVar1[0xf] == DAT_142e34140._15_1_);
      uVar28 = (ushort)(SUB161(auVar41 >> 7,0) & 1) | (ushort)(SUB161(auVar41 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar41 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar41 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar41 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar41 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar41 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar41 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar41 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar41 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar41 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar41 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar41 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar41 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar41 >> 0x77,0) & 1) << 0xe | (ushort)(auVar41[0xf] >> 7) << 0xf;
      uVar30 = (uint)uVar28;
      while (uVar28 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar30; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar29 = uVar4 + uVar27 & *(ulonglong *)(param_2 + 0x78);
        pcVar2 = (char *)(lVar25 + -0x18 + uVar29 * -0x18);
        auVar42[0] = -(*pcVar2 == DAT_142e34710);
        auVar42[1] = -(pcVar2[1] == DAT_142e34710._1_1_);
        auVar42[2] = -(pcVar2[2] == DAT_142e34710._2_1_);
        auVar42[3] = -(pcVar2[3] == DAT_142e34710._3_1_);
        auVar42[4] = -(pcVar2[4] == DAT_142e34710._4_1_);
        auVar42[5] = -(pcVar2[5] == DAT_142e34710._5_1_);
        auVar42[6] = -(pcVar2[6] == DAT_142e34710._6_1_);
        auVar42[7] = -(pcVar2[7] == DAT_142e34710._7_1_);
        auVar42[8] = -(pcVar2[8] == DAT_142e34710._8_1_);
        auVar42[9] = -(pcVar2[9] == DAT_142e34710._9_1_);
        auVar42[10] = -(pcVar2[10] == DAT_142e34710._10_1_);
        auVar42[0xb] = -(pcVar2[0xb] == DAT_142e34710._11_1_);
        auVar42[0xc] = -(pcVar2[0xc] == DAT_142e34710._12_1_);
        auVar42[0xd] = -(pcVar2[0xd] == DAT_142e34710._13_1_);
        auVar42[0xe] = -(pcVar2[0xe] == DAT_142e34710._14_1_);
        auVar42[0xf] = -(pcVar2[0xf] == DAT_142e34710._15_1_);
        if ((ushort)((ushort)(SUB161(auVar42 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar42 >> 0xf,0) & 1) << 1 |
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
                    (ushort)(auVar42[0xf] >> 7) << 0xf) == 0xffff) {
          uVar27 = *(ulonglong *)(lVar25 + uVar29 * -0x18 + -8);
          if ((*(ulonglong *)(param_2 + 0x210) <= uVar27) ||
             (uVar27 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar27 * 8), uVar27 == 0))
          goto LAB_14093ae09;
          lVar25 = ~uVar27 * 0x40;
          if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar25) == 0)
          goto LAB_14093ae09;
          lVar25 = *(longlong *)(param_2 + 0x1d8) + lVar25;
          puStack_a0 = *(undefined4 **)(lVar25 + 0x10);
          *(undefined4 *)(lVar25 + 0x3c) = *(undefined4 *)(param_2 + 0x5a8);
          if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_14093ae15;
          lVar25 = *(longlong *)(param_2 + 0x70);
          uVar27 = 0xd3268fd5d18f7e86;
          lVar31 = 0;
          goto LAB_14093aa49;
        }
        uVar28 = (ushort)(uVar30 - 1) & (ushort)uVar30;
        uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar28);
      }
      auVar35[0] = -(*pcVar1 == -1);
      auVar35[1] = -(pcVar1[1] == -1);
      auVar35[2] = -(pcVar1[2] == -1);
      auVar35[3] = -(pcVar1[3] == -1);
      auVar35[4] = -(pcVar1[4] == -1);
      auVar35[5] = -(pcVar1[5] == -1);
      auVar35[6] = -(pcVar1[6] == -1);
      auVar35[7] = -(pcVar1[7] == -1);
      auVar35[8] = -(pcVar1[8] == -1);
      auVar35[9] = -(pcVar1[9] == -1);
      auVar35[10] = -(pcVar1[10] == -1);
      auVar35[0xb] = -(pcVar1[0xb] == -1);
      auVar35[0xc] = -(pcVar1[0xc] == -1);
      auVar35[0xd] = -(pcVar1[0xd] == -1);
      auVar35[0xe] = -(pcVar1[0xe] == -1);
      auVar35[0xf] = -(pcVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar35 >> 7,0) & 1) != 0 || (SUB161(auVar35 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar35 >> 0x17,0) & 1) != 0) || (SUB161(auVar35 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar35 >> 0x27,0) & 1) != 0) || (SUB161(auVar35 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar35 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar35 >> 0x3f,0) & 1) != 0) || (SUB161(auVar35 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar35 >> 0x4f,0) & 1) != 0) || (SUB161(auVar35 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar35 >> 0x5f,0) & 1) != 0) || (SUB161(auVar35 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar35 >> 0x6f,0) & 1) != 0) || (SUB161(auVar35 >> 0x77,0) & 1) != 0) ||
          auVar35[0xf] < '\0') break;
      uVar27 = uVar27 + lVar31 + 0x10;
      lVar31 = lVar31 + 0x10;
    }
  }
LAB_14093ae09:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143023160);
LAB_14093aa49:
  uVar27 = uVar27 & *(ulonglong *)(param_2 + 0x78);
  auVar41 = *(undefined1 (*) [16])(lVar25 + uVar27);
  auVar43[0] = -(auVar41[0] == DAT_142e34120);
  auVar43[1] = -(auVar41[1] == DAT_142e34120._1_1_);
  auVar43[2] = -(auVar41[2] == DAT_142e34120._2_1_);
  auVar43[3] = -(auVar41[3] == DAT_142e34120._3_1_);
  auVar43[4] = -(auVar41[4] == DAT_142e34120._4_1_);
  auVar43[5] = -(auVar41[5] == DAT_142e34120._5_1_);
  auVar43[6] = -(auVar41[6] == DAT_142e34120._6_1_);
  auVar43[7] = -(auVar41[7] == DAT_142e34120._7_1_);
  auVar43[8] = -(auVar41[8] == DAT_142e34120._8_1_);
  auVar43[9] = -(auVar41[9] == DAT_142e34120._9_1_);
  auVar43[10] = -(auVar41[10] == DAT_142e34120._10_1_);
  auVar43[0xb] = -(auVar41[0xb] == DAT_142e34120._11_1_);
  auVar43[0xc] = -(auVar41[0xc] == DAT_142e34120._12_1_);
  auVar43[0xd] = -(auVar41[0xd] == DAT_142e34120._13_1_);
  auVar43[0xe] = -(auVar41[0xe] == DAT_142e34120._14_1_);
  auVar43[0xf] = -(auVar41[0xf] == DAT_142e34120._15_1_);
  uVar28 = (ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe | (ushort)(auVar43[0xf] >> 7) << 0xf;
  uVar30 = (uint)uVar28;
  while (uVar28 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar30; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    uVar29 = uVar4 + uVar27 & *(ulonglong *)(param_2 + 0x78);
    pcVar1 = (char *)(lVar25 + -0x18 + uVar29 * -0x18);
    auVar44[0] = -(*pcVar1 == DAT_142e34130);
    auVar44[1] = -(pcVar1[1] == DAT_142e34130._1_1_);
    auVar44[2] = -(pcVar1[2] == DAT_142e34130._2_1_);
    auVar44[3] = -(pcVar1[3] == DAT_142e34130._3_1_);
    auVar44[4] = -(pcVar1[4] == DAT_142e34130._4_1_);
    auVar44[5] = -(pcVar1[5] == DAT_142e34130._5_1_);
    auVar44[6] = -(pcVar1[6] == DAT_142e34130._6_1_);
    auVar44[7] = -(pcVar1[7] == DAT_142e34130._7_1_);
    auVar44[8] = -(pcVar1[8] == DAT_142e34130._8_1_);
    auVar44[9] = -(pcVar1[9] == DAT_142e34130._9_1_);
    auVar44[10] = -(pcVar1[10] == DAT_142e34130._10_1_);
    auVar44[0xb] = -(pcVar1[0xb] == DAT_142e34130._11_1_);
    auVar44[0xc] = -(pcVar1[0xc] == DAT_142e34130._12_1_);
    auVar44[0xd] = -(pcVar1[0xd] == DAT_142e34130._13_1_);
    auVar44[0xe] = -(pcVar1[0xe] == DAT_142e34130._14_1_);
    auVar44[0xf] = -(pcVar1[0xf] == DAT_142e34130._15_1_);
    if ((ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar27 = *(ulonglong *)(lVar25 + uVar29 * -0x18 + -8);
      if ((*(ulonglong *)(param_2 + 0x210) <= uVar27) ||
         (uVar27 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar27 * 8), uVar27 == 0))
      goto LAB_14093ae15;
      lVar25 = ~uVar27 * 0x40;
      if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar25) == 0) goto LAB_14093ae15;
      lVar25 = *(longlong *)(param_2 + 0x1d8) + lVar25;
      pauStack_70 = *(undefined1 (**) [16])(lVar25 + 0x10);
      *(undefined4 *)(lVar25 + 0x3c) = *(undefined4 *)(param_2 + 0x5a8);
      bVar22 = DAT_143cb2c64;
      uStack_64 = *(ushort *)(pauStack_70[1] + 8);
      if (uStack_64 == 2) {
        uVar27 = 2;
        if (*(char *)(puStack_a0 + 1) == '\0') {
          DAT_143cb2c64 = 0;
        }
        else {
          *(undefined1 (*) [16])(*pauStack_70 + 10) = (undefined1  [16])0x0;
          *pauStack_70 = (undefined1  [16])0x0;
          *(undefined2 *)(pauStack_70[1] + 0xe) = 0;
        }
        goto LAB_14093b126;
      }
      uVar28 = *(ushort *)(param_3 + 8);
      uVar3 = *(ushort *)(param_3 + 10);
      DAT_143cb2c64 = 1;
      alStack_1c8[0] = (ulonglong)*(uint *)(param_3 + 8) << 0x20;
      alStack_1c8[1] = 0x125011800010001;
      uStack_1b8 = 2;
      lStack_78 = param_3;
      uStack_62 = param_4;
      pdb_141749b70(aiStack_140,param_1,&UNK_143023190,0xe,alStack_1c8);
      if (aiStack_140[0] == 1) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143023640,0x2b,alStack_1c8,&UNK_143023620,&UNK_1430231a0);
      }
      uStack_b0 = aiStack_140[3];
      bStack_61 = (byte)uStack_124;
      if (4 < *_DAT_143ca8e90) {
        aiStack_140[0] = 0;
        aiStack_140[1] = 0;
        aiStack_140[2] = 0x430231d0;
        aiStack_140[3] = 1;
        aiStack_140[4] = 0x2b;
        aiStack_140[5] = 0;
        aiStack_140[6] = 0;
        uStack_124 = 0;
        puStack_120 = &UNK_14302310f;
        uStack_118 = 0x36;
        uStack_110 = 5;
        puStack_108 = &UNK_1430231d0;
        uStack_100 = 0x2b;
        uStack_f8 = 0xa700000001;
        puStack_f0 = &UNK_1430231b8;
        uStack_e8 = 0x31;
        pdb_140f332f0(&uStack_65,aiStack_140);
      }
      uStack_98 = 0;
      uStack_90 = 8;
      uStack_88 = 0;
      uVar26 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143330ca4,0x28,&uStack_98);
      pdb_140e291c0(aiStack_140,&UNK_143330ca4,0x28,uVar26,param_1);
      pdb_1417a2680(alStack_1c8,aiStack_140,lStack_78);
      pub_142e32760(aiStack_140,alStack_1c8,0x88);
      uStack_90 = CONCAT44(1,(uint)uVar3);
      uStack_98 = CONCAT44((uint)uVar28,1);
      pdb_140e28810(aiStack_140,&uStack_98);
      pauVar24 = pauStack_70;
      puVar23 = puStack_a0;
      *(undefined2 *)(pauStack_70[1] + 8) = 1;
      *(undefined4 *)(pauStack_70[1] + 10) = uStack_b0;
      cVar21 = UNK_142e342df;
      cVar20 = UNK_142e342de;
      cVar19 = UNK_142e342dd;
      cVar18 = UNK_142e342dc;
      cVar17 = UNK_142e342db;
      cVar16 = UNK_142e342da;
      cVar15 = UNK_142e342d9;
      cVar14 = UNK_142e342d8;
      cVar13 = UNK_142e342d7;
      cVar12 = UNK_142e342d6;
      cVar11 = UNK_142e342d5;
      cVar10 = UNK_142e342d4;
      cVar9 = UNK_142e342d3;
      cVar8 = UNK_142e342d2;
      cVar7 = UNK_142e342d1;
      cVar6 = DAT_142e342d0;
      if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_14093aebf;
      lVar25 = *(longlong *)(param_2 + 0x70);
      uVar27 = 0x48f17fe91d0a91c1;
      lVar31 = 0;
      goto LAB_14093ad97;
    }
    uVar28 = (ushort)(uVar30 - 1) & (ushort)uVar30;
    uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar28);
  }
  goto LAB_14093aaa0;
LAB_14093ad97:
  uVar27 = uVar27 & *(ulonglong *)(param_2 + 0x78);
  auVar41 = *(undefined1 (*) [16])(lVar25 + uVar27);
  auVar37[0] = -(auVar41[0] == DAT_142e342d0);
  auVar37[1] = -(auVar41[1] == UNK_142e342d1);
  auVar37[2] = -(auVar41[2] == UNK_142e342d2);
  auVar37[3] = -(auVar41[3] == UNK_142e342d3);
  auVar37[4] = -(auVar41[4] == UNK_142e342d4);
  auVar37[5] = -(auVar41[5] == UNK_142e342d5);
  auVar37[6] = -(auVar41[6] == UNK_142e342d6);
  auVar37[7] = -(auVar41[7] == UNK_142e342d7);
  auVar37[8] = -(auVar41[8] == UNK_142e342d8);
  auVar37[9] = -(auVar41[9] == UNK_142e342d9);
  auVar37[10] = -(auVar41[10] == UNK_142e342da);
  auVar37[0xb] = -(auVar41[0xb] == UNK_142e342db);
  auVar37[0xc] = -(auVar41[0xc] == UNK_142e342dc);
  auVar37[0xd] = -(auVar41[0xd] == UNK_142e342dd);
  auVar37[0xe] = -(auVar41[0xe] == UNK_142e342de);
  auVar37[0xf] = -(auVar41[0xf] == UNK_142e342df);
  uVar28 = (ushort)(SUB161(auVar37 >> 7,0) & 1) | (ushort)(SUB161(auVar37 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar37 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar37 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar37 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar37 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar37 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar37 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar37 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar37 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar37 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar37 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar37 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar37 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar37 >> 0x77,0) & 1) << 0xe | (ushort)(auVar37[0xf] >> 7) << 0xf;
  uVar30 = (uint)uVar28;
  while (uVar28 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar30; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    uVar29 = uVar4 + uVar27 & *(ulonglong *)(param_2 + 0x78);
    pcVar1 = (char *)(lVar25 + -0x18 + uVar29 * -0x18);
    auVar38[0] = -(*pcVar1 == DAT_142e34370);
    auVar38[1] = -(pcVar1[1] == UNK_142e34371);
    auVar38[2] = -(pcVar1[2] == UNK_142e34372);
    auVar38[3] = -(pcVar1[3] == UNK_142e34373);
    auVar38[4] = -(pcVar1[4] == UNK_142e34374);
    auVar38[5] = -(pcVar1[5] == UNK_142e34375);
    auVar38[6] = -(pcVar1[6] == UNK_142e34376);
    auVar38[7] = -(pcVar1[7] == UNK_142e34377);
    auVar38[8] = -(pcVar1[8] == UNK_142e34378);
    auVar38[9] = -(pcVar1[9] == UNK_142e34379);
    auVar38[10] = -(pcVar1[10] == UNK_142e3437a);
    auVar38[0xb] = -(pcVar1[0xb] == UNK_142e3437b);
    auVar38[0xc] = -(pcVar1[0xc] == UNK_142e3437c);
    auVar38[0xd] = -(pcVar1[0xd] == UNK_142e3437d);
    auVar38[0xe] = -(pcVar1[0xe] == UNK_142e3437e);
    auVar38[0xf] = -(pcVar1[0xf] == UNK_142e3437f);
    if ((ushort)((ushort)(SUB161(auVar38 >> 7,0) & 1) | (ushort)(SUB161(auVar38 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar38 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar38 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar38 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar38 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar38 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar38 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar38 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar38 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar38 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar38 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar38 >> 0x77,0) & 1) << 0xe | (ushort)(auVar38[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar27 = *(ulonglong *)(lVar25 + uVar29 * -0x18 + -8);
      if ((*(ulonglong *)(param_2 + 0x210) <= uVar27) ||
         (uVar27 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar27 * 8), uVar27 == 0))
      goto LAB_14093aebf;
      lVar25 = ~uVar27 * 0x40;
      if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar25) == 0) goto LAB_14093aebf;
      fVar32 = *(float *)(*(longlong *)(*(longlong *)(param_2 + 0x1d8) + lVar25 + 0x10) + 0x58);
      if (_DAT_142f6cd30 <= fVar32) {
        fVar32 = _DAT_142f6cd30;
      }
      if (*(char *)((longlong)puStack_a0 + 5) == '\0') {
        if ((pauStack_70[1][0xe] == '\0') && (1 < *(ulonglong *)(*pauStack_70 + 8))) {
          *(float *)pauStack_70[1] = fVar32 / _DAT_142e3788c + *(float *)pauStack_70[1];
        }
      }
      else {
        *(undefined4 *)pauStack_70[1] = *puStack_a0;
      }
      *(longlong *)(*pauStack_70 + 8) = *(longlong *)(*pauStack_70 + 8) + 1;
      fVar32 = fVar32 + *(float *)(pauStack_70[1] + 4);
      *(float *)(pauStack_70[1] + 4) = fVar32;
      pdb_14093b230(param_1,param_2,auVar41._0_8_,auStack_b8,lStack_78,fVar32,
                    *(undefined4 *)pauStack_70[1],uStack_62,param_5,bVar22 & bStack_61 & 1);
      if (((*(float *)pauVar24[1] < _DAT_142e36f28) || (*(char *)((longlong)puVar23 + 5) == '\x01'))
         || (pauVar24[1][0xe] != '\0')) goto LAB_14093b11f;
      if ((*(short *)(pauVar24[1] + 8) != 2) && (*(longlong *)*pauStack_70 != 0)) {
        pdb_14098a200(pauStack_70);
      }
      *(undefined2 *)(pauStack_70[1] + 8) = 2;
      if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_14093b148;
      lVar25 = *(longlong *)(param_2 + 0x70);
      uVar27 = 0x48b836d16ff555fb;
      lVar31 = 0;
      goto LAB_14093afdc;
    }
    uVar28 = (ushort)(uVar30 - 1) & (ushort)uVar30;
    uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar28);
  }
  goto LAB_14093adea;
LAB_14093afdc:
  uVar27 = uVar27 & *(ulonglong *)(param_2 + 0x78);
  auVar41 = *(undefined1 (*) [16])(lVar25 + uVar27);
  auVar39[0] = -(auVar41[0] == cVar6);
  auVar39[1] = -(auVar41[1] == cVar7);
  auVar39[2] = -(auVar41[2] == cVar8);
  auVar39[3] = -(auVar41[3] == cVar9);
  auVar39[4] = -(auVar41[4] == cVar10);
  auVar39[5] = -(auVar41[5] == cVar11);
  auVar39[6] = -(auVar41[6] == cVar12);
  auVar39[7] = -(auVar41[7] == cVar13);
  auVar39[8] = -(auVar41[8] == cVar14);
  auVar39[9] = -(auVar41[9] == cVar15);
  auVar39[10] = -(auVar41[10] == cVar16);
  auVar39[0xb] = -(auVar41[0xb] == cVar17);
  auVar39[0xc] = -(auVar41[0xc] == cVar18);
  auVar39[0xd] = -(auVar41[0xd] == cVar19);
  auVar39[0xe] = -(auVar41[0xe] == cVar20);
  auVar39[0xf] = -(auVar41[0xf] == cVar21);
  uVar28 = (ushort)(SUB161(auVar39 >> 7,0) & 1) | (ushort)(SUB161(auVar39 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar39 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar39 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar39 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar39 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar39 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar39 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar39 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar39 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar39 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar39 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar39 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar39 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar39 >> 0x77,0) & 1) << 0xe | (ushort)(auVar39[0xf] >> 7) << 0xf;
  uVar30 = (uint)uVar28;
  while (uVar28 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar30; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    uVar29 = uVar4 + uVar27 & *(ulonglong *)(param_2 + 0x78);
    pcVar1 = (char *)(lVar25 + -0x18 + uVar29 * -0x18);
    auVar40[0] = -(*pcVar1 == DAT_142e342e0);
    auVar40[1] = -(pcVar1[1] == DAT_142e342e0._1_1_);
    auVar40[2] = -(pcVar1[2] == DAT_142e342e0._2_1_);
    auVar40[3] = -(pcVar1[3] == DAT_142e342e0._3_1_);
    auVar40[4] = -(pcVar1[4] == DAT_142e342e0._4_1_);
    auVar40[5] = -(pcVar1[5] == DAT_142e342e0._5_1_);
    auVar40[6] = -(pcVar1[6] == DAT_142e342e0._6_1_);
    auVar40[7] = -(pcVar1[7] == DAT_142e342e0._7_1_);
    auVar40[8] = -(pcVar1[8] == DAT_142e342e0._8_1_);
    auVar40[9] = -(pcVar1[9] == DAT_142e342e0._9_1_);
    auVar40[10] = -(pcVar1[10] == DAT_142e342e0._10_1_);
    auVar40[0xb] = -(pcVar1[0xb] == DAT_142e342e0._11_1_);
    auVar40[0xc] = -(pcVar1[0xc] == DAT_142e342e0._12_1_);
    auVar40[0xd] = -(pcVar1[0xd] == DAT_142e342e0._13_1_);
    auVar40[0xe] = -(pcVar1[0xe] == DAT_142e342e0._14_1_);
    auVar40[0xf] = -(pcVar1[0xf] == DAT_142e342e0._15_1_);
    if ((ushort)((ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar27 = *(ulonglong *)(lVar25 + uVar29 * -0x18 + -8);
      if ((uVar27 < *(ulonglong *)(param_2 + 0x210)) &&
         (uVar27 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar27 * 8), uVar27 != 0)) {
        lVar25 = ~uVar27 * 0x40;
        if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar25) != 0) {
          lVar25 = *(longlong *)(param_2 + 0x1d8) + lVar25;
          lVar31 = *(longlong *)(lVar25 + 0x10);
          *(undefined4 *)(lVar25 + 0x3c) = *(undefined4 *)(param_2 + 0x5a8);
          lVar25 = *(longlong *)(lVar31 + 0x30);
          uVar26 = *(undefined8 *)(lVar31 + 0x40);
          if (lVar25 == *(longlong *)(lVar31 + 0x20)) {
            pdb_142d7e8a0(lVar31 + 0x20);
          }
          *(undefined8 *)(*(longlong *)(lVar31 + 0x28) + lVar25 * 8) = uVar26;
          *(longlong *)(lVar31 + 0x30) = lVar25 + 1;
          *(longlong *)(lVar31 + 0x40) = *(longlong *)(lVar31 + 0x40) + 1;
          if (2 < *_DAT_143ca8e90) {
            aiStack_140[0] = 0x430231d0;
            aiStack_140[1] = 1;
            aiStack_140[2] = 0x2b;
            aiStack_140[3] = 0;
            aiStack_140[4] = 0x430231d0;
            aiStack_140[5] = 1;
            aiStack_140[6] = 0x2b;
            uStack_124 = 0;
            puStack_120 = &UNK_143023248;
            pdb_1400c9be0(&UNK_143023230,0x2b,3,aiStack_140);
          }
LAB_14093b11f:
          uVar27 = (ulonglong)uStack_64;
LAB_14093b126:
          return CONCAT71((int7)(uVar27 >> 8),(short)uVar27 != 2);
        }
      }
      goto LAB_14093b148;
    }
    uVar28 = (ushort)(uVar30 - 1) & (ushort)uVar30;
    uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar28);
  }
  auVar34[0] = -(auVar41[0] == -1);
  auVar34[1] = -(auVar41[1] == -1);
  auVar34[2] = -(auVar41[2] == -1);
  auVar34[3] = -(auVar41[3] == -1);
  auVar34[4] = -(auVar41[4] == -1);
  auVar34[5] = -(auVar41[5] == -1);
  auVar34[6] = -(auVar41[6] == -1);
  auVar34[7] = -(auVar41[7] == -1);
  auVar34[8] = -(auVar41[8] == -1);
  auVar34[9] = -(auVar41[9] == -1);
  auVar34[10] = -(auVar41[10] == -1);
  auVar34[0xb] = -(auVar41[0xb] == -1);
  auVar34[0xc] = -(auVar41[0xc] == -1);
  auVar34[0xd] = -(auVar41[0xd] == -1);
  auVar34[0xe] = -(auVar41[0xe] == -1);
  auVar34[0xf] = -(auVar41[0xf] == -1);
  if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 || (SUB161(auVar34 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar34 >> 0x17,0) & 1) != 0) || (SUB161(auVar34 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar34 >> 0x27,0) & 1) != 0) || (SUB161(auVar34 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar34 >> 0x37,0) & 1) != 0) || (SUB161(auVar34 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar34 >> 0x47,0) & 1) != 0) || (SUB161(auVar34 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar34 >> 0x57,0) & 1) != 0) || (SUB161(auVar34 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar34 >> 0x67,0) & 1) != 0) || (SUB161(auVar34 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar34 >> 0x77,0) & 1) != 0) || auVar34[0xf] < '\0') {
LAB_14093b148:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143023218);
  }
  uVar27 = uVar27 + lVar31 + 0x10;
  lVar31 = lVar31 + 0x10;
  goto LAB_14093afdc;
LAB_14093adea:
  auVar33[0] = -(auVar41[0] == -1);
  auVar33[1] = -(auVar41[1] == -1);
  auVar33[2] = -(auVar41[2] == -1);
  auVar33[3] = -(auVar41[3] == -1);
  auVar33[4] = -(auVar41[4] == -1);
  auVar33[5] = -(auVar41[5] == -1);
  auVar33[6] = -(auVar41[6] == -1);
  auVar33[7] = -(auVar41[7] == -1);
  auVar33[8] = -(auVar41[8] == -1);
  auVar33[9] = -(auVar41[9] == -1);
  auVar33[10] = -(auVar41[10] == -1);
  auVar33[0xb] = -(auVar41[0xb] == -1);
  auVar33[0xc] = -(auVar41[0xc] == -1);
  auVar33[0xd] = -(auVar41[0xd] == -1);
  auVar33[0xe] = -(auVar41[0xe] == -1);
  auVar33[0xf] = -(auVar41[0xf] == -1);
  if ((((((((((((((((SUB161(auVar33 >> 7,0) & 1) != 0 || (SUB161(auVar33 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar33 >> 0x17,0) & 1) != 0) || (SUB161(auVar33 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar33 >> 0x27,0) & 1) != 0) || (SUB161(auVar33 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar33 >> 0x37,0) & 1) != 0) || (SUB161(auVar33 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar33 >> 0x47,0) & 1) != 0) || (SUB161(auVar33 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar33 >> 0x57,0) & 1) != 0) || (SUB161(auVar33 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar33 >> 0x67,0) & 1) != 0) || (SUB161(auVar33 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar33 >> 0x77,0) & 1) != 0) || auVar33[0xf] < '\0') {
LAB_14093aebf:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143023200);
  }
  uVar27 = uVar27 + lVar31 + 0x10;
  lVar31 = lVar31 + 0x10;
  goto LAB_14093ad97;
LAB_14093aaa0:
  auVar36[0] = -(auVar41[0] == -1);
  auVar36[1] = -(auVar41[1] == -1);
  auVar36[2] = -(auVar41[2] == -1);
  auVar36[3] = -(auVar41[3] == -1);
  auVar36[4] = -(auVar41[4] == -1);
  auVar36[5] = -(auVar41[5] == -1);
  auVar36[6] = -(auVar41[6] == -1);
  auVar36[7] = -(auVar41[7] == -1);
  auVar36[8] = -(auVar41[8] == -1);
  auVar36[9] = -(auVar41[9] == -1);
  auVar36[10] = -(auVar41[10] == -1);
  auVar36[0xb] = -(auVar41[0xb] == -1);
  auVar36[0xc] = -(auVar41[0xc] == -1);
  auVar36[0xd] = -(auVar41[0xd] == -1);
  auVar36[0xe] = -(auVar41[0xe] == -1);
  auVar36[0xf] = -(auVar41[0xf] == -1);
  if ((((((((((((((((SUB161(auVar36 >> 7,0) & 1) != 0 || (SUB161(auVar36 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar36 >> 0x17,0) & 1) != 0) || (SUB161(auVar36 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar36 >> 0x27,0) & 1) != 0) || (SUB161(auVar36 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar36 >> 0x37,0) & 1) != 0) || (SUB161(auVar36 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar36 >> 0x47,0) & 1) != 0) || (SUB161(auVar36 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar36 >> 0x57,0) & 1) != 0) || (SUB161(auVar36 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar36 >> 0x67,0) & 1) != 0) || (SUB161(auVar36 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar36 >> 0x77,0) & 1) != 0) || auVar36[0xf] < '\0') {
LAB_14093ae15:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143023178);
  }
  uVar27 = uVar27 + lVar31 + 0x10;
  lVar31 = lVar31 + 0x10;
  goto LAB_14093aa49;
}

