// VA 0x14093b230, PDB extent 1940 bytes
// country_core::systems::render_loop::vermeer::vermeer_render_from_target
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/vermeer.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::render_loop::vermeer::vermeer_render_from_target
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/render_loop/vermeer.rs
   Extent: 1940 */

void pdb_14093b230(longlong param_1,longlong param_2,undefined8 *param_3,undefined2 *param_4,
                  longlong param_5,undefined4 param_6,undefined4 param_7,char param_8,char param_9,
                  byte param_10)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  undefined4 uVar40;
  longlong lVar41;
  undefined8 *puVar42;
  undefined8 uVar43;
  ulonglong uVar44;
  longlong lVar45;
  uint uVar46;
  ushort uVar47;
  ulonglong uVar48;
  int iVar49;
  undefined8 *puVar50;
  uint uVar51;
  char *pcVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined4 uStack_2a0;
  int iStack_29c;
  longlong lStack_298;
  undefined4 uStack_290;
  undefined4 *puStack_288;
  char acStack_218 [24];
  char acStack_200 [24];
  undefined8 *puStack_1e8;
  char *pcStack_1e0;
  char *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 auStack_1b0 [6];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_178;
  undefined2 uStack_170;
  undefined2 uStack_16e;
  undefined2 uStack_16c;
  undefined2 uStack_16a;
  uint uStack_168;
  undefined2 uStack_164;
  undefined1 uStack_162;
  undefined1 uStack_161;
  undefined8 uStack_160;
  undefined8 **ppuStack_158;
  char *pcStack_150;
  undefined4 *puStack_148;
  undefined8 *puStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  uint uStack_c4;
  char cStack_c0;
  undefined7 uStack_bf;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  uint uStack_94;
  undefined8 uStack_90;
  
  cVar39 = UNK_142e3435f;
  cVar38 = UNK_142e3435e;
  cVar37 = UNK_142e3435d;
  cVar36 = UNK_142e3435c;
  cVar35 = UNK_142e3435b;
  cVar34 = UNK_142e3435a;
  cVar33 = UNK_142e34359;
  cVar32 = UNK_142e34358;
  cVar31 = UNK_142e34357;
  cVar30 = UNK_142e34356;
  cVar29 = UNK_142e34355;
  cVar28 = UNK_142e34354;
  cVar27 = UNK_142e34353;
  cVar26 = UNK_142e34352;
  cVar25 = UNK_142e34351;
  cVar24 = DAT_142e34350;
  cVar23 = UNK_142e33d9f;
  cVar22 = UNK_142e33d9e;
  cVar21 = UNK_142e33d9d;
  cVar20 = UNK_142e33d9c;
  cVar19 = UNK_142e33d9b;
  cVar18 = UNK_142e33d9a;
  cVar17 = UNK_142e33d99;
  cVar16 = UNK_142e33d98;
  cVar15 = UNK_142e33d97;
  cVar14 = UNK_142e33d96;
  cVar13 = UNK_142e33d95;
  cVar12 = UNK_142e33d94;
  cVar11 = UNK_142e33d93;
  cVar10 = UNK_142e33d92;
  cVar9 = UNK_142e33d91;
  cVar8 = DAT_142e33d90;
  uStack_90 = 0xfffffffffffffffe;
  puVar50 = (undefined8 *)0x8000;
  if (param_8 != '\0') {
    puVar50 = (undefined8 *)0xa00;
  }
  puStack_178 = param_3;
  if (*(longlong *)(param_2 + 0x88) != 0) {
    lVar41 = *(longlong *)(param_2 + 0x70);
    uVar44 = 0x7057b4358e925fdb;
    lVar45 = 0;
    while( true ) {
      uVar44 = uVar44 & *(ulonglong *)(param_2 + 0x78);
      auVar1 = *(undefined1 (*) [16])(lVar41 + uVar44);
      auVar55[0] = -(auVar1[0] == DAT_142e33d90);
      auVar55[1] = -(auVar1[1] == UNK_142e33d91);
      auVar55[2] = -(auVar1[2] == UNK_142e33d92);
      auVar55[3] = -(auVar1[3] == UNK_142e33d93);
      auVar55[4] = -(auVar1[4] == UNK_142e33d94);
      auVar55[5] = -(auVar1[5] == UNK_142e33d95);
      auVar55[6] = -(auVar1[6] == UNK_142e33d96);
      auVar55[7] = -(auVar1[7] == UNK_142e33d97);
      auVar55[8] = -(auVar1[8] == UNK_142e33d98);
      auVar55[9] = -(auVar1[9] == UNK_142e33d99);
      auVar55[10] = -(auVar1[10] == UNK_142e33d9a);
      auVar55[0xb] = -(auVar1[0xb] == UNK_142e33d9b);
      auVar55[0xc] = -(auVar1[0xc] == UNK_142e33d9c);
      auVar55[0xd] = -(auVar1[0xd] == UNK_142e33d9d);
      auVar55[0xe] = -(auVar1[0xe] == UNK_142e33d9e);
      auVar55[0xf] = -(auVar1[0xf] == UNK_142e33d9f);
      uVar47 = (ushort)(SUB161(auVar55 >> 7,0) & 1) | (ushort)(SUB161(auVar55 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar55 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar55 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar55 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar55 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar55 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar55 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar55 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar55 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar55 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar55 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar55 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar55 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar55 >> 0x77,0) & 1) << 0xe | (ushort)(auVar55[0xf] >> 7) << 0xf;
      uVar46 = (uint)uVar47;
      while (uVar47 != 0) {
        uVar51 = 0;
        for (uVar2 = uVar46; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
          uVar51 = uVar51 + 1;
        }
        uVar48 = uVar51 + uVar44 & *(ulonglong *)(param_2 + 0x78);
        pcVar52 = (char *)(lVar41 + -0x18 + uVar48 * -0x18);
        auVar56[0] = -(*pcVar52 == DAT_142e34350);
        auVar56[1] = -(pcVar52[1] == UNK_142e34351);
        auVar56[2] = -(pcVar52[2] == UNK_142e34352);
        auVar56[3] = -(pcVar52[3] == UNK_142e34353);
        auVar56[4] = -(pcVar52[4] == UNK_142e34354);
        auVar56[5] = -(pcVar52[5] == UNK_142e34355);
        auVar56[6] = -(pcVar52[6] == UNK_142e34356);
        auVar56[7] = -(pcVar52[7] == UNK_142e34357);
        auVar56[8] = -(pcVar52[8] == UNK_142e34358);
        auVar56[9] = -(pcVar52[9] == UNK_142e34359);
        auVar56[10] = -(pcVar52[10] == UNK_142e3435a);
        auVar56[0xb] = -(pcVar52[0xb] == UNK_142e3435b);
        auVar56[0xc] = -(pcVar52[0xc] == UNK_142e3435c);
        auVar56[0xd] = -(pcVar52[0xd] == UNK_142e3435d);
        auVar56[0xe] = -(pcVar52[0xe] == UNK_142e3435e);
        auVar56[0xf] = -(pcVar52[0xf] == UNK_142e3435f);
        if ((ushort)((ushort)(SUB161(auVar56 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar56 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar56 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar56 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar56 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar56 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar56 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar56 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar56 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar56 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar56 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar56 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar56 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar56 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar56 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar56[0xf] >> 7) << 0xf) == 0xffff) {
          uVar44 = *(ulonglong *)(lVar41 + uVar48 * -0x18 + -8);
          if ((*(ulonglong *)(param_2 + 0x210) <= uVar44) ||
             (uVar44 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar44 * 8), uVar44 == 0))
          goto LAB_14093b3b3;
          lVar41 = ~uVar44 * 0x40;
          if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar41) == 0)
          goto LAB_14093b3b3;
          if (param_4 == (undefined2 *)0x0) {
            uVar43 = 0xf736d24c0ec5bd77;
            if (DAT_143cb2d0c != '\0') {
              uVar43 = 0x52c2c594db0dcfb0;
            }
            puVar42 = (undefined8 *)
                      pdb_140a2e580(*(undefined8 *)(*(longlong *)(param_2 + 0x1d8) + lVar41 + 0x10),
                                    uVar43);
            param_4 = &uStack_170;
            pdb_140e1ea30(param_4,*puVar42,param_1,0x23,&UNK_143330ab0);
          }
          pdb_140cb3ee0(acStack_200,param_1,param_4);
          uVar46 = *(uint *)(param_5 + 8);
          uStack_170 = 0;
          uStack_16e = (undefined2)uVar46;
          uStack_16c = (undefined2)(uVar46 >> 0x10);
          uStack_16a = 1;
          uStack_168 = 0x25010001;
          uStack_164 = 0x201;
          uStack_162 = 0;
          uStack_160._0_4_ = 0x430232c0;
          uStack_160._4_4_ = 1;
          ppuStack_158 = (undefined8 **)0xe;
          uVar40 = pdb_140e2b4e0(param_1,&uStack_170);
          uStack_16c = (undefined2)uVar40;
          uStack_16a = (undefined2)((uint)uVar40 >> 0x10);
          uStack_164 = 1;
          uStack_162 = 1;
          uStack_161 = 0;
          uStack_160._0_4_ = 0x2012501;
          uStack_160._4_4_ = uStack_160._4_4_ & 0xffffff00;
          uStack_170 = 0;
          uStack_16e = 0;
          uStack_168 = uVar46;
          uStack_94 = uVar46;
          if (*(char *)(param_1 + 0x24c) == '\x01') {
            pdb_140e19620(&uStack_170,param_1);
          }
          uStack_a8 = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
          uStack_b8 = CONCAT22(uStack_16e,uStack_170);
          uStack_b4 = CONCAT22(uStack_16a,uStack_16c);
          uStack_b0 = uStack_168;
          uStack_ac = CONCAT13(uStack_161,CONCAT12(uStack_162,uStack_164));
          iVar49 = (int)puVar50;
          uVar43 = pdb_140e1d1f0(iVar49 << 4,0x30,1);
          pdb_141748d40(&uStack_170,param_1,&UNK_1430232ce,0xf,uVar43);
          if (uStack_160._4_1_ == '\x02') {
            uStack_2a0 = CONCAT22(uStack_16e,uStack_170);
            iStack_29c = (int)(CONCAT26(uStack_16a,CONCAT24(uStack_16c,uStack_2a0)) >> 0x20);
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_143023640,0x2b,&uStack_2a0,&UNK_143023620,&UNK_1430232e0);
          }
          uStack_188 = CONCAT44(uStack_160._4_4_,(undefined4)uStack_160);
          uStack_198 = CONCAT26(uStack_16a,CONCAT24(uStack_16c,CONCAT22(uStack_16e,uStack_170)));
          uStack_190 = CONCAT17(uStack_161,CONCAT16(uStack_162,CONCAT24(uStack_164,uStack_168)));
          if (param_9 == '\0') {
            pcVar52 = acStack_200;
            if (puStack_178 != (undefined8 *)0x0) {
              pcVar52 = acStack_218;
              pdb_140e1ea30(pcVar52,*puStack_178,param_1,0x23,&UNK_143330ab0);
            }
            cStack_c0 = param_8;
            uStack_cc = param_6;
            uStack_c8 = param_7;
            uStack_c4 = (uint)(param_10 & uStack_188._4_1_);
            puStack_e8 = &uStack_198;
            pcStack_e0 = acStack_200;
            pcStack_d8 = pcVar52;
            iStack_d0 = iVar49;
            pdb_140be7db0(auStack_1b0,&puStack_e8);
            uVar43 = pdb_14177be60(*(undefined8 *)(param_1 + 0x208),&UNK_14333162d,0x2a,auStack_1b0)
            ;
            pdb_140e291c0(&uStack_2a0,&UNK_14333162d,0x2a,uVar43,param_1);
            uStack_1d0 = CONCAT44(uStack_cc,iStack_d0);
            uStack_1c8 = CONCAT44(uStack_c4,uStack_c8);
            uStack_1c0 = CONCAT71(uStack_bf,cStack_c0);
            pcStack_1d8 = pcStack_d8;
            puStack_1e8 = puStack_e8;
            pcStack_1e0 = pcStack_e0;
            pdb_14178bf50(&uStack_170,&uStack_2a0);
            lStack_298 = 0x100000001;
            uStack_2a0 = 1;
            iStack_29c = iVar49;
            pdb_140e28810(&uStack_170,&uStack_2a0);
          }
          uVar46 = uStack_94;
          auStack_1b0[0] = param_7;
          acStack_218[0] = param_8;
          auVar4._8_4_ = 0;
          auVar4._0_8_ = CONCAT44(uStack_ac,uStack_b0);
          auVar4._12_2_ = (short)((uint)uStack_ac >> 0x10);
          auVar5._8_2_ = (short)uStack_ac;
          auVar5._0_8_ = CONCAT44(uStack_ac,uStack_b0);
          auVar5._10_4_ = auVar4._10_4_;
          auVar7._6_8_ = 0;
          auVar7._0_6_ = auVar5._8_6_;
          auVar6._6_8_ = SUB148(auVar7 << 0x40,6);
          auVar6._4_2_ = (short)(uStack_b0 >> 0x10);
          auVar6._0_4_ = uStack_b0 & 0xffff;
          puStack_1e8 = auVar6._0_8_;
          puStack_e8 = puVar50;
          if (*(longlong *)(param_2 + 0x88) == 0) goto LAB_14093b911;
          lVar41 = *(longlong *)(param_2 + 0x70);
          uVar44 = 0x7057b4358e925fdb;
          lVar45 = 0;
          goto LAB_14093b6f2;
        }
        uVar47 = (ushort)(uVar46 - 1) & (ushort)uVar46;
        uVar46 = CONCAT22((short)(uVar46 - 1 >> 0x10),uVar47);
      }
      auVar53[0] = -(auVar1[0] == -1);
      auVar53[1] = -(auVar1[1] == -1);
      auVar53[2] = -(auVar1[2] == -1);
      auVar53[3] = -(auVar1[3] == -1);
      auVar53[4] = -(auVar1[4] == -1);
      auVar53[5] = -(auVar1[5] == -1);
      auVar53[6] = -(auVar1[6] == -1);
      auVar53[7] = -(auVar1[7] == -1);
      auVar53[8] = -(auVar1[8] == -1);
      auVar53[9] = -(auVar1[9] == -1);
      auVar53[10] = -(auVar1[10] == -1);
      auVar53[0xb] = -(auVar1[0xb] == -1);
      auVar53[0xc] = -(auVar1[0xc] == -1);
      auVar53[0xd] = -(auVar1[0xd] == -1);
      auVar53[0xe] = -(auVar1[0xe] == -1);
      auVar53[0xf] = -(auVar1[0xf] == -1);
      if ((((((((((((((((SUB161(auVar53 >> 7,0) & 1) != 0 || (SUB161(auVar53 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar53 >> 0x17,0) & 1) != 0) || (SUB161(auVar53 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar53 >> 0x27,0) & 1) != 0) || (SUB161(auVar53 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar53 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar53 >> 0x3f,0) & 1) != 0) || (SUB161(auVar53 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar53 >> 0x4f,0) & 1) != 0) || (SUB161(auVar53 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar53 >> 0x5f,0) & 1) != 0) || (SUB161(auVar53 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar53 >> 0x6f,0) & 1) != 0) || (SUB161(auVar53 >> 0x77,0) & 1) != 0) ||
          auVar53[0xf] < '\0') break;
      uVar44 = uVar44 + lVar45 + 0x10;
      lVar45 = lVar45 + 0x10;
    }
  }
LAB_14093b3b3:
                    /* WARNING: Subroutine does not return */
  pdb_142dc8150(&UNK_1430232a8);
LAB_14093b6f2:
  uVar44 = uVar44 & *(ulonglong *)(param_2 + 0x78);
  auVar1 = *(undefined1 (*) [16])(lVar41 + uVar44);
  auVar57[0] = -(auVar1[0] == cVar8);
  auVar57[1] = -(auVar1[1] == cVar9);
  auVar57[2] = -(auVar1[2] == cVar10);
  auVar57[3] = -(auVar1[3] == cVar11);
  auVar57[4] = -(auVar1[4] == cVar12);
  auVar57[5] = -(auVar1[5] == cVar13);
  auVar57[6] = -(auVar1[6] == cVar14);
  auVar57[7] = -(auVar1[7] == cVar15);
  auVar57[8] = -(auVar1[8] == cVar16);
  auVar57[9] = -(auVar1[9] == cVar17);
  auVar57[10] = -(auVar1[10] == cVar18);
  auVar57[0xb] = -(auVar1[0xb] == cVar19);
  auVar57[0xc] = -(auVar1[0xc] == cVar20);
  auVar57[0xd] = -(auVar1[0xd] == cVar21);
  auVar57[0xe] = -(auVar1[0xe] == cVar22);
  auVar57[0xf] = -(auVar1[0xf] == cVar23);
  uVar47 = (ushort)(SUB161(auVar57 >> 7,0) & 1) | (ushort)(SUB161(auVar57 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar57 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar57 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar57 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar57 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar57 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar57 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar57 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar57 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar57 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar57 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar57 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar57 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar57 >> 0x77,0) & 1) << 0xe | (ushort)(auVar57[0xf] >> 7) << 0xf;
  uVar51 = (uint)uVar47;
  while (uVar47 != 0) {
    uVar2 = 0;
    for (uVar3 = uVar51; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
      uVar2 = uVar2 + 1;
    }
    uVar48 = uVar2 + uVar44 & *(ulonglong *)(param_2 + 0x78);
    pcVar52 = (char *)(lVar41 + -0x18 + uVar48 * -0x18);
    auVar58[0] = -(*pcVar52 == cVar24);
    auVar58[1] = -(pcVar52[1] == cVar25);
    auVar58[2] = -(pcVar52[2] == cVar26);
    auVar58[3] = -(pcVar52[3] == cVar27);
    auVar58[4] = -(pcVar52[4] == cVar28);
    auVar58[5] = -(pcVar52[5] == cVar29);
    auVar58[6] = -(pcVar52[6] == cVar30);
    auVar58[7] = -(pcVar52[7] == cVar31);
    auVar58[8] = -(pcVar52[8] == cVar32);
    auVar58[9] = -(pcVar52[9] == cVar33);
    auVar58[10] = -(pcVar52[10] == cVar34);
    auVar58[0xb] = -(pcVar52[0xb] == cVar35);
    auVar58[0xc] = -(pcVar52[0xc] == cVar36);
    auVar58[0xd] = -(pcVar52[0xd] == cVar37);
    auVar58[0xe] = -(pcVar52[0xe] == cVar38);
    auVar58[0xf] = -(pcVar52[0xf] == cVar39);
    if ((ushort)((ushort)(SUB161(auVar58 >> 7,0) & 1) | (ushort)(SUB161(auVar58 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar58 >> 0x17,0) & 1) << 2 |
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
                 (ushort)(SUB161(auVar58 >> 0x77,0) & 1) << 0xe | (ushort)(auVar58[0xf] >> 7) << 0xf
                ) == 0xffff) {
      uVar44 = *(ulonglong *)(lVar41 + uVar48 * -0x18 + -8);
      if ((uVar44 < *(ulonglong *)(param_2 + 0x210)) &&
         (uVar44 = *(ulonglong *)(*(longlong *)(param_2 + 0x208) + uVar44 * 8), uVar44 != 0)) {
        lVar41 = ~uVar44 * 0x40;
        if (*(longlong *)(*(longlong *)(param_2 + 0x1d8) + 0x20 + lVar41) != 0) {
          uVar51 = uStack_94 >> 0x10;
          puStack_148 = *(undefined4 **)(*(longlong *)(param_2 + 0x1d8) + lVar41 + 0x10);
          iStack_29c = 0;
          lStack_298 = 0;
          uStack_290 = 0;
          uStack_2a0 = 1;
          puStack_288 = &uStack_b8;
          uStack_170 = SUB82(&uStack_198,0);
          uStack_16e = (undefined2)((ulonglong)&uStack_198 >> 0x10);
          uStack_16c = (undefined2)((ulonglong)&uStack_198 >> 0x20);
          uStack_16a = (undefined2)((ulonglong)&uStack_198 >> 0x30);
          uStack_168 = (uint)auStack_1b0;
          uStack_164 = (undefined2)((ulonglong)auStack_1b0 >> 0x20);
          uStack_162 = (undefined1)((ulonglong)auStack_1b0 >> 0x30);
          uStack_161 = (undefined1)((ulonglong)auStack_1b0 >> 0x38);
          ppuStack_158 = &puStack_1e8;
          pcStack_150 = acStack_218;
          uStack_160 = &puStack_e8;
          pdb_141759c50(param_1,&UNK_143023290,0x16,&uStack_2a0,&uStack_170);
          auStack_1b0[0] = param_7;
          acStack_218[0] = param_8;
          puStack_1e8 = (undefined8 *)(CONCAT44(uVar51,uVar46) & 0xffffffff0000ffff);
          uStack_2a0 = 0;
          lStack_298 = param_5;
          uStack_170 = SUB82(&puStack_1e8,0);
          uStack_16e = (undefined2)((ulonglong)&puStack_1e8 >> 0x10);
          uStack_16c = (undefined2)((ulonglong)&puStack_1e8 >> 0x20);
          uStack_16a = (undefined2)((ulonglong)&puStack_1e8 >> 0x30);
          uStack_168 = (uint)auStack_1b0;
          uStack_164 = (undefined2)((ulonglong)auStack_1b0 >> 0x20);
          uStack_162 = (undefined1)((ulonglong)auStack_1b0 >> 0x30);
          uStack_161 = (undefined1)((ulonglong)auStack_1b0 >> 0x38);
          pcStack_150 = acStack_200;
          puStack_148 = &uStack_b8;
          ppuStack_158 = &puStack_e8;
          puStack_e8 = puVar50;
          uStack_160 = (undefined8 **)acStack_218;
          pdb_14174c940(param_1,&UNK_143023260,0x14,&uStack_2a0,&uStack_170);
          return;
        }
      }
      goto LAB_14093b911;
    }
    uVar47 = (ushort)(uVar51 - 1) & (ushort)uVar51;
    uVar51 = CONCAT22((short)(uVar51 - 1 >> 0x10),uVar47);
  }
  auVar54[0] = -(auVar1[0] == -1);
  auVar54[1] = -(auVar1[1] == -1);
  auVar54[2] = -(auVar1[2] == -1);
  auVar54[3] = -(auVar1[3] == -1);
  auVar54[4] = -(auVar1[4] == -1);
  auVar54[5] = -(auVar1[5] == -1);
  auVar54[6] = -(auVar1[6] == -1);
  auVar54[7] = -(auVar1[7] == -1);
  auVar54[8] = -(auVar1[8] == -1);
  auVar54[9] = -(auVar1[9] == -1);
  auVar54[10] = -(auVar1[10] == -1);
  auVar54[0xb] = -(auVar1[0xb] == -1);
  auVar54[0xc] = -(auVar1[0xc] == -1);
  auVar54[0xd] = -(auVar1[0xd] == -1);
  auVar54[0xe] = -(auVar1[0xe] == -1);
  auVar54[0xf] = -(auVar1[0xf] == -1);
  if ((((((((((((((((SUB161(auVar54 >> 7,0) & 1) != 0 || (SUB161(auVar54 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar54 >> 0x17,0) & 1) != 0) || (SUB161(auVar54 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar54 >> 0x27,0) & 1) != 0) || (SUB161(auVar54 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar54 >> 0x37,0) & 1) != 0) || (SUB161(auVar54 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar54 >> 0x47,0) & 1) != 0) || (SUB161(auVar54 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar54 >> 0x57,0) & 1) != 0) || (SUB161(auVar54 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar54 >> 0x67,0) & 1) != 0) || (SUB161(auVar54 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar54 >> 0x77,0) & 1) != 0) || auVar54[0xf] < '\0') {
LAB_14093b911:
                    /* WARNING: Subroutine does not return */
    pdb_142dc8150(&UNK_143023278);
  }
  uVar44 = uVar44 + lVar45 + 0x10;
  lVar45 = lVar45 + 0x10;
  goto LAB_14093b6f2;
}

