// VA 0x140cf60c0, PDB extent 3546 bytes
// clutter_icon_pipe::parse_clutter_mesh
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: clutter_icon_pipe::parse_clutter_mesh
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
   Extent: 3546 */

undefined8 * pdb_140cf60c0(undefined8 *param_1)

{
  char cVar1;
  byte bVar2;
  byte *******pppppppbVar3;
  byte *******pppppppbVar4;
  byte *******pppppppbVar5;
  char *pcVar6;
  undefined8 uVar7;
  byte *******pppppppbVar8;
  longlong lVar9;
  byte *pbVar10;
  char *pcVar11;
  byte *******pppppppbVar12;
  byte ******ppppppbVar13;
  byte ******ppppppbVar14;
  byte ******ppppppbVar15;
  byte ******ppppppbStack_170;
  byte *******pppppppbStack_168;
  byte *******pppppppbStack_160;
  byte *****pppppbStack_158;
  undefined8 uStack_150;
  byte *******pppppppbStack_148;
  byte *******pppppppbStack_140;
  byte *******pppppppbStack_138;
  byte ******ppppppbStack_130;
  byte bStack_128;
  undefined4 uStack_127;
  undefined3 uStack_123;
  byte *******pppppppbStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  byte *******pppppppbStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  byte *******pppppppbStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  byte ******ppppppbStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  byte *******pppppppbStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  byte *******apppppppbStack_80 [3];
  byte *******pppppppbStack_68;
  byte ******ppppppbStack_60;
  byte ******ppppppbStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_140cef260(&uStack_108);
  bVar2 = (byte)uStack_108;
  if ((byte)uStack_108 == 6) {
    uVar7 = pdb_142df7f10(pppppppbStack_100);
    param_1[1] = uVar7;
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  uStack_123 = (undefined3)((ulonglong)uStack_108 >> 0x28);
  uStack_127 = uStack_108._1_4_;
  uStack_118 = (undefined4)uStack_f8;
  uStack_114 = uStack_f8._4_4_;
  uStack_110 = (undefined4)uStack_f0;
  uStack_10c = uStack_f0._4_4_;
  bStack_128 = (byte)uStack_108;
  pppppppbStack_120 = pppppppbStack_100;
  pcVar6 = (char *)pdb_141c0c220(&UNK_1430885e2,7,&bStack_128);
  if (pcVar6 == (char *)0x0) {
    pcVar6 = _DAT_143cad928;
  }
  pcVar6 = (char *)pdb_141c0c220(&UNK_1430885e9,6,pcVar6);
  if (pcVar6 == (char *)0x0) {
    pcVar6 = _DAT_143cad928;
  }
  if (*pcVar6 == '\x04') {
    uStack_108 = *(byte *******)(pcVar6 + 0x10);
    pppppppbStack_100 = (byte *******)(uStack_108 + *(longlong *)(pcVar6 + 0x18) * 4);
    apppppppbStack_80[0] = (byte *******)0x0;
    uStack_f8 = (byte *******)apppppppbStack_80;
    pdb_141d5fc80(&uStack_b8,&uStack_108);
    pppppppbVar8 = apppppppbStack_80[0];
    pppppppbVar12 = pppppppbStack_a8;
    if (apppppppbStack_80[0] == (byte *******)0x0) {
      pppppppbVar8 = uStack_b0;
      if (!SBORROW8(0,(longlong)uStack_b8)) {
        ppppppbStack_58 = uStack_b8;
        pppppppbStack_68 = uStack_b0;
        pppppbStack_158 = (byte *****)&UNK_143087b70;
        uStack_150 = 0xf;
        pcVar6 = (char *)pdb_141c0c220(&UNK_143087b70,0xf,&bStack_128);
        if (pcVar6 == (char *)0x0) {
          pcVar6 = _DAT_143cad928;
        }
        pcVar6 = (char *)pdb_141c0c220(&UNK_1430885e9,6,pcVar6);
        if (pcVar6 == (char *)0x0) {
          pcVar6 = _DAT_143cad928;
        }
        if (*pcVar6 == '\x04') {
          uStack_108 = *(byte *******)(pcVar6 + 0x10);
          pppppppbStack_100 = (byte *******)(uStack_108 + *(longlong *)(pcVar6 + 0x18) * 4);
          apppppppbStack_80[0] = (byte *******)0x0;
          uStack_f8 = (byte *******)apppppppbStack_80;
          pdb_141d5ff10(&uStack_b8,&uStack_108);
          pppppppbVar8 = apppppppbStack_80[0];
          pppppppbVar4 = pppppppbStack_a8;
          if (apppppppbStack_80[0] != (byte *******)0x0) {
            if (uStack_b8 != (byte ******)0x0) {
              pub_1406abac0((byte *)uStack_b0,(longlong)uStack_b8 * 0xc,4);
            }
            goto LAB_140cf64d9;
          }
          pppppppbVar8 = uStack_b0;
          if (SBORROW8(0,(longlong)uStack_b8)) goto LAB_140cf64d9;
          ppppppbStack_60 = uStack_b8;
          pppppppbStack_148 = uStack_b0;
          pppppbStack_158 = (byte *****)&UNK_143087b7f;
          uStack_150 = 0xc;
          pcVar6 = (char *)pdb_141c0c220(&UNK_143087b7f,0xc,&bStack_128);
          if (pcVar6 == (char *)0x0) {
            pcVar6 = _DAT_143cad928;
          }
          pcVar6 = (char *)pdb_141c0c220(&UNK_1430885e9,6,pcVar6);
          if (pcVar6 == (char *)0x0) {
            pcVar6 = _DAT_143cad928;
          }
          if (*pcVar6 == '\x04') {
            uStack_108 = *(byte *******)(pcVar6 + 0x10);
            pppppppbStack_100 = (byte *******)(uStack_108 + *(longlong *)(pcVar6 + 0x18) * 4);
            apppppppbStack_80[0] = (byte *******)0x0;
            uStack_f8 = (byte *******)apppppppbStack_80;
            pdb_141d5ff10(&uStack_b8,&uStack_108);
            ppppppbVar15 = ppppppbStack_60;
            pppppppbVar8 = apppppppbStack_80[0];
            pppppppbVar5 = pppppppbStack_a8;
            if (apppppppbStack_80[0] != (byte *******)0x0) {
              if (uStack_b8 != (byte ******)0x0) {
                pub_1406abac0((byte *)uStack_b0,(longlong)uStack_b8 * 0xc,4);
              }
              goto LAB_140cf668d;
            }
            pppppppbVar8 = uStack_b0;
            if (SBORROW8(0,(longlong)uStack_b8)) goto LAB_140cf668d;
            ppppppbStack_c0 = uStack_b8;
            pppppppbStack_138 = uStack_b0;
            uStack_b8 = (byte ******)&UNK_143087b8b;
            uStack_b0 = (byte *******)0xd;
            pcVar6 = (char *)pdb_141c0c220(&UNK_143087b8b,0xd,&bStack_128);
            if (pcVar6 == (char *)0x0) {
              pcVar6 = _DAT_143cad928;
            }
            pcVar6 = (char *)pdb_141c0c220(&UNK_1430885e9,6,pcVar6);
            if (pcVar6 == (char *)0x0) {
              pcVar6 = _DAT_143cad928;
            }
            pcVar11 = (char *)0x0;
            if (*pcVar6 == '\x04') {
              pcVar11 = pcVar6 + 8;
            }
            pppppppbVar8 = (byte *******)&uStack_b8;
            lVar9 = pdb_141d630c0(pcVar11);
            if ((lVar9 == 1) ||
               (pdb_141d58ad0(&uStack_108,pppppppbVar8[1],
                              pppppppbVar8[1] + (longlong)pppppppbVar8[2] * 4),
               pppppppbVar3 = uStack_f8, pppppppbVar8 = pppppppbStack_100,
               SBORROW8(0,(longlong)uStack_108))) {
              param_1[1] = pppppppbVar8;
              *param_1 = 0x8000000000000000;
              pppppppbVar12 = pppppppbStack_68;
              ppppppbVar13 = ppppppbStack_58;
              pppppppbVar8 = pppppppbStack_138;
              ppppppbVar14 = ppppppbStack_c0;
              ppppppbVar15 = ppppppbStack_60;
            }
            else {
              ppppppbStack_130 = uStack_108;
              pppppppbStack_140 = pppppppbStack_100;
              pcVar6 = (char *)pdb_141c0c220(&UNK_143087b98,9,&bStack_128);
              if (pcVar6 == (char *)0x0) {
                pcVar6 = _DAT_143cad928;
              }
              if (*pcVar6 == '\x05') {
                pdb_140cf7690(&uStack_108,&bStack_128);
                if (!SBORROW8(0,(longlong)uStack_108)) {
                  uStack_b8 = uStack_108;
                  uStack_b0 = pppppppbStack_100;
                  pppppppbStack_a8 = uStack_f8;
                  goto LAB_140cf6870;
                }
                param_1[1] = pppppppbStack_100;
                *param_1 = 0x8000000000000000;
              }
              else {
                pdb_141d4ccb0(&uStack_b8,0,pppppppbVar4);
LAB_140cf6870:
                pcVar6 = (char *)pdb_141c0c220(&UNK_143087ba1,5,&bStack_128);
                if (pcVar6 == (char *)0x0) {
                  pcVar6 = _DAT_143cad928;
                }
                cVar1 = *pcVar6;
                if (cVar1 != '\x05') {
                  pdb_141d5ea80(&ppppppbStack_170,0,pppppppbVar4);
LAB_140cf6962:
                  param_1[0xb] = pppppppbStack_a8;
                  *(undefined4 *)(param_1 + 9) = (undefined4)uStack_b8;
                  *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_b8._4_4_;
                  *(undefined4 *)(param_1 + 10) = (undefined4)uStack_b0;
                  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_b0._4_4_;
                  param_1[0xc] = ppppppbStack_170;
                  param_1[0xd] = pppppppbStack_168;
                  param_1[0xe] = pppppppbStack_160;
                  *param_1 = ppppppbStack_60;
                  param_1[1] = pppppppbStack_148;
                  param_1[2] = pppppppbVar4;
                  param_1[3] = ppppppbStack_c0;
                  param_1[4] = pppppppbStack_138;
                  param_1[5] = pppppppbVar5;
                  param_1[6] = ppppppbStack_130;
                  param_1[7] = pppppppbStack_140;
                  param_1[8] = pppppppbVar3;
                  param_1[0xf] = ppppppbStack_58;
                  param_1[0x10] = pppppppbStack_68;
                  param_1[0x11] = pppppppbVar12;
                  *(bool *)(param_1 + 0x12) = cVar1 == '\x05';
                  pdb_140cf16c0(&bStack_128);
                  return param_1;
                }
                pdb_140cf6ea0(&uStack_108,&bStack_128);
                if (!SBORROW8(0,(longlong)uStack_108)) {
                  ppppppbStack_170 = uStack_108;
                  pppppppbStack_168 = pppppppbStack_100;
                  pppppppbStack_160 = uStack_f8;
                  goto LAB_140cf6962;
                }
                param_1[1] = pppppppbStack_100;
                *param_1 = 0x8000000000000000;
                if (uStack_b8 != (byte ******)0x0) {
                  pub_1406abac0((byte *)uStack_b0,(longlong)uStack_b8 << 3,4);
                }
              }
              ppppppbVar13 = ppppppbStack_58;
              ppppppbVar15 = ppppppbStack_60;
              pppppppbVar12 = pppppppbStack_68;
              ppppppbVar14 = ppppppbStack_c0;
              pppppppbVar8 = pppppppbStack_138;
              if (ppppppbStack_130 != (byte ******)0x0) {
                pub_1406abac0((byte *)pppppppbStack_140,(longlong)ppppppbStack_130 * 0xc,4);
              }
            }
            if (ppppppbVar14 != (byte ******)0x0) {
              pub_1406abac0((byte *)pppppppbVar8,(longlong)ppppppbVar14 * 0xc,4);
            }
          }
          else {
            uStack_108 = &pppppbStack_158;
            pppppppbStack_100 = (byte *******)pdb_1402ed400;
            pdb_140f60760(apppppppbStack_80,&UNK_1433d3ea7,&uStack_108);
            uStack_4a = 1;
            pdb_140f3f5b0(&uStack_108);
            uStack_98 = (undefined4)uStack_e8;
            uStack_94 = uStack_e8._4_4_;
            uStack_90 = (undefined4)uStack_e0;
            uStack_8c = uStack_e0._4_4_;
            pppppppbStack_a8 = uStack_f8;
            uStack_a0 = (undefined4)uStack_f0;
            uStack_9c = uStack_f0._4_4_;
            uStack_b8 = uStack_108;
            uStack_b0 = pppppppbStack_100;
            uStack_4a = 0;
            pppppppbVar8 = (byte *******)pdb_142df7230(apppppppbStack_80,&uStack_b8);
            ppppppbVar15 = ppppppbStack_60;
LAB_140cf668d:
            param_1[1] = pppppppbVar8;
            *param_1 = 0x8000000000000000;
            pppppppbVar12 = pppppppbStack_68;
            ppppppbVar13 = ppppppbStack_58;
          }
          if (ppppppbVar15 != (byte ******)0x0) {
            pub_1406abac0((byte *)pppppppbStack_148,(longlong)ppppppbVar15 * 0xc,4);
          }
        }
        else {
          uStack_108 = &pppppbStack_158;
          pppppppbStack_100 = (byte *******)pdb_1402ed400;
          pdb_140f60760(apppppppbStack_80,&UNK_1433d3ea7,&uStack_108);
          uStack_49 = 1;
          pdb_140f3f5b0(&uStack_108);
          uStack_98 = (undefined4)uStack_e8;
          uStack_94 = uStack_e8._4_4_;
          uStack_90 = (undefined4)uStack_e0;
          uStack_8c = uStack_e0._4_4_;
          pppppppbStack_a8 = uStack_f8;
          uStack_a0 = (undefined4)uStack_f0;
          uStack_9c = uStack_f0._4_4_;
          uStack_b8 = uStack_108;
          uStack_b0 = pppppppbStack_100;
          uStack_49 = 0;
          pppppppbVar8 = (byte *******)pdb_142df7230(apppppppbStack_80,&uStack_b8);
LAB_140cf64d9:
          param_1[1] = pppppppbVar8;
          *param_1 = 0x8000000000000000;
          pppppppbVar12 = pppppppbStack_68;
          ppppppbVar13 = ppppppbStack_58;
        }
        if (ppppppbVar13 != (byte ******)0x0) {
          pub_1406abac0((byte *)pppppppbVar12,(longlong)ppppppbVar13 << 2,4);
        }
        goto LAB_140cf6216;
      }
    }
    else if (uStack_b8 != (byte ******)0x0) {
      pub_1406abac0((byte *)uStack_b0,(longlong)uStack_b8 << 2,4);
    }
    param_1[1] = pppppppbVar8;
  }
  else {
    pdb_140f3f5b0(&uStack_108);
    uVar7 = pdb_142df75c0(&UNK_1430885ef,0x1f,&uStack_108);
    param_1[1] = uVar7;
  }
  *param_1 = 0x8000000000000000;
LAB_140cf6216:
  if (2 < bVar2) {
    if (bVar2 == 3) {
      if (pppppppbStack_120 != (byte *******)0x0) {
        pub_1406abac0((byte *)CONCAT44(uStack_114,uStack_118),(ulonglong)pppppppbStack_120,1);
      }
    }
    else if (bVar2 == 4) {
      ppppppbStack_60 = (byte ******)CONCAT44(uStack_114,uStack_118);
      pppppppbStack_68 = (byte *******)CONCAT44(uStack_10c,uStack_110);
      ppppppbStack_58 = (byte ******)0x0;
      pbVar10 = (byte *)ppppppbStack_60;
      while (pppppppbStack_68 != (byte *******)ppppppbStack_58) {
        ppppppbStack_58 = (byte ******)((longlong)ppppppbStack_58 + 1);
        pdb_141d50f90(pbVar10);
        pbVar10 = pbVar10 + 0x20;
      }
      if (pppppppbStack_120 != (byte *******)0x0) {
        pub_1406abac0((byte *)ppppppbStack_60,(longlong)pppppppbStack_120 << 5,8);
      }
    }
    else {
      if (pppppppbStack_120 == (byte *******)0x0) {
        uStack_c8 = 0;
      }
      else {
        uStack_f0 = CONCAT44(uStack_114,uStack_118);
        uStack_c8 = CONCAT44(uStack_10c,uStack_110);
        pppppppbStack_100 = (byte *******)0x0;
        uStack_f8 = pppppppbStack_120;
        uStack_e0 = 0;
        pppppppbStack_d8 = pppppppbStack_120;
        uStack_d0 = uStack_f0;
      }
      uStack_108 = (byte ******)(ulonglong)(pppppppbStack_120 != (byte *******)0x0);
      uStack_e8 = (byte *****)uStack_108;
      pdb_141d586f0(&uStack_b8,&uStack_108);
      if (uStack_b8 != (byte ******)0x0) {
        do {
          apppppppbStack_80[0] = (byte *******)&uStack_108;
          pdb_141d56f40(&uStack_b8);
          pdb_141d586f0(&uStack_b8,&uStack_108);
        } while (uStack_b8 != (byte ******)0x0);
      }
    }
  }
  return param_1;
}

