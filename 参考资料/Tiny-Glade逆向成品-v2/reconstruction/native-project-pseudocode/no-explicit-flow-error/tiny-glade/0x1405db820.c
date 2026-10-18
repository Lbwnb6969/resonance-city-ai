// VA 0x1405db820, PDB extent 6761 bytes
// tiny_glade::app_systems::walls_on_glade_unload
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/app_systems.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::app_systems::walls_on_glade_unload
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/app_systems.rs
   Extent: 6761 */

void pdb_1405db820(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 *param_6,undefined8 *param_7,longlong *param_8,
                  longlong *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12,
                  undefined8 *param_13)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint *puVar11;
  undefined4 *puVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  longlong *plVar17;
  undefined4 *puVar18;
  longlong *plVar19;
  undefined4 *puVar20;
  longlong *plVar21;
  undefined4 *puVar22;
  longlong lVar23;
  undefined8 uVar24;
  int iVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  longlong *plVar33;
  longlong lVar34;
  longlong *plVar35;
  longlong *plVar36;
  longlong *plVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  undefined8 *puVar42;
  undefined8 *puVar43;
  undefined8 *puVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  undefined4 *arg1;
  undefined4 *puVar47;
  undefined4 *puVar48;
  undefined4 *puVar49;
  undefined1 (*pauVar50) [16];
  ulonglong uVar51;
  undefined1 (*pauVar52) [16];
  uint uVar53;
  uint uVar54;
  undefined4 *puVar55;
  undefined8 *puStack_140;
  undefined4 uStack_124;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong lStack_108;
  longlong lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong lStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong *plStack_88;
  longlong *plStack_80;
  longlong *plStack_78;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  plVar35 = (longlong *)*param_3;
  puVar11 = (uint *)param_3[2];
  uVar54 = *(uint *)((longlong)param_3 + 0x1c);
  plStack_78 = (longlong *)param_3[4];
  arg1 = (undefined4 *)param_3[6];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x3c);
  plStack_80 = (longlong *)param_3[8];
  puVar48 = (undefined4 *)param_3[10];
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x5c);
  plStack_88 = (longlong *)param_3[0xc];
  puVar49 = (undefined4 *)param_3[0xe];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x7c);
  plVar37 = (longlong *)param_3[0x10];
  puVar12 = (undefined4 *)param_3[0x12];
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x9c);
  plVar13 = (longlong *)*param_8;
  puVar14 = (undefined4 *)param_8[2];
  uVar6 = *(undefined4 *)((longlong)param_8 + 0x1c);
  plVar15 = (longlong *)param_8[4];
  puVar16 = (undefined4 *)param_8[6];
  uVar7 = *(undefined4 *)((longlong)param_8 + 0x3c);
  plVar17 = (longlong *)param_8[8];
  puVar18 = (undefined4 *)param_8[10];
  uVar8 = *(undefined4 *)((longlong)param_8 + 0x5c);
  plVar19 = (longlong *)param_8[0xc];
  puVar20 = (undefined4 *)param_8[0xe];
  uVar9 = *(undefined4 *)((longlong)param_8 + 0x7c);
  plVar21 = (longlong *)param_8[0x10];
  puVar22 = (undefined4 *)param_8[0x12];
  uVar10 = *(undefined4 *)((longlong)param_8 + 0x9c);
  puVar42 = param_2;
  plVar33 = (longlong *)pdb_140f3bda0();
  if ((char)plVar33[2] == '\x01') {
    lVar40 = *plVar33;
    puVar42 = (undefined8 *)plVar33[1];
  }
  else {
    lVar40 = pdb_140f4fd10();
    *plVar33 = lVar40;
    plVar33[1] = (longlong)puVar42;
    *(undefined1 *)(plVar33 + 2) = 1;
  }
  *plVar33 = lVar40 + 1;
  lVar41 = _UNK_142f72578;
  lVar28 = _DAT_142f72570;
  lVar27 = _UNK_142f72568;
  lVar38 = _DAT_142f72560;
  puVar43 = puVar42;
  plVar33 = (longlong *)pdb_140f3bda0();
  if ((char)plVar33[2] == '\x01') {
    lVar39 = *plVar33;
    puVar43 = (undefined8 *)plVar33[1];
  }
  else {
    lVar39 = pdb_140f4fd10();
    *plVar33 = lVar39;
    plVar33[1] = (longlong)puVar43;
    *(undefined1 *)(plVar33 + 2) = 1;
  }
  *plVar33 = lVar39 + 1;
  puVar44 = puVar43;
  plVar33 = (longlong *)pdb_140f3bda0();
  if ((char)plVar33[2] == '\x01') {
    lVar34 = *plVar33;
    puStack_140 = (undefined8 *)plVar33[1];
  }
  else {
    lVar34 = pdb_140f4fd10();
    *plVar33 = lVar34;
    plVar33[1] = (longlong)puVar44;
    *(undefined1 *)(plVar33 + 2) = 1;
    puStack_140 = puVar44;
  }
  *plVar33 = lVar34 + 1;
  uStack_f8 = lVar28;
  uStack_f0 = lVar41;
  lStack_108 = lVar38;
  lStack_100 = lVar27;
  uStack_118 = (undefined4)lVar39;
  uStack_114 = (undefined4)((ulonglong)lVar39 >> 0x20);
  uStack_110 = SUB84(puVar43,0);
  uStack_10c = (undefined4)((ulonglong)puVar43 >> 0x20);
  uStack_d8 = lVar38;
  uStack_d0 = lVar27;
  lStack_c8 = lVar28;
  lStack_c0 = lVar41;
  uStack_b8 = uStack_118;
  uStack_b4 = uStack_114;
  uStack_b0 = uStack_110;
  uStack_ac = uStack_10c;
  lStack_a8 = lVar38;
  lStack_a0 = lVar27;
  lStack_98 = lVar28;
  lStack_90 = lVar41;
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  param_1 = (longlong *)*param_1;
  uStack_e8 = lVar40;
  uStack_e0 = puVar42;
  pdb_1404d43f0();
  param_1[0xe] = lStack_98;
  param_1[0xf] = lStack_90;
  param_1[0xc] = lStack_a8;
  param_1[0xd] = lStack_a0;
  param_1[10] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0xb] = CONCAT44(uStack_ac,uStack_b0);
  param_1[8] = lStack_c8;
  param_1[9] = lStack_c0;
  *(undefined4 *)(param_1 + 6) = (undefined4)uStack_d8;
  *(undefined4 *)((longlong)param_1 + 0x34) = uStack_d8._4_4_;
  *(undefined4 *)(param_1 + 7) = (undefined4)uStack_d0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_d0._4_4_;
  *(undefined4 *)(param_1 + 4) = (undefined4)uStack_e8;
  *(undefined4 *)((longlong)param_1 + 0x24) = uStack_e8._4_4_;
  *(undefined4 *)(param_1 + 5) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_e0._4_4_;
  *(undefined4 *)(param_1 + 2) = (undefined4)uStack_f8;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_f8._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_f0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_f0._4_4_;
  *param_1 = lStack_108;
  param_1[1] = lStack_100;
  param_1[0x10] = lVar34;
  param_1[0x11] = (longlong)puStack_140;
  plVar33 = (longlong *)pdb_140f3bda0();
  if ((char)plVar33[2] == '\x01') {
    lVar40 = *plVar33;
    puVar44 = (undefined8 *)plVar33[1];
  }
  else {
    lVar40 = pdb_140f4fd10();
    *plVar33 = lVar40;
    plVar33[1] = (longlong)puVar44;
    *(undefined1 *)(plVar33 + 2) = 1;
  }
  *plVar33 = lVar40 + 1;
  *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
  param_5 = (longlong *)*param_5;
  lVar39 = param_5[1];
  uVar45 = 0;
  if (lVar39 != 0) {
    lVar34 = lVar39 * 0x10 + 0x10;
    uVar45 = lVar39 + lVar34 + 0x11;
    if (uVar45 != 0) {
      pub_1406abac0((byte *)(*param_5 - lVar34),uVar45,0x10);
    }
  }
  param_5[2] = lVar28;
  param_5[3] = lVar41;
  *param_5 = lVar38;
  param_5[1] = lVar27;
  param_5[4] = lVar40;
  param_5[5] = (longlong)puVar44;
  plVar33 = (longlong *)pdb_140f3bda0();
  if ((char)plVar33[2] == '\x01') {
    lVar40 = *plVar33;
    uVar46 = plVar33[1];
  }
  else {
    lVar40 = pdb_140f4fd10();
    *plVar33 = lVar40;
    plVar33[1] = uVar45;
    *(undefined1 *)(plVar33 + 2) = 1;
    uVar46 = uVar45;
  }
  *plVar33 = lVar40 + 1;
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  plVar33 = (longlong *)*param_2;
  lVar39 = plVar33[1];
  if (lVar39 != 0) {
    lVar34 = plVar33[3];
    if (lVar34 != 0) {
      pauVar50 = (undefined1 (*) [16])*plVar33;
      auVar1 = *pauVar50;
      pauVar52 = pauVar50 + 1;
      uVar53 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
      do {
        if ((short)uVar53 == 0) {
          do {
            auVar1 = *pauVar52;
            pauVar50 = pauVar50 + -0x20;
            pauVar52 = pauVar52 + 1;
            uVar53 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar53 == 0);
        }
        iVar25 = 0;
        for (uVar26 = uVar53; (uVar26 & 1) == 0; uVar26 = uVar26 >> 1 | 0x80000000) {
          iVar25 = iVar25 + 1;
        }
        lVar23 = *(longlong *)((longlong)pauVar50 + (-0x18 - (ulonglong)(uint)(iVar25 << 5)));
        uVar45 = 0;
        if (lVar23 != 0) {
          uVar45 = lVar23 << 3;
          pub_1406abac0(*(byte **)((longlong)pauVar50 + (-0x10 - (ulonglong)(uint)(iVar25 << 5))),
                        uVar45,8);
        }
        uVar53 = uVar53 - 1 & uVar53;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
    }
    lVar34 = lVar39 * 0x20 + 0x20;
    uVar51 = lVar39 + lVar34 + 0x11;
    if (uVar51 != 0) {
      pub_1406abac0((byte *)(*plVar33 - lVar34),uVar51,0x10);
      uVar45 = uVar51;
    }
  }
  plVar33[2] = lVar28;
  plVar33[3] = lVar41;
  *plVar33 = lVar38;
  plVar33[1] = lVar27;
  plVar33[4] = lVar40;
  plVar33[5] = uVar46;
  plVar33 = (longlong *)pdb_140f3bda0();
  if ((char)plVar33[2] == '\x01') {
    lVar40 = *plVar33;
    uVar45 = plVar33[1];
  }
  else {
    lVar40 = pdb_140f4fd10();
    *plVar33 = lVar40;
    plVar33[1] = uVar45;
    *(undefined1 *)(plVar33 + 2) = 1;
  }
  uVar46 = (ulonglong)uVar54;
  *plVar33 = lVar40 + 1;
  *puVar11 = uVar54;
  lVar39 = plVar35[1];
  if (lVar39 != 0) {
    lVar34 = plVar35[3];
    if (lVar34 != 0) {
      pauVar50 = (undefined1 (*) [16])*plVar35;
      auVar1 = *pauVar50;
      pauVar52 = pauVar50 + 1;
      uVar54 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
      do {
        if ((short)uVar54 == 0) {
          do {
            auVar1 = *pauVar52;
            pauVar50 = pauVar50 + -0x20;
            pauVar52 = pauVar52 + 1;
            uVar54 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar54 == 0);
        }
        iVar25 = 0;
        for (uVar53 = uVar54; (uVar53 & 1) == 0; uVar53 = uVar53 >> 1 | 0x80000000) {
          iVar25 = iVar25 + 1;
        }
        lVar23 = *(longlong *)((longlong)pauVar50 + (-0x18 - (ulonglong)(uint)(iVar25 << 5)));
        uVar46 = 0;
        if (lVar23 != 0) {
          uVar46 = lVar23 << 3;
          pub_1406abac0(*(byte **)((longlong)pauVar50 + (-0x10 - (ulonglong)(uint)(iVar25 << 5))),
                        uVar46,8);
        }
        uVar54 = uVar54 - 1 & uVar54;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
    }
    lVar34 = lVar39 * 0x20 + 0x20;
    uVar51 = lVar39 + lVar34 + 0x11;
    if (uVar51 != 0) {
      pub_1406abac0((byte *)(*plVar35 - lVar34),uVar51,0x10);
      uVar46 = uVar51;
    }
  }
  plVar35[2] = lVar28;
  plVar35[3] = lVar41;
  *plVar35 = lVar38;
  plVar35[1] = lVar27;
  plVar35[4] = lVar40;
  plVar35[5] = uVar45;
  plVar35 = (longlong *)pdb_140f3bda0();
  if ((char)plVar35[2] == '\x01') {
    lVar40 = *plVar35;
    uVar46 = plVar35[1];
  }
  else {
    lVar40 = pdb_140f4fd10();
    *plVar35 = lVar40;
    plVar35[1] = uVar46;
    *(undefined1 *)(plVar35 + 2) = 1;
  }
  *plVar35 = lVar40 + 1;
  *arg1 = uVar2;
  lVar39 = plStack_78[1];
  plVar35 = plStack_78;
  if (lVar39 != 0) {
    lVar34 = plStack_78[3];
    if (lVar34 != 0) {
      pauVar50 = (undefined1 (*) [16])*plStack_78;
      auVar1 = *pauVar50;
      pauVar52 = pauVar50 + 1;
      uVar54 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
      do {
        if ((short)uVar54 == 0) {
          do {
            auVar1 = *pauVar52;
            pauVar50 = pauVar50 + -0x20;
            pauVar52 = pauVar52 + 1;
            uVar54 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar1[0xf] >> 7) << 0xf) ^ 0xffff;
          } while (uVar54 == 0);
        }
        iVar25 = 0;
        for (uVar53 = uVar54; (uVar53 & 1) == 0; uVar53 = uVar53 >> 1 | 0x80000000) {
          iVar25 = iVar25 + 1;
        }
        lVar23 = *(longlong *)((longlong)pauVar50 + (-0x18 - (ulonglong)(uint)(iVar25 << 5)));
        arg1 = (undefined4 *)0x0;
        if (lVar23 != 0) {
          arg1 = (undefined4 *)(lVar23 << 3);
          pub_1406abac0(*(byte **)((longlong)pauVar50 + (-0x10 - (ulonglong)(uint)(iVar25 << 5))),
                        (ulonglong)arg1,8);
        }
        uVar54 = uVar54 - 1 & uVar54;
        lVar34 = lVar34 + -1;
      } while (lVar34 != 0);
    }
    plVar35 = plStack_78;
    lVar34 = lVar39 * 0x20 + 0x20;
    puVar55 = (undefined4 *)(lVar39 + lVar34 + 0x11);
    if (puVar55 != (undefined4 *)0x0) {
      pub_1406abac0((byte *)(*plStack_78 - lVar34),(ulonglong)puVar55,0x10);
      arg1 = puVar55;
    }
  }
  plVar35[2] = lVar28;
  plVar35[3] = lVar41;
  *plVar35 = lVar38;
  plVar35[1] = lVar27;
  plVar35[4] = lVar40;
  plVar35[5] = uVar46;
  plVar35 = (longlong *)pdb_140f3bda0();
  if ((char)plVar35[2] == '\x01') {
    lVar40 = *plVar35;
    arg1 = (undefined4 *)plVar35[1];
  }
  else {
    lVar40 = pdb_140f4fd10();
    *plVar35 = lVar40;
    plVar35[1] = (longlong)arg1;
    *(undefined1 *)(plVar35 + 2) = 1;
  }
  plVar33 = plStack_88;
  *plVar35 = lVar40 + 1;
  puVar55 = arg1;
  plVar36 = (longlong *)pdb_140f3bda0();
  plVar35 = plStack_80;
  if ((char)plVar36[2] == '\x01') {
    lVar39 = *plVar36;
    puVar55 = (undefined4 *)plVar36[1];
  }
  else {
    lVar39 = pdb_140f4fd10();
    *plVar36 = lVar39;
    plVar36[1] = (longlong)puVar55;
    *(undefined1 *)(plVar36 + 2) = 1;
  }
  *plVar36 = lVar39 + 1;
  puVar47 = puVar55;
  plVar36 = (longlong *)pdb_140f3bda0();
  if ((char)plVar36[2] == '\x01') {
    lVar34 = *plVar36;
    plStack_78 = (longlong *)plVar36[1];
  }
  else {
    lVar34 = pdb_140f4fd10();
    *plVar36 = lVar34;
    plVar36[1] = (longlong)puVar47;
    *(undefined1 *)(plVar36 + 2) = 1;
    plStack_78 = (longlong *)puVar47;
  }
  *plVar36 = lVar34 + 1;
  uStack_f8 = lVar28;
  uStack_f0 = lVar41;
  lStack_108 = lVar38;
  lStack_100 = lVar27;
  uStack_118 = (undefined4)lVar39;
  uStack_114 = (undefined4)((ulonglong)lVar39 >> 0x20);
  uStack_110 = SUB84(puVar55,0);
  uStack_10c = (undefined4)((ulonglong)puVar55 >> 0x20);
  uStack_d8 = lVar38;
  uStack_d0 = lVar27;
  lStack_c8 = lVar28;
  lStack_c0 = lVar41;
  uStack_b8 = uStack_118;
  uStack_b4 = uStack_114;
  uStack_b0 = uStack_110;
  uStack_ac = uStack_10c;
  lStack_a8 = lVar38;
  lStack_a0 = lVar27;
  lStack_98 = lVar28;
  lStack_90 = lVar41;
  *puVar48 = uVar3;
  uStack_e8 = lVar40;
  uStack_e0 = (undefined8 *)arg1;
  pdb_1404df4b0(plVar35);
  plStack_80[0xe] = lStack_98;
  plStack_80[0xf] = lStack_90;
  plStack_80[0xc] = lStack_a8;
  plStack_80[0xd] = lStack_a0;
  plStack_80[10] = CONCAT44(uStack_b4,uStack_b8);
  plStack_80[0xb] = CONCAT44(uStack_ac,uStack_b0);
  plStack_80[8] = lStack_c8;
  plStack_80[9] = lStack_c0;
  *(undefined4 *)(plStack_80 + 6) = (undefined4)uStack_d8;
  *(undefined4 *)((longlong)plStack_80 + 0x34) = uStack_d8._4_4_;
  *(undefined4 *)(plStack_80 + 7) = (undefined4)uStack_d0;
  *(undefined4 *)((longlong)plStack_80 + 0x3c) = uStack_d0._4_4_;
  *(undefined4 *)(plStack_80 + 4) = (undefined4)uStack_e8;
  *(undefined4 *)((longlong)plStack_80 + 0x24) = uStack_e8._4_4_;
  *(undefined4 *)(plStack_80 + 5) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)plStack_80 + 0x2c) = uStack_e0._4_4_;
  *(undefined4 *)(plStack_80 + 2) = (undefined4)uStack_f8;
  *(undefined4 *)((longlong)plStack_80 + 0x14) = uStack_f8._4_4_;
  *(undefined4 *)(plStack_80 + 3) = (undefined4)uStack_f0;
  *(undefined4 *)((longlong)plStack_80 + 0x1c) = uStack_f0._4_4_;
  *plStack_80 = lStack_108;
  plStack_80[1] = lStack_100;
  plStack_80[0x10] = lVar34;
  plStack_80[0x11] = (longlong)plStack_78;
  plVar35 = (longlong *)pdb_140f3bda0();
  if ((char)plVar35[2] == '\x01') {
    lVar40 = *plVar35;
    puVar47 = (undefined4 *)plVar35[1];
  }
  else {
    lVar40 = pdb_140f4fd10();
    *plVar35 = lVar40;
    plVar35[1] = (longlong)puVar47;
    *(undefined1 *)(plVar35 + 2) = 1;
  }
  *plVar35 = lVar40 + 1;
  puVar48 = puVar47;
  plVar35 = (longlong *)pdb_140f3bda0();
  if ((char)plVar35[2] == '\x01') {
    plStack_80 = (longlong *)*plVar35;
    plStack_78 = (longlong *)plVar35[1];
  }
  else {
    plStack_80 = (longlong *)pdb_140f4fd10();
    *plVar35 = (longlong)plStack_80;
    plVar35[1] = (longlong)puVar48;
    *(undefined1 *)(plVar35 + 2) = 1;
    plStack_78 = (longlong *)puVar48;
  }
  *plVar35 = (longlong)plStack_80 + 1;
  uStack_124 = (undefined4)((ulonglong)lVar28 >> 0x20);
  uStack_11c = (undefined4)((ulonglong)lVar41 >> 0x20);
  uStack_114 = (undefined4)((ulonglong)lVar40 >> 0x20);
  uStack_10c = (undefined4)((ulonglong)puVar47 >> 0x20);
  uStack_e8._0_4_ = (undefined4)lVar40;
  uStack_e8._4_4_ = uStack_114;
  uStack_e0._0_4_ = SUB84(puVar47,0);
  uStack_e0._4_4_ = uStack_10c;
  uStack_f8._4_4_ = uStack_124;
  uStack_f0._4_4_ = uStack_11c;
  lStack_108 = lVar38;
  lStack_100 = lVar27;
  uStack_d8 = lVar38;
  uStack_d0 = lVar27;
  lStack_c8 = lVar28;
  lStack_c0 = lVar41;
  *puVar49 = uVar4;
  uStack_f8._0_4_ = (int)lVar28;
  uStack_f0._0_4_ = (int)lVar41;
  pdb_140498610(plVar33);
  plStack_88[8] = lStack_c8;
  plStack_88[9] = lStack_c0;
  *(undefined4 *)(plStack_88 + 6) = (undefined4)uStack_d8;
  *(undefined4 *)((longlong)plStack_88 + 0x34) = uStack_d8._4_4_;
  *(undefined4 *)(plStack_88 + 7) = (undefined4)uStack_d0;
  *(undefined4 *)((longlong)plStack_88 + 0x3c) = uStack_d0._4_4_;
  *(undefined4 *)(plStack_88 + 4) = (undefined4)uStack_e8;
  *(undefined4 *)((longlong)plStack_88 + 0x24) = uStack_e8._4_4_;
  *(undefined4 *)(plStack_88 + 5) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)plStack_88 + 0x2c) = uStack_e0._4_4_;
  *(undefined4 *)(plStack_88 + 2) = (undefined4)uStack_f8;
  *(undefined4 *)((longlong)plStack_88 + 0x14) = uStack_f8._4_4_;
  *(undefined4 *)(plStack_88 + 3) = (undefined4)uStack_f0;
  *(undefined4 *)((longlong)plStack_88 + 0x1c) = uStack_f0._4_4_;
  *plStack_88 = lStack_108;
  plStack_88[1] = lStack_100;
  plStack_88[10] = (longlong)plStack_80;
  plStack_88[0xb] = (longlong)plStack_78;
  plVar35 = (longlong *)pdb_140f3bda0();
  if ((char)plVar35[2] == '\x01') {
    lVar40 = *plVar35;
    puVar48 = (undefined4 *)plVar35[1];
  }
  else {
    lVar40 = pdb_140f4fd10();
    *plVar35 = lVar40;
    plVar35[1] = (longlong)puVar48;
    *(undefined1 *)(plVar35 + 2) = 1;
  }
  *plVar35 = lVar40 + 1;
  puVar49 = puVar48;
  plVar35 = (longlong *)pdb_140f3bda0();
  if ((char)plVar35[2] == '\x01') {
    plStack_80 = (longlong *)*plVar35;
    plStack_78 = (longlong *)plVar35[1];
  }
  else {
    plStack_80 = (longlong *)pdb_140f4fd10();
    *plVar35 = (longlong)plStack_80;
    plVar35[1] = (longlong)puVar49;
    *(undefined1 *)(plVar35 + 2) = 1;
    plStack_78 = (longlong *)puVar49;
  }
  *plVar35 = (longlong)plStack_80 + 1;
  uStack_114 = (undefined4)((ulonglong)lVar40 >> 0x20);
  uStack_10c = (undefined4)((ulonglong)puVar48 >> 0x20);
  uStack_e8._0_4_ = (undefined4)lVar40;
  uStack_e8._4_4_ = uStack_114;
  uStack_e0._0_4_ = SUB84(puVar48,0);
  uStack_e0._4_4_ = uStack_10c;
  uStack_f8._4_4_ = uStack_124;
  uStack_f0._4_4_ = uStack_11c;
  lStack_108 = lVar38;
  lStack_100 = lVar27;
  uStack_d8 = lVar38;
  uStack_d0 = lVar27;
  lStack_c8 = lVar28;
  lStack_c0 = lVar41;
  *puVar12 = uVar5;
  uStack_f8._0_4_ = (int)lVar28;
  uStack_f0._0_4_ = (int)lVar41;
  pdb_140498610(plVar37);
  plVar37[8] = lStack_c8;
  plVar37[9] = lStack_c0;
  *(undefined4 *)(plVar37 + 6) = (undefined4)uStack_d8;
  *(undefined4 *)((longlong)plVar37 + 0x34) = uStack_d8._4_4_;
  *(undefined4 *)(plVar37 + 7) = (undefined4)uStack_d0;
  *(undefined4 *)((longlong)plVar37 + 0x3c) = uStack_d0._4_4_;
  *(undefined4 *)(plVar37 + 4) = (undefined4)uStack_e8;
  *(undefined4 *)((longlong)plVar37 + 0x24) = uStack_e8._4_4_;
  *(undefined4 *)(plVar37 + 5) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)plVar37 + 0x2c) = uStack_e0._4_4_;
  *(undefined4 *)(plVar37 + 2) = (undefined4)uStack_f8;
  *(undefined4 *)((longlong)plVar37 + 0x14) = uStack_f8._4_4_;
  *(undefined4 *)(plVar37 + 3) = (undefined4)uStack_f0;
  *(undefined4 *)((longlong)plVar37 + 0x1c) = uStack_f0._4_4_;
  *plVar37 = lStack_108;
  plVar37[1] = lStack_100;
  plVar37[10] = (longlong)plStack_80;
  plVar37[0xb] = (longlong)plStack_78;
  plVar35 = (longlong *)pdb_140f3bda0();
  if ((char)plVar35[2] == '\x01') {
    plStack_80 = (longlong *)*plVar35;
    plStack_78 = (longlong *)plVar35[1];
  }
  else {
    plStack_80 = (longlong *)pdb_140f4fd10();
    *plVar35 = (longlong)plStack_80;
    plVar35[1] = (longlong)puVar49;
    *(undefined1 *)(plVar35 + 2) = 1;
    plStack_78 = (longlong *)puVar49;
  }
  *plVar35 = (longlong)plStack_80 + 1;
  *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
  plStack_88 = (longlong *)*param_4;
  plVar35 = plStack_88 + 4;
  pdb_140266400(plStack_88,plVar35,0x30,0x10);
  lVar40 = _UNK_142f72578;
  plStack_88[2] = _DAT_142f72570;
  plStack_88[3] = lVar40;
  lVar40 = _UNK_142f72568;
  *plStack_88 = _DAT_142f72560;
  plStack_88[1] = lVar40;
  plStack_88[4] = (longlong)plStack_80;
  plStack_88[5] = (longlong)plStack_78;
  plVar37 = (longlong *)pdb_140f3bda0();
  if ((char)plVar37[2] == '\x01') {
    plStack_80 = (longlong *)*plVar37;
    plStack_78 = (longlong *)plVar37[1];
  }
  else {
    plStack_80 = (longlong *)pdb_140f4fd10();
    *plVar37 = (longlong)plStack_80;
    plVar37[1] = (longlong)plVar35;
    *(undefined1 *)(plVar37 + 2) = 1;
    plStack_78 = plVar35;
  }
  *plVar37 = (longlong)plStack_80 + 1;
  *(undefined4 *)param_13[2] = *(undefined4 *)((longlong)param_13 + 0x1c);
  plStack_88 = (longlong *)*param_13;
  pdb_140266740(plStack_88,plStack_88 + 4,0x18,0x10);
  lVar28 = _UNK_142f72578;
  lVar27 = _DAT_142f72570;
  plStack_88[2] = _DAT_142f72570;
  plStack_88[3] = lVar28;
  lVar38 = _UNK_142f72568;
  lVar40 = _DAT_142f72560;
  *plStack_88 = _DAT_142f72560;
  plStack_88[1] = lVar38;
  plStack_88[4] = (longlong)plStack_80;
  plStack_88[5] = (longlong)plStack_78;
  puVar48 = (undefined4 *)param_9[2];
  *puVar48 = *(undefined4 *)((longlong)param_9 + 0x1c);
  *(undefined1 *)(*param_9 + 0x10) = 0;
  plVar35 = (longlong *)pdb_140f3bda0();
  if ((char)plVar35[2] == '\x01') {
    lVar41 = *plVar35;
    puVar48 = (undefined4 *)plVar35[1];
  }
  else {
    lVar41 = pdb_140f4fd10();
    *plVar35 = lVar41;
    plVar35[1] = (longlong)puVar48;
    *(undefined1 *)(plVar35 + 2) = 1;
  }
  *plVar35 = lVar41 + 1;
  puVar49 = puVar48;
  plVar35 = (longlong *)pdb_140f3bda0();
  if ((char)plVar35[2] == '\x01') {
    uStack_e8 = *plVar35;
    puVar49 = (undefined4 *)plVar35[1];
  }
  else {
    uStack_e8 = pdb_140f4fd10();
    *plVar35 = uStack_e8;
    plVar35[1] = (longlong)puVar49;
    *(undefined1 *)(plVar35 + 2) = 1;
  }
  *plVar35 = uStack_e8 + 1;
  uStack_f8 = lVar27;
  uStack_f0 = lVar28;
  lStack_108 = lVar40;
  lStack_100 = lVar38;
  uStack_e0 = (undefined8 *)puVar49;
  plVar35 = (longlong *)pdb_140f3bda0();
  if ((char)plVar35[2] == '\x01') {
    plStack_80 = (longlong *)*plVar35;
    plStack_78 = (longlong *)plVar35[1];
  }
  else {
    plStack_80 = (longlong *)pdb_140f4fd10();
    *plVar35 = (longlong)plStack_80;
    plVar35[1] = (longlong)puVar49;
    *(undefined1 *)(plVar35 + 2) = 1;
    plStack_78 = (longlong *)puVar49;
  }
  lVar34 = lStack_100;
  lVar39 = lStack_108;
  *plVar35 = (longlong)plStack_80 + 1;
  uVar2 = (undefined4)uStack_f8;
  uVar3 = uStack_f8._4_4_;
  uVar4 = (undefined4)uStack_f0;
  uVar5 = uStack_f0._4_4_;
  uVar29 = (undefined4)uStack_e8;
  uVar30 = uStack_e8._4_4_;
  uVar31 = (undefined4)uStack_e0;
  uVar32 = uStack_e0._4_4_;
  *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
  plStack_88 = (longlong *)*param_10;
  pdb_1404ccf30();
  *plStack_88 = 0;
  plStack_88[1] = 8;
  plStack_88[2] = 0;
  plStack_88[3] = lVar40;
  plStack_88[4] = lVar38;
  plStack_88[5] = lVar27;
  plStack_88[6] = lVar28;
  plStack_88[7] = lVar41;
  plStack_88[8] = (longlong)puVar48;
  plStack_88[9] = lVar39;
  plStack_88[10] = lVar34;
  *(undefined4 *)(plStack_88 + 0xb) = uVar2;
  *(undefined4 *)((longlong)plStack_88 + 0x5c) = uVar3;
  *(undefined4 *)(plStack_88 + 0xc) = uVar4;
  *(undefined4 *)((longlong)plStack_88 + 100) = uVar5;
  *(undefined4 *)(plStack_88 + 0xd) = uVar29;
  *(undefined4 *)((longlong)plStack_88 + 0x6c) = uVar30;
  *(undefined4 *)(plStack_88 + 0xe) = uVar31;
  *(undefined4 *)((longlong)plStack_88 + 0x74) = uVar32;
  lVar40 = _UNK_142f72568;
  plStack_88[0xf] = _DAT_142f72560;
  plStack_88[0x10] = lVar40;
  lVar40 = _UNK_142f72578;
  plStack_88[0x11] = _DAT_142f72570;
  plStack_88[0x12] = lVar40;
  plStack_88[0x13] = (longlong)plStack_80;
  plStack_88[0x14] = (longlong)plStack_78;
  uVar2 = *(undefined4 *)((longlong)param_6 + 0x1c);
  puVar48 = (undefined4 *)param_6[2];
  *puVar48 = uVar2;
  uVar24 = *param_6;
  pdb_140b0deb0(uVar24);
  *puVar48 = uVar2;
  pdb_140b0e1b0(uVar24);
  *(undefined4 *)param_11[2] = *(undefined4 *)((longlong)param_11 + 0x1c);
  pdb_140a0e500(*param_11);
  pdb_140b57670(&lStack_108);
  *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
  plStack_78 = (longlong *)*param_7;
  pdb_1404debf0();
  plStack_78[10] = CONCAT44(uStack_b4,uStack_b8);
  plStack_78[0xb] = CONCAT44(uStack_ac,uStack_b0);
  plStack_78[8] = lStack_c8;
  plStack_78[9] = lStack_c0;
  *(undefined4 *)(plStack_78 + 6) = (undefined4)uStack_d8;
  *(undefined4 *)((longlong)plStack_78 + 0x34) = uStack_d8._4_4_;
  *(undefined4 *)(plStack_78 + 7) = (undefined4)uStack_d0;
  *(undefined4 *)((longlong)plStack_78 + 0x3c) = uStack_d0._4_4_;
  *(undefined4 *)(plStack_78 + 4) = (undefined4)uStack_e8;
  *(undefined4 *)((longlong)plStack_78 + 0x24) = uStack_e8._4_4_;
  *(undefined4 *)(plStack_78 + 5) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)plStack_78 + 0x2c) = uStack_e0._4_4_;
  *(undefined4 *)(plStack_78 + 2) = (undefined4)uStack_f8;
  *(undefined4 *)((longlong)plStack_78 + 0x14) = uStack_f8._4_4_;
  *(undefined4 *)(plStack_78 + 3) = (undefined4)uStack_f0;
  *(undefined4 *)((longlong)plStack_78 + 0x1c) = uStack_f0._4_4_;
  *plStack_78 = lStack_108;
  plStack_78[1] = lStack_100;
  *(undefined4 *)param_12[2] = *(undefined4 *)((longlong)param_12 + 0x1c);
  pdb_140a6a940(*param_12);
  pdb_1409cf760(&lStack_108);
  *puVar14 = uVar6;
  lVar40 = plVar13[1];
  if (lVar40 != 0) {
    lVar38 = lVar40 * 0x10 + 0x10;
    uVar45 = lVar40 + lVar38 + 0x11;
    if (uVar45 != 0) {
      pub_1406abac0((byte *)(*plVar13 - lVar38),uVar45,0x10);
    }
  }
  plVar13[6] = uStack_d8;
  *(undefined4 *)(plVar13 + 4) = (undefined4)uStack_e8;
  *(undefined4 *)((longlong)plVar13 + 0x24) = uStack_e8._4_4_;
  *(undefined4 *)(plVar13 + 5) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)plVar13 + 0x2c) = uStack_e0._4_4_;
  *(undefined4 *)(plVar13 + 2) = (undefined4)uStack_f8;
  *(undefined4 *)((longlong)plVar13 + 0x14) = uStack_f8._4_4_;
  *(undefined4 *)(plVar13 + 3) = (undefined4)uStack_f0;
  *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_f0._4_4_;
  *plVar13 = lStack_108;
  plVar13[1] = lStack_100;
  pdb_1409cf760(&lStack_108);
  *puVar16 = uVar7;
  lVar40 = plVar15[1];
  if (lVar40 != 0) {
    lVar38 = lVar40 * 0x10 + 0x10;
    uVar45 = lVar40 + lVar38 + 0x11;
    if (uVar45 != 0) {
      pub_1406abac0((byte *)(*plVar15 - lVar38),uVar45,0x10);
    }
  }
  plVar15[6] = uStack_d8;
  *(undefined4 *)(plVar15 + 4) = (undefined4)uStack_e8;
  *(undefined4 *)((longlong)plVar15 + 0x24) = uStack_e8._4_4_;
  *(undefined4 *)(plVar15 + 5) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)plVar15 + 0x2c) = uStack_e0._4_4_;
  *(undefined4 *)(plVar15 + 2) = (undefined4)uStack_f8;
  *(undefined4 *)((longlong)plVar15 + 0x14) = uStack_f8._4_4_;
  *(undefined4 *)(plVar15 + 3) = (undefined4)uStack_f0;
  *(undefined4 *)((longlong)plVar15 + 0x1c) = uStack_f0._4_4_;
  *plVar15 = lStack_108;
  plVar15[1] = lStack_100;
  pdb_1409cf760(&lStack_108);
  *puVar18 = uVar8;
  lVar40 = plVar17[1];
  if (lVar40 != 0) {
    lVar38 = lVar40 * 0x10 + 0x10;
    uVar45 = lVar40 + lVar38 + 0x11;
    if (uVar45 != 0) {
      pub_1406abac0((byte *)(*plVar17 - lVar38),uVar45,0x10);
    }
  }
  plVar17[6] = uStack_d8;
  *(undefined4 *)(plVar17 + 4) = (undefined4)uStack_e8;
  *(undefined4 *)((longlong)plVar17 + 0x24) = uStack_e8._4_4_;
  *(undefined4 *)(plVar17 + 5) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)plVar17 + 0x2c) = uStack_e0._4_4_;
  *(undefined4 *)(plVar17 + 2) = (undefined4)uStack_f8;
  *(undefined4 *)((longlong)plVar17 + 0x14) = uStack_f8._4_4_;
  *(undefined4 *)(plVar17 + 3) = (undefined4)uStack_f0;
  *(undefined4 *)((longlong)plVar17 + 0x1c) = uStack_f0._4_4_;
  *plVar17 = lStack_108;
  plVar17[1] = lStack_100;
  pdb_1409cf760(&lStack_108);
  *puVar20 = uVar9;
  lVar40 = plVar19[1];
  if (lVar40 != 0) {
    lVar38 = lVar40 * 0x10 + 0x10;
    uVar45 = lVar40 + lVar38 + 0x11;
    if (uVar45 != 0) {
      pub_1406abac0((byte *)(*plVar19 - lVar38),uVar45,0x10);
    }
  }
  plVar19[6] = uStack_d8;
  *(undefined4 *)(plVar19 + 4) = (undefined4)uStack_e8;
  *(undefined4 *)((longlong)plVar19 + 0x24) = uStack_e8._4_4_;
  *(undefined4 *)(plVar19 + 5) = (undefined4)uStack_e0;
  *(undefined4 *)((longlong)plVar19 + 0x2c) = uStack_e0._4_4_;
  *(undefined4 *)(plVar19 + 2) = (undefined4)uStack_f8;
  *(undefined4 *)((longlong)plVar19 + 0x14) = uStack_f8._4_4_;
  *(undefined4 *)(plVar19 + 3) = (undefined4)uStack_f0;
  *(undefined4 *)((longlong)plVar19 + 0x1c) = uStack_f0._4_4_;
  *plVar19 = lStack_108;
  plVar19[1] = lStack_100;
  pdb_1409cf930(&lStack_108);
  *puVar22 = uVar10;
  lVar40 = plVar21[1];
  if (lVar40 != 0) {
    lVar38 = lVar40 * 0x10 + 0x10;
    uVar45 = lVar40 + lVar38 + 0x11;
    if (uVar45 != 0) {
      pub_1406abac0((byte *)(*plVar21 - lVar38),uVar45,0x10);
    }
  }
  plVar21[6] = uStack_d8;
  plVar21[4] = uStack_e8;
  plVar21[5] = (longlong)uStack_e0;
  plVar21[2] = uStack_f8;
  plVar21[3] = uStack_f0;
  *plVar21 = lStack_108;
  plVar21[1] = lStack_100;
  return;
}

