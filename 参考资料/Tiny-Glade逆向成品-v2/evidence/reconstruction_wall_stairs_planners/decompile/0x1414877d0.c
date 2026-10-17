// Matched PDB: system_wall_constructor::construct_wooden_walls::construct_wall_boards::plan_horizontal_wall_boards
// VA 0x1414877d0, PDB extent 2794 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::plan_horizontal_wall_boards
   Extent: 2794 bytes. No whole-program auto-analysis. */

void pdb_1414877d0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  code *pcVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  ulonglong *puVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  bool bVar16;
  bool bVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  longlong lVar21;
  char *pcVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 uStack_12d;
  undefined3 uStack_12c;
  undefined1 *puStack_128;
  ulonglong uStack_120;
  undefined1 *puStack_118;
  ulonglong *puStack_108;
  undefined1 *puStack_100;
  ulonglong uStack_f8;
  undefined1 *puStack_f0;
  undefined1 uStack_e1;
  undefined1 *puStack_e0;
  undefined1 uStack_d1;
  undefined8 uStack_d0;
  
  uStack_d0 = 0xfffffffffffffffe;
  uStack_d1 = 1;
  puStack_108 = param_4;
  pdb_141484310(&puStack_128,param_2,param_3,param_5,param_6,param_7);
  puStack_e0 = (undefined1 *)uStack_120;
  pdb_141484710(uStack_120,puStack_118,puStack_108,1);
  if (puStack_128 != (undefined1 *)0x0) {
    func_0x0001406abac0(puStack_e0,(longlong)puStack_128 << 4,4);
  }
  uVar7 = *puStack_108;
  uVar8 = puStack_108[1];
  puVar25 = (undefined1 *)puStack_108[2];
  *puStack_108 = 0;
  puStack_108[1] = 8;
  puStack_108[2] = 0;
  puStack_e0 = puVar25;
  if (puVar25 == (undefined1 *)0x0) {
    uVar19 = 8;
    lVar18 = 1;
LAB_141487919:
    fVar12 = _DAT_142e37870;
    fVar11 = _DAT_142e37848;
    uVar10 = _DAT_142e377e0;
    puStack_f0 = (undefined1 *)0x0;
    puVar25 = (undefined1 *)0x0;
    puStack_100 = puStack_e0;
    uStack_f8 = uVar19;
    do {
      puVar14 = puStack_f0;
      uVar19 = uStack_f8;
      puVar15 = (undefined4 *)((uVar8 - 7) + (longlong)puVar25 * 0x28);
      puVar24 = puVar25;
      do {
        puVar20 = puVar15;
        if (puStack_e0 <= puVar24) {
          puStack_128 = &uStack_e1;
          if ((undefined1 *)0x1 < puStack_f0) {
            if (puStack_f0 < (undefined1 *)0x15) {
              lVar1 = uStack_f8 + (longlong)puStack_f0 * 0x28;
              lVar21 = uStack_f8 + 0x28;
              do {
                pdb_14145b0e0(uVar19,lVar21);
                lVar21 = lVar21 + 0x28;
              } while (lVar21 != lVar1);
            }
            else {
              pdb_141465400(uStack_f8,puStack_f0,&puStack_128);
            }
          }
          puVar13 = puStack_108;
          puStack_118 = puStack_f0;
          puStack_128 = puStack_100;
          uStack_120 = uStack_f8;
          if (*puStack_108 != 0) {
            func_0x0001406abac0(puStack_108[1],*puStack_108 * 0x28,8);
          }
          puVar13[2] = (ulonglong)puStack_118;
          *puVar13 = (ulonglong)puStack_128;
          puVar13[1] = uStack_120;
          if (puStack_e0 != (undefined1 *)0x0) {
            func_0x0001406abac0(lVar18,puStack_e0,1);
          }
          if (uVar7 != 0) {
            func_0x0001406abac0(uVar8,uVar7 * 0x28,8);
          }
          puStack_118 = (undefined1 *)puStack_108[2];
          puStack_128 = (undefined1 *)*puStack_108;
          uStack_120 = puStack_108[1];
          uStack_d1 = 0;
          pdb_141453410(&puStack_100,&puStack_128);
          pdb_141488be0(&puStack_100);
          param_1[2] = (ulonglong)puStack_f0;
          *param_1 = (ulonglong)puStack_100;
          param_1[1] = uStack_f8;
          return;
        }
        puVar25 = puVar24 + 1;
        pcVar22 = puVar24 + lVar18;
        puVar15 = puVar20 + 10;
        puVar24 = puVar25;
      } while (*pcVar22 != '\0');
      puVar25[lVar18 + -1] = 1;
      uVar19 = *(ulonglong *)((longlong)puVar20 + 7);
      lVar21 = *(longlong *)((longlong)puVar20 + 0xf);
      fVar2 = *(float *)((longlong)puVar20 + 0x17);
      fVar29 = *(float *)((longlong)puVar20 + 0x1b);
      fVar3 = *(float *)((longlong)puVar20 + 0x1f);
      fVar28 = *(float *)((longlong)puVar20 + 0x23);
      cVar5 = *(char *)((longlong)puVar20 + 0x27);
      uStack_12c = (undefined3)((uint)*(undefined4 *)((longlong)puVar20 + 0x2b) >> 8);
      uVar6 = puVar20[10];
      bVar17 = false;
      puVar24 = (undefined1 *)0x0;
      if ((uVar19 & 1) == 0) {
LAB_1414879ef:
        do {
          pcVar22 = (char *)(uVar8 + 0x20 + (longlong)puVar24 * 0x28);
          puVar23 = puVar24;
          do {
            if (puStack_e0 <= puVar23) goto LAB_141487d6b;
            if (((((puVar23[lVar18] == '\0') && ((pcVar22[-0x20] & 1U) == 0)) && (*pcVar22 == cVar5)
                 ) && (((float)((uint)(fVar2 - *(float *)(pcVar22 + -0x10)) & uVar10) <= fVar11 &&
                       ((float)((uint)(fVar3 - *(float *)(pcVar22 + -8)) & uVar10) <= fVar11)))) &&
               ((fVar4 = *(float *)(pcVar22 + -4), fVar29 <= fVar4 + fVar12 &&
                (fVar26 = *(float *)(pcVar22 + -0xc), fVar26 <= fVar28 + fVar12)))) {
              fVar27 = fVar26;
              if (fVar29 <= fVar26) {
                fVar27 = fVar29;
              }
              fVar29 = (float)(~-(uint)NAN(fVar29) & (uint)fVar27 |
                              -(uint)NAN(fVar29) & (uint)fVar26);
              fVar26 = fVar4;
              if (fVar4 <= fVar28) {
                fVar26 = fVar28;
              }
              fVar28 = (float)(~-(uint)NAN(fVar28) & (uint)fVar26 | -(uint)NAN(fVar28) & (uint)fVar4
                              );
              puVar23[lVar18] = 1;
              puVar24 = puVar23 + 1;
              bVar17 = true;
              bVar16 = bVar17;
              if (puVar24 < puStack_e0) goto LAB_1414879ef;
              break;
            }
            puVar23 = puVar23 + 1;
            pcVar22 = pcVar22 + 0x28;
            bVar16 = bVar17;
          } while (puVar23 < puStack_e0);
          puVar24 = (undefined1 *)0x0;
          bVar17 = false;
        } while (bVar16);
      }
      else {
LAB_141487aef:
        do {
          bVar16 = bVar17;
          pcVar22 = (char *)(uVar8 + 0x20 + (longlong)puVar24 * 0x28);
          puVar23 = puVar24;
          do {
            if (puStack_e0 <= puVar23) goto LAB_141487d6b;
            if ((((puVar23[lVar18] == '\0') && (*(longlong *)(pcVar22 + -0x20) == 1)) &&
                (*(longlong *)(pcVar22 + -0x18) == lVar21)) &&
               (((*pcVar22 == cVar5 &&
                 ((float)((uint)(fVar2 - *(float *)(pcVar22 + -0x10)) & uVar10) <= fVar11)) &&
                (((float)((uint)(fVar3 - *(float *)(pcVar22 + -8)) & uVar10) <= fVar11 &&
                 ((fVar4 = *(float *)(pcVar22 + -4), fVar29 <= fVar4 + fVar12 &&
                  (fVar26 = *(float *)(pcVar22 + -0xc), fVar26 <= fVar28 + fVar12)))))))) {
              fVar27 = fVar26;
              if (fVar29 <= fVar26) {
                fVar27 = fVar29;
              }
              fVar29 = (float)(~-(uint)NAN(fVar29) & (uint)fVar27 |
                              -(uint)NAN(fVar29) & (uint)fVar26);
              fVar26 = fVar4;
              if (fVar4 <= fVar28) {
                fVar26 = fVar28;
              }
              fVar28 = (float)(~-(uint)NAN(fVar28) & (uint)fVar26 | -(uint)NAN(fVar28) & (uint)fVar4
                              );
              puVar23[lVar18] = 1;
              puVar24 = puVar23 + 1;
              bVar16 = true;
              bVar17 = bVar16;
              if (puVar24 < puStack_e0) goto LAB_141487aef;
              break;
            }
            puVar23 = puVar23 + 1;
            pcVar22 = pcVar22 + 0x28;
          } while (puVar23 < puStack_e0);
          puVar24 = (undefined1 *)0x0;
          bVar17 = false;
        } while (bVar16);
      }
      if (puStack_f0 == puStack_100) {
        pdb_142d7ede0(&puStack_100);
      }
      *(ulonglong *)(uStack_f8 + (longlong)puVar14 * 0x28) = uVar19;
      *(longlong *)(uStack_f8 + 8 + (longlong)puVar14 * 0x28) = lVar21;
      *(float *)(uStack_f8 + 0x10 + (longlong)puVar14 * 0x28) = fVar2;
      *(float *)(uStack_f8 + 0x14 + (longlong)puVar14 * 0x28) = fVar29;
      *(float *)(uStack_f8 + 0x18 + (longlong)puVar14 * 0x28) = fVar3;
      *(float *)(uStack_f8 + 0x1c + (longlong)puVar14 * 0x28) = fVar28;
      *(char *)(uStack_f8 + 0x20 + (longlong)puVar14 * 0x28) = cVar5;
      uStack_12d = (undefined1)((uint)uVar6 >> 0x18);
      *(undefined4 *)(uStack_f8 + 0x21 + (longlong)puVar14 * 0x28) = uVar6;
      *(uint *)(uStack_f8 + 0x24 + (longlong)puVar14 * 0x28) = CONCAT31(uStack_12c,uStack_12d);
      puStack_f0 = puVar14 + 1;
    } while( true );
  }
  pdb_14007ee60();
  lVar18 = func_0x0001406abae0(puVar25,1);
  if (lVar18 == 0) {
    pdb_142dc7e2a(1,puVar25);
  }
  else {
    pdb_14007ee60();
    uVar19 = func_0x0001406abab0((longlong)puVar25 * 0x28,8);
    if (uVar19 != 0) goto LAB_141487919;
    pdb_142dc7e2a(8,(longlong)puVar25 * 0x28);
  }
  goto LAB_141487dcf;
LAB_141487d6b:
  if (puVar24 <= puStack_e0) {
    puVar24 = puStack_e0;
  }
  pdb_142dc81f2(puVar24,puStack_e0,&UNK_14330d258);
LAB_141487dcf:
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
}

