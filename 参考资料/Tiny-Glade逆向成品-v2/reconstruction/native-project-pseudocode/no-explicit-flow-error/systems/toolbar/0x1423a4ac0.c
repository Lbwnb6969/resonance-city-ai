// VA 0x1423a4ac0, PDB extent 3479 bytes
// toolbar::photomode::lut_gallery::ui
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/photomode/lut_gallery.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::photomode::lut_gallery::ui
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/photomode/lut_gallery.rs
   Extent: 3479 */

void pdb_1423a4ac0(byte *param_1,byte *param_2,byte *param_3,byte *param_4,undefined8 *param_5,
                  byte *param_6,undefined8 *param_7,byte *param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  char *pcVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  byte *unaff_RBX;
  char cVar15;
  byte *pbVar16;
  undefined8 *unaff_RDI;
  undefined *puVar17;
  undefined *puVar18;
  byte *pbVar19;
  byte *pbVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  byte *pbStack_180;
  ulonglong uStack_178;
  undefined8 uStack_170;
  byte *pbStack_168;
  byte *pbStack_160;
  byte *pbStack_158;
  undefined8 uStack_138;
  undefined8 uStack_130;
  byte *pbStack_128;
  longlong lStack_120;
  longlong lStack_118;
  byte bStack_110;
  longlong lStack_90;
  undefined8 *puStack_88;
  byte *pbStack_80;
  longlong *plStack_78;
  byte *pbStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  byte *pbStack_58;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pbVar13 = param_2;
  uVar7 = pdb_140e94b40();
  pbVar16 = (byte *)(ulonglong)uVar7;
  if ((char)uVar7 == '\0') {
    lStack_90 = 0;
    pbVar19 = param_4;
    if (*_DAT_143ca4500 == '\0') goto LAB_1423a4ce0;
    goto LAB_1423a4c1e;
  }
  pbVar19 = (byte *)0x23;
  pbStack_80 = param_1;
  pbStack_70 = param_3;
  lVar8 = pdb_1423a46a0(0x23);
  param_1 = &UNK_1434e2518;
  if (lVar8 == 1) {
    if ((byte *)0x23 < pbVar13) {
LAB_1423a5618:
      pdb_142dc8070(&UNK_1434e2518,0x23,0);
LAB_1423a5638:
      pdb_142dc8070(&UNK_1434e2518,0x23);
LAB_1423a565c:
                    /* WARNING: Subroutine does not return */
      pdb_142dc83d0(&UNK_14329c470,0x97,&UNK_14329c5e0);
    }
    uVar9 = pdb_1423a46a0(pbVar13);
    if ((uVar9 & 1) != 0) {
      if ((byte *)0x23 < pbVar13 + 2) goto LAB_1423a5638;
      pbVar19 = (byte *)(0x21 - (longlong)pbVar13);
      param_1 = pbVar13 + 0x1434e251a;
    }
  }
  puVar17 = &UNK_1434e2623;
  unaff_RDI = (undefined8 *)&UNK_1434e25f0;
  do {
    bVar1 = puVar17[-1];
    uVar7 = (uint)(char)bVar1;
    if ((char)bVar1 < '\0') {
      bVar2 = puVar17[-2];
      if ((char)bVar2 < -0x40) {
        bVar3 = puVar17[-3];
        if ((char)bVar3 < -0x40) {
          pbVar13 = puVar17 + -4;
          puVar17 = puVar17 + -4;
          uVar7 = bVar3 & 0x3f | (*pbVar13 & 7) << 6;
        }
        else {
          puVar17 = puVar17 + -3;
          uVar7 = bVar3 & 0xf;
        }
        uVar7 = bVar2 & 0x3f | uVar7 << 6;
      }
      else {
        puVar17 = puVar17 + -2;
        uVar7 = bVar2 & 0x1f;
      }
      uVar7 = (uint)(bVar1 & 0x3f) | uVar7 << 6;
      if (uVar7 != 0x5c) goto LAB_1423a4bf4;
LAB_1423a4c2c:
      puVar18 = puVar17 + -0x1434e25ef;
      if ((undefined *)0x33 < puVar18) {
        pdb_142dc8070(&UNK_1434e25f0,0x33,puVar18,0x33,&UNK_1434e25a0);
        goto LAB_1423a5618;
      }
      unaff_RBX = (byte *)(0x33 - (longlong)puVar18);
      unaff_RDI = (undefined8 *)(puVar17 + 1);
      goto LAB_1423a4c4e;
    }
    puVar17 = puVar17 + -1;
    if (uVar7 == 0x5c) goto LAB_1423a4c2c;
LAB_1423a4bf4:
    if (uVar7 == 0x2f) goto LAB_1423a4c2c;
  } while (puVar17 != &UNK_1434e25f0);
  unaff_RBX = (byte *)0x33;
LAB_1423a4c4e:
  plVar10 = (longlong *)pdb_140e97000();
  if ((char)plVar10[0xd] != '\x01') goto LAB_1423a547c;
  do {
    if (*plVar10 == 0) {
      *plVar10 = -1;
      plStack_78 = plVar10;
      unaff_RDI = (undefined8 *)pdb_140e94f10(plVar10 + 1,param_1,pbVar19,unaff_RDI,unaff_RBX,1,0);
      *plStack_78 = *plStack_78 + 1;
      lStack_90 = 1;
      pbVar19 = param_4;
      param_1 = pbStack_80;
      param_3 = pbStack_70;
      puStack_88 = unaff_RDI;
      if (*_DAT_143ca4500 == '\0') {
LAB_1423a4ce0:
        param_4 = param_3;
        if ((**(int **)param_2 == 0xb) && ((char)(*(int **)param_2)[2] == '\x01')) {
          pbStack_80 = (byte *)param_7[2];
          pbStack_70 = (byte *)CONCAT44(pbStack_70._4_4_,*(undefined4 *)((longlong)param_7 + 0x1c));
          *(undefined4 *)pbStack_80 = *(undefined4 *)((longlong)param_7 + 0x1c);
          pbVar16 = (byte *)*param_7;
          uStack_138 = &UNK_1434e2623;
          uStack_130 = (byte *)0xb;
          uVar11 = pdb_140bbbcb0(&uStack_138);
          uVar11 = uVar11 ^ 0xb1695320004fb443;
          uVar9 = uVar11;
          lVar8 = pdb_14072c2d0(pbVar16);
          *(undefined1 *)(lVar8 + 0x5e) = 0;
          *(undefined1 *)(lVar8 + 0xcb) = 1;
          if ((uVar9 & 1) == 0) {
            lVar8 = *(longlong *)(pbVar16 + 0x10);
            if (lVar8 == *(longlong *)pbVar16) {
              pdb_142d7f080(pbVar16);
            }
            lVar4 = *(longlong *)(pbVar16 + 8);
            *(undefined4 *)(lVar4 + lVar8 * 0x38) = 0;
            *(ulonglong *)(lVar4 + 0x30 + lVar8 * 0x38) = uVar11;
            *(longlong *)(pbVar16 + 0x10) = lVar8 + 1;
          }
          uStack_170 = 0;
          plStack_78 = *(longlong **)param_1;
          lVar4 = plStack_78[2];
          plVar10 = (longlong *)**(undefined8 **)param_4;
          LOCK();
          lVar8 = *plVar10;
          *plVar10 = *plVar10 + 1;
          UNLOCK();
          pbStack_180 = pbVar16;
          uStack_178 = uVar11;
          if (*plVar10 == 0 || SCARRY8(lVar8,1) != *plVar10 < 0) goto LAB_1423a56e1;
          pdb_14116b120(&uStack_138,&pbStack_180,lVar4 + 1,plVar10,&UNK_1434e262e,4);
          pdb_1422ad590(&uStack_68,&uStack_138,0);
          puVar14 = &uStack_60;
          lVar8 = pdb_1411a3e40(uStack_68 + 0x1b0);
          if (lVar8 == 0) goto LAB_1423a54b1;
          if (*(longlong *)(lVar8 + 0x98) == 0) goto LAB_1423a565c;
          lVar8 = (**(code **)(*(longlong *)(lVar8 + 0xa0) + 0x28))();
          (*(code *)puVar14[3])(&uStack_138,lVar8);
          auVar22[0] = -((char)uStack_138 == DAT_14329bc10);
          auVar22[1] = -(uStack_138._1_1_ == UNK_14329bc11);
          auVar22[2] = -(uStack_138._2_1_ == UNK_14329bc12);
          auVar22[3] = -(uStack_138._3_1_ == UNK_14329bc13);
          auVar22[4] = -(uStack_138._4_1_ == UNK_14329bc14);
          auVar22[5] = -(uStack_138._5_1_ == UNK_14329bc15);
          auVar22[6] = -(uStack_138._6_1_ == UNK_14329bc16);
          auVar22[7] = -(uStack_138._7_1_ == UNK_14329bc17);
          auVar22[8] = -((char)uStack_130 == UNK_14329bc18);
          auVar22[9] = -(uStack_130._1_1_ == UNK_14329bc19);
          auVar22[10] = -(uStack_130._2_1_ == UNK_14329bc1a);
          auVar22[0xb] = -(uStack_130._3_1_ == UNK_14329bc1b);
          auVar22[0xc] = -(uStack_130._4_1_ == UNK_14329bc1c);
          auVar22[0xd] = -(uStack_130._5_1_ == UNK_14329bc1d);
          auVar22[0xe] = -(uStack_130._6_1_ == UNK_14329bc1e);
          auVar22[0xf] = -(uStack_130._7_1_ == UNK_14329bc1f);
          if ((ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar22[0xf] >> 7) << 0xf) != 0xffff) {
            pdb_142dc8110(&UNK_14329c4d8,8,&UNK_14329c528);
            goto LAB_1423a56e1;
          }
          *(undefined4 *)(lVar8 + 0x50) = 0x3ed0e560;
          pbStack_128 = pbStack_58;
          uStack_138 = uStack_68;
          uStack_130 = uStack_60;
          puVar14 = &uStack_130;
          lVar8 = pdb_1411a3e40(uStack_68 + 0x1b0);
          if (lVar8 == 0) {
            pdb_142dc8110(&UNK_14329c448,0xb,&UNK_14329c510);
            goto LAB_1423a56e1;
          }
          if (*(longlong *)(lVar8 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14329c470,0x97,&UNK_14329c5e0);
          }
          lVar8 = (**(code **)(*(longlong *)(lVar8 + 0xa0) + 0x28))();
          (*(code *)puVar14[3])(&uStack_68,lVar8);
          auVar23[0] = -((char)uStack_68 == DAT_14329bc10);
          auVar23[1] = -(uStack_68._1_1_ == UNK_14329bc11);
          auVar23[2] = -(uStack_68._2_1_ == UNK_14329bc12);
          auVar23[3] = -(uStack_68._3_1_ == UNK_14329bc13);
          auVar23[4] = -(uStack_68._4_1_ == UNK_14329bc14);
          auVar23[5] = -(uStack_68._5_1_ == UNK_14329bc15);
          auVar23[6] = -(uStack_68._6_1_ == UNK_14329bc16);
          auVar23[7] = -(uStack_68._7_1_ == UNK_14329bc17);
          auVar23[8] = -((char)uStack_60 == UNK_14329bc18);
          auVar23[9] = -(uStack_60._1_1_ == UNK_14329bc19);
          auVar23[10] = -(uStack_60._2_1_ == UNK_14329bc1a);
          auVar23[0xb] = -(uStack_60._3_1_ == UNK_14329bc1b);
          auVar23[0xc] = -(uStack_60._4_1_ == UNK_14329bc1c);
          auVar23[0xd] = -(uStack_60._5_1_ == UNK_14329bc1d);
          auVar23[0xe] = -(uStack_60._6_1_ == UNK_14329bc1e);
          auVar23[0xf] = -(uStack_60._7_1_ == UNK_14329bc1f);
          if ((ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar23[0xf] >> 7) << 0xf) != 0xffff) {
            pdb_142dc8110(&UNK_14329c4d8,8,&UNK_14329c528);
            goto LAB_1423a56e1;
          }
          *(undefined4 *)(lVar8 + 0x54) = 0x3c9374bc;
          pbStack_58 = pbStack_128;
          uStack_68 = uStack_138;
          uStack_60 = uStack_130;
          puVar14 = &uStack_60;
          lVar8 = pdb_1411a3e40(uStack_138 + 0x1b0);
          if (lVar8 == 0) {
            pdb_142dc8110(&UNK_14329c448,0xb,&UNK_14329c510);
            goto LAB_1423a56e1;
          }
          if (*(longlong *)(lVar8 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14329c470,0x97,&UNK_14329c5e0);
          }
          lVar8 = (**(code **)(*(longlong *)(lVar8 + 0xa0) + 0x28))();
          (*(code *)puVar14[3])(&uStack_138,lVar8);
          auVar24[0] = -((char)uStack_138 == DAT_14329bc10);
          auVar24[1] = -(uStack_138._1_1_ == UNK_14329bc11);
          auVar24[2] = -(uStack_138._2_1_ == UNK_14329bc12);
          auVar24[3] = -(uStack_138._3_1_ == UNK_14329bc13);
          auVar24[4] = -(uStack_138._4_1_ == UNK_14329bc14);
          auVar24[5] = -(uStack_138._5_1_ == UNK_14329bc15);
          auVar24[6] = -(uStack_138._6_1_ == UNK_14329bc16);
          auVar24[7] = -(uStack_138._7_1_ == UNK_14329bc17);
          auVar24[8] = -((char)uStack_130 == UNK_14329bc18);
          auVar24[9] = -(uStack_130._1_1_ == UNK_14329bc19);
          auVar24[10] = -(uStack_130._2_1_ == UNK_14329bc1a);
          auVar24[0xb] = -(uStack_130._3_1_ == UNK_14329bc1b);
          auVar24[0xc] = -(uStack_130._4_1_ == UNK_14329bc1c);
          auVar24[0xd] = -(uStack_130._5_1_ == UNK_14329bc1d);
          auVar24[0xe] = -(uStack_130._6_1_ == UNK_14329bc1e);
          auVar24[0xf] = -(uStack_130._7_1_ == UNK_14329bc1f);
          if ((ushort)((ushort)(SUB161(auVar24 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar24 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar24 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar24 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar24 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar24 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar24 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar24 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar24 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar24 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar24 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar24 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar24[0xf] >> 7) << 0xf) != 0xffff) {
            pdb_142dc8110(&UNK_14329c4d8,8,&UNK_14329c528);
            goto LAB_1423a56e1;
          }
          *(undefined4 *)(lVar8 + 0x70) = 0x40000000;
          pbStack_128 = pbStack_58;
          uStack_138 = uStack_68;
          uStack_130 = uStack_60;
          puVar14 = &uStack_130;
          lVar8 = pdb_1411a3e40(uStack_68 + 0x1b0);
          if (lVar8 == 0) {
            pdb_142dc8110(&UNK_14329c448,0xb,&UNK_14329c510);
            goto LAB_1423a56e1;
          }
          if (*(longlong *)(lVar8 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14329c470,0x97,&UNK_14329c5e0);
          }
          lVar8 = (**(code **)(*(longlong *)(lVar8 + 0xa0) + 0x28))();
          (*(code *)puVar14[3])(&uStack_68,lVar8);
          auVar25[0] = -((char)uStack_68 == DAT_14329bc10);
          auVar25[1] = -(uStack_68._1_1_ == UNK_14329bc11);
          auVar25[2] = -(uStack_68._2_1_ == UNK_14329bc12);
          auVar25[3] = -(uStack_68._3_1_ == UNK_14329bc13);
          auVar25[4] = -(uStack_68._4_1_ == UNK_14329bc14);
          auVar25[5] = -(uStack_68._5_1_ == UNK_14329bc15);
          auVar25[6] = -(uStack_68._6_1_ == UNK_14329bc16);
          auVar25[7] = -(uStack_68._7_1_ == UNK_14329bc17);
          auVar25[8] = -((char)uStack_60 == UNK_14329bc18);
          auVar25[9] = -(uStack_60._1_1_ == UNK_14329bc19);
          auVar25[10] = -(uStack_60._2_1_ == UNK_14329bc1a);
          auVar25[0xb] = -(uStack_60._3_1_ == UNK_14329bc1b);
          auVar25[0xc] = -(uStack_60._4_1_ == UNK_14329bc1c);
          auVar25[0xd] = -(uStack_60._5_1_ == UNK_14329bc1d);
          auVar25[0xe] = -(uStack_60._6_1_ == UNK_14329bc1e);
          auVar25[0xf] = -(uStack_60._7_1_ == UNK_14329bc1f);
          if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
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
                       (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar25[0xf] >> 7) << 0xf) != 0xffff) {
            pdb_142dc8110(&UNK_14329c4d8,8,&UNK_14329c528);
            goto LAB_1423a56e1;
          }
          *(undefined1 *)(lVar8 + 0x74) = 1;
          pbStack_58 = pbStack_128;
          uStack_68 = uStack_138;
          uStack_60 = uStack_130;
          puVar14 = &uStack_60;
          lVar8 = pdb_1411a3e40(uStack_138 + 0x1b0);
          if (lVar8 == 0) {
            pdb_142dc8110(&UNK_14329c448,0xb,&UNK_14329c510);
            goto LAB_1423a56e1;
          }
          if (*(longlong *)(lVar8 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
            pdb_142dc83d0(&UNK_14329c470,0x97,&UNK_14329c5e0);
          }
          lVar8 = (**(code **)(*(longlong *)(lVar8 + 0xa0) + 0x28))();
          (*(code *)puVar14[3])(&uStack_138,lVar8);
          auVar26[0] = -((char)uStack_138 == DAT_14329bc10);
          auVar26[1] = -(uStack_138._1_1_ == UNK_14329bc11);
          auVar26[2] = -(uStack_138._2_1_ == UNK_14329bc12);
          auVar26[3] = -(uStack_138._3_1_ == UNK_14329bc13);
          auVar26[4] = -(uStack_138._4_1_ == UNK_14329bc14);
          auVar26[5] = -(uStack_138._5_1_ == UNK_14329bc15);
          auVar26[6] = -(uStack_138._6_1_ == UNK_14329bc16);
          auVar26[7] = -(uStack_138._7_1_ == UNK_14329bc17);
          auVar26[8] = -((char)uStack_130 == UNK_14329bc18);
          auVar26[9] = -(uStack_130._1_1_ == UNK_14329bc19);
          auVar26[10] = -(uStack_130._2_1_ == UNK_14329bc1a);
          auVar26[0xb] = -(uStack_130._3_1_ == UNK_14329bc1b);
          auVar26[0xc] = -(uStack_130._4_1_ == UNK_14329bc1c);
          auVar26[0xd] = -(uStack_130._5_1_ == UNK_14329bc1d);
          auVar26[0xe] = -(uStack_130._6_1_ == UNK_14329bc1e);
          auVar26[0xf] = -(uStack_130._7_1_ == UNK_14329bc1f);
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
                      (ushort)(auVar26[0xf] >> 7) << 0xf) != 0xffff) {
            pdb_142dc8110(&UNK_14329c4d8,8,&UNK_14329c528);
            goto LAB_1423a56e1;
          }
          *(undefined4 *)(lVar8 + 0x58) = 2;
          pbStack_158 = pbStack_58;
          pbStack_168 = uStack_68;
          pbStack_160 = uStack_60;
          pcVar12 = (char *)pdb_1411724f0(&pbStack_168);
          if ((*pcVar12 != '\0') &&
             ((*(longlong *)pbVar19 != 1 ||
              (*(longlong *)(pcVar12 + 8) != *(longlong *)(pbVar19 + 8))))) {
            **(undefined4 **)(param_8 + 0x10) = *(undefined4 *)(param_8 + 0x1c);
            lVar8 = *(longlong *)param_8;
            lVar4 = *(longlong *)(lVar8 + 0x30);
            param_4 = *(byte **)(lVar8 + 0x40);
            if (lVar4 == *(longlong *)(lVar8 + 0x20)) {
              pdb_142d7e980(lVar8 + 0x20);
            }
            lVar5 = *(longlong *)(lVar8 + 0x28);
            *(byte **)(lVar5 + lVar4 * 0x10) = param_4;
            *(undefined1 *)(lVar5 + 8 + lVar4 * 0x10) = 0;
            *(longlong *)(lVar8 + 0x30) = lVar4 + 1;
            *(longlong *)(lVar8 + 0x40) = *(longlong *)(lVar8 + 0x40) + 1;
          }
          plVar10 = (longlong *)pdb_1411724f0(&pbStack_168);
          lVar8 = plVar10[1];
          *(longlong *)pbVar19 = *plVar10;
          *(longlong *)(pbVar19 + 8) = lVar8;
          lVar8 = pdb_1411724f0(&pbStack_168);
          param_1 = param_8;
          if (*(int *)(lVar8 + 0x10) == 1) {
            lVar8 = *(longlong *)(lVar8 + 0x18);
            *(undefined4 *)param_5[2] = *(undefined4 *)((longlong)param_5 + 0x1c);
            uStack_138 = (byte *)0x2;
            pdb_140a003a0(*param_5,&uStack_138);
            **(undefined4 **)(param_8 + 0x10) = *(undefined4 *)(param_8 + 0x1c);
            param_2 = *(byte **)param_8;
            lVar4 = *(longlong *)(param_2 + 0x30);
            param_4 = *(byte **)(param_2 + 0x40);
            if (lVar4 == *(longlong *)(param_2 + 0x20)) {
              pdb_142d7e980(param_2 + 0x20);
            }
            lVar5 = *(longlong *)(param_2 + 0x28);
            *(byte **)(lVar5 + lVar4 * 0x10) = param_4;
            *(undefined1 *)(lVar5 + 8 + lVar4 * 0x10) = 2;
            pbVar19 = (byte *)(lVar4 + 1);
            *(byte **)(param_2 + 0x30) = pbVar19;
            *(longlong *)(param_2 + 0x40) = *(longlong *)(param_2 + 0x40) + 1;
            if (lVar8 == 0) {
              lVar8 = *(longlong *)param_6;
              param_4 = (byte *)pdb_1409aa2a0(lVar8,0);
              bVar1 = param_4[0x28];
              pdb_140f60be0(&uStack_138,param_4);
              lStack_120 = *(longlong *)(param_4 + 0x18);
              lStack_118 = *(longlong *)(param_4 + 0x20);
              **(undefined4 **)(param_6 + 0x10) = *(undefined4 *)(param_6 + 0x1c);
              bStack_110 = bVar1;
              pdb_1409aa280(&uStack_68,lVar8);
              param_1 = uStack_60;
              pbVar13 = pbStack_58;
              pbVar20 = uStack_68;
              while (param_2 = pbVar20, param_2 != param_1) {
                pbVar20 = param_2 + 0x40;
                pbVar19 = pbVar13 + 1;
                bVar21 = pbVar13 != (byte *)0x0;
                pbVar13 = pbVar19;
                param_4 = param_2;
                if ((bVar21) && (param_2 != (byte *)0x0)) {
                  pdb_140f60b70(param_2,&uStack_138);
                  *(undefined4 *)(param_2 + 0x18) = (undefined4)lStack_120;
                }
              }
              if (uStack_138 != (byte *)0x0) {
                pub_1406abac0(uStack_130,(ulonglong)uStack_138,1);
              }
            }
            else {
              uVar9 = lVar8 - 1;
              param_1 = param_6;
              if (uVar9 < (ulonglong)plStack_78[2]) {
                lVar8 = plStack_78[1];
                **(undefined4 **)(param_6 + 0x10) = *(undefined4 *)(param_6 + 0x1c);
                pdb_1409aa280(&uStack_138,*(longlong *)param_6);
                param_1 = uStack_130;
                pbVar13 = pbStack_128;
                pbVar20 = uStack_138;
                while (param_2 = pbVar20, param_2 != param_1) {
                  pbVar20 = param_2 + 0x40;
                  pbVar19 = pbVar13 + 1;
                  bVar21 = pbVar13 != (byte *)0x0;
                  pbVar13 = pbVar19;
                  param_4 = param_2;
                  if ((bVar21) && (param_2 != (byte *)0x0)) {
                    pdb_140f60b70(param_2,uVar9 * 0x20 + lVar8);
                    param_2[0x18] = 0;
                    param_2[0x19] = 0;
                    param_2[0x1a] = 0x80;
                    param_2[0x1b] = 0x3f;
                  }
                }
              }
            }
          }
          *(undefined4 *)pbStack_80 = pbStack_70._0_4_;
          uStack_138 = &UNK_1434e2632;
          uStack_130 = (byte *)0x4;
          uVar9 = pdb_140bbbcb0(&uStack_138);
          unaff_RBX = (byte *)(uVar9 ^ 0xb1695320004fb443);
          pbVar13 = unaff_RBX;
          lVar8 = pdb_14072c2d0(pbVar16);
          *(undefined1 *)(lVar8 + 0x5e) = 0;
          if (((ulonglong)pbVar13 & 1) == 0) {
            lVar8 = *(longlong *)(pbVar16 + 0x10);
            if (lVar8 == *(longlong *)pbVar16) {
              pdb_142d7f080(pbVar16);
            }
            lVar4 = *(longlong *)(pbVar16 + 8);
            *(undefined4 *)(lVar4 + lVar8 * 0x38) = 2;
            *(byte **)(lVar4 + 0x30 + lVar8 * 0x38) = unaff_RBX;
            param_4 = (byte *)(lVar8 + 1);
            *(byte **)(pbVar16 + 0x10) = param_4;
          }
          pbStack_58 = (byte *)0x0;
          uStack_68 = pbVar16;
          uStack_60 = unaff_RBX;
          pdb_141174160(&uStack_138,&uStack_68,&UNK_1434e2636,9,0);
          pdb_14118ac70(&uStack_138,&UNK_1434e263f,6,param_5);
          if (lStack_90 == 0) {
            return;
          }
          plVar10 = (longlong *)pdb_140e97000();
          if (((char)plVar10[0xd] == '\x01') ||
             (plVar10 = (longlong *)pdb_142dcf3a0(plVar10,0), plVar10 != (longlong *)0x0)) {
            unaff_RDI = param_5;
            if (*plVar10 == 0) {
              *plVar10 = -1;
              pbStack_70 = (byte *)plVar10;
              pdb_140e95370(plVar10 + 1,puStack_88);
              goto LAB_1423a527e;
            }
            goto LAB_1423a5470;
          }
          break;
        }
        pbVar19[0] = 0;
        pbVar19[1] = 0;
        pbVar19[2] = 0;
        pbVar19[3] = 0;
        pbVar19[4] = 0;
        pbVar19[5] = 0;
        pbVar19[6] = 0;
        pbVar19[7] = 0;
        cVar15 = (char)pbVar16;
      }
      else {
LAB_1423a4c1e:
        cVar15 = (char)pbVar16;
        pbVar19 = param_4;
        param_4 = param_3;
      }
      if (cVar15 == '\0') {
        return;
      }
      plVar10 = (longlong *)pdb_140e97000();
      if (((char)plVar10[0xd] != '\x01') &&
         (plVar10 = (longlong *)pdb_142dcf3a0(plVar10,0), plVar10 == (longlong *)0x0)) break;
      if (*plVar10 == 0) {
        *plVar10 = -1;
        pbStack_70 = (byte *)plVar10;
        pdb_140e95370(plVar10 + 1,unaff_RDI);
LAB_1423a527e:
        *(longlong *)pbStack_70 = *(longlong *)pbStack_70 + 1;
        return;
      }
    }
LAB_1423a5470:
    plVar10 = (longlong *)pdb_142dc8090(&UNK_1432a7f58);
LAB_1423a547c:
    plVar10 = (longlong *)pdb_142dcf3a0(plVar10,0);
  } while (plVar10 != (longlong *)0x0);
  pdb_142dc7890(&UNK_1432a7ee8);
LAB_1423a54b1:
  pdb_142dc8110(&UNK_14329c448,0xb,&UNK_14329c510);
LAB_1423a56e1:
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
}

