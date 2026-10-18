// VA 0x141a76130, PDB extent 5876 bytes
// country_core::render::sparse_instance_buffer::SparseInstanceBuffer::gpu_flush<country_core::geometry::instanced_wall::BrickTransformSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000141a76a55) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::sparse_instance_buffer::SparseInstanceBuffer::gpu_flush<country_core::geometry::instanced_wall::BrickTransformSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
   Extent: 5876 */

void pdb_141a76130(byte *******param_1,ulonglong param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte ******ppppppbVar5;
  code *pcVar6;
  int iVar7;
  byte *****pppppbVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte *******pppppppbVar13;
  undefined8 uVar14;
  byte *******pppppppbVar15;
  longlong *plVar16;
  undefined *puVar17;
  byte *******pppppppbVar18;
  byte *******pppppppbVar19;
  longlong lVar20;
  byte ******ppppppbVar21;
  byte *****pppppbVar22;
  uint uVar23;
  undefined *puVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined *puVar27;
  byte ******ppppppbVar28;
  undefined8 uVar29;
  byte *******pppppppbVar30;
  byte ******ppppppbStack_190;
  byte *******pppppppbStack_188;
  byte *******pppppppbStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  byte *******pppppppbStack_158;
  ulonglong uStack_150;
  byte *******pppppppbStack_148;
  byte *******pppppppbStack_140;
  byte *******pppppppbStack_138;
  code *pcStack_130;
  byte *******pppppppbStack_128;
  byte *******pppppppbStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  byte *******pppppppbStack_f8;
  byte *******pppppppbStack_f0;
  byte *******pppppppbStack_e8;
  code *pcStack_e0;
  byte *******pppppppbStack_d8;
  byte *******pppppppbStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  byte *******pppppppbStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  byte *******pppppppbStack_88;
  byte *******pppppppbStack_78;
  byte *******pppppppbStack_70;
  byte *******pppppppbStack_68;
  undefined1 uStack_59;
  byte *******pppppppbStack_58;
  undefined1 uStack_4b;
  char cStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_150 = param_2;
  pdb_141a75940();
  cStack_4a = pdb_140e94b40();
  if (cStack_4a == '\0') {
LAB_141a76360:
    ppppppbVar21 = (byte ******)((longlong)param_1[0xf] << 0xd);
    pppppppbStack_68 = param_1;
    ppppppbStack_190 = ppppppbVar21;
    if (param_1[10] < ppppppbVar21) {
      uVar14 = pdb_140e1d1f0((longlong)param_1[0xf] << 0x13,0x12,1);
      uVar14 = pdb_140e1d260(uVar14,4);
      pdb_1415d1d50(&pppppppbStack_f8,uStack_150,&UNK_143382260,0xf,uVar14,0);
      pppppppbVar15 = pppppppbStack_f0;
      if (pppppppbStack_f8 != (byte *******)0xb) {
        uStack_108 = (undefined4)uStack_b8;
        uStack_104 = uStack_b8._4_4_;
        uStack_100 = (undefined4)uStack_b0;
        uStack_fc = uStack_b0._4_4_;
        uStack_118 = (undefined4)uStack_c8;
        uStack_114 = uStack_c8._4_4_;
        uStack_110 = (undefined4)uStack_c0;
        uStack_10c = uStack_c0._4_4_;
        pppppppbStack_128 = pppppppbStack_d8;
        pppppppbStack_120 = pppppppbStack_d0;
        pppppppbStack_138 = pppppppbStack_e8;
        pcStack_130 = pcStack_e0;
        pppppppbStack_148 = pppppppbStack_f8;
        pppppppbStack_140 = pppppppbStack_f0;
        pppppppbStack_f8 = (byte *******)&UNK_143382270;
        pppppppbStack_f0 = (byte *******)pdb_1402ed400;
        pcStack_e0 = pdb_140e18fa0;
        pppppppbVar15 = (byte *******)&uStack_98;
        pppppppbStack_e8 = (byte *******)&pppppppbStack_148;
        pdb_140f60760(pppppppbVar15,&UNK_1433822c9,&pppppppbStack_f8);
        uStack_168 = (undefined4)uStack_98;
        uStack_164 = uStack_98._4_4_;
        uStack_160 = (undefined4)uStack_90;
        uStack_15c = uStack_90._4_4_;
        pppppppbStack_158 = pppppppbStack_88;
        if (_DAT_143ca4288 != 0) goto LAB_141a77042;
        goto LAB_141a765b9;
      }
      uStack_98 = pppppppbStack_f0;
      if (2 < *_DAT_143ca8e90) {
        pppppppbStack_138 = param_1 + 10;
        pppppppbStack_148 = (byte *******)&UNK_143382270;
        pppppppbStack_140 = (byte *******)pdb_1402ed400;
        pcStack_130 = pdb_140f72a40;
        pppppppbStack_128 = &ppppppbStack_190;
        pppppppbStack_120 = (byte *******)pdb_140f72a40;
        pppppppbStack_f8 = (byte *******)0x0;
        pppppppbStack_f0 = (byte *******)&UNK_14338229d;
        pppppppbStack_e8 = (byte *******)0x2c;
        pcStack_e0 = (code *)0x0;
        pppppppbStack_d8 = (byte *******)&UNK_143382148;
        pppppppbStack_d0 = (byte *******)0x38;
        uStack_c8 = 3;
        uStack_c0 = &UNK_14338229d;
        uStack_b8 = 0x2c;
        uStack_b0 = 0x16200000001;
        puStack_a8 = &UNK_143382280;
        uStack_4b = 1;
        pppppppbStack_a0 = (byte *******)&pppppppbStack_148;
        pdb_140f332f0(&uStack_59,&pppppppbStack_f8);
      }
      pppppppbStack_58 = pppppppbVar15;
      pdb_140989660(param_1);
      *pppppppbStack_68 = (byte ******)pppppppbStack_58;
      pppppppbStack_68[10] = ppppppbVar21;
      ppppppbVar21 = pppppppbStack_68[8];
      if (pppppppbStack_68[4] < pppppppbStack_68[8]) {
        ppppppbVar21 = pppppppbStack_68[4];
      }
      param_1 = pppppppbStack_68;
      if (ppppppbVar21 != (byte ******)0x0) {
        ppppppbVar5 = pppppppbStack_68[7];
        ppppppbVar28 = pppppppbStack_68[3];
        uVar12 = (ulonglong)((uint)ppppppbVar21 & 7);
        if (ppppppbVar21 < (byte ******)0x8) {
          uVar26 = 0;
        }
        else {
          uVar26 = 0;
          do {
            LOCK();
            ppppppbVar5[uVar26] =
                 (byte *****)((ulonglong)ppppppbVar5[uVar26] | (ulonglong)ppppppbVar28[uVar26]);
            UNLOCK();
            LOCK();
            ppppppbVar5[uVar26 + 1] =
                 (byte *****)
                 ((ulonglong)ppppppbVar5[uVar26 + 1] | (ulonglong)ppppppbVar28[uVar26 + 1]);
            UNLOCK();
            LOCK();
            ppppppbVar5[uVar26 + 2] =
                 (byte *****)
                 ((ulonglong)ppppppbVar5[uVar26 + 2] | (ulonglong)ppppppbVar28[uVar26 + 2]);
            UNLOCK();
            LOCK();
            ppppppbVar5[uVar26 + 3] =
                 (byte *****)
                 ((ulonglong)ppppppbVar5[uVar26 + 3] | (ulonglong)ppppppbVar28[uVar26 + 3]);
            UNLOCK();
            LOCK();
            ppppppbVar5[uVar26 + 4] =
                 (byte *****)
                 ((ulonglong)ppppppbVar5[uVar26 + 4] | (ulonglong)ppppppbVar28[uVar26 + 4]);
            UNLOCK();
            LOCK();
            ppppppbVar5[uVar26 + 5] =
                 (byte *****)
                 ((ulonglong)ppppppbVar5[uVar26 + 5] | (ulonglong)ppppppbVar28[uVar26 + 5]);
            UNLOCK();
            LOCK();
            ppppppbVar5[uVar26 + 6] =
                 (byte *****)
                 ((ulonglong)ppppppbVar5[uVar26 + 6] | (ulonglong)ppppppbVar28[uVar26 + 6]);
            UNLOCK();
            LOCK();
            ppppppbVar5[uVar26 + 7] =
                 (byte *****)
                 ((ulonglong)ppppppbVar5[uVar26 + 7] | (ulonglong)ppppppbVar28[uVar26 + 7]);
            UNLOCK();
            uVar26 = uVar26 + 8;
          } while (((ulonglong)ppppppbVar21 & 0xfffffffffffffff8) != uVar26);
          if (uVar12 == 0) goto LAB_141a76911;
        }
        uVar25 = 0;
        do {
          LOCK();
          ppppppbVar5[uVar26 + uVar25] =
               (byte *****)
               ((ulonglong)ppppppbVar5[uVar26 + uVar25] | (ulonglong)ppppppbVar28[uVar26 + uVar25]);
          UNLOCK();
          uVar25 = uVar25 + 1;
        } while (uVar12 != uVar25);
      }
    }
LAB_141a76911:
    ppppppbVar5 = param_1[10];
    pppppppbStack_148 = (byte *******)0x0;
    pppppppbStack_140 = (byte *******)0x8;
    pppppppbStack_138 = (byte *******)0x0;
    ppppppbVar28 = param_1[7];
    ppppppbVar21 = ppppppbVar28 + (longlong)param_1[8];
    param_1 = (byte *******)0x0;
    uVar26 = 0;
    uVar12 = 0;
    while (pppppppbVar15 = pppppppbStack_138, ppppppbVar28 != ppppppbVar21) {
      lVar11 = (longlong)param_1 << 6;
      param_1 = (byte *******)((longlong)param_1 + 1);
      while( true ) {
        pppppbVar22 = *ppppppbVar28;
        *ppppppbVar28 = (byte *****)0x0;
        ppppppbVar28 = ppppppbVar28 + 1;
        if (pppppbVar22 != (byte *****)0x0) break;
        lVar11 = lVar11 + 0x40;
        param_1 = (byte *******)((longlong)param_1 + 1);
        if (ppppppbVar28 == ppppppbVar21) goto LAB_141a76a5a;
      }
      do {
        iVar7 = 0;
        for (pppppbVar8 = pppppbVar22; ((ulonglong)pppppbVar8 & 1) == 0;
            pppppbVar8 = (byte *****)((ulonglong)pppppbVar8 >> 1 | 0x8000000000000000)) {
          iVar7 = iVar7 + 1;
        }
        pppppbVar22 = (byte *****)((longlong)pppppbVar22 - 1U & (ulonglong)pppppbVar22);
        uVar10 = iVar7 + (int)lVar11;
        if (uVar10 < (uint)((ulonglong)ppppppbVar5 >> 5)) {
          uVar23 = (uint)uVar26;
          uVar25 = uVar12;
          if ((uVar23 != uVar10) && (uVar25 = (ulonglong)uVar10, (uint)uVar12 < uVar23)) {
            if (pppppppbStack_138 == pppppppbStack_148) {
              uStack_49 = 1;
              pppppppbStack_58 = (byte *******)CONCAT44(pppppppbStack_58._4_4_,uVar23);
              pppppppbStack_70 = (byte *******)CONCAT44(pppppppbStack_70._4_4_,(uint)uVar12);
              pppppppbStack_78 = pppppppbStack_138;
              pdb_142d8afd0(&pppppppbStack_148);
              uVar12 = (ulonglong)pppppppbStack_70 & 0xffffffff;
              uVar26 = (ulonglong)pppppppbStack_58 & 0xffffffff;
              pppppppbStack_138 = pppppppbStack_78;
            }
            pppppppbStack_140[(longlong)pppppppbStack_138 * 2] = (byte ******)(uVar12 << 5);
            pppppppbStack_140[(longlong)pppppppbStack_138 * 2 + 1] = (byte ******)(uVar26 << 5);
            pppppppbStack_138 = (byte *******)((longlong)pppppppbStack_138 + 1);
            uVar25 = (ulonglong)uVar10;
          }
          uVar26 = (ulonglong)(uVar10 + 1);
          uVar12 = uVar25;
        }
      } while (pppppbVar22 != (byte *****)0x0);
    }
LAB_141a76a5a:
    if ((uint)uVar12 < (uint)uVar26) {
      if (pppppppbStack_138 == pppppppbStack_148) {
        uStack_49 = 1;
        pdb_142d8afd0(&pppppppbStack_148);
      }
      pppppppbStack_140[(longlong)pppppppbVar15 * 2] = (byte ******)(uVar12 << 5);
      pppppppbStack_140[(longlong)pppppppbVar15 * 2 + 1] = (byte ******)(uVar26 << 5);
      pppppppbStack_138 = (byte *******)((longlong)pppppppbVar15 + 1);
    }
    uStack_49 = 1;
    cVar9 = pdb_140e94b40();
    pppppppbVar13 = pppppppbStack_68;
    if (cVar9 != '\0') {
      puVar24 = &UNK_1433823d8;
      puVar17 = &UNK_1433823a0;
      do {
        bVar2 = puVar24[-1];
        uVar10 = (uint)(char)bVar2;
        if ((char)bVar2 < '\0') {
          bVar3 = puVar24[-2];
          if ((char)bVar3 < -0x40) {
            bVar4 = puVar24[-3];
            if ((char)bVar4 < -0x40) {
              pbVar1 = puVar24 + -4;
              puVar24 = puVar24 + -4;
              uVar10 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
            }
            else {
              puVar24 = puVar24 + -3;
              uVar10 = bVar4 & 0xf;
            }
            uVar10 = bVar3 & 0x3f | uVar10 << 6;
          }
          else {
            puVar24 = puVar24 + -2;
            uVar10 = bVar3 & 0x1f;
          }
          uVar10 = (uint)(bVar2 & 0x3f) | uVar10 << 6;
          if (uVar10 != 0x5c) goto LAB_141a76b54;
LAB_141a76b66:
          if ((undefined *)0x38 < puVar24 + -0x14338239f) goto LAB_141a77181;
          lVar11 = 0x38 - (longlong)(puVar24 + -0x14338239f);
          puVar17 = puVar24 + 1;
          goto LAB_141a76b89;
        }
        puVar24 = puVar24 + -1;
        if (uVar10 == 0x5c) goto LAB_141a76b66;
LAB_141a76b54:
        if (uVar10 == 0x2f) goto LAB_141a76b66;
      } while (puVar24 != &UNK_1433823a0);
      lVar11 = 0x38;
LAB_141a76b89:
      uStack_49 = 1;
      param_1 = (byte *******)&pppppppbStack_f8;
      uVar14 = pdb_140f67ab0(pppppppbStack_138,param_1,0x14);
      if ((longlong)param_1 < 0) {
        uVar29 = 0;
LAB_141a76baf:
        uStack_49 = 1;
        pdb_142dc7e2a(uVar29,param_1);
        goto LAB_141a771df;
      }
      pppppppbStack_70 = param_1;
      if (param_1 == (byte *******)0x0) {
        pppppppbStack_58 = (byte *******)0x1;
      }
      else {
        pdb_14007ee60();
        uVar29 = 1;
        pppppppbVar15 = (byte *******)pub_1406abab0((ulonglong)param_1,1);
        if (pppppppbVar15 == (byte *******)0x0) goto LAB_141a76baf;
        pppppppbStack_58 = pppppppbVar15;
        pub_142e32760(pppppppbVar15,uVar14,param_1);
      }
      pppppppbVar13 = pppppppbStack_68;
      pppppppbVar15 = (byte *******)pdb_140e97000();
      if ((*(byte *)(pppppppbVar15 + 0xd) != 1) &&
         (pppppppbVar15 = (byte *******)pdb_142d8ec20(pppppppbVar15,0),
         pppppppbVar15 == (byte *******)0x0)) {
        pdb_142dc7890(&UNK_143326860);
        goto LAB_141a771df;
      }
      pppppppbVar18 = pppppppbStack_70;
      if (*pppppppbVar15 != (byte ******)0x0) {
        pdb_142dc8090(&UNK_143326a50);
        goto LAB_141a771df;
      }
      *pppppppbVar15 = (byte ******)0xffffffffffffffff;
      pppppppbStack_78 = pppppppbVar15;
      uStack_170 = pdb_140e94f10(pppppppbVar15 + 1,&UNK_1433823d8,0x17,puVar17,lVar11,
                                 pppppppbStack_58,pppppppbStack_70);
      *pppppppbStack_78 = (byte ******)((longlong)*pppppppbStack_78 + 1);
      if (pppppppbVar18 != (byte *******)0x0) {
        pub_1406abac0((byte *)pppppppbStack_58,(ulonglong)pppppppbVar18,1);
      }
    }
    pppppppbStack_78 = (byte *******)CONCAT71(pppppppbStack_78._1_7_,cVar9);
    pppppppbStack_f8 = (byte *******)0x0;
    pppppppbStack_f0 = (byte *******)0x8;
    pppppppbStack_e8 = (byte *******)0x0;
    pppppppbStack_188 = pppppppbStack_148;
    pppppppbStack_70 = pppppppbStack_140 + (longlong)pppppppbStack_138 * 2;
    pppppppbVar15 = (byte *******)0xffffffffffffffff;
    pppppppbVar19 = (byte *******)0x0;
    pppppppbStack_180 = pppppppbStack_140;
    pppppppbVar18 = pppppppbStack_140;
    while (pppppppbVar18 != pppppppbStack_70) {
      pppppppbStack_58 = pppppppbVar18 + 2;
      param_1 = (byte *******)pppppppbVar18[1];
      pppppppbVar30 = (byte *******)*pppppppbVar18;
      while (pppppppbVar18 = pppppppbStack_58, pppppppbVar13 = pppppppbStack_68,
            pppppppbVar30 < param_1) {
        pppppppbVar13 = (byte *******)(((ulonglong)pppppppbVar30 & 0xffffffffffffe000) + 0x2000);
        if (param_1 <= pppppppbVar13) {
          pppppppbVar13 = param_1;
        }
        if ((byte *******)((ulonglong)pppppppbVar30 >> 0xd) != pppppppbVar15) {
          if (pppppppbVar19 != (byte *******)0x0) {
            if (pppppppbStack_68[6] <= pppppppbVar15) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pppppppbVar15,pppppppbStack_68[6],&UNK_1433821b8);
            }
            if (*(int *)(pppppppbStack_68[5] + (longlong)pppppppbVar15 * 3 + 2) != 0) {
              pdb_142dc8110(&UNK_1433821d0,0x11,&UNK_1433821e8);
              goto LAB_141a771df;
            }
            ppppppbVar21 = pppppppbStack_68[5] + (longlong)pppppppbVar15 * 3;
            pdb_141b0d680(pppppppbStack_68,uStack_150,*ppppppbVar21,ppppppbVar21[1],pppppppbStack_f0
                          ,pppppppbStack_e8,(longlong)pppppppbVar15 << 0x13);
            pppppppbStack_e8 = (byte *******)0x0;
          }
          pppppppbVar19 = (byte *******)0x0;
          pppppppbVar15 = (byte *******)((ulonglong)pppppppbVar30 >> 0xd);
        }
        if (pppppppbVar19 == pppppppbStack_f8) {
          pdb_142d8afd0(&pppppppbStack_f8);
        }
        pppppppbStack_f0[(longlong)pppppppbVar19 * 2] =
             (byte ******)(ulonglong)((uint)pppppppbVar30 & 0x1fff);
        pppppppbStack_f0[(longlong)pppppppbVar19 * 2 + 1] =
             (byte ******)
             ((longlong)pppppppbVar13 - ((ulonglong)pppppppbVar30 & 0xffffffffffffe000));
        pppppppbVar19 = (byte *******)((longlong)pppppppbVar19 + 1);
        pppppppbVar30 = pppppppbVar13;
        pppppppbStack_e8 = pppppppbVar19;
      }
    }
    if (pppppppbStack_188 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_180,(longlong)pppppppbStack_188 << 4,8);
      pppppppbVar19 = pppppppbStack_e8;
    }
    if (pppppppbVar19 != (byte *******)0x0) {
      if (pppppppbVar13[6] <= pppppppbVar15) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pppppppbVar15,pppppppbVar13[6],&UNK_1433821b8);
      }
      if (*(int *)(pppppppbVar13[5] + (longlong)pppppppbVar15 * 3 + 2) != 0) {
        pdb_142dc8110(&UNK_1433821d0,0x11,&UNK_1433821e8);
        goto LAB_141a771df;
      }
      ppppppbVar21 = pppppppbVar13[5] + (longlong)pppppppbVar15 * 3;
      pppppppbVar15 = (byte *******)((longlong)pppppppbVar15 << 0x13);
      pdb_141b0d680(pppppppbVar13,uStack_150,*ppppppbVar21,ppppppbVar21[1],pppppppbStack_f0,
                    pppppppbStack_e8,pppppppbVar15);
      pppppppbStack_e8 = (byte *******)0x0;
    }
    cVar9 = (char)pppppppbStack_78;
    if (pppppppbStack_f8 != (byte *******)0x0) {
      pub_1406abac0((byte *)pppppppbStack_f0,(longlong)pppppppbStack_f8 << 4,8);
    }
    if (cVar9 != '\0') {
      uStack_49 = 0;
      pppppppbVar13 = (byte *******)pdb_140e97000();
      if (*(byte *)(pppppppbVar13 + 0xd) != 1) {
        uStack_49 = 0;
        pppppppbVar13 = (byte *******)pdb_142d8ec20(pppppppbVar13,0);
        if (pppppppbVar13 == (byte *******)0x0) {
          uStack_49 = 0;
          pdb_142dc7890(&UNK_143326860);
          goto LAB_141a771df;
        }
      }
      if (*pppppppbVar13 != (byte ******)0x0) {
        uStack_49 = 0;
        pdb_142dc8090(&UNK_143326a50);
        goto LAB_141a771df;
      }
      *pppppppbVar13 = (byte ******)0xffffffffffffffff;
      pppppppbStack_68 = pppppppbVar13;
      pdb_140e95370(pppppppbVar13 + 1,uStack_170);
      *pppppppbStack_68 = (byte ******)((longlong)*pppppppbStack_68 + 1);
    }
    if (cStack_4a == '\0') {
      return;
    }
    plVar16 = (longlong *)pdb_140e97000();
    if (((char)plVar16[0xd] == '\x01') ||
       (plVar16 = (longlong *)pdb_142d8ec20(plVar16,0), plVar16 != (longlong *)0x0)) {
      if (*plVar16 == 0) {
        *plVar16 = -1;
        pppppppbStack_68 = (byte *******)plVar16;
        pdb_140e95370(plVar16 + 1,uStack_178);
        *pppppppbStack_68 = (byte ******)((longlong)*pppppppbStack_68 + 1);
        return;
      }
    }
    else {
      pdb_142dc7890(&UNK_143326860);
    }
    pdb_142dc8090(&UNK_143326a50);
LAB_141a77042:
    uStack_98 = (byte *******)CONCAT71(uStack_98._1_7_,1);
    pppppppbStack_f8 = pppppppbVar15;
    pdb_142dc7060(&DAT_143ca4288,0,&pppppppbStack_f8,&UNK_1433825e8,&UNK_1433822e0);
LAB_141a765b9:
    pdb_1400f0d40(&pppppppbStack_f8,_DAT_143cb2c80);
    if ((int)pppppppbStack_f8 == 1) {
      uStack_98 = pppppppbStack_f0;
      uStack_90 = (code *)CONCAT71(uStack_90._1_7_,pppppppbStack_e8._0_1_);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_1433822f8,0x13,&uStack_98,&UNK_143382738,&UNK_1433822e0);
    }
    pppppppbStack_58 = pppppppbStack_f0;
    pppppppbStack_70 = (byte *******)CONCAT71(pppppppbStack_70._1_7_,pppppppbStack_e8._0_1_);
    pdb_14007ee60();
    pppppppbVar13 = (byte *******)pub_1406abab0(0xf,1);
    if (pppppppbVar13 != (byte *******)0x0) {
      pbVar1 = (byte *)((longlong)pppppppbVar13 + 7);
      pbVar1[0] = 0x70;
      pbVar1[1] = 0x61;
      pbVar1[2] = 0x74;
      pbVar1[3] = 0x68;
      pbVar1[4] = 0x21;
      pbVar1[5] = 0x20;
      pbVar1[6] = 0x28;
      pbVar1[7] = 0x29;
      *pppppppbVar13 = (byte ******)0x705f656c75646f6d;
      pppppppbStack_f8 = (byte *******)0xf;
      pppppppbStack_e8 = (byte *******)0xf;
      pppppppbStack_f0 = pppppppbVar13;
      pdb_142d7f1b0(&pppppppbStack_f8,0xf,0x17,1,1);
      pppppppbVar13 = pppppppbStack_158;
      uVar14 = _UNK_143382313;
      *(undefined8 *)((longlong)pppppppbStack_f0 + (longlong)pppppppbStack_e8) = _DAT_14338230b;
      *(undefined8 *)((byte *)((longlong)pppppppbStack_f0 + (longlong)pppppppbStack_e8) + 8) =
           uVar14;
      pbVar1 = (byte *)((longlong)pppppppbStack_f0 + (longlong)pppppppbStack_e8 + 0xf);
      pbVar1[0] = 0x20;
      pbVar1[1] = 0x3a;
      pbVar1[2] = 0x3a;
      pbVar1[3] = 0x20;
      pbVar1[4] = 0x57;
      pbVar1[5] = 0x61;
      pbVar1[6] = 0x72;
      pbVar1[7] = 0x6e;
      pppppppbVar18 = (byte *******)((longlong)pppppppbStack_e8 + 0x17);
      uStack_98 = pppppppbStack_f8;
      uStack_90 = (code *)pppppppbStack_f0;
      uVar14 = CONCAT44(uStack_15c,uStack_160);
      pppppppbStack_88 = pppppppbVar18;
      if ((byte *******)((longlong)pppppppbStack_f8 - (longlong)pppppppbVar18) < pppppppbStack_158)
      {
        pdb_142d7f1b0(&uStack_98,pppppppbVar18,pppppppbStack_158,1,1);
LAB_141a766b1:
        pppppppbVar18 = pppppppbStack_88;
        pub_142e32760((byte *)((longlong)uStack_90 + (longlong)pppppppbStack_88),uVar14);
      }
      else if (pppppppbStack_158 != (byte *******)0x0) goto LAB_141a766b1;
      pppppppbStack_e8 = (byte *******)((longlong)pppppppbVar13 + (longlong)pppppppbVar18);
      pppppppbStack_f8 = uStack_98;
      pppppppbStack_f0 = (byte *******)uStack_90;
      pppppppbStack_88 = pppppppbStack_e8;
      cVar9 = pdb_14192b470(pppppppbStack_58 + 1,&pppppppbStack_f8);
      if ((cVar9 == '\0') && (1 < *_DAT_143ca8e90)) {
        uStack_98 = (byte *******)&uStack_168;
        uStack_90 = pdb_140001020;
        pppppppbStack_f8 = (byte *******)0x0;
        pppppppbStack_f0 = (byte *******)&UNK_14338229d;
        pppppppbStack_e8 = (byte *******)0x2c;
        pcStack_e0 = (code *)0x0;
        pppppppbStack_d8 = (byte *******)&UNK_143382148;
        pppppppbStack_d0 = (byte *******)0x38;
        uStack_c8 = 2;
        uStack_c0 = &UNK_14338229d;
        uStack_b8 = 0x2c;
        uStack_b0 = 0x16f00000001;
        puStack_a8 = &UNK_143382322;
        pppppppbStack_a0 = pppppppbVar15;
        pdb_140f332f0(&uStack_59,&pppppppbStack_f8);
      }
      pppppppbVar15 = pppppppbStack_58;
      if ((((char)pppppppbStack_70 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) &&
         (cVar9 = pdb_142dc79e0(), cVar9 == '\0')) {
        *(byte *)((longlong)pppppppbVar15 + 1) = 1;
      }
      LOCK();
      bVar2 = *(byte *)pppppppbVar15;
      *(byte *)pppppppbVar15 = 0;
      UNLOCK();
      if (bVar2 == 2) {
        pdb_142dc6ca0();
      }
      if (CONCAT44(uStack_164,uStack_168) != 0) {
        pub_1406abac0((byte *)CONCAT44(uStack_15c,uStack_160),CONCAT44(uStack_164,uStack_168),1);
      }
      pppppppbVar15 = (byte *******)0x0;
      if ((byte *******)0x7 < pppppppbStack_148) {
        pppppppbVar15 = pppppppbStack_148 + -1;
      }
      if (pppppppbVar15 == (byte *******)0x0) {
        pppppppbVar13 = pppppppbStack_128;
        pppppppbVar18 = pppppppbStack_120;
        if (((pppppppbStack_148 < (byte *******)0x6) &&
            ((0x32UL >> ((ulonglong)pppppppbStack_148 & 0x3f) & 1) != 0)) &&
           (pppppppbStack_140 != (byte *******)0x0)) {
          pub_1406abac0((byte *)pppppppbStack_138,(ulonglong)pppppppbStack_140,1);
          pppppppbVar13 = pppppppbStack_128;
          pppppppbVar18 = pppppppbStack_120;
        }
      }
      else {
        pppppppbVar13 = pppppppbStack_140;
        pppppppbVar18 = pppppppbStack_138;
        if (pppppppbVar15 == (byte *******)0x1) {
          pdb_1404b83f0(&pppppppbStack_140);
          goto LAB_141a76911;
        }
      }
      if (pppppppbVar13 != (byte *******)0x0) {
        pub_1406abac0((byte *)pppppppbVar18,(ulonglong)pppppppbVar13,1);
      }
      goto LAB_141a76911;
    }
  }
  else {
    lVar20 = 0x50;
    lVar11 = pdb_141a7bd20(0x50);
    puVar17 = &UNK_143382758;
    if (lVar11 != 1) {
LAB_141a761ca:
      puVar24 = &UNK_1433823d8;
      puVar27 = &UNK_1433823a0;
      do {
        bVar2 = puVar24[-1];
        uVar10 = (uint)(char)bVar2;
        if ((char)bVar2 < '\0') {
          bVar3 = puVar24[-2];
          if ((char)bVar3 < -0x40) {
            bVar4 = puVar24[-3];
            if ((char)bVar4 < -0x40) {
              pbVar1 = puVar24 + -4;
              puVar24 = puVar24 + -4;
              uVar10 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
            }
            else {
              puVar24 = puVar24 + -3;
              uVar10 = bVar4 & 0xf;
            }
            uVar10 = bVar3 & 0x3f | uVar10 << 6;
          }
          else {
            puVar24 = puVar24 + -2;
            uVar10 = bVar3 & 0x1f;
          }
          uVar10 = (uint)(bVar2 & 0x3f) | uVar10 << 6;
          if (uVar10 != 0x5c) goto LAB_141a76254;
LAB_141a76265:
          puVar27 = puVar24 + -0x14338239f;
          if ((undefined *)0x38 < puVar27) {
            pdb_142dc8070(&UNK_1433823a0,0x38,puVar27,0x38,&UNK_143382808);
LAB_141a77181:
            uStack_49 = 1;
            pdb_142dc8070(&UNK_1433823a0,0x38);
            goto LAB_141a771df;
          }
          lVar11 = 0x38 - (longlong)puVar27;
          puVar27 = puVar24 + 1;
          goto LAB_141a76287;
        }
        puVar24 = puVar24 + -1;
        if (uVar10 == 0x5c) goto LAB_141a76265;
LAB_141a76254:
        if (uVar10 == 0x2f) goto LAB_141a76265;
      } while (puVar24 != &UNK_1433823a0);
      lVar11 = 0x38;
LAB_141a76287:
      uStack_98 = (byte *******)&UNK_143382698;
      uStack_90 = (code *)0x3a;
      pppppppbStack_148 = (byte *******)&uStack_98;
      pppppppbStack_140 = (byte *******)pdb_1402ed400;
      pdb_140f60760(&pppppppbStack_f8,&UNK_143382322,&pppppppbStack_148);
      pppppppbVar15 = pppppppbStack_e8;
      pppppppbStack_70 = pppppppbStack_f8;
      pppppppbStack_58 = pppppppbStack_f0;
      pppppppbVar13 = (byte *******)pdb_140e97000();
      if ((*(byte *)(pppppppbVar13 + 0xd) != 1) &&
         (pppppppbVar13 = (byte *******)pdb_142d8ec20(pppppppbVar13,0),
         pppppppbVar13 == (byte *******)0x0)) {
        pdb_142dc7890(&UNK_143326860);
        goto LAB_141a771df;
      }
      if (*pppppppbVar13 != (byte ******)0x0) {
        pdb_142dc8090(&UNK_143326a50);
        goto LAB_141a771df;
      }
      *pppppppbVar13 = (byte ******)0xffffffffffffffff;
      pppppppbStack_78 = pppppppbVar13;
      uStack_178 = pdb_140e94f10(pppppppbVar13 + 1,puVar17,lVar20,puVar27,lVar11,pppppppbStack_58,
                                 pppppppbVar15);
      *pppppppbStack_78 = (byte ******)((longlong)*pppppppbStack_78 + 1);
      if (pppppppbStack_70 != (byte *******)0x0) {
        pub_1406abac0((byte *)pppppppbStack_58,(ulonglong)pppppppbStack_70,1);
      }
      goto LAB_141a76360;
    }
    if (param_2 < 0x51) {
      uVar12 = pdb_141a7bd20(param_2);
      if ((uVar12 & 1) != 0) {
        if (0x50 < param_2 + 2) {
          pdb_142dc8070(&UNK_143382758,0x50,param_2 + 2,0x50,&UNK_143382840);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar20 = 0x4e - param_2;
        puVar17 = &UNK_14338275a + param_2;
      }
      goto LAB_141a761ca;
    }
    pdb_142dc8070(&UNK_143382758,0x50,0,param_2,&UNK_143382828);
  }
  pdb_142dc7e2a(1,0xf);
LAB_141a771df:
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}

