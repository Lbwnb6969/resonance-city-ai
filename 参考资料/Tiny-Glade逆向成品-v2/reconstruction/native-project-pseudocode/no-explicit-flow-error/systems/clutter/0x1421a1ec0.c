// VA 0x1421a1ec0, PDB extent 2100 bytes
// system_clutter::autoclutter::add_preplaced_autoclutter::add_preplaced_autoclutter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/add_preplaced_autoclutter.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_clutter::autoclutter::add_preplaced_autoclutter::add_preplaced_autoclutter
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/add_preplaced_autoclutter.rs
   Extent: 2100 */

void pdb_1421a1ec0(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,char *param_6)

{
  byte *pbVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined8 uVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  undefined *unaff_RSI;
  undefined8 *puVar22;
  ulonglong uVar23;
  undefined *puVar24;
  undefined *puVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong *plVar29;
  char cVar30;
  undefined8 *puVar31;
  undefined *unaff_R15;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uStack_158;
  float fStack_150;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  undefined4 uStack_134;
  undefined8 uStack_130;
  float fStack_128;
  undefined4 uStack_124;
  char cStack_120;
  undefined1 uStack_11f;
  undefined2 uStack_11e;
  undefined1 uStack_11c;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined4 *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  float fStack_d0;
  float fStack_cc;
  longlong *plStack_c8;
  longlong *plStack_c0;
  char cStack_b1;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  plVar29 = param_2;
  uVar14 = pdb_140e94b40();
  puVar21 = (undefined8 *)(ulonglong)uVar14;
  if ((char)uVar14 == '\0') {
    uStack_118 = 0;
    plVar29 = param_2;
    puVar31 = puVar21;
    goto LAB_1421a20c7;
  }
  unaff_R15 = (undefined *)0x51;
  lVar15 = pdb_1421a2700(0x51);
  unaff_RSI = &UNK_14346c2f0;
  if (lVar15 == 1) {
    if ((longlong *)0x51 < plVar29) {
LAB_1421a2456:
      pdb_142dc8070(&UNK_14346c2f0,0x51,0);
LAB_1421a2476:
      pdb_142dc8070(&UNK_14346c2f0,0x51);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar16 = pdb_1421a2700(plVar29);
    if ((uVar16 & 1) != 0) {
      if ((undefined *)0x51 < (undefined *)((longlong)plVar29 + 2)) goto LAB_1421a2476;
      unaff_R15 = (undefined *)(0x4f - (longlong)plVar29);
      unaff_RSI = &UNK_14346c2f2 + (longlong)plVar29;
    }
  }
  puVar24 = &UNK_14346c27b;
  plVar29 = (longlong *)&UNK_14346c238;
  do {
    bVar3 = puVar24[-1];
    uVar14 = (uint)(char)bVar3;
    plStack_c0 = param_2;
    if ((char)bVar3 < '\0') {
      bVar4 = puVar24[-2];
      if ((char)bVar4 < -0x40) {
        bVar5 = puVar24[-3];
        if ((char)bVar5 < -0x40) {
          pbVar1 = puVar24 + -4;
          puVar24 = puVar24 + -4;
          uVar14 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar24 = puVar24 + -3;
          uVar14 = bVar5 & 0xf;
        }
        uVar14 = bVar4 & 0x3f | uVar14 << 6;
      }
      else {
        puVar24 = puVar24 + -2;
        uVar14 = bVar4 & 0x1f;
      }
      uVar14 = (uint)(bVar3 & 0x3f) | uVar14 << 6;
      if (uVar14 != 0x5c) goto LAB_1421a2014;
LAB_1421a2033:
      puVar25 = puVar24 + -0x14346c237;
      if ((undefined *)0x43 < puVar25) {
        pdb_142dc8070(&UNK_14346c238,0x43,puVar25,0x43,&UNK_14346c3a8);
        goto LAB_1421a2456;
      }
      puVar31 = (undefined8 *)(0x43 - (longlong)puVar25);
      plVar29 = (longlong *)(puVar24 + 1);
      goto LAB_1421a205c;
    }
    puVar24 = puVar24 + -1;
    if (uVar14 == 0x5c) goto LAB_1421a2033;
LAB_1421a2014:
    if (uVar14 == 0x2f) goto LAB_1421a2033;
  } while (puVar24 != &UNK_14346c238);
  puVar31 = (undefined8 *)0x43;
LAB_1421a205c:
  plVar17 = (longlong *)pdb_140e97000();
  puVar22 = param_3;
  if ((char)plVar17[0xd] != '\x01') goto LAB_1421a23ea;
  while( true ) {
    param_3 = puVar22;
    puVar22 = param_3;
    if (*plVar17 != 0) goto LAB_1421a23de;
    *plVar17 = -1;
    plStack_c8 = plVar17;
    unaff_R15 = (undefined *)pdb_140e94f10(plVar17 + 1,unaff_RSI,unaff_R15,plVar29,puVar31,1,0);
    *plStack_c8 = *plStack_c8 + 1;
    puStack_110 = unaff_R15;
    uStack_118 = 1;
    plVar29 = plStack_c0;
    puVar31 = (undefined8 *)((ulonglong)puVar21 & 0xffffffff);
LAB_1421a20c7:
    puVar19 = (ulonglong *)*param_4;
    lVar15 = param_4[1];
    uVar16 = *puVar19;
    uVar20 = 0;
    uVar27 = uVar16 - *(ulonglong *)(lVar15 + 0x18);
    if (uVar16 < *(ulonglong *)(lVar15 + 0x18)) {
      uVar27 = uVar20;
    }
    uVar26 = uVar16 - *(ulonglong *)(lVar15 + 0x38);
    if (uVar16 < *(ulonglong *)(lVar15 + 0x38)) {
      uVar26 = uVar20;
    }
    uVar16 = *(ulonglong *)(lVar15 + 0x30);
    uVar28 = uVar16 - uVar26;
    if (uVar26 > uVar16) {
      uVar28 = uVar20;
    }
    uVar6 = *(ulonglong *)(lVar15 + 0x10);
    uVar23 = uVar6 - uVar27;
    if (uVar27 > uVar6) {
      uVar23 = uVar20;
    }
    uVar20 = *(ulonglong *)(lVar15 + 0x40);
    puVar22 = (undefined8 *)(uVar23 + uVar28);
    *puVar19 = uVar20 - (longlong)puVar22;
    cVar30 = (char)puVar31;
    if (uVar27 <= uVar6 && uVar6 - uVar27 != 0 || uVar26 <= uVar16 && uVar16 - uVar26 != 0) break;
    puVar19 = (ulonglong *)*param_5;
    lVar15 = param_5[1];
    uVar16 = *puVar19;
    uVar20 = 0;
    uVar27 = uVar16 - *(ulonglong *)(lVar15 + 0x18);
    if (uVar16 < *(ulonglong *)(lVar15 + 0x18)) {
      uVar27 = uVar20;
    }
    uVar26 = uVar16 - *(ulonglong *)(lVar15 + 0x38);
    if (uVar16 < *(ulonglong *)(lVar15 + 0x38)) {
      uVar26 = uVar20;
    }
    uVar16 = *(ulonglong *)(lVar15 + 0x30);
    uVar28 = uVar16 - uVar26;
    if (uVar26 > uVar16) {
      uVar28 = uVar20;
    }
    uVar6 = *(ulonglong *)(lVar15 + 0x10);
    uVar23 = uVar6 - uVar27;
    if (uVar27 > uVar6) {
      uVar23 = uVar20;
    }
    uVar20 = *(ulonglong *)(lVar15 + 0x40);
    puVar22 = (undefined8 *)(uVar23 + uVar28);
    *puVar19 = uVar20 - (longlong)puVar22;
    fVar13 = _UNK_142e61234;
    fVar12 = _DAT_142e61230;
    fVar11 = _DAT_142e36f38;
    uVar10 = _DAT_142e36f28;
    if (uVar27 <= uVar6 && uVar6 - uVar27 != 0 || uVar26 <= uVar16 && uVar16 - uVar26 != 0) break;
    if (*param_6 == '\0') {
      *param_6 = '\x01';
      goto joined_r0x0001421a235e;
    }
    lVar15 = *(longlong *)(*plVar29 + 0x10);
    puStack_f0 = unaff_R15;
    cStack_b1 = cVar30;
    if (lVar15 != 0) {
      plVar29 = *(longlong **)(*plVar29 + 8);
      puVar31 = (undefined8 *)(lVar15 * 0x1c);
      plStack_c0 = (longlong *)CONCAT44(plStack_c0._4_4_,*(undefined4 *)((longlong)param_3 + 0x1c));
      plStack_c8 = (longlong *)*param_3;
      puStack_f8 = (undefined4 *)param_3[2];
      puVar22 = (undefined8 *)0x0;
      param_4 = &uStack_158;
      puVar24 = (undefined *)0x0;
      do {
        pdb_140df4540(&puStack_e8,(undefined *)((longlong)(plVar29 + 1) + (longlong)puVar22),uVar10)
        ;
        fVar8 = *(float *)((longlong)plVar29 + (longlong)puVar22);
        fVar9 = ((float *)((longlong)plVar29 + (longlong)puVar22))[1];
        uVar2 = *(undefined8 *)((longlong)(plVar29 + 2) + (longlong)puVar22);
        fVar33 = (float)uVar2;
        cVar30 = *_DAT_143ca4500;
        fStack_cc = fVar8 * *(float *)((undefined *)((longlong)plVar29 + 0x14) + (longlong)puVar22)
                    + *(float *)((undefined *)((longlong)plVar29 + 4) + (longlong)puVar22) * fVar33;
        fStack_d0 = fVar8 * fVar33 -
                    *(float *)((undefined *)((longlong)plVar29 + 4) + (longlong)puVar22) *
                    *(float *)((undefined *)((longlong)plVar29 + 0x14) + (longlong)puVar22);
        pdb_140df4520(param_4,&fStack_d0);
        uVar14 = (uint)(cVar30 == '\0') * 5;
        param_3 = (undefined8 *)(ulonglong)uVar14;
        fVar32 = (float)uStack_158;
        uVar16 = (ulonglong)uStack_158 >> 0x20;
        fVar34 = SUB84(puStack_e8,0);
        uVar27 = (ulonglong)puStack_e8 >> 0x20;
        fVar35 = fStack_150 * fVar11 + (float)uStack_e0;
        cVar30 = *(char *)((longlong)(plVar29 + 3) + (longlong)puVar22);
        *puStack_f8 = plStack_c0._0_4_;
        puStack_e8 = &UNK_14346c27b;
        uStack_e0 = 0x11;
        puStack_d8 = puVar24;
        uVar18 = pdb_1428f9250(&puStack_e8);
        uStack_158 = 5;
        uStack_130 = CONCAT44((float)uVar27 + (float)uVar16 * fVar13,fVar34 + fVar32 * fVar12);
        uStack_124 = SUB84(puVar24,0);
        uStack_11f = (undefined1)uVar14;
        uStack_11e = 0xffff;
        uStack_11c = 0;
        fStack_140 = fVar8;
        fStack_13c = fVar9;
        fStack_138 = fVar33;
        uStack_134 = (int)((ulonglong)uVar2 >> 0x20);
        fStack_128 = fVar35;
        cStack_120 = cVar30 + '\x02';
        pdb_1410cff30(plStack_c8,uVar18,param_4);
        puVar22 = (undefined8 *)((longlong)puVar22 + 0x1c);
        unaff_R15 = puVar24 + 1;
        puVar24 = unaff_R15;
      } while (puVar31 != puVar22);
    }
    unaff_RSI = puStack_f0;
    if (cStack_b1 == '\0') {
      return;
    }
    plVar17 = (longlong *)pdb_140e97000();
    if ((char)plVar17[0xd] != '\x01') goto LAB_1421a241e;
    while( true ) {
      puVar21 = param_3;
      if (*plVar17 == 0) {
        *plVar17 = -1;
        plStack_c0 = plVar17;
        pdb_140e95370(plVar17 + 1,unaff_RSI);
        goto LAB_1421a238d;
      }
LAB_1421a23de:
      plVar17 = (longlong *)pdb_142dc8090(&UNK_14328b468);
LAB_1421a23ea:
      plVar17 = (longlong *)pdb_142e16b00(plVar17,0);
      param_3 = puVar21;
      if (plVar17 != (longlong *)0x0) break;
LAB_1421a2412:
      do {
        plVar17 = (longlong *)pdb_142dc7890(&UNK_14328b3f8);
LAB_1421a241e:
        plVar17 = (longlong *)pdb_142e16b00(plVar17,0);
      } while (plVar17 == (longlong *)0x0);
    }
  }
  *puVar19 = uVar20;
  *param_6 = '\0';
joined_r0x0001421a235e:
  if (cVar30 != '\0') {
    plVar17 = (longlong *)pdb_140e97000();
    if (((char)plVar17[0xd] != '\x01') &&
       (plVar17 = (longlong *)pdb_142e16b00(plVar17,0), plVar17 == (longlong *)0x0))
    goto LAB_1421a2412;
    puVar21 = param_3;
    if (*plVar17 != 0) goto LAB_1421a23de;
    *plVar17 = -1;
    plStack_c0 = plVar17;
    pdb_140e95370(plVar17 + 1,unaff_R15);
LAB_1421a238d:
    *plStack_c0 = *plStack_c0 + 1;
  }
  return;
}

