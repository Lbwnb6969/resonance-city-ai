// VA 0x142801b00, PDB extent 1751 bytes
// system_roof::visual::place_spires::place_roof_spires
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/visual/place_spires.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_roof::visual::place_spires::place_roof_spires
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/visual/place_spires.rs
   Extent: 1751 */

void pdb_142801b00(byte *param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  undefined *unaff_R15;
  undefined *puStack_168;
  longlong lStack_160;
  longlong lStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_118;
  ulonglong uStack_110;
  undefined8 uStack_108;
  longlong lStack_100;
  longlong lStack_e8;
  byte *pbStack_e0;
  undefined *puStack_d8;
  longlong lStack_d0;
  undefined *puStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  plVar10 = param_2;
  cVar6 = pdb_140e94b40();
  plStack_58 = (longlong *)CONCAT71(plStack_58._1_7_,cVar6);
  if (cVar6 == '\0') {
    uStack_108 = 0;
    goto LAB_142801cc7;
  }
  unaff_R14 = 0x34;
  lVar8 = pdb_1428021e0(0x34);
  unaff_R15 = &UNK_14359b04b;
  if (lVar8 == 1) {
    if ((longlong *)0x34 < plVar10) goto LAB_142801f8d;
    uVar9 = pdb_1428021e0(plVar10);
    if ((uVar9 & 1) != 0) {
      if (0x34 < (longlong)plVar10 + 2U) {
        pdb_142dc8070(&UNK_14359b04b,0x34,(longlong)plVar10 + 2U,0x34,&UNK_14359b120);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      unaff_R14 = 0x32 - (longlong)plVar10;
      unaff_R15 = &UNK_14359b04d + (longlong)plVar10;
    }
  }
  puVar12 = &UNK_14359af35;
  unaff_R12 = &UNK_14359af07;
  do {
    bVar2 = puVar12[-1];
    uVar7 = (uint)(char)bVar2;
    if ((char)bVar2 < '\0') {
      bVar3 = puVar12[-2];
      if ((char)bVar3 < -0x40) {
        bVar4 = puVar12[-3];
        if ((char)bVar4 < -0x40) {
          pbVar1 = puVar12 + -4;
          puVar12 = puVar12 + -4;
          uVar7 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar12 = puVar12 + -3;
          uVar7 = bVar4 & 0xf;
        }
        uVar7 = bVar3 & 0x3f | uVar7 << 6;
      }
      else {
        puVar12 = puVar12 + -2;
        uVar7 = bVar3 & 0x1f;
      }
      uVar7 = (uint)(bVar2 & 0x3f) | uVar7 << 6;
      if (uVar7 != 0x5c) goto LAB_142801c24;
LAB_142801c3d:
      if ((undefined *)0x2e < puVar12 + -0x14359af06) goto LAB_142801f6a;
      unaff_R13 = 0x2e - (longlong)(puVar12 + -0x14359af06);
      unaff_R12 = puVar12 + 1;
      goto LAB_142801c60;
    }
    puVar12 = puVar12 + -1;
    if (uVar7 == 0x5c) goto LAB_142801c3d;
LAB_142801c24:
    if (uVar7 == 0x2f) goto LAB_142801c3d;
  } while (puVar12 != &UNK_14359af07);
  unaff_R13 = 0x2e;
LAB_142801c60:
  plVar10 = (longlong *)pdb_140e97000();
  if ((char)plVar10[0xd] != '\x01') goto LAB_142801f3a;
  do {
    if (*plVar10 == 0) {
      *plVar10 = -1;
      plStack_60 = plVar10;
      unaff_R14 = pdb_140e94f10(plVar10 + 1,unaff_R15,unaff_R14,unaff_R12,unaff_R13,1,0);
      *plStack_60 = *plStack_60 + 1;
      uStack_108 = 1;
      lStack_100 = unaff_R14;
LAB_142801cc7:
      puVar11 = (undefined8 *)pdb_141f4aec0(*param_3,&UNK_143432208);
      if ((puVar11 == (undefined8 *)0x0) ||
         (param_3 = (undefined8 *)(**(code **)(puVar11[1] + 0x18))(*puVar11),
         param_3 == (undefined8 *)0x0)) {
        if (1 < *_DAT_143ca8e90) {
          lStack_d0 = 0;
          puStack_c8 = &UNK_14359af7d;
          lStack_c0 = 0x21;
          lStack_b8 = 0;
          puStack_b0 = &UNK_14359aed8;
          puStack_a8 = (undefined *)0x2e;
          uStack_a0 = 2;
          puStack_98 = &UNK_14359af7d;
          uStack_90 = 0x21;
          uStack_88 = 0x3a00000001;
          puStack_80 = &UNK_14359af50;
          uStack_78 = 0x5b;
          pdb_140f332f0(&uStack_49,&lStack_d0);
        }
      }
      else {
        lStack_b8 = *param_2;
        lStack_d0 = param_2[1];
        puStack_b0 = *(undefined **)(lStack_b8 + 0xf8);
        puStack_a8 = puStack_b0 + *(longlong *)(lStack_b8 + 0x100) * 4;
        uStack_68 = *(undefined1 *)(lStack_b8 + 0x108);
        uStack_78 = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        puStack_80 = (undefined *)0x0;
        lStack_c0 = lStack_d0 + 0xf8;
        puStack_c8 = (undefined *)(lStack_d0 + 0x198);
        uStack_a0 = 8;
        puStack_98 = (undefined *)0x0;
        uStack_90 = 8;
        pdb_140fc8440(&lStack_e8,&lStack_d0);
        plVar10 = (longlong *)pdb_140a92040(*(undefined8 *)param_1);
        unaff_R15 = puStack_d8;
        param_1 = pbStack_e0;
        if (puStack_d8 != (undefined *)0x0) {
          lVar8 = pdb_140e17350(param_3);
          uVar9 = (longlong)unaff_R15 << 5;
          if (*(uint *)(lVar8 + 0x10) < uVar9) goto LAB_142801fad;
          uStack_118 = 0;
          uStack_110 = uVar9;
          pdb_140e55470(&lStack_d0,plVar10,param_3,param_1,uVar9,&uStack_118,1,0);
          param_2 = plVar10;
          if (lStack_d0 != 0xb) {
            uStack_128 = uStack_88;
            puStack_138 = puStack_98;
            uStack_130 = uStack_90;
            puStack_148 = puStack_a8;
            uStack_140 = uStack_a0;
            lStack_158 = lStack_b8;
            puStack_150 = puStack_b0;
            puStack_168 = puStack_c8;
            lStack_160 = lStack_c0;
            goto LAB_142801fe5;
          }
        }
        param_3[1] = unaff_R15;
        if (lStack_e8 != 0) {
          pub_1406abac0(param_1,lStack_e8 << 5,0x10);
        }
      }
      if ((char)plStack_58 == '\0') {
        return;
      }
      plVar10 = (longlong *)pdb_140e97000();
      if (((char)plVar10[0xd] != '\x01') &&
         (plVar10 = (longlong *)pdb_142e293d0(plVar10,0), plVar10 == (longlong *)0x0)) break;
      if (*plVar10 == 0) {
        *plVar10 = -1;
        plStack_58 = plVar10;
        pdb_140e95370(plVar10 + 1,unaff_R14);
        *plStack_58 = *plStack_58 + 1;
        return;
      }
    }
    plVar10 = (longlong *)pdb_142dc8090(&UNK_14359bf70);
LAB_142801f3a:
    plVar10 = (longlong *)pdb_142e293d0(plVar10,0);
  } while (plVar10 != (longlong *)0x0);
  pdb_142dc7890(&UNK_14359bf00);
LAB_142801f6a:
  pdb_142dc8070(&UNK_14359af07,0x2e);
LAB_142801f8d:
  pdb_142dc8070(&UNK_14359b04b,0x34,0);
LAB_142801fad:
  lStack_d0 = 0xb;
LAB_142801fe5:
  puStack_c8 = puStack_168;
  lStack_c0 = lStack_160;
  lStack_b8 = lStack_158;
  puStack_b0 = puStack_150;
  puStack_a8 = puStack_148;
  uStack_a0 = uStack_140;
  puStack_98 = puStack_138;
  uStack_90 = uStack_130;
  uStack_88 = uStack_128;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_14359b020,0x2b,&lStack_d0,&UNK_14359b000,&UNK_14359af38);
}

