// VA 0x140c6de50, PDB extent 3953 bytes
// country_core::systems::save::shadow_file::ShadowFile::flush
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/shadow_file.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::save::shadow_file::ShadowFile::flush
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/shadow_file.rs
   Extent: 3953 */

bool pdb_140c6de50(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined *puVar8;
  undefined8 *******pppppppuVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  int iVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  ulonglong uVar16;
  int iVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar18;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  char cStack_158;
  undefined7 uStack_157;
  int iStack_14c;
  longlong lStack_148;
  undefined8 *******pppppppuStack_140;
  undefined8 *******pppppppuStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 *******pppppppuStack_118;
  undefined8 *******pppppppuStack_110;
  undefined8 *******pppppppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 uStack_c9;
  undefined8 *******pppppppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulonglong uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 *******pppppppuStack_70;
  longlong lStack_60;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (!SBORROW8(0,*(longlong *)(param_1 + 0x40))) {
    uStack_a0 = 6;
    uStack_c0 = (undefined8 *******)&UNK_143072f08;
    uStack_b8 = (undefined8 *******)0x4;
    uStack_b0 = (code *)0x1;
    uStack_a8 = (undefined *)0x0;
    uStack_98 = uStack_98 & 0xffffffffffff0000;
    pppppppuStack_c8 = (undefined8 *******)((ulonglong)pppppppuStack_c8 & 0xffffffff00000000);
    pdb_141708fe0(&iStack_178,*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                  &UNK_143072f08,4,1,0,6,&pppppppuStack_c8);
    pppppppuVar15 = (undefined8 *******)CONCAT44(uStack_174,iStack_178);
    pppppppuStack_138 = pppppppuVar15;
    if ((char)uStack_160 == '\x02') {
      uStack_4a = 1;
      pdb_140f3f5b0(&pppppppuStack_108);
      uStack_180 = uStack_e0;
      uStack_17c = uStack_dc;
      uStack_198 = (undefined4)uStack_f8;
      uStack_194 = uStack_f8._4_4_;
      uStack_190 = (undefined4)uStack_f0;
      uStack_18c = uStack_f0._4_4_;
      uStack_1a8 = pppppppuStack_108;
      uStack_1a0 = (undefined4)uStack_100;
      uStack_19c = uStack_100._4_4_;
      pppppppuStack_108 = (undefined8 *******)&UNK_14307269a;
      uStack_100 = (code *)0x10;
      uStack_4a = 0;
      uStack_f8 = pppppppuVar15;
      lVar6 = pdb_142dea990(&pppppppuStack_108,&uStack_1a8);
    }
    else {
      uStack_130 = uStack_170;
      uStack_12c = uStack_16c;
      uStack_128 = uStack_168;
      uStack_124 = uStack_164;
      uStack_11c = uStack_15c;
      uStack_120 = uStack_160;
      uStack_49 = 1;
      pppppppuVar15 =
           (undefined8 *******)
           pdb_1409dd580(&pppppppuStack_138,*(undefined8 *)(param_1 + 0x28),
                         *(undefined8 *)(param_1 + 0x30));
      if (pppppppuVar15 == (undefined8 *******)0x0) {
        uStack_49 = 1;
        pppppppuVar15 = (undefined8 *******)pdb_140f3f0a0(&pppppppuStack_138);
        if (pppppppuVar15 == (undefined8 *******)0x0) {
          uStack_b8 = (undefined8 *******)CONCAT44(uStack_124,uStack_128);
          uStack_b0 = (code *)CONCAT44(uStack_11c,uStack_120);
          pppppppuStack_c8 = pppppppuStack_138;
          uStack_c0 = (undefined8 *******)CONCAT44(uStack_12c,uStack_130);
          uStack_49 = 0;
          pdb_1401174f0(&iStack_178,&pppppppuStack_c8,param_1);
          if (cStack_158 == '\x02') {
            uVar3 = CONCAT44(uStack_174,iStack_178);
            pdb_140c71b10(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
            *(undefined8 *)(param_1 + 0x40) = 0x8000000000000000;
            *(undefined8 *)(param_1 + 0x48) = uVar3;
            if (2 < *_DAT_143ca8e90) {
              pppppppuStack_c8 = (undefined8 *******)&UNK_14307265f;
              uStack_c0 = (undefined8 *******)0x28;
              uStack_b8 = (undefined8 *******)&UNK_14307265f;
              uStack_b0 = (code *)0x28;
              uStack_a8 = &UNK_143072700;
              uStack_49 = 0;
              pdb_1400c9be0(&UNK_1430726ce,99,3,&pppppppuStack_c8);
            }
            if (7 < *(ulonglong *)(param_1 + 0x68)) {
              *(ulonglong *)(param_1 + 0x68) = (ulonglong)((uint)*(ulonglong *)(param_1 + 0x68) & 7)
              ;
            }
            lVar6 = 0;
          }
          else {
            uStack_198 = uStack_168;
            uStack_194 = uStack_164;
            uStack_190 = uStack_160;
            uStack_18c = uStack_15c;
            uStack_1a8 = (undefined8 *******)CONCAT44(uStack_174,iStack_178);
            uStack_1a0 = uStack_170;
            uStack_19c = uStack_16c;
            uStack_52 = 1;
            pdb_140f3f5b0(&pppppppuStack_c8);
            uStack_e8 = (undefined4)uStack_a8;
            uStack_e4 = uStack_a8._4_4_;
            uStack_e0 = (undefined4)uStack_a0;
            uStack_dc = uStack_a0._4_4_;
            uStack_f8 = uStack_b8;
            uStack_f0 = uStack_b0;
            pppppppuStack_108 = pppppppuStack_c8;
            uStack_100 = (code *)uStack_c0;
            uStack_98 = CONCAT71(uStack_157,cStack_158);
            uStack_a8 = (undefined *)CONCAT44(uStack_164,uStack_168);
            uStack_a0 = CONCAT44(uStack_15c,uStack_160);
            uStack_b8 = (undefined8 *******)CONCAT44(uStack_174,iStack_178);
            uStack_b0 = (code *)CONCAT44(uStack_16c,uStack_170);
            pppppppuStack_c8 = (undefined8 *******)&UNK_1430726bd;
            uStack_c0 = (undefined8 *******)0x11;
            uStack_52 = 0;
            lVar6 = pdb_142de9670(&pppppppuStack_c8,&pppppppuStack_108);
          }
          goto LAB_140c6e3aa;
        }
        uStack_51 = 1;
        uStack_1a8 = pppppppuVar15;
        pdb_140f3f5b0(&pppppppuStack_c8);
        uStack_e8 = (undefined4)uStack_a8;
        uStack_e4 = uStack_a8._4_4_;
        uStack_e0 = (undefined4)uStack_a0;
        uStack_dc = uStack_a0._4_4_;
        uStack_f8 = uStack_b8;
        uStack_f0 = uStack_b0;
        pppppppuStack_108 = pppppppuStack_c8;
        uStack_100 = (code *)uStack_c0;
        pppppppuStack_c8 = (undefined8 *******)&UNK_1430726b4;
        uStack_c0 = (undefined8 *******)0x9;
        uStack_51 = 0;
        uStack_b8 = pppppppuVar15;
        lVar6 = pdb_142dea990(&pppppppuStack_c8,&pppppppuStack_108);
      }
      else {
        uStack_50 = 1;
        uStack_1a8 = pppppppuVar15;
        pdb_140f3f5b0(&pppppppuStack_c8);
        uStack_e8 = (undefined4)uStack_a8;
        uStack_e4 = uStack_a8._4_4_;
        uStack_e0 = (undefined4)uStack_a0;
        uStack_dc = uStack_a0._4_4_;
        uStack_f8 = uStack_b8;
        uStack_f0 = uStack_b0;
        pppppppuStack_108 = pppppppuStack_c8;
        uStack_100 = (code *)uStack_c0;
        pppppppuStack_c8 = (undefined8 *******)&UNK_1430726aa;
        uStack_c0 = (undefined8 *******)0xa;
        uStack_50 = 0;
        uStack_b8 = pppppppuVar15;
        lVar6 = pdb_142dea990(&pppppppuStack_c8,&pppppppuStack_108);
      }
      pdb_140cb07d0(&uStack_130);
      if (CONCAT44(uStack_124,uStack_128) != 0) {
        pub_1406abac0((byte *)CONCAT44(uStack_12c,uStack_130),CONCAT44(uStack_124,uStack_128),1);
      }
      CloseHandle(pppppppuStack_138);
    }
LAB_140c6e3aa:
    lVar1 = *(longlong *)(param_1 + 0x78);
    lStack_60 = lVar6;
    goto joined_r0x000140c6e4db;
  }
  lStack_60 = param_1 + 0x48;
  pppppppuStack_140 = *(undefined8 ********)(param_1 + 0x28);
  pppppppuStack_118 = *(undefined8 ********)(param_1 + 0x30);
  pppppppuStack_138 = (undefined8 *******)((ulonglong)pppppppuStack_138 & 0xffffffff00000000);
  iStack_178 = 0;
  uVar16 = *(ulonglong *)(param_1 + 0x60);
  pppppppuVar15 = *(undefined8 ********)(param_1 + 0x68);
  pppppppuVar9 = pppppppuVar15;
  lVar6 = pdb_140a8f930(uVar16);
  iVar17 = iStack_178;
  if (lVar6 == 1) {
    iVar17 = 0;
    pppppppuVar14 = (undefined8 *******)0x0;
    iVar13 = 0;
    pppppppuVar11 = (undefined8 *******)0x0;
    lStack_148 = param_1;
    do {
      pppppppuVar12 = pppppppuVar11;
      if ((pppppppuVar9 != (undefined8 *******)0x0) &&
         (pppppppuVar12 = (undefined8 *******)((longlong)pppppppuVar9 + (longlong)pppppppuVar14),
         pppppppuVar11 < pppppppuVar14)) {
        pppppppuVar12 = (undefined8 *******)((longlong)pppppppuVar11 * 0x1000);
        pppppppuVar10 = (undefined8 *******)0x0;
        lVar6 = pdb_140f5af50(lStack_60,0,pppppppuVar12);
        if (lVar6 == 1) {
          uStack_4e = 1;
          uStack_1a8 = pppppppuVar10;
          pdb_140f3f5b0(&pppppppuStack_c8);
          uStack_e8 = (undefined4)uStack_a8;
          uStack_e4 = uStack_a8._4_4_;
          uStack_e0 = (undefined4)uStack_a0;
          uStack_dc = uStack_a0._4_4_;
          uStack_f8 = uStack_b8;
          uStack_f0 = uStack_b0;
          pppppppuStack_108 = pppppppuStack_c8;
          uStack_100 = (code *)uStack_c0;
          pppppppuStack_c8 = (undefined8 *******)&UNK_143072718;
          uStack_c0 = (undefined8 *******)0x10;
          uStack_4e = 0;
          uStack_b8 = pppppppuVar10;
          lStack_60 = pdb_142dea990(&pppppppuStack_c8,&pppppppuStack_108);
LAB_140c6e4c3:
          lVar1 = *(longlong *)(lStack_148 + 0x78);
          param_1 = lStack_148;
          goto joined_r0x000140c6e4db;
        }
        pppppppuVar10 = (undefined8 *******)((longlong)pppppppuVar14 << 0xc);
        if (pppppppuStack_118 < (undefined8 *******)((longlong)pppppppuVar14 << 0xc)) {
          pppppppuVar10 = pppppppuStack_118;
        }
        pppppppuVar11 = pppppppuVar10 + (longlong)pppppppuVar11 * -0x200;
        iStack_14c = iVar13;
        if (pppppppuVar10 < pppppppuVar12) {
          pdb_142dc8420(pppppppuVar12,pppppppuVar10,pppppppuStack_118,&UNK_143072728);
LAB_140c6e9d4:
          uVar18 = pdb_142dc8420(pppppppuVar12,pppppppuVar11,pppppppuVar11,&UNK_1433274a0);
          goto LAB_140c6e9e9;
        }
        if (pppppppuVar11 != (undefined8 *******)0x0) {
          pppppppuVar12 =
               (undefined8 *******)((longlong)pppppppuVar12 + (longlong)pppppppuStack_140);
          do {
            pppppppuStack_110 = pppppppuVar12;
            pppppppuStack_c8 =
                 (undefined8 *******)pdb_140f5aed0(lStack_60,pppppppuVar12,pppppppuVar11);
            uStack_c0 = pppppppuVar12;
            if (pppppppuStack_c8 == (undefined8 *******)0x1) {
              switch((uint)pppppppuVar12 & 3) {
              case 0:
                cVar4 = *(char *)(pppppppuVar12 + 2);
                break;
              case 1:
                cVar4 = *(char *)((longlong)pppppppuVar12 + 0xf);
                break;
              case 2:
                goto code_r0x000140c6e063;
              case 3:
                cVar4 = (char)((ulonglong)pppppppuVar12 >> 0x20);
                if (0x29 < (uint)((ulonglong)pppppppuVar12 >> 0x20)) {
                  cVar4 = '*';
                }
              }
              if (cVar4 != '#') {
code_r0x000140c6e063:
                if (pppppppuVar12 != (undefined8 *******)0x0) {
code_r0x000140c6e3d0:
                  uStack_4f = 1;
                  uStack_1a8 = pppppppuVar12;
                  pdb_140f3f5b0(&pppppppuStack_c8);
                  uStack_e8 = (undefined4)uStack_a8;
                  uStack_e4 = uStack_a8._4_4_;
                  uStack_e0 = (undefined4)uStack_a0;
                  uStack_dc = uStack_a0._4_4_;
                  uStack_f8 = uStack_b8;
                  uStack_f0 = uStack_b0;
                  pppppppuStack_108 = pppppppuStack_c8;
                  uStack_100 = (code *)uStack_c0;
                  pppppppuStack_c8 = (undefined8 *******)&UNK_143072740;
                  uStack_c0 = (undefined8 *******)0x10;
                  uStack_4f = 0;
                  uStack_b8 = pppppppuVar12;
                  lStack_60 = pdb_142dea990(&pppppppuStack_c8,&pppppppuStack_108);
                  goto LAB_140c6e4c3;
                }
                break;
              }
              pdb_1404b38e0(&uStack_c0);
              pppppppuVar12 = pppppppuStack_110;
            }
            else {
              if (pppppppuVar12 == (undefined8 *******)0x0) {
                pppppppuVar12 = (undefined8 *******)&UNK_143327418;
                goto code_r0x000140c6e3d0;
              }
              if (pppppppuVar11 < pppppppuVar12) goto LAB_140c6e9d4;
              pppppppuVar11 =
                   (undefined8 *******)((longlong)pppppppuVar11 - (longlong)pppppppuVar12);
              pppppppuVar12 =
                   (undefined8 *******)((longlong)pppppppuStack_110 + (longlong)pppppppuVar12);
            }
          } while (pppppppuVar11 != (undefined8 *******)0x0);
        }
        iVar13 = iStack_14c + 1;
        pppppppuVar12 = (undefined8 *******)((longlong)pppppppuVar9 + (longlong)pppppppuVar14);
        iStack_178 = iVar13;
      }
      puVar8 = (undefined *)
               ((longlong)pppppppuVar9 +
               (ulonglong)((uint)pppppppuVar15 & 7) + (ulonglong)((uint)uVar16 & 7) * 8 + 1);
      uVar16 = (ulonglong)((uint)((ulonglong)puVar8 >> 3) & 7) |
               (uVar16 & 0xfffffffffffffff8) + ((longlong)puVar8 >> 6) * 8;
      pppppppuVar15 =
           (undefined8 *******)
           ((longlong)pppppppuVar15 - ((longlong)pppppppuVar9 * 8 + 8) & 0xfffffffffffffff8U |
           (ulonglong)((uint)puVar8 & 7));
      pppppppuVar14 =
           (undefined8 *******)((undefined *)((longlong)pppppppuVar14 + (longlong)pppppppuVar9) + 1)
      ;
      iVar17 = iVar17 + 1;
      pppppppuStack_138 = (undefined8 *******)CONCAT44(pppppppuStack_138._4_4_,iVar17);
      pppppppuVar9 = pppppppuVar15;
      uVar7 = pdb_140a8f930(uVar16);
      param_1 = lStack_148;
      pppppppuVar11 = pppppppuVar12;
    } while ((uVar7 & 1) != 0);
    iVar17 = iStack_178;
    if (pppppppuVar14 <= pppppppuVar12) goto LAB_140c6e7d3;
    pppppppuVar15 = (undefined8 *******)0x0;
    lVar6 = pdb_140f5af50(lStack_60,0,(undefined8 *******)((longlong)pppppppuVar12 * 0x1000));
    if (lVar6 != 1) {
      iVar17 = iVar13 + 1;
      pppppppuVar14 = (undefined8 *******)((longlong)pppppppuVar14 * 0x1000);
      if (pppppppuStack_118 < pppppppuVar14) {
        pppppppuVar14 = pppppppuStack_118;
      }
      pppppppuVar9 = pppppppuVar14 + (longlong)pppppppuVar12 * -0x200;
      uVar18 = extraout_XMM0_Da;
      if (pppppppuVar14 < (undefined8 *******)((longlong)pppppppuVar12 * 0x1000)) {
LAB_140c6e9e9:
        pdb_142dc8420(uVar18,pppppppuVar14,pppppppuStack_118,&UNK_143072728);
LAB_140c6e9fc:
        pdb_142dc8420(pppppppuVar14,pppppppuVar9,pppppppuVar9,&UNK_1433274a0);
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      if (pppppppuVar9 != (undefined8 *******)0x0) {
        pppppppuStack_140 = pppppppuStack_140 + (longlong)pppppppuVar12 * 0x200;
        do {
          pppppppuVar14 = pppppppuStack_140;
          pppppppuStack_c8 =
               (undefined8 *******)pdb_140f5aed0(lStack_60,pppppppuStack_140,pppppppuVar9);
          uStack_c0 = pppppppuVar14;
          if (pppppppuStack_c8 == (undefined8 *******)0x1) {
            switch((uint)pppppppuVar14 & 3) {
            case 0:
              cVar4 = *(char *)(pppppppuVar14 + 2);
              break;
            case 1:
              cVar4 = *(char *)((longlong)pppppppuVar14 + 0xf);
              break;
            case 2:
              goto code_r0x000140c6e74b;
            case 3:
              cVar4 = (char)((ulonglong)pppppppuVar14 >> 0x20);
              if (0x29 < (uint)((ulonglong)pppppppuVar14 >> 0x20)) {
                cVar4 = '*';
              }
            }
            if (cVar4 != '#') {
code_r0x000140c6e74b:
              if (pppppppuVar14 != (undefined8 *******)0x0) {
LAB_140c6e750:
                uStack_4c = 1;
                uStack_1a8 = pppppppuVar14;
                pdb_140f3f5b0(&pppppppuStack_c8);
                uStack_e8 = (undefined4)uStack_a8;
                uStack_e4 = uStack_a8._4_4_;
                uStack_e0 = (undefined4)uStack_a0;
                uStack_dc = uStack_a0._4_4_;
                uStack_f8 = uStack_b8;
                uStack_f0 = uStack_b0;
                pppppppuStack_108 = pppppppuStack_c8;
                uStack_100 = (code *)uStack_c0;
                pppppppuStack_c8 = (undefined8 *******)&UNK_143072740;
                uStack_c0 = (undefined8 *******)0x10;
                uStack_4c = 0;
                uStack_b8 = pppppppuVar14;
                lStack_60 = pdb_142dea990(&pppppppuStack_c8,&pppppppuStack_108);
                goto LAB_140c6e940;
              }
              break;
            }
            pdb_1404b38e0(&uStack_c0);
          }
          else {
            if (pppppppuVar14 == (undefined8 *******)0x0) {
              pppppppuVar14 = (undefined8 *******)&UNK_143327418;
              goto LAB_140c6e750;
            }
            if (pppppppuVar9 < pppppppuVar14) goto LAB_140c6e9fc;
            pppppppuStack_140 =
                 (undefined8 *******)((longlong)pppppppuStack_140 + (longlong)pppppppuVar14);
            pppppppuVar9 = (undefined8 *******)((longlong)pppppppuVar9 - (longlong)pppppppuVar14);
          }
        } while (pppppppuVar9 != (undefined8 *******)0x0);
      }
      goto LAB_140c6e7d3;
    }
    uStack_4b = 1;
    uStack_1a8 = pppppppuVar15;
    pdb_140f3f5b0(&pppppppuStack_c8);
    uStack_e8 = (undefined4)uStack_a8;
    uStack_e4 = uStack_a8._4_4_;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    uStack_f8 = uStack_b8;
    uStack_f0 = uStack_b0;
    pppppppuStack_108 = pppppppuStack_c8;
    uStack_100 = (code *)uStack_c0;
    pppppppuStack_c8 = (undefined8 *******)&UNK_143072718;
    uStack_c0 = (undefined8 *******)0x10;
    uStack_4b = 0;
    uStack_b8 = pppppppuVar15;
    lStack_60 = pdb_142dea990(&pppppppuStack_c8,&pppppppuStack_108);
  }
  else {
LAB_140c6e7d3:
    iStack_178 = iVar17;
    if (4 < *_DAT_143ca8e90) {
      pppppppuStack_108 = &pppppppuStack_138;
      uStack_100 = pdb_140f71c50;
      uStack_f0 = pdb_140f71c50;
      pppppppuStack_c8 = (undefined8 *******)0x0;
      uStack_c0 = (undefined8 *******)&UNK_14307265f;
      uStack_b8 = (undefined8 *******)0x28;
      uStack_b0 = (code *)0x0;
      uStack_a8 = &UNK_14307262b;
      uStack_a0 = 0x33;
      uStack_98 = 5;
      puStack_90 = &UNK_14307265f;
      uStack_88 = 0x28;
      uStack_80 = 0xc400000001;
      puStack_78 = &UNK_1430725fd;
      pppppppuStack_70 = &pppppppuStack_108;
      uStack_f8 = (undefined8 *******)&iStack_178;
      pdb_140f332f0(&uStack_c9,&pppppppuStack_c8);
    }
    pppppppuVar15 = (undefined8 *******)pdb_140f3efd0(lStack_60,pppppppuStack_118);
    if (pppppppuVar15 == (undefined8 *******)0x0) {
      if (7 < *(ulonglong *)(param_1 + 0x68)) {
        *(ulonglong *)(param_1 + 0x68) = (ulonglong)((uint)*(ulonglong *)(param_1 + 0x68) & 7);
      }
      lStack_60 = 0;
      lVar1 = *(longlong *)(param_1 + 0x78);
      goto joined_r0x000140c6e4db;
    }
    uStack_4d = 1;
    uStack_1a8 = pppppppuVar15;
    pdb_140f3f5b0(&pppppppuStack_c8);
    uStack_e8 = (undefined4)uStack_a8;
    uStack_e4 = uStack_a8._4_4_;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    uStack_f8 = uStack_b8;
    uStack_f0 = uStack_b0;
    pppppppuStack_108 = pppppppuStack_c8;
    uStack_100 = (code *)uStack_c0;
    pppppppuStack_c8 = (undefined8 *******)&UNK_143072687;
    uStack_c0 = (undefined8 *******)0x13;
    uStack_4d = 0;
    uStack_b8 = pppppppuVar15;
    lStack_60 = pdb_142dea990(&pppppppuStack_c8,&pppppppuStack_108);
  }
LAB_140c6e940:
  lVar1 = *(longlong *)(param_1 + 0x78);
joined_r0x000140c6e4db:
  pppppppuStack_110 = (undefined8 *******)(param_1 + 0x78);
  if (lVar1 != 0) {
    pdb_140f36c40(pppppppuStack_110);
  }
  *pppppppuStack_110 = (undefined8 ******)lStack_60;
  return lStack_60 == 0;
}

