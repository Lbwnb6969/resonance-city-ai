// VA 0x1428e8400, PDB extent 2894 bytes
// system_clutter::autoclutter::add_autoclutter_around_gates::add_autoclutter_around_gates
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/add_autoclutter_around_gates.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_clutter::autoclutter::add_autoclutter_around_gates::add_autoclutter_around_gates
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/add_autoclutter_around_gates.rs
   Extent: 2894 */

void pdb_1428e8400(undefined8 *param_1,longlong *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  code *pcVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong *plVar26;
  longlong lVar27;
  int iVar28;
  uint *puVar29;
  undefined *puVar30;
  longlong lVar31;
  uint *puVar32;
  char cVar33;
  longlong unaff_R12;
  float *pfVar34;
  undefined *unaff_R15;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined *apuStack_228 [2];
  undefined8 uStack_218;
  float afStack_210 [2];
  undefined8 uStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  float afStack_1c4 [7];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined4 *puStack_198;
  longlong lStack_190;
  longlong *plStack_188;
  uint *puStack_180;
  longlong lStack_178;
  uint *puStack_170;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  longlong lStack_150;
  undefined4 uStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  undefined4 uStack_134;
  undefined1 uStack_130;
  undefined1 uStack_12f;
  undefined2 uStack_12e;
  undefined1 uStack_12c;
  float fStack_128;
  float fStack_124;
  longlong lStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  uint uStack_10c;
  longlong *plStack_108;
  longlong lStack_100;
  char cStack_f2;
  char cStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  plVar26 = param_2;
  cStack_f1 = pdb_140e94b40();
  if (cStack_f1 == '\0') {
    uStack_1d8 = 0;
    goto LAB_1428e861b;
  }
  unaff_R12 = 0x57;
  lVar24 = pdb_1428e8f50(0x57);
  pfVar34 = (float *)&UNK_1435b2338;
  if (lVar24 != 1) goto LAB_1428e84e6;
  if (plVar26 < (longlong *)0x58) {
    uVar25 = pdb_1428e8f50(plVar26);
    if ((uVar25 & 1) == 0) {
LAB_1428e84e6:
      puVar30 = &UNK_1435b22a5;
      unaff_R15 = &UNK_1435b225f;
      do {
        bVar6 = puVar30[-1];
        uVar23 = (uint)(char)bVar6;
        if ((char)bVar6 < '\0') {
          bVar7 = puVar30[-2];
          if ((char)bVar7 < -0x40) {
            bVar8 = puVar30[-3];
            if ((char)bVar8 < -0x40) {
              pbVar1 = puVar30 + -4;
              puVar30 = puVar30 + -4;
              uVar23 = bVar8 & 0x3f | (*pbVar1 & 7) << 6;
            }
            else {
              puVar30 = puVar30 + -3;
              uVar23 = bVar8 & 0xf;
            }
            uVar23 = bVar7 & 0x3f | uVar23 << 6;
          }
          else {
            puVar30 = puVar30 + -2;
            uVar23 = bVar7 & 0x1f;
          }
          uVar23 = (uint)(bVar6 & 0x3f) | uVar23 << 6;
          if (uVar23 != 0x5c) goto LAB_1428e8574;
LAB_1428e858c:
          if ((undefined *)0x46 < puVar30 + -0x1435b225e) goto LAB_1428e8c57;
          lVar24 = 0x46 - (longlong)(puVar30 + -0x1435b225e);
          unaff_R15 = puVar30 + 1;
          goto LAB_1428e85ae;
        }
        puVar30 = puVar30 + -1;
        if (uVar23 == 0x5c) goto LAB_1428e858c;
LAB_1428e8574:
        if (uVar23 == 0x2f) goto LAB_1428e858c;
      } while (puVar30 != &UNK_1435b225f);
      lVar24 = 0x46;
LAB_1428e85ae:
      plVar26 = (longlong *)pdb_140e97000();
      if ((char)plVar26[0xd] != '\x01') goto LAB_1428e8c1c;
LAB_1428e85bd:
      if (*plVar26 == 0) {
        *plVar26 = -1;
        plStack_108 = plVar26;
        uStack_1d0 = pdb_140e94f10(plVar26 + 1,pfVar34,unaff_R12,unaff_R15,lVar24,1,0);
        *plStack_108 = *plStack_108 + 1;
        uStack_1d8 = 1;
        uStack_118 = uStack_1d0;
LAB_1428e861b:
        fVar17 = _UNK_142e6124c;
        fVar16 = _UNK_142e61248;
        fVar15 = _UNK_142e61244;
        fVar14 = _DAT_142e61240;
        fVar13 = _DAT_142e36f28;
        lStack_120 = *param_2;
        lStack_178 = param_2[1];
        puStack_170 = *(uint **)(lStack_120 + 0xf8) + *(longlong *)(lStack_120 + 0x100);
        cStack_f2 = *(char *)(lStack_120 + 0x108);
        uStack_110 = *(undefined4 *)((longlong)param_1 + 0x1c);
        uStack_1a0 = *param_1;
        puStack_198 = (undefined4 *)param_1[2];
        pfVar34 = &fStack_168;
        lStack_100 = 0;
        uStack_10c = 0;
        puVar29 = *(uint **)(lStack_120 + 0xf8);
        lVar24 = 0;
        param_2 = (longlong *)0x8;
        lVar31 = lStack_178;
        puVar32 = puStack_170;
        cVar33 = cStack_f2;
        do {
          if (cVar33 == '\0') {
            uVar25 = (ulonglong)uStack_10c;
            if (uStack_10c == (uint)lVar24) {
              do {
                if (puVar29 == puVar32) goto LAB_1428e8b54;
                uVar23 = *puVar29;
                puVar29 = puVar29 + 1;
                lVar24 = *(longlong *)
                          (*(longlong *)(lVar31 + 0x100) + 0x58 + (ulonglong)uVar23 * 0xa0);
              } while (lVar24 == 0);
              lVar27 = *(longlong *)(lVar31 + 0x100) + (ulonglong)uVar23 * 0xa0;
              uVar25 = (ulonglong)*(uint *)(lVar27 + 0x94);
              if (*(ulonglong *)(lStack_120 + 0x110) <
                  *(ulonglong *)(*(longlong *)(lVar31 + 0x1a0) + 0x40 + uVar25 * 0x48)) {
                lVar2 = *(longlong *)(lVar31 + 0x1a0) + uVar25 * 0x48;
                uVar25 = *(ulonglong *)
                          (*(longlong *)(lVar2 + 0x38) + *(ulonglong *)(lStack_120 + 0x110) * 8);
                if (uVar25 == 0) goto LAB_1428e87e2;
                lStack_100 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10 + ~uVar25 * 0x30);
              }
              else {
LAB_1428e87e2:
                lStack_100 = 0;
              }
              param_2 = *(longlong **)(lVar27 + 0x50);
              uVar25 = 0;
            }
            iVar28 = (int)uVar25;
            uVar25 = (ulonglong)~*(uint *)(param_2 + uVar25 * 2 + 1);
          }
          else {
            uVar25 = (ulonglong)uStack_10c;
            if (uStack_10c == (uint)lVar24) {
              do {
                if (puVar29 == puVar32) goto LAB_1428e8b54;
                uVar23 = *puVar29;
                puVar29 = puVar29 + 1;
                lVar24 = *(longlong *)
                          (*(longlong *)(lVar31 + 0x1a0) + 0x10 + (ulonglong)uVar23 * 0x48);
              } while (lVar24 == 0);
              lVar27 = *(longlong *)(lVar31 + 0x1a0) + (ulonglong)uVar23 * 0x48;
              if ((*(ulonglong *)(lStack_120 + 0x110) < *(ulonglong *)(lVar27 + 0x40)) &&
                 (uVar25 = *(ulonglong *)
                            (*(longlong *)(lVar27 + 0x38) + *(ulonglong *)(lStack_120 + 0x110) * 8),
                 uVar25 != 0)) {
                lStack_100 = *(longlong *)(*(longlong *)(lVar27 + 0x18) + 0x10 + ~uVar25 * 0x30);
              }
              else {
                lStack_100 = 0;
              }
              uVar25 = 0;
            }
            iVar28 = (int)uVar25;
          }
          plVar26 = (longlong *)(uVar25 * 0x38 + lStack_100);
          uStack_10c = iVar28 + 1;
          if (2 < (ulonglong)plVar26[2]) {
            puVar10 = (undefined8 *)plVar26[1];
            lVar31 = (longlong)puVar10 + plVar26[2] * 0xc;
            if (lVar31 == 0xc) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_1435b22a8);
            }
            apuStack_228[0] = &UNK_1435b22c0;
            apuStack_228[1] = (undefined *)0xa;
            uStack_218._0_4_ = 0xbf800000;
            uStack_218._4_4_ = (float)*puVar10 + _DAT_1435b2180;
            afStack_210[0] = (float)((ulonglong)*puVar10 >> 0x20) + _UNK_1435b2184;
            afStack_210[1] = *(float *)(puVar10 + 1) + _UNK_1435b2188;
            uStack_208._0_4_ = *(float *)(plVar26 + 4) + _UNK_1435b218c;
            uStack_208._4_4_ = *(undefined4 *)((longlong)plVar26 + 0x24);
            puStack_200 = &UNK_1435b22ca;
            uStack_1f8 = 9;
            uStack_1f0 = 0x3f800000;
            fStack_1ec = (float)*(undefined8 *)(lVar31 + -0xc) + _DAT_1435b2180;
            fStack_1e8 = (float)((ulonglong)*(undefined8 *)(lVar31 + -0xc) >> 0x20) + _UNK_1435b2184
            ;
            fStack_1e4 = *(float *)(lVar31 + -4) + _UNK_1435b2188;
            fStack_1e0 = *(float *)(plVar26 + 5) + _UNK_1435b218c;
            uStack_1dc = *(undefined4 *)((longlong)plVar26 + 0x2c);
            unaff_R15 = (undefined *)0x0;
            lStack_190 = lVar24;
            plStack_188 = param_2;
            puStack_180 = puVar29;
            plStack_108 = plVar26;
            do {
              puVar30 = apuStack_228[(longlong)unaff_R15 * 5];
              puVar29 = puStack_180;
              lVar24 = lStack_190;
              param_2 = plStack_188;
              lVar31 = lStack_178;
              puVar32 = puStack_170;
              cVar33 = cStack_f2;
              if (puVar30 == (undefined *)0x0) break;
              puVar11 = apuStack_228[(longlong)unaff_R15 * 5 + 1];
              uVar3 = (&uStack_218)[(longlong)unaff_R15 * 5];
              fVar37 = (float)uVar3;
              uVar4 = *(undefined8 *)(afStack_210 + (longlong)unaff_R15 * 10);
              uVar5 = (&uStack_208)[(longlong)unaff_R15 * 5];
              fVar35 = (float)uVar5;
              fVar36 = (float)((ulonglong)uVar5 >> 0x20);
              fStack_164 = _DAT_142e36f28 / SQRT(fVar35 * fVar35 + fVar36 * fVar36);
              fStack_168 = (float)((uint)fVar36 ^ _DAT_142e37820) * fStack_164;
              fStack_164 = fStack_164 * fVar35;
              uStack_1a8 = uVar5;
              pdb_140df4520(afStack_1c4,pfVar34);
              lVar24 = plStack_108[6];
              unaff_R12 = plStack_108[3];
              fStack_168 = SUB84(puVar30,0);
              fStack_164 = (float)((ulonglong)puVar30 >> 0x20);
              fStack_160 = SUB84(puVar11,0);
              uStack_15c = (undefined4)((ulonglong)puVar11 >> 0x20);
              uStack_158 = (int)lVar24;
              lStack_150 = unaff_R12;
              param_1 = (undefined8 *)pdb_1428f9ac0(pfVar34);
              pdb_140df4520(pfVar34,&uStack_1a8);
              fVar22 = fStack_160;
              fVar21 = fStack_164;
              fVar20 = fStack_168;
              uVar19 = afStack_1c4._4_8_;
              fVar18 = afStack_1c4[0];
              uVar9 = *(undefined1 *)((longlong)plStack_108 + 0x34);
              fStack_128 = (fVar35 + fVar35) - (fVar36 + fVar36);
              fStack_124 = fVar36 + fVar36 + fVar35 + fVar35;
              pdb_140df4520(pfVar34,&fStack_128);
              fStack_144 = fVar13 * _DAT_14328a9a0 +
                           fVar13 * fVar14 * _DAT_14300c780 +
                           _DAT_142e37830 + _DAT_142e377f0 * fVar13 * fVar14 * _DAT_1430140d0;
              fStack_140 = fStack_168 * _UNK_14328a9a4 +
                           fVar18 * fVar15 * _UNK_14300c784 +
                           (float)((ulonglong)uVar3 >> 0x20) +
                           fVar37 * fVar20 * fVar15 * _UNK_1430140d4;
              fStack_13c = fStack_164 * _UNK_14328a9a8 +
                           (float)uVar19 * fVar16 * _UNK_14300c788 +
                           (float)uVar4 + fVar37 * fVar21 * fVar16 * _UNK_1430140d8;
              fStack_138 = fStack_160 * _UNK_14328a9ac +
                           SUB84(uVar19,4) * fVar17 * _UNK_14300c78c +
                           (float)((ulonglong)uVar4 >> 0x20) +
                           fVar37 * fVar22 * fVar17 * _UNK_1430140dc;
              *puStack_198 = uStack_110;
              fStack_168 = 4.2039e-45;
              fStack_164 = 0.0;
              fStack_160 = (float)unaff_R12;
              uStack_15c = (undefined4)((ulonglong)unaff_R12 >> 0x20);
              uStack_148 = 0x40000000;
              uStack_134 = 0;
              uStack_130 = 0;
              uStack_12e = 0xffff;
              uStack_12c = 0;
              uStack_158 = (int)lVar24;
              lStack_150 = uVar5;
              uStack_12f = uVar9;
              pdb_1410cff30(uStack_1a0,param_1,pfVar34);
              unaff_R15 = unaff_R15 + 1;
              puVar29 = puStack_180;
              lVar24 = lStack_190;
              param_2 = plStack_188;
              lVar31 = lStack_178;
              puVar32 = puStack_170;
              cVar33 = cStack_f2;
            } while (unaff_R15 != (undefined *)0x2);
          }
        } while( true );
      }
      goto LAB_1428e8c10;
    }
    if ((longlong)plVar26 + 2U < 0x58) {
      unaff_R12 = 0x55 - (longlong)plVar26;
      pfVar34 = (float *)((longlong)plVar26 + 0x1435b233a);
      goto LAB_1428e84e6;
    }
    goto LAB_1428e8c9a;
  }
  goto LAB_1428e8c7a;
LAB_1428e8b54:
  if (cStack_f1 != '\0') {
    plVar26 = (longlong *)pdb_140e97000();
    if (((char)plVar26[0xd] != '\x01') &&
       (plVar26 = (longlong *)pdb_142e16b00(plVar26,0), plVar26 == (longlong *)0x0))
    goto LAB_1428e8c4b;
    if (*plVar26 != 0) {
LAB_1428e8c10:
      plVar26 = (longlong *)pdb_142dc8090(&UNK_14328b468);
LAB_1428e8c1c:
      plVar26 = (longlong *)pdb_142e16b00(plVar26,0);
      if (plVar26 == (longlong *)0x0) goto LAB_1428e8c4b;
      goto LAB_1428e85bd;
    }
    *plVar26 = -1;
    plStack_108 = plVar26;
    pdb_140e95370(plVar26 + 1);
    *plStack_108 = *plStack_108 + 1;
  }
  return;
LAB_1428e8c4b:
  pdb_142dc7890(&UNK_14328b3f8);
LAB_1428e8c57:
  pdb_142dc8070(&UNK_1435b225f,0x46);
LAB_1428e8c7a:
  pdb_142dc8070(&UNK_1435b2338,0x57,0);
LAB_1428e8c9a:
  pdb_142dc8070(&UNK_1435b2338,0x57);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

