// VA 0x141175180, PDB extent 2622 bytes
// toolbar::menu::report_bug::impl$11::text_edit<ref$<str$> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::report_bug::impl$11::text_edit<ref$<str$> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
   Extent: 2622 */

longlong *
pdb_141175180(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6,longlong *param_7)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  ulonglong *puVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  undefined *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  ushort uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  byte bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  longlong lStack_2d8;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined5 uStack_84;
  undefined3 uStack_7f;
  undefined5 uStack_7c;
  longlong *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar2 = param_7;
  uStack_48 = 0xfffffffffffffffe;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_2e8 = (longlong *)pdb_140bbbcb0(&uStack_68);
  uStack_2e0 = _DAT_14329c300;
  lStack_2d8 = _UNK_14329c308;
  uStack_2e0 = pdb_1400affa0(&uStack_2e8);
  uStack_2e8 = *(longlong **)(param_2 + 8);
  uVar9 = pdb_1400b0130(&uStack_2e8);
  pdb_14072caa0(&uStack_68,param_2,uVar9);
  lVar13 = uStack_68;
  if (*(longlong *)(uStack_68 + 0x1c8) != 0) {
    uVar10 = pdb_1400af0a0(uStack_68 + 0x1d0,&uStack_60);
    lVar22 = *(longlong *)(lVar13 + 0x1b0);
    bVar24 = (byte)(uVar10 >> 0x39);
    auVar25 = ZEXT216(CONCAT11(bVar24,bVar24));
    auVar25 = pshuflw(auVar25,auVar25,0);
    puVar15 = (undefined8 *)0x0;
    while( true ) {
      uVar10 = uVar10 & *(ulonglong *)(lVar13 + 0x1b8);
      auVar26 = *(undefined1 (*) [16])(lVar22 + uVar10);
      auVar32[0] = -(auVar26[0] == auVar25[0]);
      auVar32[1] = -(auVar26[1] == auVar25[1]);
      auVar32[2] = -(auVar26[2] == auVar25[2]);
      auVar32[3] = -(auVar26[3] == auVar25[3]);
      auVar32[4] = -(auVar26[4] == auVar25[4]);
      auVar32[5] = -(auVar26[5] == auVar25[5]);
      auVar32[6] = -(auVar26[6] == auVar25[6]);
      auVar32[7] = -(auVar26[7] == auVar25[7]);
      auVar32[8] = -(auVar26[8] == auVar25[0]);
      auVar32[9] = -(auVar26[9] == auVar25[1]);
      auVar32[10] = -(auVar26[10] == auVar25[2]);
      auVar32[0xb] = -(auVar26[0xb] == auVar25[3]);
      auVar32[0xc] = -(auVar26[0xc] == auVar25[4]);
      auVar32[0xd] = -(auVar26[0xd] == auVar25[5]);
      auVar32[0xe] = -(auVar26[0xe] == auVar25[6]);
      auVar32[0xf] = -(auVar26[0xf] == auVar25[7]);
      uVar19 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf;
      uVar8 = (uint)uVar19;
      while (uVar19 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        lVar20 = (uVar4 + uVar10 & *(ulonglong *)(lVar13 + 0x1b8)) * -0xd8;
        if (uStack_60 == *(longlong *)(lVar22 + -0xd8 + lVar20)) {
          lVar22 = lVar22 + lVar20;
          pbVar11 = *(byte **)(lVar22 + -0x38);
          if (pbVar11 == (byte *)0x0) {
            plVar1 = *(longlong **)(lVar13 + 0x270);
            LOCK();
            lVar13 = *plVar1;
            *plVar1 = *plVar1 + 1;
            UNLOCK();
            if (*plVar1 == 0 || SCARRY8(lVar13,1) != *plVar1 < 0) goto LAB_141175a61;
            pdb_14119b370(&uStack_2e8,_DAT_142f95190,2);
            uStack_88 = 0xffffffff;
            uStack_90 = 0;
            uStack_84 = 0;
            uStack_7f = 0;
            uStack_7c = 0;
            pdb_14007ee60();
            pbVar11 = pub_1406abab0(0x278,8);
            if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc7e11(8,0x278);
            }
            puVar15 = &uStack_2e8;
            pub_142e32760(pbVar11,puVar15,0x278);
            *(byte **)(lVar22 + -0x38) = pbVar11;
            puVar12 = &UNK_14329c628;
            *(undefined **)(lVar22 + -0x30) = &UNK_14329c628;
          }
          else {
            puVar12 = *(undefined **)(lVar22 + -0x30);
          }
          lVar13 = (**(code **)(puVar12 + 0x28))(pbVar11);
          (*(code *)puVar15[3])(&uStack_2e8,lVar13);
          auVar25[0] = -((char)uStack_2e8 == DAT_14329bc30);
          auVar25[1] = -(uStack_2e8._1_1_ == UNK_14329bc31);
          auVar25[2] = -(uStack_2e8._2_1_ == UNK_14329bc32);
          auVar25[3] = -(uStack_2e8._3_1_ == UNK_14329bc33);
          auVar25[4] = -(uStack_2e8._4_1_ == UNK_14329bc34);
          auVar25[5] = -(uStack_2e8._5_1_ == UNK_14329bc35);
          auVar25[6] = -(uStack_2e8._6_1_ == UNK_14329bc36);
          auVar25[7] = -(uStack_2e8._7_1_ == UNK_14329bc37);
          auVar25[8] = -((char)uStack_2e0 == UNK_14329bc38);
          auVar25[9] = -(uStack_2e0._1_1_ == UNK_14329bc39);
          auVar25[10] = -(uStack_2e0._2_1_ == UNK_14329bc3a);
          auVar25[0xb] = -(uStack_2e0._3_1_ == UNK_14329bc3b);
          auVar25[0xc] = -(uStack_2e0._4_1_ == UNK_14329bc3c);
          auVar25[0xd] = -(uStack_2e0._5_1_ == UNK_14329bc3d);
          auVar25[0xe] = -(uStack_2e0._6_1_ == UNK_14329bc3e);
          auVar25[0xf] = -(uStack_2e0._7_1_ == UNK_14329bc3f);
          if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar25[0xf] >> 7) << 0xf) != 0xffff) {
            pdb_142dc8110(&UNK_14329c4d8,8,&UNK_14329c528);
            goto LAB_141175a61;
          }
          if (*(char *)(lVar13 + 0x270) == '\0') {
            plVar1 = plVar2 + 2;
            LOCK();
            bVar23 = (char)plVar2[2] == '\0';
            if (bVar23) {
              *(char *)(plVar2 + 2) = '\x01';
            }
            UNLOCK();
            if (!bVar23) {
              pdb_142dc6be0(plVar1);
            }
            puVar6 = _DAT_143ca8f38;
            if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
              uVar8 = 0;
              cVar7 = *(char *)((longlong)plVar2 + 0x11);
              lVar22 = (longlong)uStack_2e8;
            }
            else {
              uVar8 = pdb_142dc79e0();
              uVar8 = uVar8 ^ 1;
              cVar7 = *(char *)((longlong)plVar2 + 0x11);
              lVar22 = (longlong)uStack_2e8;
            }
            if (cVar7 != '\0') {
              uVar10 = (ulonglong)uStack_2e0 >> 8;
              uStack_2e0 = CONCAT71((int7)uVar10,(char)uVar8);
              uStack_2e8 = plVar1;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_14329c3a8,0x2b,&uStack_2e8,&UNK_14329c388,&UNK_14329ddb8);
            }
            uStack_2e8 = (longlong *)plVar2[3];
            plVar2[3] = 4;
            if (uStack_2e8 == (longlong *)0x4) {
              uStack_2e8 = (longlong *)lVar22;
              if ((((char)uVar8 == '\0') && ((*puVar6 & 0x7fffffffffffffff) != 0)) &&
                 (cVar7 = pdb_142dc79e0(), cVar7 == '\0')) {
                *(undefined1 *)((longlong)plVar2 + 0x11) = 1;
              }
              LOCK();
              lVar22 = *plVar1;
              *(char *)plVar1 = '\0';
              UNLOCK();
              if ((char)lVar22 == '\x02') {
                pdb_142dc6ca0(plVar1);
              }
              pdb_14119b2b0(lVar13);
              pdb_14119b6b0(lVar13,param_5,param_6);
            }
            else {
              uVar10 = (ulonglong)uStack_50 >> 0x20;
              uStack_50 = (undefined8 *)CONCAT44((int)uVar10,uVar8);
              plStack_70 = plVar1;
              pub_142e32760(&uStack_2e0,plVar2 + 4,0x198);
              pdb_140cb5e10(lVar13,&uStack_2e8);
              if ((((char)uStack_50 == '\0') && ((*puVar6 & 0x7fffffffffffffff) != 0)) &&
                 (cVar7 = pdb_142dc79e0(), cVar7 == '\0')) {
                *(undefined1 *)((longlong)plVar2 + 0x11) = 1;
              }
              LOCK();
              lVar22 = plVar2[2];
              *(char *)(plVar2 + 2) = '\0';
              UNLOCK();
              if ((char)lVar22 == '\x02') {
                pdb_142dc6ca0();
              }
            }
            plStack_70 = plVar2;
            LOCK();
            lVar22 = *plVar2;
            *plVar2 = *plVar2 + 1;
            UNLOCK();
            if (*plVar2 == 0 || SCARRY8(lVar22,1) != *plVar2 < 0) goto LAB_141175a61;
            uStack_50 = (undefined8 *)(lVar13 + 600);
            plVar2 = *(longlong **)(lVar13 + 600);
            if (plVar2 != (longlong *)0x0) {
              LOCK();
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                pdb_140734ba0(uStack_50);
              }
            }
            *uStack_50 = plStack_70;
          }
          lVar13 = uStack_68;
          uStack_2e8 = (longlong *)uStack_68;
          uStack_2e0 = uStack_60;
          lStack_2d8 = lStack_58;
          if (*(longlong *)(uStack_68 + 0x1c8) == 0) goto LAB_1411757cb;
          uVar14 = pdb_1400af0a0(uStack_68 + 0x1d0,&uStack_2e0);
          lVar20 = (longlong)uStack_2e8;
          lVar22 = *(longlong *)(lVar13 + 0x1b0);
          uVar10 = *(ulonglong *)(lVar13 + 0x1b8);
          bVar24 = (byte)(uVar14 >> 0x39);
          auVar25 = ZEXT216(CONCAT11(bVar24,bVar24));
          auVar25 = pshuflw(auVar25,auVar25,0);
          lVar13 = 0;
          goto LAB_14117559e;
        }
        uVar19 = (ushort)(uVar8 - 1) & (ushort)uVar8;
        uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar19);
      }
      auVar27[0] = -(auVar26[0] == -1);
      auVar27[1] = -(auVar26[1] == -1);
      auVar27[2] = -(auVar26[2] == -1);
      auVar27[3] = -(auVar26[3] == -1);
      auVar27[4] = -(auVar26[4] == -1);
      auVar27[5] = -(auVar26[5] == -1);
      auVar27[6] = -(auVar26[6] == -1);
      auVar27[7] = -(auVar26[7] == -1);
      auVar27[8] = -(auVar26[8] == -1);
      auVar27[9] = -(auVar26[9] == -1);
      auVar27[10] = -(auVar26[10] == -1);
      auVar27[0xb] = -(auVar26[0xb] == -1);
      auVar27[0xc] = -(auVar26[0xc] == -1);
      auVar27[0xd] = -(auVar26[0xd] == -1);
      auVar27[0xe] = -(auVar26[0xe] == -1);
      auVar27[0xf] = -(auVar26[0xf] == -1);
      if ((((((((((((((((SUB161(auVar27 >> 7,0) & 1) != 0 || (SUB161(auVar27 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar27 >> 0x17,0) & 1) != 0) || (SUB161(auVar27 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar27 >> 0x27,0) & 1) != 0) || (SUB161(auVar27 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar27 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar27 >> 0x3f,0) & 1) != 0) || (SUB161(auVar27 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar27 >> 0x4f,0) & 1) != 0) || (SUB161(auVar27 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar27 >> 0x5f,0) & 1) != 0) || (SUB161(auVar27 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar27 >> 0x6f,0) & 1) != 0) || (SUB161(auVar27 >> 0x77,0) & 1) != 0) ||
          auVar27[0xf] < '\0') break;
      uVar10 = (longlong)puVar15 + uVar10 + 0x10;
      puVar15 = puVar15 + 2;
    }
  }
  pdb_142dc8110(&UNK_14329c448,0xb,&UNK_14329c510);
LAB_141175a61:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
LAB_14117559e:
  uVar14 = uVar14 & uVar10;
  auVar26 = *(undefined1 (*) [16])(lVar22 + uVar14);
  auVar33[0] = -(auVar26[0] == auVar25[0]);
  auVar33[1] = -(auVar26[1] == auVar25[1]);
  auVar33[2] = -(auVar26[2] == auVar25[2]);
  auVar33[3] = -(auVar26[3] == auVar25[3]);
  auVar33[4] = -(auVar26[4] == auVar25[4]);
  auVar33[5] = -(auVar26[5] == auVar25[5]);
  auVar33[6] = -(auVar26[6] == auVar25[6]);
  auVar33[7] = -(auVar26[7] == auVar25[7]);
  auVar33[8] = -(auVar26[8] == auVar25[0]);
  auVar33[9] = -(auVar26[9] == auVar25[1]);
  auVar33[10] = -(auVar26[10] == auVar25[2]);
  auVar33[0xb] = -(auVar26[0xb] == auVar25[3]);
  auVar33[0xc] = -(auVar26[0xc] == auVar25[4]);
  auVar33[0xd] = -(auVar26[0xd] == auVar25[5]);
  auVar33[0xe] = -(auVar26[0xe] == auVar25[6]);
  auVar33[0xf] = -(auVar26[0xf] == auVar25[7]);
  uVar19 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf;
  uVar8 = (uint)uVar19;
  while (uVar19 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    lVar21 = (uVar4 + uVar14 & uVar10) * -0xd8;
    if (uStack_2e0 == *(longlong *)(lVar22 + -0xd8 + lVar21)) {
      pbVar11 = (byte *)(lVar22 + lVar21 + -5);
      *pbVar11 = *pbVar11 | 0x20;
      lStack_58 = lStack_2d8;
      uStack_68 = (longlong)uStack_2e8;
      uStack_60 = uStack_2e0;
      if (*(longlong *)((longlong)uStack_2e8 + 0x1c8) == 0) goto LAB_141175877;
      uVar14 = pdb_1400af0a0((longlong)uStack_2e8 + 0x1d0,&uStack_60);
      lVar22 = uStack_68;
      lVar13 = *(longlong *)(lVar20 + 0x1b0);
      uVar10 = *(ulonglong *)(lVar20 + 0x1b8);
      bVar24 = (byte)(uVar14 >> 0x39);
      auVar25 = ZEXT216(CONCAT11(bVar24,bVar24));
      auVar25 = pshuflw(auVar25,auVar25,0);
      lVar20 = 0;
      goto LAB_14117568c;
    }
    uVar19 = (ushort)(uVar8 - 1) & (ushort)uVar8;
    uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar19);
  }
  auVar28[0] = -(auVar26[0] == -1);
  auVar28[1] = -(auVar26[1] == -1);
  auVar28[2] = -(auVar26[2] == -1);
  auVar28[3] = -(auVar26[3] == -1);
  auVar28[4] = -(auVar26[4] == -1);
  auVar28[5] = -(auVar26[5] == -1);
  auVar28[6] = -(auVar26[6] == -1);
  auVar28[7] = -(auVar26[7] == -1);
  auVar28[8] = -(auVar26[8] == -1);
  auVar28[9] = -(auVar26[9] == -1);
  auVar28[10] = -(auVar26[10] == -1);
  auVar28[0xb] = -(auVar26[0xb] == -1);
  auVar28[0xc] = -(auVar26[0xc] == -1);
  auVar28[0xd] = -(auVar26[0xd] == -1);
  auVar28[0xe] = -(auVar26[0xe] == -1);
  auVar28[0xf] = -(auVar26[0xf] == -1);
  if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 || (SUB161(auVar28 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar28 >> 0x17,0) & 1) != 0) || (SUB161(auVar28 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar28 >> 0x27,0) & 1) != 0) || (SUB161(auVar28 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar28 >> 0x37,0) & 1) != 0) || (SUB161(auVar28 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar28 >> 0x47,0) & 1) != 0) || (SUB161(auVar28 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar28 >> 0x57,0) & 1) != 0) || (SUB161(auVar28 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar28 >> 0x67,0) & 1) != 0) || (SUB161(auVar28 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar28 >> 0x77,0) & 1) != 0) || auVar28[0xf] < '\0') {
LAB_1411757cb:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6b60);
  }
  uVar14 = uVar14 + lVar13 + 0x10;
  lVar13 = lVar13 + 0x10;
  goto LAB_14117559e;
LAB_14117568c:
  uVar14 = uVar14 & uVar10;
  auVar26 = *(undefined1 (*) [16])(lVar13 + uVar14);
  auVar34[0] = -(auVar26[0] == auVar25[0]);
  auVar34[1] = -(auVar26[1] == auVar25[1]);
  auVar34[2] = -(auVar26[2] == auVar25[2]);
  auVar34[3] = -(auVar26[3] == auVar25[3]);
  auVar34[4] = -(auVar26[4] == auVar25[4]);
  auVar34[5] = -(auVar26[5] == auVar25[5]);
  auVar34[6] = -(auVar26[6] == auVar25[6]);
  auVar34[7] = -(auVar26[7] == auVar25[7]);
  auVar34[8] = -(auVar26[8] == auVar25[0]);
  auVar34[9] = -(auVar26[9] == auVar25[1]);
  auVar34[10] = -(auVar26[10] == auVar25[2]);
  auVar34[0xb] = -(auVar26[0xb] == auVar25[3]);
  auVar34[0xc] = -(auVar26[0xc] == auVar25[4]);
  auVar34[0xd] = -(auVar26[0xd] == auVar25[5]);
  auVar34[0xe] = -(auVar26[0xe] == auVar25[6]);
  auVar34[0xf] = -(auVar26[0xf] == auVar25[7]);
  uVar19 = (ushort)(SUB161(auVar34 >> 7,0) & 1) | (ushort)(SUB161(auVar34 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar34 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar34 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar34 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar34 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar34 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar34 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar34 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar34 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar34 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar34 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar34 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar34 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar34 >> 0x77,0) & 1) << 0xe | (ushort)(auVar34[0xf] >> 7) << 0xf;
  uVar8 = (uint)uVar19;
  while (uVar19 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    lVar21 = (uVar4 + uVar14 & uVar10) * -0xd8;
    if (uStack_60 == *(longlong *)(lVar13 + -0xd8 + lVar21)) {
      pbVar11 = (byte *)(lVar13 + lVar21 + -5);
      *pbVar11 = *pbVar11 | 4;
      lStack_2d8 = lStack_58;
      uStack_2e8 = (longlong *)uStack_68;
      uStack_2e0 = uStack_60;
      if (*(longlong *)(uStack_68 + 0x1c8) == 0) goto LAB_141175889;
      lVar13 = uStack_68 + 0x1d0;
      uVar14 = pdb_1400af0a0(lVar13,&uStack_2e0);
      lVar21 = uStack_2e0;
      lVar20 = *(longlong *)(lVar22 + 0x1b0);
      uVar10 = *(ulonglong *)(lVar22 + 0x1b8);
      bVar24 = (byte)(uVar14 >> 0x39);
      auVar25 = ZEXT216(CONCAT11(bVar24,bVar24));
      auVar25 = pshuflw(auVar25,auVar25,0);
      lVar22 = 0;
      goto LAB_141175769;
    }
    uVar19 = (ushort)(uVar8 - 1) & (ushort)uVar8;
    uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar19);
  }
  auVar29[0] = -(auVar26[0] == -1);
  auVar29[1] = -(auVar26[1] == -1);
  auVar29[2] = -(auVar26[2] == -1);
  auVar29[3] = -(auVar26[3] == -1);
  auVar29[4] = -(auVar26[4] == -1);
  auVar29[5] = -(auVar26[5] == -1);
  auVar29[6] = -(auVar26[6] == -1);
  auVar29[7] = -(auVar26[7] == -1);
  auVar29[8] = -(auVar26[8] == -1);
  auVar29[9] = -(auVar26[9] == -1);
  auVar29[10] = -(auVar26[10] == -1);
  auVar29[0xb] = -(auVar26[0xb] == -1);
  auVar29[0xc] = -(auVar26[0xc] == -1);
  auVar29[0xd] = -(auVar26[0xd] == -1);
  auVar29[0xe] = -(auVar26[0xe] == -1);
  auVar29[0xf] = -(auVar26[0xf] == -1);
  if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar29 >> 0x17,0) & 1) != 0) || (SUB161(auVar29 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar29 >> 0x27,0) & 1) != 0) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar29 >> 0x37,0) & 1) != 0) || (SUB161(auVar29 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar29 >> 0x47,0) & 1) != 0) || (SUB161(auVar29 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar29 >> 0x57,0) & 1) != 0) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') {
LAB_141175877:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_142fa6a70);
  }
  uVar14 = uVar14 + lVar20 + 0x10;
  lVar20 = lVar20 + 0x10;
  goto LAB_14117568c;
LAB_141175769:
  uVar14 = uVar14 & uVar10;
  auVar26 = *(undefined1 (*) [16])(lVar20 + uVar14);
  auVar35[0] = -(auVar26[0] == auVar25[0]);
  auVar35[1] = -(auVar26[1] == auVar25[1]);
  auVar35[2] = -(auVar26[2] == auVar25[2]);
  auVar35[3] = -(auVar26[3] == auVar25[3]);
  auVar35[4] = -(auVar26[4] == auVar25[4]);
  auVar35[5] = -(auVar26[5] == auVar25[5]);
  auVar35[6] = -(auVar26[6] == auVar25[6]);
  auVar35[7] = -(auVar26[7] == auVar25[7]);
  auVar35[8] = -(auVar26[8] == auVar25[0]);
  auVar35[9] = -(auVar26[9] == auVar25[1]);
  auVar35[10] = -(auVar26[10] == auVar25[2]);
  auVar35[0xb] = -(auVar26[0xb] == auVar25[3]);
  auVar35[0xc] = -(auVar26[0xc] == auVar25[4]);
  auVar35[0xd] = -(auVar26[0xd] == auVar25[5]);
  auVar35[0xe] = -(auVar26[0xe] == auVar25[6]);
  auVar35[0xf] = -(auVar26[0xf] == auVar25[7]);
  uVar19 = (ushort)(SUB161(auVar35 >> 7,0) & 1) | (ushort)(SUB161(auVar35 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar35 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar35 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar35 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar35 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar35 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar35 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar35 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar35 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar35 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar35 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar35 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar35 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar35 >> 0x77,0) & 1) << 0xe | (ushort)(auVar35[0xf] >> 7) << 0xf;
  uVar8 = (uint)uVar19;
  while (uVar19 != 0) {
    uVar4 = 0;
    for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
      uVar4 = uVar4 + 1;
    }
    lVar18 = (uVar4 + uVar14 & uVar10) * -0xd8;
    if (uStack_2e0 == *(longlong *)(lVar20 + -0xd8 + lVar18)) {
      if ((*(byte *)(lVar18 + lVar20 + -6) & 0x30) == 0) goto LAB_1411758fc;
      uVar14 = pdb_1400af0a0(lVar13,&uStack_2e0);
      bVar24 = (byte)(uVar14 >> 0x39);
      auVar25 = ZEXT216(CONCAT11(bVar24,bVar24));
      auVar25 = pshuflw(auVar25,auVar25,0);
      lVar13 = 0;
      goto LAB_141175815;
    }
    uVar19 = (ushort)(uVar8 - 1) & (ushort)uVar8;
    uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar19);
  }
  auVar30[0] = -(auVar26[0] == -1);
  auVar30[1] = -(auVar26[1] == -1);
  auVar30[2] = -(auVar26[2] == -1);
  auVar30[3] = -(auVar26[3] == -1);
  auVar30[4] = -(auVar26[4] == -1);
  auVar30[5] = -(auVar26[5] == -1);
  auVar30[6] = -(auVar26[6] == -1);
  auVar30[7] = -(auVar26[7] == -1);
  auVar30[8] = -(auVar26[8] == -1);
  auVar30[9] = -(auVar26[9] == -1);
  auVar30[10] = -(auVar26[10] == -1);
  auVar30[0xb] = -(auVar26[0xb] == -1);
  auVar30[0xc] = -(auVar26[0xc] == -1);
  auVar30[0xd] = -(auVar26[0xd] == -1);
  auVar30[0xe] = -(auVar26[0xe] == -1);
  auVar30[0xf] = -(auVar26[0xf] == -1);
  if ((((((((((((((((SUB161(auVar30 >> 7,0) & 1) != 0 || (SUB161(auVar30 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar30 >> 0x17,0) & 1) != 0) || (SUB161(auVar30 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar30 >> 0x27,0) & 1) != 0) || (SUB161(auVar30 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar30 >> 0x37,0) & 1) != 0) || (SUB161(auVar30 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar30 >> 0x47,0) & 1) != 0) || (SUB161(auVar30 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar30 >> 0x57,0) & 1) != 0) || (SUB161(auVar30 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar30 >> 0x67,0) & 1) != 0) || (SUB161(auVar30 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar30 >> 0x77,0) & 1) != 0) || auVar30[0xf] < '\0') goto LAB_141175889;
  uVar14 = uVar14 + lVar22 + 0x10;
  lVar22 = lVar22 + 0x10;
  goto LAB_141175769;
LAB_141175815:
  uVar14 = uVar14 & uVar10;
  auVar26 = *(undefined1 (*) [16])(lVar20 + uVar14);
  auVar36[0] = -(auVar26[0] == auVar25[0]);
  auVar36[1] = -(auVar26[1] == auVar25[1]);
  auVar36[2] = -(auVar26[2] == auVar25[2]);
  auVar36[3] = -(auVar26[3] == auVar25[3]);
  auVar36[4] = -(auVar26[4] == auVar25[4]);
  auVar36[5] = -(auVar26[5] == auVar25[5]);
  auVar36[6] = -(auVar26[6] == auVar25[6]);
  auVar36[7] = -(auVar26[7] == auVar25[7]);
  auVar36[8] = -(auVar26[8] == auVar25[0]);
  auVar36[9] = -(auVar26[9] == auVar25[1]);
  auVar36[10] = -(auVar26[10] == auVar25[2]);
  auVar36[0xb] = -(auVar26[0xb] == auVar25[3]);
  auVar36[0xc] = -(auVar26[0xc] == auVar25[4]);
  auVar36[0xd] = -(auVar26[0xd] == auVar25[5]);
  auVar36[0xe] = -(auVar26[0xe] == auVar25[6]);
  auVar36[0xf] = -(auVar26[0xf] == auVar25[7]);
  uVar19 = (ushort)(SUB161(auVar36 >> 7,0) & 1) | (ushort)(SUB161(auVar36 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar36 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar36 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar36 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar36 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar36 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar36 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar36 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar36 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar36 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar36 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar36 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar36 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar36 >> 0x77,0) & 1) << 0xe | (ushort)(auVar36[0xf] >> 7) << 0xf;
  uVar16 = (ulonglong)uVar19;
  while (uVar19 != 0) {
    uVar8 = 0;
    for (uVar4 = (uint)uVar16; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
      uVar8 = uVar8 + 1;
    }
    lVar22 = (uVar8 + uVar14 & uVar10) * -0xd8;
    if (lVar21 == *(longlong *)(lVar20 + -0xd8 + lVar22)) {
      lVar20 = lVar20 + lVar22;
      if (*(longlong *)(lVar20 + -0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14329c470,0x97,&UNK_14329c5e0);
      }
      lVar13 = (**(code **)(*(longlong *)(lVar20 + -0x30) + 0x28))();
      (**(code **)(uVar16 + 0x18))(&uStack_68,lVar13);
      auVar26[0] = -((char)uStack_68 == DAT_14329bc30);
      auVar26[1] = -(uStack_68._1_1_ == UNK_14329bc31);
      auVar26[2] = -(uStack_68._2_1_ == UNK_14329bc32);
      auVar26[3] = -(uStack_68._3_1_ == UNK_14329bc33);
      auVar26[4] = -(uStack_68._4_1_ == UNK_14329bc34);
      auVar26[5] = -(uStack_68._5_1_ == UNK_14329bc35);
      auVar26[6] = -(uStack_68._6_1_ == UNK_14329bc36);
      auVar26[7] = -(uStack_68._7_1_ == UNK_14329bc37);
      auVar26[8] = -((char)uStack_60 == UNK_14329bc38);
      auVar26[9] = -(uStack_60._1_1_ == UNK_14329bc39);
      auVar26[10] = -(uStack_60._2_1_ == UNK_14329bc3a);
      auVar26[0xb] = -(uStack_60._3_1_ == UNK_14329bc3b);
      auVar26[0xc] = -(uStack_60._4_1_ == UNK_14329bc3c);
      auVar26[0xd] = -(uStack_60._5_1_ == UNK_14329bc3d);
      auVar26[0xe] = -(uStack_60._6_1_ == UNK_14329bc3e);
      auVar26[0xf] = -(uStack_60._7_1_ == UNK_14329bc3f);
      if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar26[0xf] >> 7) << 0xf) == 0xffff) {
        *(undefined4 *)(lVar13 + 0x268) = 1;
LAB_1411758fc:
        param_1[2] = lStack_2d8;
        *param_1 = (longlong)uStack_2e8;
        param_1[1] = uStack_2e0;
        LOCK();
        *param_7 = *param_7 + -1;
        UNLOCK();
        if (*param_7 == 0) {
          pdb_140734ba0(&param_7);
        }
        return param_1;
      }
      pdb_142dc8110(&UNK_14329c4d8,8,&UNK_14329c528);
      goto LAB_141175a61;
    }
    iVar17 = (uint)uVar16 - 1;
    uVar19 = (ushort)iVar17 & (ushort)uVar16;
    uVar16 = (ulonglong)CONCAT22((short)((uint)iVar17 >> 0x10),uVar19);
  }
  auVar31[0] = -(auVar26[0] == -1);
  auVar31[1] = -(auVar26[1] == -1);
  auVar31[2] = -(auVar26[2] == -1);
  auVar31[3] = -(auVar26[3] == -1);
  auVar31[4] = -(auVar26[4] == -1);
  auVar31[5] = -(auVar26[5] == -1);
  auVar31[6] = -(auVar26[6] == -1);
  auVar31[7] = -(auVar26[7] == -1);
  auVar31[8] = -(auVar26[8] == -1);
  auVar31[9] = -(auVar26[9] == -1);
  auVar31[10] = -(auVar26[10] == -1);
  auVar31[0xb] = -(auVar26[0xb] == -1);
  auVar31[0xc] = -(auVar26[0xc] == -1);
  auVar31[0xd] = -(auVar26[0xd] == -1);
  auVar31[0xe] = -(auVar26[0xe] == -1);
  auVar31[0xf] = -(auVar26[0xf] == -1);
  if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar31 >> 0x17,0) & 1) != 0) || (SUB161(auVar31 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar31 >> 0x27,0) & 1) != 0) || (SUB161(auVar31 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar31 >> 0x37,0) & 1) != 0) || (SUB161(auVar31 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar31 >> 0x47,0) & 1) != 0) || (SUB161(auVar31 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar31 >> 0x57,0) & 1) != 0) || (SUB161(auVar31 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar31 >> 0x67,0) & 1) != 0) || (SUB161(auVar31 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar31 >> 0x77,0) & 1) != 0) || auVar31[0xf] < '\0') goto LAB_14117593b;
  uVar14 = uVar14 + lVar13 + 0x10;
  lVar13 = lVar13 + 0x10;
  goto LAB_141175815;
LAB_14117593b:
  pdb_142dc8110(&UNK_14329c448,0xb,&UNK_14329c510);
  goto LAB_141175a61;
LAB_141175889:
  pdb_142dc8110(&UNK_142fa60f8,0x16,&UNK_142fa6ad0);
  goto LAB_141175a61;
}

