// VA 0x14297e500, PDB extent 2036 bytes
// toolbar::ui_interaction::ui_show_if_parent_in_focus
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::ui_interaction::ui_show_if_parent_in_focus
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/ui_interaction.rs
   Extent: 2036 */

void pdb_14297e500(longlong *param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  code *pcVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  ulonglong *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint *puVar20;
  ulonglong unaff_RDI;
  undefined *puVar21;
  undefined4 uVar22;
  undefined *puVar23;
  longlong lVar24;
  undefined *puVar25;
  bool bVar26;
  ulonglong uStack_b0;
  undefined8 uStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  ulonglong uStack_80;
  longlong lStack_78;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  longlong *plStack_60;
  longlong lStack_58;
  char cStack_4a;
  char cStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar24 = 0;
  cStack_49 = pdb_140e94b40();
  if (cStack_49 == '\0') goto LAB_14297e6d4;
  puVar25 = &UNK_1436075d4;
  unaff_RDI = 0x33;
  uVar19 = 0x33;
  lVar13 = pdb_142978b70(&UNK_1436075d4);
  if (lVar13 == 1) {
    if (0x33 < uVar19) {
LAB_14297ebd7:
      pdb_142dc8070(&UNK_1436075d4,0x33,0);
LAB_14297ebf7:
      pdb_142dc8070(&UNK_1436075d4,0x33);
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    puVar25 = &UNK_1436075d4;
    uVar14 = pdb_142978b70(&UNK_1436075d4);
    if ((uVar14 & 1) != 0) {
      if (0x33 < uVar19 + 2) goto LAB_14297ebf7;
      unaff_RDI = 0x31 - uVar19;
      puVar25 = &UNK_1436075d6 + uVar19;
    }
  }
  puVar21 = &UNK_143607874;
  puVar23 = &UNK_143607848;
  do {
    bVar5 = puVar21[-1];
    uVar12 = (uint)(char)bVar5;
    uStack_68 = param_3;
    if ((char)bVar5 < '\0') {
      bVar6 = puVar21[-2];
      if ((char)bVar6 < -0x40) {
        bVar7 = puVar21[-3];
        if ((char)bVar7 < -0x40) {
          pbVar1 = puVar21 + -4;
          puVar21 = puVar21 + -4;
          uVar12 = bVar7 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar21 = puVar21 + -3;
          uVar12 = bVar7 & 0xf;
        }
        uVar12 = bVar6 & 0x3f | uVar12 << 6;
      }
      else {
        puVar21 = puVar21 + -2;
        uVar12 = bVar6 & 0x1f;
      }
      uVar12 = (uint)(bVar5 & 0x3f) | uVar12 << 6;
      if (uVar12 != 0x5c) goto LAB_14297e634;
LAB_14297e64c:
      puVar23 = puVar21 + -0x143607847;
      if ((undefined *)0x2c < puVar23) {
        pdb_142dc8070(&UNK_143607848,0x2c,puVar23,0x2c,&UNK_1436076a0);
        goto LAB_14297ebd7;
      }
      param_3 = (longlong *)(0x2c - (longlong)puVar23);
      puVar23 = puVar21 + 1;
      goto LAB_14297e66e;
    }
    puVar21 = puVar21 + -1;
    if (uVar12 == 0x5c) goto LAB_14297e64c;
LAB_14297e634:
    if (uVar12 == 0x2f) goto LAB_14297e64c;
  } while (puVar21 != &UNK_143607848);
  param_3 = (longlong *)0x2c;
LAB_14297e66e:
  plVar15 = (longlong *)pdb_140e97000();
  if ((char)plVar15[0xd] != '\x01') goto LAB_14297eafc;
LAB_14297e67d:
  if (*plVar15 == 0) {
    *plVar15 = -1;
    plStack_60 = plVar15;
    uStack_a0 = pdb_140e94f10(plVar15 + 1,puVar25,unaff_RDI,puVar23,param_3,1,0);
    *plStack_60 = *plStack_60 + 1;
    param_3 = uStack_68;
LAB_14297e6d4:
    lStack_78 = *param_1;
    param_1 = (longlong *)param_1[1];
    puVar20 = *(uint **)(lStack_78 + 0xf8);
    puVar2 = puVar20 + *(longlong *)(lStack_78 + 0x100);
    cStack_4a = *(char *)(lStack_78 + 0x108);
    plStack_60 = (longlong *)*param_2;
    puVar23 = (undefined *)param_2[1];
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0x14);
    lVar13 = *param_3;
    lStack_98 = 8;
    lStack_90 = 8;
    lStack_58 = 0;
    uStack_68 = (longlong *)((ulonglong)uStack_68 & 0xffffffff00000000);
    puVar25 = (undefined *)0x0;
    do {
      uVar12 = uStack_68._4_4_;
      if (cStack_4a == '\0') {
        if ((int)puVar25 == (int)lVar24) {
          do {
            if (puVar20 == puVar2) goto LAB_14297eaa5;
            uVar9 = *puVar20;
            puVar20 = puVar20 + 1;
            lVar24 = *(longlong *)(param_1[0x20] + 0x58 + (ulonglong)uVar9 * 0xa0);
          } while (lVar24 == 0);
          lVar16 = param_1[0x20] + (ulonglong)uVar9 * 0xa0;
          if (*(ulonglong *)(lStack_78 + 0x110) <
              *(ulonglong *)(param_1[0x34] + 0x40 + (ulonglong)*(uint *)(lVar16 + 0x94) * 0x48)) {
            lVar10 = param_1[0x34] + (ulonglong)*(uint *)(lVar16 + 0x94) * 0x48;
            uVar19 = *(ulonglong *)
                      (*(longlong *)(lVar10 + 0x38) + *(ulonglong *)(lStack_78 + 0x110) * 8);
            if (uVar19 == 0) goto LAB_14297e88f;
            lStack_58 = *(longlong *)(*(longlong *)(lVar10 + 0x18) + 0x10 + ~uVar19 * 0x30);
          }
          else {
LAB_14297e88f:
            lStack_58 = 0;
          }
          uVar19 = *(ulonglong *)(lStack_78 + 0x118);
          puVar25 = (undefined *)0x0;
          uStack_68 = (longlong *)((ulonglong)uStack_68._4_4_ << 0x20);
          if (uVar19 < *(ulonglong *)(lVar16 + 0x88)) {
            uStack_68 = (longlong *)
                        CONCAT44(uVar12,(int)CONCAT71((int7)(uVar19 >> 8),
                                                      *(longlong *)
                                                       (*(longlong *)(lVar16 + 0x80) + uVar19 * 8)
                                                      != 0));
          }
          lStack_90 = *(longlong *)(lVar16 + 0x50);
        }
        puVar17 = (ulonglong *)(lStack_90 + (longlong)puVar25 * 0x10);
        puVar21 = (undefined *)(ulonglong)~*(uint *)(lStack_90 + 8 + (longlong)puVar25 * 0x10);
      }
      else {
        puVar21 = puVar25;
        if ((int)puVar25 == (int)lVar24) {
          do {
            if (puVar20 == puVar2) goto LAB_14297eaa5;
            uVar9 = *puVar20;
            puVar20 = puVar20 + 1;
            lVar24 = *(longlong *)(param_1[0x34] + 0x10 + (ulonglong)uVar9 * 0x48);
          } while (lVar24 == 0);
          lVar16 = param_1[0x34] + (ulonglong)uVar9 * 0x48;
          if ((*(ulonglong *)(lStack_78 + 0x110) < *(ulonglong *)(lVar16 + 0x40)) &&
             (uVar19 = *(ulonglong *)
                        (*(longlong *)(lVar16 + 0x38) + *(ulonglong *)(lStack_78 + 0x110) * 8),
             uVar19 != 0)) {
            lStack_58 = *(longlong *)(*(longlong *)(lVar16 + 0x18) + 0x10 + ~uVar19 * 0x30);
          }
          else {
            lStack_58 = 0;
          }
          uVar19 = *(ulonglong *)(lStack_78 + 0x118);
          puVar21 = (undefined *)0x0;
          uStack_68 = (longlong *)((ulonglong)uStack_68._4_4_ << 0x20);
          if (uVar19 < *(ulonglong *)(lVar16 + 0x40)) {
            uStack_68 = (longlong *)
                        CONCAT44(uVar12,(int)CONCAT71((int7)(uVar19 >> 8),
                                                      *(longlong *)
                                                       (*(longlong *)(lVar16 + 0x38) + uVar19 * 8)
                                                      != 0));
          }
          lStack_98 = *(longlong *)(lVar16 + 8);
        }
        puVar17 = (ulonglong *)(lStack_98 + (longlong)puVar21 * 8);
        puVar25 = puVar21;
      }
      unaff_RDI = *puVar17;
      if ((unaff_RDI & 0xffffffff) == 0) goto LAB_14297eaa5;
      uStack_80 = *(undefined8 *)(lStack_58 + (longlong)puVar21 * 8);
      uVar22 = 1;
      if (*(ulonglong *)(puVar23 + 0x10) <= (ulonglong)~(uint)uStack_80) {
LAB_14297eb7e:
        uStack_88 = CONCAT44((int)param_2,uVar22);
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143607360,0x2b,&uStack_88,&UNK_143607340,&UNK_1436078e8);
      }
      piVar3 = (int *)(*(longlong *)(puVar23 + 8) + (ulonglong)~(uint)uStack_80 * 0x18);
      if ((piVar3[4] != (int)(uStack_80 >> 0x20)) || (*piVar3 == 0)) goto LAB_14297eb7e;
      param_2 = *(longlong **)(piVar3 + 2);
      if ((*(ulonglong *)((longlong)plStack_60 + 0x38) <= ((ulonglong)param_2 & 0xffffffff)) ||
         ((*(ulonglong *)
            (*(longlong *)((longlong)plStack_60 + 0x28) + ((ulonglong)param_2 >> 6 & 0x3ffffff) * 8)
           >> ((ulonglong)param_2 & 0x3f) & 1) == 0)) {
        uVar22 = 0;
        goto LAB_14297eb7e;
      }
      uVar19 = unaff_RDI & 0xffffffff ^ 0xffffffff;
      if (((*(ulonglong *)(puVar23 + 0x10) <= uVar19) ||
          (piVar4 = (int *)(*(longlong *)(puVar23 + 8) + uVar19 * 0x18),
          piVar4[4] != (int)(unaff_RDI >> 0x20))) || (*piVar4 == 0)) goto LAB_14297eb2c;
      uVar19 = *(ulonglong *)(piVar4 + 2);
      if ((*(ulonglong *)((longlong)plStack_60 + 0x38) <= (uVar19 & 0xffffffff)) ||
         ((*(ulonglong *)
            (*(longlong *)((longlong)plStack_60 + 0x28) + (uVar19 >> 6 & 0x3ffffff) * 8) >>
           (uVar19 & 0x3f) & 1) == 0)) {
        uStack_88 = uVar19 << 0x20;
        goto LAB_14297eb46;
      }
      puVar25 = (undefined *)(ulonglong)((int)puVar25 + 1);
      param_2 = (longlong *)((ulonglong)param_2 >> 0x20);
      lVar16 = *(longlong *)(puVar23 + 0x1a0);
      cVar8 = *(char *)(*(longlong *)
                         (*(longlong *)(lVar16 + 0x18 + (longlong)param_2 * 0x48) + 0x10 +
                         ~*(ulonglong *)
                           (*(longlong *)(lVar16 + 0x38 + (longlong)param_2 * 0x48) +
                           *(longlong *)((longlong)plStack_60 + 0x110) * 8) * 0x30) + 1 +
                       (ulonglong)(uint)~piVar3[1] * 3);
      unaff_RDI = *(ulonglong *)(lVar16 + 0x18 + (uVar19 >> 0x20) * 0x48);
      lVar18 = ~*(ulonglong *)
                 (*(longlong *)(lVar16 + 0x38 + (uVar19 >> 0x20) * 0x48) +
                 *(longlong *)((longlong)plStack_60 + 0x110) * 8) * 0x30;
      lVar16 = *(longlong *)(unaff_RDI + 0x10 + lVar18);
      lVar10 = *(longlong *)(unaff_RDI + 0x28 + lVar18);
      uVar19 = (ulonglong)(uint)~piVar4[1];
      uStack_b0 = uVar19 * 4 + *(longlong *)(unaff_RDI + 0x20 + lVar18);
      param_3 = (longlong *)(uVar19 * 3);
      *(undefined4 *)(lVar10 + uVar19 * 4) = uStack_6c;
      *(char *)(lVar16 + (longlong)param_3) = cVar8;
      if ((char)uStack_68 != '\0') {
        if (cVar8 == '\0') {
          bVar26 = false;
        }
        else {
          bVar26 = (byte)(*(char *)(lVar13 + 9) - 1U) < 2;
        }
        *(undefined4 *)(lVar10 + uVar19 * 4) = uStack_6c;
        *(bool *)(lVar16 + (longlong)param_3) = bVar26;
      }
    } while( true );
  }
  goto LAB_14297eaf0;
LAB_14297eaa5:
  if (cStack_49 != '\0') {
    plVar15 = (longlong *)pdb_140e97000();
    if (((char)plVar15[0xd] != '\x01') &&
       (plVar15 = (longlong *)pdb_142dcf3a0(plVar15,0), plVar15 == (longlong *)0x0))
    goto LAB_14297eb20;
    if (*plVar15 != 0) {
LAB_14297eaf0:
      plVar15 = (longlong *)pdb_142dc8090(&UNK_1432a7f58);
LAB_14297eafc:
      plVar15 = (longlong *)pdb_142dcf3a0(plVar15,0);
      if (plVar15 == (longlong *)0x0) {
LAB_14297eb20:
        pdb_142dc7890(&UNK_1432a7ee8);
LAB_14297eb2c:
        uStack_88 = (uStack_b0 & 0xffffffff00000000) + 1;
LAB_14297eb46:
        uStack_80 = unaff_RDI;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143607360,0x2b,&uStack_88,&UNK_143607340,&UNK_143607900);
      }
      goto LAB_14297e67d;
    }
    *plVar15 = -1;
    plStack_60 = plVar15;
    pdb_140e95370(plVar15 + 1,uStack_a0);
    *plStack_60 = *plStack_60 + 1;
  }
  return;
}

