// VA 0x142322920, PDB extent 15374 bytes
// toolbar::menu::load::ui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/load.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::load::ui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/load.rs
   Extent: 15374 */

void pdb_142322920(undefined8 param_1,ulonglong param_2,longlong *param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  byte bVar4;
  byte bVar5;
  ulonglong *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  ulonglong *puVar9;
  byte *arg0;
  code *pcVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  char cVar14;
  undefined1 uVar15;
  char cVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong *plVar21;
  undefined8 uVar22;
  ulonglong uVar23;
  longlong lVar24;
  byte *pbVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  ulonglong uVar34;
  undefined *puVar35;
  byte *pbVar36;
  undefined1 uVar37;
  undefined8 unaff_RDI;
  longlong *plVar38;
  char *pcVar39;
  undefined *puVar40;
  longlong *plVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  ushort uVar45;
  longlong lVar46;
  undefined *puVar47;
  byte bVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined1 auStackX_8 [8];
  undefined8 uStackX_10;
  undefined1 auStackX_18 [16];
  undefined8 uStack_48;
  
  uStack_48 = 0x142322936;
  lVar18 = pdb_142d7c6d0();
  lVar18 = -lVar18;
  *(undefined8 *)(&stack0x00002820 + lVar18) = unaff_XMM7_Qa;
  *(undefined8 *)(&stack0x00002828 + lVar18) = unaff_XMM7_Qb;
  *(undefined8 *)(&stack0x00002810 + lVar18) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x00002818 + lVar18) = unaff_XMM6_Qb;
  *(undefined8 *)(&stack0x00002808 + lVar18) = 0xfffffffffffffffe;
  *(ulonglong *)(&stack0x000026d0 + lVar18) = param_2;
  *(undefined8 *)(&stack0x000027e8 + lVar18) = param_1;
  lVar24 = *(longlong *)(&stack0x000028c8 + lVar18);
  *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232297b;
  plVar38 = param_3;
  cVar14 = pdb_140e94b40();
  if (cVar14 == '\0') {
    uVar22 = 0;
    cVar14 = '\0';
LAB_142322b21:
    *(undefined8 *)(&stack0x000026f8 + lVar18) = uVar22;
    *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
    puVar6 = (ulonglong *)*param_4;
    if ((uint)*puVar6 < 2) {
      uVar22 = *(undefined8 *)(&stack0x000028d8 + lVar18);
      plVar38 = *(longlong **)(&stack0x000028c0 + lVar18);
      puVar7 = *(undefined8 **)(&stack0x000028a8 + lVar18);
      if (SBORROW8(0,puVar6[6])) {
        *(longlong *)(&stack0x000027c8 + lVar18) = lVar24;
        *(longlong **)(&stack0x00002780 + lVar18) = param_3;
        uVar29 = *(undefined4 *)((longlong)puVar7 + 0x1c);
        puVar8 = (undefined4 *)puVar7[2];
        *(undefined4 *)(&stack0x000027e4 + lVar18) = uVar29;
        *(undefined4 **)(&stack0x000027b0 + lVar18) = puVar8;
        *puVar8 = uVar29;
        *(undefined8 *)(&stack0x000027f8 + lVar18) = *puVar7;
        *(undefined **)(&stack0x00000740 + lVar18) = &UNK_1434d9d63;
        *(undefined8 *)(&stack0x00000748 + lVar18) = 0xb;
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142322bb7;
        uVar23 = pdb_140bbbcb0(&stack0x00000740 + lVar18);
        uVar23 = uVar23 ^ 0xb1695320004fb443;
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142322bd7;
        uVar20 = uVar23;
        lVar24 = pdb_14072c2d0(*(undefined8 *)(&stack0x000027f8 + lVar18));
        *(undefined1 *)(lVar24 + 0x5e) = 0;
        *(undefined1 *)(lVar24 + 0xcb) = 1;
        if ((uVar20 & 1) == 0) {
          lVar24 = (*(longlong **)(&stack0x000027f8 + lVar18))[2];
          if (lVar24 == **(longlong **)(&stack0x000027f8 + lVar18)) {
            *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142322c04;
            pdb_142d7f080(*(undefined8 *)(&stack0x000027f8 + lVar18));
          }
          lVar19 = *(longlong *)(&stack0x000027f8 + lVar18);
          lVar44 = *(longlong *)(lVar19 + 8);
          *(undefined4 *)(lVar44 + lVar24 * 0x38) = 0;
          *(ulonglong *)(lVar44 + 0x30 + lVar24 * 0x38) = uVar23;
          *(longlong *)(lVar19 + 0x10) = lVar24 + 1;
        }
        *(undefined8 *)(&stack0x000024d8 + lVar18) = *(undefined8 *)(&stack0x000027f8 + lVar18);
        *(ulonglong *)(&stack0x000024e0 + lVar18) = uVar23;
        *(undefined8 *)(&stack0x000024e8 + lVar18) = 0;
        lVar24 = *plVar38;
        (&stack0x000027a8)[lVar18] = 1;
        if ((*(char *)((longlong)puVar6 + 0x79) == '\0') &&
           (*(char *)((longlong)puVar6 + 0x8a) == '\0')) {
          (&stack0x000027a8)[lVar18] = (char)puVar6[2];
        }
        lVar19 = *(longlong *)(lVar24 + 8);
        *(longlong *)(&stack0x000026d8 + lVar18) = lVar24;
        uVar20 = *(ulonglong *)(lVar24 + 0x10);
        uVar23 = puVar6[0xd];
        *(undefined1 *)(puVar6 + 0xd) = 0;
        if (((char)uVar23 == '\x01') && (uVar20 != 0)) {
          plVar41 = (longlong *)0x1;
          lVar24 = 0;
          plVar38 = (longlong *)0x1;
          do {
            if (*(longlong *)(lVar19 + 8 + lVar24) == *(longlong *)((longlong)puVar6 + 0x71) &&
                *(longlong *)(lVar19 + lVar24) == *(longlong *)((longlong)puVar6 + 0x69))
            goto LAB_142322d8f;
            plVar38 = (longlong *)((longlong)plVar38 + 1);
            lVar24 = lVar24 + 0x1c;
          } while (uVar20 * 0x1c != lVar24);
          plVar41 = (longlong *)0x0;
        }
        else {
          plVar41 = (longlong *)0x0;
        }
LAB_142322d8f:
        plVar21 = (longlong *)puVar6[0xc];
        LOCK();
        lVar24 = *plVar21;
        *plVar21 = *plVar21 + 1;
        UNLOCK();
        if (*plVar21 != 0 && SCARRY8(lVar24,1) == *plVar21 < 0) {
          *(undefined **)(&stack0xffffffffffffffe0 + lVar18) = &UNK_1434d9d6e;
          *(undefined8 *)(&stack0xffffffffffffffe8 + lVar18) = 6;
          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142322dc9;
          pdb_14116b120(&stack0x00000740 + lVar18,&stack0x000024d8 + lVar18,uVar20 + 1);
          lVar24 = *(longlong *)(&stack0x00000740 + lVar18);
          if (*(longlong *)(lVar24 + 0x1c8) == 0) {
LAB_1423230b6:
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423230c2;
            pdb_142dc8150(&UNK_142fa6b48);
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142322df2;
          uVar23 = pdb_1400af0a0(lVar24 + 0x1d0,&stack0x00000748 + lVar18);
          lVar44 = *(longlong *)(lVar24 + 0x1b0);
          bVar48 = (byte)(uVar23 >> 0x39);
          auVar49 = ZEXT216(CONCAT11(bVar48,bVar48));
          auVar49 = pshuflw(auVar49,auVar49,0);
          lVar43 = 0;
          do {
            uVar23 = uVar23 & *(ulonglong *)(lVar24 + 0x1b8);
            auVar50 = *(undefined1 (*) [16])(lVar44 + uVar23);
            auVar60[0] = -(auVar50[0] == auVar49[0]);
            auVar60[1] = -(auVar50[1] == auVar49[1]);
            auVar60[2] = -(auVar50[2] == auVar49[2]);
            auVar60[3] = -(auVar50[3] == auVar49[3]);
            auVar60[4] = -(auVar50[4] == auVar49[4]);
            auVar60[5] = -(auVar50[5] == auVar49[5]);
            auVar60[6] = -(auVar50[6] == auVar49[6]);
            auVar60[7] = -(auVar50[7] == auVar49[7]);
            auVar60[8] = -(auVar50[8] == auVar49[0]);
            auVar60[9] = -(auVar50[9] == auVar49[1]);
            auVar60[10] = -(auVar50[10] == auVar49[2]);
            auVar60[0xb] = -(auVar50[0xb] == auVar49[3]);
            auVar60[0xc] = -(auVar50[0xc] == auVar49[4]);
            auVar60[0xd] = -(auVar50[0xd] == auVar49[5]);
            auVar60[0xe] = -(auVar50[0xe] == auVar49[6]);
            auVar60[0xf] = -(auVar50[0xf] == auVar49[7]);
            uVar45 = (ushort)(SUB161(auVar60 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar60[0xf] >> 7) << 0xf;
            uVar17 = (uint)uVar45;
            while (uVar45 != 0) {
              uVar11 = 0;
              for (uVar12 = uVar17; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
                uVar11 = uVar11 + 1;
              }
              lVar46 = (uVar11 + uVar23 & *(ulonglong *)(lVar24 + 0x1b8)) * -0xd8;
              if (*(longlong *)(&stack0x00000748 + lVar18) == *(longlong *)(lVar44 + -0xd8 + lVar46)
                 ) {
                if ((&stack0x000027a8)[lVar18] == '\0') {
                  pbVar25 = (byte *)(lVar44 + lVar46 + -5);
                  *pbVar25 = *pbVar25 | 4;
                }
                *(undefined8 *)(&stack0x00001d30 + lVar18) =
                     *(undefined8 *)(&stack0x00000750 + lVar18);
                *(undefined8 *)(&stack0x00001d20 + lVar18) =
                     *(undefined8 *)(&stack0x00000740 + lVar18);
                *(undefined8 *)(&stack0x00001d28 + lVar18) =
                     *(undefined8 *)(&stack0x00000748 + lVar18);
                *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142322ec6;
                lVar24 = pdb_14116e9c0(&stack0x00001d20 + lVar18);
                if (*(char *)(lVar24 + 0x75) == '\0') {
                  *(float *)(lVar24 + 0x5c) =
                       *(float *)(lVar24 + 0x54) / *(float *)(lVar24 + 0x50) + _DAT_142e36f28;
                }
                *(undefined8 *)(&stack0x00000750 + lVar18) =
                     *(undefined8 *)(&stack0x00001d30 + lVar18);
                *(undefined8 *)(&stack0x00000740 + lVar18) =
                     *(undefined8 *)(&stack0x00001d20 + lVar18);
                *(undefined8 *)(&stack0x00000748 + lVar18) =
                     *(undefined8 *)(&stack0x00001d28 + lVar18);
                *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142322f19;
                pdb_1422ad430(&stack0x00001d20 + lVar18,&stack0x00000740 + lVar18,plVar41,plVar38);
                *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142322f26;
                lVar24 = pdb_14116e9c0(&stack0x00001d20 + lVar18);
                *(undefined8 *)(lVar24 + 0x30) = 0x3e851eb800000001;
                *(undefined8 *)(&stack0x00000750 + lVar18) =
                     *(undefined8 *)(&stack0x00001d30 + lVar18);
                *(undefined8 *)(&stack0x00000740 + lVar18) =
                     *(undefined8 *)(&stack0x00001d20 + lVar18);
                *(undefined8 *)(&stack0x00000748 + lVar18) =
                     *(undefined8 *)(&stack0x00001d28 + lVar18);
                puVar1 = &stack0x00000740 + lVar18;
                *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142322f60;
                lVar24 = pdb_14116e9c0(puVar1);
                *(undefined4 *)(lVar24 + 0x70) = 0x41200000;
                *(undefined8 *)(&stack0x00001d30 + lVar18) =
                     *(undefined8 *)(&stack0x00000750 + lVar18);
                *(undefined8 *)(&stack0x00001d20 + lVar18) =
                     *(undefined8 *)(&stack0x00000740 + lVar18);
                *(undefined8 *)(&stack0x00001d28 + lVar18) =
                     *(undefined8 *)(&stack0x00000748 + lVar18);
                *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142322f90;
                lVar24 = pdb_14116e9c0(&stack0x00001d20 + lVar18);
                *(undefined1 *)(lVar24 + 0x76) = (&stack0x000027a8)[lVar18];
                *(undefined8 *)(&stack0x000026f0 + lVar18) =
                     *(undefined8 *)(&stack0x00001d30 + lVar18);
                *(undefined8 *)(&stack0x000026e0 + lVar18) =
                     *(undefined8 *)(&stack0x00001d20 + lVar18);
                *(undefined8 *)(&stack0x000026e8 + lVar18) =
                     *(undefined8 *)(&stack0x00001d28 + lVar18);
                *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142322fc5;
                lVar24 = pdb_1411724f0(&stack0x000026e0 + lVar18);
                if ((*(char *)((longlong)puVar6 + 0x79) != '\x01') &&
                   (*(char *)((longlong)puVar6 + 0x8a) == '\0')) {
                  (&stack0x000027d8)[lVar18] = *(undefined1 *)(lVar24 + 0x77);
                  *(ulonglong *)(&stack0x00002788 + lVar18) = *puVar6;
                  *(ulonglong *)(&stack0x000027a0 + lVar18) = puVar6[1];
                  *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232300a;
                  pbVar25 = (byte *)pdb_1411724f0(&stack0x000026e0 + lVar18);
                  uVar23 = *(ulonglong *)(pbVar25 + 8);
                  *puVar6 = (ulonglong)(uVar23 <= uVar20 & *pbVar25);
                  puVar6[1] = uVar23;
                  *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232302d;
                  lVar24 = pdb_1411724f0(&stack0x000026e0 + lVar18);
                  uVar23 = *(ulonglong *)(lVar24 + 0x18);
                  if ((uVar23 <= uVar20 & *(byte *)(lVar24 + 0x10)) == 1) {
                    if (uVar23 == 0) {
                      puVar2 = *(undefined8 **)(&stack0x000028a0 + lVar18);
                      *(undefined4 *)puVar2[2] = *(undefined4 *)((longlong)puVar2 + 0x1c);
                      uVar22 = *puVar2;
                      *(undefined8 *)(&stack0x00000740 + lVar18) = 5;
                      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423230f2;
                      pdb_140a003a0(uVar22,&stack0x00000740 + lVar18);
                      plVar41 = (longlong *)&UNK_1434d9d78;
                      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323108;
                      pdb_141b75410(*(undefined8 *)(&stack0x000028d8 + lVar18),7,&UNK_1434d9d78);
                    }
                    else {
                      if ((uVar23 - 1 < 3) || (*_DAT_143ca4500 == '\0')) {
                        pcVar39 = (char *)(uVar23 + (uVar23 - 1) * 0x1b + -1 + lVar19);
                        uVar22 = **(undefined8 **)(&stack0x00002780 + lVar18);
                        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323083;
                        uVar15 = pdb_140b7e9a0(pcVar39,uVar22);
                        (&stack0x00000740)[lVar18] = uVar15;
                        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323096;
                        cVar14 = pdb_140b7e570(&stack0x00000740 + lVar18);
                        if (cVar14 == '\0') {
                          lVar24 = **(longlong **)(&stack0x000027e8 + lVar18);
                          auVar49[0] = -(*(char *)(lVar24 + 0xa0) == *pcVar39);
                          auVar49[1] = -(*(char *)(lVar24 + 0xa1) == pcVar39[1]);
                          auVar49[2] = -(*(char *)(lVar24 + 0xa2) == pcVar39[2]);
                          auVar49[3] = -(*(char *)(lVar24 + 0xa3) == pcVar39[3]);
                          auVar49[4] = -(*(char *)(lVar24 + 0xa4) == pcVar39[4]);
                          auVar49[5] = -(*(char *)(lVar24 + 0xa5) == pcVar39[5]);
                          auVar49[6] = -(*(char *)(lVar24 + 0xa6) == pcVar39[6]);
                          auVar49[7] = -(*(char *)(lVar24 + 0xa7) == pcVar39[7]);
                          auVar49[8] = -(*(char *)(lVar24 + 0xa8) == pcVar39[8]);
                          auVar49[9] = -(*(char *)(lVar24 + 0xa9) == pcVar39[9]);
                          auVar49[10] = -(*(char *)(lVar24 + 0xaa) == pcVar39[10]);
                          auVar49[0xb] = -(*(char *)(lVar24 + 0xab) == pcVar39[0xb]);
                          auVar49[0xc] = -(*(char *)(lVar24 + 0xac) == pcVar39[0xc]);
                          auVar49[0xd] = -(*(char *)(lVar24 + 0xad) == pcVar39[0xd]);
                          auVar49[0xe] = -(*(char *)(lVar24 + 0xae) == pcVar39[0xe]);
                          auVar49[0xf] = -(*(char *)(lVar24 + 0xaf) == pcVar39[0xf]);
                          if ((ushort)((ushort)(SUB161(auVar49 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(auVar49[0xf] >> 7) << 0xf) != 0xffff) {
                            uVar22 = *(undefined8 *)(pcVar39 + 8);
                            *(undefined8 *)(&stack0x00002490 + lVar18) = *(undefined8 *)pcVar39;
                            *(undefined8 *)(&stack0x00002498 + lVar18) = uVar22;
                            uVar22 = *(undefined8 *)(pcVar39 + 8);
                            *(undefined8 *)(&stack0x00001d20 + lVar18) = *(undefined8 *)pcVar39;
                            *(undefined8 *)(&stack0x00001d28 + lVar18) = uVar22;
                            *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323160;
                            pdb_142322590(&stack0x00000740 + lVar18,&stack0x00001d20 + lVar18);
                            *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323174;
                            pdb_142322520(&stack0x00001d20 + lVar18,&stack0x00000740 + lVar18);
                            *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323188;
                            pdb_140a923d0(&stack0x00000740 + lVar18,&stack0x00001d20 + lVar18);
                            *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232319c;
                            pdb_140c5d220(&stack0x00002648 + lVar18,&stack0x00000740 + lVar18);
                            *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423231a9;
                            pdb_1404cc180(&stack0x00001d20 + lVar18);
                            *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423231b9;
                            pdb_140a937d0(&stack0x00000740 + lVar18,pcVar39);
                            *(undefined8 *)(&stack0xffffffffffffffe0 + lVar18) = 0xc;
                            *(undefined8 *)(&stack0x000027d0 + lVar18) =
                                 *(undefined8 *)(&stack0x00000748 + lVar18);
                            *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423231eb;
                            pdb_140f3e9e0(&stack0x00002750 + lVar18,
                                          *(undefined8 *)(&stack0x00000748 + lVar18),
                                          *(undefined8 *)(&stack0x00000750 + lVar18),&UNK_1434d9d90)
                            ;
                            plVar38 = *(longlong **)(&stack0x000027c8 + lVar18);
                            if (*(ulonglong *)(&stack0x00000740 + lVar18) != 0) {
                              *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323211;
                              pub_1406abac0(*(byte **)(&stack0x000027d0 + lVar18),
                                            *(ulonglong *)(&stack0x00000740 + lVar18),1);
                            }
                            uVar22 = *(undefined8 *)(&stack0x00002758 + lVar18);
                            (&stack0x00002806)[lVar18] = 1;
                            *(undefined8 *)(&stack0x000027d0 + lVar18) = uVar22;
                            *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323240;
                            pdb_141920a00(&stack0x00002570 + lVar18,uVar22,
                                          *(undefined8 *)(&stack0x00002760 + lVar18),
                                          &stack0x00002648 + lVar18);
                            uVar29 = (undefined4)uVar22;
                            if (SBORROW8(0,*(longlong *)(&stack0x00002570 + lVar18))) {
                              *(undefined8 *)(&stack0x00002710 + lVar18) =
                                   *(undefined8 *)(&stack0x00002578 + lVar18);
                              *(undefined8 *)(&stack0x000027b8 + lVar18) =
                                   *(undefined8 *)(&stack0x00002750 + lVar18);
                              *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323271;
                              uVar22 = pdb_140f3c9d0();
                              plVar41 = (longlong *)0x2;
                              *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323283;
                              uVar22 = pdb_140f5a1d0(uVar22);
                              *(undefined8 *)(&stack0x00002790 + lVar18) = uVar22;
                              *(undefined4 *)(&stack0x000027c0 + lVar18) = uVar29;
                              *(undefined1 **)(&stack0x00001d20 + lVar18) =
                                   &stack0x00002710 + lVar18;
                              *(code **)(&stack0x00001d28 + lVar18) = pdb_140f36c20;
                              *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423232bf;
                              pdb_142321f50(&stack0x00000740 + lVar18,&stack0x00001d20 + lVar18);
                              *(undefined8 *)(&stack0x00001d20 + lVar18) =
                                   *(undefined8 *)(&stack0x00000740 + lVar18);
                              *(undefined8 *)(&stack0x00001d28 + lVar18) =
                                   *(undefined8 *)(&stack0x00000748 + lVar18);
                              *(undefined8 *)(&stack0x00001d30 + lVar18) =
                                   *(undefined8 *)(&stack0x00000750 + lVar18);
                              if (!SBORROW8(0,*plVar38)) {
                                *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423232ef;
                                pdb_1402eb660(*(undefined8 *)(&stack0x000027c8 + lVar18));
                              }
                              puVar2 = *(undefined8 **)(&stack0x000027c8 + lVar18);
                              *puVar2 = *(undefined8 *)(&stack0x000027b8 + lVar18);
                              puVar2[1] = *(undefined8 *)(&stack0x000027d0 + lVar18);
                              uVar22 = *(undefined8 *)(&stack0x00002768 + lVar18);
                              puVar2[2] = *(undefined8 *)(&stack0x00002760 + lVar18);
                              puVar2[3] = uVar22;
                              uVar22 = *(undefined8 *)(&stack0x00001d28 + lVar18);
                              puVar2[4] = *(undefined8 *)(&stack0x00001d20 + lVar18);
                              puVar2[5] = uVar22;
                              puVar2[6] = *(undefined8 *)(&stack0x00001d30 + lVar18);
                              puVar2[7] = *(undefined8 *)(&stack0x00002790 + lVar18);
                              *(undefined4 *)(puVar2 + 8) =
                                   *(undefined4 *)(&stack0x000027c0 + lVar18);
                              (&stack0x00002806)[lVar18] = 0;
                              *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323359;
                              pdb_140f36c40(&stack0x00002710 + lVar18);
                              goto LAB_1423234cf;
                            }
                            puVar2 = *(undefined8 **)(&stack0x000028b0 + lVar18);
                            *(undefined4 *)puVar2[2] = *(undefined4 *)((longlong)puVar2 + 0x1c);
                            *(undefined1 *)*puVar2 = 2;
                            *(undefined8 *)(&stack0x00001d60 + lVar18) =
                                 *(undefined8 *)(&stack0x00002590 + lVar18);
                            *(undefined8 *)(&stack0x00001d68 + lVar18) =
                                 *(undefined8 *)(&stack0x00002598 + lVar18);
                            *(undefined8 *)(&stack0x00001d50 + lVar18) =
                                 *(undefined8 *)(&stack0x00002580 + lVar18);
                            *(undefined8 *)(&stack0x00001d58 + lVar18) =
                                 *(undefined8 *)(&stack0x00002588 + lVar18);
                            *(undefined8 *)(&stack0x00001d40 + lVar18) =
                                 *(undefined8 *)(&stack0x00002570 + lVar18);
                            *(undefined8 *)(&stack0x00001d48 + lVar18) =
                                 *(undefined8 *)(&stack0x00002578 + lVar18);
                            *(undefined8 *)(&stack0x00001d70 + lVar18) =
                                 *(undefined8 *)(&stack0x00002490 + lVar18);
                            *(undefined8 *)(&stack0x00001d78 + lVar18) =
                                 *(undefined8 *)(&stack0x00002498 + lVar18);
                            *(undefined8 *)(&stack0x00000758 + lVar18) = 0x8000000000000000;
                            *(undefined8 *)(&stack0x00000740 + lVar18) = 0;
                            *(undefined8 *)(&stack0x00000748 + lVar18) = 8;
                            *(undefined8 *)(&stack0x00000750 + lVar18) = 0;
                            (&stack0x00000820)[lVar18] = 0;
                            *(undefined8 *)(&stack0x00000818 + lVar18) = 0;
                            *(undefined8 *)(&stack0x00001d38 + lVar18) = 0x8000000000000003;
                            *(undefined8 *)(&stack0x00001d20 + lVar18) =
                                 *(undefined8 *)(&stack0x00000740 + lVar18);
                            *(undefined8 *)(&stack0x00001d28 + lVar18) =
                                 *(undefined8 *)(&stack0x00000748 + lVar18);
                            *(undefined8 *)(&stack0x00001d30 + lVar18) = 0;
                            (&stack0x00001e00)[lVar18] = 0;
                            *(undefined8 *)(&stack0x00001df8 + lVar18) = 0;
                            *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232345b;
                            pdb_1411b0760(*(undefined8 *)(&stack0x000028b8 + lVar18),
                                          &stack0x00001d20 + lVar18,&UNK_1434d9da0);
                            (&stack0x00002806)[lVar18] = 1;
                            *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232346f;
                            pdb_141185060(&stack0x00000758 + lVar18);
                            if (*(ulonglong *)(&stack0x00002750 + lVar18) != 0) {
                              *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232348e;
                              pub_1406abac0(*(byte **)(&stack0x000027d0 + lVar18),
                                            *(ulonglong *)(&stack0x00002750 + lVar18),1);
                            }
                          }
                          puVar2 = *(undefined8 **)(&stack0x000028a0 + lVar18);
                          *(undefined4 *)puVar2[2] = *(undefined4 *)((longlong)puVar2 + 0x1c);
                          uVar22 = *puVar2;
                          *(undefined8 *)(&stack0x00000740 + lVar18) = 2;
                          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423234b8;
                          pdb_140a003a0(uVar22,&stack0x00000740 + lVar18);
                          plVar41 = (longlong *)&UNK_1434d9dc0;
                          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423234ce;
                          pdb_141b75410(*(undefined8 *)(&stack0x000028d8 + lVar18),8,&UNK_1434d9dc0)
                          ;
                          goto LAB_1423234cf;
                        }
                      }
                      plVar41 = (longlong *)&UNK_1434d9dd8;
                      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423230b0;
                      pdb_141b75410(*(undefined8 *)(&stack0x000028d8 + lVar18),0xe,&UNK_1434d9dd8);
                    }
                  }
LAB_1423234cf:
                  *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423234db;
                  lVar24 = pdb_1411724f0(&stack0x000026e0 + lVar18);
                  fVar3 = *(float *)(lVar24 + 0x48);
                  uVar29 = *(undefined4 *)(lVar24 + 0x4c);
                  *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423234f2;
                  pbVar25 = (byte *)pdb_1411724f0(&stack0x000026e0 + lVar18);
                  uVar23 = *(longlong *)(pbVar25 + 8) - 1;
                  if ((uVar23 < uVar20 & *pbVar25) == 1) {
                    puVar2 = (undefined8 *)(lVar19 + uVar23 * 0x1c);
                    uVar22 = puVar2[1];
                    *(undefined8 *)(&stack0x00002570 + lVar18) = *puVar2;
                    *(undefined8 *)(&stack0x00002578 + lVar18) = uVar22;
                    uVar22 = **(undefined8 **)(&stack0x00002780 + lVar18);
                    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323538;
                    uVar15 = pdb_140b7e9a0(&stack0x00002570 + lVar18,uVar22);
                    pcVar39 = _DAT_143ca4500;
                    (&stack0x00002648)[lVar18] = uVar15;
                    if ((uVar23 < 3) || (*_DAT_143ca4500 == '\0')) {
                      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323630;
                      cVar14 = pdb_140901380(&stack0x00002648 + lVar18);
                      if (cVar14 == '\0') {
                        **(undefined4 **)(&stack0x000027b0 + lVar18) =
                             *(undefined4 *)(&stack0x000027e4 + lVar18);
                        *(undefined8 *)(&stack0x00000744 + lVar18) = _DAT_1434d9b00;
                        *(undefined4 *)(&stack0x00000740 + lVar18) = 1;
                        *(undefined1 **)(&stack0xfffffffffffffff0 + lVar18) = puVar1;
                        *(undefined4 *)(&stack0xffffffffffffffe8 + lVar18) = uVar29;
                        *(float *)(&stack0xffffffffffffffe0 + lVar18) = _DAT_142e3c654 + fVar3;
                        auStackX_8[lVar18] = 0;
                        *(undefined4 *)(auStackX_18 + lVar18 + -0x18) = 0xbf800000;
                        *(undefined4 *)(&stack0xfffffffffffffff8 + lVar18) = 0xbf800000;
                        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423236b4;
                        pdb_14116db80(&stack0x00001d20 + lVar18,
                                      *(undefined8 *)(&stack0x000027f8 + lVar18),&UNK_1434d9df0,0xc)
                        ;
                        *(undefined8 *)(&stack0xffffffffffffffe0 + lVar18) = 0;
                        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423236de;
                        pdb_141174160(&stack0x00000740 + lVar18,&stack0x00001d20 + lVar18,
                                      &UNK_1434d9cff,0x18);
                        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423236f8;
                        pdb_141190f40(&stack0x00000740 + lVar18,&UNK_1434d9d17,4);
                      }
                    }
                    else {
                      **(undefined4 **)(&stack0x000027b0 + lVar18) =
                           *(undefined4 *)(&stack0x000027e4 + lVar18);
                      *(undefined8 *)(&stack0x00000744 + lVar18) = _DAT_1434d9b00;
                      *(undefined4 *)(&stack0x00000740 + lVar18) = 1;
                      *(undefined1 **)(&stack0xfffffffffffffff0 + lVar18) = puVar1;
                      *(undefined4 *)(&stack0xffffffffffffffe8 + lVar18) = uVar29;
                      *(float *)(&stack0xffffffffffffffe0 + lVar18) = _DAT_142e3c654 + fVar3;
                      auStackX_8[lVar18] = 0;
                      *(undefined4 *)(auStackX_18 + lVar18 + -0x18) = 0xbf800000;
                      *(undefined4 *)(&stack0xfffffffffffffff8 + lVar18) = 0xbf800000;
                      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423235d7;
                      pdb_14116db80(&stack0x00001d20 + lVar18,
                                    *(undefined8 *)(&stack0x000027f8 + lVar18),&UNK_1434d9dfc,9);
                      *(undefined8 *)(&stack0xffffffffffffffe0 + lVar18) = 0;
                      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323601;
                      pdb_141174160(&stack0x00000740 + lVar18,&stack0x00001d20 + lVar18,
                                    &UNK_1434d9cff,0x18);
                      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232361b;
                      pdb_14118c9c0(&stack0x00000740 + lVar18,&UNK_1434d9d17,4);
                    }
                    if (*pcVar39 == '\0' && (&stack0x000027a8)[lVar18] == '\0') {
                      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323714;
                      cVar14 = pdb_140b7e570(&stack0x00002648 + lVar18);
                      if (cVar14 == '\0') {
                        cVar14 = *(char *)**(undefined8 **)(&stack0x000028d0 + lVar18);
                        lVar24 = **(longlong **)(&stack0x000027e8 + lVar18);
                        auVar50[0] = -(*(char *)(lVar24 + 0xa0) == (&stack0x00002570)[lVar18]);
                        auVar50[1] = -(*(char *)(lVar24 + 0xa1) == (&stack0x00002571)[lVar18]);
                        auVar50[2] = -(*(char *)(lVar24 + 0xa2) == (&stack0x00002572)[lVar18]);
                        auVar50[3] = -(*(char *)(lVar24 + 0xa3) == (&stack0x00002573)[lVar18]);
                        auVar50[4] = -(*(char *)(lVar24 + 0xa4) == (&stack0x00002574)[lVar18]);
                        auVar50[5] = -(*(char *)(lVar24 + 0xa5) == (&stack0x00002575)[lVar18]);
                        auVar50[6] = -(*(char *)(lVar24 + 0xa6) == (&stack0x00002576)[lVar18]);
                        auVar50[7] = -(*(char *)(lVar24 + 0xa7) == (&stack0x00002577)[lVar18]);
                        auVar50[8] = -(*(char *)(lVar24 + 0xa8) == (&stack0x00002578)[lVar18]);
                        auVar50[9] = -(*(char *)(lVar24 + 0xa9) == (&stack0x00002579)[lVar18]);
                        auVar50[10] = -(*(char *)(lVar24 + 0xaa) == (&stack0x0000257a)[lVar18]);
                        auVar50[0xb] = -(*(char *)(lVar24 + 0xab) == (&stack0x0000257b)[lVar18]);
                        auVar50[0xc] = -(*(char *)(lVar24 + 0xac) == (&stack0x0000257c)[lVar18]);
                        auVar50[0xd] = -(*(char *)(lVar24 + 0xad) == (&stack0x0000257d)[lVar18]);
                        auVar50[0xe] = -(*(char *)(lVar24 + 0xae) == (&stack0x0000257e)[lVar18]);
                        auVar50[0xf] = -(*(char *)(lVar24 + 0xaf) == (&stack0x0000257f)[lVar18]);
                        auStackX_18[lVar18 + -0x18] =
                             (ushort)((ushort)(SUB161(auVar50 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(auVar50[0xf] >> 7) << 0xf) != 0xffff;
                        *(undefined8 *)((longlong)&uStackX_10 + lVar18) =
                             *(undefined8 *)(&stack0x000028e8 + lVar18);
                        (&stack0xfffffffffffffff8)[lVar18] = cVar14 == '\x02';
                        auStackX_8[lVar18] = (&stack0x000027d8)[lVar18];
                        *(ulonglong **)(&stack0xfffffffffffffff0 + lVar18) = puVar6;
                        *(ulonglong *)(&stack0xffffffffffffffe8 + lVar18) = uVar20;
                        *(longlong *)(&stack0xffffffffffffffe0 + lVar18) = lVar19;
                        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232378e;
                        pdb_1423226b0(puVar7);
                      }
                    }
                    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423237a5;
                    pdb_140a937d0(&stack0x00000740 + lVar18,&stack0x00002570 + lVar18);
                    plVar41 = *(longlong **)(&stack0x00000750 + lVar18);
                    *(undefined8 *)(&stack0xffffffffffffffe0 + lVar18) = 0xc;
                    *(undefined8 *)(&stack0x000027d8 + lVar18) =
                         *(undefined8 *)(&stack0x00000748 + lVar18);
                    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423237d7;
                    pdb_140f3e9e0(&stack0x00001d20 + lVar18,
                                  *(undefined8 *)(&stack0x00000748 + lVar18),plVar41,&UNK_1434d9d90)
                    ;
                    plVar38 = *(longlong **)(&stack0x000027c8 + lVar18);
                    if (*(ulonglong *)(&stack0x00000740 + lVar18) != 0) {
                      plVar41 = (longlong *)0x1;
                      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423237fd;
                      pub_1406abac0(*(byte **)(&stack0x000027d8 + lVar18),
                                    *(ulonglong *)(&stack0x00000740 + lVar18),1);
                    }
                    if (!SBORROW8(0,*plVar38)) {
                      lVar24 = plVar38[1];
                      lVar19 = plVar38[2];
                      plVar41 = *(longlong **)(&stack0x00001d28 + lVar18);
                      *(longlong **)(&stack0x000027d8 + lVar18) = plVar41;
                      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232382a;
                      cVar14 = pdb_142321fe0(lVar24,lVar19,plVar41,
                                             *(undefined8 *)(&stack0x00001d30 + lVar18));
                      uVar17 = (uint)lVar19;
                      if (cVar14 != '\0') {
                        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323838;
                        uVar20 = pdb_140f3c9d0();
                        plVar41 = *(longlong **)(&stack0x000027c8 + lVar18);
                        bVar13 = uVar20 < (ulonglong)plVar41[7];
                        if (plVar41[7] == uVar20) {
                          bVar13 = uVar17 < *(uint *)(plVar41 + 8);
                        }
                        if (bVar13) {
                          **(undefined4 **)(&stack0x000027b0 + lVar18) =
                               *(undefined4 *)(&stack0x000027e4 + lVar18);
                          *(undefined4 *)(&stack0x00000740 + lVar18) = 0;
                          *(undefined1 **)(&stack0xfffffffffffffff0 + lVar18) =
                               &stack0x00000740 + lVar18;
                          *(undefined4 *)(&stack0xffffffffffffffe8 + lVar18) = uVar29;
                          *(float *)(&stack0xffffffffffffffe0 + lVar18) = fVar3;
                          auStackX_8[lVar18] = 0;
                          *(undefined4 *)(auStackX_18 + lVar18 + -0x18) = 0;
                          *(undefined4 *)(&stack0xfffffffffffffff8 + lVar18) = 0;
                          uVar22 = *(undefined8 *)(&stack0x000027f8 + lVar18);
                          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423238bc;
                          pdb_14116db80(&stack0x000024c0 + lVar18,uVar22,&UNK_1434d9e05,0xd);
                          uVar17 = (uint)uVar22;
                          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423238c9;
                          cVar14 = pdb_14072ce40(&stack0x000024c0 + lVar18);
                          lVar24 = *(longlong *)(&stack0x000027c8 + lVar18);
                          if (cVar14 != '\0') {
                            uVar20 = *(ulonglong *)(lVar24 + 0x38);
                            uVar11 = *(uint *)(lVar24 + 0x40);
                            *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423238e1;
                            uVar22 = pdb_140f3c9d0();
                            *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423238f3;
                            uVar23 = pdb_140f5a1d0(uVar22);
                            bVar13 = uVar17 < uVar11;
                            if (uVar23 != uVar20) {
                              bVar13 = uVar23 < uVar20;
                            }
                            if (bVar13) {
                              uVar23 = uVar20;
                              uVar17 = uVar11;
                            }
                            lVar24 = *(longlong *)(&stack0x000027c8 + lVar18);
                            *(ulonglong *)(lVar24 + 0x38) = uVar23;
                            *(uint *)(lVar24 + 0x40) = uVar17;
                          }
                          uVar22 = *(undefined8 *)(lVar24 + 0x28);
                          plVar41 = *(longlong **)(lVar24 + 0x30);
                          *(undefined8 *)(&stack0x00000750 + lVar18) =
                               *(undefined8 *)(&stack0x000024d0 + lVar18);
                          *(undefined8 *)(&stack0x00000740 + lVar18) =
                               *(undefined8 *)(&stack0x000024c0 + lVar18);
                          *(undefined8 *)(&stack0x00000748 + lVar18) =
                               *(undefined8 *)(&stack0x000024c8 + lVar18);
                          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323950;
                          pdb_1423228b0(&stack0x00000740 + lVar18,uVar22,plVar41);
                        }
                        else {
                          if (!SBORROW8(0,*plVar41)) {
                            *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323966;
                            pdb_1402eb660(*(undefined8 *)(&stack0x000027c8 + lVar18));
                          }
                          **(undefined8 **)(&stack0x000027c8 + lVar18) = 0x8000000000000000;
                        }
                      }
                    }
                    if (*(ulonglong *)(&stack0x00001d20 + lVar18) != 0) {
                      plVar41 = (longlong *)0x1;
                      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323999;
                      pub_1406abac0(*(byte **)(&stack0x00001d28 + lVar18),
                                    *(ulonglong *)(&stack0x00001d20 + lVar18),1);
                    }
                  }
                  if ((*puVar6 != 0) &&
                     ((*(longlong *)(&stack0x00002788 + lVar18) == 0 ||
                      (*(ulonglong *)(&stack0x000027a0 + lVar18) != puVar6[1])))) {
                    plVar41 = (longlong *)&UNK_1434d9e18;
                    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423239cb;
                    pdb_141b75410(*(undefined8 *)(&stack0x000028d8 + lVar18),0,&UNK_1434d9e18);
                  }
                }
                if (*(char *)((longlong)puVar6 + 0x79) == '\0') goto LAB_142324033;
                uVar22 = *(undefined8 *)((longlong)puVar6 + 0x82);
                *(undefined8 *)(&stack0x00002560 + lVar18) =
                     *(undefined8 *)((longlong)puVar6 + 0x7a);
                *(undefined8 *)(&stack0x00002568 + lVar18) = uVar22;
                **(undefined4 **)(&stack0x000027b0 + lVar18) =
                     *(undefined4 *)(&stack0x000027e4 + lVar18);
                *(undefined **)(&stack0x00000740 + lVar18) = &UNK_1434d9e30;
                *(undefined8 *)(&stack0x00000748 + lVar18) = 0x11;
                *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323a19;
                uVar23 = pdb_140bbbcb0(&stack0x00000740 + lVar18);
                uVar23 = uVar23 ^ 0xb1695320004fb443;
                *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323a39;
                uVar20 = uVar23;
                lVar24 = pdb_14072c2d0(*(undefined8 *)(&stack0x000027f8 + lVar18));
                *(undefined1 *)(lVar24 + 0x5e) = 0;
                *(undefined1 *)(lVar24 + 0xcb) = 1;
                if ((uVar20 & 1) == 0) {
                  lVar24 = (*(longlong **)(&stack0x000027f8 + lVar18))[2];
                  if (lVar24 == **(longlong **)(&stack0x000027f8 + lVar18)) {
                    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323a66;
                    pdb_142d7f080(*(undefined8 *)(&stack0x000027f8 + lVar18));
                  }
                  lVar19 = *(longlong *)(&stack0x000027f8 + lVar18);
                  lVar44 = *(longlong *)(lVar19 + 8);
                  *(undefined4 *)(lVar44 + lVar24 * 0x38) = 1;
                  *(ulonglong *)(lVar44 + 0x30 + lVar24 * 0x38) = uVar23;
                  *(longlong *)(lVar19 + 0x10) = lVar24 + 1;
                }
                uVar27 = _UNK_14329c338;
                uVar26 = _DAT_14329c330;
                *(undefined8 *)(&stack0x00002750 + lVar18) =
                     *(undefined8 *)(&stack0x000027f8 + lVar18);
                *(ulonglong *)(&stack0x00002758 + lVar18) = uVar23;
                *(undefined8 *)(&stack0x00002760 + lVar18) = 0;
                *(undefined8 *)(&stack0x00000740 + lVar18) = 0;
                *(undefined8 *)(&stack0x00000748 + lVar18) = _DAT_14329c330;
                *(undefined8 *)(&stack0x00000750 + lVar18) = _UNK_14329c338;
                *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323ace;
                uVar22 = pdb_1400affa0(&stack0x00000740 + lVar18);
                *(ulonglong *)(&stack0x00000740 + lVar18) = uVar23;
                *(undefined8 *)(&stack0x00000748 + lVar18) = uVar22;
                *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323ae9;
                uVar22 = pdb_1400b0130(&stack0x00000740 + lVar18);
                *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323b00;
                pdb_14072caa0(&stack0x00002648 + lVar18,&stack0x00002750 + lVar18,uVar22);
                uVar22 = *(undefined8 *)(&stack0x00002650 + lVar18);
                *(undefined8 *)(&stack0x00000740 + lVar18) = 0;
                *(undefined8 *)(&stack0x00000748 + lVar18) = uVar26;
                *(undefined8 *)(&stack0x00000750 + lVar18) = uVar27;
                *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323b26;
                uVar26 = pdb_1400affa0(&stack0x00000740 + lVar18);
                *(undefined8 *)(&stack0x00000740 + lVar18) = uVar22;
                *(undefined8 *)(&stack0x00000748 + lVar18) = uVar26;
                *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323b41;
                uVar22 = pdb_1400b0130(&stack0x00000740 + lVar18);
                *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323b58;
                pdb_14072caa0(&stack0x00000740 + lVar18,&stack0x00002648 + lVar18,uVar22);
                *(undefined8 *)(&stack0xffffffffffffffe0 + lVar18) = 0;
                *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323b82;
                pdb_141174160(&stack0x00001cf8 + lVar18,&stack0x00000740 + lVar18,&UNK_1434d9e41,
                              0x13);
                *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323ba3;
                pdb_141186520(&stack0x00000740 + lVar18,&stack0x00001cf8 + lVar18,&UNK_1434d9e54);
                lVar24 = *(longlong *)(&stack0x00000740 + lVar18);
                if (*(longlong *)(lVar24 + 0x1c8) == 0) goto LAB_142323f13;
                *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323bcc;
                uVar20 = pdb_1400af0a0(lVar24 + 0x1d0,&stack0x00000748 + lVar18);
                lVar19 = *(longlong *)(lVar24 + 0x1b0);
                bVar48 = (byte)(uVar20 >> 0x39);
                auVar49 = ZEXT216(CONCAT11(bVar48,bVar48));
                auVar49 = pshuflw(auVar49,auVar49,0);
                lVar44 = 0;
                goto LAB_142323c03;
              }
              uVar45 = (ushort)(uVar17 - 1) & (ushort)uVar17;
              uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar45);
            }
            auVar53[0] = -(auVar50[0] == -1);
            auVar53[1] = -(auVar50[1] == -1);
            auVar53[2] = -(auVar50[2] == -1);
            auVar53[3] = -(auVar50[3] == -1);
            auVar53[4] = -(auVar50[4] == -1);
            auVar53[5] = -(auVar50[5] == -1);
            auVar53[6] = -(auVar50[6] == -1);
            auVar53[7] = -(auVar50[7] == -1);
            auVar53[8] = -(auVar50[8] == -1);
            auVar53[9] = -(auVar50[9] == -1);
            auVar53[10] = -(auVar50[10] == -1);
            auVar53[0xb] = -(auVar50[0xb] == -1);
            auVar53[0xc] = -(auVar50[0xc] == -1);
            auVar53[0xd] = -(auVar50[0xd] == -1);
            auVar53[0xe] = -(auVar50[0xe] == -1);
            auVar53[0xf] = -(auVar50[0xf] == -1);
            if ((((((((((((((((SUB161(auVar53 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar53 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar53 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar53 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar53 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar53 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar53 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar53 >> 0x3f,0) & 1) != 0) || (SUB161(auVar53 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar53 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar53 >> 0x57,0) & 1) != 0) || (SUB161(auVar53 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar53 >> 0x67,0) & 1) != 0) || (SUB161(auVar53 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar53 >> 0x77,0) & 1) != 0) || auVar53[0xf] < '\0') goto LAB_1423230b6;
            uVar23 = uVar23 + lVar43 + 0x10;
            lVar43 = lVar43 + 0x10;
          } while( true );
        }
        goto LAB_1423257b5;
      }
      *(undefined4 *)puVar7[2] = *(undefined4 *)((longlong)puVar7 + 0x1c);
      uVar26 = *puVar7;
      *(undefined4 *)plVar38[2] = *(undefined4 *)((longlong)plVar38 + 0x1c);
      plVar41 = (longlong *)*plVar38;
      lVar19 = *param_3;
      *(undefined8 *)(&stack0xffffffffffffffe8 + lVar18) = uVar22;
      *(longlong *)(&stack0xffffffffffffffe0 + lVar18) = lVar24 + 0x48;
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142322d28;
      pdb_1429b8060(uVar26,puVar6,plVar41,lVar19);
    }
    else {
      *(undefined1 *)(lVar24 + 0x60) = 2;
      plVar41 = plVar38;
    }
    if (cVar14 == '\0') {
      return;
    }
    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142322d32;
    plVar38 = (longlong *)pdb_140e97000();
    if ((char)plVar38[0xd] != '\x01') {
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324f85;
      plVar38 = (longlong *)pdb_142dcf3a0(plVar38,0);
      if (plVar38 == (longlong *)0x0) goto LAB_142324f8e;
    }
    if (*plVar38 == 0) {
      *plVar38 = -1;
      *(longlong **)(&stack0x000027f8 + lVar18) = plVar38;
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142322d60;
      pdb_140e95370(plVar38 + 1,unaff_RDI);
LAB_142322d61:
      **(longlong **)(&stack0x000027f8 + lVar18) = **(longlong **)(&stack0x000027f8 + lVar18) + 1;
      return;
    }
  }
  else {
    (&stack0x000027f8)[lVar18] = cVar14;
    plVar38 = (longlong *)0x17;
    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232299a;
    lVar19 = pdb_142322100(0x17);
    puVar35 = &UNK_1434d9bf8;
    if (lVar19 == 1) {
      if (0x17 < param_2) {
LAB_142325816:
        *(undefined **)(&stack0xffffffffffffffe0 + lVar18) = &UNK_1434d9c98;
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142325836;
        pdb_142dc8070(&UNK_1434d9bf8,0x17,0);
LAB_142325836:
        *(undefined **)(&stack0xffffffffffffffe0 + lVar18) = &UNK_1434d9cb0;
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142325859;
        pdb_142dc8070(&UNK_1434d9bf8,0x17);
LAB_142325859:
        *(longlong **)(&stack0x000027a0 + lVar18) = plVar38;
        uVar22 = 1;
LAB_142324f54:
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324f60;
        pdb_142dc7e2a(uVar22,*(undefined8 *)(&stack0x000027a0 + lVar18));
        goto LAB_1423257b5;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423229bc;
      uVar20 = pdb_142322100(param_2);
      if ((uVar20 & 1) != 0) {
        if (0x17 < param_2 + 2) goto LAB_142325836;
        plVar38 = (longlong *)(0x15 - param_2);
        puVar35 = &UNK_1434d9bfa + param_2;
      }
    }
    puVar40 = &UNK_1434d9d63;
    puVar47 = &UNK_1434d9d3c;
    do {
      bVar48 = puVar40[-1];
      uVar17 = (uint)(char)bVar48;
      if ((char)bVar48 < '\0') {
        bVar4 = puVar40[-2];
        if ((char)bVar4 < -0x40) {
          bVar5 = puVar40[-3];
          if ((char)bVar5 < -0x40) {
            pbVar25 = puVar40 + -4;
            puVar40 = puVar40 + -4;
            uVar17 = bVar5 & 0x3f | (*pbVar25 & 7) << 6;
          }
          else {
            puVar40 = puVar40 + -3;
            uVar17 = bVar5 & 0xf;
          }
          uVar17 = bVar4 & 0x3f | uVar17 << 6;
        }
        else {
          puVar40 = puVar40 + -2;
          uVar17 = bVar4 & 0x1f;
        }
        uVar17 = (uint)(bVar48 & 0x3f) | uVar17 << 6;
        if (uVar17 != 0x5c) goto LAB_142322a64;
LAB_142322a82:
        plVar41 = (longlong *)(puVar40 + -0x1434d9d3b);
        if ((longlong *)0x27 < plVar41) {
          *(undefined **)(&stack0xffffffffffffffe0 + lVar18) = &UNK_1434d9c78;
          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142325816;
          pdb_142dc8070(&UNK_1434d9d3c,0x27,plVar41,0x27);
          goto LAB_142325816;
        }
        lVar19 = 0x27 - (longlong)plVar41;
        puVar47 = puVar40 + 1;
        goto LAB_142322aaa;
      }
      puVar40 = puVar40 + -1;
      if (uVar17 == 0x5c) goto LAB_142322a82;
LAB_142322a64:
      if (uVar17 == 0x2f) goto LAB_142322a82;
    } while (puVar40 != &UNK_1434d9d3c);
    lVar19 = 0x27;
    plVar41 = (longlong *)&UNK_1434d9d3c;
LAB_142322aaa:
    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142322aaf;
    plVar21 = (longlong *)pdb_140e97000();
    if ((char)plVar21[0xd] != '\x01') {
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324f70;
      plVar21 = (longlong *)pdb_142dcf3a0(plVar21,0);
      if (plVar21 != (longlong *)0x0) goto LAB_142322ab9;
LAB_142324f8e:
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324f9a;
      pdb_142dc7890(&UNK_1432a7ee8);
LAB_142324f9a:
      uVar22 = 0;
LAB_142324f9c:
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324fa7;
      pdb_142dc7e2a(uVar22,plVar41);
      goto LAB_1423257b5;
    }
LAB_142322ab9:
    if (*plVar21 == 0) {
      *plVar21 = -1;
      *(longlong *)(&stack0xffffffffffffffe0 + lVar18) = lVar19;
      *(undefined8 *)(&stack0xfffffffffffffff0 + lVar18) = 0;
      *(undefined8 *)(&stack0xffffffffffffffe8 + lVar18) = 1;
      *(longlong **)(&stack0x000027a8 + lVar18) = plVar21;
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142322afa;
      unaff_RDI = pdb_140e94f10(plVar21 + 1,puVar35,plVar38,puVar47);
      **(longlong **)(&stack0x000027a8 + lVar18) = **(longlong **)(&stack0x000027a8 + lVar18) + 1;
      *(undefined8 *)(&stack0x00002700 + lVar18) = unaff_RDI;
      uVar22 = 1;
      cVar14 = (&stack0x000027f8)[lVar18];
      goto LAB_142322b21;
    }
  }
LAB_142325798:
  *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423257a4;
  pdb_142dc8090(&UNK_1432a7f58);
LAB_1423257a5:
  *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423257b4;
  pdb_142dc8420();
  goto LAB_1423257b5;
LAB_142323c03:
  uVar20 = uVar20 & *(ulonglong *)(lVar24 + 0x1b8);
  auVar50 = *(undefined1 (*) [16])(lVar19 + uVar20);
  auVar61[0] = -(auVar50[0] == auVar49[0]);
  auVar61[1] = -(auVar50[1] == auVar49[1]);
  auVar61[2] = -(auVar50[2] == auVar49[2]);
  auVar61[3] = -(auVar50[3] == auVar49[3]);
  auVar61[4] = -(auVar50[4] == auVar49[4]);
  auVar61[5] = -(auVar50[5] == auVar49[5]);
  auVar61[6] = -(auVar50[6] == auVar49[6]);
  auVar61[7] = -(auVar50[7] == auVar49[7]);
  auVar61[8] = -(auVar50[8] == auVar49[0]);
  auVar61[9] = -(auVar50[9] == auVar49[1]);
  auVar61[10] = -(auVar50[10] == auVar49[2]);
  auVar61[0xb] = -(auVar50[0xb] == auVar49[3]);
  auVar61[0xc] = -(auVar50[0xc] == auVar49[4]);
  auVar61[0xd] = -(auVar50[0xd] == auVar49[5]);
  auVar61[0xe] = -(auVar50[0xe] == auVar49[6]);
  auVar61[0xf] = -(auVar50[0xf] == auVar49[7]);
  uVar45 = (ushort)(SUB161(auVar61 >> 7,0) & 1) | (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe | (ushort)(auVar61[0xf] >> 7) << 0xf;
  uVar17 = (uint)uVar45;
  while (uVar45 != 0) {
    uVar11 = 0;
    for (uVar12 = uVar17; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
      uVar11 = uVar11 + 1;
    }
    lVar43 = (uVar11 + uVar20 & *(ulonglong *)(lVar24 + 0x1b8)) * -0xd8;
    if (*(longlong *)(&stack0x00000748 + lVar18) == *(longlong *)(lVar19 + -0xd8 + lVar43)) {
      pbVar25 = (byte *)(lVar19 + lVar43 + -5);
      *pbVar25 = *pbVar25 | 4;
      *(undefined8 *)(&stack0x00002580 + lVar18) = *(undefined8 *)(&stack0x00000750 + lVar18);
      *(undefined8 *)(&stack0x00002570 + lVar18) = *(undefined8 *)(&stack0x00000740 + lVar18);
      *(undefined8 *)(&stack0x00002578 + lVar18) = *(undefined8 *)(&stack0x00000748 + lVar18);
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323c9c;
      uVar22 = pdb_140dc6290(&UNK_1434d9e5a);
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323cb6;
      pdb_1407339e0(&stack0x00000740 + lVar18,&stack0x00002570 + lVar18,uVar22);
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323cc3;
      lVar24 = pdb_14116dd60(&stack0x00000740 + lVar18);
      *(undefined4 *)(lVar24 + 600) = 0x7b5a51a0;
      *(undefined8 *)(&stack0x00001d30 + lVar18) = *(undefined8 *)(&stack0x00000750 + lVar18);
      *(undefined8 *)(&stack0x00001d20 + lVar18) = *(undefined8 *)(&stack0x00000740 + lVar18);
      *(undefined8 *)(&stack0x00001d28 + lVar18) = *(undefined8 *)(&stack0x00000748 + lVar18);
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323cf6;
      lVar24 = pdb_14116dd60(&stack0x00001d20 + lVar18);
      *(undefined1 *)(lVar24 + 0x25d) = 0x14;
      *(undefined8 *)(&stack0x00000740 + lVar18) = *(undefined8 *)(&stack0x00001d20 + lVar18);
      *(undefined8 *)(&stack0x00000748 + lVar18) = *(undefined8 *)(&stack0x00001d28 + lVar18);
      *(undefined8 *)(&stack0x00000750 + lVar18) = *(undefined8 *)(&stack0x00001d30 + lVar18);
      lVar24 = *(longlong *)(&stack0x00000740 + lVar18);
      if (*(longlong *)(lVar24 + 0x1c8) == 0) goto LAB_142323fa8;
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323d44;
      uVar20 = pdb_1400af0a0(lVar24 + 0x1d0,&stack0x00000748 + lVar18);
      lVar19 = *(longlong *)(lVar24 + 0x1b0);
      bVar48 = (byte)(uVar20 >> 0x39);
      auVar49 = ZEXT216(CONCAT11(bVar48,bVar48));
      auVar49 = pshuflw(auVar49,auVar49,0);
      lVar44 = 0;
      goto LAB_142323d7b;
    }
    uVar45 = (ushort)(uVar17 - 1) & (ushort)uVar17;
    uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar45);
  }
  auVar54[0] = -(auVar50[0] == -1);
  auVar54[1] = -(auVar50[1] == -1);
  auVar54[2] = -(auVar50[2] == -1);
  auVar54[3] = -(auVar50[3] == -1);
  auVar54[4] = -(auVar50[4] == -1);
  auVar54[5] = -(auVar50[5] == -1);
  auVar54[6] = -(auVar50[6] == -1);
  auVar54[7] = -(auVar50[7] == -1);
  auVar54[8] = -(auVar50[8] == -1);
  auVar54[9] = -(auVar50[9] == -1);
  auVar54[10] = -(auVar50[10] == -1);
  auVar54[0xb] = -(auVar50[0xb] == -1);
  auVar54[0xc] = -(auVar50[0xc] == -1);
  auVar54[0xd] = -(auVar50[0xd] == -1);
  auVar54[0xe] = -(auVar50[0xe] == -1);
  auVar54[0xf] = -(auVar50[0xf] == -1);
  if ((((((((((((((((SUB161(auVar54 >> 7,0) & 1) != 0 || (SUB161(auVar54 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar54 >> 0x17,0) & 1) != 0) || (SUB161(auVar54 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar54 >> 0x27,0) & 1) != 0) || (SUB161(auVar54 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar54 >> 0x37,0) & 1) != 0) || (SUB161(auVar54 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar54 >> 0x47,0) & 1) != 0) || (SUB161(auVar54 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar54 >> 0x57,0) & 1) != 0) || (SUB161(auVar54 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar54 >> 0x67,0) & 1) != 0) || (SUB161(auVar54 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar54 >> 0x77,0) & 1) != 0) || auVar54[0xf] < '\0') {
LAB_142323f13:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323f1f;
    pdb_142dc8150(&UNK_142fa6a70);
  }
  uVar20 = uVar20 + lVar44 + 0x10;
  lVar44 = lVar44 + 0x10;
  goto LAB_142323c03;
LAB_142323d7b:
  uVar20 = uVar20 & *(ulonglong *)(lVar24 + 0x1b8);
  auVar50 = *(undefined1 (*) [16])(lVar19 + uVar20);
  auVar62[0] = -(auVar50[0] == auVar49[0]);
  auVar62[1] = -(auVar50[1] == auVar49[1]);
  auVar62[2] = -(auVar50[2] == auVar49[2]);
  auVar62[3] = -(auVar50[3] == auVar49[3]);
  auVar62[4] = -(auVar50[4] == auVar49[4]);
  auVar62[5] = -(auVar50[5] == auVar49[5]);
  auVar62[6] = -(auVar50[6] == auVar49[6]);
  auVar62[7] = -(auVar50[7] == auVar49[7]);
  auVar62[8] = -(auVar50[8] == auVar49[0]);
  auVar62[9] = -(auVar50[9] == auVar49[1]);
  auVar62[10] = -(auVar50[10] == auVar49[2]);
  auVar62[0xb] = -(auVar50[0xb] == auVar49[3]);
  auVar62[0xc] = -(auVar50[0xc] == auVar49[4]);
  auVar62[0xd] = -(auVar50[0xd] == auVar49[5]);
  auVar62[0xe] = -(auVar50[0xe] == auVar49[6]);
  auVar62[0xf] = -(auVar50[0xf] == auVar49[7]);
  uVar45 = (ushort)(SUB161(auVar62 >> 7,0) & 1) | (ushort)(SUB161(auVar62 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar62 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar62 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar62 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar62 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar62 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar62 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar62 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar62 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar62 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar62 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar62 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar62 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar62 >> 0x77,0) & 1) << 0xe | (ushort)(auVar62[0xf] >> 7) << 0xf;
  uVar17 = (uint)uVar45;
  while (uVar45 != 0) {
    uVar11 = 0;
    for (uVar12 = uVar17; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
      uVar11 = uVar11 + 1;
    }
    lVar43 = (uVar11 + uVar20 & *(ulonglong *)(lVar24 + 0x1b8)) * -0xd8;
    if (*(longlong *)(&stack0x00000748 + lVar18) == *(longlong *)(lVar19 + -0xd8 + lVar43)) {
      if ((*(byte *)(lVar19 + lVar43 + -6) & 0x30) != 0) {
        *(undefined1 *)((longlong)puVar6 + 0x79) = 0;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323dff;
      uVar22 = pdb_140dc6290(&UNK_1434d9e67);
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323e19;
      pdb_1407339e0(&stack0x00000740 + lVar18,&stack0x00002570 + lVar18,uVar22);
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323e26;
      lVar24 = pdb_14116dd60(&stack0x00000740 + lVar18);
      *(undefined4 *)(lVar24 + 600) = 0x7b5a51a0;
      *(undefined8 *)(&stack0x00001d20 + lVar18) = *(undefined8 *)(&stack0x00000740 + lVar18);
      *(undefined8 *)(&stack0x00001d28 + lVar18) = *(undefined8 *)(&stack0x00000748 + lVar18);
      *(undefined8 *)(&stack0x00001d30 + lVar18) = *(undefined8 *)(&stack0x00000750 + lVar18);
      lVar24 = *(longlong *)(&stack0x00001d20 + lVar18);
      if (*(longlong *)(lVar24 + 0x1c8) == 0) goto LAB_142323fc6;
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323e77;
      uVar20 = pdb_1400af0a0(lVar24 + 0x1d0,&stack0x00001d28 + lVar18);
      lVar19 = *(longlong *)(lVar24 + 0x1b0);
      bVar48 = (byte)(uVar20 >> 0x39);
      auVar49 = ZEXT216(CONCAT11(bVar48,bVar48));
      auVar49 = pshuflw(auVar49,auVar49,0);
      plVar41 = *(longlong **)(&stack0x00001d28 + lVar18);
      lVar44 = 0;
      goto LAB_142323eae;
    }
    uVar45 = (ushort)(uVar17 - 1) & (ushort)uVar17;
    uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar45);
  }
  auVar55[0] = -(auVar50[0] == -1);
  auVar55[1] = -(auVar50[1] == -1);
  auVar55[2] = -(auVar50[2] == -1);
  auVar55[3] = -(auVar50[3] == -1);
  auVar55[4] = -(auVar50[4] == -1);
  auVar55[5] = -(auVar50[5] == -1);
  auVar55[6] = -(auVar50[6] == -1);
  auVar55[7] = -(auVar50[7] == -1);
  auVar55[8] = -(auVar50[8] == -1);
  auVar55[9] = -(auVar50[9] == -1);
  auVar55[10] = -(auVar50[10] == -1);
  auVar55[0xb] = -(auVar50[0xb] == -1);
  auVar55[0xc] = -(auVar50[0xc] == -1);
  auVar55[0xd] = -(auVar50[0xd] == -1);
  auVar55[0xe] = -(auVar50[0xe] == -1);
  auVar55[0xf] = -(auVar50[0xf] == -1);
  if ((((((((((((((((SUB161(auVar55 >> 7,0) & 1) != 0 || (SUB161(auVar55 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar55 >> 0x17,0) & 1) != 0) || (SUB161(auVar55 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar55 >> 0x27,0) & 1) != 0) || (SUB161(auVar55 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar55 >> 0x37,0) & 1) != 0) || (SUB161(auVar55 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar55 >> 0x47,0) & 1) != 0) || (SUB161(auVar55 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar55 >> 0x57,0) & 1) != 0) || (SUB161(auVar55 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar55 >> 0x67,0) & 1) != 0) || (SUB161(auVar55 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar55 >> 0x77,0) & 1) != 0) || auVar55[0xf] < '\0') goto LAB_142323fa8;
  uVar20 = uVar20 + lVar44 + 0x10;
  lVar44 = lVar44 + 0x10;
  goto LAB_142323d7b;
LAB_142323eae:
  uVar20 = uVar20 & *(ulonglong *)(lVar24 + 0x1b8);
  auVar50 = *(undefined1 (*) [16])(lVar19 + uVar20);
  auVar63[0] = -(auVar50[0] == auVar49[0]);
  auVar63[1] = -(auVar50[1] == auVar49[1]);
  auVar63[2] = -(auVar50[2] == auVar49[2]);
  auVar63[3] = -(auVar50[3] == auVar49[3]);
  auVar63[4] = -(auVar50[4] == auVar49[4]);
  auVar63[5] = -(auVar50[5] == auVar49[5]);
  auVar63[6] = -(auVar50[6] == auVar49[6]);
  auVar63[7] = -(auVar50[7] == auVar49[7]);
  auVar63[8] = -(auVar50[8] == auVar49[0]);
  auVar63[9] = -(auVar50[9] == auVar49[1]);
  auVar63[10] = -(auVar50[10] == auVar49[2]);
  auVar63[0xb] = -(auVar50[0xb] == auVar49[3]);
  auVar63[0xc] = -(auVar50[0xc] == auVar49[4]);
  auVar63[0xd] = -(auVar50[0xd] == auVar49[5]);
  auVar63[0xe] = -(auVar50[0xe] == auVar49[6]);
  auVar63[0xf] = -(auVar50[0xf] == auVar49[7]);
  uVar45 = (ushort)(SUB161(auVar63 >> 7,0) & 1) | (ushort)(SUB161(auVar63 >> 0xf,0) & 1) << 1 |
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
  uVar17 = (uint)uVar45;
  if (uVar45 != 0) {
LAB_142323ec8:
    uVar11 = 0;
    for (uVar12 = uVar17; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
      uVar11 = uVar11 + 1;
    }
    lVar43 = (uVar11 + uVar20 & *(ulonglong *)(lVar24 + 0x1b8)) * -0xd8;
    if (plVar41 != *(longlong **)(lVar19 + -0xd8 + lVar43)) goto code_r0x000142323ee7;
    if ((*(byte *)(lVar19 + lVar43 + -6) & 0x30) != 0) {
      uVar22 = **(undefined8 **)(&stack0x00002780 + lVar18);
      *(undefined8 *)(&stack0x00000740 + lVar18) = *(undefined8 *)(&stack0x00002560 + lVar18);
      *(undefined8 *)(&stack0x00000748 + lVar18) = *(undefined8 *)(&stack0x00002568 + lVar18);
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323f58;
      cVar14 = pdb_140b7e530(&stack0x00000740 + lVar18,uVar22);
      if (cVar14 == '\0') {
        plVar38 = *(longlong **)(&stack0x000028d8 + lVar18);
        *(undefined4 *)plVar38[2] = *(undefined4 *)((longlong)plVar38 + 0x1c);
        lVar24 = *plVar38;
        lVar19 = *(longlong *)(lVar24 + 0x30);
        uVar22 = *(undefined8 *)(lVar24 + 0x40);
        if (lVar19 == *(longlong *)(lVar24 + 0x20)) {
          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232400e;
          pdb_142d7e980(lVar24 + 0x20);
        }
        lVar44 = *(longlong *)(lVar24 + 0x28);
        *(undefined8 *)(lVar44 + lVar19 * 0x10) = uVar22;
        *(undefined1 *)(lVar44 + 8 + lVar19 * 0x10) = 0xe;
      }
      else {
        plVar38 = *(longlong **)(&stack0x000028e0 + lVar18);
        *(undefined4 *)plVar38[2] = *(undefined4 *)((longlong)plVar38 + 0x1c);
        lVar24 = *plVar38;
        lVar19 = *(longlong *)(lVar24 + 0x30);
        uVar22 = *(undefined8 *)(lVar24 + 0x40);
        if (lVar19 == *(longlong *)(lVar24 + 0x20)) {
          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323f8b;
          pdb_142d7e830(lVar24 + 0x20);
        }
        lVar44 = *(longlong *)(lVar24 + 0x28);
        uVar26 = *(undefined8 *)(&stack0x00002568 + lVar18);
        puVar7 = (undefined8 *)(lVar44 + lVar19 * 0x18);
        *puVar7 = *(undefined8 *)(&stack0x00002560 + lVar18);
        puVar7[1] = uVar26;
        *(undefined8 *)(lVar44 + 0x10 + lVar19 * 0x18) = uVar22;
      }
      *(longlong *)(lVar24 + 0x30) = lVar19 + 1;
      *(longlong *)(lVar24 + 0x40) = *(longlong *)(lVar24 + 0x40) + 1;
      *(undefined1 *)((longlong)puVar6 + 0x79) = 0;
    }
LAB_142324033:
    if (*(char *)((longlong)puVar6 + 0x8a) == '\0') {
LAB_14232516e:
      if ((char)puVar6[2] == '\0') {
LAB_1423255f4:
        if ((&stack0x000027a8)[lVar18] == '\0') {
          **(undefined4 **)(&stack0x000027b0 + lVar18) = *(undefined4 *)(&stack0x000027e4 + lVar18);
          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142325631;
          pdb_1429b99b0(*(undefined8 *)(&stack0x000027f8 + lVar18),puVar6,
                        *(undefined8 *)(&stack0x000026d8 + lVar18),
                        *(longlong *)(&stack0x000028c8 + lVar18) + 0x48);
          **(undefined4 **)(&stack0x000027b0 + lVar18) = *(undefined4 *)(&stack0x000027e4 + lVar18);
          *(undefined **)(&stack0x00000740 + lVar18) = &UNK_1434d9f52;
          *(undefined8 *)(&stack0x00000748 + lVar18) = 4;
          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142325666;
          uVar23 = pdb_140bbbcb0(&stack0x00000740 + lVar18);
          uVar23 = uVar23 ^ 0xb1695320004fb443;
          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142325686;
          uVar20 = uVar23;
          lVar24 = pdb_14072c2d0(*(undefined8 *)(&stack0x000027f8 + lVar18));
          *(undefined1 *)(lVar24 + 0x5e) = 0;
          if ((uVar20 & 1) == 0) {
            lVar24 = (*(longlong **)(&stack0x000027f8 + lVar18))[2];
            if (lVar24 == **(longlong **)(&stack0x000027f8 + lVar18)) {
              *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423256ac;
              pdb_142d7f080(*(undefined8 *)(&stack0x000027f8 + lVar18));
            }
            lVar19 = *(longlong *)(&stack0x000027f8 + lVar18);
            lVar44 = *(longlong *)(lVar19 + 8);
            *(undefined4 *)(lVar44 + lVar24 * 0x38) = 2;
            *(ulonglong *)(lVar44 + 0x30 + lVar24 * 0x38) = uVar23;
            *(longlong *)(lVar19 + 0x10) = lVar24 + 1;
          }
          *(undefined8 *)(&stack0x00001d20 + lVar18) = *(undefined8 *)(&stack0x000027f8 + lVar18);
          *(ulonglong *)(&stack0x00001d28 + lVar18) = uVar23;
          *(undefined8 *)(&stack0x00001d30 + lVar18) = 0;
          *(undefined8 *)(&stack0xffffffffffffffe0 + lVar18) = 0;
          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142325718;
          pdb_141174160(&stack0x00000740 + lVar18,&stack0x00001d20 + lVar18,&UNK_1434d9f56,9);
          plVar41 = (longlong *)0x6;
          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142325739;
          pdb_14118b150(&stack0x00000740 + lVar18,&UNK_1434d9f5f,6,
                        *(undefined8 *)(&stack0x000028a0 + lVar18));
        }
        if (*(longlong *)(&stack0x000026f8 + lVar18) == 0) {
          return;
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232574d;
        plVar38 = (longlong *)pdb_140e97000();
        if ((char)plVar38[0xd] != '\x01') {
          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423257c1;
          plVar38 = (longlong *)pdb_142dcf3a0(plVar38,0);
          if (plVar38 != (longlong *)0x0) goto LAB_142325753;
          goto LAB_142324f8e;
        }
LAB_142325753:
        if (*plVar38 == 0) {
          *plVar38 = -1;
          *(longlong **)(&stack0x000027f8 + lVar18) = plVar38;
          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142325777;
          pdb_140e95370(plVar38 + 1,*(undefined8 *)(&stack0x00002700 + lVar18));
          goto LAB_142322d61;
        }
        goto LAB_142325798;
      }
      uVar20 = puVar6[4];
      *(ulonglong *)(&stack0x00002530 + lVar18) = puVar6[3];
      *(ulonglong *)(&stack0x00002538 + lVar18) = uVar20;
      **(undefined4 **)(&stack0x000027b0 + lVar18) = *(undefined4 *)(&stack0x000027e4 + lVar18);
      *(undefined **)(&stack0x00000740 + lVar18) = &UNK_1434d9f0b;
      *(undefined8 *)(&stack0x00000748 + lVar18) = 0x12;
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423251bb;
      uVar23 = pdb_140bbbcb0(&stack0x00000740 + lVar18);
      uVar23 = uVar23 ^ 0xb1695320004fb443;
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423251db;
      uVar20 = uVar23;
      lVar24 = pdb_14072c2d0(*(undefined8 *)(&stack0x000027f8 + lVar18));
      *(undefined1 *)(lVar24 + 0x5e) = 0;
      *(undefined1 *)(lVar24 + 0xcb) = 1;
      if ((uVar20 & 1) == 0) {
        lVar24 = (*(longlong **)(&stack0x000027f8 + lVar18))[2];
        if (lVar24 == **(longlong **)(&stack0x000027f8 + lVar18)) {
          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142325208;
          pdb_142d7f080(*(undefined8 *)(&stack0x000027f8 + lVar18));
        }
        lVar19 = *(longlong *)(&stack0x000027f8 + lVar18);
        lVar44 = *(longlong *)(lVar19 + 8);
        *(undefined4 *)(lVar44 + lVar24 * 0x38) = 1;
        *(ulonglong *)(lVar44 + 0x30 + lVar24 * 0x38) = uVar23;
        *(longlong *)(lVar19 + 0x10) = lVar24 + 1;
      }
      uVar27 = _UNK_14329c338;
      uVar26 = _DAT_14329c330;
      *(undefined8 *)(&stack0x00002710 + lVar18) = *(undefined8 *)(&stack0x000027f8 + lVar18);
      *(ulonglong *)(&stack0x00002718 + lVar18) = uVar23;
      *(undefined8 *)(&stack0x00002720 + lVar18) = 0;
      *(undefined8 *)(&stack0x00000740 + lVar18) = 0;
      *(undefined8 *)(&stack0x00000748 + lVar18) = _DAT_14329c330;
      *(undefined8 *)(&stack0x00000750 + lVar18) = _UNK_14329c338;
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142325270;
      uVar22 = pdb_1400affa0(&stack0x00000740 + lVar18);
      *(ulonglong *)(&stack0x00000740 + lVar18) = uVar23;
      *(undefined8 *)(&stack0x00000748 + lVar18) = uVar22;
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232528b;
      uVar22 = pdb_1400b0130(&stack0x00000740 + lVar18);
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423252a2;
      pdb_14072caa0(&stack0x00002750 + lVar18,&stack0x00002710 + lVar18,uVar22);
      uVar22 = *(undefined8 *)(&stack0x00002758 + lVar18);
      *(undefined8 *)(&stack0x00000740 + lVar18) = 0;
      *(undefined8 *)(&stack0x00000748 + lVar18) = uVar26;
      *(undefined8 *)(&stack0x00000750 + lVar18) = uVar27;
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423252c8;
      uVar26 = pdb_1400affa0(&stack0x00000740 + lVar18);
      *(undefined8 *)(&stack0x00000740 + lVar18) = uVar22;
      *(undefined8 *)(&stack0x00000748 + lVar18) = uVar26;
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423252e3;
      uVar22 = pdb_1400b0130(&stack0x00000740 + lVar18);
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423252fa;
      pdb_14072caa0(&stack0x00000740 + lVar18,&stack0x00002750 + lVar18,uVar22);
      *(undefined8 *)(&stack0xffffffffffffffe0 + lVar18) = 0;
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142325324;
      pdb_141174160(&stack0x00002570 + lVar18,&stack0x00000740 + lVar18,&UNK_1434d9f1d,0x10);
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232533e;
      pdb_14118dd80(&stack0x00002570 + lVar18,&UNK_1434d9d31,6);
      (&stack0x00002450)[lVar18] = 0;
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232535f;
      pdb_140a939a0(&stack0x00002648 + lVar18,&stack0x00002530 + lVar18);
      *(undefined8 *)(&stack0x000027e8 + lVar18) = *(undefined8 *)(&stack0x00002650 + lVar18);
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142325381;
      pdb_140a3cb00(&stack0x00001d20 + lVar18,*(undefined8 *)(&stack0x00002650 + lVar18),
                    *(undefined8 *)(&stack0x00002658 + lVar18));
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232539b;
      pub_142e32760(&stack0x00000740 + lVar18,&stack0x00001d20 + lVar18,0x730);
      lVar24 = *(longlong *)(&stack0x00000740 + lVar18);
      if (lVar24 == 2) {
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423253b4;
        pdb_140f36c40(&stack0x00000748 + lVar18);
      }
      else {
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423253cd;
        pub_142e32760(auStackX_18 + lVar18,&stack0x00001d28 + lVar18,0x728);
      }
      *(undefined8 *)(&stack0x00000740 + lVar18) = 2;
      *(undefined8 *)(&stack0x00000e70 + lVar18) = 2;
      *(longlong *)(&stack0x000015a0 + lVar18) = lVar24;
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142325400;
      pub_142e32760(&stack0x000015a8 + lVar18,auStackX_18 + lVar18,0x728);
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142325414;
      pdb_1411b40c0(&stack0x00001d20 + lVar18,&stack0x00000740 + lVar18);
      if (*(ulonglong *)(&stack0x00002648 + lVar18) != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142325433;
        pub_1406abac0(*(byte **)(&stack0x000027e8 + lVar18),
                      *(ulonglong *)(&stack0x00002648 + lVar18),1);
      }
      pbVar25 = *(byte **)(&stack0x00001d28 + lVar18);
      uVar20 = *(ulonglong *)(&stack0x00001d30 + lVar18);
      *(undefined1 **)(&stack0x00000740 + lVar18) = &stack0x0000279f + lVar18;
      if (1 < uVar20) {
        if (uVar20 < 0x15) {
          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423257ed;
          pdb_1411b8270(pbVar25,uVar20,1,&stack0x00000740 + lVar18);
        }
        else {
          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232587c;
          pdb_142321730(pbVar25,uVar20,&stack0x00000740 + lVar18);
        }
      }
      puVar9 = puVar6 + 5;
      uVar23 = uVar20 >> 3;
      *(ulonglong *)(&stack0x00002620 + lVar18) = uVar23;
      if (*puVar9 <= uVar23) {
        uVar23 = *puVar9;
      }
      *puVar9 = uVar23;
      uVar34 = uVar23 * 8 + 8;
      if (uVar20 < uVar34) {
        uVar34 = uVar20;
      }
      if (uVar23 * 8 <= uVar20) {
        *(byte **)(&stack0x00002648 + lVar18) = pbVar25 + uVar23 * 0x180;
        *(ulonglong *)(&stack0x00002650 + lVar18) = uVar34 + uVar23 * -8;
        *(undefined1 **)(&stack0x00000740 + lVar18) = &stack0x00002648 + lVar18;
        *(undefined1 **)(&stack0x00000748 + lVar18) = &stack0x00002530 + lVar18;
        *(undefined8 *)(&stack0x00000750 + lVar18) = *(undefined8 *)(&stack0x00002780 + lVar18);
        *(undefined8 *)(&stack0x00000758 + lVar18) = *(undefined8 *)(&stack0x000028d8 + lVar18);
        *(undefined8 *)(&stack0x00000760 + lVar18) = *(undefined8 *)(&stack0x000026d0 + lVar18);
        *(undefined1 **)(&stack0x00000768 + lVar18) = &stack0x00002450 + lVar18;
        *(undefined8 *)(&stack0x00000770 + lVar18) = *(undefined8 *)(&stack0x000028b8 + lVar18);
        *(undefined8 *)(&stack0x00000778 + lVar18) = *(undefined8 *)(&stack0x000028b0 + lVar18);
        *(undefined8 *)(&stack0x00000780 + lVar18) = *(undefined8 *)(&stack0x000028a0 + lVar18);
        *(undefined1 **)(&stack0x00000788 + lVar18) = &stack0x000028c8 + lVar18;
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232554e;
        pdb_141191810(&stack0x00002570 + lVar18,&UNK_1434d9f48,4,&stack0x00000740 + lVar18);
        *(undefined1 **)(&stack0x00000740 + lVar18) = &stack0x00002620 + lVar18;
        *(ulonglong **)(&stack0x00000748 + lVar18) = puVar9;
        *(undefined1 **)(&stack0x00000750 + lVar18) = &stack0x00002450 + lVar18;
        plVar41 = (longlong *)0x6;
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232558b;
        pdb_141191560(&stack0x00002570 + lVar18,&UNK_1434d9f4c,6,&stack0x00000740 + lVar18);
        if ((&stack0x00002450)[lVar18] != '\0') {
          puVar6[2] = 0;
        }
        if (uVar20 != 0) {
          pbVar36 = pbVar25 + 8;
          do {
            uVar23 = *(ulonglong *)(pbVar36 + -8);
            if (uVar23 != 0) {
              arg0 = *(byte **)pbVar36;
              plVar41 = (longlong *)0x1;
              *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423255d0;
              pub_1406abac0(arg0,uVar23,1);
            }
            pbVar36 = pbVar36 + 0x30;
            uVar20 = uVar20 - 1;
          } while (uVar20 != 0);
        }
        if (*(longlong *)(&stack0x00001d20 + lVar18) != 0) {
          plVar41 = (longlong *)0x8;
          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423255f4;
          pub_1406abac0(pbVar25,*(longlong *)(&stack0x00001d20 + lVar18) * 0x30,8);
        }
        goto LAB_1423255f4;
      }
      goto LAB_1423257a5;
    }
    uVar22 = *(undefined8 *)((longlong)puVar6 + 0x93);
    *(undefined8 *)(&stack0x00002740 + lVar18) = *(undefined8 *)((longlong)puVar6 + 0x8b);
    *(undefined8 *)(&stack0x00002748 + lVar18) = uVar22;
    **(undefined4 **)(&stack0x000027b0 + lVar18) = *(undefined4 *)(&stack0x000027e4 + lVar18);
    *(undefined **)(&stack0x00000740 + lVar18) = &UNK_1434d9e73;
    *(undefined8 *)(&stack0x00000748 + lVar18) = 0x16;
    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324086;
    uVar23 = pdb_140bbbcb0(&stack0x00000740 + lVar18);
    uVar23 = uVar23 ^ 0xb1695320004fb443;
    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423240a6;
    uVar20 = uVar23;
    lVar24 = pdb_14072c2d0(*(undefined8 *)(&stack0x000027f8 + lVar18));
    *(undefined1 *)(lVar24 + 0x5e) = 0;
    *(undefined1 *)(lVar24 + 0xcb) = 1;
    if ((uVar20 & 1) == 0) {
      lVar24 = (*(longlong **)(&stack0x000027f8 + lVar18))[2];
      if (lVar24 == **(longlong **)(&stack0x000027f8 + lVar18)) {
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423240d3;
        pdb_142d7f080(*(undefined8 *)(&stack0x000027f8 + lVar18));
      }
      lVar19 = *(longlong *)(&stack0x000027f8 + lVar18);
      lVar44 = *(longlong *)(lVar19 + 8);
      *(undefined4 *)(lVar44 + lVar24 * 0x38) = 1;
      *(ulonglong *)(lVar44 + 0x30 + lVar24 * 0x38) = uVar23;
      *(longlong *)(lVar19 + 0x10) = lVar24 + 1;
    }
    uVar27 = _UNK_14329c338;
    uVar26 = _DAT_14329c330;
    *(undefined8 *)(&stack0x000024a8 + lVar18) = *(undefined8 *)(&stack0x000027f8 + lVar18);
    *(ulonglong *)(&stack0x000024b0 + lVar18) = uVar23;
    *(undefined8 *)(&stack0x000024b8 + lVar18) = 0;
    *(undefined8 *)(&stack0x00000740 + lVar18) = 0;
    *(undefined8 *)(&stack0x00000748 + lVar18) = _DAT_14329c330;
    *(undefined8 *)(&stack0x00000750 + lVar18) = _UNK_14329c338;
    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232413d;
    uVar22 = pdb_1400affa0(&stack0x00000740 + lVar18);
    *(ulonglong *)(&stack0x00000740 + lVar18) = uVar23;
    *(undefined8 *)(&stack0x00000748 + lVar18) = uVar22;
    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324158;
    uVar22 = pdb_1400b0130(&stack0x00000740 + lVar18);
    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232416f;
    pdb_14072caa0(&stack0x00002478 + lVar18,&stack0x000024a8 + lVar18,uVar22);
    uVar22 = *(undefined8 *)(&stack0x00002480 + lVar18);
    *(undefined8 *)(&stack0x00000740 + lVar18) = 0;
    *(undefined8 *)(&stack0x00000748 + lVar18) = uVar26;
    *(undefined8 *)(&stack0x00000750 + lVar18) = uVar27;
    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324196;
    uVar26 = pdb_1400affa0(&stack0x00000740 + lVar18);
    *(undefined8 *)(&stack0x00000740 + lVar18) = uVar22;
    *(undefined8 *)(&stack0x00000748 + lVar18) = uVar26;
    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423241b1;
    uVar22 = pdb_1400b0130(&stack0x00000740 + lVar18);
    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423241c8;
    pdb_14072caa0(&stack0x00000740 + lVar18,&stack0x00002478 + lVar18,uVar22);
    *(undefined8 *)(&stack0xffffffffffffffe0 + lVar18) = 0;
    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423241f2;
    pdb_141174160(&stack0x00001cd0 + lVar18,&stack0x00000740 + lVar18,&UNK_1434d9e89,0x11);
    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324213;
    pdb_141186520(&stack0x00000740 + lVar18,&stack0x00001cd0 + lVar18,&UNK_1434d9e54);
    lVar24 = *(longlong *)(&stack0x00000740 + lVar18);
    if (*(longlong *)(lVar24 + 0x1c8) == 0) goto LAB_142324342;
    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232423c;
    uVar20 = pdb_1400af0a0(lVar24 + 0x1d0,&stack0x00000748 + lVar18);
    lVar19 = *(longlong *)(lVar24 + 0x1b0);
    bVar48 = (byte)(uVar20 >> 0x39);
    auVar49 = ZEXT216(CONCAT11(bVar48,bVar48));
    auVar49 = pshuflw(auVar49,auVar49,0);
    lVar44 = 0;
    while( true ) {
      uVar20 = uVar20 & *(ulonglong *)(lVar24 + 0x1b8);
      auVar50 = *(undefined1 (*) [16])(lVar19 + uVar20);
      auVar64[0] = -(auVar50[0] == auVar49[0]);
      auVar64[1] = -(auVar50[1] == auVar49[1]);
      auVar64[2] = -(auVar50[2] == auVar49[2]);
      auVar64[3] = -(auVar50[3] == auVar49[3]);
      auVar64[4] = -(auVar50[4] == auVar49[4]);
      auVar64[5] = -(auVar50[5] == auVar49[5]);
      auVar64[6] = -(auVar50[6] == auVar49[6]);
      auVar64[7] = -(auVar50[7] == auVar49[7]);
      auVar64[8] = -(auVar50[8] == auVar49[0]);
      auVar64[9] = -(auVar50[9] == auVar49[1]);
      auVar64[10] = -(auVar50[10] == auVar49[2]);
      auVar64[0xb] = -(auVar50[0xb] == auVar49[3]);
      auVar64[0xc] = -(auVar50[0xc] == auVar49[4]);
      auVar64[0xd] = -(auVar50[0xd] == auVar49[5]);
      auVar64[0xe] = -(auVar50[0xe] == auVar49[6]);
      auVar64[0xf] = -(auVar50[0xf] == auVar49[7]);
      uVar45 = (ushort)(SUB161(auVar64 >> 7,0) & 1) | (ushort)(SUB161(auVar64 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar64 >> 0x77,0) & 1) << 0xe | (ushort)(auVar64[0xf] >> 7) << 0xf;
      uVar17 = (uint)uVar45;
      if (uVar45 != 0) break;
LAB_1423242b9:
      auVar57[0] = -(auVar50[0] == -1);
      auVar57[1] = -(auVar50[1] == -1);
      auVar57[2] = -(auVar50[2] == -1);
      auVar57[3] = -(auVar50[3] == -1);
      auVar57[4] = -(auVar50[4] == -1);
      auVar57[5] = -(auVar50[5] == -1);
      auVar57[6] = -(auVar50[6] == -1);
      auVar57[7] = -(auVar50[7] == -1);
      auVar57[8] = -(auVar50[8] == -1);
      auVar57[9] = -(auVar50[9] == -1);
      auVar57[10] = -(auVar50[10] == -1);
      auVar57[0xb] = -(auVar50[0xb] == -1);
      auVar57[0xc] = -(auVar50[0xc] == -1);
      auVar57[0xd] = -(auVar50[0xd] == -1);
      auVar57[0xe] = -(auVar50[0xe] == -1);
      auVar57[0xf] = -(auVar50[0xf] == -1);
      if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 || (SUB161(auVar57 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar57 >> 0x17,0) & 1) != 0) || (SUB161(auVar57 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar57 >> 0x27,0) & 1) != 0) || (SUB161(auVar57 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar57 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar57 >> 0x3f,0) & 1) != 0) || (SUB161(auVar57 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar57 >> 0x4f,0) & 1) != 0) || (SUB161(auVar57 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar57 >> 0x5f,0) & 1) != 0) || (SUB161(auVar57 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar57 >> 0x6f,0) & 1) != 0) || (SUB161(auVar57 >> 0x77,0) & 1) != 0) ||
          auVar57[0xf] < '\0') {
LAB_142324342:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232434e;
        pdb_142dc8150(&UNK_142fa6a70);
      }
      uVar20 = uVar20 + lVar44 + 0x10;
      lVar44 = lVar44 + 0x10;
    }
    while( true ) {
      uVar11 = 0;
      for (uVar12 = uVar17; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
        uVar11 = uVar11 + 1;
      }
      lVar43 = (uVar11 + uVar20 & *(ulonglong *)(lVar24 + 0x1b8)) * -0xd8;
      if (*(longlong *)(&stack0x00000748 + lVar18) == *(longlong *)(lVar19 + -0xd8 + lVar43)) break;
      uVar45 = (ushort)(uVar17 - 1) & (ushort)uVar17;
      uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar45);
      if (uVar45 == 0) goto LAB_1423242b9;
    }
    pbVar25 = (byte *)(lVar19 + lVar43 + -5);
    *pbVar25 = *pbVar25 | 4;
    *(undefined8 *)(&stack0x00002520 + lVar18) = *(undefined8 *)(&stack0x00000750 + lVar18);
    *(undefined8 *)(&stack0x00002510 + lVar18) = *(undefined8 *)(&stack0x00000740 + lVar18);
    *(undefined8 *)(&stack0x00002518 + lVar18) = *(undefined8 *)(&stack0x00000748 + lVar18);
    *(undefined8 *)(&stack0x00001d20 + lVar18) = *(undefined8 *)(&stack0x00002740 + lVar18);
    *(undefined8 *)(&stack0x00001d28 + lVar18) = *(undefined8 *)(&stack0x00002748 + lVar18);
    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232431a;
    pdb_142322590(&stack0x00000740 + lVar18,&stack0x00001d20 + lVar18);
    if (SBORROW8(0,*(longlong *)(&stack0x00000740 + lVar18))) {
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324332;
      pdb_140a93e70(&stack0x00002570 + lVar18);
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232433f;
      pdb_140f36c40(&stack0x00000748 + lVar18);
    }
    else {
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232436d;
      pub_142e32760(&stack0x00002570 + lVar18,&stack0x00000740 + lVar18,0xa0);
    }
    (&stack0x000027c8)[lVar18] = (&stack0x00002608)[lVar18];
    uVar26 = 0x10;
    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232438b;
    uVar22 = pdb_140dc6290(&UNK_1434d9e9a);
    *(undefined8 *)(&stack0x00002788 + lVar18) = uVar22;
    *(undefined8 *)(&stack0x000027a0 + lVar18) = uVar26;
    uVar30 = 0x10;
    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423243aa;
    uVar22 = pdb_140dc6290(&UNK_1434d9eaa);
    uVar31 = 0xf;
    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423243c2;
    uVar26 = pdb_140dc6290(&UNK_1434d9eba);
    uVar32 = 0x11;
    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423243da;
    uVar27 = pdb_140dc6290(&UNK_1434d9ec9);
    uVar33 = 0x10;
    *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423243f2;
    uVar28 = pdb_140dc6290(&UNK_1434d9eda);
    *(undefined8 *)(&stack0x00002648 + lVar18) = 0;
    *(undefined8 *)(&stack0x00002650 + lVar18) = 5;
    *(undefined8 *)(&stack0x00002658 + lVar18) = *(undefined8 *)(&stack0x00002788 + lVar18);
    *(undefined8 *)(&stack0x00002660 + lVar18) = *(undefined8 *)(&stack0x000027a0 + lVar18);
    (&stack0x00002668)[lVar18] = 0;
    *(undefined8 *)(&stack0x00002670 + lVar18) = uVar22;
    *(undefined8 *)(&stack0x00002678 + lVar18) = uVar30;
    (&stack0x00002680)[lVar18] = 3;
    *(undefined8 *)(&stack0x00002688 + lVar18) = uVar26;
    *(undefined8 *)(&stack0x00002690 + lVar18) = uVar31;
    (&stack0x00002698)[lVar18] = 1;
    *(undefined8 *)(&stack0x000026a0 + lVar18) = uVar27;
    *(undefined8 *)(&stack0x000026a8 + lVar18) = uVar32;
    (&stack0x000026b0)[lVar18] = 2;
    *(undefined8 *)(&stack0x000026b8 + lVar18) = uVar28;
    *(undefined8 *)(&stack0x000026c0 + lVar18) = uVar33;
    (&stack0x000026c8)[lVar18] = 4;
    *(undefined8 *)(&stack0x00002788 + lVar18) = **(undefined8 **)(&stack0x000027e8 + lVar18);
    puVar1 = &stack0x00001d20 + lVar18;
    lVar24 = 0;
LAB_1423244a5:
    do {
      if (lVar24 == 5) {
LAB_142325004:
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142325024;
        pdb_1407339e0(&stack0x00000740 + lVar18,&stack0x00002510 + lVar18,&UNK_1434d9f08);
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142325031;
        lVar24 = pdb_14116dd60(&stack0x00000740 + lVar18);
        *(undefined4 *)(lVar24 + 600) = 0x7b5a51a0;
        *(undefined8 *)(&stack0x00001d30 + lVar18) = *(undefined8 *)(&stack0x00000750 + lVar18);
        *(undefined8 *)(&stack0x00001d20 + lVar18) = *(undefined8 *)(&stack0x00000740 + lVar18);
        *(undefined8 *)(&stack0x00001d28 + lVar18) = *(undefined8 *)(&stack0x00000748 + lVar18);
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142325066;
        lVar24 = pdb_14116dd60(&stack0x00001d20 + lVar18);
        *(undefined1 *)(lVar24 + 0x25d) = 0x14;
        *(undefined8 *)(&stack0x00000740 + lVar18) = *(undefined8 *)(&stack0x00001d20 + lVar18);
        *(undefined8 *)(&stack0x00000748 + lVar18) = *(undefined8 *)(&stack0x00001d28 + lVar18);
        *(undefined8 *)(&stack0x00000750 + lVar18) = *(undefined8 *)(&stack0x00001d30 + lVar18);
        lVar24 = *(longlong *)(&stack0x00000740 + lVar18);
        if (*(longlong *)(lVar24 + 0x1c8) != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423250b4;
          uVar20 = pdb_1400af0a0(lVar24 + 0x1d0,&stack0x00000748 + lVar18);
          lVar19 = *(longlong *)(lVar24 + 0x1b0);
          bVar48 = (byte)(uVar20 >> 0x39);
          auVar49 = ZEXT216(CONCAT11(bVar48,bVar48));
          auVar49 = pshuflw(auVar49,auVar49,0);
          plVar41 = *(longlong **)(&stack0x00000748 + lVar18);
          lVar44 = 0;
          while( true ) {
            uVar20 = uVar20 & *(ulonglong *)(lVar24 + 0x1b8);
            auVar50 = *(undefined1 (*) [16])(lVar19 + uVar20);
            auVar65[0] = -(auVar50[0] == auVar49[0]);
            auVar65[1] = -(auVar50[1] == auVar49[1]);
            auVar65[2] = -(auVar50[2] == auVar49[2]);
            auVar65[3] = -(auVar50[3] == auVar49[3]);
            auVar65[4] = -(auVar50[4] == auVar49[4]);
            auVar65[5] = -(auVar50[5] == auVar49[5]);
            auVar65[6] = -(auVar50[6] == auVar49[6]);
            auVar65[7] = -(auVar50[7] == auVar49[7]);
            auVar65[8] = -(auVar50[8] == auVar49[0]);
            auVar65[9] = -(auVar50[9] == auVar49[1]);
            auVar65[10] = -(auVar50[10] == auVar49[2]);
            auVar65[0xb] = -(auVar50[0xb] == auVar49[3]);
            auVar65[0xc] = -(auVar50[0xc] == auVar49[4]);
            auVar65[0xd] = -(auVar50[0xd] == auVar49[5]);
            auVar65[0xe] = -(auVar50[0xe] == auVar49[6]);
            auVar65[0xf] = -(auVar50[0xf] == auVar49[7]);
            uVar45 = (ushort)(SUB161(auVar65 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar65 >> 0xf,0) & 1) << 1 |
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
                     (ushort)(SUB161(auVar65 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar65[0xf] >> 7) << 0xf;
            uVar17 = (uint)uVar45;
            while (uVar45 != 0) {
              uVar11 = 0;
              for (uVar12 = uVar17; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
                uVar11 = uVar11 + 1;
              }
              lVar43 = (uVar11 + uVar20 & *(ulonglong *)(lVar24 + 0x1b8)) * -0xd8;
              if (plVar41 == *(longlong **)(lVar19 + -0xd8 + lVar43)) {
                if ((*(byte *)(lVar19 + lVar43 + -6) & 0x30) != 0) {
                  *(undefined1 *)((longlong)puVar6 + 0x8a) = 0;
                }
                *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232516d;
                pdb_1404cc180(&stack0x00002570 + lVar18);
                goto LAB_14232516e;
              }
              uVar45 = (ushort)(uVar17 - 1) & (ushort)uVar17;
              uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar45);
            }
            auVar59[0] = -(auVar50[0] == -1);
            auVar59[1] = -(auVar50[1] == -1);
            auVar59[2] = -(auVar50[2] == -1);
            auVar59[3] = -(auVar50[3] == -1);
            auVar59[4] = -(auVar50[4] == -1);
            auVar59[5] = -(auVar50[5] == -1);
            auVar59[6] = -(auVar50[6] == -1);
            auVar59[7] = -(auVar50[7] == -1);
            auVar59[8] = -(auVar50[8] == -1);
            auVar59[9] = -(auVar50[9] == -1);
            auVar59[10] = -(auVar50[10] == -1);
            auVar59[0xb] = -(auVar50[0xb] == -1);
            auVar59[0xc] = -(auVar50[0xc] == -1);
            auVar59[0xd] = -(auVar50[0xd] == -1);
            auVar59[0xe] = -(auVar50[0xe] == -1);
            auVar59[0xf] = -(auVar50[0xf] == -1);
            if ((((((((((((((((SUB161(auVar59 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar59 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar59 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar59 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar59 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar59 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar59 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar59 >> 0x3f,0) & 1) != 0) || (SUB161(auVar59 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar59 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar59 >> 0x57,0) & 1) != 0) || (SUB161(auVar59 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar59 >> 0x67,0) & 1) != 0) || (SUB161(auVar59 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar59 >> 0x77,0) & 1) != 0) || auVar59[0xf] < '\0') break;
            uVar20 = uVar20 + lVar44 + 0x10;
            lVar44 = lVar44 + 0x10;
          }
        }
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142325795;
        pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
        goto LAB_1423257b5;
      }
      lVar19 = lVar24 + 1;
      *(longlong *)(&stack0x00002648 + lVar18) = lVar19;
      cVar14 = (&stack0x00002668)[lVar24 * 0x18 + lVar18];
      if (cVar14 == '\x05') goto LAB_142325004;
      uVar22 = *(undefined8 *)(&stack0x00002658 + lVar24 * 0x18 + lVar18);
      plVar38 = *(longlong **)(&stack0x00002660 + lVar24 * 0x18 + lVar18);
      *(undefined8 *)(&stack0x00002710 + lVar18) = uVar22;
      *(longlong **)(&stack0x00002718 + lVar18) = plVar38;
      if ((&stack0x000027c8)[lVar18] != cVar14) {
        if (-1 < (longlong)plVar38) {
          if (plVar38 == (longlong *)0x0) {
            pbVar25 = (byte *)0x1;
            *(undefined8 *)(&stack0x000027a0 + lVar18) = 1;
LAB_142324590:
            *(longlong **)(&stack0x00000740 + lVar18) = plVar38;
            *(byte **)(&stack0x00000748 + lVar18) = pbVar25;
            *(longlong **)(&stack0x00000750 + lVar18) = plVar38;
            goto LAB_1423245a5;
          }
          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232454b;
          pdb_14007ee60();
          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324558;
          pbVar25 = pub_1406abab0((ulonglong)plVar38,1);
          if (pbVar25 != (byte *)0x0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324572;
            pub_142e32760(pbVar25,uVar22,plVar38);
            *(byte **)(&stack0x000027a0 + lVar18) = pbVar25;
            goto LAB_142324590;
          }
          goto LAB_142325859;
        }
        uVar22 = 0;
        goto LAB_142324f54;
      }
      *(undefined1 **)(&stack0x00001d20 + lVar18) = &stack0x00002710 + lVar18;
      *(code **)(&stack0x00001d28 + lVar18) = pdb_1402ed400;
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232452a;
      pdb_140f60760(&stack0x00000740 + lVar18,&UNK_1434d9f65,puVar1);
      pbVar25 = *(byte **)(&stack0x00000748 + lVar18);
LAB_1423245a5:
      *(byte **)(&stack0x000027e8 + lVar18) = pbVar25;
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423245ba;
      pdb_1407339e0(puVar1,&stack0x00002510 + lVar18);
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423245c3;
      lVar24 = pdb_14116dd60(puVar1);
      uVar29 = 0x7b5a51a0;
      if ((&stack0x000027c8)[lVar18] == cVar14) {
        uVar29 = 0xc7b7a7ff;
      }
      *(undefined4 *)(lVar24 + 600) = uVar29;
      *(undefined8 *)(&stack0x00002750 + lVar18) = *(undefined8 *)(&stack0x00001d20 + lVar18);
      *(undefined8 *)(&stack0x00002758 + lVar18) = *(undefined8 *)(&stack0x00001d28 + lVar18);
      *(undefined8 *)(&stack0x00002760 + lVar18) = *(undefined8 *)(&stack0x00001d30 + lVar18);
      lVar24 = *(longlong *)(&stack0x00002750 + lVar18);
      if (*(longlong *)(lVar24 + 0x1c8) == 0) {
LAB_142324f34:
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324f4c;
        pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
        goto LAB_1423257b5;
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324624;
      uVar20 = pdb_1400af0a0(lVar24 + 0x1d0,&stack0x00002758 + lVar18);
      lVar44 = *(longlong *)(lVar24 + 0x1b0);
      bVar48 = (byte)(uVar20 >> 0x39);
      auVar49 = ZEXT216(CONCAT11(bVar48,bVar48));
      auVar49 = pshuflw(auVar49,auVar49,0);
      lVar43 = 0;
      while( true ) {
        uVar20 = uVar20 & *(ulonglong *)(lVar24 + 0x1b8);
        pcVar39 = (char *)(lVar44 + uVar20);
        auVar58[0] = -(*pcVar39 == auVar49[0]);
        auVar58[1] = -(pcVar39[1] == auVar49[1]);
        auVar58[2] = -(pcVar39[2] == auVar49[2]);
        auVar58[3] = -(pcVar39[3] == auVar49[3]);
        auVar58[4] = -(pcVar39[4] == auVar49[4]);
        auVar58[5] = -(pcVar39[5] == auVar49[5]);
        auVar58[6] = -(pcVar39[6] == auVar49[6]);
        auVar58[7] = -(pcVar39[7] == auVar49[7]);
        auVar58[8] = -(pcVar39[8] == auVar49[0]);
        auVar58[9] = -(pcVar39[9] == auVar49[1]);
        auVar58[10] = -(pcVar39[10] == auVar49[2]);
        auVar58[0xb] = -(pcVar39[0xb] == auVar49[3]);
        auVar58[0xc] = -(pcVar39[0xc] == auVar49[4]);
        auVar58[0xd] = -(pcVar39[0xd] == auVar49[5]);
        auVar58[0xe] = -(pcVar39[0xe] == auVar49[6]);
        auVar58[0xf] = -(pcVar39[0xf] == auVar49[7]);
        uVar45 = (ushort)(SUB161(auVar58 >> 7,0) & 1) | (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe | (ushort)(auVar58[0xf] >> 7) << 0xf
        ;
        uVar17 = (uint)uVar45;
        if (uVar45 != 0) break;
LAB_14232469d:
        auVar52[0] = -(*pcVar39 == -1);
        auVar52[1] = -(pcVar39[1] == -1);
        auVar52[2] = -(pcVar39[2] == -1);
        auVar52[3] = -(pcVar39[3] == -1);
        auVar52[4] = -(pcVar39[4] == -1);
        auVar52[5] = -(pcVar39[5] == -1);
        auVar52[6] = -(pcVar39[6] == -1);
        auVar52[7] = -(pcVar39[7] == -1);
        auVar52[8] = -(pcVar39[8] == -1);
        auVar52[9] = -(pcVar39[9] == -1);
        auVar52[10] = -(pcVar39[10] == -1);
        auVar52[0xb] = -(pcVar39[0xb] == -1);
        auVar52[0xc] = -(pcVar39[0xc] == -1);
        auVar52[0xd] = -(pcVar39[0xd] == -1);
        auVar52[0xe] = -(pcVar39[0xe] == -1);
        auVar52[0xf] = -(pcVar39[0xf] == -1);
        if ((((((((((((((((SUB161(auVar52 >> 7,0) & 1) != 0 || (SUB161(auVar52 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar52 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar52 >> 0x1f,0) & 1) != 0) || (SUB161(auVar52 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar52 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar52 >> 0x37,0) & 1) != 0) || (SUB161(auVar52 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar52 >> 0x47,0) & 1) != 0) || (SUB161(auVar52 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar52 >> 0x57,0) & 1) != 0) || (SUB161(auVar52 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar52 >> 0x67,0) & 1) != 0) || (SUB161(auVar52 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar52 >> 0x77,0) & 1) != 0) || auVar52[0xf] < '\0') goto LAB_142324f34;
        uVar20 = uVar20 + lVar43 + 0x10;
        lVar43 = lVar43 + 0x10;
      }
      while( true ) {
        uVar11 = 0;
        for (uVar12 = uVar17; (uVar12 & 1) == 0; uVar12 = uVar12 >> 1 | 0x80000000) {
          uVar11 = uVar11 + 1;
        }
        lVar46 = (uVar11 + uVar20 & *(ulonglong *)(lVar24 + 0x1b8)) * -0xd8;
        if (*(longlong *)(&stack0x00002758 + lVar18) == *(longlong *)(lVar44 + -0xd8 + lVar46))
        break;
        uVar45 = (ushort)(uVar17 - 1) & (ushort)uVar17;
        uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar45);
        if (uVar45 == 0) goto LAB_14232469d;
      }
      lVar24 = lVar19;
      if ((*(byte *)(lVar44 + lVar46 + -6) & 0x30) == 0) {
        uVar20 = *(ulonglong *)(&stack0x00000740 + lVar18);
        goto joined_r0x0001423246cf;
      }
      if (*(ulonglong *)(&stack0x00000740 + lVar18) != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232470a;
        pub_1406abac0(*(byte **)(&stack0x000027e8 + lVar18),
                      *(ulonglong *)(&stack0x00000740 + lVar18),1);
      }
      *(undefined1 *)((longlong)puVar6 + 0x8a) = 0;
      uVar22 = **(undefined8 **)(&stack0x00002780 + lVar18);
      *(undefined8 *)(&stack0x00000740 + lVar18) = *(undefined8 *)(&stack0x00002740 + lVar18);
      *(undefined8 *)(&stack0x00000748 + lVar18) = *(undefined8 *)(&stack0x00002748 + lVar18);
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232473b;
      cVar16 = pdb_140b7e530(&stack0x00000740 + lVar18,uVar22);
      if (cVar16 == '\0') {
LAB_142324fba:
        plVar38 = *(longlong **)(&stack0x000028d8 + lVar18);
        *(undefined4 *)plVar38[2] = *(undefined4 *)((longlong)plVar38 + 0x1c);
        lVar24 = *plVar38;
        lVar19 = *(longlong *)(lVar24 + 0x30);
        uVar22 = *(undefined8 *)(lVar24 + 0x40);
        if (lVar19 == *(longlong *)(lVar24 + 0x20)) {
          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324fe4;
          pdb_142d7e980(lVar24 + 0x20);
        }
        lVar44 = *(longlong *)(lVar24 + 0x28);
        *(undefined8 *)(lVar44 + lVar19 * 0x10) = uVar22;
        *(undefined1 *)(lVar44 + 8 + lVar19 * 0x10) = 0xe;
        *(longlong *)(lVar24 + 0x30) = lVar19 + 1;
        *(longlong *)(lVar24 + 0x40) = *(longlong *)(lVar24 + 0x40) + 1;
        goto LAB_142325004;
      }
      lVar19 = *(longlong *)(&stack0x00002788 + lVar18);
      auVar51[0] = -(*(char *)(lVar19 + 0xa0) == (&stack0x00002740)[lVar18]);
      auVar51[1] = -(*(char *)(lVar19 + 0xa1) == (&stack0x00002741)[lVar18]);
      auVar51[2] = -(*(char *)(lVar19 + 0xa2) == (&stack0x00002742)[lVar18]);
      auVar51[3] = -(*(char *)(lVar19 + 0xa3) == (&stack0x00002743)[lVar18]);
      auVar51[4] = -(*(char *)(lVar19 + 0xa4) == (&stack0x00002744)[lVar18]);
      auVar51[5] = -(*(char *)(lVar19 + 0xa5) == (&stack0x00002745)[lVar18]);
      auVar51[6] = -(*(char *)(lVar19 + 0xa6) == (&stack0x00002746)[lVar18]);
      auVar51[7] = -(*(char *)(lVar19 + 0xa7) == (&stack0x00002747)[lVar18]);
      auVar51[8] = -(*(char *)(lVar19 + 0xa8) == (&stack0x00002748)[lVar18]);
      auVar51[9] = -(*(char *)(lVar19 + 0xa9) == (&stack0x00002749)[lVar18]);
      auVar51[10] = -(*(char *)(lVar19 + 0xaa) == (&stack0x0000274a)[lVar18]);
      auVar51[0xb] = -(*(char *)(lVar19 + 0xab) == (&stack0x0000274b)[lVar18]);
      auVar51[0xc] = -(*(char *)(lVar19 + 0xac) == (&stack0x0000274c)[lVar18]);
      auVar51[0xd] = -(*(char *)(lVar19 + 0xad) == (&stack0x0000274d)[lVar18]);
      auVar51[0xe] = -(*(char *)(lVar19 + 0xae) == (&stack0x0000274e)[lVar18]);
      auVar51[0xf] = -(*(char *)(lVar19 + 0xaf) == (&stack0x0000274f)[lVar18]);
      if ((ushort)((ushort)(SUB161(auVar51 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar51 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar51 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar51 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar51 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar51 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar51 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar51 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar51 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar51 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar51 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar51 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar51 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar51 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar51 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar51[0xf] >> 7) << 0xf) == 0xffff) {
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232476e;
        lVar19 = pdb_140b80de0(uVar22);
        *(longlong *)(&stack0x00000740 + lVar18) = lVar19;
        if (lVar19 != 0) {
          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324fb9;
          pdb_140f36c40(&stack0x00000740 + lVar18);
          goto LAB_142324fba;
        }
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324792;
      pdb_140a923d0(&stack0x00000740 + lVar18,&stack0x00002570 + lVar18);
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423247a6;
      pdb_140c5d220(&stack0x00002450 + lVar18,&stack0x00000740 + lVar18);
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423247ba;
      pdb_140a937d0(&stack0x00000740 + lVar18,&stack0x00002740 + lVar18);
      *(undefined8 *)(&stack0xffffffffffffffe0 + lVar18) = 0xc;
      *(undefined8 *)(&stack0x000027e8 + lVar18) = *(undefined8 *)(&stack0x00000748 + lVar18);
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423247ec;
      pdb_140f3e9e0(&stack0x00002628 + lVar18,*(undefined8 *)(&stack0x00000748 + lVar18),
                    *(undefined8 *)(&stack0x00000750 + lVar18),&UNK_1434d9d90);
      if (*(ulonglong *)(&stack0x00000740 + lVar18) != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232480b;
        pub_1406abac0(*(byte **)(&stack0x000027e8 + lVar18),
                      *(ulonglong *)(&stack0x00000740 + lVar18),1);
      }
      uVar22 = *(undefined8 *)(&stack0x00002630 + lVar18);
      (&stack0x00002805)[lVar18] = 1;
      *(undefined8 *)(&stack0x000027e8 + lVar18) = uVar22;
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232483a;
      pdb_141920a00(&stack0x00002710 + lVar18,uVar22,*(undefined8 *)(&stack0x00002638 + lVar18),
                    &stack0x00002450 + lVar18);
      uVar29 = (undefined4)uVar22;
      if (SBORROW8(0,*(longlong *)(&stack0x00002710 + lVar18))) {
        *(undefined8 *)(&stack0x00002750 + lVar18) = *(undefined8 *)(&stack0x00002718 + lVar18);
        *(undefined8 *)(&stack0x000027d8 + lVar18) = *(undefined8 *)(&stack0x00002628 + lVar18);
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232486b;
        uVar22 = pdb_140f3c9d0();
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232487d;
        uVar23 = pdb_140f5a1d0(uVar22);
        *(undefined1 **)(&stack0x00001d20 + lVar18) = &stack0x00002750 + lVar18;
        *(code **)(&stack0x00001d28 + lVar18) = pdb_140f36c20;
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423248b5;
        pdb_140f60760(&stack0x00000740 + lVar18,&UNK_1434d9db8,puVar1);
        *(undefined8 *)(&stack0x00001d20 + lVar18) = *(undefined8 *)(&stack0x00000740 + lVar18);
        *(undefined8 *)(&stack0x00001d28 + lVar18) = *(undefined8 *)(&stack0x00000748 + lVar18);
        *(undefined8 *)(&stack0x00001d30 + lVar18) = *(undefined8 *)(&stack0x00000750 + lVar18);
        puVar9 = *(ulonglong **)(&stack0x000028c8 + lVar18);
        uVar20 = *puVar9;
        if (!SBORROW8(0,uVar20)) {
          if (uVar20 != 0) {
            pbVar25 = (byte *)puVar9[1];
            *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423248f5;
            pub_1406abac0(pbVar25,uVar20,1);
          }
          uVar20 = puVar9[4];
          if (uVar20 != 0) {
            pbVar25 = (byte *)puVar9[5];
            *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x14232490d;
            pub_1406abac0(pbVar25,uVar20,1);
          }
        }
        *puVar9 = *(ulonglong *)(&stack0x000027d8 + lVar18);
        puVar9[1] = *(ulonglong *)(&stack0x000027e8 + lVar18);
        uVar20 = *(ulonglong *)(&stack0x00002640 + lVar18);
        puVar9[2] = *(ulonglong *)(&stack0x00002638 + lVar18);
        puVar9[3] = uVar20;
        uVar20 = *(ulonglong *)(&stack0x00001d28 + lVar18);
        puVar9[4] = *(ulonglong *)(&stack0x00001d20 + lVar18);
        puVar9[5] = uVar20;
        puVar9[6] = *(ulonglong *)(&stack0x00001d30 + lVar18);
        puVar9[7] = uVar23;
        *(undefined4 *)(puVar9 + 8) = uVar29;
        (&stack0x00002805)[lVar18] = 0;
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324965;
        pdb_140f36c40(&stack0x00002750 + lVar18);
        goto LAB_1423244a5;
      }
      *(undefined8 *)(&stack0x00002770 + lVar18) = *(undefined8 *)(&stack0x00002730 + lVar18);
      *(undefined8 *)(&stack0x00002778 + lVar18) = *(undefined8 *)(&stack0x00002738 + lVar18);
      *(undefined8 *)(&stack0x00002760 + lVar18) = *(undefined8 *)(&stack0x00002720 + lVar18);
      *(undefined8 *)(&stack0x00002768 + lVar18) = *(undefined8 *)(&stack0x00002728 + lVar18);
      *(undefined8 *)(&stack0x00002750 + lVar18) = *(undefined8 *)(&stack0x00002710 + lVar18);
      *(undefined8 *)(&stack0x00002758 + lVar18) = *(undefined8 *)(&stack0x00002718 + lVar18);
      uVar22 = 0x8000000000000000;
      if (!SBORROW8(0,*(longlong *)(&stack0x000025e0 + lVar18))) {
        *(undefined8 *)(&stack0x00001d38 + lVar18) = *(undefined8 *)(&stack0x000025f8 + lVar18);
        *(undefined8 *)(&stack0x00001d40 + lVar18) = *(undefined8 *)(&stack0x00002600 + lVar18);
        (&stack0x00002807)[lVar18] = 1;
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423249d4;
        pdb_140f60be0(puVar1);
        uVar22 = *(undefined8 *)(&stack0x00001d20 + lVar18);
        *(undefined8 *)(&stack0x00002790 + lVar18) = *(undefined8 *)(&stack0x00001d28 + lVar18);
        *(undefined8 *)(&stack0x000024f0 + lVar18) = *(undefined8 *)(&stack0x00001d30 + lVar18);
        *(undefined8 *)(&stack0x000024f8 + lVar18) = *(undefined8 *)(&stack0x00001d38 + lVar18);
        *(undefined8 *)(&stack0x00002500 + lVar18) = *(undefined8 *)(&stack0x00001d40 + lVar18);
      }
      plVar41 = *(longlong **)(&stack0x00002580 + lVar18);
      *(undefined8 *)(&stack0x000027d8 + lVar18) = uVar22;
      if ((longlong)plVar41 < 0) goto LAB_142324f9a;
      *(longlong **)(&stack0x000027d0 + lVar18) = plVar41;
      if (plVar41 == (longlong *)0x0) {
        *(undefined8 *)(&stack0x000027b8 + lVar18) = 1;
        goto LAB_142324b0c;
      }
      lVar19 = *(longlong *)(&stack0x00002578 + lVar18);
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324a37;
      pdb_14007ee60();
      uVar22 = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324a4d;
      pbVar25 = pub_1406abab0(*(ulonglong *)(&stack0x000027d0 + lVar18),1);
      plVar41 = *(longlong **)(&stack0x000027d0 + lVar18);
      *(byte **)(&stack0x000027b8 + lVar18) = pbVar25;
      if (pbVar25 == (byte *)0x0) goto LAB_142324f9c;
      plVar38 = (longlong *)((longlong)plVar41 + -1);
      if (plVar41 < (longlong *)((longlong)plVar41 + -1)) {
        plVar38 = plVar41;
      }
      if (plVar38 < (longlong *)0x20) {
        lVar46 = 0;
        lVar43 = *(longlong *)(&stack0x000027b8 + lVar18);
        lVar44 = lVar19;
        plVar38 = plVar41;
      }
      else {
        puVar35 = (undefined *)((longlong)plVar38 + 1);
        uVar20 = (ulonglong)((uint)puVar35 & 0x1f);
        if (((ulonglong)puVar35 & 0x1f) == 0) {
          uVar20 = 0x20;
        }
        lVar46 = (longlong)puVar35 - uVar20;
        plVar41 = (longlong *)((longlong)plVar41 - lVar46);
        lVar44 = lVar19 + lVar46;
        lVar42 = 0;
        lVar43 = *(longlong *)(&stack0x000027b8 + lVar18);
        do {
          uVar22 = ((undefined8 *)(lVar19 + lVar42))[1];
          puVar7 = (undefined8 *)(lVar19 + 0x10 + lVar42);
          uVar26 = *puVar7;
          uVar27 = puVar7[1];
          *(undefined8 *)(lVar43 + lVar42) = *(undefined8 *)(lVar19 + lVar42);
          ((undefined8 *)(lVar43 + lVar42))[1] = uVar22;
          puVar7 = (undefined8 *)(lVar43 + 0x10 + lVar42);
          *puVar7 = uVar26;
          puVar7[1] = uVar27;
          lVar42 = lVar42 + 0x20;
        } while (lVar46 != lVar42);
        plVar38 = *(longlong **)(&stack0x000027d0 + lVar18);
      }
      plVar21 = (longlong *)0x0;
      do {
        if ((undefined *)(lVar44 + (longlong)plVar21) == (undefined *)(lVar19 + (longlong)plVar38))
        break;
        *(undefined *)(lVar43 + lVar46 + (longlong)plVar21) =
             *(undefined *)(lVar44 + (longlong)plVar21);
        plVar21 = (longlong *)((longlong)plVar21 + 1);
      } while (plVar41 != plVar21);
LAB_142324b0c:
      uVar15 = (&stack0x000027c0)[lVar18];
      uVar37 = (&stack0x000027f7)[lVar18];
      *(undefined8 *)(&stack0x000027c0 + lVar18) = 0x8000000000000000;
      if (!SBORROW8(0,*(longlong *)(&stack0x000025a0 + lVar18))) {
        uVar15 = (&stack0x000025c8)[lVar18];
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324b4e;
        pdb_140f60be0(puVar1,&stack0x000025a0 + lVar18);
        (&stack0x00001d48)[lVar18] = uVar15;
        *(undefined8 *)(&stack0x00001d38 + lVar18) = *(undefined8 *)(&stack0x000025b8 + lVar18);
        *(undefined8 *)(&stack0x00001d40 + lVar18) = *(undefined8 *)(&stack0x000025c0 + lVar18);
        *(undefined4 *)(&stack0x00002558 + lVar18) = *(undefined4 *)(&stack0x000025d8 + lVar18);
        *(undefined8 *)(&stack0x00002550 + lVar18) = *(undefined8 *)(&stack0x000025d0 + lVar18);
        uVar15 = (&stack0x000025dc)[lVar18];
        uVar37 = (&stack0x000025dd)[lVar18];
        *(undefined8 *)(&stack0x000027c0 + lVar18) = *(undefined8 *)(&stack0x00001d20 + lVar18);
        *(undefined8 *)(&stack0x00002708 + lVar18) = *(undefined8 *)(&stack0x00001d28 + lVar18);
        *(undefined8 *)(&stack0x00002540 + lVar18) = *(undefined8 *)(&stack0x00001d40 + lVar18);
        *(undefined8 *)(&stack0x00002548 + lVar18) = *(undefined8 *)(&stack0x00001d48 + lVar18);
        *(undefined8 *)(&stack0x00001d20 + lVar18) = *(undefined8 *)(&stack0x00001d30 + lVar18);
        *(undefined8 *)(&stack0x00001d28 + lVar18) = *(undefined8 *)(&stack0x00001d38 + lVar18);
        *(undefined8 *)(&stack0x00001d30 + lVar18) = *(undefined8 *)(&stack0x00001d40 + lVar18);
        *(undefined8 *)(&stack0x00001d38 + lVar18) = *(undefined8 *)(&stack0x00001d48 + lVar18);
        *(undefined8 *)(&stack0x00001d3c + lVar18) = *(undefined8 *)(&stack0x0000254c + lVar18);
        *(undefined8 *)(&stack0x00001d44 + lVar18) = *(undefined8 *)(&stack0x00002554 + lVar18);
      }
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324bfa;
      pdb_140d92570(&stack0x00002530 + lVar18,*(undefined8 *)(&stack0x00002590 + lVar18),
                    *(undefined8 *)(&stack0x00002598 + lVar18));
      (&stack0x000007d8)[lVar18] = cVar14;
      *(undefined8 *)(&stack0x00000740 + lVar18) = *(undefined8 *)(&stack0x000027d0 + lVar18);
      *(undefined8 *)(&stack0x00000748 + lVar18) = *(undefined8 *)(&stack0x000027b8 + lVar18);
      *(undefined8 *)(&stack0x00000750 + lVar18) = *(undefined8 *)(&stack0x000027d0 + lVar18);
      *(undefined8 *)(&stack0x00000770 + lVar18) = *(undefined8 *)(&stack0x000027c0 + lVar18);
      *(undefined8 *)(&stack0x00000778 + lVar18) = *(undefined8 *)(&stack0x00002708 + lVar18);
      *(undefined8 *)(&stack0x0000079c + lVar18) = *(undefined8 *)(&stack0x00001d3c + lVar18);
      *(undefined8 *)(&stack0x000007a4 + lVar18) = *(undefined8 *)(&stack0x00001d44 + lVar18);
      *(undefined8 *)(&stack0x00000790 + lVar18) = *(undefined8 *)(&stack0x00001d30 + lVar18);
      *(undefined8 *)(&stack0x00000798 + lVar18) = *(undefined8 *)(&stack0x00001d38 + lVar18);
      *(undefined8 *)(&stack0x00000780 + lVar18) = *(undefined8 *)(&stack0x00001d20 + lVar18);
      *(undefined8 *)(&stack0x00000788 + lVar18) = *(undefined8 *)(&stack0x00001d28 + lVar18);
      (&stack0x000027c0)[lVar18] = uVar15;
      (&stack0x000007ac)[lVar18] = uVar15;
      (&stack0x000027f7)[lVar18] = uVar37;
      (&stack0x000007ad)[lVar18] = uVar37;
      *(undefined8 *)(&stack0x00000768 + lVar18) = *(undefined8 *)(&stack0x00002540 + lVar18);
      *(undefined8 *)(&stack0x00000758 + lVar18) = *(undefined8 *)(&stack0x00002530 + lVar18);
      *(undefined8 *)(&stack0x00000760 + lVar18) = *(undefined8 *)(&stack0x00002538 + lVar18);
      *(undefined8 *)(&stack0x000007b0 + lVar18) = *(undefined8 *)(&stack0x000027d8 + lVar18);
      *(undefined8 *)(&stack0x000007b8 + lVar18) = *(undefined8 *)(&stack0x00002790 + lVar18);
      *(undefined8 *)(&stack0x000007d0 + lVar18) = *(undefined8 *)(&stack0x00002500 + lVar18);
      *(undefined8 *)(&stack0x000007c0 + lVar18) = *(undefined8 *)(&stack0x000024f0 + lVar18);
      *(undefined8 *)(&stack0x000007c8 + lVar18) = *(undefined8 *)(&stack0x000024f8 + lVar18);
      *(undefined8 *)(&stack0x00001d20 + lVar18) = *(undefined8 *)(&stack0x00002740 + lVar18);
      *(undefined8 *)(&stack0x00001d28 + lVar18) = *(undefined8 *)(&stack0x00002748 + lVar18);
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324ced;
      lVar19 = pdb_140a92450(&stack0x00000740 + lVar18,puVar1);
      *(longlong *)(&stack0x00001d20 + lVar18) = lVar19;
      if (lVar19 != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324d02;
        pdb_140f36c40(puVar1);
      }
      (&stack0x00002807)[lVar18] = 1;
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324d16;
      pdb_1404cc180(&stack0x00000740 + lVar18);
      puVar7 = *(undefined8 **)(&stack0x000028b0 + lVar18);
      *(undefined4 *)puVar7[2] = *(undefined4 *)((longlong)puVar7 + 0x1c);
      *(undefined1 *)*puVar7 = 2;
      *(undefined8 *)(&stack0x00001d60 + lVar18) = *(undefined8 *)(&stack0x00002730 + lVar18);
      *(undefined8 *)(&stack0x00001d68 + lVar18) = *(undefined8 *)(&stack0x00002738 + lVar18);
      *(undefined8 *)(&stack0x00001d50 + lVar18) = *(undefined8 *)(&stack0x00002720 + lVar18);
      *(undefined8 *)(&stack0x00001d58 + lVar18) = *(undefined8 *)(&stack0x00002728 + lVar18);
      *(undefined8 *)(&stack0x00001d40 + lVar18) = *(undefined8 *)(&stack0x00002710 + lVar18);
      *(undefined8 *)(&stack0x00001d48 + lVar18) = *(undefined8 *)(&stack0x00002718 + lVar18);
      *(undefined8 *)(&stack0x00001d70 + lVar18) = *(undefined8 *)(&stack0x00002740 + lVar18);
      *(undefined8 *)(&stack0x00001d78 + lVar18) = *(undefined8 *)(&stack0x00002748 + lVar18);
      *(undefined8 *)(&stack0x00000758 + lVar18) = 0x8000000000000000;
      *(undefined8 *)(&stack0x00000740 + lVar18) = 0;
      *(undefined8 *)(&stack0x00000748 + lVar18) = 8;
      *(undefined8 *)(&stack0x00000750 + lVar18) = 0;
      (&stack0x00000820)[lVar18] = 0;
      *(undefined8 *)(&stack0x00000818 + lVar18) = 0;
      *(undefined8 *)(&stack0x00001d38 + lVar18) = 0x8000000000000003;
      *(undefined8 *)(&stack0x00001d20 + lVar18) = *(undefined8 *)(&stack0x00000740 + lVar18);
      *(undefined8 *)(&stack0x00001d28 + lVar18) = *(undefined8 *)(&stack0x00000748 + lVar18);
      *(undefined8 *)(&stack0x00001d30 + lVar18) = 0;
      (&stack0x00001e00)[lVar18] = 0;
      *(undefined8 *)(&stack0x00001df8 + lVar18) = 0;
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324e0a;
      pdb_1411b0760(*(undefined8 *)(&stack0x000028b8 + lVar18),puVar1,&UNK_1434d9ef0);
      uVar20 = *(ulonglong *)(&stack0x00000758 + lVar18) ^ 0x8000000000000000;
      if (-1 < (longlong)*(ulonglong *)(&stack0x00000758 + lVar18)) {
        uVar20 = 4;
      }
      if (2 < uVar20) {
        if (uVar20 == 3) {
          *(undefined8 *)(&stack0x000027d8 + lVar18) = *(undefined8 *)(&stack0x00000780 + lVar18);
          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324e3f;
          pdb_141180fc0();
          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324e57;
          pub_1406abac0(*(byte **)(&stack0x000027d8 + lVar18),0x140,8);
          uVar20 = *(ulonglong *)(&stack0x00000760 + lVar18);
          if (uVar20 != 0) {
            pbVar25 = *(byte **)(&stack0x00000768 + lVar18);
LAB_142324e91:
            *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324e9c;
            pub_1406abac0(pbVar25,uVar20,1);
          }
        }
        else {
          *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324e78;
          pdb_1404cc180(&stack0x00000758 + lVar18);
          uVar20 = *(ulonglong *)(&stack0x000007f8 + lVar18);
          if ((!SBORROW8(0,uVar20)) && (uVar20 != 0)) {
            pbVar25 = *(byte **)(&stack0x00000800 + lVar18);
            goto LAB_142324e91;
          }
        }
      }
      puVar7 = *(undefined8 **)(&stack0x000028a0 + lVar18);
      *(undefined4 *)puVar7[2] = *(undefined4 *)((longlong)puVar7 + 0x1c);
      uVar22 = *puVar7;
      *(undefined8 *)(&stack0x00000740 + lVar18) = 2;
      (&stack0x00002807)[lVar18] = 0;
      *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324ecd;
      pdb_140a003a0(uVar22,&stack0x00000740 + lVar18);
      plVar38 = *(longlong **)(&stack0x000028d8 + lVar18);
      *(undefined4 *)plVar38[2] = *(undefined4 *)((longlong)plVar38 + 0x1c);
      lVar19 = *plVar38;
      lVar44 = *(longlong *)(lVar19 + 0x30);
      uVar22 = *(undefined8 *)(lVar19 + 0x40);
      if (lVar44 == *(longlong *)(lVar19 + 0x20)) {
        (&stack0x00002807)[lVar18] = 0;
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142324eff;
        pdb_142d7e980(lVar19 + 0x20);
      }
      lVar43 = *(longlong *)(lVar19 + 0x28);
      *(undefined8 *)(lVar43 + lVar44 * 0x10) = uVar22;
      *(undefined1 *)(lVar43 + 8 + lVar44 * 0x10) = 8;
      *(longlong *)(lVar19 + 0x30) = lVar44 + 1;
      *(longlong *)(lVar19 + 0x40) = *(longlong *)(lVar19 + 0x40) + 1;
      uVar20 = *(ulonglong *)(&stack0x00002628 + lVar18);
joined_r0x0001423246cf:
      if (uVar20 != 0) {
        *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x1423246e7;
        pub_1406abac0(*(byte **)(&stack0x000027e8 + lVar18),uVar20,1);
      }
    } while( true );
  }
LAB_142323ef4:
  auVar56[0] = -(auVar50[0] == -1);
  auVar56[1] = -(auVar50[1] == -1);
  auVar56[2] = -(auVar50[2] == -1);
  auVar56[3] = -(auVar50[3] == -1);
  auVar56[4] = -(auVar50[4] == -1);
  auVar56[5] = -(auVar50[5] == -1);
  auVar56[6] = -(auVar50[6] == -1);
  auVar56[7] = -(auVar50[7] == -1);
  auVar56[8] = -(auVar50[8] == -1);
  auVar56[9] = -(auVar50[9] == -1);
  auVar56[10] = -(auVar50[10] == -1);
  auVar56[0xb] = -(auVar50[0xb] == -1);
  auVar56[0xc] = -(auVar50[0xc] == -1);
  auVar56[0xd] = -(auVar50[0xd] == -1);
  auVar56[0xe] = -(auVar50[0xe] == -1);
  auVar56[0xf] = -(auVar50[0xf] == -1);
  if ((((((((((((((((SUB161(auVar56 >> 7,0) & 1) != 0 || (SUB161(auVar56 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar56 >> 0x17,0) & 1) != 0) || (SUB161(auVar56 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar56 >> 0x27,0) & 1) != 0) || (SUB161(auVar56 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar56 >> 0x37,0) & 1) != 0) || (SUB161(auVar56 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar56 >> 0x47,0) & 1) != 0) || (SUB161(auVar56 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar56 >> 0x57,0) & 1) != 0) || (SUB161(auVar56 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar56 >> 0x67,0) & 1) != 0) || (SUB161(auVar56 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar56 >> 0x77,0) & 1) != 0) || auVar56[0xf] < '\0') goto LAB_142323fc6;
  uVar20 = uVar20 + lVar44 + 0x10;
  lVar44 = lVar44 + 0x10;
  goto LAB_142323eae;
code_r0x000142323ee7:
  uVar45 = (ushort)(uVar17 - 1) & (ushort)uVar17;
  uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar45);
  if (uVar45 == 0) goto LAB_142323ef4;
  goto LAB_142323ec8;
LAB_142323fc6:
  *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323fde;
  pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
  goto LAB_1423257b5;
LAB_142323fa8:
  *(undefined8 *)((longlong)&uStack_48 + lVar18) = 0x142323fc0;
  pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
LAB_1423257b5:
                    /* WARNING: Does not return */
  pcVar10 = (code *)invalidInstructionException();
  (*pcVar10)();
}

