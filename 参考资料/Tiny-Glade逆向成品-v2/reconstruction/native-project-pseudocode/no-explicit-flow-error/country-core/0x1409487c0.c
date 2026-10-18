// VA 0x1409487c0, PDB extent 1607 bytes
// country_core::systems::ivy::ivy_send_to_gpu_segments::ivy_send_to_gpu_segments
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_send_to_gpu_segments.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::ivy::ivy_send_to_gpu_segments::ivy_send_to_gpu_segments
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_send_to_gpu_segments.rs
   Extent: 1607 */

void pdb_1409487c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  char cVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  byte *unaff_RSI;
  undefined *unaff_R12;
  undefined8 *puVar15;
  longlong unaff_R15;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 (*pauStack_130) [16];
  undefined1 (*pauStack_128) [16];
  undefined8 uStack_118;
  ulonglong uStack_110;
  undefined8 uStack_108;
  longlong lStack_100;
  longlong lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 (*pauStack_b8) [16];
  undefined1 (*pauStack_b0) [16];
  undefined1 *puStack_a8;
  ushort uStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  undefined8 *puStack_78;
  longlong lStack_70;
  byte *pbStack_68;
  undefined8 *puStack_60;
  longlong *plStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  cVar7 = pdb_140e94b40();
  plStack_50 = (longlong *)CONCAT71(plStack_50._1_7_,cVar7);
  if (cVar7 == '\0') {
    uStack_108 = 0;
    puVar15 = param_3;
    goto LAB_1409489a6;
  }
  unaff_R12 = &UNK_143024f0f;
  unaff_R15 = 0x4e;
  uVar14 = 0x4e;
  lVar8 = pdb_14094f280(&UNK_143024f0f);
  if (lVar8 == 1) {
    if (0x4e < uVar14) goto LAB_140948bab;
    unaff_R12 = &UNK_143024f0f;
    uVar9 = pdb_14094f280(&UNK_143024f0f);
    if ((uVar9 & 1) != 0) {
      if (0x4e < uVar14 + 2) {
        pdb_142dc8070(&UNK_143024f0f,0x4e,uVar14 + 2,0x4e,&UNK_143025028);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      unaff_R15 = 0x4c - uVar14;
      unaff_R12 = &UNK_143024f11 + uVar14;
    }
  }
  puVar10 = &UNK_143024397;
  puVar15 = (undefined8 *)&UNK_143024358;
  do {
    pbVar1 = puVar10 + -1;
    uVar13 = (uint)(char)*pbVar1;
    puStack_78 = param_3;
    if ((int)uVar13 < 0) {
      bVar4 = puVar10[-2];
      if ((char)bVar4 < -0x40) {
        bVar5 = puVar10[-3];
        if ((char)bVar5 < -0x40) {
          pbVar2 = puVar10 + -4;
          puVar10 = puVar10 + -4;
          uVar13 = bVar5 & 0x3f | (*pbVar2 & 7) << 6;
        }
        else {
          puVar10 = puVar10 + -3;
          uVar13 = bVar5 & 0xf;
        }
        uVar13 = bVar4 & 0x3f | uVar13 << 6;
      }
      else {
        puVar10 = puVar10 + -2;
        uVar13 = bVar4 & 0x1f;
      }
      uVar13 = (uint)(*pbVar1 & 0x3f) | uVar13 << 6;
      if (uVar13 != 0x5c) goto LAB_1409488f9;
LAB_140948915:
      if ((undefined *)0x3f < puVar10 + -0x143024357) goto LAB_140948b88;
      unaff_RSI = (byte *)(0x3e - (longlong)(puVar10 + -0x143024358));
      puVar15 = (undefined8 *)(puVar10 + 1);
      goto LAB_140948938;
    }
    puVar10 = puVar10 + -1;
    if (uVar13 == 0x5c) goto LAB_140948915;
LAB_1409488f9:
    if (uVar13 == 0x2f) goto LAB_140948915;
  } while (puVar10 != &UNK_143024358);
  unaff_RSI = (byte *)0x3f;
LAB_140948938:
  plVar11 = (longlong *)pdb_140e97000();
  if ((char)plVar11[0xd] != '\x01') goto LAB_140948b58;
  do {
    if (*plVar11 == 0) {
      *plVar11 = -1;
      plStack_58 = plVar11;
      unaff_R15 = pdb_140e94f10(plVar11 + 1,unaff_R12,unaff_R15,puVar15,unaff_RSI,1,0);
      *plStack_58 = *plStack_58 + 1;
      uStack_108 = 1;
      puVar15 = puStack_78;
      lStack_100 = unaff_R15;
LAB_1409489a6:
      puVar12 = (undefined8 *)*param_1;
      pauStack_b8 = (undefined1 (*) [16])*puVar12;
      puStack_a8 = *pauStack_b8 + puVar12[1] + 1;
      auVar3 = *pauStack_b8;
      uStack_a0 = ~((ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1
                    | (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe |
                   (ushort)(byte)(auVar3[0xf] >> 7) << 0xf);
      uStack_98 = puVar12[3];
      lStack_f8 = 0;
      uStack_d8 = 0;
      pauStack_b0 = pauStack_b8 + 1;
      lStack_90 = param_4;
      pdb_1415f2d70(&lStack_70,&lStack_f8);
      puVar12 = (undefined8 *)pdb_140bf45b0(*param_2,&UNK_14331ca00);
      if ((puVar12 != (undefined8 *)0x0) &&
         (param_2 = (undefined8 *)(**(code **)(puVar12[1] + 0x18))(*puVar12), puVar12 = puStack_60,
         pbVar1 = pbStack_68, param_2 != (undefined8 *)0x0)) {
        if (puStack_60 != (undefined8 *)0x0) {
          param_4 = *(longlong *)*puVar15;
          lVar8 = pdb_140e17350(param_2);
          uVar14 = (longlong)puVar12 * 0x30;
          if (*(uint *)(lVar8 + 0x10) < uVar14) goto LAB_140948bcb;
          param_4 = param_4 + 0x10;
          uStack_118 = 0;
          uStack_110 = uVar14;
          pdb_140e55470(&lStack_f8,param_4,param_2,pbVar1,uVar14,&uStack_118,1,0);
          unaff_RSI = pbVar1;
          if (lStack_f8 != 0xb) {
            pauStack_128 = pauStack_b0;
            uStack_158 = CONCAT44(uStack_dc,uStack_e0);
            uStack_148 = CONCAT44(uStack_cc,uStack_d0);
            uStack_140 = CONCAT44(uStack_c4,uStack_c8);
            uStack_138 = CONCAT44(uStack_bc,uStack_c0);
            pauStack_130 = pauStack_b8;
            uStack_150 = uStack_d8;
            uStack_168 = uStack_f0;
            uStack_160 = uStack_e8;
            goto LAB_140948bfc;
          }
        }
        param_2[1] = puVar12;
        param_1 = puVar12;
      }
      if (lStack_70 != 0) {
        pub_1406abac0(pbStack_68,lStack_70 * 0x30,4);
      }
      if ((char)plStack_50 == '\0') {
        return;
      }
      plVar11 = (longlong *)pdb_140e97000();
      if (((char)plVar11[0xd] != '\x01') &&
         (plVar11 = (longlong *)pdb_142d8ec20(plVar11,0), plVar11 == (longlong *)0x0)) break;
      if (*plVar11 == 0) {
        *plVar11 = -1;
        plStack_50 = plVar11;
        pdb_140e95370(plVar11 + 1,unaff_R15);
        *plStack_50 = *plStack_50 + 1;
        return;
      }
    }
    plVar11 = (longlong *)pdb_142dc8090(&UNK_143326a50);
LAB_140948b58:
    plVar11 = (longlong *)pdb_142d8ec20(plVar11,0);
  } while (plVar11 != (longlong *)0x0);
  pdb_142dc7890(&UNK_143326860);
LAB_140948b88:
  pdb_142dc8070(&UNK_143024358,0x3f);
LAB_140948bab:
  pdb_142dc8070(&UNK_143024f0f,0x4e,0);
LAB_140948bcb:
  lStack_f8 = 0xb;
LAB_140948bfc:
  uStack_f0 = uStack_168;
  uStack_e8 = uStack_160;
  uStack_e0 = (undefined4)uStack_158;
  uStack_dc = uStack_158._4_4_;
  uStack_d8 = uStack_150;
  uStack_d0 = (undefined4)uStack_148;
  uStack_cc = uStack_148._4_4_;
  uStack_c8 = (undefined4)uStack_140;
  uStack_c4 = uStack_140._4_4_;
  uStack_c0 = (undefined4)uStack_138;
  uStack_bc = uStack_138._4_4_;
  pauStack_b8 = pauStack_130;
  pauStack_b0 = pauStack_128;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143024e08,0x2b,&lStack_f8,&UNK_143024e58,&UNK_143024398);
}

