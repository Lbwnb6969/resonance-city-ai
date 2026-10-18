// VA 0x140add6f0, PDB extent 2014 bytes
// country_core::systems::wall::shapes::rectangle::finish_edit_rectangle::finish_edit_rectangle
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/finish_edit_rectangle.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::wall::shapes::rectangle::finish_edit_rectangle::finish_edit_rectangle
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/shapes/rectangle/finish_edit_rectangle.rs
   Extent: 2014 */

void pdb_140add6f0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong *param_7,longlong *param_8,
                  longlong *param_9,longlong *param_10)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  int *piVar11;
  undefined8 uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  ushort uVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  undefined4 uVar34;
  longlong lVar35;
  byte bVar36;
  uint uVar37;
  float fVar38;
  float fVar40;
  undefined1 auVar39 [16];
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  undefined4 uVar64;
  longlong lStack_218;
  longlong lStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined4 uStack_1ec;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  longlong lStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  
  uStack_b0 = 0xfffffffffffffffe;
  piVar11 = (int *)*param_2;
  puStack_118 = param_2;
  puStack_110 = param_3;
  puStack_108 = param_4;
  if (*piVar11 != 0) {
    if (*piVar11 == 2) {
      iVar63 = (int)*(undefined8 *)(piVar11 + 2);
      uVar64 = (undefined4)((ulonglong)*(undefined8 *)(piVar11 + 2) >> 0x20);
      iVar59 = piVar11[4];
      iVar60 = piVar11[5];
      iVar61 = piVar11[6];
      iVar62 = piVar11[7];
      lStack_218 = *(longlong *)(piVar11 + 8);
      lStack_210 = *(longlong *)(piVar11 + 10);
      uStack_1f8 = (undefined4)*(undefined8 *)(piVar11 + 0x10);
      fStack_1f4 = (float)((ulonglong)*(undefined8 *)(piVar11 + 0x10) >> 0x20);
      uStack_208 = *(longlong *)(piVar11 + 0xc);
      uStack_200._0_4_ = (float)*(undefined8 *)(piVar11 + 0xe);
      uStack_200._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(piVar11 + 0xe) >> 0x20);
      uVar34 = 2;
    }
    else {
      iVar59 = piVar11[4];
      iVar60 = piVar11[5];
      iVar61 = piVar11[6];
      iVar62 = piVar11[7];
      lStack_218 = *(longlong *)(piVar11 + 8);
      lStack_210 = *(longlong *)(piVar11 + 10);
      uStack_208 = *(longlong *)(piVar11 + 0xc);
      uStack_200._0_4_ = (float)*(undefined8 *)(piVar11 + 0xe);
      uStack_200._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(piVar11 + 0xe) >> 0x20);
      uStack_1f8 = (undefined4)*(undefined8 *)(piVar11 + 0x10);
      fStack_1f4 = (float)((ulonglong)*(undefined8 *)(piVar11 + 0x10) >> 0x20);
      iVar63 = piVar11[2];
      uVar64 = 0;
      uVar34 = 1;
    }
    iVar4 = piVar11[1];
    uVar9 = *(undefined8 *)(piVar11 + 0x12);
    uStack_c8 = CONCAT44(fStack_1f4,uStack_1f8);
    uStack_d8 = uStack_208;
    uStack_d0 = CONCAT44(uStack_200._4_4_,(float)uStack_200);
    lStack_e8 = lStack_218;
    lStack_e0 = lStack_210;
    *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
    lVar18 = *param_7;
    lVar21 = *(longlong *)(lVar18 + 0x30);
    uVar12 = *(undefined8 *)(lVar18 + 0x40);
    if (lVar21 == *(longlong *)(lVar18 + 0x20)) {
      pdb_142d7ebb0(lVar18 + 0x20);
    }
    lVar23 = *(longlong *)(lVar18 + 0x28);
    lVar20 = lVar21 * 0x58;
    *(undefined4 *)(lVar23 + lVar20) = uVar34;
    *(int *)(lVar23 + 4 + lVar20) = iVar4;
    *(ulonglong *)(lVar23 + 8 + lVar20) = CONCAT44(uVar64,iVar63);
    piVar1 = (int *)(lVar23 + 0x10 + lVar20);
    *piVar1 = iVar59;
    piVar1[1] = iVar60;
    piVar1[2] = iVar61;
    piVar1[3] = iVar62;
    plVar2 = (longlong *)(lVar23 + 0x20 + lVar20);
    *plVar2 = lStack_e8;
    plVar2[1] = lStack_e0;
    puVar3 = (undefined8 *)(lVar23 + 0x30 + lVar20);
    *puVar3 = uStack_d8;
    puVar3[1] = uStack_d0;
    *(undefined8 *)(lVar23 + 0x40 + lVar20) = uStack_c8;
    *(undefined8 *)(lVar23 + 0x48 + lVar20) = uVar9;
    *(undefined8 *)(lVar23 + 0x50 + lVar20) = uVar12;
    *(longlong *)(lVar18 + 0x30) = lVar21 + 1;
    *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
  }
  puVar13 = (ulonglong *)*param_6;
  lVar18 = param_6[1];
  uVar19 = *puVar13;
  uVar24 = 0;
  uVar26 = uVar19 - *(ulonglong *)(lVar18 + 0x18);
  if (uVar19 < *(ulonglong *)(lVar18 + 0x18)) {
    uVar26 = uVar24;
  }
  uVar22 = uVar19 - *(ulonglong *)(lVar18 + 0x38);
  if (uVar19 < *(ulonglong *)(lVar18 + 0x38)) {
    uVar22 = uVar24;
  }
  uVar19 = *(ulonglong *)(lVar18 + 0x30);
  uVar29 = uVar19 - uVar22;
  if (uVar19 < uVar22) {
    uVar29 = uVar24;
  }
  uVar14 = *(ulonglong *)(lVar18 + 0x10);
  uVar31 = uVar14 - uVar26;
  if (uVar14 < uVar26) {
    uVar31 = uVar24;
  }
  uVar24 = *(ulonglong *)(lVar18 + 0x40);
  *puVar13 = uVar24 - (uVar31 + uVar29);
  if ((uVar14 < uVar26 || uVar14 - uVar26 == 0) && (uVar19 < uVar22 || uVar19 - uVar22 == 0)) {
    return;
  }
  *puVar13 = uVar24;
  if (*piVar11 == 1) {
    lVar21 = 0x4c;
    lVar23 = 0x48;
    lVar18 = 0x3c;
    lVar25 = 0x38;
    lVar27 = 0x34;
    lVar30 = 0x30;
    lVar32 = 0x28;
    lVar35 = 0x24;
    lVar20 = 0x20;
    lVar33 = 0x10;
  }
  else {
    if (*piVar11 != 2) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14304e8bf,0x28,&UNK_14304e8e8);
    }
    lVar21 = 0x44;
    lVar23 = 0x40;
    lVar18 = 0x34;
    lVar25 = 0x30;
    lVar27 = 0x2c;
    lVar30 = 0x28;
    lVar32 = 0x20;
    lVar35 = 0x1c;
    lVar20 = 0x18;
    lVar33 = 8;
  }
  lVar33 = *(longlong *)((longlong)piVar11 + lVar33);
  fVar5 = *(float *)((longlong)piVar11 + lVar20);
  fVar6 = *(float *)((longlong)piVar11 + lVar35);
  uVar9 = *(undefined8 *)((longlong)piVar11 + lVar32);
  fVar7 = *(float *)((longlong)piVar11 + lVar30);
  fVar8 = *(float *)((longlong)piVar11 + lVar27);
  fVar40 = *(float *)((longlong)piVar11 + lVar21);
  fVar38 = *(float *)((longlong)piVar11 + lVar23);
  uVar42 = 0;
  uVar44 = 0;
  uVar46 = 0;
  uVar48 = 0;
  uVar49 = 0;
  uVar50 = 0;
  uVar51 = 0;
  uVar52 = 0;
  uVar53 = 0;
  uVar54 = 0;
  uVar55 = 0;
  uVar56 = 0;
  fVar17 = *(float *)((longlong)piVar11 + lVar25) * fVar5;
  uVar41 = SUB41(fVar17,0);
  uVar43 = (undefined1)((uint)fVar17 >> 8);
  uVar45 = (undefined1)((uint)fVar17 >> 0x10);
  uVar47 = (undefined1)((uint)fVar17 >> 0x18);
  uVar37 = pub_142e32940(*(float *)((longlong)piVar11 + lVar18) * fVar6 + fVar17);
  if ((float)(uVar37 & _DAT_142e377e0) * _DAT_14304e520 <= _DAT_142e37848) {
    fVar38 = fVar7 - fVar38;
    fVar40 = fVar8 - fVar40;
    fVar40 = fVar40 * fVar40;
    uVar42 = SUB41(fVar40,0);
    uVar44 = (undefined1)((uint)fVar40 >> 8);
    uVar46 = (undefined1)((uint)fVar40 >> 0x10);
    uVar48 = (undefined1)((uint)fVar40 >> 0x18);
    uVar49 = 0;
    uVar50 = 0;
    uVar51 = 0;
    uVar52 = 0;
    fVar40 = fVar40 + fVar38 * fVar38;
    uVar41 = SUB41(fVar40,0);
    uVar43 = (undefined1)((uint)fVar40 >> 8);
    uVar45 = (undefined1)((uint)fVar40 >> 0x10);
    uVar47 = (undefined1)((uint)fVar40 >> 0x18);
    uVar53 = uVar49;
    uVar54 = uVar50;
    uVar55 = uVar51;
    uVar56 = uVar52;
    if (SQRT(fVar40) <= _DAT_142e37848) {
      *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
      uVar9 = *param_5;
      *(undefined4 *)puStack_108[2] = *(undefined4 *)((longlong)puStack_108 + 0x1c);
      pdb_140c421c0(uVar9,*puStack_108);
LAB_140addcf1:
      *(undefined4 *)puStack_118[2] = *(undefined4 *)((longlong)puStack_118 + 0x1c);
      *piVar11 = 0;
      return;
    }
  }
  param_1 = (longlong *)*param_1;
  lStack_218 = lVar33;
  if (param_1[3] != 0) {
    uVar19 = pdb_1400af0a0(param_1 + 4,&lStack_218);
    lVar18 = *param_1;
    bVar36 = (byte)(uVar19 >> 0x39);
    auVar39 = ZEXT216(CONCAT11(bVar36,bVar36));
    auVar39 = pshuflw(auVar39,auVar39,0);
    lVar21 = 0;
    iVar63 = -(uint)(CONCAT13(uVar47,CONCAT12(uVar45,CONCAT11(uVar43,uVar41))) ==
                    CONCAT13(uVar47,CONCAT12(uVar45,CONCAT11(uVar43,uVar41))));
    iVar59 = -(uint)(CONCAT13(uVar48,CONCAT12(uVar46,CONCAT11(uVar44,uVar42))) ==
                    CONCAT13(uVar48,CONCAT12(uVar46,CONCAT11(uVar44,uVar42))));
    iVar60 = -(uint)(CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49))) ==
                    CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49))));
    iVar61 = -(uint)(CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53))) ==
                    CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53))));
    while( true ) {
      uVar19 = uVar19 & param_1[1];
      auVar10 = *(undefined1 (*) [16])(lVar18 + uVar19);
      auVar58[0] = -(auVar10[0] == auVar39[0]);
      auVar58[1] = -(auVar10[1] == auVar39[1]);
      auVar58[2] = -(auVar10[2] == auVar39[2]);
      auVar58[3] = -(auVar10[3] == auVar39[3]);
      auVar58[4] = -(auVar10[4] == auVar39[4]);
      auVar58[5] = -(auVar10[5] == auVar39[5]);
      auVar58[6] = -(auVar10[6] == auVar39[6]);
      auVar58[7] = -(auVar10[7] == auVar39[7]);
      auVar58[8] = -(auVar10[8] == auVar39[0]);
      auVar58[9] = -(auVar10[9] == auVar39[1]);
      auVar58[10] = -(auVar10[10] == auVar39[2]);
      auVar58[0xb] = -(auVar10[0xb] == auVar39[3]);
      auVar58[0xc] = -(auVar10[0xc] == auVar39[4]);
      auVar58[0xd] = -(auVar10[0xd] == auVar39[5]);
      auVar58[0xe] = -(auVar10[0xe] == auVar39[6]);
      auVar58[0xf] = -(auVar10[0xf] == auVar39[7]);
      uVar28 = (ushort)(SUB161(auVar58 >> 7,0) & 1) | (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe | (ushort)(auVar58[0xf] >> 7) << 0xf;
      uVar37 = (uint)uVar28;
      while (uVar28 != 0) {
        uVar15 = 0;
        for (uVar16 = uVar37; (uVar16 & 1) == 0; uVar16 = uVar16 >> 1 | 0x80000000) {
          uVar15 = uVar15 + 1;
        }
        lVar23 = (uVar15 + uVar19 & param_1[1]) * -0x78;
        if (lVar33 == *(longlong *)(lVar18 + -0x78 + lVar23)) {
          lVar18 = lVar18 + lVar23;
          if (1 < *(uint *)(lVar18 + -0x38)) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14304e998,0x6f,&UNK_14304e9d0);
          }
          if (*(uint *)(lVar18 + -0x38) != 1) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83b0(&UNK_14304e930,0x49,&UNK_14304e980);
          }
          uStack_100 = 0;
          lStack_f8 = 8;
          lStack_f0 = 0;
          uStack_208 = CONCAT44(fVar5,1);
          uStack_200._4_4_ = (undefined4)uVar9;
          uStack_1f8 = (undefined4)((ulonglong)uVar9 >> 0x20);
          uStack_1ec = 1;
          uStack_1e8 = *(undefined8 *)(lVar18 + -0x34);
          uStack_1e0 = *(undefined8 *)(lVar18 + -0x2c);
          uStack_1d8 = *(undefined8 *)(lVar18 + -0x24);
          lStack_218 = -0x7ffffffffffffffc;
          uStack_b1 = 1;
          lStack_210 = lVar33;
          uStack_200._0_4_ = fVar6;
          fStack_1f4 = fVar7;
          fStack_1f0 = fVar8;
          pdb_140a1aa80(&uStack_100,&lStack_218);
          *(undefined4 *)puStack_110[2] = *(undefined4 *)((longlong)puStack_110 + 0x1c);
          uVar9 = *puStack_110;
          lStack_e8 = 0;
          lStack_e0 = 8;
          uStack_d8 = 0;
          uStack_200 = lStack_f8 + lStack_f0 * 0x18;
          lStack_218 = lStack_f8;
          lStack_210 = lStack_f8;
          uStack_208 = uStack_100;
          lVar18 = lStack_f8;
          lStack_210 = pdb_140c69b60(&lStack_218);
          lStack_218 = 7;
          uStack_b1 = 0;
          uStack_208 = lVar18;
          pdb_140ae5180(uVar9,&lStack_218,&UNK_14304e918);
          *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
          lVar18 = *param_8;
          lVar21 = *(longlong *)(lVar18 + 0x30);
          uVar9 = *(undefined8 *)(lVar18 + 0x40);
          if (lVar21 == *(longlong *)(lVar18 + 0x20)) {
            uStack_b1 = 0;
            pdb_142d7e8a0(lVar18 + 0x20);
          }
          *(undefined8 *)(*(longlong *)(lVar18 + 0x28) + lVar21 * 8) = uVar9;
          *(longlong *)(lVar18 + 0x30) = lVar21 + 1;
          *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
          if (*piVar11 == 1) {
            *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
            lVar18 = *param_9;
            lVar21 = *(longlong *)(lVar18 + 0x30);
            uVar9 = *(undefined8 *)(lVar18 + 0x40);
            if (lVar21 == *(longlong *)(lVar18 + 0x20)) {
              uStack_b1 = 0;
              pdb_142d7e8a0(lVar18 + 0x20);
            }
            *(undefined8 *)(*(longlong *)(lVar18 + 0x28) + lVar21 * 8) = uVar9;
            *(longlong *)(lVar18 + 0x30) = lVar21 + 1;
            *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
          }
          *(undefined4 *)param_10[2] = *(undefined4 *)((longlong)param_10 + 0x1c);
          lVar18 = *param_10;
          lVar21 = *(longlong *)(lVar18 + 0x30);
          uVar9 = *(undefined8 *)(lVar18 + 0x40);
          if (lVar21 == *(longlong *)(lVar18 + 0x20)) {
            uStack_b1 = 0;
            pdb_142d7e980(lVar18 + 0x20);
          }
          lVar23 = *(longlong *)(lVar18 + 0x28);
          *(undefined8 *)(lVar23 + lVar21 * 0x10) = uVar9;
          *(longlong *)(lVar23 + 8 + lVar21 * 0x10) = lVar33;
          *(longlong *)(lVar18 + 0x30) = lVar21 + 1;
          *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
          goto LAB_140addcf1;
        }
        uVar28 = (ushort)(uVar37 - 1) & (ushort)uVar37;
        uVar37 = CONCAT22((short)(uVar37 - 1 >> 0x10),uVar28);
      }
      auVar57[0] = -(auVar10[0] == (char)iVar63);
      auVar57[1] = -(auVar10[1] == (char)((uint)iVar63 >> 8));
      auVar57[2] = -(auVar10[2] == (char)((uint)iVar63 >> 0x10));
      auVar57[3] = -(auVar10[3] == (char)((uint)iVar63 >> 0x18));
      auVar57[4] = -(auVar10[4] == (char)iVar59);
      auVar57[5] = -(auVar10[5] == (char)((uint)iVar59 >> 8));
      auVar57[6] = -(auVar10[6] == (char)((uint)iVar59 >> 0x10));
      auVar57[7] = -(auVar10[7] == (char)((uint)iVar59 >> 0x18));
      auVar57[8] = -(auVar10[8] == (char)iVar60);
      auVar57[9] = -(auVar10[9] == (char)((uint)iVar60 >> 8));
      auVar57[10] = -(auVar10[10] == (char)((uint)iVar60 >> 0x10));
      auVar57[0xb] = -(auVar10[0xb] == (char)((uint)iVar60 >> 0x18));
      auVar57[0xc] = -(auVar10[0xc] == (char)iVar61);
      auVar57[0xd] = -(auVar10[0xd] == (char)((uint)iVar61 >> 8));
      auVar57[0xe] = -(auVar10[0xe] == (char)((uint)iVar61 >> 0x10));
      auVar57[0xf] = -(auVar10[0xf] == (char)((uint)iVar61 >> 0x18));
      if ((((((((((((((((SUB161(auVar57 >> 7,0) & 1) != 0 || (SUB161(auVar57 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar57 >> 0x17,0) & 1) != 0) || (SUB161(auVar57 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar57 >> 0x27,0) & 1) != 0) || (SUB161(auVar57 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar57 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar57 >> 0x3f,0) & 1) != 0) || (SUB161(auVar57 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar57 >> 0x4f,0) & 1) != 0) || (SUB161(auVar57 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar57 >> 0x5f,0) & 1) != 0) || (SUB161(auVar57 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar57 >> 0x6f,0) & 1) != 0) || (SUB161(auVar57 >> 0x77,0) & 1) != 0) ||
          auVar57[0xf] < '\0') break;
      uVar19 = uVar19 + lVar21 + 0x10;
      lVar21 = lVar21 + 0x10;
    }
  }
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_14304e900);
}

