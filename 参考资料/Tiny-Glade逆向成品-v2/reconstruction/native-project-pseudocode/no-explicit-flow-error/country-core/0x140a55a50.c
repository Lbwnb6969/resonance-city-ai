// VA 0x140a55a50, PDB extent 1768 bytes
// country_core::systems::audio::firstperson_steps::firstperson_steps
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/firstperson_steps.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::systems::audio::firstperson_steps::firstperson_steps
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/audio/firstperson_steps.rs
   Extent: 1768 */

void pdb_140a55a50(undefined8 *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5,undefined8 *param_6,undefined8 param_7,undefined8 *param_8,
                  longlong *param_9,longlong *param_10,undefined8 *param_11,longlong *param_12)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  ushort uVar17;
  longlong lVar18;
  byte bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined4 uVar27;
  undefined1 auStack_114 [12];
  longlong lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  plVar4 = (longlong *)*param_1;
  lVar13 = *param_2;
  cVar8 = *(char *)(lVar13 + 0x4d0);
  if (*plVar4 != 0) {
    fVar20 = _DAT_142e36f28;
    if (cVar8 != '\x03') {
      fVar20 = 0.0;
    }
    pdb_140a8aa00(*plVar4 + 0x10,&UNK_14303daa8,0xb,fVar20);
    cVar8 = *(char *)(lVar13 + 0x4d0);
  }
  uVar27 = _DAT_142e37830;
  if ((cVar8 != '\x03') ||
     ((2 < *(uint *)(*param_12 + 0x18) &&
      (uVar2 = *(undefined8 *)(*param_12 + 0x160), fVar21 = (float)uVar2,
      fVar20 = (float)((ulonglong)uVar2 >> 0x20), fVar20 * fVar20 + fVar21 * fVar21 <= 0.0))))
  goto LAB_140a5608d;
  cVar8 = *(char *)(lVar13 + 0x344);
  if (0xb < *(byte *)(lVar13 + 0x328) - 2) goto LAB_140a56065;
  lVar11 = *(longlong *)(lVar13 + 0x330);
  switch((uint)*(byte *)(lVar13 + 0x328)) {
  case 2:
    if (((*(byte *)(lVar13 + 0x329) & 1) != 0) &&
       (lVar13 = pdb_140b54cf0(*param_5,lVar11,param_7), lVar13 != 0)) {
      if (*(char *)(lVar13 + 0x40) == '\0') {
        lVar11 = 0x54;
      }
      else {
        if (*(char *)(lVar13 + 0x40) == '\x01') break;
        lVar11 = 0x41;
      }
      cVar9 = *(char *)(lVar13 + lVar11);
joined_r0x000140a55fcb:
      if (cVar9 != '\0') {
        uVar27 = _DAT_142e37900;
      }
    }
    break;
  case 7:
    param_5 = (longlong *)*param_5;
    lStack_108 = lVar11;
    if (param_5[3] != 0) {
      uVar12 = pdb_1400af0a0(param_5 + 4,&lStack_108);
      lVar13 = *param_5;
      bVar19 = (byte)(uVar12 >> 0x39);
      auVar24 = ZEXT216(CONCAT11(bVar19,bVar19));
      auVar24 = pshuflw(auVar24,auVar24,0);
      lVar15 = 0;
      while( true ) {
        uVar12 = uVar12 & param_5[1];
        auVar3 = *(undefined1 (*) [16])(lVar13 + uVar12);
        auVar26[0] = -(auVar3[0] == auVar24[0]);
        auVar26[1] = -(auVar3[1] == auVar24[1]);
        auVar26[2] = -(auVar3[2] == auVar24[2]);
        auVar26[3] = -(auVar3[3] == auVar24[3]);
        auVar26[4] = -(auVar3[4] == auVar24[4]);
        auVar26[5] = -(auVar3[5] == auVar24[5]);
        auVar26[6] = -(auVar3[6] == auVar24[6]);
        auVar26[7] = -(auVar3[7] == auVar24[7]);
        auVar26[8] = -(auVar3[8] == auVar24[0]);
        auVar26[9] = -(auVar3[9] == auVar24[1]);
        auVar26[10] = -(auVar3[10] == auVar24[2]);
        auVar26[0xb] = -(auVar3[0xb] == auVar24[3]);
        auVar26[0xc] = -(auVar3[0xc] == auVar24[4]);
        auVar26[0xd] = -(auVar3[0xd] == auVar24[5]);
        auVar26[0xe] = -(auVar3[0xe] == auVar24[6]);
        auVar26[0xf] = -(auVar3[0xf] == auVar24[7]);
        uVar17 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf
        ;
        uVar16 = (uint)uVar17;
        while (uVar17 != 0) {
          uVar6 = 0;
          for (uVar7 = uVar16; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
            uVar6 = uVar6 + 1;
          }
          lVar18 = (uVar6 + uVar12 & param_5[1]) * -0x2b0;
          if (lVar11 == *(longlong *)(lVar13 + -0x2b0 + lVar18)) {
            lVar13 = lVar13 + lVar18;
            if ((*(ulonglong *)(lVar13 + -0x298) < 2) || (*(float *)(lVar13 + -0x278) <= 0.0)) {
                    /* WARNING: Subroutine does not return */
              pdb_142dc83b0(&UNK_143059e50,0x32,&UNK_14303daf0);
            }
            cVar9 = *(char *)(lVar13 + -9);
            goto joined_r0x000140a55fcb;
          }
          uVar17 = (ushort)(uVar16 - 1) & (ushort)uVar16;
          uVar16 = CONCAT22((short)(uVar16 - 1 >> 0x10),uVar17);
        }
        auVar25[0] = -(auVar3[0] == -1);
        auVar25[1] = -(auVar3[1] == -1);
        auVar25[2] = -(auVar3[2] == -1);
        auVar25[3] = -(auVar3[3] == -1);
        auVar25[4] = -(auVar3[4] == -1);
        auVar25[5] = -(auVar3[5] == -1);
        auVar25[6] = -(auVar3[6] == -1);
        auVar25[7] = -(auVar3[7] == -1);
        auVar25[8] = -(auVar3[8] == -1);
        auVar25[9] = -(auVar3[9] == -1);
        auVar25[10] = -(auVar3[10] == -1);
        auVar25[0xb] = -(auVar3[0xb] == -1);
        auVar25[0xc] = -(auVar3[0xc] == -1);
        auVar25[0xd] = -(auVar3[0xd] == -1);
        auVar25[0xe] = -(auVar3[0xe] == -1);
        auVar25[0xf] = -(auVar3[0xf] == -1);
        if ((((((((((((((((SUB161(auVar25 >> 7,0) & 1) != 0 || (SUB161(auVar25 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar25 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar25 >> 0x1f,0) & 1) != 0) || (SUB161(auVar25 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar25 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar25 >> 0x37,0) & 1) != 0) || (SUB161(auVar25 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar25 >> 0x47,0) & 1) != 0) || (SUB161(auVar25 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar25 >> 0x57,0) & 1) != 0) || (SUB161(auVar25 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar25 >> 0x67,0) & 1) != 0) || (SUB161(auVar25 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar25 >> 0x77,0) & 1) != 0) || auVar25[0xf] < '\0') break;
        uVar12 = uVar12 + lVar15 + 0x10;
        lVar15 = lVar15 + 0x10;
      }
    }
    break;
  case 0xb:
    puVar10 = (undefined8 *)pdb_140bf45b0(*param_3,&UNK_14331ca70);
    if ((puVar10 == (undefined8 *)0x0) ||
       (lVar11 = (**(code **)(puVar10[1] + 0x18))(*puVar10), lVar11 == 0)) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_14303db08);
    }
    uVar2 = *(undefined8 *)(lVar11 + 8);
    lVar15 = *param_9;
    puVar10 = (undefined8 *)(lVar15 + 0x20);
    puVar14 = (undefined8 *)(lVar15 + 0x28);
    if (*(char *)(lVar15 + 0x298) == '\0') {
      puVar14 = (undefined8 *)(lVar15 + 0x10);
      puVar10 = (undefined8 *)(lVar15 + 8);
    }
    uVar5 = *(undefined8 *)(lVar11 + 0x10);
    uStack_c0 = *puVar14;
    uStack_c8 = *puVar10;
    lVar11 = *param_4;
    plVar1 = (longlong *)(lVar11 + 0x20);
    puVar10 = (undefined8 *)(lVar11 + 0x28);
    if (*(char *)(lVar11 + 0x298) == '\0') {
      puVar10 = (undefined8 *)(lVar11 + 0x10);
      plVar1 = (longlong *)(lVar11 + 8);
    }
    lVar11 = param_4[4];
    uStack_100 = *puVar10;
    puVar10 = (undefined8 *)(lVar11 + 0x20);
    puVar14 = (undefined8 *)(lVar11 + 0x28);
    if (*(char *)(lVar11 + 0x298) == '\0') {
      puVar14 = (undefined8 *)(lVar11 + 0x10);
      puVar10 = (undefined8 *)(lVar11 + 8);
    }
    lStack_108 = *plVar1;
    uStack_f0 = *puVar14;
    uStack_f8 = *puVar10;
    lVar11 = param_4[8];
    puVar10 = (undefined8 *)(lVar11 + 0x20);
    puVar14 = (undefined8 *)(lVar11 + 0x28);
    if (*(char *)(lVar11 + 0x298) == '\0') {
      puVar14 = (undefined8 *)(lVar11 + 0x10);
      puVar10 = (undefined8 *)(lVar11 + 8);
    }
    uStack_e0 = *puVar14;
    uStack_e8 = *puVar10;
    lVar11 = param_4[0xc];
    puVar10 = (undefined8 *)(lVar11 + 0x20);
    puVar14 = (undefined8 *)(lVar11 + 0x28);
    if (*(char *)(lVar11 + 0x298) == '\0') {
      puVar14 = (undefined8 *)(lVar11 + 0x10);
      puVar10 = (undefined8 *)(lVar11 + 8);
    }
    uStack_d0 = *puVar14;
    uStack_d8 = *puVar10;
    lVar11 = *param_10;
    puVar10 = (undefined8 *)(lVar11 + 0x20);
    puVar14 = (undefined8 *)(lVar11 + 0x28);
    if (*(char *)(lVar11 + 0x298) == '\0') {
      puVar14 = (undefined8 *)(lVar11 + 0x10);
      puVar10 = (undefined8 *)(lVar11 + 8);
    }
    uStack_b0 = *puVar14;
    uStack_b8 = *puVar10;
    pdb_140e08f50(auStack_114,lVar13);
    fVar20 = (float)pdb_140a7d8d0(&uStack_c8);
    if (_DAT_142e3b1d8 < fVar20) {
      lVar13 = *plVar4;
      uVar27 = _DAT_142e3788c;
    }
    else {
      fVar20 = (float)pdb_140a7d8d0(&lStack_108);
      fVar21 = (float)pdb_140a7d8d0(&uStack_f8);
      fVar22 = (float)pdb_140a7d8d0(&uStack_e8);
      fVar23 = (float)pdb_140a7d8d0(&uStack_d8);
      fVar23 = fVar23 + fVar22 + fVar21 + fVar20;
      fVar20 = 0.0;
      if (0.0 <= fVar23) {
        fVar20 = fVar23;
      }
      fVar21 = _DAT_142e36f28;
      if (fVar20 <= _DAT_142e36f28) {
        fVar21 = fVar20;
      }
      if (_DAT_142e3b1d8 < fVar21) {
        fVar20 = (float)pdb_140a7d8d0(&lStack_108);
        uVar27 = *(undefined4 *)(&UNK_14303d290 + (ulonglong)(_DAT_142e3b1d8 < fVar20) * 4);
        lVar13 = *plVar4;
      }
      else {
        cVar9 = pdb_1419c1e90(uVar2,uVar5);
        if (cVar9 != '\0') break;
        fVar20 = (float)pdb_140a7d8d0(&uStack_b8);
        if ((_DAT_142e3798c < fVar20) || (cVar9 = pdb_140a85320(*param_11), cVar9 != '\0')) {
          lVar13 = *plVar4;
          uVar27 = _DAT_142e37adc;
        }
        else {
          uVar27 = 0;
          lVar13 = *plVar4;
        }
      }
    }
    goto joined_r0x000140a5604e;
  case 0xd:
    lVar13 = pdb_140c40010(*param_6,*(undefined4 *)(lVar13 + 0x32c));
    if ((lVar13 != 0) && (*(byte *)(lVar13 + 0x4f) < 2)) {
      cVar9 = *(char *)(lVar13 + 0x4e);
      goto joined_r0x000140a55fcb;
    }
  }
LAB_140a56065:
  lVar13 = *plVar4;
joined_r0x000140a5604e:
  if (lVar13 != 0) {
    pdb_140a8aa00(lVar13 + 0x10,&UNK_14303db20,10,uVar27);
  }
  if (cVar8 == '\0') {
    *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
    pdb_140a87e10(*param_8);
    return;
  }
LAB_140a5608d:
  *(undefined4 *)param_8[2] = *(undefined4 *)((longlong)param_8 + 0x1c);
  pdb_140a87f70(*param_8);
  return;
}

