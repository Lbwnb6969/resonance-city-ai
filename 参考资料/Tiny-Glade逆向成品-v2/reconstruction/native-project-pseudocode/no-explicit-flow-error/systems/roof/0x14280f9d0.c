// VA 0x14280f9d0, PDB extent 2441 bytes
// system_roof::visual::switch_roof_type::switch_roof_type
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/visual/switch_roof_type.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_roof::visual::switch_roof_type::switch_roof_type
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/roof/src/visual/switch_roof_type.rs
   Extent: 2441 */

void pdb_14280f9d0(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,undefined8 *param_8)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  ulonglong *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  longlong lVar18;
  undefined4 *puVar19;
  undefined8 uVar20;
  longlong lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  byte *arg0;
  float fVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  undefined2 uVar29;
  undefined2 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined2 uVar34;
  undefined2 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  char cVar40;
  undefined4 uVar41;
  longlong lVar42;
  longlong lVar43;
  longlong *plVar44;
  ulonglong uVar45;
  longlong lVar46;
  ulonglong uVar47;
  undefined8 *puVar48;
  byte *pbVar49;
  longlong *plVar50;
  ulonglong uVar51;
  int *piVar52;
  ulonglong uVar53;
  ulonglong uVar54;
  float fVar55;
  float fVar56;
  undefined8 uStack_128;
  undefined2 uStack_120;
  undefined1 uStack_11e;
  undefined1 uStack_11d;
  undefined2 uStack_11c;
  undefined1 uStack_11a;
  undefined1 uStack_119;
  undefined2 uStack_118;
  undefined1 uStack_116;
  undefined1 uStack_115;
  undefined2 uStack_114;
  undefined1 uStack_112;
  undefined1 uStack_111;
  undefined2 uStack_110;
  undefined1 uStack_10e;
  undefined1 uStack_10d;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
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
  ulonglong uStack_d0;
  ulonglong *puStack_c8;
  code *pcStack_c0;
  ulonglong uStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  char acStack_91 [81];
  
  acStack_91[1] = -2;
  acStack_91[2] = -1;
  acStack_91[3] = -1;
  acStack_91[4] = -1;
  acStack_91[5] = -1;
  acStack_91[6] = -1;
  acStack_91[7] = -1;
  acStack_91[8] = -1;
  puVar9 = (ulonglong *)*param_1;
  lVar10 = param_1[1];
  uVar47 = *puVar9;
  uVar51 = 0;
  uVar45 = uVar47 - *(ulonglong *)(lVar10 + 0x18);
  if (uVar47 < *(ulonglong *)(lVar10 + 0x18)) {
    uVar45 = uVar51;
  }
  uVar53 = uVar47 - *(ulonglong *)(lVar10 + 0x38);
  if (uVar47 < *(ulonglong *)(lVar10 + 0x38)) {
    uVar53 = uVar51;
  }
  lVar42 = uVar45 * 0x20 + *(longlong *)(lVar10 + 8);
  uVar47 = *(ulonglong *)(lVar10 + 0x10);
  uVar54 = uVar47 - uVar45;
  if (uVar47 < uVar45) {
    uVar54 = uVar51;
  }
  if (uVar47 < uVar45) {
    lVar42 = 8;
  }
  lVar46 = uVar53 * 0x20 + *(longlong *)(lVar10 + 0x28);
  uVar47 = *(ulonglong *)(lVar10 + 0x30) - uVar53;
  if (*(ulonglong *)(lVar10 + 0x30) < uVar53) {
    lVar46 = 8;
    uVar47 = uVar51;
  }
  *puVar9 = (*(longlong *)(lVar10 + 0x40) - uVar47) - uVar54;
  fVar28 = _DAT_14300a33c;
  fVar27 = _DAT_143008730;
  uVar26 = _UNK_142e4e658;
  uVar25 = _DAT_142e4e650;
  fVar24 = _DAT_142e36f28;
  plVar50 = *(longlong **)(param_2 + 8);
  if (plVar50 == (longlong *)0x0) {
    plVar50 = *(longlong **)(param_2 + 0x10);
  }
  lVar4 = uVar54 * 0x20 + lVar42;
  lVar5 = uVar47 * 0x20 + lVar46;
  lVar11 = *param_6;
  lVar12 = param_6[1];
  uVar13 = *param_8;
  puVar14 = (undefined4 *)param_8[2];
  uStack_d4 = *(undefined4 *)((longlong)param_8 + 0x1c);
  uVar15 = *param_3;
  uStack_9c = *(undefined4 *)((longlong)param_7 + 0x1c);
  lStack_b0 = *param_7;
  puVar16 = (undefined4 *)param_7[2];
  uStack_98 = *(undefined4 *)((longlong)param_5 + 0x1c);
  lStack_a8 = *param_5;
  puVar17 = (undefined4 *)param_5[2];
  uStack_d8 = *(undefined4 *)((longlong)param_4 + 0x1c);
  lVar18 = *param_4;
  puVar19 = (undefined4 *)param_4[2];
  lVar10 = lStack_b0 + 0x20;
  lVar1 = lStack_a8 + 0x20;
  while( true ) {
    if ((lVar42 == 0) || (lVar42 == lVar4)) {
      if ((lVar46 == 0) || (lVar46 == lVar5)) {
        return;
      }
      lVar42 = 0;
      lVar43 = lVar46;
      lVar46 = lVar46 + 0x20;
    }
    else {
      lVar43 = lVar42;
      lVar42 = lVar42 + 0x20;
    }
    *puVar9 = *puVar9 + 1;
    uVar47 = *(ulonglong *)(lVar43 + 0x10);
    puVar48 = (undefined8 *)(ulonglong)~(uint)uVar47;
    cVar6 = *(char *)(lVar43 + 0x19);
    uVar41 = 1;
    uStack_b8 = uVar47;
    acStack_91[0] = cVar6;
    if (*(undefined8 **)(lVar12 + 0x10) <= puVar48) goto LAB_1428102ab;
    piVar52 = (int *)((longlong)puVar48 * 0x18 + *(longlong *)(lVar12 + 8));
    puVar48 = (undefined8 *)(uVar47 >> 0x20);
    if ((piVar52[4] != (int)(uVar47 >> 0x20)) || (uVar41 = 1, *piVar52 == 0)) goto LAB_1428102ab;
    puVar48 = *(undefined8 **)(piVar52 + 2);
    if ((*(ulonglong *)(lVar11 + 0x38) <= ((ulonglong)puVar48 & 0xffffffff)) ||
       ((*(ulonglong *)(*(longlong *)(lVar11 + 0x28) + ((ulonglong)puVar48 >> 6 & 0x3ffffff) * 8) >>
         ((ulonglong)puVar48 & 0x3f) & 1) == 0)) break;
    uVar20 = *(undefined8 *)(lVar43 + 8);
    cVar7 = *(char *)(lVar43 + 0x18);
    puVar48 = (undefined8 *)
              ((ulonglong)(uint)~piVar52[1] * 0x58 +
              *(longlong *)
               (*(longlong *)
                 (*(longlong *)(lVar12 + 0x1a0) + 0x18 + ((ulonglong)puVar48 >> 0x20) * 0x48) + 0x10
               + ~*(ulonglong *)
                   (*(longlong *)
                     (*(longlong *)(lVar12 + 0x1a0) + 0x38 + ((ulonglong)puVar48 >> 0x20) * 0x48) +
                   *(longlong *)(lVar11 + 0x110) * 8) * 0x30));
    cVar40 = pdb_140b77990();
    uVar47 = uStack_b8;
    uVar38 = uStack_119;
    uVar36 = uStack_11a;
    uVar34 = uStack_11c;
    uVar32 = uStack_11d;
    uVar8 = uStack_11e;
    uVar29 = uStack_120;
    uStack_128 = CONCAT71(uStack_128._1_7_,cVar40);
    if (cVar6 != cVar40) {
      puVar48 = &uStack_128;
      uVar47 = 0;
      uVar41 = 0;
      pdb_142e31047(0,puVar48,acStack_91);
LAB_1428102ab:
      uStack_128 = CONCAT44((int)puVar48,uVar41);
      uStack_120 = (undefined2)uVar47;
      uStack_11e = (undefined1)(uVar47 >> 0x10);
      uStack_11d = (undefined1)(uVar47 >> 0x18);
      uStack_11c = (undefined2)(uVar47 >> 0x20);
      uStack_11a = (undefined1)(uVar47 >> 0x30);
      uStack_119 = (undefined1)(uVar47 >> 0x38);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_14359c908,0x2b,&uStack_128,&UNK_14359c8e8,&UNK_14359c898);
    }
    uStack_11e = (undefined1)((ulonglong)uVar26 >> 0x10);
    uVar31 = uStack_11e;
    uStack_11d = (undefined1)((ulonglong)uVar26 >> 0x18);
    uVar33 = uStack_11d;
    uStack_11a = (undefined1)((ulonglong)uVar26 >> 0x30);
    uVar37 = uStack_11a;
    uStack_119 = (undefined1)((ulonglong)uVar26 >> 0x38);
    uVar39 = uStack_119;
    uStack_120 = (undefined2)uVar26;
    uVar30 = uStack_120;
    uStack_11c = (undefined2)((ulonglong)uVar26 >> 0x20);
    uVar35 = uStack_11c;
    uStack_120 = uVar29;
    uStack_11e = uVar8;
    uStack_11d = uVar32;
    uStack_11c = uVar34;
    uStack_11a = uVar36;
    uStack_119 = uVar38;
    if (cVar6 == '\0') {
      uVar41 = pdb_1409012c0(0);
      pdb_1408fd550(&uStack_f8,uVar41);
      uStack_110 = 0;
      uStack_10e = 0;
      uStack_10d = 0;
      uStack_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      uStack_112 = 0;
      uStack_111 = 0;
      pdb_14007ee60();
      uStack_e8 = CONCAT31(uStack_e8._1_3_,7);
      uStack_128 = uVar25;
      uStack_10c = 0x3f8000003f800000;
      uStack_104 = 0x3f800000;
      lVar43 = plVar50[2];
      uStack_120 = uVar30;
      uStack_11e = uVar31;
      uStack_11d = uVar33;
      uStack_11c = uVar35;
      uStack_11a = uVar37;
      uStack_119 = uVar39;
      if ((ulonglong)(*plVar50 - lVar43) < 0x78) {
        pdb_142d7f1b0(plVar50,lVar43,0x78,1,1);
      }
      lVar21 = plVar50[1];
      *(code **)(lVar21 + lVar43) = pdb_140fc5c80;
      puVar3 = (undefined8 *)(lVar21 + 8 + lVar43);
      *puVar3 = uStack_128;
      puVar3[1] = CONCAT17(uStack_119,
                           CONCAT16(uStack_11a,
                                    CONCAT24(uStack_11c,
                                             CONCAT13(uStack_11d,CONCAT12(uStack_11e,uStack_120)))))
      ;
      puVar2 = (undefined4 *)(lVar21 + 0x18 + lVar43);
      *puVar2 = CONCAT13(uStack_115,CONCAT12(uStack_116,uStack_118));
      puVar2[1] = CONCAT13(uStack_111,CONCAT12(uStack_112,uStack_114));
      puVar2[2] = CONCAT13(uStack_10d,CONCAT12(uStack_10e,uStack_110));
      puVar2[3] = (undefined4)uStack_10c;
      puVar2 = (undefined4 *)(lVar21 + 0x28 + lVar43);
      *puVar2 = uStack_10c._4_4_;
      puVar2[1] = uStack_104;
      puVar2[2] = uStack_100;
      puVar2[3] = uStack_fc;
      puVar2 = (undefined4 *)(lVar21 + 0x38 + lVar43);
      *puVar2 = uStack_f8;
      puVar2[1] = uStack_f4;
      puVar2[2] = uStack_f0;
      puVar2[3] = uStack_ec;
      puVar2 = (undefined4 *)(lVar21 + 0x48 + lVar43);
      *puVar2 = uStack_e8;
      puVar2[1] = uStack_e4;
      puVar2[2] = uStack_e0;
      puVar2[3] = uStack_dc;
      *(undefined1 *)(lVar21 + 0x58 + lVar43) = 0;
      *(ulonglong *)(lVar21 + 0x68 + lVar43) = uVar47;
      plVar50[2] = lVar43 + 0x78;
      uVar8 = *(undefined1 *)((longlong)puVar48 + 0x54);
      pdb_140b77b90(&puStack_c8,puVar48);
      uStack_112 = SUB81(pcStack_c0,0);
      uStack_111 = (undefined1)((ulonglong)pcStack_c0 >> 8);
      uStack_110 = (undefined2)((ulonglong)pcStack_c0 >> 0x10);
      uStack_11a = SUB81(puStack_c8,0);
      uStack_119 = (undefined1)((ulonglong)puStack_c8 >> 8);
      uStack_118 = (undefined2)((ulonglong)puStack_c8 >> 0x10);
      uStack_116 = (undefined1)((ulonglong)puStack_c8 >> 0x20);
      uStack_115 = (undefined1)((ulonglong)puStack_c8 >> 0x28);
      uStack_114 = (undefined2)((ulonglong)puStack_c8 >> 0x30);
      *puVar16 = uStack_9c;
      lVar43 = *(longlong *)(lStack_b0 + 0x30);
      uVar22 = *(undefined8 *)(lStack_b0 + 0x40);
      if (lVar43 == *(longlong *)(lStack_b0 + 0x20)) {
        pdb_142d7ede0(lVar10);
      }
      lVar21 = *(longlong *)(lStack_b0 + 0x28);
      *(undefined8 *)(lVar21 + lVar43 * 0x28) = uVar22;
      *(undefined1 *)(lVar21 + 8 + lVar43 * 0x28) = 6;
      *(undefined1 *)(lVar21 + 9 + lVar43 * 0x28) = uVar8;
      puVar2 = (undefined4 *)(lVar21 + 0x14 + lVar43 * 0x28);
      *puVar2 = CONCAT22(uStack_11c,CONCAT11(uStack_11d,uStack_11e));
      puVar2[1] = CONCAT22(uStack_118,CONCAT11(uStack_119,uStack_11a));
      puVar2[2] = CONCAT22(uStack_114,CONCAT11(uStack_115,uStack_116));
      puVar2[3] = CONCAT22(uStack_110,CONCAT11(uStack_111,uStack_112));
      puVar3 = (undefined8 *)(lVar21 + 10 + lVar43 * 0x28);
      *puVar3 = uStack_128;
      puVar3[1] = CONCAT17(uStack_119,
                           CONCAT16(uStack_11a,
                                    CONCAT24(uStack_11c,
                                             CONCAT13(uStack_11d,CONCAT12(uStack_11e,uStack_120)))))
      ;
      *(longlong *)(lStack_b0 + 0x30) = lVar43 + 1;
      *(longlong *)(lStack_b0 + 0x40) = *(longlong *)(lStack_b0 + 0x40) + 1;
      if ((*(float *)((longlong)puVar48 + 0x34) == fVar24) &&
         (!NAN(*(float *)((longlong)puVar48 + 0x34)) && !NAN(fVar24))) {
        uVar22 = *puVar48;
        *puVar17 = uStack_98;
        lVar43 = *(longlong *)(lStack_a8 + 0x30);
        uVar23 = *(undefined8 *)(lStack_a8 + 0x40);
        if (lVar43 == *(longlong *)(lStack_a8 + 0x20)) {
          pdb_142d7e980(lVar1);
        }
        lVar21 = *(longlong *)(lStack_a8 + 0x28);
        *(undefined8 *)(lVar21 + lVar43 * 0x10) = uVar23;
        *(undefined8 *)(lVar21 + 8 + lVar43 * 0x10) = uVar22;
        *(longlong *)(lStack_a8 + 0x30) = lVar43 + 1;
        *(longlong *)(lStack_a8 + 0x40) = *(longlong *)(lStack_a8 + 0x40) + 1;
      }
      if (cVar7 == '\x01') {
        lVar43 = pdb_140b0e1e0(uVar13,uVar20,&UNK_14359c8c8);
        fVar56 = *(float *)(lVar43 + 0x54);
        if ((fVar56 != fVar28) || (NAN(fVar56) || NAN(fVar28))) {
          fVar55 = fVar28;
          if (fVar28 <= fVar56) {
            fVar55 = fVar56;
          }
          fVar56 = fVar27;
          if (fVar55 <= fVar27) {
            fVar56 = fVar55;
          }
          *puVar14 = uStack_d4;
          pdb_140b0e460(uVar13,uVar20,fVar56);
        }
      }
    }
    else {
      lVar43 = plVar50[2];
      if ((ulonglong)(*plVar50 - lVar43) < 0x18) {
        pdb_142d7f1b0(plVar50,lVar43,0x18,1,1);
      }
      lVar21 = plVar50[1];
      *(code **)(lVar21 + lVar43) = pdb_140fc5d60;
      *(ulonglong *)(lVar21 + 8 + lVar43) = uVar47;
      *(code **)(lVar21 + 0x10 + lVar43) = pdb_140fc6180;
      plVar50[2] = lVar43 + 0x18;
      puStack_c8 = &uStack_b8;
      pcStack_c0 = pdb_140ed4b80;
      pdb_140f60760(&uStack_128,&UNK_14359c8e0,&puStack_c8);
      uStack_d0 = uStack_128;
      arg0 = (byte *)CONCAT17(uStack_119,
                              CONCAT16(uStack_11a,
                                       CONCAT24(uStack_11c,
                                                CONCAT13(uStack_11d,CONCAT12(uStack_11e,uStack_120))
                                               )));
      pbVar49 = arg0;
      lVar43 = pdb_140a2c860(uVar15,arg0,
                             CONCAT17(uStack_111,
                                      CONCAT16(uStack_112,
                                               CONCAT24(uStack_114,
                                                        CONCAT13(uStack_115,
                                                                 CONCAT12(uStack_116,uStack_118)))))
                            );
      if (lVar43 == 1) {
        plVar44 = (longlong *)pdb_1408ffdc0(uVar15);
        pdb_140961ca0(*plVar44 + 0x10,pbVar49);
      }
      if (uStack_d0 != 0) {
        pub_1406abac0(arg0,uStack_d0,1);
      }
      pdb_140b77b90(&puStack_c8,puVar48);
      uStack_111 = SUB81(pcStack_c0,0);
      uStack_110 = (undefined2)((ulonglong)pcStack_c0 >> 8);
      uStack_10e = (undefined1)((ulonglong)pcStack_c0 >> 0x18);
      uStack_119 = SUB81(puStack_c8,0);
      uStack_118 = (undefined2)((ulonglong)puStack_c8 >> 8);
      uStack_116 = (undefined1)((ulonglong)puStack_c8 >> 0x18);
      uStack_115 = (undefined1)((ulonglong)puStack_c8 >> 0x20);
      uStack_114 = (undefined2)((ulonglong)puStack_c8 >> 0x28);
      uStack_112 = (undefined1)((ulonglong)puStack_c8 >> 0x38);
      *puVar16 = uStack_9c;
      lVar43 = *(longlong *)(lStack_b0 + 0x30);
      uVar20 = *(undefined8 *)(lStack_b0 + 0x40);
      if (lVar43 == *(longlong *)(lStack_b0 + 0x20)) {
        pdb_142d7ede0(lVar10);
      }
      uVar47 = uStack_b8;
      lVar21 = *(longlong *)(lStack_b0 + 0x28);
      *(undefined8 *)(lVar21 + lVar43 * 0x28) = uVar20;
      *(undefined1 *)(lVar21 + 8 + lVar43 * 0x28) = 0;
      puVar2 = (undefined4 *)(lVar21 + 0x14 + lVar43 * 0x28);
      *puVar2 = CONCAT13(uStack_11a,CONCAT21(uStack_11c,uStack_11d));
      puVar2[1] = CONCAT13(uStack_116,CONCAT21(uStack_118,uStack_119));
      puVar2[2] = CONCAT13(uStack_112,CONCAT21(uStack_114,uStack_115));
      puVar2[3] = CONCAT13(uStack_10e,CONCAT21(uStack_110,uStack_111));
      puVar2 = (undefined4 *)(lVar21 + 9 + lVar43 * 0x28);
      *puVar2 = (undefined4)uStack_128;
      puVar2[1] = uStack_128._4_4_;
      puVar2[2] = CONCAT13(uStack_11d,CONCAT12(uStack_11e,uStack_120));
      puVar2[3] = CONCAT13(uStack_119,CONCAT12(uStack_11a,uStack_11c));
      *(longlong *)(lStack_b0 + 0x30) = lVar43 + 1;
      *(longlong *)(lStack_b0 + 0x40) = *(longlong *)(lStack_b0 + 0x40) + 1;
      uVar41 = pdb_1409012c0(0);
      pdb_1408fd550(&uStack_f8,uVar41);
      uStack_110 = 0;
      uStack_10e = 0;
      uStack_10d = 0;
      uStack_118 = 0;
      uStack_116 = 0;
      uStack_115 = 0;
      uStack_114 = 0;
      uStack_112 = 0;
      uStack_111 = 0;
      pdb_14007ee60();
      uStack_e8 = CONCAT31(uStack_e8._1_3_,7);
      uStack_128 = uVar25;
      uStack_10c = 0x3f8000003f800000;
      uStack_104 = 0x3f800000;
      lVar43 = plVar50[2];
      uStack_120 = uVar30;
      uStack_11e = uVar31;
      uStack_11d = uVar33;
      uStack_11c = uVar35;
      uStack_11a = uVar37;
      uStack_119 = uVar39;
      if ((ulonglong)(*plVar50 - lVar43) < 0x78) {
        pdb_142d7f1b0(plVar50,lVar43,0x78,1,1);
      }
      lVar21 = plVar50[1];
      *(code **)(lVar21 + lVar43) = pdb_140fc5c80;
      puVar3 = (undefined8 *)(lVar21 + 8 + lVar43);
      *puVar3 = uStack_128;
      puVar3[1] = CONCAT17(uStack_119,
                           CONCAT16(uStack_11a,
                                    CONCAT24(uStack_11c,
                                             CONCAT13(uStack_11d,CONCAT12(uStack_11e,uStack_120)))))
      ;
      puVar2 = (undefined4 *)(lVar21 + 0x18 + lVar43);
      *puVar2 = CONCAT13(uStack_115,CONCAT12(uStack_116,uStack_118));
      puVar2[1] = CONCAT13(uStack_111,CONCAT12(uStack_112,uStack_114));
      puVar2[2] = CONCAT13(uStack_10d,CONCAT12(uStack_10e,uStack_110));
      puVar2[3] = (undefined4)uStack_10c;
      puVar2 = (undefined4 *)(lVar21 + 0x28 + lVar43);
      *puVar2 = uStack_10c._4_4_;
      puVar2[1] = uStack_104;
      puVar2[2] = uStack_100;
      puVar2[3] = uStack_fc;
      puVar2 = (undefined4 *)(lVar21 + 0x38 + lVar43);
      *puVar2 = uStack_f8;
      puVar2[1] = uStack_f4;
      puVar2[2] = uStack_f0;
      puVar2[3] = uStack_ec;
      puVar3 = (undefined8 *)(lVar21 + 0x48 + lVar43);
      *puVar3 = CONCAT44(uStack_e4,uStack_e8);
      puVar3[1] = CONCAT44(uStack_dc,uStack_e0);
      *(undefined1 *)(lVar21 + 0x58 + lVar43) = 0;
      *(ulonglong *)(lVar21 + 0x68 + lVar43) = uVar47;
      plVar50[2] = lVar43 + 0x78;
      if ((*(float *)((longlong)puVar48 + 0x34) == fVar24) &&
         (!NAN(*(float *)((longlong)puVar48 + 0x34)) && !NAN(fVar24))) {
        uVar20 = *puVar48;
        *puVar17 = uStack_98;
        lVar43 = *(longlong *)(lStack_a8 + 0x30);
        uVar22 = *(undefined8 *)(lStack_a8 + 0x40);
        if (lVar43 == *(longlong *)(lStack_a8 + 0x20)) {
          pdb_142d7e980(lVar1);
        }
        lVar21 = *(longlong *)(lStack_a8 + 0x28);
        *(undefined8 *)(lVar21 + lVar43 * 0x10) = uVar22;
        *(undefined8 *)(lVar21 + 8 + lVar43 * 0x10) = uVar20;
        *(longlong *)(lStack_a8 + 0x30) = lVar43 + 1;
        *(longlong *)(lStack_a8 + 0x40) = *(longlong *)(lStack_a8 + 0x40) + 1;
      }
    }
    uVar47 = uStack_b8;
    lVar43 = plVar50[2];
    if ((ulonglong)(*plVar50 - lVar43) < 0x18) {
      pdb_142d7f1b0(plVar50,lVar43,0x18,1,1);
    }
    lVar21 = plVar50[1];
    *(code **)(lVar21 + lVar43) = pdb_140fc5ed0;
    *(ulonglong *)(lVar21 + 8 + lVar43) = uVar47;
    *(code **)(lVar21 + 0x10 + lVar43) = pdb_140fc6180;
    plVar50[2] = lVar43 + 0x18;
    uVar20 = *puVar48;
    *puVar19 = uStack_d8;
    lVar43 = *(longlong *)(lVar18 + 0x30);
    uVar22 = *(undefined8 *)(lVar18 + 0x40);
    if (lVar43 == *(longlong *)(lVar18 + 0x20)) {
      pdb_142d7e980(lVar18 + 0x20);
    }
    lVar21 = *(longlong *)(lVar18 + 0x28);
    *(undefined8 *)(lVar21 + lVar43 * 0x10) = uVar22;
    *(undefined8 *)(lVar21 + 8 + lVar43 * 0x10) = uVar20;
    *(longlong *)(lVar18 + 0x30) = lVar43 + 1;
    *(longlong *)(lVar18 + 0x40) = *(longlong *)(lVar18 + 0x40) + 1;
  }
  uVar41 = 0;
  goto LAB_1428102ab;
}

