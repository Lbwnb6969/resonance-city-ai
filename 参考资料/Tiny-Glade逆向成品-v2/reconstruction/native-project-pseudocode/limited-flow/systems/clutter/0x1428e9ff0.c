// VA 0x1428e9ff0, PDB extent 2279 bytes
// system_clutter::autoclutter::process_autoclutter_candidates::process_autoclutter_candidates
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/process_autoclutter_candidates.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   system_clutter::autoclutter::process_autoclutter_candidates::process_autoclutter_candidates
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/clutter/src/autoclutter/process_autoclutter_candidates.rs
   Extent: 2279 */

void pdb_1428e9ff0(byte *param_1,byte *param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  longlong unaff_RDI;
  undefined *puVar14;
  undefined *puVar15;
  byte *pbVar16;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 auStack_160 [8];
  longlong lStack_140;
  byte *pbStack_138;
  ulonglong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  longlong lStack_108;
  undefined8 uStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_88;
  ulonglong uStack_80;
  byte *pbStack_78;
  ulonglong uStack_70;
  byte *pbStack_68;
  undefined8 uStack_60;
  byte *pbStack_58;
  undefined1 uStack_4a;
  byte bStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pbVar16 = param_2;
  bStack_49 = pdb_140e94b40();
  if (bStack_49 == 0) {
    uStack_128 = 0;
    pbVar16 = param_2;
    goto LAB_1428ea1bd;
  }
  uVar12 = 0x5b;
  lVar7 = pdb_1428ea8e0(0x5b);
  pbVar10 = &UNK_1435b26d8;
  if (lVar7 == 1) {
    if ((byte *)0x5b < pbVar16) {
      pdb_142dc8070(&UNK_1435b26d8,0x5b,0,pbVar16,&UNK_1435b27b8);
LAB_1428ea6d5:
      pdb_142dc8070(&UNK_1435b26d8,0x5b);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = pdb_1428ea8e0(pbVar16);
    if ((uVar8 & 1) != 0) {
      if ((byte *)0x5b < pbVar16 + 2) goto LAB_1428ea6d5;
      uVar12 = 0x59 - (longlong)pbVar16;
      pbVar10 = pbVar16 + 0x1435b26da;
    }
  }
  puVar14 = &UNK_1435b2659;
  pbVar16 = &UNK_1435b2611;
  do {
    bVar1 = puVar14[-1];
    uVar6 = (uint)(char)bVar1;
    pbStack_58 = param_2;
    if ((char)bVar1 < '\0') {
      bVar2 = puVar14[-2];
      if ((char)bVar2 < -0x40) {
        bVar3 = puVar14[-3];
        if ((char)bVar3 < -0x40) {
          pbVar11 = puVar14 + -4;
          puVar14 = puVar14 + -4;
          uVar6 = bVar3 & 0x3f | (*pbVar11 & 7) << 6;
        }
        else {
          puVar14 = puVar14 + -3;
          uVar6 = bVar3 & 0xf;
        }
        uVar6 = bVar2 & 0x3f | uVar6 << 6;
      }
      else {
        puVar14 = puVar14 + -2;
        uVar6 = bVar2 & 0x1f;
      }
      uVar6 = (uint)(bVar1 & 0x3f) | uVar6 << 6;
      if (uVar6 != 0x5c) goto LAB_1428ea114;
LAB_1428ea12c:
      pbVar16 = &UNK_1435b2611;
      puVar15 = puVar14 + -0x1435b2610;
      if ((undefined *)0x48 < puVar15) {
        pdb_142dc8070(&UNK_1435b2611,0x48,puVar15,0x48,&UNK_1435b2798);
        goto LAB_1428ea69c;
      }
      unaff_RDI = 0x48 - (longlong)puVar15;
      pbVar16 = puVar14 + 1;
      goto LAB_1428ea14e;
    }
    puVar14 = puVar14 + -1;
    if (uVar6 == 0x5c) goto LAB_1428ea12c;
LAB_1428ea114:
    if (uVar6 == 0x2f) goto LAB_1428ea12c;
  } while (puVar14 != &UNK_1435b2611);
  unaff_RDI = 0x48;
LAB_1428ea14e:
  plVar9 = (longlong *)pdb_140e97000();
  if ((char)plVar9[0xd] != '\x01') goto LAB_1428ea634;
  do {
    if (*plVar9 == 0) {
      *plVar9 = -1;
      uStack_60 = plVar9;
      uStack_120 = pdb_140e94f10(plVar9 + 1,pbVar10,uVar12,pbVar16,unaff_RDI,1,0);
      *uStack_60 = *uStack_60 + 1;
      uStack_128 = 1;
      pbVar16 = pbStack_58;
      uStack_100 = uStack_120;
LAB_1428ea1bd:
      **(undefined4 **)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x1c);
      unaff_RDI = *(longlong *)param_1;
      puStack_f8 = *(undefined1 **)(unaff_RDI + 0x20);
      puStack_f0 = puStack_f8 + *(longlong *)(unaff_RDI + 0x28) * 0x98;
      uStack_e8 = 0;
      uStack_e0 = param_3;
      uStack_88 = uStack_128;
      pdb_1421a8a50(&lStack_140,&puStack_f8);
      uVar8 = uStack_130;
      pbStack_68 = pbStack_138;
      puStack_f8 = &uStack_4a;
      if (1 < uStack_130) {
        uVar12 = uStack_130;
        if (uStack_130 < 0x15) {
          pdb_14219eed0(pbStack_138,uStack_130,1,&puStack_f8);
        }
        else {
LAB_1428ea69c:
          pdb_14219fea0(pbStack_68,uVar12,&puStack_f8);
          uVar8 = uVar12;
        }
      }
      lVar7 = *(longlong *)param_4;
      if (*(char *)(lVar7 + 0xc2) == '\x01') {
        uStack_60 = (longlong *)
                    CONCAT44(uStack_60._4_4_,
                             (int)CONCAT71((int7)((ulonglong)lVar7 >> 8),
                                           *(char *)(lVar7 + 0xd3) == '\x04'));
        uVar12 = *(ulonglong *)(unaff_RDI + 0x28);
        if (uVar12 != 0) goto LAB_1428ea253;
LAB_1428ea29a:
        pbVar10 = (byte *)0x4;
      }
      else {
        uStack_60 = (longlong *)((ulonglong)uStack_60._4_4_ << 0x20);
        uVar12 = *(ulonglong *)(unaff_RDI + 0x28);
        if (uVar12 == 0) goto LAB_1428ea29a;
LAB_1428ea253:
        pdb_14007ee60();
        pbVar10 = pub_1406abab0(uVar12 << 5,4);
        if (pbVar10 == (byte *)0x0) {
          pdb_142dc7e2a(4,uVar12 << 5);
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
      }
      uStack_70 = 0;
      param_3 = pbStack_68 + uVar8 * 0x10;
      lStack_108 = *(longlong *)pbVar16;
      pbVar11 = pbStack_68;
      uStack_80 = uVar12;
      pbStack_78 = pbVar10;
      pbStack_58 = param_3;
      while (pbVar11 != pbStack_58) {
        if (*(ulonglong *)(unaff_RDI + 0x28) <= (ulonglong)*(ushort *)(pbVar11 + 0xc))
        goto LAB_1428ea669;
        lVar7 = *(longlong *)(unaff_RDI + 0x20);
        param_3 = (byte *)((ulonglong)*(ushort *)(pbVar11 + 0xc) * 0x98);
        param_4 = param_3 + lVar7 + 0x68;
        if (param_3[lVar7 + 0x30] == 6) {
LAB_1428ea367:
          uVar12 = uStack_70;
          puStack_f8 = *(undefined1 **)param_4;
          puStack_f0 = *(undefined1 **)(param_3 + lVar7 + 0x70);
          uStack_e8._0_4_ = *(undefined4 *)(param_3 + lVar7 + 0x78);
          uStack_e8._4_4_ = *(undefined4 *)(param_3 + lVar7 + 0x7c);
          uStack_e0._0_4_ = *(undefined4 *)(param_3 + lVar7 + 0x80);
          uStack_e0._4_4_ = *(undefined4 *)(param_3 + lVar7 + 0x84);
          if (uStack_70 == uStack_80) {
            pdb_142d8a7a0(&uStack_80);
          }
          puVar13 = (ulonglong *)(param_3 + lVar7);
          lVar7 = uVar12 * 0x20;
          pbVar16 = pbStack_78 + lVar7 + 0x10;
          *(undefined4 *)pbVar16 = (undefined4)uStack_e8;
          *(undefined4 *)(pbVar16 + 4) = uStack_e8._4_4_;
          *(undefined4 *)(pbVar16 + 8) = (undefined4)uStack_e0;
          *(undefined4 *)(pbVar16 + 0xc) = uStack_e0._4_4_;
          *(undefined1 **)(pbStack_78 + lVar7) = puStack_f8;
          *(undefined1 **)(pbStack_78 + lVar7 + 8) = puStack_f0;
          uStack_70 = uVar12 + 1;
          lVar7 = *puVar13 - 2;
          if (*puVar13 < 2) {
            lVar7 = 0;
          }
                    /* WARNING: Could not recover jumptable at 0x0001428ea3f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&UNK_1435b27e8 + *(int *)(&UNK_1435b27e8 + lVar7 * 4)))
                    ((int)puVar13[0xc],puVar13[8],puVar13[7],
                     &UNK_1435b27e8 + *(int *)(&UNK_1435b27e8 + lVar7 * 4));
          return;
        }
        param_1 = pbStack_78 + uStack_70 * 0x20;
        pbVar16 = pbStack_78;
        do {
          if (pbVar16 == param_1) goto LAB_1428ea367;
          cVar5 = pdb_140df3f80(pbVar16,param_4);
          pbVar16 = pbVar16 + 0x20;
        } while (cVar5 == '\0');
        uVar12 = 1;
        pbVar11 = pbVar11 + 0x10;
        if ((char)uStack_60 != '\0') {
          uStack_198 = *(undefined4 *)param_4;
          uStack_194 = *(undefined4 *)(param_3 + lVar7 + 0x6c);
          uStack_190 = *(undefined4 *)(param_3 + lVar7 + 0x70);
          uStack_18c = *(undefined4 *)(param_3 + lVar7 + 0x74);
          uStack_188 = *(undefined4 *)(param_3 + lVar7 + 0x78);
          uStack_184 = *(undefined4 *)(param_3 + lVar7 + 0x7c);
          uStack_180 = *(undefined4 *)(param_3 + lVar7 + 0x80);
          uStack_17c = *(undefined4 *)(param_3 + lVar7 + 0x84);
          pdb_140a889f0(&puStack_f8,&uStack_198);
          auStack_160[0] = 1;
          pdb_140a88a30(&uStack_198,&puStack_f8,auStack_160);
          pdb_140a88a20(&uStack_198,lStack_108);
        }
      }
      if (uStack_80 != 0) {
        pub_1406abac0(pbStack_78,uStack_80 << 5,4);
      }
      bVar1 = bStack_49;
      pbVar10 = (byte *)(ulonglong)bStack_49;
      if (lStack_140 != 0) {
        pub_1406abac0(pbStack_68,lStack_140 << 4,8);
      }
      if (bVar1 == 0) {
        return;
      }
      plVar9 = (longlong *)pdb_140e97000();
      if (((char)plVar9[0xd] != '\x01') &&
         (plVar9 = (longlong *)pdb_142e16b00(plVar9,0), plVar9 == (longlong *)0x0)) break;
      if (*plVar9 == 0) {
        *plVar9 = -1;
        pbStack_58 = (byte *)plVar9;
        pdb_140e95370(plVar9 + 1,uStack_100);
        *(longlong *)pbStack_58 = *(longlong *)pbStack_58 + 1;
        return;
      }
    }
    plVar9 = (longlong *)pdb_142dc8090(&UNK_14328b468);
LAB_1428ea634:
    plVar9 = (longlong *)pdb_142e16b00(plVar9,0);
  } while (plVar9 != (longlong *)0x0);
  pdb_142dc7890(&UNK_14328b3f8);
LAB_1428ea669:
                    /* WARNING: Subroutine does not return */
  pdb_142dc81f2();
}

