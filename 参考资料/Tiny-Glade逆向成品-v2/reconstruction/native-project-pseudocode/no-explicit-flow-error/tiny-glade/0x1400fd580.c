// VA 0x1400fd580, PDB extent 12231 bytes
// tiny_glade::render_loop::render
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/render_loop.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::render_loop::render
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/render_loop.rs
   Extent: 12231 */

void pdb_1400fd580(undefined4 param_1,ulonglong param_2,undefined1 *param_3,ulonglong param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  byte bVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  byte *pbVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  code *pcVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
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
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  byte bVar56;
  uint uVar57;
  longlong lVar58;
  longlong lVar59;
  ulonglong uVar60;
  longlong *plVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  longlong lVar64;
  uint uVar65;
  int iVar66;
  ulonglong uVar67;
  undefined1 *puVar68;
  undefined *puVar69;
  ulonglong uVar70;
  undefined8 *puVar71;
  longlong lVar72;
  float *pfVar73;
  undefined *puVar74;
  longlong lVar75;
  ushort uVar76;
  ulonglong uVar77;
  longlong lVar78;
  longlong in_R11;
  undefined *puVar79;
  undefined8 uVar80;
  bool bVar81;
  double dVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  double dVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  double dVar88;
  undefined1 auVar89 [16];
  double dVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  double dVar102;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined4 unaff_XMM6_Da;
  float fVar123;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM11_Db;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM11_Dd;
  longlong lStackX_8;
  int aiStackX_10 [2];
  undefined8 auStackX_18 [2];
  undefined8 uStack_48;
  
  uStack_48 = 0x1400fd596;
  lVar58 = pdb_142d7c6d0();
  lVar58 = -lVar58;
  *(undefined4 *)(&stack0x00001080 + lVar58) = unaff_XMM11_Da;
  *(undefined4 *)(&stack0x00001084 + lVar58) = unaff_XMM11_Db;
  *(undefined4 *)(&stack0x00001088 + lVar58) = unaff_XMM11_Dc;
  *(undefined4 *)(&stack0x0000108c + lVar58) = unaff_XMM11_Dd;
  *(undefined8 *)(&stack0x00001070 + lVar58) = unaff_XMM10_Qa;
  *(undefined8 *)(&stack0x00001078 + lVar58) = unaff_XMM10_Qb;
  *(undefined8 *)(&stack0x00001060 + lVar58) = unaff_XMM9_Qa;
  *(undefined8 *)(&stack0x00001068 + lVar58) = unaff_XMM9_Qb;
  *(undefined8 *)(&stack0x00001050 + lVar58) = unaff_XMM8_Qa;
  *(undefined8 *)(&stack0x00001058 + lVar58) = unaff_XMM8_Qb;
  *(undefined4 *)(&stack0x00001040 + lVar58) = unaff_XMM7_Da;
  *(undefined4 *)(&stack0x00001044 + lVar58) = unaff_XMM7_Db;
  *(undefined4 *)(&stack0x00001048 + lVar58) = unaff_XMM7_Dc;
  *(undefined4 *)(&stack0x0000104c + lVar58) = unaff_XMM7_Dd;
  *(undefined4 *)(&stack0x00001030 + lVar58) = unaff_XMM6_Da;
  *(undefined4 *)(&stack0x00001034 + lVar58) = unaff_XMM6_Db;
  *(undefined4 *)(&stack0x00001038 + lVar58) = unaff_XMM6_Dc;
  *(undefined4 *)(&stack0x0000103c + lVar58) = unaff_XMM6_Dd;
  *(undefined8 *)(&stack0x00001028 + lVar58) = 0xfffffffffffffffe;
  *(undefined4 *)(&stack0x00000ff8 + lVar58) = param_1;
  *(undefined8 *)(&stack0x00001000 + lVar58) = *(undefined8 *)(&stack0x00001100 + lVar58);
  *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fd600;
  uVar67 = param_2;
  uVar77 = param_4;
  cVar55 = pdb_140e94b40();
  if (cVar55 == '\0') {
    uVar62 = 0;
  }
  else {
    lVar72 = 0x1f;
    *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fd617;
    lVar59 = pdb_140100550(0x1f);
    puVar69 = &UNK_142e42c64;
    if (lVar59 == 1) {
      if (0x1f < uVar67) {
LAB_1400ff698:
        *(undefined **)(&stack0xffffffffffffffe0 + lVar58) = &UNK_142e42d08;
        *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff6b8;
        pdb_142dc8070(&UNK_142e42c64,0x1f,0);
LAB_1400ff6b8:
        *(undefined **)(&stack0xffffffffffffffe0 + lVar58) = &UNK_142e42d20;
        *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff6db;
        pdb_142dc8070(&UNK_142e42c64,0x1f);
LAB_1400ff6db:
        puVar68 = &stack0x00001100 + lVar58;
        if (*(longlong *)(&stack0x00001100 + lVar58) == 0) {
          puVar68 = (undefined1 *)0x0;
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff6ff;
        pdb_140100970(&stack0x00000810 + lVar58,puVar68);
        *(undefined1 **)(&stack0x00000c70 + lVar58) = &stack0x00000810 + lVar58;
        *(code **)(&stack0x00000c78 + lVar58) = pdb_1401009c0;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff72f;
        pdb_142dc83d0(&UNK_142e42b30,&stack0x00000c70 + lVar58,&UNK_142e42b58);
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fd639;
      uVar77 = uVar67;
      uVar60 = pdb_140100550(uVar67);
      if ((uVar60 & 1) != 0) {
        if (0x1f < uVar67 + 2) goto LAB_1400ff6b8;
        lVar72 = 0x1d - uVar67;
        puVar69 = &UNK_142e42c66 + uVar67;
      }
    }
    puVar74 = &UNK_142e4288d;
    puVar79 = &UNK_142e42869;
    do {
      uVar65 = (uint)uVar77;
      bVar56 = puVar74[-1];
      uVar57 = (uint)(char)bVar56;
      if ((char)bVar56 < '\0') {
        bVar11 = puVar74[-2];
        if ((char)bVar11 < -0x40) {
          bVar8 = puVar74[-3];
          if ((char)bVar8 < -0x40) {
            pbVar16 = puVar74 + -4;
            puVar74 = puVar74 + -4;
            uVar57 = (*pbVar16 & 7) << 6;
            uVar77 = (ulonglong)uVar57;
            uVar57 = bVar8 & 0x3f | uVar57;
          }
          else {
            puVar74 = puVar74 + -3;
            uVar57 = bVar8 & 0xf;
          }
          uVar67 = (ulonglong)(uVar57 << 6);
          uVar57 = bVar11 & 0x3f | uVar57 << 6;
        }
        else {
          puVar74 = puVar74 + -2;
          uVar57 = bVar11 & 0x1f;
        }
        uVar65 = (uint)uVar77;
        uVar57 = (uint)(bVar56 & 0x3f) | uVar57 << 6;
        if (uVar57 != 0x5c) goto LAB_1400fd6e4;
LAB_1400fd6ff:
        puVar79 = puVar74 + -0x142e42868;
        if (puVar79 < (undefined *)0x25) {
          lVar59 = 0x24 - (longlong)puVar79;
          puVar79 = puVar74 + 1;
          goto LAB_1400fd724;
        }
        *(undefined **)(&stack0xffffffffffffffe0 + lVar58) = &UNK_142e42ce8;
        *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff698;
        pdb_142dc8070(&UNK_142e42869,0x24,puVar79,0x24);
        goto LAB_1400ff698;
      }
      puVar74 = puVar74 + -1;
      if (uVar57 == 0x5c) goto LAB_1400fd6ff;
LAB_1400fd6e4:
      uVar65 = (uint)uVar77;
      if (uVar57 == 0x2f) goto LAB_1400fd6ff;
    } while (puVar74 != &UNK_142e42869);
    lVar59 = 0x24;
LAB_1400fd724:
    *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fd729;
    plVar61 = (longlong *)pdb_140e97000();
    if ((char)plVar61[0xd] != '\x01') {
      uVar67 = 0;
      *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff497;
      plVar61 = (longlong *)pdb_142d7de90(plVar61);
      if (plVar61 == (longlong *)0x0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff4ac;
        pdb_142dc7890(&UNK_142f3dc40);
        goto LAB_1400ff4ac;
      }
    }
    if (*plVar61 != 0) {
LAB_1400ff4ac:
      cVar55 = -0x38;
      *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff4b8;
      pdb_142dc8090();
LAB_1400ff4b8:
      if (0x43e < uVar65) {
        (&stack0x00000810)[lVar58] = 1;
        *(undefined1 **)(&stack0x00000c70 + lVar58) = param_3;
        *(code **)(&stack0x00000c78 + lVar58) = pdb_140f729a0;
        (&stack0x00001027)[lVar58] = 0;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff76f;
        pdb_142dc83d0(&UNK_142e423b8,&stack0x00000c70 + lVar58,&UNK_142e42428);
      }
      uVar57 = (uint)(uVar67 << (cVar55 - 0x33U & 0x3f));
LAB_1400ff4cb:
      (&stack0x00001027)[lVar58] = 0;
      *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff4da;
      pdb_140353d90(in_R11);
LAB_1400ff4db:
      (&stack0x00001027)[lVar58] = 0;
      *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff4e7;
      _DAT_143cb2b90 = pdb_140f3c9d0();
      *(undefined8 *)(&stack0x00001018 + lVar58) = 0;
      _DAT_143ca30a8 = uVar57;
      while (*(longlong *)(&stack0x00001018 + lVar58) != 0x16) {
        *(longlong *)(&stack0x00001018 + lVar58) = *(longlong *)(&stack0x00001018 + lVar58) + 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff523;
        pdb_1404db5d0(puVar79);
        puVar79 = puVar79 + 0x18;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff535;
      pdb_1404cfed0(&stack0x00000b10 + lVar58);
      uVar67 = *(ulonglong *)(&stack0x00000bd8 + lVar58);
      if ((!SBORROW8(0,uVar67)) && (uVar67 != 0)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff559;
        pub_1406abac0(*(byte **)(&stack0x00000be0 + lVar58),uVar67,1);
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff566;
      pdb_1404bccd0(&stack0x00000f68 + lVar58);
      plVar61 = *(longlong **)(&stack0x00000fd0 + lVar58);
      LOCK();
      *plVar61 = *plVar61 + -1;
      UNLOCK();
      if (*plVar61 == 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff580;
        pdb_140e3f860(&stack0x00000fd0 + lVar58);
      }
      if (*(longlong *)(&stack0x00000fa8 + lVar58) != 0) {
        *(undefined1 **)(&stack0x00000810 + lVar58) = &stack0x00000fb0 + lVar58;
        *(undefined1 **)(&stack0x00000c70 + lVar58) = param_3;
        *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff5b3;
        pdb_140336540(&UNK_142e42c88,&stack0x00000c70 + lVar58);
      }
      return;
    }
    *plVar61 = -1;
    *(longlong *)(&stack0xffffffffffffffe0 + lVar58) = lVar59;
    *(undefined8 *)(&stack0xfffffffffffffff0 + lVar58) = 0;
    *(undefined8 *)(&stack0xffffffffffffffe8 + lVar58) = 1;
    *(longlong **)(&stack0x00001018 + lVar58) = plVar61;
    *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fd774;
    uVar62 = pdb_140e94f10(plVar61 + 1,puVar69,lVar72,puVar79);
    **(longlong **)(&stack0x00001018 + lVar58) = **(longlong **)(&stack0x00001018 + lVar58) + 1;
    *(undefined8 *)(&stack0x00000fb0 + lVar58) = uVar62;
    uVar62 = 1;
  }
  *(undefined8 *)(&stack0x00000fa8 + lVar58) = uVar62;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar59 = *(longlong *)(param_2 + 0x70);
    uVar67 = 0x89344017c8ec8a8d;
    lVar72 = 0;
    while( true ) {
      uVar67 = uVar67 & *(ulonglong *)(param_2 + 0x78);
      auVar107 = *(undefined1 (*) [16])(lVar59 + uVar67);
      auVar103[0] = -(auVar107[0] == DAT_142e342a0);
      auVar103[1] = -(auVar107[1] == DAT_142e342a0._1_1_);
      auVar103[2] = -(auVar107[2] == DAT_142e342a0._2_1_);
      auVar103[3] = -(auVar107[3] == DAT_142e342a0._3_1_);
      auVar103[4] = -(auVar107[4] == DAT_142e342a0._4_1_);
      auVar103[5] = -(auVar107[5] == DAT_142e342a0._5_1_);
      auVar103[6] = -(auVar107[6] == DAT_142e342a0._6_1_);
      auVar103[7] = -(auVar107[7] == DAT_142e342a0._7_1_);
      auVar103[8] = -(auVar107[8] == DAT_142e342a0._8_1_);
      auVar103[9] = -(auVar107[9] == DAT_142e342a0._9_1_);
      auVar103[10] = -(auVar107[10] == DAT_142e342a0._10_1_);
      auVar103[0xb] = -(auVar107[0xb] == DAT_142e342a0._11_1_);
      auVar103[0xc] = -(auVar107[0xc] == DAT_142e342a0._12_1_);
      auVar103[0xd] = -(auVar107[0xd] == DAT_142e342a0._13_1_);
      auVar103[0xe] = -(auVar107[0xe] == DAT_142e342a0._14_1_);
      auVar103[0xf] = -(auVar107[0xf] == DAT_142e342a0._15_1_);
      uVar76 = (ushort)(SUB161(auVar103 >> 7,0) & 1) | (ushort)(SUB161(auVar103 >> 0xf,0) & 1) << 1
               | (ushort)(SUB161(auVar103 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar103 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar103 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar103 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar103 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar103 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar103 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar103 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar103 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar103 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar103 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar103 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar103 >> 0x77,0) & 1) << 0xe | (ushort)(auVar103[0xf] >> 7) << 0xf
      ;
      uVar57 = (uint)uVar76;
      while (uVar76 != 0) {
        uVar65 = 0;
        for (uVar20 = uVar57; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
          uVar65 = uVar65 + 1;
        }
        uVar77 = uVar65 + uVar67 & *(ulonglong *)(param_2 + 0x78);
        pcVar1 = (char *)(lVar59 + -0x18 + uVar77 * -0x18);
        auVar104[0] = -(*pcVar1 == DAT_142e342b0);
        auVar104[1] = -(pcVar1[1] == DAT_142e342b0._1_1_);
        auVar104[2] = -(pcVar1[2] == DAT_142e342b0._2_1_);
        auVar104[3] = -(pcVar1[3] == DAT_142e342b0._3_1_);
        auVar104[4] = -(pcVar1[4] == DAT_142e342b0._4_1_);
        auVar104[5] = -(pcVar1[5] == DAT_142e342b0._5_1_);
        auVar104[6] = -(pcVar1[6] == DAT_142e342b0._6_1_);
        auVar104[7] = -(pcVar1[7] == DAT_142e342b0._7_1_);
        auVar104[8] = -(pcVar1[8] == DAT_142e342b0._8_1_);
        auVar104[9] = -(pcVar1[9] == DAT_142e342b0._9_1_);
        auVar104[10] = -(pcVar1[10] == DAT_142e342b0._10_1_);
        auVar104[0xb] = -(pcVar1[0xb] == DAT_142e342b0._11_1_);
        auVar104[0xc] = -(pcVar1[0xc] == DAT_142e342b0._12_1_);
        auVar104[0xd] = -(pcVar1[0xd] == DAT_142e342b0._13_1_);
        auVar104[0xe] = -(pcVar1[0xe] == DAT_142e342b0._14_1_);
        auVar104[0xf] = -(pcVar1[0xf] == DAT_142e342b0._15_1_);
        if ((ushort)((ushort)(SUB161(auVar104 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar104 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar104 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar104 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar104 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar104 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar104 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar104 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar104 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar104 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar104 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar104 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar104 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar104 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar104 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar104[0xf] >> 7) << 0xf) == 0xffff) {
          uVar67 = *(ulonglong *)(lVar59 + uVar77 * -0x18 + -8);
          if ((*(ulonglong *)(param_2 + 0x210) <= uVar67) ||
             (uVar67 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar67 * 8), uVar67 == 0))
          goto LAB_1400fda72;
          lVar59 = ~uVar67 * 0x40;
          if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar59) == 0)
          goto LAB_1400fda72;
          plVar61 = (longlong *)**(undefined8 **)(*(longlong *)(param_2 + 0x1d8) + lVar59 + 0x10);
          LOCK();
          lVar59 = *plVar61;
          *plVar61 = *plVar61 + 1;
          UNLOCK();
          if (*plVar61 == 0 || SCARRY8(lVar59,1) != *plVar61 < 0) goto LAB_1400ff770;
          *(longlong **)(&stack0x00000fd0 + lVar58) = plVar61;
          *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fd8b8;
          pdb_140962570(param_2);
          *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fd8cc;
          pdb_140e6c160(&stack0x00000f68 + lVar58,plVar61 + 2);
          if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_1400fda84;
          lVar59 = *(longlong *)(param_2 + 0x70);
          uVar67 = 0x7d09499a2a58ccaf;
          lVar72 = 0;
          goto LAB_1400fd907;
        }
        uVar76 = (ushort)(uVar57 - 1) & (ushort)uVar57;
        uVar57 = CONCAT22((short)(uVar57 - 1 >> 0x10),uVar76);
      }
      auVar91[0] = -(auVar107[0] == -1);
      auVar91[1] = -(auVar107[1] == -1);
      auVar91[2] = -(auVar107[2] == -1);
      auVar91[3] = -(auVar107[3] == -1);
      auVar91[4] = -(auVar107[4] == -1);
      auVar91[5] = -(auVar107[5] == -1);
      auVar91[6] = -(auVar107[6] == -1);
      auVar91[7] = -(auVar107[7] == -1);
      auVar91[8] = -(auVar107[8] == -1);
      auVar91[9] = -(auVar107[9] == -1);
      auVar91[10] = -(auVar107[10] == -1);
      auVar91[0xb] = -(auVar107[0xb] == -1);
      auVar91[0xc] = -(auVar107[0xc] == -1);
      auVar91[0xd] = -(auVar107[0xd] == -1);
      auVar91[0xe] = -(auVar107[0xe] == -1);
      auVar91[0xf] = -(auVar107[0xf] == -1);
      if ((((((((((((((((SUB161(auVar91 >> 7,0) & 1) != 0 || (SUB161(auVar91 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar91 >> 0x17,0) & 1) != 0) || (SUB161(auVar91 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar91 >> 0x27,0) & 1) != 0) || (SUB161(auVar91 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar91 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar91 >> 0x3f,0) & 1) != 0) || (SUB161(auVar91 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar91 >> 0x4f,0) & 1) != 0) || (SUB161(auVar91 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar91 >> 0x5f,0) & 1) != 0) || (SUB161(auVar91 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar91 >> 0x6f,0) & 1) != 0) || (SUB161(auVar91 >> 0x77,0) & 1) != 0) ||
          auVar91[0xf] < '\0') break;
      uVar67 = uVar67 + lVar72 + 0x10;
      lVar72 = lVar72 + 0x10;
    }
  }
LAB_1400fda72:
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fda7e;
  pdb_142dc8150(&UNK_142e42890);
LAB_1400fd907:
  uVar67 = uVar67 & *(ulonglong *)(param_2 + 0x78);
  auVar107 = *(undefined1 (*) [16])(lVar59 + uVar67);
  auVar105[0] = -(auVar107[0] == DAT_142e34280);
  auVar105[1] = -(auVar107[1] == DAT_142e34280._1_1_);
  auVar105[2] = -(auVar107[2] == DAT_142e34280._2_1_);
  auVar105[3] = -(auVar107[3] == DAT_142e34280._3_1_);
  auVar105[4] = -(auVar107[4] == DAT_142e34280._4_1_);
  auVar105[5] = -(auVar107[5] == DAT_142e34280._5_1_);
  auVar105[6] = -(auVar107[6] == DAT_142e34280._6_1_);
  auVar105[7] = -(auVar107[7] == DAT_142e34280._7_1_);
  auVar105[8] = -(auVar107[8] == DAT_142e34280._8_1_);
  auVar105[9] = -(auVar107[9] == DAT_142e34280._9_1_);
  auVar105[10] = -(auVar107[10] == DAT_142e34280._10_1_);
  auVar105[0xb] = -(auVar107[0xb] == DAT_142e34280._11_1_);
  auVar105[0xc] = -(auVar107[0xc] == DAT_142e34280._12_1_);
  auVar105[0xd] = -(auVar107[0xd] == DAT_142e34280._13_1_);
  auVar105[0xe] = -(auVar107[0xe] == DAT_142e34280._14_1_);
  auVar105[0xf] = -(auVar107[0xf] == DAT_142e34280._15_1_);
  uVar76 = (ushort)(SUB161(auVar105 >> 7,0) & 1) | (ushort)(SUB161(auVar105 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar105 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar105 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar105 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar105 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar105 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar105 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar105 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar105 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar105 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar105 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar105 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar105 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar105 >> 0x77,0) & 1) << 0xe | (ushort)(auVar105[0xf] >> 7) << 0xf;
  uVar57 = (uint)uVar76;
  while (uVar76 != 0) {
    uVar65 = 0;
    for (uVar20 = uVar57; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
      uVar65 = uVar65 + 1;
    }
    uVar77 = uVar65 + uVar67 & *(ulonglong *)(param_2 + 0x78);
    pcVar1 = (char *)(lVar59 + -0x18 + uVar77 * -0x18);
    auVar106[0] = -(*pcVar1 == DAT_142e42330);
    auVar106[1] = -(pcVar1[1] == DAT_142e42330._1_1_);
    auVar106[2] = -(pcVar1[2] == DAT_142e42330._2_1_);
    auVar106[3] = -(pcVar1[3] == DAT_142e42330._3_1_);
    auVar106[4] = -(pcVar1[4] == DAT_142e42330._4_1_);
    auVar106[5] = -(pcVar1[5] == DAT_142e42330._5_1_);
    auVar106[6] = -(pcVar1[6] == DAT_142e42330._6_1_);
    auVar106[7] = -(pcVar1[7] == DAT_142e42330._7_1_);
    auVar106[8] = -(pcVar1[8] == DAT_142e42330._8_1_);
    auVar106[9] = -(pcVar1[9] == DAT_142e42330._9_1_);
    auVar106[10] = -(pcVar1[10] == DAT_142e42330._10_1_);
    auVar106[0xb] = -(pcVar1[0xb] == DAT_142e42330._11_1_);
    auVar106[0xc] = -(pcVar1[0xc] == DAT_142e42330._12_1_);
    auVar106[0xd] = -(pcVar1[0xd] == DAT_142e42330._13_1_);
    auVar106[0xe] = -(pcVar1[0xe] == DAT_142e42330._14_1_);
    auVar106[0xf] = -(pcVar1[0xf] == DAT_142e42330._15_1_);
    if ((ushort)((ushort)(SUB161(auVar106 >> 7,0) & 1) |
                 (ushort)(SUB161(auVar106 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar106 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar106 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar106 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar106 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar106 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar106 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar106 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar106 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar106 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar106 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar106 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar106 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar106 >> 0x77,0) & 1) << 0xe |
                (ushort)(auVar106[0xf] >> 7) << 0xf) == 0xffff) {
      uVar67 = *(ulonglong *)(lVar59 + uVar77 * -0x18 + -8);
      if ((*(ulonglong *)(param_2 + 0x210) <= uVar67) ||
         (uVar67 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar67 * 8), uVar67 == 0))
      goto LAB_1400fda84;
      lVar59 = ~uVar67 * 0x40;
      if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar59) == 0) goto LAB_1400fda84;
      lVar59 = *(longlong *)(*(longlong *)(param_2 + 0x1d8) + lVar59 + 0x10);
      bVar81 = *(int *)(lVar59 + 0x68) == 1;
      if (bVar81) {
        uVar62 = *(undefined8 *)(lVar59 + 0x74);
        *(undefined8 *)(&stack0x00000810 + lVar58) = *(undefined8 *)(lVar59 + 0x6c);
        *(undefined8 *)(&stack0x00000818 + lVar58) = uVar62;
      }
      *(undefined4 *)(&stack0x00000fcc + lVar58) = *(undefined4 *)(lVar59 + 0x90);
      (&stack0x00001026)[lVar58] = *(undefined1 *)(lVar59 + 0x7c);
      (&stack0x00001014)[lVar58] = *(undefined1 *)(lVar59 + 0x7d);
      (&stack0x00001015)[lVar58] = *(undefined1 *)(lVar59 + 0x7e);
      *(undefined8 *)(&stack0x00000f88 + lVar58) = *(undefined8 *)(lVar59 + 0x60);
      lVar72 = *(longlong *)(lVar59 + 0x38);
      if (SBORROW8(0,lVar72)) {
LAB_1400fdaa2:
        unaff_XMM6_Da = *(undefined4 *)(lVar59 + 0x50);
        unaff_XMM6_Db = *(undefined4 *)(lVar59 + 0x54);
        unaff_XMM6_Dc = *(undefined4 *)(lVar59 + 0x58);
        unaff_XMM6_Dd = *(undefined4 *)(lVar59 + 0x5c);
      }
      else if (lVar72 != -0x7fffffffffffffff) {
        *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fda4c;
        pdb_140f60be0(&stack0x00000c70 + lVar58,lVar59 + 0x38);
        lVar72 = *(longlong *)(&stack0x00000c70 + lVar58);
        *(undefined8 *)(&stack0x00000fb8 + lVar58) = *(undefined8 *)(&stack0x00000c78 + lVar58);
        *(undefined8 *)(&stack0x00000f90 + lVar58) = *(undefined8 *)(&stack0x00000c80 + lVar58);
        goto LAB_1400fdaa2;
      }
      *(longlong *)(&stack0x00001008 + lVar58) = lVar72;
      *(undefined1 **)(&stack0x00000f98 + lVar58) = param_3;
      *(ulonglong *)(&stack0x00001018 + lVar58) = param_2;
      *(ulonglong *)(&stack0x00000fd8 + lVar58) = param_4;
      *(undefined8 *)(&stack0x00000300 + lVar58) = *(undefined8 *)(&stack0x00000810 + lVar58);
      *(undefined8 *)(&stack0x00000308 + lVar58) = *(undefined8 *)(&stack0x00000818 + lVar58);
      uVar13 = *(undefined4 *)(lVar59 + 0x80);
      uVar3 = *(undefined4 *)(lVar59 + 0x84);
      uVar14 = *(undefined4 *)(lVar59 + 0x88);
      uVar4 = *(undefined4 *)(lVar59 + 0x8c);
      uVar5 = *(undefined4 *)(lVar59 + 0xaa);
      uVar9 = *(undefined1 *)(lVar59 + 0xc5);
      (&stack0x00001016)[lVar58] = *(undefined1 *)(lVar59 + 0xc6);
      uVar62 = *(undefined8 *)(lVar59 + 0x94);
      uVar7 = *(undefined8 *)(lVar59 + 0x9c);
      *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fdb25;
      uVar63 = pdb_140174fb0((longlong)&lStackX_8 + lVar58,lVar59);
      cVar55 = *(char *)(lVar59 + 0xae);
      *(longlong **)(&stack0x00000fa0 + lVar58) = plVar61;
      *(longlong **)(&stack0x00000fe0 + lVar58) = plVar61 + 2;
      (&stack0x00001017)[lVar58] = uVar9;
      if (cVar55 == '\x01') {
        uVar21 = *(undefined8 *)(lVar59 + 0xb7);
        *(undefined8 *)(&stack0x00000510 + lVar58) = *(undefined8 *)(lVar59 + 0xaf);
        *(undefined8 *)(&stack0x00000518 + lVar58) = uVar21;
        *(int *)(&stack0x00000fec + lVar58) = (int)CONCAT71((int7)((ulonglong)uVar63 >> 8),1);
      }
      else {
        *(undefined4 *)(&stack0x00000fec + lVar58) = 0;
      }
      uVar6 = *(undefined4 *)(lVar59 + 0xbf);
      uVar9 = *(undefined1 *)(lVar59 + 0xc3);
      uVar10 = *(undefined1 *)(lVar59 + 0xc4);
      uVar15 = *(undefined4 *)(lVar59 + 0x30);
      *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fdb95;
      pdb_140175e80(&stack0x00000810 + lVar58,lVar59 + 0x18);
      *(undefined4 *)(&stack0x00000828 + lVar58) = uVar15;
      uVar15 = *(undefined4 *)(lVar59 + 0xa4);
      uVar12 = *(undefined2 *)(lVar59 + 0xa8);
      *(undefined4 *)(&stack0x00000d00 + lVar58) = *(undefined4 *)(&stack0x00000fcc + lVar58);
      *(undefined8 *)(&stack0x00000ca8 + lVar58) = *(undefined8 *)(&stack0x00001008 + lVar58);
      *(undefined8 *)(&stack0x00000cb0 + lVar58) = *(undefined8 *)(&stack0x00000fb8 + lVar58);
      *(undefined8 *)(&stack0x00000cb8 + lVar58) = *(undefined8 *)(&stack0x00000f90 + lVar58);
      *(undefined4 *)(&stack0x00000cc0 + lVar58) = unaff_XMM6_Da;
      *(undefined4 *)(&stack0x00000cc4 + lVar58) = unaff_XMM6_Db;
      *(undefined4 *)(&stack0x00000cc8 + lVar58) = unaff_XMM6_Dc;
      *(undefined4 *)(&stack0x00000ccc + lVar58) = unaff_XMM6_Dd;
      *(undefined8 *)(&stack0x00000cd0 + lVar58) = *(undefined8 *)(&stack0x00000f88 + lVar58);
      *(uint *)(&stack0x00000cd8 + lVar58) = (uint)bVar81;
      *(undefined8 *)(&stack0x00000cdc + lVar58) = *(undefined8 *)(&stack0x00000300 + lVar58);
      *(undefined8 *)(&stack0x00000ce4 + lVar58) = *(undefined8 *)(&stack0x00000308 + lVar58);
      (&stack0x00000cec)[lVar58] = (&stack0x00001026)[lVar58];
      (&stack0x00000ced)[lVar58] = (&stack0x00001014)[lVar58];
      (&stack0x00000cee)[lVar58] = (&stack0x00001015)[lVar58];
      *(undefined4 *)(&stack0x00000cf0 + lVar58) = uVar13;
      *(undefined4 *)(&stack0x00000cf4 + lVar58) = uVar3;
      *(undefined4 *)(&stack0x00000cf8 + lVar58) = uVar14;
      *(undefined4 *)(&stack0x00000cfc + lVar58) = uVar4;
      *(undefined4 *)(&stack0x00000d1a + lVar58) = uVar5;
      (&stack0x00000d35)[lVar58] = (&stack0x00001017)[lVar58];
      (&stack0x00000d36)[lVar58] = (&stack0x00001016)[lVar58];
      *(undefined8 *)(&stack0x00000d04 + lVar58) = uVar62;
      *(undefined8 *)(&stack0x00000d0c + lVar58) = uVar7;
      *(undefined8 *)(&stack0x00000c80 + lVar58) = *(undefined8 *)((longlong)auStackX_18 + lVar58);
      *(undefined8 *)(&stack0x00000c70 + lVar58) = *(undefined8 *)((longlong)&lStackX_8 + lVar58);
      *(undefined8 *)(&stack0x00000c78 + lVar58) = *(undefined8 *)((longlong)aiStackX_10 + lVar58);
      (&stack0x00000d1e)[lVar58] = (char)*(undefined4 *)(&stack0x00000fec + lVar58);
      *(undefined8 *)(&stack0x00000d1f + lVar58) = *(undefined8 *)(&stack0x00000510 + lVar58);
      *(undefined8 *)(&stack0x00000d27 + lVar58) = *(undefined8 *)(&stack0x00000518 + lVar58);
      *(undefined4 *)(&stack0x00000d2f + lVar58) = uVar6;
      (&stack0x00000d33)[lVar58] = uVar9;
      (&stack0x00000d34)[lVar58] = uVar10;
      *(undefined8 *)(&stack0x00000c88 + lVar58) = *(undefined8 *)(&stack0x00000810 + lVar58);
      *(undefined8 *)(&stack0x00000c90 + lVar58) = *(undefined8 *)(&stack0x00000818 + lVar58);
      *(undefined8 *)(&stack0x00000c98 + lVar58) = *(undefined8 *)(&stack0x00000820 + lVar58);
      *(undefined8 *)(&stack0x00000ca0 + lVar58) = *(undefined8 *)(&stack0x00000828 + lVar58);
      *(undefined2 *)(&stack0x00000d18 + lVar58) = uVar12;
      *(undefined4 *)(&stack0x00000d14 + lVar58) = uVar15;
      uVar3 = *(undefined4 *)(lVar59 + 0xf0);
      uVar9 = *(undefined1 *)(lVar59 + 0xf4);
      uVar62 = *(undefined8 *)(lVar59 + 0xe8);
      uVar63 = *(undefined8 *)(lVar59 + 0xe0);
      uVar21 = *(undefined8 *)(lVar59 + 0x108);
      uVar22 = *(undefined8 *)(lVar59 + 0x110);
      uVar4 = *(undefined4 *)(lVar59 + 0x118);
      uVar7 = *(undefined8 *)(lVar59 + 0x11c);
      if (SBORROW8(0,*(longlong *)(lVar59 + 200))) {
        *(undefined8 *)(&stack0x00000810 + lVar58) = 0x8000000000000000;
        uVar80 = *(undefined8 *)(&stack0x00001018 + lVar58);
      }
      else {
        *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fdd63;
        pdb_140f60be0(&stack0x00000810 + lVar58,lVar59 + 200);
        uVar80 = *(undefined8 *)(&stack0x00001018 + lVar58);
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fdd87;
      pub_142e32760(&stack0x00000b10 + lVar58,&stack0x00000c70 + lVar58);
      uVar23 = *(undefined8 *)(lVar59 + 0x100);
      *(undefined8 *)(&stack0x00000c08 + lVar58) = *(undefined8 *)(lVar59 + 0xf8);
      *(undefined8 *)(&stack0x00000c10 + lVar58) = uVar23;
      *(undefined8 *)(&stack0x00000bf8 + lVar58) = uVar62;
      *(undefined4 *)(&stack0x00000c00 + lVar58) = uVar3;
      (&stack0x00000c04)[lVar58] = uVar9;
      *(undefined8 *)(&stack0x00000bf0 + lVar58) = uVar63;
      *(undefined8 *)(&stack0x00000c18 + lVar58) = uVar21;
      *(undefined8 *)(&stack0x00000c20 + lVar58) = uVar22;
      *(undefined4 *)(&stack0x00000c28 + lVar58) = uVar4;
      *(undefined8 *)(&stack0x00000c2c + lVar58) = uVar7;
      *(undefined8 *)(&stack0x00000be8 + lVar58) = *(undefined8 *)(&stack0x00000820 + lVar58);
      *(undefined8 *)(&stack0x00000bd8 + lVar58) = *(undefined8 *)(&stack0x00000810 + lVar58);
      *(undefined8 *)(&stack0x00000be0 + lVar58) = *(undefined8 *)(&stack0x00000818 + lVar58);
      *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fddf1;
      bVar56 = pdb_140e94b40();
      cVar55 = (&stack0x00001110)[lVar58];
      *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fde0b;
      pdb_140af70b0(&stack0x00000300 + lVar58);
      *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fde1b;
      pdb_140af54f0(uVar80,&stack0x00000300 + lVar58);
      puVar79 = &stack0x00000300 + lVar58;
      *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fde2b;
      pdb_140af7230(puVar79);
      lVar59 = *(longlong *)(&stack0x00001018 + lVar58);
      if (*(longlong *)(lVar59 + 0x88) == 0) goto LAB_1400fe0dd;
      lVar72 = *(longlong *)(lVar59 + 0x70);
      uVar67 = *(ulonglong *)(lVar59 + 0x78);
      uVar77 = 0x333f70bcf778a134;
      lVar75 = 0;
      goto LAB_1400fde6d;
    }
    uVar76 = (ushort)(uVar57 - 1) & (ushort)uVar57;
    uVar57 = CONCAT22((short)(uVar57 - 1 >> 0x10),uVar76);
  }
  goto LAB_1400fd960;
LAB_1400fde6d:
  uVar77 = uVar77 & uVar67;
  pcVar1 = (char *)(lVar72 + uVar77);
  auVar107[0] = -(*pcVar1 == DAT_142e42340);
  auVar107[1] = -(pcVar1[1] == DAT_142e42340._1_1_);
  auVar107[2] = -(pcVar1[2] == DAT_142e42340._2_1_);
  auVar107[3] = -(pcVar1[3] == DAT_142e42340._3_1_);
  auVar107[4] = -(pcVar1[4] == DAT_142e42340._4_1_);
  auVar107[5] = -(pcVar1[5] == DAT_142e42340._5_1_);
  auVar107[6] = -(pcVar1[6] == DAT_142e42340._6_1_);
  auVar107[7] = -(pcVar1[7] == DAT_142e42340._7_1_);
  auVar107[8] = -(pcVar1[8] == DAT_142e42340._8_1_);
  auVar107[9] = -(pcVar1[9] == DAT_142e42340._9_1_);
  auVar107[10] = -(pcVar1[10] == DAT_142e42340._10_1_);
  auVar107[0xb] = -(pcVar1[0xb] == DAT_142e42340._11_1_);
  auVar107[0xc] = -(pcVar1[0xc] == DAT_142e42340._12_1_);
  auVar107[0xd] = -(pcVar1[0xd] == DAT_142e42340._13_1_);
  auVar107[0xe] = -(pcVar1[0xe] == DAT_142e42340._14_1_);
  auVar107[0xf] = -(pcVar1[0xf] == DAT_142e42340._15_1_);
  uVar76 = (ushort)(SUB161(auVar107 >> 7,0) & 1) | (ushort)(SUB161(auVar107 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar107 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar107 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar107 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar107 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar107 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar107 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar107 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar107 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar107 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar107 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar107 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar107 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar107 >> 0x77,0) & 1) << 0xe | (ushort)(auVar107[0xf] >> 7) << 0xf;
  uVar57 = (uint)uVar76;
  while (uVar76 != 0) {
    uVar65 = 0;
    for (uVar20 = uVar57; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
      uVar65 = uVar65 + 1;
    }
    uVar60 = uVar65 + uVar77 & uVar67;
    pcVar2 = (char *)(lVar72 + -0x18 + uVar60 * -0x18);
    auVar108[0] = -(*pcVar2 == DAT_142e42350);
    auVar108[1] = -(pcVar2[1] == UNK_142e42351);
    auVar108[2] = -(pcVar2[2] == UNK_142e42352);
    auVar108[3] = -(pcVar2[3] == UNK_142e42353);
    auVar108[4] = -(pcVar2[4] == UNK_142e42354);
    auVar108[5] = -(pcVar2[5] == UNK_142e42355);
    auVar108[6] = -(pcVar2[6] == UNK_142e42356);
    auVar108[7] = -(pcVar2[7] == UNK_142e42357);
    auVar108[8] = -(pcVar2[8] == UNK_142e42358);
    auVar108[9] = -(pcVar2[9] == UNK_142e42359);
    auVar108[10] = -(pcVar2[10] == UNK_142e4235a);
    auVar108[0xb] = -(pcVar2[0xb] == UNK_142e4235b);
    auVar108[0xc] = -(pcVar2[0xc] == UNK_142e4235c);
    auVar108[0xd] = -(pcVar2[0xd] == UNK_142e4235d);
    auVar108[0xe] = -(pcVar2[0xe] == UNK_142e4235e);
    auVar108[0xf] = -(pcVar2[0xf] == UNK_142e4235f);
    if ((ushort)((ushort)(SUB161(auVar108 >> 7,0) & 1) |
                 (ushort)(SUB161(auVar108 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar108 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar108 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar108 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar108 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar108 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar108 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar108 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar108 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar108 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar108 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar108 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar108 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar108 >> 0x77,0) & 1) << 0xe |
                (ushort)(auVar108[0xf] >> 7) << 0xf) == 0xffff) {
      uVar77 = *(ulonglong *)(lVar72 + uVar60 * -0x18 + -8);
      uVar60 = *(ulonglong *)(lVar59 + 0x210);
      if (uVar60 <= uVar77) goto LAB_1400fe0dd;
      lVar75 = *(longlong *)(lVar59 + 0x208);
      uVar77 = *(ulonglong *)(lVar75 + uVar77 * 8);
      if (uVar77 == 0) goto LAB_1400fe0dd;
      lVar64 = *(longlong *)(lVar59 + 0x1d8);
      lVar78 = ~uVar77 * 0x40;
      if (*(longlong *)(lVar64 + 0x20 + lVar78) == 0) goto LAB_1400fe0dd;
      (&stack0x00001026)[lVar58] = cVar55 == '\x02' & bVar56;
      *(undefined8 *)(&stack0x00001008 + lVar58) = *(undefined8 *)(lVar78 + lVar64 + 0x10);
      uVar77 = 0xbc86f891ccb8bc37;
      lVar78 = 0;
      goto LAB_1400fdf59;
    }
    uVar76 = (ushort)(uVar57 - 1) & (ushort)uVar57;
    uVar57 = CONCAT22((short)(uVar57 - 1 >> 0x10),uVar76);
  }
  goto LAB_1400fdebf;
LAB_1400fdf59:
  uVar77 = uVar77 & uVar67;
  auVar107 = *(undefined1 (*) [16])(lVar72 + uVar77);
  auVar109[0] = -(auVar107[0] == DAT_142e34330);
  auVar109[1] = -(auVar107[1] == DAT_142e34330._1_1_);
  auVar109[2] = -(auVar107[2] == DAT_142e34330._2_1_);
  auVar109[3] = -(auVar107[3] == DAT_142e34330._3_1_);
  auVar109[4] = -(auVar107[4] == DAT_142e34330._4_1_);
  auVar109[5] = -(auVar107[5] == DAT_142e34330._5_1_);
  auVar109[6] = -(auVar107[6] == DAT_142e34330._6_1_);
  auVar109[7] = -(auVar107[7] == DAT_142e34330._7_1_);
  auVar109[8] = -(auVar107[8] == DAT_142e34330._8_1_);
  auVar109[9] = -(auVar107[9] == DAT_142e34330._9_1_);
  auVar109[10] = -(auVar107[10] == DAT_142e34330._10_1_);
  auVar109[0xb] = -(auVar107[0xb] == DAT_142e34330._11_1_);
  auVar109[0xc] = -(auVar107[0xc] == DAT_142e34330._12_1_);
  auVar109[0xd] = -(auVar107[0xd] == DAT_142e34330._13_1_);
  auVar109[0xe] = -(auVar107[0xe] == DAT_142e34330._14_1_);
  auVar109[0xf] = -(auVar107[0xf] == DAT_142e34330._15_1_);
  uVar76 = (ushort)(SUB161(auVar109 >> 7,0) & 1) | (ushort)(SUB161(auVar109 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar109 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar109 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar109 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar109 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar109 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar109 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar109 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar109 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar109 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar109 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar109 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar109 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar109 >> 0x77,0) & 1) << 0xe | (ushort)(auVar109[0xf] >> 7) << 0xf;
  uVar57 = (uint)uVar76;
  while (uVar76 != 0) {
    uVar65 = 0;
    for (uVar20 = uVar57; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
      uVar65 = uVar65 + 1;
    }
    uVar70 = uVar65 + uVar77 & uVar67;
    pcVar1 = (char *)(lVar72 + -0x18 + uVar70 * -0x18);
    auVar110[0] = -(*pcVar1 == DAT_142e34340);
    auVar110[1] = -(pcVar1[1] == DAT_142e34340._1_1_);
    auVar110[2] = -(pcVar1[2] == DAT_142e34340._2_1_);
    auVar110[3] = -(pcVar1[3] == DAT_142e34340._3_1_);
    auVar110[4] = -(pcVar1[4] == DAT_142e34340._4_1_);
    auVar110[5] = -(pcVar1[5] == DAT_142e34340._5_1_);
    auVar110[6] = -(pcVar1[6] == DAT_142e34340._6_1_);
    auVar110[7] = -(pcVar1[7] == DAT_142e34340._7_1_);
    auVar110[8] = -(pcVar1[8] == DAT_142e34340._8_1_);
    auVar110[9] = -(pcVar1[9] == DAT_142e34340._9_1_);
    auVar110[10] = -(pcVar1[10] == DAT_142e34340._10_1_);
    auVar110[0xb] = -(pcVar1[0xb] == DAT_142e34340._11_1_);
    auVar110[0xc] = -(pcVar1[0xc] == DAT_142e34340._12_1_);
    auVar110[0xd] = -(pcVar1[0xd] == DAT_142e34340._13_1_);
    auVar110[0xe] = -(pcVar1[0xe] == DAT_142e34340._14_1_);
    auVar110[0xf] = -(pcVar1[0xf] == DAT_142e34340._15_1_);
    if ((ushort)((ushort)(SUB161(auVar110 >> 7,0) & 1) |
                 (ushort)(SUB161(auVar110 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar110 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar110 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar110 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar110 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar110 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar110 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar110 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar110 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar110 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar110 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar110 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar110 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar110 >> 0x77,0) & 1) << 0xe |
                (ushort)(auVar110[0xf] >> 7) << 0xf) == 0xffff) {
      uVar67 = *(ulonglong *)(lVar72 + uVar70 * -0x18 + -8);
      if (((uVar60 <= uVar67) || (uVar67 = *(ulonglong *)(lVar75 + uVar67 * 8), uVar67 == 0)) ||
         (lVar72 = ~uVar67 * 0x40, *(longlong *)(lVar64 + 0x20 + lVar72) == 0)) goto LAB_1400fe0ef;
      lVar75 = *(longlong *)(lVar64 + lVar72 + 0x10);
      bVar81 = *(longlong *)(&stack0x00001100 + lVar58) == 0;
      if (bVar81) {
        cVar55 = (&stack0x00001110)[lVar58];
      }
      else {
        *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fe013;
        lVar72 = pdb_140e83000(*(longlong *)(&stack0x00001100 + lVar58) + 8);
        lVar59 = *(longlong *)(&stack0x00001018 + lVar58);
        cVar55 = (&stack0x00001110)[lVar58];
      }
      if (cVar55 != '\0') {
        if (*(longlong *)(lVar59 + 0x88) == 0) goto LAB_1400fe49e;
        lVar64 = *(longlong *)(lVar59 + 0x70);
        uVar67 = 0x98a9c564f7f617b9;
        lVar78 = 0;
        goto LAB_1400fe06d;
      }
      if (*(longlong *)(lVar59 + 0x88) == 0) goto LAB_1400fe4d2;
      lVar64 = *(longlong *)(lVar59 + 0x70);
      uVar67 = 0x98a9c564f7f617b9;
      lVar78 = 0;
      goto LAB_1400fe31e;
    }
    uVar76 = (ushort)(uVar57 - 1) & (ushort)uVar57;
    uVar57 = CONCAT22((short)(uVar57 - 1 >> 0x10),uVar76);
  }
  goto LAB_1400fdfa5;
LAB_1400fe31e:
  uVar67 = uVar67 & *(ulonglong *)(lVar59 + 0x78);
  auVar107 = *(undefined1 (*) [16])(lVar64 + uVar67);
  auVar115[0] = -(auVar107[0] == DAT_142e33dd0);
  auVar115[1] = -(auVar107[1] == DAT_142e33dd0._1_1_);
  auVar115[2] = -(auVar107[2] == DAT_142e33dd0._2_1_);
  auVar115[3] = -(auVar107[3] == DAT_142e33dd0._3_1_);
  auVar115[4] = -(auVar107[4] == DAT_142e33dd0._4_1_);
  auVar115[5] = -(auVar107[5] == DAT_142e33dd0._5_1_);
  auVar115[6] = -(auVar107[6] == DAT_142e33dd0._6_1_);
  auVar115[7] = -(auVar107[7] == DAT_142e33dd0._7_1_);
  auVar115[8] = -(auVar107[8] == DAT_142e33dd0._8_1_);
  auVar115[9] = -(auVar107[9] == DAT_142e33dd0._9_1_);
  auVar115[10] = -(auVar107[10] == DAT_142e33dd0._10_1_);
  auVar115[0xb] = -(auVar107[0xb] == DAT_142e33dd0._11_1_);
  auVar115[0xc] = -(auVar107[0xc] == DAT_142e33dd0._12_1_);
  auVar115[0xd] = -(auVar107[0xd] == DAT_142e33dd0._13_1_);
  auVar115[0xe] = -(auVar107[0xe] == DAT_142e33dd0._14_1_);
  auVar115[0xf] = -(auVar107[0xf] == DAT_142e33dd0._15_1_);
  uVar76 = (ushort)(SUB161(auVar115 >> 7,0) & 1) | (ushort)(SUB161(auVar115 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar115 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar115 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar115 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar115 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar115 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar115 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar115 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar115 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar115 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar115 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar115 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar115 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar115 >> 0x77,0) & 1) << 0xe | (ushort)(auVar115[0xf] >> 7) << 0xf;
  uVar57 = (uint)uVar76;
  while (uVar76 != 0) {
    uVar65 = 0;
    for (uVar20 = uVar57; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
      uVar65 = uVar65 + 1;
    }
    uVar77 = uVar65 + uVar67 & *(ulonglong *)(lVar59 + 0x78);
    pcVar1 = (char *)(lVar64 + -0x18 + uVar77 * -0x18);
    auVar116[0] = -(*pcVar1 == DAT_142e34a80);
    auVar116[1] = -(pcVar1[1] == DAT_142e34a80._1_1_);
    auVar116[2] = -(pcVar1[2] == DAT_142e34a80._2_1_);
    auVar116[3] = -(pcVar1[3] == DAT_142e34a80._3_1_);
    auVar116[4] = -(pcVar1[4] == DAT_142e34a80._4_1_);
    auVar116[5] = -(pcVar1[5] == DAT_142e34a80._5_1_);
    auVar116[6] = -(pcVar1[6] == DAT_142e34a80._6_1_);
    auVar116[7] = -(pcVar1[7] == DAT_142e34a80._7_1_);
    auVar116[8] = -(pcVar1[8] == DAT_142e34a80._8_1_);
    auVar116[9] = -(pcVar1[9] == DAT_142e34a80._9_1_);
    auVar116[10] = -(pcVar1[10] == DAT_142e34a80._10_1_);
    auVar116[0xb] = -(pcVar1[0xb] == DAT_142e34a80._11_1_);
    auVar116[0xc] = -(pcVar1[0xc] == DAT_142e34a80._12_1_);
    auVar116[0xd] = -(pcVar1[0xd] == DAT_142e34a80._13_1_);
    auVar116[0xe] = -(pcVar1[0xe] == DAT_142e34a80._14_1_);
    auVar116[0xf] = -(pcVar1[0xf] == DAT_142e34a80._15_1_);
    if ((ushort)((ushort)(SUB161(auVar116 >> 7,0) & 1) |
                 (ushort)(SUB161(auVar116 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar116 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar116 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar116 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar116 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar116 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar116 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar116 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar116 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar116 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar116 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar116 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar116 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar116 >> 0x77,0) & 1) << 0xe |
                (ushort)(auVar116[0xf] >> 7) << 0xf) == 0xffff) {
      uVar67 = *(ulonglong *)(lVar64 + uVar77 * -0x18 + -8);
      if ((*(ulonglong *)(lVar59 + 0x210) <= uVar67) ||
         (uVar67 = *(ulonglong *)(*(longlong *)(lVar59 + 0x208) + uVar67 * 8), uVar67 == 0))
      goto LAB_1400fe4d2;
      lVar64 = ~uVar67 * 0x40;
      if (*(longlong *)(*(longlong *)(lVar59 + 0x1d8) + 0x20 + lVar64) == 0) goto LAB_1400fe4d2;
      lVar64 = *(longlong *)(lVar59 + 0x1d8) + lVar64;
      uVar62 = *(undefined8 *)(lVar64 + 0x10);
      *(undefined4 *)(lVar64 + 0x3c) = *(undefined4 *)(lVar59 + 0x5a8);
      if (bVar81) {
        *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff60d;
        pdb_142dc8110(&UNK_142e42918,0x28,&UNK_142e42940,uVar62);
        goto LAB_1400ff770;
      }
      *(longlong *)((longlong)&lStackX_8 + lVar58) = lVar59;
      *(int *)(&stack0x00000510 + lVar58) = (int)lVar72;
      *(longlong *)(&stack0x00000810 + lVar58) = lVar75 + 8;
      *(longlong *)(&stack0x00000818 + lVar58) = (longlong)&lStackX_8 + lVar58;
      *(undefined1 **)(&stack0x00000820 + lVar58) = &stack0x00000510 + lVar58;
      *(undefined1 **)(&stack0x00000828 + lVar58) = &stack0x00000300 + lVar58;
      *(undefined1 **)(&stack0xfffffffffffffff0 + lVar58) = &stack0x00000810 + lVar58;
      *(undefined1 **)(&stack0xffffffffffffffe8 + lVar58) = &stack0x00000f68 + lVar58;
      *(longlong *)(&stack0xffffffffffffffe0 + lVar58) =
           *(longlong *)(&stack0x00001008 + lVar58) + 0x18;
      *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fe468;
      pdb_14058aa40(&stack0x00000c70 + lVar58,&UNK_142e42842,4);
      lVar59 = *(longlong *)(&stack0x00001000 + lVar58);
      if (*(int *)(&stack0x00000c70 + lVar58) == 2) {
        *(undefined **)(&stack0xffffffffffffffe0 + lVar58) = &UNK_142e42978;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff63e;
        pdb_142dc8170(&UNK_142e42958,0x1b,&stack0x00001025 + lVar58,&UNK_142e42bd0);
      }
      puVar68 = &stack0x00000c70 + lVar58;
      *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fe496;
      pub_142e32760(&stack0x00000510 + lVar58,puVar68,0x2f8);
      iVar66 = (int)puVar68;
      bVar81 = false;
      goto LAB_1400fe9e5;
    }
    uVar76 = (ushort)(uVar57 - 1) & (ushort)uVar57;
    uVar57 = CONCAT22((short)(uVar57 - 1 >> 0x10),uVar76);
  }
  auVar97[0] = -(auVar107[0] == -1);
  auVar97[1] = -(auVar107[1] == -1);
  auVar97[2] = -(auVar107[2] == -1);
  auVar97[3] = -(auVar107[3] == -1);
  auVar97[4] = -(auVar107[4] == -1);
  auVar97[5] = -(auVar107[5] == -1);
  auVar97[6] = -(auVar107[6] == -1);
  auVar97[7] = -(auVar107[7] == -1);
  auVar97[8] = -(auVar107[8] == -1);
  auVar97[9] = -(auVar107[9] == -1);
  auVar97[10] = -(auVar107[10] == -1);
  auVar97[0xb] = -(auVar107[0xb] == -1);
  auVar97[0xc] = -(auVar107[0xc] == -1);
  auVar97[0xd] = -(auVar107[0xd] == -1);
  auVar97[0xe] = -(auVar107[0xe] == -1);
  auVar97[0xf] = -(auVar107[0xf] == -1);
  if ((((((((((((((((SUB161(auVar97 >> 7,0) & 1) != 0 || (SUB161(auVar97 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar97 >> 0x17,0) & 1) != 0) || (SUB161(auVar97 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar97 >> 0x27,0) & 1) != 0) || (SUB161(auVar97 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar97 >> 0x37,0) & 1) != 0) || (SUB161(auVar97 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar97 >> 0x47,0) & 1) != 0) || (SUB161(auVar97 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar97 >> 0x57,0) & 1) != 0) || (SUB161(auVar97 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar97 >> 0x67,0) & 1) != 0) || (SUB161(auVar97 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar97 >> 0x77,0) & 1) != 0) || auVar97[0xf] < '\0') {
LAB_1400fe4d2:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fe4de;
    pdb_142dc8150(&UNK_142e42900);
  }
  uVar67 = uVar67 + lVar78 + 0x10;
  lVar78 = lVar78 + 0x10;
  goto LAB_1400fe31e;
LAB_1400fe06d:
  uVar67 = uVar67 & *(ulonglong *)(lVar59 + 0x78);
  auVar107 = *(undefined1 (*) [16])(lVar64 + uVar67);
  auVar111[0] = -(auVar107[0] == DAT_142e33dd0);
  auVar111[1] = -(auVar107[1] == DAT_142e33dd0._1_1_);
  auVar111[2] = -(auVar107[2] == DAT_142e33dd0._2_1_);
  auVar111[3] = -(auVar107[3] == DAT_142e33dd0._3_1_);
  auVar111[4] = -(auVar107[4] == DAT_142e33dd0._4_1_);
  auVar111[5] = -(auVar107[5] == DAT_142e33dd0._5_1_);
  auVar111[6] = -(auVar107[6] == DAT_142e33dd0._6_1_);
  auVar111[7] = -(auVar107[7] == DAT_142e33dd0._7_1_);
  auVar111[8] = -(auVar107[8] == DAT_142e33dd0._8_1_);
  auVar111[9] = -(auVar107[9] == DAT_142e33dd0._9_1_);
  auVar111[10] = -(auVar107[10] == DAT_142e33dd0._10_1_);
  auVar111[0xb] = -(auVar107[0xb] == DAT_142e33dd0._11_1_);
  auVar111[0xc] = -(auVar107[0xc] == DAT_142e33dd0._12_1_);
  auVar111[0xd] = -(auVar107[0xd] == DAT_142e33dd0._13_1_);
  auVar111[0xe] = -(auVar107[0xe] == DAT_142e33dd0._14_1_);
  auVar111[0xf] = -(auVar107[0xf] == DAT_142e33dd0._15_1_);
  uVar76 = (ushort)(SUB161(auVar111 >> 7,0) & 1) | (ushort)(SUB161(auVar111 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar111 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar111 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar111 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar111 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar111 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar111 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar111 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar111 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar111 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar111 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar111 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar111 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar111 >> 0x77,0) & 1) << 0xe | (ushort)(auVar111[0xf] >> 7) << 0xf;
  uVar57 = (uint)uVar76;
  while (uVar76 != 0) {
    uVar65 = 0;
    for (uVar20 = uVar57; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
      uVar65 = uVar65 + 1;
    }
    uVar77 = uVar65 + uVar67 & *(ulonglong *)(lVar59 + 0x78);
    pcVar1 = (char *)(lVar64 + -0x18 + uVar77 * -0x18);
    auVar112[0] = -(*pcVar1 == DAT_142e34a80);
    auVar112[1] = -(pcVar1[1] == DAT_142e34a80._1_1_);
    auVar112[2] = -(pcVar1[2] == DAT_142e34a80._2_1_);
    auVar112[3] = -(pcVar1[3] == DAT_142e34a80._3_1_);
    auVar112[4] = -(pcVar1[4] == DAT_142e34a80._4_1_);
    auVar112[5] = -(pcVar1[5] == DAT_142e34a80._5_1_);
    auVar112[6] = -(pcVar1[6] == DAT_142e34a80._6_1_);
    auVar112[7] = -(pcVar1[7] == DAT_142e34a80._7_1_);
    auVar112[8] = -(pcVar1[8] == DAT_142e34a80._8_1_);
    auVar112[9] = -(pcVar1[9] == DAT_142e34a80._9_1_);
    auVar112[10] = -(pcVar1[10] == DAT_142e34a80._10_1_);
    auVar112[0xb] = -(pcVar1[0xb] == DAT_142e34a80._11_1_);
    auVar112[0xc] = -(pcVar1[0xc] == DAT_142e34a80._12_1_);
    auVar112[0xd] = -(pcVar1[0xd] == DAT_142e34a80._13_1_);
    auVar112[0xe] = -(pcVar1[0xe] == DAT_142e34a80._14_1_);
    auVar112[0xf] = -(pcVar1[0xf] == DAT_142e34a80._15_1_);
    if ((ushort)((ushort)(SUB161(auVar112 >> 7,0) & 1) |
                 (ushort)(SUB161(auVar112 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar112 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar112 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar112 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar112 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar112 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar112 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar112 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar112 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar112 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar112 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar112 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar112 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar112 >> 0x77,0) & 1) << 0xe |
                (ushort)(auVar112[0xf] >> 7) << 0xf) == 0xffff) {
      uVar67 = *(ulonglong *)(lVar64 + uVar77 * -0x18 + -8);
      if ((*(ulonglong *)(lVar59 + 0x210) <= uVar67) ||
         (uVar67 = *(ulonglong *)(*(longlong *)(lVar59 + 0x208) + uVar67 * 8), uVar67 == 0))
      goto LAB_1400fe49e;
      lVar64 = ~uVar67 * 0x40;
      if (*(longlong *)(*(longlong *)(lVar59 + 0x1d8) + 0x20 + lVar64) == 0) goto LAB_1400fe49e;
      lVar64 = *(longlong *)(lVar59 + 0x1d8) + lVar64;
      uVar62 = *(undefined8 *)(lVar64 + 0x10);
      *(undefined4 *)(lVar64 + 0x3c) = *(undefined4 *)(lVar59 + 0x5a8);
      lVar75 = lVar75 + 8;
      *(longlong *)(&stack0x00000810 + lVar58) = lVar59;
      *(undefined4 *)(&stack0x00000ff0 + lVar58) = *(undefined4 *)(&stack0x00000ff8 + lVar58);
      *(short *)(&stack0x00000514 + lVar58) = (short)((ulonglong)lVar72 >> 0x10);
      *(uint *)(&stack0x00000510 + lVar58) = (uint)!bVar81 | (uint)(lVar72 << 0x10);
      *(undefined1 **)(&stack0x00000c70 + lVar58) = &stack0x00000810 + lVar58;
      *(longlong *)(&stack0x00000c78 + lVar58) = lVar75;
      *(undefined1 **)(&stack0x00000c80 + lVar58) = &stack0x00000ff0 + lVar58;
      *(undefined **)(&stack0x00000c88 + lVar58) = puVar79;
      *(undefined1 **)(&stack0x00000c90 + lVar58) = &stack0x00000b10 + lVar58;
      *(undefined1 **)(&stack0x00000c98 + lVar58) = &stack0x00000510 + lVar58;
      *(undefined8 *)(&stack0x00000ca0 + lVar58) = *(undefined8 *)(&stack0x00001108 + lVar58);
      *(undefined1 **)(&stack0xfffffffffffffff0 + lVar58) = &stack0x00000c70 + lVar58;
      *(undefined1 **)(&stack0xffffffffffffffe8 + lVar58) = &stack0x00000f68 + lVar58;
      *(longlong *)(&stack0x00000ff8 + lVar58) = *(longlong *)(&stack0x00001008 + lVar58) + 0x18;
      *(longlong *)(&stack0xffffffffffffffe0 + lVar58) =
           *(longlong *)(&stack0x00001008 + lVar58) + 0x18;
      *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fe215;
      pdb_140585c80((longlong)&lStackX_8 + lVar58,&UNK_142e42842,4,uVar62);
      bVar81 = *(longlong *)((longlong)&lStackX_8 + lVar58) == 2;
      if (!bVar81) {
        lVar59 = (longlong)&lStackX_8 + lVar58;
        *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fe4c6;
        pub_142e32760(&stack0x00000510 + lVar58,lVar59,0x2f8);
        iVar66 = (int)lVar59;
        lVar59 = *(longlong *)(&stack0x00001000 + lVar58);
        goto LAB_1400fe9e5;
      }
      lVar59 = *(longlong *)(&stack0x00001018 + lVar58);
      if (*(longlong *)(lVar59 + 0x88) == 0) goto LAB_1400fe70d;
      lVar72 = *(longlong *)(lVar59 + 0x70);
      uVar67 = 0xcda1f14a4c73f628;
      lVar64 = 0;
      goto LAB_1400fe263;
    }
    uVar76 = (ushort)(uVar57 - 1) & (ushort)uVar57;
    uVar57 = CONCAT22((short)(uVar57 - 1 >> 0x10),uVar76);
  }
  goto LAB_1400fe0be;
LAB_1400fe263:
  uVar67 = uVar67 & *(ulonglong *)(lVar59 + 0x78);
  auVar107 = *(undefined1 (*) [16])(lVar72 + uVar67);
  auVar113[0] = -(auVar107[0] == DAT_142e35050);
  auVar113[1] = -(auVar107[1] == DAT_142e35050._1_1_);
  auVar113[2] = -(auVar107[2] == DAT_142e35050._2_1_);
  auVar113[3] = -(auVar107[3] == DAT_142e35050._3_1_);
  auVar113[4] = -(auVar107[4] == DAT_142e35050._4_1_);
  auVar113[5] = -(auVar107[5] == DAT_142e35050._5_1_);
  auVar113[6] = -(auVar107[6] == DAT_142e35050._6_1_);
  auVar113[7] = -(auVar107[7] == DAT_142e35050._7_1_);
  auVar113[8] = -(auVar107[8] == DAT_142e35050._8_1_);
  auVar113[9] = -(auVar107[9] == DAT_142e35050._9_1_);
  auVar113[10] = -(auVar107[10] == DAT_142e35050._10_1_);
  auVar113[0xb] = -(auVar107[0xb] == DAT_142e35050._11_1_);
  auVar113[0xc] = -(auVar107[0xc] == DAT_142e35050._12_1_);
  auVar113[0xd] = -(auVar107[0xd] == DAT_142e35050._13_1_);
  auVar113[0xe] = -(auVar107[0xe] == DAT_142e35050._14_1_);
  auVar113[0xf] = -(auVar107[0xf] == DAT_142e35050._15_1_);
  uVar76 = (ushort)(SUB161(auVar113 >> 7,0) & 1) | (ushort)(SUB161(auVar113 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar113 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar113 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar113 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar113 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar113 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar113 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar113 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar113 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar113 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar113 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar113 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar113 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar113 >> 0x77,0) & 1) << 0xe | (ushort)(auVar113[0xf] >> 7) << 0xf;
  uVar57 = (uint)uVar76;
  while (uVar76 != 0) {
    uVar65 = 0;
    for (uVar20 = uVar57; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
      uVar65 = uVar65 + 1;
    }
    uVar77 = uVar65 + uVar67 & *(ulonglong *)(lVar59 + 0x78);
    pcVar1 = (char *)(lVar72 + -0x18 + uVar77 * -0x18);
    auVar114[0] = -(*pcVar1 == DAT_142e42300);
    auVar114[1] = -(pcVar1[1] == DAT_142e42300._1_1_);
    auVar114[2] = -(pcVar1[2] == DAT_142e42300._2_1_);
    auVar114[3] = -(pcVar1[3] == DAT_142e42300._3_1_);
    auVar114[4] = -(pcVar1[4] == DAT_142e42300._4_1_);
    auVar114[5] = -(pcVar1[5] == DAT_142e42300._5_1_);
    auVar114[6] = -(pcVar1[6] == DAT_142e42300._6_1_);
    auVar114[7] = -(pcVar1[7] == DAT_142e42300._7_1_);
    auVar114[8] = -(pcVar1[8] == DAT_142e42300._8_1_);
    auVar114[9] = -(pcVar1[9] == DAT_142e42300._9_1_);
    auVar114[10] = -(pcVar1[10] == DAT_142e42300._10_1_);
    auVar114[0xb] = -(pcVar1[0xb] == DAT_142e42300._11_1_);
    auVar114[0xc] = -(pcVar1[0xc] == DAT_142e42300._12_1_);
    auVar114[0xd] = -(pcVar1[0xd] == DAT_142e42300._13_1_);
    auVar114[0xe] = -(pcVar1[0xe] == DAT_142e42300._14_1_);
    auVar114[0xf] = -(pcVar1[0xf] == DAT_142e42300._15_1_);
    if ((ushort)((ushort)(SUB161(auVar114 >> 7,0) & 1) |
                 (ushort)(SUB161(auVar114 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar114 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar114 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar114 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar114 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar114 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar114 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar114 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar114 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar114 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar114 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar114 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar114 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar114 >> 0x77,0) & 1) << 0xe |
                (ushort)(auVar114[0xf] >> 7) << 0xf) == 0xffff) {
      uVar67 = *(ulonglong *)(lVar72 + uVar77 * -0x18 + -8);
      lVar59 = *(longlong *)(&stack0x00001018 + lVar58);
      if ((*(ulonglong *)(lVar59 + 0x210) <= uVar67) ||
         (uVar67 = *(ulonglong *)(*(longlong *)(lVar59 + 0x208) + uVar67 * 8), uVar67 == 0))
      goto LAB_1400fe70d;
      lVar72 = ~uVar67 * 0x40;
      if (*(longlong *)(*(longlong *)(lVar59 + 0x1d8) + 0x20 + lVar72) == 0) goto LAB_1400fe70d;
      lVar72 = *(longlong *)(lVar59 + 0x1d8) + lVar72;
      lVar64 = *(longlong *)(lVar72 + 0x10);
      uVar3 = *(undefined4 *)(lVar59 + 0x5a8);
      pfVar73 = (float *)(lVar64 + 0xc);
      fVar123 = *(float *)(lVar64 + 0xc) + _DAT_142e42360;
      *(float *)(&stack0x00000fc8 + lVar58) = fVar123;
      if (*_DAT_143ca8e90 != 0) {
        *(float **)(&stack0x00000810 + lVar58) = pfVar73;
        *(code **)(&stack0x00000818 + lVar58) = pdb_140f70fc0;
        *(undefined1 **)(&stack0x00000820 + lVar58) = &stack0x00000fc8 + lVar58;
        *(code **)(&stack0x00000828 + lVar58) = pdb_140f70fc0;
        *(undefined8 *)(&stack0x00000c70 + lVar58) = 0;
        *(undefined **)(&stack0x00000c78 + lVar58) = &UNK_142e4282b;
        *(undefined8 *)(&stack0x00000c80 + lVar58) = 0x17;
        *(undefined8 *)(&stack0x00000c88 + lVar58) = 0;
        *(undefined **)(&stack0x00000c90 + lVar58) = &UNK_142e4250e;
        *(undefined8 *)(&stack0x00000c98 + lVar58) = 0x24;
        *(undefined8 *)(&stack0x00000ca0 + lVar58) = 1;
        *(undefined **)(&stack0x00000ca8 + lVar58) = &UNK_142e4282b;
        *(undefined8 *)(&stack0x00000cb0 + lVar58) = 0x17;
        *(undefined8 *)(&stack0x00000cb8 + lVar58) = 0x38c00000001;
        *(undefined **)(&stack0x00000cc0 + lVar58) = &UNK_142e429c0;
        *(undefined1 **)(&stack0x00000cc8 + lVar58) = &stack0x00000810 + lVar58;
        *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fe636;
        pdb_140f332f0(&stack0x00001025 + lVar58,&stack0x00000c70 + lVar58);
      }
      if (fVar123 <= 0.0) goto LAB_1400ff6db;
      *(undefined4 *)(lVar72 + 0x3c) = uVar3;
      *pfVar73 = fVar123;
      *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fe654;
      pdb_140e38290(uVar62);
      *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fe661;
      pdb_140e57ef0(*(undefined8 *)(&stack0x00000fe0 + lVar58));
      lVar59 = *(longlong *)(&stack0x00001018 + lVar58);
      if (*(longlong *)(lVar59 + 0x88) == 0) goto LAB_1400fe774;
      lVar72 = *(longlong *)(lVar59 + 0x70);
      uVar67 = 0xf019cdffa3f74172;
      lVar64 = 0;
      goto LAB_1400fe6a0;
    }
    uVar76 = (ushort)(uVar57 - 1) & (ushort)uVar57;
    uVar57 = CONCAT22((short)(uVar57 - 1 >> 0x10),uVar76);
  }
  goto LAB_1400fe2b9;
LAB_1400fe6a0:
  uVar67 = uVar67 & *(ulonglong *)(lVar59 + 0x78);
  pcVar1 = (char *)(lVar72 + uVar67);
  auVar117[0] = -(*pcVar1 == DAT_142e34070);
  auVar117[1] = -(pcVar1[1] == DAT_142e34070._1_1_);
  auVar117[2] = -(pcVar1[2] == DAT_142e34070._2_1_);
  auVar117[3] = -(pcVar1[3] == DAT_142e34070._3_1_);
  auVar117[4] = -(pcVar1[4] == DAT_142e34070._4_1_);
  auVar117[5] = -(pcVar1[5] == DAT_142e34070._5_1_);
  auVar117[6] = -(pcVar1[6] == DAT_142e34070._6_1_);
  auVar117[7] = -(pcVar1[7] == DAT_142e34070._7_1_);
  auVar117[8] = -(pcVar1[8] == DAT_142e34070._8_1_);
  auVar117[9] = -(pcVar1[9] == DAT_142e34070._9_1_);
  auVar117[10] = -(pcVar1[10] == DAT_142e34070._10_1_);
  auVar117[0xb] = -(pcVar1[0xb] == DAT_142e34070._11_1_);
  auVar117[0xc] = -(pcVar1[0xc] == DAT_142e34070._12_1_);
  auVar117[0xd] = -(pcVar1[0xd] == DAT_142e34070._13_1_);
  auVar117[0xe] = -(pcVar1[0xe] == DAT_142e34070._14_1_);
  auVar117[0xf] = -(pcVar1[0xf] == DAT_142e34070._15_1_);
  uVar76 = (ushort)(SUB161(auVar117 >> 7,0) & 1) | (ushort)(SUB161(auVar117 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar117 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar117 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar117 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar117 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar117 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar117 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar117 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar117 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar117 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar117 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar117 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar117 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar117 >> 0x77,0) & 1) << 0xe | (ushort)(auVar117[0xf] >> 7) << 0xf;
  uVar57 = (uint)uVar76;
  while (uVar76 != 0) {
    uVar65 = 0;
    for (uVar20 = uVar57; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
      uVar65 = uVar65 + 1;
    }
    uVar77 = uVar65 + uVar67 & *(ulonglong *)(lVar59 + 0x78);
    pcVar2 = (char *)(lVar72 + -0x18 + uVar77 * -0x18);
    auVar118[0] = -(*pcVar2 == DAT_142e345b0);
    auVar118[1] = -(pcVar2[1] == UNK_142e345b1);
    auVar118[2] = -(pcVar2[2] == UNK_142e345b2);
    auVar118[3] = -(pcVar2[3] == UNK_142e345b3);
    auVar118[4] = -(pcVar2[4] == UNK_142e345b4);
    auVar118[5] = -(pcVar2[5] == UNK_142e345b5);
    auVar118[6] = -(pcVar2[6] == UNK_142e345b6);
    auVar118[7] = -(pcVar2[7] == UNK_142e345b7);
    auVar118[8] = -(pcVar2[8] == UNK_142e345b8);
    auVar118[9] = -(pcVar2[9] == UNK_142e345b9);
    auVar118[10] = -(pcVar2[10] == UNK_142e345ba);
    auVar118[0xb] = -(pcVar2[0xb] == UNK_142e345bb);
    auVar118[0xc] = -(pcVar2[0xc] == UNK_142e345bc);
    auVar118[0xd] = -(pcVar2[0xd] == UNK_142e345bd);
    auVar118[0xe] = -(pcVar2[0xe] == UNK_142e345be);
    auVar118[0xf] = -(pcVar2[0xf] == UNK_142e345bf);
    if ((ushort)((ushort)(SUB161(auVar118 >> 7,0) & 1) |
                 (ushort)(SUB161(auVar118 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar118 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar118 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar118 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar118 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar118 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar118 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar118 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar118 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar118 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar118 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar118 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar118 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar118 >> 0x77,0) & 1) << 0xe |
                (ushort)(auVar118[0xf] >> 7) << 0xf) == 0xffff) {
      uVar67 = *(ulonglong *)(lVar72 + uVar77 * -0x18 + -8);
      lVar59 = *(longlong *)(&stack0x00001018 + lVar58);
      if ((uVar67 < *(ulonglong *)(lVar59 + 0x210)) &&
         (uVar67 = *(ulonglong *)(*(longlong *)(lVar59 + 0x208) + uVar67 * 8), uVar67 != 0)) {
        lVar72 = ~uVar67 * 0x40;
        if (*(longlong *)(*(longlong *)(lVar59 + 0x1d8) + 0x20 + lVar72) != 0) {
          lVar72 = *(longlong *)(lVar59 + 0x1d8) + lVar72;
          *(undefined4 *)(lVar72 + 0x3c) = *(undefined4 *)(lVar59 + 0x5a8);
          **(undefined8 **)(lVar72 + 0x10) = 2;
        }
      }
      goto LAB_1400fe774;
    }
    uVar76 = (ushort)(uVar57 - 1) & (ushort)uVar57;
    uVar57 = CONCAT22((short)(uVar57 - 1 >> 0x10),uVar76);
  }
  auVar98[0] = -(*pcVar1 == -1);
  auVar98[1] = -(pcVar1[1] == -1);
  auVar98[2] = -(pcVar1[2] == -1);
  auVar98[3] = -(pcVar1[3] == -1);
  auVar98[4] = -(pcVar1[4] == -1);
  auVar98[5] = -(pcVar1[5] == -1);
  auVar98[6] = -(pcVar1[6] == -1);
  auVar98[7] = -(pcVar1[7] == -1);
  auVar98[8] = -(pcVar1[8] == -1);
  auVar98[9] = -(pcVar1[9] == -1);
  auVar98[10] = -(pcVar1[10] == -1);
  auVar98[0xb] = -(pcVar1[0xb] == -1);
  auVar98[0xc] = -(pcVar1[0xc] == -1);
  auVar98[0xd] = -(pcVar1[0xd] == -1);
  auVar98[0xe] = -(pcVar1[0xe] == -1);
  auVar98[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar98 >> 7,0) & 1) != 0 || (SUB161(auVar98 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar98 >> 0x17,0) & 1) != 0) || (SUB161(auVar98 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar98 >> 0x27,0) & 1) != 0) || (SUB161(auVar98 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar98 >> 0x37,0) & 1) != 0) || (SUB161(auVar98 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar98 >> 0x47,0) & 1) != 0) || (SUB161(auVar98 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar98 >> 0x57,0) & 1) != 0) || (SUB161(auVar98 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar98 >> 0x67,0) & 1) != 0) || (SUB161(auVar98 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar98 >> 0x77,0) & 1) != 0) || auVar98[0xf] < '\0') goto LAB_1400fe774;
  uVar67 = uVar67 + lVar64 + 0x10;
  lVar64 = lVar64 + 0x10;
  goto LAB_1400fe6a0;
LAB_1400fe2b9:
  auVar96[0] = -(auVar107[0] == -1);
  auVar96[1] = -(auVar107[1] == -1);
  auVar96[2] = -(auVar107[2] == -1);
  auVar96[3] = -(auVar107[3] == -1);
  auVar96[4] = -(auVar107[4] == -1);
  auVar96[5] = -(auVar107[5] == -1);
  auVar96[6] = -(auVar107[6] == -1);
  auVar96[7] = -(auVar107[7] == -1);
  auVar96[8] = -(auVar107[8] == -1);
  auVar96[9] = -(auVar107[9] == -1);
  auVar96[10] = -(auVar107[10] == -1);
  auVar96[0xb] = -(auVar107[0xb] == -1);
  auVar96[0xc] = -(auVar107[0xc] == -1);
  auVar96[0xd] = -(auVar107[0xd] == -1);
  auVar96[0xe] = -(auVar107[0xe] == -1);
  auVar96[0xf] = -(auVar107[0xf] == -1);
  if ((((((((((((((((SUB161(auVar96 >> 7,0) & 1) != 0 || (SUB161(auVar96 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar96 >> 0x17,0) & 1) != 0) || (SUB161(auVar96 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar96 >> 0x27,0) & 1) != 0) || (SUB161(auVar96 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar96 >> 0x37,0) & 1) != 0) || (SUB161(auVar96 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar96 >> 0x47,0) & 1) != 0) || (SUB161(auVar96 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar96 >> 0x57,0) & 1) != 0) || (SUB161(auVar96 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar96 >> 0x67,0) & 1) != 0) || (SUB161(auVar96 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar96 >> 0x77,0) & 1) != 0) || auVar96[0xf] < '\0') {
LAB_1400fe70d:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fe719;
    pdb_142dc8150(&UNK_142e429a8);
  }
  uVar67 = uVar67 + lVar64 + 0x10;
  lVar64 = lVar64 + 0x10;
  goto LAB_1400fe263;
LAB_1400fe0be:
  auVar95[0] = -(auVar107[0] == -1);
  auVar95[1] = -(auVar107[1] == -1);
  auVar95[2] = -(auVar107[2] == -1);
  auVar95[3] = -(auVar107[3] == -1);
  auVar95[4] = -(auVar107[4] == -1);
  auVar95[5] = -(auVar107[5] == -1);
  auVar95[6] = -(auVar107[6] == -1);
  auVar95[7] = -(auVar107[7] == -1);
  auVar95[8] = -(auVar107[8] == -1);
  auVar95[9] = -(auVar107[9] == -1);
  auVar95[10] = -(auVar107[10] == -1);
  auVar95[0xb] = -(auVar107[0xb] == -1);
  auVar95[0xc] = -(auVar107[0xc] == -1);
  auVar95[0xd] = -(auVar107[0xd] == -1);
  auVar95[0xe] = -(auVar107[0xe] == -1);
  auVar95[0xf] = -(auVar107[0xf] == -1);
  if ((((((((((((((((SUB161(auVar95 >> 7,0) & 1) != 0 || (SUB161(auVar95 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar95 >> 0x17,0) & 1) != 0) || (SUB161(auVar95 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar95 >> 0x27,0) & 1) != 0) || (SUB161(auVar95 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar95 >> 0x37,0) & 1) != 0) || (SUB161(auVar95 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar95 >> 0x47,0) & 1) != 0) || (SUB161(auVar95 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar95 >> 0x57,0) & 1) != 0) || (SUB161(auVar95 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar95 >> 0x67,0) & 1) != 0) || (SUB161(auVar95 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar95 >> 0x77,0) & 1) != 0) || auVar95[0xf] < '\0') {
LAB_1400fe49e:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fe4aa;
    pdb_142dc8150(&UNK_142e42990);
  }
  uVar67 = uVar67 + lVar78 + 0x10;
  lVar78 = lVar78 + 0x10;
  goto LAB_1400fe06d;
LAB_1400fdfa5:
  auVar94[0] = -(auVar107[0] == -1);
  auVar94[1] = -(auVar107[1] == -1);
  auVar94[2] = -(auVar107[2] == -1);
  auVar94[3] = -(auVar107[3] == -1);
  auVar94[4] = -(auVar107[4] == -1);
  auVar94[5] = -(auVar107[5] == -1);
  auVar94[6] = -(auVar107[6] == -1);
  auVar94[7] = -(auVar107[7] == -1);
  auVar94[8] = -(auVar107[8] == -1);
  auVar94[9] = -(auVar107[9] == -1);
  auVar94[10] = -(auVar107[10] == -1);
  auVar94[0xb] = -(auVar107[0xb] == -1);
  auVar94[0xc] = -(auVar107[0xc] == -1);
  auVar94[0xd] = -(auVar107[0xd] == -1);
  auVar94[0xe] = -(auVar107[0xe] == -1);
  auVar94[0xf] = -(auVar107[0xf] == -1);
  if ((((((((((((((((SUB161(auVar94 >> 7,0) & 1) != 0 || (SUB161(auVar94 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar94 >> 0x17,0) & 1) != 0) || (SUB161(auVar94 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar94 >> 0x27,0) & 1) != 0) || (SUB161(auVar94 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar94 >> 0x37,0) & 1) != 0) || (SUB161(auVar94 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar94 >> 0x47,0) & 1) != 0) || (SUB161(auVar94 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar94 >> 0x57,0) & 1) != 0) || (SUB161(auVar94 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar94 >> 0x67,0) & 1) != 0) || (SUB161(auVar94 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar94 >> 0x77,0) & 1) != 0) || auVar94[0xf] < '\0') {
LAB_1400fe0ef:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fe0fb;
    pdb_142dc8150(&UNK_142e428e8);
  }
  uVar77 = uVar77 + lVar78 + 0x10;
  lVar78 = lVar78 + 0x10;
  goto LAB_1400fdf59;
LAB_1400fdebf:
  auVar93[0] = -(*pcVar1 == -1);
  auVar93[1] = -(pcVar1[1] == -1);
  auVar93[2] = -(pcVar1[2] == -1);
  auVar93[3] = -(pcVar1[3] == -1);
  auVar93[4] = -(pcVar1[4] == -1);
  auVar93[5] = -(pcVar1[5] == -1);
  auVar93[6] = -(pcVar1[6] == -1);
  auVar93[7] = -(pcVar1[7] == -1);
  auVar93[8] = -(pcVar1[8] == -1);
  auVar93[9] = -(pcVar1[9] == -1);
  auVar93[10] = -(pcVar1[10] == -1);
  auVar93[0xb] = -(pcVar1[0xb] == -1);
  auVar93[0xc] = -(pcVar1[0xc] == -1);
  auVar93[0xd] = -(pcVar1[0xd] == -1);
  auVar93[0xe] = -(pcVar1[0xe] == -1);
  auVar93[0xf] = -(pcVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar93 >> 7,0) & 1) != 0 || (SUB161(auVar93 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar93 >> 0x17,0) & 1) != 0) || (SUB161(auVar93 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar93 >> 0x27,0) & 1) != 0) || (SUB161(auVar93 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar93 >> 0x37,0) & 1) != 0) || (SUB161(auVar93 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar93 >> 0x47,0) & 1) != 0) || (SUB161(auVar93 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar93 >> 0x57,0) & 1) != 0) || (SUB161(auVar93 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar93 >> 0x67,0) & 1) != 0) || (SUB161(auVar93 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar93 >> 0x77,0) & 1) != 0) || auVar93[0xf] < '\0') {
LAB_1400fe0dd:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fe0e9;
    pdb_142dc8150(&UNK_142e428d0);
  }
  uVar77 = uVar77 + lVar75 + 0x10;
  lVar75 = lVar75 + 0x10;
  goto LAB_1400fde6d;
LAB_1400fd960:
  auVar92[0] = -(auVar107[0] == -1);
  auVar92[1] = -(auVar107[1] == -1);
  auVar92[2] = -(auVar107[2] == -1);
  auVar92[3] = -(auVar107[3] == -1);
  auVar92[4] = -(auVar107[4] == -1);
  auVar92[5] = -(auVar107[5] == -1);
  auVar92[6] = -(auVar107[6] == -1);
  auVar92[7] = -(auVar107[7] == -1);
  auVar92[8] = -(auVar107[8] == -1);
  auVar92[9] = -(auVar107[9] == -1);
  auVar92[10] = -(auVar107[10] == -1);
  auVar92[0xb] = -(auVar107[0xb] == -1);
  auVar92[0xc] = -(auVar107[0xc] == -1);
  auVar92[0xd] = -(auVar107[0xd] == -1);
  auVar92[0xe] = -(auVar107[0xe] == -1);
  auVar92[0xf] = -(auVar107[0xf] == -1);
  if ((((((((((((((((SUB161(auVar92 >> 7,0) & 1) != 0 || (SUB161(auVar92 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar92 >> 0x17,0) & 1) != 0) || (SUB161(auVar92 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar92 >> 0x27,0) & 1) != 0) || (SUB161(auVar92 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar92 >> 0x37,0) & 1) != 0) || (SUB161(auVar92 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar92 >> 0x47,0) & 1) != 0) || (SUB161(auVar92 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar92 >> 0x57,0) & 1) != 0) || (SUB161(auVar92 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar92 >> 0x67,0) & 1) != 0) || (SUB161(auVar92 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar92 >> 0x77,0) & 1) != 0) || auVar92[0xf] < '\0') {
LAB_1400fda84:
    *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fda9c;
    pdb_142dc8110(&UNK_142e428a8,10,&UNK_142e428b8);
LAB_1400ff770:
                    /* WARNING: Does not return */
    pcVar19 = (code *)invalidInstructionException();
    (*pcVar19)();
  }
  uVar67 = uVar67 + lVar72 + 0x10;
  lVar72 = lVar72 + 0x10;
  goto LAB_1400fd907;
LAB_1400fe774:
  if (2 < *_DAT_143ca8e90) {
    *(undefined8 *)(&stack0x00000c70 + lVar58) = 0;
    *(undefined **)(&stack0x00000c78 + lVar58) = &UNK_142e4282b;
    *(undefined8 *)(&stack0x00000c80 + lVar58) = 0x17;
    *(undefined8 *)(&stack0x00000c88 + lVar58) = 0;
    *(undefined **)(&stack0x00000c90 + lVar58) = &UNK_142e4250e;
    *(undefined8 *)(&stack0x00000c98 + lVar58) = 0x24;
    *(undefined8 *)(&stack0x00000ca0 + lVar58) = 3;
    *(undefined **)(&stack0x00000ca8 + lVar58) = &UNK_142e4282b;
    *(undefined8 *)(&stack0x00000cb0 + lVar58) = 0x17;
    *(undefined8 *)(&stack0x00000cb8 + lVar58) = 0x3ad00000001;
    *(undefined **)(&stack0x00000cc0 + lVar58) = &UNK_142e42a2a;
    *(undefined8 *)(&stack0x00000cc8 + lVar58) = 0x73;
    *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fe82a;
    pdb_140f332f0(&stack0x00001025 + lVar58,&stack0x00000c70 + lVar58);
  }
  *(undefined8 *)(&stack0x00000510 + lVar58) = *(undefined8 *)(&stack0x00001018 + lVar58);
  *(undefined4 *)(&stack0x00000fc4 + lVar58) = 0x200020;
  *(undefined2 *)(&stack0x00000ff4 + lVar58) = 0;
  *(undefined4 *)(&stack0x00000ff0 + lVar58) = 0;
  *(undefined1 **)(&stack0x00000810 + lVar58) = &stack0x00000510 + lVar58;
  *(longlong *)(&stack0x00000818 + lVar58) = lVar75;
  *(undefined1 **)(&stack0x00000820 + lVar58) = &stack0x00000fc4 + lVar58;
  *(undefined **)(&stack0x00000828 + lVar58) = puVar79;
  *(undefined1 **)(&stack0x00000830 + lVar58) = &stack0x00000b10 + lVar58;
  *(undefined1 **)(&stack0x00000838 + lVar58) = &stack0x00000ff0 + lVar58;
  *(undefined8 *)(&stack0x00000840 + lVar58) = 0;
  *(undefined1 **)(&stack0xfffffffffffffff0 + lVar58) = &stack0x00000810 + lVar58;
  *(undefined1 **)(&stack0xffffffffffffffe8 + lVar58) = &stack0x00000f68 + lVar58;
  *(undefined8 *)(&stack0xffffffffffffffe0 + lVar58) = *(undefined8 *)(&stack0x00000ff8 + lVar58);
  *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fe8e7;
  pdb_140585c80(&stack0x00000c70 + lVar58,&UNK_142e42842,4,uVar62);
  if (*(int *)(&stack0x00000c70 + lVar58) == 2) {
    *(undefined **)(&stack0xffffffffffffffe0 + lVar58) = &UNK_142e42aa0;
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff66f;
    pdb_142dc8170(&UNK_142e42a63,0x37,&stack0x00001025 + lVar58,&UNK_142e42bd0);
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fe90e;
  pub_142e32760(&stack0x00000810 + lVar58,&stack0x00000c70 + lVar58,0x2f8);
  lVar59 = *(longlong *)(&stack0x00001000 + lVar58);
  if (2 < *_DAT_143ca8e90) {
    *(undefined8 *)(&stack0x00000c70 + lVar58) = 0;
    *(undefined **)(&stack0x00000c78 + lVar58) = &UNK_142e4282b;
    *(undefined8 *)(&stack0x00000c80 + lVar58) = 0x17;
    *(undefined8 *)(&stack0x00000c88 + lVar58) = 0;
    *(undefined **)(&stack0x00000c90 + lVar58) = &UNK_142e4250e;
    *(undefined8 *)(&stack0x00000c98 + lVar58) = 0x24;
    *(undefined8 *)(&stack0x00000ca0 + lVar58) = 3;
    *(undefined **)(&stack0x00000ca8 + lVar58) = &UNK_142e4282b;
    *(undefined8 *)(&stack0x00000cb0 + lVar58) = 0x17;
    *(undefined8 *)(&stack0x00000cb8 + lVar58) = 0x3bd00000001;
    *(undefined **)(&stack0x00000cc0 + lVar58) = &UNK_142e42ab8;
    *(undefined8 *)(&stack0x00000cc8 + lVar58) = 0x5d;
    *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fe9cb;
    pdb_140f332f0(&stack0x00001025 + lVar58,&stack0x00000c70 + lVar58);
  }
  puVar68 = &stack0x00000810 + lVar58;
  *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fe9e5;
  pub_142e32760(&stack0x00000510 + lVar58,puVar68,0x2f8);
  iVar66 = (int)puVar68;
LAB_1400fe9e5:
  dVar82 = 0.0;
  dVar85 = 0.0;
  if (_DAT_143ca30a8 != 1000000000) {
    (&stack0x00001027)[lVar58] = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fea0d;
    uVar62 = pdb_140f3c9d0();
    (&stack0x00001027)[lVar58] = 1;
    *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fea23;
    uVar62 = pdb_140f58810(uVar62);
    auVar83._8_4_ = (int)((ulonglong)uVar62 >> 0x20);
    auVar83._0_8_ = uVar62;
    auVar83._12_4_ = _UNK_142e42374;
    dVar82 = (auVar83._8_8_ - _UNK_142e42388) +
             ((double)CONCAT44(_DAT_142e42370,(int)uVar62) - _DAT_142e42380);
    dVar85 = (double)iVar66;
  }
  (&stack0x00001027)[lVar58] = 1;
  *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fea58;
  uVar62 = pdb_140f3c9d0();
  *(undefined8 *)((longlong)&lStackX_8 + lVar58) = uVar62;
  *(int *)((longlong)aiStackX_10 + lVar58) = iVar66;
  bVar56 = (&stack0x00000bd2)[lVar58];
  if ((bool)(lVar59 != 0 & (bVar81 ^ 1U))) {
    *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400feb58;
    pub_142e32760(&stack0x00000c70 + lVar58,&stack0x00000510 + lVar58);
    lVar72 = *(longlong *)(&stack0x00001018 + lVar58);
    uVar62 = *(undefined8 *)(&stack0x00000fd8 + lVar58);
    if (*(longlong *)(lVar72 + 0x88) != 0) {
      lVar75 = *(longlong *)(lVar72 + 0x70);
      uVar67 = 0x98a9c564f7f617b9;
      lVar64 = 0;
      while( true ) {
        uVar67 = uVar67 & *(ulonglong *)(lVar72 + 0x78);
        auVar107 = *(undefined1 (*) [16])(lVar75 + uVar67);
        auVar121[0] = -(auVar107[0] == DAT_142e33dd0);
        auVar121[1] = -(auVar107[1] == DAT_142e33dd0._1_1_);
        auVar121[2] = -(auVar107[2] == DAT_142e33dd0._2_1_);
        auVar121[3] = -(auVar107[3] == DAT_142e33dd0._3_1_);
        auVar121[4] = -(auVar107[4] == DAT_142e33dd0._4_1_);
        auVar121[5] = -(auVar107[5] == DAT_142e33dd0._5_1_);
        auVar121[6] = -(auVar107[6] == DAT_142e33dd0._6_1_);
        auVar121[7] = -(auVar107[7] == DAT_142e33dd0._7_1_);
        auVar121[8] = -(auVar107[8] == DAT_142e33dd0._8_1_);
        auVar121[9] = -(auVar107[9] == DAT_142e33dd0._9_1_);
        auVar121[10] = -(auVar107[10] == DAT_142e33dd0._10_1_);
        auVar121[0xb] = -(auVar107[0xb] == DAT_142e33dd0._11_1_);
        auVar121[0xc] = -(auVar107[0xc] == DAT_142e33dd0._12_1_);
        auVar121[0xd] = -(auVar107[0xd] == DAT_142e33dd0._13_1_);
        auVar121[0xe] = -(auVar107[0xe] == DAT_142e33dd0._14_1_);
        auVar121[0xf] = -(auVar107[0xf] == DAT_142e33dd0._15_1_);
        uVar76 = (ushort)(SUB161(auVar121 >> 7,0) & 1) |
                 (ushort)(SUB161(auVar121 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar121 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar121 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar121 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar121 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar121 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar121 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar121 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar121 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar121 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar121 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar121 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar121 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar121 >> 0x77,0) & 1) << 0xe |
                 (ushort)(auVar121[0xf] >> 7) << 0xf;
        uVar57 = (uint)uVar76;
        while (uVar76 != 0) {
          uVar65 = 0;
          for (uVar20 = uVar57; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
            uVar65 = uVar65 + 1;
          }
          uVar77 = uVar65 + uVar67 & *(ulonglong *)(lVar72 + 0x78);
          pcVar1 = (char *)(lVar75 + -0x18 + uVar77 * -0x18);
          auVar122[0] = -(*pcVar1 == DAT_142e34a80);
          auVar122[1] = -(pcVar1[1] == DAT_142e34a80._1_1_);
          auVar122[2] = -(pcVar1[2] == DAT_142e34a80._2_1_);
          auVar122[3] = -(pcVar1[3] == DAT_142e34a80._3_1_);
          auVar122[4] = -(pcVar1[4] == DAT_142e34a80._4_1_);
          auVar122[5] = -(pcVar1[5] == DAT_142e34a80._5_1_);
          auVar122[6] = -(pcVar1[6] == DAT_142e34a80._6_1_);
          auVar122[7] = -(pcVar1[7] == DAT_142e34a80._7_1_);
          auVar122[8] = -(pcVar1[8] == DAT_142e34a80._8_1_);
          auVar122[9] = -(pcVar1[9] == DAT_142e34a80._9_1_);
          auVar122[10] = -(pcVar1[10] == DAT_142e34a80._10_1_);
          auVar122[0xb] = -(pcVar1[0xb] == DAT_142e34a80._11_1_);
          auVar122[0xc] = -(pcVar1[0xc] == DAT_142e34a80._12_1_);
          auVar122[0xd] = -(pcVar1[0xd] == DAT_142e34a80._13_1_);
          auVar122[0xe] = -(pcVar1[0xe] == DAT_142e34a80._14_1_);
          auVar122[0xf] = -(pcVar1[0xf] == DAT_142e34a80._15_1_);
          if ((ushort)((ushort)(SUB161(auVar122 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar122 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar122 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar122 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar122 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar122 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar122 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar122 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar122 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar122 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar122 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar122 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar122 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar122 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar122 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar122[0xf] >> 7) << 0xf) == 0xffff) {
            uVar67 = *(ulonglong *)(lVar75 + uVar77 * -0x18 + -8);
            if ((*(ulonglong *)(lVar72 + 0x210) <= uVar67) ||
               (uVar67 = *(ulonglong *)(*(longlong *)(lVar72 + 0x208) + uVar67 * 8), uVar67 == 0))
            goto LAB_1400feff3;
            lVar75 = ~uVar67 * 0x40;
            if (*(longlong *)(*(longlong *)(lVar72 + 0x1d8) + 0x20 + lVar75) == 0)
            goto LAB_1400feff3;
            lVar75 = *(longlong *)(lVar72 + 0x1d8) + lVar75;
            uVar7 = *(undefined8 *)(lVar75 + 0x10);
            *(undefined4 *)(lVar75 + 0x3c) = *(undefined4 *)(lVar72 + 0x5a8);
            lVar72 = *(longlong *)(&stack0x00001008 + lVar58);
            bVar11 = (&stack0x00001026)[lVar58];
            (&stack0x00001023)[lVar58] = 0;
            *(undefined1 **)((longlong)auStackX_18 + lVar58 + -0x18) = &stack0x00000bd4 + lVar58;
            *(uint *)(&stack0xfffffffffffffff8 + lVar58) =
                 (uint)bVar11 << 0x10 | (uint)bVar56 << 8 | (uint)bVar56;
            *(longlong *)(&stack0xfffffffffffffff0 + lVar58) = lVar72 + 0x18;
            *(undefined8 *)(&stack0xffffffffffffffe8 + lVar58) = uVar7;
            *(longlong *)(&stack0xffffffffffffffe0 + lVar58) = lVar59;
            *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fed72;
            pdb_140353810(&stack0x00000c38 + lVar58,uVar62,&stack0x00000c70 + lVar58,
                          &stack0x00000f68 + lVar58);
            goto LAB_1400fed73;
          }
          uVar76 = (ushort)(uVar57 - 1) & (ushort)uVar57;
          uVar57 = CONCAT22((short)(uVar57 - 1 >> 0x10),uVar76);
        }
        auVar100[0] = -(auVar107[0] == -1);
        auVar100[1] = -(auVar107[1] == -1);
        auVar100[2] = -(auVar107[2] == -1);
        auVar100[3] = -(auVar107[3] == -1);
        auVar100[4] = -(auVar107[4] == -1);
        auVar100[5] = -(auVar107[5] == -1);
        auVar100[6] = -(auVar107[6] == -1);
        auVar100[7] = -(auVar107[7] == -1);
        auVar100[8] = -(auVar107[8] == -1);
        auVar100[9] = -(auVar107[9] == -1);
        auVar100[10] = -(auVar107[10] == -1);
        auVar100[0xb] = -(auVar107[0xb] == -1);
        auVar100[0xc] = -(auVar107[0xc] == -1);
        auVar100[0xd] = -(auVar107[0xd] == -1);
        auVar100[0xe] = -(auVar107[0xe] == -1);
        auVar100[0xf] = -(auVar107[0xf] == -1);
        if ((((((((((((((((SUB161(auVar100 >> 7,0) & 1) != 0 || (SUB161(auVar100 >> 0xf,0) & 1) != 0
                         ) || (SUB161(auVar100 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar100 >> 0x1f,0) & 1) != 0) ||
                      (SUB161(auVar100 >> 0x27,0) & 1) != 0) ||
                     (SUB161(auVar100 >> 0x2f,0) & 1) != 0) || (SUB161(auVar100 >> 0x37,0) & 1) != 0
                    ) || (SUB161(auVar100 >> 0x3f,0) & 1) != 0) ||
                  (SUB161(auVar100 >> 0x47,0) & 1) != 0) || (SUB161(auVar100 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar100 >> 0x57,0) & 1) != 0) || (SUB161(auVar100 >> 0x5f,0) & 1) != 0)
              || (SUB161(auVar100 >> 0x67,0) & 1) != 0) || (SUB161(auVar100 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar100 >> 0x77,0) & 1) != 0) || auVar100[0xf] < '\0') break;
        uVar67 = uVar67 + lVar64 + 0x10;
        lVar64 = lVar64 + 0x10;
      }
    }
LAB_1400feff3:
    (&stack0x00001023)[lVar58] = 1;
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff006;
    pdb_142dc8150(&UNK_142e42ae8);
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fea93;
  pub_142e32760(&stack0x00000c70 + lVar58,&stack0x00000510 + lVar58);
  lVar59 = *(longlong *)(&stack0x00001018 + lVar58);
  uVar62 = *(undefined8 *)(&stack0x00000fd8 + lVar58);
  if (*(longlong *)(lVar59 + 0x88) != 0) {
    lVar72 = *(longlong *)(lVar59 + 0x70);
    uVar67 = 0x98a9c564f7f617b9;
    lVar75 = 0;
    do {
      uVar67 = uVar67 & *(ulonglong *)(lVar59 + 0x78);
      auVar107 = *(undefined1 (*) [16])(lVar72 + uVar67);
      auVar119[0] = -(auVar107[0] == DAT_142e33dd0);
      auVar119[1] = -(auVar107[1] == DAT_142e33dd0._1_1_);
      auVar119[2] = -(auVar107[2] == DAT_142e33dd0._2_1_);
      auVar119[3] = -(auVar107[3] == DAT_142e33dd0._3_1_);
      auVar119[4] = -(auVar107[4] == DAT_142e33dd0._4_1_);
      auVar119[5] = -(auVar107[5] == DAT_142e33dd0._5_1_);
      auVar119[6] = -(auVar107[6] == DAT_142e33dd0._6_1_);
      auVar119[7] = -(auVar107[7] == DAT_142e33dd0._7_1_);
      auVar119[8] = -(auVar107[8] == DAT_142e33dd0._8_1_);
      auVar119[9] = -(auVar107[9] == DAT_142e33dd0._9_1_);
      auVar119[10] = -(auVar107[10] == DAT_142e33dd0._10_1_);
      auVar119[0xb] = -(auVar107[0xb] == DAT_142e33dd0._11_1_);
      auVar119[0xc] = -(auVar107[0xc] == DAT_142e33dd0._12_1_);
      auVar119[0xd] = -(auVar107[0xd] == DAT_142e33dd0._13_1_);
      auVar119[0xe] = -(auVar107[0xe] == DAT_142e33dd0._14_1_);
      auVar119[0xf] = -(auVar107[0xf] == DAT_142e33dd0._15_1_);
      uVar76 = (ushort)(SUB161(auVar119 >> 7,0) & 1) | (ushort)(SUB161(auVar119 >> 0xf,0) & 1) << 1
               | (ushort)(SUB161(auVar119 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar119 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar119 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar119 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar119 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar119 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar119 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar119 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar119 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar119 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar119 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar119 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar119 >> 0x77,0) & 1) << 0xe | (ushort)(auVar119[0xf] >> 7) << 0xf
      ;
      uVar57 = (uint)uVar76;
      while (uVar76 != 0) {
        uVar65 = 0;
        for (uVar20 = uVar57; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
          uVar65 = uVar65 + 1;
        }
        uVar77 = uVar65 + uVar67 & *(ulonglong *)(lVar59 + 0x78);
        pcVar1 = (char *)(lVar72 + -0x18 + uVar77 * -0x18);
        auVar120[0] = -(*pcVar1 == DAT_142e34a80);
        auVar120[1] = -(pcVar1[1] == DAT_142e34a80._1_1_);
        auVar120[2] = -(pcVar1[2] == DAT_142e34a80._2_1_);
        auVar120[3] = -(pcVar1[3] == DAT_142e34a80._3_1_);
        auVar120[4] = -(pcVar1[4] == DAT_142e34a80._4_1_);
        auVar120[5] = -(pcVar1[5] == DAT_142e34a80._5_1_);
        auVar120[6] = -(pcVar1[6] == DAT_142e34a80._6_1_);
        auVar120[7] = -(pcVar1[7] == DAT_142e34a80._7_1_);
        auVar120[8] = -(pcVar1[8] == DAT_142e34a80._8_1_);
        auVar120[9] = -(pcVar1[9] == DAT_142e34a80._9_1_);
        auVar120[10] = -(pcVar1[10] == DAT_142e34a80._10_1_);
        auVar120[0xb] = -(pcVar1[0xb] == DAT_142e34a80._11_1_);
        auVar120[0xc] = -(pcVar1[0xc] == DAT_142e34a80._12_1_);
        auVar120[0xd] = -(pcVar1[0xd] == DAT_142e34a80._13_1_);
        auVar120[0xe] = -(pcVar1[0xe] == DAT_142e34a80._14_1_);
        auVar120[0xf] = -(pcVar1[0xf] == DAT_142e34a80._15_1_);
        if ((ushort)((ushort)(SUB161(auVar120 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar120 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar120 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar120 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar120 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar120 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar120 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar120 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar120 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar120 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar120 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar120 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar120 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar120 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar120 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar120[0xf] >> 7) << 0xf) == 0xffff) {
          uVar67 = *(ulonglong *)(lVar72 + uVar77 * -0x18 + -8);
          if ((uVar67 < *(ulonglong *)(lVar59 + 0x210)) &&
             (uVar67 = *(ulonglong *)(*(longlong *)(lVar59 + 0x208) + uVar67 * 8), uVar67 != 0)) {
            lVar72 = ~uVar67 * 0x40;
            if (*(longlong *)(*(longlong *)(lVar59 + 0x1d8) + 0x20 + lVar72) != 0) {
              lVar72 = *(longlong *)(lVar59 + 0x1d8) + lVar72;
              uVar7 = *(undefined8 *)(lVar72 + 0x10);
              *(undefined4 *)(lVar72 + 0x3c) = *(undefined4 *)(lVar59 + 0x5a8);
              (&stack0x00001022)[lVar58] = 0;
              *(uint *)(&stack0xffffffffffffffe8 + lVar58) =
                   (uint)(byte)(&stack0x00001026)[lVar58] << 0x10 | (uint)bVar56 << 8 | (uint)bVar56
              ;
              *(undefined8 *)(&stack0xffffffffffffffe0 + lVar58) = uVar7;
              *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fecae;
              pdb_140355df0(&stack0x00000c38 + lVar58,uVar62,&stack0x00000c70 + lVar58,
                            &stack0x00000f68 + lVar58);
LAB_1400fed73:
              cVar54 = UNK_142e4239f;
              cVar53 = UNK_142e4239e;
              cVar52 = UNK_142e4239d;
              cVar51 = UNK_142e4239c;
              cVar50 = UNK_142e4239b;
              cVar49 = UNK_142e4239a;
              cVar48 = UNK_142e42399;
              cVar47 = UNK_142e42398;
              cVar46 = UNK_142e42397;
              cVar45 = UNK_142e42396;
              cVar44 = UNK_142e42395;
              cVar43 = UNK_142e42394;
              cVar42 = UNK_142e42393;
              cVar41 = UNK_142e42392;
              cVar40 = UNK_142e42391;
              cVar39 = DAT_142e42390;
              cVar38 = UNK_142e34c8f;
              cVar37 = UNK_142e34c8e;
              cVar36 = UNK_142e34c8d;
              cVar35 = UNK_142e34c8c;
              cVar34 = UNK_142e34c8b;
              cVar33 = UNK_142e34c8a;
              cVar32 = UNK_142e34c89;
              cVar31 = UNK_142e34c88;
              cVar30 = UNK_142e34c87;
              cVar29 = UNK_142e34c86;
              cVar28 = UNK_142e34c85;
              cVar27 = UNK_142e34c84;
              cVar26 = UNK_142e34c83;
              cVar25 = UNK_142e34c82;
              cVar24 = UNK_142e34c81;
              cVar55 = DAT_142e34c80;
              *(undefined8 *)(&stack0x00000ca8 + lVar58) =
                   *(undefined8 *)(&stack0x00000c68 + lVar58);
              *(undefined8 *)(&stack0x00000c98 + lVar58) =
                   *(undefined8 *)(&stack0x00000c58 + lVar58);
              *(undefined8 *)(&stack0x00000ca0 + lVar58) =
                   *(undefined8 *)(&stack0x00000c60 + lVar58);
              *(undefined1 (*) [16])(&stack0x00000c88 + lVar58) =
                   *(undefined1 (*) [16])(&stack0x00000c48 + lVar58);
              *(undefined8 *)(&stack0x00000c78 + lVar58) =
                   *(undefined8 *)(&stack0x00000c38 + lVar58);
              *(undefined8 *)(&stack0x00000c80 + lVar58) =
                   *(undefined8 *)(&stack0x00000c40 + lVar58);
              uVar67 = 0;
              param_3 = &stack0x00000810 + lVar58;
LAB_1400fee40:
              uVar57 = *(uint *)(&stack0x00000c78 + lVar58);
              if (uVar67 != uVar57) {
                *(ulonglong *)(&stack0x00000c70 + lVar58) = uVar67 + 1;
                lVar59 = *(longlong *)(&stack0x00000c80 + uVar67 * 0x18 + lVar58);
                if (!SBORROW8(0,lVar59)) {
                  lVar72 = uVar67 * 0x18 + lVar58;
                  *(longlong *)(&stack0x00001000 + lVar58) = lVar59;
                  *(longlong *)(&stack0x00000810 + lVar58) = lVar59;
                  uVar62 = *(undefined8 *)(&stack0x00000c90 + lVar72);
                  *(undefined8 *)(&stack0x00000818 + lVar58) =
                       *(undefined8 *)(&stack0x00000c88 + lVar72);
                  *(undefined8 *)(&stack0x00000820 + lVar58) = uVar62;
                  (&stack0x00001024)[lVar58] = 1;
                  *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fee9f;
                  pdb_140e156f0(param_3);
                  lVar59 = *(longlong *)(&stack0x00001018 + lVar58);
                  if (*(longlong *)(lVar59 + 0x88) != 0) {
                    lVar72 = *(longlong *)(lVar59 + 0x70);
                    lVar75 = 0;
                    uVar67 = 0xde45433703958e6b;
                    while( true ) {
                      uVar67 = uVar67 & *(ulonglong *)(lVar59 + 0x78);
                      auVar107 = *(undefined1 (*) [16])(lVar72 + uVar67);
                      auVar86[0] = -(auVar107[0] == cVar55);
                      auVar86[1] = -(auVar107[1] == cVar24);
                      auVar86[2] = -(auVar107[2] == cVar25);
                      auVar86[3] = -(auVar107[3] == cVar26);
                      auVar86[4] = -(auVar107[4] == cVar27);
                      auVar86[5] = -(auVar107[5] == cVar28);
                      auVar86[6] = -(auVar107[6] == cVar29);
                      auVar86[7] = -(auVar107[7] == cVar30);
                      auVar86[8] = -(auVar107[8] == cVar31);
                      auVar86[9] = -(auVar107[9] == cVar32);
                      auVar86[10] = -(auVar107[10] == cVar33);
                      auVar86[0xb] = -(auVar107[0xb] == cVar34);
                      auVar86[0xc] = -(auVar107[0xc] == cVar35);
                      auVar86[0xd] = -(auVar107[0xd] == cVar36);
                      auVar86[0xe] = -(auVar107[0xe] == cVar37);
                      auVar86[0xf] = -(auVar107[0xf] == cVar38);
                      uVar76 = (ushort)(SUB161(auVar86 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar86 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar86 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar86 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar86 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar86 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar86 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar86 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar86 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar86 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar86 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar86 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar86 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar86 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar86 >> 0x77,0) & 1) << 0xe |
                               (ushort)(auVar86[0xf] >> 7) << 0xf;
                      uVar57 = (uint)uVar76;
                      while (uVar76 != 0) {
                        uVar65 = 0;
                        for (uVar20 = uVar57; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000)
                        {
                          uVar65 = uVar65 + 1;
                        }
                        uVar77 = uVar65 + uVar67 & *(ulonglong *)(lVar59 + 0x78);
                        pcVar1 = (char *)(lVar72 + -0x18 + uVar77 * -0x18);
                        auVar87[0] = -(*pcVar1 == cVar39);
                        auVar87[1] = -(pcVar1[1] == cVar40);
                        auVar87[2] = -(pcVar1[2] == cVar41);
                        auVar87[3] = -(pcVar1[3] == cVar42);
                        auVar87[4] = -(pcVar1[4] == cVar43);
                        auVar87[5] = -(pcVar1[5] == cVar44);
                        auVar87[6] = -(pcVar1[6] == cVar45);
                        auVar87[7] = -(pcVar1[7] == cVar46);
                        auVar87[8] = -(pcVar1[8] == cVar47);
                        auVar87[9] = -(pcVar1[9] == cVar48);
                        auVar87[10] = -(pcVar1[10] == cVar49);
                        auVar87[0xb] = -(pcVar1[0xb] == cVar50);
                        auVar87[0xc] = -(pcVar1[0xc] == cVar51);
                        auVar87[0xd] = -(pcVar1[0xd] == cVar52);
                        auVar87[0xe] = -(pcVar1[0xe] == cVar53);
                        auVar87[0xf] = -(pcVar1[0xf] == cVar54);
                        if ((ushort)((ushort)(SUB161(auVar87 >> 7,0) & 1) |
                                     (ushort)(SUB161(auVar87 >> 0xf,0) & 1) << 1 |
                                     (ushort)(SUB161(auVar87 >> 0x17,0) & 1) << 2 |
                                     (ushort)(SUB161(auVar87 >> 0x1f,0) & 1) << 3 |
                                     (ushort)(SUB161(auVar87 >> 0x27,0) & 1) << 4 |
                                     (ushort)(SUB161(auVar87 >> 0x2f,0) & 1) << 5 |
                                     (ushort)(SUB161(auVar87 >> 0x37,0) & 1) << 6 |
                                     (ushort)(SUB161(auVar87 >> 0x3f,0) & 1) << 7 |
                                     (ushort)(SUB161(auVar87 >> 0x47,0) & 1) << 8 |
                                     (ushort)(SUB161(auVar87 >> 0x4f,0) & 1) << 9 |
                                     (ushort)(SUB161(auVar87 >> 0x57,0) & 1) << 10 |
                                     (ushort)(SUB161(auVar87 >> 0x5f,0) & 1) << 0xb |
                                     (ushort)(SUB161(auVar87 >> 0x67,0) & 1) << 0xc |
                                     (ushort)(SUB161(auVar87 >> 0x6f,0) & 1) << 0xd |
                                     (ushort)(SUB161(auVar87 >> 0x77,0) & 1) << 0xe |
                                    (ushort)(auVar87[0xf] >> 7) << 0xf) == 0xffff) {
                          uVar67 = *(ulonglong *)(lVar72 + uVar77 * -0x18 + -8);
                          lVar59 = *(longlong *)(&stack0x00001018 + lVar58);
                          if ((*(ulonglong *)(lVar59 + 0x210) <= uVar67) ||
                             (uVar67 = *(ulonglong *)(*(longlong *)(lVar59 + 0x208) + uVar67 * 8),
                             uVar67 == 0)) goto LAB_1400fefc1;
                          lVar72 = ~uVar67 * 0x40;
                          if (*(longlong *)(*(longlong *)(lVar59 + 0x1d8) + 0x20 + lVar72) == 0)
                          goto LAB_1400fefc1;
                          lVar72 = *(longlong *)(lVar59 + 0x1d8) + lVar72;
                          lVar75 = *(longlong *)(lVar72 + 0x10);
                          *(undefined4 *)(lVar72 + 0x3c) = *(undefined4 *)(lVar59 + 0x5a8);
                          *(undefined8 *)(&stack0x00000ff8 + lVar58) =
                               *(undefined8 *)(&stack0x00000818 + lVar58);
                          uVar62 = *(undefined8 *)(&stack0x00000820 + lVar58);
                          lVar59 = *(longlong *)(lVar75 + 0x30);
                          uVar7 = *(undefined8 *)(lVar75 + 0x40);
                          if (lVar59 == *(longlong *)(lVar75 + 0x20)) {
                            *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fefbb;
                            pdb_142d7e6e0(lVar75 + 0x20);
                          }
                          lVar72 = *(longlong *)(lVar75 + 0x28);
                          lVar64 = lVar59 * 0x20;
                          *(undefined8 *)(lVar72 + lVar64) =
                               *(undefined8 *)(&stack0x00001000 + lVar58);
                          *(undefined8 *)(lVar72 + 8 + lVar64) =
                               *(undefined8 *)(&stack0x00000ff8 + lVar58);
                          *(undefined8 *)(lVar72 + 0x10 + lVar64) = uVar62;
                          *(undefined8 *)(lVar72 + 0x18 + lVar64) = uVar7;
                          *(longlong *)(lVar75 + 0x30) = lVar59 + 1;
                          *(longlong *)(lVar75 + 0x40) = *(longlong *)(lVar75 + 0x40) + 1;
                          uVar67 = *(ulonglong *)(&stack0x00000c70 + lVar58);
                          puVar79 = &stack0x00000300 + lVar58;
                          goto LAB_1400fee40;
                        }
                        uVar76 = (ushort)(uVar57 - 1) & (ushort)uVar57;
                        uVar57 = CONCAT22((short)(uVar57 - 1 >> 0x10),uVar76);
                      }
                      auVar84[0] = -(auVar107[0] == -1);
                      auVar84[1] = -(auVar107[1] == -1);
                      auVar84[2] = -(auVar107[2] == -1);
                      auVar84[3] = -(auVar107[3] == -1);
                      auVar84[4] = -(auVar107[4] == -1);
                      auVar84[5] = -(auVar107[5] == -1);
                      auVar84[6] = -(auVar107[6] == -1);
                      auVar84[7] = -(auVar107[7] == -1);
                      auVar84[8] = -(auVar107[8] == -1);
                      auVar84[9] = -(auVar107[9] == -1);
                      auVar84[10] = -(auVar107[10] == -1);
                      auVar84[0xb] = -(auVar107[0xb] == -1);
                      auVar84[0xc] = -(auVar107[0xc] == -1);
                      auVar84[0xd] = -(auVar107[0xd] == -1);
                      auVar84[0xe] = -(auVar107[0xe] == -1);
                      auVar84[0xf] = -(auVar107[0xf] == -1);
                      if ((((((((((((((((SUB161(auVar84 >> 7,0) & 1) != 0 ||
                                       (SUB161(auVar84 >> 0xf,0) & 1) != 0) ||
                                      (SUB161(auVar84 >> 0x17,0) & 1) != 0) ||
                                     (SUB161(auVar84 >> 0x1f,0) & 1) != 0) ||
                                    (SUB161(auVar84 >> 0x27,0) & 1) != 0) ||
                                   (SUB161(auVar84 >> 0x2f,0) & 1) != 0) ||
                                  (SUB161(auVar84 >> 0x37,0) & 1) != 0) ||
                                 (SUB161(auVar84 >> 0x3f,0) & 1) != 0) ||
                                (SUB161(auVar84 >> 0x47,0) & 1) != 0) ||
                               (SUB161(auVar84 >> 0x4f,0) & 1) != 0) ||
                              (SUB161(auVar84 >> 0x57,0) & 1) != 0) ||
                             (SUB161(auVar84 >> 0x5f,0) & 1) != 0) ||
                            (SUB161(auVar84 >> 0x67,0) & 1) != 0) ||
                           (SUB161(auVar84 >> 0x6f,0) & 1) != 0) ||
                          (SUB161(auVar84 >> 0x77,0) & 1) != 0) || auVar84[0xf] < '\0') break;
                      uVar67 = uVar67 + lVar75 + 0x10;
                      lVar75 = lVar75 + 0x10;
                    }
                  }
LAB_1400fefc1:
                  (&stack0x00001024)[lVar58] = 1;
                    /* WARNING: Subroutine does not return */
                  *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fefd4;
                  pdb_142dc8150(&UNK_142e42b18);
                }
                *(undefined4 *)(&stack0x00000c78 + lVar58) = 0;
                lVar59 = (ulonglong)uVar57 - (uVar67 + 1);
                if (lVar59 != 0) {
                  puVar71 = (undefined8 *)(&stack0x00000ca0 + uVar67 * 0x18 + lVar58);
                  do {
                    lVar72 = puVar71[-1];
                    if (lVar72 != 0) {
                      pbVar16 = (byte *)*puVar71;
                      *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff1d9;
                      pub_1406abac0(pbVar16,lVar72 * 0x18,8);
                    }
                    puVar71 = puVar71 + 3;
                    lVar59 = lVar59 + -1;
                  } while (lVar59 != 0);
                }
              }
              (&stack0x00001027)[lVar58] = 0;
              *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff032;
              pdb_1400b1b00(*(undefined8 *)(&stack0x00000fe0 + lVar58));
              (&stack0x00001027)[lVar58] = 0;
              *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff046;
              pdb_140121c20(*(undefined8 *)(&stack0x00001018 + lVar58));
              (&stack0x00001027)[lVar58] = 0;
              *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff05a;
              pdb_140b260b0();
              lVar59 = *(longlong *)(&stack0x00000fa0 + lVar58);
              LOCK();
              _DAT_143cb2b10 = *(undefined8 *)(lVar59 + 0xb70);
              *(undefined8 *)(lVar59 + 0xb70) = 0;
              UNLOCK();
              LOCK();
              _DAT_143cb2b18 = *(undefined8 *)(lVar59 + 0xb78);
              *(undefined8 *)(lVar59 + 0xb78) = 0;
              UNLOCK();
              LOCK();
              uVar62 = *(undefined8 *)(lVar59 + 0xb80);
              *(undefined8 *)(lVar59 + 0xb80) = 0;
              UNLOCK();
              (&stack0x00001027)[lVar58] = 0;
              *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff0a5;
              _DAT_143cb2b20 = uVar62;
              pdb_140e579f0(*(undefined8 *)(&stack0x00000fe0 + lVar58));
              uVar57 = (uint)uVar62;
              if ((&stack0x00000c02)[lVar58] == '\0') goto LAB_1400ff4db;
              (&stack0x00001027)[lVar58] = 0;
              *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400ff0c3;
              uVar62 = pdb_140f3cb70((longlong)&lStackX_8 + lVar58);
              if (**(int **)(&stack0x00000fd8 + lVar58) != 1) goto LAB_1400ff4db;
              dVar85 = dVar85 / _DAT_142e423a0;
              dVar88 = (double)(int)uVar57 / _DAT_142e423a0;
              auVar101._8_4_ = (int)((ulonglong)uVar62 >> 0x20);
              auVar101._0_8_ = uVar62;
              auVar101._12_4_ = _UNK_142e42374;
              dVar90 = (double)CONCAT44(_DAT_142e42370,(int)uVar62) - _DAT_142e42380;
              dVar102 = auVar101._8_8_ - _UNK_142e42388;
              in_R11 = *(longlong *)(&stack0x00000fd8 + lVar58);
              uVar62 = *(undefined8 *)(in_R11 + 8);
              auVar89._8_4_ = (int)((ulonglong)uVar62 >> 0x20);
              auVar89._0_8_ = uVar62;
              auVar89._12_4_ = _UNK_142e42374;
              *(double *)(&DAT_143cb2b68 + (ulonglong)((uint)_DAT_143cb2b88 & 3) * 8) =
                   ((auVar89._8_8_ - _UNK_142e42388) +
                   ((double)CONCAT44(_DAT_142e42370,(int)uVar62) - _DAT_142e42380)) / _DAT_142e423a0
              ;
              lVar59 = _DAT_143cb2b60 + 1;
              *(double *)(&DAT_143cb2b40 + (ulonglong)((uint)_DAT_143cb2b60 & 3) * 8) =
                   dVar102 + dVar90 + dVar88 + dVar82 + dVar85;
              lVar72 = _DAT_143cb2b88 + 1;
              dVar82 = _DAT_142e423a8;
              if (lVar72 != 0) {
                dVar82 = _DAT_143cb2b68;
                if (_DAT_142e423a8 <= _DAT_143cb2b68) {
                  dVar82 = _DAT_142e423a8;
                }
                if (_DAT_143cb2b88 != 0) {
                  dVar85 = _DAT_143cb2b70;
                  if (dVar82 <= _DAT_143cb2b70) {
                    dVar85 = dVar82;
                  }
                  dVar82 = (double)(~-(ulonglong)NAN(dVar82) & (ulonglong)dVar85 |
                                   -(ulonglong)NAN(dVar82) & (ulonglong)_DAT_143cb2b70);
                  if (lVar72 != 2) {
                    dVar85 = _DAT_143cb2b78;
                    if (dVar82 <= _DAT_143cb2b78) {
                      dVar85 = dVar82;
                    }
                    dVar82 = (double)(~-(ulonglong)NAN(dVar82) & (ulonglong)dVar85 |
                                     -(ulonglong)NAN(dVar82) & (ulonglong)_DAT_143cb2b78);
                    if (lVar72 != 3) {
                      dVar85 = _DAT_143cb2b80;
                      if (dVar82 <= _DAT_143cb2b80) {
                        dVar85 = dVar82;
                      }
                      dVar82 = (double)(~-(ulonglong)NAN(dVar82) & (ulonglong)dVar85 |
                                       -(ulonglong)NAN(dVar82) & (ulonglong)_DAT_143cb2b80);
                    }
                  }
                }
              }
              dVar85 = _DAT_142e423b0;
              if (lVar59 != 0) {
                dVar85 = _DAT_143cb2b40;
                if (_DAT_143cb2b40 <= _DAT_142e423b0) {
                  dVar85 = _DAT_142e423b0;
                }
                if (_DAT_143cb2b60 != 0) {
                  dVar88 = _DAT_143cb2b48;
                  if (_DAT_143cb2b48 <= dVar85) {
                    dVar88 = dVar85;
                  }
                  dVar85 = (double)(~-(ulonglong)NAN(dVar85) & (ulonglong)dVar88 |
                                   -(ulonglong)NAN(dVar85) & (ulonglong)_DAT_143cb2b48);
                  if (lVar59 != 2) {
                    dVar88 = _DAT_143cb2b50;
                    if (_DAT_143cb2b50 <= dVar85) {
                      dVar88 = dVar85;
                    }
                    dVar85 = (double)(~-(ulonglong)NAN(dVar85) & (ulonglong)dVar88 |
                                     -(ulonglong)NAN(dVar85) & (ulonglong)_DAT_143cb2b50);
                    if (lVar59 != 3) {
                      dVar88 = _DAT_143cb2b58;
                      if (_DAT_143cb2b58 <= dVar85) {
                        dVar88 = dVar85;
                      }
                      dVar85 = (double)(~-(ulonglong)NAN(dVar85) & (ulonglong)dVar88 |
                                       -(ulonglong)NAN(dVar85) & (ulonglong)_DAT_143cb2b58);
                    }
                  }
                }
              }
              dVar88 = dVar82 - dVar85;
              if (dVar82 - dVar85 <= 0.0) {
                dVar88 = 0.0;
              }
              uVar65 = (uint)((ulonglong)dVar88 >> 0x34) & 0x7ff;
              cVar55 = (char)uVar65;
              _DAT_143cb2b60 = lVar59;
              _DAT_143cb2b88 = lVar72;
              if (0x3df < uVar65) {
                uVar67 = (ulonglong)dVar88 & 0xfffffffffffff | 0x10000000000000;
                if (uVar65 < 0x3ff) {
                  bVar56 = cVar55 + 0x2d;
                  uVar60 = uVar67 << (bVar56 & 0x3f);
                  uVar77 = uVar60;
                  uVar67 = 0L << (bVar56 & 0x3f) | uVar67 >> 0x40 - (bVar56 & 0x3f);
                  if ((bVar56 & 0x40) != 0) {
                    uVar77 = 0;
                    uVar67 = uVar60;
                  }
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uVar77;
                  uVar67 = SUB168(auVar17 * ZEXT816(1000000000),8) + uVar67 * 1000000000;
                  uVar57 = 0;
                  if ((int)uVar67 < 0) {
                    uVar57 = (byte)(((uVar67 & 0xffffffff) != 0x80000000 ||
                                    (SUB168(auVar17 * ZEXT816(1000000000),0) & 0xfffffffffffffe00)
                                    != 0) | (byte)(uVar67 >> 0x20)) & 1;
                  }
                  uVar57 = (uint)(uVar57 + (int)(uVar67 >> 0x20) == 1000000000);
                  goto LAB_1400ff4cb;
                }
                if (uVar65 < 0x433) {
                  auVar18._8_8_ = 0;
                  auVar18._0_8_ = (longlong)dVar88 << (cVar55 + 1U & 0x3f) & 0xfffffffffffff;
                  auVar18 = auVar18 * ZEXT816(1000000000);
                  uVar65 = auVar18._4_4_ >> 0x14;
                  uVar57 = 0;
                  if ((auVar18._0_8_ >> 0x33 & 1) != 0) {
                    uVar57 = (byte)((auVar18._0_8_ & 0xffffffffffe00) != 0x8000000000000 |
                                   (byte)uVar65) & 1;
                  }
                  uVar57 = (int)(uVar67 >> (0x33U - cVar55 & 0x3f)) +
                           (uint)(uVar57 + (uVar65 | auVar18._8_4_ << 0xc) == 1000000000);
                  goto LAB_1400ff4cb;
                }
                goto LAB_1400ff4b8;
              }
              uVar57 = 0;
              goto LAB_1400ff4cb;
            }
          }
          goto LAB_1400fefda;
        }
        uVar76 = (ushort)(uVar57 - 1) & (ushort)uVar57;
        uVar57 = CONCAT22((short)(uVar57 - 1 >> 0x10),uVar76);
      }
      auVar99[0] = -(auVar107[0] == -1);
      auVar99[1] = -(auVar107[1] == -1);
      auVar99[2] = -(auVar107[2] == -1);
      auVar99[3] = -(auVar107[3] == -1);
      auVar99[4] = -(auVar107[4] == -1);
      auVar99[5] = -(auVar107[5] == -1);
      auVar99[6] = -(auVar107[6] == -1);
      auVar99[7] = -(auVar107[7] == -1);
      auVar99[8] = -(auVar107[8] == -1);
      auVar99[9] = -(auVar107[9] == -1);
      auVar99[10] = -(auVar107[10] == -1);
      auVar99[0xb] = -(auVar107[0xb] == -1);
      auVar99[0xc] = -(auVar107[0xc] == -1);
      auVar99[0xd] = -(auVar107[0xd] == -1);
      auVar99[0xe] = -(auVar107[0xe] == -1);
      auVar99[0xf] = -(auVar107[0xf] == -1);
      if ((((((((((((((((SUB161(auVar99 >> 7,0) & 1) != 0 || (SUB161(auVar99 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar99 >> 0x17,0) & 1) != 0) || (SUB161(auVar99 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar99 >> 0x27,0) & 1) != 0) || (SUB161(auVar99 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar99 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar99 >> 0x3f,0) & 1) != 0) || (SUB161(auVar99 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar99 >> 0x4f,0) & 1) != 0) || (SUB161(auVar99 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar99 >> 0x5f,0) & 1) != 0) || (SUB161(auVar99 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar99 >> 0x6f,0) & 1) != 0) || (SUB161(auVar99 >> 0x77,0) & 1) != 0) ||
          auVar99[0xf] < '\0') break;
      uVar67 = uVar67 + lVar75 + 0x10;
      lVar75 = lVar75 + 0x10;
    } while( true );
  }
LAB_1400fefda:
  (&stack0x00001022)[lVar58] = 1;
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((longlong)&uStack_48 + lVar58) = 0x1400fefed;
  pdb_142dc8150(&UNK_142e42b00);
}

