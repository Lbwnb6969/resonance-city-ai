// VA 0x14094d2a0, PDB extent 2470 bytes
// country_core::resources::rt::update_rt_world
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/rt/mod.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::rt::update_rt_world
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/rt/mod.rs
   Extent: 2470 */

void pdb_14094d2a0(undefined8 *param_1,undefined8 *param_2,ulonglong *param_3,undefined8 *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  undefined *puVar10;
  char cVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined *puVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  undefined8 uVar17;
  undefined1 (*pauVar18) [16];
  longlong *plVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  ulonglong uVar23;
  undefined1 (*pauVar24) [16];
  ulonglong *puVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong *puVar28;
  undefined1 (*pauVar29) [16];
  longlong lVar30;
  bool bVar31;
  bool bVar32;
  undefined1 (*pauStack_120) [16];
  undefined1 (*pauStack_118) [16];
  undefined1 *puStack_110;
  ushort uStack_108;
  undefined8 uStack_100;
  ulonglong *puStack_e8;
  undefined8 *puStack_e0;
  ulonglong *puStack_d8;
  undefined *puStack_d0;
  ulonglong *puStack_c8;
  ulonglong uStack_c0;
  undefined *puStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  ulonglong *puStack_78;
  undefined1 uStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_e0 = param_2;
  cVar11 = pdb_140e94b40();
  if (cVar11 == '\0') {
    lStack_68 = 0;
  }
  else {
    puVar28 = (ulonglong *)&UNK_143024e98;
    lVar30 = 0x2c;
    uVar23 = 0x2c;
    lVar12 = pdb_14094f280(&UNK_143024e98);
    if (lVar12 == 1) {
      if (0x2c < uVar23) {
LAB_14094daa9:
        pdb_142dc8070(&UNK_143024e98,0x2c,0);
LAB_14094dac9:
        pdb_142dc8070(&UNK_143024e98,0x2c);
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar28 = (ulonglong *)&UNK_143024e98;
      uVar13 = pdb_14094f280(&UNK_143024e98);
      if ((uVar13 & 1) != 0) {
        if (0x2c < uVar23 + 2) goto LAB_14094dac9;
        lVar30 = 0x2a - uVar23;
        puVar28 = (ulonglong *)(&UNK_143024e9a + uVar23);
      }
    }
    puVar14 = &UNK_143024ac3;
    pauVar29 = (undefined1 (*) [16])&UNK_143024a98;
    do {
      pbVar1 = puVar14 + -1;
      uVar20 = (uint)(char)*pbVar1;
      if ((int)uVar20 < 0) {
        bVar4 = puVar14[-2];
        if ((char)bVar4 < -0x40) {
          bVar5 = puVar14[-3];
          if ((char)bVar5 < -0x40) {
            pbVar2 = puVar14 + -4;
            puVar14 = puVar14 + -4;
            uVar20 = bVar5 & 0x3f | (*pbVar2 & 7) << 6;
          }
          else {
            puVar14 = puVar14 + -3;
            uVar20 = bVar5 & 0xf;
          }
          uVar20 = bVar4 & 0x3f | uVar20 << 6;
        }
        else {
          puVar14 = puVar14 + -2;
          uVar20 = bVar4 & 0x1f;
        }
        uVar20 = (uint)(*pbVar1 & 0x3f) | uVar20 << 6;
        if (uVar20 != 0x5c) goto LAB_14094d3d9;
LAB_14094d3f5:
        if (puVar14 + -0x143024a97 < (undefined *)0x2c) {
          puVar25 = (ulonglong *)(0x2a - (longlong)(puVar14 + -0x143024a98));
          pauVar29 = (undefined1 (*) [16])(puVar14 + 1);
          goto LAB_14094d418;
        }
        pdb_142dc8070(&UNK_143024a98,0x2b,puVar14 + -0x143024a97,0x2b,&UNK_143024ff0);
        goto LAB_14094daa9;
      }
      puVar14 = puVar14 + -1;
      if (uVar20 == 0x5c) goto LAB_14094d3f5;
LAB_14094d3d9:
      if (uVar20 == 0x2f) goto LAB_14094d3f5;
    } while (puVar14 != &UNK_143024a98);
    puVar25 = (ulonglong *)0x2b;
LAB_14094d418:
    puVar15 = (ulonglong *)pdb_140e97000();
    if (((char)puVar15[0xd] != '\x01') &&
       (puVar15 = (ulonglong *)pdb_142d8ec20(puVar15,0), puVar15 == (ulonglong *)0x0))
    goto LAB_14094da60;
    if (*puVar15 != 0) goto LAB_14094d9d6;
    *puVar15 = 0xffffffffffffffff;
    uStack_50 = puVar15;
    uStack_60 = pdb_140e94f10(puVar15 + 1,puVar28,lVar30,pauVar29,puVar25,1,0);
    *uStack_50 = *uStack_50 + 1;
    lStack_68 = 1;
  }
  puVar28 = (ulonglong *)*param_4;
  lVar12 = param_4[1];
  uVar23 = *puVar28;
  uVar21 = 0;
  uVar13 = uVar23 - *(ulonglong *)(lVar12 + 0x18);
  if (uVar23 < *(ulonglong *)(lVar12 + 0x18)) {
    uVar13 = uVar21;
  }
  uVar27 = uVar23 - *(ulonglong *)(lVar12 + 0x38);
  if (uVar23 < *(ulonglong *)(lVar12 + 0x38)) {
    uVar27 = uVar21;
  }
  bVar31 = uVar27 <= *(ulonglong *)(lVar12 + 0x30);
  uVar27 = *(ulonglong *)(lVar12 + 0x30) - uVar27;
  uVar23 = uVar27;
  if (!bVar31) {
    uVar23 = uVar21;
  }
  bVar32 = uVar13 <= *(ulonglong *)(lVar12 + 0x10);
  uVar13 = *(ulonglong *)(lVar12 + 0x10) - uVar13;
  uVar26 = uVar13;
  if (!bVar32) {
    uVar26 = uVar21;
  }
  uVar21 = *(ulonglong *)(lVar12 + 0x40);
  *puVar28 = uVar21 - (uVar26 + uVar23);
  if ((bVar32 && uVar13 != 0 || bVar31 && uVar27 != 0) && (*puVar28 = uVar21, 4 < *_DAT_143ca8e90))
  {
    puStack_d8 = (ulonglong *)0x0;
    puStack_d0 = &UNK_143024adf;
    puStack_c8 = (ulonglong *)0x1b;
    uStack_c0 = 0;
    puStack_b8 = &UNK_143024a6c;
    uStack_b0 = 0x2b;
    uStack_a8 = 5;
    uStack_a0 = &UNK_143024adf;
    uStack_98 = 0x1b;
    uStack_90 = 0xf200000001;
    puStack_88 = &UNK_143024ac3;
    uStack_80 = 0x39;
    pdb_140f332f0(&uStack_51,&puStack_d8);
  }
  uVar20 = *(uint *)((longlong)param_1 + 0x1c);
  pauVar29 = (undefined1 (*) [16])(ulonglong)uVar20;
  puVar25 = (ulonglong *)param_1[2];
  *(uint *)puVar25 = uVar20;
  param_1 = (undefined8 *)*param_1;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) | (bVar32 && uVar13 != 0 || bVar31 && uVar27 != 0)
  ;
  puVar28 = (ulonglong *)*param_3;
  uVar23 = param_3[1];
  uVar13 = *puVar28;
  uVar27 = 0;
  uVar21 = uVar13 - *(ulonglong *)(uVar23 + 0x18);
  if (uVar13 < *(ulonglong *)(uVar23 + 0x18)) {
    uVar21 = uVar27;
  }
  uVar26 = uVar13 - *(ulonglong *)(uVar23 + 0x38);
  if (uVar13 < *(ulonglong *)(uVar23 + 0x38)) {
    uVar26 = uVar27;
  }
  puVar15 = (ulonglong *)(uVar21 * 0x10 + *(longlong *)(uVar23 + 8));
  uVar13 = *(ulonglong *)(uVar23 + 0x10) - uVar21;
  if (*(ulonglong *)(uVar23 + 0x10) < uVar21) {
    puVar15 = (ulonglong *)0x8;
    uVar13 = uVar27;
  }
  puVar22 = (ulonglong *)(uVar26 * 0x10 + *(longlong *)(uVar23 + 0x28));
  uVar21 = *(ulonglong *)(uVar23 + 0x30) - uVar26;
  if (*(ulonglong *)(uVar23 + 0x30) < uVar26) {
    puVar22 = (ulonglong *)0x8;
    uVar21 = uVar27;
  }
  *puVar28 = (*(longlong *)(uVar23 + 0x40) - uVar21) - uVar13;
  uStack_50 = puVar15 + uVar13 * 2;
  puStack_e8 = puVar22 + uVar21 * 2;
  param_3 = puStack_e8;
  do {
    if ((puVar15 == (ulonglong *)0x0) || (puVar15 == uStack_50)) {
      if ((puVar22 == (ulonglong *)0x0) || (puVar22 == puStack_e8)) {
        if (*(char *)(param_1 + 7) == '\0') {
          pauVar18 = (undefined1 (*) [16])*param_1;
          lVar12 = param_1[3];
          auVar3 = *pauVar18;
          pauVar24 = pauVar18 + 1;
          uVar20 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                   (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                   (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                   (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                   (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                   (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                   (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                   (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                   (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                   (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                   (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                   (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                   (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                   (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                   (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                  (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
          do {
            bVar31 = lVar12 == 0;
            lVar12 = lVar12 + -1;
            if (bVar31) goto LAB_14094d975;
            if ((short)uVar20 == 0) {
              do {
                auVar3 = *pauVar24;
                pauVar18 = pauVar18 + -0x20;
                pauVar24 = pauVar24 + 1;
                uVar20 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
              } while (uVar20 == 0);
            }
            iVar8 = 0;
            for (uVar9 = uVar20; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
              iVar8 = iVar8 + 1;
            }
            uVar20 = uVar20 - 1 & uVar20;
          } while (*(char *)((longlong)pauVar18 + (-8 - (ulonglong)(uint)(iVar8 << 5))) == '\0');
        }
        puVar28 = *(ulonglong **)*puStack_e0;
        param_3 = puVar28 + 2;
        LOCK();
        bVar31 = (int)puVar28[2] == 0;
        if (bVar31) {
          *(int *)(puVar28 + 2) = 0x3fffffff;
        }
        UNLOCK();
        if (!bVar31) goto LAB_14094d9e3;
        do {
          if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
            uVar20 = 0;
            cVar11 = (char)puVar28[3];
          }
          else {
            uVar20 = pdb_142dc79e0();
            uVar20 = uVar20 ^ 1;
            cVar11 = (char)puVar28[3];
          }
          if (cVar11 != '\0') {
            uVar23 = (ulonglong)puStack_d0 >> 8;
            puStack_d0 = (undefined *)CONCAT71((int7)uVar23,(char)uVar20);
            puStack_d8 = param_3;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_143024e08,0x2b,&puStack_d8,&UNK_143024e38,&UNK_143024b00);
          }
          uVar23 = (ulonglong)uStack_50 >> 0x20;
          uStack_50 = (ulonglong *)CONCAT44((int)uVar23,uVar20);
          *(uint *)puVar25 = (uint)pauVar29;
          uVar6 = *(undefined1 *)(param_1 + 7);
          *(undefined1 *)(param_1 + 7) = 0;
          pauStack_120 = (undefined1 (*) [16])*param_1;
          puStack_110 = *pauStack_120 + param_1[1] + 1;
          auVar3 = *pauStack_120;
          uStack_108 = ~((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
          pauStack_118 = pauStack_120 + 1;
          uStack_100 = param_1[3];
          puStack_78 = param_3;
          uStack_70 = (char)uVar20;
          pdb_141a32ad0(&puStack_d8,&pauStack_120);
          puVar14 = uStack_a0;
          uStack_a8 = param_1[6];
          uStack_a0 = (undefined *)CONCAT71(uStack_a0._1_7_,uVar6);
          puVar10 = uStack_a0;
          pauVar24 = (undefined1 (*) [16])puVar28[0xd];
          param_1 = (undefined8 *)puVar28[0xe];
          uVar23 = puVar28[0x10];
          uVar13 = puVar28[0x14];
          puVar28[0x11] = (ulonglong)puStack_b8;
          puVar28[0x12] = uStack_b0;
          puVar28[0xd] = (ulonglong)puStack_d8;
          puVar28[0xe] = (ulonglong)puStack_d0;
          puVar28[0xf] = (ulonglong)puStack_c8;
          puVar28[0x10] = uStack_c0;
          puVar28[0x13] = uStack_a8;
          *(undefined1 *)(puVar28 + 0x14) = uVar6;
          uStack_a0._1_4_ = SUB84(puVar14,1);
          *(undefined4 *)((longlong)puVar28 + 0xa1) = uStack_a0._1_4_;
          uStack_a0._5_2_ = SUB82(puVar14,5);
          *(undefined2 *)((longlong)puVar28 + 0xa5) = uStack_a0._5_2_;
          uStack_a0._7_1_ = SUB81(puVar14,7);
          *(undefined1 *)((longlong)puVar28 + 0xa7) = uStack_a0._7_1_;
          uStack_a0 = puVar10;
          if (((char)uVar13 != '\x02') && (param_1 != (undefined8 *)0x0)) {
            if (uVar23 != 0) {
              auVar3 = *pauVar24;
              pauVar29 = pauVar24 + 1;
              param_3 = (ulonglong *)
                        (ulonglong)
                        ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                        (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                        (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                        (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                        (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                        (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                        (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                        (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                        (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                        (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                        (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                        (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                        (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                        (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                        (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                       (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
              pauVar18 = pauVar24;
              do {
                uVar20 = (uint)param_3;
                if ((short)param_3 == 0) {
                  do {
                    auVar3 = *pauVar29;
                    pauVar18 = pauVar18 + -0x20;
                    pauVar29 = pauVar29 + 1;
                    uVar20 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar3[0xf] >> 7) << 0xf) ^ 0xffff;
                  } while (uVar20 == 0);
                }
                iVar8 = 0;
                for (uVar9 = uVar20; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
                  iVar8 = iVar8 + 1;
                }
                plVar19 = *(longlong **)
                           ((longlong)pauVar18 + (-0x10 - (ulonglong)(uint)(iVar8 << 5)));
                LOCK();
                *plVar19 = *plVar19 + -1;
                UNLOCK();
                if (*plVar19 == 0) {
                  pdb_140c7b740((longlong)pauVar18 + (-0x10 - (ulonglong)(uint)(iVar8 << 5)));
                }
                param_3 = (ulonglong *)(ulonglong)(uVar20 - 1 & uVar20);
                uVar23 = uVar23 - 1;
              } while (uVar23 != 0);
            }
            lVar12 = (longlong)param_1 * 0x20;
            param_1 = (undefined8 *)((longlong)param_1 * 0x21 + 0x31);
            if (param_1 != (undefined8 *)0x0) {
              pub_1406abac0((byte *)((longlong)pauVar24 - (lVar12 + 0x20)),(ulonglong)param_1,0x10);
            }
          }
          puVar25 = puVar28 + 2;
          if (((char)uStack_50 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0))
          goto LAB_14094da6d;
          while( true ) {
            LOCK();
            uVar23 = *puVar25;
            *(uint *)puVar25 = (uint)*puVar25 + 0xc0000001;
            UNLOCK();
            if (0x3fffffff < (uint)uVar23 + 0xc0000001) {
              pdb_142dc6fa0(puVar25);
            }
LAB_14094d975:
            if (lStack_68 == 0) {
              return;
            }
            plVar19 = (longlong *)pdb_140e97000();
            if (((char)plVar19[0xd] == '\x01') ||
               (plVar19 = (longlong *)pdb_142d8ec20(plVar19,0), plVar19 != (longlong *)0x0)) break;
LAB_14094da60:
            pdb_142dc7890(&UNK_143326860);
LAB_14094da6d:
            cVar11 = pdb_142dc79e0();
            if (cVar11 == '\0') {
              *(undefined1 *)(puVar28 + 3) = 1;
            }
          }
          if (*plVar19 == 0) {
            *plVar19 = -1;
            uStack_50 = (ulonglong *)plVar19;
            pdb_140e95370(plVar19 + 1,uStack_60);
            *uStack_50 = *uStack_50 + 1;
            return;
          }
LAB_14094d9d6:
          pdb_142dc8090(&UNK_143326a50);
LAB_14094d9e3:
          pdb_142dc6e70(param_3);
        } while( true );
      }
      puVar15 = (ulonglong *)0x0;
      puVar16 = puVar22;
      puVar22 = puVar22 + 2;
    }
    else {
      puVar16 = puVar15;
      puVar15 = puVar15 + 2;
    }
    *puVar28 = *puVar28 + 1;
    *(uint *)puVar25 = uVar20;
    pauStack_118 = (undefined1 (*) [16])puVar16[1];
    pauStack_120 = (undefined1 (*) [16])0x0;
    uVar17 = pdb_1417c44b0(param_1 + 4,&pauStack_120);
    pdb_140caac10(&puStack_d8,param_1,uVar17,&pauStack_120);
    uStack_70 = 2;
    if (puStack_d8 != (ulonglong *)0x4) {
      uStack_70 = (undefined1)uStack_c0;
    }
    puStack_78 = puStack_c8;
    if (puStack_d8 != (ulonglong *)0x4) {
      LOCK();
      *puStack_c8 = *puStack_c8 - 1;
      UNLOCK();
      if (*puStack_c8 == 0) {
        pdb_140c7b740(&puStack_78);
      }
      *(undefined1 *)(param_1 + 7) = 1;
    }
    *(uint *)puVar25 = uVar20;
    *(undefined1 *)(param_1 + 7) = 1;
    param_3 = puVar15;
  } while( true );
}

