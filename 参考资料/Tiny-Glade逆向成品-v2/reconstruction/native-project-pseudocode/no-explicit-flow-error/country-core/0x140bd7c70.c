// VA 0x140bd7c70, PDB extent 828 bytes
// country_core::systems::wall::upload_instanced_wall_ssbo::gpu_flush_brick_buffers
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/upload_instanced_wall_ssbo.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000141a76a55) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::upload_instanced_wall_ssbo::gpu_flush_brick_buffers
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/upload_instanced_wall_ssbo.rs
   Extent: 828 */

void pdb_140bd7c70(byte *******param_1,longlong *param_2,byte ****param_3)

{
  byte *pbVar1;
  char *pcVar2;
  byte **ppbVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined8 *puVar7;
  byte ***pppbVar8;
  byte ******ppppppbVar9;
  code *pcVar10;
  uint uVar11;
  byte *****pppppbVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
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
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  ushort uVar50;
  uint uVar51;
  byte *******arg0;
  longlong lVar52;
  ulonglong uVar53;
  byte *******pppppppbVar54;
  undefined8 uVar55;
  byte *******pppppppbVar56;
  byte *******pppppppbVar57;
  longlong *plVar58;
  undefined *puVar59;
  longlong lVar60;
  byte *******pppppppbVar61;
  byte ******ppppppbVar62;
  byte *****pppppbVar63;
  uint uVar64;
  undefined *puVar65;
  ulonglong uVar66;
  longlong lVar67;
  byte **ppbVar68;
  undefined *puVar69;
  byte ******ppppppbVar70;
  undefined8 uVar71;
  ulonglong uVar72;
  byte ****ppppbVar73;
  byte *******pppppppbVar74;
  undefined1 auVar75 [16];
  byte *******unaff_XMM6_Qa;
  byte *******unaff_XMM6_Qb;
  undefined1 unaff_XMM7_Ba;
  undefined1 unaff_XMM7_Bb;
  undefined1 unaff_XMM7_Bc;
  undefined1 unaff_XMM7_Bd;
  undefined1 unaff_XMM7_Be;
  undefined1 unaff_XMM7_Bf;
  undefined1 unaff_XMM7_Bg;
  undefined1 unaff_XMM7_Bh;
  undefined1 unaff_XMM7_Bi;
  undefined1 unaff_XMM7_Bj;
  undefined1 unaff_XMM7_Bk;
  undefined1 unaff_XMM7_Bl;
  undefined1 unaff_XMM7_Bm;
  undefined1 unaff_XMM7_Bn;
  undefined1 unaff_XMM7_Bo;
  undefined1 unaff_XMM7_Bp;
  byte *******unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined1 auVar76 [16];
  byte ******ppppppbStack_190;
  byte *******pppppppbStack_188;
  byte *******pppppppbStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  byte *******pppppppbStack_168;
  byte *******pppppppbStack_160;
  byte *******pppppppbStack_158;
  byte *****pppppbStack_150;
  byte *******pppppppbStack_148;
  byte *******pppppppbStack_140;
  byte *******pppppppbStack_138;
  code *pcStack_130;
  byte *******pppppppbStack_128;
  byte *******pppppppbStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  byte *******pppppppbStack_f8;
  byte *******pppppppbStack_f0;
  byte *******pppppppbStack_e8;
  code *pcStack_e0;
  byte *******pppppppbStack_d8;
  byte *******pppppppbStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  byte *******pppppppbStack_98;
  byte *******pppppppbStack_90;
  byte *******pppppppbStack_88;
  longlong lStack_80;
  byte *******pppppppbStack_78;
  byte *******pppppppbStack_70;
  undefined8 uStack_68;
  undefined1 uStack_59;
  byte *******pppppppbStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_68 = (byte *******)
              CONCAT17(unaff_XMM7_Bh,
                       CONCAT16(unaff_XMM7_Bg,
                                CONCAT15(unaff_XMM7_Bf,
                                         CONCAT14(unaff_XMM7_Be,
                                                  CONCAT13(unaff_XMM7_Bd,
                                                           CONCAT12(unaff_XMM7_Bc,
                                                                    CONCAT11(unaff_XMM7_Bb,
                                                                             unaff_XMM7_Ba)))))));
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  cVar47 = UNK_142e33e8f;
  cVar46 = UNK_142e33e8e;
  cVar45 = UNK_142e33e8d;
  cVar44 = UNK_142e33e8c;
  cVar43 = UNK_142e33e8b;
  cVar42 = UNK_142e33e8a;
  cVar41 = UNK_142e33e89;
  cVar40 = UNK_142e33e88;
  cVar39 = UNK_142e33e87;
  cVar38 = UNK_142e33e86;
  cVar37 = UNK_142e33e85;
  cVar36 = UNK_142e33e84;
  cVar35 = UNK_142e33e83;
  cVar34 = UNK_142e33e82;
  cVar33 = UNK_142e33e81;
  cVar49 = DAT_142e33e80;
  lStack_80 = *param_2;
  if (*(char *)(lStack_80 + 8) != '\0') {
    lStack_80 = lStack_80 + 0x10;
    puStack_a8 = &UNK_143066458;
                    /* WARNING: Subroutine does not return */
    pppppppbStack_d0 = (byte *******)0x140bd7fab;
    pdb_142dc8170(&UNK_143066330,0x2b,&lStack_80,&UNK_143066310);
  }
  pppppppbStack_88 = param_1;
  if (*(longlong *)(lStack_80 + 0x28) != 0) {
    lVar52 = *(longlong *)(lStack_80 + 0x10);
    uVar53 = *(ulonglong *)(lStack_80 + 0x18);
    uVar72 = 0xeb575d061b90ebf5;
    lVar67 = 0;
    iVar13 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                              CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                    CONCAT13(unaff_XMM7_Bd,
                             CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
    iVar14 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                              CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                    CONCAT13(unaff_XMM7_Bh,
                             CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
    iVar15 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                              CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                    CONCAT13(unaff_XMM7_Bl,
                             CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
    iVar16 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                              CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                    CONCAT13(unaff_XMM7_Bp,
                             CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
    pppppppbStack_78 = unaff_XMM6_Qa;
    pppppppbStack_70 = unaff_XMM6_Qb;
    pppppppbStack_58 = unaff_XMM8_Qa;
    uStack_50 = unaff_XMM8_Qb;
    while( true ) {
      uVar72 = uVar72 & uVar53;
      pcVar2 = (char *)(lVar52 + uVar72);
      cVar17 = *pcVar2;
      cVar18 = pcVar2[1];
      cVar19 = pcVar2[2];
      cVar20 = pcVar2[3];
      cVar21 = pcVar2[4];
      cVar22 = pcVar2[5];
      cVar23 = pcVar2[6];
      cVar24 = pcVar2[7];
      cVar25 = pcVar2[8];
      cVar26 = pcVar2[9];
      cVar27 = pcVar2[10];
      cVar28 = pcVar2[0xb];
      cVar29 = pcVar2[0xc];
      cVar30 = pcVar2[0xd];
      cVar31 = pcVar2[0xe];
      cVar32 = pcVar2[0xf];
      auVar75[0] = -(cVar17 == cVar49);
      auVar75[1] = -(cVar18 == cVar33);
      auVar75[2] = -(cVar19 == cVar34);
      auVar75[3] = -(cVar20 == cVar35);
      auVar75[4] = -(cVar21 == cVar36);
      auVar75[5] = -(cVar22 == cVar37);
      auVar75[6] = -(cVar23 == cVar38);
      auVar75[7] = -(cVar24 == cVar39);
      auVar75[8] = -(cVar25 == cVar40);
      auVar75[9] = -(cVar26 == cVar41);
      auVar75[10] = -(cVar27 == cVar42);
      auVar75[0xb] = -(cVar28 == cVar43);
      auVar75[0xc] = -(cVar29 == cVar44);
      auVar75[0xd] = -(cVar30 == cVar45);
      auVar75[0xe] = -(cVar31 == cVar46);
      auVar75[0xf] = -(cVar32 == cVar47);
      uVar50 = (ushort)(SUB161(auVar75 >> 7,0) & 1) | (ushort)(SUB161(auVar75 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar75 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar75 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar75 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar75 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar75 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar75 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar75 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar75 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar75 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar75 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar75 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar75 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar75 >> 0x77,0) & 1) << 0xe | (ushort)(auVar75[0xf] >> 7) << 0xf;
      uVar51 = (uint)uVar50;
      while (uVar50 != 0) {
        uVar64 = 0;
        for (uVar11 = uVar51; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
          uVar64 = uVar64 + 1;
        }
        lVar60 = lVar52 + (uVar64 + uVar72 & uVar53) * -0x10;
        pppppppbStack_d0 = (byte *******)0x140bd7d27;
        cVar48 = pdb_140df4430(&UNK_14331a530,lVar60 + -0x10);
        if (cVar48 != '\0') {
          puVar7 = *(undefined8 **)(lVar60 + -8);
          pppppppbStack_d0 = (byte *******)0x140bd7d69;
          arg0 = (byte *******)(**(code **)(puVar7[1] + 0x20))(*puVar7);
          if (arg0 == (byte *******)0x0) goto LAB_140bd7dac;
          pppbVar8 = *param_3;
          pppppppbStack_98 = (byte *******)param_3[1];
          uStack_a0 = (byte *******)
                      CONCAT44(*(undefined4 *)((longlong)param_3 + 0x14),(undefined4)uStack_a0);
          ppbVar68 = pppbVar8[0x1f];
          ppbVar3 = (byte **)((longlong)ppbVar68 + (longlong)pppbVar8[0x20] * 4);
          if (*(char *)(pppbVar8 + 0x21) == '\0') goto LAB_140bd7dc9;
          pppppbVar63 = (byte *****)0x0;
          ppppbVar73 = (byte ****)0x0;
          uVar53 = 0;
          goto LAB_140bd7f00;
        }
        uVar50 = (ushort)(uVar51 - 1) & (ushort)uVar51;
        uVar51 = CONCAT22((short)(uVar51 - 1 >> 0x10),uVar50);
      }
      auVar76[0] = -(cVar17 == (char)iVar13);
      auVar76[1] = -(cVar18 == (char)((uint)iVar13 >> 8));
      auVar76[2] = -(cVar19 == (char)((uint)iVar13 >> 0x10));
      auVar76[3] = -(cVar20 == (char)((uint)iVar13 >> 0x18));
      auVar76[4] = -(cVar21 == (char)iVar14);
      auVar76[5] = -(cVar22 == (char)((uint)iVar14 >> 8));
      auVar76[6] = -(cVar23 == (char)((uint)iVar14 >> 0x10));
      auVar76[7] = -(cVar24 == (char)((uint)iVar14 >> 0x18));
      auVar76[8] = -(cVar25 == (char)iVar15);
      auVar76[9] = -(cVar26 == (char)((uint)iVar15 >> 8));
      auVar76[10] = -(cVar27 == (char)((uint)iVar15 >> 0x10));
      auVar76[0xb] = -(cVar28 == (char)((uint)iVar15 >> 0x18));
      auVar76[0xc] = -(cVar29 == (char)iVar16);
      auVar76[0xd] = -(cVar30 == (char)((uint)iVar16 >> 8));
      auVar76[0xe] = -(cVar31 == (char)((uint)iVar16 >> 0x10));
      auVar76[0xf] = -(cVar32 == (char)((uint)iVar16 >> 0x18));
      if ((((((((((((((((SUB161(auVar76 >> 7,0) & 1) != 0 || (SUB161(auVar76 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar76 >> 0x17,0) & 1) != 0) || (SUB161(auVar76 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar76 >> 0x27,0) & 1) != 0) || (SUB161(auVar76 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar76 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar76 >> 0x3f,0) & 1) != 0) || (SUB161(auVar76 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar76 >> 0x4f,0) & 1) != 0) || (SUB161(auVar76 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar76 >> 0x5f,0) & 1) != 0) || (SUB161(auVar76 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar76 >> 0x6f,0) & 1) != 0) || (SUB161(auVar76 >> 0x77,0) & 1) != 0) ||
          auVar76[0xf] < '\0') break;
      uVar72 = uVar72 + lVar67 + 0x10;
      lVar67 = lVar67 + 0x10;
    }
  }
LAB_140bd7dac:
                    /* WARNING: Subroutine does not return */
  pppppppbStack_d0 = (byte *******)0x140bd7db8;
  pdb_142dc8150(&UNK_143064f68);
LAB_140bd7dc9:
  if (ppbVar68 == ppbVar3) goto LAB_140bd7f3f;
  ppppppbVar62 = pppppppbStack_98[0x20];
  while( true ) {
    uVar53 = (ulonglong)*(uint *)ppbVar68;
    pppppbVar63 = ppppppbVar62[uVar53 * 0x14 + 0xb];
    if (pppppbVar63 != (byte *****)0x0) break;
    ppbVar68 = (byte **)((longlong)ppbVar68 + 4);
    if (ppbVar68 == ppbVar3) goto LAB_140bd7f3f;
  }
  uVar72 = (ulonglong)*(uint *)((longlong)ppppppbVar62 + uVar53 * 0xa0 + 0x94);
  pppppbVar12 = pppppppbStack_98[0x34][uVar72 * 9 + 3];
  uVar72 = ~(ulonglong)pppppppbStack_98[0x34][uVar72 * 9 + 7][(longlong)pppbVar8[0x22]];
  ppppbVar73 = pppppbVar12[uVar72 * 6 + 2];
  pppppppbStack_90 = (byte *******)pppppbVar12[uVar72 * 6 + 5];
  pppppbVar12 = ppppppbVar62[uVar53 * 0x14 + 10];
  ppbVar68 = (byte **)((longlong)ppbVar68 + 4);
  uVar51 = 1;
  uVar53 = 0;
  while( true ) {
    uVar64 = *(uint *)(pppppbVar12 + uVar53 * 2 + 1);
    *(undefined4 *)((longlong)pppppppbStack_90 + (ulonglong)~uVar64 * 4) = uStack_a0._4_4_;
    pppppppbStack_d0 = (byte *******)0x140bd7ea2;
    pdb_14094c360(ppppbVar73 + (ulonglong)~uVar64 * 6,arg0);
    if (uVar51 == (uint)pppppbVar63) break;
    uVar53 = (ulonglong)uVar51;
    uVar51 = uVar51 + 1;
  }
  goto LAB_140bd7dc9;
LAB_140bd7f00:
  if ((int)uVar53 == (int)pppppbVar63) {
    if (ppbVar68 == ppbVar3) goto LAB_140bd7f3f;
    ppppppbVar62 = pppppppbStack_98[0x34];
    while( true ) {
      uVar53 = (ulonglong)*(uint *)ppbVar68;
      pppppbVar63 = ppppppbVar62[uVar53 * 9 + 2];
      if (pppppbVar63 != (byte *****)0x0) break;
      ppbVar68 = (byte **)((longlong)ppbVar68 + 4);
      if (ppbVar68 == ppbVar3) goto LAB_140bd7f3f;
    }
    ppppbVar73 = ppppppbVar62[uVar53 * 9 + 3]
                 [~(ulonglong)ppppppbVar62[uVar53 * 9 + 7][(longlong)pppbVar8[0x22]] * 6 + 2];
    param_3 = ppppppbVar62[uVar53 * 9 + 3]
              [~(ulonglong)ppppppbVar62[uVar53 * 9 + 7][(longlong)pppbVar8[0x22]] * 6 + 5];
    ppbVar68 = (byte **)((longlong)ppbVar68 + 4);
    uVar53 = 0;
  }
  *(undefined4 *)((longlong)param_3 + uVar53 * 4) = uStack_a0._4_4_;
  pppppppbStack_d0 = (byte *******)0x140bd7f00;
  pdb_14094c360(ppppbVar73 + uVar53 * 6,arg0);
  uVar53 = (ulonglong)((int)uVar53 + 1);
  goto LAB_140bd7f00;
LAB_140bd7f3f:
  pppppbVar63 = **pppppppbStack_88 + 2;
  uStack_48 = 0xfffffffffffffffe;
  pppppbStack_150 = pppppbVar63;
  pdb_141a75940();
  cVar49 = pdb_140e94b40();
  uStack_50._0_7_ = CONCAT16(cVar49,(undefined6)uStack_50);
  if (cVar49 == '\0') {
LAB_141a76360:
    ppppppbVar62 = (byte ******)((longlong)arg0[0xf] << 0xd);
    uStack_68 = arg0;
    ppppppbStack_190 = ppppppbVar62;
    if (arg0[10] < ppppppbVar62) {
      uVar55 = pdb_140e1d1f0((longlong)arg0[0xf] << 0x13,0x12,1);
      uVar55 = pdb_140e1d260(uVar55,4);
      pdb_1415d1d50(&pppppppbStack_f8,pppppbStack_150,&UNK_143382260,0xf,uVar55,0);
      pppppppbVar56 = pppppppbStack_f0;
      if (pppppppbStack_f8 != (byte *******)0xb) {
        uStack_108 = (undefined4)uStack_b8;
        uStack_104 = uStack_b8._4_4_;
        uStack_100 = (undefined4)uStack_b0;
        uStack_fc = uStack_b0._4_4_;
        uStack_118 = (undefined4)uStack_c8;
        uStack_114 = uStack_c8._4_4_;
        uStack_110 = (undefined4)uStack_c0;
        uStack_10c = uStack_c0._4_4_;
        pppppppbStack_128 = pppppppbStack_d8;
        pppppppbStack_120 = pppppppbStack_d0;
        pppppppbStack_138 = pppppppbStack_e8;
        pcStack_130 = pcStack_e0;
        pppppppbStack_148 = pppppppbStack_f8;
        pppppppbStack_140 = pppppppbStack_f0;
        pppppppbStack_f8 = (byte *******)&UNK_143382270;
        pppppppbStack_f0 = (byte *******)pdb_1402ed400;
        pcStack_e0 = pdb_140e18fa0;
        pppppppbVar56 = (byte *******)&pppppppbStack_98;
        pppppppbStack_e8 = (byte *******)&pppppppbStack_148;
        pdb_140f60760(pppppppbVar56,&UNK_1433822c9,&pppppppbStack_f8);
        pppppppbStack_168 = pppppppbStack_98;
        pppppppbStack_160 = pppppppbStack_90;
        pppppppbStack_158 = pppppppbStack_88;
        if (_DAT_143ca4288 != 0) goto LAB_141a77042;
        goto LAB_141a765b9;
      }
      pppppppbStack_98 = pppppppbStack_f0;
      if (2 < *_DAT_143ca8e90) {
        pppppppbStack_138 = arg0 + 10;
        pppppppbStack_148 = (byte *******)&UNK_143382270;
        pppppppbStack_140 = (byte *******)pdb_1402ed400;
        pcStack_130 = pdb_140f72a40;
        pppppppbStack_128 = &ppppppbStack_190;
        pppppppbStack_120 = (byte *******)pdb_140f72a40;
        pppppppbStack_f8 = (byte *******)0x0;
        pppppppbStack_f0 = (byte *******)&UNK_14338229d;
        pppppppbStack_e8 = (byte *******)0x2c;
        pcStack_e0 = (code *)0x0;
        pppppppbStack_d8 = (byte *******)&UNK_143382148;
        pppppppbStack_d0 = (byte *******)0x38;
        uStack_c8 = 3;
        uStack_c0 = &UNK_14338229d;
        uStack_b8 = 0x2c;
        uStack_b0 = 0x16200000001;
        puStack_a8 = &UNK_143382280;
        uStack_50._0_6_ = CONCAT15(1,(undefined5)uStack_50);
        uStack_a0 = (byte *******)&pppppppbStack_148;
        pdb_140f332f0(&uStack_59,&pppppppbStack_f8);
      }
      pppppppbStack_58 = pppppppbVar56;
      pdb_140989660(arg0);
      *uStack_68 = (byte ******)pppppppbStack_58;
      uStack_68[10] = ppppppbVar62;
      ppppppbVar62 = uStack_68[8];
      if (uStack_68[4] < uStack_68[8]) {
        ppppppbVar62 = uStack_68[4];
      }
      arg0 = uStack_68;
      if (ppppppbVar62 != (byte ******)0x0) {
        ppppppbVar9 = uStack_68[7];
        ppppppbVar70 = uStack_68[3];
        uVar53 = (ulonglong)((uint)ppppppbVar62 & 7);
        if (ppppppbVar62 < (byte ******)0x8) {
          uVar72 = 0;
        }
        else {
          uVar72 = 0;
          do {
            LOCK();
            ppppppbVar9[uVar72] =
                 (byte *****)((ulonglong)ppppppbVar9[uVar72] | (ulonglong)ppppppbVar70[uVar72]);
            UNLOCK();
            LOCK();
            ppppppbVar9[uVar72 + 1] =
                 (byte *****)
                 ((ulonglong)ppppppbVar9[uVar72 + 1] | (ulonglong)ppppppbVar70[uVar72 + 1]);
            UNLOCK();
            LOCK();
            ppppppbVar9[uVar72 + 2] =
                 (byte *****)
                 ((ulonglong)ppppppbVar9[uVar72 + 2] | (ulonglong)ppppppbVar70[uVar72 + 2]);
            UNLOCK();
            LOCK();
            ppppppbVar9[uVar72 + 3] =
                 (byte *****)
                 ((ulonglong)ppppppbVar9[uVar72 + 3] | (ulonglong)ppppppbVar70[uVar72 + 3]);
            UNLOCK();
            LOCK();
            ppppppbVar9[uVar72 + 4] =
                 (byte *****)
                 ((ulonglong)ppppppbVar9[uVar72 + 4] | (ulonglong)ppppppbVar70[uVar72 + 4]);
            UNLOCK();
            LOCK();
            ppppppbVar9[uVar72 + 5] =
                 (byte *****)
                 ((ulonglong)ppppppbVar9[uVar72 + 5] | (ulonglong)ppppppbVar70[uVar72 + 5]);
            UNLOCK();
            LOCK();
            ppppppbVar9[uVar72 + 6] =
                 (byte *****)
                 ((ulonglong)ppppppbVar9[uVar72 + 6] | (ulonglong)ppppppbVar70[uVar72 + 6]);
            UNLOCK();
            LOCK();
            ppppppbVar9[uVar72 + 7] =
                 (byte *****)
                 ((ulonglong)ppppppbVar9[uVar72 + 7] | (ulonglong)ppppppbVar70[uVar72 + 7]);
            UNLOCK();
            uVar72 = uVar72 + 8;
          } while (((ulonglong)ppppppbVar62 & 0xfffffffffffffff8) != uVar72);
          if (uVar53 == 0) goto LAB_141a76911;
        }
        uVar66 = 0;
        do {
          LOCK();
          ppppppbVar9[uVar72 + uVar66] =
               (byte *****)
               ((ulonglong)ppppppbVar9[uVar72 + uVar66] | (ulonglong)ppppppbVar70[uVar72 + uVar66]);
          UNLOCK();
          uVar66 = uVar66 + 1;
        } while (uVar53 != uVar66);
      }
    }
LAB_141a76911:
    ppppppbVar9 = arg0[10];
    pppppppbStack_148 = (byte *******)0x0;
    pppppppbStack_140 = (byte *******)0x8;
    pppppppbStack_138 = (byte *******)0x0;
    ppppppbVar70 = arg0[7];
    ppppppbVar62 = ppppppbVar70 + (longlong)arg0[8];
    arg0 = (byte *******)0x0;
    uVar72 = 0;
    uVar53 = 0;
    while (pppppppbVar56 = pppppppbStack_138, ppppppbVar70 != ppppppbVar62) {
      lVar52 = (longlong)arg0 << 6;
      arg0 = (byte *******)((longlong)arg0 + 1);
      while( true ) {
        pppppbVar63 = *ppppppbVar70;
        *ppppppbVar70 = (byte *****)0x0;
        ppppppbVar70 = ppppppbVar70 + 1;
        if (pppppbVar63 != (byte *****)0x0) break;
        lVar52 = lVar52 + 0x40;
        arg0 = (byte *******)((longlong)arg0 + 1);
        if (ppppppbVar70 == ppppppbVar62) goto LAB_141a76a5a;
      }
      do {
        iVar13 = 0;
        for (pppppbVar12 = pppppbVar63; ((ulonglong)pppppbVar12 & 1) == 0;
            pppppbVar12 = (byte *****)((ulonglong)pppppbVar12 >> 1 | 0x8000000000000000)) {
          iVar13 = iVar13 + 1;
        }
        pppppbVar63 = (byte *****)((ulonglong)((longlong)pppppbVar63 + -1) & (ulonglong)pppppbVar63)
        ;
        uVar51 = iVar13 + (int)lVar52;
        if (uVar51 < (uint)((ulonglong)ppppppbVar9 >> 5)) {
          uVar64 = (uint)uVar72;
          uVar66 = uVar53;
          if ((uVar64 != uVar51) && (uVar66 = (ulonglong)uVar51, (uint)uVar53 < uVar64)) {
            if (pppppppbStack_138 == pppppppbStack_148) {
              uStack_50 = CONCAT17(1,(undefined7)uStack_50);
              pppppppbStack_58 = (byte *******)CONCAT44(pppppppbStack_58._4_4_,uVar64);
              pppppppbStack_70 = (byte *******)CONCAT44(pppppppbStack_70._4_4_,(uint)uVar53);
              pppppppbStack_78 = pppppppbStack_138;
              pdb_142d8afd0(&pppppppbStack_148);
              uVar53 = (ulonglong)pppppppbStack_70 & 0xffffffff;
              uVar72 = (ulonglong)pppppppbStack_58 & 0xffffffff;
              pppppppbStack_138 = pppppppbStack_78;
            }
            pppppppbStack_140[(longlong)pppppppbStack_138 * 2] = (byte ******)(uVar53 << 5);
            pppppppbStack_140[(longlong)pppppppbStack_138 * 2 + 1] = (byte ******)(uVar72 << 5);
            pppppppbStack_138 = (byte *******)((longlong)pppppppbStack_138 + 1);
            uVar66 = (ulonglong)uVar51;
          }
          uVar72 = (ulonglong)(uVar51 + 1);
          uVar53 = uVar66;
        }
      } while (pppppbVar63 != (byte *****)0x0);
    }
LAB_141a76a5a:
    if ((uint)uVar53 < (uint)uVar72) {
      if (pppppppbStack_138 == pppppppbStack_148) {
        uStack_50 = CONCAT17(1,(undefined7)uStack_50);
        pdb_142d8afd0(&pppppppbStack_148);
      }
      pppppppbStack_140[(longlong)pppppppbVar56 * 2] = (byte ******)(uVar53 << 5);
      pppppppbStack_140[(longlong)pppppppbVar56 * 2 + 1] = (byte ******)(uVar72 << 5);
      pppppppbStack_138 = (byte *******)((longlong)pppppppbVar56 + 1);
    }
    uStack_50 = CONCAT17(1,(undefined7)uStack_50);
    cVar49 = pdb_140e94b40();
    pppppppbVar54 = uStack_68;
    if (cVar49 != '\0') {
      puVar65 = &UNK_1433823d8;
      puVar59 = &UNK_1433823a0;
      do {
        bVar4 = puVar65[-1];
        uVar51 = (uint)(char)bVar4;
        if ((char)bVar4 < '\0') {
          bVar5 = puVar65[-2];
          if ((char)bVar5 < -0x40) {
            bVar6 = puVar65[-3];
            if ((char)bVar6 < -0x40) {
              pbVar1 = puVar65 + -4;
              puVar65 = puVar65 + -4;
              uVar51 = bVar6 & 0x3f | (*pbVar1 & 7) << 6;
            }
            else {
              puVar65 = puVar65 + -3;
              uVar51 = bVar6 & 0xf;
            }
            uVar51 = bVar5 & 0x3f | uVar51 << 6;
          }
          else {
            puVar65 = puVar65 + -2;
            uVar51 = bVar5 & 0x1f;
          }
          uVar51 = (uint)(bVar4 & 0x3f) | uVar51 << 6;
          if (uVar51 != 0x5c) goto LAB_141a76b54;
LAB_141a76b66:
          if ((undefined *)0x38 < puVar65 + -0x14338239f) goto LAB_141a77181;
          lVar52 = 0x38 - (longlong)(puVar65 + -0x14338239f);
          puVar59 = puVar65 + 1;
          goto LAB_141a76b89;
        }
        puVar65 = puVar65 + -1;
        if (uVar51 == 0x5c) goto LAB_141a76b66;
LAB_141a76b54:
        if (uVar51 == 0x2f) goto LAB_141a76b66;
      } while (puVar65 != &UNK_1433823a0);
      lVar52 = 0x38;
LAB_141a76b89:
      uStack_50 = CONCAT17(1,(undefined7)uStack_50);
      arg0 = (byte *******)&pppppppbStack_f8;
      uVar55 = pdb_140f67ab0(pppppppbStack_138,arg0,0x14);
      if ((longlong)arg0 < 0) {
        uVar71 = 0;
LAB_141a76baf:
        uStack_50 = CONCAT17(1,(undefined7)uStack_50);
        pdb_142dc7e2a(uVar71,arg0);
        goto LAB_141a771df;
      }
      pppppppbStack_70 = arg0;
      if (arg0 == (byte *******)0x0) {
        pppppppbStack_58 = (byte *******)0x1;
      }
      else {
        pdb_14007ee60();
        uVar71 = 1;
        pppppppbVar56 = (byte *******)pub_1406abab0((ulonglong)arg0,1);
        if (pppppppbVar56 == (byte *******)0x0) goto LAB_141a76baf;
        pppppppbStack_58 = pppppppbVar56;
        pub_142e32760(pppppppbVar56,uVar55,arg0);
      }
      pppppppbVar54 = uStack_68;
      pppppppbVar56 = (byte *******)pdb_140e97000();
      if ((*(byte *)(pppppppbVar56 + 0xd) != 1) &&
         (pppppppbVar56 = (byte *******)pdb_142d8ec20(pppppppbVar56,0),
         pppppppbVar56 == (byte *******)0x0)) {
        pdb_142dc7890(&UNK_143326860);
        goto LAB_141a771df;
      }
      pppppppbVar57 = pppppppbStack_70;
      if (*pppppppbVar56 != (byte ******)0x0) {
        pdb_142dc8090(&UNK_143326a50);
        goto LAB_141a771df;
      }
      *pppppppbVar56 = (byte ******)0xffffffffffffffff;
      pppppppbStack_78 = pppppppbVar56;
      uStack_170 = pdb_140e94f10(pppppppbVar56 + 1,&UNK_1433823d8,0x17,puVar59,lVar52,
                                 pppppppbStack_58,pppppppbStack_70);
      *pppppppbStack_78 = (byte ******)((longlong)*pppppppbStack_78 + 1);
      if (pppppppbVar57 != (byte *******)0x0) {
        pub_1406abac0((byte *)pppppppbStack_58,(ulonglong)pppppppbVar57,1);
      }
    }
    pppppppbStack_78 = (byte *******)CONCAT71(pppppppbStack_78._1_7_,cVar49);
    pppppppbStack_f8 = (byte *******)0x0;
    pppppppbStack_f0 = (byte *******)0x8;
    pppppppbStack_e8 = (byte *******)0x0;
    pppppppbStack_188 = pppppppbStack_148;
    pppppppbStack_70 = pppppppbStack_140 + (longlong)pppppppbStack_138 * 2;
    pppppppbVar56 = (byte *******)0xffffffffffffffff;
    pppppppbVar61 = (byte *******)0x0;
    pppppppbStack_180 = pppppppbStack_140;
    pppppppbVar57 = pppppppbStack_140;
    while (pppppppbVar57 != pppppppbStack_70) {
      pppppppbStack_58 = pppppppbVar57 + 2;
      arg0 = (byte *******)pppppppbVar57[1];
      pppppppbVar74 = (byte *******)*pppppppbVar57;
      while (pppppppbVar57 = pppppppbStack_58, pppppppbVar54 = uStack_68, pppppppbVar74 < arg0) {
        pppppppbVar54 = (byte *******)(((ulonglong)pppppppbVar74 & 0xffffffffffffe000) + 0x2000);
        if (arg0 <= pppppppbVar54) {
          pppppppbVar54 = arg0;
        }
        if ((byte *******)((ulonglong)pppppppbVar74 >> 0xd) != pppppppbVar56) {
          if (pppppppbVar61 != (byte *******)0x0) {
            if (uStack_68[6] <= pppppppbVar56) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pppppppbVar56,uStack_68[6],&UNK_1433821b8);
            }
            if (*(int *)(uStack_68[5] + (longlong)pppppppbVar56 * 3 + 2) != 0) {
              pdb_142dc8110(&UNK_1433821d0,0x11,&UNK_1433821e8);
              goto LAB_141a771df;
            }
            ppppppbVar62 = uStack_68[5] + (longlong)pppppppbVar56 * 3;
            pdb_141b0d680(uStack_68,pppppbStack_150,*ppppppbVar62,ppppppbVar62[1],pppppppbStack_f0,
                          pppppppbStack_e8,(longlong)pppppppbVar56 << 0x13);
            pppppppbStack_e8 = (byte *******)0x0;
          }
          pppppppbVar61 = (byte *******)0x0;
          pppppppbVar56 = (byte *******)((ulonglong)pppppppbVar74 >> 0xd);
        }
        if (pppppppbVar61 == pppppppbStack_f8) {
          pdb_142d8afd0(&pppppppbStack_f8);
        }
        pppppppbStack_f0[(longlong)pppppppbVar61 * 2] =
             (byte ******)(ulonglong)((uint)pppppppbVar74 & 0x1fff);
        pppppppbStack_f0[(longlong)pppppppbVar61 * 2 + 1] =
             (byte ******)
             ((longlong)pppppppbVar54 - ((ulonglong)pppppppbVar74 & 0xffffffffffffe000));
        pppppppbVar61 = (byte *******)((longlong)pppppppbVar61 + 1);
        pppppppbVar74 = pppppppbVar54;
        pppppppbStack_e8 = pppppppbVar61;
      }
    }
    if (pppppppbStack_188 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_180,(longlong)pppppppbStack_188 << 4,8);
      pppppppbVar61 = pppppppbStack_e8;
    }
    if (pppppppbVar61 != (byte *******)0x0) {
      if (pppppppbVar54[6] <= pppppppbVar56) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pppppppbVar56,pppppppbVar54[6],&UNK_1433821b8);
      }
      if (*(int *)(pppppppbVar54[5] + (longlong)pppppppbVar56 * 3 + 2) != 0) {
        pdb_142dc8110(&UNK_1433821d0,0x11,&UNK_1433821e8);
        goto LAB_141a771df;
      }
      ppppppbVar62 = pppppppbVar54[5] + (longlong)pppppppbVar56 * 3;
      pppppppbVar56 = (byte *******)((longlong)pppppppbVar56 << 0x13);
      pdb_141b0d680(pppppppbVar54,pppppbStack_150,*ppppppbVar62,ppppppbVar62[1],pppppppbStack_f0,
                    pppppppbStack_e8,pppppppbVar56);
      pppppppbStack_e8 = (byte *******)0x0;
    }
    cVar49 = (char)pppppppbStack_78;
    if (pppppppbStack_f8 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_f0,(longlong)pppppppbStack_f8 << 4,8);
    }
    if (cVar49 != '\0') {
      uStack_50 = uStack_50 & 0xffffffffffffff;
      pppppppbVar54 = (byte *******)pdb_140e97000();
      if (*(byte *)(pppppppbVar54 + 0xd) != 1) {
        uStack_50 = uStack_50 & 0xffffffffffffff;
        pppppppbVar54 = (byte *******)pdb_142d8ec20(pppppppbVar54,0);
        if (pppppppbVar54 == (byte *******)0x0) {
          uStack_50 = uStack_50 & 0xffffffffffffff;
          pdb_142dc7890(&UNK_143326860);
          goto LAB_141a771df;
        }
      }
      if (*pppppppbVar54 != (byte ******)0x0) {
        uStack_50 = uStack_50 & 0xffffffffffffff;
        pdb_142dc8090(&UNK_143326a50);
        goto LAB_141a771df;
      }
      *pppppppbVar54 = (byte ******)0xffffffffffffffff;
      uStack_68 = pppppppbVar54;
      pdb_140e95370(pppppppbVar54 + 1,uStack_170);
      *uStack_68 = (byte ******)((longlong)*uStack_68 + 1);
    }
    if (uStack_50._6_1_ == '\0') {
      return;
    }
    plVar58 = (longlong *)pdb_140e97000();
    if (((char)plVar58[0xd] == '\x01') ||
       (plVar58 = (longlong *)pdb_142d8ec20(plVar58,0), plVar58 != (longlong *)0x0)) {
      if (*plVar58 == 0) {
        *plVar58 = -1;
        uStack_68 = (byte *******)plVar58;
        pdb_140e95370(plVar58 + 1,uStack_178);
        *uStack_68 = (byte ******)((longlong)*uStack_68 + 1);
        return;
      }
    }
    else {
      pdb_142dc7890(&UNK_143326860);
    }
    pdb_142dc8090(&UNK_143326a50);
LAB_141a77042:
    pppppppbStack_98 = (byte *******)CONCAT71(pppppppbStack_98._1_7_,1);
    pppppppbStack_f8 = pppppppbVar56;
    pdb_142dc7060(&DAT_143ca4288,0,&pppppppbStack_f8,&UNK_1433825e8,&UNK_1433822e0);
LAB_141a765b9:
    pdb_1400f0d40(&pppppppbStack_f8,_DAT_143cb2c80);
    if ((int)pppppppbStack_f8 == 1) {
      pppppppbStack_98 = pppppppbStack_f0;
      pppppppbStack_90 = (byte *******)CONCAT71(pppppppbStack_90._1_7_,pppppppbStack_e8._0_1_);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_1433822f8,0x13,&pppppppbStack_98,&UNK_143382738,&UNK_1433822e0);
    }
    pppppppbStack_58 = pppppppbStack_f0;
    pppppppbStack_70 = (byte *******)CONCAT71(pppppppbStack_70._1_7_,pppppppbStack_e8._0_1_);
    pdb_14007ee60();
    pppppppbVar54 = (byte *******)pub_1406abab0(0xf,1);
    if (pppppppbVar54 != (byte *******)0x0) {
      pbVar1 = (byte *)((longlong)pppppppbVar54 + 7);
      pbVar1[0] = 0x70;
      pbVar1[1] = 0x61;
      pbVar1[2] = 0x74;
      pbVar1[3] = 0x68;
      pbVar1[4] = 0x21;
      pbVar1[5] = 0x20;
      pbVar1[6] = 0x28;
      pbVar1[7] = 0x29;
      *pppppppbVar54 = (byte ******)0x705f656c75646f6d;
      pppppppbStack_f8 = (byte *******)0xf;
      pppppppbStack_e8 = (byte *******)0xf;
      pppppppbStack_f0 = pppppppbVar54;
      pdb_142d7f1b0(&pppppppbStack_f8,0xf,0x17,1,1);
      pppppppbVar57 = pppppppbStack_158;
      pppppppbVar54 = pppppppbStack_160;
      uVar55 = _UNK_143382313;
      *(undefined8 *)((longlong)pppppppbStack_f0 + (longlong)pppppppbStack_e8) = _DAT_14338230b;
      *(undefined8 *)((byte *)((longlong)pppppppbStack_f0 + (longlong)pppppppbStack_e8) + 8) =
           uVar55;
      pbVar1 = (byte *)((longlong)pppppppbStack_f0 + (longlong)pppppppbStack_e8 + 0xf);
      pbVar1[0] = 0x20;
      pbVar1[1] = 0x3a;
      pbVar1[2] = 0x3a;
      pbVar1[3] = 0x20;
      pbVar1[4] = 0x57;
      pbVar1[5] = 0x61;
      pbVar1[6] = 0x72;
      pbVar1[7] = 0x6e;
      pppppppbVar61 = (byte *******)((longlong)pppppppbStack_e8 + 0x17);
      pppppppbStack_98 = pppppppbStack_f8;
      pppppppbStack_90 = pppppppbStack_f0;
      pppppppbStack_88 = pppppppbVar61;
      if ((byte *******)((longlong)pppppppbStack_f8 - (longlong)pppppppbVar61) < pppppppbStack_158)
      {
        pdb_142d7f1b0(&pppppppbStack_98,pppppppbVar61,pppppppbStack_158,1,1);
LAB_141a766b1:
        pppppppbVar61 = pppppppbStack_88;
        pub_142e32760((byte *)((longlong)pppppppbStack_90 + (longlong)pppppppbStack_88),
                      pppppppbVar54);
      }
      else if (pppppppbStack_158 != (byte *******)0x0) goto LAB_141a766b1;
      pppppppbStack_e8 = (byte *******)((longlong)pppppppbVar57 + (longlong)pppppppbVar61);
      pppppppbStack_f8 = pppppppbStack_98;
      pppppppbStack_f0 = pppppppbStack_90;
      pppppppbStack_88 = pppppppbStack_e8;
      cVar49 = pdb_14192b470(pppppppbStack_58 + 1,&pppppppbStack_f8);
      if ((cVar49 == '\0') && (1 < *_DAT_143ca8e90)) {
        pppppppbStack_98 = (byte *******)&pppppppbStack_168;
        pppppppbStack_90 = (byte *******)pdb_140001020;
        pppppppbStack_f8 = (byte *******)0x0;
        pppppppbStack_f0 = (byte *******)&UNK_14338229d;
        pppppppbStack_e8 = (byte *******)0x2c;
        pcStack_e0 = (code *)0x0;
        pppppppbStack_d8 = (byte *******)&UNK_143382148;
        pppppppbStack_d0 = (byte *******)0x38;
        uStack_c8 = 2;
        uStack_c0 = &UNK_14338229d;
        uStack_b8 = 0x2c;
        uStack_b0 = 0x16f00000001;
        puStack_a8 = &UNK_143382322;
        uStack_a0 = pppppppbVar56;
        pdb_140f332f0(&uStack_59,&pppppppbStack_f8);
      }
      pppppppbVar56 = pppppppbStack_58;
      if ((((char)pppppppbStack_70 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) &&
         (cVar49 = pdb_142dc79e0(), cVar49 == '\0')) {
        *(byte *)((longlong)pppppppbVar56 + 1) = 1;
      }
      LOCK();
      bVar4 = *(byte *)pppppppbVar56;
      *(byte *)pppppppbVar56 = 0;
      UNLOCK();
      if (bVar4 == 2) {
        pdb_142dc6ca0();
      }
      if (pppppppbStack_168 != (byte *******)0x0) {
        pub_1406abac0((byte *)pppppppbStack_160,(ulonglong)pppppppbStack_168,1);
      }
      pppppppbVar56 = (byte *******)0x0;
      if ((byte *******)0x7 < pppppppbStack_148) {
        pppppppbVar56 = pppppppbStack_148 + -1;
      }
      if (pppppppbVar56 == (byte *******)0x0) {
        pppppppbVar54 = pppppppbStack_128;
        pppppppbVar57 = pppppppbStack_120;
        if (((pppppppbStack_148 < (byte *******)0x6) &&
            ((0x32UL >> ((ulonglong)pppppppbStack_148 & 0x3f) & 1) != 0)) &&
           (pppppppbStack_140 != (byte *******)0x0)) {
          pub_1406abac0((byte *)pppppppbStack_138,(ulonglong)pppppppbStack_140,1);
          pppppppbVar54 = pppppppbStack_128;
          pppppppbVar57 = pppppppbStack_120;
        }
      }
      else {
        pppppppbVar54 = pppppppbStack_140;
        pppppppbVar57 = pppppppbStack_138;
        if (pppppppbVar56 == (byte *******)0x1) {
          pdb_1404b83f0(&pppppppbStack_140);
          goto LAB_141a76911;
        }
      }
      if (pppppppbVar54 != (byte *******)0x0) {
        pub_1406abac0((byte *)pppppppbVar57,(ulonglong)pppppppbVar54,1);
      }
      goto LAB_141a76911;
    }
  }
  else {
    lVar67 = 0x50;
    lVar52 = pdb_141a7bd20(0x50);
    puVar59 = &UNK_143382758;
    if (lVar52 != 1) {
LAB_141a761ca:
      puVar65 = &UNK_1433823d8;
      puVar69 = &UNK_1433823a0;
      do {
        bVar4 = puVar65[-1];
        uVar51 = (uint)(char)bVar4;
        if ((char)bVar4 < '\0') {
          bVar5 = puVar65[-2];
          if ((char)bVar5 < -0x40) {
            bVar6 = puVar65[-3];
            if ((char)bVar6 < -0x40) {
              pbVar1 = puVar65 + -4;
              puVar65 = puVar65 + -4;
              uVar51 = bVar6 & 0x3f | (*pbVar1 & 7) << 6;
            }
            else {
              puVar65 = puVar65 + -3;
              uVar51 = bVar6 & 0xf;
            }
            uVar51 = bVar5 & 0x3f | uVar51 << 6;
          }
          else {
            puVar65 = puVar65 + -2;
            uVar51 = bVar5 & 0x1f;
          }
          uVar51 = (uint)(bVar4 & 0x3f) | uVar51 << 6;
          if (uVar51 != 0x5c) goto LAB_141a76254;
LAB_141a76265:
          puVar69 = puVar65 + -0x14338239f;
          if ((undefined *)0x38 < puVar69) {
            pdb_142dc8070(&UNK_1433823a0,0x38,puVar69,0x38,&UNK_143382808);
LAB_141a77181:
            uStack_50 = CONCAT17(1,(undefined7)uStack_50);
            pdb_142dc8070(&UNK_1433823a0,0x38);
            goto LAB_141a771df;
          }
          lVar52 = 0x38 - (longlong)puVar69;
          puVar69 = puVar65 + 1;
          goto LAB_141a76287;
        }
        puVar65 = puVar65 + -1;
        if (uVar51 == 0x5c) goto LAB_141a76265;
LAB_141a76254:
        if (uVar51 == 0x2f) goto LAB_141a76265;
      } while (puVar65 != &UNK_1433823a0);
      lVar52 = 0x38;
LAB_141a76287:
      pppppppbStack_98 = (byte *******)&UNK_143382698;
      pppppppbStack_90 = (byte *******)0x3a;
      pppppppbStack_148 = (byte *******)&pppppppbStack_98;
      pppppppbStack_140 = (byte *******)pdb_1402ed400;
      pdb_140f60760(&pppppppbStack_f8,&UNK_143382322,&pppppppbStack_148);
      pppppppbVar56 = pppppppbStack_e8;
      pppppppbStack_70 = pppppppbStack_f8;
      pppppppbStack_58 = pppppppbStack_f0;
      pppppppbVar54 = (byte *******)pdb_140e97000();
      if ((*(byte *)(pppppppbVar54 + 0xd) != 1) &&
         (pppppppbVar54 = (byte *******)pdb_142d8ec20(pppppppbVar54,0),
         pppppppbVar54 == (byte *******)0x0)) {
        pdb_142dc7890(&UNK_143326860);
        goto LAB_141a771df;
      }
      if (*pppppppbVar54 != (byte ******)0x0) {
        pdb_142dc8090(&UNK_143326a50);
        goto LAB_141a771df;
      }
      *pppppppbVar54 = (byte ******)0xffffffffffffffff;
      pppppppbStack_78 = pppppppbVar54;
      uStack_178 = pdb_140e94f10(pppppppbVar54 + 1,puVar59,lVar67,puVar69,lVar52,pppppppbStack_58,
                                 pppppppbVar56);
      *pppppppbStack_78 = (byte ******)((longlong)*pppppppbStack_78 + 1);
      if (pppppppbStack_70 != (byte *******)0x0) {
        pub_1406abac0((byte *)pppppppbStack_58,(ulonglong)pppppppbStack_70,1);
      }
      goto LAB_141a76360;
    }
    if (pppppbVar63 < (byte *****)0x51) {
      uVar53 = pdb_141a7bd20(pppppbVar63);
      if ((uVar53 & 1) != 0) {
        if (0x50 < (longlong)pppppbVar63 + 2U) {
          pdb_142dc8070(&UNK_143382758,0x50,(longlong)pppppbVar63 + 2U,0x50,&UNK_143382840);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        lVar67 = 0x4e - (longlong)pppppbVar63;
        puVar59 = &UNK_14338275a + (longlong)pppppbVar63;
      }
      goto LAB_141a761ca;
    }
    pdb_142dc8070(&UNK_143382758,0x50,0,pppppbVar63,&UNK_143382828);
  }
  pdb_142dc7e2a(1,0xf);
LAB_141a771df:
                    /* WARNING: Does not return */
  pcVar10 = (code *)invalidInstructionException();
  (*pcVar10)();
}

