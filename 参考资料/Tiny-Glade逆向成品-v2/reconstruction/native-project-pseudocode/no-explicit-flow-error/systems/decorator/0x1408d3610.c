// VA 0x1408d3610, PDB extent 1777 bytes
// system_decorator::decorator_visual::maintain_visual_entities::clear_out_visual_entities
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/maintain_visual_entities.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x0001408d388b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::maintain_visual_entities::clear_out_visual_entities
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/maintain_visual_entities.rs
   Extent: 1777 */

void pdb_1408d3610(ulonglong *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  code *pcVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined1 (*pauVar17) [16];
  undefined8 *puVar18;
  ulonglong unaff_RSI;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  ulonglong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 (*pauStack_110) [16];
  undefined1 (*pauStack_108) [16];
  undefined1 *puStack_100;
  ushort uStack_f8;
  longlong lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  ulonglong *puStack_c0;
  ulonglong *puStack_b8;
  longlong lStack_b0;
  ulonglong *puStack_a8;
  undefined4 uStack_a0;
  byte *pbStack_98;
  ulonglong *puStack_90;
  longlong lStack_88;
  ulonglong *puStack_80;
  longlong *plStack_70;
  longlong *plStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  puVar18 = param_2;
  cVar12 = pdb_140e94b40();
  plStack_68 = (longlong *)CONCAT71(plStack_68._1_7_,cVar12);
  if (cVar12 == '\0') {
    uStack_130 = 0;
    goto LAB_1408d37db;
  }
  unaff_RSI = 0x57;
  lVar14 = pdb_1408d3d10(0x57);
  puVar20 = &UNK_1430190a0;
  if (lVar14 == 1) {
    if (puVar18 < (undefined8 *)0x58) {
      uVar15 = pdb_1408d3d10(puVar18);
      if ((uVar15 & 1) != 0) {
        if ((undefined *)0x57 < (undefined *)((longlong)puVar18 + 2)) goto LAB_1408d3ba9;
        unaff_RSI = 0x55 - (longlong)puVar18;
        puVar20 = &UNK_1430190a2 + (longlong)puVar18;
      }
      goto LAB_1408d36ab;
    }
  }
  else {
LAB_1408d36ab:
    puVar19 = &UNK_143019023;
    puVar21 = &UNK_143018fda;
    do {
      bVar4 = puVar19[-1];
      uVar13 = (uint)(char)bVar4;
      if ((char)bVar4 < '\0') {
        bVar5 = puVar19[-2];
        if ((char)bVar5 < -0x40) {
          bVar6 = puVar19[-3];
          if ((char)bVar6 < -0x40) {
            pbVar1 = puVar19 + -4;
            puVar19 = puVar19 + -4;
            uVar13 = bVar6 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar19 = puVar19 + -3;
            uVar13 = bVar6 & 0xf;
          }
          uVar13 = bVar5 & 0x3f | uVar13 << 6;
        }
        else {
          puVar19 = puVar19 + -2;
          uVar13 = bVar5 & 0x1f;
        }
        uVar13 = (uint)(bVar4 & 0x3f) | uVar13 << 6;
        if (uVar13 != 0x5c) goto LAB_1408d3734;
LAB_1408d374d:
        if ((undefined *)0x49 < puVar19 + -0x143018fd9) goto LAB_1408d3b66;
        lVar14 = 0x49 - (longlong)(puVar19 + -0x143018fd9);
        puVar21 = puVar19 + 1;
        goto LAB_1408d3770;
      }
      puVar19 = puVar19 + -1;
      if (uVar13 == 0x5c) goto LAB_1408d374d;
LAB_1408d3734:
      if (uVar13 == 0x2f) goto LAB_1408d374d;
    } while (puVar19 != &UNK_143018fda);
    lVar14 = 0x49;
LAB_1408d3770:
    plVar16 = (longlong *)pdb_140e97000();
    if ((char)plVar16[0xd] != '\x01') goto LAB_1408d3b36;
    do {
      if (*plVar16 == 0) {
        *plVar16 = -1;
        plStack_70 = plVar16;
        uStack_128 = pdb_140e94f10(plVar16 + 1,puVar20,unaff_RSI,puVar21,lVar14,1,0);
        *plStack_70 = *plStack_70 + 1;
        plStack_70 = (longlong *)uStack_128;
        uStack_130 = 1;
LAB_1408d37db:
        *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
        uVar10 = _UNK_143310fc8;
        uVar15 = *param_1;
        lStack_c8 = uVar15 + 0x48;
        pauStack_110 = *(undefined1 (**) [16])(uVar15 + 0x48);
        puStack_100 = *pauStack_110 + *(longlong *)(uVar15 + 0x50) + 1;
        auVar3 = *pauStack_110;
        uStack_f8 = ~((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
                     (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
        lStack_f0 = *(longlong *)(uVar15 + 0x60);
        uStack_e8 = *(undefined8 *)(uVar15 + 0x48);
        uStack_e0 = *(undefined8 *)(uVar15 + 0x50);
        uStack_d8 = *(undefined8 *)(uVar15 + 0x58);
        uStack_d0 = *(undefined8 *)(uVar15 + 0x60);
        *(undefined8 *)(uVar15 + 0x48) = _DAT_143310fc0;
        *(undefined8 *)(uVar15 + 0x50) = uVar10;
        uVar10 = _UNK_143310fd8;
        *(undefined8 *)(uVar15 + 0x58) = _DAT_143310fd0;
        *(undefined8 *)(uVar15 + 0x60) = uVar10;
        pauStack_108 = pauStack_110 + 1;
        puStack_c0 = (ulonglong *)0x0;
        pbStack_98 = (byte *)0x0;
        puVar20 = (undefined *)param_2[3];
        puVar21 = (undefined *)param_2[2];
        uVar10 = *param_2;
        uVar11 = param_2[1];
        lVar14 = -0x100000000;
        param_2 = (undefined8 *)&UNK_143019028;
        param_1 = &uStack_158;
LAB_1408d38ce:
        if ((pauStack_110 != (undefined1 (*) [16])0x0) && (lStack_f0 != 0)) {
          uVar13 = (uint)uStack_f8;
          pauVar17 = pauStack_110;
          if (uStack_f8 == 0) {
            do {
              auVar3 = *pauStack_108;
              pauVar17 = pauStack_110 + -0x20;
              pauStack_108 = pauStack_108 + 1;
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
              pauStack_110 = pauVar17;
            } while (uVar13 == 0);
          }
          while( true ) {
            uStack_f8 = (ushort)uVar13;
            iVar9 = 0;
            for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
              iVar9 = iVar9 + 1;
            }
            uStack_f8 = uStack_f8 - 1 & uStack_f8;
            uVar13 = iVar9 << 5;
            lStack_f0 = lStack_f0 + -1;
            lVar7 = *(longlong *)((longlong)pauVar17 + (-0x18 - (ulonglong)uVar13));
            if (SBORROW8(0,lVar7)) break;
            puStack_c0 = *(ulonglong **)((longlong)pauVar17 + (-0x10 - (ulonglong)uVar13));
            puStack_a8 = puStack_c0 + *(longlong *)((longlong)pauVar17 + (-8 - (ulonglong)uVar13));
            uStack_a0 = *(undefined4 *)((longlong)pauVar17 + (-0x20 - (ulonglong)uVar13));
            puStack_b8 = puStack_c0;
            lStack_b0 = lVar7;
            if (puStack_c0 != puStack_a8) {
              puStack_b8 = puStack_c0 + 1;
              uVar15 = *puStack_c0;
              if ((int)*puStack_c0 != 0) goto LAB_1408d3a4f;
            }
            if (lVar7 != 0) {
              pub_1406abac0((byte *)puStack_c0,lVar7 << 3,8);
              puStack_c0 = (ulonglong *)0x0;
              pauVar17 = pauStack_110;
              if (pauStack_110 == (undefined1 (*) [16])0x0) break;
            }
            puStack_c0 = (ulonglong *)0x0;
            if (lStack_f0 == 0) break;
            puStack_c0 = (ulonglong *)0x0;
            uVar13 = (uint)uStack_f8;
            if (uStack_f8 == 0) {
              do {
                auVar3 = *pauStack_108;
                pauVar17 = pauVar17 + -0x20;
                pauStack_108 = pauStack_108 + 1;
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
                pauStack_110 = pauVar17;
              } while (uVar13 == 0);
            }
          }
        }
        if (pbStack_98 == (byte *)0x0) {
          unaff_RSI = unaff_RSI & 0xffffffff00000000;
          goto LAB_1408d3ac2;
        }
        if (puStack_90 != puStack_80) {
          puVar2 = puStack_90 + 1;
          uVar15 = *puStack_90;
          puStack_90 = puVar2;
          if ((int)uVar15 == 0) goto LAB_1408d3a9c;
LAB_1408d3a4f:
          do {
            if ((int)uVar15 == 0) goto LAB_1408d3ac2;
            uStack_158 = uVar15;
            uStack_150 = uVar10;
            uStack_148 = uVar11;
            puStack_140 = puVar21;
            puStack_138 = puVar20;
            pdb_140f04aa0(param_1,&UNK_143019028);
            unaff_RSI = uVar15;
            if (puStack_c0 == (ulonglong *)0x0) goto LAB_1408d38ce;
            if (puStack_b8 == puStack_a8) break;
            puVar2 = puStack_b8 + 1;
            uVar15 = *puStack_b8;
            puStack_b8 = puVar2;
          } while ((int)uVar15 != 0);
          if (lStack_b0 != 0) {
            pub_1406abac0((byte *)puStack_c0,lStack_b0 << 3,8);
          }
          puStack_c0 = (ulonglong *)0x0;
          goto LAB_1408d38ce;
        }
LAB_1408d3a9c:
        if (lStack_88 != 0) {
          pub_1406abac0(pbStack_98,lStack_88 << 3,8);
        }
        pbStack_98 = (byte *)0x0;
LAB_1408d3ac2:
        pdb_14149d900(&pauStack_110);
        if ((char)plStack_68 == '\0') {
          return;
        }
        plVar16 = (longlong *)pdb_140e97000();
        if (((char)plVar16[0xd] != '\x01') &&
           (plVar16 = (longlong *)pdb_142dde6e0(plVar16,0), plVar16 == (longlong *)0x0)) break;
        if (*plVar16 == 0) {
          *plVar16 = -1;
          plStack_68 = plVar16;
          pdb_140e95370(plVar16 + 1,plStack_70);
          *plStack_68 = *plStack_68 + 1;
          return;
        }
      }
      plVar16 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_1408d3b36:
      plVar16 = (longlong *)pdb_142dde6e0(plVar16,0);
    } while (plVar16 != (longlong *)0x0);
    pdb_142dc7890(&UNK_14330e598);
LAB_1408d3b66:
    pdb_142dc8070(&UNK_143018fda,0x49);
  }
  pdb_142dc8070(&UNK_1430190a0,0x57,0);
LAB_1408d3ba9:
  pdb_142dc8070(&UNK_1430190a0,0x57);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

