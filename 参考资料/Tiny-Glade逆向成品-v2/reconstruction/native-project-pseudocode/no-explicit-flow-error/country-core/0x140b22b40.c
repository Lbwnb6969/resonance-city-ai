// VA 0x140b22b40, PDB extent 1882 bytes
// country_core::systems::render_loop::compute_passes::grass2::compute_grass2_removal_mask
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/grass2.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::render_loop::compute_passes::grass2::compute_grass2_removal_mask
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/compute_passes/grass2.rs
   Extent: 1882 */

void pdb_140b22b40(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined7 uVar14;
  undefined7 uVar15;
  undefined7 uVar16;
  undefined7 uVar17;
  undefined7 uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  ushort uVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_200 [136];
  undefined1 auStack_178 [136];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  ulonglong *puStack_88;
  ulonglong *puStack_80;
  ulonglong *puStack_78;
  ulonglong *puStack_70;
  ulonglong *puStack_68;
  ulonglong *puStack_60;
  ulonglong *puStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar7 = *(longlong *)(param_2 + 0x70);
    uVar19 = 0x7057b4358e925fdb;
    lVar20 = 0;
    while( true ) {
      uVar19 = uVar19 & *(ulonglong *)(param_2 + 0x78);
      auVar2 = *(undefined1 (*) [16])(lVar7 + uVar19);
      auVar25[0] = -(auVar2[0] == DAT_142e33d90);
      auVar25[1] = -(auVar2[1] == DAT_142e33d90._1_1_);
      auVar25[2] = -(auVar2[2] == DAT_142e33d90._2_1_);
      auVar25[3] = -(auVar2[3] == DAT_142e33d90._3_1_);
      auVar25[4] = -(auVar2[4] == DAT_142e33d90._4_1_);
      auVar25[5] = -(auVar2[5] == DAT_142e33d90._5_1_);
      auVar25[6] = -(auVar2[6] == DAT_142e33d90._6_1_);
      auVar25[7] = -(auVar2[7] == DAT_142e33d90._7_1_);
      auVar25[8] = -(auVar2[8] == DAT_142e33d90._8_1_);
      auVar25[9] = -(auVar2[9] == DAT_142e33d90._9_1_);
      auVar25[10] = -(auVar2[10] == DAT_142e33d90._10_1_);
      auVar25[0xb] = -(auVar2[0xb] == DAT_142e33d90._11_1_);
      auVar25[0xc] = -(auVar2[0xc] == DAT_142e33d90._12_1_);
      auVar25[0xd] = -(auVar2[0xd] == DAT_142e33d90._13_1_);
      auVar25[0xe] = -(auVar2[0xe] == DAT_142e33d90._14_1_);
      auVar25[0xf] = -(auVar2[0xf] == DAT_142e33d90._15_1_);
      uVar22 = (ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe | (ushort)(auVar25[0xf] >> 7) << 0xf;
      uVar21 = (uint)uVar22;
      while (uVar22 != 0) {
        uVar3 = 0;
        for (uVar4 = uVar21; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
          uVar3 = uVar3 + 1;
        }
        uVar23 = uVar3 + uVar19 & *(ulonglong *)(param_2 + 0x78);
        pcVar1 = (char *)(lVar7 + -0x18 + uVar23 * -0x18);
        auVar26[0] = -(*pcVar1 == DAT_142e34350);
        auVar26[1] = -(pcVar1[1] == DAT_142e34350._1_1_);
        auVar26[2] = -(pcVar1[2] == DAT_142e34350._2_1_);
        auVar26[3] = -(pcVar1[3] == DAT_142e34350._3_1_);
        auVar26[4] = -(pcVar1[4] == DAT_142e34350._4_1_);
        auVar26[5] = -(pcVar1[5] == DAT_142e34350._5_1_);
        auVar26[6] = -(pcVar1[6] == DAT_142e34350._6_1_);
        auVar26[7] = -(pcVar1[7] == DAT_142e34350._7_1_);
        auVar26[8] = -(pcVar1[8] == DAT_142e34350._8_1_);
        auVar26[9] = -(pcVar1[9] == DAT_142e34350._9_1_);
        auVar26[10] = -(pcVar1[10] == DAT_142e34350._10_1_);
        auVar26[0xb] = -(pcVar1[0xb] == DAT_142e34350._11_1_);
        auVar26[0xc] = -(pcVar1[0xc] == DAT_142e34350._12_1_);
        auVar26[0xd] = -(pcVar1[0xd] == DAT_142e34350._13_1_);
        auVar26[0xe] = -(pcVar1[0xe] == DAT_142e34350._14_1_);
        auVar26[0xf] = -(pcVar1[0xf] == DAT_142e34350._15_1_);
        if ((ushort)((ushort)(SUB161(auVar26 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
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
                     (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar26[0xf] >> 7) << 0xf) == 0xffff) {
          uVar19 = *(ulonglong *)(lVar7 + uVar23 * -0x18 + -8);
          if ((uVar19 < *(ulonglong *)(param_2 + 0x210)) &&
             (uVar19 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar19 * 8), uVar19 != 0)) {
            lVar7 = ~uVar19 * 0x40;
            if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar7) != 0) {
              uVar8 = *(undefined8 *)(*(longlong *)(param_2 + 0x1d8) + lVar7 + 0x10);
              uVar14 = (undefined7)((ulonglong)param_2 >> 8);
              uVar9 = 5;
              puStack_88 = (ulonglong *)pdb_140a2db30(uVar8);
              uVar10 = 0x11;
              uStack_98 = uVar9;
              uStack_97 = uVar14;
              puStack_80 = (ulonglong *)pdb_140a2db30(uVar8);
              uVar9 = 0x12;
              uStack_90 = uVar10;
              uStack_8f = uVar14;
              puStack_78 = (ulonglong *)pdb_140a2db30(uVar8);
              uVar10 = 0xf;
              uVar15 = uVar14;
              puStack_70 = (ulonglong *)pdb_140a2db30(uVar8);
              uVar11 = 0x13;
              uVar16 = uVar15;
              puStack_68 = (ulonglong *)pdb_140a2db30(uVar8);
              uVar12 = 0x16;
              uVar17 = uVar16;
              puStack_60 = (ulonglong *)pdb_140a2db30(uVar8);
              uVar13 = 0x17;
              uVar18 = uVar17;
              puStack_58 = (ulonglong *)pdb_140a2db30(uVar8);
              lVar7 = CONCAT71(uVar18,6);
              plStack_50 = (longlong *)pdb_140a2e6e0(uVar8,lVar7,&UNK_143056060);
              uStack_f0 = 0;
              uStack_e8 = 8;
              uStack_e0 = 0;
              uVar8 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_143331feb,0x2e,&uStack_f0)
              ;
              pdb_140e291c0(auStack_178,&UNK_143331feb,0x2e,uVar8,param_1);
              uStack_d0._0_1_ = uStack_98;
              uStack_d0._1_7_ = uStack_97;
              uStack_c0 = uStack_90;
              uStack_bf = uStack_8f;
              uStack_d8 = lVar7;
              uStack_b0 = uVar9;
              uStack_af = uVar14;
              uStack_a0 = uVar10;
              uStack_9f = uVar15;
              uStack_a8 = uVar11;
              uStack_a7 = uVar16;
              uStack_b8 = uVar12;
              uStack_b7 = uVar17;
              uStack_c8 = uVar13;
              uStack_c7 = uVar18;
              pdb_141798100(auStack_200,auStack_178,&uStack_d8);
              uVar21 = *(uint *)(lVar7 + 8);
              pub_142e32760(auStack_178,auStack_200,0x88);
              uStack_d0 = CONCAT44(1,uVar21 >> 0x10);
              uStack_d8 = CONCAT44(uVar21 & 0xffff,1);
              pdb_140e28810(auStack_178,&uStack_d8);
              pdb_141764a70(param_1,&UNK_143056078,0x12,&UNK_14305608a,0x29,lVar7);
              plVar6 = plStack_50;
              pdb_140e9a350(plStack_50);
              pdb_140e9a350((ulonglong)plVar6 | 1);
              LOCK();
              lVar7 = *plStack_50;
              if (lVar7 == 8) {
                *plStack_50 = 0;
              }
              UNLOCK();
              if (lVar7 != 8) {
                pdb_142dbca40(plStack_50,0);
              }
              puVar5 = puStack_58;
              pdb_140e9a350(puStack_58);
              pdb_140e9a350((ulonglong)puVar5 | 1);
              LOCK();
              uVar19 = *puVar5;
              *puVar5 = *puVar5 - 0x10;
              UNLOCK();
              if ((uVar19 & 0xfffffffffffffff2) == 0x12) {
                pdb_142dbbf50(puVar5);
              }
              puVar5 = puStack_60;
              pdb_140e9a350(puStack_60);
              pdb_140e9a350((ulonglong)puVar5 | 1);
              LOCK();
              uVar19 = *puVar5;
              *puVar5 = *puVar5 - 0x10;
              UNLOCK();
              if ((uVar19 & 0xfffffffffffffff2) == 0x12) {
                pdb_142dbbf50(puVar5);
              }
              puVar5 = puStack_68;
              pdb_140e9a350(puStack_68);
              pdb_140e9a350((ulonglong)puVar5 | 1);
              LOCK();
              uVar19 = *puVar5;
              *puVar5 = *puVar5 - 0x10;
              UNLOCK();
              if ((uVar19 & 0xfffffffffffffff2) == 0x12) {
                pdb_142dbbf50(puVar5);
              }
              puVar5 = puStack_70;
              pdb_140e9a350(puStack_70);
              pdb_140e9a350((ulonglong)puVar5 | 1);
              LOCK();
              uVar19 = *puVar5;
              *puVar5 = *puVar5 - 0x10;
              UNLOCK();
              if ((uVar19 & 0xfffffffffffffff2) == 0x12) {
                pdb_142dbbf50(puVar5);
              }
              puVar5 = puStack_78;
              pdb_140e9a350(puStack_78);
              pdb_140e9a350((ulonglong)puVar5 | 1);
              LOCK();
              uVar19 = *puVar5;
              *puVar5 = *puVar5 - 0x10;
              UNLOCK();
              if ((uVar19 & 0xfffffffffffffff2) == 0x12) {
                pdb_142dbbf50(puVar5);
              }
              puVar5 = puStack_80;
              pdb_140e9a350(puStack_80);
              pdb_140e9a350((ulonglong)puVar5 | 1);
              LOCK();
              uVar19 = *puVar5;
              *puVar5 = *puVar5 - 0x10;
              UNLOCK();
              if ((uVar19 & 0xfffffffffffffff2) == 0x12) {
                pdb_142dbbf50(puVar5);
              }
              puVar5 = puStack_88;
              pdb_140e9a350(puStack_88);
              pdb_140e9a350((ulonglong)puVar5 | 1);
              LOCK();
              uVar19 = *puVar5;
              *puVar5 = *puVar5 - 0x10;
              UNLOCK();
              if ((uVar19 & 0xfffffffffffffff2) == 0x12) {
                pdb_142dbbf50(puVar5);
              }
              return;
            }
          }
          goto LAB_140b23020;
        }
        uVar22 = (ushort)(uVar21 - 1) & (ushort)uVar21;
        uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar22);
      }
      auVar24[0] = -(auVar2[0] == -1);
      auVar24[1] = -(auVar2[1] == -1);
      auVar24[2] = -(auVar2[2] == -1);
      auVar24[3] = -(auVar2[3] == -1);
      auVar24[4] = -(auVar2[4] == -1);
      auVar24[5] = -(auVar2[5] == -1);
      auVar24[6] = -(auVar2[6] == -1);
      auVar24[7] = -(auVar2[7] == -1);
      auVar24[8] = -(auVar2[8] == -1);
      auVar24[9] = -(auVar2[9] == -1);
      auVar24[10] = -(auVar2[10] == -1);
      auVar24[0xb] = -(auVar2[0xb] == -1);
      auVar24[0xc] = -(auVar2[0xc] == -1);
      auVar24[0xd] = -(auVar2[0xd] == -1);
      auVar24[0xe] = -(auVar2[0xe] == -1);
      auVar24[0xf] = -(auVar2[0xf] == -1);
      if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar24 >> 0x17,0) & 1) != 0) || (SUB161(auVar24 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar24 >> 0x27,0) & 1) != 0) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar24 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar24 >> 0x3f,0) & 1) != 0) || (SUB161(auVar24 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar24 >> 0x4f,0) & 1) != 0) || (SUB161(auVar24 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar24 >> 0x5f,0) & 1) != 0) || (SUB161(auVar24 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar24 >> 0x6f,0) & 1) != 0) || (SUB161(auVar24 >> 0x77,0) & 1) != 0) ||
          auVar24[0xf] < '\0') break;
      uVar19 = uVar19 + lVar20 + 0x10;
      lVar20 = lVar20 + 0x10;
    }
  }
LAB_140b23020:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_143056048);
}

