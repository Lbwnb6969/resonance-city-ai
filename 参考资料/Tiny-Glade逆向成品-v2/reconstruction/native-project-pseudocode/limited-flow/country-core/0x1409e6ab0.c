// VA 0x1409e6ab0, PDB extent 5548 bytes
// country_core::startup::startup_nani::update_world_subset_material_args
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_nani.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001409ec8b3) overlaps instruction at (ram,0x0001409ec8b2)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::startup_nani::update_world_subset_material_args
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/startup_nani.rs
   Extent: 5548 */

void pdb_1409e6ab0(byte param_1,ulonglong param_2,longlong *param_3,longlong param_4,
                  undefined8 param_5,longlong param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
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
  ushort uVar44;
  undefined4 uVar45;
  ulonglong *puVar46;
  undefined8 uVar47;
  undefined8 ****ppppuVar48;
  undefined8 *****pppppuVar49;
  ulonglong uVar50;
  undefined8 *puVar51;
  byte *pbVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined *puVar55;
  uint *puVar56;
  undefined *puVar57;
  ulonglong uVar58;
  undefined1 *puVar59;
  byte *pbVar60;
  uint uVar61;
  byte *pbVar62;
  ulonglong uVar63;
  longlong in_FS_OFFSET;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
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
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [24];
  undefined8 ****ppppuStack_178;
  undefined **ppuStack_170;
  undefined *puStack_168;
  ulonglong uStack_160;
  undefined8 ****ppppuStack_158;
  undefined8 ****ppppuStack_150;
  undefined8 ***pppuStack_148;
  longlong lStack_140;
  byte *pbStack_138;
  undefined8 ****ppppuStack_130;
  undefined8 ****ppppuStack_128;
  undefined8 ***pppuStack_120;
  undefined *apuStack_118 [3];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  byte *pbStack_e0;
  undefined8 ****ppppuStack_d8;
  undefined8 ****ppppuStack_d0;
  undefined *puStack_c8;
  longlong lStack_c0;
  byte *pbStack_b8;
  longlong lStack_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 ***pppuStack_88;
  undefined8 uStack_80;
  
  puVar59 = auStack_198;
  uStack_80 = 0xfffffffffffffffe;
  if (SBORROW8(0,*param_3)) {
    uVar58 = param_2;
    pppuStack_88 = (undefined8 ***)(*(code *)param_3[1])(param_5);
    puVar57 = &UNK_1430330a0 + *(int *)(&UNK_1430330a0 + (ulonglong)param_1 * 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_1) {
    case 0:
      goto code_r0x0001409e6b69;
    case 1:
code_r0x0001409e7275:
      uVar47 = pdb_140df4400(&UNK_143031713,10);
      pppppuVar49 = (undefined8 *****)pdb_140a2e580(param_6,uVar47);
      uVar47 = pdb_140df4400(&UNK_14303171d,0x10);
      ppppuVar48 = (undefined8 ****)pdb_140a2e580(param_6,uVar47);
      uVar47 = pdb_140df4400(&UNK_14303172d,10);
      apuStack_118[0] = (undefined *)pdb_140a2e580(param_6,uVar47);
      ppppuStack_130 = &pppuStack_88;
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_143031737;
      lStack_c0 = 0x2e;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &ppppuStack_130;
      ppppuStack_128 = pppppuVar49;
      pppuStack_120 = ppppuVar48;
      pdb_14154f8b0(param_8,param_2,1,&ppppuStack_d8);
      goto code_r0x0001409e7cb6;
    case 2:
code_r0x0001409e70a2:
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_143031765;
      lStack_c0 = 0x39;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &pppuStack_88;
      pdb_14158d840(param_8,param_2,1,&ppppuStack_d8);
      goto code_r0x0001409e7cb6;
    case 3:
code_r0x0001409e713c:
      cVar42 = UNK_142e342ff;
      cVar41 = UNK_142e342fe;
      cVar40 = UNK_142e342fd;
      cVar39 = UNK_142e342fc;
      cVar38 = UNK_142e342fb;
      cVar37 = UNK_142e342fa;
      cVar36 = UNK_142e342f9;
      cVar35 = UNK_142e342f8;
      cVar34 = UNK_142e342f7;
      cVar33 = UNK_142e342f6;
      cVar32 = UNK_142e342f5;
      cVar31 = UNK_142e342f4;
      cVar30 = UNK_142e342f3;
      cVar29 = UNK_142e342f2;
      cVar28 = UNK_142e342f1;
      cVar27 = DAT_142e342f0;
      pbVar62 = (byte *)0x1b3a0e97773fd725;
      ppppuStack_d8 = (undefined8 ****)0x1b3a0e97773fd725;
      pbVar52 = pbStack_e0;
      if (*(longlong *)(param_6 + 0x60) != 0) {
        lVar3 = *(longlong *)(param_6 + 0x48);
        uVar58 = *(ulonglong *)(param_6 + 0x50);
        pbVar60 = (byte *)0x0;
        iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                                 CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                       CONCAT13(unaff_XMM7_Bd,
                                CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
        iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                                 CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                       CONCAT13(unaff_XMM7_Bh,
                                CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
        iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                                 CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                       CONCAT13(unaff_XMM7_Bl,
                                CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
        iVar10 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                                  CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                        CONCAT13(unaff_XMM7_Bp,
                                 CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
        while( true ) {
          uVar63 = (ulonglong)pbVar62 & uVar58;
          pcVar1 = (char *)(lVar3 + uVar63);
          cVar11 = *pcVar1;
          cVar12 = pcVar1[1];
          cVar13 = pcVar1[2];
          cVar14 = pcVar1[3];
          cVar15 = pcVar1[4];
          cVar16 = pcVar1[5];
          cVar17 = pcVar1[6];
          cVar18 = pcVar1[7];
          cVar19 = pcVar1[8];
          cVar20 = pcVar1[9];
          cVar21 = pcVar1[10];
          cVar22 = pcVar1[0xb];
          cVar23 = pcVar1[0xc];
          cVar24 = pcVar1[0xd];
          cVar25 = pcVar1[0xe];
          cVar26 = pcVar1[0xf];
          auVar64[0] = -(cVar11 == cVar27);
          auVar64[1] = -(cVar12 == cVar28);
          auVar64[2] = -(cVar13 == cVar29);
          auVar64[3] = -(cVar14 == cVar30);
          auVar64[4] = -(cVar15 == cVar31);
          auVar64[5] = -(cVar16 == cVar32);
          auVar64[6] = -(cVar17 == cVar33);
          auVar64[7] = -(cVar18 == cVar34);
          auVar64[8] = -(cVar19 == cVar35);
          auVar64[9] = -(cVar20 == cVar36);
          auVar64[10] = -(cVar21 == cVar37);
          auVar64[0xb] = -(cVar22 == cVar38);
          auVar64[0xc] = -(cVar23 == cVar39);
          auVar64[0xd] = -(cVar24 == cVar40);
          auVar64[0xe] = -(cVar25 == cVar41);
          auVar64[0xf] = -(cVar26 == cVar42);
          uVar44 = (ushort)(SUB161(auVar64 >> 7,0) & 1) |
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
                   (ushort)(auVar64[0xf] >> 7) << 0xf;
          uVar61 = (uint)uVar44;
          pbVar52 = pbStack_e0;
          while (pbStack_e0 = pbVar60, uVar44 != 0) {
            uVar5 = 0;
            for (uVar6 = uVar61; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
              uVar5 = uVar5 + 1;
            }
            uVar50 = uVar5 + uVar63 & uVar58;
            uStack_160 = param_2;
            cVar43 = pdb_140df4430(&ppppuStack_d8,lVar3 + uVar50 * -0x18 + -0x18);
            if (cVar43 != '\0') {
              uVar45 = pdb_140a2ec70(param_6,*(undefined8 *)(lVar3 + uVar50 * -0x18 + -0x10));
              cVar42 = UNK_142e346ff;
              cVar41 = UNK_142e346fe;
              cVar40 = UNK_142e346fd;
              cVar39 = UNK_142e346fc;
              cVar38 = UNK_142e346fb;
              cVar37 = UNK_142e346fa;
              cVar36 = UNK_142e346f9;
              cVar35 = UNK_142e346f8;
              cVar34 = UNK_142e346f7;
              cVar33 = UNK_142e346f6;
              cVar32 = UNK_142e346f5;
              cVar31 = UNK_142e346f4;
              cVar30 = UNK_142e346f3;
              cVar29 = UNK_142e346f2;
              cVar28 = UNK_142e346f1;
              cVar27 = UNK_142e346f0;
              pbStack_e0 = (byte *)CONCAT44(pbStack_e0._4_4_,uVar45);
              pbVar62 = (byte *)0x944782cd1ef22b9a;
              ppppuStack_d8 = (undefined8 ****)0x944782cd1ef22b9a;
              pbVar52 = pbStack_138;
              if (*(longlong *)(param_6 + 0x60) == 0) goto code_r0x0001409e7cfe;
              lVar3 = *(longlong *)(param_6 + 0x48);
              uVar58 = *(ulonglong *)(param_6 + 0x50);
              pbVar60 = (byte *)0x0;
              goto code_r0x0001409e7bc1;
            }
            uVar44 = (ushort)(uVar61 - 1) & (ushort)uVar61;
            uVar61 = CONCAT22((short)(uVar61 - 1 >> 0x10),uVar44);
            param_2 = uStack_160;
            pbVar60 = pbStack_e0;
            pbVar52 = pbStack_e0;
          }
          auVar66[0] = -(cVar11 == (char)iVar7);
          auVar66[1] = -(cVar12 == (char)((uint)iVar7 >> 8));
          auVar66[2] = -(cVar13 == (char)((uint)iVar7 >> 0x10));
          auVar66[3] = -(cVar14 == (char)((uint)iVar7 >> 0x18));
          auVar66[4] = -(cVar15 == (char)iVar8);
          auVar66[5] = -(cVar16 == (char)((uint)iVar8 >> 8));
          auVar66[6] = -(cVar17 == (char)((uint)iVar8 >> 0x10));
          auVar66[7] = -(cVar18 == (char)((uint)iVar8 >> 0x18));
          auVar66[8] = -(cVar19 == (char)iVar9);
          auVar66[9] = -(cVar20 == (char)((uint)iVar9 >> 8));
          auVar66[10] = -(cVar21 == (char)((uint)iVar9 >> 0x10));
          auVar66[0xb] = -(cVar22 == (char)((uint)iVar9 >> 0x18));
          auVar66[0xc] = -(cVar23 == (char)iVar10);
          auVar66[0xd] = -(cVar24 == (char)((uint)iVar10 >> 8));
          auVar66[0xe] = -(cVar25 == (char)((uint)iVar10 >> 0x10));
          auVar66[0xf] = -(cVar26 == (char)((uint)iVar10 >> 0x18));
          if ((((((((((((((((SUB161(auVar66 >> 7,0) & 1) != 0 || (SUB161(auVar66 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar66 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar66 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar66 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar66 >> 0x2f,0) & 1) != 0) || (SUB161(auVar66 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar66 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar66 >> 0x47,0) & 1) != 0) || (SUB161(auVar66 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar66 >> 0x57,0) & 1) != 0) || (SUB161(auVar66 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar66 >> 0x67,0) & 1) != 0) || (SUB161(auVar66 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar66 >> 0x77,0) & 1) != 0) || auVar66[0xf] < '\0') break;
          pbVar62 = pbStack_e0 + uVar63 + 0x10;
          pbVar60 = pbStack_e0 + 0x10;
          pbStack_e0 = pbVar52;
        }
      }
      pbStack_e0 = pbVar52;
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_1430317a0);
    case 4:
code_r0x0001409e6e8c:
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_14303180f;
      lStack_c0 = 0x39;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &pppuStack_88;
      pdb_1415bdf20(param_8,param_2,1,&ppppuStack_d8);
      goto code_r0x0001409e7cb6;
    case 5:
code_r0x0001409e7425:
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_143031848;
      lStack_c0 = 0x34;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &pppuStack_88;
      pdb_141578450(param_8,param_2,1,&ppppuStack_d8);
      goto code_r0x0001409e7cb6;
    case 6:
code_r0x0001409e7561:
      uVar47 = pdb_140df4400(&UNK_14303187c,0x15);
      ppppuVar48 = (undefined8 ****)pdb_140a2e580(param_6,uVar47);
      uVar47 = pdb_140df4400(&UNK_143031891,0x15);
      ppppuStack_128 = (undefined8 ****)pdb_140a2e580(param_6,uVar47);
      ppppuStack_130 = &pppuStack_88;
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_1430318a6;
      lStack_c0 = 0x2e;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &ppppuStack_130;
      pppuStack_120 = ppppuVar48;
      pdb_141563930(param_8,param_2,1,&ppppuStack_d8);
      goto code_r0x0001409e7cb6;
    case 7:
code_r0x0001409e7205:
      uVar47 = pdb_140df4400(&UNK_1430318d4,0x12);
      ppuStack_170 = (undefined **)pdb_140a2e580(param_6,uVar47);
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_1430318e6;
      lStack_c0 = 0x2a;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &pppuStack_88;
      pdb_141555d70(param_8,param_2,1,&ppppuStack_d8);
      goto code_r0x0001409e7cb6;
    case 8:
code_r0x0001409e770b:
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_143031910;
      lStack_c0 = 0x25;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &pppuStack_88;
      pdb_1415a8240(param_8,param_2,1,&ppppuStack_d8);
      goto code_r0x0001409e7cb6;
    case 9:
code_r0x0001409e6f75:
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_143031935;
      lStack_c0 = 0x26;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &pppuStack_88;
      pdb_141557650(param_8,param_2,1,&ppppuStack_d8);
      goto code_r0x0001409e7cb6;
    case 10:
code_r0x0001409e764a:
      puVar57 = &UNK_14303195b;
      if (*(char *)(param_4 + 0x98) == '\x04') {
        puVar57 = &UNK_14303196c;
      }
      puVar55 = &UNK_14303197d;
      if (*(char *)(param_4 + 0x98) != '\x03') {
        puVar55 = puVar57;
      }
      uVar47 = pdb_140df4400(&UNK_14303198e,10);
      pppppuVar49 = (undefined8 *****)pdb_140a2e580(param_6,uVar47);
      uVar47 = pdb_140df4400(puVar55,0x11);
      pppuStack_120 = (undefined8 ***)pdb_140a2e580(param_6,uVar47);
      ppppuStack_130 = &pppuStack_88;
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_143031998;
      lStack_c0 = 0x24;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &ppppuStack_130;
      ppppuStack_128 = pppppuVar49;
      pdb_141552ad0(param_8,param_2,1,&ppppuStack_d8);
      goto code_r0x0001409e7cb6;
    case 0xb:
code_r0x0001409e6dcb:
      uVar47 = pdb_140df4400(&UNK_1430318d4,0x12);
      pppppuVar49 = (undefined8 *****)pdb_140a2e580(param_6,uVar47);
      uVar47 = pdb_140df4400(&UNK_1430319bc,0x15);
      ppppuVar48 = (undefined8 ****)pdb_140a2e580(param_6,uVar47);
      uVar47 = pdb_140df4400(&UNK_1430319d1,0xe);
      apuStack_118[0] = (undefined *)pdb_140a2e580(param_6,uVar47);
      ppppuStack_130 = &pppuStack_88;
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_1430319df;
      lStack_c0 = 0x2c;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &ppppuStack_130;
      ppppuStack_128 = pppppuVar49;
      pppuStack_120 = ppppuVar48;
      pdb_1415bad00(param_8,param_2,1,&ppppuStack_d8);
      goto code_r0x0001409e7cb6;
    case 0xc:
code_r0x0001409e6ed9:
      uVar47 = pdb_140df4400(&UNK_1430319bc,0x15);
      pppppuVar49 = (undefined8 *****)pdb_140a2e580(param_6,uVar47);
      uVar47 = pdb_140df4400(&UNK_1430319d1,0xe);
      pppuStack_120 = (undefined8 ***)pdb_140a2e580(param_6,uVar47);
      ppppuStack_130 = &pppuStack_88;
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_143031a0b;
      lStack_c0 = 0x32;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &ppppuStack_130;
      ppppuStack_128 = pppppuVar49;
      pdb_141597570(param_8,param_2,1,&ppppuStack_d8);
      goto code_r0x0001409e7cb6;
    case 0xd:
code_r0x0001409e74f1:
      uVar47 = pdb_140df4400(&UNK_143031a3d,0xf);
      ppuStack_170 = (undefined **)pdb_140a2e580(param_6,uVar47);
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_143031a4c;
      lStack_c0 = 0x30;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &pppuStack_88;
      pdb_141545b90(param_8,param_2,1,&ppppuStack_d8);
      goto code_r0x0001409e7cb6;
    case 0xe:
code_r0x0001409e6d5b:
      uVar47 = pdb_140df4400(&UNK_143031a7c,0xc);
      ppuStack_170 = (undefined **)pdb_140a2e580(param_6,uVar47);
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_143031a88;
      lStack_c0 = 0x2d;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &pppuStack_88;
      pdb_1415bc640(param_8,param_2,1,&ppppuStack_d8);
      goto code_r0x0001409e7cb6;
    case 0xf:
code_r0x0001409e70ef:
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_143031ab5;
      lStack_c0 = 0x30;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &pppuStack_88;
      pdb_1415442e0(param_8,param_2,1,&ppppuStack_d8);
      goto code_r0x0001409e7cb6;
    case 0x10:
code_r0x0001409e6cbf:
      uVar47 = pdb_140df4400(&UNK_143031ae5,0xe);
      ppppuVar48 = (undefined8 ****)pdb_140a2e580(param_6,uVar47);
      uVar47 = pdb_140df4400(&UNK_143031af3,6);
      ppppuStack_128 = (undefined8 ****)pdb_140a2e580(param_6,uVar47);
      ppppuStack_130 = &pppuStack_88;
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_143031af9;
      lStack_c0 = 0x27;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &ppppuStack_130;
      pppuStack_120 = ppppuVar48;
      pdb_14159d8a0(param_8,param_2,1,&ppppuStack_d8);
      goto code_r0x0001409e7cb6;
    case 0x11:
code_r0x0001409e7336:
      uVar47 = pdb_140df4400(&UNK_143031b20,0xc);
      ppuStack_170 = (undefined **)pdb_140a2e580(param_6,uVar47);
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_143031b2c;
      lStack_c0 = 0x25;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &pppuStack_88;
      pdb_1415ab9d0(param_8,param_2,1,&ppppuStack_d8);
      goto code_r0x0001409e7cb6;
    case 0x12:
code_r0x0001409e75fd:
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_143031b51;
      lStack_c0 = 0x25;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &pppuStack_88;
      pdb_14157b5b0(param_8,param_2,1,&ppppuStack_d8);
      goto code_r0x0001409e7cb6;
    case 0x13:
code_r0x0001409e7863:
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_143031b76;
      lStack_c0 = 0x2c;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &pppuStack_88;
      pdb_141586ea0(param_8,param_2,1,&ppppuStack_d8);
      goto code_r0x0001409e7cb6;
    case 0x14:
code_r0x0001409e73a6:
      puVar51 = (undefined8 *)pdb_140bf45b0(param_5,&UNK_14331b798);
      if ((puVar51 == (undefined8 *)0x0) ||
         (ppuStack_170 = (undefined **)(**(code **)(puVar51[1] + 0x18))(*puVar51),
         ppuStack_170 == (undefined **)0x0)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143031508);
      }
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_143031ba2;
      lStack_c0 = 0x24;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &pppuStack_88;
      pdb_1415494c0(param_8,param_2,1,&ppppuStack_d8);
      goto code_r0x0001409e7cb6;
    case 0x15:
code_r0x0001409e7472:
      puVar51 = (undefined8 *)pdb_140bf45b0(param_5,&UNK_14331b798);
      if ((puVar51 == (undefined8 *)0x0) ||
         (ppuStack_170 = (undefined **)(**(code **)(puVar51[1] + 0x18))(*puVar51),
         ppuStack_170 == (undefined **)0x0)) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc8150(&UNK_143031508);
      }
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_143031bc6;
      lStack_c0 = 0x2d;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &pppuStack_88;
      pdb_1415b7b30(param_8,param_2,1,&ppppuStack_d8);
      goto code_r0x0001409e7cb6;
    case 0x16:
code_r0x0001409e7758:
      uVar47 = pdb_140df4400(&UNK_1430318d4,0x12);
      uVar47 = pdb_140a2e580(param_6,uVar47);
      uVar53 = pdb_140df4400(&UNK_143031bf3,0x12);
      puVar57 = (undefined *)pdb_140a2e580(param_6,uVar53);
      uVar53 = pdb_140df4400(&UNK_1430319bc,0x15);
      uVar53 = pdb_140a2e580(param_6,uVar53);
      uVar54 = pdb_140df4400(&UNK_143031c05,0x17);
      pbVar52 = (byte *)pdb_140a2e580(param_6,uVar54);
      uVar54 = pdb_140df4400(&UNK_1430319d1,0xe);
      lStack_b0 = pdb_140a2e580(param_6,uVar54);
      ppppuStack_d8 = &pppuStack_88;
      ppppuStack_128 = (undefined8 *****)0x8000000000000000;
      pppuStack_120 = (undefined8 ***)&UNK_143031c1c;
      apuStack_118[0] = (undefined *)0x31;
      ppppuStack_130 = (undefined8 *****)0x0;
      ppppuStack_178 = &ppppuStack_d8;
      ppppuStack_d0 = (undefined8 ****)uVar47;
      puStack_c8 = puVar57;
      lStack_c0 = uVar53;
      pbStack_b8 = pbVar52;
      pdb_141558f00(param_8,param_2,1,&ppppuStack_130);
      goto code_r0x0001409e7cb6;
    case 0x17:
code_r0x0001409e78b0:
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_143031c4d;
      lStack_c0 = 0x2d;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &pppuStack_88;
      pdb_14157ddc0(param_8,param_2,1,&ppppuStack_d8);
      goto code_r0x0001409e7cb6;
    case 0x18:
code_r0x0001409e7032:
      uVar47 = pdb_140df4400(&UNK_1430318d4,0x12);
      ppuStack_170 = (undefined **)pdb_140a2e580(param_6,uVar47);
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_143031c7a;
      lStack_c0 = 0x2c;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &pppuStack_88;
      pdb_1415a62d0(param_8,param_2,1,&ppppuStack_d8);
      goto code_r0x0001409e7cb6;
    case 0x19:
code_r0x0001409e6fc2:
      uVar47 = pdb_140df4400(&UNK_143031ca6,0xe);
      ppuStack_170 = (undefined **)pdb_140a2e580(param_6,uVar47);
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_143031cb4;
      lStack_c0 = 0x38;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &pppuStack_88;
      pdb_1415511f0(param_8,param_2,1,&ppppuStack_d8);
      goto code_r0x0001409e7cb6;
    case 0x1a:
code_r0x0001409e7a95:
      uVar47 = pdb_140df4400(&UNK_1430318d4,0x12);
      uVar47 = pdb_140a2e580(param_6,uVar47);
      uVar53 = pdb_140df4400(&UNK_143031bf3,0x12);
      puVar57 = (undefined *)pdb_140a2e580(param_6,uVar53);
      uVar53 = pdb_140df4400(&UNK_1430319bc,0x15);
      uVar53 = pdb_140a2e580(param_6,uVar53);
      uVar54 = pdb_140df4400(&UNK_143031c05,0x17);
      pbStack_b8 = (byte *)pdb_140a2e580(param_6,uVar54);
      ppppuStack_d8 = &pppuStack_88;
      ppppuStack_128 = (undefined8 *****)0x8000000000000000;
      pppuStack_120 = (undefined8 ***)&UNK_143031cec;
      apuStack_118[0] = (undefined *)0x31;
      ppppuStack_130 = (undefined8 *****)0x0;
      ppppuStack_178 = &ppppuStack_d8;
      ppppuStack_d0 = (undefined8 ****)uVar47;
      puStack_c8 = puVar57;
      lStack_c0 = uVar53;
      pdb_1415543f0(param_8,param_2,1,&ppppuStack_130);
      goto code_r0x0001409e7cb6;
    case 0x1b:
code_r0x0001409e6c4f:
      uVar47 = pdb_140df4400(&UNK_143031d1d,4);
      ppuStack_170 = (undefined **)pdb_140a2e580(param_6,uVar47);
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_143031d21;
      lStack_c0 = 0x2a;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &pppuStack_88;
      pdb_1415b6250(param_8,param_2,1,&ppppuStack_d8);
      goto code_r0x0001409e7cb6;
    case 0x1c:
code_r0x0001409e78fd:
      pdb_140b22480(&ppppuStack_d8,param_7,param_6);
      lVar3 = lStack_b0;
      pppuStack_148 = ppppuStack_d8;
      pbStack_e0 = (byte *)ppppuStack_d0;
      lStack_140 = lStack_c0;
      pbStack_138 = pbStack_b8;
      ppppuStack_178 = (undefined8 ****)pdb_140e1d070((undefined *)((longlong)puStack_c8 << 5),0x10)
      ;
      ppuStack_170 = (undefined **)pbStack_e0;
      puStack_168 = (undefined *)((longlong)puStack_c8 << 5);
      pdb_1415d1d50(&ppppuStack_130,param_8,&UNK_143031d4b,0x13);
      if ((int)ppppuStack_130 != 0xb) {
        uStack_98 = uStack_f0;
        uStack_90 = uStack_e8;
        uStack_a8 = uStack_100;
        uStack_a4 = uStack_fc;
        uStack_a0 = uStack_f8;
        uStack_9c = uStack_f4;
        ppppuStack_d8 = ppppuStack_130;
        ppppuStack_d0 = ppppuStack_128;
        ppppuStack_178 = (undefined8 ****)&UNK_143031da0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143032ac0,0x2b,&ppppuStack_d8,&UNK_143032af0);
      }
      ppppuStack_150 = ppppuStack_128;
      ppppuStack_178 = (undefined8 ****)pdb_140e1d070((undefined *)(lVar3 * 0xc),0x10);
      ppuStack_170 = (undefined **)pbStack_138;
      puStack_168 = (undefined *)(lVar3 * 0xc);
      pdb_1415d1d50(&ppppuStack_130,param_8,&UNK_143031d5e,0x17);
      if ((int)ppppuStack_130 != 0xb) {
        uStack_98 = uStack_f0;
        uStack_90 = uStack_e8;
        uStack_a8 = uStack_100;
        uStack_a4 = uStack_fc;
        uStack_a0 = uStack_f8;
        uStack_9c = uStack_f4;
        ppppuStack_d8 = ppppuStack_130;
        ppppuStack_d0 = ppppuStack_128;
        ppppuStack_178 = (undefined8 ****)&UNK_143031da0;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143032ac0,0x2b,&ppppuStack_d8,&UNK_143032af0);
      }
      ppppuStack_158 = ppppuStack_128;
      ppppuStack_130 = &ppppuStack_150;
      ppppuStack_128 = &ppppuStack_158;
      pppuStack_120 = &pppuStack_88;
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_143031d75;
      lStack_c0 = 0x26;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &ppppuStack_130;
      pdb_1415b2a10(param_8,param_2,1,&ppppuStack_d8);
      pdb_140989660(&ppppuStack_158);
      pdb_140989660(&ppppuStack_150);
      if (lStack_140 != 0) {
        pub_1406abac0(pbStack_138,lStack_140 * 0xc,4);
      }
      if ((undefined8 ****)pppuStack_148 != (undefined8 ****)0x0) {
        pub_1406abac0(pbStack_e0,(longlong)pppuStack_148 << 5,4);
      }
      goto code_r0x0001409e7cb6;
    case 0x1d:
code_r0x0001409ec796:
      puVar55 = &UNK_1430330a0;
      UNK_1430330a0 = UNK_1430330a0 + -0x60;
      apuStack_118[0] = puVar57 + 8;
      puStack_168 = &UNK_143032c00;
      break;
    case 0x1e:
code_r0x0001409ec82f:
      pcVar4 = (code *)swi(99);
      uVar58 = (*pcVar4)();
      puVar59 = auStack_190;
      uVar45 = (undefined4)
               CONCAT71((int7)((ulonglong)puVar57 >> 8),
                        (char)puVar57 + *(char *)(in_FS_OFFSET + (uVar58 - 0x77)));
      puVar56 = (uint *)(uVar58 & 0xffffffffffffff20);
code_r0x0001409ec821:
      *(undefined8 *)(puVar59 + -8) = param_8;
      *(char *)((longlong)puVar56 + -0x7d) = *(char *)((longlong)puVar56 + -0x7d) + (char)uVar45;
      *puVar56 = *puVar56 >> 8 | *puVar56 << 0x18;
      *(undefined4 *)(puVar59 + 0x28) = uVar45;
      *(undefined **)(puVar59 + 0x18) = &UNK_143032c00;
      *(undefined **)(puVar59 + -0x10) = &UNK_1409ec852;
      pdb_140f66090(puVar56,&UNK_143032c7e,0x1a,puVar59 + 0x28);
      return;
    case 0x1f:
      goto code_r0x0001409ec7e5;
    case 0x20:
code_r0x0001409ec7fd:
                    /* WARNING: Could not recover jumptable at 0x0001409ec808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(uVar58 + (longlong)param_3))
                (CONCAT71((int7)((ulonglong)puVar57 >> 8),(char)puVar57 + puVar57[99]),
                 (code *)(uVar58 + (longlong)param_3));
      return;
    case 0x21:
code_r0x0001409ec7af:
      puVar55 = &UNK_143033020;
      break;
    case 0x22:
code_r0x0001409ec864:
      UNK_143033029 = UNK_143033029 + (char)puVar57;
      _UNK_143033023 = _UNK_143033023 >> 4 | _UNK_143033023 << 0x1c;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0x23:
code_r0x0001409ec899:
      _UNK_143033023 = _UNK_143033023 >> 4 | _UNK_143033023 << 0x1c;
      puVar55 = &UNK_143033057;
      UNK_143032fda = UNK_143032fda + (char)puVar57;
      _UNK_143033057 = _UNK_143033057 >> 8 | _UNK_143033057 << 0x18;
      puStack_168 = (undefined *)CONCAT44(puStack_168._4_4_,(int)puVar57);
      ppppuStack_178 = (undefined8 ****)&UNK_143032c00;
code_r0x0001409ec8b8:
      pdb_140f66090(puVar55,&UNK_143032c3d,0xb,&puStack_168);
      return;
    case 0x24:
code_r0x0001409ec816:
      uVar45 = SUB84(puVar57,0);
      puVar56 = (uint *)&UNK_1430330a0;
      UNK_143033029 = UNK_143033029 + (char)puVar57;
      _UNK_143033023 = _UNK_143033023 >> 4 | _UNK_143033023 << 0x1c;
      if ((char)((ulonglong)puVar57 >> 8) <= (char)puVar57) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x0001409ec821;
    case 0x25:
code_r0x0001409ec8b2:
      puVar55 = &UNK_143033020;
      goto code_r0x0001409ec8b8;
    }
    ppuStack_170 = apuStack_118;
    ppppuStack_178 = (undefined8 ****)0x4;
    pdb_140f66e50(puVar55,&UNK_143032c20,0xe,&UNK_143032c2e);
code_r0x0001409ec7e5:
    return;
  }
  puVar46 = (ulonglong *)(**(code **)(param_3[0xf] + 0x40))(param_3[0xe]);
  pppuStack_88 = (undefined8 ***)*puVar46;
  uVar58 = (ulonglong)pppuStack_88 & 0xffffffffffffffc0;
  LOCK();
  piVar2 = (int *)(uVar58 + 0x10 + (ulonglong)((uint)pppuStack_88 & 0x3f) * 4);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  puVar57 = &UNK_1430330a0 + *(int *)(&UNK_1430330a0 + (ulonglong)param_1 * 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1) {
  case 1:
    goto code_r0x0001409e7275;
  case 2:
    goto code_r0x0001409e70a2;
  case 3:
    goto code_r0x0001409e713c;
  case 4:
    goto code_r0x0001409e6e8c;
  case 5:
    goto code_r0x0001409e7425;
  case 6:
    goto code_r0x0001409e7561;
  case 7:
    goto code_r0x0001409e7205;
  case 8:
    goto code_r0x0001409e770b;
  case 9:
    goto code_r0x0001409e6f75;
  case 10:
    goto code_r0x0001409e764a;
  case 0xb:
    goto code_r0x0001409e6dcb;
  case 0xc:
    goto code_r0x0001409e6ed9;
  case 0xd:
    goto code_r0x0001409e74f1;
  case 0xe:
    goto code_r0x0001409e6d5b;
  case 0xf:
    goto code_r0x0001409e70ef;
  case 0x10:
    goto code_r0x0001409e6cbf;
  case 0x11:
    goto code_r0x0001409e7336;
  case 0x12:
    goto code_r0x0001409e75fd;
  case 0x13:
    goto code_r0x0001409e7863;
  case 0x14:
    goto code_r0x0001409e73a6;
  case 0x15:
    goto code_r0x0001409e7472;
  case 0x16:
    goto code_r0x0001409e7758;
  case 0x17:
    goto code_r0x0001409e78b0;
  case 0x18:
    goto code_r0x0001409e7032;
  case 0x19:
    goto code_r0x0001409e6fc2;
  case 0x1a:
    goto code_r0x0001409e7a95;
  case 0x1b:
    goto code_r0x0001409e6c4f;
  case 0x1c:
    goto code_r0x0001409e78fd;
  case 0x1d:
    goto code_r0x0001409ec796;
  case 0x1e:
    goto code_r0x0001409ec82f;
  case 0x1f:
    goto code_r0x0001409ec7e5;
  case 0x20:
    goto code_r0x0001409ec7fd;
  case 0x21:
    goto code_r0x0001409ec7af;
  case 0x22:
    goto code_r0x0001409ec864;
  case 0x23:
    goto code_r0x0001409ec899;
  case 0x24:
    goto code_r0x0001409ec816;
  case 0x25:
    goto code_r0x0001409ec8b2;
  }
code_r0x0001409e6b69:
  uVar47 = pdb_140df4400(&UNK_143031698,0x12);
  pbVar52 = (byte *)pdb_140a2e580(param_6,uVar47);
  uVar47 = pdb_140df4400(&UNK_1430316aa,0xc);
  uVar47 = pdb_140a2e580(param_6,uVar47);
  uVar53 = pdb_140df4400(&UNK_1430316b6,0x14);
  puVar57 = (undefined *)pdb_140a2e580(param_6,uVar53);
  uVar53 = pdb_140df4400(&UNK_1430316ca,0x1a);
  lStack_c0 = pdb_140a2e580(param_6,uVar53);
  ppppuStack_d8 = &pppuStack_88;
  ppppuStack_128 = (undefined8 *****)0x8000000000000000;
  pppuStack_120 = (undefined8 ***)&UNK_1430316e4;
  apuStack_118[0] = (undefined *)0x2f;
  ppppuStack_130 = (undefined8 *****)0x0;
  ppppuStack_178 = &ppppuStack_d8;
  ppppuStack_d0 = (undefined8 ****)uVar47;
  puStack_c8 = puVar57;
  pbStack_b8 = pbVar52;
  pdb_1415711a0(param_8,param_2,1,&ppppuStack_130);
code_r0x0001409e7cb6:
  pdb_140989660(&pppuStack_88);
  return;
code_r0x0001409e7bc1:
  uVar63 = (ulonglong)pbVar62 & uVar58;
  pcVar1 = (char *)(lVar3 + uVar63);
  cVar11 = *pcVar1;
  cVar12 = pcVar1[1];
  cVar13 = pcVar1[2];
  cVar14 = pcVar1[3];
  cVar15 = pcVar1[4];
  cVar16 = pcVar1[5];
  cVar17 = pcVar1[6];
  cVar18 = pcVar1[7];
  cVar19 = pcVar1[8];
  cVar20 = pcVar1[9];
  cVar21 = pcVar1[10];
  cVar22 = pcVar1[0xb];
  cVar23 = pcVar1[0xc];
  cVar24 = pcVar1[0xd];
  cVar25 = pcVar1[0xe];
  cVar26 = pcVar1[0xf];
  auVar65[0] = -(cVar11 == cVar27);
  auVar65[1] = -(cVar12 == cVar28);
  auVar65[2] = -(cVar13 == cVar29);
  auVar65[3] = -(cVar14 == cVar30);
  auVar65[4] = -(cVar15 == cVar31);
  auVar65[5] = -(cVar16 == cVar32);
  auVar65[6] = -(cVar17 == cVar33);
  auVar65[7] = -(cVar18 == cVar34);
  auVar65[8] = -(cVar19 == cVar35);
  auVar65[9] = -(cVar20 == cVar36);
  auVar65[10] = -(cVar21 == cVar37);
  auVar65[0xb] = -(cVar22 == cVar38);
  auVar65[0xc] = -(cVar23 == cVar39);
  auVar65[0xd] = -(cVar24 == cVar40);
  auVar65[0xe] = -(cVar25 == cVar41);
  auVar65[0xf] = -(cVar26 == cVar42);
  uVar44 = (ushort)(SUB161(auVar65 >> 7,0) & 1) | (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar65 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar65 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar65 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar65 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar65 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar65 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar65 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar65 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar65 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar65 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar65 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar65 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe | (ushort)(auVar65[0xf] >> 7) << 0xf;
  uVar61 = (uint)uVar44;
  pbVar52 = pbStack_138;
  while (pbStack_138 = pbVar60, uVar44 != 0) {
    uVar5 = 0;
    for (uVar6 = uVar61; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar5 = uVar5 + 1;
    }
    uVar50 = uVar5 + uVar63 & uVar58;
    cVar43 = pdb_140df4430(&ppppuStack_d8,lVar3 + uVar50 * -0x18 + -0x18);
    if (cVar43 != '\0') {
      uVar45 = pdb_140a2ec70(param_6,*(undefined8 *)(lVar3 + uVar50 * -0x18 + -0x10));
      ppppuStack_130 = &pppuStack_88;
      ppppuStack_128 = (undefined8 ****)CONCAT44(uVar45,(int)pbStack_e0);
      ppppuStack_d0 = (undefined8 ****)0x8000000000000000;
      puStack_c8 = &UNK_1430317d0;
      lStack_c0 = 0x3f;
      ppppuStack_d8 = (undefined8 ****)0x0;
      ppppuStack_178 = &ppppuStack_130;
      pdb_1415661d0(param_8,uStack_160,1,&ppppuStack_d8);
      goto code_r0x0001409e7cb6;
    }
    uVar44 = (ushort)(uVar61 - 1) & (ushort)uVar61;
    uVar61 = CONCAT22((short)(uVar61 - 1 >> 0x10),uVar44);
    pbVar60 = pbStack_138;
    pbVar52 = pbStack_138;
  }
  auVar67[0] = -(cVar11 == -1);
  auVar67[1] = -(cVar12 == -1);
  auVar67[2] = -(cVar13 == -1);
  auVar67[3] = -(cVar14 == -1);
  auVar67[4] = -(cVar15 == -1);
  auVar67[5] = -(cVar16 == -1);
  auVar67[6] = -(cVar17 == -1);
  auVar67[7] = -(cVar18 == -1);
  auVar67[8] = -(cVar19 == -1);
  auVar67[9] = -(cVar20 == -1);
  auVar67[10] = -(cVar21 == -1);
  auVar67[0xb] = -(cVar22 == -1);
  auVar67[0xc] = -(cVar23 == -1);
  auVar67[0xd] = -(cVar24 == -1);
  auVar67[0xe] = -(cVar25 == -1);
  auVar67[0xf] = -(cVar26 == -1);
  if ((((((((((((((((SUB161(auVar67 >> 7,0) & 1) != 0 || (SUB161(auVar67 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar67 >> 0x17,0) & 1) != 0) || (SUB161(auVar67 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar67 >> 0x27,0) & 1) != 0) || (SUB161(auVar67 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar67 >> 0x37,0) & 1) != 0) || (SUB161(auVar67 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar67 >> 0x47,0) & 1) != 0) || (SUB161(auVar67 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar67 >> 0x57,0) & 1) != 0) || (SUB161(auVar67 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar67 >> 0x67,0) & 1) != 0) || (SUB161(auVar67 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar67 >> 0x77,0) & 1) != 0) || auVar67[0xf] < '\0') {
code_r0x0001409e7cfe:
    pbStack_138 = pbVar52;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_1430317b8);
  }
  pbVar62 = pbStack_138 + uVar63 + 0x10;
  pbVar60 = pbStack_138 + 0x10;
  pbStack_138 = pbVar52;
  goto code_r0x0001409e7bc1;
}

