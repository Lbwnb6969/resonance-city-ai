// VA 0x140422cd0, PDB extent 1677 bytes
// serde_json::de::impl$7::deserialize_struct<serde_json::read::SliceRead,country_core::resources::image_formation::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_struct<serde_json::read::SliceRead,country_core::resources::image_formation::_::impl$0::deserialize::__Visitor>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 1677 */

byte * pdb_140422cd0(byte *param_1,longlong param_2)

{
  char *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  byte *pbVar10;
  code *pcVar11;
  undefined1 uVar12;
  undefined *puVar13;
  byte unaff_BL;
  byte unaff_SIL;
  ulonglong uVar14;
  char cVar15;
  longlong lStack_a0;
  undefined1 uStack_98;
  byte *pbStack_90;
  undefined1 uStack_81;
  byte *pbStack_80;
  undefined8 uStack_78;
  byte *pbStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  byte *pbStack_58;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar7 = *(ulonglong *)(param_2 + 0x28);
  if (uVar7 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar7 = uVar7 + 1;
      bVar6 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar7);
      if ((0x20 < (ulonglong)bVar6) || ((0x100002600U >> ((ulonglong)bVar6 & 0x3f) & 1) == 0)) {
        if (bVar6 == 0x5b) {
          pcVar1 = (char *)(param_2 + 0x38);
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 != '\0') {
            *(ulonglong *)(param_2 + 0x28) = uVar7;
            pbStack_70 = (byte *)CONCAT71(pbStack_70._1_7_,1);
            uVar12 = SUB81(&uStack_78,0);
            uStack_78 = (undefined8 *)param_2;
            pdb_140407e70(&uStack_68);
            uVar4 = (undefined2)uStack_68;
            if ((char)uStack_68 == '\x01') {
LAB_140422e6b:
              uStack_68._1_1_ = uVar12;
              uVar12 = 1;
              pbStack_80 = (byte *)0x0;
            }
            else {
              if (uStack_68._1_1_ == '\x01') {
                lVar8 = (longlong)uStack_78;
                uStack_68._0_2_ = uVar4;
                pdb_14040f2f0(&uStack_68);
                uVar12 = (char)lVar8;
                if ((char)uStack_68 != '\x01') {
                  unaff_BL = uStack_68._1_1_;
                  uVar12 = SUB81(&uStack_78,0);
                  pdb_140407e70(&uStack_68);
                  if ((char)uStack_68 != '\x01') {
                    if (uStack_68._1_1_ == '\x01') {
                      lVar8 = (longlong)uStack_78;
                      uVar9 = pdb_14040f2f0();
                      uVar12 = (char)lVar8;
                      if ((char)uStack_68 != '\x01') {
                        pcStack_60 = (code *)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
                        uVar12 = 0;
                        pbStack_80 = (byte *)pcStack_60;
                        goto LAB_140422e75;
                      }
                    }
                    else {
                      uVar12 = 0x20;
                      pcStack_60 = (code *)pdb_142d86de0(1,&UNK_142f56d20,&UNK_142f56898);
                    }
                  }
                }
                goto LAB_140422e6b;
              }
              uStack_68._1_1_ = 0x20;
              pbStack_80 = (byte *)0x0;
              pcStack_60 = (code *)pdb_142d86de0(0,&UNK_142f56d20,&UNK_142f56898);
              uVar12 = 1;
            }
LAB_140422e75:
            lVar8 = (longlong)uStack_78;
            *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
            uStack_78._3_5_ = SUB85(lVar8,3);
            uStack_78._0_3_ = CONCAT12(uStack_68._1_1_,CONCAT11(unaff_BL,uVar12));
            pbStack_70 = (byte *)pcStack_60;
            pbStack_58 = (byte *)pdb_140404e50(param_2);
            pcVar11 = (code *)pbStack_70;
            uStack_68 = uStack_78;
            pcStack_60 = (code *)pbStack_70;
            if (((ulonglong)uStack_78 & 1) != 0) {
              if (pbStack_58 != (byte *)0x0) {
                pdb_1404b4b10(&pbStack_58);
              }
              goto LAB_140423175;
            }
            pcVar11 = (code *)pbStack_58;
            if (pbStack_58 != (byte *)0x0) goto LAB_140423175;
            uStack_68._1_1_ = (byte)((ulonglong)uStack_78 >> 8);
            uStack_68._2_1_ = (byte)((ulonglong)uStack_78 >> 0x10);
            pbStack_80 = param_1;
            unaff_BL = uStack_68._1_1_;
            unaff_SIL = uStack_68._2_1_;
            goto LAB_140422eb5;
          }
        }
        else {
          if (bVar6 != 0x7b) {
            pcVar11 = (code *)pdb_142d85290(param_2,&uStack_81,&UNK_142f57570);
            goto LAB_140423175;
          }
          pcVar1 = (char *)(param_2 + 0x38);
          *pcVar1 = *pcVar1 + -1;
          if (*pcVar1 != '\0') {
            *(ulonglong *)(param_2 + 0x28) = uVar7;
            uStack_98 = 1;
            lStack_a0 = param_2;
            pbStack_80 = param_1;
            uVar9 = pdb_140407a40(&uStack_68,&lStack_a0);
            pcVar11 = pcStack_60;
            if ((char)uStack_68 != '\0') goto LAB_140422da1;
            unaff_BL = 2;
            unaff_SIL = 2;
            goto LAB_140422f17;
          }
        }
        uStack_68 = (undefined8 *)0x18;
        goto LAB_140422d48;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar7;
    } while (uVar7 != *(ulonglong *)(param_2 + 0x20));
  }
  uStack_68 = (undefined8 *)0x5;
LAB_140422d48:
  lVar8 = pdb_142d84ef0(param_2,&uStack_68);
  pbStack_80 = param_1;
  goto LAB_140423180;
LAB_140422f17:
  do {
    lVar8 = lStack_a0;
    if (uStack_68._1_1_ == '\0') {
      if (unaff_BL == 2) {
        uStack_78 = (undefined8 *)&UNK_142f56ce0;
      }
      else {
        if (unaff_SIL != 2) {
          pcVar11 = (code *)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
          uStack_4c = SUB84(pcVar11,0);
          cVar15 = '\0';
          goto LAB_140422dab;
        }
        uStack_78 = (undefined8 *)&UNK_142f56ced;
      }
      puVar13 = &UNK_142f756ce;
LAB_1404231da:
      uStack_68 = &uStack_78;
      pcStack_60 = pdb_1402ed400;
      pbStack_70 = (byte *)0xd;
      pcVar11 = (code *)pdb_142d872f0(puVar13,&uStack_68);
      break;
    }
    plVar2 = (longlong *)(lStack_a0 + 0x18);
    *(longlong *)(lStack_a0 + 0x28) = *(longlong *)(lStack_a0 + 0x28) + 1;
    *(undefined8 *)(lStack_a0 + 0x10) = 0;
    pdb_140de3740(&uStack_68,plVar2,lStack_a0);
    pcVar11 = pcStack_60;
    if ((int)uStack_68 == 2) break;
    if (pbStack_58 == (byte *)0xd) {
      if (*(longlong *)(pcStack_60 + 5) == CONCAT53(_UNK_142f64d20,_DAT_142f64d1d) &&
          *(longlong *)pcStack_60 == CONCAT35(_DAT_142f64d1d,_DAT_142f64d18)) {
        if (unaff_BL != 2) {
          uStack_78 = (undefined8 *)&UNK_142f56ce0;
LAB_140423247:
          puVar13 = &UNK_142f75701;
          goto LAB_1404231da;
        }
        uVar7 = *(ulonglong *)(lVar8 + 0x28);
        if (uVar7 < *(ulonglong *)(lVar8 + 0x20)) {
          lVar3 = *plVar2;
          while( true ) {
            uVar7 = uVar7 + 1;
            uVar14 = (ulonglong)*(byte *)(lVar3 + -1 + uVar7);
            if (0x3a < uVar14) goto LAB_140423212;
            if ((0x100002600U >> (uVar14 & 0x3f) & 1) == 0) break;
            *(ulonglong *)(lVar8 + 0x28) = uVar7;
            if (uVar7 == *(ulonglong *)(lVar8 + 0x20)) goto LAB_14042318b;
          }
          if (uVar14 == 0x3a) {
            *(ulonglong *)(lVar8 + 0x28) = uVar7;
            pdb_14040f2f0(&uStack_78,lVar8);
            pcVar11 = (code *)pbStack_70;
            if ((char)uStack_78 == '\0') {
              unaff_BL = uStack_78._1_1_;
              goto LAB_140422f01;
            }
            break;
          }
LAB_140423212:
          uStack_68 = (undefined8 *)0x6;
        }
        else {
LAB_14042318b:
          uStack_68 = (undefined8 *)0x3;
        }
        pcVar11 = (code *)pdb_142d84ef0(lVar8,&uStack_68);
        break;
      }
      if (*(longlong *)(pcStack_60 + 5) != CONCAT53(_UNK_142f64d2d,_DAT_142f64d2a) ||
          *(longlong *)pcStack_60 != CONCAT35(_DAT_142f64d2a,_DAT_142f64d25)) goto LAB_140422ef0;
      if (unaff_SIL != 2) {
        uStack_78 = (undefined8 *)&UNK_142f56ced;
        goto LAB_140423247;
      }
      uVar7 = *(ulonglong *)(lVar8 + 0x28);
      if (*(ulonglong *)(lVar8 + 0x20) <= uVar7) goto LAB_14042318b;
      lVar3 = *plVar2;
      while( true ) {
        uVar7 = uVar7 + 1;
        uVar14 = (ulonglong)*(byte *)(lVar3 + -1 + uVar7);
        if (0x3a < uVar14) goto LAB_140423212;
        if ((0x100002600U >> (uVar14 & 0x3f) & 1) == 0) break;
        *(ulonglong *)(lVar8 + 0x28) = uVar7;
        if (uVar7 == *(ulonglong *)(lVar8 + 0x20)) goto LAB_14042318b;
      }
      if (uVar14 != 0x3a) goto LAB_140423212;
      *(ulonglong *)(lVar8 + 0x28) = uVar7;
      pdb_14040f2f0(&uStack_78,lVar8);
      pcVar11 = (code *)pbStack_70;
      if ((char)uStack_78 != '\0') break;
      unaff_SIL = uStack_78._1_1_;
    }
    else {
LAB_140422ef0:
      pcVar11 = (code *)pdb_1404031f0(lVar8);
      if (pcVar11 != (code *)0x0) break;
    }
LAB_140422f01:
    uVar9 = pdb_140407a40(&uStack_68,&lStack_a0);
    pcVar11 = pcStack_60;
  } while ((char)uStack_68 == '\0');
LAB_140422da1:
  cVar15 = '\x01';
  uStack_4c = 0;
LAB_140422dab:
  puVar5 = uStack_68;
  *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
  uStack_68._0_2_ = CONCAT11(unaff_BL,cVar15);
  uStack_68._3_5_ = SUB85(puVar5,3);
  uStack_68._0_3_ = CONCAT12(unaff_SIL,(undefined2)uStack_68);
  pcStack_60 = pcVar11;
  pbVar10 = (byte *)pdb_140404da0(param_2);
  param_1 = pbStack_80;
  if (cVar15 == '\0') {
    pcVar11 = (code *)pbVar10;
    if (pbVar10 == (byte *)0x0) {
LAB_140422eb5:
      pbStack_80[1] = unaff_BL;
      pbStack_80[2] = unaff_SIL;
      bVar6 = 0;
      goto LAB_140422ebf;
    }
  }
  else if (pbVar10 != (byte *)0x0) {
    pbStack_90 = pbVar10;
    if (*(longlong *)pbVar10 == 1) {
      pdb_1404b38e0(pbVar10 + 8);
    }
    else if ((*(longlong *)pbVar10 == 0) && (*(ulonglong *)(pbVar10 + 0x10) != 0)) {
      pub_1406abac0(*(byte **)(pbVar10 + 8),*(ulonglong *)(pbVar10 + 0x10),1);
    }
    pub_1406abac0(pbStack_90,0x28,8);
  }
LAB_140423175:
  lVar8 = pdb_142d86ed0(pcVar11,param_2);
  pbStack_80 = param_1;
LAB_140423180:
  *(longlong *)(pbStack_80 + 8) = lVar8;
  bVar6 = 1;
LAB_140422ebf:
  *pbStack_80 = bVar6;
  return pbStack_80;
}

