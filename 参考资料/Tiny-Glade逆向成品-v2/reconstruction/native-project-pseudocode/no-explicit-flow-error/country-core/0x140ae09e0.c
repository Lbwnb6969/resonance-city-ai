// VA 0x140ae09e0, PDB extent 2253 bytes
// country_core::systems::wall::deferred_wall_history::history_record_merge_walls
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/deferred_wall_history.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::wall::deferred_wall_history::history_record_merge_walls
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/wall/deferred_wall_history.rs
   Extent: 2253 */

void pdb_140ae09e0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte *pbVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined4 *puVar23;
  ushort uVar24;
  longlong lVar25;
  undefined8 uVar26;
  byte bVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  ulonglong uStack_2c8;
  byte *pbStack_2c0;
  ulonglong uStack_2b8;
  ulonglong uStack_2b0;
  byte *pbStack_2a8;
  ulonglong uStack_2a0;
  ulonglong uStack_298;
  ulonglong uStack_290;
  ulonglong uStack_288;
  ulonglong uStack_280;
  ulonglong uStack_278;
  ulonglong uStack_270;
  ulonglong uStack_268;
  ulonglong uStack_260;
  ulonglong uStack_258;
  byte *pbStack_250;
  ulonglong uStack_248;
  ulonglong uStack_240;
  byte *pbStack_238;
  ulonglong uStack_230;
  ulonglong uStack_228;
  ulonglong uStack_220;
  ulonglong uStack_218;
  ulonglong uStack_210;
  ulonglong uStack_208;
  ulonglong uStack_200;
  ulonglong uStack_1f8;
  ulonglong uStack_1f0;
  ulonglong uStack_1e8;
  ulonglong uStack_1e0;
  byte *pbStack_1d8;
  ulonglong uStack_1d0;
  ulonglong uStack_1c8;
  byte *pbStack_1c0;
  ulonglong uStack_1b8;
  undefined4 uStack_1b0;
  uint uStack_1a8;
  undefined8 uStack_1a4;
  undefined8 uStack_19c;
  undefined8 uStack_194;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  ulonglong uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 uStack_160;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulonglong uStack_a8;
  longlong lStack_a0;
  ulonglong uStack_98;
  undefined8 *puStack_90;
  byte *pbStack_88;
  ulonglong uStack_80;
  undefined1 uStack_71;
  undefined8 uStack_70;
  
  uStack_70 = 0xfffffffffffffffe;
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  puVar4 = (ulonglong *)*param_2;
  uVar15 = *puVar4;
  uVar5 = puVar4[1];
  uVar6 = puVar4[0x1f];
  pbStack_88 = (byte *)puVar4[0x20];
  uVar22 = puVar4[0x21];
  uVar13 = puVar4[0x22];
  uVar14 = puVar4[0x23];
  uVar2 = *(undefined4 *)((longlong)puVar4 + 0x11c);
  uVar18 = puVar4[0x24];
  *puVar4 = 2;
  if (uVar15 == 2) {
    return;
  }
  uStack_80 = CONCAT44(uStack_80._4_4_,*(undefined4 *)((longlong)puVar4 + 0x114));
  uStack_1f8 = puVar4[0xf];
  uStack_1f0 = puVar4[0x10];
  uStack_208 = puVar4[0xd];
  uStack_200 = puVar4[0xe];
  uStack_218 = puVar4[0xb];
  uStack_210 = puVar4[0xc];
  uStack_258 = puVar4[3];
  pbStack_250 = (byte *)puVar4[4];
  uStack_248 = puVar4[5];
  uStack_240 = puVar4[6];
  pbStack_238 = (byte *)puVar4[7];
  uStack_230 = puVar4[8];
  uStack_228 = puVar4[9];
  uStack_220 = puVar4[10];
  uStack_268 = puVar4[0x1d];
  uStack_260 = puVar4[0x1e];
  uStack_278 = puVar4[0x1b];
  uStack_270 = puVar4[0x1c];
  uStack_288 = puVar4[0x19];
  uStack_280 = puVar4[0x1a];
  uStack_2c8 = puVar4[0x11];
  pbStack_2c0 = (byte *)puVar4[0x12];
  uStack_2b8 = puVar4[0x13];
  uStack_2b0 = puVar4[0x14];
  pbStack_2a8 = (byte *)puVar4[0x15];
  uStack_2a0 = puVar4[0x16];
  uStack_298 = puVar4[0x17];
  uStack_290 = puVar4[0x18];
  puStack_90 = param_1;
  if ((uVar15 & 1) != 0) {
    *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
    uVar19 = *param_1;
    pdb_140ae2d30(&uStack_1e8,uVar5);
    pdb_140ae5180(uVar19,&uStack_1e8,&UNK_14304f180);
  }
  param_3 = (longlong *)*param_3;
  uStack_1e8 = uVar22;
  uStack_98 = uVar22;
  if (param_3[3] == 0) {
LAB_140ae0cfe:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_14304f198);
  }
  uVar15 = pdb_1400af0a0(param_3 + 4,&uStack_1e8);
  lVar25 = *param_3;
  bVar27 = (byte)(uVar15 >> 0x39);
  auVar28 = ZEXT216(CONCAT11(bVar27,bVar27));
  auVar28 = pshuflw(auVar28,auVar28,0);
  lVar17 = 0;
  while( true ) {
    uVar15 = uVar15 & param_3[1];
    auVar1 = *(undefined1 (*) [16])(lVar25 + uVar15);
    auVar30[0] = -(auVar1[0] == auVar28[0]);
    auVar30[1] = -(auVar1[1] == auVar28[1]);
    auVar30[2] = -(auVar1[2] == auVar28[2]);
    auVar30[3] = -(auVar1[3] == auVar28[3]);
    auVar30[4] = -(auVar1[4] == auVar28[4]);
    auVar30[5] = -(auVar1[5] == auVar28[5]);
    auVar30[6] = -(auVar1[6] == auVar28[6]);
    auVar30[7] = -(auVar1[7] == auVar28[7]);
    auVar30[8] = -(auVar1[8] == auVar28[0]);
    auVar30[9] = -(auVar1[9] == auVar28[1]);
    auVar30[10] = -(auVar1[10] == auVar28[2]);
    auVar30[0xb] = -(auVar1[0xb] == auVar28[3]);
    auVar30[0xc] = -(auVar1[0xc] == auVar28[4]);
    auVar30[0xd] = -(auVar1[0xd] == auVar28[5]);
    auVar30[0xe] = -(auVar1[0xe] == auVar28[6]);
    auVar30[0xf] = -(auVar1[0xf] == auVar28[7]);
    uVar24 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf;
    uVar21 = (uint)uVar24;
    if (uVar24 != 0) break;
LAB_140ae0c28:
    auVar29[0] = -(auVar1[0] == -1);
    auVar29[1] = -(auVar1[1] == -1);
    auVar29[2] = -(auVar1[2] == -1);
    auVar29[3] = -(auVar1[3] == -1);
    auVar29[4] = -(auVar1[4] == -1);
    auVar29[5] = -(auVar1[5] == -1);
    auVar29[6] = -(auVar1[6] == -1);
    auVar29[7] = -(auVar1[7] == -1);
    auVar29[8] = -(auVar1[8] == -1);
    auVar29[9] = -(auVar1[9] == -1);
    auVar29[10] = -(auVar1[10] == -1);
    auVar29[0xb] = -(auVar1[0xb] == -1);
    auVar29[0xc] = -(auVar1[0xc] == -1);
    auVar29[0xd] = -(auVar1[0xd] == -1);
    auVar29[0xe] = -(auVar1[0xe] == -1);
    auVar29[0xf] = -(auVar1[0xf] == -1);
    if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar29 >> 0x17,0) & 1) != 0) || (SUB161(auVar29 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar29 >> 0x27,0) & 1) != 0) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar29 >> 0x37,0) & 1) != 0) || (SUB161(auVar29 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar29 >> 0x47,0) & 1) != 0) || (SUB161(auVar29 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar29 >> 0x57,0) & 1) != 0) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') goto LAB_140ae0cfe;
    uVar15 = uVar15 + lVar17 + 0x10;
    lVar17 = lVar17 + 0x10;
  }
  while( true ) {
    uVar9 = 0;
    for (uVar10 = uVar21; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar9 = uVar9 + 1;
    }
    lVar20 = (uVar9 + uVar15 & param_3[1]) * -0x78;
    if (uStack_98 == *(ulonglong *)(lVar25 + -0x78 + lVar20)) break;
    uVar24 = (ushort)(uVar21 - 1) & (ushort)uVar21;
    uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar24);
    if (uVar24 == 0) goto LAB_140ae0c28;
  }
  uStack_b0 = 0;
  uStack_a8 = 8;
  lStack_a0 = 0;
  uStack_71 = 1;
  pdb_140a1a490(&uStack_b0,uVar6,&uStack_258,(int)uVar13,(int)uVar14);
  uStack_71 = 1;
  pdb_140a1a490(&uStack_b0,pbStack_88,&uStack_2c8,uStack_80 & 0xffffffff,uVar2);
  lVar25 = lVar25 + lVar20;
  uVar5 = *(ulonglong *)(lVar25 + -0x60);
  uVar15 = uVar5 * 8;
  if (uVar15 < 0x7ffffffffffffffd && uVar5 >> 0x3d == 0) {
    uVar2 = *(undefined4 *)(lVar25 + -0x1c);
    uVar19 = *(undefined8 *)(lVar25 + -0x68);
    if (uVar15 == 0) {
      pbVar16 = (byte *)0x4;
      uStack_1e0 = 0;
    }
    else {
      pdb_14007ee60();
      uVar26 = 4;
      pbVar16 = pub_1406abab0(uVar15,4);
      uStack_1e0 = uVar5;
      if (pbVar16 == (byte *)0x0) goto LAB_140ae0ce6;
    }
    if (uVar5 != 0) {
      pub_142e32760(pbVar16,uVar19,uVar15);
    }
    uVar6 = *(ulonglong *)(lVar25 + -0x48);
    uVar15 = uVar6 * 4;
    pbStack_88 = pbVar16;
    if (uVar15 < 0x7ffffffffffffffd && uVar6 >> 0x3e == 0) {
      if (uVar15 == 0) {
        pbStack_1c0 = (byte *)0x4;
        goto LAB_140ae0e9b;
      }
      puVar7 = *(undefined4 **)(lVar25 + -0x50);
      uStack_80 = uStack_1e0;
      pdb_14007ee60();
      uVar19 = 4;
      pbStack_1c0 = pub_1406abab0(uVar15,4);
      if (pbStack_1c0 != (byte *)0x0) {
        uStack_1e0 = uStack_80;
        if (uVar6 == 0) goto LAB_140ae0e9b;
        uVar15 = uVar6 - 1;
        if (uVar6 < uVar6 - 1) {
          uVar15 = uVar6;
        }
        if (uVar15 < 8) {
          lVar17 = 0;
          uVar15 = uVar6;
          puVar23 = puVar7;
        }
        else {
          uVar15 = uVar15 + 1;
          uVar22 = 8;
          if ((uVar15 & 7) != 0) {
            uVar22 = (ulonglong)((uint)uVar15 & 7);
          }
          lVar17 = uVar15 - uVar22;
          uVar15 = uVar6 - lVar17;
          puVar23 = puVar7 + lVar17;
          lVar20 = 0;
          do {
            uVar19 = *(undefined8 *)((longlong)(puVar7 + lVar20) + 8);
            uVar26 = *(undefined8 *)(puVar7 + lVar20 + 4);
            uVar12 = *(undefined8 *)((longlong)(puVar7 + lVar20 + 4) + 8);
            *(undefined8 *)(pbStack_1c0 + lVar20 * 4) = *(undefined8 *)(puVar7 + lVar20);
            *(undefined8 *)(pbStack_1c0 + lVar20 * 4 + 8) = uVar19;
            *(undefined8 *)(pbStack_1c0 + lVar20 * 4 + 0x10) = uVar26;
            *(undefined8 *)(pbStack_1c0 + lVar20 * 4 + 0x10 + 8) = uVar12;
            lVar20 = lVar20 + 8;
          } while (lVar17 != lVar20);
        }
        pbVar16 = pbStack_1c0 + lVar17 * 4;
        do {
          if (puVar23 == puVar7 + uVar6) break;
          uVar3 = *puVar23;
          puVar23 = puVar23 + 1;
          *(undefined4 *)pbVar16 = uVar3;
          pbVar16 = pbVar16 + 4;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
LAB_140ae0e9b:
        uStack_1b0 = *(undefined4 *)(lVar25 + -0x40);
        uStack_18c = *(undefined4 *)(lVar25 + -0x1c);
        uVar21 = *(uint *)(lVar25 + -0x38);
        iVar11 = uVar21 - 2;
        if (uVar21 < 2) {
          iVar11 = 2;
        }
        uStack_1a8 = 2;
        if (iVar11 != 0) {
          if (iVar11 == 1) {
            uStack_1a8 = 3;
          }
          else {
            uStack_d8 = *(undefined8 *)(lVar25 + -0x24);
            uStack_e8 = *(undefined8 *)(lVar25 + -0x34);
            uStack_e0 = *(undefined8 *)(lVar25 + -0x2c);
            uStack_1a8 = uVar21;
          }
        }
        pbStack_1d8 = pbStack_88;
        uStack_170 = uStack_98;
        uStack_1a4 = uStack_e8;
        uStack_19c = uStack_e0;
        uStack_194 = uStack_d8;
        uStack_188 = *(undefined4 *)(lVar25 + -0x18);
        uStack_184 = *(undefined4 *)(lVar25 + -0x14);
        uStack_180 = *(undefined4 *)(lVar25 + -0x10);
        uStack_17c = *(undefined4 *)(lVar25 + -0xc);
        uStack_178 = *(undefined8 *)(lVar25 + -8);
        uStack_160 = CONCAT44((int)uVar18,(int)(uVar18 >> 0x20));
        uStack_1e8 = 0x8000000000000000;
        uStack_71 = 1;
        uStack_1d0 = uVar5;
        uStack_1c8 = uVar6;
        uStack_1b8 = uVar6;
        uStack_168 = uVar2;
        uStack_164 = uStack_188;
        pdb_140a1aa80(&uStack_b0,&uStack_1e8);
        *(undefined4 *)puStack_90[2] = *(undefined4 *)((longlong)puStack_90 + 0x1c);
        uVar19 = *puStack_90;
        uStack_c8 = 0;
        uStack_c0 = 8;
        uStack_b8 = 0;
        uStack_1d0 = uStack_a8 + lStack_a0 * 0x18;
        uStack_1e8 = uStack_a8;
        uStack_1e0 = uStack_a8;
        pbStack_1d8 = (byte *)uStack_b0;
        uVar18 = uStack_a8;
        uStack_1e0 = pdb_140c69b60(&uStack_1e8);
        uStack_1e8 = 7;
        uStack_71 = 0;
        pbStack_1d8 = (byte *)uVar18;
        pdb_140ae5180(uVar19,&uStack_1e8,&UNK_14304f1b0);
        if (uStack_2c8 != 0) {
          pub_1406abac0(pbStack_2c0,uStack_2c8 << 3,4);
        }
        if (uStack_2b0 != 0) {
          pub_1406abac0(pbStack_2a8,uStack_2b0 << 2,4);
        }
        if (uStack_258 != 0) {
          pub_1406abac0(pbStack_250,uStack_258 << 3,4);
        }
        if (uStack_240 == 0) {
          return;
        }
        pub_1406abac0(pbStack_238,uStack_240 << 2,4);
        return;
      }
    }
    else {
      uVar19 = 0;
      uStack_80 = uStack_1e0;
    }
    pdb_142dc7e2a(uVar19,uVar15);
  }
  else {
    uVar26 = 0;
LAB_140ae0ce6:
    uStack_71 = 1;
    pdb_142dc7e2a(uVar26,uVar15);
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)invalidInstructionException();
  (*pcVar8)();
}

