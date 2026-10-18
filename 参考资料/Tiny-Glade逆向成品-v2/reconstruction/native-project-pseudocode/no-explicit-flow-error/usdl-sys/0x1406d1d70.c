// VA 0x1406d1d70, PDB extent 4426 bytes
// usdl_sys::backend::DynamicBackend::load
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/backend.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: usdl_sys::backend::DynamicBackend::load
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/usdl-sys/src/backend.rs
   Extent: 4426 */

undefined8 * pdb_1406d1d70(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_14100b650(&lStack_80,param_2,param_3,0);
  if (lStack_80 != -0x7fffffffffffffef) {
    param_1[4] = CONCAT44(uStack_6c,uStack_70);
    param_1[5] = CONCAT44(uStack_64,uStack_68);
    param_1[3] = uStack_78;
    param_1[1] = 0x8000000000000011;
    param_1[2] = lStack_80;
    *param_1 = 0;
    return param_1;
  }
  uStack_50 = uStack_78;
  pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9abf0,0xf);
  uVar1 = uStack_78;
  if (lStack_80 == -0x7fffffffffffffee) {
    pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9abff,9);
    uVar2 = uStack_78;
    if (lStack_80 == -0x7fffffffffffffee) {
      pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ac08,0x12);
      uVar3 = uStack_78;
      if (lStack_80 == -0x7fffffffffffffee) {
        pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ac1a,9);
        uVar4 = uStack_78;
        if (lStack_80 == -0x7fffffffffffffee) {
          pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ac23,0x12);
          uVar5 = uStack_78;
          if (lStack_80 == -0x7fffffffffffffee) {
            pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ac35,0xd);
            uVar6 = uStack_78;
            if ((((lStack_80 == -0x7fffffffffffffee) &&
                 (pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ac42,0x1a), uVar7 = uStack_78,
                 lStack_80 == -0x7fffffffffffffee)) &&
                (pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ac5c,0x18), uVar8 = uStack_78,
                lStack_80 == -0x7fffffffffffffee)) &&
               (((pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ac74,0x13), uVar9 = uStack_78,
                 lStack_80 == -0x7fffffffffffffee &&
                 (pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ac87,0x15), uVar10 = uStack_78,
                 lStack_80 == -0x7fffffffffffffee)) &&
                (pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ac9c,0x17), uVar11 = uStack_78,
                lStack_80 == -0x7fffffffffffffee)))) {
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9acb3,0x13);
              uVar12 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9acc6,0x1a);
              uVar13 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ace0,0x1a);
              uVar14 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9acfa,0x11);
              uVar15 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ad0b,0x12);
              uVar16 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ad1d,0x16);
              uVar17 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ad33,0xf);
              uVar18 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ad42,0x13);
              uVar19 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ad55,0x13);
              uVar20 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ad68,0x12);
              uVar21 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ad7a,0x1a);
              uVar22 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ad94,0x10);
              uVar23 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ada4,0x13);
              uVar24 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9adb7,0x14);
              uVar25 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9adcb,0x12);
              uVar26 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9addd,0x1b);
              uVar27 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9adf8,0x19);
              uVar28 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ae11,0x18);
              uVar29 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ae29,0x11);
              uVar30 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ae3a,0x19);
              uVar31 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ae53,0xf);
              uVar32 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ae62,0x16);
              uVar33 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ae78,0x17);
              uVar34 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ae8f,0xe);
              uVar35 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9ae9d,0xf);
              uVar36 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9aeac,0xf);
              uVar37 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9aebb,0x14);
              uVar38 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9aecf,0x10);
              uVar39 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9aedf,0xe);
              uVar40 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9aeed,0x15);
              uVar41 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9af02,9);
              uVar42 = uStack_78;
              if (lStack_80 != -0x7fffffffffffffee) {
                *(undefined4 *)(param_1 + 5) = uStack_60;
                *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
                *(undefined4 *)(param_1 + 6) = uStack_58;
                *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
                *(undefined4 *)(param_1 + 3) = uStack_70;
                *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
                *(undefined4 *)(param_1 + 4) = uStack_68;
                *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
                goto LAB_1406d2a72;
              }
              pdb_14100bb30(&lStack_80,&uStack_50,&UNK_142f9af0b,0xf);
              if (lStack_80 == -0x7fffffffffffffee) {
                *param_1 = uVar1;
                param_1[1] = uVar2;
                param_1[2] = uVar3;
                param_1[3] = uVar4;
                param_1[4] = uVar5;
                param_1[5] = uVar6;
                param_1[6] = uVar7;
                param_1[7] = uVar8;
                param_1[8] = uVar9;
                param_1[9] = uVar10;
                param_1[10] = uVar11;
                param_1[0xb] = uVar12;
                param_1[0xc] = uVar13;
                param_1[0xd] = uVar14;
                param_1[0xe] = uVar15;
                param_1[0xf] = uVar16;
                param_1[0x10] = uVar17;
                param_1[0x11] = uVar18;
                param_1[0x12] = uVar19;
                param_1[0x13] = uVar20;
                param_1[0x14] = uVar21;
                param_1[0x15] = uVar22;
                param_1[0x16] = uVar23;
                param_1[0x17] = uVar24;
                param_1[0x18] = uVar25;
                param_1[0x19] = uVar26;
                param_1[0x1a] = uVar27;
                param_1[0x1b] = uVar28;
                param_1[0x1c] = uVar29;
                param_1[0x1d] = uVar30;
                param_1[0x1e] = uVar31;
                param_1[0x1f] = uVar32;
                param_1[0x20] = uVar33;
                param_1[0x21] = uVar34;
                param_1[0x22] = uVar35;
                param_1[0x23] = uVar36;
                param_1[0x24] = uVar37;
                param_1[0x25] = uVar38;
                param_1[0x26] = uVar39;
                param_1[0x27] = uVar40;
                param_1[0x28] = uVar41;
                param_1[0x29] = uVar42;
                param_1[0x2a] = uStack_78;
                param_1[0x2b] = uStack_50;
                return param_1;
              }
            }
            *(undefined4 *)(param_1 + 5) = uStack_60;
            *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
            *(undefined4 *)(param_1 + 6) = uStack_58;
            *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
            *(undefined4 *)(param_1 + 3) = uStack_70;
            *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
            *(undefined4 *)(param_1 + 4) = uStack_68;
            *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
          }
          else {
            *(undefined4 *)(param_1 + 5) = uStack_60;
            *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
            *(undefined4 *)(param_1 + 6) = uStack_58;
            *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
            *(undefined4 *)(param_1 + 3) = uStack_70;
            *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
            *(undefined4 *)(param_1 + 4) = uStack_68;
            *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
          }
        }
        else {
          *(undefined4 *)(param_1 + 5) = uStack_60;
          *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
          *(undefined4 *)(param_1 + 6) = uStack_58;
          *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
          *(undefined4 *)(param_1 + 3) = uStack_70;
          *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
          *(undefined4 *)(param_1 + 4) = uStack_68;
          *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
        }
      }
      else {
        *(undefined4 *)(param_1 + 5) = uStack_60;
        *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
        *(undefined4 *)(param_1 + 6) = uStack_58;
        *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
        *(undefined4 *)(param_1 + 3) = uStack_70;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
        *(undefined4 *)(param_1 + 4) = uStack_68;
        *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
      }
    }
    else {
      *(undefined4 *)(param_1 + 5) = uStack_60;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
      *(undefined4 *)(param_1 + 6) = uStack_58;
      *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
      *(undefined4 *)(param_1 + 3) = uStack_70;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
      *(undefined4 *)(param_1 + 4) = uStack_68;
      *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
    }
  }
  else {
    *(undefined4 *)(param_1 + 5) = uStack_60;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_5c;
    *(undefined4 *)(param_1 + 6) = uStack_58;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_54;
    *(undefined4 *)(param_1 + 3) = uStack_70;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_6c;
    *(undefined4 *)(param_1 + 4) = uStack_68;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_64;
  }
LAB_1406d2a72:
  param_1[1] = lStack_80;
  param_1[2] = uStack_78;
  *param_1 = 0;
  pdb_140eac380(&uStack_50);
  return param_1;
}

