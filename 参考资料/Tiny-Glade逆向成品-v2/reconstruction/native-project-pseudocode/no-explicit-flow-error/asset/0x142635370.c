// VA 0x142635370, PDB extent 3415 bytes
// asset::inheritable::impl$5::inherit_from<alloc::string::String,asset::prefab::config::PrefabPartConfig>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/inheritable.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   asset::inheritable::impl$5::inherit_from<alloc::string::String,asset::prefab::config::PrefabPartConfig>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/asset/src/inheritable.rs
   Extent: 3415 */

void pdb_142635370(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 (*pauVar4) [16];
  ushort uVar5;
  undefined8 uVar6;
  byte bVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  char cVar11;
  int iVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined1 (*pauVar15) [16];
  byte bVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 (*pauVar21) [16];
  ulonglong *puVar22;
  byte bVar23;
  longlong lVar24;
  byte *pbVar25;
  byte *pbStack_268;
  undefined8 uStack_260;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  byte *pbStack_230;
  undefined8 uStack_228;
  undefined8 *puStack_220;
  byte *pbStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  byte *pbStack_200;
  undefined8 uStack_1f8;
  ulonglong uStack_1f0;
  byte *pbStack_1e8;
  undefined4 auStack_1c0 [17];
  undefined1 uStack_17c;
  undefined8 *puStack_178;
  undefined4 uStack_170;
  undefined8 *puStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 *puStack_148;
  undefined4 uStack_140;
  undefined8 *puStack_138;
  undefined4 uStack_130;
  undefined8 *puStack_128;
  undefined4 uStack_120;
  undefined8 *puStack_118;
  byte *pbStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  byte *pbStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  byte *pbStack_e0;
  undefined8 uStack_d8;
  byte *pbStack_c8;
  byte *pbStack_c0;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 *puStack_88;
  undefined4 uStack_80;
  undefined8 *puStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  longlong lStack_58;
  undefined1 uStack_4a;
  byte bStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pauVar21 = (undefined1 (*) [16])*param_2;
  puVar13 = (undefined8 *)param_2[3];
  auVar3 = *pauVar21;
  pauVar15 = pauVar21 + 1;
  uVar14 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
    while( true ) {
      if (puVar13 == (undefined8 *)0x0) {
        lVar24 = param_1[3];
        if (lVar24 != 0) {
          pauVar21 = (undefined1 (*) [16])*param_1;
          auVar3 = *pauVar21;
          uVar14 = ~(uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
          pauVar15 = pauVar21 + 1;
          do {
            if ((short)uVar14 == 0) {
              do {
                auVar3 = *pauVar15;
                pauVar21 = pauVar21 + -0xd8;
                pauVar15 = pauVar15 + 1;
                uVar14 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
              } while (uVar14 == 0);
            }
            uVar19 = 0;
            for (uVar20 = uVar14; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
              uVar19 = uVar19 + 1;
            }
            lVar8 = (ulonglong)uVar19 * -0xd8;
            uStack_17c = 0;
            puStack_238 = (undefined8 *)0x8000000000000001;
            puStack_220 = (undefined8 *)0x8000000000000001;
            puStack_208 = (undefined8 *)0x8000000000000000;
            auStack_1c0[0] = 3;
            uStack_1f0 = 0x8000000000000004;
            if (*(char *)((longlong)pauVar21 + lVar8 + -4) == '\x02') {
              *(undefined1 *)((longlong)pauVar21 + lVar8 + -4) = 0;
            }
            pdb_14270cd30((longlong)pauVar21 + lVar8 + -0xc0,&puStack_238);
            pdb_14270d410((longlong)pauVar21 + lVar8 + -0x48,auStack_1c0);
            pdb_14270ca70((longlong)pauVar21 + lVar8 + -0x78,&uStack_1f0);
            if (puStack_238 < (undefined8 *)0x8000000000000002) {
              if ((-0x7fffffffffffffff < (longlong)puStack_238) &&
                 (puStack_238 != (undefined8 *)0x0)) {
                pub_1406abac0(pbStack_230,(ulonglong)puStack_238,1);
              }
              if ((-0x7ffffffffffffffe < (longlong)puStack_208) &&
                 (puStack_208 != (undefined8 *)0x0)) {
                pub_1406abac0(pbStack_200,(ulonglong)puStack_208,1);
              }
              if ((-0x7fffffffffffffff < (longlong)puStack_220) &&
                 (puStack_220 != (undefined8 *)0x0)) {
                pub_1406abac0(pbStack_218,(ulonglong)puStack_220,1);
              }
            }
            if ((-0x7ffffffffffffffa < (longlong)uStack_1f0) && (uStack_1f0 != 0)) {
              pub_1406abac0(pbStack_1e8,uStack_1f0,1);
            }
            uVar14 = uVar14 - 1 & uVar14;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
        return;
      }
      if ((short)uVar14 == 0) {
        do {
          auVar3 = *pauVar15;
          pauVar21 = pauVar21 + -0xd8;
          pauVar15 = pauVar15 + 1;
          uVar14 = (ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
        } while (uVar14 == 0);
      }
      uVar19 = 0;
      for (uVar20 = uVar14; (uVar20 & 1) == 0; uVar20 = uVar20 >> 1 | 0x80000000) {
        uVar19 = uVar19 + 1;
      }
      uVar14 = uVar14 - 1 & uVar14;
      lVar24 = (ulonglong)uVar19 * -0xd8;
      lStack_58 = (longlong)pauVar21 + lVar24;
      puVar13 = (undefined8 *)((longlong)puVar13 + -1);
      puVar22 = (ulonglong *)((longlong)pauVar21 + lVar24 + -0xc0);
      pdb_140f60be0(&puStack_118,(longlong)pauVar21 + lVar24 + -0xd8);
      pdb_1426340e0(&puStack_238,param_1,&puStack_118);
      pbVar1 = pbStack_218;
      uVar6 = uStack_228;
      if (!SBORROW8(0,(longlong)puStack_238)) break;
      if (pbStack_230[-4] == 2) {
        bVar7 = *(byte *)(lStack_58 + -4);
        cVar11 = bVar7 - 2;
        if (bVar7 < 2) {
          cVar11 = '\x02';
        }
        if (cVar11 == '\0') {
          bVar7 = 2;
        }
        else if (cVar11 == '\x01') {
          bVar7 = 3;
        }
        else {
          bVar7 = bVar7 & 1;
        }
        pbStack_230[-4] = bVar7;
      }
      pbVar1 = pbStack_230 + -0x78;
      pbVar25 = pbStack_230 + -0x48;
      puStack_a0 = puVar13;
      pdb_14270cd30(pbStack_230 + -0xc0,puVar22);
      lVar24 = lStack_58;
      pdb_14270d410(pbVar25,lStack_58 + -0x48);
      pdb_14270ca70(pbVar1,lVar24 + -0x78);
      puVar13 = puStack_a0;
    }
    pbStack_c8 = pbStack_230;
    bVar7 = *(byte *)(lStack_58 + -4);
    cVar11 = bVar7 - 2;
    if (bVar7 < 2) {
      cVar11 = '\x02';
    }
    puStack_a8 = puStack_238;
    if (cVar11 == '\0') {
      bVar7 = 2;
    }
    else if (cVar11 == '\x01') {
      bVar7 = 3;
    }
    else {
      bVar7 = bVar7 & 1;
    }
    puStack_a0 = puStack_220;
    uVar9 = *puVar22;
    lVar24 = uVar9 + 0x7ffffffffffffffe;
    if (uVar9 < 0x8000000000000002) {
      lVar24 = 2;
    }
    if (lVar24 == 0) {
      puStack_238 = (undefined8 *)0x8000000000000002;
    }
    else if (lVar24 == 1) {
      puStack_238 = (undefined8 *)0x8000000000000003;
    }
    else {
      uVar18 = uVar9 ^ 0x8000000000000000;
      if (-1 < (longlong)uVar9) {
        uVar18 = 2;
      }
      puVar10 = (undefined8 *)0x8000000000000000;
      if (uVar18 != 0) {
        if (uVar18 == 1) {
          puVar10 = (undefined8 *)0x8000000000000001;
        }
        else {
          pdb_140f60be0(&puStack_78,puVar22);
          puVar10 = puStack_78;
        }
      }
      puStack_78 = puVar10;
      uVar9 = *(ulonglong *)(lStack_58 + -0x90);
      lVar24 = uVar9 + 0x7fffffffffffffff;
      if (uVar9 < 0x8000000000000001) {
        lVar24 = 2;
      }
      if (lVar24 == 0) {
        puStack_60 = (undefined8 *)0x8000000000000001;
      }
      else if (lVar24 == 1) {
        puStack_60 = (undefined8 *)0x8000000000000002;
      }
      else {
        puVar10 = (undefined8 *)0x8000000000000000;
        if (!SBORROW8(0,uVar9)) {
          pdb_140f60be0(&puStack_238,lStack_58 + -0x90);
          puVar10 = puStack_238;
        }
        pbStack_c0 = pbStack_230;
        uStack_240 = uStack_228;
        puStack_60 = puVar10;
      }
      uVar9 = *(ulonglong *)(lStack_58 + -0xa8) ^ 0x8000000000000000;
      if (-1 < (longlong)*(ulonglong *)(lStack_58 + -0xa8)) {
        uVar9 = 2;
      }
      puVar10 = (undefined8 *)0x8000000000000000;
      if (uVar9 != 0) {
        if (uVar9 == 1) {
          puVar10 = (undefined8 *)0x8000000000000001;
        }
        else {
          pdb_140f60be0(&puStack_238,lStack_58 + -0xa8);
          puVar10 = puStack_238;
        }
      }
      puStack_238 = puVar10;
      uStack_210 = uStack_228;
      puStack_220 = puStack_238;
      uStack_108 = uStack_68;
      pbStack_110 = (byte *)CONCAT44(uStack_6c,uStack_70);
      puStack_118 = puStack_78;
      uStack_f0 = uStack_228;
      puStack_100 = puStack_238;
      pbStack_f8 = pbStack_230;
      puStack_238 = puStack_78;
      uStack_228 = uStack_68;
      pbStack_218 = pbStack_230;
      puStack_208 = puStack_60;
      pbStack_200 = pbStack_c0;
      uStack_1f8 = uStack_240;
      pbStack_230 = pbStack_110;
    }
    uVar19 = *(uint *)(lStack_58 + -0x48);
    iVar12 = uVar19 - 4;
    if (uVar19 < 4) {
      iVar12 = 2;
    }
    if (iVar12 == 0) {
      uVar20 = 4;
    }
    else if (iVar12 == 1) {
      uVar20 = 5;
    }
    else {
      uVar20 = 3;
      if (uVar19 != 3) {
        if (uVar19 == 2) {
          uStack_80 = *(undefined4 *)(lStack_58 + -0x3c);
          puStack_88 = *(undefined8 **)(lStack_58 + -0x44);
          iStack_b8 = *(int *)(lStack_58 + -0x38);
          if (iStack_b8 != 2) goto LAB_1426359da;
LAB_142635a83:
          uStack_90 = *(undefined4 *)(lStack_58 + -0x2c);
          uStack_98 = *(undefined8 *)(lStack_58 + -0x34);
          iStack_b4 = *(int *)(lStack_58 + -0x28);
          if (iStack_b4 != 2) goto LAB_142635aa5;
LAB_1426359e8:
          uStack_140 = *(undefined4 *)(lStack_58 + -0x1c);
          puStack_148 = *(undefined8 **)(lStack_58 + -0x24);
          iStack_b0 = *(int *)(lStack_58 + -0x18);
          uStack_158 = uStack_98;
          uStack_150 = uStack_90;
          puStack_168 = puStack_88;
          uStack_160 = uStack_80;
        }
        else {
          iStack_b8 = *(int *)(lStack_58 + -0x38);
          if (iStack_b8 == 2) goto LAB_142635a83;
LAB_1426359da:
          iStack_b4 = *(int *)(lStack_58 + -0x28);
          if (iStack_b4 == 2) goto LAB_1426359e8;
LAB_142635aa5:
          iStack_b0 = *(int *)(lStack_58 + -0x18);
          uStack_158 = uStack_98;
          uStack_150 = uStack_90;
          puStack_168 = puStack_88;
          uStack_160 = uStack_80;
          puStack_148 = puStack_78;
          uStack_140 = uStack_70;
        }
        if (iStack_b0 == 2) {
          pbStack_110 = (byte *)CONCAT44(pbStack_110._4_4_,*(undefined4 *)(lStack_58 + -0xc));
          puStack_118 = *(undefined8 **)(lStack_58 + -0x14);
        }
        bStack_49 = *(byte *)(lStack_58 + -7);
        cVar11 = bStack_49 - 2;
        if (bStack_49 < 2) {
          cVar11 = '\x02';
        }
        puStack_60 = (undefined8 *)CONCAT71(puStack_60._1_7_,*(undefined1 *)(lStack_58 + -8));
        if (cVar11 == '\0') {
          bStack_49 = 2;
        }
        else if (cVar11 == '\x01') {
          bStack_49 = 3;
        }
        else {
          bStack_49 = bStack_49 & 1;
        }
        puStack_138 = puStack_118;
        uStack_130 = pbStack_110._0_4_;
        uVar20 = uVar19;
        uStack_98 = uStack_158;
        uStack_90 = uStack_150;
        puStack_88 = puStack_168;
        uStack_80 = uStack_160;
        puStack_78 = puStack_148;
        uStack_70 = uStack_140;
      }
    }
    uVar9 = *(ulonglong *)(lStack_58 + -0x78);
    lVar24 = uVar9 + 0x7ffffffffffffffb;
    if (uVar9 < 0x8000000000000005) {
      lVar24 = 2;
    }
    puVar10 = (undefined8 *)0x8000000000000005;
    if (lVar24 != 0) {
      if (lVar24 == 1) {
        puVar10 = (undefined8 *)0x8000000000000006;
      }
      else {
        puVar10 = (undefined8 *)0x8000000000000004;
        if (uVar9 != 0x8000000000000004) {
          lVar24 = uVar9 + 0x7ffffffffffffffe;
          if (uVar9 < 0x8000000000000002) {
            lVar24 = 2;
          }
          puVar10 = (undefined8 *)0x8000000000000002;
          if (lVar24 != 0) {
            if (lVar24 == 1) {
              puVar10 = (undefined8 *)0x8000000000000003;
            }
            else {
              uStack_4a = *(undefined1 *)(lStack_58 + -0x50);
              iStack_ac = *(int *)(lStack_58 + -0x60);
              if (iStack_ac == 2) {
                uStack_70 = *(undefined4 *)(lStack_58 + -0x54);
                puStack_78 = *(undefined8 **)(lStack_58 + -0x5c);
              }
              uVar18 = uVar9 ^ 0x8000000000000000;
              if (-1 < (longlong)uVar9) {
                uVar18 = 2;
              }
              puVar10 = (undefined8 *)0x8000000000000000;
              if (uVar18 != 0) {
                if (uVar18 == 1) {
                  puVar10 = (undefined8 *)0x8000000000000001;
                }
                else {
                  pdb_140f60be0(&puStack_118,lStack_58 + -0x78);
                  puVar10 = puStack_118;
                }
              }
              uStack_170 = uStack_70;
              puStack_178 = puStack_78;
              pbStack_268 = pbStack_110;
              uStack_260 = uStack_108;
            }
          }
        }
      }
    }
    pauVar4 = (undefined1 (*) [16])*puStack_a0;
    uVar9 = puStack_a0[1];
    uVar18 = uVar9 & (ulonglong)pbVar1;
    auVar3 = *(undefined1 (*) [16])(*pauVar4 + uVar18);
    uVar5 = (ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
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
            (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar3[0xf] >> 7) << 0xf;
    uVar19 = (uint)uVar5;
    if (uVar5 == 0) {
      lVar24 = 0x10;
      do {
        uVar18 = uVar18 + lVar24 & uVar9;
        auVar3 = *(undefined1 (*) [16])(*pauVar4 + uVar18);
        lVar24 = lVar24 + 0x10;
        uVar19 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
      } while (uVar19 == 0);
    }
    uVar17 = 0;
    for (; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
      uVar17 = uVar17 + 1;
    }
    uVar18 = uVar17 + uVar18 & uVar9;
    bVar16 = (*pauVar4)[uVar18];
    if (-1 < (char)bVar16) {
      auVar3 = *pauVar4;
      uVar19 = 0;
      for (uVar17 = (uint)(ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) |
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
                                  (ushort)(byte)(auVar3[0xf] >> 7) << 0xf); (uVar17 & 1) == 0;
          uVar17 = uVar17 >> 1 | 0x80000000) {
        uVar19 = uVar19 + 1;
      }
      uVar18 = (ulonglong)uVar19;
      bVar16 = (*pauVar4)[uVar18];
    }
    bVar23 = (byte)((ulonglong)pbVar1 >> 0x39);
    (*pauVar4)[uVar18] = bVar23;
    pauVar4[1][uVar18 - 0x10 & uVar9] = bVar23;
    puStack_a0[2] = puStack_a0[2] - (ulonglong)(bVar16 & 1);
    lVar24 = uVar18 * -0xd8;
    *(undefined8 **)((longlong)pauVar4 + lVar24 + -0xd8) = puStack_a8;
    *(byte **)((longlong)pauVar4 + lVar24 + -0xd0) = pbStack_c8;
    *(undefined8 *)((longlong)pauVar4 + lVar24 + -200) = uVar6;
    puVar2 = (undefined8 *)((longlong)pauVar4 + lVar24 + -0xc0);
    *puVar2 = puStack_238;
    puVar2[1] = pbStack_230;
    puVar2 = (undefined8 *)((longlong)pauVar4 + lVar24 + -0xb0);
    *puVar2 = uStack_228;
    puVar2[1] = puStack_220;
    puVar2 = (undefined8 *)((longlong)pauVar4 + lVar24 + -0xa0);
    *puVar2 = pbStack_218;
    puVar2[1] = uStack_210;
    puVar2 = (undefined8 *)((longlong)pauVar4 + lVar24 + -0x90);
    *puVar2 = puStack_208;
    puVar2[1] = pbStack_200;
    *(undefined8 *)((longlong)pauVar4 + lVar24 + -0x80) = uStack_1f8;
    *(undefined8 **)((longlong)pauVar4 + lVar24 + -0x78) = puVar10;
    auVar3._8_8_ = uStack_260;
    auVar3._0_8_ = pbStack_268;
    *(undefined1 (*) [16])((longlong)pauVar4 + lVar24 + -0x70) = auVar3;
    *(int *)((longlong)pauVar4 + lVar24 + -0x60) = iStack_ac;
    *(undefined8 **)((longlong)pauVar4 + lVar24 + -0x5c) = puStack_178;
    *(undefined4 *)((longlong)pauVar4 + lVar24 + -0x54) = uStack_170;
    *(undefined1 *)((longlong)pauVar4 + lVar24 + -0x50) = uStack_4a;
    *(uint *)((longlong)pauVar4 + lVar24 + -0x48) = uVar20;
    *(undefined8 **)((longlong)pauVar4 + lVar24 + -0x44) = puStack_168;
    *(undefined4 *)((longlong)pauVar4 + lVar24 + -0x3c) = uStack_160;
    *(int *)((longlong)pauVar4 + lVar24 + -0x38) = iStack_b8;
    *(undefined4 *)((longlong)pauVar4 + lVar24 + -0x2c) = uStack_150;
    *(undefined8 *)((longlong)pauVar4 + lVar24 + -0x34) = uStack_158;
    *(int *)((longlong)pauVar4 + lVar24 + -0x28) = iStack_b4;
    *(undefined4 *)((longlong)pauVar4 + lVar24 + -0x1c) = uStack_140;
    *(undefined8 **)((longlong)pauVar4 + lVar24 + -0x24) = puStack_148;
    *(int *)((longlong)pauVar4 + lVar24 + -0x18) = iStack_b0;
    *(undefined4 *)((longlong)pauVar4 + lVar24 + -0xc) = uStack_130;
    *(undefined8 **)((longlong)pauVar4 + lVar24 + -0x14) = puStack_138;
    *(undefined1 *)((longlong)pauVar4 + lVar24 + -8) = puStack_60._0_1_;
    *(byte *)((longlong)pauVar4 + lVar24 + -7) = bStack_49;
    *(byte *)((longlong)pauVar4 + lVar24 + -4) = bVar7;
    puStack_a0[3] = puStack_a0[3] + 1;
    uStack_70 = uStack_160;
    puStack_78 = puStack_168;
    uStack_80 = uStack_140;
    puStack_88 = puStack_148;
    uStack_90 = uStack_150;
    uStack_98 = uStack_158;
    uStack_d8 = uStack_1f8;
    pbStack_e0 = pbStack_200;
    puStack_e8 = puStack_208;
    uStack_f0 = uStack_210;
    pbStack_f8 = pbStack_218;
    puStack_100 = puStack_220;
    uStack_108 = uStack_228;
    pbStack_110 = pbStack_230;
    puStack_118 = puStack_238;
    uStack_120 = uStack_130;
    puStack_128 = puStack_138;
  } while( true );
}

