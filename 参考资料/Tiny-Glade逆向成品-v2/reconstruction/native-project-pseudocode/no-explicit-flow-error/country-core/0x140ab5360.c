// VA 0x140ab5360, PDB extent 2778 bytes
// country_core::startup::swap_replacement_mods::preactivate_boot_replacement_mods
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/swap_replacement_mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::swap_replacement_mods::preactivate_boot_replacement_mods
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/swap_replacement_mods.rs
   Extent: 2778 */

void pdb_140ab5360(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  code *pcVar2;
  char cVar3;
  longlong *plVar4;
  byte bVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined *puVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  byte *pbVar14;
  longlong lVar15;
  longlong lVar16;
  byte *pbVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  longlong *plStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  ulonglong uStack_1a8;
  char cStack_1a0;
  undefined1 uStack_19f;
  undefined2 uStack_19e;
  undefined4 uStack_19c;
  undefined2 uStack_198;
  undefined2 uStack_196;
  undefined4 uStack_194;
  undefined2 uStack_190;
  undefined6 uStack_18e;
  ulonglong uStack_188;
  byte *pbStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  byte *pbStack_168;
  longlong lStack_160;
  ulonglong uStack_158;
  byte *pbStack_150;
  longlong **pplStack_148;
  ulonglong uStack_118;
  byte *pbStack_110;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong lStack_a8;
  longlong lStack_a0;
  byte *pbStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte *pbStack_68;
  longlong *plStack_60;
  undefined1 uStack_51;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  plVar12 = param_2;
  pdb_140d8ead0(&cStack_1a0);
  pbStack_68 = (byte *)CONCAT44(uStack_194,CONCAT22(uStack_196,uStack_198));
  plStack_60 = (longlong *)CONCAT62(uStack_18e,uStack_190);
  plStack_50 = (longlong *)0x0;
  pbVar14 = pbStack_68;
  while (plVar4 = plStack_60, plStack_60 != plStack_50) {
    plStack_50 = (longlong *)((longlong)plStack_50 + 1);
    pdb_1404b3c90(pbVar14);
    pbVar14 = pbVar14 + 0xb0;
  }
  lVar16 = CONCAT44(uStack_19c,CONCAT22(uStack_19e,CONCAT11(uStack_19f,cStack_1a0)));
  if (lVar16 != 0) {
    plVar12 = (longlong *)(lVar16 * 0xb0);
    pub_1406abac0(pbStack_68,(ulonglong)plVar12,8);
  }
  if ((plVar4 != (longlong *)0x0) && (lVar16 = *param_1, lVar16 != 0)) {
    uStack_88 = 0;
    uStack_80 = (byte *)0x4;
    uStack_78 = 0;
    uVar7 = pdb_140dc74f0();
    pdb_140a93620(&cStack_1a0,uVar7,plVar12);
    uStack_88 = CONCAT44(uStack_19c,CONCAT22(uStack_19e,CONCAT11(uStack_19f,cStack_1a0)));
    uStack_80 = (byte *)CONCAT44(uStack_194,CONCAT22(uStack_196,uStack_198));
    if (CONCAT62(uStack_18e,uStack_190) != 0) {
      pbVar17 = uStack_80 + CONCAT62(uStack_18e,uStack_190) * 0x1c;
      pbVar14 = uStack_80;
      do {
        bVar5 = pdb_140b7e9a0(pbVar14,0);
        pbVar14[0x18] = bVar5;
        pbVar14 = pbVar14 + 0x1c;
      } while (pbVar14 != pbVar17);
    }
    pdb_1409195f0(&cStack_1a0,lVar16,&uStack_88,0);
    pbVar14 = pbStack_150;
    uVar13 = uStack_158;
    cVar3 = cStack_1a0;
    if (cStack_1a0 != '\x01') {
      uStack_1d8 = CONCAT26(uStack_198,CONCAT42(uStack_19c,uStack_19e));
      uStack_1d0 = CONCAT26(uStack_190,CONCAT42(uStack_194,uStack_196));
    }
    uStack_d8 = uStack_170;
    uStack_d0 = pbStack_168;
    lStack_c8 = lStack_160;
    if (uStack_188 != 0) {
      pub_1406abac0(pbStack_180,uStack_188,1);
    }
    if ((uVar13 & 0x7fffffffffffffff) != 0) {
      pub_1406abac0(pbVar14,uVar13,1);
    }
    if ((uStack_118 & 0x7fffffffffffffff) != 0) {
      pub_1406abac0(pbStack_110,uStack_118,1);
    }
    lVar16 = lStack_c8;
    lStack_a8 = lStack_c8;
    uStack_b8 = (undefined4)uStack_d8;
    uStack_b4 = uStack_d8._4_4_;
    uStack_b0 = (undefined4)uStack_d0;
    uStack_ac = uStack_d0._4_4_;
    pbVar14 = uStack_d0;
    if (lStack_c8 != 0) {
      cVar6 = pdb_140e94b40();
      plStack_50 = (longlong *)CONCAT71(plStack_50._1_7_,cVar6);
      if (cVar6 == '\0') {
        uStack_1b0 = 0;
      }
      else {
        puVar18 = &UNK_14304a7be;
        lVar15 = 0x4f;
        uVar13 = 0x4f;
        lVar8 = pdb_140ab7420(&UNK_14304a7be);
        if (lVar8 == 1) {
          if (0x4f < uVar13) {
            pdb_142dc8070(&UNK_14304a7be,0x4f,0,uVar13,&UNK_14304a890);
            goto LAB_140ab5b65;
          }
          puVar18 = &UNK_14304a7be;
          uVar9 = pdb_140ab7420(&UNK_14304a7be);
          if ((uVar9 & 1) != 0) {
            if (0x4f < uVar13 + 2) {
              pdb_142dc8070(&UNK_14304a7be,0x4f,uVar13 + 2,0x4f,&UNK_14304a8a8);
              goto LAB_140ab5b65;
            }
            lVar15 = 0x4d - uVar13;
            puVar18 = &UNK_14304a7c0 + uVar13;
          }
        }
        puVar10 = &UNK_14304a249;
        puVar19 = &UNK_14304a211;
        do {
          pbVar14 = puVar10 + -1;
          uVar11 = (uint)(char)*pbVar14;
          if ((int)uVar11 < 0) {
            bVar5 = puVar10[-2];
            if ((char)bVar5 < -0x40) {
              bVar1 = puVar10[-3];
              if ((char)bVar1 < -0x40) {
                pbVar17 = puVar10 + -4;
                puVar10 = puVar10 + -4;
                uVar11 = bVar1 & 0x3f | (*pbVar17 & 7) << 6;
              }
              else {
                puVar10 = puVar10 + -3;
                uVar11 = bVar1 & 0xf;
              }
              uVar11 = bVar5 & 0x3f | uVar11 << 6;
            }
            else {
              puVar10 = puVar10 + -2;
              uVar11 = bVar5 & 0x1f;
            }
            uVar11 = (uint)(*pbVar14 & 0x3f) | uVar11 << 6;
            if (uVar11 != 0x5c) goto LAB_140ab566d;
LAB_140ab573d:
            if ((undefined *)0x38 < puVar10 + -0x14304a210) {
              pdb_142dc8070(&UNK_14304a211,0x38,puVar10 + -0x14304a210,0x38,&UNK_14304a870);
              goto LAB_140ab5b65;
            }
            lVar8 = 0x37 - (longlong)(puVar10 + -0x14304a211);
            puVar19 = puVar10 + 1;
            goto LAB_140ab5761;
          }
          puVar10 = puVar10 + -1;
          if (uVar11 == 0x5c) goto LAB_140ab573d;
LAB_140ab566d:
          if (uVar11 == 0x2f) goto LAB_140ab573d;
        } while (puVar10 != &UNK_14304a211);
        lVar8 = 0x38;
LAB_140ab5761:
        plVar12 = (longlong *)pdb_140e97000();
        if (((char)plVar12[0xd] != '\x01') &&
           (plVar12 = (longlong *)pdb_142d8ec20(plVar12,0), plVar12 == (longlong *)0x0)) {
          pdb_142dc7890(&UNK_143326860);
          goto LAB_140ab5b65;
        }
        if (*plVar12 != 0) {
          pdb_142dc8090(&UNK_143326a50);
          goto LAB_140ab5b65;
        }
        *plVar12 = -1;
        plStack_60 = plVar12;
        uStack_1a8 = pdb_140e94f10(plVar12 + 1,puVar18,lVar15,puVar19,lVar8,1,0);
        *plStack_60 = *plStack_60 + 1;
        uStack_1b0 = 1;
        uVar13 = uStack_1a8;
      }
      if (cVar3 == '\0') {
        uStack_1d8._4_4_ = (undefined4)((ulonglong)uStack_1d8 >> 0x20);
        uStack_1d0._4_4_ = (undefined4)((ulonglong)uStack_1d0 >> 0x20);
        uStack_1e8 = (undefined4)uStack_1d8;
        uStack_1e4 = uStack_1d8._4_4_;
        uStack_1e0 = (undefined4)uStack_1d0;
        uStack_1dc = uStack_1d0._4_4_;
        pdb_140b7e580(&uStack_1e8);
      }
      pbVar14 = (byte *)CONCAT44(uStack_ac,uStack_b0);
      pdb_140d8f0d0(&cStack_1a0,pbVar14,lVar16);
      pdb_14098acf0(&cStack_1a0);
      pdb_140d8f670(&lStack_a0);
      if (lStack_90 == 0) {
        if (lStack_a0 != 0) {
          pub_1406abac0(pbStack_98,lStack_a0 * 0x18,8);
        }
        if ((char)plStack_50 != '\0') {
          plVar12 = (longlong *)pdb_140e97000();
          if (((char)plVar12[0xd] != '\x01') &&
             (plVar12 = (longlong *)pdb_142d8ec20(plVar12,0), plVar12 == (longlong *)0x0)) {
            pdb_142dc7890(&UNK_143326860);
            goto LAB_140ab5b65;
          }
          if (*plVar12 != 0) {
            pdb_142dc8090(&UNK_143326a50);
            goto LAB_140ab5b65;
          }
          *plVar12 = -1;
          plStack_50 = plVar12;
          pdb_140e95370(plVar12 + 1,uVar13);
          *plStack_50 = *plStack_50 + 1;
        }
        pbVar17 = pbVar14 + 8;
        do {
          if (*(ulonglong *)(pbVar17 + -8) != 0) {
            pub_1406abac0(*(byte **)pbVar17,*(ulonglong *)(pbVar17 + -8),1);
          }
          pbVar17 = pbVar17 + 0x18;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
      else {
        *(undefined1 *)(*(longlong *)(*param_2 + 8) + 0x10) = 1;
        if (2 < *_DAT_143ca8e90) {
          pcStack_1b8 = pdb_1415e5030;
          cStack_1a0 = '\0';
          uStack_19f = 0;
          uStack_19e = 0;
          uStack_19c = 0;
          uStack_198 = 0xa1e5;
          uStack_196 = 0x4304;
          uStack_194 = 1;
          uStack_190 = 0x2c;
          uStack_18e = 0;
          uStack_188 = 0;
          pbStack_180 = &UNK_14304a1ac;
          uStack_178 = 0x38;
          uStack_170 = 3;
          pbStack_168 = &UNK_14304a1e5;
          lStack_160 = 0x2c;
          uStack_158 = 0x7400000001;
          pbStack_150 = &UNK_14304a588;
          pplStack_148 = &plStack_1c0;
          plStack_1c0 = &lStack_a0;
          pdb_140f332f0(&uStack_51,&cStack_1a0);
        }
        if (lStack_90 != 0) {
          pbVar17 = pbStack_98 + 8;
          lVar8 = lStack_90;
          do {
            if (*(ulonglong *)(pbVar17 + -8) != 0) {
              pub_1406abac0(*(byte **)pbVar17,*(ulonglong *)(pbVar17 + -8),1);
            }
            pbVar17 = pbVar17 + 0x18;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        if (lStack_a0 != 0) {
          pub_1406abac0(pbStack_98,lStack_a0 * 0x18,8);
        }
        if ((char)plStack_50 != '\0') {
          plVar12 = (longlong *)pdb_140e97000();
          if (((char)plVar12[0xd] != '\x01') &&
             (plVar12 = (longlong *)pdb_142d8ec20(plVar12,0), plVar12 == (longlong *)0x0)) {
            pdb_142dc7890(&UNK_143326860);
LAB_140ab5b65:
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          if (*plVar12 != 0) {
            pdb_142dc8090(&UNK_143326a50);
            goto LAB_140ab5b65;
          }
          *plVar12 = -1;
          plStack_50 = plVar12;
          pdb_140e95370(plVar12 + 1,uVar13);
          *plStack_50 = *plStack_50 + 1;
        }
        pbVar17 = pbVar14 + 8;
        do {
          if (*(ulonglong *)(pbVar17 + -8) != 0) {
            pub_1406abac0(*(byte **)pbVar17,*(ulonglong *)(pbVar17 + -8),1);
          }
          pbVar17 = pbVar17 + 0x18;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
    }
    if (CONCAT44(uStack_b4,uStack_b8) != 0) {
      pub_1406abac0(pbVar14,CONCAT44(uStack_b4,uStack_b8) * 0x18,8);
    }
    if (uStack_88 != 0) {
      pub_1406abac0(uStack_80,uStack_88 * 0x1c,4);
    }
  }
  return;
}

