// VA 0x140b93360, PDB extent 2874 bytes
// country_core::systems::ivy::ivy_send_to_gpu_leaf::ivy_send_to_gpu_leaf
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_send_to_gpu_leaf.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::systems::ivy::ivy_send_to_gpu_leaf::ivy_send_to_gpu_leaf
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/ivy/ivy_send_to_gpu_leaf.rs
   Extent: 2874 */

void pdb_140b93360(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined *puVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  byte *unaff_R12;
  undefined *unaff_R13;
  byte *pbStack_1a8;
  undefined4 *puStack_1a0;
  undefined8 uStack_198;
  undefined1 (*pauStack_190) [16];
  undefined1 (*pauStack_188) [16];
  undefined1 *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  byte *pbStack_158;
  undefined4 *puStack_150;
  undefined8 uStack_148;
  undefined1 (*pauStack_140) [16];
  undefined1 (*pauStack_138) [16];
  undefined1 *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  longlong lStack_f0;
  longlong lStack_e0;
  byte *pbStack_d8;
  longlong lStack_d0;
  longlong lStack_c8;
  byte *pbStack_c0;
  undefined8 *puStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  undefined4 *puStack_a0;
  undefined8 uStack_98;
  undefined1 (*pauStack_90) [16];
  undefined1 (*pauStack_88) [16];
  undefined1 *puStack_80;
  ushort uStack_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_5c;
  longlong *plStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  cVar6 = pdb_140e94b40();
  plStack_58 = (longlong *)CONCAT71(plStack_58._1_7_,cVar6);
  if (cVar6 == '\0') {
    lVar7 = *param_3;
    cVar6 = *(char *)(lVar7 + 0x21);
    goto joined_r0x000140b934bb;
  }
  unaff_R12 = &UNK_14305ecac;
  puVar17 = (undefined8 *)0x46;
  uVar16 = 0x46;
  lVar7 = pdb_140b95f50(&UNK_14305ecac);
  if (lVar7 == 1) {
    if (0x46 < uVar16) goto LAB_140b93a34;
    unaff_R12 = &UNK_14305ecac;
    uVar8 = pdb_140b95f50(&UNK_14305ecac);
    if ((uVar8 & 1) != 0) {
      if (0x46 < uVar16 + 2) {
        pdb_142dc8070(&UNK_14305ecac,0x46,uVar16 + 2,0x46,&UNK_14305ee70);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      puVar17 = (undefined8 *)(0x44 - uVar16);
      unaff_R12 = &UNK_14305ecae + uVar16;
    }
  }
  puVar9 = &UNK_14305e767;
  unaff_R13 = &UNK_14305e72c;
  do {
    pbVar10 = puVar9 + -1;
    uVar15 = (uint)(char)*pbVar10;
    if ((int)uVar15 < 0) {
      bVar3 = puVar9[-2];
      if ((char)bVar3 < -0x40) {
        bVar4 = puVar9[-3];
        if ((char)bVar4 < -0x40) {
          pbVar1 = puVar9 + -4;
          puVar9 = puVar9 + -4;
          uVar15 = bVar4 & 0x3f | (*pbVar1 & 7) << 6;
        }
        else {
          puVar9 = puVar9 + -3;
          uVar15 = bVar4 & 0xf;
        }
        uVar15 = bVar3 & 0x3f | uVar15 << 6;
      }
      else {
        puVar9 = puVar9 + -2;
        uVar15 = bVar3 & 0x1f;
      }
      uVar15 = (uint)(*pbVar10 & 0x3f) | uVar15 << 6;
      if (uVar15 != 0x5c) goto LAB_140b93499;
LAB_140b934ce:
      if ((undefined *)0x3b < puVar9 + -0x14305e72b) goto LAB_140b93a11;
      lStack_f0 = 0x3a - (longlong)(puVar9 + -0x14305e72c);
      unaff_R13 = puVar9 + 1;
      goto LAB_140b934f1;
    }
    puVar9 = puVar9 + -1;
    if (uVar15 == 0x5c) goto LAB_140b934ce;
LAB_140b93499:
    if (uVar15 == 0x2f) goto LAB_140b934ce;
  } while (puVar9 != &UNK_14305e72c);
  lStack_f0 = 0x3b;
LAB_140b934f1:
  pbVar10 = (byte *)pdb_140e97000();
  if (pbVar10[0x68] != 1) goto LAB_140b939e1;
  do {
    if (*(longlong *)pbVar10 == 0) {
      pbVar10[0] = 0xff;
      pbVar10[1] = 0xff;
      pbVar10[2] = 0xff;
      pbVar10[3] = 0xff;
      pbVar10[4] = 0xff;
      pbVar10[5] = 0xff;
      pbVar10[6] = 0xff;
      pbVar10[7] = 0xff;
      pbStack_50 = pbVar10;
      lStack_f0 = pdb_140e94f10(pbVar10 + 8,unaff_R12,puVar17,unaff_R13,lStack_f0,1,0);
      *(longlong *)pbStack_50 = *(longlong *)pbStack_50 + 1;
      lVar7 = *param_3;
      cVar6 = *(char *)(lVar7 + 0x21);
joined_r0x000140b934bb:
      uStack_5c = _DAT_142e36f28;
      if (cVar6 != '\0') {
        uStack_5c = _DAT_143011010;
      }
      puVar17 = (undefined8 *)*param_1;
      pauStack_90 = (undefined1 (*) [16])*puVar17;
      puStack_80 = *pauStack_90 + puVar17[1] + 1;
      auVar2 = *pauStack_90;
      uStack_78 = ~((ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1
                    | (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                   (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
      uStack_70 = puVar17[3];
      pbStack_b0 = (byte *)0x0;
      puStack_a0 = (undefined4 *)0x0;
      pauStack_88 = pauStack_90 + 1;
      pdb_1415ee280(&lStack_e0,&pbStack_b0);
      pbStack_a8 = pbStack_d8 + lStack_d0 * 8;
      pbStack_50 = pbStack_d8;
      pbStack_b0 = pbStack_d8;
      puStack_a0 = &uStack_5c;
      uStack_98 = param_5;
      pdb_1416067e0(&lStack_c8,&pbStack_b0);
      if (lStack_e0 != 0) {
        pub_1406abac0(pbStack_50,lStack_e0 << 3,8);
      }
      param_2 = (undefined8 *)*param_2;
      puVar11 = (undefined8 *)pdb_140bf45b0(param_2,&UNK_14331c8c0);
      if ((puVar11 != (undefined8 *)0x0) &&
         (param_3 = (longlong *)(**(code **)(puVar11[1] + 0x18))(*puVar11), puVar11 = puStack_b8,
         pbVar10 = pbStack_c0, param_3 != (longlong *)0x0)) {
        if (puStack_b8 != (undefined8 *)0x0) {
          lVar13 = *(longlong *)*param_4;
          lVar12 = pdb_140e17350(param_3);
          pbVar1 = (byte *)((longlong)puVar11 * 0x30);
          if ((byte *)(ulonglong)*(uint *)(lVar12 + 0x10) < pbVar1) goto LAB_140b93a54;
          unaff_R13 = (undefined *)(lVar13 + 0x10);
          lStack_e0 = 0;
          pbStack_d8 = pbVar1;
          pdb_140e55470(&pbStack_b0,unaff_R13,param_3,pbVar10,pbVar1,&lStack_e0,1,0);
          unaff_R12 = pbVar10;
          if (pbStack_b0 != (byte *)0xb) {
            uStack_118 = uStack_68;
            uStack_128 = CONCAT44(uStack_74,CONCAT22(uStack_76,uStack_78));
            uStack_120 = uStack_70;
            pauStack_138 = pauStack_88;
            puStack_130 = puStack_80;
            uStack_148 = uStack_98;
            pauStack_140 = pauStack_90;
            pbStack_158 = pbStack_a8;
            puStack_150 = puStack_a0;
            goto LAB_140b93a94;
          }
        }
        param_3[1] = (longlong)puVar11;
        param_1 = puVar11;
      }
      if (lStack_c8 != 0) {
        pub_1406abac0(pbStack_c0,lStack_c8 * 0x30,4);
      }
      if (*(char *)(lVar7 + 0x21) == '\0') {
        lStack_c8 = 0;
        pbStack_c0 = (byte *)0x4;
        puStack_b8 = (undefined8 *)0x0;
      }
      else {
        pauStack_90 = (undefined1 (*) [16])*puVar17;
        puStack_80 = *pauStack_90 + puVar17[1] + 1;
        auVar2 = *pauStack_90;
        uStack_78 = ~((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                      (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                      (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                      (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                      (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                      (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                      (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                      (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                      (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                      (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                      (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                      (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                      (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                      (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                      (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                     (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
        uStack_70 = puVar17[3];
        pbStack_b0 = (byte *)0x0;
        puStack_a0 = (undefined4 *)0x0;
        pauStack_88 = pauStack_90 + 1;
        pdb_1415ee280(&lStack_e0,&pbStack_b0);
        pbStack_a8 = pbStack_d8 + lStack_d0 * 8;
        pbStack_50 = pbStack_d8;
        pbStack_b0 = pbStack_d8;
        puStack_a0 = &uStack_5c;
        uStack_98 = param_5;
        pauStack_90 = (undefined1 (*) [16])0x3e8;
        pdb_1415fa8c0(&lStack_c8,&pbStack_b0);
        if (lStack_e0 != 0) {
          pub_1406abac0(pbStack_50,lStack_e0 << 3,8);
        }
      }
      puVar11 = (undefined8 *)pdb_140bf45b0(param_2,&UNK_14331c968);
      if ((puVar11 != (undefined8 *)0x0) &&
         (param_2 = (undefined8 *)(**(code **)(puVar11[1] + 0x18))(*puVar11), puVar11 = puStack_b8,
         pbVar10 = pbStack_c0, param_2 != (undefined8 *)0x0)) {
        if (puStack_b8 != (undefined8 *)0x0) {
          lVar7 = *(longlong *)*param_4;
          lVar13 = pdb_140e17350(param_2);
          pbVar1 = (byte *)((longlong)puVar11 * 0x30);
          if ((byte *)(ulonglong)*(uint *)(lVar13 + 0x10) < pbVar1) {
            pbStack_b0 = (byte *)0xb;
LAB_140b93b45:
            pbStack_a8 = pbStack_1a8;
            puStack_a0 = puStack_1a0;
            uStack_98 = uStack_198;
            pauStack_90 = pauStack_190;
            pauStack_88 = pauStack_188;
            puStack_80 = puStack_180;
            uStack_78 = (ushort)uStack_178;
            uStack_76 = (undefined2)((ulonglong)uStack_178 >> 0x10);
            uStack_74 = uStack_178._4_4_;
            uStack_70 = uStack_170;
            uStack_68 = uStack_168;
                    /* WARNING: Subroutine does not return */
            pdb_142dc8170(&UNK_14305eac8,0x2b,&pbStack_b0,&UNK_14305eb18,&UNK_14305e780);
          }
          param_3 = (longlong *)(lVar7 + 0x10);
          lStack_e0 = 0;
          pbStack_d8 = pbVar1;
          pdb_140e55470(&pbStack_b0,param_3,param_2,pbVar10,pbVar1,&lStack_e0,1,0);
          if (pbStack_b0 != (byte *)0xb) {
            uStack_168 = uStack_68;
            uStack_178 = CONCAT44(uStack_74,CONCAT22(uStack_76,uStack_78));
            uStack_170 = uStack_70;
            pauStack_188 = pauStack_88;
            puStack_180 = puStack_80;
            uStack_198 = uStack_98;
            pauStack_190 = pauStack_90;
            pbStack_1a8 = pbStack_a8;
            puStack_1a0 = puStack_a0;
            goto LAB_140b93b45;
          }
        }
        param_2[1] = puVar11;
        puVar17 = puVar11;
      }
      if (lStack_c8 != 0) {
        pub_1406abac0(pbStack_c0,lStack_c8 * 0x30,4);
      }
      if ((char)plStack_58 == '\0') {
        return;
      }
      plVar14 = (longlong *)pdb_140e97000();
      if (((char)plVar14[0xd] != '\x01') &&
         (plVar14 = (longlong *)pdb_142d8ec20(plVar14,0), plVar14 == (longlong *)0x0)) break;
      if (*plVar14 == 0) {
        *plVar14 = -1;
        plStack_58 = plVar14;
        pdb_140e95370(plVar14 + 1,lStack_f0);
        *plStack_58 = *plStack_58 + 1;
        return;
      }
    }
    pbVar10 = (byte *)pdb_142dc8090(&UNK_143326a50);
LAB_140b939e1:
    pbVar10 = (byte *)pdb_142d8ec20(pbVar10,0);
  } while (pbVar10 != (byte *)0x0);
  pdb_142dc7890(&UNK_143326860);
LAB_140b93a11:
  pdb_142dc8070(&UNK_14305e72c,0x3b);
LAB_140b93a34:
  pdb_142dc8070(&UNK_14305ecac,0x46,0);
LAB_140b93a54:
  pbStack_b0 = (byte *)0xb;
LAB_140b93a94:
  pbStack_a8 = pbStack_158;
  puStack_a0 = puStack_150;
  uStack_98 = uStack_148;
  pauStack_90 = pauStack_140;
  pauStack_88 = pauStack_138;
  puStack_80 = puStack_130;
  uStack_78 = (ushort)uStack_128;
  uStack_76 = (undefined2)((ulonglong)uStack_128 >> 0x10);
  uStack_74 = uStack_128._4_4_;
  uStack_70 = uStack_120;
  uStack_68 = uStack_118;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_14305eac8,0x2b,&pbStack_b0,&UNK_14305eb18,&UNK_14305e768);
}

