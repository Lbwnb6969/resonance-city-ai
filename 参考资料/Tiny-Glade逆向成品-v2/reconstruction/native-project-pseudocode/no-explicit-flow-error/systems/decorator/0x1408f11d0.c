// VA 0x1408f11d0, PDB extent 3143 bytes
// system_decorator::backup::create_or_restore_decorator_backup
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/backup.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: system_decorator::backup::create_or_restore_decorator_backup
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/backup.rs
   Extent: 3143 */

void pdb_1408f11d0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                  undefined8 *param_9)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 (*pauVar10) [16];
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [16];
  bool bVar21;
  byte bStack_3b0;
  undefined7 uStack_3af;
  undefined1 (*pauStack_3a8) [16];
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  longlong lStack_390;
  undefined1 (*pauStack_388) [16];
  ushort uStack_378;
  undefined1 (*pauStack_370) [16];
  undefined1 auStack_1e0 [32];
  longlong lStack_1c0;
  longlong lStack_1b8;
  undefined1 auStack_1b0 [32];
  longlong lStack_190;
  longlong lStack_188;
  undefined1 auStack_180 [32];
  longlong lStack_160;
  longlong lStack_158;
  undefined1 auStack_150 [32];
  undefined1 uStack_130;
  undefined1 uStack_12f;
  undefined1 uStack_12e;
  undefined1 auStack_128 [8];
  longlong lStack_120;
  longlong alStack_108 [3];
  undefined1 (*pauStack_f0) [16];
  undefined1 (*pauStack_e8) [16];
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  longlong lStack_c8;
  longlong *plStack_c0;
  longlong lStack_b8;
  undefined1 (*pauStack_b0) [16];
  undefined1 (*pauStack_a8) [16];
  longlong *plStack_a0;
  longlong *plStack_98;
  longlong *plStack_90;
  longlong lStack_88;
  undefined4 *puStack_80;
  longlong lStack_78;
  longlong lStack_70;
  undefined1 (*pauStack_68) [16];
  undefined1 (*pauStack_60) [16];
  undefined1 (*pauStack_58) [16];
  undefined4 uStack_50;
  char cStack_4a;
  byte bStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_50 = *(undefined4 *)((longlong)param_8 + 0x1c);
  puStack_80 = (undefined4 *)param_8[2];
  *puStack_80 = uStack_50;
  param_8 = (longlong *)*param_8;
  cVar2 = *(char *)((longlong)param_8 + 0x282);
  *(undefined1 *)((longlong)param_8 + 0x282) = 0;
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      param_1 = (longlong *)*param_1;
      plStack_a0 = param_4;
      plStack_98 = param_3;
      pdb_140c41900(&bStack_3b0,param_1);
      lVar19 = CONCAT44(uStack_39c,uStack_3a0);
      lStack_70 = CONCAT44(uStack_394,uStack_398);
      uVar18 = (uint)uStack_378;
      pauStack_58 = pauStack_370;
      pauStack_60 = (undefined1 (*) [16])(param_8 + 3);
      lStack_88 = *param_2;
      if ((bStack_3b0 & 1) != 0) {
        pauStack_68 = pauStack_3a8;
        plVar16 = param_8;
        pauVar12 = pauStack_388;
        lVar17 = lStack_390;
        plStack_90 = param_8;
        if (lVar19 == 2) goto LAB_1408f1393;
        do {
          if (lVar17 == 0) {
LAB_1408f134b:
            plVar16 = param_8;
            if (lVar19 != 1) {
              lVar17 = 0;
              goto LAB_1408f1393;
            }
            lVar19 = 1;
            lVar17 = 0;
            bVar21 = lStack_70 == 0;
            lStack_70 = 0;
            if (bVar21) goto LAB_1408f1393;
            lVar17 = 0;
            lStack_70 = 0;
            lVar8 = 1;
          }
          else {
            if (pauStack_58 == (undefined1 (*) [16])0x0) {
              pauStack_58 = (undefined1 (*) [16])0x0;
              goto LAB_1408f134b;
            }
            if ((short)uVar18 == 0) {
              do {
                auVar1 = *pauVar12;
                lVar17 = lVar17 + -0x980;
                pauVar12 = pauVar12 + 1;
                uVar18 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
              } while (uVar18 == 0);
            }
            uVar4 = 0;
            for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            uVar18 = uVar18 - 1 & uVar18;
            pauStack_58 = (undefined1 (*) [16])(pauStack_58[-1] + 0xf);
            lVar8 = pdb_140c44590((ulonglong)uVar4 * -0x98 + lVar17 + -0x98);
            plVar16 = param_1;
            if (lVar8 == 3) goto LAB_1408f134b;
          }
          while( true ) {
            *puStack_80 = uStack_50;
            uVar9 = pdb_140c3f210(pauStack_60,lVar8,plVar16);
            param_1 = (longlong *)pdb_140c41030(lStack_88,lVar8,plVar16);
            if (param_1 == (longlong *)0x0) goto LAB_1408f1dc6;
            pdb_1414fa150(uVar9);
            param_8 = plVar16;
            if (lVar19 != 2) break;
LAB_1408f1393:
            if (pauStack_68 == (undefined1 (*) [16])0x0) goto LAB_1408f15d7;
            lVar19 = 2;
            pauStack_68 = (undefined1 (*) [16])0x0;
            lVar8 = 2;
          }
        } while( true );
      }
      pauVar12 = pauStack_388;
      lVar17 = lStack_390;
      plStack_90 = param_8;
      if (lVar19 != 2) {
        do {
          if (lVar17 == 0) {
LAB_1408f18cb:
            if ((lVar19 != 1) || (lStack_70 == 0)) break;
            lVar19 = 1;
            lVar17 = 0;
            lStack_70 = 0;
            lVar8 = 1;
            plVar16 = param_2;
          }
          else {
            if (pauStack_58 == (undefined1 (*) [16])0x0) {
              pauStack_58 = (undefined1 (*) [16])0x0;
              goto LAB_1408f18cb;
            }
            if ((short)uVar18 == 0) {
              do {
                auVar1 = *pauVar12;
                lVar17 = lVar17 + -0x980;
                pauVar12 = pauVar12 + 1;
                uVar18 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
              } while (uVar18 == 0);
            }
            uVar4 = 0;
            for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            uVar18 = uVar18 - 1 & uVar18;
            pauStack_58 = (undefined1 (*) [16])(pauStack_58[-1] + 0xf);
            lVar8 = pdb_140c44590((ulonglong)uVar4 * -0x98 + lVar17 + -0x98);
            plVar16 = param_1;
            if (lVar8 == 3) goto LAB_1408f18cb;
          }
          *puStack_80 = uStack_50;
          uVar9 = pdb_140c3f210(pauStack_60,lVar8,plVar16);
          param_1 = (longlong *)pdb_140c41030(lStack_88,lVar8,plVar16);
          if (param_1 == (longlong *)0x0) {
LAB_1408f1dc6:
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_14301cc80);
          }
          pdb_1414fa150(uVar9);
          param_2 = plVar16;
        } while( true );
      }
LAB_1408f15d7:
      uVar7 = uStack_50;
      puVar6 = puStack_80;
      param_8 = plStack_90;
      *puStack_80 = uStack_50;
      lVar19 = *plStack_98;
      pdb_1414acca0(plStack_90 + 0x46,lVar19);
      lVar17 = *(longlong *)(lVar19 + 0x28);
      param_8[0x4a] = *(longlong *)(lVar19 + 0x20);
      param_8[0x4b] = lVar17;
      *puVar6 = uVar7;
      lVar19 = *plStack_a0;
      pdb_1414ac8a0(param_8 + 0x3a,lVar19);
      lVar17 = *(longlong *)(lVar19 + 0x28);
      param_8[0x3e] = *(longlong *)(lVar19 + 0x20);
      param_8[0x3f] = lVar17;
      *puVar6 = uVar7;
      lVar19 = *param_5;
      pdb_1414acf00(param_8 + 0x40,lVar19);
      lVar17 = *(longlong *)(lVar19 + 0x28);
      param_8[0x44] = *(longlong *)(lVar19 + 0x20);
      param_8[0x45] = lVar17;
      *puVar6 = uVar7;
      pdb_1408fdc40(&bStack_3b0,*param_6);
      if (param_8[0x4d] != 0) {
        pub_1406abac0((byte *)param_8[0x4e],param_8[0x4d] * 0xa8,8);
      }
      uVar7 = uStack_50;
      puVar6 = puStack_80;
      *(undefined4 *)(param_8 + 0x4e) = uStack_3a0;
      *(undefined4 *)((longlong)param_8 + 0x274) = uStack_39c;
      *(undefined4 *)(param_8 + 0x4f) = uStack_398;
      *(undefined4 *)((longlong)param_8 + 0x27c) = uStack_394;
      param_8[0x4c] = CONCAT71(uStack_3af,bStack_3b0);
      param_8[0x4d] = (longlong)pauStack_3a8;
      *puStack_80 = uStack_50;
      pdb_1414fa970(*(undefined8 *)(*param_7 + 8),*(undefined8 *)(*param_7 + 0x10),param_8);
      *puVar6 = uVar7;
      *(undefined1 *)((longlong)param_8 + 0x281) = 1;
    }
    else if (*(char *)((longlong)param_8 + 0x281) != '\0') {
      lStack_b8 = *param_7;
      cStack_4a = *(char *)(lStack_b8 + 0x48);
      lStack_78 = *param_1;
      plStack_a0 = param_4;
      plStack_98 = param_3;
      plStack_90 = param_8;
      pdb_140c41420(&bStack_3b0);
      pauVar12 = (undefined1 (*) [16])CONCAT71(uStack_3af,bStack_3b0);
      pauStack_68 = pauStack_3a8;
      pauVar15 = (undefined1 (*) [16])CONCAT44(uStack_39c,uStack_3a0);
      pauStack_60 = (undefined1 (*) [16])CONCAT44(uStack_394,uStack_398);
      uVar18 = (uint)uStack_378;
      lStack_88 = CONCAT44(lStack_88._4_4_,*(undefined4 *)((longlong)param_2 + 0x1c));
      lStack_70 = *param_2;
      pauStack_58 = (undefined1 (*) [16])param_2[2];
      lVar19 = lStack_390;
      pauVar14 = pauStack_370;
      pauVar13 = pauStack_388;
LAB_1408f14b0:
      if (pauVar15 == (undefined1 (*) [16])0x5) {
LAB_1408f1560:
        if (pauVar12[-1] + 0xd < (undefined1 *)0x2) goto LAB_1408f194b;
        pauVar15 = (undefined1 (*) [16])0x5;
        pauVar10 = pauVar12;
        pauVar12 = (undefined1 (*) [16])0x3;
        pauVar20 = pauStack_68;
      }
      else if (lVar19 == 0) {
LAB_1408f152c:
        lVar19 = 0;
        if (pauVar15[-1] + 0xd < (undefined1 *)0x2) goto LAB_1408f1560;
        lVar19 = 0;
        pauVar10 = pauVar15;
        pauVar15 = (undefined1 (*) [16])0x3;
        pauVar20 = pauStack_60;
      }
      else {
        if (pauVar14 == (undefined1 (*) [16])0x0) {
          pauVar14 = (undefined1 (*) [16])0x0;
          goto LAB_1408f152c;
        }
        if ((short)uVar18 == 0) {
          do {
            auVar1 = *pauVar13;
            lVar19 = lVar19 + -0x980;
            pauVar13 = pauVar13 + 1;
            uVar18 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          } while (uVar18 == 0);
        }
        uVar4 = 0;
        for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar18 = uVar18 - 1 & uVar18;
        pauVar14 = (undefined1 (*) [16])(pauVar14[-1] + 0xf);
        pauVar20 = pauVar12;
        pauVar10 = (undefined1 (*) [16])
                   pdb_140947f90(*(undefined8 *)(lVar19 + -0x98 + (ulonglong)uVar4 * -0x98));
        if (pauVar10 == (undefined1 (*) [16])0x3) goto LAB_1408f152c;
      }
      *(undefined4 *)*pauStack_58 = (undefined4)lStack_88;
      lVar17 = pdb_140c411c0(lStack_70,pauVar10,pauVar20);
      if (lVar17 != 0) {
        pdb_1414fa6c0(lVar17,pauVar10);
      }
      goto LAB_1408f14b0;
    }
  }
  cVar2 = (char)param_8[0x50];
joined_r0x0001408f1dbb:
  if (cVar2 != '\0') {
    *puStack_80 = uStack_50;
    pdb_1408f1e20(&bStack_3b0);
    pdb_140c33fb0(param_8 + 3,&uStack_398);
    pdb_1414ac8a0(param_8 + 0x3a,auStack_1e0);
    param_8[0x3e] = lStack_1c0;
    param_8[0x3f] = lStack_1b8;
    pdb_1414acf00(param_8 + 0x40,auStack_1b0);
    param_8[0x44] = lStack_190;
    param_8[0x45] = lStack_188;
    pdb_1414acca0(param_8 + 0x46,auStack_180);
    param_8[0x4a] = lStack_160;
    param_8[0x4b] = lStack_158;
    pdb_1408fdc40(&pauStack_f0,auStack_150);
    if (param_8[0x4d] != 0) {
      pub_1406abac0((byte *)param_8[0x4e],param_8[0x4d] * 0xa8,8);
    }
    *(undefined4 *)(param_8 + 0x4e) = (undefined4)uStack_e0;
    *(undefined4 *)((longlong)param_8 + 0x274) = uStack_e0._4_4_;
    *(undefined4 *)(param_8 + 0x4f) = uStack_d8;
    *(undefined4 *)((longlong)param_8 + 0x27c) = uStack_d4;
    param_8[0x4c] = (longlong)pauStack_f0;
    param_8[0x4d] = (longlong)pauStack_e8;
    pdb_1414fa970(pauStack_3a8,CONCAT44(uStack_39c,uStack_3a0),param_8);
    *(undefined1 *)((longlong)param_8 + 0x282) = uStack_12e;
    *(undefined1 *)(param_8 + 0x50) = uStack_130;
    *(undefined1 *)((longlong)param_8 + 0x281) = uStack_12f;
    pdb_1404c78b0(&bStack_3b0);
  }
  return;
LAB_1408f194b:
  pdb_140c41900(&bStack_3b0,lStack_78);
  bStack_49 = bStack_3b0;
  lStack_78 = CONCAT44(uStack_39c,uStack_3a0);
  pauVar12 = (undefined1 (*) [16])CONCAT44(uStack_394,uStack_398);
  uVar18 = (uint)uStack_378;
  pauStack_a8 = pauStack_370;
  plStack_c0 = plStack_90 + 3;
  pauVar15 = pauStack_3a8;
  lVar19 = lStack_390;
  do {
    pauVar13 = pauVar12;
    pauStack_68 = pauStack_388;
    if (lStack_78 == 2) {
LAB_1408f1ad0:
      param_8 = plStack_90;
      if ((pauVar15 != (undefined1 (*) [16])0x0 & bStack_49) != 1) {
        *(undefined4 *)plStack_98[2] = *(undefined4 *)((longlong)plStack_98 + 0x1c);
        lVar19 = *plStack_98;
        pdb_1414acca0(lVar19,plStack_90 + 0x46);
        lVar17 = param_8[0x4b];
        *(longlong *)(lVar19 + 0x20) = param_8[0x4a];
        *(longlong *)(lVar19 + 0x28) = lVar17;
        *(undefined4 *)plStack_a0[2] = *(undefined4 *)((longlong)plStack_a0 + 0x1c);
        lVar19 = *plStack_a0;
        pdb_1414ac8a0(lVar19,param_8 + 0x3a);
        lVar17 = param_8[0x3f];
        *(longlong *)(lVar19 + 0x20) = param_8[0x3e];
        *(longlong *)(lVar19 + 0x28) = lVar17;
        *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
        lVar19 = *param_5;
        pdb_1414acf00(lVar19,param_8 + 0x40);
        lVar17 = param_8[0x45];
        *(longlong *)(lVar19 + 0x20) = param_8[0x44];
        *(longlong *)(lVar19 + 0x28) = lVar17;
        *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
        puVar3 = (undefined8 *)*param_6;
        pdb_1408fdc40(&bStack_3b0,param_8 + 0x4c);
        if (puVar3[1] != 0) {
          pub_1406abac0((byte *)puVar3[2],puVar3[1] * 0xa8,8);
        }
        *(undefined4 *)(puVar3 + 2) = uStack_3a0;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_39c;
        *(undefined4 *)(puVar3 + 3) = uStack_398;
        *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_394;
        *puVar3 = CONCAT71(uStack_3af,bStack_3b0);
        puVar3[1] = pauStack_3a8;
        *(undefined4 *)param_7[2] = *(undefined4 *)((longlong)param_7 + 0x1c);
        pdb_1414fa970(param_8[1],param_8[2],lStack_b8);
        *(undefined4 *)param_9[2] = *(undefined4 *)((longlong)param_9 + 0x1c);
        pdb_140a5f5d0(*param_9);
        cVar2 = (char)param_8[0x50];
        goto joined_r0x0001408f1dbb;
      }
      lStack_78 = 2;
      pauStack_60 = (undefined1 (*) [16])0x0;
      lVar17 = 2;
      pauVar20 = pauVar15;
      pauStack_b0 = pauVar13;
    }
    else {
      if (lVar19 == 0) {
joined_r0x0001408f1ac9:
        if (lStack_78 == 1) {
          lVar19 = 0;
          pauVar13 = (undefined1 (*) [16])0x0;
          if (pauVar12 != (undefined1 (*) [16])0x0) {
            lStack_78 = 1;
            pauStack_b0 = (undefined1 (*) [16])0x0;
            lVar19 = 0;
            lVar17 = 1;
            pauVar14 = pauVar12;
            pauVar20 = pauVar12;
            pauStack_60 = pauVar15;
            goto LAB_1408f1b0d;
          }
        }
        else {
          lVar19 = 0;
        }
        goto LAB_1408f1ad0;
      }
      if (pauStack_a8 == (undefined1 (*) [16])0x0) {
        pauStack_a8 = (undefined1 (*) [16])0x0;
        goto joined_r0x0001408f1ac9;
      }
      if ((short)uVar18 == 0) {
        do {
          auVar1 = *pauStack_68;
          lVar19 = lVar19 + -0x980;
          pauStack_68 = pauStack_68 + 1;
          uVar18 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar18 == 0);
      }
      uVar4 = 0;
      for (uVar5 = uVar18; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar4 = uVar4 + 1;
      }
      uVar18 = uVar18 - 1 & uVar18;
      pauStack_a8 = (undefined1 (*) [16])(pauStack_a8[-1] + 0xf);
      lVar17 = pdb_140c44590(lVar19 + (ulonglong)uVar4 * -0x98 + -0x98);
      if (lVar17 == 3) goto joined_r0x0001408f1ac9;
      pauVar20 = (undefined1 (*) [16])((ulonglong)uVar4 * -0x98 + lVar19 + -0x90);
      pauVar14 = pauStack_388;
      pauStack_b0 = pauVar12;
      pauStack_60 = pauVar15;
    }
LAB_1408f1b0d:
    *(undefined4 *)*pauStack_58 = (undefined4)lStack_88;
    lVar8 = lVar17;
    lVar11 = pdb_140c411c0(lStack_70,lVar17,pauVar14);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14301cc98);
    }
    pauVar12 = (undefined1 (*) [16])pdb_140c41030(plStack_c0,lVar17,pauVar14);
    if (pauVar12 != (undefined1 (*) [16])0x0) {
      pauVar20 = pauVar12;
    }
    pdb_140c413b0(&pauStack_f0,lVar8,lVar17,pauVar14);
    pdb_1414f9bd0(lVar11,pauVar20,&pauStack_f0);
    pauVar12 = pauStack_b0;
    pauVar15 = pauStack_60;
    pauStack_388 = pauStack_68;
    if (cStack_4a != '\0') {
      pauStack_f0 = *(undefined1 (**) [16])(lVar11 + 0x30);
      uStack_e0 = *pauStack_f0 + *(longlong *)(lVar11 + 0x38) + 1;
      auVar1 = *pauStack_f0;
      uStack_d0 = *(undefined8 *)(lVar11 + 0x48);
      lStack_c8 = lVar11 + 0x60;
      pauStack_e8 = pauStack_f0 + 1;
      uStack_d8 = CONCAT22(uStack_d8._2_2_,
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
      pdb_140c441a0(auStack_128,&pauStack_f0);
      pauStack_388 = pauStack_68;
      pauVar15 = pauStack_60;
      while (pauStack_60 = pauVar15, lStack_120 != 0) {
        pauStack_68 = pauStack_388;
        lVar17 = pdb_140315970(alStack_108);
        if (*(char *)(lVar17 + 0x58) != '\0') {
          lVar17 = pdb_140c413c0(alStack_108);
          *(undefined1 *)(lVar17 + 0x58) = 0;
        }
        pdb_140c441a0(auStack_128,&pauStack_f0);
        pauStack_388 = pauStack_68;
        pauVar15 = pauStack_60;
      }
    }
  } while( true );
}

