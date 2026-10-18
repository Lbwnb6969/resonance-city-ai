// VA 0x140b1dec0, PDB extent 2421 bytes
// country_core::startup::load_mesh_atlases::load_and_prepare_nani_mesh
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_mesh_atlases.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x000140b2496a) overlaps instruction at (ram,0x000140b24966)
    */
/* WARNING: Removing unreachable block (ram,0x000143056a46) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::load_mesh_atlases::load_and_prepare_nani_mesh
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_mesh_atlases.rs
   Extent: 2421 */

undefined8 *******
pdb_140b1dec0(undefined8 *******param_1,undefined8 *******param_2,undefined *param_3,
             longlong param_4)

{
  uint *puVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
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
  ushort uVar26;
  int iVar27;
  uint uVar28;
  undefined1 (*pauVar29) [16];
  undefined8 *******pppppppuVar30;
  ulonglong uVar31;
  undefined8 *******pppppppuVar32;
  undefined7 uVar39;
  undefined8 ******ppppppuVar33;
  char *pcVar34;
  char *pcVar35;
  undefined8 *******pppppppuVar36;
  undefined *puVar37;
  undefined8 uVar38;
  longlong lVar40;
  undefined8 *******pppppppuVar41;
  undefined1 (*pauVar42) [16];
  undefined8 ******arg1;
  undefined8 *******unaff_RBX;
  undefined1 *puVar43;
  undefined8 *puVar44;
  undefined1 *puVar45;
  undefined1 *puVar46;
  undefined1 *puVar47;
  undefined8 *puVar48;
  undefined8 *puVar49;
  undefined8 *puVar50;
  undefined8 *puVar51;
  undefined1 *puVar52;
  longlong lVar53;
  undefined8 *******pppppppuVar54;
  byte *pbVar55;
  ulonglong uVar56;
  byte *pbVar57;
  undefined2 in_FS;
  bool bVar58;
  bool bVar59;
  bool bVar60;
  bool bVar61;
  byte bVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
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
  undefined1 auVar65 [16];
  char in_stack_50c159e04;
  undefined1 auStack_280 [40];
  byte *pbStack_258;
  undefined8 uStack_250;
  undefined1 auStack_248 [32];
  undefined *puStack_228;
  undefined8 *******pppppppuStack_220;
  byte *pbStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 *******pppppppuStack_200;
  undefined *puStack_1f8;
  byte *pbStack_1f0;
  longlong lStack_1e8;
  undefined8 *******pppppppuStack_1e0;
  undefined8 *******pppppppuStack_1d8;
  undefined8 ******ppppppuStack_1d0;
  undefined8 *******pppppppuStack_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 ******ppppppuStack_198;
  undefined8 ******ppppppuStack_190;
  undefined8 ******ppppppuStack_188;
  undefined8 *******pppppppuStack_180;
  undefined8 ******ppppppuStack_178;
  undefined8 ******ppppppuStack_170;
  undefined8 ******ppppppuStack_168;
  undefined8 ******ppppppuStack_160;
  undefined8 uStack_158;
  undefined8 *******pppppppuStack_150;
  undefined8 *******pppppppuStack_148;
  undefined8 ******ppppppuStack_140;
  undefined8 *******pppppppuStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 ******ppppppuStack_108;
  undefined8 ******ppppppuStack_100;
  undefined8 ******ppppppuStack_f8;
  undefined8 *******pppppppuStack_f0;
  undefined8 ******ppppppuStack_e8;
  undefined8 ******ppppppuStack_e0;
  undefined8 ******ppppppuStack_d8;
  undefined8 ******ppppppuStack_d0;
  undefined8 *******pppppppuStack_c8;
  code *pcStack_c0;
  byte *pbStack_b0;
  ulonglong uStack_a8;
  undefined1 uStack_99;
  undefined8 *******pppppppuStack_98;
  undefined8 uStack_90;
  
  puVar44 = (undefined8 *)auStack_248;
  puVar50 = (undefined8 *)auStack_248;
  puVar49 = (undefined8 *)auStack_248;
  puVar48 = (undefined8 *)auStack_248;
  puVar43 = auStack_248;
  puVar52 = auStack_248;
  puVar45 = auStack_248;
  puVar46 = auStack_248;
  uStack_90 = 0xfffffffffffffffe;
  pppppppuStack_148 = &pppppppuStack_200;
  ppppppuStack_140 = (undefined8 ******)pdb_1402ed400;
  pppppppuVar30 = &pppppppuStack_148;
  uStack_250 = (undefined8 *******)0x140b1df4d;
  pppppppuStack_200 = param_2;
  puStack_1f8 = param_3;
  pppppppuStack_150 = param_1;
  pbStack_b0 = (byte *)param_4;
  pdb_140f60760(&pppppppuStack_220,&UNK_1430558c1);
  uStack_208 = CONCAT71(uStack_208._1_7_,1);
  uStack_250 = (undefined8 *******)0x140b1df60;
  pdb_141b25060(&pppppppuStack_148,&pppppppuStack_220);
  if (SBORROW8(0,(longlong)pppppppuStack_148)) {
    pppppppuStack_1d8 = (undefined8 *******)ppppppuStack_140;
    puStack_228 = &UNK_1430558d8;
                    /* WARNING: Subroutine does not return */
    uStack_250 = (undefined8 *******)0x140b1e6a9;
    pdb_142dc8170(&UNK_143056220,0x2b,&pppppppuStack_1d8,&UNK_143056200);
  }
  ppppppuStack_168 = ppppppuStack_d8;
  ppppppuStack_160 = ppppppuStack_d0;
  ppppppuStack_178 = ppppppuStack_e8;
  ppppppuStack_170 = ppppppuStack_e0;
  ppppppuStack_188 = ppppppuStack_f8;
  pppppppuStack_180 = pppppppuStack_f0;
  ppppppuStack_198 = ppppppuStack_108;
  ppppppuStack_190 = ppppppuStack_100;
  uStack_1a8 = (undefined4)uStack_118;
  uStack_1a4 = uStack_118._4_4_;
  uStack_1a0 = (undefined4)uStack_110;
  uStack_19c = uStack_110._4_4_;
  uStack_1b8 = (undefined4)uStack_128;
  uStack_1b4 = uStack_128._4_4_;
  uStack_1b0 = (undefined4)uStack_120;
  uStack_1ac = uStack_120._4_4_;
  pppppppuStack_1c8 = pppppppuStack_138;
  uStack_1c0 = (undefined4)uStack_130;
  uStack_1bc = uStack_130._4_4_;
  pppppppuStack_1d8 = pppppppuStack_148;
  ppppppuStack_1d0 = ppppppuStack_140;
  if (!SBORROW8(0,(longlong)uStack_130)) {
    uStack_250 = (undefined8 *******)0x140b1dfdf;
    cVar25 = pdb_140d8af50(uStack_128,uStack_120);
    if (cVar25 != '\0') {
      uStack_250 = (undefined8 *******)0x140b1dfed;
      pdb_140b25eb0(&pppppppuStack_1d8);
    }
  }
  if ((char)ppppppuStack_160 != '\0') {
    if (1 < *_DAT_143ca8e90) {
      pcStack_c0 = pdb_140f58250;
      pppppppuStack_148 = (undefined8 *******)0x0;
      ppppppuStack_140 = (undefined8 ******)&UNK_143055731;
      pppppppuStack_138 = (undefined8 *******)0x28;
      uStack_130 = (undefined8 *******)0x0;
      uStack_128 = &UNK_1430556c6;
      uStack_120 = (byte *)0x34;
      uStack_118 = 2;
      uStack_110 = &UNK_143055731;
      ppppppuStack_108 = (undefined8 ******)0x28;
      ppppppuStack_100 = (undefined8 ******)0xb300000001;
      ppppppuStack_f8 = (undefined8 ******)&UNK_1430558f0;
      pppppppuStack_f0 = &pppppppuStack_c8;
      uStack_250 = (undefined8 *******)0x140b1e0c6;
      pppppppuStack_c8 = &pppppppuStack_220;
      pdb_140f332f0(&uStack_99,&pppppppuStack_148);
    }
    uStack_250 = (undefined8 *******)0x140b1e0d0;
    pdb_140a97700(&pppppppuStack_1d8);
    ppppppuStack_160 = (undefined8 ******)((ulonglong)ppppppuStack_160 & 0xffffffffffffff00);
  }
  if (ppppppuStack_188 == (undefined8 ******)0x0) {
    pppppppuStack_98 = (undefined8 *******)0x0;
  }
  else {
    pauVar29 = (undefined1 (*) [16])CONCAT44(uStack_19c,uStack_1a0);
    auVar64 = *pauVar29;
    uVar26 = (ushort)(SUB161(auVar64 >> 7,0) & 1) | (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
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
             (ushort)(byte)(auVar64[0xf] >> 7) << 0xf;
    pauVar42 = pauVar29;
    while (uVar28 = uVar26 ^ 0xffff, uVar28 == 0) {
      pauVar42 = pauVar42 + 1;
      auVar64 = *pauVar42;
      pauVar29 = pauVar29 + -0x38;
      uVar26 = (ushort)(SUB161(auVar64 >> 7,0) & 1) | (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
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
               (ushort)(byte)(auVar64[0xf] >> 7) << 0xf;
    }
    uVar4 = 0;
    for (; (uVar28 & 1) == 0; uVar28 = uVar28 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    pppppppuStack_98 = *(undefined8 ********)((longlong)pauVar29 + (ulonglong)uVar4 * -0x38 + -8);
  }
  lVar53 = *(longlong *)((longlong)pbStack_b0 + 8);
  lVar40 = lVar53 + *(longlong *)((longlong)pbStack_b0 + 0x10) * 0x18;
LAB_140b1e179:
  do {
    if (lVar53 == lVar40) goto LAB_140b1e269;
    uStack_250 = (undefined8 *******)0x140b1e18e;
    pppppppuVar30 = (undefined8 *******)pdb_1400afac0(&pppppppuStack_180,lVar53);
    uStack_250 = (undefined8 *******)0x140b1e1a0;
    pdb_140cab2c0(&pppppppuStack_148,&uStack_1a0,pppppppuVar30,lVar53);
    pbVar57 = uStack_120;
    puVar37 = uStack_128;
    unaff_RBX = uStack_130;
    lVar53 = lVar53 + 0x18;
    if (uStack_130 != (undefined8 *******)0x6) {
      if (pppppppuStack_148 != (undefined8 *******)0x0) {
        pppppppuVar30 = (undefined8 *******)0x1;
        uStack_250 = (undefined8 *******)0x140b1e1de;
        pub_1406abac0((byte *)ppppppuStack_140,(ulonglong)pppppppuStack_148,1);
      }
      switch(unaff_RBX) {
      case (undefined8 *******)0x0:
      case (undefined8 *******)0x2:
        if (puVar37 == (undefined *)0x0) goto LAB_140b1e179;
        uVar56 = (longlong)puVar37 << 2;
        break;
      case (undefined8 *******)0x1:
        if (puVar37 != (undefined *)0x0) {
          uVar56 = (longlong)puVar37 << 3;
          pppppppuVar30 = (undefined8 *******)0x2;
          goto code_r0x000140b1e16e;
        }
        goto LAB_140b1e179;
      case (undefined8 *******)0x3:
        if (puVar37 == (undefined *)0x0) goto LAB_140b1e179;
        uVar56 = (longlong)puVar37 << 3;
        break;
      case (undefined8 *******)0x4:
        if (puVar37 != (undefined *)0x0) {
          pppppppuVar30 = (undefined8 *******)0x4;
          uStack_250 = (undefined8 *******)0x140b1e228;
          pub_1406abac0(pbVar57,(longlong)puVar37 * 0xc,4);
        }
        goto LAB_140b1e179;
      default:
        if (puVar37 == (undefined *)0x0) goto LAB_140b1e179;
        uVar56 = (longlong)puVar37 << 4;
      }
      pppppppuVar30 = (undefined8 *******)0x4;
code_r0x000140b1e16e:
      uStack_250 = (undefined8 *******)0x140b1e179;
      pub_1406abac0(pbVar57,uVar56,(ulonglong)pppppppuVar30);
    }
  } while( true );
code_r0x000140b24bab:
  puVar49 = (undefined8 *)auStack_248;
  goto code_r0x000140b251d4;
code_r0x000140b2484d:
  pppppppuVar41 = pppppppuVar54;
  puVar45 = (undefined1 *)puVar44;
code_r0x000140b24850:
  arg1 = pppppppuVar41[3];
  if (SBORROW8(0,(longlong)arg1)) {
    return (undefined8 *******)-(longlong)arg1;
  }
  pppppppuVar32 = pppppppuVar41 + 3;
  goto code_r0x000140b248a1;
code_r0x000140b1e40c:
  pppppppuStack_c8 = (undefined8 *******)0x0;
  pcStack_c0 = (code *)0x0;
  uStack_250 = (undefined8 *******)0x140b1e430;
  pdb_1415e46b0(&pppppppuStack_148,&pppppppuStack_c8,pppppppuStack_98);
  uStack_250 = (undefined8 *******)0x140b1e447;
  pdb_140c92100(&pppppppuStack_1d8,arg1,pppppppuVar54,&pppppppuStack_148);
  pppppppuVar30 = pppppppuVar54;
  goto LAB_140b1e364;
code_r0x000140b24db8:
  *(undefined **)((longlong)puVar51 + 0x70) = &UNK_143056638;
  *(undefined1 **)((longlong)puVar51 + 0x68) = (undefined1 *)((longlong)puVar51 + 0x80);
  *(undefined **)((longlong)puVar51 + 0x58) = &UNK_143056669;
  *(undefined **)((longlong)puVar51 + 0x50) = &UNK_1430565a8;
  *(undefined8 ********)((longlong)puVar51 + 0x48) = pppppppuVar30;
  *(undefined **)((longlong)puVar51 + 0x38) = &UNK_1430563b3;
  *(undefined **)((longlong)puVar51 + 0x30) = &UNK_143056618;
  *(undefined8 ********)((longlong)puVar51 + 0x28) = pppppppuVar32;
  *(undefined8 *)((longlong)puVar51 + 0x60) = 5;
  *(undefined8 *)((longlong)puVar51 + 0x40) = 5;
  *(undefined8 *)((longlong)puVar51 + 0x20) = 8;
  puVar37 = &UNK_143056658;
code_r0x000140b25107:
  *(undefined **)((longlong)puVar51 + -8) = &UNK_140b2511f;
  pppppppuVar30 = (undefined8 *******)pdb_140f66ff0(arg1,puVar37,0x11,&UNK_1430563ab);
  return pppppppuVar30;
pdb_140b24800:
  uStack_250 = pppppppuVar54;
  puVar46 = auStack_280;
  uVar56 = (ulonglong)UNK_143056810;
  pppppppuVar54 = (undefined8 *******)0x8;
  pbStack_258 = pbVar55;
  if (uVar56 < 0x31) {
    puVar37 = &UNK_143056838;
code_r0x000140b2481f:
                    /* WARNING: Could not recover jumptable at 0x000140b24826. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pppppppuVar30 = (undefined8 *******)(*(code *)(puVar37 + *(int *)(puVar37 + uVar56 * 4)))();
    return pppppppuVar30;
  }
code_r0x000140b24899:
  pppppppuVar32 = pppppppuVar54 + 0x2860ad02;
  puVar45 = puVar46;
code_r0x000140b2489d:
  arg1 = pppppppuVar54[0x2860ad02];
code_r0x000140b248a1:
  puVar47 = puVar45;
  if (arg1 == (undefined8 ******)0x0) {
code_r0x000140b24828:
    return pppppppuVar32;
  }
code_r0x000140b248a6:
  pppppppuVar30 = (undefined8 *******)0x1;
  pppppppuVar54 = *(undefined8 ********)(puVar47 + 0x30);
  pppppppuVar41 = (undefined8 *******)pppppppuVar32[1];
  puVar43 = puVar47 + 0x38;
code_r0x0001406abac0:
  *(undefined8 *********)(puVar43 + -8) = &pppppppuStack_1c8;
  *(undefined8 ********)(puVar43 + -0x10) = pppppppuVar54;
  pppppppuVar54 = pppppppuVar41;
  if ((undefined8 *******)0x10 < pppppppuVar30) {
    pppppppuVar54 = (undefined8 *******)pppppppuVar41[-1];
  }
  *(undefined **)(puVar43 + -0x40) = &UNK_140f3c37e;
  uVar38 = GetProcessHeap(pppppppuVar41,arg1);
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pppppppuVar30 = (undefined8 *******)HeapFree(uVar38,0,pppppppuVar54);
  return pppppppuVar30;
LAB_140b1e269:
  puVar51 = (undefined8 *)((longlong)pbStack_b0 + 0x20);
  pbStack_b0 = (byte *)*puVar51 + *(longlong *)((longlong)pbStack_b0 + 0x28) * 0x20;
  uStack_158 = (longlong)pppppppuStack_98 * 8;
  uStack_a8 = (longlong)pppppppuStack_98 * 4;
  pppppppuStack_1e0 = (undefined8 *******)((ulonglong)pppppppuStack_98 >> 0x3c);
  iVar6 = -(uint)(CONCAT13(unaff_XMM7_Bd,
                           CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))) ==
                 CONCAT13(unaff_XMM7_Bd,
                          CONCAT12(unaff_XMM7_Bc,CONCAT11(unaff_XMM7_Bb,unaff_XMM7_Ba))));
  iVar7 = -(uint)(CONCAT13(unaff_XMM7_Bh,
                           CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))) ==
                 CONCAT13(unaff_XMM7_Bh,
                          CONCAT12(unaff_XMM7_Bg,CONCAT11(unaff_XMM7_Bf,unaff_XMM7_Be))));
  iVar8 = -(uint)(CONCAT13(unaff_XMM7_Bl,
                           CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))) ==
                 CONCAT13(unaff_XMM7_Bl,
                          CONCAT12(unaff_XMM7_Bk,CONCAT11(unaff_XMM7_Bj,unaff_XMM7_Bi))));
  iVar9 = -(uint)(CONCAT13(unaff_XMM7_Bp,
                           CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))) ==
                 CONCAT13(unaff_XMM7_Bp,
                          CONCAT12(unaff_XMM7_Bo,CONCAT11(unaff_XMM7_Bn,unaff_XMM7_Bm))));
  pbVar57 = (byte *)*puVar51;
LAB_140b1e364:
  pbVar55 = pbVar57;
  if (pbVar55 == pbStack_b0) {
    pppppppuStack_150[0xe] = ppppppuStack_168;
    pppppppuStack_150[0xf] = ppppppuStack_160;
    pppppppuStack_150[0xc] = ppppppuStack_178;
    pppppppuStack_150[0xd] = ppppppuStack_170;
    pppppppuStack_150[10] = ppppppuStack_188;
    pppppppuStack_150[0xb] = pppppppuStack_180;
    pppppppuStack_150[8] = ppppppuStack_198;
    pppppppuStack_150[9] = ppppppuStack_190;
    pppppppuStack_150[6] = (undefined8 ******)CONCAT44(uStack_1a4,uStack_1a8);
    pppppppuStack_150[7] = (undefined8 ******)CONCAT44(uStack_19c,uStack_1a0);
    pppppppuStack_150[4] = (undefined8 ******)CONCAT44(uStack_1b4,uStack_1b8);
    pppppppuStack_150[5] = (undefined8 ******)CONCAT44(uStack_1ac,uStack_1b0);
    pppppppuStack_150[2] = pppppppuStack_1c8;
    pppppppuStack_150[3] = (undefined8 ******)CONCAT44(uStack_1bc,uStack_1c0);
    *pppppppuStack_150 = pppppppuStack_1d8;
    pppppppuStack_150[1] = ppppppuStack_1d0;
    if (pppppppuStack_220 != (undefined8 *******)0x0) {
      uStack_250 = (undefined8 *******)0x140b1e640;
      pub_1406abac0(pbStack_218,(ulonglong)pppppppuStack_220,1);
    }
    return pppppppuStack_150;
  }
  arg1 = *(undefined8 *******)(pbVar55 + 8);
  pppppppuVar54 = *(undefined8 ********)(pbVar55 + 0x10);
  if (ppppppuStack_188 != (undefined8 ******)0x0) {
    uStack_250 = (undefined8 *******)0x140b1e397;
    pppppppuVar30 = pppppppuVar54;
    pbStack_1f0 = pbVar55 + 0x20;
    uVar56 = pdb_1400af950();
    ppppppuVar33 = ppppppuStack_198;
    unaff_RBX = (undefined8 *******)CONCAT44(uStack_19c,uStack_1a0);
    bVar62 = (byte)(uVar56 >> 0x39);
    auVar64 = ZEXT216(CONCAT11(bVar62,bVar62));
    auVar64 = pshuflw(auVar64,auVar64,0);
    lVar40 = 0;
    while( true ) {
      uVar56 = uVar56 & (ulonglong)ppppppuVar33;
      pcVar34 = (char *)((longlong)unaff_RBX + uVar56);
      cVar25 = *pcVar34;
      cVar10 = pcVar34[1];
      cVar11 = pcVar34[2];
      cVar12 = pcVar34[3];
      cVar13 = pcVar34[4];
      cVar14 = pcVar34[5];
      cVar15 = pcVar34[6];
      cVar16 = pcVar34[7];
      cVar17 = pcVar34[8];
      cVar18 = pcVar34[9];
      cVar19 = pcVar34[10];
      cVar20 = pcVar34[0xb];
      cVar21 = pcVar34[0xc];
      cVar22 = pcVar34[0xd];
      cVar23 = pcVar34[0xe];
      cVar24 = pcVar34[0xf];
      auVar63[0] = -(cVar25 == auVar64[0]);
      auVar63[1] = -(cVar10 == auVar64[1]);
      auVar63[2] = -(cVar11 == auVar64[2]);
      auVar63[3] = -(cVar12 == auVar64[3]);
      auVar63[4] = -(cVar13 == auVar64[4]);
      auVar63[5] = -(cVar14 == auVar64[5]);
      auVar63[6] = -(cVar15 == auVar64[6]);
      auVar63[7] = -(cVar16 == auVar64[7]);
      auVar63[8] = -(cVar17 == auVar64[0]);
      auVar63[9] = -(cVar18 == auVar64[1]);
      auVar63[10] = -(cVar19 == auVar64[2]);
      auVar63[0xb] = -(cVar20 == auVar64[3]);
      auVar63[0xc] = -(cVar21 == auVar64[4]);
      auVar63[0xd] = -(cVar22 == auVar64[5]);
      auVar63[0xe] = -(cVar23 == auVar64[6]);
      auVar63[0xf] = -(cVar24 == auVar64[7]);
      uVar26 = (ushort)(SUB161(auVar63 >> 7,0) & 1) | (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar63 >> 0x77,0) & 1) << 0xe | (ushort)(auVar63[0xf] >> 7) << 0xf;
      uVar28 = (uint)uVar26;
      if (uVar26 != 0) {
        lStack_1e8 = lVar40;
        do {
          uVar4 = 0;
          for (uVar5 = uVar28; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            uVar4 = uVar4 + 1;
          }
          uVar31 = uVar4 + uVar56 & (ulonglong)ppppppuVar33;
          if (pppppppuVar54 == (undefined8 *******)unaff_RBX[uVar31 * -7 + -5]) {
            uStack_250 = (undefined8 *******)0x140b1e30c;
            pppppppuVar30 = pppppppuVar54;
            iVar27 = pub_142e32750(arg1,unaff_RBX[uVar31 * -7 + -6]);
            pbVar57 = pbStack_1f0;
            if (iVar27 == 0) goto LAB_140b1e364;
          }
          uVar26 = (ushort)(uVar28 - 1) & (ushort)uVar28;
          uVar28 = CONCAT22((short)(uVar28 - 1 >> 0x10),uVar26);
          lVar40 = lStack_1e8;
        } while (uVar26 != 0);
      }
      auVar65[0] = -(cVar25 == (char)iVar6);
      auVar65[1] = -(cVar10 == (char)((uint)iVar6 >> 8));
      auVar65[2] = -(cVar11 == (char)((uint)iVar6 >> 0x10));
      auVar65[3] = -(cVar12 == (char)((uint)iVar6 >> 0x18));
      auVar65[4] = -(cVar13 == (char)iVar7);
      auVar65[5] = -(cVar14 == (char)((uint)iVar7 >> 8));
      auVar65[6] = -(cVar15 == (char)((uint)iVar7 >> 0x10));
      auVar65[7] = -(cVar16 == (char)((uint)iVar7 >> 0x18));
      auVar65[8] = -(cVar17 == (char)iVar8);
      auVar65[9] = -(cVar18 == (char)((uint)iVar8 >> 8));
      auVar65[10] = -(cVar19 == (char)((uint)iVar8 >> 0x10));
      auVar65[0xb] = -(cVar20 == (char)((uint)iVar8 >> 0x18));
      auVar65[0xc] = -(cVar21 == (char)iVar9);
      auVar65[0xd] = -(cVar22 == (char)((uint)iVar9 >> 8));
      auVar65[0xe] = -(cVar23 == (char)((uint)iVar9 >> 0x10));
      auVar65[0xf] = -(cVar24 == (char)((uint)iVar9 >> 0x18));
      if ((((((((((((((((SUB161(auVar65 >> 7,0) & 1) != 0 || (SUB161(auVar65 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar65 >> 0x17,0) & 1) != 0) || (SUB161(auVar65 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar65 >> 0x27,0) & 1) != 0) || (SUB161(auVar65 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar65 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar65 >> 0x3f,0) & 1) != 0) || (SUB161(auVar65 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar65 >> 0x4f,0) & 1) != 0) || (SUB161(auVar65 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar65 >> 0x5f,0) & 1) != 0) || (SUB161(auVar65 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar65 >> 0x6f,0) & 1) != 0) || (SUB161(auVar65 >> 0x77,0) & 1) != 0) ||
          auVar65[0xf] < '\0') break;
      uVar56 = uVar56 + lVar40 + 0x10;
      lVar40 = lVar40 + 0x10;
    }
  }
  pbVar57 = pbVar55 + 0x20;
  pppppppuVar41 = (undefined8 *******)&UNK_143056810;
  uVar56 = (ulonglong)*(int *)(&UNK_143056810 + (ulonglong)pbVar55[0x18] * 4);
  bVar58 = 0xfffffffebcfa97ef < uVar56;
  bVar61 = SCARRY8(uVar56,0x143056810);
  pppppppuVar32 = (undefined8 *******)(&UNK_143056810 + uVar56);
  bVar60 = (longlong)pppppppuVar32 < 0;
  bVar59 = (POPCOUNT((ulonglong)pppppppuVar32 & 0xff) & 1U) == 0;
  bVar62 = (byte)pppppppuVar32;
  iVar27 = (int)pppppppuVar32;
  uVar39 = (undefined7)((ulonglong)pppppppuVar32 >> 8);
  pppppppuVar36 = pppppppuVar32;
  puVar51 = (undefined8 *)auStack_248;
  puVar47 = auStack_248;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(pbVar55[0x18]) {
  case 0:
    if (pppppppuStack_98 == (undefined8 *******)0x0) {
      ppppppuVar33 = (undefined8 ******)0x4;
    }
    else {
      uStack_250 = (undefined8 *******)0x140b1e3ea;
      pdb_14007ee60();
      uStack_250 = (undefined8 *******)0x140b1e3fb;
      ppppppuVar33 = (undefined8 ******)pub_1406abae0(uStack_a8,4);
      if (ppppppuVar33 == (undefined8 ******)0x0) {
        uStack_250 = (undefined8 *******)0x140b1e6d1;
        pdb_142dc7e2a(4,uStack_a8);
        goto code_r0x000140b1e6d2;
      }
    }
    pppppppuStack_148 = pppppppuStack_98;
    pppppppuStack_138 = pppppppuStack_98;
    uStack_250 = (undefined8 *******)0x140b1e54d;
    ppppppuStack_140 = ppppppuVar33;
    pdb_140c92580(&pppppppuStack_1d8,arg1,pppppppuVar54,&pppppppuStack_148);
    pppppppuVar30 = pppppppuVar54;
    goto LAB_140b1e364;
  case 1:
    if (pppppppuStack_98 == (undefined8 *******)0x0) {
      ppppppuVar33 = (undefined8 ******)0x4;
    }
    else {
      uStack_250 = (undefined8 *******)0x140b1e4fa;
      pdb_14007ee60();
      uStack_250 = (undefined8 *******)0x140b1e50b;
      ppppppuVar33 = (undefined8 ******)pub_1406abae0(uStack_a8,4);
      if (ppppppuVar33 == (undefined8 ******)0x0) {
        uStack_250 = (undefined8 *******)0x140b1e6bd;
        pdb_142dc7e2a(4,uStack_a8);
        goto code_r0x000140b1e6d2;
      }
    }
    pppppppuStack_148 = pppppppuStack_98;
    pppppppuStack_138 = pppppppuStack_98;
    uStack_250 = (undefined8 *******)0x140b1e58a;
    ppppppuStack_140 = ppppppuVar33;
    pdb_140c93680(&pppppppuStack_1d8,arg1,pppppppuVar54,&pppppppuStack_148);
    pppppppuVar30 = pppppppuVar54;
    goto LAB_140b1e364;
  case 2:
    if (pppppppuStack_1e0 != (undefined8 *******)0x0) {
      uVar38 = 0;
code_r0x000140b1e5d3:
      uStack_250 = (undefined8 *******)0x140b1e5df;
      pdb_142dc7e2a(uVar38,uStack_158);
code_r0x000140b1e6d2:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if (pppppppuStack_98 == (undefined8 *******)0x0) {
      ppppppuVar33 = (undefined8 ******)0x4;
    }
    else {
      uStack_250 = (undefined8 *******)0x140b1e471;
      pdb_14007ee60();
      uVar38 = 4;
      uStack_250 = (undefined8 *******)0x140b1e485;
      ppppppuVar33 = (undefined8 ******)pub_1406abae0(uStack_158,4);
      if (ppppppuVar33 == (undefined8 ******)0x0) goto code_r0x000140b1e5d3;
    }
    pppppppuStack_148 = pppppppuStack_98;
    pppppppuStack_138 = pppppppuStack_98;
    uStack_250 = (undefined8 *******)0x140b1e5c7;
    ppppppuStack_140 = ppppppuVar33;
    pdb_140c92a00(&pppppppuStack_1d8,arg1,pppppppuVar54,&pppppppuStack_148);
    pppppppuVar30 = pppppppuVar54;
    goto LAB_140b1e364;
  case 3:
    pcStack_c0 = (code *)((ulonglong)pcStack_c0 & 0xffffffff00000000);
    pppppppuStack_c8 = (undefined8 *******)0x0;
    uStack_250 = (undefined8 *******)0x140b1e4c8;
    pdb_1415e43a0(&pppppppuStack_148,&pppppppuStack_c8,pppppppuStack_98);
    uStack_250 = (undefined8 *******)0x140b1e4df;
    pdb_140c93200(&pppppppuStack_1d8,arg1,pppppppuVar54,&pppppppuStack_148);
    pppppppuVar30 = pppppppuVar54;
    goto LAB_140b1e364;
  case 4:
    goto code_r0x000140b1e40c;
  case 5:
  case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 8:
    *(int *)(&UNK_14305679b + uVar56) = *(int *)(&UNK_14305679b + uVar56) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 9:
    *pbVar55 = *pbVar55;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    goto pdb_140b24800;
  case 0xb:
  case 0xc:
  case 0x2a:
  case 0x37:
  case 0x38:
    goto code_r0x000140b24899;
  case 0x1e:
    pppppppuVar32 = (undefined8 *******)0x1;
  case 0x3c:
    puVar44 = &uStack_250;
    uStack_250 = (undefined8 *******)&UNK_143056810;
    *(byte *)((longlong)pppppppuVar32 + -0x7b) = *(byte *)((longlong)pppppppuVar32 + -0x7b) ^ 0x10;
    *(byte *)((longlong)(pppppppuVar32 + 9) + (longlong)unaff_RBX) = 0;
    pbStack_258 = &UNK_140b2484d;
    pub_1406abac0((byte *)(ulonglong)_UNK_143056848,(ulonglong)arg1,1);
    pppppppuVar54 = (undefined8 *******)&UNK_143056810;
    goto code_r0x000140b2484d;
  case 0x31:
    goto code_r0x000140b24850;
  case 0x32:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x33:
  case 0x34:
    goto pdb_140b24800;
  case 0x35:
  case 0x36:
    goto code_r0x000140b24828;
  case 0x3b:
  case 0x3d:
    return pppppppuVar32;
  case 0x3e:
    goto code_r0x000140b2484d;
  case 0x3f:
    *pbVar55 = *pbVar55 ^ 0x10;
    LOCK();
    uVar56 = CONCAT44((int)((ulonglong)pppppppuVar32 >> 0x20),iRam000000018b056810);
    UNLOCK();
    puVar37 = (undefined *)0x43056838;
    iRam000000018b056810 = iVar27;
    goto code_r0x000140b2481f;
  case 0x40:
    pppppppuVar32 = (undefined8 *******)(ulonglong)((int)pppppppuVar54 + 0x43056810);
    puVar45 = auStack_248;
    goto code_r0x000140b2489d;
  case 0x41:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x42:
  case 0x58:
    iVar27 = iVar27 + 0x2531780;
    uVar38 = 0x13;
    goto pdb_140f679a0;
  case 0x43:
    goto code_r0x000140b24bab;
  case 0x44:
    puVar50 = &uStack_250;
    uStack_250 = unaff_RBX;
    pppppppuVar41 = (undefined8 *******)&UNK_143057810;
    *(int *)((longlong)pppppppuVar32 * 2) = *(int *)((longlong)pppppppuVar32 * 2) + iVar27;
    (&UNK_14305679d)[uVar56] = (&UNK_14305679d)[uVar56] + '\x10';
    *(byte *)((longlong)pppppppuVar30 + -0x7d) = *(byte *)((longlong)pppppppuVar30 + -0x7d) | 0x10;
    *(uint *)pppppppuVar32 = *(uint *)pppppppuVar32 >> 8 | *(uint *)pppppppuVar32 << 0x19;
    ppppppuStack_1d0 = (undefined8 ******)CONCAT44(ppppppuStack_1d0._4_4_,0x43057810);
  case 0x68:
    *(ulonglong *)((longlong)puVar50 + 0x80) = (ulonglong)((int)pppppppuVar41 + 0x18);
    *(undefined **)((longlong)puVar50 + 0x50) = &UNK_143056638;
    *(undefined1 **)((longlong)puVar50 + 0x48) = (undefined1 *)((longlong)puVar50 + 0x80);
    *(undefined **)((longlong)puVar50 + 0x38) = &UNK_143056669;
    *(undefined **)((longlong)puVar50 + 0x30) = &UNK_143056370;
    *(undefined8 ********)((longlong)puVar50 + 0x28) = pppppppuVar32;
    *(undefined8 *)((longlong)puVar50 + 0x40) = 5;
    *(undefined8 *)((longlong)puVar50 + 0x20) = 5;
    pppppppuVar36 = (undefined8 *******)&UNK_143056696;
    puVar52 = (undefined1 *)puVar50;
code_r0x000140b2504b:
    *(undefined **)(puVar52 + -8) = &UNK_140b25056;
    pppppppuVar30 = (undefined8 *******)pdb_140f66f00(arg1,pppppppuVar36);
    return pppppppuVar30;
  case 0x45:
    (&UNK_14305679d)[uVar56] = (&UNK_14305679d)[uVar56] + '\x10';
    pbVar55[0x50c15a0a1] = pbVar55[0x50c15a0a1] | 0x10;
    (&UNK_143056793)[uVar56] = (&UNK_143056793)[uVar56] ^ 0x10;
    *(uint *)pppppppuVar32 = *(uint *)pppppppuVar32 >> 8 | *(uint *)pppppppuVar32 << 0x19;
    pppppppuStack_1c8 = (undefined8 *******)CONCAT44(pppppppuStack_1c8._4_4_,0x43056810);
    puVar51 = (undefined8 *)auStack_248;
    goto code_r0x000140b24db8;
  case 0x46:
    pppppppuVar32 = (undefined8 *******)((ulonglong)pppppppuVar32 & 0xffffffffffffff70);
    puVar51 = (undefined8 *)auStack_248;
    goto code_r0x000140b24db8;
  case 0x47:
    *(byte *)pppppppuVar32 = *(byte *)pppppppuVar32 + bVar62;
    puStack_1f8 = &UNK_1430565e0;
    pppppppuStack_200 = &pppppppuStack_1c8;
    puStack_210 = &UNK_1430563b3;
    pbStack_218 = &UNK_1430565a8;
    uStack_208 = 5;
    puStack_228 = (undefined *)0x8;
    pppppppuVar36 = (undefined8 *******)&UNK_143056600;
    pppppppuStack_220 = pppppppuVar32;
  case 0x5f:
    puVar52 = auStack_248;
    goto code_r0x000140b2504b;
  case 0x48:
    puStack_228 = (undefined *)CONCAT44(puStack_228._4_4_,8);
    puVar51 = (undefined8 *)auStack_248;
    goto code_r0x000140b24db8;
  case 0x49:
    iVar27 = iVar27 + 0x25319c0;
    uVar38 = 0x14;
    goto pdb_140f679a0;
  case 0x4a:
    pppppppuVar32 = (undefined8 *******)((ulonglong)pppppppuVar32 & 0xffffffffffffff30);
    puVar51 = &uStack_250;
    uStack_250 = unaff_RBX;
    goto code_r0x000140b24db8;
  case 0x4b:
    *(byte *)pppppppuVar32 = *(byte *)pppppppuVar32 + bVar62;
    pppppppuStack_1c8 = (undefined8 *******)&UNK_143056814;
    puStack_228 = &UNK_143056538;
    pppppppuVar32 = (undefined8 *******)&UNK_143056558;
    puVar49 = (undefined8 *)auStack_248;
    break;
  case 0x4c:
    pcVar3 = (code *)swi(1);
    uStack_250 = unaff_RBX;
    pppppppuVar30 = (undefined8 *******)(*pcVar3)();
    return pppppppuVar30;
  case 0x4d:
    goto code_r0x000140b24db8;
  case 0x4e:
    puVar49 = &uStack_250;
    pppppppuVar32 = (undefined8 *******)&UNK_143056588;
    uStack_250 = unaff_RBX;
    break;
  case 0x4f:
    *(undefined2 *)((longlong)pppppppuVar32 * 5) = in_FS;
    *(byte *)pppppppuVar32 = *(byte *)pppppppuVar32 + bVar62;
    bVar58 = CARRY1(UNK_1430567c8,bVar62);
    _UNK_1430567c8 = CONCAT31(_UNK_1430567c9,UNK_1430567c8 + bVar62);
    cVar25 = bVar62 + *(byte *)pppppppuVar32 + bVar58;
    pppppppuVar32 = (undefined8 *******)CONCAT71(uVar39,cVar25);
    *(byte *)pppppppuVar32 = *(byte *)pppppppuVar32 + cVar25;
    goto code_r0x000140b24bab;
  case 0x50:
    pppppppuVar41 = (undefined8 *******)0x43056828;
  case 0x62:
    puVar48 = &uStack_250;
    lVar40 = CONCAT62((int6)((ulonglong)pppppppuVar41 >> 0x10),
                      CONCAT11((char)((ulonglong)pppppppuVar41 >> 8) + (char)pppppppuVar41,
                               (char)pppppppuVar41));
    pcVar34 = (char *)((ulonglong)pppppppuVar32 | 3);
    *pcVar34 = *pcVar34 + (char)pcVar34;
    pppppppuVar32 = (undefined8 *******)(lVar40 + 8);
    ppppppuStack_1d0 = (undefined8 ******)(lVar40 + 0x18);
    puVar37 = &UNK_143056638;
    uStack_250 = unaff_RBX;
code_r0x000140b249bd:
    *(undefined **)((longlong)puVar48 + 0x50) = puVar37;
    *(undefined1 **)((longlong)puVar48 + 0x48) = (undefined1 *)((longlong)puVar48 + 0x80);
    *(undefined **)((longlong)puVar48 + 0x38) = &UNK_143056669;
    *(undefined **)((longlong)puVar48 + 0x30) = &UNK_143056370;
    *(undefined8 ********)((longlong)puVar48 + 0x28) = pppppppuVar32;
    *(undefined8 *)((longlong)puVar48 + 0x40) = 5;
    *(undefined8 *)((longlong)puVar48 + 0x20) = 5;
    pppppppuVar36 = (undefined8 *******)&UNK_14305667f;
    puVar52 = (undefined1 *)puVar48;
    goto code_r0x000140b2504b;
  case 0x51:
    pppppppuVar32 = (undefined8 *******)&UNK_143056272;
    puVar49 = (undefined8 *)auStack_248;
    break;
  case 0x52:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x53:
    pppppppuVar32 = (undefined8 *******)&UNK_1430564ec;
    puVar49 = (undefined8 *)auStack_248;
    break;
  case 0x54:
    puStack_1f8 = (undefined *)CONCAT44(puStack_1f8._4_4_,0x43056810);
    pppppppuStack_200 = &pppppppuStack_1c8;
    puStack_210 = &UNK_1430564e8;
    pbStack_218 = &UNK_143056490;
    uStack_208 = 4;
    puStack_228 = (undefined *)0x5;
    pppppppuVar36 = (undefined8 *******)&UNK_1430564d0;
    pppppppuStack_220 = pppppppuVar32;
    goto code_r0x000140b2504b;
  case 0x55:
    pppppppuStack_1c8 = (undefined8 *******)&UNK_143056828;
    puVar51 = (undefined8 *)auStack_248;
    goto code_r0x000140b24db8;
  case 0x56:
    uVar38 = 0x12;
    iVar27 = 0x430563b8;
    goto pdb_140f679a0;
  case 0x57:
    puStack_228 = (undefined *)CONCAT44(puStack_228._4_4_,8);
    pppppppuVar36 = (undefined8 *******)&UNK_1430565c8;
    puVar52 = auStack_248;
    goto code_r0x000140b2504b;
  case 0x59:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x5a:
    *(uint *)pppppppuVar32 =
         (uint)(CONCAT14(bVar58,*(uint *)pppppppuVar32) >> 8) | *(uint *)pppppppuVar32 << 0x19;
  case 0x66:
    pppppppuVar32 = (undefined8 *******)0x43056818;
    pppppppuVar30 = (undefined8 *******)&UNK_143056840;
    pppppppuStack_1c8 = (undefined8 *******)&UNK_143056828;
    pppppppuStack_1d8 = (undefined8 *******)&UNK_143056638;
    pppppppuStack_1e0 = &pppppppuStack_1c8;
code_r0x000140b250ab:
    pbStack_1f0 = &UNK_143056669;
    puStack_1f8 = &UNK_1430565a8;
    puStack_210 = &UNK_1430563b3;
    pbStack_218 = &UNK_143056618;
    lStack_1e8 = 5;
    uStack_208 = 5;
    puStack_228 = (undefined *)0x8;
    puVar37 = &UNK_14305666e;
    puVar51 = (undefined8 *)auStack_248;
    pppppppuStack_220 = pppppppuVar32;
    pppppppuStack_200 = pppppppuVar30;
    goto code_r0x000140b25107;
  case 0x5b:
                    /* WARNING: Could not recover jumptable at 0x000140b24998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pppppppuVar30 =
         (undefined8 *******)(*(code *)(CONCAT71(uVar39,bVar62 + 0x80) + (longlong)pppppppuVar30))()
    ;
    return pppppppuVar30;
  case 0x5c:
    uVar28 = iVar27 + *(uint *)pppppppuVar32 + (uint)bVar58;
    pppppppuVar36 = (undefined8 *******)(ulonglong)uVar28;
    *(byte *)pppppppuVar36 = *(byte *)pppppppuVar36 + (char)uVar28;
    puVar52 = auStack_248;
    goto code_r0x000140b2504b;
  case 0x5d:
    return pppppppuVar32;
  case 0x5e:
    pcVar34 = (char *)((ulonglong)pppppppuVar32 & 0xffffffffffffff80);
    *pcVar34 = *pcVar34 + (char)pcVar34;
    pcVar34[-0x73] = pcVar34[-0x73] + '\x10';
    pppppppuVar32 = (undefined8 *******)(ulonglong)((uint)pcVar34 | 0x2531407);
  case 0x60:
    puStack_1f8 = &UNK_143056810;
    pppppppuStack_200 = &pppppppuStack_1c8;
    puStack_210 = &UNK_1430563b3;
    pbStack_218 = &UNK_143056370;
    uStack_208 = 5;
    puStack_228 = (undefined *)0x8;
    pppppppuStack_220 = pppppppuVar32;
code_r0x000140b24e8a:
    pppppppuVar36 = (undefined8 *******)&UNK_143056390;
    puVar52 = auStack_248;
    goto code_r0x000140b2504b;
  case 0x61:
    puVar49 = &uStack_250;
    pppppppuVar32 = (undefined8 *******)((ulonglong)pppppppuVar32 & 0xffffffffffffff80);
    *(byte *)pppppppuVar32 = *(byte *)pppppppuVar32 + (char)pppppppuVar32;
    pcVar34 = (char *)(CONCAT71(0x1430568,in_stack_50c159e04 + '\x10') + -0x48);
    *pcVar34 = *pcVar34 + (char)pppppppuVar32;
    uStack_250 = unaff_RBX;
  case 0x70:
    *(uint *)pppppppuVar32 = *(uint *)pppppppuVar32 | (uint)pppppppuVar32;
    *(byte *)pppppppuVar32 = *(byte *)pppppppuVar32 + (char)pppppppuVar32;
    break;
  case 99:
    if (_UNK_143056818 == 0) {
      return pppppppuVar32;
    }
    pppppppuVar41 = (undefined8 *******)CONCAT44(_UNK_143056824,_UNK_143056820);
    arg1 = (undefined8 ******)(_UNK_143056818 << 4);
    goto code_r0x000140b24966;
  case 100:
    (&UNK_1430567d1)[uVar56] = (&UNK_1430567d1)[uVar56] + '\x10' + bVar58;
    pppppppuVar41 = (undefined8 *******)&UNK_14305680f;
    *(byte *)pppppppuVar32 = *(byte *)pppppppuVar32 + bVar62;
code_r0x000140b24966:
    pppppppuVar30 = (undefined8 *******)0x4;
    goto code_r0x0001406abac0;
  case 0x65:
    if ((int)arg1 == 0) {
      iRam4808518b48ffb871 = iVar27;
      return pppppppuVar32;
    }
    arg1 = (undefined8 ******)((longlong)arg1 << 3);
    pppppppuVar30 = (undefined8 *******)0x2;
    pppppppuVar41 = _UNK_143056888;
    puVar43 = auStack_248;
    iRam4808518b48ffb871 = iVar27;
    goto code_r0x0001406abac0;
  case 0x67:
    (&UNK_14305679d)[uVar56] = (&UNK_14305679d)[uVar56] + '\x10';
    iVar27 = iVar27 + 0x2531467;
    uVar38 = 0x10;
    goto pdb_140f679a0;
  case 0x69:
    iVar27 = 0x43056279;
    uVar38 = 3;
    uStack_250 = unaff_RBX;
pdb_140f679a0:
                    /* WARNING: Could not recover jumptable at 0x000140f679ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pppppppuVar30 = (undefined8 *******)(*(code *)arg1[1][3])(*arg1,iVar27,uVar38,arg1[1][3]);
    return pppppppuVar30;
  case 0x6a:
    (&UNK_143056799)[uVar56] = (&UNK_143056799)[uVar56] | 0x10;
    *(undefined2 *)((longlong)pppppppuVar32 * 5) = in_FS;
    *(byte *)pppppppuVar32 = *(byte *)pppppppuVar32 + bVar62;
    (&UNK_14305679d)[uVar56] = (&UNK_14305679d)[uVar56] + '\x10';
    puStack_228 = (undefined *)(ulonglong)(iVar27 + 0x25312c2);
    pppppppuVar32 = (undefined8 *******)&UNK_1430566aa;
    puVar49 = (undefined8 *)auStack_248;
    break;
  case 0x6b:
    goto code_r0x000140b248a6;
  case 0x6c:
    puVar37 = (undefined *)0x43056638;
    goto code_r0x000140b249bd;
  case 0x6d:
    puStack_228 = (undefined *)CONCAT44(puStack_228._4_4_,8);
    goto code_r0x000140b24e8a;
  case 0x6e:
    pppppppuStack_1e0 = (undefined8 *******)CONCAT44(pppppppuStack_1e0._4_4_,0x43056810);
    goto code_r0x000140b250ab;
  case 0x6f:
    uVar28 = iVar27 + _UNK_1430567c8;
    *(char *)(ulonglong)uVar28 = *(char *)(ulonglong)uVar28 + (char)uVar28;
    puVar43 = auStack_248;
    goto code_r0x0001406abac0;
  case 0x71:
    pcVar35 = (char *)((ulonglong)pppppppuVar32 & 0xffffffffffffff80);
    *pcVar35 = *pcVar35 + (char)pcVar35;
    pcVar34 = (char *)(CONCAT71(0x1430568,in_stack_50c159e04 + '\x10') + -0x48);
    *pcVar34 = *pcVar34 + (char)pcVar35;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x72:
  case 0x73:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x74:
  case 0x77:
    if (!bVar59) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    do {
      if (bVar61 == bVar60) {
        LOCK();
        bVar62 = auStack_248[(longlong)&pppppppuStack_1c8 * 4 + -3];
        auStack_248[(longlong)&pppppppuStack_1c8 * 4 + -3] = (byte)((ulonglong)unaff_RBX >> 8);
        unaff_RBX = (undefined8 *******)((ulonglong)bVar62 << 8);
        UNLOCK();
        pppppppuVar30 = pppppppuVar54;
        if (bVar59) {
          puVar1 = (uint *)(pbVar55 + -0x78060254);
          *puVar1 = *puVar1 << 0xc | *puVar1 >> 0x14;
          puVar1 = (uint *)(pbVar55 + -0x77e60254);
          *puVar1 = *puVar1 << 0xc | *puVar1 >> 0x14;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        bVar61 = false;
        uVar28 = (uint)pppppppuVar32 & *(uint *)(pbVar55 + -0x54);
        bVar60 = (int)uVar28 < 0;
        bVar59 = (POPCOUNT(uVar28 & 0xff) & 1U) == 0;
        pppppppuVar30 = (undefined8 *******)((longlong)pppppppuVar54 + -1);
        pppppppuVar32 =
             (undefined8 *******)
             (ulonglong)CONCAT31((int3)(uVar28 >> 8),*(undefined1 *)pppppppuVar54);
      }
      pppppppuVar54 = pppppppuVar30;
    } while (bVar61 == bVar60);
    UNK_1430567bc = UNK_1430567bc | 0xfd;
    pbVar57 = (byte *)((ulonglong)
                       CONCAT31((int3)((uint)((int)CONCAT71((int7)((ulonglong)pppppppuVar32 >> 8),
                                                            *(undefined1 *)pppppppuVar30) +
                                             0x360253bb) >> 8),
                                *(undefined *)((longlong)pppppppuVar30 + -1)) - 0x54);
    *pbVar57 = *pbVar57 >> 5 | *pbVar57 << 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x75:
  case 0x76:
    *(byte *)pppppppuVar32 = *(byte *)pppppppuVar32 + bVar62;
    *(byte *)pppppppuVar32 = *(byte *)pppppppuVar32 + bVar62;
    *(byte *)pppppppuVar32 = *(byte *)pppppppuVar32 + bVar62;
    if (!CARRY1(uStack_158._2_1_,bVar62)) {
      *(byte *)((longlong)unaff_RBX + 0x72) =
           *(byte *)((longlong)unaff_RBX + 0x72) & (byte)((ulonglong)pppppppuVar32 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(uint *)pppppppuVar32 = *(uint *)pppppppuVar32 + iVar27;
    *(byte *)pppppppuVar32 = *(byte *)pppppppuVar32 + bVar62;
    if (*(byte *)pppppppuVar32 != 0) {
      *(uint *)pppppppuVar32 = *(uint *)pppppppuVar32 + iVar27;
      *(byte *)pppppppuVar32 = *(byte *)pppppppuVar32 + bVar62;
      *(uint *)pppppppuVar32 = *(uint *)pppppppuVar32 + iVar27;
      bVar2 = *(byte *)pppppppuVar32;
      *(byte *)pppppppuVar32 = *(byte *)pppppppuVar32 + bVar62;
      pcVar34 = (char *)(CONCAT71(0x1430568,(char)((ulonglong)unaff_RBX >> 8) + '\x0f') + 0x140f5);
      *pcVar34 = *pcVar34 + (char)unaff_RBX + CARRY1(bVar2,bVar62);
      *(byte *)pppppppuVar32 = *(byte *)pppppppuVar32 + bVar62;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
code_r0x000140b251d4:
  *(undefined **)((longlong)puVar49 + -8) = &UNK_140b251df;
  pppppppuVar30 = (undefined8 *******)pdb_140f66090(arg1,pppppppuVar32);
  return pppppppuVar30;
}

