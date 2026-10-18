// VA 0x141f27840, PDB extent 2536 bytes
// system_roof::ui_edit_roof_ridge_length::ui_edit_roof_ridge_length
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/ui_edit_roof_ridge_length.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_roof::ui_edit_roof_ridge_length::ui_edit_roof_ridge_length
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/ui_edit_roof_ridge_length.rs
   Extent: 2536 */

void pdb_141f27840(undefined8 *param_1,undefined8 *param_2,byte *param_3,undefined8 *param_4,
                  longlong *param_5)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined8 uVar7;
  longlong lVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [16];
  undefined *puVar21;
  int *piVar22;
  undefined *puVar23;
  undefined *puVar24;
  longlong lVar25;
  ulonglong in_stack_fffffffffffffed0;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 (*pauStack_100) [16];
  ushort uStack_f0;
  longlong lStack_e8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  longlong lStack_88;
  longlong *plStack_80;
  byte *pbStack_78;
  longlong lStack_70;
  byte *pbStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_a0 = param_2;
  puStack_98 = param_4;
  pbStack_68 = param_3;
  cVar12 = pdb_140e94b40();
  plStack_60 = (longlong *)CONCAT71(plStack_60._1_7_,cVar12);
  if (cVar12 == '\0') {
LAB_141f27a16:
    pdb_14007ee60();
    pbStack_78 = pub_1406abab0(0x30,8);
    if (pbStack_78 == (byte *)0x0) {
      pdb_142dc7e2a(8,0x30);
                    /* WARNING: Does not return */
      pcVar9 = (code *)invalidInstructionException();
      (*pcVar9)();
    }
    plStack_80 = (longlong *)0x2;
    lStack_70 = 0;
    auStack_c8 = (undefined1  [16])0x0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    plStack_58 = (longlong *)*param_1;
    if ((char)*plStack_58 == '\0') {
      if ((int)plStack_58[1] == 0) {
        uVar7 = *puStack_a0;
        uStack_49 = 1;
        pdb_140b55220(&uStack_108,uVar7);
        lVar19 = CONCAT44(uStack_104,uStack_108);
        uVar13 = (uint)uStack_f0;
        lStack_88 = *(longlong *)pbStack_68;
        lVar14 = *(longlong *)(pbStack_68 + 8);
        uStack_d0 = *puStack_98;
        pauVar20 = pauStack_100;
        lVar25 = lStack_e8;
        while (lVar25 != 0) {
          if ((short)uVar13 == 0) {
            do {
              auVar3 = *pauVar20;
              lVar19 = lVar19 + -0x2b00;
              pauVar20 = pauVar20 + 1;
              uVar13 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar13 == 0);
          }
          uVar10 = 0;
          for (uVar11 = uVar13; (uVar11 & 1) == 0; uVar11 = uVar11 >> 1 | 0x80000000) {
            uVar10 = uVar10 + 1;
          }
          uStack_49 = 1;
          uVar18 = pdb_140b54b40(uVar7,*(undefined8 *)(lVar19 + -0x2b0 + (ulonglong)uVar10 * -0x2b0)
                                );
          uVar13 = uVar13 - 1 & uVar13;
          lVar25 = lVar25 + -1;
          if ((((((uVar18 & 0xffffffff) != 0) &&
                (uVar15 = uVar18 & 0xffffffff ^ 0xffffffff, uVar15 < *(ulonglong *)(lVar14 + 0x10)))
               && (piVar22 = (int *)(uVar15 * 0x18 + *(longlong *)(lVar14 + 8)),
                  piVar22[4] == (int)(uVar18 >> 0x20))) &&
              ((*piVar22 != 0 &&
               (uVar18 = *(ulonglong *)(piVar22 + 2),
               (uVar18 & 0xffffffff) < *(ulonglong *)(lStack_88 + 0x38))))) &&
             ((*(ulonglong *)(*(longlong *)(lStack_88 + 0x28) + (uVar18 >> 6 & 0x3ffffff) * 8) >>
               (uVar18 & 0x3f) & 1) != 0)) {
            uStack_49 = 1;
            in_stack_fffffffffffffed0 = in_stack_fffffffffffffed0 & 0xffffffffffffff00;
            pdb_141f26bc0((ulonglong)(uint)~piVar22[1] * 0x58 +
                          *(longlong *)
                           (*(longlong *)
                             (*(longlong *)(lVar14 + 0x1a0) + 0x18 + (uVar18 >> 0x20) * 0x48) + 0x10
                           + ~*(ulonglong *)
                               (*(longlong *)
                                 (*(longlong *)(lVar14 + 0x1a0) + 0x38 + (uVar18 >> 0x20) * 0x48) +
                               *(longlong *)(lStack_88 + 0x110) * 8) * 0x30),auStack_c8,uStack_d0,
                          &uStack_b0,&plStack_80,in_stack_fffffffffffffed0);
          }
        }
        if (((char)*plStack_58 == '\0') && ((int)plStack_58[1] - 1U < 2)) goto LAB_141f27b3f;
        goto LAB_141f27a77;
      }
      if (1 < (int)plStack_58[1] - 1U) goto LAB_141f27a77;
LAB_141f27b3f:
      uStack_49 = 1;
      pauStack_100 = (undefined1 (*) [16])pdb_140b54b40(*puStack_a0,plStack_58[2]);
      if (((ulonglong)pauStack_100 & 0xffffffff) != 0) {
        lVar14 = *(longlong *)(pbStack_68 + 8);
        puVar24 = (undefined *)((ulonglong)pauStack_100 & 0xffffffff ^ 0xffffffff);
        uStack_108 = 1;
        if (*(undefined **)(lVar14 + 0x10) <= puVar24) {
LAB_141f27f5e:
          uStack_104 = SUB84(puVar24,0);
          uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8170(&UNK_14342a990,0x2b,&uStack_108,&UNK_14342a970,&UNK_14342a828);
        }
        piVar22 = (int *)((longlong)puVar24 * 0x18 + *(longlong *)(lVar14 + 8));
        puVar24 = (undefined *)((ulonglong)pauStack_100 >> 0x20);
        if ((piVar22[4] != (int)((ulonglong)pauStack_100 >> 0x20)) || (*piVar22 == 0))
        goto LAB_141f27f5e;
        lVar19 = *(longlong *)pbStack_68;
        puVar24 = *(undefined **)(piVar22 + 2);
        uStack_108 = 0;
        if ((*(ulonglong *)(lVar19 + 0x38) <= ((ulonglong)puVar24 & 0xffffffff)) ||
           ((*(ulonglong *)
              (*(longlong *)(lVar19 + 0x28) + ((ulonglong)puVar24 >> 6 & 0x3ffffff) * 8) >>
             ((ulonglong)puVar24 & 0x3f) & 1) == 0)) goto LAB_141f27f5e;
        uStack_49 = 1;
        pdb_141f26bc0((ulonglong)(uint)~piVar22[1] * 0x58 +
                      *(longlong *)
                       (*(longlong *)
                         (*(longlong *)(lVar14 + 0x1a0) + 0x18 + ((ulonglong)puVar24 >> 0x20) * 0x48
                         ) + 0x10 +
                       ~*(ulonglong *)
                         (*(longlong *)
                           (*(longlong *)(lVar14 + 0x1a0) + 0x38 +
                           ((ulonglong)puVar24 >> 0x20) * 0x48) + *(longlong *)(lVar19 + 0x110) * 8)
                       * 0x30),auStack_c8,*puStack_98,&uStack_b0,&plStack_80,1);
        goto LAB_141f27a77;
      }
      if (plStack_80 != (longlong *)0x0) {
        pub_1406abac0(pbStack_78,(longlong)plStack_80 * 0x18,8);
      }
      if ((char)plStack_60 == '\0') {
        return;
      }
      plVar16 = (longlong *)pdb_140e97000();
      if ((char)plVar16[0xd] != '\x01') goto LAB_141f27f14;
LAB_141f27e9d:
      if (*plVar16 == 0) {
        *plVar16 = -1;
        plStack_60 = plVar16;
        pdb_140e95370(plVar16 + 1,uStack_90);
LAB_141f27ca5:
        *plStack_60 = *plStack_60 + 1;
        return;
      }
    }
    else {
LAB_141f27a77:
      lVar14 = lStack_70;
      if (lStack_70 == 0) {
        if (plStack_80 != (longlong *)0x0) {
          pub_1406abac0(pbStack_78,(longlong)plStack_80 * 0x18,8);
        }
      }
      else {
        plStack_58 = plStack_80;
        pbStack_68 = pbStack_78;
        if ((char)uStack_b0 == '\0') goto LAB_141f27ece;
        *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
        lVar19 = *param_5;
        lVar25 = *(longlong *)(lVar19 + 0x30);
        uVar7 = *(undefined8 *)(lVar19 + 0x40);
        if (lVar25 == *(longlong *)(lVar19 + 0x20)) {
          pdb_142d7ee50(lVar19 + 0x20);
        }
        lVar8 = *(longlong *)(lVar19 + 0x28);
        lVar17 = lVar25 * 0x40;
        *(longlong **)(lVar8 + lVar17) = plStack_58;
        *(byte **)(lVar8 + 8 + lVar17) = pbStack_68;
        *(longlong *)(lVar8 + 0x10 + lVar17) = lVar14;
        puVar2 = (undefined8 *)(lVar8 + 0x18 + lVar17);
        *puVar2 = auStack_c8._0_8_;
        puVar2[1] = auStack_c8._8_8_;
        *(undefined8 *)(lVar8 + 0x28 + lVar17) = uStack_b8;
        *(undefined8 *)(lVar8 + 0x30 + lVar17) = uStack_a8;
        *(undefined8 *)(lVar8 + 0x38 + lVar17) = uVar7;
        *(longlong *)(lVar19 + 0x30) = lVar25 + 1;
        *(longlong *)(lVar19 + 0x40) = *(longlong *)(lVar19 + 0x40) + 1;
      }
      if ((char)plStack_60 == '\0') {
        return;
      }
      plVar16 = (longlong *)pdb_140e97000();
      if (((char)plVar16[0xd] != '\x01') &&
         (plVar16 = (longlong *)pdb_142e293d0(plVar16,0), plVar16 == (longlong *)0x0))
      goto LAB_141f27f08;
      if (*plVar16 == 0) {
        *plVar16 = -1;
        plStack_60 = plVar16;
        pdb_140e95370(plVar16 + 1,uStack_90);
        goto LAB_141f27ca5;
      }
    }
  }
  else {
    puVar23 = &UNK_14342a9bb;
    lVar19 = 0x41;
    uVar18 = 0x41;
    lVar14 = pdb_141f29750(&UNK_14342a9bb);
    if (lVar14 == 1) {
      if (0x41 < uVar18) {
        pdb_142dc8070(&UNK_14342a9bb,0x41,0,uVar18,&UNK_14342aac8);
LAB_141f27fbb:
        pdb_142dc8070(&UNK_14342a9bb,0x41);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      puVar23 = &UNK_14342a9bb;
      uVar15 = pdb_141f29750(&UNK_14342a9bb);
      if ((uVar15 & 1) != 0) {
        if (0x41 < uVar18 + 2) goto LAB_141f27fbb;
        lVar19 = 0x3f - uVar18;
        puVar23 = &UNK_14342a9bd + uVar18;
      }
    }
    puVar21 = &UNK_14342a827;
    puVar24 = &UNK_14342a7f3;
    do {
      bVar4 = puVar21[-1];
      uVar13 = (uint)(char)bVar4;
      if ((char)bVar4 < '\0') {
        bVar5 = puVar21[-2];
        if ((char)bVar5 < -0x40) {
          bVar6 = puVar21[-3];
          if ((char)bVar6 < -0x40) {
            pbVar1 = puVar21 + -4;
            puVar21 = puVar21 + -4;
            uVar13 = bVar6 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar21 = puVar21 + -3;
            uVar13 = bVar6 & 0xf;
          }
          uVar13 = bVar5 & 0x3f | uVar13 << 6;
        }
        else {
          puVar21 = puVar21 + -2;
          uVar13 = bVar5 & 0x1f;
        }
        uVar13 = (uint)(bVar4 & 0x3f) | uVar13 << 6;
        if (uVar13 != 0x5c) goto LAB_141f27974;
LAB_141f2798c:
        puVar24 = puVar21 + -0x14342a7f2;
        if (puVar24 < (undefined *)0x35) {
          lVar14 = 0x34 - (longlong)puVar24;
          puVar24 = puVar21 + 1;
          goto LAB_141f279ae;
        }
        uStack_108 = 0x4342a7f3;
        pauStack_100 = (undefined1 (*) [16])
                       pdb_142dc8070(&UNK_14342a7f3,0x34,puVar24,0x34,&UNK_14342aaa8);
        goto LAB_141f27f5e;
      }
      puVar21 = puVar21 + -1;
      if (uVar13 == 0x5c) goto LAB_141f2798c;
LAB_141f27974:
      if (uVar13 == 0x2f) goto LAB_141f2798c;
    } while (puVar21 != &UNK_14342a7f3);
    lVar14 = 0x34;
LAB_141f279ae:
    plVar16 = (longlong *)pdb_140e97000();
    if (((char)plVar16[0xd] != '\x01') &&
       (plVar16 = (longlong *)pdb_142e293d0(plVar16,0), plVar16 == (longlong *)0x0)) {
LAB_141f27f08:
      do {
        plVar16 = (longlong *)pdb_142dc7890(&UNK_14359bf00);
LAB_141f27f14:
        plVar16 = (longlong *)pdb_142e293d0(plVar16,0);
      } while (plVar16 == (longlong *)0x0);
      goto LAB_141f27e9d;
    }
    if (*plVar16 == 0) {
      *plVar16 = -1;
      in_stack_fffffffffffffed0 = 0;
      plStack_58 = plVar16;
      uStack_90 = pdb_140e94f10(plVar16 + 1,puVar23,lVar19,puVar24,lVar14,1,0);
      *plStack_58 = *plStack_58 + 1;
      goto LAB_141f27a16;
    }
  }
  pdb_142dc8090(&UNK_14359bf70);
LAB_141f27ece:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14342a840);
}

