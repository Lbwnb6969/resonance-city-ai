// VA 0x140819b90, PDB extent 7638 bytes
// system_wall_constructor::ui_lintel_controls::ui_lintel_controls
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/ui_lintel_controls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::ui_lintel_controls::ui_lintel_controls
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/ui_lintel_controls.rs
   Extent: 7638 */

void pdb_140819b90(undefined1 (*param_1) [16],byte *param_2,byte *param_3,byte *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,longlong *param_12)

{
  byte *pbVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  byte bVar13;
  byte bVar14;
  undefined1 uVar15;
  char *pcVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 **ppuVar19;
  undefined8 **ppuVar20;
  code *pcVar21;
  int iVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulonglong uVar30;
  undefined2 uVar31;
  undefined2 uVar32;
  undefined2 uVar33;
  undefined2 uVar34;
  byte bVar35;
  uint uVar36;
  longlong lVar37;
  ulonglong uVar38;
  longlong *plVar39;
  undefined8 uVar40;
  float *pfVar41;
  char cVar42;
  byte *pbVar43;
  undefined8 *puVar44;
  byte *pbVar45;
  byte **ppbVar46;
  int *piVar47;
  float *pfVar48;
  byte *pbVar49;
  longlong unaff_RSI;
  undefined1 (*pauVar50) [16];
  undefined *puVar51;
  undefined *puVar52;
  uint uVar53;
  undefined *unaff_R13;
  byte *pbVar54;
  undefined7 uVar55;
  bool bVar56;
  undefined4 uVar57;
  float fVar58;
  undefined4 uVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  int iStack_358;
  undefined2 uStack_354;
  undefined2 uStack_352;
  undefined4 uStack_350;
  undefined2 uStack_34c;
  undefined2 uStack_34a;
  undefined1 uStack_348;
  undefined1 uStack_347;
  undefined2 uStack_346;
  float fStack_344;
  code *pcStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  code *pcStack_320;
  longlong lStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined4 *puStack_228;
  undefined8 uStack_220;
  undefined4 *puStack_218;
  longlong lStack_210;
  longlong lStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined4 *puStack_1e0;
  longlong lStack_1d8;
  byte *pbStack_1d0;
  undefined4 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  byte **ppbStack_1b0;
  byte *pbStack_1a8;
  byte *pbStack_1a0;
  code *pcStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  byte *pbStack_180;
  undefined8 **ppuStack_178;
  code *pcStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined1 *puStack_148;
  longlong *plStack_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  byte *pbStack_128;
  undefined8 **ppuStack_120;
  byte *pbStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  undefined1 uStack_f1;
  byte *pbStack_f0;
  undefined1 uStack_e6;
  char cStack_e5;
  undefined1 uStack_e4;
  undefined1 uStack_e3;
  undefined1 uStack_e2;
  undefined1 uStack_e1;
  undefined8 uStack_e0;
  
  uStack_e0 = 0xfffffffffffffffe;
  puVar44 = (undefined8 *)param_2;
  uVar36 = pdb_140e94b40();
  uVar38 = (ulonglong)uVar36;
  if ((char)uVar36 == '\0') {
    pcVar16 = *(char **)*param_1;
    cVar42 = *pcVar16;
    pbVar54 = param_3;
    fVar27 = _DAT_142e36f50;
    uVar36 = _DAT_142e377e0;
    fVar28 = _DAT_142e37ad4;
    pbVar1 = _DAT_143008720;
    fVar29 = _DAT_143008730;
    goto joined_r0x000140819d21;
  }
  unaff_RSI = 0x3f;
  pbStack_f0 = param_2;
  lVar37 = pdb_14081bc10(0x3f);
  param_2 = &UNK_143009480;
  if (lVar37 == 1) {
    if ((undefined8 *)0x3f < puVar44) {
LAB_14081adef:
      pdb_142dc8070(&UNK_143009480,0x3f,0);
LAB_14081ae0f:
      pdb_142dc8070(&UNK_143009480,0x3f);
code_r0x00014081ae32:
      uStack_e2 = 1;
                    /* WARNING: Subroutine does not return */
      pdb_142dc81f2(0,0,&UNK_1430093c0);
    }
    uVar38 = pdb_14081bc10(puVar44);
    if ((uVar38 & 1) != 0) {
      if ((undefined *)0x3f < (undefined *)((longlong)puVar44 + 2)) goto LAB_14081ae0f;
      unaff_RSI = 0x3d - (longlong)puVar44;
      param_2 = (byte *)((longlong)puVar44 + 0x143009482);
    }
  }
  pbVar54 = (byte *)(ulonglong)uVar36;
  puVar51 = &UNK_14300923b;
  unaff_R13 = &UNK_143009202;
  do {
    bVar35 = puVar51[-1];
    uVar36 = (uint)(char)bVar35;
    pbStack_128 = param_4;
    if ((char)bVar35 < '\0') {
      bVar13 = puVar51[-2];
      if ((char)bVar13 < -0x40) {
        bVar14 = puVar51[-3];
        if ((char)bVar14 < -0x40) {
          pbVar1 = puVar51 + -4;
          puVar51 = puVar51 + -4;
          uVar36 = bVar14 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar51 = puVar51 + -3;
          uVar36 = bVar14 & 0xf;
        }
        uVar36 = bVar13 & 0x3f | uVar36 << 6;
      }
      else {
        puVar51 = puVar51 + -2;
        uVar36 = bVar13 & 0x1f;
      }
      uVar36 = (uint)(bVar35 & 0x3f) | uVar36 << 6;
      if (uVar36 != 0x5c) goto LAB_140819d04;
LAB_140819d2c:
      puVar52 = puVar51 + -0x143009201;
      if (puVar52 < (undefined *)0x3a) {
        uVar38 = 0x39 - (longlong)puVar52;
        unaff_R13 = puVar51 + 1;
        goto LAB_140819d4e;
      }
      pdb_142dc8070(&UNK_143009202,0x39,puVar52,0x39,&UNK_143009528);
      goto LAB_14081adef;
    }
    puVar51 = puVar51 + -1;
    if (uVar36 == 0x5c) goto LAB_140819d2c;
LAB_140819d04:
    if (uVar36 == 0x2f) goto LAB_140819d2c;
  } while (puVar51 != &UNK_143009202);
  uVar38 = 0x39;
LAB_140819d4e:
  plVar39 = (longlong *)pdb_140e97000();
  if ((char)plVar39[0xd] != '\x01') goto LAB_14081acae;
  do {
    if (*plVar39 == 0) {
      *plVar39 = -1;
      plStack_138 = plVar39;
      unaff_RSI = pdb_140e94f10(plVar39 + 1,param_2,unaff_RSI,unaff_R13,uVar38,1,0);
      *plStack_138 = *plStack_138 + 1;
      uVar38 = (ulonglong)pbVar54 & 0xffffffff;
      pcVar16 = *(char **)*param_1;
      cVar42 = *pcVar16;
      param_4 = pbStack_128;
      pbVar54 = param_3;
      param_2 = pbStack_f0;
      fVar27 = _DAT_142e36f50;
      uVar36 = _DAT_142e377e0;
      fVar28 = _DAT_142e37ad4;
      pbVar1 = _DAT_143008720;
      fVar29 = _DAT_143008730;
joined_r0x000140819d21:
      param_3 = param_4;
      _DAT_142e36f50 = fVar27;
      _DAT_142e377e0 = uVar36;
      _DAT_142e37ad4 = fVar28;
      _DAT_143008720 = pbVar1;
      _DAT_143008730 = fVar29;
      if ((cVar42 == '\0') && (*(int *)(pcVar16 + 8) == 0)) {
        pauVar50 = *(undefined1 (**) [16])*param_10;
        pbVar45 = (byte *)((undefined8 *)*param_10)[3];
        auVar12 = *pauVar50;
        uVar53 = ~(uint)(ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar12[0xf] >> 7) << 0xf);
        pbStack_f0 = (byte *)*param_5;
        plStack_138 = *(longlong **)param_2;
        uStack_12c = *(undefined4 *)((longlong)param_11 + 0x1c);
        uStack_1c0 = *param_11;
        puStack_1c8 = (undefined4 *)param_11[2];
        uStack_130 = *(undefined4 *)(param_3 + 0x1c);
        uStack_188 = *(undefined8 *)param_3;
        puStack_1e0 = *(undefined4 **)(param_3 + 0x10);
        uStack_230 = *param_9;
        puStack_228 = (undefined4 *)*param_7;
        uStack_220 = *param_8;
        uStack_240 = *(undefined8 *)pbVar54;
        uStack_18c = *(undefined4 *)((longlong)param_12 + 0x1c);
        lStack_1d8 = *param_12;
        puStack_218 = (undefined4 *)param_12[2];
        fVar65 = (float)_DAT_142e378e0;
        uVar30 = (ulonglong)_DAT_142e378e0 >> 0x20;
        param_1 = pauVar50 + 1;
        lStack_208 = lStack_1d8 + 0x20;
        lStack_210 = unaff_RSI;
        cStack_e5 = (char)uVar38;
        while( true ) {
          unaff_RSI = lStack_210;
          unaff_R13 = (undefined *)(ulonglong)uVar53;
          pbVar49 = pbVar45 + -1;
          if (pbVar45 == (byte *)0x0) break;
          if ((short)uVar53 == 0) {
            do {
              auVar12 = *param_1;
              pauVar50 = pauVar50 + -0x20;
              param_1 = param_1 + 1;
              uVar53 = (ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar12[0xf] >> 7) << 0xf) ^ 0xffff;
            } while (uVar53 == 0);
          }
          iVar22 = 0;
          for (uVar23 = uVar53; (uVar23 & 1) == 0; uVar23 = uVar23 >> 1 | 0x80000000) {
            iVar22 = iVar22 + 1;
          }
          param_2 = (byte *)((longlong)pauVar50 - (ulonglong)(uint)(iVar22 << 5));
          puStack_1f0 = (undefined8 *)((longlong)param_2 + -0x20);
          param_3 = *(byte **)((longlong)param_2 + -0x20);
          lVar37 = pdb_140b54f80(pbStack_f0,param_3,&UNK_143009240);
          pbVar45 = pbVar49;
          if (lVar37 != 0) {
            pbStack_1a8 = (byte *)0x0;
            pbStack_1a0 = (byte *)0x4;
            pcStack_198 = (code *)0x0;
            pbVar43 = *(byte **)((longlong)param_2 + -0x10);
            pbVar54 = pbVar43 + *(longlong *)((longlong)param_2 + -8) * 0x68;
            pbStack_128 = pbVar49;
            for (; pbVar45 = pbStack_128, pbVar43 != pbVar54; pbVar43 = pbVar43 + 0x68) {
              uStack_e1 = 1;
              pdb_140a0bce0();
            }
            if (pcStack_198 == (code *)0x0) {
              if (pbStack_1a8 != (byte *)0x0) {
                pub_1406abac0(pbStack_1a0,(longlong)pbStack_1a8 * 0x24,4);
              }
            }
            else {
              ppuStack_178 = &puStack_1f0;
              pcStack_170 = pdb_141422e40;
              uStack_e1 = 1;
              pdb_140f60760(&iStack_358,&UNK_143009258,&ppuStack_178);
              pbStack_118 = (byte *)CONCAT26(uStack_352,CONCAT24(uStack_354,iStack_358));
              pbStack_110 = (byte *)CONCAT26(uStack_34a,CONCAT24(uStack_34c,uStack_350));
              pbStack_108 = (byte *)CONCAT44(fStack_344,
                                             CONCAT22(uStack_346,CONCAT11(uStack_347,uStack_348)));
              pcStack_160 = pcStack_198;
              pcStack_170 = (code *)pbStack_1a8;
              uStack_168 = pbStack_1a0;
              ppuStack_178 = (undefined8 **)CONCAT71(ppuStack_178._1_7_,2);
              uStack_1b8 = CONCAT62(uStack_1b8._2_6_,0xc01);
              uStack_e6 = 1;
              pdb_140c9dcb0(&iStack_358,&ppuStack_178,&uStack_1b8);
              uStack_e6 = 0;
              ppbVar46 = &pbStack_118;
              uStack_1b8 = pdb_1414697d0(plStack_138,ppbVar46,&iStack_358);
              uStack_e1 = 0;
              ppbStack_1b0 = ppbVar46;
              bVar35 = pdb_1408ffab0(&uStack_1b8);
              cVar42 = bVar35 - 2;
              if (bVar35 < 2) {
                cVar42 = '\x03';
              }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch(cVar42) {
              case '\x01':
                uStack_e1 = 0;
                pdb_1408ff9a0(&iStack_358,&uStack_1b8);
                if (iStack_358 == 2) {
                  uStack_e1 = 0;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8150(&UNK_143009270);
                }
                puStack_148 = puStack_328;
                ppuStack_178 = (undefined8 **)CONCAT26(uStack_352,CONCAT24(uStack_354,iStack_358));
                pcStack_170 = (code *)CONCAT26(uStack_34a,CONCAT24(uStack_34c,uStack_350));
                uStack_158 = (undefined4)uStack_338;
                uStack_154 = uStack_338._4_4_;
                uStack_150 = (undefined4)uStack_330;
                uStack_14c = uStack_330._4_4_;
                uStack_168 = (byte *)CONCAT44(fStack_344,
                                              CONCAT22(uStack_346,CONCAT11(uStack_347,uStack_348)));
                pcStack_160 = pcStack_340;
                *(undefined4 *)(param_6 + 1) = uStack_330._4_4_;
                *param_6 = CONCAT44((undefined4)uStack_330,uStack_338._4_4_);
                uStack_e1 = 0;
                lVar37 = pdb_140b54f80(pbStack_f0,param_3,&UNK_143009288);
                if (lVar37 == 0) {
                  uStack_e1 = 0;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8150(&UNK_1430092a0);
                }
                *(undefined4 *)((longlong)param_6 + 0xc) = *(undefined4 *)(lVar37 + 0x28c);
                break;
              case '\x02':
                uStack_e1 = 0;
                pdb_140bce520(&ppuStack_178,uStack_230);
                uVar59 = *puStack_228;
                uStack_e1 = 0;
                uVar57 = pdb_140bce550(&ppuStack_178,uVar59,puStack_228[1]);
                uStack_350 = *(undefined4 *)(param_6 + 1);
                uVar40 = *param_6;
                iStack_358 = (int)uVar40;
                uStack_354 = (undefined2)((ulonglong)uVar40 >> 0x20);
                uStack_352 = (undefined2)((ulonglong)uVar40 >> 0x30);
                uStack_34c = 0;
                uStack_34a = 0;
                uStack_348 = 0;
                uStack_347 = 0;
                uStack_346 = 0x3f80;
                fStack_344 = 0.0;
                pbStack_110 = (byte *)((ulonglong)pbStack_110 & 0xffffffffffffff00);
                uStack_e1 = 0;
                pbStack_118 = pbVar1;
                pdb_140bce5a0(&uStack_200,uVar57,uVar59,&ppuStack_178,uStack_220,&iStack_358,
                              &pbStack_118);
                fVar64 = uStack_200._4_4_ - *(float *)((longlong)param_6 + 4);
                uStack_e1 = 0;
                lVar37 = pdb_140b0e4b0(uStack_188,param_3);
                if (lVar37 == 0) {
                  uStack_e1 = 0;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8150(&UNK_1430092b8);
                }
                fVar3 = *(float *)(lVar37 + 0x5c);
                fVar64 = fVar64 + *(float *)((longlong)param_6 + 0xc);
                fVar58 = fVar27;
                if (fVar27 <= fVar64) {
                  fVar58 = fVar64;
                }
                fVar64 = fVar29;
                if (fVar58 <= fVar29) {
                  fVar64 = fVar58;
                }
                *puStack_1e0 = uStack_130;
                uStack_e1 = 0;
                pdb_140b0e3d0(uStack_188,param_3,fVar64);
                if (fVar3 != fVar64) {
                  uVar59 = *(undefined4 *)(param_6 + 1);
                  uStack_34a = (undefined2)uVar59;
                  uStack_348 = (undefined1)((uint)uVar59 >> 0x10);
                  uStack_347 = (undefined1)((uint)uVar59 >> 0x18);
                  uVar40 = *param_6;
                  uStack_352 = (undefined2)uVar40;
                  uStack_350 = (undefined4)((ulonglong)uVar40 >> 0x10);
                  uStack_34c = (undefined2)((ulonglong)uVar40 >> 0x30);
                  *puStack_218 = uStack_18c;
                  lVar37 = *(longlong *)(lStack_1d8 + 0x30);
                  uVar40 = *(undefined8 *)(lStack_1d8 + 0x40);
                  if (lVar37 == *(longlong *)(lStack_1d8 + 0x20)) {
                    uStack_e1 = 0;
                    pdb_142d7ede0(lStack_208);
                  }
                  lVar17 = *(longlong *)(lStack_1d8 + 0x28);
                  *(undefined8 *)(lVar17 + lVar37 * 0x28) = uVar40;
                  *(undefined2 *)(lVar17 + 8 + lVar37 * 0x28) = 10;
                  puVar44 = (undefined8 *)(lVar17 + 10 + lVar37 * 0x28);
                  *puVar44 = CONCAT26(uStack_352,CONCAT24(uStack_354,iStack_358));
                  puVar44[1] = CONCAT26(uStack_34a,CONCAT24(uStack_34c,uStack_350));
                  *(ushort *)(lVar17 + 0x1a + lVar37 * 0x28) = CONCAT11(uStack_347,uStack_348);
                  *(undefined4 *)(lVar17 + 0x1c + lVar37 * 0x28) = 0x3f800000;
                  *(undefined1 *)(lVar17 + 0x20 + lVar37 * 0x28) = 0;
                  pbVar54 = (byte *)(lVar37 + 1);
                  *(byte **)(lStack_1d8 + 0x30) = pbVar54;
                  *(longlong *)(lStack_1d8 + 0x40) = *(longlong *)(lStack_1d8 + 0x40) + 1;
                }
                break;
              case '\x03':
                uStack_e1 = 0;
                uVar55 = (undefined7)((ulonglong)pbVar54 >> 8);
                pbVar54 = (byte *)CONCAT71(uVar55,bVar35);
                lVar37 = pdb_140b54f80(pbStack_f0,param_3,&UNK_1430092d0);
                uVar33 = uStack_34a;
                uVar31 = uStack_34c;
                uVar59 = uStack_350;
                if (lVar37 == 0) {
                  uStack_e1 = 0;
                    /* WARNING: Subroutine does not return */
                  pdb_142dc8150(&UNK_1430092e8);
                }
                fVar64 = *(float *)(lVar37 + 0x28c);
                fVar3 = *(float *)((longlong)param_6 + 0xc);
                fVar58 = (float)((uint)(fVar64 - fVar3) & uVar36);
                uStack_34c = (undefined2)((ulonglong)param_3 >> 0x20);
                uVar32 = uStack_34c;
                uStack_34a = (undefined2)((ulonglong)param_3 >> 0x30);
                uVar34 = uStack_34a;
                uStack_350 = SUB84(param_3,0);
                uVar57 = uStack_350;
                uStack_350 = uVar59;
                uStack_34c = uVar31;
                uStack_34a = uVar33;
                if ((fVar58 < fVar28 & bVar35) == 0) {
                  if (fVar28 <= fVar58) {
                    uStack_e1 = 0;
                    pdb_140a1aa60(&ppuStack_178);
                    uStack_348 = SUB41(fVar3,0);
                    uStack_347 = (undefined1)((uint)fVar3 >> 8);
                    uStack_346 = (undefined2)((uint)fVar3 >> 0x10);
                    iStack_358 = 6;
                    uStack_354 = 0;
                    uStack_352 = 0x8000;
                    uStack_e3 = 1;
                    piVar47 = &iStack_358;
                    uStack_350 = uVar57;
                    uStack_34c = uVar32;
                    uStack_34a = uVar34;
                    fStack_344 = fVar64;
                    pdb_140a1aa80(&ppuStack_178);
                    *puStack_1c8 = uStack_12c;
                    uStack_348 = SUB81(uStack_168,0);
                    uStack_347 = (undefined1)((ulonglong)uStack_168 >> 8);
                    uStack_346 = (undefined2)((ulonglong)uStack_168 >> 0x10);
                    fStack_344 = (float)((ulonglong)uStack_168 >> 0x20);
                    iStack_358 = (int)ppuStack_178;
                    uStack_354 = (undefined2)((ulonglong)ppuStack_178 >> 0x20);
                    uStack_352 = (undefined2)((ulonglong)ppuStack_178 >> 0x30);
                    uStack_350 = SUB84(pcStack_170,0);
                    uStack_34c = (undefined2)((ulonglong)pcStack_170 >> 0x20);
                    uStack_34a = (undefined2)((ulonglong)pcStack_170 >> 0x30);
                    uStack_e3 = 0;
                    uVar40 = pdb_140a1ac80(&iStack_358);
                    uStack_350 = (undefined4)uVar40;
                    uStack_34c = (undefined2)((ulonglong)uVar40 >> 0x20);
                    uStack_34a = (undefined2)((ulonglong)uVar40 >> 0x30);
                    uStack_348 = SUB81(piVar47,0);
                    uStack_347 = (undefined1)((ulonglong)piVar47 >> 8);
                    uStack_346 = (undefined2)((ulonglong)piVar47 >> 0x10);
                    fStack_344 = (float)((ulonglong)piVar47 >> 0x20);
                    iStack_358 = 7;
                    uStack_354 = 0;
                    uStack_352 = 0;
                    uStack_e3 = 0;
                    pdb_140ae5180(uStack_1c0,&iStack_358,&UNK_143009300);
                  }
                }
                else {
                  uStack_e1 = 0;
                  lVar37 = pdb_140b54f80(pbStack_f0,param_3,&UNK_143009318);
                  if (lVar37 == 0) {
                    uStack_e1 = 0;
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_143009330);
                  }
                  uVar15 = *(undefined1 *)(lVar37 + 0x29c);
                  pbVar54 = (byte *)(CONCAT71(uVar55,uVar15) ^ 1);
                  *puStack_1e0 = uStack_130;
                  uStack_e1 = 0;
                  pdb_140b0e390(uStack_188,param_3,(ulonglong)pbVar54 & 0xffffffff);
                  uStack_e1 = 0;
                  pdb_140a1aa60(&ppuStack_178);
                  uStack_347 = SUB81(pbVar54,0);
                  iStack_358 = 7;
                  uStack_354 = 0;
                  uStack_352 = 0x8000;
                  uStack_e4 = 1;
                  piVar47 = &iStack_358;
                  uStack_350 = uVar57;
                  uStack_34c = uVar32;
                  uStack_34a = uVar34;
                  uStack_348 = uVar15;
                  pdb_140a1aa80(&ppuStack_178);
                  *puStack_1c8 = uStack_12c;
                  uStack_348 = SUB81(uStack_168,0);
                  uStack_347 = (undefined1)((ulonglong)uStack_168 >> 8);
                  uStack_346 = (undefined2)((ulonglong)uStack_168 >> 0x10);
                  fStack_344 = (float)((ulonglong)uStack_168 >> 0x20);
                  iStack_358 = (int)ppuStack_178;
                  uStack_354 = (undefined2)((ulonglong)ppuStack_178 >> 0x20);
                  uStack_352 = (undefined2)((ulonglong)ppuStack_178 >> 0x30);
                  uStack_350 = SUB84(pcStack_170,0);
                  uStack_34c = (undefined2)((ulonglong)pcStack_170 >> 0x20);
                  uStack_34a = (undefined2)((ulonglong)pcStack_170 >> 0x30);
                  uStack_e4 = 0;
                  uVar40 = pdb_140a1ac80(&iStack_358);
                  uStack_350 = (undefined4)uVar40;
                  uStack_34c = (undefined2)((ulonglong)uVar40 >> 0x20);
                  uStack_34a = (undefined2)((ulonglong)uVar40 >> 0x30);
                  uStack_348 = SUB81(piVar47,0);
                  uStack_347 = (undefined1)((ulonglong)piVar47 >> 8);
                  uStack_346 = (undefined2)((ulonglong)piVar47 >> 0x10);
                  fStack_344 = (float)((ulonglong)piVar47 >> 0x20);
                  iStack_358 = 7;
                  uStack_354 = 0;
                  uStack_352 = 0;
                  uStack_e4 = 0;
                  pdb_140ae5180(uStack_1c0,&iStack_358,&UNK_143009348);
                }
              }
              uStack_e1 = 0;
              lVar37 = pdb_140b54f80(pbStack_f0,param_3,&UNK_143009360);
              if (lVar37 == 0) goto code_r0x00014081ace2;
              uStack_190 = *(undefined4 *)(lVar37 + 0x28c);
              uStack_e1 = 0;
              lVar37 = pdb_140b54f80(pbStack_f0,param_3,&UNK_143009390);
              if (lVar37 == 0) {
                uStack_e1 = 0;
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_1430093a8);
              }
              uStack_f1 = *(undefined1 *)(lVar37 + 0x29c);
              uStack_e1 = 0;
              cVar42 = pdb_1408ffaf0(&uStack_1b8);
              pbVar45 = pbStack_128;
              if (cVar42 != '\0') {
                puVar44 = *(undefined8 **)((longlong)param_2 + -0x10);
                param_2 = (byte *)(puVar44 + *(longlong *)((longlong)param_2 + -8) * 0xd);
                lVar37 = 0;
                if ((byte *)puVar44 != param_2) {
                  do {
                    pbVar54 = (byte *)puVar44[5];
                    uVar38 = (longlong)pbVar54 * 0xc;
                    lStack_248 = lVar37;
                    uStack_200 = lVar37;
                    if ((byte *)0xaaaaaaaaaaaaaaa < pbVar54) {
                      uVar40 = 0;
code_r0x00014081ac41:
                      uStack_e1 = 0;
                      pdb_142dc7e2a(uVar40,uVar38);
                    /* WARNING: Does not return */
                      pcVar21 = (code *)invalidInstructionException();
                      (*pcVar21)();
                    }
                    uVar18 = puVar44[4];
                    puStack_238 = (undefined8 *)param_2;
                    puStack_1e8 = puVar44;
                    if (uVar38 == 0) {
                      pbVar49 = (byte *)0x4;
                      pbVar45 = (byte *)0x0;
                    }
                    else {
                      pdb_14007ee60();
                      uVar40 = 4;
                      pbVar49 = pub_1406abab0(uVar38,4);
                      pbVar45 = pbVar54;
                      if (pbVar49 == (byte *)0x0) goto code_r0x00014081ac41;
                    }
                    pbStack_108 = (byte *)0x0;
                    pbStack_118 = pbVar45;
                    pbStack_110 = pbVar49;
                    if (pbVar54 != (byte *)0x0) {
                      pub_142e32760(pbVar49,uVar18,uVar38);
                      pbStack_108 = pbVar54;
                    }
                    ppuVar19 = (undefined8 **)puStack_1e8[4];
                    ppuVar20 = (undefined8 **)puStack_1e8[1];
                    pbVar45 = (byte *)puStack_1e8[5];
                    if ((byte *)puStack_1e8[2] < (byte *)puStack_1e8[5]) {
                      pbVar45 = (byte *)puStack_1e8[2];
                    }
                    if (pbStack_118 + -(longlong)pbVar54 < pbVar45) {
                      uStack_e2 = 1;
                      ppuStack_120 = ppuVar19;
                      pdb_142d7f1b0(&pbStack_118,pbVar54,pbVar45,4,0xc);
                      ppuVar19 = ppuStack_120;
                      pbVar54 = pbStack_108;
joined_r0x00014081a9cf:
                      if ((byte *)0x3 < pbVar45) {
                        pfVar41 = (float *)(pbStack_110 + (longlong)pbVar54 * 0xc);
                        if (((float *)((longlong)ppuVar20 + (longlong)pbVar45 * 4) <= pfVar41 ||
                             pfVar41 + (longlong)pbVar45 * 3 <= ppuVar20) &&
                           ((float *)((longlong)ppuVar19 + (longlong)pbVar45 * 0xc) <= pfVar41 ||
                            pfVar41 + (longlong)pbVar45 * 3 <= ppuVar19)) {
                          pbStack_180 = (byte *)((ulonglong)pbVar45 & 0xfffffffffffffffc);
                          pbVar54 = pbVar54 + (longlong)pbStack_180;
                          pfVar48 = (float *)((longlong)ppuVar19 + ((longlong)pbVar45 * 3 + -1) * 4)
                          ;
                          lVar37 = 0;
                          do {
                            pfVar2 = (float *)((longlong)ppuVar20 +
                                              (longlong)(pbVar45 + lVar37 + -4) * 4);
                            fVar24 = *pfVar2;
                            fVar25 = pfVar2[1];
                            fVar26 = pfVar2[3];
                            fVar64 = pfVar48[-5];
                            fVar3 = pfVar48[-2];
                            fVar58 = pfVar48[-0xb];
                            fVar4 = pfVar48[-10];
                            fVar5 = pfVar48[-9];
                            fVar6 = pfVar48[-8];
                            fVar7 = pfVar48[-7];
                            fVar8 = pfVar48[-1];
                            fVar9 = pfVar48[-6];
                            fVar10 = pfVar48[-3];
                            fVar11 = *pfVar48;
                            fVar60 = fVar26 * 0.0;
                            fVar61 = pfVar2[2] * 0.0;
                            fVar62 = fVar25 * 0.0;
                            fVar63 = fVar24 * 0.0;
                            pfVar41[4] = pfVar48[-4] + pfVar2[2];
                            pfVar41[5] = fVar61 + fVar10;
                            pfVar41[6] = fVar6 + fVar62;
                            pfVar41[7] = fVar7 + fVar25;
                            *pfVar41 = fVar3 + fVar60;
                            pfVar41[1] = fVar8 + fVar26;
                            pfVar41[2] = fVar60 + fVar11;
                            pfVar41[3] = fVar64 + fVar61;
                            pfVar41[8] = fVar62 + fVar9;
                            pfVar41[9] = fVar58 + fVar63;
                            pfVar41[10] = fVar4 + fVar24;
                            pfVar41[0xb] = fVar63 + fVar5;
                            pfVar41 = pfVar41 + 0xc;
                            lVar37 = lVar37 + -4;
                            pfVar48 = pfVar48 + -0xc;
                          } while ((byte *)-lVar37 != pbStack_180);
                          bVar56 = pbVar45 == pbStack_180;
                          pbVar45 = (byte *)(ulonglong)((uint)pbVar45 & 3);
                          ppuStack_120 = ppuVar19;
                          if (bVar56) goto code_r0x00014081aa44;
                        }
                      }
                      pfVar41 = (float *)(pbStack_110 + (longlong)pbVar54 * 0xc + 8);
                      pfVar48 = (float *)((longlong)ppuVar19 + ((longlong)pbVar45 * 3 + -1) * 4);
                      lVar37 = 0;
                      do {
                        fVar64 = *(float *)((longlong)ppuVar20 +
                                           (longlong)(pbVar45 + lVar37 + -1) * 4);
                        fVar58 = fVar64 * fVar65;
                        fVar3 = *pfVar48;
                        *(ulonglong *)(pfVar41 + -2) =
                             CONCAT44((float)((ulonglong)*(undefined8 *)(pfVar48 + -2) >> 0x20) +
                                      fVar64 * (float)uVar30,
                                      (float)*(undefined8 *)(pfVar48 + -2) + fVar58);
                        *pfVar41 = fVar58 + fVar3;
                        lVar37 = lVar37 + -1;
                        pfVar41 = pfVar41 + 3;
                        pfVar48 = pfVar48 + -3;
                      } while ((byte *)-lVar37 != pbVar45);
                      pbVar54 = pbVar54 + -lVar37;
                    }
                    else if (pbVar45 != (byte *)0x0) goto joined_r0x00014081a9cf;
code_r0x00014081aa44:
                    pbStack_108 = pbVar54;
                    if (pbVar54 == (byte *)0x0) goto code_r0x00014081ae32;
                    uVar40 = *(undefined8 *)pbStack_110;
                    iStack_358 = (int)uVar40;
                    uStack_354 = (undefined2)((ulonglong)uVar40 >> 0x20);
                    uStack_352 = (undefined2)((ulonglong)uVar40 >> 0x30);
                    uStack_350 = *(undefined4 *)(pbStack_110 + 8);
                    if (pbVar54 == pbStack_118) {
                      uStack_e2 = 1;
                      pdb_142db7820(&pbStack_118);
                    }
                    *(undefined4 *)(pbStack_110 + (longlong)pbVar54 * 0xc + 8) = uStack_350;
                    *(ulonglong *)(pbStack_110 + (longlong)pbVar54 * 0xc) =
                         CONCAT26(uStack_352,CONCAT24(uStack_354,iStack_358));
                    pbStack_108 = pbVar54 + 1;
                    iStack_358 = (int)&puStack_1f0;
                    uStack_354 = (undefined2)((ulonglong)&puStack_1f0 >> 0x20);
                    uStack_352 = (undefined2)((ulonglong)&puStack_1f0 >> 0x30);
                    uStack_350 = 0x41422e40;
                    uStack_34c = 1;
                    uStack_34a = 0;
                    uStack_348 = 0;
                    uStack_347 = (undefined1)((ulonglong)&uStack_200 >> 8);
                    uStack_346 = (undefined2)((ulonglong)&uStack_200 >> 0x10);
                    fStack_344 = (float)((ulonglong)&uStack_200 >> 0x20);
                    pcStack_340 = pdb_140090b90;
                    uStack_338 = &uStack_190;
                    uStack_330 = pdb_140f705d0;
                    puStack_328 = &uStack_f1;
                    pcStack_320 = pdb_14081c030;
                    uStack_e2 = 1;
                    pdb_140f60760(&ppuStack_178,&UNK_1430093d8,&iStack_358);
                    pbVar54 = pbStack_108;
                    pbVar45 = pbStack_110;
                    param_3 = pbStack_118;
                    pcVar21 = pcStack_170;
                    ppuStack_120 = ppuStack_178;
                    pbStack_180 = uStack_168;
                    pdb_14007ee60();
                    pbVar49 = pub_1406abab0(0x28,8);
                    pbStack_1d0 = (byte *)pcVar21;
                    if (pbVar49 == (byte *)0x0) {
                      pbStack_f0 = param_3;
                      pbStack_128 = pbVar45;
                    /* WARNING: Subroutine does not return */
                      pdb_142dc7e11(8,0x28);
                    }
                    pbVar49[0] = 1;
                    pbVar49[1] = 0;
                    pbVar49[2] = 0;
                    pbVar49[3] = 0;
                    pbVar49[4] = 0;
                    pbVar49[5] = 0;
                    pbVar49[6] = 0;
                    pbVar49[7] = 0;
                    pbVar49[8] = 1;
                    pbVar49[9] = 0;
                    pbVar49[10] = 0;
                    pbVar49[0xb] = 0;
                    pbVar49[0xc] = 0;
                    pbVar49[0xd] = 0;
                    pbVar49[0xe] = 0;
                    pbVar49[0xf] = 0;
                    *(byte **)(pbVar49 + 0x10) = param_3;
                    *(byte **)(pbVar49 + 0x18) = pbVar45;
                    *(byte **)(pbVar49 + 0x20) = pbVar54;
                    pdb_1409baea0(&iStack_358,pcVar21,pbStack_180,pbVar49,&UNK_1430093f0);
                    param_2 = (byte *)puStack_238;
                    uStack_158 = SUB84(uStack_338,0);
                    uStack_154 = (undefined4)((ulonglong)uStack_338 >> 0x20);
                    ppuStack_178 = (undefined8 **)
                                   CONCAT26(uStack_352,CONCAT24(uStack_354,iStack_358));
                    pcStack_170 = (code *)CONCAT26(uStack_34a,CONCAT24(uStack_34c,uStack_350));
                    uStack_168 = (byte *)CONCAT44(fStack_344,
                                                  CONCAT22(uStack_346,
                                                           CONCAT11(uStack_347,uStack_348)));
                    pcStack_160 = pcStack_340;
                    pdb_140b133a0(uStack_240,&ppuStack_178);
                    pbVar45 = pbStack_128;
                    if (ppuStack_120 != (undefined8 **)0x0) {
                      pub_1406abac0(pbStack_1d0,(ulonglong)ppuStack_120,1);
                    }
                    puVar44 = puStack_1e8 + 0xd;
                    lVar37 = lStack_248 + 1;
                  } while ((byte *)puVar44 != param_2);
                }
              }
            }
          }
          uVar53 = uVar53 - 1 & uVar53;
        }
        if (cStack_e5 == '\0') {
          return;
        }
        plVar39 = (longlong *)pdb_140e97000();
        if (((char)plVar39[0xd] != '\x01') &&
           (plVar39 = (longlong *)pdb_142dd9610(plVar39,0), plVar39 == (longlong *)0x0)) break;
        uVar38 = 0xffffffffffffffff;
        if (*plVar39 == 0) {
          *plVar39 = -1;
          pbStack_f0 = (byte *)plVar39;
          pdb_140e95370(plVar39 + 1,unaff_RSI);
LAB_140819e17:
          *(longlong *)pbStack_f0 = *(longlong *)pbStack_f0 + 1;
          return;
        }
      }
      else {
        if ((char)uVar38 == '\0') {
          return;
        }
        plVar39 = (longlong *)pdb_140e97000();
        if (((char)plVar39[0xd] != '\x01') &&
           (plVar39 = (longlong *)pdb_142dd9610(plVar39,0), plVar39 == (longlong *)0x0)) break;
        if (*plVar39 == 0) {
          *plVar39 = -1;
          pbStack_f0 = (byte *)plVar39;
          pdb_140e95370(plVar39 + 1,unaff_RSI);
          goto LAB_140819e17;
        }
      }
    }
    plVar39 = (longlong *)pdb_142dc8090(&UNK_1433079b0);
LAB_14081acae:
    plVar39 = (longlong *)pdb_142dd9610(plVar39,0);
  } while (plVar39 != (longlong *)0x0);
  pdb_142dc7890(&UNK_143307940);
code_r0x00014081ace2:
  uStack_e1 = 0;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143009378);
}

