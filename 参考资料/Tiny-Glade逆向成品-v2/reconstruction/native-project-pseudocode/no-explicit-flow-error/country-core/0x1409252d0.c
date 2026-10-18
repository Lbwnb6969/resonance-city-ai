// VA 0x1409252d0, PDB extent 4899 bytes
// country_core::systems::backend::prepare_frame_constants::prepare_frame_constants
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/prepare_frame_constants.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::backend::prepare_frame_constants::prepare_frame_constants
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/prepare_frame_constants.rs
   Extent: 4899 */

void pdb_1409252d0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  float fVar1;
  float fVar2;
  double dVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  float fVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  float *pfVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  double dVar20;
  undefined4 uVar21;
  longlong lVar22;
  byte *pbVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  float fVar28;
  longlong lVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  ushort uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  float fVar36;
  longlong lVar37;
  undefined4 uVar38;
  char *pcVar39;
  float fVar40;
  byte bVar41;
  byte bVar42;
  undefined4 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  double dVar48;
  float fVar50;
  float fVar51;
  undefined1 auVar49 [16];
  float fVar52;
  undefined8 uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined8 unaff_XMM6_Qa;
  undefined8 uVar66;
  undefined8 unaff_XMM6_Qb;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar67 [16];
  undefined4 unaff_XMM8_Da;
  float fVar68;
  undefined4 unaff_XMM8_Db;
  undefined4 unaff_XMM8_Dc;
  undefined4 unaff_XMM8_Dd;
  undefined4 unaff_XMM9_Da;
  float fVar69;
  float fVar70;
  undefined4 unaff_XMM9_Db;
  float fVar71;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined8 unaff_XMM10_Qa;
  char cVar73;
  undefined8 unaff_XMM10_Qb;
  undefined1 auVar72 [16];
  undefined4 unaff_XMM11_Da;
  float fVar74;
  undefined4 unaff_XMM11_Db;
  float fVar75;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM11_Dd;
  undefined4 unaff_XMM12_Da;
  float fVar76;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  undefined4 unaff_XMM13_Da;
  float fVar77;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  undefined4 unaff_XMM14_Da;
  float fVar78;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  undefined4 unaff_XMM15_Da;
  undefined4 unaff_XMM15_Db;
  uint uVar79;
  undefined4 unaff_XMM15_Dc;
  uint uVar80;
  undefined4 unaff_XMM15_Dd;
  uint uVar81;
  undefined8 uStack_48;
  
  uStack_48 = 0x1409252e6;
  lVar22 = pdb_142d7c6d0();
  lVar22 = -lVar22;
  *(undefined4 *)(&stack0x000012d0 + lVar22) = unaff_XMM15_Da;
  *(undefined4 *)(&stack0x000012d4 + lVar22) = unaff_XMM15_Db;
  *(undefined4 *)(&stack0x000012d8 + lVar22) = unaff_XMM15_Dc;
  *(undefined4 *)(&stack0x000012dc + lVar22) = unaff_XMM15_Dd;
  *(undefined4 *)(&stack0x000012c0 + lVar22) = unaff_XMM14_Da;
  *(undefined4 *)(&stack0x000012c4 + lVar22) = unaff_XMM14_Db;
  *(undefined4 *)(&stack0x000012c8 + lVar22) = unaff_XMM14_Dc;
  *(undefined4 *)(&stack0x000012cc + lVar22) = unaff_XMM14_Dd;
  *(undefined4 *)(&stack0x000012b0 + lVar22) = unaff_XMM13_Da;
  *(undefined4 *)(&stack0x000012b4 + lVar22) = unaff_XMM13_Db;
  *(undefined4 *)(&stack0x000012b8 + lVar22) = unaff_XMM13_Dc;
  *(undefined4 *)(&stack0x000012bc + lVar22) = unaff_XMM13_Dd;
  *(undefined4 *)(&stack0x000012a0 + lVar22) = unaff_XMM12_Da;
  *(undefined4 *)(&stack0x000012a4 + lVar22) = unaff_XMM12_Db;
  *(undefined4 *)(&stack0x000012a8 + lVar22) = unaff_XMM12_Dc;
  *(undefined4 *)(&stack0x000012ac + lVar22) = unaff_XMM12_Dd;
  *(undefined4 *)(&stack0x00001290 + lVar22) = unaff_XMM11_Da;
  *(undefined4 *)(&stack0x00001294 + lVar22) = unaff_XMM11_Db;
  *(undefined4 *)(&stack0x00001298 + lVar22) = unaff_XMM11_Dc;
  *(undefined4 *)(&stack0x0000129c + lVar22) = unaff_XMM11_Dd;
  *(undefined8 *)(&stack0x00001280 + lVar22) = unaff_XMM10_Qa;
  *(undefined8 *)(&stack0x00001288 + lVar22) = unaff_XMM10_Qb;
  *(undefined4 *)(&stack0x00001270 + lVar22) = unaff_XMM9_Da;
  *(undefined4 *)(&stack0x00001274 + lVar22) = unaff_XMM9_Db;
  *(undefined4 *)(&stack0x00001278 + lVar22) = unaff_XMM9_Dc;
  *(undefined4 *)(&stack0x0000127c + lVar22) = unaff_XMM9_Dd;
  *(undefined4 *)(&stack0x00001260 + lVar22) = unaff_XMM8_Da;
  *(undefined4 *)(&stack0x00001264 + lVar22) = unaff_XMM8_Db;
  *(undefined4 *)(&stack0x00001268 + lVar22) = unaff_XMM8_Dc;
  *(undefined4 *)(&stack0x0000126c + lVar22) = unaff_XMM8_Dd;
  *(undefined8 *)(&stack0x00001250 + lVar22) = unaff_XMM7_Qa;
  *(undefined8 *)(&stack0x00001258 + lVar22) = unaff_XMM7_Qb;
  *(undefined8 *)(&stack0x00001240 + lVar22) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x00001248 + lVar22) = unaff_XMM6_Qb;
  *(undefined8 *)(&stack0x00001238 + lVar22) = 0xfffffffffffffffe;
  *(undefined8 *)(&stack0x00001188 + lVar22) = param_3;
  *(undefined8 *)(&stack0x00001208 + lVar22) = *param_1;
  lVar26 = param_1[4];
  *(undefined8 *)(&stack0x00001210 + lVar22) = param_1[8];
  puVar8 = (undefined4 *)param_1[0xc];
  *(undefined8 *)(&stack0x00001200 + lVar22) = param_1[0x10];
  *(undefined8 *)(&stack0x000011a8 + lVar22) = param_1[0x14];
  lVar27 = param_1[0x18];
  lVar32 = param_1[0x1c];
  puVar9 = (uint *)param_1[0x20];
  *(undefined8 *)(&stack0x00001140 + lVar22) = param_1[0x24];
  *(undefined8 *)(&stack0x00001228 + lVar22) = param_1[0x28];
  *(undefined8 *)(&stack0x000011c0 + lVar22) = param_1[0x2c];
  *(undefined8 *)(&stack0x000011d0 + lVar22) = param_1[0x30];
  *(undefined8 *)(&stack0x000011b0 + lVar22) = param_1[0x34];
  *(undefined8 *)(&stack0x000011a0 + lVar22) = param_1[0x38];
  *(undefined8 *)(&stack0x00001150 + lVar22) = *param_2;
  uVar10 = param_2[4];
  *(undefined8 *)(&stack0x000010d0 + lVar22) = param_2[8];
  *(undefined8 *)(&stack0x00001190 + lVar22) = param_2[0xc];
  *(undefined8 *)(&stack0x00001198 + lVar22) = param_2[0x10];
  *(undefined8 *)(&stack0x00001148 + lVar22) = param_2[0x14];
  *(undefined8 *)(&stack0x000011b8 + lVar22) = param_2[0x18];
  lVar29 = (ulonglong)*(byte *)(lVar26 + 0xc0) * 0x40;
  cVar5 = *(char *)(lVar26 + 0x28 + lVar29);
  *(longlong *)(&stack0x000011f0 + lVar22) = lVar26;
  if (cVar5 == '\0') {
    lVar29 = lVar29 + lVar26;
    *(undefined8 *)((longlong)&uStack_48 + lVar22) = 0x1409254d9;
    pdb_140f60be0(&stack0x00001098 + lVar22);
    uVar53 = *(undefined8 *)(lVar29 + 0x18);
    uVar4 = *(undefined8 *)(lVar29 + 0x20);
    (&stack0x000010c0)[lVar22] = 0;
    *(undefined8 *)(&stack0x000010b0 + lVar22) = uVar53;
    *(undefined8 *)(&stack0x000010b8 + lVar22) = uVar4;
    uVar30 = *puVar9;
  }
  else {
    *(undefined8 *)((longlong)&uStack_48 + lVar22) = 0x140925464;
    pdb_14007ee60();
    *(undefined8 *)((longlong)&uStack_48 + lVar22) = 0x140925473;
    pbVar23 = pub_1406abab0(7,1);
    if (pbVar23 == (byte *)0x0) {
      *(undefined8 *)((longlong)&uStack_48 + lVar22) = 0x140926500;
      pdb_142dc7e2a(1,7);
      goto LAB_140926501;
    }
    *(uint *)(pbVar23 + 3) = CONCAT31(_UNK_1430693cf,DAT_1430693ce);
    *(undefined4 *)pbVar23 = _DAT_1430693cb;
    (&stack0x000010c0)[lVar22] = 0;
    *(undefined8 *)(&stack0x00001098 + lVar22) = 7;
    *(byte **)(&stack0x000010a0 + lVar22) = pbVar23;
    *(undefined8 *)(&stack0x000010a8 + lVar22) = 7;
    *(undefined8 *)(&stack0x000010b0 + lVar22) = _DAT_143020ea0;
    *(undefined8 *)(&stack0x000010b8 + lVar22) = _UNK_143020ea8;
    uVar30 = *puVar9;
    uVar53 = _DAT_143020ea0;
    uVar4 = _UNK_143020ea8;
  }
  if (1 < uVar30) {
    uVar30 = puVar9[1];
    *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
    *(uint *)(*param_4 + 0x108) = uVar30 & 3;
  }
  uVar66 = 0;
  if (DAT_143ca4250 != '\0') {
    uVar25 = *(ulonglong *)(lVar32 + 0x10);
    if (uVar25 == 0) {
LAB_140926501:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)((longlong)&uStack_48 + lVar22) = 0x14092650d;
      pdb_142dc8510(&UNK_1430213a0);
    }
    uVar24 = (ulonglong)*(uint *)(*param_4 + 0x108);
    if (uVar25 <= uVar24) {
      uVar24 = uVar24 % (uVar25 & 0xffffffff);
    }
    uVar66 = *(undefined8 *)(*(longlong *)(lVar32 + 8) + uVar24 * 8);
  }
  *(undefined8 *)(&stack0x000010e0 + lVar22) = uVar53;
  *(undefined8 *)(&stack0x000010e8 + lVar22) = uVar4;
  *(undefined8 *)(&stack0x000010c8 + lVar22) = uVar10;
  uVar43 = _DAT_143cb2c5c;
  if (DAT_143cb2c58 == '\0') {
    uVar33 = *(ushort *)(lVar27 + 8);
    fVar36 = (float)*(ushort *)(lVar27 + 4);
    if ((float)*(ushort *)(lVar27 + 4) <= _DAT_142e36f28) {
      fVar36 = _DAT_142e36f28;
    }
    *(undefined8 *)((longlong)&uStack_48 + lVar22) = 0x140925586;
    uVar43 = pub_142e32ab0((float)uVar33 / fVar36);
  }
  lVar26 = *(longlong *)(&stack0x00001200 + lVar22);
  *(undefined8 *)((longlong)&uStack_48 + lVar22) = 0x1409255a8;
  pub_142e32760(&stack0x00000400 + lVar22,lVar26,0x100);
  lVar32 = *param_4;
  lVar29 = lVar32;
  if (*(int *)(lVar32 + 0x108) == 0) {
    lVar29 = lVar26;
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar22) = 0x1409255cc;
  pub_142e32760(&stack0x00000500 + lVar22,lVar29,0x100);
  *(longlong *)(&stack0x000011e0 + lVar22) = lVar27;
  uVar30 = *(uint *)(lVar27 + 8);
  *(undefined8 *)(&stack0x00000a08 + lVar22) = 0;
  *(undefined8 *)(&stack0x00000a10 + lVar22) = 0;
  *(undefined8 *)((longlong)&uStack_48 + lVar22) = 0x1409255fe;
  pub_142e32760(&stack0x00000800 + lVar22,&stack0x00000400 + lVar22,0x200);
  *(uint *)(&stack0x00000a00 + lVar22) = uVar30 & 0xffff;
  *(uint *)(&stack0x00000a04 + lVar22) = uVar30 >> 0x10;
  *(undefined4 *)(&stack0x00000a18 + lVar22) = uVar43;
  *(undefined8 *)((longlong)&uStack_48 + lVar22) = 0x140925621;
  pdb_140e0bb90(&stack0x00000400 + lVar22,&stack0x00000800 + lVar22);
  *(undefined8 *)((longlong)&uStack_48 + lVar22) = 0x14092563e;
  pub_142e32760(&stack0x00000800 + lVar22,*(undefined8 *)(&stack0x00001200 + lVar22),0x100);
  uVar38 = *(undefined4 *)((longlong)param_4 + 0x1c);
  puVar11 = (undefined4 *)param_4[2];
  *puVar11 = uVar38;
  *(undefined8 *)((longlong)&uStack_48 + lVar22) = 0x140925658;
  pub_142e32760(lVar32,&stack0x00000800 + lVar22,0x100);
  uVar43 = *(undefined4 *)(lVar32 + 0x104);
  *puVar11 = uVar38;
  *(undefined8 *)(lVar32 + 0x100) = uVar66;
  *(undefined8 *)((longlong)&uStack_48 + lVar22) = 0x14092568d;
  pub_142e32760((longlong)&stack0x00000000 + lVar22,&stack0x00000400 + lVar22,0x400);
  uVar30 = *(uint *)(*(longlong *)(&stack0x000011e0 + lVar22) + 8);
  *(uint *)(&stack0xfffffffffffffff0 + lVar22) = uVar30 >> 0x10;
  *(uint *)(&stack0xffffffffffffffe8 + lVar22) = uVar30 & 0xffff;
  *(undefined4 *)(&stack0xffffffffffffffe0 + lVar22) = uVar43;
  *(undefined8 *)((longlong)&uStack_48 + lVar22) = 0x1409256bf;
  pdb_140e0c5e0(&stack0x00000400 + lVar22);
  lVar26 = *(longlong *)(&stack0x000011f0 + lVar22);
  lVar27 = (ulonglong)*(byte *)(lVar26 + 0xc0) * 0x40;
  bVar41 = *(byte *)(lVar26 + 0x3c + lVar27);
  (&stack0x00001237)[lVar22] = bVar41;
  uVar30 = (uint)bVar41;
  if (*(char *)(*(longlong *)(&stack0x00001210 + lVar22) + 0xd2) != '\0') {
    if (*(char *)(*(longlong *)(&stack0x00001210 + lVar22) + 0xd2) == '\x02') {
      uVar30 = uVar30 | 8;
    }
    else {
      uVar30 = uVar30 | 4;
    }
  }
  *(uint *)(&stack0x000011f8 + lVar22) = uVar30;
  *(undefined4 *)(&stack0x000011ec + lVar22) =
       *(undefined4 *)(*(longlong *)(&stack0x00001228 + lVar22) + 0x9c);
  puVar12 = (ulonglong *)**(undefined8 **)(&stack0x00001360 + lVar22);
  lVar32 = (*(undefined8 **)(&stack0x00001360 + lVar22))[1];
  uVar25 = *puVar12;
  uVar35 = 0;
  uVar24 = uVar25 - *(ulonglong *)(lVar32 + 0x18);
  if (uVar25 < *(ulonglong *)(lVar32 + 0x18)) {
    uVar24 = uVar35;
  }
  uVar13 = *(ulonglong *)(lVar32 + 0x38);
  uVar34 = *(ulonglong *)(lVar32 + 0x38);
  (&stack0x00001218)[lVar22] = **(undefined1 **)(&stack0x000011c0 + lVar22);
  uVar34 = uVar25 - uVar34;
  if (uVar25 < uVar13) {
    uVar34 = uVar35;
  }
  lVar29 = uVar24 * 0x18 + *(longlong *)(lVar32 + 8);
  uVar25 = *(ulonglong *)(lVar32 + 0x30);
  uVar13 = *(ulonglong *)(lVar32 + 0x10) - uVar24;
  if (*(ulonglong *)(lVar32 + 0x10) < uVar24) {
    lVar29 = 8;
    uVar13 = uVar35;
  }
  lVar37 = uVar34 * 0x18 + *(longlong *)(lVar32 + 0x28);
  if (uVar25 < uVar34) {
    lVar37 = 8;
  }
  *(undefined1 (*) [16])(&stack0x00001000 + lVar22) =
       ZEXT416(*(uint *)(*(longlong *)(&stack0x00001208 + lVar22) + 0x58));
  uVar10 = *(undefined8 *)(*(longlong *)(&stack0x00001208 + lVar22) + 0x5c);
  (&stack0x0000121c)[lVar22] = *(undefined1 *)(lVar26 + lVar27 + 0x3d);
  (&stack0x00001228)[lVar22] = *(undefined1 *)(*(longlong *)(&stack0x00001200 + lVar22) + 0x4d0);
  uVar53 = **(undefined8 **)(&stack0x00001140 + lVar22);
  uVar43 = *(undefined4 *)(*(undefined8 **)(&stack0x00001140 + lVar22) + 1);
  uVar24 = uVar25 - uVar34;
  if (uVar25 < uVar34) {
    uVar24 = uVar35;
  }
  *puVar12 = (*(longlong *)(lVar32 + 0x40) - uVar24) - uVar13;
  uVar4 = _DAT_143020eb0;
  lVar27 = lVar29 + uVar13 * 0x18;
  lVar32 = lVar37 + uVar24 * 0x18;
  lVar26 = *(longlong *)(&stack0x000011d0 + lVar22) + 0x20;
  do {
    lVar14 = lVar37;
    do {
      while ((lVar31 = lVar29, lVar37 = lVar14, lVar31 == 0 || (lVar31 == lVar27))) {
        fVar36 = 0.0;
        if ((lVar37 == 0) || (lVar37 == lVar32)) {
          *(undefined8 *)(&stack0x000010f0 + lVar22) = uVar53;
          *(undefined8 *)(&stack0x000010f8 + lVar22) = 0;
LAB_1409259b1:
          *(undefined4 *)(&stack0x00001220 + lVar22) = uVar43;
          bVar41 = *(byte *)(*(longlong **)(&stack0x00001190 + lVar22) + 1);
          uVar38 = 0;
          lVar26 = **(longlong **)(&stack0x00001188 + lVar22);
          uVar43 = 0;
          uVar30 = 0;
          if (bVar41 != 0) {
            lVar27 = **(longlong **)(&stack0x00001190 + lVar22);
            *(longlong *)(&stack0x00000800 + lVar22) = lVar27;
            if (*(longlong *)(lVar26 + 0x48) != 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar22) = 0x140925a08;
              uVar25 = pdb_1400af0a0(lVar26 + 0x50,&stack0x00000800 + lVar22);
              bVar42 = (byte)(uVar25 >> 0x39);
              auVar49 = ZEXT216(CONCAT11(bVar42,bVar42));
              auVar49 = pshuflw(auVar49,auVar49,0);
              lVar32 = 0;
              while( true ) {
                uVar25 = uVar25 & *(ulonglong *)(lVar26 + 0x38);
                pcVar39 = (char *)(*(longlong *)(lVar26 + 0x30) + uVar25);
                auVar60[0] = -(*pcVar39 == auVar49[0]);
                auVar60[1] = -(pcVar39[1] == auVar49[1]);
                auVar60[2] = -(pcVar39[2] == auVar49[2]);
                auVar60[3] = -(pcVar39[3] == auVar49[3]);
                auVar60[4] = -(pcVar39[4] == auVar49[4]);
                auVar60[5] = -(pcVar39[5] == auVar49[5]);
                auVar60[6] = -(pcVar39[6] == auVar49[6]);
                auVar60[7] = -(pcVar39[7] == auVar49[7]);
                auVar60[8] = -(pcVar39[8] == auVar49[0]);
                auVar60[9] = -(pcVar39[9] == auVar49[1]);
                auVar60[10] = -(pcVar39[10] == auVar49[2]);
                auVar60[0xb] = -(pcVar39[0xb] == auVar49[3]);
                auVar60[0xc] = -(pcVar39[0xc] == auVar49[4]);
                auVar60[0xd] = -(pcVar39[0xd] == auVar49[5]);
                auVar60[0xe] = -(pcVar39[0xe] == auVar49[6]);
                auVar60[0xf] = -(pcVar39[0xf] == auVar49[7]);
                uVar33 = (ushort)(SUB161(auVar60 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar60 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar60 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar60 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar60 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar60 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar60 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar60 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar60 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar60 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar60 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar60 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar60 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar60 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar60 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar60[0xf] >> 7) << 0xf;
                uVar30 = (uint)uVar33;
                while (uVar33 != 0) {
                  uVar18 = 0;
                  for (uVar19 = uVar30; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
                    uVar18 = uVar18 + 1;
                  }
                  lVar29 = *(longlong *)(lVar26 + 0x30) +
                           (uVar18 + uVar25 & *(ulonglong *)(lVar26 + 0x38)) * -0x10;
                  if (lVar27 == *(longlong *)(lVar29 + -0x10)) {
                    uVar43 = *(undefined4 *)(lVar29 + -8);
                    uVar30 = (uint)bVar41;
                    goto LAB_140925a9b;
                  }
                  uVar33 = (ushort)(uVar30 - 1) & (ushort)uVar30;
                  uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar33);
                }
                auVar58[0] = -(*pcVar39 == -1);
                auVar58[1] = -(pcVar39[1] == -1);
                auVar58[2] = -(pcVar39[2] == -1);
                auVar58[3] = -(pcVar39[3] == -1);
                auVar58[4] = -(pcVar39[4] == -1);
                auVar58[5] = -(pcVar39[5] == -1);
                auVar58[6] = -(pcVar39[6] == -1);
                auVar58[7] = -(pcVar39[7] == -1);
                auVar58[8] = -(pcVar39[8] == -1);
                auVar58[9] = -(pcVar39[9] == -1);
                auVar58[10] = -(pcVar39[10] == -1);
                auVar58[0xb] = -(pcVar39[0xb] == -1);
                auVar58[0xc] = -(pcVar39[0xc] == -1);
                auVar58[0xd] = -(pcVar39[0xd] == -1);
                auVar58[0xe] = -(pcVar39[0xe] == -1);
                auVar58[0xf] = -(pcVar39[0xf] == -1);
                if ((((((((((((((((SUB161(auVar58 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar58 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar58 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar58 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar58 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar58 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar58 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar58 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar58 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar58 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar58 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar58 >> 0x5f,0) & 1) != 0) || (SUB161(auVar58 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar58 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar58 >> 0x77,0) & 1) != 0) || auVar58[0xf] < '\0') break;
                uVar25 = uVar25 + lVar32 + 0x10;
                lVar32 = lVar32 + 0x10;
              }
            }
            uVar43 = 0;
            uVar30 = 0;
          }
LAB_140925a9b:
          *(uint *)(&stack0x00001190 + lVar22) = uVar30;
          *(undefined4 *)(&stack0x00001188 + lVar22) = uVar43;
          bVar41 = *(byte *)(*(longlong *)(&stack0x00001198 + lVar22) + 0x10);
          if (bVar41 != 0) {
            lVar27 = *(longlong *)(*(longlong *)(&stack0x00001198 + lVar22) + 8);
            *(longlong *)(&stack0x00000800 + lVar22) = lVar27;
            if (*(longlong *)(lVar26 + 0x48) != 0) {
              *(uint *)(&stack0x000011f0 + lVar22) = (uint)bVar41;
              *(undefined8 *)((longlong)&uStack_48 + lVar22) = 0x140925ae6;
              uVar25 = pdb_1400af0a0(lVar26 + 0x50,&stack0x00000800 + lVar22);
              bVar41 = (byte)(uVar25 >> 0x39);
              auVar49 = ZEXT216(CONCAT11(bVar41,bVar41));
              auVar49 = pshuflw(auVar49,auVar49,0);
              lVar32 = 0;
              while( true ) {
                uVar25 = uVar25 & *(ulonglong *)(lVar26 + 0x38);
                pcVar39 = (char *)(*(longlong *)(lVar26 + 0x30) + uVar25);
                auVar61[0] = -(*pcVar39 == auVar49[0]);
                auVar61[1] = -(pcVar39[1] == auVar49[1]);
                auVar61[2] = -(pcVar39[2] == auVar49[2]);
                auVar61[3] = -(pcVar39[3] == auVar49[3]);
                auVar61[4] = -(pcVar39[4] == auVar49[4]);
                auVar61[5] = -(pcVar39[5] == auVar49[5]);
                auVar61[6] = -(pcVar39[6] == auVar49[6]);
                auVar61[7] = -(pcVar39[7] == auVar49[7]);
                auVar61[8] = -(pcVar39[8] == auVar49[0]);
                auVar61[9] = -(pcVar39[9] == auVar49[1]);
                auVar61[10] = -(pcVar39[10] == auVar49[2]);
                auVar61[0xb] = -(pcVar39[0xb] == auVar49[3]);
                auVar61[0xc] = -(pcVar39[0xc] == auVar49[4]);
                auVar61[0xd] = -(pcVar39[0xd] == auVar49[5]);
                auVar61[0xe] = -(pcVar39[0xe] == auVar49[6]);
                auVar61[0xf] = -(pcVar39[0xf] == auVar49[7]);
                uVar33 = (ushort)(SUB161(auVar61 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar61 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar61 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar61 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar61 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar61 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar61 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar61 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar61 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar61 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar61 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar61 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar61 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar61 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar61 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar61[0xf] >> 7) << 0xf;
                uVar30 = (uint)uVar33;
                while (uVar33 != 0) {
                  uVar18 = 0;
                  for (uVar19 = uVar30; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
                    uVar18 = uVar18 + 1;
                  }
                  lVar29 = *(longlong *)(lVar26 + 0x30) +
                           (uVar18 + uVar25 & *(ulonglong *)(lVar26 + 0x38)) * -0x10;
                  if (lVar27 == *(longlong *)(lVar29 + -0x10)) {
                    uVar38 = *(undefined4 *)(lVar29 + -8);
                    goto LAB_140925b7d;
                  }
                  uVar33 = (ushort)(uVar30 - 1) & (ushort)uVar30;
                  uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar33);
                }
                auVar59[0] = -(*pcVar39 == -1);
                auVar59[1] = -(pcVar39[1] == -1);
                auVar59[2] = -(pcVar39[2] == -1);
                auVar59[3] = -(pcVar39[3] == -1);
                auVar59[4] = -(pcVar39[4] == -1);
                auVar59[5] = -(pcVar39[5] == -1);
                auVar59[6] = -(pcVar39[6] == -1);
                auVar59[7] = -(pcVar39[7] == -1);
                auVar59[8] = -(pcVar39[8] == -1);
                auVar59[9] = -(pcVar39[9] == -1);
                auVar59[10] = -(pcVar39[10] == -1);
                auVar59[0xb] = -(pcVar39[0xb] == -1);
                auVar59[0xc] = -(pcVar39[0xc] == -1);
                auVar59[0xd] = -(pcVar39[0xd] == -1);
                auVar59[0xe] = -(pcVar39[0xe] == -1);
                auVar59[0xf] = -(pcVar39[0xf] == -1);
                if ((((((((((((((((SUB161(auVar59 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar59 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar59 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar59 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar59 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar59 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar59 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar59 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar59 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar59 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar59 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar59 >> 0x5f,0) & 1) != 0) || (SUB161(auVar59 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar59 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar59 >> 0x77,0) & 1) != 0) || auVar59[0xf] < '\0') break;
                uVar25 = uVar25 + lVar32 + 0x10;
                lVar32 = lVar32 + 0x10;
              }
            }
          }
          *(undefined4 *)(&stack0x000011f0 + lVar22) = 0;
LAB_140925b7d:
          puVar11 = *(undefined4 **)(&stack0x00001150 + lVar22);
          *(undefined4 *)(&stack0x00001168 + lVar22) = puVar11[1];
          *(undefined4 *)(&stack0x00001198 + lVar22) = puVar11[2];
          *(undefined4 *)(&stack0x0000116c + lVar22) =
               *(undefined4 *)
                (*(longlong *)(&stack0x00001200 + lVar22) + 0x104 +
                *(longlong *)
                 (&UNK_143021840 +
                 (ulonglong)*(byte *)(*(longlong *)(&stack0x00001200 + lVar22) + 0x4d0) * 8));
          fVar68 = *(float *)(*(longlong *)(&stack0x000011b8 + lVar22) + 4);
          *(undefined4 *)(&stack0x00001170 + lVar22) = *puVar8;
          *(undefined8 *)(&stack0x00001010 + lVar22) = *(undefined8 *)(puVar8 + 1);
          *(undefined8 *)(&stack0x00001018 + lVar22) = 0;
          fVar1 = (float)puVar8[0xf];
          *(undefined8 *)(&stack0x00001020 + lVar22) = *(undefined8 *)(puVar8 + 0x10);
          *(undefined8 *)(&stack0x00001028 + lVar22) = 0;
          fVar45 = (float)puVar8[0x12];
          *(undefined8 *)(&stack0x00001030 + lVar22) = *(undefined8 *)(puVar8 + 0x13);
          *(undefined8 *)(&stack0x00001038 + lVar22) = 0;
          fVar76 = (float)puVar8[3];
          uVar53 = *(undefined8 *)(puVar8 + 4);
          *(undefined1 (*) [16])(&stack0x00001050 + lVar22) = ZEXT416((uint)puVar8[6]);
          *(undefined8 *)(&stack0x00001040 + lVar22) = *(undefined8 *)(puVar8 + 7);
          *(undefined8 *)(&stack0x00001048 + lVar22) = 0;
          puVar12 = *(ulonglong **)(&stack0x000011a8 + lVar22);
          *(int *)(&stack0x000011b8 + lVar22) = (int)puVar12[5];
          uVar18 = **(uint **)(&stack0x000011e0 + lVar22);
          uVar19 = (*(uint **)(&stack0x000011e0 + lVar22))[2];
          uVar25 = *puVar12;
          *(int *)(&stack0x00001224 + lVar22) = (int)puVar12[1];
          dVar3 = (double)puVar12[2];
          bVar41 = *(byte *)(*(longlong *)(&stack0x000011b0 + lVar22) + 0x98);
          uVar43 = puVar8[0x1b];
          fVar78 = (float)puVar8[9];
          uVar4 = *(undefined8 *)(puVar8 + 10);
          *(undefined1 (*) [16])(&stack0x00001070 + lVar22) = ZEXT416((uint)puVar8[0xc]);
          *(undefined8 *)(&stack0x00001060 + lVar22) = *(undefined8 *)(puVar8 + 0xd);
          *(undefined8 *)(&stack0x00001068 + lVar22) = 0;
          uVar66 = *(undefined8 *)(puVar8 + 0x17);
          *(undefined8 *)(&stack0x000011c0 + lVar22) = *(undefined8 *)(puVar8 + 0x15);
          *(undefined8 *)(&stack0x000011c8 + lVar22) = uVar66;
          *(undefined4 *)(&stack0x000011a8 + lVar22) = *puVar11;
          *(undefined4 *)(&stack0x000011b0 + lVar22) = puVar8[0x1f];
          *(undefined4 *)(&stack0x000011a0 + lVar22) =
               *(undefined4 *)(*(longlong *)(&stack0x000011a0 + lVar22) + 8);
          *(undefined4 *)(&stack0x00001118 + lVar22) = uVar43;
          *(undefined8 *)(&stack0x00001110 + lVar22) = *(undefined8 *)(puVar8 + 0x19);
          *(undefined4 *)(&stack0x00001108 + lVar22) = puVar8[0x1e];
          *(undefined8 *)(&stack0x00001100 + lVar22) = *(undefined8 *)(puVar8 + 0x1c);
          *(undefined8 *)(&stack0x000011d0 + lVar22) =
               *(undefined8 *)(*(longlong *)(&stack0x00001208 + lVar22) + 0x40);
          *(undefined8 *)(&stack0x000011d8 + lVar22) = 0;
          uVar30 = *(uint *)(*(longlong *)(&stack0x00001208 + lVar22) + 0x48);
          *(undefined8 *)((longlong)&uStack_48 + lVar22) = 0x140925d2e;
          pdb_140e08f50(&stack0x00000800 + lVar22);
          *(undefined4 *)(&stack0x00001174 + lVar22) = uVar38;
          *(undefined8 *)(&stack0x00001080 + lVar22) = uVar10;
          *(undefined8 *)(&stack0x00001088 + lVar22) = 0;
          *(float *)(&stack0x00001208 + lVar22) = fVar68 * _DAT_142e37844;
          fVar68 = (_DAT_142e36f28 - fVar68) * _DAT_142e37880;
          *(uint *)(&stack0x0000117c + lVar22) =
               (uint)*(byte *)(*(longlong *)(&stack0x00001200 + lVar22) + 0x4d0);
          *(undefined4 *)(&stack0x00001178 + lVar22) =
               *(undefined4 *)(*(longlong *)(&stack0x00001150 + lVar22) + 0xc);
          pcVar39 = "";
          if (**(char **)(&stack0x000010d0 + lVar22) != '\0') {
            pcVar39 = *(char **)(&stack0x000010d0 + lVar22) + 4;
          }
          *(undefined4 *)(&stack0x00001180 + lVar22) =
               *(undefined4 *)(&UNK_143021870 + (ulonglong)bVar41 * 4);
          *(uint *)(&stack0x00001210 + lVar22) = uVar18 >> 0x10;
          cVar5 = (&stack0x00001228)[lVar22];
          fVar40 = (float)((uint)*(float *)(&stack0x000011f8 + lVar22) | 2);
          *(undefined4 *)(&stack0x00001228 + lVar22) = 0;
          cVar73 = (&stack0x00001218)[lVar22];
          fVar52 = *(float *)(&stack0x000011f8 + lVar22);
          if (cVar73 != '\x10') {
            fVar52 = fVar40;
          }
          if ((&stack0x0000121c)[lVar22] == '\0') {
            fVar40 = fVar52;
          }
          if (cVar5 == '\x03') {
            fVar40 = fVar52;
          }
          *(undefined4 *)(&stack0x00001150 + lVar22) = *(undefined4 *)(&stack0x00000800 + lVar22);
          *(float *)(&stack0x00001154 + lVar22) = _UNK_142e4e65c;
          *(int *)(&stack0x00001158 + lVar22) = (int)*(undefined8 *)(&stack0x00000804 + lVar22);
          *(int *)(&stack0x0000115c + lVar22) =
               (int)((ulonglong)*(undefined8 *)(&stack0x00000804 + lVar22) >> 0x20);
          *(uint *)(&stack0x000010d0 + lVar22) = uVar30 ^ _DAT_142e37820;
          *(uint *)(&stack0x000010d4 + lVar22) = _UNK_142e37824;
          *(uint *)(&stack0x000010d8 + lVar22) = _UNK_142e37828;
          *(uint *)(&stack0x000010dc + lVar22) = _UNK_142e3782c;
          *(undefined8 *)((longlong)&uStack_48 + lVar22) = 0x140925e4c;
          dVar48 = (double)pub_142e32a60(dVar3);
          dVar20 = 0.0;
          if (0.0 <= dVar3) {
            dVar20 = dVar3;
          }
          dVar3 = _DAT_142e33020;
          if (dVar20 <= _DAT_142e33020) {
            dVar3 = dVar20;
          }
          *(longlong *)(&stack0x000011f8 + lVar22) = (longlong)dVar3;
          *(float *)(&stack0x00001218 + lVar22) =
               (float)*(int *)(&stack0x00001224 + lVar22) / _DAT_142e46a44 + (float)uVar25;
          *(float *)(&stack0x00001208 + lVar22) = *(float *)(&stack0x00001208 + lVar22) + fVar68;
          *(uint *)(&stack0x00001228 + lVar22) =
               CONCAT31((int3)((uint)*(undefined4 *)(&stack0x00001228 + lVar22) >> 8),
                        cVar73 == '\x10');
          uVar43 = *(undefined4 *)(&stack0x00001154 + lVar22);
          *(undefined4 *)(&stack0x00001150 + lVar22) = *(undefined4 *)(&stack0x00001150 + lVar22);
          *(undefined4 *)(&stack0x00001154 + lVar22) = *(undefined4 *)(&stack0x00001158 + lVar22);
          *(undefined4 *)(&stack0x00001158 + lVar22) = *(undefined4 *)(&stack0x0000115c + lVar22);
          *(undefined4 *)(&stack0x0000115c + lVar22) = uVar43;
          uVar30 = *(uint *)(&stack0x000011d0 + lVar22) ^ _DAT_142e37820;
          uVar79 = *(uint *)(&stack0x000011d4 + lVar22) ^ _UNK_142e37824;
          uVar80 = *(uint *)(&stack0x000011d8 + lVar22) ^ _UNK_142e37828;
          uVar81 = *(uint *)(&stack0x000011dc + lVar22) ^ _UNK_142e3782c;
          *(float *)(&stack0x00001224 + lVar22) = (float)dVar48;
          fVar28 = (float)(uVar18 & 0xffff);
          *(float *)(&stack0x0000121c + lVar22) =
               (float)(int)fVar28 / (float)*(int *)(&stack0x00001210 + lVar22);
          *(uint *)(&stack0x00001184 + lVar22) = uVar19 & 0xffff;
          fVar68 = *(float *)(&stack0x000010e4 + lVar22);
          *(undefined8 *)((longlong)&uStack_48 + lVar22) = 0x140925f4a;
          uVar43 = pub_142e32a10();
          auVar49._0_12_ = SUB1612(*(undefined1 (*) [16])(&stack0x000011c0 + lVar22),4);
          auVar49._12_4_ = SUB164(*(undefined1 (*) [16])(&stack0x000011c0 + lVar22),0);
          auVar67._4_4_ = *(undefined4 *)(&stack0x00001060 + lVar22);
          auVar67._0_4_ = *(undefined4 *)(&stack0x00001070 + lVar22);
          auVar67._8_4_ = *(undefined4 *)(&stack0x00001064 + lVar22);
          auVar67._12_4_ = 0;
          *(undefined1 (*) [16])(&stack0x000011c0 + lVar22) = auVar49;
          *(uint *)(&stack0x000011d0 + lVar22) = uVar30;
          *(uint *)(&stack0x000011d4 + lVar22) = uVar79;
          *(uint *)(&stack0x000011d8 + lVar22) = uVar80;
          *(uint *)(&stack0x000011dc + lVar22) = uVar81;
          *(undefined4 *)(&stack0x000010e0 + lVar22) = uVar43;
          fVar52 = _DAT_142e36f34;
          if ((&stack0x00001237)[lVar22] == '\0') {
            fVar52 = 0.0;
          }
          lVar26 = *(longlong *)(&stack0x000011e0 + lVar22);
          pfVar15 = *(float **)(&stack0x00001148 + lVar22);
          *(undefined8 *)((longlong)&uStack_48 + lVar22) = 0x140925fc2;
          fVar44 = (float)pub_142e32a10(*(float *)(&stack0x000011ec + lVar22) + fVar68 + fVar52);
          fVar52 = _UNK_142e4e65c;
          fVar74 = (float)uVar4 * _DAT_143020ec0;
          fVar75 = (float)((ulonglong)uVar4 >> 0x20) * _UNK_143020ec4;
          fVar78 = fVar78 * _DAT_142e37844;
          uVar21 = *(undefined4 *)(&stack0x00001050 + lVar22);
          uVar43 = *(undefined4 *)(&stack0x00001040 + lVar22);
          uVar38 = *(undefined4 *)(&stack0x00001044 + lVar22);
          fVar69 = (float)uVar53 * _DAT_143020ec0;
          fVar71 = (float)((ulonglong)uVar53 >> 0x20) * _UNK_143020ec4;
          fVar76 = fVar76 * _DAT_142e37844;
          fVar68 = *(float *)(&stack0x00001000 + lVar22) * fVar44;
          fVar65 = fVar45 * fVar68 * _DAT_143020ed0;
          fVar62 = *(float *)(&stack0x00001080 + lVar22) * fVar44;
          fVar64 = *(float *)(&stack0x00001084 + lVar22) * fVar44;
          fVar77 = fVar1 * fVar68 * _DAT_143020ed4;
          fVar45 = *(float *)(&stack0x00001030 + lVar22) * fVar62 * _DAT_143020ee0;
          fVar50 = *(float *)(&stack0x00001034 + lVar22) * fVar64 * _UNK_143020ee4;
          fVar46 = *(float *)(&stack0x00001020 + lVar22) * fVar62 * _DAT_143020ef0;
          fVar51 = *(float *)(&stack0x00001024 + lVar22) * fVar64 * _UNK_143020ef4;
          fVar63 = fVar62 * *(float *)(&stack0x00001010 + lVar22) * _DAT_143020ec0;
          fVar64 = fVar64 * *(float *)(&stack0x00001014 + lVar22) * _UNK_143020ec4;
          fVar62 = fVar68 * *(float *)(&stack0x00001170 + lVar22) * _DAT_142e37844;
          fVar68 = *(float *)(&stack0x00001198 + lVar22);
          fVar1 = fVar68;
          if (fVar68 <= _DAT_142e37848) {
            fVar1 = _DAT_142e37848;
          }
          fVar56 = _DAT_143020f00 / (fVar1 * _DAT_142f3e558);
          fVar1 = *(float *)(&stack0x00001168 + lVar22);
          fVar70 = *(float *)(&stack0x0000116c + lVar22) * _DAT_142e37aa0 * _DAT_142e36f50;
          uVar33 = *(ushort *)(lVar26 + 6);
          fVar47 = _DAT_142e36f50 * *(float *)(*(longlong *)(&stack0x00001200 + lVar22) + 0x14);
          bVar41 = *(byte *)(*(longlong *)(&stack0x00001140 + lVar22) + 0xc);
          fVar7 = *pfVar15;
          fVar2 = *(float *)(*(longlong *)(&stack0x000010c8 + lVar22) + 0xc);
          *(undefined4 *)(&stack0x00000808 + lVar22) = *(undefined4 *)(&stack0x00001118 + lVar22);
          *(undefined8 *)(&stack0x00000800 + lVar22) = *(undefined8 *)(&stack0x00001110 + lVar22);
          *(undefined8 *)(&stack0x00001120 + lVar22) = *(undefined8 *)(&stack0x00001100 + lVar22);
          *(undefined4 *)(&stack0x00001128 + lVar22) = *(undefined4 *)(&stack0x00001108 + lVar22);
          *(undefined8 *)(&stack0x00001130 + lVar22) = *(undefined8 *)pcVar39;
          *(undefined4 *)(&stack0x00001138 + lVar22) = *(undefined4 *)(pcVar39 + 8);
          plVar16 = *(longlong **)(&stack0x00001350 + lVar22);
          *(undefined4 *)plVar16[2] = *(undefined4 *)((longlong)plVar16 + 0x1c);
          pfVar15 = (float *)*plVar16;
          *pfVar15 = fVar62;
          pfVar15[1] = fVar63;
          pfVar15[2] = fVar64;
          pfVar15[3] = fVar52;
          pfVar15[4] = fVar77;
          pfVar15[5] = fVar46;
          pfVar15[6] = fVar51;
          pfVar15[7] = fVar52;
          pfVar15[8] = fVar65;
          pfVar15[9] = fVar45;
          pfVar15[10] = fVar50;
          pfVar15[0xb] = fVar52;
          uVar10 = *(undefined8 *)(&stack0x000011c8 + lVar22);
          *(undefined8 *)(pfVar15 + 0xc) = *(undefined8 *)(&stack0x000011c0 + lVar22);
          *(undefined8 *)(pfVar15 + 0xe) = uVar10;
          pfVar15[0x10] = fVar76 * fVar44;
          pfVar15[0x11] = fVar69 * fVar44;
          pfVar15[0x12] = fVar71 * fVar44;
          pfVar15[0x13] = fVar52;
          auVar55._4_4_ = uVar43;
          auVar55._0_4_ = uVar21;
          auVar55._8_4_ = uVar38;
          auVar55._12_4_ = 0;
          *(undefined1 (*) [16])(pfVar15 + 0x14) = auVar55;
          pfVar15[0x18] = fVar78 * fVar44;
          pfVar15[0x19] = fVar74 * fVar44;
          pfVar15[0x1a] = fVar75 * fVar44;
          pfVar15[0x1b] = fVar52;
          *(undefined1 (*) [16])(pfVar15 + 0x1c) = auVar67;
          pfVar15[0x20] = *(float *)(&stack0x00001218 + lVar22);
          pfVar15[0x21] = *(float *)(&stack0x000011b8 + lVar22);
          pfVar15[0x22] = *(float *)(&stack0x000010e0 + lVar22);
          pfVar15[0x23] = *(float *)(&stack0x00001180 + lVar22);
          pfVar15[0x24] = *(float *)(&stack0x00001184 + lVar22);
          pfVar15[0x25] = (float)(uVar19 >> 0x10);
          pfVar15[0x26] = (float)*(undefined8 *)(&stack0x000011f8 + lVar22);
          pfVar15[0x27] = *(float *)(&stack0x00001224 + lVar22);
          *(undefined8 *)(pfVar15 + 0x28) = *(undefined8 *)(&stack0x000010f0 + lVar22);
          pfVar15[0x2a] = *(float *)(&stack0x00001220 + lVar22);
          pfVar15[0x2b] = *(float *)(&stack0x000011a0 + lVar22);
          pfVar15[0x2e] = *(float *)(&stack0x00000808 + lVar22);
          *(undefined8 *)(pfVar15 + 0x2c) = *(undefined8 *)(&stack0x00000800 + lVar22);
          pfVar15[0x2f] = *(float *)(&stack0x0000117c + lVar22);
          pfVar15[0x32] = *(float *)(&stack0x00001128 + lVar22);
          *(undefined8 *)(pfVar15 + 0x30) = *(undefined8 *)(&stack0x00001120 + lVar22);
          pfVar15[0x33] = fVar40;
          *(undefined8 *)(pfVar15 + 0x34) = *(undefined8 *)(&stack0x000011d0 + lVar22);
          pfVar15[0x36] = *(float *)(&stack0x000010d0 + lVar22);
          pfVar15[0x37] = (float)uVar33 * fVar47;
          uVar10 = *(undefined8 *)(&stack0x00001158 + lVar22);
          *(undefined8 *)(pfVar15 + 0x38) = *(undefined8 *)(&stack0x00001150 + lVar22);
          *(undefined8 *)(pfVar15 + 0x3a) = uVar10;
          pfVar15[0x3c] = fVar2;
          pfVar15[0x3d] = fVar36;
          pfVar15[0x3e] = fVar28;
          pfVar15[0x3f] = *(float *)(&stack0x00001210 + lVar22);
          fVar36 = *(float *)(&stack0x0000121c + lVar22);
          pfVar15[0x40] = fVar36;
          auVar72[0] = -(cVar5 == DAT_143020f10);
          cVar73 = -(UNK_143020f17 == '\0');
          auVar72._8_8_ =
               (undefined8)
               (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar73,cVar73),
                                                                      -(UNK_143020f16 == '\0')),
                                                             -(UNK_143020f16 == '\0')),
                                                    -(UNK_143020f15 == '\0')),
                                           -(UNK_143020f15 == '\0')),-(UNK_143020f14 == '\0')),
                         CONCAT11(-(UNK_143020f14 == '\0'),cVar73)) >> 8);
          auVar72[7] = -(UNK_143020f13 == '\0');
          auVar72[6] = -(UNK_143020f13 == '\0');
          auVar72[5] = -(UNK_143020f12 == '\0');
          auVar72[4] = -(UNK_143020f12 == '\0');
          auVar72[3] = -(cVar5 == UNK_143020f11);
          auVar72[2] = -(cVar5 == UNK_143020f11);
          auVar72[1] = auVar72[0];
          auVar49 = pshuflw(ZEXT416((uint)fVar36),auVar72,0xd4);
          uVar25 = (ulonglong)DAT_143020f20;
          pfVar15[0x41] = *(float *)(&stack0x00001228 + lVar22);
          *(ulonglong *)(pfVar15 + 0x42) = auVar49._0_8_ & uVar25;
          pfVar15[0x46] = *(float *)(&stack0x00001138 + lVar22);
          *(undefined8 *)(pfVar15 + 0x44) = *(undefined8 *)(&stack0x00001130 + lVar22);
          pfVar15[0x47] = fVar7;
          pfVar15[0x48] = *(float *)(&stack0x00001188 + lVar22);
          pfVar15[0x49] = *(float *)(&stack0x00001190 + lVar22);
          pfVar15[0x4a] = *(float *)(&stack0x00001174 + lVar22);
          pfVar15[0x4b] = *(float *)(&stack0x000011f0 + lVar22);
          pfVar15[0x4c] = (float)(uint)bVar41;
          if (fVar70 <= _DAT_142e3c650) {
            fVar70 = _DAT_142e3c650;
          }
          fVar70 = fVar70 * _DAT_142e3c670;
          pfVar15[0x4d] = *(float *)(&stack0x00001178 + lVar22);
          pfVar15[0x4e] = fVar70;
          pfVar15[0x4f] = *(float *)(&stack0x00001208 + lVar22);
          *(undefined1 (*) [16])(pfVar15 + 0x50) = ZEXT416(0);
          pfVar15[0x54] = fVar1 + fVar56;
          pfVar15[0x55] = fVar68;
          pfVar15[0x56] = *(float *)(&stack0x000011a8 + lVar22);
          pfVar15[0x57] = *(float *)(&stack0x000011b0 + lVar22);
          *(undefined8 *)((longlong)&uStack_48 + lVar22) = 0x14092643a;
          pub_142e32760(&stack0x00000800 + lVar22,&stack0x00000400 + lVar22,0x400);
          *(undefined8 *)((longlong)&uStack_48 + lVar22) = 0x140926450;
          pub_142e32760(&stack0x00000c00 + lVar22,(longlong)&stack0x00000000 + lVar22,0x400);
          puVar17 = *(undefined8 **)(&stack0x00001358 + lVar22);
          *(undefined4 *)puVar17[2] = *(undefined4 *)((longlong)puVar17 + 0x1c);
          uVar10 = *puVar17;
          *(undefined8 *)((longlong)&uStack_48 + lVar22) = 0x140926471;
          pub_142e32760(uVar10,&stack0x00000800 + lVar22,0x800);
          if (*(ulonglong *)(&stack0x00001098 + lVar22) != 0) {
            *(undefined8 *)((longlong)&uStack_48 + lVar22) = 0x14092648f;
            pub_1406abac0(*(byte **)(&stack0x000010a0 + lVar22),
                          *(ulonglong *)(&stack0x00001098 + lVar22),1);
          }
          return;
        }
        lVar29 = 0;
        *puVar12 = *puVar12 + 1;
        pcVar39 = (char *)(lVar37 + 0x10);
        lVar14 = lVar37 + 0x18;
        lVar31 = lVar37;
        lVar37 = lVar37 + 0x18;
        if (*pcVar39 == '\x03') goto LAB_14092587f;
      }
      lVar29 = lVar31 + 0x18;
      *puVar12 = *puVar12 + 1;
      lVar14 = lVar37;
    } while (*(char *)(lVar31 + 0x10) != '\x03');
LAB_14092587f:
    uVar43 = *(undefined4 *)(lVar31 + 8);
    iVar6 = *(int *)(lVar31 + 0xc);
    *(undefined4 *)(&stack0x000011c0 + lVar22) = uVar43;
    *(undefined4 *)(&stack0x00000800 + lVar22) = uVar43;
    *(int *)(&stack0x00000804 + lVar22) = iVar6;
    if (*(longlong *)(*(longlong *)(&stack0x000011d0 + lVar22) + 0x18) != 0) {
      *(longlong *)(&stack0x00001210 + lVar22) = lVar26;
      *(undefined8 *)((longlong)&uStack_48 + lVar22) = 0x1409258b7;
      uVar24 = pdb_1400af680(lVar26,&stack0x00000800 + lVar22);
      lVar14 = **(longlong **)(&stack0x000011d0 + lVar22);
      uVar25 = (*(longlong **)(&stack0x000011d0 + lVar22))[1];
      bVar41 = (byte)(uVar24 >> 0x39);
      auVar49 = ZEXT216(CONCAT11(bVar41,bVar41));
      auVar49 = pshuflw(auVar49,auVar49,0);
      lVar31 = 0;
      while( true ) {
        uVar24 = uVar24 & uVar25;
        auVar60 = *(undefined1 (*) [16])(lVar14 + uVar24);
        auVar57[0] = -(auVar60[0] == auVar49[0]);
        auVar57[1] = -(auVar60[1] == auVar49[1]);
        auVar57[2] = -(auVar60[2] == auVar49[2]);
        auVar57[3] = -(auVar60[3] == auVar49[3]);
        auVar57[4] = -(auVar60[4] == auVar49[4]);
        auVar57[5] = -(auVar60[5] == auVar49[5]);
        auVar57[6] = -(auVar60[6] == auVar49[6]);
        auVar57[7] = -(auVar60[7] == auVar49[7]);
        auVar57[8] = -(auVar60[8] == auVar49[0]);
        auVar57[9] = -(auVar60[9] == auVar49[1]);
        auVar57[10] = -(auVar60[10] == auVar49[2]);
        auVar57[0xb] = -(auVar60[0xb] == auVar49[3]);
        auVar57[0xc] = -(auVar60[0xc] == auVar49[4]);
        auVar57[0xd] = -(auVar60[0xd] == auVar49[5]);
        auVar57[0xe] = -(auVar60[0xe] == auVar49[6]);
        auVar57[0xf] = -(auVar60[0xf] == auVar49[7]);
        uVar33 = (ushort)(SUB161(auVar57 >> 7,0) & 1) | (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe | (ushort)(auVar57[0xf] >> 7) << 0xf
        ;
        uVar30 = (uint)uVar33;
        while (uVar33 != 0) {
          uVar18 = 0;
          for (uVar19 = uVar30; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
            uVar18 = uVar18 + 1;
          }
          uVar35 = uVar18 + uVar24 & uVar25;
          if ((*(int *)(&stack0x000011c0 + lVar22) == *(int *)(lVar14 + -0xc + uVar35 * -0xc)) &&
             (iVar6 == *(int *)(lVar14 + -8 + uVar35 * -0xc))) {
            fVar36 = *(float *)(lVar14 + uVar35 * -0xc + -4);
            *(undefined8 *)(&stack0x000010f0 + lVar22) = _DAT_143020eb0;
            *(undefined8 *)(&stack0x000010f8 + lVar22) = 0;
            uVar43 = 0;
            goto LAB_1409259b1;
          }
          uVar33 = (ushort)(uVar30 - 1) & (ushort)uVar30;
          uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar33);
        }
        auVar54[0] = -(auVar60[0] == -1);
        auVar54[1] = -(auVar60[1] == -1);
        auVar54[2] = -(auVar60[2] == -1);
        auVar54[3] = -(auVar60[3] == -1);
        auVar54[4] = -(auVar60[4] == -1);
        auVar54[5] = -(auVar60[5] == -1);
        auVar54[6] = -(auVar60[6] == -1);
        auVar54[7] = -(auVar60[7] == -1);
        auVar54[8] = -(auVar60[8] == -1);
        auVar54[9] = -(auVar60[9] == -1);
        auVar54[10] = -(auVar60[10] == -1);
        auVar54[0xb] = -(auVar60[0xb] == -1);
        auVar54[0xc] = -(auVar60[0xc] == -1);
        auVar54[0xd] = -(auVar60[0xd] == -1);
        auVar54[0xe] = -(auVar60[0xe] == -1);
        auVar54[0xf] = -(auVar60[0xf] == -1);
        lVar26 = *(longlong *)(&stack0x00001210 + lVar22);
        if ((((((((((((((((SUB161(auVar54 >> 7,0) & 1) != 0 || (SUB161(auVar54 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar54 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar54 >> 0x1f,0) & 1) != 0) || (SUB161(auVar54 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar54 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar54 >> 0x37,0) & 1) != 0) || (SUB161(auVar54 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar54 >> 0x47,0) & 1) != 0) || (SUB161(auVar54 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar54 >> 0x57,0) & 1) != 0) || (SUB161(auVar54 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar54 >> 0x67,0) & 1) != 0) || (SUB161(auVar54 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar54 >> 0x77,0) & 1) != 0) || auVar54[0xf] < '\0') break;
        uVar24 = uVar24 + lVar31 + 0x10;
        lVar31 = lVar31 + 0x10;
      }
    }
    uVar43 = 0;
    uVar53 = uVar4;
  } while( true );
}

