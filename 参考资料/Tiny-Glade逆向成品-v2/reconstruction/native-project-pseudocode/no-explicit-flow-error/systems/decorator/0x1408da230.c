// VA 0x1408da230, PDB extent 1793 bytes
// system_decorator::cull_oob_decorators::cull_steep_stair_banners
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/cull_oob_decorators.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_decorator::cull_oob_decorators::cull_steep_stair_banners
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/cull_oob_decorators.rs
   Extent: 1793 */

void pdb_1408da230(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *puVar5;
  code *pcVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong unaff_RBX;
  undefined8 *puVar13;
  undefined1 (*pauVar14) [16];
  undefined *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined1 unaff_XMM6 [16];
  undefined1 (*pauStack_138) [16];
  undefined1 (*pauStack_130) [16];
  undefined1 *puStack_128;
  ushort uStack_120;
  undefined4 *puStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_74;
  longlong *plStack_70;
  longlong *plStack_68;
  undefined8 uStack_60;
  
  uStack_60 = 0xfffffffffffffffe;
  puVar16 = param_2;
  cVar7 = pdb_140e94b40();
  plStack_68 = (longlong *)CONCAT71(plStack_68._1_7_,cVar7);
  uStack_b8 = param_1;
  uStack_b0 = param_4;
  if (cVar7 == '\0') {
    uStack_108 = 0;
    goto LAB_1408da419;
  }
  puVar16 = (undefined8 *)&UNK_14301a02b;
  pauVar14 = (undefined1 (*) [16])0x3f;
  puVar12 = (undefined8 *)0x3f;
  lVar9 = pdb_1408dd5e0(&UNK_14301a02b);
  if (lVar9 == 1) {
    if (puVar12 < (undefined8 *)0x40) {
      puVar16 = (undefined8 *)&UNK_14301a02b;
      uVar10 = pdb_1408dd5e0(&UNK_14301a02b);
      if ((uVar10 & 1) != 0) {
        if ((undefined *)0x3f < (undefined *)((longlong)puVar12 + 2)) goto LAB_1408da70d;
        pauVar14 = (undefined1 (*) [16])(0x3d - (longlong)puVar12);
        puVar16 = (undefined8 *)((longlong)puVar12 + 0x14301a02d);
      }
      goto LAB_1408da2e7;
    }
LAB_1408da6ed:
    pdb_142dc8070(&UNK_14301a02b,0x3f,0);
LAB_1408da70d:
    pdb_142dc8070(&UNK_14301a02b,0x3f);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_1408da2e7:
  puVar15 = &UNK_143019d67;
  plVar17 = (longlong *)&UNK_143019d34;
  do {
    bVar2 = puVar15[-1];
    uVar8 = (uint)(char)bVar2;
    if ((char)bVar2 < '\0') {
      bVar3 = puVar15[-2];
      if ((char)bVar3 < -0x40) {
        bVar4 = puVar15[-3];
        if ((char)bVar4 < -0x40) {
          pbVar1 = puVar15 + -4;
          puVar15 = puVar15 + -4;
          uVar8 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar15 = puVar15 + -3;
          uVar8 = bVar4 & 0xf;
        }
        puVar12 = (undefined8 *)(ulonglong)(uVar8 << 6);
        uVar8 = bVar3 & 0x3f | uVar8 << 6;
      }
      else {
        puVar15 = puVar15 + -2;
        uVar8 = bVar3 & 0x1f;
      }
      uVar8 = (uint)(bVar2 & 0x3f) | uVar8 << 6;
      if (uVar8 != 0x5c) goto LAB_1408da374;
LAB_1408da38c:
      if ((undefined *)0x33 < puVar15 + -0x143019d33) goto LAB_1408da6ca;
      puVar13 = (undefined8 *)(0x33 - (longlong)(puVar15 + -0x143019d33));
      plVar17 = (longlong *)(puVar15 + 1);
      goto LAB_1408da3ae;
    }
    puVar15 = puVar15 + -1;
    if (uVar8 == 0x5c) goto LAB_1408da38c;
LAB_1408da374:
    if (uVar8 == 0x2f) goto LAB_1408da38c;
  } while (puVar15 != &UNK_143019d34);
  puVar13 = (undefined8 *)0x33;
LAB_1408da3ae:
  plVar11 = (longlong *)pdb_140e97000();
  if ((char)plVar11[0xd] != '\x01') {
    puVar12 = (undefined8 *)0x0;
    plVar11 = (longlong *)pdb_142dde6e0(plVar11);
    if (plVar11 == (longlong *)0x0) {
LAB_1408da6be:
      pdb_142dc7890(&UNK_14330e598);
LAB_1408da6ca:
      pdb_142dc8070(&UNK_143019d34,0x33);
      goto LAB_1408da6ed;
    }
  }
  if (*plVar11 != 0) goto LAB_1408da65c;
  *plVar11 = -1;
  plStack_70 = plVar11;
  uStack_100 = pdb_140e94f10(plVar11 + 1,puVar16,pauVar14,plVar17,puVar13,1,0);
  *plStack_70 = *plStack_70 + 1;
  uStack_108 = 1;
  plStack_70 = (longlong *)uStack_100;
LAB_1408da419:
  uStack_74 = 0x42960000;
  puVar12 = (undefined8 *)*param_5;
  pauVar14 = (undefined1 (*) [16])*puVar12;
  unaff_RBX = puVar12[1];
  unaff_XMM6 = *pauVar14;
  puVar5 = (undefined8 *)puVar12[3];
  plVar17 = (longlong *)pdb_140f3bda0();
  puVar12 = puVar16;
  puVar13 = param_5;
  puVar16 = puVar5;
  if ((char)plVar17[2] != '\x01') goto LAB_1408da669;
  uStack_88 = *plVar17;
  puVar12 = (undefined8 *)plVar17[1];
  do {
    puStack_128 = *pauVar14 + unaff_RBX + 1;
    pauStack_130 = pauVar14 + 1;
    uStack_120 = ~((ushort)(SUB161(unaff_XMM6 >> 7,0) & 1) |
                   (ushort)(SUB161(unaff_XMM6 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(unaff_XMM6 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(unaff_XMM6 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(unaff_XMM6 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(unaff_XMM6 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(unaff_XMM6 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(unaff_XMM6 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(unaff_XMM6 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(unaff_XMM6 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(unaff_XMM6 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(unaff_XMM6 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(unaff_XMM6 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(unaff_XMM6 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(unaff_XMM6 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(unaff_XMM6[0xf] >> 7) << 0xf);
    *plVar17 = uStack_88 + 1;
    uStack_98 = _DAT_143019cf0;
    uStack_90 = _UNK_143019cf8;
    uStack_a8._0_4_ = _DAT_143019ce0;
    uStack_a8._4_4_ = _UNK_143019ce4;
    uStack_a0._0_4_ = _UNK_143019ce8;
    uStack_a0._4_4_ = _UNK_143019cec;
    puStack_118 = &uStack_74;
    puStack_110 = &uStack_a8;
    pauStack_138 = pauVar14;
    uStack_80 = puVar12;
    pdb_1414adae0(&pauStack_138,puVar16,&puStack_118);
    uStack_f8 = (undefined4)uStack_a8;
    uStack_f4 = uStack_a8._4_4_;
    uStack_f0 = (undefined4)uStack_a0;
    uStack_ec = uStack_a0._4_4_;
    uStack_e8 = (undefined4)uStack_98;
    uStack_e4 = uStack_98._4_4_;
    uStack_e0 = (undefined4)uStack_90;
    uStack_dc = uStack_90._4_4_;
    uStack_d8 = (undefined4)uStack_88;
    uStack_d4 = uStack_88._4_4_;
    uStack_d0 = (undefined4)uStack_80;
    uStack_cc = uStack_80._4_4_;
    uStack_a0 = param_6;
    puVar16 = &uStack_a8;
    uStack_a8 = puVar13;
    pdb_1414b7020(&uStack_f8,puVar16);
    if (CONCAT44(uStack_dc,uStack_e0) == 0) {
      lVar9 = CONCAT44(uStack_ec,uStack_f0);
      puVar12 = (undefined8 *)0x0;
      if (lVar9 != 0) {
        uVar10 = lVar9 * 4 + 0x13U & 0xfffffffffffffff0;
        puVar12 = (undefined8 *)(lVar9 + uVar10 + 0x11);
        if (puVar12 != (undefined8 *)0x0) {
          pub_1406abac0((byte *)(CONCAT44(uStack_f4,uStack_f8) - uVar10),(ulonglong)puVar12,0x10);
        }
      }
      if ((char)plStack_68 == '\0') {
        return;
      }
      plVar11 = (longlong *)pdb_140e97000();
      if ((char)plVar11[0xd] != '\x01') {
        puVar12 = (undefined8 *)0x0;
        plVar11 = (longlong *)pdb_142dde6e0(plVar11);
        if (plVar11 == (longlong *)0x0) goto LAB_1408da6be;
      }
      if (*plVar11 == 0) {
        *plVar11 = -1;
        plStack_68 = plVar11;
        pdb_140e95370(plVar11 + 1,plStack_70);
        goto LAB_1408da637;
      }
    }
    else {
      uStack_a8 = (undefined8 *)*puVar13;
      uStack_a0 = puVar13[1];
      uStack_98 = puVar13[2];
      uStack_90 = puVar13[3];
      pdb_1414f90d0(&uStack_f8,uStack_b8,param_2,param_3,uStack_b0,puVar16,param_7,param_8);
      lVar9 = CONCAT44(uStack_ec,uStack_f0);
      puVar12 = (undefined8 *)0x0;
      if (lVar9 != 0) {
        uVar10 = lVar9 * 4 + 0x13U & 0xfffffffffffffff0;
        puVar12 = (undefined8 *)(lVar9 + uVar10 + 0x11);
        if (puVar12 != (undefined8 *)0x0) {
          pub_1406abac0((byte *)(CONCAT44(uStack_f4,uStack_f8) - uVar10),(ulonglong)puVar12,0x10);
        }
      }
      if ((char)plStack_68 == '\0') {
        return;
      }
      plVar11 = (longlong *)pdb_140e97000();
      if ((char)plVar11[0xd] != '\x01') {
        puVar12 = (undefined8 *)0x0;
        plVar11 = (longlong *)pdb_142dde6e0(plVar11);
        if (plVar11 == (longlong *)0x0) goto LAB_1408da6be;
      }
      if (*plVar11 == 0) {
        *plVar11 = -1;
        plStack_68 = plVar11;
        pdb_140e95370(plVar11 + 1,plStack_70);
LAB_1408da637:
        *plStack_68 = *plStack_68 + 1;
        return;
      }
    }
LAB_1408da65c:
    pdb_142dc8090(&UNK_14330e608);
LAB_1408da669:
    uStack_88 = pdb_140f4fd10();
    *plVar17 = uStack_88;
    plVar17[1] = (longlong)puVar12;
    *(undefined1 *)(plVar17 + 2) = 1;
  } while( true );
}

