// VA 0x140bf31b0, PDB extent 2250 bytes
// country_core::resources::rt::bvh_builder::bvh_builder_worker
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/rt/bvh_builder.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::resources::rt::bvh_builder::bvh_builder_worker
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/rt/bvh_builder.rs
   Extent: 2250 */

void pdb_140bf31b0(longlong *param_1)

{
  undefined1 auVar1 [16];
  byte *arg0;
  byte *arg0_00;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  char cVar9;
  byte bVar10;
  undefined1 (*pauVar11) [16];
  longlong lVar12;
  undefined1 (*pauVar13) [16];
  ulonglong arg1;
  uint uVar14;
  bool bVar15;
  undefined1 (*pauStack_1e0) [16];
  byte *pbStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  longlong lStack_1a0;
  undefined1 (*pauStack_198) [16];
  undefined1 (*pauStack_190) [16];
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  longlong lStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  longlong ***ppplStack_140;
  undefined8 uStack_128;
  undefined1 (*pauStack_d8) [16];
  longlong lStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong lStack_a8;
  char cStack_a0;
  undefined4 uStack_9f;
  undefined3 uStack_9b;
  byte *pbStack_90;
  longlong *plStack_88;
  byte bStack_80;
  longlong *plStack_78;
  longlong **pplStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  puVar7 = _DAT_143ca8f38;
  uStack_48 = 0xfffffffffffffffe;
  plStack_58 = param_1;
  do {
    while( true ) {
      plVar8 = plStack_58;
      plVar3 = plStack_58 + 2;
      LOCK();
      bVar15 = (int)plStack_58[2] == 0;
      if (bVar15) {
        *(int *)(plStack_58 + 2) = 0x3fffffff;
      }
      UNLOCK();
      if (!bVar15) {
        pdb_142dc6e70(plVar3);
      }
      if ((*puVar7 & 0x7fffffffffffffff) == 0) {
        bStack_80 = 0;
        cVar9 = (char)plVar8[3];
      }
      else {
        bStack_80 = pdb_142dc79e0();
        bStack_80 = bStack_80 ^ 1;
        cVar9 = (char)plVar8[3];
      }
      if (cVar9 != '\0') {
        plStack_88 = plVar3;
        if (2 < *_DAT_143ca8e90) {
          pplStack_70 = &plStack_88;
          pcStack_68 = pdb_141a1fee0;
          pauStack_198 = (undefined1 (*) [16])0x0;
          pauStack_190 = (undefined1 (*) [16])&UNK_143066121;
          uStack_188 = (undefined1 *)0x28;
          uStack_180 = 0;
          uStack_178 = &UNK_1430660ed;
          uStack_170 = 0x33;
          uStack_168 = 3;
          uStack_160 = &UNK_143066121;
          lStack_158 = 0x28;
          uStack_150 = 0x2f00000001;
          puStack_148 = &UNK_1430660ca;
          ppplStack_140 = &pplStack_70;
          pdb_140f332f0(&uStack_4a,&pauStack_198);
        }
        plVar3 = plStack_88;
        if (((bStack_80 == 0) && ((*puVar7 & 0x7fffffffffffffff) != 0)) &&
           (cVar9 = pdb_142dc79e0(), cVar9 == '\0')) {
          *(undefined1 *)(plVar3 + 1) = 1;
        }
        LOCK();
        lVar6 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -0x3fffffff;
        UNLOCK();
        if (0x3fffffff < (int)lVar6 + 0xc0000001U) {
          pdb_142dc6fa0(plVar3);
        }
        LOCK();
        *plStack_58 = *plStack_58 + -1;
        UNLOCK();
        if (*plStack_58 == 0) {
          pdb_140c7a820(&plStack_58);
        }
        return;
      }
      cVar9 = (char)plVar8[0x14];
      *(undefined1 *)(plVar8 + 0x14) = 2;
      if (cVar9 != '\x02') break;
      if (((bStack_80 == 0) && ((*puVar7 & 0x7fffffffffffffff) != 0)) &&
         (cVar9 = pdb_142dc79e0(), cVar9 == '\0')) {
        *(undefined1 *)(plVar8 + 3) = 1;
      }
      LOCK();
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -0x3fffffff;
      UNLOCK();
      if (0x3fffffff < (int)lVar6 + 0xc0000001U) {
        pdb_142dc6fa0(plVar3);
      }
      pdb_140f502d0(0,1000000);
    }
    lStack_a8 = plVar8[0x13];
    pauStack_d8 = (undefined1 (*) [16])plVar8[0xd];
    lStack_d0 = plVar8[0xe];
    uStack_c8 = (undefined4)plVar8[0xf];
    uStack_c4 = *(undefined4 *)((longlong)plVar8 + 0x7c);
    uStack_c0 = (undefined4)plVar8[0x10];
    uStack_bc = *(undefined4 *)((longlong)plVar8 + 0x84);
    uStack_b8 = (undefined4)plVar8[0x11];
    uStack_b4 = *(undefined4 *)((longlong)plVar8 + 0x8c);
    uStack_b0 = (undefined4)plVar8[0x12];
    uStack_ac = *(undefined4 *)((longlong)plVar8 + 0x94);
    uStack_9f = *(undefined4 *)((longlong)plVar8 + 0xa1);
    uStack_9b = (undefined3)((uint)*(undefined4 *)((longlong)plVar8 + 0xa4) >> 8);
    *(undefined1 *)(plVar8 + 0x15) = 1;
    cStack_a0 = cVar9;
    if (((bStack_80 == 0) && ((*puVar7 & 0x7fffffffffffffff) != 0)) &&
       (cVar9 = pdb_142dc79e0(), cVar9 == '\0')) {
      *(undefined1 *)(plVar8 + 3) = 1;
    }
    LOCK();
    lVar6 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -0x3fffffff;
    UNLOCK();
    if (0x3fffffff < (int)lVar6 + 0xc0000001U) {
      pdb_142dc6fa0(plVar3);
    }
    uStack_188 = *pauStack_d8 + lStack_d0 + 1;
    auVar1 = *pauStack_d8;
    uStack_178 = (byte *)CONCAT44(uStack_bc,uStack_c0);
    pauStack_198 = pauStack_d8;
    pauStack_190 = pauStack_d8 + 1;
    uStack_180 = CONCAT62(uStack_180._2_6_,
                          ~((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
                           (ushort)(byte)(auVar1[0xf] >> 7) << 0xf));
    uStack_170 = 0;
    uStack_128 = 0;
    pdb_141605a90(&pplStack_70,&pauStack_198);
    pdb_140c5d4d0(&pauStack_1e0,pcStack_68,uStack_60);
    plVar8 = plStack_58;
    lStack_158 = lStack_1a0;
    uStack_168 = CONCAT44(uStack_1ac,uStack_1b0);
    uStack_160 = (byte *)CONCAT44(uStack_1a4,uStack_1a8);
    uStack_178 = (byte *)CONCAT44(uStack_1bc,uStack_1c0);
    uStack_170 = CONCAT44(uStack_1b4,uStack_1b8);
    uStack_188 = (undefined1 *)CONCAT44(uStack_1cc,uStack_1d0);
    uStack_180 = CONCAT44(uStack_1c4,uStack_1c8);
    pauStack_198 = pauStack_1e0;
    pauStack_190 = (undefined1 (*) [16])pbStack_1d8;
    plVar3 = plStack_58 + 2;
    LOCK();
    bVar15 = (int)plStack_58[2] == 0;
    if (bVar15) {
      *(int *)(plStack_58 + 2) = 0x3fffffff;
    }
    UNLOCK();
    if (!bVar15) {
      uStack_49 = 1;
      pdb_142dc6e70(plVar3);
    }
    if ((*puVar7 & 0x7fffffffffffffff) == 0) {
      if ((char)plVar8[3] != '\0') {
LAB_140bf340a:
        if ((*puVar7 & 0x7fffffffffffffff) != 0) {
          uStack_49 = 1;
          cVar9 = pdb_142dc79e0();
          if (cVar9 == '\0') {
            *(undefined1 *)(plVar8 + 3) = 1;
          }
        }
        goto LAB_140bf341a;
      }
      bVar10 = 0;
LAB_140bf34a8:
      plStack_78 = plVar8 + 3;
      lVar6 = plVar8[4];
      arg0 = (byte *)plVar8[5];
      lVar12 = plVar8[7];
      arg0_00 = (byte *)plVar8[8];
      lVar2 = plVar8[10];
      pbStack_90 = (byte *)plVar8[0xb];
      plVar8[0xc] = lStack_158;
      plVar8[4] = (longlong)pauStack_198;
      plVar8[5] = (longlong)pauStack_190;
      plVar8[6] = (longlong)uStack_188;
      plVar8[7] = uStack_180;
      plVar8[8] = (longlong)uStack_178;
      plVar8[9] = uStack_170;
      plVar8[10] = uStack_168;
      plVar8[0xb] = (longlong)uStack_160;
      if (!SBORROW8(0,lVar6)) {
        if (lVar6 != 0) {
          pub_1406abac0(arg0,lVar6 * 0x50,4);
        }
        if (lVar12 != 0) {
          pub_1406abac0(arg0_00,lVar12 * 0x18,4);
        }
        if (lVar2 != 0) {
          pub_1406abac0(pbStack_90,lVar2 << 2,4);
        }
      }
      *(undefined1 *)(plVar8 + 0x15) = 0;
      if ((bVar10 == 0) && ((*puVar7 & 0x7fffffffffffffff) != 0)) {
        uStack_49 = 0;
        cVar9 = pdb_142dc79e0();
        if (cVar9 == '\0') {
          *(undefined1 *)plStack_78 = 1;
        }
      }
      LOCK();
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -0x3fffffff;
      UNLOCK();
      if (0x3fffffff < (int)lVar6 + 0xc0000001U) {
        uStack_49 = 0;
        pdb_142dc6fa0(plVar3);
      }
    }
    else {
      uStack_49 = 1;
      bVar10 = pdb_142dc79e0();
      if ((char)plVar8[3] == '\0') {
        bVar10 = bVar10 ^ 1;
        goto LAB_140bf34a8;
      }
      if (bVar10 != 0) goto LAB_140bf340a;
LAB_140bf341a:
      LOCK();
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -0x3fffffff;
      UNLOCK();
      if (0x3fffffff < (int)lVar6 + 0xc0000001U) {
        uStack_49 = 1;
        pdb_142dc6fa0(plVar3);
      }
      if (pauStack_198 != (undefined1 (*) [16])0x0) {
        pub_1406abac0((byte *)pauStack_190,(longlong)pauStack_198 * 0x50,4);
      }
      if (uStack_180 != 0) {
        pub_1406abac0(uStack_178,uStack_180 * 0x18,4);
      }
      if (uStack_168 != 0) {
        pub_1406abac0(uStack_160,uStack_168 << 2,4);
      }
    }
    if (pplStack_70 != (longlong **)0x0) {
      pub_1406abac0((byte *)pcStack_68,(longlong)pplStack_70 * 0x28,4);
    }
    lVar6 = lStack_d0;
    if (lStack_d0 != 0) {
      lVar12 = CONCAT44(uStack_bc,uStack_c0);
      if (lVar12 != 0) {
        auVar1 = *pauStack_d8;
        pauVar11 = pauStack_d8 + 1;
        uVar14 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        pauVar13 = pauStack_d8;
        do {
          if ((short)uVar14 == 0) {
            do {
              auVar1 = *pauVar11;
              pauVar13 = pauVar13 + -0x20;
              pauVar11 = pauVar11 + 1;
              uVar14 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
            } while (uVar14 == 0);
          }
          iVar4 = 0;
          for (uVar5 = uVar14; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
            iVar4 = iVar4 + 1;
          }
          plVar3 = *(longlong **)((longlong)pauVar13 + (-0x10 - (ulonglong)(uint)(iVar4 << 5)));
          LOCK();
          *plVar3 = *plVar3 + -1;
          UNLOCK();
          if (*plVar3 == 0) {
            pdb_140c7b740((longlong)pauVar13 + (-0x10 - (ulonglong)(uint)(iVar4 << 5)));
          }
          uVar14 = uVar14 - 1 & uVar14;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      lVar12 = lVar6 * 0x20 + 0x20;
      arg1 = lVar6 + lVar12 + 0x11;
      if (arg1 != 0) {
        pub_1406abac0((byte *)((longlong)pauStack_d8 - lVar12),arg1,0x10);
      }
    }
  } while( true );
}

