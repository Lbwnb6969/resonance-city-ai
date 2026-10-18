// VA 0x140c421c0, PDB extent 1383 bytes
// country_core::resources::walls::decorator_archivist::DecoratorArchivist::extract_and_restore_to_storage
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::resources::walls::decorator_archivist::DecoratorArchivist::extract_and_restore_to_storage
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/walls/decorator_archivist.rs
   Extent: 1383 */

void pdb_140c421c0(undefined1 (*param_1) [16],undefined8 param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  longlong lVar14;
  longlong lStack_2e8;
  undefined1 auStack_2e0 [136];
  undefined8 uStack_258;
  undefined1 (*pauStack_250) [16];
  undefined8 uStack_248;
  undefined8 uStack_1d0;
  longlong lStack_1c8;
  undefined1 auStack_1c0 [136];
  longlong lStack_138;
  longlong lStack_130;
  undefined1 auStack_128 [136];
  undefined1 (*pauStack_a0) [16];
  undefined1 (*pauStack_98) [16];
  undefined1 *puStack_90;
  ushort uStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  undefined8 uStack_60;
  undefined1 (*pauStack_58) [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pauVar12 = param_1 + 0xc;
  pdb_140cacab0(param_1 + 6);
  pdb_140cacab0(param_1 + 9);
  pub_142e32760(&lStack_130,pauVar12,0x90);
  *(undefined8 *)param_1[0xc] = 0;
  pub_142e32760(&lStack_1c8,param_1 + 0x15,0x90);
  *(undefined8 *)param_1[0x15] = 0;
  uVar10 = _UNK_143077fd8;
  pauStack_a0 = *(undefined1 (**) [16])*param_1;
  puStack_90 = *pauStack_a0 + *(longlong *)(*param_1 + 8) + 1;
  auVar1 = *pauStack_a0;
  uStack_88 = ~((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
  lStack_80 = *(longlong *)(param_1[1] + 8);
  uStack_68 = *(ulonglong *)param_1[1];
  uStack_60 = *(undefined8 *)(param_1[1] + 8);
  uStack_78 = *(undefined8 *)*param_1;
  uStack_70 = *(ulonglong *)(*param_1 + 8);
  *(undefined8 *)param_1[1] = _DAT_143077fd0;
  *(undefined8 *)(param_1[1] + 8) = uVar10;
  *param_1 = _DAT_143077fc0;
  pauStack_98 = pauStack_a0 + 1;
  uStack_1d0 = 1;
  lStack_138 = 1;
  pauStack_58 = param_1;
  uStack_50 = param_2;
  do {
    if (pauStack_a0 == (undefined1 (*) [16])0x0) {
LAB_140c42522:
      lVar14 = lStack_130;
      if ((lStack_138 != 1) || (lStack_130 = 0, lVar14 == 0)) {
        pdb_140990220(&lStack_138);
        lStack_138 = 2;
        goto LAB_140c42588;
      }
      pauVar8 = (undefined1 (*) [16])&uStack_258;
      pub_142e32760(pauVar8,auStack_128,0x88);
      uVar10 = 1;
      pauVar12 = pauVar8;
    }
    else {
      if (lStack_80 == 0) {
LAB_140c4248c:
        uVar4 = uStack_70;
        if (uStack_70 == 0) {
          uStack_68 = 0;
        }
        else {
          pub_142e32780(uStack_78,0xff,uStack_70 + 0x11);
          uStack_68 = (uVar4 + 1 & 0xfffffffffffffff8) - (uVar4 + 1 >> 3);
          if (uVar4 < 8) {
            uStack_68 = uVar4;
          }
        }
        uStack_60 = 0;
        *(ulonglong *)pauStack_58[1] = uStack_68;
        *(undefined8 *)(pauStack_58[1] + 8) = 0;
        *(undefined8 *)*pauStack_58 = uStack_78;
        *(ulonglong *)(*pauStack_58 + 8) = uStack_70;
        pauStack_a0 = (undefined1 (*) [16])0x0;
        param_2 = uStack_50;
        goto LAB_140c42522;
      }
      uVar5 = (uint)uStack_88;
      if (uStack_88 == 0) {
        do {
          auVar1 = *pauStack_98;
          pauStack_a0 = pauStack_a0 + -0x98;
          pauStack_98 = pauStack_98 + 1;
          uVar5 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
        } while (uVar5 == 0);
      }
      uStack_88 = (ushort)uVar5;
      uVar2 = 0;
      for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
        uVar2 = uVar2 + 1;
      }
      uStack_88 = uStack_88 - 1 & uStack_88;
      lVar6 = (ulonglong)uVar2 * -0x98;
      lVar11 = lStack_80 + -1;
      lVar14 = *(longlong *)((longlong)pauStack_a0 + lVar6 + -0x90);
      lStack_80 = lVar11;
      if (lVar14 == 0) {
        if (lVar11 != 0) {
          uVar5 = (uint)uStack_88;
          pauVar8 = pauStack_a0;
          pauVar13 = pauStack_98;
          do {
            if ((short)uVar5 == 0) {
              do {
                auVar1 = *pauVar13;
                pauVar8 = pauVar8 + -0x98;
                pauVar13 = pauVar13 + 1;
                uVar5 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
                pauStack_a0 = pauVar8;
                pauStack_98 = pauVar13;
              } while (uVar5 == 0);
            }
            uVar2 = 0;
            for (uVar3 = uVar5; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
              uVar2 = uVar2 + 1;
            }
            uVar5 = uVar5 - 1 & uVar5;
            uStack_88 = (ushort)uVar5;
            lVar11 = lVar11 + -1;
            lStack_80 = lVar11;
            pdb_1404d6920((longlong)pauVar8 + (ulonglong)uVar2 * -0x98 + -0x90);
          } while (lVar11 != 0);
        }
        goto LAB_140c4248c;
      }
      pauVar12 = *(undefined1 (**) [16])((longlong)pauStack_a0 + lVar6 + -0x98);
      pub_142e32770((undefined1 (*) [16])&uStack_258,(longlong)pauStack_a0 + lVar6 + -0x88,0x88);
      uVar10 = 0;
      pauVar8 = (undefined1 (*) [16])&uStack_258;
      param_2 = uStack_50;
    }
    while( true ) {
      pub_142e32760(auStack_2e0,pauVar8,0x88);
      uVar9 = uVar10;
      lStack_2e8 = lVar14;
      uVar7 = pdb_140c3f210(param_2,uVar10,pauVar12);
      uStack_258 = uVar10;
      pauStack_250 = pauVar12;
      uStack_248 = uVar9;
      pdb_140c8f310(uVar7,&lStack_2e8,&uStack_258);
      pdb_1404d6920(&lStack_2e8);
      if (lStack_138 != 2) break;
LAB_140c42588:
      lVar14 = lStack_1c8;
      if ((int)uStack_1d0 != 1) goto LAB_140c4260c;
      lStack_1c8 = 0;
      uVar10 = 2;
      pauVar8 = (undefined1 (*) [16])auStack_1c0;
      if (lVar14 == 0) {
LAB_140c4260c:
        pdb_1409a23c0(&uStack_1d0);
        return;
      }
    }
  } while( true );
}

