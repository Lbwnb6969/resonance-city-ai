// VA 0x1408fb250, PDB extent 3414 bytes
// country_core::systems::backend::update_material_args::material_update_transforms
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/update_material_args.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::backend::update_material_args::material_update_transforms
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/update_material_args.rs
   Extent: 3414 */

void pdb_1408fb250(undefined8 *param_1,longlong *param_2)

{
  byte *pbVar1;
  float fVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  undefined *puVar24;
  undefined *puVar25;
  ulonglong uVar26;
  undefined4 uVar27;
  uint *puVar28;
  undefined *puVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 in_stack_fffffffffffffd78;
  uint *puStack_248;
  uint *puStack_240;
  longlong lStack_228;
  longlong lStack_218;
  longlong lStack_208;
  undefined4 uStack_1fc;
  longlong lStack_1f8;
  longlong lStack_1f0;
  longlong *plStack_1e8;
  int iStack_1e0;
  int iStack_1dc;
  uint uStack_1d8;
  uint uStack_1d4;
  byte bStack_1d0;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  ulonglong uStack_148;
  longlong lStack_140;
  longlong lStack_138;
  undefined8 uStack_130;
  longlong *plStack_128;
  float *pfStack_120;
  undefined4 *puStack_118;
  longlong lStack_110;
  longlong lStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  int iStack_ec;
  uint uStack_e8;
  undefined4 uStack_e4;
  longlong lStack_e0;
  longlong *plStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong *plStack_c0;
  undefined1 uStack_b2;
  byte bStack_b1;
  undefined8 uStack_b0;
  
  uVar27 = (undefined4)((ulonglong)in_stack_fffffffffffffd78 >> 0x20);
  uStack_b0 = 0xfffffffffffffffe;
  plVar16 = param_2;
  cVar11 = pdb_140e94b40();
  if (cVar11 == '\0') {
    lStack_138 = 0;
    goto LAB_1408fb43e;
  }
  lVar23 = 0x50;
  lVar14 = pdb_1408fd5a0(0x50);
  puVar24 = &UNK_14301ddc5;
  if (lVar14 == 1) {
    if (plVar16 < (longlong *)0x51) {
      uVar15 = pdb_1408fd5a0(plVar16);
      if ((uVar15 & 1) != 0) {
        if (0x50 < (longlong)plVar16 + 2U) goto LAB_1408fbc34;
        lVar23 = 0x4e - (longlong)plVar16;
        puVar24 = &UNK_14301ddc7 + (longlong)plVar16;
      }
      goto LAB_1408fb30c;
    }
  }
  else {
LAB_1408fb30c:
    puVar25 = &UNK_14301d8ef;
    puVar29 = &UNK_14301d8b0;
    do {
      bVar3 = puVar25[-1];
      uVar12 = (uint)(char)bVar3;
      if ((char)bVar3 < '\0') {
        bVar4 = puVar25[-2];
        if ((char)bVar4 < -0x40) {
          bVar5 = puVar25[-3];
          if ((char)bVar5 < -0x40) {
            pbVar1 = puVar25 + -4;
            puVar25 = puVar25 + -4;
            uVar12 = bVar5 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar25 = puVar25 + -3;
            uVar12 = bVar5 & 0xf;
          }
          uVar12 = bVar4 & 0x3f | uVar12 << 6;
        }
        else {
          puVar25 = puVar25 + -2;
          uVar12 = bVar4 & 0x1f;
        }
        uVar12 = (uint)(bVar3 & 0x3f) | uVar12 << 6;
        if (uVar12 != 0x5c) goto LAB_1408fb394;
LAB_1408fb3af:
        if ((undefined *)0x3f < puVar25 + -0x14301d8af) goto LAB_1408fbbf1;
        lVar14 = 0x3f - (longlong)(puVar25 + -0x14301d8af);
        puVar29 = puVar25 + 1;
        goto LAB_1408fb3d4;
      }
      puVar25 = puVar25 + -1;
      if (uVar12 == 0x5c) goto LAB_1408fb3af;
LAB_1408fb394:
      if (uVar12 == 0x2f) goto LAB_1408fb3af;
    } while (puVar25 != &UNK_14301d8b0);
    lVar14 = 0x3f;
LAB_1408fb3d4:
    plVar16 = (longlong *)pdb_140e97000();
    if (((char)plVar16[0xd] == '\x01') ||
       (plVar16 = (longlong *)pdb_142d8ec20(plVar16,0), plVar16 != (longlong *)0x0)) {
      if (*plVar16 != 0) goto LAB_1408fbbb1;
      *plVar16 = -1;
      plStack_c0 = plVar16;
      uStack_130 = pdb_140e94f10(plVar16 + 1,puVar24,lVar23,puVar29,lVar14,1,0);
      uVar27 = (undefined4)((ulonglong)lVar14 >> 0x20);
      *plStack_c0 = *plStack_c0 + 1;
      lStack_138 = 1;
LAB_1408fb43e:
      lVar14 = *param_2;
      lVar23 = param_2[1];
      pdb_141523870(&puStack_248,lVar23,lVar14,(int)param_2[2],
                    CONCAT44(uVar27,*(undefined4 *)((longlong)param_2 + 0x14)));
      fVar10 = _DAT_142e36f28;
      lStack_110 = lStack_228;
      lStack_108 = lStack_218;
      lStack_100 = lStack_208;
      lStack_d0 = lStack_1f8;
      lStack_c8 = lStack_1f0;
      plStack_c0 = plStack_1e8;
      iStack_ec = iStack_1dc;
      uStack_e8 = 0xc233b000;
      if ((uint)(iStack_1dc - iStack_1e0) < 0xc233b000) {
        uStack_e8 = iStack_1dc - iStack_1e0;
      }
      uVar15 = (ulonglong)uStack_1d8;
      plStack_128 = (longlong *)*param_1;
      uVar17 = (ulonglong)uStack_1d4;
      bStack_b1 = bStack_1d0;
      puVar28 = puStack_248;
      uVar27 = uStack_1fc;
LAB_1408fb516:
      if ((bStack_b1 & 1) == 0) {
        do {
          iVar13 = (int)uVar17;
          if (iVar13 == (int)uVar15) {
            do {
              if (puVar28 == puStack_240) goto LAB_1408fbb2b;
              uVar12 = *puVar28;
              puVar28 = puVar28 + 1;
              uVar15 = *(ulonglong *)
                        (*(longlong *)(lVar23 + 0x100) + 0x58 + (ulonglong)uVar12 * 0xa0);
            } while (uVar15 == 0);
            lVar22 = *(longlong *)(lVar23 + 0x100) + (ulonglong)uVar12 * 0xa0;
            uVar18 = (ulonglong)*(uint *)(lVar22 + 0x94);
            lVar20 = *(longlong *)(lVar23 + 0x1a0);
            uVar17 = *(ulonglong *)(lVar20 + 0x40 + uVar18 * 0x48);
            lVar19 = *(longlong *)(lVar20 + 0x18 + uVar18 * 0x48);
            lVar21 = *(longlong *)(lVar20 + 0x38 + uVar18 * 0x48);
            if ((*(ulonglong *)(lVar14 + 0x118) < uVar17) &&
               (uVar26 = *(ulonglong *)(lVar21 + *(ulonglong *)(lVar14 + 0x118) * 8), uVar26 != 0))
            {
              lStack_d0 = *(longlong *)(lVar19 + 0x10 + ~uVar26 * 0x30);
              uVar26 = *(ulonglong *)(lVar14 + 0x120);
              if (uVar17 <= uVar26) goto LAB_1408fb750;
LAB_1408fb727:
              uVar17 = *(ulonglong *)(lVar21 + uVar26 * 8);
              if (uVar17 == 0) goto LAB_1408fb750;
              lStack_c8 = *(longlong *)(lVar19 + 0x10 + ~uVar17 * 0x30);
            }
            else {
              lStack_d0 = 0;
              uVar26 = *(ulonglong *)(lVar14 + 0x120);
              if (uVar26 < uVar17) goto LAB_1408fb727;
LAB_1408fb750:
              lStack_c8 = 0;
            }
            lVar21 = ~*(ulonglong *)(lVar21 + *(longlong *)(lVar14 + 0x110) * 8) * 0x30;
            lStack_108 = *(longlong *)(lVar19 + 0x10 + lVar21);
            lStack_100 = *(longlong *)(lVar19 + 0x28 + lVar21);
            plStack_c0 = (longlong *)
                         pdb_140effb40(lVar20 + uVar18 * 0x48,*(undefined8 *)(lVar14 + 0x128));
            lStack_110 = *(longlong *)(lVar22 + 0x50);
            iVar13 = 0;
            uVar17 = 0;
          }
          else {
            uVar17 = uVar17 & 0xffffffff;
          }
          uVar17 = (ulonglong)~*(uint *)(lStack_110 + 8 + uVar17 * 0x10);
          if ((uint)(iStack_ec - *(int *)((longlong)plStack_c0 + uVar17 * 4)) < uStack_e8)
          goto LAB_1408fb7e0;
          uVar17 = (ulonglong)(iVar13 + 1);
        } while( true );
      }
      if ((int)uVar17 != (int)uVar15) goto LAB_1408fb62e;
      while (puVar28 != puStack_240) {
        uVar12 = *puVar28;
        puVar28 = puVar28 + 1;
        uVar15 = *(ulonglong *)(*(longlong *)(lVar23 + 0x1a0) + 0x10 + (ulonglong)uVar12 * 0x48);
        if (uVar15 != 0) {
          lVar20 = *(longlong *)(lVar23 + 0x1a0) + (ulonglong)uVar12 * 0x48;
          uVar17 = *(ulonglong *)(lVar20 + 0x40);
          lVar19 = *(longlong *)(lVar20 + 0x18);
          lVar21 = *(longlong *)(lVar20 + 0x38);
          if ((*(ulonglong *)(lVar14 + 0x118) < uVar17) &&
             (uVar18 = *(ulonglong *)(lVar21 + *(ulonglong *)(lVar14 + 0x118) * 8), uVar18 != 0)) {
            lStack_d0 = *(longlong *)(lVar19 + 0x10 + ~uVar18 * 0x30);
            uVar18 = *(ulonglong *)(lVar14 + 0x120);
            if (uVar17 <= uVar18) goto LAB_1408fb5e0;
LAB_1408fb5b7:
            uVar17 = *(ulonglong *)(lVar21 + uVar18 * 8);
            if (uVar17 == 0) goto LAB_1408fb5e0;
            lStack_c8 = *(longlong *)(lVar19 + 0x10 + ~uVar17 * 0x30);
          }
          else {
            lStack_d0 = 0;
            uVar18 = *(ulonglong *)(lVar14 + 0x120);
            if (uVar18 < uVar17) goto LAB_1408fb5b7;
LAB_1408fb5e0:
            lStack_c8 = 0;
          }
          lVar21 = ~*(ulonglong *)(lVar21 + *(longlong *)(lVar14 + 0x110) * 8) * 0x30;
          lStack_108 = *(longlong *)(lVar19 + 0x10 + lVar21);
          lStack_100 = *(longlong *)(lVar19 + 0x28 + lVar21);
          plStack_c0 = (longlong *)pdb_140effb40(lVar20,*(undefined8 *)(lVar14 + 0x128));
          uVar17 = 0;
LAB_1408fb62e:
          do {
            iVar13 = (int)uVar17;
            uVar17 = uVar17 & 0xffffffff;
            if ((uint)(iStack_ec - *(int *)((longlong)plStack_c0 + uVar17 * 4)) < uStack_e8)
            goto LAB_1408fb7e0;
            uVar17 = (ulonglong)(iVar13 + 1U);
          } while (iVar13 + 1U != (uint)uVar15);
        }
      }
LAB_1408fbb2b:
      if (lStack_138 == 0) {
        return;
      }
      plVar16 = (longlong *)pdb_140e97000();
      if ((char)plVar16[0xd] != '\x01') goto LAB_1408fbbbd;
      do {
        if (*plVar16 == 0) {
          *plVar16 = -1;
          plStack_c0 = plVar16;
          pdb_140e95370(plVar16 + 1,uStack_130);
          *plStack_c0 = *plStack_c0 + 1;
          return;
        }
LAB_1408fbbb1:
        plVar16 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_1408fbbbd:
        plVar16 = (longlong *)pdb_142d8ec20(plVar16,0);
      } while (plVar16 != (longlong *)0x0);
    }
    pdb_142dc7890(&UNK_143326860);
LAB_1408fbbf1:
    pdb_142dc8070(&UNK_14301d8b0,0x3f);
  }
  pdb_142dc8070(&UNK_14301ddc5,0x50,0);
LAB_1408fbc34:
  pdb_142dc8070(&UNK_14301ddc5,0x50);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
LAB_1408fb7e0:
  plStack_d8 = (longlong *)(lStack_108 + uVar17 * 8);
  puStack_118 = (undefined4 *)(lStack_100 + uVar17 * 4);
  lVar20 = uVar17 * 0x38 + lStack_d0;
  pfStack_120 = (float *)(uVar17 * 0x30 + lStack_c8);
  uVar17 = (ulonglong)(iVar13 + 1);
  if (*(longlong *)(lVar20 + 0x28) != 0) {
    lStack_f8 = lVar20 + 0x28;
    lVar19 = pdb_140e72a40();
    lVar20 = *(longlong *)(lVar19 + 0x10);
    if (lVar20 != 0) {
      lVar19 = *(longlong *)(lVar19 + 8);
      lVar21 = 0;
      uStack_148 = uVar17;
      uStack_e4 = uVar27;
      lStack_e0 = lVar14;
      do {
        if ((*(longlong *)(lVar19 + 0x18 + lVar21) == 0x29) &&
           (iVar13 = pub_142e32750(*(undefined8 *)(lVar19 + 0x10 + lVar21),&UNK_14301d8ef),
           uVar17 = uStack_148, iVar13 == 0)) {
          if (*plStack_d8 == 0) {
            lStack_140 = pdb_140e51270(*plStack_128 + 0x10,lStack_f8);
            lVar14 = lStack_e0;
          }
          else {
            lStack_140 = pdb_140e50330();
            lVar14 = lStack_e0;
          }
          lStack_e0 = *plStack_128;
          fStack_1ac = (float)*(undefined8 *)(pfStack_120 + 8);
          fStack_19c = (float)((ulonglong)*(undefined8 *)(pfStack_120 + 8) >> 0x20);
          fVar7 = *pfStack_120;
          fVar8 = pfStack_120[1];
          fVar9 = pfStack_120[3];
          fStack_198 = pfStack_120[4];
          fStack_194 = pfStack_120[5];
          fStack_190 = pfStack_120[6];
          fVar2 = pfStack_120[2];
          fVar36 = fVar2 + fVar2;
          fVar30 = fVar8 + fVar8;
          fVar34 = fVar7 * (fVar7 + fVar7);
          fVar31 = (fVar7 + fVar7) * fVar9;
          fVar35 = fVar36 * fVar7 - fVar30 * fVar9;
          fVar32 = fVar31 + fVar36 * fVar8;
          fVar33 = fVar10 - (fVar34 + fVar8 * fVar30);
          fStack_1bc = pfStack_120[7];
          fStack_1c8 = fStack_1bc * (fVar10 - (fVar8 * fVar30 + fVar2 * fVar36));
          fStack_1c4 = fStack_1bc * (fVar30 * fVar7 + fVar9 * fVar36);
          fStack_1c0 = fStack_1bc * fVar35;
          fStack_1bc = fStack_1bc * fVar35;
          fStack_1b8 = fStack_1ac * (fVar30 * fVar7 - fVar9 * fVar36);
          fStack_1b4 = fStack_1ac * (fVar10 - (fVar2 * fVar36 + fVar34));
          fStack_1b0 = fStack_1ac * fVar32;
          fStack_1ac = fStack_1ac * fVar32;
          fStack_1a8 = fStack_19c * (fVar30 * fVar9 + fVar36 * fVar7);
          fStack_1a4 = fStack_19c * (fVar36 * fVar8 - fVar31);
          fStack_1a0 = fStack_19c * fVar33;
          fStack_19c = fStack_19c * fVar33;
          uStack_b2 = 1;
          fStack_18c = fStack_190;
          lStack_f8 = lStack_140;
          pdb_140e07fe0(&uStack_188,&fStack_1c8);
          fStack_1c8 = (float)uStack_188;
          fStack_1c4 = (float)uStack_188._4_4_;
          fStack_1c0 = (float)(undefined4)uStack_180;
          fStack_1bc = (float)uStack_180._4_4_;
          fStack_1b8 = (float)(undefined4)uStack_178;
          fStack_1b4 = (float)uStack_178._4_4_;
          fStack_1b0 = (float)(undefined4)uStack_170;
          fStack_1ac = (float)uStack_170._4_4_;
          fStack_1a8 = (float)uStack_168;
          fStack_1a4 = (float)uStack_164;
          fStack_1a0 = (float)uStack_160;
          fStack_19c = (float)uStack_15c;
          uStack_180 = 0x8000000000000000;
          uStack_178 = &UNK_14301d8ef;
          uStack_170 = 0x29;
          uStack_188 = 0;
          uStack_b2 = 1;
          pdb_141560a60(lStack_e0 + 0x10,&lStack_140,1,&uStack_188,&fStack_1c8);
          *puStack_118 = uStack_e4;
          if (*plStack_d8 != 0) {
            pdb_14098d520(plStack_d8);
          }
          *plStack_d8 = lStack_f8;
          uVar27 = uStack_e4;
          break;
        }
        lVar21 = lVar21 + 0x40;
        lVar14 = lStack_e0;
        uVar27 = uStack_e4;
      } while (lVar20 << 6 != lVar21);
    }
  }
  goto LAB_1408fb516;
}

