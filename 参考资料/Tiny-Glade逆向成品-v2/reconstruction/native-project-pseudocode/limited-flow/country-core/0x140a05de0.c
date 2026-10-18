// VA 0x140a05de0, PDB extent 8692 bytes
// country_core::systems::ui::debug_visualize_volumes::debug_visualize_volumes
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/debug_visualize_volumes.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x000140a06018) overlaps instruction at (ram,0x000140a06017)
    */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ui::debug_visualize_volumes::debug_visualize_volumes
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ui/debug_visualize_volumes.rs
   Extent: 8692 */

void pdb_140a05de0(undefined8 *param_1,float *******param_2,float *******param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *****pppppfVar5;
  float *****pppppfVar6;
  float ******ppppppfVar7;
  longlong lVar8;
  int unaff_0034ab00;
  uint uVar9;
  char *pcVar10;
  float *******pppppppfVar11;
  float *******pppppppfVar12;
  float *******pppppppfVar13;
  code *pcVar14;
  float *******pppppppfVar15;
  undefined1 (*unaff_RBX) [16];
  float *******unaff_RSI;
  float ******ppppppfVar16;
  code *unaff_RDI;
  ulonglong uVar17;
  undefined1 (*unaff_R12) [16];
  float *******pppppppfVar18;
  undefined8 uVar19;
  float *******unaff_R14;
  float *******unaff_R15;
  undefined7 uVar20;
  bool bVar21;
  float fVar22;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  uint unaff_XMM10_Da;
  uint unaff_XMM10_Db;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  undefined1 auStack_2b8 [40];
  float ******ppppppfStack_290;
  float fStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  float fStack_27c;
  undefined8 uStack_278;
  float fStack_270;
  float ******ppppppfStack_268;
  float fStack_260;
  float ******ppppppfStack_258;
  ulonglong uStack_250;
  float ******ppppppfStack_248;
  float fStack_240;
  float ******ppppppfStack_238;
  float *******pppppppfStack_230;
  code *pcStack_228;
  float *******pppppppfStack_220;
  undefined4 uStack_218;
  float *****pppppfStack_210;
  float *******pppppppfStack_208;
  float ******ppppppfStack_200;
  float *******pppppppfStack_1f8;
  code *pcStack_1f0;
  float *******pppppppfStack_1e8;
  float *******pppppppfStack_1e0;
  float *******pppppppfStack_1d8;
  code *pcStack_1d0;
  undefined8 uStack_1c8;
  float ******ppppppfStack_188;
  longlong lStack_180;
  float *******pppppppfStack_178;
  undefined4 uStack_16c;
  float *******pppppppfStack_168;
  uint uStack_160;
  undefined4 uStack_15c;
  float *******pppppppfStack_158;
  float ******ppppppfStack_150;
  float *******pppppppfStack_148;
  float *******pppppppfStack_140;
  float *******pppppppfStack_138;
  uint uStack_12c;
  float ******ppppppfStack_128;
  float *******pppppppfStack_120;
  float *******pppppppfStack_118;
  float *******pppppppfStack_110;
  byte *pbStack_108;
  float *******pppppppfStack_100;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  pppppppfVar18 = (float *******)*param_1;
  if (*(char *)((longlong)pppppppfVar18 + 0xc2) != '\x01') {
    return;
  }
  pcVar14 = (code *)&UNK_143035e6c;
  pcVar10 = &UNK_143035e6c +
            *(int *)(&UNK_143035e6c + (ulonglong)*(byte *)((longlong)pppppppfVar18 + 0xd3) * 4);
  uVar20 = (undefined7)((ulonglong)unaff_R15 >> 8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)((longlong)pppppppfVar18 + 0xd3)) {
  case 0:
    unaff_R15 = (float *******)0x0;
    break;
  case 1:
    unaff_R15 = (float *******)CONCAT71(uVar20,1);
    break;
  case 2:
  case 4:
    goto LAB_140a05e79;
  case 3:
    unaff_R15 = (float *******)CONCAT71(uVar20,1);
    uStack_16c = (undefined4)CONCAT71((int7)((ulonglong)pcVar10 >> 8),1);
    goto code_r0x000140a05efa;
  case 5:
    goto code_r0x000140a061f0;
  case 6:
    UNK_143035e6c = UNK_143035e6c - (char)pcVar10;
    *pcVar10 = *pcVar10 + (char)pcVar10;
    pppppppfVar15 = pppppppfStack_178;
    goto code_r0x000140a064a0;
  case 7:
    goto code_r0x000140a05ffe;
  default:
    uStack_12c = (uint)unaff_RDI;
    goto code_r0x000140a05fc5;
  case 0xb:
    goto code_r0x000140a0635d;
  }
  uStack_16c = 0;
code_r0x000140a05efa:
  ppppppfVar7 = *param_2;
  ppppppfVar16 = ppppppfVar7 + 0x12;
  pppppfVar6 = ppppppfVar7[0x12];
  if (pppppfVar6 < (float *****)0xfffffffffffffff0 && (char)(((uint)pppppfVar6 & 8) >> 3) == '\0') {
    LOCK();
    pppppfVar5 = *ppppppfVar16;
    if (pppppfVar6 == pppppfVar5) {
      *ppppppfVar16 = pppppfVar6 + 2;
    }
    UNLOCK();
    if (pppppfVar6 != pppppfVar5) goto code_r0x000140a05f21;
  }
  else {
code_r0x000140a05f21:
    pdb_142dbb5f0(ppppppfVar16,0,param_3,1000000000);
  }
  pdb_140e9a150(ppppppfVar16);
  uStack_250 = (ulonglong)ppppppfVar16 | 1;
  ppppppfStack_258 = ppppppfVar16;
  pdb_140e9a150(uStack_250);
  unaff_RBX = (undefined1 (*) [16])ppppppfVar7[0x13];
  unaff_R14 = (float *******)ppppppfVar7[0x16];
  auVar24 = *unaff_RBX;
  unaff_R12 = unaff_RBX + 1;
  pcVar10 = (char *)(ulonglong)
                    ~(uint)(ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
                                    (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar24[0xf] >> 7) << 0xf);
  ppppppfStack_128 = *param_3;
  pppppppfVar18 = pppppppfVar18 + 0x17;
  unaff_XMM9_Da = 0.0;
  uStack_12c = (uint)unaff_R15;
  unaff_XMM6_Da = _DAT_142e3798c;
  unaff_XMM7_Da = _DAT_1430067c0;
  unaff_XMM7_Db = _UNK_1430067c4;
  unaff_XMM7_Dc = _UNK_1430067c8;
  unaff_XMM7_Dd = _UNK_1430067cc;
  unaff_XMM8_Da = _DAT_142e3788c;
  unaff_XMM10_Da = _DAT_142e37820;
  unaff_XMM10_Db = _UNK_142e37824;
code_r0x000140a05fc5:
  while( true ) {
    ppppppfVar16 = ppppppfStack_258;
    uVar9 = (uint)pcVar10;
    bVar21 = unaff_R14 == (float *******)0x0;
    unaff_R14 = (float *******)((longlong)unaff_R14 + -1);
    if (bVar21) break;
    if ((short)pcVar10 == 0) {
      do {
        auVar24 = *unaff_R12;
        unaff_RBX = unaff_RBX + -0x10;
        unaff_R12 = unaff_R12 + 1;
        uVar9 = (ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
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
                         (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar24[0xf] >> 7) << 0xf) ^ 0xffff;
      } while (uVar9 == 0);
    }
    unaff_RSI = (float *******)(ulonglong)uVar9;
    unaff_0034ab00 = 0;
    for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
      unaff_0034ab00 = unaff_0034ab00 + 1;
    }
code_r0x000140a05ffe:
    unaff_RDI = (code *)((longlong)unaff_RBX - (ulonglong)(uint)(unaff_0034ab00 << 4));
    pppppfStack_210 = (float *****)(unaff_RDI + -0x10);
    param_3 = *(float ********)(unaff_RDI + -8);
    pcVar10 = (char *)(ulonglong)*(byte *)(param_3 + 0x13);
    if ((char)unaff_R15 == '\0') {
code_r0x000140a061f0:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((ulonglong)pcVar10 & 0xff) {
      case 0:
        fVar22 = *(float *)((longlong)param_3 + 0x9c);
        ppppppfStack_238 = (float ******)CONCAT44(ppppppfStack_238._4_4_,fVar22);
        pppppppfStack_148 =
             (float *******)CONCAT44(pppppppfStack_148._4_4_,*(float *)(param_3 + 0x15));
        ppppppfStack_150 = param_3[0x14];
        pppppppfStack_208 = (float *******)&pppppfStack_210;
        ppppppfStack_200 = (float ******)pdb_140901c90;
        pppppppfStack_1f8 = &ppppppfStack_238;
        pcStack_1f0 = pdb_140f70fc0;
        pppppppfStack_1e8 = &ppppppfStack_150;
        pppppppfStack_1e0 = (float *******)pdb_140f33df0;
        pdb_140f60760(&pppppppfStack_168,&UNK_1430353ee,&pppppppfStack_208);
        unaff_R15 = pppppppfStack_158;
        pppppppfVar15 = pppppppfStack_168;
        pppppppfStack_110 = (float *******)CONCAT44(uStack_15c,uStack_160);
        ppppppfStack_200 = (float ******)CONCAT44(ppppppfStack_200._4_4_,pppppppfStack_148._0_4_);
        pppppppfStack_208 = (float *******)ppppppfStack_150;
        pdb_14007ee60();
        pppppppfVar12 = (float *******)pub_1406abab0(0x20,8);
        pppppppfStack_100 = pppppppfVar15;
        if (pppppppfVar12 == (float *******)0x0) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(8,0x20);
        }
        *pppppppfVar12 = (float ******)0x1;
        pppppppfVar12[1] = (float ******)0x1;
        *(float *)(pppppppfVar12 + 2) = fVar22;
        *(float ********)((longlong)pppppppfVar12 + 0x14) = pppppppfStack_208;
        *(float *)((longlong)pppppppfVar12 + 0x1c) = ppppppfStack_200._0_4_;
        ppppppfStack_200 = (float ******)&UNK_143035400;
        pppppppfStack_208 = pppppppfVar12;
        pppppppfStack_120 = pppppppfVar12;
        if ((longlong)unaff_R15 < 0) {
          uVar19 = 0;
code_r0x000140a06e12:
          pdb_142dc7e2a(uVar19,unaff_R15);
          goto code_r0x000140a06f9b;
        }
        if (unaff_R15 == (float *******)0x0) {
          unaff_RDI = (code *)0x1;
        }
        else {
          pppppppfStack_118 = pppppppfVar18;
          pdb_14007ee60();
          uVar19 = 1;
          pcVar14 = (code *)pub_1406abab0((ulonglong)unaff_R15,1);
          param_2 = pppppppfStack_110;
          unaff_RDI = pcVar14;
          if (pcVar14 == (code *)0x0) goto code_r0x000140a06e12;
code_r0x000140a0635d:
          pub_142e32760(pcVar14,param_2,unaff_R15);
          pppppppfVar18 = pppppppfStack_118;
        }
        ppppppfStack_200 = (float ******)CONCAT71(ppppppfStack_200._1_7_,2);
        pppppppfStack_1e0 = pppppppfStack_120;
        pppppppfStack_1d8 = (float *******)&UNK_143035400;
        pppppppfStack_1f8 = unaff_R15;
        pcStack_1f0 = unaff_RDI;
        pppppppfStack_1e8 = unaff_R15;
        pdb_141a88350(ppppppfStack_128,&pppppppfStack_208);
        unaff_R15 = (float *******)(ulonglong)uStack_12c;
        if (pppppppfStack_100 != (float *******)0x0) {
          uVar17 = 1;
          pppppppfVar12 = pppppppfStack_110;
          pppppppfVar15 = pppppppfStack_100;
code_r0x000140a06d8d:
          pub_1406abac0((byte *)pppppppfVar12,(ulonglong)pppppppfVar15,uVar17);
        }
        break;
      case 1:
        fVar22 = *(float *)((longlong)param_3 + 0x9c);
        pppppppfStack_220 = (float *******)CONCAT44(pppppppfStack_220._4_4_,fVar22);
        pppppppfVar15 = (float *******)param_3[0x15];
        pppppppfStack_178 = (float *******)((longlong)pppppppfVar15 + (longlong)param_3[0x16] * 0xc)
        ;
        ppppppfVar16 = (float ******)0x0;
        pppppppfStack_138 = unaff_R14;
        pppppppfStack_120 = unaff_RSI;
        if (pppppppfVar15 != pppppppfStack_178) {
          do {
            pppppppfStack_148 =
                 (float *******)CONCAT44(pppppppfStack_148._4_4_,*(float *)(pppppppfVar15 + 1));
            ppppppfStack_150 = *pppppppfVar15;
            pppppppfStack_208 = (float *******)&pppppfStack_210;
            ppppppfStack_200 = (float ******)pdb_140901c90;
            pppppppfStack_1f8 = &ppppppfStack_238;
            pcStack_1f0 = pdb_140f72a40;
            pppppppfStack_1e8 = (float *******)&pppppppfStack_220;
            pppppppfStack_1e0 = (float *******)pdb_140f70fc0;
            pppppppfStack_1d8 = &ppppppfStack_150;
            pcStack_1d0 = pdb_140f33d80;
            ppppppfStack_238 = ppppppfVar16;
            pdb_140f60760(&pppppppfStack_168,&UNK_143035430,&pppppppfStack_208);
            pppppppfVar13 = pppppppfStack_158;
            pppppppfVar12 = pppppppfStack_168;
            pbStack_108 = (byte *)CONCAT44(uStack_15c,uStack_160);
            ppppppfStack_200 =
                 (float ******)CONCAT44(ppppppfStack_200._4_4_,pppppppfStack_148._0_4_);
            pppppppfStack_208 = (float *******)ppppppfStack_150;
            pdb_14007ee60();
            pppppppfVar11 = (float *******)pub_1406abab0(0x20,8);
            pppppppfStack_100 = pppppppfVar12;
            if (pppppppfVar11 == (float *******)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(8,0x20);
            }
            pppppppfVar15 = (float *******)((longlong)pppppppfVar15 + 0xc);
            ppppppfVar16 = (float ******)((longlong)ppppppfVar16 + 1);
            *pppppppfVar11 = (float ******)0x1;
            pppppppfVar11[1] = (float ******)0x1;
            *(float *)(pppppppfVar11 + 2) = fVar22;
            *(float ********)((longlong)pppppppfVar11 + 0x14) = pppppppfStack_208;
            *(float *)((longlong)pppppppfVar11 + 0x1c) = ppppppfStack_200._0_4_;
            ppppppfStack_200 = (float ******)&UNK_143035448;
            pppppppfStack_208 = pppppppfVar11;
            pppppppfStack_110 = pppppppfVar11;
            if ((longlong)pppppppfVar13 < 0) {
              uVar19 = 0;
code_r0x000140a06dc2:
              pdb_142dc7e2a(uVar19,pppppppfVar13);
              goto code_r0x000140a06f9b;
            }
            if (pppppppfVar13 == (float *******)0x0) {
              pcVar14 = (code *)0x1;
            }
            else {
              pppppppfStack_118 = pppppppfVar18;
              pdb_14007ee60();
              uVar19 = 1;
              pcVar14 = (code *)pub_1406abab0((ulonglong)pppppppfVar13,1);
              if (pcVar14 == (code *)0x0) goto code_r0x000140a06dc2;
              pub_142e32760(pcVar14,pbStack_108,pppppppfVar13);
              pppppppfVar18 = pppppppfStack_118;
            }
            ppppppfStack_200 = (float ******)CONCAT71(ppppppfStack_200._1_7_,2);
            pppppppfStack_1f8 = pppppppfVar13;
            pppppppfStack_1e8 = pppppppfVar13;
            pppppppfStack_1e0 = pppppppfStack_110;
            pppppppfStack_1d8 = (float *******)&UNK_143035448;
            pcStack_1f0 = pcVar14;
            pdb_141a88350(ppppppfStack_128,&pppppppfStack_208);
            unaff_R15 = (float *******)(ulonglong)uStack_12c;
            if (pppppppfStack_100 != (float *******)0x0) {
              pub_1406abac0(pbStack_108,(ulonglong)pppppppfStack_100,1);
            }
            unaff_RSI = pppppppfStack_120;
            unaff_R14 = pppppppfStack_138;
          } while (pppppppfVar15 != pppppppfStack_178);
        }
        break;
      case 2:
        goto code_r0x000140a0602c;
      case 6:
        pppppppfStack_138 = unaff_R14;
        pppppppfStack_120 = unaff_RSI;
        pdb_140defa80(&pppppppfStack_208,0,0,*(float *)((longlong)param_3 + 0xb4));
        pdb_140def200(auStack_2b8,&pppppppfStack_208,unaff_XMM6_Da,0);
        pdb_1415fceb0(&ppppppfStack_238,auStack_2b8);
        ppppppfStack_150 = (float ******)0x0;
        pppppppfStack_148 = (float *******)0x4;
        pppppppfStack_140 = (float *******)0x0;
        unaff_R14 = (float *******)((longlong)pppppppfStack_230 + (longlong)pcStack_228 * 0xc);
        bVar21 = true;
        pppppppfStack_100 = (float *******)0x4;
        pppppppfVar12 = (float *******)0x4;
        pppppppfStack_110 = param_3;
        pppppppfStack_118 = pppppppfVar18;
        unaff_R15 = pppppppfStack_140;
        pppppppfStack_178 = pppppppfStack_230;
        pppppppfVar13 = pppppppfStack_230;
        pppppppfVar15 = pppppppfStack_230;
        unaff_RDI = pcStack_228;
        while (pppppppfStack_140 = unaff_R15, unaff_RDI != (code *)0x0) {
          unaff_RDI = unaff_RDI + -1;
          if (pppppppfVar13 == unaff_R14) {
            pppppppfVar13 = pppppppfVar15;
          }
          unaff_RSI = (float *******)((longlong)pppppppfVar13 + 0xc);
          pppppppfVar11 = pppppppfVar15;
          if (unaff_RSI != unaff_R14) {
            pppppppfVar11 = unaff_RSI;
          }
          pppppppfVar18 = pppppppfVar13;
          if (bVar21) {
            pppppppfVar18 = pppppppfVar11;
            pppppppfVar12 = pppppppfVar13;
            unaff_RSI = (float *******)((longlong)pppppppfVar11 + 0xc);
          }
          if (pppppppfVar12 == (float *******)0x0) break;
          fStack_288 = *(float *)(pppppppfVar12 + 1);
          ppppppfStack_290 = *pppppppfVar12;
          fStack_27c = *(float *)(pppppppfVar18 + 1);
          uStack_284 = SUB84(*pppppppfVar18,0);
          uStack_280 = (undefined4)((ulonglong)*pppppppfVar18 >> 0x20);
          fStack_270 = 0.0;
          uStack_278 = 0;
          if ((ulonglong)((longlong)ppppppfStack_150 - (longlong)unaff_R15) < 3) {
            uStack_f2 = 1;
            pdb_142d7f1b0(&ppppppfStack_150,unaff_R15,3,4,0xc);
            pppppppfStack_100 = pppppppfStack_148;
            pppppppfVar15 = pppppppfStack_178;
            unaff_R15 = pppppppfStack_140;
          }
code_r0x000140a064a0:
          *(float *)((longlong)pppppppfStack_100 + ((longlong)unaff_R15 * 3 + 8) * 4) = fStack_270;
          pfVar1 = (float *)((longlong)pppppppfStack_100 + ((longlong)unaff_R15 * 3 + 4) * 4);
          *(ulonglong *)pfVar1 = CONCAT44(fStack_27c,uStack_280);
          *(undefined8 *)(pfVar1 + 2) = uStack_278;
          pfVar1 = (float *)((longlong)pppppppfStack_100 + (longlong)unaff_R15 * 0xc);
          *(float *******)pfVar1 = ppppppfStack_290;
          *(ulonglong *)(pfVar1 + 2) = CONCAT44(uStack_284,fStack_288);
          unaff_R15 = (float *******)((longlong)unaff_R15 + 3);
          bVar21 = false;
          pppppppfVar12 = pppppppfVar18;
          pppppppfVar13 = unaff_RSI;
        }
        fStack_260 = *(float *)((longlong)pppppppfStack_110 + 0xa4);
        ppppppfStack_268 = *(float *******)((longlong)pppppppfStack_110 + 0x9c);
        fStack_240 = *(float *)(pppppppfStack_110 + 0x16);
        ppppppfStack_248 = pppppppfStack_110[0x15];
        pppppppfStack_220 = (float *******)0x3f80000000000000;
        uStack_218 = 0;
        fVar22 = (float)((ulonglong)ppppppfStack_248 >> 0x20);
        if (unaff_XMM9_Da <=
            fStack_240 * unaff_XMM9_Da + SUB84(ppppppfStack_248,0) * unaff_XMM9_Da + fVar22) {
          uStack_f2 = 1;
          pdb_140f335d0(&pppppppfStack_208,&pppppppfStack_220,&ppppppfStack_248);
        }
        else {
          pppppppfStack_168 =
               (float *******)
               CONCAT44((uint)fVar22 ^ unaff_XMM10_Db,
                        (uint)SUB84(ppppppfStack_248,0) ^ unaff_XMM10_Da);
          uStack_160 = (uint)fStack_240 ^ unaff_XMM10_Da;
          uStack_f2 = 1;
          pdb_140f335d0(&pppppppfStack_208,&pppppppfStack_220,&pppppppfStack_168);
        }
        ppppppfVar16 = ppppppfStack_200;
        pppppppfVar15 = pppppppfStack_208;
        pppppppfStack_220 = unaff_R15;
        if (unaff_R15 == (float *******)0x0) {
          uStack_f2 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(0,0,&UNK_1430355b8);
        }
        pppppppfStack_208 = (float *******)&pppppfStack_210;
        ppppppfStack_200 = (float ******)pdb_140901c90;
        pppppppfStack_1f8 = (float *******)&pppppppfStack_220;
        pcStack_1f0 = pdb_140f72a40;
        pppppppfStack_1e8 = pppppppfStack_100;
        pppppppfStack_1e0 = (float *******)pdb_140f33df0;
        uStack_f2 = 1;
        pdb_140f60760(&pppppppfStack_168,&UNK_1430355d0,&pppppppfStack_208);
        ppppppfVar7 = ppppppfStack_150;
        pppppppfVar12 = pppppppfStack_158;
        pppppppfStack_110 = pppppppfStack_168;
        pbStack_108 = (byte *)CONCAT44(uStack_15c,uStack_160);
        pdb_14007ee60();
        pppppppfVar13 = (float *******)pub_1406abab0(0x50,0x10);
        pppppppfVar18 = pppppppfStack_118;
        unaff_RSI = pppppppfStack_120;
        if (pppppppfVar13 == (float *******)0x0) {
          ppppppfStack_128 = ppppppfVar7;
                    /* WARNING: Subroutine does not return */
          pdb_142dc7e11(0x10,0x50);
        }
        *pppppppfVar13 = (float ******)0x1;
        pppppppfVar13[1] = (float ******)0x1;
        pppppppfVar13[2] = (float ******)pppppppfVar15;
        pppppppfVar13[3] = ppppppfVar16;
        pppppppfVar13[4] = ppppppfVar7;
        pppppppfVar13[5] = (float ******)pppppppfStack_100;
        pppppppfVar13[6] = (float ******)unaff_R15;
        pppppppfVar13[7] = ppppppfStack_268;
        *(float *)(pppppppfVar13 + 8) = fStack_260;
        ppppppfStack_200 = (float ******)&UNK_1430355e0;
        pppppppfStack_208 = pppppppfVar13;
        pppppppfStack_100 = pppppppfVar13;
        if ((longlong)pppppppfVar12 < 0) {
          uVar19 = 0;
code_r0x000140a06e26:
          pdb_142dc7e2a(uVar19,pppppppfVar12);
          goto code_r0x000140a06f9b;
        }
        if (pppppppfVar12 == (float *******)0x0) {
          pcVar14 = (code *)0x1;
        }
        else {
          pdb_14007ee60();
          uVar19 = 1;
          pcVar14 = (code *)pub_1406abab0((ulonglong)pppppppfVar12,1);
          if (pcVar14 == (code *)0x0) goto code_r0x000140a06e26;
          pub_142e32760(pcVar14,pbStack_108,pppppppfVar12);
        }
        unaff_R14 = pppppppfStack_138;
        ppppppfStack_200 = (float ******)CONCAT71(ppppppfStack_200._1_7_,2);
        pppppppfStack_1f8 = pppppppfVar12;
        pppppppfStack_1e8 = pppppppfVar12;
        pppppppfStack_1e0 = pppppppfStack_100;
        pppppppfStack_1d8 = (float *******)&UNK_1430355e0;
        pcStack_1f0 = pcVar14;
        pdb_141a88350(ppppppfStack_128,&pppppppfStack_208);
        unaff_R15 = (float *******)(ulonglong)uStack_12c;
        if (pppppppfStack_110 != (float *******)0x0) {
          pub_1406abac0(pbStack_108,(ulonglong)pppppppfStack_110,1);
        }
        if (ppppppfStack_238 != (float ******)0x0) {
          pppppppfVar15 = (float *******)((longlong)ppppppfStack_238 * 0xc);
          uVar17 = 4;
          pppppppfVar12 = pppppppfStack_178;
          goto code_r0x000140a06d8d;
        }
      }
    }
    else if (*(byte *)(param_3 + 0x13) == 2) {
code_r0x000140a0602c:
      pppppppfStack_138 = unaff_R14;
      pppppppfStack_120 = unaff_RSI;
      if (param_3[0x16] == (float ******)0x0) {
        pdb_1415fa7d0(&pppppppfStack_168,param_3[3],param_3[3] + (longlong)param_3[4] * 5);
        lVar8 = *(longlong *)(unaff_RDI + -8);
        pppppppfStack_1f8 = (float *******)(lVar8 + 0xb9);
        pppppppfStack_1e8 = (float *******)(lVar8 + 0x28);
        pppppppfStack_1d8 = (float *******)(lVar8 + 0x88);
        ppppppfStack_200 = (float ******)pdb_1415e4d30;
        pcStack_1f0 = pdb_140c9d9f0;
        pppppppfStack_1e0 = (float *******)pdb_140a0b1e0;
        pcStack_1d0 = pdb_140a0b100;
        pppppppfStack_208 = (float *******)&pppppppfStack_168;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_143035530,&pppppppfStack_208,&UNK_1430355a0);
      }
      ppppppfStack_188 = param_3[0x15];
      lStack_180 = (longlong)ppppppfStack_188 + (longlong)param_3[0x16] * 0x24;
      pppppppfStack_208 = (float *******)0x0;
      uStack_1c8 = 0;
      pdb_141605610(&ppppppfStack_150,&pppppppfStack_208);
      ppppppfStack_238 = param_3[0x16];
      if (ppppppfStack_238 == (float ******)0x0) {
        uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(0,0,&UNK_143035478);
      }
      pppppppfStack_1e8 = (float *******)param_3[0x15];
      pppppppfStack_208 = (float *******)&pppppfStack_210;
      ppppppfStack_200 = (float ******)pdb_140901c90;
      pppppppfStack_1f8 = &ppppppfStack_238;
      pcStack_1f0 = pdb_140f72a40;
      pppppppfStack_1e0 = (float *******)pdb_140f33df0;
      uStack_f1 = 1;
      pppppppfStack_110 = param_3;
      pdb_140f60760(&pppppppfStack_168,&UNK_143035490,&pppppppfStack_208);
      pppppppfVar13 = pppppppfStack_140;
      pppppppfVar12 = pppppppfStack_148;
      ppppppfVar16 = ppppppfStack_150;
      pppppppfVar15 = pppppppfStack_158;
      pppppppfStack_100 = pppppppfStack_168;
      pbStack_108 = (byte *)CONCAT44(uStack_15c,uStack_160);
      pdb_14007ee60();
      pppppppfVar11 = (float *******)pub_1406abab0(0x28,8);
      if (pppppppfVar11 == (float *******)0x0) {
        ppppppfStack_128 = ppppppfVar16;
        pppppppfStack_120 = pppppppfVar12;
                    /* WARNING: Subroutine does not return */
        pdb_142dc7e11(8,0x28);
      }
      *pppppppfVar11 = (float ******)0x1;
      pppppppfVar11[1] = (float ******)0x1;
      pppppppfVar11[2] = ppppppfVar16;
      pppppppfVar11[3] = (float ******)pppppppfVar12;
      pppppppfVar11[4] = (float ******)pppppppfVar13;
      ppppppfStack_200 = (float ******)&UNK_1430354a0;
      pppppppfStack_208 = pppppppfVar11;
      pppppppfStack_118 = pppppppfVar11;
      if ((longlong)pppppppfVar15 < 0) {
        uVar19 = 0;
code_r0x000140a06d9a:
        pdb_142dc7e2a(uVar19,pppppppfVar15);
code_r0x000140a06f9b:
                    /* WARNING: Does not return */
        pcVar14 = (code *)invalidInstructionException();
        (*pcVar14)();
      }
      if (pppppppfVar15 == (float *******)0x0) {
        pcVar14 = (code *)0x1;
      }
      else {
        pdb_14007ee60();
        uVar19 = 1;
        pcVar14 = (code *)pub_1406abab0((ulonglong)pppppppfVar15,1);
        if (pcVar14 == (code *)0x0) goto code_r0x000140a06d9a;
        pub_142e32760(pcVar14,pbStack_108,pppppppfVar15);
      }
      unaff_R14 = pppppppfStack_138;
      ppppppfStack_200 = (float ******)CONCAT71(ppppppfStack_200._1_7_,2);
      pppppppfStack_1f8 = pppppppfVar15;
      pppppppfStack_1e8 = pppppppfVar15;
      pppppppfStack_1e0 = pppppppfStack_118;
      pppppppfStack_1d8 = (float *******)&UNK_1430354a0;
      pcStack_1f0 = pcVar14;
      pdb_141a88350(ppppppfStack_128,&pppppppfStack_208);
      unaff_RSI = pppppppfStack_120;
      if (pppppppfStack_100 != (float *******)0x0) {
        pub_1406abac0(pbStack_108,(ulonglong)pppppppfStack_100,1);
      }
      if ((char)uStack_16c != '\0') {
        pppppppfVar12 = (float *******)pppppppfStack_110[0x15];
        pppppppfVar15 =
             (float *******)((longlong)pppppppfVar12 + (longlong)pppppppfStack_110[0x16] * 0x24);
        while (pppppppfVar12 != pppppppfVar15) {
          fVar22 = *(float *)(pppppppfVar12 + 1);
          fVar2 = *(float *)((longlong)pppppppfVar12 + 0x14);
          fVar3 = *(float *)(pppppppfVar12 + 4);
          auVar23._0_4_ =
               SUB84(pppppppfVar12[3],0) +
               (float)*(undefined8 *)((longlong)pppppppfVar12 + 0xc) + SUB84(*pppppppfVar12,0);
          auVar23._4_4_ =
               (float)((ulonglong)pppppppfVar12[3] >> 0x20) +
               (float)((ulonglong)*(undefined8 *)((longlong)pppppppfVar12 + 0xc) >> 0x20) +
               (float)((ulonglong)*pppppppfVar12 >> 0x20);
          auVar23._8_8_ = 0;
          auVar24._4_4_ = unaff_XMM7_Db;
          auVar24._0_4_ = unaff_XMM7_Da;
          auVar24._8_4_ = unaff_XMM7_Dc;
          auVar24._12_4_ = unaff_XMM7_Dd;
          auVar24 = divps(auVar23,auVar24);
          uStack_f1 = 0;
          pdb_1414737c0(&pppppppfStack_208,pppppppfVar12);
          fVar4 = *(float *)pppppppfVar18;
          fVar26 = SUB84(pppppppfStack_208,0);
          uVar17 = (ulonglong)pppppppfStack_208 >> 0x20;
          fVar25 = ppppppfStack_200._0_4_ * fVar4;
          ppppppfStack_238 = pppppppfStack_110[0x16];
          if (ppppppfStack_238 == (float ******)0x0) {
            uStack_f1 = 0;
                    /* WARNING: Subroutine does not return */
            pdb_142dc81f2(0,0,&UNK_1430354d0);
          }
          pppppppfStack_1e8 = (float *******)pppppppfStack_110[0x15];
          pppppppfStack_208 = (float *******)&pppppfStack_210;
          ppppppfStack_200 = (float ******)pdb_140901c90;
          pppppppfStack_1f8 = &ppppppfStack_238;
          pcStack_1f0 = pdb_140f72a40;
          pppppppfStack_1e0 = (float *******)pdb_140f33df0;
          pcStack_1d0 = pdb_140f70fc0;
          uStack_f1 = 0;
          pppppppfStack_1d8 = pppppppfVar18;
          pdb_140f60760(&pppppppfStack_168,&UNK_1430354e8,&pppppppfStack_208);
          pppppppfVar13 = pppppppfStack_158;
          pppppppfStack_100 = pppppppfStack_168;
          pbStack_108 = (byte *)CONCAT44(uStack_15c,uStack_160);
          pdb_14007ee60();
          pppppppfVar11 = (float *******)pub_1406abab0(0x28,8);
          if (pppppppfVar11 == (float *******)0x0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc7e11(8,0x28);
          }
          pppppppfVar12 = (float *******)((longlong)pppppppfVar12 + 0x24);
          *pppppppfVar11 = (float ******)0x1;
          pppppppfVar11[1] = (float ******)0x1;
          pppppppfVar11[2] = auVar24._0_8_;
          *(float *)(pppppppfVar11 + 3) = (fVar22 + fVar2 + fVar3) / unaff_XMM8_Da;
          *(ulonglong *)((longlong)pppppppfVar11 + 0x1c) =
               CONCAT44(fVar4 * (float)uVar17,fVar4 * fVar26);
          *(float *)((longlong)pppppppfVar11 + 0x24) = fVar25;
          ppppppfStack_200 = (float ******)&UNK_143035500;
          pppppppfStack_208 = pppppppfVar11;
          pppppppfStack_118 = pppppppfVar11;
          if ((longlong)pppppppfVar13 < 0) {
            uVar19 = 0;
code_r0x000140a06dae:
            pdb_142dc7e2a(uVar19,pppppppfVar13);
            goto code_r0x000140a06f9b;
          }
          pppppppfStack_178 = pppppppfVar15;
          if (pppppppfVar13 == (float *******)0x0) {
            pcVar14 = (code *)0x1;
          }
          else {
            pdb_14007ee60();
            uVar19 = 1;
            pcVar14 = (code *)pub_1406abab0((ulonglong)pppppppfVar13,1);
            if (pcVar14 == (code *)0x0) goto code_r0x000140a06dae;
            pub_142e32760(pcVar14,pbStack_108,pppppppfVar13);
            unaff_R14 = pppppppfStack_138;
          }
          ppppppfStack_200 = (float ******)CONCAT71(ppppppfStack_200._1_7_,2);
          pppppppfStack_1f8 = pppppppfVar13;
          pppppppfStack_1e8 = pppppppfVar13;
          pppppppfStack_1e0 = pppppppfStack_118;
          pppppppfStack_1d8 = (float *******)&UNK_143035500;
          pcStack_1f0 = pcVar14;
          pdb_141a88350(ppppppfStack_128,&pppppppfStack_208);
          unaff_RSI = pppppppfStack_120;
          pppppppfVar15 = pppppppfStack_178;
          if (pppppppfStack_100 != (float *******)0x0) {
            pub_1406abac0(pbStack_108,(ulonglong)pppppppfStack_100,1);
          }
        }
      }
      unaff_R15 = (float *******)(ulonglong)uStack_12c;
    }
    pcVar10 = (char *)(ulonglong)((uint)unaff_RSI - 1 & (uint)unaff_RSI);
  }
  pdb_140e9a350(ppppppfStack_258);
  pdb_140e9a350(uStack_250);
  LOCK();
  pppppfVar6 = *ppppppfVar16;
  *ppppppfVar16 = *ppppppfVar16 + -2;
  UNLOCK();
  if (((ulonglong)pppppfVar6 & 0xfffffffffffffff2) == 0x12) {
    pdb_142dbbf50(ppppppfVar16);
  }
LAB_140a05e79:
  return;
}

