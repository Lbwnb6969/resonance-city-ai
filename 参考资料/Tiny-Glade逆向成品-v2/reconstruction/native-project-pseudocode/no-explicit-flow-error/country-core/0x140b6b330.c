// VA 0x140b6b330, PDB extent 10311 bytes
// country_core::systems::backend::input::translate_input::translate_input
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/input/translate_input.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::backend::input::translate_input::translate_input
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/backend/input/translate_input.rs
   Extent: 10311 */

void pdb_140b6b330(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,undefined8 *param_8,
                  float *param_9,undefined8 *param_10,undefined8 *param_11,longlong *param_12,
                  undefined8 *param_13,undefined8 *param_14)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  byte bVar13;
  uint uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [16];
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  undefined1 (*pauVar28) [16];
  longlong lVar29;
  undefined4 *puVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uStack_d0;
  undefined1 (*pauStack_c8) [16];
  undefined1 *puStack_c0;
  ushort uStack_b8;
  longlong lStack_b0;
  longlong *plStack_a8;
  longlong lStack_a0;
  longlong lStack_98;
  longlong lStack_90;
  longlong *plStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 **appuStack_70 [6];
  
  lStack_90 = *param_12;
  param_4 = (undefined8 *)*param_4;
  plStack_a8 = param_2;
  if (param_4 == (undefined8 *)0x0) {
LAB_140b6b3b2:
    if (*(longlong *)(*param_3 + 0x38) == 0) goto LAB_140b6b3bc;
LAB_140b6b3cb:
    puVar30 = (undefined4 *)param_7[2];
    *puVar30 = *(undefined4 *)((longlong)param_7 + 0x1c);
    lVar29 = *param_7;
    uVar15 = pdb_140f3c9d0();
    *(undefined8 *)(lVar29 + 0x10) = uVar15;
    *(int *)(lVar29 + 0x18) = (int)puVar30;
  }
  else {
    pauStack_c8 = (undefined1 (*) [16])pub_142e31f10();
    pauVar20 = (undefined1 (*) [16])*param_4;
    LOCK();
    lVar29 = *(longlong *)*pauVar20;
    *(longlong *)*pauVar20 = *(longlong *)*pauVar20 + 1;
    UNLOCK();
    if (*(longlong *)*pauVar20 == 0 || SCARRY8(lVar29,1) != *(longlong *)*pauVar20 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    uStack_d0 = pauVar20;
    cVar12 = pub_142e31e90(pauStack_c8);
    LOCK();
    *(longlong *)*pauVar20 = *(longlong *)*pauVar20 + -1;
    UNLOCK();
    if (*(longlong *)*pauVar20 == 0) {
      pdb_140cb1c10(&uStack_d0);
    }
    if (cVar12 == '\0') goto LAB_140b6b3b2;
LAB_140b6b3bc:
    if (*(longlong *)(*plStack_a8 + 0x38) != 0) goto LAB_140b6b3cb;
  }
  *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
  lStack_a0 = *param_6;
  lVar29 = param_14[3];
  lStack_b0 = *param_3;
  plStack_88 = param_1;
  puStack_80 = param_4;
  if (lVar29 != 0) {
    pauVar28 = (undefined1 (*) [16])*param_14;
    auVar1 = *pauVar28;
    uVar14 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
                            (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
    pauVar20 = pauVar28 + 1;
    lStack_98 = lStack_b0 + 0x40;
    do {
      if ((short)uVar14 == 0) {
        do {
          auVar1 = *pauVar20;
          pauVar28 = pauVar28 + -4;
          pauVar20 = pauVar20 + 1;
          uVar14 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar14 == 0);
      }
      iVar6 = 0;
      for (uVar7 = uVar14; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        iVar6 = iVar6 + 1;
      }
      lVar18 = (longlong)pauVar28 - (ulonglong)(uint)(iVar6 << 2);
      puVar30 = (undefined4 *)(lVar18 + -4);
      uVar8 = *puVar30;
      uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
      cVar12 = pdb_1417b1940(lStack_b0,&uStack_d0);
      if (cVar12 == '\0') {
        uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,uVar8);
        cVar12 = pdb_1417b1940(lStack_98,&uStack_d0);
        if (cVar12 == '\0') {
          pdb_140cacc20(param_14,lVar18);
        }
      }
      uVar14 = uVar14 - 1 & uVar14;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
  }
  pcVar2 = (char *)*param_13;
  lVar29 = lStack_a0;
  if (*pcVar2 == '\x01') {
    pauVar20 = *(undefined1 (**) [16])(lStack_b0 + 0x20);
    lVar18 = *(longlong *)(lStack_b0 + 0x28);
    auVar1 = *pauVar20;
    uVar3 = *(ulonglong *)(lStack_b0 + 0x38);
    uVar16 = uVar3 + 1 >> 1;
    if (param_14[3] == 0) {
      uVar16 = uVar3;
    }
    if ((ulonglong)param_14[2] < uVar16) {
      pdb_142da7230(param_14,uVar16,param_14 + 4,1);
    }
    lVar29 = lStack_a0;
    uStack_b8 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
                 (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
    puStack_78 = param_14;
    appuStack_70[0] = &puStack_78;
    uStack_d0 = pauVar20;
    pauStack_c8 = pauVar20 + 1;
    puStack_c0 = *pauVar20 + lVar18 + 1;
    pdb_140ca8210(&uStack_d0,uVar3,appuStack_70);
  }
  uStack_d0 = (undefined1 (*) [16])((ulonglong)uStack_d0 & 0xffffffffffff0000);
  bVar13 = pdb_1417b1940(lStack_b0,&uStack_d0);
  lVar18 = lStack_90;
  *(byte *)(lVar29 + 0x8c) = *(byte *)(lVar29 + 0x8c) | bVar13;
  uVar3 = *(ulonglong *)*param_5;
  lVar22 = 4;
  if (1 < uVar3) {
    lVar22 = uVar3 - 2;
  }
  if ((lVar22 == 0) || ((lVar22 == 9 && ((char)((ulonglong *)*param_5)[1] != '\x01')))) {
    lStack_98 = *plStack_88;
    fVar33 = *(float *)(lStack_98 + 0x28) * _DAT_142e37844;
    if (*(longlong *)(lStack_90 + 0x10) != 0) {
      lVar19 = *(longlong *)(lStack_90 + 0x10) * 0xc;
      lVar22 = *plStack_a8;
      puVar30 = (undefined4 *)(*(longlong *)(lStack_90 + 8) + 4);
      do {
        if (puVar30[-1] == 0xc3) {
          cVar12 = pdb_1417b1d70(param_14,puVar30);
          if (cVar12 == '\0') {
            uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
            cVar12 = pdb_1417b1940(lStack_b0,&uStack_d0);
            goto joined_r0x000140b6b690;
          }
        }
        else {
          pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
          uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
          cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6b690:
          if (cVar12 != '\0') {
            *(float *)(lVar29 + 0x70) = *(float *)(lVar29 + 0x70) - fVar33;
            lVar22 = *(longlong *)(lVar18 + 0x28);
            goto joined_r0x000140b6b6fe;
          }
        }
        puVar30 = puVar30 + 3;
        lVar19 = lVar19 + -0xc;
      } while (lVar19 != 0);
    }
    lVar22 = *(longlong *)(lVar18 + 0x28);
joined_r0x000140b6b6fe:
    if (lVar22 != 0) {
      lVar22 = lVar22 * 0xc;
      lVar19 = *plStack_a8;
      puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x20) + 4);
      do {
        if (puVar30[-1] == 0xc3) {
          cVar12 = pdb_1417b1d70(param_14,puVar30);
          if (cVar12 == '\0') {
            uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
            cVar12 = pdb_1417b1940(lStack_b0,&uStack_d0);
            goto joined_r0x000140b6b750;
          }
        }
        else {
          pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
          uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
          cVar12 = pdb_1417b1a90(lVar19,&uStack_d0);
joined_r0x000140b6b750:
          if (cVar12 != '\0') {
            *(float *)(lVar29 + 0x70) = *(float *)(lVar29 + 0x70) + fVar33;
            lVar22 = *(longlong *)(lVar18 + 0x40);
            goto joined_r0x000140b6b7be;
          }
        }
        puVar30 = puVar30 + 3;
        lVar22 = lVar22 + -0xc;
      } while (lVar22 != 0);
    }
    lVar22 = *(longlong *)(lVar18 + 0x40);
joined_r0x000140b6b7be:
    if (lVar22 != 0) {
      lVar22 = lVar22 * 0xc;
      lVar19 = *plStack_a8;
      puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x38) + 4);
      do {
        if (puVar30[-1] == 0xc3) {
          cVar12 = pdb_1417b1d70(param_14,puVar30);
          if (cVar12 == '\0') {
            uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
            cVar12 = pdb_1417b1940(lStack_b0,&uStack_d0);
            goto joined_r0x000140b6b810;
          }
        }
        else {
          pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
          uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
          cVar12 = pdb_1417b1a90(lVar19,&uStack_d0);
joined_r0x000140b6b810:
          if (cVar12 != '\0') {
            *(float *)(lVar29 + 0x6c) = *(float *)(lVar29 + 0x6c) - fVar33;
            lVar22 = *(longlong *)(lVar18 + 0x58);
            goto joined_r0x000140b6b87e;
          }
        }
        puVar30 = puVar30 + 3;
        lVar22 = lVar22 + -0xc;
      } while (lVar22 != 0);
    }
    lVar22 = *(longlong *)(lVar18 + 0x58);
joined_r0x000140b6b87e:
    if (lVar22 != 0) {
      lVar22 = lVar22 * 0xc;
      lVar19 = *plStack_a8;
      puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x50) + 4);
      do {
        if (puVar30[-1] == 0xc3) {
          cVar12 = pdb_1417b1d70(param_14,puVar30);
          if (cVar12 == '\0') {
            uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
            cVar12 = pdb_1417b1940(lStack_b0,&uStack_d0);
            goto joined_r0x000140b6b8d0;
          }
        }
        else {
          pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
          uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
          cVar12 = pdb_1417b1a90(lVar19,&uStack_d0);
joined_r0x000140b6b8d0:
          if (cVar12 != '\0') {
            *(float *)(lVar29 + 0x6c) = *(float *)(lVar29 + 0x6c) + fVar33;
            lVar22 = *(longlong *)(lVar18 + 0x88);
            goto joined_r0x000140b6b944;
          }
        }
        puVar30 = puVar30 + 3;
        lVar22 = lVar22 + -0xc;
      } while (lVar22 != 0);
    }
    lVar22 = *(longlong *)(lVar18 + 0x88);
joined_r0x000140b6b944:
    if (lVar22 != 0) {
      lVar22 = lVar22 * 0xc;
      lVar19 = *plStack_a8;
      puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x80) + 4);
      do {
        if (puVar30[-1] == 0xc3) {
          cVar12 = pdb_1417b1d70(param_14,puVar30);
          if (cVar12 == '\0') {
            uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
            cVar12 = pdb_1417b1940(lStack_b0,&uStack_d0);
            goto joined_r0x000140b6b990;
          }
        }
        else {
          pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
          uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
          cVar12 = pdb_1417b1a90(lVar19,&uStack_d0);
joined_r0x000140b6b990:
          if (cVar12 != '\0') {
            *(float *)(lVar29 + 0x74) = *(float *)(lVar29 + 0x74) - fVar33;
            lVar22 = *(longlong *)(lVar18 + 0x70);
            goto joined_r0x000140b6b9fe;
          }
        }
        puVar30 = puVar30 + 3;
        lVar22 = lVar22 + -0xc;
      } while (lVar22 != 0);
    }
    lVar22 = *(longlong *)(lVar18 + 0x70);
joined_r0x000140b6b9fe:
    if (lVar22 != 0) {
      lVar22 = lVar22 * 0xc;
      lVar19 = *plStack_a8;
      puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x68) + 4);
      do {
        if (puVar30[-1] == 0xc3) {
          cVar12 = pdb_1417b1d70(param_14,puVar30);
          if (cVar12 == '\0') {
            uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
            cVar12 = pdb_1417b1940(lStack_b0,&uStack_d0);
            goto joined_r0x000140b6ba50;
          }
        }
        else {
          pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
          uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
          cVar12 = pdb_1417b1a90(lVar19,&uStack_d0);
joined_r0x000140b6ba50:
          if (cVar12 != '\0') {
            *(float *)(lVar29 + 0x74) = *(float *)(lVar29 + 0x74) + fVar33;
            lVar22 = *(longlong *)(lVar18 + 0x100);
            goto joined_r0x000140b6bac4;
          }
        }
        puVar30 = puVar30 + 3;
        lVar22 = lVar22 + -0xc;
      } while (lVar22 != 0);
    }
    lVar22 = *(longlong *)(lVar18 + 0x100);
joined_r0x000140b6bac4:
    if (lVar22 != 0) {
      lVar22 = lVar22 * 0xc;
      lVar19 = *plStack_a8;
      puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0xf8) + 4);
      do {
        if (puVar30[-1] == 0xc3) {
          cVar12 = pdb_1417b1d70(param_14,puVar30);
          if (cVar12 == '\0') {
            uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
            cVar12 = pdb_1417b1940(lStack_b0,&uStack_d0);
            goto joined_r0x000140b6bb10;
          }
        }
        else {
          pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
          uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
          cVar12 = pdb_1417b1a90(lVar19,&uStack_d0);
joined_r0x000140b6bb10:
          if (cVar12 != '\0') {
            *(ulonglong *)(lVar29 + 0x7c) =
                 CONCAT44((float)((ulonglong)*(undefined8 *)(lVar29 + 0x7c) >> 0x20) + 0.0,
                          _DAT_142e37838 * fVar33 + (float)*(undefined8 *)(lVar29 + 0x7c));
            lVar22 = *(longlong *)(lVar18 + 0x118);
            goto joined_r0x000140b6bb95;
          }
        }
        puVar30 = puVar30 + 3;
        lVar22 = lVar22 + -0xc;
      } while (lVar22 != 0);
    }
    lVar22 = *(longlong *)(lVar18 + 0x118);
joined_r0x000140b6bb95:
    if (lVar22 != 0) {
      lVar22 = lVar22 * 0xc;
      lVar19 = *plStack_a8;
      puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x110) + 4);
      do {
        if (puVar30[-1] == 0xc3) {
          cVar12 = pdb_1417b1d70(param_14,puVar30);
          if (cVar12 == '\0') {
            uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
            cVar12 = pdb_1417b1940(lStack_b0,&uStack_d0);
            goto joined_r0x000140b6bbe0;
          }
        }
        else {
          pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
          uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
          cVar12 = pdb_1417b1a90(lVar19,&uStack_d0);
joined_r0x000140b6bbe0:
          if (cVar12 != '\0') {
            *(float *)(lVar29 + 0x7c) = fVar33 * _DAT_142f61000 + *(float *)(lVar29 + 0x7c);
            lVar22 = *(longlong *)(lVar18 + 0xb8);
            goto joined_r0x000140b6bc58;
          }
        }
        puVar30 = puVar30 + 3;
        lVar22 = lVar22 + -0xc;
      } while (lVar22 != 0);
    }
    lVar22 = *(longlong *)(lVar18 + 0xb8);
joined_r0x000140b6bc58:
    if (lVar22 != 0) {
      lVar22 = lVar22 * 0xc;
      lVar19 = *plStack_a8;
      puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0xb0) + 4);
      do {
        if (puVar30[-1] == 0xc3) {
          cVar12 = pdb_1417b1d70(param_14,puVar30);
          if (cVar12 == '\0') {
            uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
            cVar12 = pdb_1417b1940(lStack_b0,&uStack_d0);
            goto joined_r0x000140b6bca0;
          }
        }
        else {
          pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
          uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
          cVar12 = pdb_1417b1a90(lVar19,&uStack_d0);
joined_r0x000140b6bca0:
          if (cVar12 != '\0') {
            *(ulonglong *)(lVar29 + 0x84) =
                 CONCAT44((float)((ulonglong)*(undefined8 *)(lVar29 + 0x84) >> 0x20) + 0.0,
                          *(float *)(lStack_98 + 0x28) * _DAT_14305aea8 +
                          (float)*(undefined8 *)(lVar29 + 0x84));
            lVar22 = *(longlong *)(lVar18 + 0xa0);
            goto joined_r0x000140b6bd41;
          }
        }
        puVar30 = puVar30 + 3;
        lVar22 = lVar22 + -0xc;
      } while (lVar22 != 0);
    }
    lVar22 = *(longlong *)(lVar18 + 0xa0);
joined_r0x000140b6bd41:
    if (lVar22 != 0) {
      lVar22 = lVar22 * 0xc;
      lVar19 = *plStack_a8;
      puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x98) + 4);
      do {
        if (puVar30[-1] == 0xc3) {
          cVar12 = pdb_1417b1d70(param_14,puVar30);
          if (cVar12 == '\0') {
            uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
            cVar12 = pdb_1417b1940(lStack_b0,&uStack_d0);
            goto joined_r0x000140b6bd90;
          }
        }
        else {
          pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
          uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
          cVar12 = pdb_1417b1a90(lVar19,&uStack_d0);
joined_r0x000140b6bd90:
          if (cVar12 != '\0') {
            *(float *)(lVar29 + 0x84) =
                 *(float *)(lStack_98 + 0x28) * _DAT_14305aeac + *(float *)(lVar29 + 0x84);
            break;
          }
        }
        puVar30 = puVar30 + 3;
        lVar22 = lVar22 + -0xc;
      } while (lVar22 != 0);
    }
    lVar18 = lStack_90;
    lVar29 = lStack_a0;
    puVar4 = (ulonglong *)*param_8;
    lVar22 = param_8[1];
    uVar3 = *puVar4;
    uVar21 = 0;
    uVar16 = uVar3 - *(ulonglong *)(lVar22 + 0x18);
    if (uVar3 < *(ulonglong *)(lVar22 + 0x18)) {
      uVar16 = uVar21;
    }
    uVar17 = uVar3 - *(ulonglong *)(lVar22 + 0x38);
    if (uVar3 < *(ulonglong *)(lVar22 + 0x38)) {
      uVar17 = uVar21;
    }
    lVar19 = uVar16 * 0x20 + *(longlong *)(lVar22 + 8);
    uVar3 = *(ulonglong *)(lVar22 + 0x10) - uVar16;
    if (*(ulonglong *)(lVar22 + 0x10) < uVar16) {
      lVar19 = 8;
      uVar3 = uVar21;
    }
    lVar27 = uVar17 * 0x20 + *(longlong *)(lVar22 + 0x28);
    uVar16 = *(ulonglong *)(lVar22 + 0x30) - uVar17;
    if (*(ulonglong *)(lVar22 + 0x30) < uVar17) {
      lVar27 = 8;
      uVar16 = uVar21;
    }
    *puVar4 = (*(longlong *)(lVar22 + 0x40) - uVar16) - uVar3;
    fVar31 = _DAT_142f57bc8;
    fVar33 = _DAT_142e36f28;
    lVar22 = uVar3 * 0x20 + lVar19;
    lVar24 = uVar16 * 0x20 + lVar27;
    do {
      if ((lVar19 == 0) || (lVar19 == lVar22)) {
        if ((lVar27 == 0) || (lVar27 == lVar24)) goto LAB_140b6bf24;
        *puVar4 = *puVar4 + 1;
        cVar12 = *pcVar2;
        lVar10 = 0;
        lVar11 = lVar27 + 0x20;
        lVar9 = lVar27;
      }
      else {
        *puVar4 = *puVar4 + 1;
        cVar12 = *pcVar2;
        lVar10 = lVar19 + 0x20;
        lVar11 = lVar27;
        lVar9 = lVar19;
      }
      lVar27 = lVar11;
      lVar19 = lVar10;
      if (cVar12 == '\0') {
        fVar32 = fVar33;
        if (*(char *)(lVar9 + 0x18) == '\0') {
          fVar32 = fVar31;
        }
        *(ulonglong *)(lStack_a0 + 0x7c) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(lStack_a0 + 0x7c) >> 0x20) + 0.0,
                      (float)*(undefined8 *)(lStack_a0 + 0x7c) + fVar32 * *(float *)(lVar9 + 0x14));
      }
    } while( true );
  }
  lVar22 = *plStack_a8;
  uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,0x73);
  bVar13 = pdb_1417b1a90(lVar22 + 0x20,&uStack_d0);
  *(byte *)(lVar29 + 0xa0) = *(byte *)(lVar29 + 0xa0) | bVar13;
  lVar27 = *(longlong *)(lVar18 + 0x310);
  lVar19 = lStack_b0;
  goto joined_r0x000140b6cffb;
LAB_140b6bf24:
  puVar4 = (ulonglong *)*param_10;
  lVar22 = param_10[1];
  uVar3 = *puVar4;
  uVar21 = 0;
  uVar16 = uVar3 - *(ulonglong *)(lVar22 + 0x18);
  if (uVar3 < *(ulonglong *)(lVar22 + 0x18)) {
    uVar16 = uVar21;
  }
  uVar17 = uVar3 - *(ulonglong *)(lVar22 + 0x38);
  if (uVar3 < *(ulonglong *)(lVar22 + 0x38)) {
    uVar17 = uVar21;
  }
  lVar19 = *(longlong *)(lVar22 + 8);
  uVar3 = *(ulonglong *)(lVar22 + 0x10);
  uVar26 = *(ulonglong *)(lVar22 + 0x30);
  uVar25 = uVar26 - uVar17;
  if (uVar26 < uVar17) {
    uVar25 = uVar21;
  }
  uVar23 = uVar3 - uVar16;
  if (uVar3 < uVar16) {
    uVar23 = uVar21;
  }
  lVar27 = *(longlong *)(lVar22 + 0x28);
  uVar21 = *(ulonglong *)(lVar22 + 0x40);
  *puVar4 = (uVar21 - uVar25) - uVar23;
  fVar33 = 0.0;
  if (uVar3 >= uVar16 && uVar3 - uVar16 != 0 || uVar26 >= uVar17 && uVar26 - uVar17 != 0) {
    lVar27 = lVar27 + uVar17 * 0x10;
    lVar19 = lVar19 + uVar16 * 0x10;
    if (uVar3 < uVar16) {
      lVar19 = 8;
    }
    lVar22 = 0;
    if (uVar16 < uVar3) {
      lVar22 = lVar19 + -0x10 + uVar23 * 0x10;
    }
    if (uVar26 < uVar17) {
      lVar27 = 8;
    }
    lVar19 = lVar27 + -0x10 + uVar25 * 0x10;
    if (uVar26 <= uVar17) {
      lVar19 = lVar22;
    }
    *puVar4 = uVar21;
    fVar31 = (float)*(undefined8 *)(lVar19 + 8);
    fVar33 = (float)((ulonglong)*(undefined8 *)(lVar19 + 8) >> 0x20);
    fVar33 = SQRT(fVar33 * fVar33 + fVar31 * fVar31);
  }
  lVar22 = *plStack_a8;
  lVar19 = lStack_b0;
  if (*(longlong *)(lStack_90 + 0x280) == 0) {
LAB_140b6c194:
    fVar33 = _DAT_142e3788c;
    if (*(longlong *)(lVar18 + 0x280) != 0) {
      lVar27 = *(longlong *)(lVar18 + 0x280) * 0xc;
      fVar31 = *param_9;
      puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x278) + 4);
      do {
        if (puVar30[-1] == 0xc3) {
          cVar12 = pdb_1417b1d70(param_14,puVar30);
          if (cVar12 == '\0') {
            uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
            cVar12 = pdb_1417b1940(lVar19 + 0x40,&uStack_d0);
            if ((cVar12 != '\0') && (fVar31 < fVar33)) goto LAB_140b6c240;
          }
        }
        else {
          pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
          uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
          cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
          if (cVar12 != '\0') {
LAB_140b6c240:
            bVar13 = 1;
            goto LAB_140b6c25f;
          }
        }
        puVar30 = puVar30 + 3;
        lVar27 = lVar27 + -0xc;
      } while (lVar27 != 0);
      bVar13 = 0;
      goto LAB_140b6c25f;
    }
    *(undefined1 *)(lVar29 + 0x8d) = *(undefined1 *)(lVar29 + 0x8d);
    lVar27 = *(longlong *)(lVar18 + 0xd0);
  }
  else {
    lVar24 = *(longlong *)(lStack_90 + 0x280) * 0xc;
    lVar27 = lStack_b0 + 0x20;
    puVar30 = (undefined4 *)(*(longlong *)(lStack_90 + 0x278) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar27,&uStack_d0);
          lVar19 = lStack_b0;
          goto joined_r0x000140b6c060;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22 + 0x20,&uStack_d0);
        lVar19 = lStack_b0;
joined_r0x000140b6c060:
        lStack_b0 = lVar19;
        if (cVar12 != '\0') {
          fVar33 = 0.0;
          goto LAB_140b6c188;
        }
      }
      lVar19 = lStack_b0;
      puVar30 = puVar30 + 3;
      lVar24 = lVar24 + -0xc;
    } while (lVar24 != 0);
    if (*(longlong *)(lVar18 + 0x280) != 0) {
      lVar27 = *(longlong *)(lVar18 + 0x280) * 0xc;
      puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x278) + 4);
      do {
        if (puVar30[-1] != 0xc3) {
          pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
          uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
          cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
          if (cVar12 == '\0') goto LAB_140b6c14f;
LAB_140b6c17c:
          fVar33 = fVar33 + *param_9;
LAB_140b6c188:
          *param_9 = fVar33;
          break;
        }
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          if (cVar12 != '\0') goto LAB_140b6c17c;
        }
LAB_140b6c14f:
        puVar30 = puVar30 + 3;
        lVar27 = lVar27 + -0xc;
      } while (lVar27 != 0);
      goto LAB_140b6c194;
    }
    bVar13 = 0;
LAB_140b6c25f:
    *(byte *)(lVar29 + 0x8d) = *(byte *)(lVar29 + 0x8d) | bVar13;
    lVar27 = *(longlong *)(lVar18 + 0xd0);
    lVar19 = lStack_b0;
  }
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 200) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6c2c0;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6c2c0:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0x8e) = *(byte *)(lVar29 + 0x8e) | 1;
          lVar27 = *(longlong *)(lVar18 + 0xe8);
          goto joined_r0x000140b6c334;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0x8e) = *(undefined1 *)(lVar29 + 0x8e);
  lVar27 = *(longlong *)(lVar18 + 0xe8);
joined_r0x000140b6c334:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0xe0) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6c380;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6c380:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0x8f) = *(byte *)(lVar29 + 0x8f) | 1;
          lVar27 = *(longlong *)(lVar18 + 0x130);
          goto joined_r0x000140b6c3f4;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0x8f) = *(undefined1 *)(lVar29 + 0x8f);
  lVar27 = *(longlong *)(lVar18 + 0x130);
joined_r0x000140b6c3f4:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x128) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6c440;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6c440:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0x90) = *(byte *)(lVar29 + 0x90) | 1;
          lVar27 = *(longlong *)(lVar18 + 0x148);
          goto joined_r0x000140b6c4b4;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0x90) = *(undefined1 *)(lVar29 + 0x90);
  lVar27 = *(longlong *)(lVar18 + 0x148);
joined_r0x000140b6c4b4:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x140) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6c500;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6c500:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0x91) = *(byte *)(lVar29 + 0x91) | 1;
          lVar27 = *(longlong *)(lVar18 + 0x160);
          goto joined_r0x000140b6c574;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0x91) = *(undefined1 *)(lVar29 + 0x91);
  lVar27 = *(longlong *)(lVar18 + 0x160);
joined_r0x000140b6c574:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x158) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6c5c0;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6c5c0:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0x92) = *(byte *)(lVar29 + 0x92) | 1;
          lVar27 = *(longlong *)(lVar18 + 0x178);
          goto joined_r0x000140b6c634;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0x92) = *(undefined1 *)(lVar29 + 0x92);
  lVar27 = *(longlong *)(lVar18 + 0x178);
joined_r0x000140b6c634:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x170) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6c680;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6c680:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0x93) = *(byte *)(lVar29 + 0x93) | 1;
          lVar27 = *(longlong *)(lVar18 + 400);
          goto joined_r0x000140b6c6f4;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0x93) = *(undefined1 *)(lVar29 + 0x93);
  lVar27 = *(longlong *)(lVar18 + 400);
joined_r0x000140b6c6f4:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x188) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6c740;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6c740:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0x95) = *(byte *)(lVar29 + 0x95) | 1;
          lVar27 = *(longlong *)(lVar18 + 0x1a8);
          goto joined_r0x000140b6c7b4;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0x95) = *(undefined1 *)(lVar29 + 0x95);
  lVar27 = *(longlong *)(lVar18 + 0x1a8);
joined_r0x000140b6c7b4:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x1a0) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6c800;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6c800:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0x94) = *(byte *)(lVar29 + 0x94) | 1;
          lVar27 = *(longlong *)(lVar18 + 0x1c0);
          goto joined_r0x000140b6c874;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0x94) = *(undefined1 *)(lVar29 + 0x94);
  lVar27 = *(longlong *)(lVar18 + 0x1c0);
joined_r0x000140b6c874:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x1b8) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6c8c0;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6c8c0:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0x96) = *(byte *)(lVar29 + 0x96) | 1;
          lVar27 = *(longlong *)(lVar18 + 0x1d8);
          goto joined_r0x000140b6c934;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0x96) = *(undefined1 *)(lVar29 + 0x96);
  lVar27 = *(longlong *)(lVar18 + 0x1d8);
joined_r0x000140b6c934:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x1d0) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6c980;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6c980:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0x97) = *(byte *)(lVar29 + 0x97) | 1;
          lVar27 = *(longlong *)(lVar18 + 0x1f0);
          goto joined_r0x000140b6c9f4;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0x97) = *(undefined1 *)(lVar29 + 0x97);
  lVar27 = *(longlong *)(lVar18 + 0x1f0);
joined_r0x000140b6c9f4:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x1e8) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6ca40;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6ca40:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0x98) = *(byte *)(lVar29 + 0x98) | 1;
          lVar27 = *(longlong *)(lVar18 + 0x208);
          goto joined_r0x000140b6cab4;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0x98) = *(undefined1 *)(lVar29 + 0x98);
  lVar27 = *(longlong *)(lVar18 + 0x208);
joined_r0x000140b6cab4:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x200) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6cb00;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6cb00:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0x9a) = *(byte *)(lVar29 + 0x9a) | 1;
          lVar27 = *(longlong *)(lVar18 + 0x220);
          goto joined_r0x000140b6cb74;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0x9a) = *(undefined1 *)(lVar29 + 0x9a);
  lVar27 = *(longlong *)(lVar18 + 0x220);
joined_r0x000140b6cb74:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x218) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6cbc0;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6cbc0:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0x9b) = *(byte *)(lVar29 + 0x9b) | 1;
          lVar27 = *(longlong *)(lVar18 + 0x2b0);
          goto joined_r0x000140b6cc34;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0x9b) = *(undefined1 *)(lVar29 + 0x9b);
  lVar27 = *(longlong *)(lVar18 + 0x2b0);
joined_r0x000140b6cc34:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x2a8) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6cc80;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6cc80:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0x99) = *(byte *)(lVar29 + 0x99) | 1;
          lVar27 = *(longlong *)(lVar18 + 0x298);
          goto joined_r0x000140b6ccf4;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0x99) = *(undefined1 *)(lVar29 + 0x99);
  lVar27 = *(longlong *)(lVar18 + 0x298);
joined_r0x000140b6ccf4:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x290) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6cd40;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6cd40:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0x9c) = *(byte *)(lVar29 + 0x9c) | 1;
          lVar27 = *(longlong *)(lVar18 + 0x238);
          goto joined_r0x000140b6cdb4;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0x9c) = *(undefined1 *)(lVar29 + 0x9c);
  lVar27 = *(longlong *)(lVar18 + 0x238);
joined_r0x000140b6cdb4:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x230) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6ce00;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6ce00:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0x9d) = *(byte *)(lVar29 + 0x9d) | 1;
          lVar27 = *(longlong *)(lVar18 + 0x250);
          goto joined_r0x000140b6ce74;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0x9d) = *(undefined1 *)(lVar29 + 0x9d);
  lVar27 = *(longlong *)(lVar18 + 0x250);
joined_r0x000140b6ce74:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x248) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6cec0;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6cec0:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0x9e) = *(byte *)(lVar29 + 0x9e) | 1;
          lVar27 = *(longlong *)(lVar18 + 0x268);
          goto joined_r0x000140b6cf34;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0x9e) = *(undefined1 *)(lVar29 + 0x9e);
  lVar27 = *(longlong *)(lVar18 + 0x268);
joined_r0x000140b6cf34:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x260) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6cf80;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6cf80:
        if (cVar12 != '\0') {
          uStack_d0._4_4_ = (undefined4)((ulonglong)uStack_d0 >> 0x20);
          bVar13 = 1;
          goto LAB_140b6cfcf;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  bVar13 = 0;
LAB_140b6cfcf:
  *(byte *)(lVar29 + 0x9f) = *(byte *)(lVar29 + 0x9f) | bVar13;
  uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,0x73);
  bVar13 = pdb_1417b1a90(lVar22 + 0x20,&uStack_d0);
  *(byte *)(lVar29 + 0xa9) = *(byte *)(lVar29 + 0xa9) | bVar13;
  lVar27 = *(longlong *)(lVar18 + 0x310);
joined_r0x000140b6cffb:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x308) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6d040;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6d040:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0xa0) = *(byte *)(lVar29 + 0xa0) | 1;
          lVar27 = *(longlong *)(lVar18 + 0x328);
          goto joined_r0x000140b6d0b4;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0xa0) = *(undefined1 *)(lVar29 + 0xa0);
  lVar27 = *(longlong *)(lVar18 + 0x328);
joined_r0x000140b6d0b4:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 800) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6d100;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6d100:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0xa1) = *(byte *)(lVar29 + 0xa1) | 1;
          lVar27 = *(longlong *)(lVar18 + 0x340);
          goto joined_r0x000140b6d174;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0xa1) = *(undefined1 *)(lVar29 + 0xa1);
  lVar27 = *(longlong *)(lVar18 + 0x340);
joined_r0x000140b6d174:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x338) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6d1c0;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6d1c0:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0xa2) = *(byte *)(lVar29 + 0xa2) | 1;
          lVar27 = *(longlong *)(lVar18 + 0x358);
          goto joined_r0x000140b6d234;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0xa2) = *(undefined1 *)(lVar29 + 0xa2);
  lVar27 = *(longlong *)(lVar18 + 0x358);
joined_r0x000140b6d234:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x350) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6d280;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6d280:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0xa3) = *(byte *)(lVar29 + 0xa3) | 1;
          lVar27 = *(longlong *)(lVar18 + 0x370);
          goto joined_r0x000140b6d2f4;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0xa3) = *(undefined1 *)(lVar29 + 0xa3);
  lVar27 = *(longlong *)(lVar18 + 0x370);
joined_r0x000140b6d2f4:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x368) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6d340;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6d340:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0xa4) = *(byte *)(lVar29 + 0xa4) | 1;
          lVar27 = *(longlong *)(lVar18 + 0x388);
          goto joined_r0x000140b6d3b4;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0xa4) = *(undefined1 *)(lVar29 + 0xa4);
  lVar27 = *(longlong *)(lVar18 + 0x388);
joined_r0x000140b6d3b4:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x380) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6d400;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6d400:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0xa5) = *(byte *)(lVar29 + 0xa5) | 1;
          lVar27 = *(longlong *)(lVar18 + 0x3a0);
          goto joined_r0x000140b6d474;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0xa5) = *(undefined1 *)(lVar29 + 0xa5);
  lVar27 = *(longlong *)(lVar18 + 0x3a0);
joined_r0x000140b6d474:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x398) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6d4c0;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6d4c0:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0xa6) = *(byte *)(lVar29 + 0xa6) | 1;
          lVar27 = *(longlong *)(lVar18 + 0x3b8);
          goto joined_r0x000140b6d534;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0xa6) = *(undefined1 *)(lVar29 + 0xa6);
  lVar27 = *(longlong *)(lVar18 + 0x3b8);
joined_r0x000140b6d534:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x3b0) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6d580;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6d580:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0xa7) = *(byte *)(lVar29 + 0xa7) | 1;
          goto joined_r0x000140b6d5ed;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0xa7) = *(undefined1 *)(lVar29 + 0xa7);
joined_r0x000140b6d5ed:
  if (puStack_80 == (undefined8 *)0x0) {
    if (*(longlong *)(lVar18 + 0x2c8) != 0) {
      lVar27 = *(longlong *)(lVar18 + 0x2c8) * 0xc;
      puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x2c0) + 4);
      do {
        if (puVar30[-1] == 0xc3) {
          cVar12 = pdb_1417b1d70(param_14,puVar30);
          if (cVar12 == '\0') {
            uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
            cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
            goto joined_r0x000140b6d640;
          }
        }
        else {
          pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
          uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
          cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6d640:
          if (cVar12 != '\0') {
            uStack_d0._4_4_ = (undefined4)((ulonglong)uStack_d0 >> 0x20);
            uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,0x3d);
            bVar13 = pdb_1417b1a90(lVar22,&uStack_d0);
            *(byte *)(lVar29 + 0xab) = *(byte *)(lVar29 + 0xab) | bVar13 ^ 1;
            lVar27 = *(longlong *)(lVar18 + 0x2e0);
            goto joined_r0x000140b6db48;
          }
        }
        puVar30 = puVar30 + 3;
        lVar27 = lVar27 + -0xc;
      } while (lVar27 != 0);
      *(undefined1 *)(lVar29 + 0xab) = *(undefined1 *)(lVar29 + 0xab);
      lVar27 = *(longlong *)(lVar18 + 0x2e0);
      goto joined_r0x000140b6db48;
    }
    *(undefined1 *)(lVar29 + 0xab) = *(undefined1 *)(lVar29 + 0xab);
  }
  lVar27 = *(longlong *)(lVar18 + 0x2e0);
joined_r0x000140b6db48:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x2d8) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6d700;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6d700:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0xad) = *(byte *)(lVar29 + 0xad) | 1;
          lVar27 = *(longlong *)(lVar18 + 0x2f8);
          goto joined_r0x000140b6d774;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0xad) = *(undefined1 *)(lVar29 + 0xad);
  lVar27 = *(longlong *)(lVar18 + 0x2f8);
joined_r0x000140b6d774:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x2f0) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          goto joined_r0x000140b6d7c0;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
joined_r0x000140b6d7c0:
        if (cVar12 != '\0') {
          *(byte *)(lVar29 + 0xae) = *(byte *)(lVar29 + 0xae) | 1;
          lVar27 = *(longlong *)(lVar18 + 0x3d0);
          goto joined_r0x000140b6d834;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0xae) = *(undefined1 *)(lVar29 + 0xae);
  lVar27 = *(longlong *)(lVar18 + 0x3d0);
joined_r0x000140b6d834:
  if (lVar27 != 0) {
    lVar27 = lVar27 * 0xc;
    puVar30 = (undefined4 *)(*(longlong *)(lVar18 + 0x3c8) + 4);
    do {
      if (puVar30[-1] == 0xc3) {
        cVar12 = pdb_1417b1d70(param_14,puVar30);
        if (cVar12 == '\0') {
          uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,*puVar30);
          cVar12 = pdb_1417b1940(lVar19,&uStack_d0);
          uVar15 = uStack_d0;
          goto joined_r0x000140b6d880;
        }
      }
      else {
        pauStack_c8 = (undefined1 (*) [16])CONCAT44(pauStack_c8._4_4_,puVar30[1]);
        uStack_d0 = *(undefined1 (**) [16])(puVar30 + -1);
        cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
        uVar15 = uStack_d0;
joined_r0x000140b6d880:
        uStack_d0 = (undefined1 (*) [16])uVar15;
        if (cVar12 != '\0') {
          uStack_d0._4_4_ = (undefined4)((ulonglong)uVar15 >> 0x20);
          *(byte *)(lVar29 + 0xaf) = *(byte *)(lVar29 + 0xaf) | 1;
          uVar8 = uStack_d0._4_4_;
          goto joined_r0x000140b6d8fe;
        }
      }
      puVar30 = puVar30 + 3;
      lVar27 = lVar27 + -0xc;
    } while (lVar27 != 0);
  }
  *(undefined1 *)(lVar29 + 0xaf) = *(undefined1 *)(lVar29 + 0xaf);
  uVar8 = uStack_d0._4_4_;
joined_r0x000140b6d8fe:
  if (DAT_143cb2cc0 != '\0') {
    uStack_d0._0_4_ = 0x35;
    uStack_d0._4_4_ = uVar8;
    cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
    if (cVar12 == '\0') {
      bVar13 = 0;
    }
    else {
      uStack_d0._0_4_ = 0x3d;
      bVar13 = pdb_1417b1a90(lVar22,&uStack_d0);
    }
    *(byte *)(lVar29 + 0xa8) = *(byte *)(lVar29 + 0xa8) | bVar13;
    uStack_d0._0_4_ = 0x40;
    bVar13 = pdb_1417b1a90(lVar22,&uStack_d0);
    *(byte *)(lVar29 + 0xaa) = *(byte *)(lVar29 + 0xaa) | bVar13;
    uStack_d0._0_4_ = 0xab;
    cVar12 = pdb_1417b1a90(lVar22,&uStack_d0);
    if (cVar12 == '\0') {
      bVar13 = 0;
    }
    else {
      uStack_d0._0_4_ = 0x3d;
      bVar13 = pdb_1417b1a90(lVar22,&uStack_d0);
    }
    *(byte *)(lVar29 + 0xac) = *(byte *)(lVar29 + 0xac) | bVar13;
    uStack_d0._0_4_ = 0x25;
    cVar12 = pdb_1417b1a90(lVar22 + 0x20,&uStack_d0);
    if (cVar12 == '\0') {
      bVar13 = 0;
    }
    else {
      uStack_d0._0_4_ = 0x33;
      bVar13 = pdb_1417b1a90(lVar22,&uStack_d0);
      bVar13 = bVar13 ^ 1;
    }
    *(byte *)(lVar29 + 0xb0) = *(byte *)(lVar29 + 0xb0) | bVar13;
    uStack_d0._0_4_ = 0x23;
    bVar13 = pdb_1417b1a90(lVar22,&uStack_d0);
    *(byte *)(lVar29 + 0xb1) = *(byte *)(lVar29 + 0xb1) | bVar13;
    uStack_d0._0_4_ = 0x29;
    bVar13 = pdb_1417b1a90(lVar22,&uStack_d0);
    *(byte *)(lVar29 + 0xb2) = *(byte *)(lVar29 + 0xb2) | bVar13;
    uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,0xa6);
    bVar13 = pdb_1417b1a90(lVar22,&uStack_d0);
    *(byte *)(lVar29 + 0xb3) = *(byte *)(lVar29 + 0xb3) | bVar13;
  }
  uStack_d0 = (undefined1 (*) [16])CONCAT44(uStack_d0._4_4_,0xa7);
  bVar13 = pdb_1417b1a90(lVar22,&uStack_d0);
  *(byte *)(lVar29 + 0xb4) = *(byte *)(lVar29 + 0xb4) | bVar13;
  puVar4 = (ulonglong *)*param_11;
  lVar29 = param_11[1];
  uVar3 = *puVar4;
  uVar21 = 0;
  uVar16 = uVar3 - *(ulonglong *)(lVar29 + 0x18);
  if (uVar3 < *(ulonglong *)(lVar29 + 0x18)) {
    uVar16 = uVar21;
  }
  uVar17 = uVar3 - *(ulonglong *)(lVar29 + 0x38);
  if (uVar3 < *(ulonglong *)(lVar29 + 0x38)) {
    uVar17 = uVar21;
  }
  lVar18 = *(longlong *)(lVar29 + 8);
  uVar3 = *(ulonglong *)(lVar29 + 0x30);
  uVar26 = uVar3 - uVar17;
  if (uVar3 < uVar17) {
    uVar26 = uVar21;
  }
  uVar25 = *(ulonglong *)(lVar29 + 0x10);
  uVar23 = uVar25 - uVar16;
  if (uVar25 < uVar16) {
    uVar23 = uVar21;
  }
  lVar22 = *(longlong *)(lVar29 + 0x28);
  uVar21 = *(ulonglong *)(lVar29 + 0x40);
  *puVar4 = (uVar21 - uVar26) - uVar23;
  if (uVar25 >= uVar16 && uVar25 - uVar16 != 0 || uVar3 >= uVar17 && uVar3 - uVar17 != 0) {
    lVar22 = lVar22 + uVar17 * 0x10;
    lVar18 = lVar18 + uVar16 * 0x10;
    if (uVar25 < uVar16) {
      lVar18 = 8;
    }
    lVar29 = 0;
    if (uVar16 < uVar25) {
      lVar29 = lVar18 + -0x10 + uVar23 * 0x10;
    }
    if (uVar3 < uVar17) {
      lVar22 = 8;
    }
    lVar18 = lVar22 + -0x10 + uVar26 * 0x10;
    if (uVar3 <= uVar17) {
      lVar18 = lVar29;
    }
    *puVar4 = uVar21;
    if (*(char *)(lVar18 + 8) == '\x01') {
      *(undefined1 *)(lStack_a0 + 0x9e) = 1;
    }
    else {
      *(undefined1 *)(lStack_a0 + 0x9d) = 1;
    }
  }
  return;
}

