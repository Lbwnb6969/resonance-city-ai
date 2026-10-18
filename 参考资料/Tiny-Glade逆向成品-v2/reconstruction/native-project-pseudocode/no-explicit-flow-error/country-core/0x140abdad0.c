// VA 0x140abdad0, PDB extent 907 bytes
// country_core::systems::audio::building_audio::set_parameters
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/building_audio.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::audio::building_audio::set_parameters
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/building_audio.rs
   Extent: 907 */

void pdb_140abdad0(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  code cVar2;
  uint uVar3;
  byte *pbVar4;
  char ***pppcVar5;
  char cVar6;
  char cVar7;
  code *pcVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  ulonglong uVar12;
  uint uVar13;
  ushort uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  byte bVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  code ***unaff_XMM8_Qa;
  byte *unaff_XMM8_Qb;
  ulonglong unaff_XMM9_Qa;
  undefined8 in_stack_fffffffffffffe78;
  undefined4 uVar25;
  longlong lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  longlong lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  char ***pppcStack_f8;
  undefined8 uStack_f0;
  char ***pppcStack_e8;
  byte *pbStack_e0;
  ulonglong uStack_d8;
  char ****ppppcStack_c8;
  char ***pppcStack_c0;
  int *piStack_b8;
  code *pcStack_b0;
  longlong *plStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  char ***pppcStack_60;
  code ***pppcStack_58;
  code *pcStack_50;
  ulonglong uStack_48;
  
  uVar25 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
  uStack_78 = (undefined *)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uStack_70 = (code ****)CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  lStack_80 = param_2;
  if (param_1[3] != 0) {
    pcStack_b0 = (code *)0x140abdb39;
    pppcStack_58 = unaff_XMM8_Qa;
    pcStack_50 = (code *)unaff_XMM8_Qb;
    uStack_48 = unaff_XMM9_Qa;
    uVar9 = pdb_1400af0a0(param_1 + 4,&lStack_80);
    lVar17 = *param_1;
    bVar18 = (byte)(uVar9 >> 0x39);
    auVar20 = ZEXT216(CONCAT11(bVar18,bVar18));
    auVar20 = pshuflw(auVar20,auVar20,0);
    lVar10 = 0;
    while( true ) {
      uVar9 = uVar9 & param_1[1];
      auVar24 = *(undefined1 (*) [16])(lVar17 + uVar9);
      auVar22[0] = -(auVar24[0] == auVar20[0]);
      auVar22[1] = -(auVar24[1] == auVar20[1]);
      auVar22[2] = -(auVar24[2] == auVar20[2]);
      auVar22[3] = -(auVar24[3] == auVar20[3]);
      auVar22[4] = -(auVar24[4] == auVar20[4]);
      auVar22[5] = -(auVar24[5] == auVar20[5]);
      auVar22[6] = -(auVar24[6] == auVar20[6]);
      auVar22[7] = -(auVar24[7] == auVar20[7]);
      auVar22[8] = -(auVar24[8] == auVar20[0]);
      auVar22[9] = -(auVar24[9] == auVar20[1]);
      auVar22[10] = -(auVar24[10] == auVar20[2]);
      auVar22[0xb] = -(auVar24[0xb] == auVar20[3]);
      auVar22[0xc] = -(auVar24[0xc] == auVar20[4]);
      auVar22[0xd] = -(auVar24[0xd] == auVar20[5]);
      auVar22[0xe] = -(auVar24[0xe] == auVar20[6]);
      auVar22[0xf] = -(auVar24[0xf] == auVar20[7]);
      uVar14 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar15 = 0;
        for (uVar3 = uVar13; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
          uVar15 = uVar15 + 1;
        }
        lVar16 = (uVar15 + uVar9 & param_1[1]) * -0x2b0;
        if (param_2 == *(longlong *)(lVar17 + -0x2b0 + lVar16)) {
          lVar17 = lVar17 + lVar16;
          if ((*(ulonglong *)(lVar17 + -0x298) < 2) || (*(float *)(lVar17 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
            pcStack_b0 = (code *)0x140abde42;
            pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14304b478);
          }
          if (1 < *(uint *)(lVar17 + -0x50)) {
                    /* WARNING: Subroutine does not return */
            pcStack_b0 = (code *)0x140abde4e;
            pdb_142dc8150(&UNK_143021f00);
          }
          if (*(uint *)(lVar17 + -0x50) == 1) {
            pcStack_b0 = (code *)0x140abdc11;
            pdb_140df34b0();
          }
          else {
            pcStack_b0 = (code *)0x140abdc37;
            pdb_140defad0(lVar17 + -0x4c);
          }
          pcStack_b0 = (code *)0x140abdc4f;
          pdb_140de8220();
          pcStack_b0 = (code *)0x140abdc6e;
          uVar19 = pdb_140de8220(_DAT_142e3783c,_DAT_143008730);
          lStack_80 = param_2;
          uVar13 = 0;
          if (param_3[3] == 0) goto LAB_140abdd2c;
          pcStack_b0 = (code *)0x140abdc96;
          uVar9 = pdb_1400af0a0(param_3 + 4,&lStack_80);
          bVar18 = (byte)(uVar9 >> 0x39);
          auVar20 = ZEXT216(CONCAT11(bVar18,bVar18));
          auVar20 = pshuflw(auVar20,auVar20,0);
          lVar10 = 0;
          goto LAB_140abdcc6;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
      }
      auVar21[0] = -(auVar24[0] == -1);
      auVar21[1] = -(auVar24[1] == -1);
      auVar21[2] = -(auVar24[2] == -1);
      auVar21[3] = -(auVar24[3] == -1);
      auVar21[4] = -(auVar24[4] == -1);
      auVar21[5] = -(auVar24[5] == -1);
      auVar21[6] = -(auVar24[6] == -1);
      auVar21[7] = -(auVar24[7] == -1);
      auVar21[8] = -(auVar24[8] == -1);
      auVar21[9] = -(auVar24[9] == -1);
      auVar21[10] = -(auVar24[10] == -1);
      auVar21[0xb] = -(auVar24[0xb] == -1);
      auVar21[0xc] = -(auVar24[0xc] == -1);
      auVar21[0xd] = -(auVar24[0xd] == -1);
      auVar21[0xe] = -(auVar24[0xe] == -1);
      auVar21[0xf] = -(auVar24[0xf] == -1);
      if ((((((((((((((((SUB161(auVar21 >> 7,0) & 1) != 0 || (SUB161(auVar21 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar21 >> 0x17,0) & 1) != 0) || (SUB161(auVar21 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar21 >> 0x27,0) & 1) != 0) || (SUB161(auVar21 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar21 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar21 >> 0x3f,0) & 1) != 0) || (SUB161(auVar21 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar21 >> 0x4f,0) & 1) != 0) || (SUB161(auVar21 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar21 >> 0x5f,0) & 1) != 0) || (SUB161(auVar21 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar21 >> 0x6f,0) & 1) != 0) || (SUB161(auVar21 >> 0x77,0) & 1) != 0) ||
          auVar21[0xf] < '\0') break;
      uVar9 = uVar9 + lVar10 + 0x10;
      lVar10 = lVar10 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pcStack_b0 = (code *)0x140abdc32;
  pdb_142dc8150(&UNK_14304b490);
LAB_140abdcc6:
  uVar9 = uVar9 & param_3[1];
  pcVar1 = (char *)(*param_3 + uVar9);
  auVar24[0] = -(*pcVar1 == auVar20[0]);
  auVar24[1] = -(pcVar1[1] == auVar20[1]);
  auVar24[2] = -(pcVar1[2] == auVar20[2]);
  auVar24[3] = -(pcVar1[3] == auVar20[3]);
  auVar24[4] = -(pcVar1[4] == auVar20[4]);
  auVar24[5] = -(pcVar1[5] == auVar20[5]);
  auVar24[6] = -(pcVar1[6] == auVar20[6]);
  auVar24[7] = -(pcVar1[7] == auVar20[7]);
  auVar24[8] = -(pcVar1[8] == auVar20[0]);
  auVar24[9] = -(pcVar1[9] == auVar20[1]);
  auVar24[10] = -(pcVar1[10] == auVar20[2]);
  auVar24[0xb] = -(pcVar1[0xb] == auVar20[3]);
  auVar24[0xc] = -(pcVar1[0xc] == auVar20[4]);
  auVar24[0xd] = -(pcVar1[0xd] == auVar20[5]);
  auVar24[0xe] = -(pcVar1[0xe] == auVar20[6]);
  auVar24[0xf] = -(pcVar1[0xf] == auVar20[7]);
  uVar14 = (ushort)(SUB161(auVar24 >> 7,0) & 1) | (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe | (ushort)(auVar24[0xf] >> 7) << 0xf;
  uVar15 = (uint)uVar14;
  while (uVar14 != 0) {
    uVar3 = 0;
    for (uVar13 = uVar15; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
      uVar3 = uVar3 + 1;
    }
    uVar13 = _DAT_142e36f28;
    if (param_2 == *(longlong *)(*param_3 + -0x98 + (uVar3 + uVar9 & param_3[1]) * -0x98))
    goto LAB_140abdd2c;
    uVar14 = (ushort)(uVar15 - 1) & (ushort)uVar15;
    uVar15 = CONCAT22((short)(uVar15 - 1 >> 0x10),uVar14);
  }
  auVar23[0] = -(*pcVar1 == -1);
  auVar23[1] = -(pcVar1[1] == -1);
  auVar23[2] = -(pcVar1[2] == -1);
  auVar23[3] = -(pcVar1[3] == -1);
  auVar23[4] = -(pcVar1[4] == -1);
  auVar23[5] = -(pcVar1[5] == -1);
  auVar23[6] = -(pcVar1[6] == -1);
  auVar23[7] = -(pcVar1[7] == -1);
  auVar23[8] = -(pcVar1[8] == -1);
  auVar23[9] = -(pcVar1[9] == -1);
  auVar23[10] = -(pcVar1[10] == -1);
  auVar23[0xb] = -(pcVar1[0xb] == -1);
  auVar23[0xc] = -(pcVar1[0xc] == -1);
  auVar23[0xd] = -(pcVar1[0xd] == -1);
  auVar23[0xe] = -(pcVar1[0xe] == -1);
  auVar23[0xf] = -(pcVar1[0xf] == -1);
  uVar13 = 0;
  if ((((((((((((((((SUB161(auVar23 >> 7,0) & 1) != 0 || (SUB161(auVar23 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar23 >> 0x17,0) & 1) != 0) || (SUB161(auVar23 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar23 >> 0x27,0) & 1) != 0) || (SUB161(auVar23 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar23 >> 0x37,0) & 1) != 0) || (SUB161(auVar23 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar23 >> 0x47,0) & 1) != 0) || (SUB161(auVar23 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar23 >> 0x57,0) & 1) != 0) || (SUB161(auVar23 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar23 >> 0x67,0) & 1) != 0) || (SUB161(auVar23 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar23 >> 0x77,0) & 1) != 0) || auVar23[0xf] < '\0') goto LAB_140abdd2c;
  uVar9 = uVar9 + lVar10 + 0x10;
  lVar10 = lVar10 + 0x10;
  goto LAB_140abdcc6;
LAB_140abdd2c:
  uVar9 = *(ulonglong *)(param_4 + 0x28);
  if (*(ulonglong *)(param_4 + 0x10) <= uVar9) {
                    /* WARNING: Subroutine does not return */
    pcStack_b0 = (code *)0x140abde5a;
    pdb_142dc81f2(uVar9,*(ulonglong *)(param_4 + 0x10),&UNK_143043a80);
  }
  piVar11 = (int *)(uVar9 * 0x30 + *(longlong *)(param_4 + 8));
  pcStack_b0 = (code *)0x140abdd54;
  pdb_140a8e190(piVar11,param_5);
  pcStack_b0 = (code *)0x140abdd6e;
  pdb_140a8e730(piVar11,&UNK_14304b4a8,8,uVar13);
  pcStack_b0 = (code *)0x140abdd86;
  pdb_140a8e730(piVar11,&UNK_14304b468,0xc);
  pcStack_b0 = (code *)0x140abdda0;
  pdb_140a8e730(piVar11,&UNK_14304b4b0,0xe,uVar19);
  pcStack_b0 = (code *)0x140abddb8;
  pdb_140a8e730(piVar11,&UNK_14304b027,0xd);
  uVar13 = _DAT_142e36f28;
  pcStack_b0 = (code *)0x140abdde3;
  pdb_140a8e730(piVar11,&UNK_14304b120,0xe);
  pppcStack_f8 = (char ***)&UNK_14304b4be;
  uStack_f0 = 10;
  if (*piVar11 != 1) {
    return;
  }
  pdb_141808b10(&lStack_170,piVar11 + 2,&UNK_14304b4be,10,
                CONCAT44(uVar25,-(uint)(*(float *)(lVar17 + -0x24) == 0.0) & uVar13),0);
  if (lStack_170 == -0x7ffffffffffffffc) {
    return;
  }
  uStack_108 = uStack_140;
  uStack_118 = uStack_150;
  uStack_110 = uStack_148;
  uStack_128 = uStack_160;
  uStack_120 = uStack_158;
  lStack_138 = lStack_170;
  uStack_130 = uStack_168;
  piStack_b8 = piVar11 + 4;
  ppppcStack_c8 = &pppcStack_f8;
  pppcStack_c0 = (char ***)pdb_1402ed420;
  pcStack_b0 = pdb_140094770;
  plStack_a8 = &lStack_138;
  pcStack_a0 = pdb_140a8f740;
  pdb_140f60760(&pppcStack_58,&UNK_1430443b8,&ppppcStack_c8);
  pppcStack_e8 = (char ***)pppcStack_58;
  pbStack_e0 = (byte *)pcStack_50;
  uStack_d8 = uStack_48;
  if (_DAT_143ca43b0 != 0) {
    pppcStack_58 = (code ***)CONCAT71(pppcStack_58._1_7_,1);
    ppppcStack_c8 = (char ****)&pppcStack_58;
    pdb_142dc7060(&DAT_143ca43b0,0,&ppppcStack_c8,&UNK_143044438,&UNK_1430443f8);
  }
  pdb_1400f0d40(&ppppcStack_c8,_DAT_143cb2ce0);
  cVar7 = (char)piStack_b8;
  if ((int)ppppcStack_c8 == 1) {
    pppcStack_58 = (code ***)pppcStack_c0;
    pcStack_50 = (code *)CONCAT71(pcStack_50._1_7_,(char)piStack_b8);
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_143043e50,0x13,&pppcStack_58,&UNK_143044550,&UNK_1430443f8);
  }
  pppcStack_60 = pppcStack_c0;
  pdb_14007ee60();
  pcVar8 = (code *)pub_1406abab0(0xf,1);
  if (pcVar8 == (code *)0x0) {
    pdb_142dc7e2a(1,0xf);
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  *(undefined8 *)(pcVar8 + 7) = 0x2928202168746170;
  *(undefined8 *)pcVar8 = 0x705f656c75646f6d;
  ppppcStack_c8 = (char ****)0xf;
  piStack_b8 = (int *)0xf;
  pppcStack_c0 = (char ***)pcVar8;
  pdb_142d7f1b0(&ppppcStack_c8,0xf,0x17,1,1);
  uVar9 = uStack_d8;
  pbVar4 = pbStack_e0;
  uVar19 = _UNK_143043e6b;
  *(undefined8 *)((longlong)pppcStack_c0 + (longlong)piStack_b8) = _DAT_143043e63;
  *(undefined8 *)((code *)((longlong)pppcStack_c0 + (longlong)piStack_b8) + 8) = uVar19;
  *(undefined8 *)((longlong)pppcStack_c0 + (longlong)piStack_b8 + 0xf) = 0x6e726157203a3a20;
  uVar12 = (longlong)piStack_b8 + 0x17;
  pppcStack_58 = (code ***)ppppcStack_c8;
  pcStack_50 = (code *)pppcStack_c0;
  uStack_48 = uVar12;
  if ((longlong)ppppcStack_c8 - uVar12 < uStack_d8) {
    pdb_142d7f1b0(&pppcStack_58,uVar12,uStack_d8,1,1);
  }
  else if (uStack_d8 == 0) goto LAB_140a8e941;
  uVar12 = uStack_48;
  pub_142e32760(pcStack_50 + uStack_48,pbVar4,uVar9);
LAB_140a8e941:
  piStack_b8 = (int *)(uVar12 + uVar9);
  ppppcStack_c8 = (char ****)pppcStack_58;
  pppcStack_c0 = (char ***)pcStack_50;
  uStack_48 = (ulonglong)piStack_b8;
  cVar6 = pdb_14192b470(pppcStack_60 + 1,&ppppcStack_c8);
  if ((cVar6 == '\0') && (1 < *_DAT_143ca8e90)) {
    pppcStack_58 = (code ***)&pppcStack_e8;
    pcStack_50 = pdb_140001020;
    ppppcStack_c8 = (char ****)0x0;
    pppcStack_c0 = (char ***)&UNK_143043e7a;
    piStack_b8 = (int *)0x28;
    pcStack_b0 = (code *)0x0;
    plStack_a8 = (longlong *)&UNK_143043d10;
    pcStack_a0 = (code *)0x34;
    uStack_98 = 2;
    puStack_90 = &UNK_143043e7a;
    uStack_88 = 0x28;
    lStack_80 = 0x27b00000001;
    uStack_78 = &UNK_143043bc8;
    uStack_70 = &pppcStack_58;
    pdb_140f332f0(&stack0xffffffffffffffce,&ppppcStack_c8);
  }
  pppcVar5 = pppcStack_60;
  if (((cVar7 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) &&
     (cVar7 = pdb_142dc79e0(), cVar7 == '\0')) {
    *(code *)((longlong)pppcVar5 + 1) = (code)0x1;
  }
  LOCK();
  cVar2 = *(code *)pppcVar5;
  *(code *)pppcVar5 = (code)0x0;
  UNLOCK();
  if (cVar2 == (code)0x2) {
    pdb_142dc6ca0(pppcVar5);
  }
  if ((code ***)pppcStack_e8 != (code ***)0x0) {
    pub_1406abac0(pbStack_e0,(ulonglong)pppcStack_e8,1);
  }
  pdb_140a8f580(&lStack_138);
  return;
}

