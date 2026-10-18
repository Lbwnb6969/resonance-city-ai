// VA 0x14166e610, PDB extent 2800 bytes
// serde_json::de::impl$7::deserialize_struct<serde_json::read::StrRead,country_core::render::atmosphere::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_struct<serde_json::read::StrRead,country_core::render::atmosphere::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 2800 */

undefined4 * pdb_14166e610(undefined4 *param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  byte bVar2;
  code *pcVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  code *pcVar8;
  byte *pbVar9;
  int iVar10;
  code *pcVar11;
  byte *pbVar12;
  longlong lVar13;
  byte *unaff_RBX;
  undefined4 uVar14;
  byte *in_R10;
  undefined4 uVar15;
  undefined8 in_R11;
  code *pcVar16;
  int unaff_R13D;
  undefined4 unaff_R14D;
  int iVar17;
  int unaff_R15D;
  undefined *puStack_158;
  byte *pbStack_150;
  byte *pbStack_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  byte *pbStack_130;
  byte *pbStack_128;
  byte *pbStack_120;
  byte *pbStack_118;
  undefined1 uStack_110;
  int iStack_104;
  int iStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  int iStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  int iStack_e4;
  uint uStack_e0;
  undefined1 uStack_d9;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  byte *pbStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  byte *pbStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  int iStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  byte *apbStack_60 [2];
  ulonglong uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar5 = *(ulonglong *)(param_2 + 0x28);
  if (uVar5 < *(ulonglong *)(param_2 + 0x20)) {
    pcVar16 = (code *)0x100002600;
    do {
      uVar5 = uVar5 + 1;
      bVar2 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar5);
      pbVar9 = (byte *)(ulonglong)bVar2;
      if (((byte *)0x20 < pbVar9) || ((0x100002600U >> ((ulonglong)pbVar9 & 0x3f) & 1) == 0)) {
        if (bVar2 == 0x5b) {
          pbVar7 = param_2 + 0x48;
          *pbVar7 = *pbVar7 - 1;
          if (*pbVar7 != 0) {
            *(ulonglong *)(param_2 + 0x28) = uVar5;
            uStack_d0 = (byte *)CONCAT71(uStack_d0._1_7_,1);
            pcVar11 = (code *)&uStack_98;
            uVar4 = SUB84(&uStack_d8,0);
            uStack_d8 = param_2;
            pdb_140407e70();
            if ((byte)uStack_98 == 1) {
LAB_14166ed24:
              uStack_98._4_4_ = uVar4;
              uVar4 = 1;
              uStack_50 = 0;
              pcVar8 = pcStack_90;
              iStack_c8 = unaff_R13D;
              uStack_bc = unaff_R14D;
            }
            else {
              if (uStack_98._1_1_ == '\x01') {
                pcVar11 = (code *)&uStack_98;
                pbVar7 = uStack_d8;
                pdb_1416801b0();
                pcVar8 = pcStack_90;
                uVar4 = (int)pbVar7;
                if ((int)uStack_98 != 1) {
                  unaff_R15D = (int)((ulonglong)uStack_98 >> 0x20);
                  pcVar11 = (code *)&uStack_98;
                  uVar4 = SUB84(&uStack_d8,0);
                  pdb_140407e70();
                  if ((byte)uStack_98 != 1) {
                    if (uStack_98._1_1_ == '\x01') {
                      pcVar11 = (code *)&uStack_98;
                      pbVar7 = uStack_d8;
                      pdb_1416801b0();
                      uVar4 = (int)pbVar7;
                      if ((int)uStack_98 == 1) goto LAB_14166ed24;
                      pbStack_a0 = (byte *)pcStack_90;
                      unaff_R13D = uStack_98._4_4_;
                    }
                    else {
                      pbStack_a0 = (byte *)0x0;
                      unaff_R13D = 0;
                    }
                    pcVar11 = (code *)&uStack_98;
                    uVar4 = SUB84(&uStack_d8,0);
                    pdb_140407e70();
                    if ((byte)uStack_98 != 1) {
                      if (uStack_98._1_1_ == '\x01') {
                        pcVar11 = (code *)&uStack_98;
                        pbVar7 = uStack_d8;
                        pdb_1416801b0();
                        pcVar3 = pcStack_90;
                        uVar4 = (int)pbVar7;
                        if ((int)uStack_98 != 1) {
                          unaff_R14D = uStack_98._4_4_;
                          pcVar11 = (code *)&uStack_98;
                          uVar4 = SUB84(&uStack_d8,0);
                          pdb_140407e70();
                          pcVar16 = pcVar3;
                          if ((byte)uStack_98 != 1) {
                            if (uStack_98._1_1_ != '\x01') {
                              pcVar11 = (code *)0x3;
                              goto LAB_14166ef69;
                            }
                            pcVar11 = (code *)&uStack_98;
                            pdb_1416801b0();
                            uVar4 = (int)uStack_d8;
                            if ((int)uStack_98 != 1) {
                              uVar4 = 0;
                              uStack_50 = CONCAT71((int7)((ulonglong)pbVar9 >> 8),1);
                              pcVar11 = pcStack_90;
                              pbVar9 = pbStack_a0;
                              iStack_c8 = unaff_R13D;
                              uStack_bc = unaff_R14D;
                              goto LAB_14166ed34;
                            }
                          }
                        }
                      }
                      else {
                        pcVar11 = (code *)0x2;
LAB_14166ef69:
                        pbVar9 = &UNK_143322608;
                        uVar4 = 0x43322710;
                        pcStack_90 = (code *)pdb_142d8f0e0();
                      }
                    }
                  }
                }
                goto LAB_14166ed24;
              }
              uStack_98._4_4_ = 0x43322710;
              pbVar9 = &UNK_143322608;
              uStack_50 = 0;
              pcVar11 = (code *)0x0;
              pcVar8 = (code *)pdb_142d8f0e0();
              uVar4 = 1;
              iStack_c8 = unaff_R13D;
              uStack_bc = unaff_R14D;
            }
LAB_14166ed34:
            param_2[0x48] = param_2[0x48] + 1;
            uStack_d8 = (byte *)CONCAT44(unaff_R15D,uVar4);
            uStack_c4 = SUB84(pbVar9,0);
            uStack_c0 = (undefined4)((ulonglong)pbVar9 >> 0x20);
            uStack_ac = SUB84(pcVar11,0);
            uStack_a8 = (undefined4)((ulonglong)pcVar11 >> 0x20);
            uStack_d0 = (byte *)pcVar8;
            pbStack_b8 = (byte *)pcVar16;
            uStack_b0 = uStack_98._4_4_;
            apbStack_60[0] = (byte *)pdb_140404e50(param_2);
            pbVar9 = uStack_d0;
            uStack_68 = uStack_a8;
            pbStack_148 = pbStack_b8;
            uStack_70 = uStack_b0;
            uStack_6c = uStack_ac;
            iStack_88 = iStack_c8;
            uStack_84 = uStack_c4;
            uStack_80 = uStack_c0;
            uStack_7c = uStack_bc;
            uStack_98 = (undefined8 *)uStack_d8;
            pcStack_90 = (code *)uStack_d0;
            uStack_78 = pbStack_148;
            if (((ulonglong)uStack_d8 & 1) != 0) {
              if (apbStack_60[0] != (byte *)0x0) {
                pdb_1404b4b10(apbStack_60);
              }
              goto LAB_14166eecf;
            }
            pbVar9 = apbStack_60[0];
            if (apbStack_60[0] != (byte *)0x0) goto LAB_14166eecf;
            puStack_158 = (undefined *)CONCAT44(uStack_c4,iStack_c8);
            pbStack_150 = (byte *)CONCAT44(uStack_bc,uStack_c0);
            uStack_140 = CONCAT44(uStack_ac,uStack_b0);
            uStack_138 = uStack_a8;
            unaff_RBX = uStack_d0;
            goto LAB_14166edc8;
          }
        }
        else {
          if (bVar2 != 0x7b) {
            pbVar9 = (byte *)pdb_142de8b10(param_2,&uStack_d9,&UNK_143323de0);
            goto LAB_14166eecf;
          }
          pbVar7 = param_2 + 0x48;
          *pbVar7 = *pbVar7 - 1;
          if (*pbVar7 != 0) {
            *(ulonglong *)(param_2 + 0x28) = uVar5;
            uStack_110 = 1;
            iVar10 = (int)&uStack_98;
            uVar4 = SUB84(&pbStack_118,0);
            pbStack_118 = param_2;
            pcVar16 = (code *)pdb_140407a40();
            uVar14 = (undefined4)param_4;
            pcVar11 = pcStack_90;
            if ((byte)uStack_98 != 0) goto LAB_14166e6e9;
            uStack_50 = uStack_50 & 0xffffffff00000000;
            unaff_R15D = (int)&uStack_98;
            uStack_f0 = 0;
            uStack_e8 = 0;
            uStack_ec = 0;
            uStack_e0 = 0;
            pbStack_a0 = (byte *)((ulonglong)pbStack_a0 & 0xffffffff00000000);
            iStack_f4 = 0;
            iStack_e4 = 0;
            goto LAB_14166e806;
          }
        }
        uStack_98 = (undefined8 *)0x18;
        goto LAB_14166e68e;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar5;
    } while (uVar5 != *(ulonglong *)(param_2 + 0x20));
  }
  uStack_98 = (undefined8 *)0x5;
LAB_14166e68e:
  uVar6 = pdb_142d84ef0(param_2,&uStack_98);
  *(undefined8 *)(param_1 + 2) = uVar6;
  *param_1 = 1;
  return param_1;
LAB_14166e806:
  pbVar7 = pbStack_118;
  uVar14 = (undefined4)param_4;
  if (uStack_98._1_1_ != '\0') {
    pbVar1 = pbStack_118 + 0x18;
    *(longlong *)(pbStack_118 + 0x28) = *(longlong *)(pbStack_118 + 0x28) + 1;
    pbStack_118[0x10] = 0;
    pbStack_118[0x11] = 0;
    pbStack_118[0x12] = 0;
    pbStack_118[0x13] = 0;
    pbStack_118[0x14] = 0;
    pbStack_118[0x15] = 0;
    pbStack_118[0x16] = 0;
    pbStack_118[0x17] = 0;
    pbVar12 = pbVar1;
    pbVar9 = pbStack_118;
    iVar10 = unaff_R15D;
    pdb_140de3310();
    uVar14 = (undefined4)param_4;
    uStack_7c = SUB84(pbVar12,0);
    pcVar16 = pcStack_90;
    if ((int)uStack_98 == 2) {
LAB_14166ebb7:
      iVar17 = 1;
      uVar15 = 0;
      unaff_RBX = (byte *)pcVar16;
      pbStack_128 = pbVar9;
      pbStack_120 = in_R10;
      uStack_70 = uVar14;
      goto LAB_14166ebc3;
    }
    lVar13 = CONCAT44(uStack_84,iStack_88);
    if (lVar13 == 0xd) {
      if (*(longlong *)(pcStack_90 + 5) != CONCAT53(_UNK_14335616d,_DAT_14335616a) ||
          *(longlong *)pcStack_90 != CONCAT35(_DAT_14335616a,_DAT_143356165)) goto LAB_14166e99a;
      if (iStack_f4 != 0) {
        uStack_d8 = &UNK_1433226cd;
        uStack_d0 = (byte *)0xd;
LAB_14166f003:
        iVar10 = 0x43045061;
        goto LAB_14166ef29;
      }
      uVar5 = *(ulonglong *)(pbVar7 + 0x28);
      if (*(ulonglong *)(pbVar7 + 0x20) <= uVar5) goto LAB_14166ee65;
      lVar13 = *(longlong *)pbVar1;
      while( true ) {
        uVar5 = uVar5 + 1;
        pbVar9 = (byte *)(ulonglong)*(byte *)(lVar13 + -1 + uVar5);
        if ((byte *)0x3a < pbVar9) goto LAB_14166ef76;
        if ((0x100002600U >> ((ulonglong)pbVar9 & 0x3f) & 1) == 0) break;
        *(ulonglong *)(pbVar7 + 0x28) = uVar5;
        if (uVar5 == *(ulonglong *)(pbVar7 + 0x20)) {
          pbVar9 = (byte *)0x1;
          goto LAB_14166ee65;
        }
      }
      if (pbVar9 != (byte *)0x3a) goto LAB_14166ef76;
      *(ulonglong *)(pbVar7 + 0x28) = uVar5;
      iVar10 = (int)&uStack_d8;
      pcVar16 = (code *)pdb_1416801b0();
      uVar14 = (undefined4)param_4;
      uVar4 = SUB84(pbVar7,0);
      pcVar11 = (code *)uStack_d0;
      if ((char)uStack_d8 == '\0') {
        uStack_fc = uStack_d8._4_4_;
        pbStack_128 = uStack_d0;
        uStack_ec = (uint)CONCAT71((int7)((ulonglong)uStack_d0 >> 8),1);
        iStack_f4 = 1;
        goto LAB_14166e7f0;
      }
      goto LAB_14166e6e9;
    }
    if (lVar13 == 0xf) {
      if (*(longlong *)(pcStack_90 + 7) != CONCAT71(_UNK_14335615e,DAT_14335615d) ||
          *(longlong *)pcStack_90 != CONCAT17(DAT_14335615d,_DAT_143356156)) goto LAB_14166e99a;
      if ((int)pbStack_a0 != 0) {
        uStack_d8 = &UNK_1433226be;
        uStack_d0 = (byte *)0xf;
        goto LAB_14166f003;
      }
      uVar5 = *(ulonglong *)(pbVar7 + 0x28);
      if (uVar5 < *(ulonglong *)(pbVar7 + 0x20)) {
        lVar13 = *(longlong *)pbVar1;
        while( true ) {
          uVar5 = uVar5 + 1;
          pbVar9 = (byte *)(ulonglong)*(byte *)(lVar13 + -1 + uVar5);
          if ((byte *)0x3a < pbVar9) goto LAB_14166ef76;
          if ((0x100002600U >> ((ulonglong)pbVar9 & 0x3f) & 1) == 0) break;
          *(ulonglong *)(pbVar7 + 0x28) = uVar5;
          if (uVar5 == *(ulonglong *)(pbVar7 + 0x20)) {
            pbVar9 = (byte *)0x1;
            goto LAB_14166ee65;
          }
        }
        if (pbVar9 != (byte *)0x3a) goto LAB_14166ef76;
        *(ulonglong *)(pbVar7 + 0x28) = uVar5;
        iVar10 = (int)&uStack_d8;
        pcVar16 = (code *)pdb_1416801b0();
        uVar14 = (undefined4)param_4;
        uVar4 = SUB84(pbVar7,0);
        pcVar11 = (code *)uStack_d0;
        if ((char)uStack_d8 == '\0') {
          iStack_100 = uStack_d8._4_4_;
          pbStack_130 = uStack_d0;
          uStack_e8 = (uint)CONCAT71((int7)((ulonglong)uStack_d0 >> 8),1);
          pbStack_a0 = (byte *)CONCAT44(pbStack_a0._4_4_,1);
          goto LAB_14166e7f0;
        }
      }
      else {
LAB_14166ee65:
        uStack_98 = (undefined8 *)0x3;
LAB_14166ee6d:
        uVar4 = SUB84(&uStack_98,0);
        pcVar16 = (code *)pdb_142d84ef0();
        iVar10 = (int)pbVar7;
        pcVar11 = pcVar16;
      }
      goto LAB_14166e6e9;
    }
    if (lVar13 == 0xe) {
      if (*(longlong *)(pcStack_90 + 6) == CONCAT62(_UNK_143356150,_DAT_14335614e) &&
          *(longlong *)pcStack_90 == CONCAT26(_DAT_14335614e,_DAT_143356148)) {
        if ((int)uStack_50 != 0) {
          uStack_d8 = &UNK_1433226b0;
LAB_14166eff7:
          uStack_d0 = (byte *)0xe;
          goto LAB_14166f003;
        }
        uVar5 = *(ulonglong *)(pbVar7 + 0x28);
        if (*(ulonglong *)(pbVar7 + 0x20) <= uVar5) goto LAB_14166ee65;
        lVar13 = *(longlong *)pbVar1;
        while( true ) {
          uVar5 = uVar5 + 1;
          pbVar9 = (byte *)(ulonglong)*(byte *)(lVar13 + -1 + uVar5);
          if ((byte *)0x3a < pbVar9) goto LAB_14166ef76;
          if ((0x100002600U >> ((ulonglong)pbVar9 & 0x3f) & 1) == 0) break;
          *(ulonglong *)(pbVar7 + 0x28) = uVar5;
          if (uVar5 == *(ulonglong *)(pbVar7 + 0x20)) {
            pbVar9 = (byte *)0x1;
            goto LAB_14166ee65;
          }
        }
        if (pbVar9 != (byte *)0x3a) {
LAB_14166ef76:
          uStack_98 = (undefined8 *)0x6;
          goto LAB_14166ee6d;
        }
        *(ulonglong *)(pbVar7 + 0x28) = uVar5;
        iVar10 = (int)&uStack_d8;
        pcVar16 = (code *)pdb_1416801b0();
        uVar14 = (undefined4)param_4;
        uVar4 = SUB84(pbVar7,0);
        pcVar11 = (code *)uStack_d0;
        if ((char)uStack_d8 == '\0') {
          iStack_104 = uStack_d8._4_4_;
          uStack_f0 = (uint)CONCAT71((uint7)(uint3)((ulonglong)uStack_d8 >> 0x28),1);
          uStack_50 = CONCAT44(uStack_50._4_4_,1);
          unaff_RBX = uStack_d0;
          goto LAB_14166e7f0;
        }
      }
      else {
        if (*(longlong *)(pcStack_90 + 6) != CONCAT62(_UNK_14335617a,_DAT_143356178) ||
            *(longlong *)pcStack_90 != CONCAT26(_DAT_143356178,_DAT_143356172)) goto LAB_14166e99a;
        if (iStack_e4 != 0) {
          uStack_d8 = &UNK_1433226da;
          goto LAB_14166eff7;
        }
        uVar5 = *(ulonglong *)(pbVar7 + 0x28);
        if (*(ulonglong *)(pbVar7 + 0x20) <= uVar5) goto LAB_14166ee65;
        lVar13 = *(longlong *)pbVar1;
        while( true ) {
          uVar5 = uVar5 + 1;
          pbVar9 = (byte *)(ulonglong)*(byte *)(lVar13 + -1 + uVar5);
          if ((byte *)0x3a < pbVar9) goto LAB_14166ef76;
          if ((0x100002600U >> ((ulonglong)pbVar9 & 0x3f) & 1) == 0) break;
          *(ulonglong *)(pbVar7 + 0x28) = uVar5;
          if (uVar5 == *(ulonglong *)(pbVar7 + 0x20)) {
            pbVar9 = (byte *)0x1;
            goto LAB_14166ee65;
          }
        }
        if (pbVar9 != (byte *)0x3a) goto LAB_14166ef76;
        *(ulonglong *)(pbVar7 + 0x28) = uVar5;
        iVar10 = (int)&uStack_d8;
        pcVar16 = (code *)pdb_1416801b0();
        uVar14 = (undefined4)param_4;
        uVar4 = SUB84(pbVar7,0);
        pcVar11 = (code *)uStack_d0;
        if ((char)uStack_d8 == '\0') {
          uStack_f8 = uStack_d8._4_4_;
          pbStack_120 = uStack_d0;
          uStack_e0 = (uint)CONCAT71((int7)((ulonglong)uStack_d0 >> 8),1);
          iStack_e4 = 1;
          goto LAB_14166e7f0;
        }
      }
      goto LAB_14166e6e9;
    }
LAB_14166e99a:
    uVar5 = *(ulonglong *)(pbVar7 + 0x28);
    if (*(ulonglong *)(pbVar7 + 0x20) <= uVar5) goto LAB_14166ee65;
    lVar13 = *(longlong *)pbVar1;
    while( true ) {
      uVar5 = uVar5 + 1;
      pbVar9 = (byte *)(ulonglong)*(byte *)(lVar13 + -1 + uVar5);
      if ((byte *)0x3a < pbVar9) goto LAB_14166ef76;
      if ((0x100002600U >> ((ulonglong)pbVar9 & 0x3f) & 1) == 0) break;
      *(ulonglong *)(pbVar7 + 0x28) = uVar5;
      if (uVar5 == *(ulonglong *)(pbVar7 + 0x20)) {
        pbVar9 = (byte *)0x1;
        goto LAB_14166ee65;
      }
    }
    if (pbVar9 != (byte *)0x3a) goto LAB_14166ef76;
    *(ulonglong *)(pbVar7 + 0x28) = uVar5;
    pcVar16 = (code *)pdb_14164c7b0();
    uVar14 = (undefined4)param_4;
    uStack_7c = (undefined4)lVar13;
    iVar10 = (int)pbVar7;
    if (pcVar16 != (code *)0x0) goto LAB_14166ebb7;
LAB_14166e7f0:
    uVar4 = SUB84(&pbStack_118,0);
    iVar10 = unaff_R15D;
    pcVar16 = (code *)pdb_140407a40();
    uVar14 = (undefined4)param_4;
    pcVar11 = pcStack_90;
    if ((byte)uStack_98 != 0) goto LAB_14166e6e9;
    goto LAB_14166e806;
  }
  if ((uStack_f0 & 1) == 0) {
    uStack_d8 = &UNK_1433226b0;
LAB_14166eeee:
    uStack_d0 = (byte *)0xe;
  }
  else {
    if ((uStack_ec & 1) != 0) {
      iVar17 = 0;
      iVar10 = iStack_100;
      pcVar16 = (code *)pbStack_130;
      if ((uStack_e8 & 1) == 0) {
        iVar10 = iVar17;
        pcVar16 = (code *)(byte *)0x0;
      }
      uVar15 = (undefined4)CONCAT71((int7)((ulonglong)in_R11 >> 8),1);
      uStack_7c = uStack_fc;
      uStack_70 = uStack_f8;
      unaff_R15D = iStack_104;
      if ((uStack_e0 & 1) == 0) {
        uStack_d8 = &UNK_1433226da;
        pbVar9 = pbStack_128;
        in_R10 = pbStack_120;
        uVar14 = uStack_f8;
        goto LAB_14166eeee;
      }
      goto LAB_14166ebc3;
    }
    uStack_d8 = &UNK_1433226cd;
    uStack_d0 = (byte *)0xd;
  }
  iVar10 = 0x43044fe5;
LAB_14166ef29:
  uStack_98 = &uStack_d8;
  pcStack_90 = pdb_1402ed400;
  uVar4 = SUB84(&uStack_98,0);
  pcVar16 = (code *)pdb_142d872f0();
  pcVar11 = pcVar16;
LAB_14166e6e9:
  iVar17 = 1;
  uVar15 = 0;
  unaff_RBX = (byte *)pcVar11;
  pbStack_128 = pbVar9;
  pbStack_120 = in_R10;
  uStack_7c = uVar4;
  uStack_70 = uVar14;
LAB_14166ebc3:
  uStack_50 = CONCAT44(uStack_50._4_4_,uVar15);
  param_2[0x48] = param_2[0x48] + 1;
  uStack_98 = (undefined8 *)CONCAT44(unaff_R15D,iVar17);
  uStack_84 = SUB84(pcVar16,0);
  uStack_80 = (undefined4)((ulonglong)pcVar16 >> 0x20);
  uStack_6c = SUB84(pbStack_120,0);
  uStack_68 = (undefined4)((ulonglong)pbStack_120 >> 0x20);
  pcStack_90 = (code *)unaff_RBX;
  iStack_88 = iVar10;
  uStack_78 = pbStack_128;
  pbVar7 = (byte *)pdb_140404da0(param_2);
  pbStack_b8 = (byte *)CONCAT44(pbStack_b8._4_4_,uStack_68);
  iStack_c8 = (int)uStack_78;
  uStack_c4 = uStack_78._4_4_;
  uStack_c0 = uStack_70;
  uStack_bc = uStack_6c;
  uStack_d8 = (byte *)CONCAT44(uStack_84,iStack_88);
  uStack_d0 = (byte *)CONCAT44(uStack_7c,uStack_80);
  if (iVar17 == 0) {
    pbVar9 = pbVar7;
    if (pbVar7 == (byte *)0x0) {
      uStack_138 = uStack_68;
      pbStack_148 = uStack_78;
      uStack_140 = CONCAT44(uStack_6c,uStack_70);
      puStack_158 = uStack_d8;
      pbStack_150 = uStack_d0;
      uStack_d8._4_4_ = unaff_R15D;
LAB_14166edc8:
      param_1[0xc] = uStack_138;
      *(byte **)(param_1 + 8) = pbStack_148;
      *(undefined8 *)(param_1 + 10) = uStack_140;
      *(undefined **)(param_1 + 4) = puStack_158;
      *(byte **)(param_1 + 6) = pbStack_150;
      param_1[1] = uStack_d8._4_4_;
      uVar4 = 0;
      goto LAB_14166ede4;
    }
  }
  else {
    pbVar9 = unaff_RBX;
    if (pbVar7 != (byte *)0x0) {
      pbStack_a0 = pbVar7;
      if (*(longlong *)pbVar7 == 1) {
        pdb_1404b38e0(pbVar7 + 8);
      }
      else if ((*(longlong *)pbVar7 == 0) && (*(ulonglong *)(pbVar7 + 0x10) != 0)) {
        pub_1406abac0(*(byte **)(pbVar7 + 8),*(ulonglong *)(pbVar7 + 0x10),1);
      }
      pub_1406abac0(pbStack_a0,0x28,8);
    }
  }
LAB_14166eecf:
  unaff_RBX = (byte *)pdb_142d86ed0(pbVar9,param_2);
  uVar4 = 1;
LAB_14166ede4:
  *(byte **)(param_1 + 2) = unaff_RBX;
  *param_1 = uVar4;
  return param_1;
}

