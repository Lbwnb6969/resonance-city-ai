// VA 0x140b9ed80, PDB extent 1735 bytes
// country_core::startup::clearing::uninit_clearing
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/clearing.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::startup::clearing::uninit_clearing
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/clearing.rs
   Extent: 1735 */

void pdb_140b9ed80(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lStack_108;
  undefined8 uStack_100;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  byte *pbStack_b0;
  longlong lStack_a8;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  longlong lStack_98;
  longlong lStack_90;
  longlong lStack_88;
  byte *pbStack_80;
  longlong lStack_78;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined8 uStack_68;
  longlong *plStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  lVar2 = *param_1;
  pdb_140cac520(lVar2);
  pdb_140cac340(lVar2 + 0x30);
  *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
  lStack_108 = *param_2;
  uStack_100 = 1;
  do {
    pdb_140c98640(&lStack_98,&lStack_108);
  } while ((int)lStack_98 != 0);
  *(undefined4 *)param_3[2] = *(undefined4 *)((longlong)param_3 + 0x1c);
  lVar2 = *param_3;
  pdb_140cac940(lVar2);
  *(undefined1 *)(lVar2 + 0x38) = 1;
  *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
  lVar2 = *param_4;
  for (lVar14 = 0; lVar14 != 0x1220; lVar14 = lVar14 + 0xa0) {
    if (-0x7fffffffffffffff < *(longlong *)(lVar2 + 0x40 + lVar14)) {
      *(undefined8 *)(lVar2 + 0x50 + lVar14) = 0;
      if (*(longlong *)(lVar2 + 0x70 + lVar14) != 0) {
        uVar3 = *(ulonglong *)(lVar2 + 0x60 + lVar14);
        if (uVar3 == 0) {
          uVar8 = 0;
        }
        else {
          pub_142e32780(*(undefined8 *)(lVar2 + 0x58 + lVar14),0xff,uVar3 + 0x11);
          uVar8 = (uVar3 + 1 & 0xfffffffffffffff8) - (uVar3 + 1 >> 3);
          if (uVar3 < 8) {
            uVar8 = uVar3;
          }
        }
        *(undefined8 *)(lVar2 + 0x70 + lVar14) = 0;
        *(ulonglong *)(lVar2 + 0x68 + lVar14) = uVar8;
      }
      *(undefined8 *)(lVar2 + 0xc0 + lVar14) = 0;
    }
  }
  *(undefined4 *)param_6[2] = *(undefined4 *)((longlong)param_6 + 0x1c);
  lVar2 = *param_6;
  puVar10 = *(undefined8 **)(lVar2 + 8);
  lVar14 = *(longlong *)(lVar2 + 0x10);
  *(undefined8 *)(lVar2 + 0x10) = 0;
  if (lVar14 != 0) {
    lVar14 = 1 - lVar14;
    do {
      plVar13 = (longlong *)*puVar10;
      LOCK();
      *plVar13 = *plVar13 + -1;
      UNLOCK();
      lStack_d0 = lVar14;
      plStack_58 = puVar10;
      if (*plVar13 == 0) {
        pdb_1406ed6a0(puVar10);
      }
      puVar10 = plStack_58 + 10;
      lVar14 = lStack_d0 + 1;
    } while (lVar14 != 1);
  }
  *(undefined1 *)(lVar2 + 0x18) = 0;
  lVar2 = *param_5;
  if (lVar2 != 0) {
    *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
    if (*(longlong *)(lVar2 + 0x10) != 0) {
      lVar14 = *(longlong *)(lVar2 + 8);
      lVar2 = *(longlong *)(lVar2 + 0x10) * 0x18;
      uVar3 = lVar2 - 0x18;
      uVar11 = (uint)(uVar3 / 0x18);
      lVar9 = lVar14;
      if ((~uVar11 & 7) != 0) {
        lVar12 = -(ulonglong)(uVar11 + 1 & 7);
        do {
          *(undefined8 *)(lVar9 + 8) = 0;
          *(undefined4 *)(lVar9 + 0x10) = 0;
          lVar9 = lVar9 + 0x18;
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0);
      }
      if (0xa7 < uVar3) {
        do {
          *(undefined8 *)(lVar9 + 8) = 0;
          *(undefined4 *)(lVar9 + 0x10) = 0;
          *(undefined8 *)(lVar9 + 0x20) = 0;
          *(undefined4 *)(lVar9 + 0x28) = 0;
          *(undefined8 *)(lVar9 + 0x38) = 0;
          *(undefined4 *)(lVar9 + 0x40) = 0;
          *(undefined8 *)(lVar9 + 0x50) = 0;
          *(undefined4 *)(lVar9 + 0x58) = 0;
          *(undefined8 *)(lVar9 + 0x68) = 0;
          *(undefined4 *)(lVar9 + 0x70) = 0;
          *(undefined8 *)(lVar9 + 0x80) = 0;
          *(undefined4 *)(lVar9 + 0x88) = 0;
          *(undefined8 *)(lVar9 + 0x98) = 0;
          *(undefined4 *)(lVar9 + 0xa0) = 0;
          *(undefined8 *)(lVar9 + 0xb0) = 0;
          *(undefined4 *)(lVar9 + 0xb8) = 0;
          lVar9 = lVar9 + 0xc0;
        } while (lVar9 != lVar14 + lVar2);
      }
    }
  }
  plVar13 = (longlong *)*param_8;
  if ((int)*plVar13 == 2) {
    if (*(longlong *)*param_7 == 0) {
      pdb_14007ee60();
      pbStack_80 = pub_1406abab0(0x11,1);
      uVar7 = _UNK_14305ff8c;
      uVar6 = _UNK_14305ff88;
      uVar1 = _UNK_14305ff84;
      if (pbStack_80 == (byte *)0x0) {
        pdb_142dc7e2a(1,0x11);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined4 *)pbStack_80 = _DAT_14305ff80;
      *(undefined4 *)(pbStack_80 + 4) = uVar1;
      *(undefined4 *)(pbStack_80 + 8) = uVar6;
      *(undefined4 *)(pbStack_80 + 0xc) = uVar7;
      pbStack_80[0x10] = 0x67;
      lStack_98 = 0;
      lStack_88 = 0x11;
      lStack_78 = 0x11;
      uStack_70 = CONCAT31(uStack_70._1_3_,2);
    }
    else {
      pdb_140a8b180(&lStack_98,*(longlong *)*param_7 + 0x10,&DAT_14305ff80,0x11);
      if ((int)lStack_98 == 2) {
        lStack_108 = lStack_90;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143060400,0x2b,&lStack_108,&UNK_1430603a0,&UNK_14305ff98);
      }
    }
    lStack_a8 = lStack_78;
    uStack_a0 = uStack_70;
    uStack_9c = uStack_6c;
    uStack_9b = uStack_6b;
    uStack_9a = uStack_6a;
    uStack_99 = uStack_69;
    lStack_b8 = lStack_88;
    pbStack_b0 = pbStack_80;
    lStack_c8 = lStack_98;
    lStack_c0 = lStack_90;
    if (lStack_98 == 1) {
      uStack_49 = 1;
      pdb_141808ec0(&lStack_108,&lStack_c0);
      if (lStack_108 != -0x7ffffffffffffffc) {
        uStack_68 = uStack_d8;
        uStack_70 = uStack_e0;
        uStack_6c = (undefined1)uStack_dc;
        uStack_6b = (undefined1)((uint)uStack_dc >> 8);
        uStack_6a = (undefined1)((uint)uStack_dc >> 0x10);
        uStack_69 = (undefined1)((uint)uStack_dc >> 0x18);
        lStack_98 = lStack_108;
        lStack_90 = uStack_100;
                    /* WARNING: Subroutine does not return */
        pdb_142dc8170(&UNK_143044570,0x2b,&lStack_98,&UNK_143044530,&UNK_143043dc0);
      }
    }
    lStack_78 = lStack_a8;
    uStack_70 = uStack_a0;
    uStack_6c = uStack_9c;
    uStack_6b = uStack_9b;
    uStack_6a = uStack_9a;
    uStack_69 = uStack_99;
    lStack_88 = lStack_b8;
    pbStack_80 = pbStack_b0;
    lStack_98 = lStack_c8;
    lStack_90 = lStack_c0;
    uVar1 = *(undefined4 *)((longlong)param_8 + 0x1c);
    puVar4 = (undefined4 *)param_8[2];
    *puVar4 = uVar1;
    if ((int)*plVar13 != 2) {
      plStack_58 = plVar13;
      pdb_1409a5ed0(plVar13);
      plVar13 = plStack_58;
      if (plStack_58[2] != 0) {
        pub_1406abac0((byte *)plStack_58[3],plStack_58[2],1);
      }
    }
    plVar13[4] = lStack_78;
    plVar13[5] = CONCAT17(uStack_69,
                          CONCAT16(uStack_6a,CONCAT15(uStack_6b,CONCAT14(uStack_6c,uStack_70))));
    plVar13[2] = lStack_88;
    plVar13[3] = (longlong)pbStack_80;
    *plVar13 = lStack_98;
    plVar13[1] = lStack_90;
    *puVar4 = uVar1;
    plVar13[6] = 1;
  }
  return;
}

