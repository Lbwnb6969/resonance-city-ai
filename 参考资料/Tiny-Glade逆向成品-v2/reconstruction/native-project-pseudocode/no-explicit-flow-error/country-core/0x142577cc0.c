// VA 0x142577cc0, PDB extent 1780 bytes
// country_core::render::nani::systems::nani_update_stair_rope
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::render::nani::systems::nani_update_stair_rope
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/nani/systems.rs
   Extent: 1780 */

longlong * pdb_142577cc0(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint *puVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  code *pcVar8;
  uint uVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined *puVar19;
  uint *puVar20;
  longlong *plVar21;
  undefined *puVar22;
  bool bVar23;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 uStack_c8;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  longlong *plStack_78;
  longlong lStack_70;
  longlong *plStack_68;
  longlong lStack_60;
  longlong lStack_58;
  char cStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  plVar21 = param_2;
  cVar10 = pdb_140e94b40();
  if (cVar10 == '\0') {
    lStack_90 = 0;
    goto LAB_142577e7e;
  }
  plVar21 = (longlong *)&UNK_14351c53b;
  lVar18 = 0x3b;
  uVar16 = 0x3b;
  lVar12 = pdb_142585200(&UNK_14351c53b);
  if (lVar12 != 1) {
LAB_142577d58:
    puVar19 = &UNK_14351bdcd;
    puVar22 = &UNK_14351bd9f;
    do {
      bVar5 = puVar19[-1];
      uVar11 = (uint)(char)bVar5;
      if ((char)bVar5 < '\0') {
        bVar6 = puVar19[-2];
        if ((char)bVar6 < -0x40) {
          bVar7 = puVar19[-3];
          if ((char)bVar7 < -0x40) {
            pbVar1 = puVar19 + -4;
            puVar19 = puVar19 + -4;
            uVar11 = bVar7 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar19 = puVar19 + -3;
            uVar11 = bVar7 & 0xf;
          }
          uVar11 = bVar6 & 0x3f | uVar11 << 6;
        }
        else {
          puVar19 = puVar19 + -2;
          uVar11 = bVar6 & 0x1f;
        }
        uVar11 = (uint)(bVar5 & 0x3f) | uVar11 << 6;
        if (uVar11 != 0x5c) goto LAB_142577de4;
LAB_142577dfd:
        if ((undefined *)0x2e < puVar19 + -0x14351bd9e) goto LAB_142578230;
        lVar12 = 0x2e - (longlong)(puVar19 + -0x14351bd9e);
        puVar22 = puVar19 + 1;
        goto LAB_142577e20;
      }
      puVar19 = puVar19 + -1;
      if (uVar11 == 0x5c) goto LAB_142577dfd;
LAB_142577de4:
      if (uVar11 == 0x2f) goto LAB_142577dfd;
    } while (puVar19 != &UNK_14351bd9f);
    lVar12 = 0x2e;
LAB_142577e20:
    plVar14 = (longlong *)pdb_140e97000();
    if (((char)plVar14[0xd] == '\x01') ||
       (plVar14 = (longlong *)pdb_142d8ec20(plVar14,0), plVar14 != (longlong *)0x0)) {
      if (*plVar14 != 0) goto LAB_1425781e6;
      *plVar14 = -1;
      plStack_68 = plVar14;
      uStack_88 = pdb_140e94f10(plVar14 + 1,plVar21,lVar18,puVar22,lVar12,1,0);
      *plStack_68 = *plStack_68 + 1;
      lStack_90 = 1;
LAB_142577e7e:
      uVar17 = CONCAT71((int7)((ulonglong)plVar21 >> 8),0x1b);
      plStack_78 = (longlong *)pdb_1409d2d80(*param_2);
      lStack_70 = *param_1;
      lVar12 = param_1[1];
      puVar20 = *(uint **)(lStack_70 + 0xf8);
      puVar4 = puVar20 + *(longlong *)(lStack_70 + 0x100);
      cStack_49 = *(char *)(lStack_70 + 0x108);
      lVar18 = 0;
      lStack_80 = 8;
      lStack_60 = 0;
      lStack_58 = 0;
      uVar11 = 0;
      uStack_98 = uVar17;
      if (cStack_49 != '\0') goto LAB_142578000;
      do {
        if (uVar11 == (uint)lVar18) {
          do {
            if (puVar20 == puVar4) goto LAB_142578172;
            uVar11 = *puVar20;
            puVar20 = puVar20 + 1;
            lVar18 = *(longlong *)(*(longlong *)(lVar12 + 0x100) + 0x58 + (ulonglong)uVar11 * 0xa0);
          } while (lVar18 == 0);
          lVar15 = *(longlong *)(lVar12 + 0x100) + (ulonglong)uVar11 * 0xa0;
          uVar16 = (ulonglong)*(uint *)(lVar15 + 0x94);
          lVar2 = *(longlong *)(lVar12 + 0x1a0) + uVar16 * 0x48;
          uVar16 = *(ulonglong *)(*(longlong *)(lVar12 + 0x1a0) + 0x40 + uVar16 * 0x48);
          if ((*(ulonglong *)(lStack_70 + 0x110) < uVar16) &&
             (uVar13 = *(ulonglong *)
                        (*(longlong *)(lVar2 + 0x38) + *(ulonglong *)(lStack_70 + 0x110) * 8),
             uVar13 != 0)) {
            lStack_60 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10 + ~uVar13 * 0x30);
            uVar13 = *(ulonglong *)(lStack_70 + 0x118);
            if (uVar16 <= uVar13) goto LAB_142577fcf;
LAB_142577fa8:
            uVar16 = *(ulonglong *)(*(longlong *)(lVar2 + 0x38) + uVar13 * 8);
            if (uVar16 == 0) goto LAB_142577fcf;
            lStack_58 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10 + ~uVar16 * 0x30);
          }
          else {
            lStack_60 = 0;
            uVar13 = *(ulonglong *)(lStack_70 + 0x118);
            if (uVar13 < uVar16) goto LAB_142577fa8;
LAB_142577fcf:
            lStack_58 = 0;
          }
          lStack_80 = *(longlong *)(lVar15 + 0x50);
          uVar11 = 0;
        }
        uVar9 = ~*(uint *)(lStack_80 + 8 + (ulonglong)uVar11 * 0x10);
        while( true ) {
          plStack_68 = (longlong *)(lStack_60 + (ulonglong)uVar9 * 0xc);
          puVar3 = (undefined8 *)(lStack_58 + (ulonglong)uVar9 * 0x48);
          uStack_c8 = puVar3[8];
          uStack_f8 = *(undefined4 *)(puVar3 + 2);
          uStack_f4 = *(undefined4 *)((longlong)puVar3 + 0x14);
          uStack_f0 = *(undefined4 *)(puVar3 + 3);
          uStack_ec = *(undefined4 *)((longlong)puVar3 + 0x1c);
          uStack_e8 = *(undefined4 *)(puVar3 + 4);
          uStack_e4 = *(undefined4 *)((longlong)puVar3 + 0x24);
          uStack_e0 = *(undefined4 *)(puVar3 + 5);
          uStack_dc = *(undefined4 *)((longlong)puVar3 + 0x2c);
          uStack_d8 = *(undefined4 *)(puVar3 + 6);
          uStack_d4 = *(undefined4 *)((longlong)puVar3 + 0x34);
          uStack_d0 = *(undefined4 *)(puVar3 + 7);
          uStack_cc = *(undefined4 *)((longlong)puVar3 + 0x3c);
          pdb_140fb49c0(&uStack_a8,puVar3);
          uStack_f8 = (undefined4)uStack_a8;
          uStack_f4 = uStack_a8._4_4_;
          uStack_f0 = uStack_a0;
          uStack_ec = uStack_9c;
          uStack_a0 = *(undefined4 *)(puVar3 + 1);
          uStack_a8 = *puVar3;
          pdb_140952e80(uStack_98,plStack_68,&uStack_a8,*(undefined4 *)((longlong)puVar3 + 0xc),
                        &uStack_f8,&UNK_14351bec0);
          uVar11 = uVar11 + 1;
          if (cStack_49 == '\0') break;
LAB_142578000:
          uVar9 = uVar11;
          if (uVar11 == (uint)lVar18) {
            do {
              if (puVar20 == puVar4) goto LAB_142578172;
              uVar11 = *puVar20;
              puVar20 = puVar20 + 1;
              lVar18 = *(longlong *)
                        (*(longlong *)(lVar12 + 0x1a0) + 0x10 + (ulonglong)uVar11 * 0x48);
            } while (lVar18 == 0);
            lVar2 = *(longlong *)(lVar12 + 0x1a0) + (ulonglong)uVar11 * 0x48;
            uVar16 = *(ulonglong *)(lVar2 + 0x40);
            if ((*(ulonglong *)(lStack_70 + 0x110) < uVar16) &&
               (uVar13 = *(ulonglong *)
                          (*(longlong *)(lVar2 + 0x38) + *(ulonglong *)(lStack_70 + 0x110) * 8),
               uVar13 != 0)) {
              lStack_60 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10 + ~uVar13 * 0x30);
              uVar13 = *(ulonglong *)(lStack_70 + 0x118);
              if (uVar16 <= uVar13) goto LAB_1425780c5;
LAB_14257809e:
              uVar16 = *(ulonglong *)(*(longlong *)(lVar2 + 0x38) + uVar13 * 8);
              if (uVar16 == 0) goto LAB_1425780c5;
              lStack_58 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10 + ~uVar16 * 0x30);
            }
            else {
              lStack_60 = 0;
              uVar13 = *(ulonglong *)(lStack_70 + 0x118);
              if (uVar13 < uVar16) goto LAB_14257809e;
LAB_1425780c5:
              lStack_58 = 0;
            }
            uVar11 = 0;
            uVar9 = uVar11;
          }
        }
      } while( true );
    }
    goto LAB_142578224;
  }
  if (uVar16 < 0x3c) {
    plVar21 = (longlong *)&UNK_14351c53b;
    uVar13 = pdb_142585200(&UNK_14351c53b);
    if ((uVar13 & 1) != 0) {
      if (0x3b < uVar16 + 2) goto LAB_142578273;
      lVar18 = 0x39 - uVar16;
      plVar21 = (longlong *)(&UNK_14351c53d + uVar16);
    }
    goto LAB_142577d58;
  }
  goto LAB_142578253;
LAB_142578172:
  param_2 = plStack_78;
  pdb_140e9a350(plStack_78);
  pdb_140e9a350();
  LOCK();
  plVar21 = (longlong *)*param_2;
  bVar23 = plVar21 == (longlong *)0x8;
  if (bVar23) {
    *param_2 = 0;
    plVar21 = (longlong *)0x8;
  }
  UNLOCK();
  if (!bVar23) goto LAB_1425781f3;
  while( true ) {
    if (lStack_90 == 0) {
      return plVar21;
    }
    plVar21 = (longlong *)pdb_140e97000();
    if (((char)plVar21[0xd] != '\x01') &&
       (plVar21 = (longlong *)pdb_142d8ec20(plVar21,0), plVar21 == (longlong *)0x0)) break;
    if (*plVar21 == 0) {
      *plVar21 = -1;
      plStack_68 = plVar21;
      pdb_140e95370(plVar21 + 1,uStack_88);
      *plStack_68 = *plStack_68 + 1;
      return plStack_68;
    }
LAB_1425781e6:
    pdb_142dc8090(&UNK_143326a50);
LAB_1425781f3:
    plVar21 = (longlong *)pdb_142dbca40(param_2);
  }
LAB_142578224:
  pdb_142dc7890(&UNK_143326860);
LAB_142578230:
  pdb_142dc8070(&UNK_14351bd9f,0x2e);
LAB_142578253:
  pdb_142dc8070(&UNK_14351c53b,0x3b,0);
LAB_142578273:
  pdb_142dc8070(&UNK_14351c53b,0x3b);
  pcVar8 = (code *)swi(3);
  plVar21 = (longlong *)(*pcVar8)();
  return plVar21;
}

