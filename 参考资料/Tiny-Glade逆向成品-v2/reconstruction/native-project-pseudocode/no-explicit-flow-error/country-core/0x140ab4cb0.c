// VA 0x140ab4cb0, PDB extent 923 bytes
// country_core::startup::swap_replacement_mods::apply_preactivated_mod_textures
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/swap_replacement_mods.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::startup::swap_replacement_mods::apply_preactivated_mod_textures
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/swap_replacement_mods.rs
   Extent: 923 */

void pdb_140ab4cb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  byte *arg0;
  ulonglong uVar6;
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  longlong lVar9;
  undefined1 (*pauVar10) [16];
  uint uVar11;
  byte *pbVar12;
  undefined1 (*pauStack_d0) [16];
  byte *pbStack_c8;
  longlong lStack_c0;
  longlong lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  longlong ***ppplStack_78;
  longlong **pplStack_70;
  longlong *plStack_68;
  longlong *plStack_60;
  longlong **pplStack_58;
  code *pcStack_50;
  undefined1 uStack_41;
  undefined8 uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  pdb_140d8f670(&pauStack_d0);
  lVar8 = lStack_c0;
  arg0 = pbStack_c8;
  if (lStack_c0 != 0) {
    pbVar12 = pbStack_c8 + 8;
    lVar9 = lStack_c0;
    do {
      if (*(ulonglong *)(pbVar12 + -8) != 0) {
        pub_1406abac0(*(byte **)pbVar12,*(ulonglong *)(pbVar12 + -8),1);
      }
      pbVar12 = pbVar12 + 0x18;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if (pauStack_d0 != (undefined1 (*) [16])0x0) {
    pub_1406abac0(arg0,(longlong)pauStack_d0 * 0x18,8);
  }
  if (lVar8 != 0) {
    pdb_141c36f00(&pplStack_70);
    if (pplStack_70 == (longlong **)0x0) {
      plStack_60 = plStack_68;
      if (*_DAT_143ca8e90 != 0) {
        pplStack_58 = &plStack_60;
        pcStack_50 = pdb_140f36c30;
        pauStack_d0 = (undefined1 (*) [16])0x0;
        pbStack_c8 = &UNK_14304a1e5;
        lStack_c0 = 0x2c;
        lStack_b8 = 0;
        puStack_b0 = &UNK_14304a1ac;
        uStack_a8 = 0x38;
        uStack_a0 = 1;
        puStack_98 = &UNK_14304a1e5;
        uStack_90 = 0x2c;
        uStack_88 = 0x8c00000001;
        puStack_80 = &UNK_14304a287;
        ppplStack_78 = &pplStack_58;
        pdb_140f332f0(&uStack_41,&pauStack_d0);
      }
      pdb_140f36c40(&plStack_60);
    }
    else {
      pplStack_58 = pplStack_70;
      pcStack_50 = (code *)plStack_68;
      uVar2 = *param_1;
      *(undefined4 *)param_2[2] = *(undefined4 *)((longlong)param_2 + 0x1c);
      uVar3 = *param_2;
      pdb_140d8edf0(&pauStack_d0);
      pdb_141b00390(uVar2,uVar3,&pplStack_58,&pauStack_d0);
      if (pbStack_c8 != (byte *)0x0) {
        if (lStack_b8 != 0) {
          auVar1 = *pauStack_d0;
          pauVar10 = pauStack_d0 + 1;
          uVar11 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
          pauVar7 = pauStack_d0;
          lVar8 = lStack_b8;
          do {
            if ((short)uVar11 == 0) {
              do {
                auVar1 = *pauVar10;
                pauVar7 = pauVar7 + -0x18;
                pauVar10 = pauVar10 + 1;
                uVar11 = (ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
              } while (uVar11 == 0);
            }
            uVar4 = 0;
            for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            uVar6 = *(ulonglong *)((longlong)pauVar7 + (ulonglong)uVar4 * -0x18 + -0x18);
            if (uVar6 != 0) {
              pub_1406abac0(*(byte **)((longlong)pauVar7 + (ulonglong)uVar4 * -0x18 + -0x10),uVar6,1
                           );
            }
            uVar11 = uVar11 - 1 & uVar11;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        uVar6 = (longlong)pbStack_c8 * 0x18 + 0x27U & 0xfffffffffffffff0;
        if (pbStack_c8 + uVar6 + 0x11 != (byte *)0x0) {
          pub_1406abac0((byte *)((longlong)pauStack_d0 - uVar6),
                        (ulonglong)(pbStack_c8 + uVar6 + 0x11),0x10);
        }
      }
      LOCK();
      *pplStack_58 = (longlong *)((longlong)*pplStack_58 + -1);
      UNLOCK();
      if (*pplStack_58 == (longlong *)0x0) {
        pdb_140dd78e0(&pplStack_58);
      }
      LOCK();
      *(longlong *)pcStack_50 = *(longlong *)pcStack_50 + -1;
      UNLOCK();
      pdb_142d8feb0((longlong *)((longlong)pcStack_50 + 8));
    }
  }
  return;
}

