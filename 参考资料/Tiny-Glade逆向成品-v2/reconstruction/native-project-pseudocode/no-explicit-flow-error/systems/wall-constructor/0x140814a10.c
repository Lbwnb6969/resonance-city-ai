// VA 0x140814a10, PDB extent 3339 bytes
// system_wall_constructor::ui_arch_controls::do_ui_arch_controls
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/ui_arch_controls.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: system_wall_constructor::ui_arch_controls::do_ui_arch_controls
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/ui_arch_controls.rs
   Extent: 3339 */

void pdb_140814a10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12
                  ,undefined8 *param_13,undefined8 *param_14,undefined8 param_15,
                  undefined8 *param_16)

{
  byte *pbVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  byte bVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  code *pcVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  char cVar15;
  byte bVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  char *pcVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined *puVar30;
  longlong lVar31;
  longlong *plVar32;
  ushort uVar33;
  undefined *puVar34;
  undefined *puVar35;
  longlong lVar36;
  ulonglong uVar37;
  longlong lVar38;
  ulonglong uVar39;
  bool bVar40;
  bool bVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 in_stack_fffffffffffffdb8;
  undefined8 uVar46;
  undefined4 uVar47;
  undefined1 auStack_224 [4];
  float fStack_220;
  undefined8 ****ppppuStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined1 uStack_208;
  undefined1 uStack_207;
  undefined2 uStack_206;
  float fStack_204;
  undefined1 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  longlong lStack_f0;
  undefined8 uStack_e8;
  longlong lStack_e0;
  undefined8 ***apppuStack_d8 [4];
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  longlong lStack_a0;
  undefined8 **ppuStack_98;
  longlong *plStack_90;
  undefined8 *puStack_88;
  longlong *plStack_80;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uVar47 = (undefined4)((ulonglong)in_stack_fffffffffffffdb8 >> 0x20);
  uStack_70 = 0xfffffffffffffffe;
  plStack_80 = param_2;
  cVar15 = pdb_140e94b40();
  if (cVar15 == '\0') {
    bVar40 = false;
    lStack_a0 = 0;
    pcVar24 = (char *)*param_1;
    if (*pcVar24 != '\0') goto LAB_140814b7a;
LAB_140814c24:
    if (*(int *)(pcVar24 + 8) == 0) {
      lVar18 = param_16[1];
      uVar27 = *(ulonglong *)*param_16;
      uVar39 = 0;
      uVar19 = uVar27 - *(ulonglong *)(lVar18 + 0x18);
      if (uVar27 < *(ulonglong *)(lVar18 + 0x18)) {
        uVar19 = uVar39;
      }
      uVar21 = uVar27 - *(ulonglong *)(lVar18 + 0x38);
      if (uVar27 < *(ulonglong *)(lVar18 + 0x38)) {
        uVar21 = uVar39;
      }
      uVar27 = *(ulonglong *)(lVar18 + 0x10);
      uVar9 = *(ulonglong *)(lVar18 + 0x30);
      bVar40 = uVar9 < uVar21;
      uVar25 = uVar9 - uVar21;
      uVar26 = uVar25;
      if (bVar40) {
        uVar26 = uVar39;
      }
      bVar41 = uVar27 < uVar19;
      uVar28 = uVar27 - uVar19;
      uVar29 = uVar28;
      if (bVar41) {
        uVar29 = uVar39;
      }
      plStack_90 = *(longlong **)(lVar18 + 8);
      uVar37 = uVar26 + uVar29;
      if (!bVar41 && uVar28 != 0 || !bVar40 && uVar25 != 0) {
        uVar37 = uVar39;
      }
      lVar38 = *(longlong *)(lVar18 + 0x28);
      *(ulonglong *)*param_16 = *(longlong *)(lVar18 + 0x40) - uVar37;
      puStack_88 = param_3;
      if (!bVar41 && uVar28 != 0 || !bVar40 && uVar25 != 0) {
        plVar20 = plStack_90 + uVar19 * 3;
        if (uVar27 < uVar19) {
          plVar20 = (longlong *)0x8;
        }
        plVar32 = (longlong *)0x0;
        if (uVar19 < uVar27) {
          plVar32 = plVar20 + uVar29 * 3 + -3;
        }
        lVar38 = lVar38 + uVar21 * 0x18;
        if (uVar9 < uVar21) {
          lVar38 = 8;
        }
        plVar20 = (longlong *)(lVar38 + -0x18 + uVar26 * 0x18);
        if (uVar9 <= uVar21) {
          plVar20 = plVar32;
        }
        lVar18 = *plVar20;
        lVar38 = plVar20[1];
        param_4 = (longlong *)*param_4;
        lStack_f0 = lVar38;
        if (param_4[3] != 0) {
          uVar27 = pdb_1400af0a0(param_4 + 4,&lStack_f0);
          bVar16 = (byte)(uVar27 >> 0x39);
          auVar43 = ZEXT216(CONCAT11(bVar16,bVar16));
          auVar43 = pshuflw(auVar43,auVar43,0);
          lVar31 = 0;
          while( true ) {
            uVar27 = uVar27 & param_4[1];
            auVar5 = *(undefined1 (*) [16])(*param_4 + uVar27);
            auVar45[0] = -(auVar5[0] == auVar43[0]);
            auVar45[1] = -(auVar5[1] == auVar43[1]);
            auVar45[2] = -(auVar5[2] == auVar43[2]);
            auVar45[3] = -(auVar5[3] == auVar43[3]);
            auVar45[4] = -(auVar5[4] == auVar43[4]);
            auVar45[5] = -(auVar5[5] == auVar43[5]);
            auVar45[6] = -(auVar5[6] == auVar43[6]);
            auVar45[7] = -(auVar5[7] == auVar43[7]);
            auVar45[8] = -(auVar5[8] == auVar43[0]);
            auVar45[9] = -(auVar5[9] == auVar43[1]);
            auVar45[10] = -(auVar5[10] == auVar43[2]);
            auVar45[0xb] = -(auVar5[0xb] == auVar43[3]);
            auVar45[0xc] = -(auVar5[0xc] == auVar43[4]);
            auVar45[0xd] = -(auVar5[0xd] == auVar43[5]);
            auVar45[0xe] = -(auVar5[0xe] == auVar43[6]);
            auVar45[0xf] = -(auVar5[0xf] == auVar43[7]);
            uVar33 = (ushort)(SUB161(auVar45 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe |
                     (ushort)(auVar45[0xf] >> 7) << 0xf;
            uVar17 = (uint)uVar33;
            while (uVar33 != 0) {
              uVar12 = 0;
              for (uVar13 = uVar17; (uVar13 & 1) == 0; uVar13 = uVar13 >> 1 | 0x80000000) {
                uVar12 = uVar12 + 1;
              }
              lVar36 = *param_4 + (uVar12 + uVar27 & param_4[1]) * -0x20;
              if (lVar38 == *(longlong *)(lVar36 + -0x20)) {
                uStack_e8 = pdb_1406d0830(*param_10);
                lStack_e0 = lVar18;
                bVar16 = pdb_1408ffab0(&uStack_e8);
                cVar15 = '\x03';
                if (1 < bVar16) {
                  cVar15 = bVar16 - 2;
                }
                uVar4 = uStack_210;
                uVar14 = uStack_20c;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                switch(cVar15) {
                case '\x01':
                  pdb_1408ff9a0(&ppppuStack_218,&uStack_e8);
                  if ((int)ppppuStack_218 == 2) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_143008858);
                  }
                  uStack_a8 = uStack_1e8;
                  uStack_b8 = (undefined4)uStack_1f8;
                  uStack_b4 = (undefined4)((ulonglong)uStack_1f8 >> 0x20);
                  uStack_b0 = (undefined4)uStack_1f0;
                  uStack_ac = (undefined4)((ulonglong)uStack_1f0 >> 0x20);
                  apppuStack_d8[0] = ppppuStack_218;
                  *(undefined4 *)(param_6 + 1) = uStack_ac;
                  *param_6 = CONCAT44(uStack_b0,uStack_b4);
                  lVar18 = lVar38;
                  lVar31 = pdb_140b54f80(*puStack_88,lVar38,&UNK_143008870);
                  if (lVar31 == 0) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_143008888);
                  }
                  *(undefined4 *)((longlong)param_6 + 0xc) = *(undefined4 *)(lVar31 + 0x28c);
                  uVar4 = *(undefined4 *)((longlong)param_13 + 0x1c);
                  puVar10 = (undefined4 *)param_13[2];
                  *puVar10 = uVar4;
                  uVar46 = *param_13;
                  uVar22 = pdb_140947f90(lVar38);
                  uVar23 = *param_12;
                  pdb_141469a80(uVar46,uVar22,lVar18,uVar23,param_5,&UNK_1430088a0,0xd);
                  uVar47 = (undefined4)((ulonglong)param_5 >> 0x20);
                  *puVar10 = uVar4;
                  pdb_140c419b0(uVar46,lVar38,uVar23);
                  uVar4 = uStack_210;
                  uVar14 = uStack_20c;
                  break;
                case '\x02':
                  pdb_140bce520(apppuStack_d8,*param_9);
                  uVar17 = *(uint *)*param_7;
                  auVar43 = ZEXT416(uVar17);
                  uVar23 = pdb_140bce550(apppuStack_d8,uVar17,((uint *)*param_7)[1]);
                  uVar46 = *param_8;
                  uStack_210 = *(undefined4 *)(param_6 + 1);
                  ppppuStack_218 = (undefined8 ****)*param_6;
                  uStack_20c = 0;
                  uStack_208 = 0;
                  uStack_207 = 0;
                  uStack_206 = 0x3f80;
                  fStack_204 = 0.0;
                  uStack_100 = _DAT_143008720;
                  uStack_f8 = 0;
                  pdb_140bce5a0(auStack_224,uVar23,auVar43._0_8_,apppuStack_d8,uVar46,
                                &ppppuStack_218,&uStack_100);
                  uVar47 = (undefined4)((ulonglong)uVar46 >> 0x20);
                  fVar2 = *(float *)((longlong)param_6 + 4);
                  uVar46 = *plStack_80;
                  lVar18 = pdb_140b0e4b0(uVar46,lVar38);
                  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_1430088b0);
                  }
                  fVar42 = (fStack_220 - fVar2) + *(float *)((longlong)param_6 + 0xc);
                  fVar2 = *(float *)(lVar18 + 0x5c);
                  fVar3 = _DAT_142e36f28;
                  if (_DAT_142e36f28 <= fVar42) {
                    fVar3 = fVar42;
                  }
                  fVar42 = _DAT_143008730;
                  if (fVar3 <= _DAT_143008730) {
                    fVar42 = fVar3;
                  }
                  *(undefined4 *)plStack_80[2] = *(undefined4 *)((longlong)plStack_80 + 0x1c);
                  pdb_140b0e3d0(uVar46,lVar38);
                  uVar4 = uStack_210;
                  uVar14 = uStack_20c;
                  if (fVar2 != fVar42) {
                    lVar18 = pdb_140b54f80(*puStack_88,lVar38,&UNK_1430088c8);
                    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc8150(&UNK_1430088e0);
                    }
                    cVar15 = pdb_1408ff980();
                    bVar16 = 0x1e;
                    if (cVar15 == '\0') {
                      bVar16 = 0;
                    }
                    uVar4 = *(undefined4 *)(param_6 + 1);
                    uStack_208 = (undefined1)uVar4;
                    uStack_207 = (undefined1)((uint)uVar4 >> 8);
                    uStack_206 = (undefined2)((uint)uVar4 >> 0x10);
                    uStack_210 = (undefined4)*param_6;
                    uStack_20c = (undefined4)((ulonglong)*param_6 >> 0x20);
                    ppppuStack_218._0_2_ = (ushort)bVar16;
                    uStack_200 = 0;
                    fStack_204 = 1.0;
                    pdb_14146bf80(param_15,&ppppuStack_218,&UNK_1430088f8);
                    uVar4 = uStack_210;
                    uVar14 = uStack_20c;
                  }
                  break;
                case '\x03':
                  uVar46 = *puStack_88;
                  lVar18 = pdb_140b54f80(uVar46,lVar38,&UNK_143008910);
                  uVar14 = uStack_20c;
                  uVar4 = uStack_210;
                  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_143008928);
                  }
                  fVar2 = *(float *)(lVar18 + 0x28c);
                  fVar3 = *(float *)((longlong)param_6 + 0xc);
                  fVar42 = (float)((uint)(fVar2 - fVar3) & _DAT_142e377e0);
                  uStack_210 = (undefined4)lVar38;
                  uStack_20c = (undefined4)((ulonglong)lVar38 >> 0x20);
                  if ((fVar42 < _DAT_142e37ad4 & bVar16) == 0) {
                    if (_DAT_142e37ad4 <= fVar42) {
                      pdb_140a1aa60(apppuStack_d8);
                      uStack_208 = SUB41(fVar3,0);
                      uStack_207 = (undefined1)((uint)fVar3 >> 8);
                      uStack_206 = (undefined2)((uint)fVar3 >> 0x10);
                      ppppuStack_218 = (undefined8 ****)0x8000000000000006;
                      uStack_71 = 1;
                      fStack_204 = fVar2;
                      pdb_140a1aa80(apppuStack_d8,&ppppuStack_218);
                      *(undefined4 *)param_14[2] = *(undefined4 *)((longlong)param_14 + 0x1c);
                      uVar46 = *param_14;
                      uStack_208 = SUB81(apppuStack_d8[2],0);
                      uStack_207 = (undefined1)((ulonglong)apppuStack_d8[2] >> 8);
                      uStack_206 = (undefined2)((ulonglong)apppuStack_d8[2] >> 0x10);
                      fStack_204 = (float)((ulonglong)apppuStack_d8[2] >> 0x20);
                      ppppuStack_218 = (undefined8 ****)apppuStack_d8[0];
                      uStack_210 = SUB84(apppuStack_d8[1],0);
                      uStack_20c = (undefined4)((ulonglong)apppuStack_d8[1] >> 0x20);
                      uStack_71 = 0;
                      uVar23 = pdb_140a1ac80(&ppppuStack_218);
                      uStack_210 = (undefined4)uVar23;
                      uStack_20c = (undefined4)((ulonglong)uVar23 >> 0x20);
                      uStack_208 = SUB81(param_14,0);
                      uStack_207 = (undefined1)((ulonglong)param_14 >> 8);
                      uStack_206 = (undefined2)((ulonglong)param_14 >> 0x10);
                      fStack_204 = (float)((ulonglong)param_14 >> 0x20);
                      ppppuStack_218 = (undefined8 ****)0x7;
                      uStack_71 = 0;
                      pdb_140ae5180(uVar46,&ppppuStack_218,&UNK_143008940);
                      uVar4 = uStack_210;
                      uVar14 = uStack_20c;
                    }
                  }
                  else {
                    lVar18 = pdb_140b54f80(uVar46,lVar38,&UNK_143008958);
                    if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                      pdb_142dc8150(&UNK_143008970);
                    }
                    uVar8 = *(undefined1 *)(lVar18 + 0x29c);
                    uVar27 = CONCAT71((int7)((ulonglong)uVar46 >> 8),uVar8) ^ 1;
                    *(undefined4 *)plStack_80[2] = *(undefined4 *)((longlong)plStack_80 + 0x1c);
                    pdb_140b0e390(*plStack_80,lVar38,uVar27 & 0xffffffff);
                    pdb_140a1aa60(apppuStack_d8);
                    uStack_207 = (undefined1)uVar27;
                    ppppuStack_218 = (undefined8 ****)0x8000000000000007;
                    uStack_72 = 1;
                    uStack_208 = uVar8;
                    pdb_140a1aa80(apppuStack_d8,&ppppuStack_218);
                    *(undefined4 *)param_14[2] = *(undefined4 *)((longlong)param_14 + 0x1c);
                    uVar46 = *param_14;
                    uStack_208 = SUB81(apppuStack_d8[2],0);
                    uStack_207 = (undefined1)((ulonglong)apppuStack_d8[2] >> 8);
                    uStack_206 = (undefined2)((ulonglong)apppuStack_d8[2] >> 0x10);
                    fStack_204 = (float)((ulonglong)apppuStack_d8[2] >> 0x20);
                    ppppuStack_218 = (undefined8 ****)apppuStack_d8[0];
                    uStack_210 = SUB84(apppuStack_d8[1],0);
                    uStack_20c = (undefined4)((ulonglong)apppuStack_d8[1] >> 0x20);
                    uStack_72 = 0;
                    uVar23 = pdb_140a1ac80(&ppppuStack_218);
                    uStack_210 = (undefined4)uVar23;
                    uStack_20c = (undefined4)((ulonglong)uVar23 >> 0x20);
                    uStack_208 = SUB81(param_14,0);
                    uStack_207 = (undefined1)((ulonglong)param_14 >> 8);
                    uStack_206 = (undefined2)((ulonglong)param_14 >> 0x10);
                    fStack_204 = (float)((ulonglong)param_14 >> 0x20);
                    ppppuStack_218 = (undefined8 ****)0x7;
                    uStack_72 = 0;
                    pdb_140ae5180(uVar46,&ppppuStack_218,&UNK_143008988);
                    uVar4 = uStack_210;
                    uVar14 = uStack_20c;
                  }
                }
                uStack_20c = uVar14;
                uStack_210 = uVar4;
                uVar46 = *puStack_88;
                lVar18 = pdb_140b54f80(uVar46,lVar38,&UNK_1430089a0);
                if (lVar18 != 0) {
                  uVar4 = *(undefined4 *)(lVar18 + 0x28c);
                  lVar18 = pdb_140b54f80(uVar46,lVar38,&UNK_1430089d0);
                  if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
                    pdb_142dc8150(&UNK_1430089e8);
                  }
                  uVar8 = *(undefined1 *)(lVar18 + 0x29c);
                  cVar15 = pdb_1408ffaf0(&uStack_e8);
                  if (cVar15 != '\0') {
                    pdb_1409fe300(*param_11,lVar38,*(undefined8 *)(lVar36 + -0x10),
                                  *(undefined8 *)(lVar36 + -8),CONCAT44(uVar47,uVar4),uVar8);
                  }
                  if (lStack_a0 == 0) {
                    return;
                  }
                  apppuStack_d8[0] = &ppuStack_98;
                  ppppuStack_218 = apppuStack_d8;
                  pdb_1414093d0(&UNK_143008ae0,&ppppuStack_218);
                  return;
                }
                goto code_r0x00014081541d;
              }
              uVar33 = (ushort)(uVar17 - 1) & (ushort)uVar17;
              uVar17 = CONCAT22((short)(uVar17 - 1 >> 0x10),uVar33);
            }
            auVar44[0] = -(auVar5[0] == -1);
            auVar44[1] = -(auVar5[1] == -1);
            auVar44[2] = -(auVar5[2] == -1);
            auVar44[3] = -(auVar5[3] == -1);
            auVar44[4] = -(auVar5[4] == -1);
            auVar44[5] = -(auVar5[5] == -1);
            auVar44[6] = -(auVar5[6] == -1);
            auVar44[7] = -(auVar5[7] == -1);
            auVar44[8] = -(auVar5[8] == -1);
            auVar44[9] = -(auVar5[9] == -1);
            auVar44[10] = -(auVar5[10] == -1);
            auVar44[0xb] = -(auVar5[0xb] == -1);
            auVar44[0xc] = -(auVar5[0xc] == -1);
            auVar44[0xd] = -(auVar5[0xd] == -1);
            auVar44[0xe] = -(auVar5[0xe] == -1);
            auVar44[0xf] = -(auVar5[0xf] == -1);
            if ((((((((((((((((SUB161(auVar44 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar44 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar44 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar44 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar44 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar44 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar44 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar44 >> 0x3f,0) & 1) != 0) || (SUB161(auVar44 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar44 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar44 >> 0x57,0) & 1) != 0) || (SUB161(auVar44 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar44 >> 0x67,0) & 1) != 0) || (SUB161(auVar44 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar44 >> 0x77,0) & 1) != 0) || auVar44[0xf] < '\0') break;
            uVar27 = uVar27 + lVar31 + 0x10;
            lVar31 = lVar31 + 0x10;
          }
        }
      }
    }
    if (lStack_a0 == 0) {
      return;
    }
  }
  else {
    puVar34 = &UNK_143008a9e;
    lVar38 = 0x3e;
    uVar27 = 0x3e;
    lVar18 = pdb_140815720(&UNK_143008a9e);
    if (lVar18 == 1) {
      if (0x3e < uVar27) {
LAB_1408154b8:
        pdb_142dc8070(&UNK_143008a9e,0x3e,0);
LAB_1408154d8:
        pdb_142dc8070(&UNK_143008a9e,0x3e);
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      puVar34 = &UNK_143008a9e;
      uVar19 = pdb_140815720(&UNK_143008a9e);
      if ((uVar19 & 1) != 0) {
        if (0x3e < uVar27 + 2) goto LAB_1408154d8;
        lVar38 = 0x3c - uVar27;
        puVar34 = &UNK_143008aa0 + uVar27;
      }
    }
    puVar30 = &UNK_14300882f;
    puVar35 = &UNK_1430087f8;
    do {
      bVar16 = puVar30[-1];
      uVar17 = (uint)(char)bVar16;
      if ((char)bVar16 < '\0') {
        bVar6 = puVar30[-2];
        if ((char)bVar6 < -0x40) {
          bVar7 = puVar30[-3];
          if ((char)bVar7 < -0x40) {
            pbVar1 = puVar30 + -4;
            puVar30 = puVar30 + -4;
            uVar17 = bVar7 & 0x3f | (*pbVar1 & 7) << 6;
          }
          else {
            puVar30 = puVar30 + -3;
            uVar17 = bVar7 & 0xf;
          }
          uVar17 = bVar6 & 0x3f | uVar17 << 6;
        }
        else {
          puVar30 = puVar30 + -2;
          uVar17 = bVar6 & 0x1f;
        }
        uVar17 = (uint)(bVar16 & 0x3f) | uVar17 << 6;
        if (uVar17 != 0x5c) goto LAB_140814b54;
LAB_140814b88:
        puVar35 = puVar30 + -0x1430087f7;
        if ((undefined *)0x37 < puVar35) {
          pdb_142dc8070(&UNK_1430087f8,0x37,puVar35,0x37,&UNK_143008b40);
          goto LAB_1408154b8;
        }
        lVar18 = 0x37 - (longlong)puVar35;
        puVar35 = puVar30 + 1;
        goto LAB_140814baa;
      }
      puVar30 = puVar30 + -1;
      if (uVar17 == 0x5c) goto LAB_140814b88;
LAB_140814b54:
      if (uVar17 == 0x2f) goto LAB_140814b88;
    } while (puVar30 != &UNK_1430087f8);
    lVar18 = 0x37;
LAB_140814baa:
    plVar20 = (longlong *)pdb_140e97000();
    if (((char)plVar20[0xd] != '\x01') &&
       (plVar20 = (longlong *)pdb_142dd9610(plVar20,0), plVar20 == (longlong *)0x0))
    goto LAB_140815410;
    if (*plVar20 != 0) goto LAB_1408153dc;
    *plVar20 = -1;
    plStack_90 = plVar20;
    ppuStack_98 = (undefined8 **)pdb_140e94f10(plVar20 + 1,puVar34,lVar38,puVar35,lVar18,1,0);
    uVar47 = (undefined4)((ulonglong)lVar18 >> 0x20);
    *plStack_90 = *plStack_90 + 1;
    bVar40 = true;
    lStack_a0 = 1;
    pcVar24 = (char *)*param_1;
    if (*pcVar24 == '\0') goto LAB_140814c24;
LAB_140814b7a:
    if (!bVar40) {
      return;
    }
  }
  plVar20 = (longlong *)pdb_140e97000();
  if ((char)plVar20[0xd] != '\x01') goto LAB_1408153e8;
  do {
    if (*plVar20 == 0) {
      *plVar20 = -1;
      plStack_80 = plVar20;
      pdb_140e95370(plVar20 + 1,ppuStack_98);
      *plStack_80 = *plStack_80 + 1;
      return;
    }
LAB_1408153dc:
    plVar20 = (longlong *)pdb_142dc8090(&UNK_1433079b0);
LAB_1408153e8:
    plVar20 = (longlong *)pdb_142dd9610(plVar20,0);
  } while (plVar20 != (longlong *)0x0);
LAB_140815410:
  pdb_142dc7890(&UNK_143307940);
code_r0x00014081541d:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1430089b8);
}

