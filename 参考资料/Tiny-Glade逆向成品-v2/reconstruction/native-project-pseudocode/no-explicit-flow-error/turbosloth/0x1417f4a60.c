// VA 0x1417f4a60, PDB extent 2862 bytes
// turbosloth::store::AssetStore::get_or_insert_with<turbosloth::asset::impl$44::build::closure_env$0<asset_pipe::texture::TextureAssetList,turbosloth::asset::BuildContext> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   turbosloth::store::AssetStore::get_or_insert_with<turbosloth::asset::impl$44::build::closure_env$0<asset_pipe::texture::TextureAssetList,turbosloth::asset::BuildContext>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/store.rs
   Extent: 2862 */

longlong pdb_1417f4a60(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                      longlong *param_5)

{
  uint *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 (*pauVar4) [16];
  code *pcVar5;
  uint uVar6;
  ulonglong *puVar7;
  byte bVar8;
  char cVar9;
  ulonglong uVar10;
  byte *pbVar11;
  longlong lVar12;
  uint uVar13;
  byte bVar14;
  longlong *plVar15;
  longlong lVar16;
  ushort uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 (*pauVar23) [16];
  int *piVar24;
  byte bVar25;
  undefined1 auVar26 [16];
  longlong lVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  longlong *plStack_d8;
  ulonglong uStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong *plStack_b8;
  longlong lStack_b0;
  longlong lStack_a8;
  uint *puStack_a0;
  byte *pbStack_98;
  uint *puStack_90;
  longlong lStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  byte *pbStack_60;
  uint *puStack_58;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  puVar1 = (uint *)(param_1 + 0x90);
  uVar13 = *(uint *)(param_1 + 0x90);
  if (uVar13 < 0x3ffffffe) {
    LOCK();
    uVar18 = *puVar1;
    if (uVar13 == uVar18) {
      *puVar1 = uVar13 + 1;
    }
    UNLOCK();
    if (uVar13 == uVar18) goto LAB_1417f4aae;
  }
  uStack_4a = 1;
  pdb_142dc6cb0(puVar1);
LAB_1417f4aae:
  if (*(char *)(param_1 + 0x98) != '\0') {
    lStack_a8 = param_1 + 0xa0;
    puStack_a0 = puVar1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14333e4d0,0x2b,&lStack_a8,&UNK_14333e500,&UNK_14333de40);
  }
  lStack_68 = param_4;
  pbStack_60 = (byte *)param_3;
  puStack_58 = puVar1;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    uVar10 = pdb_1417c4de0(param_1 + 0xc0,param_2);
    lVar27 = *(longlong *)(param_1 + 0xa0);
    uVar22 = *(ulonglong *)(param_1 + 0xa8);
    bVar8 = (byte)(uVar10 >> 0x39);
    auVar26 = ZEXT216(CONCAT11(bVar8,bVar8));
    auVar26 = pshuflw(auVar26,auVar26,0);
    lVar16 = *param_2;
    lVar19 = param_2[1];
    lVar12 = 0;
    while( true ) {
      uVar10 = uVar10 & uVar22;
      auVar3 = *(undefined1 (*) [16])(lVar27 + uVar10);
      auVar31[0] = -(auVar3[0] == auVar26[0]);
      auVar31[1] = -(auVar3[1] == auVar26[1]);
      auVar31[2] = -(auVar3[2] == auVar26[2]);
      auVar31[3] = -(auVar3[3] == auVar26[3]);
      auVar31[4] = -(auVar3[4] == auVar26[4]);
      auVar31[5] = -(auVar3[5] == auVar26[5]);
      auVar31[6] = -(auVar3[6] == auVar26[6]);
      auVar31[7] = -(auVar3[7] == auVar26[7]);
      auVar31[8] = -(auVar3[8] == auVar26[0]);
      auVar31[9] = -(auVar3[9] == auVar26[1]);
      auVar31[10] = -(auVar3[10] == auVar26[2]);
      auVar31[0xb] = -(auVar3[0xb] == auVar26[3]);
      auVar31[0xc] = -(auVar3[0xc] == auVar26[4]);
      auVar31[0xd] = -(auVar3[0xd] == auVar26[5]);
      auVar31[0xe] = -(auVar3[0xe] == auVar26[6]);
      auVar31[0xf] = -(auVar3[0xf] == auVar26[7]);
      uVar17 = (ushort)(SUB161(auVar31 >> 7,0) & 1) | (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe | (ushort)(auVar31[0xf] >> 7) << 0xf;
      uVar13 = (uint)uVar17;
      while (uVar17 != 0) {
        uVar18 = 0;
        for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar18 = uVar18 + 1;
        }
        lVar21 = lVar27 + (uVar18 + uVar10 & uVar22) * -0x20;
        if (*(longlong *)(lVar21 + -0x20) == lVar16 && *(longlong *)(lVar21 + -0x18) == lVar19) {
          uVar10 = pdb_1417c4de0(param_1 + 0xc0,param_2);
          pbVar11 = pbStack_60;
          lVar12 = lStack_68;
          bVar8 = (byte)(uVar10 >> 0x39);
          auVar26 = ZEXT216(CONCAT11(bVar8,bVar8));
          auVar26 = pshuflw(auVar26,auVar26,0);
          lVar21 = 0;
          goto LAB_1417f4d1c;
        }
        uVar17 = (ushort)(uVar13 - 1) & (ushort)uVar13;
        uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar17);
      }
      auVar28[0] = -(auVar3[0] == -1);
      auVar28[1] = -(auVar3[1] == -1);
      auVar28[2] = -(auVar3[2] == -1);
      auVar28[3] = -(auVar3[3] == -1);
      auVar28[4] = -(auVar3[4] == -1);
      auVar28[5] = -(auVar3[5] == -1);
      auVar28[6] = -(auVar3[6] == -1);
      auVar28[7] = -(auVar3[7] == -1);
      auVar28[8] = -(auVar3[8] == -1);
      auVar28[9] = -(auVar3[9] == -1);
      auVar28[10] = -(auVar3[10] == -1);
      auVar28[0xb] = -(auVar3[0xb] == -1);
      auVar28[0xc] = -(auVar3[0xc] == -1);
      auVar28[0xd] = -(auVar3[0xd] == -1);
      auVar28[0xe] = -(auVar3[0xe] == -1);
      auVar28[0xf] = -(auVar3[0xf] == -1);
      if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 || (SUB161(auVar28 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar28 >> 0x17,0) & 1) != 0) || (SUB161(auVar28 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar28 >> 0x27,0) & 1) != 0) || (SUB161(auVar28 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar28 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar28 >> 0x3f,0) & 1) != 0) || (SUB161(auVar28 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar28 >> 0x4f,0) & 1) != 0) || (SUB161(auVar28 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar28 >> 0x5f,0) & 1) != 0) || (SUB161(auVar28 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar28 >> 0x6f,0) & 1) != 0) || (SUB161(auVar28 >> 0x77,0) & 1) != 0) ||
          auVar28[0xf] < '\0') break;
      uVar10 = uVar10 + lVar12 + 0x10;
      lVar12 = lVar12 + 0x10;
    }
  }
  piVar24 = (int *)(param_1 + 0x90);
  LOCK();
  iVar2 = *piVar24;
  *piVar24 = *piVar24 + -1;
  UNLOCK();
  if (SBORROW4(0,iVar2 - 1U & 0xbfffffff)) {
    uStack_49 = 0;
    pdb_142dc6fa0(piVar24);
  }
  LOCK();
  iVar2 = *piVar24;
  if (iVar2 == 0) {
    *piVar24 = 0x3fffffff;
  }
  UNLOCK();
  if (iVar2 != 0) {
    uStack_49 = 0;
    pdb_142dc6e70(piVar24);
  }
  puVar7 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    bVar8 = 0;
    cVar9 = *(char *)(param_1 + 0x98);
  }
  else {
    uStack_49 = 0;
    bVar8 = pdb_142dc79e0();
    bVar8 = bVar8 ^ 1;
    cVar9 = *(char *)(param_1 + 0x98);
  }
  if (cVar9 != '\0') {
    lStack_a8 = param_1 + 0x90;
    uVar22 = (ulonglong)puStack_a0 >> 8;
    puStack_a0 = (uint *)CONCAT71((int7)uVar22,bVar8);
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14333e4d0,0x2b,&lStack_a8,&UNK_14333e4b0,&UNK_14333de58);
  }
  lStack_c8 = param_1 + 0x90;
  uVar22 = (ulonglong)lStack_c0 >> 8;
  lStack_c0 = CONCAT71((int7)uVar22,bVar8);
  uVar10 = pdb_1417c4de0(param_1 + 0xc0,param_2);
  bVar14 = (byte)(uVar10 >> 0x38);
  bVar25 = bVar14 >> 1;
  auVar26 = ZEXT216(CONCAT11(bVar25,bVar25));
  auVar26 = pshuflw(auVar26,auVar26,0);
  lVar27 = *param_2;
  lVar16 = param_2[1];
  lVar19 = 0;
  uVar22 = uVar10;
  while( true ) {
    uVar22 = uVar22 & *(ulonglong *)(param_1 + 0xa8);
    auVar3 = *(undefined1 (*) [16])(*(longlong *)(param_1 + 0xa0) + uVar22);
    auVar32[0] = -(auVar3[0] == auVar26[0]);
    auVar32[1] = -(auVar3[1] == auVar26[1]);
    auVar32[2] = -(auVar3[2] == auVar26[2]);
    auVar32[3] = -(auVar3[3] == auVar26[3]);
    auVar32[4] = -(auVar3[4] == auVar26[4]);
    auVar32[5] = -(auVar3[5] == auVar26[5]);
    auVar32[6] = -(auVar3[6] == auVar26[6]);
    auVar32[7] = -(auVar3[7] == auVar26[7]);
    auVar32[8] = -(auVar3[8] == auVar26[0]);
    auVar32[9] = -(auVar3[9] == auVar26[1]);
    auVar32[10] = -(auVar3[10] == auVar26[2]);
    auVar32[0xb] = -(auVar3[0xb] == auVar26[3]);
    auVar32[0xc] = -(auVar3[0xc] == auVar26[4]);
    auVar32[0xd] = -(auVar3[0xd] == auVar26[5]);
    auVar32[0xe] = -(auVar3[0xe] == auVar26[6]);
    auVar32[0xf] = -(auVar3[0xf] == auVar26[7]);
    uVar17 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe | (ushort)(auVar32[0xf] >> 7) << 0xf;
    uVar13 = (uint)uVar17;
    while (uVar17 != 0) {
      uVar18 = 0;
      for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar18 = uVar18 + 1;
      }
      pauVar23 = (undefined1 (*) [16])
                 (*(longlong *)(param_1 + 0xa0) +
                 (uVar18 + uVar22 & *(ulonglong *)(param_1 + 0xa8)) * -0x20);
      uStack_d0 = uVar10;
      if (*(longlong *)pauVar23[-2] == lVar27 && *(longlong *)(pauVar23[-2] + 8) == lVar16)
      goto LAB_1417f4ef4;
      uVar17 = (ushort)(uVar13 - 1) & (ushort)uVar13;
      uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar17);
    }
    auVar29[0] = -(auVar3[0] == -1);
    auVar29[1] = -(auVar3[1] == -1);
    auVar29[2] = -(auVar3[2] == -1);
    auVar29[3] = -(auVar3[3] == -1);
    auVar29[4] = -(auVar3[4] == -1);
    auVar29[5] = -(auVar3[5] == -1);
    auVar29[6] = -(auVar3[6] == -1);
    auVar29[7] = -(auVar3[7] == -1);
    auVar29[8] = -(auVar3[8] == -1);
    auVar29[9] = -(auVar3[9] == -1);
    auVar29[10] = -(auVar3[10] == -1);
    auVar29[0xb] = -(auVar3[0xb] == -1);
    auVar29[0xc] = -(auVar3[0xc] == -1);
    auVar29[0xd] = -(auVar3[0xd] == -1);
    auVar29[0xe] = -(auVar3[0xe] == -1);
    auVar29[0xf] = -(auVar3[0xf] == -1);
    if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar29 >> 0x17,0) & 1) != 0) || (SUB161(auVar29 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar29 >> 0x27,0) & 1) != 0) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar29 >> 0x37,0) & 1) != 0) || (SUB161(auVar29 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar29 >> 0x47,0) & 1) != 0) || (SUB161(auVar29 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar29 >> 0x57,0) & 1) != 0) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') break;
    uVar22 = uVar22 + lVar19 + 0x10;
    lVar19 = lVar19 + 0x10;
  }
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    pdb_142df2040(param_1 + 0xa0,1,param_1 + 0xc0,CONCAT71((int7)(uVar22 >> 8),1));
  }
  pdb_141c2dde0(&uStack_108);
  lStack_a8 = 1;
  puStack_a0 = (uint *)0x1;
  pbStack_98 = (byte *)uStack_108;
  puStack_90 = (uint *)uStack_100;
  lStack_88 = uStack_f8;
  lStack_80 = uStack_f0;
  uStack_78 = uStack_e8;
  uStack_70 = uStack_e0;
  pdb_14007ee60();
  pbVar11 = pub_1406abab0(0x40,8);
  if (pbVar11 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    pdb_142dc7e11(8,0x40);
  }
  *(undefined8 *)(pbVar11 + 0x30) = uStack_78;
  *(undefined8 *)(pbVar11 + 0x38) = uStack_70;
  *(longlong *)(pbVar11 + 0x20) = lStack_88;
  *(longlong *)(pbVar11 + 0x28) = lStack_80;
  *(byte **)(pbVar11 + 0x10) = pbStack_98;
  *(uint **)(pbVar11 + 0x18) = puStack_90;
  *(longlong *)pbVar11 = lStack_a8;
  *(uint **)(pbVar11 + 8) = puStack_a0;
  pauVar4 = *(undefined1 (**) [16])(param_1 + 0xa0);
  uVar22 = *(ulonglong *)(param_1 + 0xa8);
  uVar10 = uVar10 & uVar22;
  auVar26 = *(undefined1 (*) [16])(*pauVar4 + uVar10);
  uVar17 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar26[0xf] >> 7) << 0xf
  ;
  uVar13 = (uint)uVar17;
  if (uVar17 == 0) {
    lVar19 = 0x10;
    do {
      uVar10 = uVar10 + lVar19 & uVar22;
      auVar26 = *(undefined1 (*) [16])(*pauVar4 + uVar10);
      lVar19 = lVar19 + 0x10;
      uVar13 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar26[0xf] >> 7) << 0xf);
    } while (uVar13 == 0);
  }
  uVar18 = 0;
  for (; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
    uVar18 = uVar18 + 1;
  }
  uVar10 = uVar18 + uVar10 & uVar22;
  bVar25 = (*pauVar4)[uVar10];
  if (-1 < (char)bVar25) {
    auVar26 = *pauVar4;
    uVar13 = 0;
    for (uVar18 = (uint)(ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar26[0xf] >> 7) << 0xf); (uVar18 & 1) == 0;
        uVar18 = uVar18 >> 1 | 0x80000000) {
      uVar13 = uVar13 + 1;
    }
    uVar10 = (ulonglong)uVar13;
    bVar25 = (*pauVar4)[uVar10];
  }
  bVar14 = bVar14 >> 1;
  (*pauVar4)[uVar10] = bVar14;
  pauVar4[1][uVar10 - 0x10 & uVar22] = bVar14;
  pauVar23 = pauVar4 + uVar10 * -2;
  *(longlong *)pauVar4[uVar10 * -2 + -2] = lVar27;
  *(longlong *)(pauVar23[-2] + 8) = lVar16;
  *(byte **)pauVar23[-1] = pbVar11;
  *(undefined **)(pauVar23[-1] + 8) = &UNK_14333e020;
  lVar27 = *(longlong *)(param_1 + 0xb8) - _UNK_142e47bf8;
  *(ulonglong *)(param_1 + 0xb0) =
       *(longlong *)(param_1 + 0xb0) - ((ulonglong)bVar25 & 0xffffffffffffff01);
  *(longlong *)(param_1 + 0xb8) = lVar27;
LAB_1417f4ef4:
  piVar24 = (int *)(param_1 + 0x90);
  plVar15 = *(longlong **)pauVar23[-1];
  lVar16 = *(longlong *)(pauVar23[-1] + 8);
  LOCK();
  lVar27 = *plVar15;
  *plVar15 = *plVar15 + 1;
  UNLOCK();
  if (*plVar15 == 0 || SCARRY8(lVar27,1) != *plVar15 < 0) {
LAB_1417f51fd:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  if ((bVar8 == 0) && ((*puVar7 & 0x7fffffffffffffff) != 0)) {
    uStack_49 = 0;
    cVar9 = pdb_142dc79e0();
    if (cVar9 == '\0') {
      *(undefined1 *)(param_1 + 0x98) = 1;
    }
  }
  LOCK();
  iVar2 = *piVar24;
  *piVar24 = *piVar24 + -0x3fffffff;
  UNLOCK();
  pbVar11 = pbStack_60;
  lVar12 = lStack_68;
  if (0x3fffffff < iVar2 + 0xc0000001U) {
    uStack_49 = 0;
    pdb_142dc6fa0(piVar24);
    pbVar11 = pbStack_60;
    lVar12 = lStack_68;
  }
LAB_1417f4f3f:
  lStack_a8 = 0;
  pbStack_98 = (byte *)*param_5;
  puStack_90 = (uint *)param_5[1];
  lStack_88 = param_5[2];
  lStack_80 = param_5[3];
  plStack_d8 = &lStack_a8;
  plStack_b8 = plVar15;
  lStack_b0 = lVar16;
  lStack_c8 = (**(code **)(lVar16 + 0x18))
                        ((longlong)plVar15 +
                         (*(longlong *)(lVar16 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10,lStack_88,
                         lVar12,&plStack_d8,&UNK_14333de88);
  lStack_c0 = (longlong)pbVar11;
  lStack_68 = lStack_c8;
  (**(code **)((longlong)pbVar11 + 0x18))
            (&uStack_108,
             lStack_c8 + (*(longlong *)((longlong)pbVar11 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10)
  ;
  lVar27 = lStack_68;
  auVar26[0] = -((char)uStack_108 == DAT_14333ddb0);
  auVar26[1] = -(uStack_108._1_1_ == UNK_14333ddb1);
  auVar26[2] = -(uStack_108._2_1_ == UNK_14333ddb2);
  auVar26[3] = -(uStack_108._3_1_ == UNK_14333ddb3);
  auVar26[4] = -(uStack_108._4_1_ == UNK_14333ddb4);
  auVar26[5] = -(uStack_108._5_1_ == UNK_14333ddb5);
  auVar26[6] = -(uStack_108._6_1_ == UNK_14333ddb6);
  auVar26[7] = -(uStack_108._7_1_ == UNK_14333ddb7);
  auVar26[8] = -((char)uStack_100 == UNK_14333ddb8);
  auVar26[9] = -(uStack_100._1_1_ == UNK_14333ddb9);
  auVar26[10] = -(uStack_100._2_1_ == UNK_14333ddba);
  auVar26[0xb] = -(uStack_100._3_1_ == UNK_14333ddbb);
  auVar26[0xc] = -(uStack_100._4_1_ == UNK_14333ddbc);
  auVar26[0xd] = -(uStack_100._5_1_ == UNK_14333ddbd);
  auVar26[0xe] = -(uStack_100._6_1_ == UNK_14333ddbe);
  auVar26[0xf] = -(uStack_100._7_1_ == UNK_14333ddbf);
  if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf)
      != 0xffff) {
    uStack_108 = lStack_68;
    uStack_100 = (longlong)pbVar11;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14333e4d0,0x2b,&uStack_108,&UNK_14333e490,&UNK_14333deb8);
  }
  pbStack_60 = pbStack_98;
  if (pbStack_98 != (byte *)0x0) {
    puStack_58 = puStack_90;
    if (*(code **)puStack_90 != (code *)0x0) {
      (**(code **)puStack_90)(pbStack_98);
    }
    if (*(ulonglong *)(puStack_58 + 2) != 0) {
      pub_1406abac0(pbStack_60,*(ulonglong *)(puStack_58 + 2),*(ulonglong *)(puStack_58 + 4));
    }
  }
  LOCK();
  *plStack_b8 = *plStack_b8 + -1;
  UNLOCK();
  if (*plStack_b8 == 0) {
    uStack_4a = 0;
    pdb_140c7a240(&plStack_b8);
  }
  return lVar27;
LAB_1417f4d1c:
  uVar10 = uVar10 & uVar22;
  auVar3 = *(undefined1 (*) [16])(lVar27 + uVar10);
  auVar33[0] = -(auVar3[0] == auVar26[0]);
  auVar33[1] = -(auVar3[1] == auVar26[1]);
  auVar33[2] = -(auVar3[2] == auVar26[2]);
  auVar33[3] = -(auVar3[3] == auVar26[3]);
  auVar33[4] = -(auVar3[4] == auVar26[4]);
  auVar33[5] = -(auVar3[5] == auVar26[5]);
  auVar33[6] = -(auVar3[6] == auVar26[6]);
  auVar33[7] = -(auVar3[7] == auVar26[7]);
  auVar33[8] = -(auVar3[8] == auVar26[0]);
  auVar33[9] = -(auVar3[9] == auVar26[1]);
  auVar33[10] = -(auVar3[10] == auVar26[2]);
  auVar33[0xb] = -(auVar3[0xb] == auVar26[3]);
  auVar33[0xc] = -(auVar3[0xc] == auVar26[4]);
  auVar33[0xd] = -(auVar3[0xd] == auVar26[5]);
  auVar33[0xe] = -(auVar3[0xe] == auVar26[6]);
  auVar33[0xf] = -(auVar3[0xf] == auVar26[7]);
  uVar17 = (ushort)(SUB161(auVar33 >> 7,0) & 1) | (ushort)(SUB161(auVar33 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar33 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar33 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar33 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar33 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar33 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar33 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar33 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar33 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar33 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar33 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar33 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar33 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar33 >> 0x77,0) & 1) << 0xe | (ushort)(auVar33[0xf] >> 7) << 0xf;
  uVar13 = (uint)uVar17;
  while (uVar17 != 0) {
    uVar18 = 0;
    for (uVar6 = uVar13; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
      uVar18 = uVar18 + 1;
    }
    lVar20 = lVar27 + (uVar18 + uVar10 & uVar22) * -0x20;
    if (*(longlong *)(lVar20 + -0x20) == lVar16 && *(longlong *)(lVar20 + -0x18) == lVar19) {
      plVar15 = *(longlong **)(lVar20 + -0x10);
      lVar16 = *(longlong *)(lVar20 + -8);
      LOCK();
      lVar27 = *plVar15;
      *plVar15 = *plVar15 + 1;
      UNLOCK();
      if (*plVar15 == 0 || SCARRY8(lVar27,1) != *plVar15 < 0) goto LAB_1417f51fd;
      LOCK();
      uVar13 = *puStack_58;
      *puStack_58 = *puStack_58 - 1;
      UNLOCK();
      if (SBORROW4(0,uVar13 - 1 & 0xbfffffff)) {
        uStack_4a = 1;
        pdb_142dc6fa0(puStack_58,uVar13 - 1,lStack_68);
      }
      goto LAB_1417f4f3f;
    }
    uVar17 = (ushort)(uVar13 - 1) & (ushort)uVar13;
    uVar13 = CONCAT22((short)(uVar13 - 1 >> 0x10),uVar17);
  }
  auVar30[0] = -(auVar3[0] == -1);
  auVar30[1] = -(auVar3[1] == -1);
  auVar30[2] = -(auVar3[2] == -1);
  auVar30[3] = -(auVar3[3] == -1);
  auVar30[4] = -(auVar3[4] == -1);
  auVar30[5] = -(auVar3[5] == -1);
  auVar30[6] = -(auVar3[6] == -1);
  auVar30[7] = -(auVar3[7] == -1);
  auVar30[8] = -(auVar3[8] == -1);
  auVar30[9] = -(auVar3[9] == -1);
  auVar30[10] = -(auVar3[10] == -1);
  auVar30[0xb] = -(auVar3[0xb] == -1);
  auVar30[0xc] = -(auVar3[0xc] == -1);
  auVar30[0xd] = -(auVar3[0xd] == -1);
  auVar30[0xe] = -(auVar3[0xe] == -1);
  auVar30[0xf] = -(auVar3[0xf] == -1);
  if ((((((((((((((((SUB161(auVar30 >> 7,0) & 1) != 0 || (SUB161(auVar30 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar30 >> 0x17,0) & 1) != 0) || (SUB161(auVar30 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar30 >> 0x27,0) & 1) != 0) || (SUB161(auVar30 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar30 >> 0x37,0) & 1) != 0) || (SUB161(auVar30 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar30 >> 0x47,0) & 1) != 0) || (SUB161(auVar30 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar30 >> 0x57,0) & 1) != 0) || (SUB161(auVar30 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar30 >> 0x67,0) & 1) != 0) || (SUB161(auVar30 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar30 >> 0x77,0) & 1) != 0) || auVar30[0xf] < '\0') {
    uStack_49 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14333de70);
  }
  uVar10 = uVar10 + lVar21 + 0x10;
  lVar21 = lVar21 + 0x10;
  goto LAB_1417f4d1c;
}

