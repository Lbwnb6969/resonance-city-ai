// VA 0x141f3dcf0, PDB extent 3818 bytes
// system_roof::ui_edit_roof::do_ui_edit_roof
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/ui_edit_roof.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_roof::ui_edit_roof::do_ui_edit_roof
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/ui_edit_roof.rs
   Extent: 3818 */

void pdb_141f3dcf0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7,longlong *param_8,
                  undefined8 *param_9,undefined8 *param_10)

{
  byte *pbVar1;
  undefined8 *puVar2;
  float fVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined4 *puVar7;
  float *pfVar8;
  ulonglong *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  char cVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong *plVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  longlong *plVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  undefined8 *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  longlong *plVar36;
  int iVar37;
  longlong *plVar38;
  longlong *plVar39;
  int *piVar40;
  longlong *plVar41;
  longlong *plVar42;
  undefined4 uVar43;
  longlong *plVar44;
  undefined4 uVar45;
  bool bVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float unaff_XMM7_Da;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined4 *puStack_128;
  undefined4 *puStack_120;
  undefined8 uStack_118;
  int iStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined4 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  uint uStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong lStack_c0;
  float *pfStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  float *pfStack_a0;
  undefined4 uStack_94;
  longlong *plStack_90;
  longlong *plStack_88;
  longlong lStack_80;
  longlong *plStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  lStack_a8 = param_8[4];
  puVar7 = (undefined4 *)param_8[6];
  uVar43 = *(undefined4 *)((longlong)param_8 + 0x3c);
  lStack_80 = param_8[8];
  puStack_f8 = (undefined4 *)param_8[10];
  uStack_94 = *(undefined4 *)((longlong)param_8 + 0x5c);
  lStack_c0 = param_8[0xc];
  puStack_140 = (undefined4 *)param_8[0xe];
  uStack_178 = (undefined4)param_8[0x14];
  uStack_174 = *(undefined4 *)((longlong)param_8 + 0xa4);
  uStack_170 = (undefined4)param_8[0x15];
  uStack_16c = *(undefined4 *)((longlong)param_8 + 0xac);
  uStack_168 = (undefined4)param_8[0x16];
  uStack_164 = *(undefined4 *)((longlong)param_8 + 0xb4);
  uStack_160 = (undefined4)param_8[0x17];
  uStack_15c = *(undefined4 *)((longlong)param_8 + 0xbc);
  uStack_cc = *(undefined4 *)((longlong)param_8 + 0x7c);
  lStack_b0 = param_8[0x10];
  puStack_128 = (undefined4 *)param_8[0x12];
  uStack_c8 = *(undefined4 *)((longlong)param_8 + 0x9c);
  pfVar8 = (float *)param_8[0x18];
  pfStack_a0 = (float *)param_8[0x19];
  puStack_f0 = param_2;
  cVar21 = pdb_140e94b40();
  plStack_78 = (longlong *)CONCAT71(plStack_78._1_7_,cVar21);
  puStack_138 = param_3;
  puStack_130 = param_4;
  puStack_120 = puVar7;
  uStack_c4 = uVar43;
  pfStack_b8 = pfVar8;
  plStack_90 = param_1;
  if (cVar21 == '\0') goto LAB_141f3df9b;
  plVar41 = (longlong *)&UNK_14342e5f3;
  puVar33 = (undefined8 *)0x2a;
  uVar31 = 0x2a;
  lVar23 = pdb_141f3ebe0(&UNK_14342e5f3);
  if (lVar23 == 1) {
    if (0x2a < uVar31) {
LAB_141f3ea38:
      pdb_142dc8070(&UNK_14342e5f3,0x2a,0);
LAB_141f3ea58:
      pdb_142dc8070(&UNK_14342e5f3,0x2a);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    plVar41 = (longlong *)&UNK_14342e5f3;
    uVar24 = pdb_141f3ebe0(&UNK_14342e5f3);
    if ((uVar24 & 1) != 0) {
      if (0x2a < uVar31 + 2) goto LAB_141f3ea58;
      puVar33 = (undefined8 *)(0x28 - uVar31);
      plVar41 = (longlong *)(&UNK_14342e5f5 + uVar31);
    }
  }
  puVar34 = &UNK_14342e4af;
  plVar42 = (longlong *)&UNK_14342e488;
  do {
    bVar4 = puVar34[-1];
    uVar22 = (uint)(char)bVar4;
    if ((char)bVar4 < '\0') {
      bVar5 = puVar34[-2];
      if ((char)bVar5 < -0x40) {
        bVar6 = puVar34[-3];
        if ((char)bVar6 < -0x40) {
          pbVar1 = puVar34 + -4;
          puVar34 = puVar34 + -4;
          uVar22 = bVar6 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar34 = puVar34 + -3;
          uVar22 = bVar6 & 0xf;
        }
        uVar22 = bVar5 & 0x3f | uVar22 << 6;
      }
      else {
        puVar34 = puVar34 + -2;
        uVar22 = bVar5 & 0x1f;
      }
      uVar22 = (uint)(bVar4 & 0x3f) | uVar22 << 6;
      if (uVar22 != 0x5c) goto LAB_141f3def4;
LAB_141f3df0d:
      puVar35 = puVar34 + -0x14342e487;
      if ((undefined *)0x27 < puVar35) {
        pdb_142dc8070(&UNK_14342e488,0x27,puVar35,0x27,&UNK_14342e6b0);
        goto LAB_141f3ea38;
      }
      plVar44 = (longlong *)(0x27 - (longlong)puVar35);
      plVar42 = (longlong *)(puVar34 + 1);
      goto LAB_141f3df30;
    }
    puVar34 = puVar34 + -1;
    if (uVar22 == 0x5c) goto LAB_141f3df0d;
LAB_141f3def4:
    if (uVar22 == 0x2f) goto LAB_141f3df0d;
  } while (puVar34 != &UNK_14342e488);
  plVar44 = (longlong *)0x27;
LAB_141f3df30:
  plVar25 = (longlong *)pdb_140e97000();
  if ((char)plVar25[0xd] != '\x01') goto LAB_141f3e96b;
  do {
    if (*plVar25 == 0) {
      *plVar25 = -1;
      plStack_88 = plVar25;
      uVar26 = pdb_140e94f10(plVar25 + 1,plVar41,puVar33,plVar42,plVar44,1,0);
      *plStack_88 = *plStack_88 + 1;
      plStack_88 = (longlong *)uVar26;
LAB_141f3df9b:
      puVar9 = (ulonglong *)*param_10;
      lVar23 = param_10[1];
      uVar31 = *puVar9;
      plVar44 = (longlong *)0x0;
      plVar25 = (longlong *)(uVar31 - *(ulonglong *)(lVar23 + 0x18));
      if (uVar31 < *(ulonglong *)(lVar23 + 0x18)) {
        plVar25 = plVar44;
      }
      plVar28 = (longlong *)(uVar31 - *(ulonglong *)(lVar23 + 0x38));
      if (uVar31 < *(ulonglong *)(lVar23 + 0x38)) {
        plVar28 = plVar44;
      }
      lVar32 = *(longlong *)(lVar23 + 8);
      plVar36 = *(longlong **)(lVar23 + 0x30);
      bVar46 = plVar36 < plVar28;
      plVar38 = (longlong *)((longlong)plVar36 - (longlong)plVar28);
      plVar39 = plVar38;
      if (bVar46) {
        plVar39 = plVar44;
      }
      plVar41 = *(longlong **)(lVar23 + 0x10);
      plVar42 = (longlong *)((longlong)plVar41 - (longlong)plVar25);
      if (plVar41 < plVar25) {
        plVar42 = plVar44;
      }
      plVar44 = *(longlong **)(lVar23 + 0x28);
      uVar31 = *(ulonglong *)(lVar23 + 0x40);
      *puVar9 = (uVar31 - (longlong)plVar39) - (longlong)plVar42;
      if ((plVar41 < plVar25 ||
          (longlong *)((longlong)plVar41 - (longlong)plVar25) == (longlong *)0x0) &&
          (bVar46 || plVar38 == (longlong *)0x0)) {
        if ((char)plStack_78 == '\0') {
          return;
        }
        plVar25 = (longlong *)pdb_140e97000();
        if (((char)plVar25[0xd] == '\x01') ||
           (plVar25 = (longlong *)pdb_142e293d0(plVar25,0), plVar25 != (longlong *)0x0)) {
          puVar33 = (undefined8 *)(ulonglong)(bVar46 || plVar38 == (longlong *)0x0);
          if (*plVar25 == 0) {
            *plVar25 = -1;
            plStack_78 = plVar25;
            pdb_140e95370(plVar25 + 1,plStack_88);
            goto LAB_141f3e7c0;
          }
          goto LAB_141f3e95f;
        }
        break;
      }
      lVar32 = lVar32 + (longlong)plVar25 * 0x18;
      if (plVar41 < plVar25) {
        lVar32 = 8;
      }
      plVar38 = (longlong *)0x0;
      if (plVar25 < plVar41) {
        plVar38 = (longlong *)(lVar32 + -0x18 + (longlong)plVar42 * 0x18);
      }
      plVar44 = plVar44 + (longlong)plVar28 * 3;
      if (plVar36 < plVar28) {
        plVar44 = (longlong *)0x8;
      }
      plVar25 = plVar44 + (longlong)plVar39 * 3 + -3;
      if (plVar36 <= plVar28) {
        plVar25 = plVar38;
      }
      *puVar9 = uVar31;
      uVar31 = plVar25[1];
      uVar24 = (ulonglong)~(uint)uVar31;
      lVar23 = plStack_90[1];
      uVar43 = 1;
      iVar37 = (int)(uVar31 >> 0x20);
      if (*(ulonglong *)(lVar23 + 0x10) <= uVar24) {
LAB_141f3e9d3:
        uStack_e8 = CONCAT44((int)uVar24,uVar43);
        uStack_e0 = (uint)uVar31;
        iStack_dc = iVar37;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_14342e5c8,0x2b,&uStack_e8,&UNK_14342e5a8,&UNK_14342e4d8);
      }
      piVar40 = (int *)(uVar24 * 0x18 + *(longlong *)(lVar23 + 8));
      uVar24 = uVar31 >> 0x20;
      if ((piVar40[4] != iVar37) || (*piVar40 == 0)) goto LAB_141f3e9d3;
      lVar32 = *plStack_90;
      uVar24 = *(ulonglong *)(piVar40 + 2);
      uVar43 = 0;
      if ((*(ulonglong *)(lVar32 + 0x38) <= (uVar24 & 0xffffffff)) ||
         (plVar44 = (longlong *)(uVar24 >> 6 & 0x3ffffff),
         (*(ulonglong *)(*(longlong *)(lVar32 + 0x28) + (longlong)plVar44 * 8) >> (uVar24 & 0x3f) &
         1) == 0)) goto LAB_141f3e9d3;
      if (*(ulonglong *)(lVar32 + 0x110) <
          *(ulonglong *)(*(longlong *)(lVar23 + 0x1a0) + 0x40 + (uVar24 >> 0x20) * 0x48)) {
        lVar23 = *(longlong *)(lVar23 + 0x1a0) + (uVar24 >> 0x20) * 0x48;
        uVar31 = *(ulonglong *)(*(longlong *)(lVar23 + 0x38) + *(ulonglong *)(lVar32 + 0x110) * 8);
        if (uVar31 == 0) goto LAB_141f3e158;
        lVar23 = *(longlong *)(*(longlong *)(lVar23 + 0x18) + 0x10 + ~uVar31 * 0x30);
      }
      else {
LAB_141f3e158:
        lVar23 = 0;
      }
      puVar33 = (undefined8 *)((ulonglong)(uint)~piVar40[1] * 0x58 + lVar23);
      cVar21 = '\x03';
      if (1 < *(byte *)(plVar25 + 2)) {
        cVar21 = *(byte *)(plVar25 + 2) - 2;
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(cVar21) {
      case '\x01':
        *puStack_f8 = uStack_94;
        lVar23 = *(longlong *)(lStack_80 + 0x30);
        uVar26 = *(undefined8 *)(lStack_80 + 0x40);
        if (lVar23 == *(longlong *)(lStack_80 + 0x20)) {
          pdb_142d7e980(lStack_80 + 0x20);
        }
        lVar32 = *(longlong *)(lStack_80 + 0x28);
        *(undefined8 *)(lVar32 + lVar23 * 0x10) = uVar26;
        *(undefined1 *)(lVar32 + 8 + lVar23 * 0x10) = 0;
        *(longlong *)(lStack_80 + 0x30) = lVar23 + 1;
        *(longlong *)(lStack_80 + 0x40) = *(longlong *)(lStack_80 + 0x40) + 1;
        plVar41 = (longlong *)*puVar33;
        uVar26 = puVar33[7];
        uStack_d8 = (undefined4)((ulonglong)puVar33[6] >> 0x20);
        uStack_e8 = *(undefined8 *)((longlong)puVar33 + 0x24);
        uVar11 = *(undefined8 *)((longlong)puVar33 + 0x2c);
        uStack_e0 = (uint)uVar11;
        iStack_dc = (int)((ulonglong)uVar11 >> 0x20);
        *(undefined4 *)puStack_f0[2] = *(undefined4 *)((longlong)puStack_f0 + 0x1c);
        puVar7 = (undefined4 *)*puStack_f0;
        *puVar7 = 0;
        *(longlong **)(puVar7 + 4) = plVar41;
        *(undefined8 *)(puVar7 + 6) = uStack_e8;
        *(undefined8 *)(puVar7 + 8) = uVar11;
        uStack_d4._0_4_ = (undefined4)uVar26;
        uStack_d4._4_4_ = (undefined4)((ulonglong)uVar26 >> 0x20);
        puVar7[9] = iStack_dc;
        puVar7[10] = uStack_d8;
        puVar7[0xb] = (undefined4)uStack_d4;
        puVar7[0xc] = uStack_d4._4_4_;
        plVar25 = plVar41;
        uStack_d4 = uVar26;
        lVar23 = pdb_140b0e4b0(*param_6,plVar41);
        if (lVar23 != 0) {
          *pfStack_a0 = *(float *)(lVar23 + 0x54);
          uVar22 = *(uint *)((longlong)puStack_138 + 0x1c);
          plVar44 = (longlong *)(ulonglong)uVar22;
          puVar10 = (uint *)puStack_138[2];
          *puVar10 = uVar22;
          uVar26 = *puStack_138;
          uVar27 = pdb_140947f90(plVar41);
          uVar11 = *puStack_130;
          pdb_142810770(uVar26,uVar27,plVar25,uVar11,param_5,&UNK_14342e508,9);
          *puVar10 = uVar22;
          pdb_140c419b0(uVar26,plVar41,uVar11);
          *pfStack_b8 = 0.0;
          goto joined_r0x000141f3e2cb;
        }
        goto code_r0x000141f3e9b5;
      case '\x02':
        *puStack_140 = uStack_cc;
        lVar23 = *(longlong *)(lStack_c0 + 0x30);
        uVar26 = *(undefined8 *)(lStack_c0 + 0x40);
        if (lVar23 == *(longlong *)(lStack_c0 + 0x20)) {
          pdb_142d7e8a0(lStack_c0 + 0x20);
        }
        *(undefined8 *)(*(longlong *)(lStack_c0 + 0x28) + lVar23 * 8) = uVar26;
        *(longlong *)(lStack_c0 + 0x30) = lVar23 + 1;
        *(longlong *)(lStack_c0 + 0x40) = *(longlong *)(lStack_c0 + 0x40) + 1;
        puVar9 = (ulonglong *)*param_7;
        lVar23 = param_7[1];
        uVar31 = *puVar9;
        plVar42 = (longlong *)0x0;
        plVar25 = (longlong *)(uVar31 - *(ulonglong *)(lVar23 + 0x18));
        if (uVar31 < *(ulonglong *)(lVar23 + 0x18)) {
          plVar25 = plVar42;
        }
        plVar28 = (longlong *)(uVar31 - *(ulonglong *)(lVar23 + 0x38));
        if (uVar31 < *(ulonglong *)(lVar23 + 0x38)) {
          plVar28 = plVar42;
        }
        lVar32 = *(longlong *)(lVar23 + 8);
        plStack_90 = *(longlong **)(lVar23 + 0x30);
        plVar36 = (longlong *)((longlong)plStack_90 - (longlong)plVar28);
        if (plStack_90 < plVar28) {
          plVar36 = plVar42;
        }
        plVar41 = *(longlong **)(lVar23 + 0x10);
        plVar44 = (longlong *)((longlong)plVar41 - (longlong)plVar25);
        if (plVar41 < plVar25) {
          plVar44 = plVar42;
        }
        lVar29 = *(longlong *)(lVar23 + 0x28);
        plVar42 = *(longlong **)(lVar23 + 0x40);
        *puVar9 = (ulonglong)((longlong)plVar42 + (-(longlong)plVar44 - (longlong)plVar36));
        if (plVar41 >= plVar25 &&
            (longlong *)((longlong)plVar41 - (longlong)plVar25) != (longlong *)0x0 ||
            plStack_90 >= plVar28 &&
            (longlong *)((longlong)plStack_90 - (longlong)plVar28) != (longlong *)0x0) {
          lVar29 = lVar29 + (longlong)plVar28 * 0x10;
          plVar44 = (longlong *)((longlong)plVar44 * 0x10);
          lVar32 = lVar32 + (longlong)plVar25 * 0x10;
          if (plVar41 < plVar25) {
            lVar32 = 8;
          }
          puVar34 = (undefined *)0x0;
          if (plVar25 < plVar41) {
            puVar34 = (undefined *)(lVar32 + -0x10 + (longlong)plVar44);
          }
          if (plStack_90 < plVar28) {
            lVar29 = 8;
          }
          puVar35 = (undefined *)(lVar29 + -0x10 + (longlong)plVar36 * 0x10);
          if (plStack_90 <= plVar28) {
            puVar35 = puVar34;
          }
          *puVar9 = (ulonglong)plVar42;
          fVar50 = (float)*(undefined8 *)(puVar35 + 8);
          fVar47 = (float)((ulonglong)*(undefined8 *)(puVar35 + 8) >> 0x20);
          if (0.0 < fVar47 * fVar47 + fVar50 * fVar50) {
            bVar46 = (float)(_UNK_142e377e4 & (uint)fVar47) <=
                     (float)(_DAT_142e377e0 & (uint)fVar50);
            if (bVar46) {
              fVar50 = fVar50 * _UNK_14342e3d0 + fVar50 * _UNK_14342e3d0;
              fVar47 = (float)(_DAT_142e377e0 & (uint)fVar50) + *pfStack_b8;
              *pfStack_b8 = fVar47;
              uVar43 = 2;
            }
            else {
              unaff_XMM7_Da = fVar47 * _UNK_14342e3d0;
              fVar47 = *pfStack_b8;
              uVar43 = 0;
            }
            uVar22 = (uint)!bVar46;
            if (_DAT_142e3787c < fVar47) {
              pdb_141b75410(&uStack_178,1,&UNK_14342e518);
            }
            *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
            fVar47 = *pfStack_a0;
            if (fVar47 < _DAT_14300a33c) {
              fVar3 = *(float *)(puVar33 + 6);
              fVar49 = unaff_XMM7_Da;
              if (uVar22 == 0) {
                fVar49 = 0.0;
              }
              if (((_DAT_142e3b1d8 < fVar3) &&
                  (fVar48 = _DAT_14300a33c, fVar49 + fVar3 <= _DAT_142e3b1d8)) ||
                 ((fVar3 <= _DAT_142e3b1d8 &&
                  (fVar48 = _DAT_142e3783c, _DAT_142e3b1d8 < fVar49 + fVar3)))) {
                if (fVar48 <= fVar47) {
                  fVar48 = fVar47;
                }
                fVar47 = _DAT_143008730;
                if (fVar48 <= _DAT_143008730) {
                  fVar47 = fVar48;
                }
                pdb_140b0e460(*param_6,*puVar33,fVar47);
              }
            }
            plVar41 = (longlong *)*puVar33;
            cVar21 = pdb_140b77990(puVar33);
            uVar45 = 0;
            if (cVar21 != '\0') {
              uVar45 = uVar43;
            }
            *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
            lVar23 = *param_8;
            lVar32 = *(longlong *)(lVar23 + 0x30);
            plVar42 = *(longlong **)(lVar23 + 0x40);
            if (lVar32 == *(longlong *)(lVar23 + 0x20)) {
              pdb_142d7ee50(lVar23 + 0x20);
            }
            lVar29 = *(longlong *)(lVar23 + 0x28);
            lVar30 = lVar32 * 0x40;
            *(undefined4 *)(lVar29 + lVar30) = uVar45;
            *(float *)(lVar29 + 4 + lVar30) = fVar50;
            *(uint *)(lVar29 + 8 + lVar30) = uVar22 * 2;
            *(float *)(lVar29 + 0xc + lVar30) = unaff_XMM7_Da;
            *(undefined4 *)(lVar29 + 0x10 + lVar30) = 0;
            *(undefined4 *)(lVar29 + 0x18 + lVar30) = 0;
            *(longlong **)(lVar29 + 0x20 + lVar30) = plVar41;
            *(undefined4 *)(lVar29 + 0x28 + lVar30) = 0;
            *(undefined1 *)(lVar29 + 0x34 + lVar30) = 0;
            *(longlong **)(lVar29 + 0x38 + lVar30) = plVar42;
            plVar44 = (longlong *)(lVar32 + 1);
            *(longlong **)(lVar23 + 0x30) = plVar44;
            *(longlong *)(lVar23 + 0x40) = *(longlong *)(lVar23 + 0x40) + 1;
            goto joined_r0x000141f3e2cb;
          }
        }
        break;
      case '\x03':
        *puStack_f8 = uStack_94;
        lVar23 = *(longlong *)(lStack_80 + 0x30);
        plVar44 = *(longlong **)(lStack_80 + 0x40);
        if (lVar23 == *(longlong *)(lStack_80 + 0x20)) {
          pdb_142d7e980(lStack_80 + 0x20);
        }
        lVar32 = *(longlong *)(lStack_80 + 0x28);
        *(longlong **)(lVar32 + lVar23 * 0x10) = plVar44;
        *(undefined1 *)(lVar32 + 8 + lVar23 * 0x10) = 1;
        *(longlong *)(lStack_80 + 0x30) = lVar23 + 1;
        *(longlong *)(lStack_80 + 0x40) = *(longlong *)(lStack_80 + 0x40) + 1;
        piVar40 = (int *)*puStack_f0;
        if (*piVar40 != 2) {
          if ((((((float)piVar40[8] != *(float *)((longlong)puVar33 + 0x2c)) ||
                (NAN((float)piVar40[8]) || NAN(*(float *)((longlong)puVar33 + 0x2c)))) ||
               ((float)piVar40[9] != *(float *)(puVar33 + 6))) ||
              ((NAN((float)piVar40[9]) || NAN(*(float *)(puVar33 + 6)) ||
               ((float)piVar40[10] != *(float *)((longlong)puVar33 + 0x34))))) ||
             ((((NAN((float)piVar40[10]) || NAN(*(float *)((longlong)puVar33 + 0x34)) ||
                (((float)piVar40[0xb] != *(float *)(puVar33 + 7) ||
                 (NAN((float)piVar40[0xb]) || NAN(*(float *)(puVar33 + 7)))))) ||
               ((float)piVar40[6] != *(float *)((longlong)puVar33 + 0x24))) ||
              ((((NAN((float)piVar40[6]) || NAN(*(float *)((longlong)puVar33 + 0x24)) ||
                 ((float)piVar40[7] != *(float *)(puVar33 + 5))) ||
                (NAN((float)piVar40[7]) || NAN(*(float *)(puVar33 + 5)))) ||
               (((char)piVar40[0xc] != *(char *)((longlong)puVar33 + 0x3c) ||
                (*(char *)((longlong)piVar40 + 0x31) != *(char *)((longlong)puVar33 + 0x3d)))))))))
          {
            bVar46 = *piVar40 == 1;
            if (bVar46) {
              iStack_110 = piVar40[3];
              uStack_118 = *(undefined8 *)(piVar40 + 1);
            }
            plVar41 = (longlong *)(ulonglong)bVar46;
            uVar26 = *puVar33;
            uVar43 = *(undefined4 *)((longlong)puVar33 + 0x4c);
            plStack_90 = (longlong *)CONCAT44(plStack_90._4_4_,*(undefined4 *)(puVar33 + 10));
            lStack_80 = CONCAT71(lStack_80._1_7_,*(undefined1 *)((longlong)puVar33 + 0x54));
            uVar11 = *(undefined8 *)(piVar40 + 4);
            uStack_e8 = *(undefined8 *)(piVar40 + 6);
            uStack_d4 = *(undefined8 *)(piVar40 + 0xb);
            uStack_d8 = (undefined4)((ulonglong)*(undefined8 *)(piVar40 + 9) >> 0x20);
            uStack_e0 = (uint)*(undefined8 *)(piVar40 + 8);
            iStack_dc = (int)((ulonglong)*(undefined8 *)(piVar40 + 8) >> 0x20);
            uVar16 = puVar33[1];
            uVar17 = puVar33[2];
            uVar18 = *(undefined8 *)((longlong)puVar33 + 0x1c);
            uStack_1b8 = (undefined4)((ulonglong)*(undefined8 *)((longlong)puVar33 + 0x14) >> 0x20);
            uStack_1bc = (undefined4)((ulonglong)uVar17 >> 0x20);
            uVar19 = *(undefined8 *)((longlong)puVar33 + 0x24);
            uVar45 = *(undefined4 *)(puVar33 + 6);
            uVar20 = *(undefined8 *)((longlong)puVar33 + 0x2c);
            uVar13 = *(undefined4 *)((longlong)puVar33 + 0x34);
            uVar14 = *(undefined4 *)(puVar33 + 7);
            uVar15 = *(undefined4 *)((longlong)puVar33 + 0x3c);
            uStack_108 = puVar33[8];
            uStack_100 = *(undefined4 *)(puVar33 + 9);
            *puStack_120 = uStack_c4;
            lVar23 = *(longlong *)(lStack_a8 + 0x30);
            uVar27 = *(undefined8 *)(lStack_a8 + 0x40);
            if (lVar23 == *(longlong *)(lStack_a8 + 0x20)) {
              pdb_142d892c0(lStack_a8 + 0x20);
            }
            lVar32 = *(longlong *)(lStack_a8 + 0x28);
            lVar29 = lVar23 * 0x98;
            *(uint *)(lVar32 + lVar29) = (uint)bVar46;
            *(undefined8 *)(lVar32 + 4 + lVar29) = uStack_118;
            *(int *)(lVar32 + 0xc + lVar29) = iStack_110;
            *(undefined8 *)(lVar32 + 0x10 + lVar29) = uVar11;
            puVar2 = (undefined8 *)(lVar32 + 0x18 + lVar29);
            *puVar2 = uStack_e8;
            puVar2[1] = CONCAT44(iStack_dc,uStack_e0);
            puVar2 = (undefined8 *)(lVar32 + 0x24 + lVar29);
            *puVar2 = CONCAT44(uStack_d8,iStack_dc);
            puVar2[1] = uStack_d4;
            *(undefined8 *)(lVar32 + 0x38 + lVar29) = uVar26;
            puVar2 = (undefined8 *)(lVar32 + 0x4c + lVar29);
            *puVar2 = CONCAT44(uStack_1b8,uStack_1bc);
            puVar2[1] = uVar18;
            puVar2 = (undefined8 *)(lVar32 + 0x40 + lVar29);
            *puVar2 = uVar16;
            puVar2[1] = uVar17;
            puVar2 = (undefined8 *)(lVar32 + 0x5c + lVar29);
            *puVar2 = uVar19;
            puVar2[1] = uVar20;
            puVar7 = (undefined4 *)(lVar32 + 0x68 + lVar29);
            *puVar7 = uVar45;
            puVar7[1] = uVar13;
            puVar7[2] = uVar14;
            puVar7[3] = uVar15;
            *(undefined4 *)(lVar32 + 0x80 + lVar29) = uStack_100;
            *(undefined8 *)(lVar32 + 0x78 + lVar29) = uStack_108;
            *(undefined4 *)(lVar32 + 0x84 + lVar29) = uVar43;
            *(undefined4 *)(lVar32 + 0x88 + lVar29) = plStack_90._0_4_;
            *(undefined1 *)(lVar32 + 0x8c + lVar29) = (undefined1)lStack_80;
            *(undefined8 *)(lVar32 + 0x90 + lVar29) = uVar27;
            plVar42 = (longlong *)(lVar23 + 1);
            *(longlong **)(lStack_a8 + 0x30) = plVar42;
            *(longlong *)(lStack_a8 + 0x40) = *(longlong *)(lStack_a8 + 0x40) + 1;
            uVar26 = *puVar33;
            lVar23 = pdb_140b0e4b0(*param_6,uVar26);
            if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_14342e530);
            }
            if ((*pfStack_a0 != *(float *)(lVar23 + 0x54)) ||
               (NAN(*pfStack_a0) || NAN(*(float *)(lVar23 + 0x54)))) {
              *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
              pdb_140adfe50(*param_9,uVar26,*pfStack_a0);
            }
          }
          *puStack_128 = uStack_c8;
          lVar23 = *(longlong *)(lStack_b0 + 0x30);
          uVar26 = *(undefined8 *)(lStack_b0 + 0x40);
          if (lVar23 == *(longlong *)(lStack_b0 + 0x20)) {
            pdb_142d7e8a0(lStack_b0 + 0x20);
          }
          *(undefined8 *)(*(longlong *)(lStack_b0 + 0x28) + lVar23 * 8) = uVar26;
          *(longlong *)(lStack_b0 + 0x30) = lVar23 + 1;
          *(longlong *)(lStack_b0 + 0x40) = *(longlong *)(lStack_b0 + 0x40) + 1;
          *(undefined4 *)CONCAT44(uStack_164,uStack_168) = uStack_15c;
          lVar32 = CONCAT44(uStack_174,uStack_178);
          lVar23 = *(longlong *)(lVar32 + 0x30);
          plVar44 = *(longlong **)(lVar32 + 0x40);
          if (lVar23 == *(longlong *)(lVar32 + 0x20)) {
            pdb_142d7e980(lVar32 + 0x20);
          }
          lVar29 = *(longlong *)(lVar32 + 0x28);
          *(longlong **)(lVar29 + lVar23 * 0x10) = plVar44;
          *(undefined1 *)(lVar29 + 8 + lVar23 * 0x10) = 0;
          *(longlong *)(lVar32 + 0x30) = lVar23 + 1;
          *(longlong *)(lVar32 + 0x40) = *(longlong *)(lVar32 + 0x40) + 1;
        }
      }
joined_r0x000141f3e2cb:
      if ((char)plStack_78 == '\0') {
        return;
      }
      plVar25 = (longlong *)pdb_140e97000();
      if (((char)plVar25[0xd] != '\x01') &&
         (plVar25 = (longlong *)pdb_142e293d0(plVar25,0), plVar25 == (longlong *)0x0)) break;
      puVar33 = param_6;
      if (*plVar25 == 0) {
        *plVar25 = -1;
        plStack_78 = plVar25;
        pdb_140e95370(plVar25 + 1,plStack_88);
LAB_141f3e7c0:
        *plStack_78 = *plStack_78 + 1;
        return;
      }
    }
LAB_141f3e95f:
    plVar25 = (longlong *)pdb_142dc8090(&UNK_14359bf70);
LAB_141f3e96b:
    plVar25 = (longlong *)pdb_142e293d0(plVar25,0);
  } while (plVar25 != (longlong *)0x0);
  pdb_142dc7890(&UNK_14359bf00);
code_r0x000141f3e9b5:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14342e4f0);
}

