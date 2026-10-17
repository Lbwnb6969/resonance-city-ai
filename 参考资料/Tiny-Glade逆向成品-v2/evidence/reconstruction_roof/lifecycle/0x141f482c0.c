// Matched PDB: country_core::render::sparse_instance_buffer::SparseInstanceBuffer::gpu_flush<country_core::resources::roof_tile_ssbo::RoofTileSsbo>
// VA 0x141f482c0, PDB extent 7440 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* WARNING: Removing unreachable block (ram,0x000141f49036) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB:
   country_core::render::sparse_instance_buffer::SparseInstanceBuffer::gpu_flush<country_core::resources::roof_tile_ssbo::RoofTileSsbo>
   Extent: 7440 bytes. No whole-program auto-analysis. */

void pdb_141f482c0(ulonglong *******param_1,undefined8 param_2)

{
  byte *pbVar1;
  ulonglong ******ppppppuVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  int iVar7;
  ulonglong *****pppppuVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  char cVar16;
  uint uVar17;
  ulonglong *******pppppppuVar18;
  undefined8 uVar19;
  ulonglong *******pppppppuVar20;
  ulonglong *******pppppppuVar21;
  longlong *plVar22;
  ulonglong ******ppppppuVar23;
  ulonglong *******pppppppuVar24;
  ulonglong ******ppppppuVar25;
  char *pcVar26;
  ulonglong uVar27;
  undefined4 *puVar28;
  longlong lVar29;
  ulonglong *****pppppuVar30;
  uint uVar31;
  undefined *puVar32;
  ulonglong uVar33;
  longlong lVar34;
  char *pcVar35;
  ulonglong uVar36;
  undefined *puVar37;
  undefined8 uVar38;
  ulonglong ******ppppppuVar39;
  bool bVar40;
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
  pppppppuVar20 = (ulonglong *******)param_1[9];
  LOCK();
  ppppppuVar25 = *pppppppuVar20;
  *pppppppuVar20 = (ulonglong ******)((longlong)*pppppppuVar20 + 1);
  UNLOCK();
  uStack_190 = param_2;
  if (*pppppppuVar20 == (ulonglong ******)0x0 ||
      SCARRY8((longlong)ppppppuVar25,1) != (longlong)*pppppppuVar20 < 0) goto LAB_141f4984f;
  pppppppuVar18 = pppppppuVar20 + 2;
  LOCK();
  bVar40 = *(char *)(pppppppuVar20 + 2) == '\0';
  if (bVar40) {
    *(char *)(pppppppuVar20 + 2) = '\x01';
  }
  UNLOCK();
  pppppppuStack_188 = pppppppuVar20;
  if (!bVar40) {
    pdb_142dbd1a0(pppppppuVar18,param_2,1000000000);
  }
  pdb_140e9a150(pppppppuVar18);
  pppppppuStack_108 = pppppppuVar20 + 3;
  ppppppuStack_100 = pppppppuVar20[5];
  pppppppuVar20[5] = (ulonglong ******)0x0;
  pppppppuStack_110 = (ulonglong *******)(pppppppuVar20[4] + (longlong)ppppppuStack_100);
  lStack_f8 = 0;
  pppppppuVar21 = param_1 + 0xb;
  pcVar26 = (char *)((longlong)param_1 + 0x59);
  pppppppuVar24 = param_1 + 0xc;
  pppppppuVar20 = (ulonglong *******)pppppppuVar20[4];
  pppppppuStack_120 = pppppppuVar18;
  pppppppuStack_80 = pppppppuVar24;
  pppppppuStack_78 = param_1;
  pppppppuStack_68 = pppppppuVar21;
  while (lVar34 = lStack_f8, pppppppuVar18 = pppppppuStack_108, pppppppuVar20 != pppppppuStack_110)
  {
    pppppppuStack_118 = pppppppuVar20 + 1;
    pppppppuVar20 = (ulonglong *******)*pppppppuVar20;
    if (pppppppuVar20 == (ulonglong *******)0x0) {
      pdb_142dc8150(&UNK_143432448);
      goto LAB_141f4984f;
    }
    ppppppuVar25 = pppppppuVar20[2];
    pppppppuStack_58 = pppppppuVar20;
    if (ppppppuVar25 != (ulonglong ******)0x0) {
      ppppppuVar39 = pppppppuVar20[1];
      lVar34 = 0;
      do {
        uVar17 = *(uint *)((longlong)ppppppuVar39 + lVar34);
        ppppppuVar23 = (ulonglong ******)(ulonglong)uVar17;
        if (param_1[2] <= ppppppuVar23) {
          pdb_142dc81f2(ppppppuVar23,param_1[2],&UNK_143432460);
          goto LAB_141f4984f;
        }
        *(undefined1 *)((longlong)param_1[1] + (longlong)ppppppuVar23) = 0;
        ppppppuVar23 = (ulonglong ******)(ulonglong)(uVar17 >> 6);
        if (param_1[4] <= ppppppuVar23) {
          pdb_142dc81f2(ppppppuVar23,param_1[4],&UNK_1434322f0);
          goto LAB_141f4984f;
        }
        bVar5 = (byte)uVar17 & 0x3f;
        LOCK();
        param_1[3][(longlong)ppppppuVar23] =
             (ulonglong *****)
             ((ulonglong)param_1[3][(longlong)ppppppuVar23] &
             (-2L << bVar5 | 0xfffffffffffffffeU >> 0x40 - bVar5));
        UNLOCK();
        lVar34 = lVar34 + 4;
      } while ((longlong)ppppppuVar25 << 2 != lVar34);
    }
    LOCK();
    ppppppuVar25 = *pppppppuVar21;
    if (ppppppuVar25 == (ulonglong ******)0x0) {
      *pppppppuVar21 = (ulonglong ******)0x8;
    }
    UNLOCK();
    if (ppppppuVar25 != (ulonglong ******)0x0) {
      pdb_142dbc1f0(pppppppuVar21);
    }
    pdb_140e9a150(pppppppuVar21);
    pdb_140e9a150(pcVar26);
    pppppppuStack_170 = (ulonglong *******)pppppppuStack_58[1];
    ppppppuStack_158 = pppppppuStack_58[2];
    pppppppuStack_58[2] = (ulonglong ******)0x0;
    pppppppuStack_168 =
         (ulonglong *******)((longlong)pppppppuStack_170 + (longlong)ppppppuStack_158 * 4);
    pppppppuStack_160 = pppppppuStack_58;
    pppppppuStack_150 = (ulonglong *******)0x0;
    ppppppuVar25 = param_1[0xe];
    if ((ulonglong ******)((longlong)param_1[0xc] - (longlong)ppppppuVar25) < ppppppuStack_158) {
      uStack_59 = 1;
      pdb_142d7f1b0(pppppppuStack_80,ppppppuVar25,ppppppuStack_158,4,4);
      ppppppuVar25 = param_1[0xe];
    }
    ppppppuVar39 = param_1[0xd];
    pppppppuStack_e8 = pppppppuStack_170;
    pppppppuStack_e0 = pppppppuStack_168;
    pppppppuStack_c8 = pppppppuStack_150;
    pppppppuStack_d8 = pppppppuStack_160;
    ppppppuStack_d0 = ppppppuStack_158;
    if (pppppppuStack_170 != pppppppuStack_168) {
      pcVar35 = (char *)((longlong)pppppppuStack_168 + (-4 - (longlong)pppppppuStack_170));
      pppppppuVar20 = pppppppuStack_168;
      if (((char *)0x3b < pcVar35) &&
         ((pppppppuVar18 = (ulonglong *******)((longlong)ppppppuVar39 + (longlong)ppppppuVar25 * 4),
          pppppppuStack_168 <= pppppppuVar18 ||
          (uVar27 = (ulonglong)((longlong)pppppppuStack_168 + (-4 - (longlong)pppppppuStack_170)) &
                    0xfffffffffffffffc,
          (char *)((longlong)pppppppuVar18 + uVar27 + 4) <=
          (char *)((longlong)pppppppuStack_168 + (-4 - uVar27)))))) {
        uVar27 = ((ulonglong)pcVar35 >> 2) + 1;
        uVar36 = uVar27 & 0xfffffffffffffff8;
        pppppppuStack_e0 = (ulonglong *******)((longlong)pppppppuStack_168 + uVar36 * -4);
        puVar28 = (undefined4 *)((longlong)ppppppuVar39 + (longlong)ppppppuVar25 * 4 + 0x10);
        ppppppuVar25 = (ulonglong ******)((longlong)ppppppuVar25 + uVar36);
        lVar34 = 0;
        do {
          pcVar35 = (char *)((longlong)pppppppuStack_168 + lVar34 * 4 + -0x20);
          uVar9 = *(undefined4 *)pcVar35;
          uVar10 = *(undefined4 *)(pcVar35 + 4);
          uVar11 = *(undefined4 *)(pcVar35 + 8);
          uVar12 = *(undefined4 *)(pcVar35 + 0xc);
          pcVar35 = (char *)((longlong)pppppppuStack_168 + lVar34 * 4 + -0x10);
          uVar13 = *(undefined4 *)pcVar35;
          uVar14 = *(undefined4 *)(pcVar35 + 4);
          uVar15 = *(undefined4 *)(pcVar35 + 8);
          puVar28[-4] = *(undefined4 *)(pcVar35 + 0xc);
          puVar28[-3] = uVar15;
          puVar28[-2] = uVar14;
          puVar28[-1] = uVar13;
          *puVar28 = uVar12;
          puVar28[1] = uVar11;
          puVar28[2] = uVar10;
          puVar28[3] = uVar9;
          puVar28 = puVar28 + 8;
          lVar34 = lVar34 + -8;
        } while (-lVar34 != uVar36);
        pppppppuVar20 = pppppppuStack_e0;
        param_1 = pppppppuStack_78;
        if (uVar27 == uVar36) goto LAB_141f485cb;
      }
      do {
        pppppppuStack_e0 = (ulonglong *******)((longlong)pppppppuVar20 + -4);
        *(undefined4 *)((longlong)ppppppuVar39 + (longlong)ppppppuVar25 * 4) =
             *(undefined4 *)((longlong)pppppppuVar20 + -4);
        ppppppuVar25 = (ulonglong ******)((longlong)ppppppuVar25 + 1);
        pppppppuVar20 = pppppppuStack_e0;
      } while (pppppppuStack_e0 != pppppppuStack_170);
    }
LAB_141f485cb:
    param_1[0xe] = ppppppuVar25;
    uStack_59 = 0;
    pdb_1409693f0(&pppppppuStack_e8);
    pppppppuVar21 = pppppppuStack_68;
    pdb_140e9a350(pppppppuStack_68);
    pdb_140e9a350(pcVar26);
    LOCK();
    ppppppuVar25 = *pppppppuVar21;
    if (ppppppuVar25 == (ulonglong ******)0x8) {
      *pppppppuVar21 = (ulonglong ******)0x0;
    }
    UNLOCK();
    if (ppppppuVar25 != (ulonglong ******)0x8) {
      pdb_142dbca40(pppppppuVar21,0);
    }
    pppppppuVar20 = pppppppuStack_58;
    if (*pppppppuStack_58 != (ulonglong ******)0x0) {
      func_0x0001406abac0(pppppppuStack_58[1],(longlong)*pppppppuStack_58 << 2,4);
    }
    pppppppuVar24 = (ulonglong *******)0x20;
    func_0x0001406abac0(pppppppuVar20);
    pppppppuVar20 = pppppppuStack_118;
  }
  if (lStack_f8 != 0) {
    ppppppuVar25 = pppppppuStack_108[2];
    if (ppppppuStack_100 != ppppppuVar25) {
      pppppppuVar24 = (ulonglong *******)(pppppppuStack_108[1] + (longlong)ppppppuStack_100);
      func_0x000142e32770(pppppppuStack_108[1] + (longlong)ppppppuVar25);
    }
    pppppppuVar18[2] = (ulonglong ******)((longlong)ppppppuVar25 + lVar34);
  }
  pppppppuVar20 = pppppppuStack_120;
  pdb_140e9a350();
  LOCK();
  cVar16 = *(char *)pppppppuVar20;
  if (cVar16 == '\x01') {
    *(char *)pppppppuVar20 = '\0';
  }
  UNLOCK();
  if (cVar16 != '\x01') {
    pppppppuVar24 = (ulonglong *******)0x0;
    pdb_142dbcef0(pppppppuVar20);
  }
  LOCK();
  *pppppppuStack_188 = (ulonglong ******)((longlong)*pppppppuStack_188 + -1);
  UNLOCK();
  if (*pppppppuStack_188 == (ulonglong ******)0x0) {
    pdb_140c7ace0(&pppppppuStack_188);
  }
  cVar16 = pdb_140e94b40();
  pppppppuStack_120 = (ulonglong *******)CONCAT71(pppppppuStack_120._1_7_,cVar16);
  if (cVar16 == '\0') {
LAB_141f488e4:
    ppppppuVar25 = (ulonglong ******)((longlong)param_1[0xf] << 0xd);
    ppppppuStack_1b8 = ppppppuVar25;
    if (param_1[10] < ppppppuVar25) {
      uVar19 = pdb_140e1d1f0((longlong)param_1[0xf] << 0x13,0x32,1);
      uVar19 = pdb_140e1d260(uVar19,4);
      pdb_1428187b0(&pppppppuStack_e8,uStack_190,&UNK_143432380,0xc,uVar19,0);
      pppppppuVar20 = pppppppuStack_e0;
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
        pppppppuStack_e8 = (ulonglong *******)&UNK_143432390;
        pppppppuStack_e0 = (ulonglong *******)pdb_1402ed400;
        pppppppuStack_d8 = (ulonglong *******)&pppppppuStack_170;
        ppppppuStack_d0 = (ulonglong ******)pdb_140e18fa0;
        pppppppuVar20 = (ulonglong *******)&pppppppuStack_118;
        pdb_140f60760(pppppppuVar20,&UNK_1434323e9,&pppppppuStack_e8);
        pppppppuStack_188 = pppppppuStack_118;
        pppppppuStack_180 = pppppppuStack_110;
        pppppppuStack_178 = pppppppuStack_108;
        if (*_DAT_143ca4298 != 0) goto LAB_141f496b8;
        goto LAB_141f48b60;
      }
      pppppppuStack_118 = pppppppuStack_e0;
      if (2 < *_DAT_143ca8e90) {
        pppppppuStack_160 = param_1 + 10;
        pppppppuStack_170 = (ulonglong *******)&UNK_143432390;
        pppppppuStack_168 = (ulonglong *******)pdb_1402ed400;
        ppppppuStack_158 = (ulonglong ******)pdb_140f72a40;
        pppppppuStack_150 = &ppppppuStack_1b8;
        pppppppuStack_148 = (ulonglong *******)pdb_140f72a40;
        pppppppuStack_e8 = (ulonglong *******)0x0;
        pppppppuStack_e0 = (ulonglong *******)&UNK_1434323bd;
        pppppppuStack_d8 = (ulonglong *******)0x2c;
        ppppppuStack_d0 = (ulonglong ******)0x0;
        pppppppuStack_c8 = (ulonglong *******)&UNK_143432298;
        pppppppuStack_c0 = (ulonglong *******)0x38;
        uStack_b8 = 3;
        uStack_b0 = &UNK_1434323bd;
        uStack_a8 = 0x2c;
        uStack_a0 = 0x16200000001;
        puStack_98 = &UNK_1434323a0;
        pppppppuStack_90 = (ulonglong *******)&pppppppuStack_170;
        uStack_5a = 1;
        pdb_140f332f0(&uStack_69,&pppppppuStack_e8);
      }
      pppppppuStack_58 = pppppppuVar20;
      pdb_140fc95b0(param_1);
      *pppppppuStack_78 = (ulonglong ******)pppppppuStack_58;
      pppppppuStack_78[10] = ppppppuVar25;
      ppppppuVar25 = pppppppuStack_78[8];
      if (pppppppuStack_78[4] < pppppppuStack_78[8]) {
        ppppppuVar25 = pppppppuStack_78[4];
      }
      param_1 = pppppppuStack_78;
      if (ppppppuVar25 != (ulonglong ******)0x0) {
        ppppppuVar39 = pppppppuStack_78[7];
        ppppppuVar23 = pppppppuStack_78[3];
        uVar27 = (ulonglong)((uint)ppppppuVar25 & 7);
        if (ppppppuVar25 < (ulonglong ******)0x8) {
          uVar36 = 0;
        }
        else {
          uVar36 = 0;
          do {
            LOCK();
            ppppppuVar39[uVar36] =
                 (ulonglong *****)
                 ((ulonglong)ppppppuVar39[uVar36] | (ulonglong)ppppppuVar23[uVar36]);
            UNLOCK();
            LOCK();
            ppppppuVar39[uVar36 + 1] =
                 (ulonglong *****)
                 ((ulonglong)ppppppuVar39[uVar36 + 1] | (ulonglong)ppppppuVar23[uVar36 + 1]);
            UNLOCK();
            LOCK();
            ppppppuVar39[uVar36 + 2] =
                 (ulonglong *****)
                 ((ulonglong)ppppppuVar39[uVar36 + 2] | (ulonglong)ppppppuVar23[uVar36 + 2]);
            UNLOCK();
            LOCK();
            ppppppuVar39[uVar36 + 3] =
                 (ulonglong *****)
                 ((ulonglong)ppppppuVar39[uVar36 + 3] | (ulonglong)ppppppuVar23[uVar36 + 3]);
            UNLOCK();
            LOCK();
            ppppppuVar39[uVar36 + 4] =
                 (ulonglong *****)
                 ((ulonglong)ppppppuVar39[uVar36 + 4] | (ulonglong)ppppppuVar23[uVar36 + 4]);
            UNLOCK();
            LOCK();
            ppppppuVar39[uVar36 + 5] =
                 (ulonglong *****)
                 ((ulonglong)ppppppuVar39[uVar36 + 5] | (ulonglong)ppppppuVar23[uVar36 + 5]);
            UNLOCK();
            LOCK();
            ppppppuVar39[uVar36 + 6] =
                 (ulonglong *****)
                 ((ulonglong)ppppppuVar39[uVar36 + 6] | (ulonglong)ppppppuVar23[uVar36 + 6]);
            UNLOCK();
            LOCK();
            ppppppuVar39[uVar36 + 7] =
                 (ulonglong *****)
                 ((ulonglong)ppppppuVar39[uVar36 + 7] | (ulonglong)ppppppuVar23[uVar36 + 7]);
            UNLOCK();
            uVar36 = uVar36 + 8;
          } while (((ulonglong)ppppppuVar25 & 0xfffffffffffffff8) != uVar36);
          if (uVar27 == 0) goto LAB_141f48ef1;
        }
        uVar33 = 0;
        do {
          LOCK();
          ppppppuVar39[uVar36 + uVar33] =
               (ulonglong *****)
               ((ulonglong)ppppppuVar39[uVar36 + uVar33] | (ulonglong)ppppppuVar23[uVar36 + uVar33])
          ;
          UNLOCK();
          uVar33 = uVar33 + 1;
        } while (uVar27 != uVar33);
      }
    }
LAB_141f48ef1:
    ppppppuVar39 = param_1[10];
    pppppppuStack_170 = (ulonglong *******)0x0;
    pppppppuStack_168 = (ulonglong *******)0x8;
    pppppppuStack_160 = (ulonglong *******)0x0;
    ppppppuVar23 = param_1[7];
    ppppppuVar25 = ppppppuVar23 + (longlong)param_1[8];
    lVar34 = 0;
    uVar36 = 0;
    uVar27 = 0;
    while (pppppppuVar20 = pppppppuStack_160, ppppppuVar23 != ppppppuVar25) {
      param_1 = (ulonglong *******)(lVar34 << 6);
      while( true ) {
        lVar34 = lVar34 + 1;
        pppppuVar30 = *ppppppuVar23;
        *ppppppuVar23 = (ulonglong *****)0x0;
        ppppppuVar23 = ppppppuVar23 + 1;
        if (pppppuVar30 != (ulonglong *****)0x0) break;
        param_1 = param_1 + 8;
        if (ppppppuVar23 == ppppppuVar25) goto LAB_141f4903b;
      }
      do {
        iVar7 = 0;
        for (pppppuVar8 = pppppuVar30; ((ulonglong)pppppuVar8 & 1) == 0;
            pppppuVar8 = (ulonglong *****)((ulonglong)pppppuVar8 >> 1 | 0x8000000000000000)) {
          iVar7 = iVar7 + 1;
        }
        pppppuVar30 = (ulonglong *****)((longlong)pppppuVar30 - 1U & (ulonglong)pppppuVar30);
        uVar17 = iVar7 + (int)param_1;
        if (uVar17 < (uint)((ulonglong)ppppppuVar39 >> 5)) {
          uVar31 = (uint)uVar36;
          uVar33 = uVar27;
          if ((uVar31 != uVar17) && (uVar33 = (ulonglong)uVar17, (uint)uVar27 < uVar31)) {
            if (pppppppuStack_160 == pppppppuStack_170) {
              uStack_49 = 1;
              pppppppuStack_58 = (ulonglong *******)CONCAT44(pppppppuStack_58._4_4_,uVar31);
              pppppppuStack_68 = (ulonglong *******)CONCAT44(pppppppuStack_68._4_4_,(uint)uVar27);
              pppppppuStack_80 = pppppppuStack_160;
              pdb_142d8afd0(&pppppppuStack_170);
              uVar27 = (ulonglong)pppppppuStack_68 & 0xffffffff;
              uVar36 = (ulonglong)pppppppuStack_58 & 0xffffffff;
              pppppppuStack_160 = pppppppuStack_80;
            }
            pppppppuStack_168[(longlong)pppppppuStack_160 * 2] = (ulonglong ******)(uVar27 << 5);
            pppppppuStack_168[(longlong)pppppppuStack_160 * 2 + 1] = (ulonglong ******)(uVar36 << 5)
            ;
            pppppppuStack_160 = (ulonglong *******)((longlong)pppppppuStack_160 + 1);
            uVar33 = (ulonglong)uVar17;
          }
          uVar36 = (ulonglong)(uVar17 + 1);
          uVar27 = uVar33;
        }
      } while (pppppuVar30 != (ulonglong *****)0x0);
    }
LAB_141f4903b:
    if ((uint)uVar27 < (uint)uVar36) {
      if (pppppppuStack_160 == pppppppuStack_170) {
        uStack_49 = 1;
        pdb_142d8afd0(&pppppppuStack_170);
      }
      pppppppuStack_168[(longlong)pppppppuVar20 * 2] = (ulonglong ******)(uVar27 << 5);
      pppppppuStack_168[(longlong)pppppppuVar20 * 2 + 1] = (ulonglong ******)(uVar36 << 5);
      pppppppuStack_160 = (ulonglong *******)((longlong)pppppppuVar20 + 1);
    }
    uStack_49 = 1;
    cVar16 = pdb_140e94b40();
    pppppppuVar18 = pppppppuStack_78;
    if (cVar16 != '\0') {
      puVar37 = &UNK_1434324b0;
      puVar32 = &UNK_143432478;
      do {
        bVar5 = puVar37[-1];
        uVar17 = (uint)(char)bVar5;
        if ((char)bVar5 < '\0') {
          bVar3 = puVar37[-2];
          if ((char)bVar3 < -0x40) {
            bVar4 = puVar37[-3];
            if ((char)bVar4 < -0x40) {
              pbVar1 = puVar37 + -4;
              puVar37 = puVar37 + -4;
              uVar17 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
            }
            else {
              puVar37 = puVar37 + -3;
              uVar17 = bVar4 & 0xf;
            }
            uVar17 = bVar3 & 0x3f | uVar17 << 6;
          }
          else {
            puVar37 = puVar37 + -2;
            uVar17 = bVar3 & 0x1f;
          }
          uVar17 = (uint)(bVar5 & 0x3f) | uVar17 << 6;
          if (uVar17 != 0x5c) goto LAB_141f49134;
LAB_141f49146:
          if ((undefined *)0x38 < puVar37 + -0x143432477) goto LAB_141f497f1;
          lVar34 = 0x38 - (longlong)(puVar37 + -0x143432477);
          puVar32 = puVar37 + 1;
          goto LAB_141f49169;
        }
        puVar37 = puVar37 + -1;
        if (uVar17 == 0x5c) goto LAB_141f49146;
LAB_141f49134:
        if (uVar17 == 0x2f) goto LAB_141f49146;
      } while (puVar37 != &UNK_143432478);
      lVar34 = 0x38;
LAB_141f49169:
      uStack_49 = 1;
      pppppppuVar20 = (ulonglong *******)&pppppppuStack_e8;
      uVar19 = pdb_140f67ab0(pppppppuStack_160,pppppppuVar20,0x14);
      if ((longlong)pppppppuVar20 < 0) {
        uVar38 = 0;
LAB_141f49192:
        uStack_49 = 1;
        pdb_142dc7e2a(uVar38,pppppppuVar20);
        goto LAB_141f4984f;
      }
      pppppppuStack_68 = pppppppuVar20;
      if (pppppppuVar20 == (ulonglong *******)0x0) {
        pppppppuStack_58 = (ulonglong *******)0x1;
      }
      else {
        pdb_14007ee60();
        uVar38 = 1;
        pppppppuVar18 = (ulonglong *******)func_0x0001406abab0(pppppppuVar20,1);
        if (pppppppuVar18 == (ulonglong *******)0x0) goto LAB_141f49192;
        pppppppuStack_58 = pppppppuVar18;
        func_0x000142e32760(pppppppuVar18,uVar19,pppppppuVar20);
      }
      pppppppuVar18 = pppppppuStack_78;
      pppppppuVar20 = (ulonglong *******)pdb_140e97000();
      if ((*(char *)(pppppppuVar20 + 0xd) != '\x01') &&
         (pppppppuVar20 = (ulonglong *******)pdb_142e293d0(pppppppuVar20,0),
         pppppppuVar20 == (ulonglong *******)0x0)) {
        pdb_142dc7890(&UNK_14359bf00);
        goto LAB_141f4984f;
      }
      pppppppuVar21 = pppppppuStack_68;
      if (*pppppppuVar20 != (ulonglong ******)0x0) {
        pdb_142dc8090(&UNK_14359bf70);
        goto LAB_141f4984f;
      }
      *pppppppuVar20 = (ulonglong ******)0xffffffffffffffff;
      pppppppuStack_80 = pppppppuVar20;
      uStack_198 = pdb_140e94f10(pppppppuVar20 + 1,&UNK_1434324b0,0x17,puVar32,lVar34,
                                 pppppppuStack_58,pppppppuStack_68);
      *pppppppuStack_80 = (ulonglong ******)((longlong)*pppppppuStack_80 + 1);
      if (pppppppuVar21 != (ulonglong *******)0x0) {
        func_0x0001406abac0(pppppppuStack_58,pppppppuVar21,1);
      }
    }
    pppppppuStack_80 = (ulonglong *******)CONCAT71(pppppppuStack_80._1_7_,cVar16);
    pppppppuStack_e8 = (ulonglong *******)0x0;
    pppppppuStack_e0 = (ulonglong *******)0x8;
    pppppppuStack_d8 = (ulonglong *******)0x0;
    pppppppuStack_1b0 = pppppppuStack_170;
    pppppppuStack_68 = pppppppuStack_168 + (longlong)pppppppuStack_160 * 2;
    pppppppuVar20 = (ulonglong *******)0xffffffffffffffff;
    pppppppuVar24 = (ulonglong *******)0x0;
    pppppppuStack_1a8 = pppppppuStack_168;
    pppppppuVar21 = pppppppuStack_168;
    while (pppppppuVar21 != pppppppuStack_68) {
      pppppppuStack_58 = pppppppuVar21 + 2;
      ppppppuVar25 = pppppppuVar21[1];
      ppppppuVar39 = *pppppppuVar21;
      while (pppppppuVar21 = pppppppuStack_58, ppppppuVar39 < ppppppuVar25) {
        param_1 = (ulonglong *******)((ulonglong)ppppppuVar39 >> 0xd);
        ppppppuVar23 = (ulonglong ******)(((ulonglong)ppppppuVar39 & 0xffffffffffffe000) + 0x2000);
        if (ppppppuVar25 <= ppppppuVar23) {
          ppppppuVar23 = ppppppuVar25;
        }
        if (param_1 != pppppppuVar20) {
          if (pppppppuVar24 != (ulonglong *******)0x0) {
            if (pppppppuStack_78[6] <= pppppppuVar20) {
              pdb_142dc81f2(pppppppuVar20,pppppppuStack_78[6],&UNK_143432308);
              goto LAB_141f4984f;
            }
            if (*(int *)(pppppppuStack_78[5] + (longlong)pppppppuVar20 * 3 + 2) != 0) {
              pdb_142dc8110(&UNK_143432320,0x11,&UNK_143432338);
              goto LAB_141f4984f;
            }
            ppppppuVar2 = pppppppuStack_78[5] + (longlong)pppppppuVar20 * 3;
            pdb_142818d40(pppppppuStack_78,uStack_190,*ppppppuVar2,ppppppuVar2[1],pppppppuStack_e0,
                          pppppppuStack_d8,(longlong)pppppppuVar20 << 0x13);
            pppppppuStack_d8 = (ulonglong *******)0x0;
          }
          pppppppuVar24 = (ulonglong *******)0x0;
          pppppppuVar20 = param_1;
        }
        if (pppppppuVar24 == pppppppuStack_e8) {
          pdb_142d8afd0(&pppppppuStack_e8);
        }
        pppppppuStack_e0[(longlong)pppppppuVar24 * 2] =
             (ulonglong ******)(ulonglong)((uint)ppppppuVar39 & 0x1fff);
        pppppppuStack_e0[(longlong)pppppppuVar24 * 2 + 1] =
             (ulonglong ******)
             ((longlong)ppppppuVar23 - ((ulonglong)ppppppuVar39 & 0xffffffffffffe000));
        pppppppuVar24 = (ulonglong *******)((longlong)pppppppuVar24 + 1);
        pppppppuVar18 = pppppppuStack_78;
        ppppppuVar39 = ppppppuVar23;
        pppppppuStack_d8 = pppppppuVar24;
      }
    }
    if (pppppppuStack_1b0 != (ulonglong *******)0x0) {
      func_0x0001406abac0(pppppppuStack_1a8,(longlong)pppppppuStack_1b0 << 4,8);
      pppppppuVar24 = pppppppuStack_d8;
    }
    if (pppppppuVar24 != (ulonglong *******)0x0) {
      if (pppppppuVar18[6] <= pppppppuVar20) {
        pdb_142dc81f2(pppppppuVar20,pppppppuVar18[6],&UNK_143432308);
        goto LAB_141f4984f;
      }
      if (*(int *)(pppppppuVar18[5] + (longlong)pppppppuVar20 * 3 + 2) != 0) {
        pdb_142dc8110(&UNK_143432320,0x11,&UNK_143432338);
        goto LAB_141f4984f;
      }
      ppppppuVar25 = pppppppuVar18[5] + (longlong)pppppppuVar20 * 3;
      pppppppuVar20 = (ulonglong *******)((longlong)pppppppuVar20 << 0x13);
      pdb_142818d40(pppppppuVar18,uStack_190,*ppppppuVar25,ppppppuVar25[1],pppppppuStack_e0,
                    pppppppuStack_d8,pppppppuVar20);
      pppppppuStack_d8 = (ulonglong *******)0x0;
    }
    cVar16 = (char)pppppppuStack_80;
    if (pppppppuStack_e8 != (ulonglong *******)0x0) {
      func_0x0001406abac0(pppppppuStack_e0,(longlong)pppppppuStack_e8 << 4,8);
    }
    if (cVar16 != '\0') {
      uStack_49 = 0;
      pppppppuVar18 = (ulonglong *******)pdb_140e97000();
      if (*(char *)(pppppppuVar18 + 0xd) != '\x01') {
        uStack_49 = 0;
        pppppppuVar18 = (ulonglong *******)pdb_142e293d0(pppppppuVar18,0);
        if (pppppppuVar18 == (ulonglong *******)0x0) {
          uStack_49 = 0;
          pdb_142dc7890(&UNK_14359bf00);
          goto LAB_141f4984f;
        }
      }
      if (*pppppppuVar18 != (ulonglong ******)0x0) {
        uStack_49 = 0;
        pdb_142dc8090(&UNK_14359bf70);
        goto LAB_141f4984f;
      }
      *pppppppuVar18 = (ulonglong ******)0xffffffffffffffff;
      pppppppuStack_78 = pppppppuVar18;
      pdb_140e95370(pppppppuVar18 + 1,uStack_198);
      *pppppppuStack_78 = (ulonglong ******)((longlong)*pppppppuStack_78 + 1);
    }
    if ((char)pppppppuStack_120 == '\0') {
      return;
    }
    plVar22 = (longlong *)pdb_140e97000();
    if (((char)plVar22[0xd] == '\x01') ||
       (plVar22 = (longlong *)pdb_142e293d0(plVar22,0), plVar22 != (longlong *)0x0)) {
      if (*plVar22 == 0) {
        *plVar22 = -1;
        pppppppuStack_78 = (ulonglong *******)plVar22;
        pdb_140e95370(plVar22 + 1,uStack_1a0);
        *pppppppuStack_78 = (ulonglong ******)((longlong)*pppppppuStack_78 + 1);
        return;
      }
    }
    else {
      pdb_142dc7890(&UNK_14359bf00);
    }
    pdb_142dc8090(&UNK_14359bf70);
LAB_141f496b8:
    pppppppuStack_118 = (ulonglong *******)CONCAT71(pppppppuStack_118._1_7_,1);
    pppppppuStack_e8 = pppppppuVar20;
    pdb_142dc7060(_DAT_143ca4298,0,&pppppppuStack_e8,&UNK_143432598,&UNK_143432400);
LAB_141f48b60:
    pdb_1400f0d40(&pppppppuStack_e8,*_DAT_143ca4290);
    if ((int)pppppppuStack_e8 == 1) {
      pppppppuStack_118 = pppppppuStack_e0;
      pppppppuStack_110 =
           (ulonglong *******)CONCAT71(pppppppuStack_110._1_7_,pppppppuStack_d8._0_1_);
      pdb_142dc8170(&UNK_143432418,0x13,&pppppppuStack_118,&UNK_1434326e0,&UNK_143432400);
      goto LAB_141f4984f;
    }
    pppppppuStack_58 = pppppppuStack_e0;
    pppppppuStack_68 = (ulonglong *******)CONCAT71(pppppppuStack_68._1_7_,pppppppuStack_d8._0_1_);
    pdb_14007ee60();
    pppppppuVar18 = (ulonglong *******)func_0x0001406abab0(0xf,1);
    if (pppppppuVar18 != (ulonglong *******)0x0) {
      builtin_strncpy((char *)((longlong)pppppppuVar18 + 7),"path! ()",8);
      *pppppppuVar18 = (ulonglong ******)0x705f656c75646f6d;
      pppppppuStack_e8 = (ulonglong *******)0xf;
      pppppppuStack_d8 = (ulonglong *******)0xf;
      pppppppuStack_e0 = pppppppuVar18;
      pdb_142d7f1b0(&pppppppuStack_e8,0xf,0x17,1,1);
      pppppppuVar21 = pppppppuStack_178;
      pppppppuVar18 = pppppppuStack_180;
      uVar19 = _UNK_143432433;
      *(undefined8 *)((longlong)pppppppuStack_e0 + (longlong)pppppppuStack_d8) = _DAT_14343242b;
      *(undefined8 *)((char *)((longlong)pppppppuStack_e0 + (longlong)pppppppuStack_d8) + 8) =
           uVar19;
      builtin_strncpy((char *)((longlong)pppppppuStack_e0 + (longlong)pppppppuStack_d8 + 0xf),
                      " :: Warn",8);
      pppppppuVar24 = (ulonglong *******)((longlong)pppppppuStack_d8 + 0x17);
      pppppppuStack_118 = pppppppuStack_e8;
      pppppppuStack_110 = pppppppuStack_e0;
      pppppppuStack_108 = pppppppuVar24;
      if ((ulonglong *******)((longlong)pppppppuStack_e8 - (longlong)pppppppuVar24) <
          pppppppuStack_178) {
        pdb_142d7f1b0(&pppppppuStack_118,pppppppuVar24,pppppppuStack_178,1,1);
LAB_141f48c75:
        pppppppuVar24 = pppppppuStack_108;
        func_0x000142e32760((char *)((longlong)pppppppuStack_110 + (longlong)pppppppuStack_108),
                            pppppppuVar18);
      }
      else if (pppppppuStack_178 != (ulonglong *******)0x0) goto LAB_141f48c75;
      pppppppuStack_108 = (ulonglong *******)((longlong)pppppppuVar24 + (longlong)pppppppuVar21);
      pppppppuStack_e8 = pppppppuStack_118;
      pppppppuStack_e0 = pppppppuStack_110;
      pppppppuStack_d8 = pppppppuStack_108;
      cVar16 = pdb_141f10610(pppppppuStack_58 + 1,&pppppppuStack_e8);
      if ((cVar16 == '\0') && (1 < *_DAT_143ca8e90)) {
        pppppppuStack_118 = (ulonglong *******)&pppppppuStack_188;
        pppppppuStack_110 = (ulonglong *******)pdb_140001020;
        pppppppuStack_e8 = (ulonglong *******)0x0;
        pppppppuStack_e0 = (ulonglong *******)&UNK_1434323bd;
        pppppppuStack_d8 = (ulonglong *******)0x2c;
        ppppppuStack_d0 = (ulonglong ******)0x0;
        pppppppuStack_c8 = (ulonglong *******)&UNK_143432298;
        pppppppuStack_c0 = (ulonglong *******)0x38;
        uStack_b8 = 2;
        uStack_b0 = &UNK_1434323bd;
        uStack_a8 = 0x2c;
        uStack_a0 = 0x16f00000001;
        puStack_98 = &UNK_143432442;
        pppppppuStack_90 = pppppppuVar20;
        pdb_140f332f0(&uStack_69,&pppppppuStack_e8);
      }
      pppppppuVar20 = pppppppuStack_58;
      if ((((char)pppppppuStack_68 == '\0') && ((*_DAT_143ca8f38 & 0x7fffffffffffffff) != 0)) &&
         (cVar16 = pdb_142dc79e0(), cVar16 == '\0')) {
        *(char *)((longlong)pppppppuVar20 + 1) = '\x01';
      }
      LOCK();
      cVar16 = *(char *)pppppppuVar20;
      *(char *)pppppppuVar20 = '\0';
      UNLOCK();
      if (cVar16 == '\x02') {
        pdb_142dc6ca0();
      }
      if (pppppppuStack_188 != (ulonglong *******)0x0) {
        func_0x0001406abac0();
      }
      pppppppuVar20 = (ulonglong *******)0x0;
      if ((ulonglong *******)0x7 < pppppppuStack_170) {
        pppppppuVar20 = pppppppuStack_170 + -1;
      }
      if (pppppppuVar20 == (ulonglong *******)0x0) {
        pppppppuVar18 = pppppppuStack_148;
        pppppppuVar21 = pppppppuStack_150;
        if (((pppppppuStack_170 < (ulonglong *******)0x6) &&
            ((0x32UL >> ((ulonglong)pppppppuStack_170 & 0x3f) & 1) != 0)) &&
           (pppppppuStack_168 != (ulonglong *******)0x0)) {
          func_0x0001406abac0(pppppppuStack_160);
          pppppppuVar18 = pppppppuStack_148;
          pppppppuVar21 = pppppppuStack_150;
        }
      }
      else {
        pppppppuVar18 = pppppppuStack_160;
        pppppppuVar21 = pppppppuStack_168;
        if (pppppppuVar20 == (ulonglong *******)0x1) {
          pdb_1404b83f0(&pppppppuStack_168);
          goto LAB_141f48ef1;
        }
      }
      if (pppppppuVar21 != (ulonglong *******)0x0) {
        func_0x0001406abac0(pppppppuVar18);
      }
      goto LAB_141f48ef1;
    }
  }
  else {
    lVar29 = 0x50;
    lVar34 = pdb_141f4aaa0(0x50);
    pcVar26 = 
    "country_core::render::sparse_instance_buffer::SparseInstanceBuffer<_>::gpu_flush::f/home/h3/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/puffin-0.14.1/src/lib.rs"
    ;
    if (lVar34 != 1) {
LAB_141f4874c:
      puVar32 = &UNK_1434324b0;
      puVar37 = &UNK_143432478;
      do {
        bVar5 = puVar32[-1];
        uVar17 = (uint)(char)bVar5;
        if ((char)bVar5 < '\0') {
          bVar3 = puVar32[-2];
          if ((char)bVar3 < -0x40) {
            bVar4 = puVar32[-3];
            if ((char)bVar4 < -0x40) {
              pbVar1 = puVar32 + -4;
              puVar32 = puVar32 + -4;
              uVar17 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
            }
            else {
              puVar32 = puVar32 + -3;
              uVar17 = bVar4 & 0xf;
            }
            uVar17 = bVar3 & 0x3f | uVar17 << 6;
          }
          else {
            puVar32 = puVar32 + -2;
            uVar17 = bVar3 & 0x1f;
          }
          uVar17 = (uint)(bVar5 & 0x3f) | uVar17 << 6;
          if (uVar17 != 0x5c) goto LAB_141f487d4;
LAB_141f487e5:
          puVar37 = puVar32 + -0x143432477;
          if ((undefined *)0x38 < puVar37) {
            pdb_142dc8070(&UNK_143432478,0x38,puVar37,0x38,&UNK_1434327b0);
LAB_141f497f1:
            uStack_49 = 1;
            pdb_142dc8070(&UNK_143432478,0x38);
            goto LAB_141f4984f;
          }
          lVar34 = 0x38 - (longlong)puVar37;
          puVar37 = puVar32 + 1;
          goto LAB_141f48807;
        }
        puVar32 = puVar32 + -1;
        if (uVar17 == 0x5c) goto LAB_141f487e5;
LAB_141f487d4:
        if (uVar17 == 0x2f) goto LAB_141f487e5;
      } while (puVar32 != &UNK_143432478);
      lVar34 = 0x38;
LAB_141f48807:
      pppppppuStack_118 = (ulonglong *******)&UNK_143432648;
      pppppppuStack_110 = (ulonglong *******)0x35;
      pppppppuStack_170 = (ulonglong *******)&pppppppuStack_118;
      pppppppuStack_168 = (ulonglong *******)pdb_1402ed400;
      pdb_140f60760(&pppppppuStack_e8,&UNK_143432442,&pppppppuStack_170);
      pppppppuVar20 = pppppppuStack_d8;
      pppppppuStack_68 = pppppppuStack_e8;
      pppppppuStack_58 = pppppppuStack_e0;
      pppppppuVar18 = (ulonglong *******)pdb_140e97000();
      if ((*(char *)(pppppppuVar18 + 0xd) != '\x01') &&
         (pppppppuVar18 = (ulonglong *******)pdb_142e293d0(pppppppuVar18,0),
         pppppppuVar18 == (ulonglong *******)0x0)) {
        pdb_142dc7890(&UNK_14359bf00);
        goto LAB_141f4984f;
      }
      if (*pppppppuVar18 != (ulonglong ******)0x0) {
        pdb_142dc8090(&UNK_14359bf70);
        goto LAB_141f4984f;
      }
      *pppppppuVar18 = (ulonglong ******)0xffffffffffffffff;
      pppppppuStack_80 = pppppppuVar18;
      uStack_1a0 = pdb_140e94f10(pppppppuVar18 + 1,pcVar26,lVar29,puVar37,lVar34,pppppppuStack_58,
                                 pppppppuVar20);
      *pppppppuStack_80 = (ulonglong ******)((longlong)*pppppppuStack_80 + 1);
      if (pppppppuStack_68 != (ulonglong *******)0x0) {
        func_0x0001406abac0(pppppppuStack_58);
      }
      goto LAB_141f488e4;
    }
    if (pppppppuVar24 < (ulonglong *******)0x51) {
      uVar27 = pdb_141f4aaa0(pppppppuVar24);
      if ((uVar27 & 1) != 0) {
        if ((char *)0x50 < (char *)((longlong)pppppppuVar24 + 2U)) {
          pdb_142dc8070(&UNK_143432700,0x50,(char *)((longlong)pppppppuVar24 + 2U),0x50,
                        &UNK_1434327e8);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar29 = 0x4e - (longlong)pppppppuVar24;
        pcVar26 = (char *)((longlong)pppppppuVar24 + 0x143432702);
      }
      goto LAB_141f4874c;
    }
    pdb_142dc8070(&UNK_143432700,0x50,0,pppppppuVar24,&UNK_1434327d0);
  }
  pdb_142dc7e2a(1,0xf);
LAB_141f4984f:
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}

