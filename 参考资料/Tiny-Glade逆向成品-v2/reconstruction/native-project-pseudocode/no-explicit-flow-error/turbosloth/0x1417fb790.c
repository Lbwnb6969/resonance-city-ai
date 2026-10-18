// VA 0x1417fb790, PDB extent 1783 bytes
// turbosloth::store::AssetStore::load<clutter_pack_pipe::ClutterMeshAsset>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   turbosloth::store::AssetStore::load<clutter_pack_pipe::ClutterMeshAsset>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 1783 */

undefined8 pdb_1417fb790(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  code *pcVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  uint uVar13;
  ushort uVar14;
  ulonglong uVar15;
  byte *pbVar16;
  byte bVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  longlong *plStack_c8;
  longlong lStack_c0;
  byte *pbStack_a0;
  longlong *plStack_98;
  longlong lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  longlong lStack_78;
  byte *pbStack_70;
  longlong lStack_68;
  longlong *plStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_1417c9b60(&uStack_88);
  pdb_141c301a0(&plStack_c8,param_1,param_2,param_3,&uStack_88);
  lVar11 = lStack_c0;
  plVar8 = plStack_c8;
  if (uStack_80 != (uint *)0x0) {
    lVar7 = (longlong)uStack_80 * 0x10 + 0x10;
    uVar9 = (longlong)uStack_80 + lVar7 + 0x11;
    if (uVar9 != 0) {
      pub_1406abac0((byte *)((longlong)uStack_88 - lVar7),uVar9,0x10);
    }
  }
  if (plVar8 != (longlong *)0x0 || lVar11 != 0) {
    puVar10 = &UNK_14333e0e8;
    uVar12 = 0x2b;
    goto LAB_1417fb82e;
  }
  puVar1 = (uint *)(param_1 + 0xd0);
  uVar13 = *(uint *)(param_1 + 0xd0);
  if (uVar13 < 0x3ffffffe) {
    LOCK();
    uVar3 = *puVar1;
    if (uVar13 == uVar3) {
      *puVar1 = uVar13 + 1;
    }
    UNLOCK();
    if (uVar13 != uVar3) goto LAB_1417fbb46;
    cVar4 = *(char *)(param_1 + 0xd8);
  }
  else {
LAB_1417fbb46:
    pdb_142dc6cb0(puVar1);
    cVar4 = *(char *)(param_1 + 0xd8);
  }
  if (cVar4 != '\0') {
    uStack_88 = (longlong *)(param_1 + 0xe0);
    uStack_80 = puVar1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14333e4d0,0x2b,&uStack_88,&UNK_14333e540,&UNK_14333ddf8);
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    uVar9 = pdb_1417c4de0(param_1 + 0x100,&DAT_14333e320);
    lVar11 = *(longlong *)(param_1 + 0xe0);
    bVar17 = (byte)(uVar9 >> 0x39);
    auVar18 = ZEXT216(CONCAT11(bVar17,bVar17));
    auVar18 = pshuflw(auVar18,auVar18,0);
    lVar7 = 0;
    while( true ) {
      uVar9 = uVar9 & *(ulonglong *)(param_1 + 0xe8);
      auVar19 = *(undefined1 (*) [16])(lVar11 + uVar9);
      auVar21[0] = -(auVar19[0] == auVar18[0]);
      auVar21[1] = -(auVar19[1] == auVar18[1]);
      auVar21[2] = -(auVar19[2] == auVar18[2]);
      auVar21[3] = -(auVar19[3] == auVar18[3]);
      auVar21[4] = -(auVar19[4] == auVar18[4]);
      auVar21[5] = -(auVar19[5] == auVar18[5]);
      auVar21[6] = -(auVar19[6] == auVar18[6]);
      auVar21[7] = -(auVar19[7] == auVar18[7]);
      auVar21[8] = -(auVar19[8] == auVar18[0]);
      auVar21[9] = -(auVar19[9] == auVar18[1]);
      auVar21[10] = -(auVar19[10] == auVar18[2]);
      auVar21[0xb] = -(auVar19[0xb] == auVar18[3]);
      auVar21[0xc] = -(auVar19[0xc] == auVar18[4]);
      auVar21[0xd] = -(auVar19[0xd] == auVar18[5]);
      auVar21[0xe] = -(auVar19[0xe] == auVar18[6]);
      auVar21[0xf] = -(auVar19[0xf] == auVar18[7]);
      uVar14 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe | (ushort)(auVar21[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar14;
      while (uVar14 != 0) {
        uVar3 = 0;
        for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar15 = uVar3 + uVar9 & *(ulonglong *)(param_1 + 0xe8);
        pcVar2 = (char *)(lVar11 + -0x18 + uVar15 * -0x18);
        auVar22[0] = -(*pcVar2 == DAT_14332a620);
        auVar22[1] = -(pcVar2[1] == UNK_14332a621);
        auVar22[2] = -(pcVar2[2] == UNK_14332a622);
        auVar22[3] = -(pcVar2[3] == UNK_14332a623);
        auVar22[4] = -(pcVar2[4] == UNK_14332a624);
        auVar22[5] = -(pcVar2[5] == UNK_14332a625);
        auVar22[6] = -(pcVar2[6] == UNK_14332a626);
        auVar22[7] = -(pcVar2[7] == UNK_14332a627);
        auVar22[8] = -(pcVar2[8] == UNK_14332a628);
        auVar22[9] = -(pcVar2[9] == UNK_14332a629);
        auVar22[10] = -(pcVar2[10] == UNK_14332a62a);
        auVar22[0xb] = -(pcVar2[0xb] == UNK_14332a62b);
        auVar22[0xc] = -(pcVar2[0xc] == UNK_14332a62c);
        auVar22[0xd] = -(pcVar2[0xd] == UNK_14332a62d);
        auVar22[0xe] = -(pcVar2[0xe] == UNK_14332a62e);
        auVar22[0xf] = -(pcVar2[0xf] == UNK_14332a62f);
        if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar22[0xf] >> 7) << 0xf) == 0xffff) {
          plVar8 = *(longlong **)(lVar11 + uVar15 * -0x18 + -8);
          LOCK();
          lVar11 = *plVar8;
          *plVar8 = *plVar8 + 1;
          UNLOCK();
          if (*plVar8 == 0 || SCARRY8(lVar11,1) != *plVar8 < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          LOCK();
          uVar13 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          plStack_98 = plVar8;
          if (SBORROW4(0,uVar13 - 1 & 0xbfffffff)) {
            pdb_142dc6fa0(puVar1);
          }
          lVar11 = param_2;
          plVar8 = (longlong *)pdb_141c2de30(plVar8 + 2,param_2,param_3);
          if (plVar8 != (longlong *)0x0) {
            plStack_c8 = plVar8;
            lStack_c0 = lVar11;
            plStack_58 = plVar8;
            (**(code **)(lVar11 + 0x18))
                      (&uStack_88,
                       (longlong)plVar8 +
                       (*(longlong *)(lVar11 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
            auVar18[0] = -((char)uStack_88 == DAT_14332a620);
            auVar18[1] = -(uStack_88._1_1_ == UNK_14332a621);
            auVar18[2] = -(uStack_88._2_1_ == UNK_14332a622);
            auVar18[3] = -(uStack_88._3_1_ == UNK_14332a623);
            auVar18[4] = -(uStack_88._4_1_ == UNK_14332a624);
            auVar18[5] = -(uStack_88._5_1_ == UNK_14332a625);
            auVar18[6] = -(uStack_88._6_1_ == UNK_14332a626);
            auVar18[7] = -(uStack_88._7_1_ == UNK_14332a627);
            auVar18[8] = -((char)uStack_80 == UNK_14332a628);
            auVar18[9] = -(uStack_80._1_1_ == UNK_14332a629);
            auVar18[10] = -(uStack_80._2_1_ == UNK_14332a62a);
            auVar18[0xb] = -(uStack_80._3_1_ == UNK_14332a62b);
            auVar18[0xc] = -(uStack_80._4_1_ == UNK_14332a62c);
            auVar18[0xd] = -(uStack_80._5_1_ == UNK_14332a62d);
            auVar18[0xe] = -(uStack_80._6_1_ == UNK_14332a62e);
            auVar18[0xf] = -(uStack_80._7_1_ == UNK_14332a62f);
            plVar8 = plStack_58;
            if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                        (ushort)(auVar18[0xf] >> 7) << 0xf) != 0xffff) {
              uStack_88 = plStack_58;
              uStack_80 = (uint *)lVar11;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8170(&UNK_14333de10,0x13,&uStack_88,&UNK_14333e490,&UNK_14333de28);
            }
          }
          LOCK();
          *plStack_98 = *plStack_98 + -1;
          UNLOCK();
          if (*plStack_98 == 0) {
            pdb_140dd7970(&plStack_98);
          }
          if (plVar8 != (longlong *)0x0) {
            return 0;
          }
          goto LAB_1417fb966;
        }
        uVar14 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar14);
      }
      auVar20[0] = -(auVar19[0] == -1);
      auVar20[1] = -(auVar19[1] == -1);
      auVar20[2] = -(auVar19[2] == -1);
      auVar20[3] = -(auVar19[3] == -1);
      auVar20[4] = -(auVar19[4] == -1);
      auVar20[5] = -(auVar19[5] == -1);
      auVar20[6] = -(auVar19[6] == -1);
      auVar20[7] = -(auVar19[7] == -1);
      auVar20[8] = -(auVar19[8] == -1);
      auVar20[9] = -(auVar19[9] == -1);
      auVar20[10] = -(auVar19[10] == -1);
      auVar20[0xb] = -(auVar19[0xb] == -1);
      auVar20[0xc] = -(auVar19[0xc] == -1);
      auVar20[0xd] = -(auVar19[0xd] == -1);
      auVar20[0xe] = -(auVar19[0xe] == -1);
      auVar20[0xf] = -(auVar19[0xf] == -1);
      if ((((((((((((((((SUB161(auVar20 >> 7,0) & 1) != 0 || (SUB161(auVar20 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar20 >> 0x17,0) & 1) != 0) || (SUB161(auVar20 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar20 >> 0x27,0) & 1) != 0) || (SUB161(auVar20 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar20 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar20 >> 0x3f,0) & 1) != 0) || (SUB161(auVar20 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar20 >> 0x4f,0) & 1) != 0) || (SUB161(auVar20 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar20 >> 0x5f,0) & 1) != 0) || (SUB161(auVar20 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar20 >> 0x6f,0) & 1) != 0) || (SUB161(auVar20 >> 0x77,0) & 1) != 0) ||
          auVar20[0xf] < '\0') break;
      uVar9 = uVar9 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
  LOCK();
  uVar13 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if (SBORROW4(0,uVar13 - 1 & 0xbfffffff)) {
    pdb_142dc6fa0(puVar1);
  }
LAB_1417fb966:
  pdb_141805280(&uStack_88,param_1,param_2,param_3);
  lVar11 = (longlong)uStack_80;
  if (!SBORROW8(0,lStack_78)) {
    pbStack_a0 = pbStack_70;
    plStack_58 = uStack_88;
    plStack_98 = uStack_88;
    lStack_90 = (longlong)uStack_80;
    if (lStack_68 != 0) {
      pbVar16 = pbStack_70 + 0x48;
      lVar7 = lStack_68;
      do {
        if (*(ulonglong *)(pbVar16 + -8) != 0) {
          pub_1406abac0(*(byte **)pbVar16,*(ulonglong *)(pbVar16 + -8),1);
        }
        pbVar16 = pbVar16 + 0x60;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    if (lStack_78 != 0) {
      pub_1406abac0(pbStack_a0,lStack_78 * 0x60,0x10);
    }
    uStack_88 = (longlong *)_DAT_14333e320;
    uStack_80 = (uint *)_UNK_14333e328;
    uStack_49 = 1;
    pdb_141c2b710(param_1,&uStack_88,param_2,param_3,&plStack_98);
    plStack_c8 = plStack_58;
    lStack_c0 = lVar11;
    (**(code **)(lVar11 + 0x18))
              (&uStack_88,
               (longlong)plStack_58 +
               (*(longlong *)(lVar11 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
    auVar19[0] = -((char)uStack_88 == DAT_14332a620);
    auVar19[1] = -(uStack_88._1_1_ == UNK_14332a621);
    auVar19[2] = -(uStack_88._2_1_ == UNK_14332a622);
    auVar19[3] = -(uStack_88._3_1_ == UNK_14332a623);
    auVar19[4] = -(uStack_88._4_1_ == UNK_14332a624);
    auVar19[5] = -(uStack_88._5_1_ == UNK_14332a625);
    auVar19[6] = -(uStack_88._6_1_ == UNK_14332a626);
    auVar19[7] = -(uStack_88._7_1_ == UNK_14332a627);
    auVar19[8] = -((char)uStack_80 == UNK_14332a628);
    auVar19[9] = -(uStack_80._1_1_ == UNK_14332a629);
    auVar19[10] = -(uStack_80._2_1_ == UNK_14332a62a);
    auVar19[0xb] = -(uStack_80._3_1_ == UNK_14332a62b);
    auVar19[0xc] = -(uStack_80._4_1_ == UNK_14332a62c);
    auVar19[0xd] = -(uStack_80._5_1_ == UNK_14332a62d);
    auVar19[0xe] = -(uStack_80._6_1_ == UNK_14332a62e);
    auVar19[0xf] = -(uStack_80._7_1_ == UNK_14332a62f);
    if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf
                ) == 0xffff) {
      return 0;
    }
    uStack_88 = plStack_58;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14333de10,0x13,&uStack_88,&UNK_14333e490,&UNK_14333e0d0);
  }
  puVar10 = &UNK_14333e113;
  uVar12 = 0x19;
LAB_1417fb82e:
  pdb_140f370c0(0,puVar10,uVar12);
  return 1;
}

