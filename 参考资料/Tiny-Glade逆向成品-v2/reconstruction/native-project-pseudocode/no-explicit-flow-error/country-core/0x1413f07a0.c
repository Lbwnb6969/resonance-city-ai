// VA 0x1413f07a0, PDB extent 7440 bytes
// country_core::render::sparse_instance_buffer::SparseInstanceBuffer::gpu_flush<country_core::resources::roofs::roof_buffers::WoodenPlankSsbo>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x0001413f1516) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::render::sparse_instance_buffer::SparseInstanceBuffer::gpu_flush<country_core::resources::roofs::roof_buffers::WoodenPlankSsbo>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/render/sparse_instance_buffer.rs
   Extent: 7440 */

void pdb_1413f07a0(ulonglong *******param_1,undefined8 param_2)

{
  ulonglong ******ppppppuVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  int iVar6;
  ulonglong *****pppppuVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char cVar15;
  uint uVar16;
  ulonglong *******pppppppuVar17;
  undefined8 uVar18;
  ulonglong *******pppppppuVar19;
  longlong *plVar20;
  ulonglong ******ppppppuVar21;
  ulonglong *******pppppppuVar22;
  ulonglong ******ppppppuVar23;
  byte *pbVar24;
  ulonglong uVar25;
  undefined4 *puVar26;
  ulonglong *******pppppppuVar27;
  longlong lVar28;
  ulonglong *****pppppuVar29;
  uint uVar30;
  undefined *puVar31;
  ulonglong uVar32;
  longlong lVar33;
  byte *pbVar34;
  ulonglong uVar35;
  undefined *puVar36;
  undefined8 uVar37;
  ulonglong ******ppppppuVar38;
  bool bVar39;
  ulonglong ******ppppppuStack_1b8;
  ulonglong *******pppppppuStack_1b0;
  ulonglong *******pppppppuStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulonglong *******pppppppuStack_188;
  ulonglong *******pppppppuStack_180;
  ulonglong *******pppppppuStack_178;
  ulonglong *******pppppppuStack_170;
  ulonglong *******pppppppuStack_168;
  ulonglong *******pppppppuStack_160;
  ulonglong ******ppppppuStack_158;
  ulonglong *******pppppppuStack_150;
  ulonglong *******pppppppuStack_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  ulonglong *******pppppppuStack_120;
  ulonglong *******pppppppuStack_118;
  ulonglong *******pppppppuStack_110;
  ulonglong *******pppppppuStack_108;
  ulonglong ******ppppppuStack_100;
  longlong lStack_f8;
  ulonglong *******pppppppuStack_e8;
  ulonglong *******pppppppuStack_e0;
  ulonglong *******pppppppuStack_d8;
  ulonglong ******ppppppuStack_d0;
  ulonglong *******pppppppuStack_c8;
  ulonglong *******pppppppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  ulonglong *******pppppppuStack_90;
  ulonglong *******pppppppuStack_80;
  ulonglong *******pppppppuStack_78;
  undefined1 uStack_69;
  ulonglong *******pppppppuStack_68;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  ulonglong *******pppppppuStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pppppppuVar19 = (ulonglong *******)param_1[9];
  LOCK();
  ppppppuVar23 = *pppppppuVar19;
  *pppppppuVar19 = (ulonglong ******)((longlong)*pppppppuVar19 + 1);
  UNLOCK();
  uStack_190 = param_2;
  if (*pppppppuVar19 == (ulonglong ******)0x0 ||
      SCARRY8((longlong)ppppppuVar23,1) != (longlong)*pppppppuVar19 < 0) goto LAB_1413f1d37;
  pppppppuVar17 = pppppppuVar19 + 2;
  LOCK();
  bVar39 = *(byte *)(pppppppuVar19 + 2) == 0;
  if (bVar39) {
    *(byte *)(pppppppuVar19 + 2) = 1;
  }
  UNLOCK();
  pppppppuStack_188 = pppppppuVar19;
  if (!bVar39) {
    pdb_142dbd1a0(pppppppuVar17,param_2,1000000000);
  }
  pdb_140e9a150(pppppppuVar17);
  pppppppuStack_108 = pppppppuVar19 + 3;
  ppppppuStack_100 = pppppppuVar19[5];
  pppppppuVar19[5] = (ulonglong ******)0x0;
  pppppppuStack_110 = (ulonglong *******)(pppppppuVar19[4] + (longlong)ppppppuStack_100);
  lStack_f8 = 0;
  pppppppuVar27 = param_1 + 0xb;
  pbVar24 = (byte *)((longlong)param_1 + 0x59);
  pppppppuVar22 = param_1 + 0xc;
  pppppppuVar19 = (ulonglong *******)pppppppuVar19[4];
  pppppppuStack_120 = pppppppuVar17;
  pppppppuStack_80 = pppppppuVar22;
  pppppppuStack_78 = param_1;
  pppppppuStack_68 = pppppppuVar27;
  while (lVar33 = lStack_f8, pppppppuVar17 = pppppppuStack_108, pppppppuVar19 != pppppppuStack_110)
  {
    pppppppuStack_118 = pppppppuVar19 + 1;
    pppppppuVar19 = (ulonglong *******)*pppppppuVar19;
    if (pppppppuVar19 == (ulonglong *******)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143305ca0);
    }
    ppppppuVar23 = pppppppuVar19[2];
    pppppppuStack_58 = pppppppuVar19;
    if (ppppppuVar23 != (ulonglong ******)0x0) {
      ppppppuVar38 = pppppppuVar19[1];
      lVar33 = 0;
      do {
        uVar16 = *(uint *)((longlong)ppppppuVar38 + lVar33);
        ppppppuVar21 = (ulonglong ******)(ulonglong)uVar16;
        if (param_1[2] <= ppppppuVar21) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(ppppppuVar21,param_1[2],&UNK_143305cb8);
        }
        *(undefined1 *)((longlong)param_1[1] + (longlong)ppppppuVar21) = 0;
        ppppppuVar21 = (ulonglong ******)(ulonglong)(uVar16 >> 6);
        if (param_1[4] <= ppppppuVar21) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(ppppppuVar21,param_1[4],&UNK_143305b10);
        }
        bVar4 = (byte)uVar16 & 0x3f;
        LOCK();
        param_1[3][(longlong)ppppppuVar21] =
             (ulonglong *****)
             ((ulonglong)param_1[3][(longlong)ppppppuVar21] &
             (-2L << bVar4 | 0xfffffffffffffffeU >> 0x40 - bVar4));
        UNLOCK();
        lVar33 = lVar33 + 4;
      } while ((longlong)ppppppuVar23 << 2 != lVar33);
    }
    LOCK();
    ppppppuVar23 = *pppppppuVar27;
    if (ppppppuVar23 == (ulonglong ******)0x0) {
      *pppppppuVar27 = (ulonglong ******)0x8;
    }
    UNLOCK();
    if (ppppppuVar23 != (ulonglong ******)0x0) {
      pdb_142dbc1f0(pppppppuVar27);
    }
    pdb_140e9a150(pppppppuVar27);
    pdb_140e9a150(pbVar24);
    pppppppuStack_170 = (ulonglong *******)pppppppuStack_58[1];
    ppppppuStack_158 = pppppppuStack_58[2];
    pppppppuStack_58[2] = (ulonglong ******)0x0;
    pppppppuStack_168 =
         (ulonglong *******)((longlong)pppppppuStack_170 + (longlong)ppppppuStack_158 * 4);
    pppppppuStack_160 = pppppppuStack_58;
    pppppppuStack_150 = (ulonglong *******)0x0;
    ppppppuVar23 = param_1[0xe];
    if ((ulonglong ******)((longlong)param_1[0xc] - (longlong)ppppppuVar23) < ppppppuStack_158) {
      uStack_59 = 1;
      pdb_142d7f1b0(pppppppuStack_80,ppppppuVar23,ppppppuStack_158,4,4);
      ppppppuVar23 = param_1[0xe];
    }
    ppppppuVar38 = param_1[0xd];
    pppppppuStack_e8 = pppppppuStack_170;
    pppppppuStack_e0 = pppppppuStack_168;
    pppppppuStack_c8 = pppppppuStack_150;
    pppppppuStack_d8 = pppppppuStack_160;
    ppppppuStack_d0 = ppppppuStack_158;
    if (pppppppuStack_170 != pppppppuStack_168) {
      pbVar34 = (byte *)((longlong)pppppppuStack_168 + (-4 - (longlong)pppppppuStack_170));
      pppppppuVar19 = pppppppuStack_168;
      if (((byte *)0x3b < pbVar34) &&
         ((pppppppuVar17 = (ulonglong *******)((longlong)ppppppuVar38 + (longlong)ppppppuVar23 * 4),
          pppppppuStack_168 <= pppppppuVar17 ||
          (uVar25 = (ulonglong)((longlong)pppppppuStack_168 + (-4 - (longlong)pppppppuStack_170)) &
                    0xfffffffffffffffc,
          (byte *)((longlong)pppppppuVar17 + uVar25 + 4) <=
          (byte *)((longlong)pppppppuStack_168 + (-4 - uVar25)))))) {
        uVar25 = ((ulonglong)pbVar34 >> 2) + 1;
        uVar35 = uVar25 & 0xfffffffffffffff8;
        pppppppuStack_e0 = (ulonglong *******)((longlong)pppppppuStack_168 + uVar35 * -4);
        puVar26 = (undefined4 *)((longlong)ppppppuVar38 + (longlong)ppppppuVar23 * 4 + 0x10);
        ppppppuVar23 = (ulonglong ******)((longlong)ppppppuVar23 + uVar35);
        lVar33 = 0;
        do {
          pbVar34 = (byte *)((longlong)pppppppuStack_168 + lVar33 * 4 + -0x20);
          uVar8 = *(undefined4 *)pbVar34;
          uVar9 = *(undefined4 *)(pbVar34 + 4);
          uVar10 = *(undefined4 *)(pbVar34 + 8);
          uVar11 = *(undefined4 *)(pbVar34 + 0xc);
          pbVar34 = (byte *)((longlong)pppppppuStack_168 + lVar33 * 4 + -0x10);
          uVar12 = *(undefined4 *)pbVar34;
          uVar13 = *(undefined4 *)(pbVar34 + 4);
          uVar14 = *(undefined4 *)(pbVar34 + 8);
          puVar26[-4] = *(undefined4 *)(pbVar34 + 0xc);
          puVar26[-3] = uVar14;
          puVar26[-2] = uVar13;
          puVar26[-1] = uVar12;
          *puVar26 = uVar11;
          puVar26[1] = uVar10;
          puVar26[2] = uVar9;
          puVar26[3] = uVar8;
          puVar26 = puVar26 + 8;
          lVar33 = lVar33 + -8;
        } while (-lVar33 != uVar35);
        pppppppuVar19 = pppppppuStack_e0;
        param_1 = pppppppuStack_78;
        if (uVar25 == uVar35) goto LAB_1413f0aab;
      }
      do {
        pppppppuStack_e0 = (ulonglong *******)((longlong)pppppppuVar19 + -4);
        *(undefined4 *)((longlong)ppppppuVar38 + (longlong)ppppppuVar23 * 4) =
             *(undefined4 *)((longlong)pppppppuVar19 + -4);
        ppppppuVar23 = (ulonglong ******)((longlong)ppppppuVar23 + 1);
        pppppppuVar19 = pppppppuStack_e0;
      } while (pppppppuStack_e0 != pppppppuStack_170);
    }
LAB_1413f0aab:
    param_1[0xe] = ppppppuVar23;
    uStack_59 = 0;
    pdb_1409693f0(&pppppppuStack_e8);
    pppppppuVar27 = pppppppuStack_68;
    pdb_140e9a350(pppppppuStack_68);
    pdb_140e9a350(pbVar24);
    LOCK();
    ppppppuVar23 = *pppppppuVar27;
    if (ppppppuVar23 == (ulonglong ******)0x8) {
      *pppppppuVar27 = (ulonglong ******)0x0;
    }
    UNLOCK();
    if (ppppppuVar23 != (ulonglong ******)0x8) {
      pdb_142dbca40(pppppppuVar27,0);
    }
    pppppppuVar19 = pppppppuStack_58;
    if (*pppppppuStack_58 != (ulonglong ******)0x0) {
      pub_1406abac0((byte *)pppppppuStack_58[1],(longlong)*pppppppuStack_58 << 2,4);
    }
    pppppppuVar22 = (ulonglong *******)0x20;
    pub_1406abac0((byte *)pppppppuVar19,0x20,8);
    pppppppuVar19 = pppppppuStack_118;
  }
  if (lStack_f8 != 0) {
    ppppppuVar23 = pppppppuStack_108[2];
    if (ppppppuStack_100 != ppppppuVar23) {
      pppppppuVar22 = (ulonglong *******)(pppppppuStack_108[1] + (longlong)ppppppuStack_100);
      pub_142e32770(pppppppuStack_108[1] + (longlong)ppppppuVar23);
    }
    pppppppuVar17[2] = (ulonglong ******)((longlong)ppppppuVar23 + lVar33);
  }
  pppppppuVar19 = pppppppuStack_120;
  pdb_140e9a350();
  LOCK();
  bVar4 = *(byte *)pppppppuVar19;
  if (bVar4 == 1) {
    *(byte *)pppppppuVar19 = 0;
  }
  UNLOCK();
  if (bVar4 != 1) {
    pppppppuVar22 = (ulonglong *******)0x0;
    pdb_142dbcef0(pppppppuVar19);
  }
  LOCK();
  *pppppppuStack_188 = (ulonglong ******)((longlong)*pppppppuStack_188 + -1);
  UNLOCK();
  if (*pppppppuStack_188 == (ulonglong ******)0x0) {
    pdb_140c7ace0(&pppppppuStack_188);
  }
  cVar15 = pdb_140e94b40();
  pppppppuStack_120 = (ulonglong *******)CONCAT71(pppppppuStack_120._1_7_,cVar15);
  if (cVar15 == '\0') {
LAB_1413f0dc4:
    ppppppuVar23 = (ulonglong ******)((longlong)param_1[0xf] << 0xd);
    ppppppuStack_1b8 = ppppppuVar23;
    if (param_1[10] < ppppppuVar23) {
      uVar18 = pdb_140e1d1f0((longlong)param_1[0xf] * 0xa0000,0x12,1);
      uVar18 = pdb_140e1d260(uVar18,4);
      pdb_141472d90(&pppppppuStack_e8,uStack_190,&UNK_143305c80,0xb,uVar18,0);
      pppppppuVar19 = pppppppuStack_e0;
      if (pppppppuStack_e8 != (ulonglong *******)0xb) {
        uStack_130 = (undefined4)uStack_a8;
        uStack_12c = uStack_a8._4_4_;
        uStack_128 = (undefined4)uStack_a0;
        uStack_124 = uStack_a0._4_4_;
        uStack_140 = (undefined4)uStack_b8;
        uStack_13c = uStack_b8._4_4_;
        uStack_138 = (undefined4)uStack_b0;
        uStack_134 = uStack_b0._4_4_;
        pppppppuStack_150 = pppppppuStack_c8;
        pppppppuStack_148 = pppppppuStack_c0;
        pppppppuStack_160 = pppppppuStack_d8;
        ppppppuStack_158 = ppppppuStack_d0;
        pppppppuStack_170 = pppppppuStack_e8;
        pppppppuStack_168 = pppppppuStack_e0;
        pppppppuStack_e8 = (ulonglong *******)&UNK_143305c90;
        pppppppuStack_e0 = (ulonglong *******)pdb_1402ed400;
        pppppppuStack_d8 = (ulonglong *******)&pppppppuStack_170;
        ppppppuStack_d0 = (ulonglong ******)pdb_140e18fa0;
        pppppppuVar19 = (ulonglong *******)&pppppppuStack_118;
        pdb_140f60760(pppppppuVar19,&UNK_143305c09,&pppppppuStack_e8);
        pppppppuStack_188 = pppppppuStack_118;
        pppppppuStack_180 = pppppppuStack_110;
        pppppppuStack_178 = pppppppuStack_108;
        if (*_DAT_143ca4298 != 0) goto LAB_1413f1ba0;
        goto LAB_1413f1044;
      }
      pppppppuStack_118 = pppppppuStack_e0;
      if (2 < *_DAT_143ca8e90) {
        pppppppuStack_160 = param_1 + 10;
        pppppppuStack_170 = (ulonglong *******)&UNK_143305c90;
        pppppppuStack_168 = (ulonglong *******)pdb_1402ed400;
        ppppppuStack_158 = (ulonglong ******)pdb_140f72a40;
        pppppppuStack_150 = &ppppppuStack_1b8;
        pppppppuStack_148 = (ulonglong *******)pdb_140f72a40;
        pppppppuStack_e8 = (ulonglong *******)0x0;
        pppppppuStack_e0 = (ulonglong *******)&UNK_143305bdd;
        pppppppuStack_d8 = (ulonglong *******)0x2c;
        ppppppuStack_d0 = (ulonglong ******)0x0;
        pppppppuStack_c8 = (ulonglong *******)&UNK_143305ab8;
        pppppppuStack_c0 = (ulonglong *******)0x38;
        uStack_b8 = 3;
        uStack_b0 = &UNK_143305bdd;
        uStack_a8 = 0x2c;
        uStack_a0 = 0x16200000001;
        puStack_98 = &UNK_143305bc0;
        pppppppuStack_90 = (ulonglong *******)&pppppppuStack_170;
        uStack_5a = 1;
        pdb_140f332f0(&uStack_69,&pppppppuStack_e8);
      }
      pppppppuStack_58 = pppppppuVar19;
      pdb_1413fffc0(param_1);
      *pppppppuStack_78 = (ulonglong ******)pppppppuStack_58;
      pppppppuStack_78[10] = ppppppuVar23;
      ppppppuVar23 = pppppppuStack_78[8];
      if (pppppppuStack_78[4] < pppppppuStack_78[8]) {
        ppppppuVar23 = pppppppuStack_78[4];
      }
      param_1 = pppppppuStack_78;
      if (ppppppuVar23 != (ulonglong ******)0x0) {
        ppppppuVar38 = pppppppuStack_78[7];
        ppppppuVar21 = pppppppuStack_78[3];
        uVar25 = (ulonglong)((uint)ppppppuVar23 & 7);
        if (ppppppuVar23 < (ulonglong ******)0x8) {
          uVar35 = 0;
        }
        else {
          uVar35 = 0;
          do {
            LOCK();
            ppppppuVar38[uVar35] =
                 (ulonglong *****)
                 ((ulonglong)ppppppuVar38[uVar35] | (ulonglong)ppppppuVar21[uVar35]);
            UNLOCK();
            LOCK();
            ppppppuVar38[uVar35 + 1] =
                 (ulonglong *****)
                 ((ulonglong)ppppppuVar38[uVar35 + 1] | (ulonglong)ppppppuVar21[uVar35 + 1]);
            UNLOCK();
            LOCK();
            ppppppuVar38[uVar35 + 2] =
                 (ulonglong *****)
                 ((ulonglong)ppppppuVar38[uVar35 + 2] | (ulonglong)ppppppuVar21[uVar35 + 2]);
            UNLOCK();
            LOCK();
            ppppppuVar38[uVar35 + 3] =
                 (ulonglong *****)
                 ((ulonglong)ppppppuVar38[uVar35 + 3] | (ulonglong)ppppppuVar21[uVar35 + 3]);
            UNLOCK();
            LOCK();
            ppppppuVar38[uVar35 + 4] =
                 (ulonglong *****)
                 ((ulonglong)ppppppuVar38[uVar35 + 4] | (ulonglong)ppppppuVar21[uVar35 + 4]);
            UNLOCK();
            LOCK();
            ppppppuVar38[uVar35 + 5] =
                 (ulonglong *****)
                 ((ulonglong)ppppppuVar38[uVar35 + 5] | (ulonglong)ppppppuVar21[uVar35 + 5]);
            UNLOCK();
            LOCK();
            ppppppuVar38[uVar35 + 6] =
                 (ulonglong *****)
                 ((ulonglong)ppppppuVar38[uVar35 + 6] | (ulonglong)ppppppuVar21[uVar35 + 6]);
            UNLOCK();
            LOCK();
            ppppppuVar38[uVar35 + 7] =
                 (ulonglong *****)
                 ((ulonglong)ppppppuVar38[uVar35 + 7] | (ulonglong)ppppppuVar21[uVar35 + 7]);
            UNLOCK();
            uVar35 = uVar35 + 8;
          } while (((ulonglong)ppppppuVar23 & 0xfffffffffffffff8) != uVar35);
          if (uVar25 == 0) goto LAB_1413f13d1;
        }
        uVar32 = 0;
        do {
          LOCK();
          ppppppuVar38[uVar35 + uVar32] =
               (ulonglong *****)
               ((ulonglong)ppppppuVar38[uVar35 + uVar32] | (ulonglong)ppppppuVar21[uVar35 + uVar32])
          ;
          UNLOCK();
          uVar32 = uVar32 + 1;
        } while (uVar25 != uVar32);
      }
    }
LAB_1413f13d1:
    ppppppuVar38 = param_1[10];
    pppppppuStack_170 = (ulonglong *******)0x0;
    pppppppuStack_168 = (ulonglong *******)0x8;
    pppppppuStack_160 = (ulonglong *******)0x0;
    ppppppuVar21 = param_1[7];
    ppppppuVar23 = ppppppuVar21 + (longlong)param_1[8];
    lVar33 = 0;
    uVar35 = 0;
    uVar25 = 0;
    while (pppppppuVar19 = pppppppuStack_160, ppppppuVar21 != ppppppuVar23) {
      param_1 = (ulonglong *******)(lVar33 << 6);
      while( true ) {
        lVar33 = lVar33 + 1;
        pppppuVar29 = *ppppppuVar21;
        *ppppppuVar21 = (ulonglong *****)0x0;
        ppppppuVar21 = ppppppuVar21 + 1;
        if (pppppuVar29 != (ulonglong *****)0x0) break;
        param_1 = param_1 + 8;
        if (ppppppuVar21 == ppppppuVar23) goto LAB_1413f151b;
      }
      do {
        iVar6 = 0;
        for (pppppuVar7 = pppppuVar29; ((ulonglong)pppppuVar7 & 1) == 0;
            pppppuVar7 = (ulonglong *****)((ulonglong)pppppuVar7 >> 1 | 0x8000000000000000)) {
          iVar6 = iVar6 + 1;
        }
        pppppuVar29 = (ulonglong *****)((longlong)pppppuVar29 - 1U & (ulonglong)pppppuVar29);
        uVar16 = iVar6 + (int)param_1;
        if (uVar16 < (uint)((ulonglong)ppppppuVar38 >> 5)) {
          uVar30 = (uint)uVar35;
          uVar32 = uVar25;
          if ((uVar30 != uVar16) && (uVar32 = (ulonglong)uVar16, (uint)uVar25 < uVar30)) {
            if (pppppppuStack_160 == pppppppuStack_170) {
              uStack_49 = 1;
              pppppppuStack_58 = (ulonglong *******)CONCAT44(pppppppuStack_58._4_4_,uVar30);
              pppppppuStack_68 = (ulonglong *******)CONCAT44(pppppppuStack_68._4_4_,(uint)uVar25);
              pppppppuStack_80 = pppppppuStack_160;
              pdb_142d8afd0(&pppppppuStack_170);
              uVar25 = (ulonglong)pppppppuStack_68 & 0xffffffff;
              uVar35 = (ulonglong)pppppppuStack_58 & 0xffffffff;
              pppppppuStack_160 = pppppppuStack_80;
            }
            pppppppuStack_168[(longlong)pppppppuStack_160 * 2] = (ulonglong ******)(uVar25 << 5);
            pppppppuStack_168[(longlong)pppppppuStack_160 * 2 + 1] = (ulonglong ******)(uVar35 << 5)
            ;
            pppppppuStack_160 = (ulonglong *******)((longlong)pppppppuStack_160 + 1);
            uVar32 = (ulonglong)uVar16;
          }
          uVar35 = (ulonglong)(uVar16 + 1);
          uVar25 = uVar32;
        }
      } while (pppppuVar29 != (ulonglong *****)0x0);
    }
LAB_1413f151b:
    if ((uint)uVar25 < (uint)uVar35) {
      if (pppppppuStack_160 == pppppppuStack_170) {
        uStack_49 = 1;
        pdb_142d8afd0(&pppppppuStack_170);
      }
      pppppppuStack_168[(longlong)pppppppuVar19 * 2] = (ulonglong ******)(uVar25 << 5);
      pppppppuStack_168[(longlong)pppppppuVar19 * 2 + 1] = (ulonglong ******)(uVar35 << 5);
      pppppppuStack_160 = (ulonglong *******)((longlong)pppppppuVar19 + 1);
    }
    uStack_49 = 1;
    cVar15 = pdb_140e94b40();
    pppppppuVar17 = pppppppuStack_78;
    if (cVar15 != '\0') {
      puVar36 = &UNK_143305d08;
      puVar31 = &UNK_143305cd0;
      do {
        bVar4 = puVar36[-1];
        uVar16 = (uint)(char)bVar4;
        if ((char)bVar4 < '\0') {
          bVar2 = puVar36[-2];
          if ((char)bVar2 < -0x40) {
            bVar3 = puVar36[-3];
            if ((char)bVar3 < -0x40) {
              pbVar24 = puVar36 + -4;
              puVar36 = puVar36 + -4;
              uVar16 = bVar3 & 0x3f | (*pbVar24 & 7) << 6;
            }
            else {
              puVar36 = puVar36 + -3;
              uVar16 = bVar3 & 0xf;
            }
            uVar16 = bVar2 & 0x3f | uVar16 << 6;
          }
          else {
            puVar36 = puVar36 + -2;
            uVar16 = bVar2 & 0x1f;
          }
          uVar16 = (uint)(bVar4 & 0x3f) | uVar16 << 6;
          if (uVar16 != 0x5c) goto LAB_1413f1614;
LAB_1413f1626:
          if ((undefined *)0x38 < puVar36 + -0x143305ccf) goto LAB_1413f1cd9;
          lVar33 = 0x38 - (longlong)(puVar36 + -0x143305ccf);
          puVar31 = puVar36 + 1;
          goto LAB_1413f1649;
        }
        puVar36 = puVar36 + -1;
        if (uVar16 == 0x5c) goto LAB_1413f1626;
LAB_1413f1614:
        if (uVar16 == 0x2f) goto LAB_1413f1626;
      } while (puVar36 != &UNK_143305cd0);
      lVar33 = 0x38;
LAB_1413f1649:
      uStack_49 = 1;
      pppppppuVar19 = (ulonglong *******)&pppppppuStack_e8;
      uVar18 = pdb_140f67ab0(pppppppuStack_160,pppppppuVar19,0x14);
      if ((longlong)pppppppuVar19 < 0) {
        uVar37 = 0;
LAB_1413f1672:
        uStack_49 = 1;
        pdb_142dc7e2a(uVar37,pppppppuVar19);
        goto LAB_1413f1d37;
      }
      pppppppuStack_68 = pppppppuVar19;
      if (pppppppuVar19 == (ulonglong *******)0x0) {
        pppppppuStack_58 = (ulonglong *******)0x1;
      }
      else {
        pdb_14007ee60();
        uVar37 = 1;
        pppppppuVar17 = (ulonglong *******)pub_1406abab0((ulonglong)pppppppuVar19,1);
        if (pppppppuVar17 == (ulonglong *******)0x0) goto LAB_1413f1672;
        pppppppuStack_58 = pppppppuVar17;
        pub_142e32760(pppppppuVar17,uVar18,pppppppuVar19);
      }
      pppppppuVar17 = pppppppuStack_78;
      pppppppuVar19 = (ulonglong *******)pdb_140e97000();
      if ((*(byte *)(pppppppuVar19 + 0xd) != 1) &&
         (pppppppuVar19 = (ulonglong *******)pdb_142dd9610(pppppppuVar19,0),
         pppppppuVar19 == (ulonglong *******)0x0)) {
        pdb_142dc7890(&UNK_143307940);
        goto LAB_1413f1d37;
      }
      pppppppuVar27 = pppppppuStack_68;
      if (*pppppppuVar19 != (ulonglong ******)0x0) {
        pdb_142dc8090(&UNK_1433079b0);
        goto LAB_1413f1d37;
      }
      *pppppppuVar19 = (ulonglong ******)0xffffffffffffffff;
      pppppppuStack_80 = pppppppuVar19;
      uStack_198 = pdb_140e94f10(pppppppuVar19 + 1,&UNK_143305d08,0x17,puVar31,lVar33,
                                 pppppppuStack_58,pppppppuStack_68);
      *pppppppuStack_80 = (ulonglong ******)((longlong)*pppppppuStack_80 + 1);
      if (pppppppuVar27 != (ulonglong *******)0x0) {
        pub_1406abac0((byte *)pppppppuStack_58,(ulonglong)pppppppuVar27,1);
      }
    }
    pppppppuStack_80 = (ulonglong *******)CONCAT71(pppppppuStack_80._1_7_,cVar15);
    pppppppuStack_e8 = (ulonglong *******)0x0;
    pppppppuStack_e0 = (ulonglong *******)0x8;
    pppppppuStack_d8 = (ulonglong *******)0x0;
    pppppppuStack_1b0 = pppppppuStack_170;
    pppppppuStack_68 = pppppppuStack_168 + (longlong)pppppppuStack_160 * 2;
    pppppppuVar22 = (ulonglong *******)0xffffffffffffffff;
    pppppppuVar27 = (ulonglong *******)0x0;
    pppppppuStack_1a8 = pppppppuStack_168;
    pppppppuVar19 = pppppppuStack_168;
    while (pppppppuVar19 != pppppppuStack_68) {
      pppppppuStack_58 = pppppppuVar19 + 2;
      ppppppuVar23 = pppppppuVar19[1];
      ppppppuVar38 = *pppppppuVar19;
      while (pppppppuVar19 = pppppppuStack_58, ppppppuVar38 < ppppppuVar23) {
        param_1 = (ulonglong *******)((ulonglong)ppppppuVar38 >> 0xd);
        ppppppuVar21 = (ulonglong ******)(((ulonglong)ppppppuVar38 & 0xffffffffffffe000) + 0x2000);
        if (ppppppuVar23 <= ppppppuVar21) {
          ppppppuVar21 = ppppppuVar23;
        }
        if (param_1 != pppppppuVar22) {
          if (pppppppuVar27 != (ulonglong *******)0x0) {
            if (pppppppuStack_78[6] <= pppppppuVar22) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pppppppuVar22,pppppppuStack_78[6],&UNK_143305b28);
            }
            if (*(int *)(pppppppuStack_78[5] + (longlong)pppppppuVar22 * 3 + 2) != 0) {
              pdb_142dc8110(&UNK_143305b40,0x11,&UNK_143305b58);
              goto LAB_1413f1d37;
            }
            ppppppuVar1 = pppppppuStack_78[5] + (longlong)pppppppuVar22 * 3;
            pdb_1424adca0(pppppppuStack_78,uStack_190,*ppppppuVar1,ppppppuVar1[1],pppppppuStack_e0,
                          pppppppuStack_d8,(longlong)pppppppuVar22 * 0xa0000);
            pppppppuStack_d8 = (ulonglong *******)0x0;
          }
          pppppppuVar27 = (ulonglong *******)0x0;
          pppppppuVar22 = param_1;
        }
        if (pppppppuVar27 == pppppppuStack_e8) {
          pdb_142d8afd0(&pppppppuStack_e8);
        }
        pppppppuStack_e0[(longlong)pppppppuVar27 * 2] =
             (ulonglong ******)(ulonglong)((uint)ppppppuVar38 & 0x1fff);
        pppppppuStack_e0[(longlong)pppppppuVar27 * 2 + 1] =
             (ulonglong ******)
             ((longlong)ppppppuVar21 - ((ulonglong)ppppppuVar38 & 0xffffffffffffe000));
        pppppppuVar27 = (ulonglong *******)((longlong)pppppppuVar27 + 1);
        pppppppuVar17 = pppppppuStack_78;
        ppppppuVar38 = ppppppuVar21;
        pppppppuStack_d8 = pppppppuVar27;
      }
    }
    if (pppppppuStack_1b0 != (ulonglong *******)0x0) {
      pub_1406abac0((byte *)pppppppuStack_1a8,(longlong)pppppppuStack_1b0 << 4,8);
      pppppppuVar27 = pppppppuStack_d8;
    }
    pppppppuVar19 = pppppppuVar22;
    if (pppppppuVar27 != (ulonglong *******)0x0) {
      if (pppppppuVar17[6] <= pppppppuVar22) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc81f2(pppppppuVar22,pppppppuVar17[6],&UNK_143305b28);
      }
      if (*(int *)(pppppppuVar17[5] + (longlong)pppppppuVar22 * 3 + 2) != 0) {
        pdb_142dc8110(&UNK_143305b40,0x11,&UNK_143305b58);
        goto LAB_1413f1d37;
      }
      ppppppuVar23 = pppppppuVar17[5] + (longlong)pppppppuVar22 * 3;
      pppppppuVar19 = (ulonglong *******)((longlong)pppppppuVar22 * 0x20000);
      pdb_1424adca0(pppppppuVar17,uStack_190,*ppppppuVar23,ppppppuVar23[1],pppppppuStack_e0,
                    pppppppuStack_d8,(longlong)pppppppuVar22 * 0xa0000);
      pppppppuStack_d8 = (ulonglong *******)0x0;
    }
    cVar15 = (char)pppppppuStack_80;
    if (pppppppuStack_e8 != (ulonglong *******)0x0) {
      pub_1406abac0((byte *)pppppppuStack_e0,(longlong)pppppppuStack_e8 << 4,8);
    }
    if (cVar15 != '\0') {
      uStack_49 = 0;
      pppppppuVar17 = (ulonglong *******)pdb_140e97000();
      if (*(byte *)(pppppppuVar17 + 0xd) != 1) {
        uStack_49 = 0;
        pppppppuVar17 = (ulonglong *******)pdb_142dd9610(pppppppuVar17,0);
        if (pppppppuVar17 == (ulonglong *******)0x0) {
          uStack_49 = 0;
          pdb_142dc7890(&UNK_143307940);
          goto LAB_1413f1d37;
        }
      }
      if (*pppppppuVar17 != (ulonglong ******)0x0) {
        uStack_49 = 0;
        pdb_142dc8090(&UNK_1433079b0);
        goto LAB_1413f1d37;
      }
      *pppppppuVar17 = (ulonglong ******)0xffffffffffffffff;
      pppppppuStack_78 = pppppppuVar17;
      pdb_140e95370(pppppppuVar17 + 1,uStack_198);
      *pppppppuStack_78 = (ulonglong ******)((longlong)*pppppppuStack_78 + 1);
    }
    if ((char)pppppppuStack_120 == '\0') {
      return;
    }
    plVar20 = (longlong *)pdb_140e97000();
    if (((char)plVar20[0xd] == '\x01') ||
       (plVar20 = (longlong *)pdb_142dd9610(plVar20,0), plVar20 != (longlong *)0x0)) {
      if (*plVar20 == 0) {
        *plVar20 = -1;
        pppppppuStack_78 = (ulonglong *******)plVar20;
        pdb_140e95370(plVar20 + 1,uStack_1a0);
        *pppppppuStack_78 = (ulonglong ******)((longlong)*pppppppuStack_78 + 1);
        return;
      }
    }
    else {
      pdb_142dc7890(&UNK_143307940);
    }
    pdb_142dc8090(&UNK_1433079b0);
LAB_1413f1ba0:
    pppppppuStack_118 = (ulonglong *******)CONCAT71(pppppppuStack_118._1_7_,1);
    pppppppuStack_e8 = pppppppuVar19;
    pdb_142dc7060(_DAT_143ca4298,0,&pppppppuStack_e8,&UNK_143305df0,&UNK_143305c20);
LAB_1413f1044:
    pdb_1400f0d40(&pppppppuStack_e8,*_DAT_143ca4290);
    if ((int)pppppppuStack_e8 == 1) {
      pppppppuStack_118 = pppppppuStack_e0;
      pppppppuStack_110 =
           (ulonglong *******)CONCAT71(pppppppuStack_110._1_7_,pppppppuStack_d8._0_1_);
                    /* WARNING: Subroutine does not return */
      pdb_142dc8170(&UNK_143305c38,0x13,&pppppppuStack_118,&UNK_143306000,&UNK_143305c20);
    }
    pppppppuStack_58 = pppppppuStack_e0;
    pppppppuStack_68 = (ulonglong *******)CONCAT71(pppppppuStack_68._1_7_,pppppppuStack_d8._0_1_);
    pdb_14007ee60();
    pppppppuVar17 = (ulonglong *******)pub_1406abab0(0xf,1);
    if (pppppppuVar17 != (ulonglong *******)0x0) {
      pbVar24 = (byte *)((longlong)pppppppuVar17 + 7);
      pbVar24[0] = 0x70;
      pbVar24[1] = 0x61;
      pbVar24[2] = 0x74;
      pbVar24[3] = 0x68;
      pbVar24[4] = 0x21;
      pbVar24[5] = 0x20;
      pbVar24[6] = 0x28;
      pbVar24[7] = 0x29;
      *pppppppuVar17 = (ulonglong ******)0x705f656c75646f6d;
      pppppppuStack_e8 = (ulonglong *******)0xf;
      pppppppuStack_d8 = (ulonglong *******)0xf;
      pppppppuStack_e0 = pppppppuVar17;
      pdb_142d7f1b0(&pppppppuStack_e8,0xf,0x17,1,1);
      pppppppuVar27 = pppppppuStack_178;
      pppppppuVar17 = pppppppuStack_180;
      uVar18 = _UNK_143305c53;
      *(undefined8 *)((longlong)pppppppuStack_e0 + (longlong)pppppppuStack_d8) = _DAT_143305c4b;
      *(undefined8 *)((byte *)((longlong)pppppppuStack_e0 + (longlong)pppppppuStack_d8) + 8) =
           uVar18;
      pbVar24 = (byte *)((longlong)pppppppuStack_e0 + (longlong)pppppppuStack_d8 + 0xf);
      pbVar24[0] = 0x20;
      pbVar24[1] = 0x3a;
      pbVar24[2] = 0x3a;
      pbVar24[3] = 0x20;
      pbVar24[4] = 0x57;
      pbVar24[5] = 0x61;
      pbVar24[6] = 0x72;
      pbVar24[7] = 0x6e;
      pppppppuVar22 = (ulonglong *******)((longlong)pppppppuStack_d8 + 0x17);
      pppppppuStack_118 = pppppppuStack_e8;
      pppppppuStack_110 = pppppppuStack_e0;
      pppppppuStack_108 = pppppppuVar22;
      if ((ulonglong *******)((longlong)pppppppuStack_e8 - (longlong)pppppppuVar22) <
          pppppppuStack_178) {
        pdb_142d7f1b0(&pppppppuStack_118,pppppppuVar22,pppppppuStack_178,1,1);
LAB_1413f1159:
        pppppppuVar22 = pppppppuStack_108;
        pub_142e32760((byte *)((longlong)pppppppuStack_110 + (longlong)pppppppuStack_108),
                      pppppppuVar17);
      }
      else if (pppppppuStack_178 != (ulonglong *******)0x0) goto LAB_1413f1159;
      pppppppuStack_108 = (ulonglong *******)((longlong)pppppppuVar22 + (longlong)pppppppuVar27);
      pppppppuStack_e8 = pppppppuStack_118;
      pppppppuStack_e0 = pppppppuStack_110;
      pppppppuStack_d8 = pppppppuStack_108;
      cVar15 = pdb_1424ad780(pppppppuStack_58 + 1,&pppppppuStack_e8);
      if ((cVar15 == '\0') && (1 < *_DAT_143ca8e90)) {
        pppppppuStack_118 = (ulonglong *******)&pppppppuStack_188;
        pppppppuStack_110 = (ulonglong *******)pdb_140001020;
        pppppppuStack_e8 = (ulonglong *******)0x0;
        pppppppuStack_e0 = (ulonglong *******)&UNK_143305bdd;
        pppppppuStack_d8 = (ulonglong *******)0x2c;
        ppppppuStack_d0 = (ulonglong ******)0x0;
        pppppppuStack_c8 = (ulonglong *******)&UNK_143305ab8;
        pppppppuStack_c0 = (ulonglong *******)0x38;
        uStack_b8 = 2;
        uStack_b0 = &UNK_143305bdd;
        uStack_a8 = 0x2c;
        uStack_a0 = 0x16f00000001;
        puStack_98 = &UNK_143305c62;
        pppppppuStack_90 = pppppppuVar19;
        pdb_140f332f0(&uStack_69,&pppppppuStack_e8);
      }
      pppppppuVar19 = pppppppuStack_58;
      if ((((char)pppppppuStack_68 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) &&
         (cVar15 = pdb_142dc79e0(), cVar15 == '\0')) {
        *(byte *)((longlong)pppppppuVar19 + 1) = 1;
      }
      LOCK();
      bVar4 = *(byte *)pppppppuVar19;
      *(byte *)pppppppuVar19 = 0;
      UNLOCK();
      if (bVar4 == 2) {
        pdb_142dc6ca0();
      }
      if (pppppppuStack_188 != (ulonglong *******)0x0) {
        pub_1406abac0((byte *)pppppppuStack_180,(ulonglong)pppppppuStack_188,1);
      }
      pppppppuVar19 = (ulonglong *******)0x0;
      if ((ulonglong *******)0x7 < pppppppuStack_170) {
        pppppppuVar19 = pppppppuStack_170 + -1;
      }
      if (pppppppuVar19 == (ulonglong *******)0x0) {
        pppppppuVar17 = pppppppuStack_150;
        pppppppuVar27 = pppppppuStack_148;
        if (((pppppppuStack_170 < (ulonglong *******)0x6) &&
            ((0x32UL >> ((ulonglong)pppppppuStack_170 & 0x3f) & 1) != 0)) &&
           (pppppppuStack_168 != (ulonglong *******)0x0)) {
          pub_1406abac0((byte *)pppppppuStack_160,(ulonglong)pppppppuStack_168,1);
          pppppppuVar17 = pppppppuStack_150;
          pppppppuVar27 = pppppppuStack_148;
        }
      }
      else {
        pppppppuVar17 = pppppppuStack_168;
        pppppppuVar27 = pppppppuStack_160;
        if (pppppppuVar19 == (ulonglong *******)0x1) {
          pdb_1404b83f0(&pppppppuStack_168);
          goto LAB_1413f13d1;
        }
      }
      if (pppppppuVar17 != (ulonglong *******)0x0) {
        pub_1406abac0((byte *)pppppppuVar27,(ulonglong)pppppppuVar17,1);
      }
      goto LAB_1413f13d1;
    }
  }
  else {
    lVar28 = 0x50;
    lVar33 = pdb_1413f7ff0(0x50);
    pbVar24 = &UNK_143306020;
    if (lVar33 != 1) {
LAB_1413f0c2c:
      puVar31 = &UNK_143305d08;
      puVar36 = &UNK_143305cd0;
      do {
        bVar4 = puVar31[-1];
        uVar16 = (uint)(char)bVar4;
        if ((char)bVar4 < '\0') {
          bVar2 = puVar31[-2];
          if ((char)bVar2 < -0x40) {
            bVar3 = puVar31[-3];
            if ((char)bVar3 < -0x40) {
              pbVar34 = puVar31 + -4;
              puVar31 = puVar31 + -4;
              uVar16 = bVar3 & 0x3f | (*pbVar34 & 7) << 6;
            }
            else {
              puVar31 = puVar31 + -3;
              uVar16 = bVar3 & 0xf;
            }
            uVar16 = bVar2 & 0x3f | uVar16 << 6;
          }
          else {
            puVar31 = puVar31 + -2;
            uVar16 = bVar2 & 0x1f;
          }
          uVar16 = (uint)(bVar4 & 0x3f) | uVar16 << 6;
          if (uVar16 != 0x5c) goto LAB_1413f0cb4;
LAB_1413f0cc5:
          puVar36 = puVar31 + -0x143305ccf;
          if ((undefined *)0x38 < puVar36) {
            pdb_142dc8070(&UNK_143305cd0,0x38,puVar36,0x38,&UNK_1433060d0);
LAB_1413f1cd9:
            uStack_49 = 1;
            pdb_142dc8070(&UNK_143305cd0,0x38);
            goto LAB_1413f1d37;
          }
          lVar33 = 0x38 - (longlong)puVar36;
          puVar36 = puVar31 + 1;
          goto LAB_1413f0ce7;
        }
        puVar31 = puVar31 + -1;
        if (uVar16 == 0x5c) goto LAB_1413f0cc5;
LAB_1413f0cb4:
        if (uVar16 == 0x2f) goto LAB_1413f0cc5;
      } while (puVar31 != &UNK_143305cd0);
      lVar33 = 0x38;
LAB_1413f0ce7:
      pppppppuStack_118 = (ulonglong *******)&UNK_143305f32;
      pppppppuStack_110 = (ulonglong *******)0x3d;
      pppppppuStack_170 = (ulonglong *******)&pppppppuStack_118;
      pppppppuStack_168 = (ulonglong *******)pdb_1402ed400;
      pdb_140f60760(&pppppppuStack_e8,&UNK_143305c62,&pppppppuStack_170);
      pppppppuVar19 = pppppppuStack_d8;
      pppppppuStack_68 = pppppppuStack_e8;
      pppppppuStack_58 = pppppppuStack_e0;
      pppppppuVar17 = (ulonglong *******)pdb_140e97000();
      if ((*(byte *)(pppppppuVar17 + 0xd) != 1) &&
         (pppppppuVar17 = (ulonglong *******)pdb_142dd9610(pppppppuVar17,0),
         pppppppuVar17 == (ulonglong *******)0x0)) {
        pdb_142dc7890(&UNK_143307940);
        goto LAB_1413f1d37;
      }
      if (*pppppppuVar17 != (ulonglong ******)0x0) {
        pdb_142dc8090(&UNK_1433079b0);
        goto LAB_1413f1d37;
      }
      *pppppppuVar17 = (ulonglong ******)0xffffffffffffffff;
      pppppppuStack_80 = pppppppuVar17;
      uStack_1a0 = pdb_140e94f10(pppppppuVar17 + 1,pbVar24,lVar28,puVar36,lVar33,pppppppuStack_58,
                                 pppppppuVar19);
      *pppppppuStack_80 = (ulonglong ******)((longlong)*pppppppuStack_80 + 1);
      if (pppppppuStack_68 != (ulonglong *******)0x0) {
        pub_1406abac0((byte *)pppppppuStack_58,(ulonglong)pppppppuStack_68,1);
      }
      goto LAB_1413f0dc4;
    }
    if (pppppppuVar22 < (ulonglong *******)0x51) {
      uVar25 = pdb_1413f7ff0(pppppppuVar22);
      if ((uVar25 & 1) != 0) {
        if ((byte *)0x50 < (byte *)((longlong)pppppppuVar22 + 2)) {
          pdb_142dc8070(&UNK_143306020,0x50,(byte *)((longlong)pppppppuVar22 + 2),0x50,
                        &UNK_143306108);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar28 = 0x4e - (longlong)pppppppuVar22;
        pbVar24 = (byte *)((longlong)pppppppuVar22 + 0x143306022);
      }
      goto LAB_1413f0c2c;
    }
    pdb_142dc8070(&UNK_143306020,0x50,0,pppppppuVar22,&UNK_1433060f0);
  }
  pdb_142dc7e2a(1,0xf);
LAB_1413f1d37:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}

