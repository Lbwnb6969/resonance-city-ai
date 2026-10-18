// VA 0x1408885b0, PDB extent 10178 bytes
// system_decorator::decorator_visual::cottage_dormers::cottage_dormer::generate_cottage_dormers
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_dormers/cottage_dormer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::cottage_dormers::cottage_dormer::generate_cottage_dormers
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_dormers/cottage_dormer.rs
   Extent: 10178 */

void pdb_1408885b0(ulonglong param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 *param_6,undefined8 param_7)

{
  longlong *plVar1;
  ulonglong *puVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  code *pcVar17;
  int iVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  char cVar29;
  uint uVar30;
  longlong lVar31;
  ulonglong uVar32;
  longlong *plVar33;
  longlong lVar34;
  undefined8 uVar35;
  ulonglong uVar36;
  undefined1 (*pauVar37) [16];
  undefined4 *puVar38;
  ulonglong uVar39;
  int *piVar40;
  longlong lVar41;
  longlong lVar42;
  undefined8 *puVar43;
  uint uVar44;
  undefined8 *puVar45;
  longlong lVar46;
  undefined1 (*pauVar47) [16];
  undefined *puVar48;
  ushort uVar49;
  undefined *puVar50;
  byte *pbVar51;
  byte bVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float extraout_XMM0_Da;
  float fVar56;
  undefined8 extraout_XMM0_Qa;
  ulonglong extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar57;
  undefined1 auVar58 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar59 [16];
  ulonglong extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined8 extraout_XMM0_Qb_01;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar66 [16];
  float fVar72;
  float fVar73;
  float fVar74;
  undefined1 auVar75 [16];
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  undefined1 auVar80 [16];
  float fVar81;
  float fVar82;
  undefined4 uVar84;
  uint *puVar83;
  undefined4 uVar85;
  undefined8 uStack_360;
  undefined8 *puStack_358;
  undefined8 uStack_350;
  undefined4 *puStack_348;
  undefined8 uStack_340;
  longlong lStack_338;
  longlong lStack_330;
  byte *pbStack_328;
  undefined8 *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  longlong lStack_308;
  longlong lStack_300;
  uint uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  byte *pbStack_2e8;
  longlong lStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_2c8;
  undefined8 *puStack_2b8;
  byte *pbStack_2b0;
  ulonglong uStack_2a8;
  longlong lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 auStack_278 [16];
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [4];
  undefined1 auStack_254 [12];
  undefined4 uStack_23c;
  undefined8 uStack_238;
  float fStack_230;
  longlong lStack_228;
  longlong lStack_220;
  longlong lStack_218;
  longlong *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [16];
  longlong *plStack_1e0;
  undefined1 (*pauStack_1d8) [16];
  undefined8 uStack_1d0;
  ulonglong uStack_1c8;
  uint3 uStack_1b0;
  undefined4 uStack_1ad;
  undefined4 uStack_1a9;
  undefined4 uStack_1a5;
  undefined8 uStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  ulonglong uStack_178;
  longlong *plStack_170;
  longlong lStack_168;
  longlong *plStack_160;
  uint uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  uint uStack_14c;
  ulonglong uStack_148;
  ulonglong uStack_140;
  byte *pbStack_138;
  longlong lStack_130;
  undefined1 (*pauStack_120) [16];
  undefined8 uStack_118;
  float fStack_110;
  undefined8 uStack_108;
  float fStack_100;
  uint uStack_fc;
  undefined1 uStack_f2;
  char cStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  puVar43 = param_2;
  cStack_f1 = pdb_140e94b40();
  if (cStack_f1 == '\0') goto LAB_1408887be;
  pauVar47 = (undefined1 (*) [16])0x5d;
  plStack_160 = param_3;
  lVar31 = pdb_14088ad80(0x5d);
  puVar45 = (undefined8 *)&UNK_143011e30;
  if (lVar31 == 1) {
    if ((undefined8 *)0x5d < puVar43) {
LAB_14088a4c1:
      pdb_142dc8070(&UNK_143011e30,0x5d,0);
LAB_14088a4e1:
      uVar57 = pdb_142dc8070(&UNK_143011e30,0x5d);
      uStack_148 = param_1;
LAB_14088a505:
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(uVar57,uStack_148,&UNK_14330d718);
    }
    uVar32 = pdb_14088ad80(puVar43);
    if ((uVar32 & 1) != 0) {
      if ((undefined *)0x5d < (undefined *)((longlong)puVar43 + 2)) goto LAB_14088a4e1;
      pauVar47 = (undefined1 (*) [16])(0x5b - (longlong)puVar43);
      puVar45 = (undefined8 *)((longlong)puVar43 + 0x143011e32);
    }
  }
  puVar48 = &UNK_143011d1f;
  puVar50 = &UNK_143011cd0;
  do {
    bVar52 = puVar48[-1];
    uVar30 = (uint)(char)bVar52;
    if ((char)bVar52 < '\0') {
      bVar6 = puVar48[-2];
      if ((char)bVar6 < -0x40) {
        bVar7 = puVar48[-3];
        if ((char)bVar7 < -0x40) {
          pbVar51 = puVar48 + -4;
          puVar48 = puVar48 + -4;
          uVar30 = bVar7 & 0x3f | (*pbVar51 & 7) << 6;
        }
        else {
          puVar48 = puVar48 + -3;
          uVar30 = bVar7 & 0xf;
        }
        uVar30 = bVar6 & 0x3f | uVar30 << 6;
      }
      else {
        puVar48 = puVar48 + -2;
        uVar30 = bVar6 & 0x1f;
      }
      uVar30 = (uint)(bVar52 & 0x3f) | uVar30 << 6;
      if (uVar30 != 0x5c) goto LAB_140888724;
LAB_140888736:
      puVar50 = puVar48 + -0x143011ccf;
      if ((undefined *)0x4f < puVar50) {
        pdb_142dc8070(&UNK_143011cd0,0x4f,puVar50,0x4f,&UNK_143011ee8);
        goto LAB_14088a4c1;
      }
      lVar31 = 0x4f - (longlong)puVar50;
      puVar50 = puVar48 + 1;
      goto LAB_140888759;
    }
    puVar48 = puVar48 + -1;
    if (uVar30 == 0x5c) goto LAB_140888736;
LAB_140888724:
    if (uVar30 == 0x2f) goto LAB_140888736;
  } while (puVar48 != &UNK_143011cd0);
  lVar31 = 0x4f;
LAB_140888759:
  plVar33 = (longlong *)pdb_140e97000();
  puVar43 = puVar45;
  if ((char)plVar33[0xd] != '\x01') goto LAB_14088a2c2;
  do {
    if (*plVar33 == 0) {
      *plVar33 = -1;
      plStack_1e0 = plVar33;
      puStack_2b8 = (undefined8 *)pdb_140e94f10(plVar33 + 1,puVar43,pauVar47,puVar50,lVar31,1,0);
      *plStack_1e0 = *plStack_1e0 + 1;
      param_3 = plStack_160;
LAB_1408887be:
      uStack_360 = pdb_140c47770(param_1);
      puStack_358 = puVar43;
      pdb_140a2fb40(&uStack_158,*param_2);
      fVar28 = _UNK_143011b38;
      fVar27 = _UNK_143011b34;
      fVar26 = _DAT_143011b30;
      lVar31 = CONCAT44(uStack_154,uStack_158);
      pauVar47 = (undefined1 (*) [16])CONCAT44(uStack_14c,uStack_150);
      param_2 = (undefined8 *)(uStack_140 & 0xffff);
      param_4 = (undefined8 *)*param_4;
      lStack_220 = *param_5;
      lStack_228 = param_5[1];
      uStack_350 = *param_3;
      uStack_23c = *(undefined4 *)((longlong)param_6 + 0x1c);
      uStack_340 = *param_6;
      puStack_348 = (undefined4 *)param_6[2];
      pbVar51 = pbStack_138;
      fVar53 = _UNK_142e378f4;
      fVar54 = _UNK_142e378f8;
      fVar55 = _UNK_143011b24;
      fVar81 = _UNK_143011b28;
      fVar82 = _DAT_142e36f28;
      fVar56 = _DAT_142e378f0;
      fVar62 = _UNK_142e378f8;
      fVar63 = _DAT_142e378f0;
      fVar67 = _UNK_142e378f4;
      fVar73 = _UNK_142e378f8;
LAB_140888880:
      puVar43 = puStack_2b8;
      if (pbVar51 != (byte *)0x0) {
        if ((short)param_2 == 0) {
          do {
            auVar58 = *pauVar47;
            lVar31 = lVar31 + -0x980;
            pauVar47 = pauVar47 + 1;
            uVar30 = (ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                             (ushort)(byte)(auVar58[0xf] >> 7) << 0xf) ^ 0xffff;
            param_2 = (undefined8 *)(ulonglong)uVar30;
          } while (uVar30 == 0);
        }
        uVar30 = 0;
        uVar44 = (uint)param_2;
        for (uVar19 = uVar44; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
          uVar30 = uVar30 + 1;
        }
        plStack_160 = *(longlong **)(lVar31 + ((ulonglong)uVar30 * -0x26 + -0x26) * 4);
        lVar34 = pdb_140b54f80(param_4,plStack_160,&UNK_143011d20);
        param_2 = (undefined8 *)(ulonglong)(uVar44 - 1 & uVar44);
        pbVar51 = pbVar51 + -1;
        if (lVar34 != 0) {
          plStack_1e0 = (longlong *)CONCAT44(plStack_1e0._4_4_,*(undefined4 *)(lVar34 + 0x274));
          uVar32 = pdb_140b54b40(param_4,plStack_160);
          if ((((((uVar32 & 0xffffffff) != 0) &&
                (uVar39 = uVar32 & 0xffffffff ^ 0xffffffff,
                uVar39 < *(ulonglong *)(lStack_228 + 0x10))) &&
               (piVar40 = (int *)(uVar39 * 0x18 + *(longlong *)(lStack_228 + 8)),
               piVar40[4] == (int)(uVar32 >> 0x20))) &&
              ((*piVar40 != 0 &&
               (uVar32 = *(ulonglong *)(piVar40 + 2),
               (uVar32 & 0xffffffff) < *(ulonglong *)(lStack_220 + 0x38))))) &&
             ((*(ulonglong *)(*(longlong *)(lStack_220 + 0x28) + (uVar32 >> 6 & 0x3ffffff) * 8) >>
               (uVar32 & 0x3f) & 1) != 0)) {
            if (*(ulonglong *)(lStack_220 + 0x110) <
                *(ulonglong *)(*(longlong *)(lStack_228 + 0x1a0) + 0x40 + (uVar32 >> 0x20) * 0x48))
            {
              lVar34 = *(longlong *)(lStack_228 + 0x1a0) + (uVar32 >> 0x20) * 0x48;
              uVar32 = *(ulonglong *)
                        (*(longlong *)(lVar34 + 0x38) + *(ulonglong *)(lStack_220 + 0x110) * 8);
              if (uVar32 != 0) {
                lStack_2a0 = *(longlong *)(*(longlong *)(lVar34 + 0x18) + 0x10 + ~uVar32 * 0x30);
                goto LAB_1408889d8;
              }
            }
            lStack_2a0 = 0;
LAB_1408889d8:
            lStack_2a0 = (ulonglong)(uint)~piVar40[1] * 0x58 + lStack_2a0;
            cVar29 = pdb_140b77b50();
            if (cVar29 == '\0') {
              pdb_140c3ba10(&uStack_158);
              lStack_218 = CONCAT44(uStack_154,uStack_158);
              pauStack_1d8 = (undefined1 (*) [16])CONCAT44(uStack_14c,uStack_150);
              uStack_2a8 = uStack_140 & 0xffff;
              pbStack_2b0 = pbStack_138;
              lStack_338 = lStack_130;
              lStack_330 = lStack_130 + 0x50;
LAB_140888a4c:
              lVar34 = lStack_338;
              if (pbStack_2b0 != (byte *)0x0) {
                uVar30 = (uint)uStack_2a8;
                if ((short)uStack_2a8 == 0) {
                  do {
                    auVar58 = *pauStack_1d8;
                    lStack_218 = lStack_218 + -0x40;
                    pauStack_1d8 = pauStack_1d8 + 1;
                    uVar30 = (ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar58 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar58 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar58 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar58 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar58 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar58 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar58 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar58 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar58 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar58 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar58 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar58[0xf] >> 7) << 0xf) ^ 0xffff;
                  } while (uVar30 == 0);
                }
                iVar18 = 0;
                for (uVar19 = uVar30; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x80000000) {
                  iVar18 = iVar18 + 1;
                }
                uStack_158 = *(uint *)((lStack_218 - (ulonglong)(uint)(iVar18 << 2)) + -4);
                uStack_180 = (ulonglong)uStack_158;
                if (*(longlong *)(lStack_338 + 0x48) != 0) {
                  uStack_2a8 = (ulonglong)(uVar30 - 1 & uVar30);
                  pbStack_2b0 = pbStack_2b0 + -1;
                  uVar39 = pdb_1400aede0(lStack_330,&uStack_158);
                  param_1 = *(ulonglong *)(lVar34 + 0x30);
                  uVar32 = *(ulonglong *)(lVar34 + 0x38);
                  bVar52 = (byte)(uVar39 >> 0x39);
                  auVar58 = ZEXT216(CONCAT11(bVar52,bVar52));
                  auVar58 = pshuflw(auVar58,auVar58,0);
                  lVar34 = 0;
                  while( true ) {
                    uVar39 = uVar39 & uVar32;
                    auVar60 = *(undefined1 (*) [16])(param_1 + uVar39);
                    auVar75[0] = -(auVar60[0] == auVar58[0]);
                    auVar75[1] = -(auVar60[1] == auVar58[1]);
                    auVar75[2] = -(auVar60[2] == auVar58[2]);
                    auVar75[3] = -(auVar60[3] == auVar58[3]);
                    auVar75[4] = -(auVar60[4] == auVar58[4]);
                    auVar75[5] = -(auVar60[5] == auVar58[5]);
                    auVar75[6] = -(auVar60[6] == auVar58[6]);
                    auVar75[7] = -(auVar60[7] == auVar58[7]);
                    auVar75[8] = -(auVar60[8] == auVar58[0]);
                    auVar75[9] = -(auVar60[9] == auVar58[1]);
                    auVar75[10] = -(auVar60[10] == auVar58[2]);
                    auVar75[0xb] = -(auVar60[0xb] == auVar58[3]);
                    auVar75[0xc] = -(auVar60[0xc] == auVar58[4]);
                    auVar75[0xd] = -(auVar60[0xd] == auVar58[5]);
                    auVar75[0xe] = -(auVar60[0xe] == auVar58[6]);
                    auVar75[0xf] = -(auVar60[0xf] == auVar58[7]);
                    uVar49 = (ushort)(SUB161(auVar75 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar75 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar75 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar75 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar75 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar75 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar75 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar75 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar75 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar75 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar75 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar75 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar75 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar75 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar75 >> 0x77,0) & 1) << 0xe |
                             (ushort)(auVar75[0xf] >> 7) << 0xf;
                    uVar30 = (uint)uVar49;
                    while (uVar49 != 0) {
                      uVar19 = 0;
                      for (uVar44 = uVar30; (uVar44 & 1) == 0; uVar44 = uVar44 >> 1 | 0x80000000) {
                        uVar19 = uVar19 + 1;
                      }
                      lVar46 = (uVar19 + uVar39 & uVar32) * -0x68;
                      if ((int)uStack_180 == *(int *)((param_1 - 0x68) + lVar46)) {
                        cVar29 = pdb_140c45920(&uStack_360);
                        if (cVar29 != '\x02') goto LAB_140888a4c;
                        uVar57 = uStack_350;
                        pdb_140c45ec0(&lStack_308,uStack_350,uStack_180,&UNK_143011d38);
                        lStack_168 = param_1 + lVar46;
                        uStack_178 = (ulonglong)*(byte *)(lStack_168 + -7);
                        bVar52 = *(byte *)(lStack_168 + -7) - 1;
                        if (2 < bVar52) {
                    /* WARNING: Subroutine does not return */
                          pdb_142dc83b0(&UNK_143011c40,0x28,&UNK_143011cb8);
                        }
                        fVar79 = *(float *)(&UNK_143011f44 + (ulonglong)bVar52 * 4);
                        *puStack_348 = uStack_23c;
                        uVar35 = pdb_140947f90(plStack_160);
                        uStack_f2 = *(undefined1 *)(lStack_168 + -8);
                        plStack_170 = (longlong *)
                                      pdb_1408f3750(uStack_340,uStack_180,uVar35,uVar57,uStack_f2);
                        uStack_188 = uStack_178 & 0xff;
                        lVar46 = lStack_2a0;
                        uVar57 = param_7;
                        plVar33 = (longlong *)pdb_1414d3ea0(&lStack_308);
                        LOCK();
                        lVar34 = *plVar33;
                        *plVar33 = *plVar33 + 1;
                        UNLOCK();
                        if (*plVar33 == 0 || SCARRY8(lVar34,1) != *plVar33 < 0) {
                    /* WARNING: Does not return */
                          pcVar17 = (code *)invalidInstructionException();
                          (*pcVar17)();
                        }
                        uStack_1a5._0_1_ = (undefined1)((uint)uStack_2f0 >> 0x18);
                        uStack_1b0 = (uint3)uStack_2f8;
                        uStack_1ad = (undefined4)(CONCAT44(uStack_2f4,uStack_2f8) >> 0x18);
                        uStack_1a9._0_1_ = (undefined1)((uint)uStack_2f4 >> 0x18);
                        uStack_1a9 = CONCAT31((int3)uStack_2f0,(undefined1)uStack_1a9);
                        uStack_158 = (uint)lStack_308;
                        uStack_154 = (undefined4)((ulonglong)lStack_308 >> 0x20);
                        uStack_150 = (undefined4)lStack_300;
                        uStack_14c = (uint)((ulonglong)lStack_300 >> 0x20);
                        puVar83 = &uStack_158;
                        pdb_1408f3120(plStack_170,plVar33,plVar33,&uStack_1b0,puVar83,lVar46,uVar57)
                        ;
                        uVar8 = uStack_2f0;
                        uVar30 = uStack_2f8;
                        uStack_148 = CONCAT44(uStack_2f4,uStack_2f8);
                        uStack_140 = CONCAT44(uStack_2ec,uStack_2f0);
                        pbStack_138 = pbStack_2e8;
                        lStack_130 = lStack_2e0;
                        uStack_158 = (uint)lStack_308;
                        uStack_154 = (undefined4)((ulonglong)lStack_308 >> 0x20);
                        uStack_150 = (undefined4)lStack_300;
                        uStack_14c = (uint)((ulonglong)lStack_300 >> 0x20);
                        if (*plStack_170 != 0 || plStack_170[1] != 0) goto LAB_14088a2f7;
                        plStack_170[1] = 0;
                        *plStack_170 = 1;
                        plStack_170[6] = (longlong)pbStack_2e8;
                        plStack_170[7] = lStack_2e0;
                        plStack_170[4] = uStack_148;
                        plStack_170[5] = uStack_140;
                        plStack_170[2] = lStack_308;
                        plStack_170[3] = lStack_300;
                        uStack_158 = uStack_2f8;
                        uStack_154 = uStack_2f4;
                        uStack_150 = uStack_2f0;
                        pdb_140b77d90(&uStack_1b0,lStack_2a0,&uStack_158);
                        auVar58._0_8_ = pdb_140a850f0(&uStack_1b0,uVar30,uVar8);
                        pbStack_328 = pbVar51;
                        puStack_320 = param_4;
                        if ((byte)uStack_178 == '\x01') {
                          pdb_14007ee60();
                          pauVar37 = (undefined1 (*) [16])pub_1406abab0(0x30,0x10);
                          if (pauVar37 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
                            pdb_142dc7e11(0x10,0x30);
                          }
                          *(byte **)pauVar37[2] = pbStack_2e8;
                          *(longlong *)(pauVar37[2] + 8) = lStack_2e0;
                          *(ulonglong *)pauVar37[1] = CONCAT44(uStack_2f4,uStack_2f8);
                          *(ulonglong *)(pauVar37[1] + 8) = CONCAT44(uStack_2ec,uStack_2f0);
                          *(longlong *)*pauVar37 = lStack_308;
                          *(longlong *)(*pauVar37 + 8) = lStack_300;
                          auStack_1f8._0_8_ = 1;
                          pauStack_120 = pauVar37;
                        }
                        else {
                          fVar56 = (float)auVar58._0_8_;
                          auVar58._8_4_ = (undefined4)extraout_XMM0_Qb;
                          auVar58._12_4_ = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
                          if ((float)uStack_188 == 2.8026e-45) {
                            fVar53 = (float)pdb_140a85220(&uStack_1b0);
                            auVar60._8_4_ = auVar58._8_4_;
                            auVar60._0_8_ = auVar58._0_8_;
                            auVar60._12_4_ = auVar58._12_4_;
                            auVar61._4_12_ = auVar60._4_12_;
                            auVar61._0_4_ = fVar56 - (fVar79 / fVar53) * _DAT_142e37ae4;
                            fVar56 = (float)pub_142e32a70(auVar61._0_8_);
                            fVar53 = (float)pub_142e32a70();
                            pdb_140a851d0(&uStack_158,&uStack_1b0);
                            fVar56 = (float)(~-(uint)(fVar56 < 0.0) & (uint)fVar56 |
                                            (uint)(fVar56 + fVar82) & -(uint)(fVar56 < 0.0));
                            uStack_118._0_4_ = fVar56;
                            if ((fVar56 < 0.0) || (fVar82 < fVar56)) {
                              uStack_108 = &uStack_118;
                              fStack_100 = 7.7206726;
                              uStack_fc = 1;
                    /* WARNING: Subroutine does not return */
                              pdb_142dc83d0(&UNK_14330d448,&uStack_108,&UNK_14330d430);
                            }
                            uVar30 = pdb_14148c300(&uStack_158);
                            uVar32 = uStack_148;
                            uVar39 = (ulonglong)uVar30;
                            uStack_1c8 = extraout_XMM0_Qa_01;
                            if (uStack_148 <= uVar39) {
                    /* WARNING: Subroutine does not return */
                              pdb_142dc81f2(uVar39,uStack_148,&UNK_14330d718);
                            }
                            uVar36 = uVar39 + 1;
                            if (uStack_148 <= uVar36) {
                    /* WARNING: Subroutine does not return */
                              pdb_142dc81f2(uVar36,uStack_148,&UNK_14330d730);
                            }
                            fVar56 = (float)(~-(uint)(fVar53 < 0.0) & (uint)fVar53 |
                                            (uint)(fVar53 + _DAT_142e36f28) & -(uint)(fVar53 < 0.0))
                            ;
                            pbVar51 = (byte *)CONCAT44(uStack_14c,uStack_150);
                            uStack_1c8._0_4_ = (float)extraout_XMM0_Qa_01;
                            fVar54 = _DAT_142e36f28 - (float)uStack_1c8;
                            fVar82 = *(float *)(pbVar51 + uVar39 * 0xc + 8);
                            uStack_268 = *(longlong **)(pbVar51 + uVar39 * 0xc);
                            uStack_260 = 0;
                            uStack_298 = *(longlong *)(pbVar51 + uVar36 * 0xc);
                            uStack_290 = 0;
                            fVar53 = *(float *)(pbVar51 + uVar36 * 0xc + 8) * (float)uStack_1c8;
                            uStack_118 = CONCAT44(uStack_118._4_4_,fVar56);
                            if ((fVar56 < 0.0) || (_DAT_142e36f28 < fVar56)) {
                              uStack_108 = &uStack_118;
                              fStack_100 = 7.7206726;
                              uStack_fc = 1;
                    /* WARNING: Subroutine does not return */
                              pdb_142dc83d0(&UNK_14330d448,&uStack_108,&UNK_14330d430);
                            }
                            uVar30 = pdb_14148c300(&uStack_158);
                            auStack_278._8_8_ = extraout_XMM0_Qb_01;
                            auStack_278._0_8_ = extraout_XMM0_Qa_02;
                            auVar58 = auStack_278;
                            uVar39 = (ulonglong)uVar30;
                            if (uVar32 <= uVar39) {
                    /* WARNING: Subroutine does not return */
                              pdb_142dc81f2(uVar39,uVar32,&UNK_14330d718);
                            }
                            uVar36 = uVar39 + 1;
                            if (uVar32 <= uVar36) {
                    /* WARNING: Subroutine does not return */
                              pdb_142dc81f2(uVar36,uVar32,&UNK_14330d730);
                            }
                            auStack_278._0_4_ = (undefined4)extraout_XMM0_Qa_02;
                            fVar55 = _DAT_142e36f28 - (float)auStack_278._0_4_;
                            fVar56 = *(float *)(pbVar51 + uVar39 * 0xc + 8);
                            auStack_254._4_8_ = 0;
                            _auStack_258 = *(ulonglong *)(pbVar51 + uVar39 * 0xc);
                            uStack_288 = *(longlong *)(pbVar51 + uVar36 * 0xc);
                            uStack_280 = 0;
                            fVar81 = *(float *)(pbVar51 + uVar36 * 0xc + 8) *
                                     (float)auStack_278._0_4_;
                            auStack_278 = auVar58;
                            uVar30 = pdb_14148c300(&uStack_158);
                            uVar36 = (ulonglong)uVar30;
                            uVar39 = uVar36 + 1;
                            if (uVar32 <= uVar39) {
                    /* WARNING: Subroutine does not return */
                              pdb_142dc81f2(uVar39,uVar32,&UNK_14330d748);
                            }
                            fVar62 = *(float *)(pbVar51 + uVar39 * 0xc + 8) -
                                     (float)*(undefined8 *)(pbVar51 + uVar36 * 0xc + 8);
                            fVar63 = (float)((ulonglong)*(undefined8 *)(pbVar51 + uVar36 * 0xc + 8)
                                            >> 0x20) - *(float *)(pbVar51 + uVar36 * 0xc);
                            fVar67 = _DAT_142e36f28 /
                                     SQRT(fVar63 * fVar63 +
                                          (*(float *)(pbVar51 + uVar39 * 0xc + 4) -
                                          *(float *)(pbVar51 + uVar36 * 0xc + 4)) *
                                          (*(float *)(pbVar51 + uVar39 * 0xc + 4) -
                                          *(float *)(pbVar51 + uVar36 * 0xc + 4)) + fVar62 * fVar62)
                            ;
                            uStack_118 = CONCAT44(fVar67 * fVar63,
                                                  (float)((uint)fVar67 ^ _DAT_142e37820) * fVar62);
                            pdb_140df4520(&uStack_108,&uStack_118);
                            fStack_230 = _DAT_142e36f28 /
                                         SQRT(uStack_108._4_4_ * uStack_108._4_4_ +
                                              (float)uStack_108 * (float)uStack_108 +
                                              fStack_100 * fStack_100);
                            uStack_238 = CONCAT44(fStack_230 * uStack_108._4_4_,
                                                  fStack_230 * (float)uStack_108);
                            fStack_230 = fStack_230 * fStack_100;
                            uVar30 = pdb_14148c300(&uStack_158);
                            uVar36 = (ulonglong)uVar30;
                            uVar39 = uVar36 + 1;
                            if (uVar32 <= uVar39) {
                    /* WARNING: Subroutine does not return */
                              pdb_142dc81f2(uVar39,uVar32,&UNK_14330d748);
                            }
                            fVar62 = *(float *)(pbVar51 + uVar39 * 0xc + 8) -
                                     (float)*(undefined8 *)(pbVar51 + uVar36 * 0xc + 8);
                            fVar63 = (float)((ulonglong)*(undefined8 *)(pbVar51 + uVar36 * 0xc + 8)
                                            >> 0x20) - *(float *)(pbVar51 + uVar36 * 0xc);
                            fVar67 = _DAT_142e36f28 /
                                     SQRT(fVar63 * fVar63 +
                                          (*(float *)(pbVar51 + uVar39 * 0xc + 4) -
                                          *(float *)(pbVar51 + uVar36 * 0xc + 4)) *
                                          (*(float *)(pbVar51 + uVar39 * 0xc + 4) -
                                          *(float *)(pbVar51 + uVar36 * 0xc + 4)) + fVar62 * fVar62)
                            ;
                            uStack_190 = CONCAT44(fVar67 * fVar63,
                                                  (float)((uint)fVar67 ^ _DAT_142e37820) * fVar62);
                            pdb_140df4520(&uStack_108,&uStack_190);
                            fStack_110 = _DAT_142e36f28 /
                                         SQRT(uStack_108._4_4_ * uStack_108._4_4_ +
                                              (float)uStack_108 * (float)uStack_108 +
                                              fStack_100 * fStack_100);
                            uStack_118 = CONCAT44(fStack_110 * uStack_108._4_4_,
                                                  fStack_110 * (float)uStack_108);
                            fStack_110 = fStack_110 * fStack_100;
                            pdb_14007ee60();
                            pauStack_120 = (undefined1 (*) [16])pub_1406abab0(0x60,0x10);
                            if (pauStack_120 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
                              pdb_142dc7e11(0x10,0x60);
                            }
                            pdb_140de9ab0(&uStack_108,&uStack_238);
                            auVar24._4_4_ = uStack_108._4_4_;
                            auVar24._0_4_ = (float)uStack_108;
                            auVar24._8_4_ = fStack_100;
                            auVar24._12_4_ = uStack_fc;
                            pdb_140de9ab0(&uStack_108,&uStack_118);
                            *(ulonglong *)pauStack_120[4] =
                                 CONCAT44((float)auStack_278._0_4_ * uStack_288._4_4_ +
                                          fVar55 * (float)auStack_254._0_4_,
                                          (float)auStack_278._0_4_ * (float)uStack_288 +
                                          fVar55 * (float)auStack_258);
                            *(float *)(pauStack_120[4] + 8) = fVar56 * fVar55 + fVar81;
                            *pauStack_120 = auVar24;
                            *(ulonglong *)pauStack_120[1] =
                                 CONCAT44((float)uStack_1c8 * uStack_298._4_4_ +
                                          fVar54 * uStack_268._4_4_,
                                          (float)uStack_1c8 * (float)uStack_298 +
                                          fVar54 * (float)uStack_268);
                            *(float *)(pauStack_120[1] + 8) = fVar82 * fVar54 + fVar53;
                            *(undefined8 *)(pauStack_120[1] + 0xc) = 0x3f8000003f800000;
                            *(undefined4 *)(pauStack_120[2] + 4) = 0x3f800000;
                            *(ulonglong *)pauStack_120[3] =
                                 CONCAT44(uStack_108._4_4_,(float)uStack_108);
                            *(ulonglong *)(pauStack_120[3] + 8) = CONCAT44(uStack_fc,fStack_100);
                            *(undefined8 *)(pauStack_120[4] + 0xc) = 0x3f8000003f800000;
                            *(undefined4 *)(pauStack_120[5] + 4) = 0x3f800000;
                            if (CONCAT44(uStack_154,uStack_158) != 0) {
                              pub_1406abac0(pbVar51,CONCAT44(uStack_154,uStack_158) * 0xc,4);
                            }
                            fVar81 = _UNK_143011b28;
                            fVar55 = _UNK_143011b24;
                            fVar54 = _UNK_142e378f8;
                            fVar53 = _UNK_142e378f4;
                            fVar56 = _DAT_142e378f0;
                            fVar82 = _DAT_142e36f28;
                            if (uStack_140 != 0) {
                              pub_1406abac0(pbStack_138,uStack_140 << 2,4);
                            }
                            auStack_1f8._0_8_ = 2;
                            fVar62 = fVar54;
                            fVar63 = fVar56;
                            fVar67 = fVar53;
                            fVar73 = fVar54;
                          }
                          else {
                            fVar53 = (float)pdb_140a85220(&uStack_1b0);
                            auVar59._4_12_ = auVar58._4_12_;
                            auVar59._0_4_ = fVar56 - (fVar79 / fVar53) / _DAT_142e3788c;
                            fVar53 = (float)pub_142e32a70(auVar59._0_8_);
                            fVar54 = (float)pub_142e32a70();
                            pdb_140a851d0(&uStack_158,&uStack_1b0);
                            fVar53 = (float)(~-(uint)(fVar53 < 0.0) & (uint)fVar53 |
                                            (uint)(fVar53 + fVar82) & -(uint)(fVar53 < 0.0));
                            uStack_118 = CONCAT44(uStack_118._4_4_,fVar53);
                            if ((fVar53 < 0.0) || (fVar82 < fVar53)) {
                              uStack_108 = &uStack_118;
                              fStack_100 = 7.7206726;
                              uStack_fc = 1;
                    /* WARNING: Subroutine does not return */
                              pdb_142dc83d0(&UNK_14330d448,&uStack_108,&UNK_14330d430);
                            }
                            uVar30 = pdb_14148c300(&uStack_158);
                            uVar32 = uStack_148;
                            uVar39 = (ulonglong)uVar30;
                            uVar57 = extraout_XMM0_Qa;
                            if (uStack_148 <= uVar39) goto LAB_14088a505;
                            uVar36 = uVar39 + 1;
                            if (uStack_148 <= uVar36) {
                    /* WARNING: Subroutine does not return */
                              pdb_142dc81f2(uVar36,uStack_148,&UNK_14330d730);
                            }
                            auVar80._8_4_ = (int)extraout_XMM0_Qb_00;
                            auVar80._0_8_ = extraout_XMM0_Qa;
                            auVar80._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
                            fVar81 = (float)(~-(uint)(fVar54 < 0.0) & (uint)fVar54 |
                                            (uint)(fVar54 + fVar82) & -(uint)(fVar54 < 0.0));
                            pbVar51 = (byte *)CONCAT44(uStack_14c,uStack_150);
                            fVar55 = fVar82 - (float)extraout_XMM0_Qa;
                            auStack_278 = ZEXT416((uint)fVar55);
                            fVar53 = *(float *)(pbVar51 + uVar39 * 0xc + 8);
                            uStack_268 = *(longlong **)(pbVar51 + uVar39 * 0xc);
                            uStack_260 = 0;
                            uStack_298 = *(longlong *)(pbVar51 + uVar36 * 0xc);
                            uStack_290 = 0;
                            fVar54 = *(float *)(pbVar51 + uVar36 * 0xc + 8);
                            uStack_118 = CONCAT44(uStack_118._4_4_,fVar81);
                            if ((fVar81 < 0.0) || (fVar82 < fVar81)) {
                              uStack_108 = &uStack_118;
                              fStack_100 = 7.7206726;
                              uStack_fc = 1;
                    /* WARNING: Subroutine does not return */
                              pdb_142dc83d0(&UNK_14330d448,&uStack_108,&UNK_14330d430);
                            }
                            uVar30 = pdb_14148c300(&uStack_158);
                            uVar39 = (ulonglong)uVar30;
                            uStack_1c8 = extraout_XMM0_Qa_00;
                            if (uVar32 <= uVar39) {
                    /* WARNING: Subroutine does not return */
                              pdb_142dc81f2(uVar39,uVar32,&UNK_14330d718);
                            }
                            uVar36 = uVar39 + 1;
                            if (uVar32 <= uVar36) {
                    /* WARNING: Subroutine does not return */
                              pdb_142dc81f2(uVar36,uVar32,&UNK_14330d730);
                            }
                            uStack_1c8._0_4_ = (float)extraout_XMM0_Qa_00;
                            fVar62 = fVar82 - (float)uStack_1c8;
                            _auStack_258 = ZEXT416((uint)fVar62);
                            fVar81 = *(float *)(pbVar51 + uVar39 * 0xc + 8);
                            uStack_208 = *(ulonglong *)(pbVar51 + uVar39 * 0xc);
                            uStack_200 = 0;
                            uStack_318 = *(longlong **)(pbVar51 + uVar36 * 0xc);
                            uStack_310 = 0;
                            uStack_288 = CONCAT44(uStack_288._4_4_,
                                                  *(float *)(pbVar51 + uVar36 * 0xc + 8) *
                                                  (float)uStack_1c8);
                            uVar30 = pdb_14148c300(&uStack_158);
                            uVar36 = (ulonglong)uVar30;
                            uVar39 = uVar36 + 1;
                            if (uVar32 <= uVar39) {
                    /* WARNING: Subroutine does not return */
                              pdb_142dc81f2(uVar39,uVar32,&UNK_14330d748);
                            }
                            fVar63 = *(float *)(pbVar51 + uVar39 * 0xc + 8) -
                                     (float)*(undefined8 *)(pbVar51 + uVar36 * 0xc + 8);
                            fVar67 = (float)((ulonglong)*(undefined8 *)(pbVar51 + uVar36 * 0xc + 8)
                                            >> 0x20) - *(float *)(pbVar51 + uVar36 * 0xc);
                            fVar73 = fVar82 / SQRT(fVar67 * fVar67 +
                                                   (*(float *)(pbVar51 + uVar39 * 0xc + 4) -
                                                   *(float *)(pbVar51 + uVar36 * 0xc + 4)) *
                                                   (*(float *)(pbVar51 + uVar39 * 0xc + 4) -
                                                   *(float *)(pbVar51 + uVar36 * 0xc + 4)) +
                                                   fVar63 * fVar63);
                            uStack_118 = CONCAT44(fVar73 * fVar67,
                                                  (float)((uint)fVar73 ^ _DAT_142e37820) * fVar63);
                            pdb_140df4520(&uStack_108,&uStack_118);
                            fStack_230 = fVar82 / SQRT(uStack_108._4_4_ * uStack_108._4_4_ +
                                                       (float)uStack_108 * (float)uStack_108 +
                                                       fStack_100 * fStack_100);
                            uStack_238 = CONCAT44(fStack_230 * uStack_108._4_4_,
                                                  fStack_230 * (float)uStack_108);
                            fStack_230 = fStack_230 * fStack_100;
                            uVar30 = pdb_14148c300(&uStack_158);
                            uVar36 = (ulonglong)uVar30;
                            uVar39 = uVar36 + 1;
                            if (uVar32 <= uVar39) {
                    /* WARNING: Subroutine does not return */
                              pdb_142dc81f2(uVar39,uVar32,&UNK_14330d748);
                            }
                            uStack_190._0_4_ =
                                 *(float *)(pbVar51 + uVar39 * 0xc + 8) -
                                 (float)*(undefined8 *)(pbVar51 + uVar36 * 0xc + 8);
                            fVar63 = (float)((ulonglong)*(undefined8 *)(pbVar51 + uVar36 * 0xc + 8)
                                            >> 0x20) - *(float *)(pbVar51 + uVar36 * 0xc);
                            uStack_190._4_4_ =
                                 fVar82 / SQRT(fVar63 * fVar63 +
                                               (*(float *)(pbVar51 + uVar39 * 0xc + 4) -
                                               *(float *)(pbVar51 + uVar36 * 0xc + 4)) *
                                               (*(float *)(pbVar51 + uVar39 * 0xc + 4) -
                                               *(float *)(pbVar51 + uVar36 * 0xc + 4)) +
                                               (float)uStack_190 * (float)uStack_190);
                            uStack_190._0_4_ =
                                 (float)((uint)uStack_190._4_4_ ^ _DAT_142e37820) *
                                 (float)uStack_190;
                            uStack_190._4_4_ = uStack_190._4_4_ * fVar63;
                            pdb_140df4520(&uStack_108,&uStack_190);
                            plStack_210 = (longlong *)
                                          CONCAT44(plStack_210._4_4_,
                                                   fVar54 * (float)extraout_XMM0_Qa);
                            uStack_1d0 = CONCAT44(uStack_1d0._4_4_,fVar53 * fVar55);
                            fVar82 = fVar82 / SQRT(uStack_108._4_4_ * uStack_108._4_4_ +
                                                   (float)uStack_108 * (float)uStack_108 +
                                                   fStack_100 * fStack_100);
                            uStack_118 = CONCAT44(fVar82 * uStack_108._4_4_,
                                                  fVar82 * (float)uStack_108);
                            fStack_110 = fVar82 * fStack_100;
                            auStack_1f8 = auVar80;
                            pdb_14007ee60();
                            pauStack_120 = (undefined1 (*) [16])pub_1406abab0(0x90,0x10);
                            if (pauStack_120 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
                              pdb_142dc7e11(0x10,0x90);
                            }
                            pdb_140de9ab0(&uStack_108,&uStack_238);
                            uVar57 = CONCAT44(uStack_108._4_4_,(float)uStack_108);
                            uVar35 = CONCAT44(uStack_fc,fStack_100);
                            uStack_190 = CONCAT44(uStack_190._4_4_,fVar56);
                            if ((fVar56 < 0.0) || (_DAT_142e36f28 < fVar56)) {
                              uStack_108 = &uStack_190;
                              fStack_100 = 7.7206726;
                              uStack_fc = 1;
                    /* WARNING: Subroutine does not return */
                              pdb_142dc83d0(&UNK_14330d448,&uStack_108,&UNK_14330d430);
                            }
                            uVar30 = pdb_14148c300(&uStack_158);
                            lVar42 = lStack_300;
                            lVar34 = lStack_308;
                            uVar39 = (ulonglong)uVar30;
                            if (uVar32 <= uVar39) {
                    /* WARNING: Subroutine does not return */
                              pdb_142dc81f2(uVar39,uVar32,&UNK_14330d718);
                            }
                            uVar36 = uVar39 + 1;
                            if (uVar32 <= uVar36) {
                    /* WARNING: Subroutine does not return */
                              pdb_142dc81f2(uVar36,uVar32,&UNK_14330d730);
                            }
                            fVar82 = *(float *)(pbVar51 + uVar39 * 0xc + 8);
                            uVar4 = *(undefined8 *)(pbVar51 + uVar39 * 0xc);
                            uVar5 = *(undefined8 *)(pbVar51 + uVar36 * 0xc);
                            fVar56 = *(float *)(pbVar51 + uVar36 * 0xc + 8);
                            pdb_140de9ab0(&uStack_108,&uStack_118);
                            fVar53 = _DAT_142e36f28 - extraout_XMM0_Da;
                            *(ulonglong *)pauStack_120[7] =
                                 CONCAT44((float)uStack_1c8 * uStack_318._4_4_ +
                                          (float)auStack_258 * uStack_208._4_4_,
                                          (float)uStack_1c8 * (float)uStack_318 +
                                          (float)auStack_258 * (float)uStack_208);
                            *(float *)(pauStack_120[7] + 8) = fVar81 * fVar62 + (float)uStack_288;
                            *(undefined8 *)*pauStack_120 = uVar57;
                            *(undefined8 *)(*pauStack_120 + 8) = uVar35;
                            *(ulonglong *)pauStack_120[1] =
                                 CONCAT44((float)auStack_1f8._0_4_ * uStack_298._4_4_ +
                                          (float)auStack_278._0_4_ * uStack_268._4_4_,
                                          (float)auStack_1f8._0_4_ * (float)uStack_298 +
                                          (float)auStack_278._0_4_ * (float)uStack_268);
                            *(float *)(pauStack_120[1] + 8) = (float)uStack_1d0 + plStack_210._0_4_;
                            *(undefined8 *)(pauStack_120[1] + 0xc) = 0x3f8000003f800000;
                            *(undefined4 *)(pauStack_120[2] + 4) = 0x3f800000;
                            *(longlong *)pauStack_120[3] = lVar34;
                            *(longlong *)(pauStack_120[3] + 8) = lVar42;
                            *(ulonglong *)pauStack_120[4] =
                                 CONCAT44(extraout_XMM0_Da * (float)((ulonglong)uVar5 >> 0x20) +
                                          fVar53 * (float)((ulonglong)uVar4 >> 0x20),
                                          extraout_XMM0_Da * (float)uVar5 + fVar53 * (float)uVar4);
                            *(float *)(pauStack_120[4] + 8) =
                                 fVar56 * extraout_XMM0_Da + fVar82 * fVar53;
                            *(undefined8 *)(pauStack_120[4] + 0xc) = 0x3f8000003f800000;
                            *(undefined4 *)(pauStack_120[5] + 4) = 0x3f800000;
                            *(ulonglong *)pauStack_120[6] =
                                 CONCAT44(uStack_108._4_4_,(float)uStack_108);
                            *(ulonglong *)(pauStack_120[6] + 8) = CONCAT44(uStack_fc,fStack_100);
                            *(undefined8 *)(pauStack_120[7] + 0xc) = 0x3f8000003f800000;
                            *(undefined4 *)(pauStack_120[8] + 4) = 0x3f800000;
                            if (CONCAT44(uStack_154,uStack_158) != 0) {
                              pub_1406abac0(pbVar51,CONCAT44(uStack_154,uStack_158) * 0xc,4);
                            }
                            fVar81 = _UNK_143011b28;
                            fVar55 = _UNK_143011b24;
                            fVar54 = _UNK_142e378f8;
                            fVar53 = _UNK_142e378f4;
                            fVar56 = _DAT_142e378f0;
                            if (uStack_140 != 0) {
                              pub_1406abac0(pbStack_138,uStack_140 << 2,4);
                            }
                            auStack_1f8._0_8_ = 3;
                            fVar82 = _DAT_142e36f28;
                            fVar62 = fVar54;
                            fVar63 = fVar56;
                            fVar67 = fVar53;
                            fVar73 = fVar54;
                          }
                        }
                        iVar18 = *(int *)(lStack_168 + -0xc);
                        uStack_208 = pdb_140dedfe0(iVar18);
                        if (((byte)uStack_178 < 3) && ((iVar18 * 0x22 + 0x398e1U) % 3 == 0)) {
                          auVar25._12_4_ = 0;
                          auVar25._0_12_ = auStack_254;
                          _auStack_258 = auVar25 << 0x20;
                        }
                        else {
                          uStack_208 = uStack_208 + 0xa0761d6478bd642f;
                          auVar9._8_8_ = 0;
                          auVar9._0_8_ = uStack_208 ^ 0xe7037ed1a0b428db;
                          auVar14._8_8_ = 0;
                          auVar14._0_8_ = uStack_208;
                          auStack_258._1_3_ = 0;
                          auStack_258[0] =
                               (SUB164(auVar9 * auVar14,0) ^ SUB164(auVar9 * auVar14,8)) >> 0x1e ==
                               1;
                        }
                        auStack_278._0_8_ =
                             (undefined1 (*) [16])(*pauStack_120 + (uint)(auStack_1f8._0_4_ * 0x30))
                        ;
                        uStack_268 = plStack_170 + 0x16;
                        uStack_298 = lStack_168 + -0x28;
                        uStack_288 = uStack_188 * 1000 + uStack_180;
                        uStack_318 = plStack_170 + 0x1f;
                        plStack_210 = plStack_170 + 0x25;
                        param_1 = 0;
                        pauVar37 = pauStack_120;
                        if (pauStack_120 ==
                            (undefined1 (*) [16])(*pauStack_120 + (uint)(auStack_1f8._0_4_ * 0x30)))
                        goto LAB_14088a1c3;
                        goto LAB_140889ae5;
                      }
                      uVar49 = (ushort)(uVar30 - 1) & (ushort)uVar30;
                      uVar30 = CONCAT22((short)(uVar30 - 1 >> 0x10),uVar49);
                    }
                    auVar66[0] = -(auVar60[0] == -1);
                    auVar66[1] = -(auVar60[1] == -1);
                    auVar66[2] = -(auVar60[2] == -1);
                    auVar66[3] = -(auVar60[3] == -1);
                    auVar66[4] = -(auVar60[4] == -1);
                    auVar66[5] = -(auVar60[5] == -1);
                    auVar66[6] = -(auVar60[6] == -1);
                    auVar66[7] = -(auVar60[7] == -1);
                    auVar66[8] = -(auVar60[8] == -1);
                    auVar66[9] = -(auVar60[9] == -1);
                    auVar66[10] = -(auVar60[10] == -1);
                    auVar66[0xb] = -(auVar60[0xb] == -1);
                    auVar66[0xc] = -(auVar60[0xc] == -1);
                    auVar66[0xd] = -(auVar60[0xd] == -1);
                    auVar66[0xe] = -(auVar60[0xe] == -1);
                    auVar66[0xf] = -(auVar60[0xf] == -1);
                    if ((((((((((((((((SUB161(auVar66 >> 7,0) & 1) != 0 ||
                                     (SUB161(auVar66 >> 0xf,0) & 1) != 0) ||
                                    (SUB161(auVar66 >> 0x17,0) & 1) != 0) ||
                                   (SUB161(auVar66 >> 0x1f,0) & 1) != 0) ||
                                  (SUB161(auVar66 >> 0x27,0) & 1) != 0) ||
                                 (SUB161(auVar66 >> 0x2f,0) & 1) != 0) ||
                                (SUB161(auVar66 >> 0x37,0) & 1) != 0) ||
                               (SUB161(auVar66 >> 0x3f,0) & 1) != 0) ||
                              (SUB161(auVar66 >> 0x47,0) & 1) != 0) ||
                             (SUB161(auVar66 >> 0x4f,0) & 1) != 0) ||
                            (SUB161(auVar66 >> 0x57,0) & 1) != 0) ||
                           (SUB161(auVar66 >> 0x5f,0) & 1) != 0) ||
                          (SUB161(auVar66 >> 0x67,0) & 1) != 0) ||
                         (SUB161(auVar66 >> 0x6f,0) & 1) != 0) ||
                        (SUB161(auVar66 >> 0x77,0) & 1) != 0) || auVar66[0xf] < '\0') break;
                    uVar39 = uVar39 + lVar34 + 0x10;
                    lVar34 = lVar34 + 0x10;
                  }
                }
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_143011c28);
              }
            }
          }
        }
        goto LAB_140888880;
      }
      if (cStack_f1 == '\0') {
        return;
      }
      plVar33 = (longlong *)pdb_140e97000();
      if (((char)plVar33[0xd] != '\x01') &&
         (plVar33 = (longlong *)pdb_142dde6e0(plVar33,0), plVar33 == (longlong *)0x0)) break;
      puVar50 = (undefined *)0x0;
      if (*plVar33 == 0) {
        *plVar33 = -1;
        plStack_160 = plVar33;
        pdb_140e95370(plVar33 + 1,puVar43);
        *plStack_160 = *plStack_160 + 1;
        return;
      }
    }
    plVar33 = (longlong *)pdb_142dc8090(&UNK_14330e608);
LAB_14088a2c2:
    plVar33 = (longlong *)pdb_142dde6e0(plVar33,0);
  } while (plVar33 != (longlong *)0x0);
  pdb_142dc7890(&UNK_14330e598);
LAB_14088a2f7:
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14301ce21,0x17,&UNK_14301ce30);
  while (pauVar37 != (undefined1 (*) [16])auStack_278._0_8_) {
LAB_140889ae5:
    plVar33 = plStack_170;
    uVar84 = (undefined4)((ulonglong)puVar83 >> 0x20);
    uVar85 = (undefined4)((ulonglong)lVar46 >> 0x20);
    fVar20 = *(float *)*pauVar37;
    fVar21 = *(float *)(*pauVar37 + 4);
    fVar22 = *(float *)(*pauVar37 + 8);
    fVar23 = *(float *)(*pauVar37 + 0xc);
    uStack_178 = CONCAT44(uStack_178._4_4_,*(undefined4 *)pauVar37[1]);
    fVar79 = *(float *)(pauVar37[1] + 4);
    uStack_188 = CONCAT44(uStack_188._4_4_,*(undefined4 *)(pauVar37[1] + 8));
    uStack_2c8 = *(undefined4 *)(pauVar37[2] + 0xc);
    uStack_2d8 = *(undefined8 *)(pauVar37[1] + 0xc);
    uStack_2d0 = *(undefined8 *)(pauVar37[2] + 4);
    uStack_158 = (uint)*(undefined8 *)(pauVar37[1] + 0xc);
    uStack_154 = (undefined4)((ulonglong)*(undefined8 *)(pauVar37[1] + 0xc) >> 0x20);
    uStack_150 = (undefined4)*(undefined8 *)(pauVar37[2] + 4);
    uStack_14c = (uint)((ulonglong)*(undefined8 *)(pauVar37[2] + 4) >> 0x20);
    uStack_148 = CONCAT44(uStack_148._4_4_,*(undefined4 *)(pauVar37[2] + 0xc));
    uStack_1a5 = 0;
    uStack_1ad = 0;
    uStack_1a9 = 0;
    fStack_100 = 0.0;
    uStack_fc = uStack_fc & 0xff000000;
    uStack_108._0_4_ = (float)(uint)uStack_1b0;
    uStack_108._4_4_ = 0.0;
    uVar8 = *(undefined4 *)(lStack_168 + -0x10);
    lVar34 = plStack_170[0x18];
    uStack_1c8 = param_1;
    if (lVar34 == plStack_170[0x16]) {
      pdb_142d8ddd0(uStack_268);
    }
    lVar46 = plVar33[0x17];
    lVar42 = lVar34 * 0x170;
    *(undefined8 *)(lVar46 + lVar42) = 0;
    *(undefined8 *)(lVar46 + 0x10 + lVar42) = 0;
    *(undefined8 *)(lVar46 + 0x20 + lVar42) = 0;
    *(undefined8 *)(lVar46 + 0x30 + lVar42) = 0;
    *(undefined4 *)(lVar46 + 0x40 + lVar42) = 0;
    *(undefined4 *)(lVar46 + 0x50 + lVar42) = 0;
    *(undefined4 *)(lVar46 + 0x60 + lVar42) = 0;
    *(undefined4 *)(lVar46 + 0x70 + lVar42) = 2;
    *(undefined **)(lVar46 + 0x90 + lVar42) = &UNK_143011d50;
    *(undefined8 *)(lVar46 + 0x98 + lVar42) = 0x2a;
    *(undefined **)(lVar46 + 0xa0 + lVar42) = &UNK_14330dc96;
    *(undefined8 *)(lVar46 + 0xa8 + lVar42) = 0x2b;
    pfVar3 = (float *)(lVar46 + 0xb0 + lVar42);
    *pfVar3 = fVar20;
    pfVar3[1] = fVar21;
    pfVar3[2] = fVar22;
    pfVar3[3] = fVar23;
    *(float *)(lVar46 + 0xc0 + lVar42) = (float)uStack_178;
    *(float *)(lVar46 + 0xc4 + lVar42) = fVar79;
    *(float *)(lVar46 + 200 + lVar42) = (float)uStack_188;
    puVar43 = (undefined8 *)(lVar46 + 0xcc + lVar42);
    *puVar43 = CONCAT44(uStack_154,uStack_158);
    puVar43[1] = CONCAT44(uStack_14c,uStack_150);
    *(undefined4 *)(lVar46 + 0xdc + lVar42) = (undefined4)uStack_148;
    *(undefined4 *)(lVar46 + 0xe0 + lVar42) = 1;
    *(undefined4 *)(lVar46 + 0xe4 + lVar42) = uVar8;
    *(undefined4 *)(lVar46 + 0xe8 + lVar42) = 0;
    *(undefined1 *)(lVar46 + 0x105 + lVar42) = 2;
    *(undefined4 *)(lVar46 + 0x108 + lVar42) = 0;
    *(undefined1 *)(lVar46 + 0x15c + lVar42) = 2;
    *(ulonglong *)(lVar46 + 0x164 + lVar42) =
         CONCAT35((undefined3)uStack_fc,CONCAT41(fStack_100,uStack_108._7_1_));
    *(ulonglong *)(lVar46 + 0x15d + lVar42) = CONCAT44(uStack_108._4_4_,(float)uStack_108);
    *(undefined1 *)(lVar46 + 0x16c + lVar42) = 2;
    *(undefined1 *)(lVar46 + 0x16e + lVar42) = uStack_f2;
    *(undefined1 *)(lVar46 + 0x16f + lVar42) = 0;
    plVar33[0x18] = lVar34 + 1;
    uStack_14c = uStack_14c & 0xff000000;
    uStack_158 = uStack_158 & 0xffffff;
    uStack_154 = 0;
    uStack_150 = 0;
    puVar38 = (undefined4 *)pdb_1409014f0(uStack_298,&UNK_143011da8);
    uVar8 = *puVar38;
    uStack_1a5 = (undefined4)(CONCAT34((undefined3)uStack_14c,uStack_150) >> 0x18);
    uStack_1b0 = (uint3)uStack_158;
    uStack_1ad = (undefined4)(CONCAT44(uStack_154,uStack_158) >> 0x18);
    uStack_1a9._1_3_ = (undefined3)uStack_150;
    uStack_1a9._0_1_ = (undefined1)((uint)uStack_154 >> 0x18);
    lVar34 = plVar33[0x18];
    if (lVar34 == plVar33[0x16]) {
      pdb_142d8ddd0(uStack_268);
    }
    lVar46 = plVar33[0x17];
    lVar42 = lVar34 * 0x170;
    *(undefined8 *)(lVar46 + lVar42) = 0;
    *(undefined8 *)(lVar46 + 0x10 + lVar42) = 1;
    *(longlong *)(lVar46 + 0x18 + lVar42) = uStack_288;
    *(undefined8 *)(lVar46 + 0x20 + lVar42) = 0;
    *(undefined8 *)(lVar46 + 0x30 + lVar42) = 0;
    *(undefined4 *)(lVar46 + 0x40 + lVar42) = 0;
    *(undefined4 *)(lVar46 + 0x50 + lVar42) = 0;
    *(undefined4 *)(lVar46 + 0x60 + lVar42) = 0;
    *(undefined4 *)(lVar46 + 0x70 + lVar42) = 2;
    *(undefined **)(lVar46 + 0x90 + lVar42) = &UNK_143011d7a;
    *(undefined8 *)(lVar46 + 0x98 + lVar42) = 0x2a;
    *(undefined **)(lVar46 + 0xa0 + lVar42) = &UNK_14330db43;
    *(undefined8 *)(lVar46 + 0xa8 + lVar42) = 0x31;
    pfVar3 = (float *)(lVar46 + 0xb0 + lVar42);
    *pfVar3 = fVar20;
    pfVar3[1] = fVar21;
    pfVar3[2] = fVar22;
    pfVar3[3] = fVar23;
    *(float *)(lVar46 + 0xc0 + lVar42) = (float)uStack_178;
    *(float *)(lVar46 + 0xc4 + lVar42) = fVar79;
    *(float *)(lVar46 + 200 + lVar42) = (float)uStack_188;
    puVar43 = (undefined8 *)(lVar46 + 0xcc + lVar42);
    *puVar43 = uStack_2d8;
    puVar43[1] = uStack_2d0;
    fVar69 = fVar22 * fVar22;
    fVar72 = fVar23 * fVar23;
    fVar74 = fVar21 * fVar21 + fVar20 * fVar20;
    fVar64 = fVar72 - (fVar74 + fVar69);
    fVar70 = fVar72 - (fVar74 + fVar69);
    fVar77 = fVar22 * fVar73 + fVar21 * fVar67 + fVar20 * fVar63;
    fVar77 = fVar77 + fVar77;
    fVar76 = fVar23 + fVar23;
    fVar78 = fVar22 * fVar28 + fVar21 * fVar27 + fVar20 * fVar26;
    fVar78 = fVar78 + fVar78;
    fVar65 = fVar20 * _DAT_143011b40;
    fVar68 = fVar21 * _UNK_143011b44;
    fVar71 = fVar22 * _UNK_143011b48;
    *(undefined4 *)(lVar46 + 0xdc + lVar42) = uStack_2c8;
    *(undefined4 *)(lVar46 + 0xe0 + lVar42) = 1;
    *(undefined4 *)(lVar46 + 0xe4 + lVar42) = uVar8;
    *(undefined4 *)(lVar46 + 0xe8 + lVar42) = 0;
    *(undefined1 *)(lVar46 + 0x105 + lVar42) = 2;
    *(undefined4 *)(lVar46 + 0x108 + lVar42) = 0;
    *(undefined1 *)(lVar46 + 0x15c + lVar42) = 2;
    *(ulonglong *)(lVar46 + 0x164 + lVar42) = CONCAT44(uStack_1a5,uStack_1a9);
    *(ulonglong *)(lVar46 + 0x15d + lVar42) =
         CONCAT17((undefined1)uStack_1a9,CONCAT43(uStack_1ad,uStack_1b0));
    *(undefined1 *)(lVar46 + 0x16c + lVar42) = 2;
    *(undefined1 *)(lVar46 + 0x16e + lVar42) = uStack_f2;
    *(undefined1 *)(lVar46 + 0x16f + lVar42) = 0;
    plVar33[0x18] = lVar34 + 1;
    uStack_108._0_4_ =
         (float)uStack_178 + (fVar71 + fVar21 * fVar28) * fVar76 + fVar78 * fVar20 + fVar64 * fVar26
         + _DAT_142f89640;
    uStack_108._4_4_ =
         fVar79 + (fVar65 + fVar22 * fVar26) * fVar76 +
                  fVar78 * fVar21 + (fVar72 - (fVar74 + fVar69)) * fVar27 + _UNK_142f89644;
    fStack_100 = (fVar68 + fVar20 * fVar27) * fVar76 + fVar78 * fVar22 + fVar70 * fVar28 +
                 (float)uStack_188 + 0.0;
    uStack_1b0 = (uint3)_DAT_143011b50;
    uStack_1ad = (undefined4)((ulonglong)_DAT_143011b50 >> 0x18);
    uStack_1a9._0_1_ = (undefined1)((ulonglong)_DAT_143011b50 >> 0x38);
    uStack_1a9 = CONCAT31(0x4ccccd,(undefined1)uStack_1a9);
    uStack_1a5 = CONCAT31(uStack_1a5._1_3_,0x3e);
    lVar46 = CONCAT44(uVar85,(fVar21 * fVar55 + fVar20 * fVar53) * fVar76 +
                             fVar77 * fVar22 + fVar70 * fVar62);
    puVar83 = (uint *)CONCAT44(uVar84,(fVar22 * fVar81 + fVar21 * fVar54) * fVar76 +
                                      fVar77 * fVar20 + fVar64 * fVar56);
    pdb_140c17790(&uStack_158,(ulonglong)plStack_1e0 & 0xffffffff,&uStack_108,&uStack_1b0,puVar83,
                  lVar46);
    lVar34 = plVar33[0x21];
    if (lVar34 == plVar33[0x1f]) {
      pdb_142d8d630(uStack_318);
    }
    pauVar37 = pauVar37 + 3;
    param_1 = uStack_1c8 + 1;
    lVar42 = plVar33[0x20];
    lVar41 = lVar34 * 0x30;
    plVar1 = (longlong *)(lVar42 + 0x20 + lVar41);
    *plVar1 = (longlong)pbStack_138;
    plVar1[1] = lStack_130;
    puVar2 = (ulonglong *)(lVar42 + 0x10 + lVar41);
    *puVar2 = uStack_148;
    puVar2[1] = uStack_140;
    *(undefined8 *)(lVar42 + lVar41) = CONCAT44(uStack_154,uStack_158);
    ((undefined8 *)(lVar42 + lVar41))[1] = CONCAT44(uStack_14c,uStack_150);
    plVar33[0x21] = lVar34 + 1;
    if (auStack_258[0] != '\0') {
      fVar79 = fVar79 + _DAT_142e42360;
      uStack_148 = CONCAT44(uStack_148._4_4_,(int)uStack_180);
      uStack_158 = 0x43011dc0;
      uStack_154 = 1;
      uStack_150 = 10;
      uStack_14c = 0;
      uStack_140 = uStack_1c8;
      uStack_1c8 = pdb_1414af170(&uStack_158);
      plVar33 = plStack_170;
      uVar32 = uStack_208 + 0xa0761d6478bd642f;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar32 ^ 0xe7037ed1a0b428db;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar32;
      uVar39 = SUB168(auVar10 * auVar15,8) ^ SUB168(auVar10 * auVar15,0);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar39;
      uStack_1d0 = SUB168(auVar11 * ZEXT816(6),8);
      if (uVar39 * 6 < 4) {
        uStack_208 = uStack_208 + 0x40ec3ac8f17ac85e;
        do {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uStack_208 ^ 0xe7037ed1a0b428db;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uStack_208;
          uVar32 = uVar32 + 0xa0761d6478bd642f;
          uVar39 = SUB168(auVar12 * auVar16,8) ^ SUB168(auVar12 * auVar16,0);
          uStack_208 = uStack_208 + 0xa0761d6478bd642f;
        } while (uVar39 * 6 < 4);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar39;
        uStack_1d0 = SUB168(auVar13 * ZEXT816(6),8);
        lVar34 = plStack_170[0x27];
        uStack_208 = uVar32;
        if (lVar34 == plStack_170[0x25]) {
LAB_14088a136:
          pdb_142d7eb40(plStack_210);
        }
      }
      else {
        lVar34 = plStack_170[0x27];
        uStack_208 = uVar32;
        if (lVar34 == plStack_170[0x25]) goto LAB_14088a136;
      }
      lVar42 = plVar33[0x26];
      lVar41 = lVar34 * 0x50;
      *(undefined1 *)(lVar42 + lVar41) = 1;
      *(undefined8 *)(lVar42 + 8 + lVar41) = uStack_1d0;
      pfVar3 = (float *)(lVar42 + 0x10 + lVar41);
      *pfVar3 = fVar20;
      pfVar3[1] = fVar21;
      pfVar3[2] = fVar22;
      pfVar3[3] = fVar23;
      *(float *)(lVar42 + 0x20 + lVar41) = (float)uStack_178;
      *(float *)(lVar42 + 0x24 + lVar41) = fVar79;
      *(float *)(lVar42 + 0x28 + lVar41) = (float)uStack_188;
      puVar43 = (undefined8 *)(lVar42 + 0x2c + lVar41);
      *puVar43 = uStack_2d8;
      puVar43[1] = uStack_2d0;
      *(undefined4 *)(lVar42 + 0x3c + lVar41) = uStack_2c8;
      *(ulonglong *)(lVar42 + 0x40 + lVar41) = uStack_1c8;
      *(longlong **)(lVar42 + 0x48 + lVar41) = plStack_160;
      plVar33[0x27] = lVar34 + 1;
      if (pauVar37 == (undefined1 (*) [16])auStack_278._0_8_) break;
      goto LAB_140889ae5;
    }
  }
LAB_14088a1c3:
  pub_1406abac0((byte *)pauStack_120,(ulonglong)(uint)(auStack_1f8._0_4_ << 4) * 3,0x10);
  param_4 = puStack_320;
  pbVar51 = pbStack_328;
  goto LAB_140888a4c;
}

