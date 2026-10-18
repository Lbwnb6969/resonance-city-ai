// VA 0x141d57100, PDB extent 2535 bytes
// serde_json::value::de::impl$0::deserialize::impl$0::visit_map<serde_json::de::MapAccess<serde_json::read::SliceRead> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_json::value::de::impl$0::deserialize::impl$0::visit_map<serde_json::de::MapAccess<serde_json::read::SliceRead>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-icon-pipe/src/lib.rs
   Extent: 2535 */

char * pdb_141d57100(char *param_1,longlong param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined7 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ulonglong uVar10;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  undefined8 uStack_118;
  byte *pbStack_110;
  longlong lStack_108;
  undefined1 uStack_100;
  ulonglong uStack_f8;
  byte *pbStack_f0;
  undefined8 uStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  char cStack_bf;
  undefined5 uStack_be;
  undefined1 uStack_b9;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  undefined1 uStack_a1;
  ulonglong uStack_a0;
  undefined8 uStack_98;
  ulonglong uStack_90;
  byte *pbStack_88;
  byte *pbStack_80;
  byte *pbStack_78;
  ulonglong uStack_70;
  byte *pbStack_68;
  byte *pbStack_60;
  byte *pbStack_58;
  byte *pbStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lStack_108 = param_2;
  uStack_100 = param_3;
  pdb_140407a40(&bStack_c0,&lStack_108);
  lVar6 = lStack_108;
  if (bStack_c0 == 1) {
    pbStack_d0 = (byte *)CONCAT17(uStack_b1,uStack_b8);
  }
  else {
    if (cStack_bf != '\x01') {
      *param_1 = '\x05';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      return param_1;
    }
    pdb_1401706c0(&bStack_c0,lStack_108);
    pbStack_d8 = (byte *)CONCAT17(uStack_b9,CONCAT52(uStack_be,CONCAT11(cStack_bf,bStack_c0)));
    pbStack_d0 = (byte *)CONCAT17(uStack_b1,uStack_b8);
    if (pbStack_d8 != (byte *)0x8000000000000001) {
      if (SBORROW8(0,(longlong)pbStack_d8)) {
        uVar7 = *(ulonglong *)(lVar6 + 0x28);
        if (uVar7 < *(ulonglong *)(lVar6 + 0x20)) {
          do {
            uVar7 = uVar7 + 1;
            uVar10 = (ulonglong)*(byte *)(*(longlong *)(lVar6 + 0x18) + -1 + uVar7);
            if (0x3a < uVar10) {
LAB_141d57807:
              bStack_c0 = 6;
              goto LAB_141d571e8;
            }
            if ((0x100002600U >> (uVar10 & 0x3f) & 1) == 0) {
              if (uVar10 != 0x3a) goto LAB_141d57807;
              *(ulonglong *)(lVar6 + 0x28) = uVar7;
              pdb_140cf18e0(&pbStack_78,lVar6);
              if (pbStack_78 != (byte *)0x0) {
                pbStack_58 = pbStack_78;
                pbStack_50 = (byte *)uStack_70;
                pdb_140cef8d0(&bStack_c0);
                if (bStack_c0 == 6) {
                  uVar8 = pdb_142df6d20(CONCAT17(uStack_b1,uStack_b8));
                  *(undefined8 *)(param_1 + 8) = uVar8;
                  *param_1 = '\x06';
                }
                else {
                  *(ulonglong *)(param_1 + 0x10) = CONCAT17(uStack_a9,uStack_b0);
                  *(ulonglong *)(param_1 + 0x18) = CONCAT17(uStack_a1,uStack_a8);
                  *(ulonglong *)param_1 =
                       CONCAT17(uStack_b9,CONCAT52(uStack_be,CONCAT11(cStack_bf,bStack_c0)));
                  *(ulonglong *)(param_1 + 8) = CONCAT17(uStack_b1,uStack_b8);
                }
                if (pbStack_50 == (byte *)0x0) {
                  return param_1;
                }
                pub_1406abac0(pbStack_58,(ulonglong)pbStack_50,1);
                return param_1;
              }
              goto LAB_141d573c6;
            }
            *(ulonglong *)(lVar6 + 0x28) = uVar7;
          } while (uVar7 != *(ulonglong *)(lVar6 + 0x20));
        }
        bStack_c0 = 3;
LAB_141d571e8:
        uStack_b9 = 0;
        uStack_be = 0;
        cStack_bf = 0;
        uStack_70 = pdb_142d84ef0(lVar6,&bStack_c0);
LAB_141d573c6:
        *(ulonglong *)(param_1 + 8) = uStack_70;
        *param_1 = '\x06';
        return param_1;
      }
      uStack_c8 = CONCAT17(uStack_a9,uStack_b0);
      uStack_f8 = 0;
      uStack_e8 = 0;
      uVar7 = *(ulonglong *)(lVar6 + 0x28);
      pbStack_58 = pbStack_d0;
      pbStack_50 = pbStack_d8;
      if (uVar7 < *(ulonglong *)(lVar6 + 0x20)) {
        do {
          uVar7 = uVar7 + 1;
          uVar10 = (ulonglong)*(byte *)(*(longlong *)(lVar6 + 0x18) + -1 + uVar7);
          if (0x3a < uVar10) {
LAB_141d57837:
            pbStack_78 = (byte *)0x6;
            uVar8 = pdb_142d84ef0(lVar6,&pbStack_78);
            goto LAB_141d572bb;
          }
          if ((0x100002600U >> (uVar10 & 0x3f) & 1) == 0) {
            if (uVar10 != 0x3a) goto LAB_141d57837;
            *(ulonglong *)(lVar6 + 0x28) = uVar7;
            pdb_140cf0740(param_1,lVar6);
            if (*param_1 == '\x06') goto LAB_141d57356;
            uStack_168 = *(undefined4 *)param_1;
            uStack_164 = *(undefined4 *)(param_1 + 4);
            uStack_160 = *(undefined4 *)(param_1 + 8);
            uStack_15c = *(undefined4 *)(param_1 + 0xc);
            uStack_158 = *(undefined4 *)(param_1 + 0x10);
            uStack_154 = *(undefined4 *)(param_1 + 0x14);
            uStack_150 = *(undefined4 *)(param_1 + 0x18);
            uStack_14c = *(undefined4 *)(param_1 + 0x1c);
            pdb_141d584e0(&bStack_c0,&uStack_f8,&pbStack_d8,&uStack_168);
            switch(bStack_c0) {
            case 0:
            case 1:
            case 2:
            case 6:
              break;
            case 3:
              if (CONCAT17(uStack_b1,uStack_b8) != 0) {
                pub_1406abac0((byte *)CONCAT17(uStack_a9,uStack_b0),CONCAT17(uStack_b1,uStack_b8),1)
                ;
              }
              break;
            case 4:
              pdb_141d55580(&uStack_b8);
              break;
            default:
              pdb_141d56e60(&uStack_b8);
            }
            goto LAB_141d57459;
          }
          *(ulonglong *)(lVar6 + 0x28) = uVar7;
        } while (uVar7 != *(ulonglong *)(lVar6 + 0x20));
      }
      pbStack_78 = (byte *)0x3;
      uVar8 = pdb_142d84ef0(lVar6,&pbStack_78);
LAB_141d572bb:
      *(undefined8 *)(param_1 + 8) = uVar8;
      *param_1 = '\x06';
LAB_141d57356:
      if (pbStack_50 != (byte *)0x0) {
        pub_1406abac0(pbStack_58,(ulonglong)pbStack_50,1);
      }
      goto joined_r0x000141d5779a;
    }
  }
  *(byte **)(param_1 + 8) = pbStack_d0;
  *param_1 = '\x06';
  return param_1;
LAB_141d57459:
  pdb_140407b90(&pbStack_d8,&lStack_108);
  uVar8 = uStack_c8;
  pbVar9 = pbStack_d0;
  if (pbStack_d8 != (byte *)0x8000000000000001) {
    if (SBORROW8(0,(longlong)pbStack_d8)) {
LAB_141d576fa:
      uStack_b9 = (undefined1)uStack_f8;
      uStack_b8 = (undefined7)(uStack_f8 >> 8);
      uStack_b1 = SUB81(pbStack_f0,0);
      *param_1 = '\x05';
      *(ulonglong *)(param_1 + 1) =
           CONCAT17(uStack_b9,CONCAT52(uStack_be,CONCAT11(cStack_bf,bStack_c0)));
      *(ulonglong *)(param_1 + 9) = CONCAT17(uStack_b1,uStack_b8);
      *(byte **)(param_1 + 0x10) = pbStack_f0;
      *(undefined8 *)(param_1 + 0x18) = uStack_e8;
      return param_1;
    }
    pbStack_58 = pbStack_d0;
    uVar7 = *(ulonglong *)(lStack_108 + 0x28);
    pbStack_50 = pbStack_d8;
    if (*(ulonglong *)(lStack_108 + 0x20) <= uVar7) {
LAB_141d576b2:
      pbStack_78 = (byte *)0x3;
      pbVar9 = (byte *)pdb_142d84ef0(lStack_108,&pbStack_78);
joined_r0x000141d5777d:
      if (pbStack_50 != (byte *)0x0) {
        pub_1406abac0(pbStack_58,(ulonglong)pbStack_50,1);
      }
      goto LAB_141d5778c;
    }
    while( true ) {
      uVar7 = uVar7 + 1;
      uVar10 = (ulonglong)*(byte *)(*(longlong *)(lStack_108 + 0x18) + -1 + uVar7);
      if (0x3a < uVar10) goto LAB_141d57814;
      if ((0x100002600U >> (uVar10 & 0x3f) & 1) == 0) break;
      *(ulonglong *)(lStack_108 + 0x28) = uVar7;
      if (uVar7 == *(ulonglong *)(lStack_108 + 0x20)) goto LAB_141d576b2;
    }
    if (uVar10 != 0x3a) {
LAB_141d57814:
      pbStack_78 = (byte *)0x6;
      pbVar9 = (byte *)pdb_142d84ef0(lStack_108,&pbStack_78);
      goto joined_r0x000141d5777d;
    }
    *(ulonglong *)(lStack_108 + 0x28) = uVar7;
    pdb_140cf0740(&bStack_c0);
    if (bStack_c0 == 6) {
      pbVar9 = (byte *)CONCAT17(uStack_b1,uStack_b8);
      goto joined_r0x000141d5777d;
    }
    uVar2 = CONCAT52(uStack_be,CONCAT11(cStack_bf,bStack_c0));
    uVar1 = CONCAT17(uStack_b9,uVar2);
    uVar3 = CONCAT17(uStack_b1,uStack_b8);
    uVar4 = CONCAT17(uStack_a9,uStack_b0);
    uVar5 = CONCAT17(uStack_a1,uStack_a8);
    if (SBORROW8(0,(longlong)pbStack_50)) goto LAB_141d576fa;
    pbVar9 = pbStack_58;
    uStack_148 = uVar1;
    uStack_140 = uVar3;
    uStack_138 = uVar4;
    uStack_130 = uVar5;
    if (pbStack_50 == (byte *)0x8000000000000001) goto LAB_141d5778c;
    pbStack_128 = pbStack_50;
    pbStack_120 = pbStack_58;
    uStack_118 = uVar8;
    uStack_148._0_4_ = (undefined4)uVar2;
    uStack_148._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    uStack_140._0_4_ = (undefined4)uStack_b8;
    uStack_140._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    uStack_138._0_4_ = (undefined4)uStack_b0;
    uStack_138._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_130._0_4_ = (undefined4)uStack_a8;
    uStack_130._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
    uStack_188 = (undefined4)uStack_148;
    uStack_184 = uStack_148._4_4_;
    uStack_180 = (undefined4)uStack_140;
    uStack_17c = uStack_140._4_4_;
    uStack_178 = (undefined4)uStack_138;
    uStack_174 = uStack_138._4_4_;
    uStack_170 = (undefined4)uStack_130;
    uStack_16c = uStack_130._4_4_;
    pdb_141d584e0(&pbStack_78,&uStack_f8,&pbStack_128,&uStack_188);
    switch((ulonglong)pbStack_78 & 0xff) {
    case 0:
    case 1:
    case 2:
    case 6:
      break;
    case 3:
      if (uStack_70 != 0) {
        pub_1406abac0(pbStack_68,uStack_70,1);
      }
      break;
    case 4:
      pbStack_58 = pbStack_60;
      pbStack_e0 = pbStack_68;
      pbStack_50 = (byte *)0x0;
      pbVar9 = pbStack_68;
      while (pbStack_58 != pbStack_50) {
        pbStack_50 = pbStack_50 + 1;
        pdb_141d50f90(pbVar9);
        pbVar9 = pbVar9 + 0x20;
      }
      if (uStack_70 != 0) {
        pub_1406abac0(pbStack_e0,uStack_70 << 5,8);
      }
      break;
    default:
      if (uStack_70 == 0) {
        pbStack_80 = (byte *)0x0;
      }
      else {
        uStack_b8 = 0;
        uStack_b1 = 0;
        uStack_b0 = (undefined7)uStack_70;
        uStack_a9 = (undefined1)(uStack_70 >> 0x38);
        uStack_a8 = SUB87(pbStack_68,0);
        uStack_a1 = (undefined1)((ulonglong)pbStack_68 >> 0x38);
        uStack_98 = 0;
        uStack_90 = uStack_70;
        pbStack_88 = pbStack_68;
        pbStack_80 = pbStack_60;
      }
      bStack_c0 = uStack_70 != 0;
      uStack_a0 = (ulonglong)bStack_c0;
      cStack_bf = '\0';
      uStack_be = 0;
      uStack_b9 = 0;
      pdb_141d586f0(&pbStack_d8,&bStack_c0);
      while (pbStack_d8 != (byte *)0x0) {
        pbStack_110 = &bStack_c0;
        pdb_141d56f40(&pbStack_d8);
        pdb_141d586f0(&pbStack_d8,&bStack_c0);
      }
    }
    goto LAB_141d57459;
  }
LAB_141d5778c:
  *(byte **)(param_1 + 8) = pbVar9;
  *param_1 = '\x06';
joined_r0x000141d5779a:
  if (uStack_f8 == 0) {
    pbStack_80 = (byte *)0x0;
  }
  else {
    uStack_b8 = 0;
    uStack_b1 = 0;
    uStack_b0 = (undefined7)uStack_f8;
    uStack_a9 = (undefined1)(uStack_f8 >> 0x38);
    uStack_a8 = SUB87(pbStack_f0,0);
    uStack_a1 = (undefined1)((ulonglong)pbStack_f0 >> 0x38);
    uStack_98 = 0;
    pbStack_80 = (byte *)uStack_e8;
    uStack_90 = uStack_f8;
    pbStack_88 = pbStack_f0;
  }
  bStack_c0 = uStack_f8 != 0;
  uStack_a0 = (ulonglong)bStack_c0;
  cStack_bf = 0;
  uStack_be = 0;
  uStack_b9 = 0;
  pdb_141d586f0(&pbStack_78,&bStack_c0);
  if (pbStack_78 != (byte *)0x0) {
    do {
      pbStack_d8 = &bStack_c0;
      pdb_141d56f40(&pbStack_78);
      pdb_141d586f0(&pbStack_78,&bStack_c0);
    } while (pbStack_78 != (byte *)0x0);
  }
  return param_1;
}

