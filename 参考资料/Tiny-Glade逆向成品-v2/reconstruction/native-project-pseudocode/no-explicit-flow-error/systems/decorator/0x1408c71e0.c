// VA 0x1408c71e0, PDB extent 14305 bytes
// system_decorator::decorator_visual::cottage_wall_window::generate_cottage_wall_windows
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_wall_window.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_decorator::decorator_visual::cottage_wall_window::generate_cottage_wall_windows
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/decorator_visual/cottage_wall_window.rs
   Extent: 14305 */

void pdb_1408c71e0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16],longlong *param_5,undefined8 *param_6,
                  undefined8 *param_7)

{
  longlong *plVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  code *pcVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  char cVar30;
  uint uVar31;
  uint uVar32;
  undefined4 uVar33;
  longlong lVar34;
  ulonglong uVar35;
  undefined1 (*pauVar36) [16];
  ulonglong uVar37;
  undefined8 uVar38;
  undefined4 *puVar39;
  undefined8 *puVar40;
  longlong *plVar41;
  int *piVar42;
  undefined1 (*pauVar43) [16];
  undefined1 (*pauVar44) [16];
  longlong lVar45;
  ulonglong uVar46;
  undefined *puVar47;
  undefined *puVar48;
  ushort uVar49;
  longlong lVar50;
  byte *unaff_R12;
  byte *pbVar51;
  undefined1 (*pauVar52) [16];
  undefined1 (*pauVar53) [16];
  byte bVar54;
  undefined4 extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar55;
  undefined1 auVar57 [12];
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar56;
  float fVar59;
  undefined1 auVar58 [16];
  float fVar60;
  float fVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  float fVar71;
  float fVar72;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar73;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  ulonglong in_stack_fffffffffffffba0;
  undefined4 uVar85;
  undefined1 auStack_404 [12];
  undefined8 uStack_3f8;
  float fStack_3f0;
  undefined8 uStack_3e8;
  float fStack_3e0;
  undefined8 uStack_3d8;
  longlong lStack_3d0;
  undefined8 uStack_3c8;
  undefined1 (*pauStack_3c0) [16];
  undefined1 (*pauStack_3b8) [16];
  undefined1 (*pauStack_3b0) [16];
  longlong *plStack_3a8;
  undefined4 *puStack_3a0;
  undefined8 uStack_398;
  undefined1 (*pauStack_390) [16];
  undefined1 (*pauStack_388) [16];
  undefined8 uStack_380;
  longlong lStack_378;
  longlong lStack_370;
  longlong lStack_368;
  longlong lStack_360;
  longlong *plStack_358;
  undefined8 uStack_350;
  longlong lStack_348;
  undefined1 (*pauStack_340) [16];
  undefined *puStack_338;
  ulonglong uStack_330;
  ulonglong uStack_328;
  float fStack_31c;
  float fStack_318;
  undefined4 uStack_314;
  longlong *plStack_310;
  undefined1 (*pauStack_308) [16];
  longlong lStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined4 uStack_2dc;
  longlong lStack_2d8;
  longlong lStack_2d0;
  undefined1 (*pauStack_2c8) [16];
  undefined1 (*pauStack_2c0) [16];
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  longlong lStack_278;
  float fStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  float fStack_24c;
  ulonglong uStack_248;
  float fStack_240;
  undefined4 uStack_23c;
  float fStack_238;
  uint uStack_234;
  undefined4 uStack_230;
  ulonglong uStack_228;
  undefined4 uStack_220;
  uint uStack_21c;
  longlong lStack_218;
  undefined1 (*pauStack_210) [16];
  undefined1 (*pauStack_208) [16];
  undefined1 (*pauStack_200) [16];
  char cStack_1f8;
  char cStack_1f7;
  undefined1 uStack_1f6;
  undefined4 uStack_1f5;
  undefined4 uStack_1f1;
  undefined4 uStack_1ed;
  undefined1 uStack_1e9;
  undefined8 uStack_1e8;
  ulonglong uStack_1e0;
  longlong lStack_1d8;
  undefined1 (*pauStack_1d0) [16];
  uint uStack_1c4;
  undefined1 (*pauStack_1c0) [16];
  ulonglong uStack_1b8;
  ulonglong uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  longlong lStack_188;
  undefined1 (*pauStack_180) [16];
  undefined4 uStack_178;
  undefined4 uStack_14c;
  undefined1 (*pauStack_148) [16];
  undefined1 (*pauStack_140) [16];
  float fStack_134;
  undefined1 (*pauStack_130) [16];
  ulonglong uStack_128;
  undefined *puStack_120;
  byte bStack_111;
  undefined1 (*pauStack_110) [16];
  undefined1 uStack_102;
  char cStack_101;
  undefined1 (*pauStack_100) [16];
  undefined1 uStack_f1;
  undefined8 uStack_f0;
  
  uStack_f0 = 0xfffffffffffffffe;
  pauVar43 = param_2;
  cStack_101 = pdb_140e94b40();
  pauVar44 = param_3;
  pauVar53 = param_4;
  if (cStack_101 == '\0') goto LAB_1408c740c;
  unaff_R12 = (byte *)0x56;
  lVar34 = pdb_1408ca9d0(0x56);
  pauVar44 = (undefined1 (*) [16])&UNK_1430176d0;
  if (lVar34 == 1) {
    if ((undefined1 (*) [16])0x56 < pauVar43) {
      pauVar53 = (undefined1 (*) [16])pdb_142dc8070(&UNK_1430176d0,0x56,0,pauVar43,&UNK_1430177a0);
LAB_1408c9ff3:
      uStack_1a8 = &bStack_111;
      uStack_1a0._0_4_ = 4.387703;
      uStack_1a0._4_4_ = 1.4013e-45;
      uStack_190 = pdb_1408cadf0;
      uStack_198 = pauVar53;
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_143017610,&uStack_1a8,&UNK_143017640);
    }
    uVar35 = pdb_1408ca9d0(pauVar43);
    if ((uVar35 & 1) != 0) {
      if ((undefined *)0x56 < *pauVar43 + 2) {
        pdb_142dc8070(&UNK_1430176d0,0x56,*pauVar43 + 2,0x56,&UNK_1430177b8);
        pcVar20 = (code *)swi(3);
        (*pcVar20)();
        return;
      }
      unaff_R12 = (byte *)(0x54 - (longlong)pauVar43);
      pauVar44 = (undefined1 (*) [16])(pauVar43[0x1430176d] + 2);
    }
  }
  puVar47 = &UNK_143017304;
  pauVar52 = (undefined1 (*) [16])&UNK_1430172c0;
  do {
    bVar54 = puVar47[-1];
    uVar31 = (uint)(char)bVar54;
    pauStack_1c0 = param_1;
    if ((char)bVar54 < '\0') {
      bVar4 = puVar47[-2];
      if ((char)bVar4 < -0x40) {
        bVar5 = puVar47[-3];
        if ((char)bVar5 < -0x40) {
          pbVar51 = puVar47 + -4;
          puVar47 = puVar47 + -4;
          uVar31 = bVar5 & 0x3f | (*pbVar51 & 7) << 6;
        }
        else {
          puVar47 = puVar47 + -3;
          uVar31 = bVar5 & 0xf;
        }
        uVar31 = bVar4 & 0x3f | uVar31 << 6;
      }
      else {
        puVar47 = puVar47 + -2;
        uVar31 = bVar4 & 0x1f;
      }
      uVar31 = (uint)(bVar54 & 0x3f) | uVar31 << 6;
      if (uVar31 != 0x5c) goto LAB_1408c7354;
LAB_1408c736f:
      puVar48 = puVar47 + -0x1430172bf;
      if ((undefined *)0x44 < puVar48) {
        pdb_142dc8070(&UNK_1430172c0,0x44,puVar48,0x44,&UNK_143017780);
LAB_1408c9f9a:
        uStack_1a8 = (byte *)&cStack_1f8;
        uStack_1a0._0_4_ = 12.578812;
        uStack_1a0._4_4_ = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
        pdb_142dc83d0(&UNK_14330e2c6,&uStack_1a8,&UNK_14330e310);
      }
      pauVar53 = (undefined1 (*) [16])(0x44 - (longlong)puVar48);
      pauVar52 = (undefined1 (*) [16])(puVar47 + 1);
      goto LAB_1408c739b;
    }
    puVar47 = puVar47 + -1;
    if (uVar31 == 0x5c) goto LAB_1408c736f;
LAB_1408c7354:
    if (uVar31 == 0x2f) goto LAB_1408c736f;
  } while (puVar47 != &UNK_1430172c0);
  pauVar53 = (undefined1 (*) [16])0x44;
LAB_1408c739b:
  pauVar36 = (undefined1 (*) [16])pdb_140e97000();
  pauVar43 = pauVar44;
  if (pauVar36[6][8] != '\x01') goto LAB_1408c9e76;
  do {
    if (*(longlong *)*pauVar36 == 0) {
      *(undefined8 *)*pauVar36 = 0xffffffffffffffff;
      in_stack_fffffffffffffba0 = 0;
      pauStack_100 = pauVar36;
      pauStack_340 = (undefined1 (*) [16])
                     pdb_140e94f10(*pauVar36 + 8,pauVar43,unaff_R12,pauVar52,pauVar53,1,0);
      *(longlong *)*pauStack_100 = *(longlong *)*pauStack_100 + 1;
      pauVar44 = param_3;
      param_1 = pauStack_1c0;
      pauVar53 = param_4;
LAB_1408c740c:
      param_3 = param_2;
      param_2 = param_1;
      param_4 = pauVar44;
      uStack_3c8 = pdb_140c47770(param_2);
      pauStack_3c0 = pauVar43;
      uStack_290 = uStack_3c8;
      pdb_140a2fb40(&uStack_1a8,*(undefined8 *)*param_3);
      fVar29 = _UNK_143016c18;
      fVar28 = _UNK_143016c14;
      fVar27 = _DAT_143016c10;
      fVar26 = _UNK_143016bf8;
      fVar25 = _UNK_143016bf4;
      fVar24 = _DAT_143016bf0;
      lStack_2d0 = CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8);
      pauStack_2c0 = uStack_1a0;
      pauStack_1c0 = (undefined1 (*) [16])((ulonglong)uStack_190 & 0xffff);
      uStack_2dc = *(undefined4 *)((longlong)param_6 + 0x1c);
      uStack_398 = *param_6;
      puStack_3a0 = (undefined4 *)param_6[2];
      uStack_380 = *(undefined8 *)*param_4;
      uStack_350 = *param_7;
      plStack_358 = *(longlong **)*pauVar53;
      lStack_370 = *param_5;
      lStack_348 = param_5[1];
      pauStack_390 = pauVar43 + 2;
      pauStack_388 = pauVar43 + 5;
      plStack_3a8 = plStack_358 + 4;
      pauVar52 = pauVar43;
      pauStack_2c8 = pauVar43;
      lVar34 = lStack_188;
      if (lStack_188 != 0) {
        do {
          lStack_378 = lVar34 + -1;
          if ((short)pauStack_1c0 == 0) {
            do {
              auVar58 = *pauStack_2c0;
              lStack_2d0 = lStack_2d0 + -0x980;
              pauStack_2c0 = pauStack_2c0 + 1;
              uVar31 = (ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
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
              pauStack_1c0 = (undefined1 (*) [16])(ulonglong)uVar31;
            } while (uVar31 == 0);
          }
          uVar31 = 0;
          for (uVar32 = (uint)pauStack_1c0; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
            uVar31 = uVar31 + 1;
          }
          lStack_3d0 = *(longlong *)(lStack_2d0 + -0x98 + (ulonglong)uVar31 * -0x98);
          lStack_218 = lStack_3d0;
          pdb_140c3ba10(&uStack_1a8,lStack_2d0 + (ulonglong)uVar31 * -0x98 + -0x90);
          pauStack_1c0 = (undefined1 (*) [16])
                         (ulonglong)((uint)pauStack_1c0 - 1 & (uint)pauStack_1c0);
          param_4 = (undefined1 (*) [16])CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8);
          uVar31 = (uint)(ushort)uStack_190;
          lStack_2d8 = lStack_188;
          pauStack_3b8 = pauStack_180;
          pauStack_3b0 = pauStack_180 + 5;
          param_3 = uStack_1a0;
LAB_1408c75f6:
          pauVar44 = pauStack_3b8;
          if (lStack_2d8 != 0) {
            if ((short)uVar31 == 0) {
              do {
                auVar58 = *param_3;
                param_4 = param_4 + -4;
                param_3 = param_3 + 1;
                uVar31 = (ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) |
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
              } while (uVar31 == 0);
            }
            iVar21 = 0;
            for (uVar32 = uVar31; (uVar32 & 1) == 0; uVar32 = uVar32 >> 1 | 0x80000000) {
              iVar21 = iVar21 + 1;
            }
            uStack_1a8._0_4_ = *(float *)((longlong)param_4 + (-4 - (ulonglong)(uint)(iVar21 << 2)))
            ;
            uStack_1b8 = (ulonglong)(uint)(float)uStack_1a8;
            if (*(longlong *)(pauStack_3b8[4] + 8) != 0) {
              uVar31 = uVar31 - 1 & uVar31;
              lVar34 = lStack_2d8 + -1;
              uVar35 = pdb_1400aede0(pauStack_3b0,&uStack_1a8);
              unaff_R12 = *(byte **)pauVar44[3];
              bVar54 = (byte)(uVar35 >> 0x39);
              auVar58 = ZEXT216(CONCAT11(bVar54,bVar54));
              auVar58 = pshuflw(auVar58,auVar58,0);
              lVar50 = 0;
              while( true ) {
                uVar35 = uVar35 & *(ulonglong *)(pauVar44[3] + 8);
                auVar3 = *(undefined1 (*) [16])(unaff_R12 + uVar35);
                auVar67[0] = -(auVar3[0] == auVar58[0]);
                auVar67[1] = -(auVar3[1] == auVar58[1]);
                auVar67[2] = -(auVar3[2] == auVar58[2]);
                auVar67[3] = -(auVar3[3] == auVar58[3]);
                auVar67[4] = -(auVar3[4] == auVar58[4]);
                auVar67[5] = -(auVar3[5] == auVar58[5]);
                auVar67[6] = -(auVar3[6] == auVar58[6]);
                auVar67[7] = -(auVar3[7] == auVar58[7]);
                auVar67[8] = -(auVar3[8] == auVar58[0]);
                auVar67[9] = -(auVar3[9] == auVar58[1]);
                auVar67[10] = -(auVar3[10] == auVar58[2]);
                auVar67[0xb] = -(auVar3[0xb] == auVar58[3]);
                auVar67[0xc] = -(auVar3[0xc] == auVar58[4]);
                auVar67[0xd] = -(auVar3[0xd] == auVar58[5]);
                auVar67[0xe] = -(auVar3[0xe] == auVar58[6]);
                auVar67[0xf] = -(auVar3[0xf] == auVar58[7]);
                uVar49 = (ushort)(SUB161(auVar67 >> 7,0) & 1) |
                         (ushort)(SUB161(auVar67 >> 0xf,0) & 1) << 1 |
                         (ushort)(SUB161(auVar67 >> 0x17,0) & 1) << 2 |
                         (ushort)(SUB161(auVar67 >> 0x1f,0) & 1) << 3 |
                         (ushort)(SUB161(auVar67 >> 0x27,0) & 1) << 4 |
                         (ushort)(SUB161(auVar67 >> 0x2f,0) & 1) << 5 |
                         (ushort)(SUB161(auVar67 >> 0x37,0) & 1) << 6 |
                         (ushort)(SUB161(auVar67 >> 0x3f,0) & 1) << 7 |
                         (ushort)(SUB161(auVar67 >> 0x47,0) & 1) << 8 |
                         (ushort)(SUB161(auVar67 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar67 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar67 >> 0x5f,0) & 1) << 0xb |
                         (ushort)(SUB161(auVar67 >> 0x67,0) & 1) << 0xc |
                         (ushort)(SUB161(auVar67 >> 0x6f,0) & 1) << 0xd |
                         (ushort)(SUB161(auVar67 >> 0x77,0) & 1) << 0xe |
                         (ushort)(auVar67[0xf] >> 7) << 0xf;
                uVar32 = (uint)uVar49;
                while (uVar49 != 0) {
                  uVar22 = 0;
                  for (uVar23 = uVar32; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
                    uVar22 = uVar22 + 1;
                  }
                  lVar45 = (uVar22 + uVar35 & *(ulonglong *)(pauVar44[3] + 8)) * -0x68;
                  lStack_2d8 = lVar34;
                  if ((int)uStack_1b8 == *(int *)(unaff_R12 + lVar45 + -0x68)) {
                    bStack_111 = pdb_140c45920(&uStack_3c8);
                    plVar41 = plStack_358;
                    uStack_1b0 = CONCAT71(uStack_1b0._1_7_,bStack_111);
                    pauVar53 = pauVar44;
                    if (1 < bStack_111) goto LAB_1408c75f6;
                    if (plStack_358[3] == 0) goto LAB_1408c9dcd;
                    pauVar53 = (undefined1 (*) [16])(unaff_R12 + lVar45);
                    pauStack_200 = pauVar53 + -6;
                    uVar37 = pdb_1400af0a0(plStack_3a8,&lStack_3d0);
                    lVar34 = *plVar41;
                    uVar35 = plVar41[1];
                    bVar54 = (byte)(uVar37 >> 0x39);
                    auVar58 = ZEXT216(CONCAT11(bVar54,bVar54));
                    auVar58 = pshuflw(auVar58,auVar58,0);
                    lVar50 = 0;
                    goto LAB_1408c7797;
                  }
                  uVar49 = (ushort)(uVar32 - 1) & (ushort)uVar32;
                  uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar49);
                }
                auVar62[0] = -(auVar3[0] == -1);
                auVar62[1] = -(auVar3[1] == -1);
                auVar62[2] = -(auVar3[2] == -1);
                auVar62[3] = -(auVar3[3] == -1);
                auVar62[4] = -(auVar3[4] == -1);
                auVar62[5] = -(auVar3[5] == -1);
                auVar62[6] = -(auVar3[6] == -1);
                auVar62[7] = -(auVar3[7] == -1);
                auVar62[8] = -(auVar3[8] == -1);
                auVar62[9] = -(auVar3[9] == -1);
                auVar62[10] = -(auVar3[10] == -1);
                auVar62[0xb] = -(auVar3[0xb] == -1);
                auVar62[0xc] = -(auVar3[0xc] == -1);
                auVar62[0xd] = -(auVar3[0xd] == -1);
                auVar62[0xe] = -(auVar3[0xe] == -1);
                auVar62[0xf] = -(auVar3[0xf] == -1);
                if ((((((((((((((((SUB161(auVar62 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar62 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar62 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar62 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar62 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar62 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar62 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar62 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar62 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar62 >> 0x4f,0) & 1) != 0) ||
                        (SUB161(auVar62 >> 0x57,0) & 1) != 0) ||
                       (SUB161(auVar62 >> 0x5f,0) & 1) != 0) || (SUB161(auVar62 >> 0x67,0) & 1) != 0
                      ) || (SUB161(auVar62 >> 0x6f,0) & 1) != 0) ||
                    (SUB161(auVar62 >> 0x77,0) & 1) != 0) || auVar62[0xf] < '\0') break;
                uVar35 = uVar35 + lVar50 + 0x10;
                lVar50 = lVar50 + 0x10;
              }
            }
                    /* WARNING: Subroutine does not return */
            pdb_142dc8150(&UNK_143016ed0);
          }
          param_2 = (undefined1 (*) [16])0x0;
          pauVar52 = pauVar43;
          lVar34 = lStack_378;
          if (lStack_378 == 0) break;
        } while( true );
      }
      pauVar43 = pauStack_340;
      if (cStack_101 == '\0') {
        return;
      }
      plVar41 = (longlong *)pdb_140e97000();
      if ((char)plVar41[0xd] != '\x01') {
        plVar41 = (longlong *)pdb_142dde6e0(plVar41,0);
        if (plVar41 == (longlong *)0x0) break;
      }
      if (*plVar41 == 0) {
        *plVar41 = -1;
        pauStack_1c0 = (undefined1 (*) [16])plVar41;
        pdb_140e95370(plVar41 + 1,pauVar43);
        *(longlong *)pauStack_1c0 = *(longlong *)pauStack_1c0 + 1;
        return;
      }
    }
    pauVar36 = (undefined1 (*) [16])pdb_142dc8090(&UNK_14330e608);
LAB_1408c9e76:
    pauVar36 = (undefined1 (*) [16])pdb_142dde6e0(pauVar36,0);
  } while (pauVar36 != (undefined1 (*) [16])0x0);
  pdb_142dc7890(&UNK_14330e598);
LAB_1408c9e96:
                    /* WARNING: Subroutine does not return */
  pdb_142dc83d0(&UNK_14301ce21,0x17,&UNK_14301ce30);
LAB_1408c7797:
  uVar37 = uVar37 & uVar35;
  auVar3 = *(undefined1 (*) [16])(lVar34 + uVar37);
  auVar68[0] = -(auVar3[0] == auVar58[0]);
  auVar68[1] = -(auVar3[1] == auVar58[1]);
  auVar68[2] = -(auVar3[2] == auVar58[2]);
  auVar68[3] = -(auVar3[3] == auVar58[3]);
  auVar68[4] = -(auVar3[4] == auVar58[4]);
  auVar68[5] = -(auVar3[5] == auVar58[5]);
  auVar68[6] = -(auVar3[6] == auVar58[6]);
  auVar68[7] = -(auVar3[7] == auVar58[7]);
  auVar68[8] = -(auVar3[8] == auVar58[0]);
  auVar68[9] = -(auVar3[9] == auVar58[1]);
  auVar68[10] = -(auVar3[10] == auVar58[2]);
  auVar68[0xb] = -(auVar3[0xb] == auVar58[3]);
  auVar68[0xc] = -(auVar3[0xc] == auVar58[4]);
  auVar68[0xd] = -(auVar3[0xd] == auVar58[5]);
  auVar68[0xe] = -(auVar3[0xe] == auVar58[6]);
  auVar68[0xf] = -(auVar3[0xf] == auVar58[7]);
  uVar49 = (ushort)(SUB161(auVar68 >> 7,0) & 1) | (ushort)(SUB161(auVar68 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar68 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar68 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar68 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar68 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar68 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar68 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar68 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar68 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar68 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar68 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar68 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar68 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar68 >> 0x77,0) & 1) << 0xe | (ushort)(auVar68[0xf] >> 7) << 0xf;
  uVar32 = (uint)uVar49;
  while (uVar49 != 0) {
    uVar22 = 0;
    for (uVar23 = uVar32; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
      uVar22 = uVar22 + 1;
    }
    lVar45 = (uVar22 + uVar37 & uVar35) * -0x2b0;
    if (lStack_218 == *(longlong *)(lVar34 + -0x2b0 + lVar45)) {
      uStack_128 = (ulonglong)(byte)pauVar53[-1][9];
      pauStack_110 = pauVar53;
      cVar30 = pdb_1409012c0(uStack_1b0 & 0xff,uStack_290);
      cStack_1f8 = pdb_140c44ba0(uStack_128);
      cStack_1f7 = cVar30;
      lVar50 = pdb_141494370(pauVar43,&cStack_1f8);
      if (lVar50 == 0) goto LAB_1408c9f9a;
      puStack_120 = (undefined *)(lVar34 + lVar45);
      uStack_2b8 = *(undefined8 *)(lVar50 + 0x20);
      uStack_2b0 = *(undefined8 *)(lVar50 + 0x28);
      uStack_2a8 = *(undefined8 *)(lVar50 + 0x30);
      uStack_2a0 = *(ulonglong *)(lVar50 + 0x38);
      puStack_338 = puStack_120 + -9;
      cVar30 = pdb_1408ff980();
      pauVar53 = (undefined1 (*) [16])(puStack_120 + -0x2a8);
      uStack_220 = 0;
      pauStack_148 = pauVar53;
      if (((cVar30 != '\0') && (*(uint *)(puStack_120 + -0x50) < 2)) &&
         (0.0 < *(float *)(puStack_120 + -0x14))) {
        uVar35 = pdb_140b54b40(plStack_358,lStack_218);
        if (((((uVar35 & 0xffffffff) == 0) ||
             (uVar37 = uVar35 & 0xffffffff ^ 0xffffffff, *(ulonglong *)(lStack_348 + 0x10) <= uVar37
             )) || ((piVar42 = (int *)(uVar37 * 0x18 + *(longlong *)(lStack_348 + 8)),
                    piVar42[4] != (int)(uVar35 >> 0x20) ||
                    ((*piVar42 == 0 ||
                     (uVar35 = *(ulonglong *)(piVar42 + 2),
                     *(ulonglong *)(lStack_370 + 0x38) <= (uVar35 & 0xffffffff))))))) ||
           ((*(ulonglong *)(*(longlong *)(lStack_370 + 0x28) + (uVar35 >> 6 & 0x3ffffff) * 8) >>
             (uVar35 & 0x3f) & 1) == 0)) {
          pauVar53 = (undefined1 (*) [16])0x0;
        }
        else {
          uVar32 = pdb_140b77b50((ulonglong)(uint)~piVar42[1] * 0x58 +
                                 *(longlong *)
                                  (*(longlong *)
                                    (*(longlong *)(lStack_348 + 0x1a0) + 0x18 +
                                    (uVar35 >> 0x20) * 0x48) + 0x10 +
                                  ~*(ulonglong *)
                                    (*(longlong *)
                                      (*(longlong *)(lStack_348 + 0x1a0) + 0x38 +
                                      (uVar35 >> 0x20) * 0x48) +
                                    *(longlong *)(lStack_370 + 0x110) * 8) * 0x30));
          pauVar53 = (undefined1 (*) [16])(ulonglong)uVar32;
        }
        fStack_24c = (float)pdb_14092ff30(pauStack_148,pauVar53);
        uStack_220 = 1;
      }
      *puStack_3a0 = uStack_2dc;
      uVar38 = pdb_140947f90(lStack_218);
      pauStack_210 = (undefined1 (*) [16])CONCAT71(pauStack_210._1_7_,pauStack_110[-1][8]);
      pauStack_140 = (undefined1 (*) [16])
                     pdb_1408f3750(uStack_398,uStack_1b8,uVar38,pauVar53,pauStack_110[-1][8]);
      uVar32 = (int)uStack_128 - 1;
      if (2 < (byte)uVar32) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14301709f,0x28,&UNK_143017658);
      }
      uStack_14c = *(undefined4 *)pauStack_110[-1];
      uStack_330 = (ulonglong)(uVar32 & 0xff);
      iVar21 = *(int *)(&UNK_143017a08 + uStack_330 * 4);
      uStack_1c4 = uVar32;
      if (*(int *)(puStack_120 + -0x50) == 1) {
        pdb_140c45ec0(&uStack_288,uStack_380,uStack_1b8,&UNK_143017378);
        uVar32 = *(uint *)(puStack_120 + -0x50);
        uVar38 = uStack_288;
        pauVar53 = uStack_280;
      }
      else {
        pauVar53 = pauStack_110 + -5;
        if (1 < (byte)pauStack_110[-3][2]) goto LAB_1408c9ff3;
        lVar34 = *(longlong *)*pauVar53;
        lStack_360 = lVar34;
        uStack_1a8._0_4_ = (float)pdb_14092f860(pauStack_148,uVar32,uStack_1b8);
        uStack_1a8._4_4_ = (float)extraout_XMM0_Da;
        uVar33 = pdb_140dea610(&uStack_1a8);
        lStack_360 = CONCAT44(lStack_360._4_4_,uVar33);
        lStack_368 = lVar34;
        uStack_1a8._0_4_ = (float)pdb_14092f860(pauStack_148);
        uStack_1a8._4_4_ = extraout_XMM0_Da_00;
        uVar33 = pdb_140dea610(&uStack_1a8);
        lStack_368 = CONCAT44(lStack_368._4_4_,uVar33);
        pdb_140dea260(&uStack_1a8,&lStack_360,pauStack_148);
        fVar61 = (float)uStack_1a8;
        fVar73 = (float)uStack_1a0;
        pdb_140dea260(&uStack_1a8,&lStack_368,pauStack_148);
        fVar71 = (float)uStack_1a8;
        fVar75 = (float)uStack_1a0;
        uStack_3d8 = CONCAT44((float)uStack_1a0 * _UNK_142e36f64 + fVar73 * _UNK_142e36f64,
                              (float)uStack_1a8 * _DAT_142e36f60 + fVar61 * _DAT_142e36f60);
        pdb_140df4540(&fStack_240,&uStack_3d8);
        fVar75 = fVar75 - fVar73;
        fVar71 = fVar71 - fVar61;
        fVar61 = _DAT_142e36f28 / SQRT(fVar71 * fVar71 + fVar75 * fVar75);
        plStack_310 = (longlong *)
                      CONCAT44(fVar61 * fVar71,(float)((uint)fVar61 ^ _DAT_142e37820) * fVar75);
        pdb_140df4520(&cStack_1f8,&plStack_310);
        pdb_140de9ab0(&uStack_1a8,&cStack_1f8);
        lStack_278 = CONCAT44(uStack_23c,fStack_240);
        uStack_26c = 0x3f800000;
        uStack_268 = 0x3f800000;
        uStack_264 = 0x3f800000;
        uVar32 = *(uint *)(puStack_120 + -0x50);
        fStack_270 = fStack_238;
        uVar38 = CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8);
        pauVar53 = uStack_1a0;
      }
      if (uVar32 < 2) {
        uStack_288._0_4_ = (float)uVar38;
        uStack_288._4_4_ = (float)((ulonglong)uVar38 >> 0x20);
        uStack_280._0_4_ = SUB84(pauVar53,0);
        uStack_280._4_4_ = (float)((ulonglong)pauVar53 >> 0x20);
        fVar71 = (float)uStack_280 * (float)uStack_280;
        fVar73 = uStack_280._4_4_ * uStack_280._4_4_;
        fVar75 = uStack_288._4_4_ * uStack_288._4_4_ + (float)uStack_288 * (float)uStack_288;
        fVar61 = (float)uStack_280 * _UNK_143010288 +
                 uStack_288._4_4_ * _UNK_143010284 + (float)uStack_288 * _DAT_143010280;
        fVar61 = fVar61 + fVar61;
        uStack_280._4_4_ = uStack_280._4_4_ + uStack_280._4_4_;
        lStack_278 = CONCAT44((float)((ulonglong)lStack_278 >> 0x20) +
                              uStack_280._4_4_ *
                              ((float)uStack_280 * 0.0 - (float)uStack_288 * _DAT_14300bbe0) +
                              fVar61 * uStack_288._4_4_ +
                              (fVar73 - (fVar75 + fVar71)) * _UNK_143010284,
                              (float)lStack_278 +
                              uStack_280._4_4_ *
                              (uStack_288._4_4_ * _DAT_14300bbe0 - (float)uStack_280 * 0.0) +
                              fVar61 * (float)uStack_288 +
                              (fVar73 - (fVar75 + fVar71)) * _DAT_143010280);
        fStack_270 = uStack_280._4_4_ * ((float)uStack_288 * 0.0 - uStack_288._4_4_ * 0.0) +
                     fVar61 * (float)uStack_280 + (fVar73 - (fVar75 + fVar71)) * _UNK_143010288 +
                     fStack_270;
      }
      uStack_288 = uVar38;
      uStack_280 = pauVar53;
      cVar30 = pdb_1409012c0(uStack_1b0 & 0xff,uStack_290);
      cStack_1f8 = pdb_140c44ba0(uStack_128);
      cStack_1f7 = cVar30;
      if (*(longlong *)(pauVar43[1] + 8) == 0) goto LAB_1408c9deb;
      uVar37 = pdb_1413f0300(pauStack_390,&cStack_1f8);
      uStack_248 = uStack_128 & 0xff;
      pauStack_100 = pauStack_140;
      pauVar53 = (undefined1 (*) [16])(&UNK_143017a08 + iVar21);
      lVar34 = *(longlong *)*pauVar43;
      uVar35 = *(ulonglong *)(*pauVar43 + 8);
      bVar54 = (byte)(uVar37 >> 0x39);
      auVar58 = ZEXT216(CONCAT11(bVar54,bVar54));
      auVar58 = pshuflw(auVar58,auVar58,0);
      lVar50 = 0;
      goto LAB_1408c7bd0;
    }
    uVar49 = (ushort)(uVar32 - 1) & (ushort)uVar32;
    uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar49);
  }
  auVar63[0] = -(auVar3[0] == -1);
  auVar63[1] = -(auVar3[1] == -1);
  auVar63[2] = -(auVar3[2] == -1);
  auVar63[3] = -(auVar3[3] == -1);
  auVar63[4] = -(auVar3[4] == -1);
  auVar63[5] = -(auVar3[5] == -1);
  auVar63[6] = -(auVar3[6] == -1);
  auVar63[7] = -(auVar3[7] == -1);
  auVar63[8] = -(auVar3[8] == -1);
  auVar63[9] = -(auVar3[9] == -1);
  auVar63[10] = -(auVar3[10] == -1);
  auVar63[0xb] = -(auVar3[0xb] == -1);
  auVar63[0xc] = -(auVar3[0xc] == -1);
  auVar63[0xd] = -(auVar3[0xd] == -1);
  auVar63[0xe] = -(auVar3[0xe] == -1);
  auVar63[0xf] = -(auVar3[0xf] == -1);
  if ((((((((((((((((SUB161(auVar63 >> 7,0) & 1) != 0 || (SUB161(auVar63 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar63 >> 0x17,0) & 1) != 0) || (SUB161(auVar63 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar63 >> 0x27,0) & 1) != 0) || (SUB161(auVar63 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar63 >> 0x37,0) & 1) != 0) || (SUB161(auVar63 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar63 >> 0x47,0) & 1) != 0) || (SUB161(auVar63 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar63 >> 0x57,0) & 1) != 0) || (SUB161(auVar63 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar63 >> 0x67,0) & 1) != 0) || (SUB161(auVar63 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar63 >> 0x77,0) & 1) != 0) || auVar63[0xf] < '\0') goto LAB_1408c9dcd;
  uVar37 = uVar37 + lVar50 + 0x10;
  lVar50 = lVar50 + 0x10;
  goto LAB_1408c7797;
LAB_1408c7bd0:
  uVar37 = uVar37 & uVar35;
  auVar3 = *(undefined1 (*) [16])(lVar34 + uVar37);
  auVar69[0] = -(auVar3[0] == auVar58[0]);
  auVar69[1] = -(auVar3[1] == auVar58[1]);
  auVar69[2] = -(auVar3[2] == auVar58[2]);
  auVar69[3] = -(auVar3[3] == auVar58[3]);
  auVar69[4] = -(auVar3[4] == auVar58[4]);
  auVar69[5] = -(auVar3[5] == auVar58[5]);
  auVar69[6] = -(auVar3[6] == auVar58[6]);
  auVar69[7] = -(auVar3[7] == auVar58[7]);
  auVar69[8] = -(auVar3[8] == auVar58[0]);
  auVar69[9] = -(auVar3[9] == auVar58[1]);
  auVar69[10] = -(auVar3[10] == auVar58[2]);
  auVar69[0xb] = -(auVar3[0xb] == auVar58[3]);
  auVar69[0xc] = -(auVar3[0xc] == auVar58[4]);
  auVar69[0xd] = -(auVar3[0xd] == auVar58[5]);
  auVar69[0xe] = -(auVar3[0xe] == auVar58[6]);
  auVar69[0xf] = -(auVar3[0xf] == auVar58[7]);
  uVar49 = (ushort)(SUB161(auVar69 >> 7,0) & 1) | (ushort)(SUB161(auVar69 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar69 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar69 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar69 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar69 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar69 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar69 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar69 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar69 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar69 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar69 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar69 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar69 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar69 >> 0x77,0) & 1) << 0xe | (ushort)(auVar69[0xf] >> 7) << 0xf;
  uVar32 = (uint)uVar49;
  if (uVar49 != 0) {
    pauStack_130 = pauVar53;
    if (cStack_1f8 == '\x1a') {
      do {
        uVar22 = 0;
        for (uVar23 = uVar32; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
          uVar22 = uVar22 + 1;
        }
        uVar46 = uVar22 + uVar37 & uVar35;
        if (*(char *)(lVar34 + -0x48 + uVar46 * -0x48) == '\x1a') goto LAB_1408c7c8e;
        uVar49 = (ushort)(uVar32 - 1) & (ushort)uVar32;
        uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar49);
      } while (uVar49 != 0);
    }
    else {
      do {
        uVar22 = 0;
        for (uVar23 = uVar32; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
          uVar22 = uVar22 + 1;
        }
        uVar46 = uVar22 + uVar37 & uVar35;
        cVar30 = *(char *)(lVar34 + -0x48 + uVar46 * -0x48);
        if (((cVar30 != '\x1a') && (cStack_1f8 == cVar30)) &&
           (cStack_1f7 == *(char *)(lVar34 + uVar46 * -0x48 + -0x47))) goto LAB_1408c7c8e;
        uVar49 = (ushort)(uVar32 - 1) & (ushort)uVar32;
        uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar49);
      } while (uVar49 != 0);
    }
  }
  auVar64[0] = -(auVar3[0] == -1);
  auVar64[1] = -(auVar3[1] == -1);
  auVar64[2] = -(auVar3[2] == -1);
  auVar64[3] = -(auVar3[3] == -1);
  auVar64[4] = -(auVar3[4] == -1);
  auVar64[5] = -(auVar3[5] == -1);
  auVar64[6] = -(auVar3[6] == -1);
  auVar64[7] = -(auVar3[7] == -1);
  auVar64[8] = -(auVar3[8] == -1);
  auVar64[9] = -(auVar3[9] == -1);
  auVar64[10] = -(auVar3[10] == -1);
  auVar64[0xb] = -(auVar3[0xb] == -1);
  auVar64[0xc] = -(auVar3[0xc] == -1);
  auVar64[0xd] = -(auVar3[0xd] == -1);
  auVar64[0xe] = -(auVar3[0xe] == -1);
  auVar64[0xf] = -(auVar3[0xf] == -1);
  if ((((((((((((((((SUB161(auVar64 >> 7,0) & 1) != 0 || (SUB161(auVar64 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar64 >> 0x17,0) & 1) != 0) || (SUB161(auVar64 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar64 >> 0x27,0) & 1) != 0) || (SUB161(auVar64 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar64 >> 0x37,0) & 1) != 0) || (SUB161(auVar64 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar64 >> 0x47,0) & 1) != 0) || (SUB161(auVar64 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar64 >> 0x57,0) & 1) != 0) || (SUB161(auVar64 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar64 >> 0x67,0) & 1) != 0) || (SUB161(auVar64 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar64 >> 0x77,0) & 1) != 0) || auVar64[0xf] < '\0') {
LAB_1408c9deb:
    uStack_1a8 = (byte *)&cStack_1f8;
    uStack_1a0._0_4_ = 4.3876266;
    uStack_1a0._4_4_ = 1.4013e-45;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143016f25,&uStack_1a8,&UNK_143016f58);
  }
  uVar37 = uVar37 + lVar50 + 0x10;
  lVar50 = lVar50 + 0x10;
  goto LAB_1408c7bd0;
LAB_1408c7ff4:
  pauVar43 = *(undefined1 (**) [16])(lVar34 + -0x28 + uVar46 * -0x48);
  LOCK();
  lVar34 = *(longlong *)*pauVar43;
  *(longlong *)*pauVar43 = *(longlong *)*pauVar43 + 1;
  UNLOCK();
  if (*(longlong *)*pauVar43 == 0 || SCARRY8(lVar34,1) != *(longlong *)*pauVar43 < 0)
  goto LAB_1408ca03f;
  fStack_240 = SUB84(pauVar43,0);
  uStack_23c = (float)((ulonglong)pauVar43 >> 0x20);
  uStack_2f8 = lStack_278;
  uStack_2f0 = 0;
  fStack_134 = fStack_270;
  auVar57 = SUB1612(ZEXT416(0),0);
  fVar61 = (float)uStack_288;
  fVar71 = uStack_288._4_4_;
  fVar73 = (float)uStack_280;
  fVar75 = uStack_280._4_4_;
  pauStack_208 = pauVar43;
  if (*(uint *)(puStack_120 + -0x50) < 2) {
    uStack_102 = 1;
    pdb_140df4150(&uStack_1a8,&uStack_2b8);
    fVar55 = (float)uStack_1a0 * _DAT_142e378e0 * _DAT_142e36f60;
    fVar59 = (float)uStack_1a0 * _UNK_142e378e4 * _UNK_142e36f64;
    fVar77 = fVar73 * fVar73;
    fVar78 = fVar75 * fVar75;
    fVar79 = fVar71 * fVar71 + fVar61 * fVar61;
    fVar66 = fVar73 * fVar59 + fVar71 * fVar55 + fVar61 * fVar55;
    fVar66 = fVar66 + fVar66;
    fVar60 = fVar75 + fVar75;
    auVar57._0_4_ =
         fVar60 * (fVar71 * fVar59 - fVar55 * fVar73) +
         fVar66 * fVar61 + (fVar78 - (fVar79 + fVar77)) * fVar55;
    auVar57._4_4_ =
         fVar60 * (fVar73 * fVar55 - fVar59 * fVar61) +
         fVar66 * fVar71 + (fVar78 - (fVar79 + fVar77)) * fVar55;
    auVar57._8_4_ =
         fVar60 * (fVar61 * fVar55 - fVar55 * fVar71) +
         fVar66 * fVar73 + (fVar78 - (fVar79 + fVar77)) * fVar59;
  }
  fVar59 = (float)uStack_2f8 + auVar57._0_4_;
  fVar60 = uStack_2f8._4_4_ + auVar57._4_4_;
  fVar55 = auVar57._8_4_ + fStack_134;
  cStack_1f8 = SUB41(fVar59,0);
  cStack_1f7 = (char)((uint)fVar59 >> 8);
  uStack_1f6 = (undefined1)((uint)fVar59 >> 0x10);
  uStack_1f5 = (undefined4)(CONCAT44(fVar60,fVar59) >> 0x18);
  uStack_1f1._1_3_ = SUB43(fVar55,0);
  uStack_1f1 = CONCAT31(uStack_1f1._1_3_,(char)((uint)fVar60 >> 0x18));
  uStack_1ed._0_1_ = (undefined1)((uint)fVar55 >> 0x18);
  uStack_1a8._0_4_ = fVar61;
  uStack_1a8._4_4_ = fVar71;
  uStack_1a0._0_4_ = fVar73;
  uStack_1a0._4_4_ = fVar75;
  uStack_102 = 0;
  puVar40 = &uStack_1a8;
  pdb_1408f3120(pauVar52,plVar41,pauStack_208,&cStack_1f8,puVar40);
  pauVar53 = pauStack_130;
  uVar33 = (undefined4)((ulonglong)puVar40 >> 0x20);
  if (*(longlong *)*pauVar52 != 0 || *(longlong *)(*pauVar52 + 8) != 0) goto LAB_1408c9e96;
  *(undefined8 *)(*pauVar52 + 8) = 0;
  *(undefined8 *)*pauVar52 = 1;
  *(undefined8 *)pauVar52[1] = uStack_288;
  *(undefined1 (**) [16])(pauVar52[1] + 8) = uStack_280;
  *(longlong *)pauVar52[2] = lStack_278;
  *(ulonglong *)(pauVar52[2] + 8) = CONCAT44(uStack_26c,fStack_270);
  *(ulonglong *)pauVar52[3] = CONCAT44(uStack_264,uStack_268);
  *(ulonglong *)(pauVar52[3] + 8) = CONCAT44(uStack_25c,uStack_260);
  pauStack_208 = pauStack_140 + 0xb;
  uStack_1a0._4_4_ = (float)((uint)uStack_1a0._4_4_ & 0xff000000);
  uStack_1a8._0_4_ = (float)((uint)(float)uStack_1a8 & 0xffffff);
  uStack_1a8._4_4_ = 0.0;
  uStack_1a0._0_4_ = 0.0;
  uStack_1ed = 0;
  cStack_1f8 = SUB41((float)uStack_1a8,0);
  cStack_1f7 = (char)((uint)(float)uStack_1a8 >> 8);
  uStack_1f6 = (undefined1)((uint)(float)uStack_1a8 >> 0x10);
  uStack_1f5 = 0;
  uStack_1f1 = 0;
  lVar34 = *(longlong *)pauVar52[0xc];
  if (lVar34 == *(longlong *)pauVar52[0xb]) {
    pdb_142d8ddd0(pauStack_208);
  }
  lVar50 = *(longlong *)(pauStack_100[0xb] + 8);
  lVar45 = lVar34 * 0x170;
  *(undefined8 *)(lVar50 + lVar45) = 0;
  *(undefined8 *)(lVar50 + 0x10 + lVar45) = 0;
  *(undefined8 *)(lVar50 + 0x20 + lVar45) = 0;
  *(undefined8 *)(lVar50 + 0x30 + lVar45) = 0;
  *(undefined4 *)(lVar50 + 0x40 + lVar45) = 0;
  *(undefined4 *)(lVar50 + 0x50 + lVar45) = 0;
  *(undefined4 *)(lVar50 + 0x60 + lVar45) = 0;
  *(undefined4 *)(lVar50 + 0x70 + lVar45) = 2;
  *(undefined1 (**) [16])(lVar50 + 0x90 + lVar45) = pauVar53;
  *(undefined8 *)(lVar50 + 0x98 + lVar45) = 0x1d;
  *(undefined **)(lVar50 + 0xa0 + lVar45) = &UNK_14330dc96;
  *(undefined8 *)(lVar50 + 0xa8 + lVar45) = 0x2b;
  puVar40 = (undefined8 *)(lVar50 + 0xb0 + lVar45);
  *puVar40 = uStack_288;
  puVar40[1] = uStack_280;
  plVar41 = (longlong *)(lVar50 + 0xc0 + lVar45);
  *plVar41 = lStack_278;
  plVar41[1] = CONCAT44(uStack_26c,fStack_270);
  puVar40 = (undefined8 *)(lVar50 + 0xd0 + lVar45);
  *puVar40 = CONCAT44(uStack_264,uStack_268);
  puVar40[1] = CONCAT44(uStack_25c,uStack_260);
  *(undefined4 *)(lVar50 + 0xe0 + lVar45) = 1;
  *(undefined4 *)(lVar50 + 0xe4 + lVar45) = uStack_14c;
  *(undefined4 *)(lVar50 + 0xe8 + lVar45) = 0;
  *(undefined1 *)(lVar50 + 0x105 + lVar45) = 2;
  *(undefined4 *)(lVar50 + 0x108 + lVar45) = 0;
  *(undefined1 *)(lVar50 + 0x15c + lVar45) = 2;
  plVar41 = (longlong *)CONCAT44(uStack_1ed,uStack_1f1);
  *(ulonglong *)(lVar50 + 0x15d + lVar45) =
       CONCAT17((undefined1)uStack_1f1,
                CONCAT43(uStack_1f5,CONCAT12(uStack_1f6,CONCAT11(cStack_1f7,cStack_1f8))));
  *(longlong **)(lVar50 + 0x164 + lVar45) = plVar41;
  *(undefined1 *)(lVar50 + 0x16c + lVar45) = 2;
  *(undefined1 *)(lVar50 + 0x16e + lVar45) = pauStack_210._0_1_;
  *(undefined1 *)(lVar50 + 0x16f + lVar45) = 0;
  *(longlong *)pauStack_100[0xc] = lVar34 + 1;
  if (*(uint *)(puStack_120 + -0x50) < 2) {
    if (2 < (byte)uStack_1c4) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14301709f,0x28,&UNK_1430175f8);
    }
    iVar21 = *(int *)(&UNK_143017a14 + uStack_330 * 4);
    uStack_1a0._4_4_ = (float)((uint)uStack_1a0._4_4_ & 0xff000000);
    uStack_1a8._0_4_ = (float)((uint)(float)uStack_1a8 & 0xffffff);
    uStack_1a8._4_4_ = 0.0;
    uStack_1a0._0_4_ = 0.0;
    puVar39 = (undefined4 *)pdb_1409014f0(pauStack_110[-3] + 8,&UNK_143017400);
    uVar85 = *puVar39;
    uStack_1ed = (undefined4)(CONCAT34(uStack_1a0._4_3_,(float)uStack_1a0) >> 0x18);
    cStack_1f8 = SUB41((float)uStack_1a8,0);
    cStack_1f7 = (char)((uint)(float)uStack_1a8 >> 8);
    uStack_1f6 = (undefined1)((uint)(float)uStack_1a8 >> 0x10);
    uStack_1f5 = (undefined4)(CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8) >> 0x18);
    uStack_1f1._1_3_ = SUB43((float)uStack_1a0,0);
    uStack_1f1._0_1_ = (undefined1)((uint)uStack_1a8._4_4_ >> 0x18);
    lVar34 = *(longlong *)pauStack_100[0xc];
    if (lVar34 == *(longlong *)pauStack_100[0xb]) {
      pdb_142d8ddd0(pauStack_208);
    }
    lVar50 = *(longlong *)(pauStack_100[0xb] + 8);
    lVar45 = lVar34 * 0x170;
    *(undefined8 *)(lVar50 + lVar45) = 0;
    *(undefined8 *)(lVar50 + 0x10 + lVar45) = 1;
    *(ulonglong *)(lVar50 + 0x18 + lVar45) = uStack_248 * 1000 + uStack_1b8;
    fVar59 = fVar73 * fVar73;
    fVar66 = fVar75 * fVar75;
    fVar77 = fVar71 * fVar71 + fVar61 * fVar61;
    fVar55 = (fVar66 - (fVar77 + fVar59)) * _DAT_143016bc0;
    fVar60 = (fVar66 - (fVar77 + fVar59)) * _UNK_143016bc4;
    fVar66 = (fVar66 - (fVar77 + fVar59)) * _UNK_143016bc8;
    fVar78 = fVar73 * _UNK_143016bc8 + fVar71 * _UNK_143016bc4 + fVar61 * _DAT_143016bc0;
    fVar78 = fVar78 + fVar78;
    fVar59 = fVar61 * _DAT_142e3c650;
    fVar79 = fVar71 * _DAT_142e3c650;
    fVar77 = fVar75 + fVar75;
    *(undefined8 *)(lVar50 + 0x20 + lVar45) = 0;
    *(undefined8 *)(lVar50 + 0x30 + lVar45) = 0;
    *(undefined4 *)(lVar50 + 0x40 + lVar45) = 0;
    *(undefined4 *)(lVar50 + 0x50 + lVar45) = 0;
    *(undefined4 *)(lVar50 + 0x60 + lVar45) = 0;
    *(undefined4 *)(lVar50 + 0x70 + lVar45) = 2;
    *(undefined **)(lVar50 + 0x90 + lVar45) = &UNK_143017a14 + iVar21;
    *(undefined8 *)(lVar50 + 0x98 + lVar45) = 0x23;
    *(undefined **)(lVar50 + 0xa0 + lVar45) = &UNK_14330db43;
    *(undefined8 *)(lVar50 + 0xa8 + lVar45) = 0x31;
    pfVar2 = (float *)(lVar50 + 0xb0 + lVar45);
    *pfVar2 = fVar61;
    pfVar2[1] = fVar71;
    pfVar2[2] = fVar73;
    pfVar2[3] = fVar75;
    *(ulonglong *)(lVar50 + 0xc0 + lVar45) =
         CONCAT44(uStack_2f8._4_4_ - (fVar77 * (fVar73 * 0.0 - fVar59) + fVar78 * fVar71 + fVar60),
                  (float)uStack_2f8 - (fVar77 * (fVar79 - fVar73 * 0.0) + fVar78 * fVar61 + fVar55))
    ;
    *(float *)(lVar50 + 200 + lVar45) =
         fStack_134 - (fVar77 * (fVar61 * 0.0 - fVar71 * 0.0) + fVar78 * fVar73 + fVar66);
    puVar40 = (undefined8 *)(lVar50 + 0xcc + lVar45);
    *puVar40 = CONCAT44(uStack_268,uStack_26c);
    puVar40[1] = CONCAT44(uStack_260,uStack_264);
    *(undefined4 *)(lVar50 + 0xdc + lVar45) = uStack_25c;
    *(undefined4 *)(lVar50 + 0xe0 + lVar45) = 1;
    *(undefined4 *)(lVar50 + 0xe4 + lVar45) = uVar85;
    *(undefined4 *)(lVar50 + 0xe8 + lVar45) = 0;
    *(undefined1 *)(lVar50 + 0x105 + lVar45) = 2;
    *(undefined4 *)(lVar50 + 0x108 + lVar45) = 0;
    *(undefined1 *)(lVar50 + 0x15c + lVar45) = 2;
    plVar41 = (longlong *)CONCAT44(uStack_1ed,uStack_1f1);
    *(longlong **)(lVar50 + 0x164 + lVar45) = plVar41;
    *(ulonglong *)(lVar50 + 0x15d + lVar45) =
         CONCAT17((undefined1)uStack_1f1,
                  CONCAT43(uStack_1f5,CONCAT12(uStack_1f6,CONCAT11(cStack_1f7,cStack_1f8))));
    *(undefined1 *)(lVar50 + 0x16c + lVar45) = 2;
    *(undefined1 *)(lVar50 + 0x16e + lVar45) = pauStack_210._0_1_;
    *(undefined1 *)(lVar50 + 0x16f + lVar45) = 0;
    pauVar53 = (undefined1 (*) [16])(lVar34 + 1);
    *(undefined1 (**) [16])pauStack_100[0xc] = pauVar53;
    pauStack_130 = (undefined1 (*) [16])CONCAT44(pauStack_130._4_4_,(float)uStack_2a8);
    fVar55 = uStack_2a0._4_4_ - (float)uStack_2a0;
    if (*(int *)(puStack_120 + -0x50) == 0) {
      if ((byte)uStack_128 == '\x01') {
        pauStack_130 = (undefined1 (*) [16])
                       CONCAT44(pauStack_130._4_4_,(float)uStack_2a8 + _DAT_142f684a8);
      }
      else if ((int)uStack_248 == 2) {
        pauStack_130 = (undefined1 (*) [16])
                       CONCAT44(pauStack_130._4_4_,(float)uStack_2a8 + _DAT_142e42360);
      }
      else {
        pauStack_130 = (undefined1 (*) [16])
                       CONCAT44(pauStack_130._4_4_,(float)uStack_2a8 + _DAT_142f95158);
      }
    }
  }
  else {
    pauStack_130 = (undefined1 (*) [16])CONCAT44(pauStack_130._4_4_,(float)uStack_2a8);
    fVar55 = uStack_2a0._4_4_ - (float)uStack_2a0;
  }
  puVar40 = (undefined8 *)pdb_140901130(pauStack_110 + -6,&UNK_143017418);
  uVar38 = *puVar40;
  lVar34 = *(longlong *)(pauStack_100[0xd] + 8);
  if (lVar34 == *(longlong *)(pauStack_100[0xc] + 8)) {
    pdb_142d8d5c0(pauStack_140[0xc] + 8);
  }
  lVar50 = *(longlong *)pauStack_100[0xd];
  *(undefined8 *)(lVar50 + lVar34 * 0x14) = uVar38;
  *(undefined4 *)(lVar50 + 8 + lVar34 * 0x14) = pauStack_130._0_4_;
  *(float *)(lVar50 + 0xc + lVar34 * 0x14) = fVar55;
  *(undefined1 *)(lVar50 + 0x10 + lVar34 * 0x14) = 0;
  *(longlong *)(pauStack_100[0xd] + 8) = lVar34 + 1;
  cVar30 = pdb_1408ff980(puStack_338);
  if (cVar30 != '\0') {
    if (2 < (byte)uStack_1c4) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc83b0(&UNK_14301709f,0x28,&UNK_1430175e0);
    }
    puVar39 = (undefined4 *)pdb_140901130(pauStack_110 + -6,&UNK_143017430);
    uVar85 = *puVar39;
    uVar56 = puVar39[1];
    fVar59 = fVar71 * fVar71 + fVar61 * fVar61;
    fVar66 = (fVar75 * fVar75 - (fVar59 + fVar73 * fVar73)) * _DAT_142e378f0;
    fVar77 = (fVar75 * fVar75 - (fVar59 + fVar73 * fVar73)) * _UNK_142e378f8;
    fVar78 = fVar61 * _DAT_142e378f0;
    fVar83 = fVar71 * _UNK_142e378f4;
    fVar79 = fVar73 * _UNK_142e378f8;
    fVar59 = fVar71 * _DAT_142e37950;
    fVar60 = fVar61 * _UNK_142e37958;
    uVar32 = *(uint *)(puStack_120 + -0x50);
    lVar34 = *(longlong *)pauStack_100[0x12];
    if (lVar34 == *(longlong *)pauStack_100[0x11]) {
      pdb_142d8a7a0(pauStack_140 + 0x11);
    }
    fVar79 = fVar79 + fVar83 + fVar78;
    fVar79 = fVar79 + fVar79;
    lVar50 = *(longlong *)(pauStack_100[0x11] + 8);
    lVar45 = lVar34 * 0x20;
    puVar39 = (undefined4 *)(lVar50 + lVar45);
    *puVar39 = uVar85;
    puVar39[1] = uVar56;
    puVar39[2] = (fVar75 + fVar75) * (fVar59 - fVar73 * 0.0) + fVar66 + fVar79 * fVar61;
    puVar39[3] = (fVar75 + fVar75) * (fVar60 - fVar71 * 0.0) + fVar77 + fVar79 * fVar73;
    plVar41 = &lStack_278;
    *(longlong *)(lVar50 + 0x10 + lVar45) = lStack_278;
    *(float *)(lVar50 + 0x18 + lVar45) = fStack_270;
    *(char *)(lVar50 + 0x1c + lVar45) = (char)uStack_1c4;
    *(bool *)(lVar50 + 0x1d + lVar45) = 1 < uVar32;
    pauVar53 = (undefined1 (*) [16])(lVar34 + 1);
    *(undefined1 (**) [16])pauStack_100[0x12] = pauVar53;
  }
  if ((char)uStack_1b0 != '\x01') {
    pdb_140df4150(auStack_404,&uStack_2b8);
    pdb_140901130(pauStack_110 + -6,&UNK_143017448);
    pdb_140c42910(uStack_248);
    in_stack_fffffffffffffba0 = in_stack_fffffffffffffba0 & 0xffffffffffffff00;
    pdb_140c428a0(&uStack_1a8);
    lVar34 = *(longlong *)pauStack_100[0xf];
    if (lVar34 == *(longlong *)pauStack_100[0xe]) {
      pdb_142d8a7a0(pauStack_140 + 0xe);
    }
    lVar50 = *(longlong *)(pauStack_100[0xe] + 8);
    plVar1 = (longlong *)(lVar50 + 0x10 + lVar34 * 0x20);
    *plVar1 = (longlong)uStack_198;
    plVar1[1] = (longlong)uStack_190;
    puVar40 = (undefined8 *)(lVar50 + lVar34 * 0x20);
    *puVar40 = CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8);
    puVar40[1] = CONCAT44(uStack_1a0._4_4_,(float)uStack_1a0);
    *(longlong *)pauStack_100[0xf] = lVar34 + 1;
  }
  uStack_328 = (ulonglong)*(uint *)(pauStack_110[-1] + 4);
  unaff_R12 = (byte *)pdb_140dedfe0();
  lVar34 = pdb_140901130(pauStack_110 + -6,&UNK_143017460);
  uVar85 = (undefined4)(in_stack_fffffffffffffba0 >> 0x20);
  fVar59 = (float)uStack_2a8;
  pauVar43 = pauVar44;
  if ((byte)uStack_128 == '\x02') {
    unaff_R12 = unaff_R12 + -0x5f89e29b87429bd1;
    auVar58._8_8_ = 0;
    auVar58._0_8_ = (ulonglong)unaff_R12 ^ 0xe7037ed1a0b428db;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = unaff_R12;
    uStack_21c = (uint)CONCAT71((int7)((ulonglong)plVar41 >> 8),
                                (*(float *)(lVar34 + 4) + (float)uStack_2a0 <= fStack_24c &
                                 (byte)uStack_220 ^ 1) &
                                ((byte)(SUB168(auVar58 * auVar3,8) >> 0x1f) ^
                                (byte)(SUB168(auVar58 * auVar3,0) >> 0x1f)));
    if ((char)uStack_1b0 != '\x01') goto LAB_1408c89e8;
LAB_1408c8bea:
    if (*(uint *)(puStack_120 + -0x50) < 2) {
      uStack_1e0 = uStack_2a0;
      cStack_1f8 = (char)uStack_2b8;
      cStack_1f7 = (char)((ulonglong)uStack_2b8 >> 8);
      uStack_1f6 = (undefined1)((ulonglong)uStack_2b8 >> 0x10);
      uStack_1f5 = (undefined4)((ulonglong)uStack_2b8 >> 0x18);
      uStack_1f1._0_1_ = (undefined1)((ulonglong)uStack_2b8 >> 0x38);
      uStack_1f1._1_3_ = (undefined3)uStack_2b0;
      uStack_1ed = (undefined4)((ulonglong)uStack_2b0 >> 0x18);
      uStack_1e9 = (undefined1)((ulonglong)uStack_2b0 >> 0x38);
      uStack_1e8 = CONCAT44(0x3f2147ae,(float)uStack_2a8);
      pdb_140901130(pauStack_200,&UNK_143017478);
      pdb_140df4150(&uStack_1a8,&cStack_1f8);
      pdb_140c42910(uStack_248);
      pdb_140c428a0(&uStack_1a8);
      lVar34 = *(longlong *)pauStack_100[0xf];
      if (lVar34 == *(longlong *)pauStack_100[0xe]) {
        pdb_142d8a7a0(pauStack_140 + 0xe);
      }
      lVar50 = *(longlong *)(pauStack_100[0xe] + 8);
      plVar41 = (longlong *)(lVar50 + 0x10 + lVar34 * 0x20);
      *plVar41 = (longlong)uStack_198;
      plVar41[1] = (longlong)uStack_190;
      puVar40 = (undefined8 *)(lVar50 + lVar34 * 0x20);
      *puVar40 = CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8);
      puVar40[1] = CONCAT44(uStack_1a0._4_4_,(float)uStack_1a0);
      *(longlong *)pauStack_100[0xf] = lVar34 + 1;
      fVar60 = fVar73 * fVar73;
      fVar66 = fVar75 * fVar75;
      fVar77 = fVar71 * fVar71 + fVar61 * fVar61;
      fVar59 = fVar73 * _UNK_142e378f8 + fVar71 * _UNK_142e378f4 + fVar61 * _DAT_142e378f0;
      fVar59 = fVar59 + fVar59;
      fVar83 = fVar75 + fVar75;
      fVar78 = fVar83 * (fVar71 * _DAT_142e36f28 - fVar73 * 0.0) +
               fVar59 * fVar61 + (fVar66 - (fVar77 + fVar60)) * _DAT_142e378f0;
      fVar79 = fVar83 * (fVar73 * 0.0 - fVar61 * _DAT_142e36f28) +
               fVar59 * fVar71 + (fVar66 - (fVar77 + fVar60)) * _UNK_142e378f4;
      fVar60 = fVar83 * (fVar61 * 0.0 - fVar71 * 0.0) +
               fVar59 * fVar73 + (fVar66 - (fVar77 + fVar60)) * _UNK_142e378f8;
      fVar59 = uStack_1e8._4_4_ + _DAT_142e36f50 + _DAT_142f684a8;
      fStack_3e0 = fVar60 * fVar59 * _DAT_142e36f50 + fStack_134;
      uStack_3e8 = CONCAT44(fVar59 * fVar79 * _UNK_142e36f64 + uStack_2f8._4_4_,
                            fVar59 * fVar78 * _DAT_142e36f60 + (float)uStack_2f8);
      uVar56 = *(undefined4 *)(puStack_120 + -0x34);
      pdb_140df4150(&uStack_1a8,&cStack_1f8);
      fStack_238 = (float)uStack_1a0 + _DAT_142e36f50;
      fStack_240 = (float)uStack_1a8 + _DAT_142e377f0 + _DAT_142f6a630;
      uStack_23c = uStack_1a8._4_4_ + 0.0 + _UNK_142f6a634;
      in_stack_fffffffffffffba0 = CONCAT44(uVar85,fVar60);
      uVar38 = CONCAT44(uVar33,fVar78);
      pdb_140c17790(&uStack_1a8,uVar56,&uStack_3e8,&fStack_240,uVar38,in_stack_fffffffffffffba0);
      uVar33 = (undefined4)((ulonglong)uVar38 >> 0x20);
      pauVar53 = pauStack_140 + 0xf;
      lVar34 = *(longlong *)(pauStack_100[0x10] + 8);
      if (lVar34 == *(longlong *)(pauStack_100[0xf] + 8)) {
        pdb_142d8d630(*pauVar53 + 8);
      }
      uVar85 = (undefined4)(in_stack_fffffffffffffba0 >> 0x20);
      lVar50 = *(longlong *)pauStack_100[0x10];
      lVar45 = lVar34 * 0x30;
      plVar41 = (longlong *)(lVar50 + 0x20 + lVar45);
      *plVar41 = lStack_188;
      plVar41[1] = (longlong)pauStack_180;
      plVar41 = (longlong *)(lVar50 + 0x10 + lVar45);
      *plVar41 = (longlong)uStack_198;
      plVar41[1] = (longlong)uStack_190;
      *(undefined8 *)(lVar50 + lVar45) = CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8);
      ((undefined8 *)(lVar50 + lVar45))[1] = CONCAT44(uStack_1a0._4_4_,(float)uStack_1a0);
      *(longlong *)(pauStack_100[0x10] + 8) = lVar34 + 1;
      if ((uStack_21c & 1) != 0) {
        pdb_140df4150(&fStack_31c,&cStack_1f8);
        fVar66 = fStack_31c + _DAT_142e3783c;
        uStack_314 = 0x3f000000;
        fStack_31c = fVar66;
        pdb_140df4150(&uStack_1a8,&cStack_1f8);
        fVar59 = (float)uStack_1a0 + _DAT_142e36f50;
        fStack_3f0 = fVar60 * fVar59 * _DAT_142e36f50 + fStack_134;
        uStack_3f8 = CONCAT44(fVar79 * fVar59 * _UNK_142e36f64 + uStack_2f8._4_4_,
                              fVar78 * fVar59 * _DAT_142e36f60 + (float)uStack_2f8);
        uStack_23c = fStack_318 + _DAT_142f60fec;
        fStack_238 = 0.5;
        in_stack_fffffffffffffba0 = CONCAT44(uVar85,fVar60);
        fStack_240 = fVar66;
        pdb_140c17790(&uStack_1a8,*(undefined4 *)(puStack_120 + -0x34),&uStack_3f8,&fStack_240,
                      CONCAT44(uVar33,fVar78),in_stack_fffffffffffffba0);
        lVar34 = *(longlong *)(pauStack_100[0x10] + 8);
        if (lVar34 == *(longlong *)(pauStack_100[0xf] + 8)) {
          pdb_142d8d630(*pauVar53 + 8);
        }
        lVar50 = *(longlong *)pauStack_100[0x10];
        lVar45 = lVar34 * 0x30;
        plVar41 = (longlong *)(lVar50 + 0x20 + lVar45);
        *plVar41 = lStack_188;
        plVar41[1] = (longlong)pauStack_180;
        plVar41 = (longlong *)(lVar50 + 0x10 + lVar45);
        *plVar41 = (longlong)uStack_198;
        plVar41[1] = (longlong)uStack_190;
        *(undefined8 *)(lVar50 + lVar45) = CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8);
        ((undefined8 *)(lVar50 + lVar45))[1] = CONCAT44(uStack_1a0._4_4_,(float)uStack_1a0);
        *(longlong *)(pauStack_100[0x10] + 8) = lVar34 + 1;
      }
      if (2 < (byte)uStack_1c4) {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_14301709f,0x28,&UNK_143017520);
      }
      iVar21 = *(int *)(&UNK_143017a20 + uStack_330 * 4);
      uStack_1a0._4_4_ = (float)((uint)uStack_1a0._4_4_ & 0xff000000);
      uStack_1a8._0_4_ = (float)((uint)(float)uStack_1a8 & 0xffffff);
      uStack_1a8._4_4_ = 0.0;
      uStack_1a0._0_4_ = 0.0;
      fStack_238 = 0.0;
      uStack_234 = uStack_234 & 0xff000000;
      fStack_240 = (float)uStack_1a8;
      uStack_23c = 0.0;
      lVar34 = *(longlong *)pauStack_100[0xc];
      if (lVar34 == *(longlong *)pauStack_100[0xb]) {
        pdb_142d8ddd0(pauStack_208);
      }
      pauVar53 = (undefined1 (*) [16])(&UNK_143017a20 + iVar21);
      lVar50 = *(longlong *)(pauStack_100[0xb] + 8);
      lVar45 = lVar34 * 0x170;
      *(undefined8 *)(lVar50 + lVar45) = 0;
      *(undefined8 *)(lVar50 + 0x10 + lVar45) = 0;
      *(undefined8 *)(lVar50 + 0x20 + lVar45) = 0;
      *(undefined8 *)(lVar50 + 0x30 + lVar45) = 0;
      *(undefined4 *)(lVar50 + 0x40 + lVar45) = 0;
      *(undefined4 *)(lVar50 + 0x50 + lVar45) = 0;
      *(undefined4 *)(lVar50 + 0x60 + lVar45) = 0;
      *(undefined4 *)(lVar50 + 0x70 + lVar45) = 2;
      *(undefined1 (**) [16])(lVar50 + 0x90 + lVar45) = pauVar53;
      *(undefined8 *)(lVar50 + 0x98 + lVar45) = 0x2e;
      *(undefined **)(lVar50 + 0xa0 + lVar45) = &UNK_14330dc96;
      *(undefined8 *)(lVar50 + 0xa8 + lVar45) = 0x2b;
      puVar40 = (undefined8 *)(lVar50 + 0xb0 + lVar45);
      *puVar40 = uStack_288;
      puVar40[1] = uStack_280;
      plVar41 = (longlong *)(lVar50 + 0xc0 + lVar45);
      *plVar41 = lStack_278;
      plVar41[1] = CONCAT44(uStack_26c,fStack_270);
      puVar40 = (undefined8 *)(lVar50 + 0xd0 + lVar45);
      *puVar40 = CONCAT44(uStack_264,uStack_268);
      puVar40[1] = CONCAT44(uStack_25c,uStack_260);
      *(undefined4 *)(lVar50 + 0xe0 + lVar45) = 1;
      *(undefined4 *)(lVar50 + 0xe4 + lVar45) = uStack_14c;
      *(undefined4 *)(lVar50 + 0xe8 + lVar45) = 0;
      *(undefined1 *)(lVar50 + 0x105 + lVar45) = 2;
      *(undefined4 *)(lVar50 + 0x108 + lVar45) = 0;
      *(undefined1 *)(lVar50 + 0x15c + lVar45) = 2;
      *(ulonglong *)(lVar50 + 0x15d + lVar45) = CONCAT44(uStack_23c,fStack_240);
      *(ulonglong *)(lVar50 + 0x164 + lVar45) =
           CONCAT35((undefined3)uStack_234,CONCAT41(fStack_238,uStack_23c._3_1_));
      *(undefined1 *)(lVar50 + 0x16c + lVar45) = 2;
      *(undefined1 *)(lVar50 + 0x16e + lVar45) = pauStack_210._0_1_;
      *(undefined1 *)(lVar50 + 0x16f + lVar45) = 0;
      *(longlong *)pauStack_100[0xc] = lVar34 + 1;
      goto LAB_1408c91e2;
    }
  }
  else {
    uStack_21c = 0;
    if ((char)uStack_1b0 == '\x01') goto LAB_1408c8bea;
LAB_1408c89e8:
    if (pauStack_110[-1][9] != '\x03') {
      if ((byte)uStack_128 == '\0') {
                    /* WARNING: Subroutine does not return */
        pdb_142dc83b0(&UNK_143316ee7,0x23,&UNK_143316f38);
      }
      lVar34 = pdb_140901130(pauStack_200,&UNK_143316f50);
      fVar60 = *(float *)(lVar34 + 4);
      uVar33 = pdb_14092f860(pauStack_148);
      fVar66 = fVar59 * _DAT_142e36f38;
      uStack_1a8._0_4_ = (float)uVar33;
      uStack_1a8._4_4_ = (float)extraout_XMM0_Da_01;
      uVar56 = pdb_140dea6c0(&uStack_1a8);
      uStack_1a0 = (undefined1 (*) [16])(uStack_248 + 1);
      uStack_1a8._0_4_ = 0.0;
      uStack_1a8._4_4_ = 0.0;
      uStack_198 = (undefined1 (*) [16])CONCAT44(extraout_XMM0_Da_01,uVar33);
      uStack_190 = (code *)CONCAT44(fVar66 * 0.0 + fVar60,uVar56);
      lStack_188 = CONCAT44(lStack_188._4_4_,fVar59 / (float)(int)uStack_248);
      pauStack_180 = pauStack_148;
      uStack_178 = 0;
      pdb_1414997f0(&cStack_1f8,&uStack_1a8);
      lVar34 = uStack_1e8;
      pauStack_110 = (undefined1 (*) [16])CONCAT17(uStack_1e9,CONCAT43(uStack_1ed,uStack_1f1._1_3_))
      ;
      pdb_1408ff980(puStack_338);
      in_stack_fffffffffffffba0 = CONCAT44(uVar85,uStack_14c);
      pdb_1408c6840(uStack_1b8,pauStack_200,pauStack_110,lVar34,(ulonglong)pauStack_210 & 0xff,
                    in_stack_fffffffffffffba0,pauStack_100,&uStack_3c8);
      lVar34 = CONCAT17((undefined1)uStack_1f1,
                        CONCAT43(uStack_1f5,CONCAT12(uStack_1f6,CONCAT11(cStack_1f7,cStack_1f8))));
      if (lVar34 != 0) {
        pub_1406abac0((byte *)pauStack_110,lVar34 * 0x30,0x10);
      }
    }
LAB_1408c91e2:
    if (*(uint *)(puStack_120 + -0x50) < 2) goto LAB_1408c95cd;
  }
  uStack_190 = (code *)CONCAT44(uStack_26c,fStack_270);
  lStack_188 = CONCAT44(uStack_264,uStack_268);
  pauStack_180 = (undefined1 (*) [16])CONCAT44(uStack_25c,uStack_260);
  uStack_198 = (undefined1 (*) [16])lStack_278;
  uStack_1a8._0_4_ = (float)uStack_288;
  uStack_1a8._4_4_ = (float)((ulonglong)uStack_288 >> 0x20);
  uStack_1a0._0_4_ = SUB84(uStack_280,0);
  uStack_1a0._4_4_ = (float)((ulonglong)uStack_280 >> 0x20);
  pdb_1408c7060(&cStack_1f8,uStack_128,uStack_1b0 & 0xff,&uStack_1a8,uStack_350);
  fVar66 = _UNK_143016c08;
  fVar60 = _UNK_143016c04;
  fVar59 = _DAT_143016c00;
  pauStack_200 = (undefined1 (*) [16])
                 CONCAT17((undefined1)uStack_1f1,
                          CONCAT43(uStack_1f5,CONCAT12(uStack_1f6,CONCAT11(cStack_1f7,cStack_1f8))))
  ;
  pauStack_148 = (undefined1 (*) [16])CONCAT17(uStack_1e9,CONCAT43(uStack_1ed,uStack_1f1._1_3_));
  fVar77 = (float)_DAT_143016be0;
  uVar35 = (ulonglong)_DAT_143016be0 >> 0x20;
  if (uStack_1e8 != 0) {
    pauStack_110 = pauStack_148 + uStack_1e8 * 3;
    pbVar51 = unaff_R12;
    pauVar53 = pauStack_148;
    do {
      fVar78 = *(float *)*pauVar53;
      fVar79 = *(float *)(*pauVar53 + 4);
      fVar83 = *(float *)(*pauVar53 + 8);
      fVar81 = *(float *)(*pauVar53 + 0xc);
      uVar38 = *(undefined8 *)pauVar53[1];
      unaff_R12 = pbVar51 + -0x5f89e29b87429bd1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulonglong)unaff_R12 ^ 0xe7037ed1a0b428db;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = unaff_R12;
      uVar37 = SUB168(auVar6 * auVar15,8) ^ SUB168(auVar6 * auVar15,0);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar37;
      lVar34 = SUB168(auVar7 * ZEXT816(3),8);
      if (uVar37 == 0) {
        pbVar51 = pbVar51 + 0x40ec3ac8f17ac85e;
        do {
          unaff_R12 = unaff_R12 + -0x5f89e29b87429bd1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulonglong)pbVar51 ^ 0xe7037ed1a0b428db;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = pbVar51;
          pbVar51 = pbVar51 + -0x5f89e29b87429bd1;
          uVar37 = SUB168(auVar8 * auVar16,8) ^ SUB168(auVar8 * auVar16,0);
        } while (uVar37 == 0);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar37;
        lVar34 = SUB168(auVar9 * ZEXT816(3),8);
      }
      fVar72 = fVar83 * fVar83;
      fVar74 = fVar81 * fVar81;
      fVar80 = fVar79 * fVar79 + fVar78 * fVar78;
      fVar76 = fVar83 * fVar26 + fVar79 * fVar25 + fVar78 * fVar24;
      fVar76 = fVar76 + fVar76;
      fVar84 = fVar81 + fVar81;
      fVar82 = *(float *)(pauVar53[1] + 8);
      iVar21 = *(int *)(&UNK_143017a2c + lVar34 * 4);
      uStack_1a8._0_4_ = (float)*(undefined8 *)(pauVar53[1] + 0xc);
      uStack_1a8._4_4_ = (float)((ulonglong)*(undefined8 *)(pauVar53[1] + 0xc) >> 0x20);
      uStack_1a0._0_4_ = (float)*(undefined8 *)(pauVar53[2] + 4);
      uStack_1a0._4_4_ = (float)((ulonglong)*(undefined8 *)(pauVar53[2] + 4) >> 0x20);
      uStack_198 = (undefined1 (*) [16])
                   CONCAT44(uStack_198._4_4_,*(undefined4 *)(pauVar53[2] + 0xc));
      uStack_1ed = 0;
      uStack_1f5 = 0;
      uStack_1f1 = 0;
      fStack_238 = 0.0;
      uStack_234 = uStack_234 & 0xff000000;
      fStack_240 = (float)(uint)CONCAT12(uStack_1f6,CONCAT11(cStack_1f7,cStack_1f8));
      uStack_23c = 0.0;
      lVar34 = *(longlong *)pauStack_100[0xc];
      if (lVar34 == *(longlong *)pauStack_100[0xb]) {
        pdb_142d8ddd0(pauStack_208);
      }
      pauVar53 = pauVar53 + 3;
      lVar50 = *(longlong *)(pauStack_100[0xb] + 8);
      lVar45 = lVar34 * 0x170;
      *(undefined8 *)(lVar50 + lVar45) = 0;
      *(undefined8 *)(lVar50 + 0x10 + lVar45) = 0;
      *(undefined8 *)(lVar50 + 0x20 + lVar45) = 0;
      *(undefined8 *)(lVar50 + 0x30 + lVar45) = 0;
      *(undefined4 *)(lVar50 + 0x40 + lVar45) = 0;
      *(undefined4 *)(lVar50 + 0x50 + lVar45) = 0;
      *(undefined4 *)(lVar50 + 0x60 + lVar45) = 0;
      *(undefined4 *)(lVar50 + 0x70 + lVar45) = 2;
      *(undefined **)(lVar50 + 0x90 + lVar45) = &UNK_143017a2c + iVar21;
      *(undefined8 *)(lVar50 + 0x98 + lVar45) = 0x2c;
      *(undefined **)(lVar50 + 0xa0 + lVar45) = &UNK_14330daf5;
      *(undefined8 *)(lVar50 + 0xa8 + lVar45) = 0x16;
      pfVar2 = (float *)(lVar50 + 0xb0 + lVar45);
      *pfVar2 = fVar78;
      pfVar2[1] = fVar79;
      pfVar2[2] = fVar83;
      pfVar2[3] = fVar81;
      *(ulonglong *)(lVar50 + 0xc0 + lVar45) =
           CONCAT44((float)((ulonglong)uVar38 >> 0x20) + (float)uVar35 +
                    fVar84 * (fVar83 * fVar60 - fVar78 * fVar28) +
                    fVar76 * fVar79 + (fVar74 - (fVar80 + fVar72)) * fVar25,
                    (float)uVar38 + fVar77 +
                    fVar84 * (fVar79 * fVar59 - fVar83 * fVar27) +
                    fVar76 * fVar78 + (fVar74 - (fVar80 + fVar72)) * fVar24);
      *(float *)(lVar50 + 200 + lVar45) =
           fVar84 * (fVar78 * fVar66 - fVar79 * fVar29) +
           fVar76 * fVar83 + (fVar74 - (fVar80 + fVar72)) * fVar26 + fVar82;
      puVar40 = (undefined8 *)(lVar50 + 0xcc + lVar45);
      *puVar40 = CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8);
      puVar40[1] = CONCAT44(uStack_1a0._4_4_,(float)uStack_1a0);
      *(undefined4 *)(lVar50 + 0xdc + lVar45) = (undefined4)uStack_198;
      *(undefined4 *)(lVar50 + 0xe0 + lVar45) = 0;
      *(undefined4 *)(lVar50 + 0xe8 + lVar45) = 0;
      *(undefined1 *)(lVar50 + 0x105 + lVar45) = 2;
      *(undefined4 *)(lVar50 + 0x108 + lVar45) = 0;
      *(undefined1 *)(lVar50 + 0x15c + lVar45) = 2;
      *(ulonglong *)(lVar50 + 0x164 + lVar45) =
           CONCAT35((undefined3)uStack_234,CONCAT41(fStack_238,uStack_23c._3_1_));
      *(ulonglong *)(lVar50 + 0x15d + lVar45) = CONCAT44(uStack_23c,fStack_240);
      *(undefined1 *)(lVar50 + 0x16c + lVar45) = 2;
      *(undefined1 *)(lVar50 + 0x16e + lVar45) = pauStack_210._0_1_;
      *(undefined1 *)(lVar50 + 0x16f + lVar45) = 0;
      *(longlong *)pauStack_100[0xc] = lVar34 + 1;
      pbVar51 = unaff_R12;
      pauVar43 = pauStack_2c8;
    } while (pauVar53 != pauStack_110);
  }
  if (pauStack_200 != (undefined1 (*) [16])0x0) {
    pub_1406abac0((byte *)pauStack_148,(longlong)pauStack_200 * 0x30,0x10);
  }
  if (1 < *(uint *)(puStack_120 + -0x50)) goto LAB_1408c75f6;
LAB_1408c95cd:
  lVar34 = pdb_140dedfe0(uStack_328);
  if (((byte)uStack_128 < 3) && (((int)uStack_328 * 0x22 + 0x398e1U) % 3 == 0)) {
    pdb_14007ee60();
    unaff_R12 = pub_1406abab0(0x50,0x10);
    pauVar53 = pauStack_100;
    uVar33 = (undefined4)uStack_1b8;
    if (unaff_R12 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc7e11(0x10,0x50);
    }
    *(ulonglong *)(unaff_R12 + 0x20) = CONCAT44(uStack_264,uStack_268);
    *(ulonglong *)(unaff_R12 + 0x28) = CONCAT44(uStack_25c,uStack_260);
    *(longlong *)(unaff_R12 + 0x10) = lStack_278;
    *(ulonglong *)(unaff_R12 + 0x18) = CONCAT44(uStack_26c,fStack_270);
    *(undefined8 *)unaff_R12 = uStack_288;
    *(undefined1 (**) [16])(unaff_R12 + 8) = uStack_280;
    *(longlong *)(unaff_R12 + 0x30) = lStack_218;
    *(undefined4 *)(unaff_R12 + 0x38) = pauStack_130._0_4_;
    *(float *)(unaff_R12 + 0x3c) = fVar55;
    *(undefined4 *)(unaff_R12 + 0x40) = uVar33;
    if (*(byte **)pauStack_100[0x14] != (byte *)0x0) {
      pub_1406abac0(*(byte **)pauStack_100[0x14],0x50,0x10);
    }
    *(byte **)pauVar53[0x14] = unaff_R12;
  }
  else {
    unaff_R12 = (byte *)(lVar34 + -0x5f89e29b87429bd1);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulonglong)unaff_R12 ^ 0xe7037ed1a0b428db;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = unaff_R12;
    uVar33 = (undefined4)uStack_1b8;
    pauVar53 = pauStack_100;
    if ((SUB164(auVar10 * auVar17,0) ^ SUB164(auVar10 * auVar17,8)) >> 0x1e == 1) {
      uStack_190 = (code *)CONCAT44(uStack_26c,fStack_270);
      lStack_188 = CONCAT44(uStack_264,uStack_268);
      pauStack_180 = (undefined1 (*) [16])CONCAT44(uStack_25c,uStack_260);
      uStack_198 = (undefined1 (*) [16])lStack_278;
      uStack_1a8._0_4_ = (float)uStack_288;
      uStack_1a8._4_4_ = (float)((ulonglong)uStack_288 >> 0x20);
      uStack_1a0._0_4_ = SUB84(uStack_280,0);
      uStack_1a0._4_4_ = (float)((ulonglong)uStack_280 >> 0x20);
      pdb_1408c7060(&plStack_310,uStack_128,uStack_1b0 & 0xff,&uStack_1a8,uStack_350);
      pauStack_110 = pauStack_308;
      if (lStack_300 != 0) {
        pauStack_210 = pauStack_308 + lStack_300 * 3;
        puStack_120 = pauStack_140[0x12] + 8;
        uVar35 = 0;
        pbVar51 = unaff_R12;
        pauVar43 = pauStack_308;
        do {
          uStack_198 = *(undefined1 (**) [16])pauVar43[1];
          uStack_190 = *(code **)(pauVar43[1] + 8);
          lStack_188 = *(longlong *)pauVar43[2];
          pauStack_180 = *(undefined1 (**) [16])(pauVar43[2] + 8);
          uStack_1a8._0_4_ = (float)*(undefined8 *)*pauVar43;
          uStack_1a8._4_4_ = (float)((ulonglong)*(undefined8 *)*pauVar43 >> 0x20);
          uStack_1a0._0_4_ = (float)*(undefined8 *)(*pauVar43 + 8);
          uStack_1a0._4_4_ = (float)((ulonglong)*(undefined8 *)(*pauVar43 + 8) >> 0x20);
          uStack_230 = (undefined4)uStack_1b8;
          fStack_240 = 129.4599;
          uStack_23c = 1.4013e-45;
          fStack_238 = 1.4013e-44;
          uStack_234 = 0;
          uStack_228 = uVar35;
          uStack_128 = uVar35;
          uStack_1b0 = pdb_1414af170(&fStack_240);
          unaff_R12 = pbVar51 + -0x5f89e29b87429bd1;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulonglong)unaff_R12 ^ 0xe7037ed1a0b428db;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = unaff_R12;
          uVar35 = SUB168(auVar11 * auVar18,8) ^ SUB168(auVar11 * auVar18,0);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar35;
          uVar38 = SUB168(auVar12 * ZEXT816(6),8);
          if (uVar35 * 6 < 4) {
            pbVar51 = pbVar51 + 0x40ec3ac8f17ac85e;
            do {
              auVar13._8_8_ = 0;
              auVar13._0_8_ = (ulonglong)pbVar51 ^ 0xe7037ed1a0b428db;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = pbVar51;
              unaff_R12 = unaff_R12 + -0x5f89e29b87429bd1;
              uVar35 = SUB168(auVar13 * auVar19,8) ^ SUB168(auVar13 * auVar19,0);
              pbVar51 = pbVar51 + -0x5f89e29b87429bd1;
            } while (uVar35 * 6 < 4);
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar35;
            uVar38 = SUB168(auVar14 * ZEXT816(6),8);
          }
          uStack_1e8 = (longlong)uStack_198;
          uStack_1e0 = (ulonglong)uStack_190;
          lStack_1d8 = lStack_188;
          pauStack_1d0 = pauStack_180;
          cStack_1f8 = SUB41((float)uStack_1a8,0);
          cStack_1f7 = (char)((uint)(float)uStack_1a8 >> 8);
          uStack_1f6 = (undefined1)((uint)(float)uStack_1a8 >> 0x10);
          uStack_1f5 = (undefined4)(CONCAT44(uStack_1a8._4_4_,(float)uStack_1a8) >> 0x18);
          uStack_1f1._1_3_ = SUB43((float)uStack_1a0,0);
          uStack_1f1 = CONCAT31(uStack_1f1._1_3_,(char)((uint)uStack_1a8._4_4_ >> 0x18));
          uStack_1ed = (undefined4)(CONCAT44(uStack_1a0._4_4_,(float)uStack_1a0) >> 0x18);
          uStack_1e9 = (undefined1)((uint)uStack_1a0._4_4_ >> 0x18);
          lVar34 = *(longlong *)(pauStack_100[0x13] + 8);
          if (lVar34 == *(longlong *)(pauStack_100[0x12] + 8)) {
            pdb_142d7eb40(puStack_120);
          }
          pauVar43 = pauVar43 + 3;
          uVar35 = uStack_128 + 1;
          lVar50 = *(longlong *)pauStack_100[0x13];
          lVar45 = lVar34 * 0x50;
          *(undefined1 *)(lVar50 + lVar45) = 1;
          *(undefined8 *)(lVar50 + 8 + lVar45) = uVar38;
          puVar40 = (undefined8 *)(lVar50 + 0x10 + lVar45);
          *puVar40 = CONCAT17((undefined1)uStack_1f1,
                              CONCAT43(uStack_1f5,
                                       CONCAT12(uStack_1f6,CONCAT11(cStack_1f7,cStack_1f8))));
          puVar40[1] = CONCAT17(uStack_1e9,CONCAT43(uStack_1ed,uStack_1f1._1_3_));
          plVar41 = (longlong *)(lVar50 + 0x20 + lVar45);
          *plVar41 = uStack_1e8;
          plVar41[1] = uStack_1e0;
          plVar41 = (longlong *)(lVar50 + 0x30 + lVar45);
          *plVar41 = lStack_1d8;
          plVar41[1] = (longlong)pauStack_1d0;
          *(ulonglong *)(lVar50 + 0x40 + lVar45) = uStack_1b0;
          *(longlong *)(lVar50 + 0x48 + lVar45) = lStack_218;
          *(longlong *)(pauStack_100[0x13] + 8) = lVar34 + 1;
          pbVar51 = unaff_R12;
        } while (pauVar43 != pauStack_210);
      }
      if (plStack_310 != (longlong *)0x0) {
        pub_1406abac0((byte *)pauStack_110,(longlong)plStack_310 * 0x30,0x10);
      }
      uVar33 = (undefined4)uStack_1b8;
      pauVar43 = pauStack_2c8;
      pauVar53 = pauStack_100;
    }
  }
  if ((uStack_21c & 1) != 0) {
    pauStack_140 = (undefined1 (*) [16])(pauStack_140[0x12] + 8);
    fVar55 = (float)uStack_2a8 * _DAT_14300a334;
    uStack_1a0._0_4_ = 129.46005;
    uStack_1a0._4_4_ = 1.4013e-45;
    uStack_198 = (undefined1 (*) [16])0xd;
    uStack_1a8._0_4_ = (float)uVar33;
    uVar38 = pdb_1414af4c0(&uStack_1a8);
    lVar34 = *(longlong *)(pauVar53[0x13] + 8);
    if (lVar34 == *(longlong *)(pauVar53[0x12] + 8)) {
      pdb_142d7eb40(pauStack_140);
    }
    pauVar53 = pauStack_100;
    fVar60 = fVar73 * fVar73;
    fVar72 = fVar75 * fVar75;
    fVar59 = fVar71 * fVar71 + fVar61 * fVar61;
    fVar81 = fVar72 - (fVar59 + fVar60);
    fVar82 = fVar72 - (fVar59 + fVar60);
    fVar72 = fVar72 - (fVar59 + fVar60);
    fVar77 = _UNK_143015ec4 * fVar82;
    fVar79 = _UNK_143016c28 * fVar72;
    fVar66 = fVar73 * _UNK_143015ec8 + fVar71 * _UNK_143015ec4 + fVar61 * fVar55;
    fVar66 = fVar66 + fVar66;
    fVar78 = fVar61 * _UNK_143015ec4;
    fVar83 = fVar71 * _UNK_143015ec8;
    fVar59 = _UNK_143015ec8 * fVar61;
    fVar60 = _UNK_143015ec4 * fVar73;
    fVar74 = fVar75 + fVar75;
    lVar50 = *(longlong *)pauStack_100[0x13];
    lVar45 = lVar34 * 0x50;
    *(undefined2 *)(lVar50 + lVar45) = 2;
    *(undefined4 *)(lVar50 + 4 + lVar45) = uStack_14c;
    pfVar2 = (float *)(lVar50 + 0x10 + lVar45);
    *pfVar2 = fVar61;
    pfVar2[1] = fVar71;
    pfVar2[2] = fVar73;
    pfVar2[3] = fVar75;
    *(ulonglong *)(lVar50 + 0x20 + lVar45) =
         CONCAT44(uStack_2f8._4_4_ + (fVar73 * fVar55 - fVar59) * fVar74 + fVar66 * fVar71 + fVar77,
                  (float)uStack_2f8 + (fVar83 - fVar60) * fVar74 + fVar66 * fVar61 + fVar55 * fVar81
                 );
    *(float *)(lVar50 + 0x28 + lVar45) =
         (fVar78 - fVar55 * fVar71) * fVar74 + fVar66 * fVar73 + fVar79 + fStack_134;
    puVar40 = (undefined8 *)(lVar50 + 0x2c + lVar45);
    *puVar40 = CONCAT44(uStack_268,uStack_26c);
    puVar40[1] = CONCAT44(uStack_260,uStack_264);
    *(undefined4 *)(lVar50 + 0x3c + lVar45) = uStack_25c;
    *(undefined8 *)(lVar50 + 0x40 + lVar45) = uVar38;
    *(longlong *)(lVar50 + 0x48 + lVar45) = lStack_218;
    *(longlong *)(pauStack_100[0x13] + 8) = lVar34 + 1;
    fVar55 = (float)uStack_2a8 * _DAT_14300c284;
    uStack_1a8._0_4_ = (float)uStack_1b8;
    uStack_1a0._0_4_ = 129.46025;
    uStack_1a0._4_4_ = 1.4013e-45;
    uStack_198 = (undefined1 (*) [16])0xc;
    unaff_R12 = (byte *)pdb_1414af4c0(&uStack_1a8);
    lVar34 = *(longlong *)(pauVar53[0x13] + 8);
    if (lVar34 == *(longlong *)(pauVar53[0x12] + 8)) {
      pdb_142d7eb40(pauStack_140);
    }
    fVar82 = fVar82 * _UNK_143015ec4;
    fVar72 = fVar72 * _UNK_143016c28;
    fVar66 = fVar73 * _UNK_143015ec8 + fVar71 * _UNK_143015ec4 + fVar61 * fVar55;
    fVar66 = fVar66 + fVar66;
    fVar77 = fVar61 * _UNK_143015ec4;
    fVar78 = fVar71 * _UNK_143015ec8;
    fVar59 = _UNK_143015ec8 * fVar61;
    fVar60 = _UNK_143015ec4 * fVar73;
    lVar50 = *(longlong *)pauStack_100[0x13];
    lVar45 = lVar34 * 0x50;
    *(undefined2 *)(lVar50 + lVar45) = 0x102;
    *(undefined4 *)(lVar50 + 4 + lVar45) = uStack_14c;
    pfVar2 = (float *)(lVar50 + 0x10 + lVar45);
    *pfVar2 = fVar61;
    pfVar2[1] = fVar71;
    pfVar2[2] = fVar73;
    pfVar2[3] = fVar75;
    *(ulonglong *)(lVar50 + 0x20 + lVar45) =
         CONCAT44(uStack_2f8._4_4_ + fVar74 * (fVar73 * fVar55 - fVar59) + fVar66 * fVar71 + fVar82,
                  (float)uStack_2f8 + fVar74 * (fVar78 - fVar60) + fVar66 * fVar61 + fVar81 * fVar55
                 );
    *(float *)(lVar50 + 0x28 + lVar45) =
         fStack_134 + fVar74 * (fVar77 - fVar55 * fVar71) + fVar66 * fVar73 + fVar72;
    puVar40 = (undefined8 *)(lVar50 + 0x2c + lVar45);
    *puVar40 = CONCAT44(uStack_268,uStack_26c);
    puVar40[1] = CONCAT44(uStack_260,uStack_264);
    *(undefined4 *)(lVar50 + 0x3c + lVar45) = uStack_25c;
    *(byte **)(lVar50 + 0x40 + lVar45) = unaff_R12;
    *(longlong *)(lVar50 + 0x48 + lVar45) = lStack_218;
    pauVar53 = (undefined1 (*) [16])(lVar34 + 1);
    *(undefined1 (**) [16])(pauStack_100[0x13] + 8) = pauVar53;
  }
  goto LAB_1408c75f6;
LAB_1408c9dcd:
  pdb_142dc8110(&UNK_143016e79,0x16,&UNK_143017308);
  goto LAB_1408ca03f;
LAB_1408c7c8e:
  plVar41 = *(longlong **)(lVar34 + -0x28 + uVar46 * -0x48);
  LOCK();
  lVar34 = *plVar41;
  *plVar41 = *plVar41 + 1;
  UNLOCK();
  if (*plVar41 != 0 && SCARRY8(lVar34,1) == *plVar41 < 0) {
    uStack_f1 = 1;
    plStack_310 = plVar41;
    cVar30 = pdb_1409012c0(uStack_1b0 & 0xff,uStack_290);
    uStack_f1 = 1;
    cStack_1f8 = pdb_140c44ba0(uStack_128);
    cStack_1f7 = cVar30;
    if (*(longlong *)(pauVar43[4] + 8) != 0) {
      uStack_f1 = 1;
      uVar37 = pdb_1413f0300(pauStack_388,&cStack_1f8);
      pauVar52 = pauStack_100;
      pauVar44 = pauStack_2c8;
      lVar34 = *(longlong *)pauVar43[3];
      uVar35 = *(ulonglong *)(pauVar43[3] + 8);
      bVar54 = (byte)(uVar37 >> 0x39);
      auVar58 = ZEXT216(CONCAT11(bVar54,bVar54));
      auVar58 = pshuflw(auVar58,auVar58,0);
      lVar50 = 0;
      while( true ) {
        uVar37 = uVar37 & uVar35;
        auVar3 = *(undefined1 (*) [16])(lVar34 + uVar37);
        auVar70[0] = -(auVar3[0] == auVar58[0]);
        auVar70[1] = -(auVar3[1] == auVar58[1]);
        auVar70[2] = -(auVar3[2] == auVar58[2]);
        auVar70[3] = -(auVar3[3] == auVar58[3]);
        auVar70[4] = -(auVar3[4] == auVar58[4]);
        auVar70[5] = -(auVar3[5] == auVar58[5]);
        auVar70[6] = -(auVar3[6] == auVar58[6]);
        auVar70[7] = -(auVar3[7] == auVar58[7]);
        auVar70[8] = -(auVar3[8] == auVar58[0]);
        auVar70[9] = -(auVar3[9] == auVar58[1]);
        auVar70[10] = -(auVar3[10] == auVar58[2]);
        auVar70[0xb] = -(auVar3[0xb] == auVar58[3]);
        auVar70[0xc] = -(auVar3[0xc] == auVar58[4]);
        auVar70[0xd] = -(auVar3[0xd] == auVar58[5]);
        auVar70[0xe] = -(auVar3[0xe] == auVar58[6]);
        auVar70[0xf] = -(auVar3[0xf] == auVar58[7]);
        uVar49 = (ushort)(SUB161(auVar70 >> 7,0) & 1) | (ushort)(SUB161(auVar70 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar70 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar70 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar70 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar70 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar70 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar70 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar70 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar70 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar70 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar70 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar70 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar70 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar70 >> 0x77,0) & 1) << 0xe | (ushort)(auVar70[0xf] >> 7) << 0xf
        ;
        uVar32 = (uint)uVar49;
        if (uVar49 != 0) {
          if (cStack_1f8 == '\x1a') {
            do {
              uVar22 = 0;
              for (uVar23 = uVar32; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
                uVar22 = uVar22 + 1;
              }
              uVar46 = uVar22 + uVar37 & uVar35;
              if (*(char *)(lVar34 + -0x48 + uVar46 * -0x48) == '\x1a') goto LAB_1408c7ff4;
              uVar49 = (ushort)(uVar32 - 1) & (ushort)uVar32;
              uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar49);
            } while (uVar49 != 0);
          }
          else {
            do {
              uVar22 = 0;
              for (uVar23 = uVar32; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
                uVar22 = uVar22 + 1;
              }
              uVar46 = uVar22 + uVar37 & uVar35;
              cVar30 = *(char *)(lVar34 + -0x48 + uVar46 * -0x48);
              if (((cVar30 != '\x1a') && (cStack_1f8 == cVar30)) &&
                 (cStack_1f7 == *(char *)(lVar34 + uVar46 * -0x48 + -0x47))) goto LAB_1408c7ff4;
              uVar49 = (ushort)(uVar32 - 1) & (ushort)uVar32;
              uVar32 = CONCAT22((short)(uVar32 - 1 >> 0x10),uVar49);
            } while (uVar49 != 0);
          }
        }
        auVar65[0] = -(auVar3[0] == -1);
        auVar65[1] = -(auVar3[1] == -1);
        auVar65[2] = -(auVar3[2] == -1);
        auVar65[3] = -(auVar3[3] == -1);
        auVar65[4] = -(auVar3[4] == -1);
        auVar65[5] = -(auVar3[5] == -1);
        auVar65[6] = -(auVar3[6] == -1);
        auVar65[7] = -(auVar3[7] == -1);
        auVar65[8] = -(auVar3[8] == -1);
        auVar65[9] = -(auVar3[9] == -1);
        auVar65[10] = -(auVar3[10] == -1);
        auVar65[0xb] = -(auVar3[0xb] == -1);
        auVar65[0xc] = -(auVar3[0xc] == -1);
        auVar65[0xd] = -(auVar3[0xd] == -1);
        auVar65[0xe] = -(auVar3[0xe] == -1);
        auVar65[0xf] = -(auVar3[0xf] == -1);
        if ((((((((((((((((SUB161(auVar65 >> 7,0) & 1) != 0 || (SUB161(auVar65 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar65 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar65 >> 0x1f,0) & 1) != 0) || (SUB161(auVar65 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar65 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar65 >> 0x37,0) & 1) != 0) || (SUB161(auVar65 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar65 >> 0x47,0) & 1) != 0) || (SUB161(auVar65 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar65 >> 0x57,0) & 1) != 0) || (SUB161(auVar65 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar65 >> 0x67,0) & 1) != 0) || (SUB161(auVar65 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar65 >> 0x77,0) & 1) != 0) || auVar65[0xf] < '\0') break;
        uVar37 = uVar37 + lVar50 + 0x10;
        lVar50 = lVar50 + 0x10;
      }
    }
    uStack_1a8 = (byte *)&cStack_1f8;
    uStack_1a0._0_4_ = 4.3876266;
    uStack_1a0._4_4_ = 1.4013e-45;
    uStack_f1 = 1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc83d0(&UNK_143016f25,&uStack_1a8,&UNK_143016f70);
  }
LAB_1408ca03f:
                    /* WARNING: Does not return */
  pcVar20 = (code *)invalidInstructionException();
  (*pcVar20)();
}

