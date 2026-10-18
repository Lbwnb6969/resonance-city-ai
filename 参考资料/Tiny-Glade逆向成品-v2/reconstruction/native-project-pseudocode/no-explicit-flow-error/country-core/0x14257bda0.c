// VA 0x14257bda0, PDB extent 2254 bytes
// country_core::render::nani::systems::nani_update_stairs_floor
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::render::nani::systems::nani_update_stairs_floor
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
   Extent: 2254 */

longlong * pdb_14257bda0(undefined8 *param_1,longlong *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  code *pcVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  longlong lVar18;
  uint *puVar19;
  longlong lVar20;
  undefined *puVar21;
  longlong *plVar22;
  undefined *puVar23;
  bool bVar24;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  uint uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  undefined8 uStack_b8;
  longlong lStack_b0;
  undefined8 uStack_a8;
  longlong *plStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  int iStack_78;
  uint uStack_74;
  longlong *plStack_70;
  char cStack_65;
  uint uStack_64;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  plVar22 = param_2;
  cVar9 = pdb_140e94b40();
  if (cVar9 == '\0') {
    lStack_b0 = 0;
    goto LAB_14257bf5e;
  }
  plVar22 = (longlong *)&UNK_14351c579;
  lVar18 = 0x3d;
  uVar16 = 0x3d;
  lVar11 = pdb_142585200(&UNK_14351c579);
  if (lVar11 != 1) {
LAB_14257be3c:
    puVar21 = &UNK_14351bdcd;
    puVar23 = &UNK_14351bd9f;
    do {
      bVar3 = puVar21[-1];
      uVar10 = (uint)(char)bVar3;
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
        if (uVar10 != 0x5c) goto LAB_14257bec4;
LAB_14257bedd:
        if ((undefined *)0x2e < puVar21 + -0x14351bd9e) goto LAB_14257c4e0;
        lVar11 = 0x2e - (longlong)(puVar21 + -0x14351bd9e);
        puVar23 = puVar21 + 1;
        goto LAB_14257bf00;
      }
      puVar21 = puVar21 + -1;
      if (uVar10 == 0x5c) goto LAB_14257bedd;
LAB_14257bec4:
      if (uVar10 == 0x2f) goto LAB_14257bedd;
    } while (puVar21 != &UNK_14351bd9f);
    lVar11 = 0x2e;
LAB_14257bf00:
    plVar13 = (longlong *)pdb_140e97000();
    if (((char)plVar13[0xd] == '\x01') ||
       (plVar13 = (longlong *)pdb_142d8ec20(plVar13,0), plVar13 != (longlong *)0x0)) {
      if (*plVar13 != 0) goto LAB_14257c496;
      *plVar13 = -1;
      plStack_70 = plVar13;
      uStack_a8 = pdb_140e94f10(plVar13 + 1,plVar22,lVar18,puVar23,lVar11,1,0);
      *plStack_70 = *plStack_70 + 1;
      lStack_b0 = 1;
LAB_14257bf5e:
      uVar17 = CONCAT71((int7)((ulonglong)plVar22 >> 8),0x18);
      plStack_a0 = (longlong *)pdb_1409d2d80(*param_2);
      uVar8 = _DAT_142e36f28;
      plStack_70 = (longlong *)*param_1;
      lVar11 = param_1[1];
      iStack_78 = *(int *)((longlong)param_1 + 0x14);
      puVar19 = (uint *)plStack_70[0x1f];
      puVar2 = puVar19 + plStack_70[0x20];
      cStack_65 = (char)plStack_70[0x21];
      uStack_74 = 0xc233b000;
      if ((uint)(iStack_78 - *(int *)(param_1 + 2)) < 0xc233b000) {
        uStack_74 = iStack_78 - *(int *)(param_1 + 2);
      }
      lStack_98 = 0;
      lVar18 = 8;
      lStack_88 = 0;
      lStack_80 = 0;
      uStack_64 = 0;
      lStack_90 = 0;
      bVar24 = false;
      lVar20 = 0;
      uVar10 = 0;
      uStack_b8 = uVar17;
joined_r0x00014257bff4:
      if (cStack_65 == '\0') {
        do {
          if (uVar10 == (uint)lVar20) {
            do {
              if (puVar19 == puVar2) goto LAB_14257c41e;
              uVar10 = *puVar19;
              puVar19 = puVar19 + 1;
              lVar20 = *(longlong *)
                        (*(longlong *)(lVar11 + 0x100) + 0x58 + (ulonglong)uVar10 * 0xa0);
            } while (lVar20 == 0);
            lVar14 = *(longlong *)(lVar11 + 0x100) + (ulonglong)uVar10 * 0xa0;
            lVar18 = *(longlong *)(lVar11 + 0x1a0) + (ulonglong)*(uint *)(lVar14 + 0x94) * 0x48;
            uVar16 = *(ulonglong *)
                      (*(longlong *)(lVar11 + 0x1a0) + 0x40 +
                      (ulonglong)*(uint *)(lVar14 + 0x94) * 0x48);
            if (((ulonglong)plStack_70[0x22] < uVar16) &&
               (uVar12 = *(ulonglong *)(*(longlong *)(lVar18 + 0x38) + plStack_70[0x22] * 8),
               uVar12 != 0)) {
              lStack_88 = *(longlong *)(*(longlong *)(lVar18 + 0x18) + 0x10 + ~uVar12 * 0x30);
              uVar12 = plStack_70[0x23];
              if (uVar16 <= uVar12) goto LAB_14257c100;
LAB_14257c0d8:
              uVar16 = *(ulonglong *)(*(longlong *)(lVar18 + 0x38) + uVar12 * 8);
              if (uVar16 == 0) goto LAB_14257c100;
              lStack_80 = *(longlong *)(*(longlong *)(lVar18 + 0x18) + 0x10 + ~uVar16 * 0x30);
            }
            else {
              lStack_88 = 0;
              uVar12 = plStack_70[0x23];
              if (uVar12 < uVar16) goto LAB_14257c0d8;
LAB_14257c100:
              lStack_80 = 0;
            }
            uVar16 = *(ulonglong *)(lVar14 + 0x88);
            if (((ulonglong)plStack_70[0x25] < uVar16) &&
               (*(longlong *)(*(longlong *)(lVar14 + 0x80) + plStack_70[0x25] * 8) != 0)) {
              lVar15 = lVar18;
              lStack_98 = pdb_140effb40(lVar18);
              uVar16 = *(ulonglong *)(lVar14 + 0x88);
              uStack_64 = (uint)CONCAT71((int7)((ulonglong)lVar15 >> 8),1);
            }
            else {
              uStack_64 = 0;
            }
            uVar10 = 0;
            if (((ulonglong)plStack_70[0x26] < uVar16) &&
               (*(longlong *)(*(longlong *)(lVar14 + 0x80) + plStack_70[0x26] * 8) != 0)) {
              lStack_90 = pdb_140effb40(lVar18);
              bVar24 = true;
            }
            else {
              bVar24 = false;
            }
            lVar18 = *(longlong *)(lVar14 + 0x50);
            uVar6 = *(uint *)(lVar18 + 8);
          }
          else {
            uVar6 = *(uint *)(lVar18 + 8 + (ulonglong)uVar10 * 0x10);
          }
          if (((uStack_64 & 1) != 0) &&
             (uVar16 = (ulonglong)~uVar6,
             (uint)(iStack_78 - *(int *)(lStack_98 + uVar16 * 4)) < uStack_74)) goto LAB_14257c1e2;
          if ((bVar24) &&
             (uVar16 = (ulonglong)~uVar6,
             (uint)(iStack_78 - *(int *)(lStack_90 + uVar16 * 4)) < uStack_74)) goto LAB_14257c1da;
          uVar10 = uVar10 + 1;
        } while( true );
      }
      do {
        if (uVar10 == (uint)lVar20) {
          do {
            if (puVar19 == puVar2) goto LAB_14257c41e;
            uVar10 = *puVar19;
            puVar19 = puVar19 + 1;
            lVar20 = *(longlong *)(*(longlong *)(lVar11 + 0x1a0) + 0x10 + (ulonglong)uVar10 * 0x48);
          } while (lVar20 == 0);
          lVar14 = *(longlong *)(lVar11 + 0x1a0) + (ulonglong)uVar10 * 0x48;
          uVar16 = *(ulonglong *)(lVar14 + 0x40);
          if (((ulonglong)plStack_70[0x22] < uVar16) &&
             (uVar12 = *(ulonglong *)(*(longlong *)(lVar14 + 0x38) + plStack_70[0x22] * 8),
             uVar12 != 0)) {
            lStack_88 = *(longlong *)(*(longlong *)(lVar14 + 0x18) + 0x10 + ~uVar12 * 0x30);
            uVar12 = plStack_70[0x23];
            if (uVar16 <= uVar12) goto LAB_14257c350;
LAB_14257c318:
            uVar12 = *(ulonglong *)(*(longlong *)(lVar14 + 0x38) + uVar12 * 8);
            if (uVar12 == 0) goto LAB_14257c350;
            lStack_80 = *(longlong *)(*(longlong *)(lVar14 + 0x18) + 0x10 + ~uVar12 * 0x30);
            uVar12 = plStack_70[0x25];
            if (uVar12 < uVar16) goto LAB_14257c368;
LAB_14257c390:
            uStack_64 = 0;
          }
          else {
            lStack_88 = 0;
            uVar12 = plStack_70[0x23];
            if (uVar12 < uVar16) goto LAB_14257c318;
LAB_14257c350:
            lStack_80 = 0;
            uVar12 = plStack_70[0x25];
            if (uVar16 <= uVar12) goto LAB_14257c390;
LAB_14257c368:
            if (*(longlong *)(*(longlong *)(lVar14 + 0x38) + uVar12 * 8) == 0) goto LAB_14257c390;
            lVar15 = lVar14;
            lStack_98 = pdb_140effb40(lVar14);
            uVar16 = *(ulonglong *)(lVar14 + 0x40);
            uStack_64 = (uint)CONCAT71((int7)((ulonglong)lVar15 >> 8),1);
          }
          uVar10 = 0;
          if (uVar16 <= (ulonglong)plStack_70[0x26]) {
            bVar24 = false;
            goto LAB_14257c3d2;
          }
          if (*(longlong *)(*(longlong *)(lVar14 + 0x38) + plStack_70[0x26] * 8) != 0) {
            lStack_90 = pdb_140effb40(lVar14);
            bVar24 = true;
            uVar16 = 0;
            goto joined_r0x00014257c3d9;
          }
          bVar24 = false;
          uVar16 = 0;
          if ((char)uStack_64 != '\0') goto LAB_14257c3db;
        }
        else {
LAB_14257c3d2:
          uVar16 = (ulonglong)uVar10;
joined_r0x00014257c3d9:
          if ((uStack_64 & 1) != 0) {
LAB_14257c3db:
            if ((uint)(iStack_78 - *(int *)(lStack_98 + uVar16 * 4)) < uStack_74)
            goto LAB_14257c1e2;
          }
        }
        if ((bVar24) && ((uint)(iStack_78 - *(int *)(lStack_90 + uVar16 * 4)) < uStack_74))
        goto LAB_14257c1da;
        uVar10 = uVar10 + 1;
      } while( true );
    }
    goto LAB_14257c4d4;
  }
  if (uVar16 < 0x3e) {
    plVar22 = (longlong *)&UNK_14351c579;
    uVar12 = pdb_142585200(&UNK_14351c579);
    if ((uVar12 & 1) != 0) {
      if (0x3d < uVar16 + 2) goto LAB_14257c523;
      lVar18 = 0x3b - uVar16;
      plVar22 = (longlong *)(&UNK_14351c57b + uVar16);
    }
    goto LAB_14257be3c;
  }
  goto LAB_14257c503;
LAB_14257c1da:
  bVar24 = true;
LAB_14257c1e2:
  lVar14 = uVar16 * 0x30 + lStack_80;
  uStack_e8 = *(undefined4 *)(lVar14 + 0x28);
  uStack_e4 = *(byte *)(lVar14 + 0x2c) | 2;
  uStack_108 = *(undefined4 *)(lVar14 + 8);
  uStack_104 = *(undefined4 *)(lVar14 + 0xc);
  uStack_100 = *(undefined4 *)(lVar14 + 0x10);
  uStack_fc = *(undefined4 *)(lVar14 + 0x14);
  uStack_f8 = *(undefined4 *)(lVar14 + 0x18);
  uStack_f4 = *(undefined4 *)(lVar14 + 0x1c);
  uStack_f0 = *(undefined4 *)(lVar14 + 0x20);
  uStack_ec = *(undefined4 *)(lVar14 + 0x24);
  uStack_e0 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  pdb_140955bd0(uStack_b8,lStack_88 + uVar16 * 0xc,&uStack_c8,uVar8,&uStack_108,&UNK_14351c0b0);
  uVar10 = uVar10 + 1;
  goto joined_r0x00014257bff4;
LAB_14257c41e:
  param_2 = plStack_a0;
  pdb_140e9a350(plStack_a0);
  pdb_140e9a350();
  LOCK();
  plVar22 = (longlong *)*param_2;
  bVar24 = plVar22 == (longlong *)0x8;
  if (bVar24) {
    *param_2 = 0;
    plVar22 = (longlong *)0x8;
  }
  UNLOCK();
  if (!bVar24) goto LAB_14257c4a3;
  while( true ) {
    if (lStack_b0 == 0) {
      return plVar22;
    }
    plVar22 = (longlong *)pdb_140e97000();
    if (((char)plVar22[0xd] != '\x01') &&
       (plVar22 = (longlong *)pdb_142d8ec20(plVar22,0), plVar22 == (longlong *)0x0)) break;
    if (*plVar22 == 0) {
      *plVar22 = -1;
      plStack_70 = plVar22;
      pdb_140e95370(plVar22 + 1,uStack_a8);
      *plStack_70 = *plStack_70 + 1;
      return plStack_70;
    }
LAB_14257c496:
    pdb_142dc8090(&UNK_143326a50);
LAB_14257c4a3:
    plVar22 = (longlong *)pdb_142dbca40(param_2);
  }
LAB_14257c4d4:
  pdb_142dc7890(&UNK_143326860);
LAB_14257c4e0:
  pdb_142dc8070(&UNK_14351bd9f,0x2e);
LAB_14257c503:
  pdb_142dc8070(&UNK_14351c579,0x3d,0);
LAB_14257c523:
  pdb_142dc8070(&UNK_14351c579,0x3d);
  pcVar7 = (code *)swi(3);
  plVar22 = (longlong *)(*pcVar7)();
  return plVar22;
}

