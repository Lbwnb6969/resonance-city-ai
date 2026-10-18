// VA 0x140814180, PDB extent 2190 bytes
// system_wall_constructor::ui_arch_controls::ui_arch_controls
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/ui_arch_controls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_wall_constructor::ui_arch_controls::ui_arch_controls
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/ui_arch_controls.rs
   Extent: 2190 */

void pdb_140814180(undefined1 (*param_1) [16],undefined8 *param_2,undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16],undefined8 *param_5)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  char *pcVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined1 (*pauVar17) [16];
  ulonglong uVar18;
  undefined8 *puVar19;
  longlong unaff_RSI;
  undefined1 (*pauVar20) [16];
  undefined *puVar21;
  undefined *puVar22;
  undefined *unaff_R12;
  undefined1 (*unaff_R13) [16];
  undefined1 (*pauVar23) [16];
  bool bVar24;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined2 auStack_108 [8];
  undefined1 (**ppauStack_f8) [16];
  code *pcStack_f0;
  byte *pbStack_e8;
  longlong lStack_e0;
  undefined8 uStack_d8;
  longlong lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined1 (*pauStack_90) [16];
  longlong lStack_88;
  longlong lStack_80;
  byte *pbStack_78;
  longlong lStack_70;
  undefined1 (*pauStack_68) [16];
  longlong *plStack_60;
  longlong *plStack_58;
  undefined1 uStack_4b;
  byte bStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  plStack_58 = param_2;
  uVar10 = pdb_140e94b40();
  pauVar17 = (undefined1 (*) [16])(ulonglong)uVar10;
  if ((char)uVar10 == '\0') {
    uStack_d8 = 0;
    pcVar14 = *(char **)*param_1;
    pauVar20 = pauVar17;
    if (*pcVar14 != '\0') goto LAB_14081439f;
    goto LAB_140814399;
  }
  unaff_R12 = &UNK_143008a60;
  unaff_RSI = 0x3b;
  uVar18 = 0x3b;
  lVar11 = pdb_140815720(&UNK_143008a60);
  if (lVar11 == 1) {
    if (0x3b < uVar18) {
LAB_1408147a1:
      pdb_142dc8070(&UNK_143008a60,0x3b,0);
LAB_1408147c1:
      pdb_142dc8070(&UNK_143008a60,0x3b);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    unaff_R12 = &UNK_143008a60;
    uVar12 = pdb_140815720(&UNK_143008a60);
    if ((uVar12 & 1) != 0) {
      if (0x3b < uVar18 + 2) goto LAB_1408147c1;
      unaff_RSI = 0x39 - uVar18;
      unaff_R12 = &UNK_143008a62 + uVar18;
    }
  }
  puVar21 = &UNK_14300882f;
  unaff_R13 = (undefined1 (*) [16])&UNK_1430087f8;
  do {
    bVar3 = puVar21[-1];
    uVar10 = (uint)(char)bVar3;
    pauStack_68 = param_1;
    if ((char)bVar3 < '\0') {
      bVar4 = puVar21[-2];
      if ((char)bVar4 < -0x40) {
        bVar5 = puVar21[-3];
        if ((char)bVar5 < -0x40) {
          pbVar1 = puVar21 + -4;
          puVar21 = puVar21 + -4;
          uVar10 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar21 = puVar21 + -3;
          uVar10 = bVar5 & 0xf;
        }
        uVar10 = bVar4 & 0x3f | uVar10 << 6;
      }
      else {
        puVar21 = puVar21 + -2;
        uVar10 = bVar4 & 0x1f;
      }
      uVar10 = (uint)(bVar3 & 0x3f) | uVar10 << 6;
      if (uVar10 != 0x5c) goto LAB_1408142b4;
LAB_1408142e7:
      puVar22 = puVar21 + -0x1430087f7;
      if (puVar22 < (undefined *)0x38) {
        pauVar20 = (undefined1 (*) [16])(0x37 - (longlong)puVar22);
        unaff_R13 = (undefined1 (*) [16])(puVar21 + 1);
        goto LAB_140814311;
      }
      pdb_142dc8070(&UNK_1430087f8,0x37,puVar22,0x37,&UNK_143008b40);
      goto LAB_1408147a1;
    }
    puVar21 = puVar21 + -1;
    if (uVar10 == 0x5c) goto LAB_1408142e7;
LAB_1408142b4:
    if (uVar10 == 0x2f) goto LAB_1408142e7;
  } while (puVar21 != &UNK_1430087f8);
  pauVar20 = (undefined1 (*) [16])0x37;
LAB_140814311:
  plVar13 = (longlong *)pdb_140e97000();
  pauVar23 = param_4;
  if ((char)plVar13[0xd] != '\x01') goto LAB_140814735;
LAB_140814320:
  param_4 = pauVar23;
  pauVar23 = param_4;
  if (*plVar13 == 0) {
    *plVar13 = -1;
    plStack_60 = plVar13;
    unaff_RSI = pdb_140e94f10(plVar13 + 1,unaff_R12,unaff_RSI,unaff_R13,pauVar20,1,0);
    *plStack_60 = *plStack_60 + 1;
    pauVar17 = (undefined1 (*) [16])((ulonglong)pauVar17 & 0xffffffff);
    uStack_d8 = 1;
    pcVar14 = *(char **)*pauStack_68;
    pauVar20 = pauVar17;
    param_1 = pauStack_68;
    lStack_d0 = unaff_RSI;
    if (*pcVar14 == '\0') {
LAB_140814399:
      pauVar20 = pauVar17;
      if (*(int *)(pcVar14 + 8) == 0) {
        bStack_4a = (byte)pauVar17;
        unaff_R13 = (undefined1 (*) [16])**(undefined8 **)*param_3;
        lVar11 = (*(undefined8 **)*param_3)[3];
        auVar2 = *unaff_R13;
        pauVar23 = unaff_R13 + 1;
        uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
        plStack_58 = (undefined8 *)*plStack_58;
        plStack_60 = *(longlong **)*param_4;
        param_3 = (undefined1 (*) [16])&lStack_80;
        lStack_88 = unaff_RSI;
        do {
          unaff_RSI = lStack_88;
          unaff_R12 = (undefined *)(ulonglong)uVar10;
          bVar24 = lVar11 == 0;
          lVar11 = lVar11 + -1;
          if (bVar24) {
            if (bStack_4a == 0) {
              return;
            }
            plVar13 = (longlong *)pdb_140e97000();
            pauVar20 = (undefined1 (*) [16])0xffffffffffffffff;
            if ((char)plVar13[0xd] != '\x01') goto LAB_140814769;
            goto LAB_140814672;
          }
          if ((short)uVar10 == 0) {
            do {
              auVar2 = *pauVar23;
              unaff_R13 = unaff_R13 + -0x20;
              pauVar23 = pauVar23 + 1;
              uVar10 = (ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar2[0xf] >> 7) << 0xf) ^ 0xffff;
              unaff_R12 = (undefined *)(ulonglong)uVar10;
            } while (uVar10 == 0);
          }
          iVar7 = 0;
          uVar10 = (uint)unaff_R12;
          for (uVar8 = uVar10; (uVar8 & 1) == 0; uVar8 = uVar8 >> 1 | 0x80000000) {
            iVar7 = iVar7 + 1;
          }
          param_4 = (undefined1 (*) [16])((longlong)unaff_R13 - (ulonglong)(uint)(iVar7 << 5));
          pauStack_90 = param_4 + -2;
          pauStack_68 = *(undefined1 (**) [16])param_4[-2];
          lVar15 = pdb_140b54f80(plStack_58,pauStack_68,&UNK_143008830);
          if (lVar15 != 0) {
            lStack_80 = 0;
            pbStack_78 = (byte *)0x4;
            lStack_70 = 0;
            pauVar17 = *(undefined1 (**) [16])param_4[-1];
            param_4 = (undefined1 (*) [16])
                      (*(longlong *)(param_4[-1] + 8) * 0x68 + (longlong)pauVar17);
            for (; pauVar17 != param_4; pauVar17 = (undefined1 (*) [16])(pauVar17[6] + 8)) {
              uStack_49 = 1;
              pdb_140a0bce0(pauVar17,param_3);
            }
            if (lStack_70 == 0) {
              if (lStack_80 != 0) {
                pub_1406abac0(pbStack_78,lStack_80 * 0x24,4);
              }
            }
            else {
              ppauStack_f8 = &pauStack_90;
              pcStack_f0 = pdb_141422e40;
              uStack_49 = 1;
              pdb_140f60760(&uStack_1b8,&UNK_143008848,&ppauStack_f8);
              uStack_c8 = uStack_1b8;
              uStack_c0 = uStack_1b0;
              uStack_b8 = uStack_1a8;
              lStack_e0 = lStack_70;
              pcStack_f0 = (code *)lStack_80;
              pbStack_e8 = pbStack_78;
              ppauStack_f8 = (undefined1 (**) [16])CONCAT71(ppauStack_f8._1_7_,2);
              auStack_108[0] = 0xc01;
              uStack_4b = 1;
              pdb_140c9dcb0(&uStack_1b8,&ppauStack_f8,auStack_108);
              uStack_4b = 0;
              puVar19 = &uStack_c8;
              uStack_a0 = pdb_1414697d0(plStack_60,puVar19,&uStack_1b8);
              uStack_49 = 0;
              puStack_98 = puVar19;
              cVar9 = pdb_1408ffaf0(&uStack_a0);
              if (cVar9 != '\0') goto LAB_14081469c;
            }
          }
          uVar10 = uVar10 - 1 & uVar10;
        } while( true );
      }
    }
LAB_14081439f:
    if ((char)pauVar20 == '\0') {
      return;
    }
    goto LAB_1408143a4;
  }
  goto LAB_140814729;
LAB_14081469c:
  uStack_49 = 0;
  uVar16 = pdb_14072cd40(&uStack_a0);
  *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
  param_4 = (undefined1 (*) [16])*param_5;
  lVar11 = *(longlong *)param_4[3];
  param_1 = *(undefined1 (**) [16])param_4[4];
  if (lVar11 == *(longlong *)param_4[2]) {
    uStack_49 = 0;
    pdb_142d7e830(param_4 + 2);
  }
  lVar15 = *(longlong *)(param_4[2] + 8);
  *(undefined8 *)(lVar15 + lVar11 * 0x18) = uVar16;
  *(undefined1 (**) [16])(lVar15 + 8 + lVar11 * 0x18) = pauStack_68;
  *(undefined1 (**) [16])(lVar15 + 0x10 + lVar11 * 0x18) = param_1;
  param_3 = (undefined1 (*) [16])(lVar11 + 1);
  *(undefined1 (**) [16])param_4[3] = param_3;
  *(longlong *)param_4[4] = *(longlong *)param_4[4] + 1;
  pauVar20 = (undefined1 (*) [16])(ulonglong)bStack_4a;
  unaff_RSI = lStack_88;
  if (bStack_4a == 0) {
    return;
  }
LAB_1408143a4:
  plVar13 = (longlong *)pdb_140e97000();
  pauVar23 = param_3;
  if (((char)plVar13[0xd] != '\x01') &&
     (plVar13 = (longlong *)pdb_142dd9610(plVar13,0), plVar13 == (longlong *)0x0))
  goto LAB_14081475d;
  pauVar17 = param_4;
  param_3 = param_1;
  if (*plVar13 == 0) {
    *plVar13 = -1;
    plStack_58 = plVar13;
    pdb_140e95370(plVar13 + 1,unaff_RSI);
LAB_1408143d8:
    *plStack_58 = *plStack_58 + 1;
    return;
  }
LAB_140814729:
  while( true ) {
    plVar13 = (longlong *)pdb_142dc8090(&UNK_1433079b0);
LAB_140814735:
    plVar13 = (longlong *)pdb_142dd9610(plVar13,0);
    param_4 = pauVar17;
    param_1 = param_3;
    if (plVar13 != (longlong *)0x0) break;
LAB_14081475d:
    do {
      param_3 = param_1;
      plVar13 = (longlong *)pdb_142dc7890(&UNK_143307940);
LAB_140814769:
      plVar13 = (longlong *)pdb_142dd9610(plVar13,0);
      param_1 = param_3;
    } while (plVar13 == (longlong *)0x0);
LAB_140814672:
    pauVar17 = param_4;
    if (*plVar13 == 0) {
      *plVar13 = -1;
      plStack_58 = plVar13;
      pdb_140e95370(plVar13 + 1,unaff_RSI);
      goto LAB_1408143d8;
    }
  }
  goto LAB_140814320;
}

