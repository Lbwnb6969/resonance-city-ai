// VA 0x141661bb0, PDB extent 2804 bytes
// serde_json::de::impl$7::deserialize_struct<serde_json::read::StrRead,country_core::asset_libraries::color_library::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_struct<serde_json::read::StrRead,country_core::asset_libraries::color_library::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 2804 */

undefined8 * pdb_141661bb0(undefined8 *param_1,code *param_2)

{
  code *pcVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  longlong lVar6;
  code *pcVar7;
  ulonglong uVar8;
  undefined4 unaff_R12D;
  code *unaff_R13;
  longlong unaff_R15;
  code *pcStack_d8;
  undefined1 uStack_d0;
  longlong lStack_c8;
  code *pcStack_c0;
  undefined4 uStack_b4;
  code *pcStack_b0;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  code *pcStack_98;
  longlong lStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  longlong lStack_70;
  code *pcStack_68;
  code *pcStack_60;
  code *pcStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar3 = *(ulonglong *)(param_2 + 0x28);
  if (uVar3 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar3 = uVar3 + 1;
      bVar2 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar3);
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
        if (bVar2 == 0x5b) {
          pcVar7 = param_2 + 0x48;
          *pcVar7 = (code)((char)*pcVar7 + -1);
          if (*pcVar7 != (code)0x0) {
            *(ulonglong *)(param_2 + 0x28) = uVar3;
            pcStack_98 = (code *)CONCAT71(pcStack_98._1_7_,1);
            uStack_a0 = param_2;
            pdb_140407e70(&uStack_80,&uStack_a0);
            if ((char)uStack_80 == '\x01') {
              pcStack_60 = pcStack_78;
LAB_141661f95:
              pcStack_68 = (code *)0x8000000000000000;
            }
            else {
              if (uStack_80._1_1_ != '\x01') {
                pcStack_60 = (code *)pdb_142d8f0e0(0,&UNK_143323108,&UNK_143322608);
                goto LAB_141661f95;
              }
              pdb_14165c290(&uStack_80,uStack_a0);
              pcStack_60 = pcStack_78;
              if (SBORROW8(0,(longlong)uStack_80)) goto LAB_141661f95;
              pcStack_68 = uStack_80;
              pdb_140407e70(&uStack_80,&uStack_a0);
              pcVar7 = pcStack_78;
              unaff_R15 = lStack_70;
              if ((char)uStack_80 == '\x01') {
joined_r0x00014166219d:
                if (pcStack_68 != (code *)0x0) {
                  pub_1406abac0((byte *)pcStack_60,(ulonglong)pcStack_68,1);
                }
                pcStack_68 = (code *)0x8000000000000000;
                pcStack_60 = pcVar7;
              }
              else {
                if (uStack_80._1_1_ != '\x01') {
                  pcVar7 = (code *)pdb_142d8f0e0(1,&UNK_143323108,&UNK_143322608);
                  goto joined_r0x00014166219d;
                }
                pdb_14165bd70(&uStack_80,uStack_a0);
                pcVar7 = pcStack_78;
                if ((int)uStack_80 == 1) goto joined_r0x00014166219d;
                unaff_R13 = pcStack_78;
                unaff_R12D = uStack_80._4_4_;
              }
            }
            param_2[0x48] = (code)((char)param_2[0x48] + '\x01');
            pcVar5 = (code *)pdb_140404e50(param_2);
            pcVar7 = pcVar5;
            if (!SBORROW8(0,(longlong)pcStack_68)) goto joined_r0x000141662019;
            pcVar7 = pcStack_60;
            if (pcVar5 == (code *)0x0) goto LAB_1416622d5;
            lVar6 = *(longlong *)pcVar5;
            pcStack_58 = pcVar5;
            if (lVar6 != 1) goto LAB_1416621f2;
            pdb_1404b38e0(pcVar5 + 8);
            goto LAB_1416622bd;
          }
        }
        else {
          if (bVar2 != 0x7b) {
            pcVar7 = (code *)pdb_142de8b10(param_2,&uStack_a1,&UNK_143323be0);
            goto LAB_1416622d5;
          }
          pcVar7 = param_2 + 0x48;
          *pcVar7 = (code)((char)*pcVar7 + -1);
          if (*pcVar7 != (code)0x0) {
            *(ulonglong *)(param_2 + 0x28) = uVar3;
            uStack_d0 = 1;
            pcStack_68 = (code *)((ulonglong)pcStack_68 & 0xffffffff00000000);
            pcStack_58 = (code *)0x8000000000000000;
            pcStack_60 = (code *)((ulonglong)pcStack_60 & 0xffffffff00000000);
            pcStack_d8 = param_2;
            goto LAB_141661c86;
          }
        }
        uStack_80 = (code *)0x18;
        goto LAB_141661c28;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar3;
    } while (uVar3 != *(ulonglong *)(param_2 + 0x20));
  }
  uStack_80 = (code *)0x5;
LAB_141661c28:
  uVar4 = pdb_142d84ef0(param_2,&uStack_80);
  goto LAB_1416622dd;
LAB_141661c86:
  do {
    uStack_49 = 1;
    pcStack_88 = pcStack_58;
    pdb_140407a40(&uStack_80,&pcStack_d8);
    pcVar7 = pcStack_d8;
    pcVar5 = pcStack_78;
    if ((char)uStack_80 == '\x01') break;
    if (uStack_80._1_1_ == '\0') {
      if (SBORROW8(0,(longlong)pcStack_58)) {
        uStack_a0 = (code *)&UNK_1433230d8;
        pcStack_98 = (code *)0x4;
        uStack_80 = (code *)&uStack_a0;
        pcStack_78 = pdb_1402ed400;
        pcStack_88 = (code *)0x8000000000000000;
        uStack_49 = 1;
        pcStack_60 = (code *)pdb_142d872f0(&UNK_143044fe5,&uStack_80);
        pcStack_68 = (code *)0x8000000000000000;
        goto LAB_14166207f;
      }
      if (((ulonglong)pcStack_68 & 1) == 0) {
        uStack_a0 = (code *)&UNK_1433230dc;
        pcStack_98 = (code *)0x5;
        uStack_80 = (code *)&uStack_a0;
        pcStack_78 = pdb_1402ed400;
        pcStack_60 = (code *)pdb_142d872f0(&UNK_143044fe5,&uStack_80);
        pcVar7 = pcStack_58;
        goto joined_r0x000141662287;
      }
      pcStack_60 = pcStack_b0;
      pcStack_68 = pcStack_58;
      goto LAB_14166207f;
    }
    *(longlong *)(pcStack_d8 + 0x28) = *(longlong *)(pcStack_d8 + 0x28) + 1;
    pcVar1 = pcStack_d8 + 0x18;
    *(undefined8 *)(pcStack_d8 + 0x10) = 0;
    pcStack_88 = pcStack_58;
    uStack_49 = 1;
    pdb_140de3310(&uStack_80,pcVar1,pcStack_d8);
    pcVar5 = pcStack_78;
    if ((int)uStack_80 == 2) break;
    if (lStack_70 == 5) {
      if (pcStack_78[4] == DAT_1433218b5 && *(int *)pcStack_78 == _DAT_1433218b1) {
        if ((int)pcStack_60 != 0) {
          uStack_a0 = (code *)&UNK_1433230dc;
          pcStack_98 = (code *)0x5;
          uStack_80 = (code *)&uStack_a0;
          pcStack_78 = pdb_1402ed400;
          pcStack_88 = pcStack_58;
          uStack_49 = 1;
          pcVar5 = (code *)pdb_142d872f0(&UNK_143045061,&uStack_80);
          break;
        }
        uVar3 = *(ulonglong *)(pcVar7 + 0x28);
        if (*(ulonglong *)(pcVar7 + 0x20) <= uVar3) {
LAB_141662334:
          uStack_80 = (code *)0x3;
          pcStack_88 = pcStack_58;
          uStack_49 = 1;
          pcVar5 = (code *)pdb_142d84ef0(pcVar7,&uStack_80);
          break;
        }
        lVar6 = *(longlong *)pcVar1;
        while( true ) {
          uVar3 = uVar3 + 1;
          uVar8 = (ulonglong)*(byte *)(lVar6 + -1 + uVar3);
          if (0x3a < uVar8) goto LAB_141662431;
          if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) break;
          *(ulonglong *)(pcVar7 + 0x28) = uVar3;
          if (uVar3 == *(ulonglong *)(pcVar7 + 0x20)) goto LAB_141662334;
        }
        if (uVar8 != 0x3a) {
LAB_141662431:
          uStack_80 = (code *)0x6;
          pcStack_88 = pcStack_58;
          uStack_49 = 1;
          pcVar5 = (code *)pdb_142d84ef0(pcVar7,&uStack_80);
          break;
        }
        *(ulonglong *)(pcVar7 + 0x28) = uVar3;
        pcStack_88 = pcStack_58;
        uStack_49 = 1;
        pdb_14165bd70(&uStack_a0,pcVar7);
        pcVar5 = pcStack_98;
        if (uStack_a0._0_1_ != (code)0x0) break;
        uStack_b4 = uStack_a0._4_4_;
        pcStack_c0 = pcStack_98;
        pcStack_68 = (code *)CONCAT44(pcStack_68._4_4_,
                                      (int)CONCAT71((int7)((ulonglong)pcStack_98 >> 8),1));
        pcStack_60 = (code *)CONCAT44(pcStack_60._4_4_,1);
        goto LAB_141661c86;
      }
    }
    else if ((lStack_70 == 4) && (*(int *)pcStack_78 == _DAT_1433218ad)) {
      if (!SBORROW8(0,(longlong)pcStack_58)) {
        uStack_a0 = (code *)&UNK_1433230d8;
        pcStack_98 = (code *)0x4;
        uStack_80 = (code *)&uStack_a0;
        pcStack_78 = pdb_1402ed400;
        pcStack_88 = pcStack_58;
        uStack_49 = 1;
        pcVar5 = (code *)pdb_142d872f0(&UNK_143045061,&uStack_80);
        break;
      }
      uVar3 = *(ulonglong *)(pcVar7 + 0x28);
      if (uVar3 < *(ulonglong *)(pcVar7 + 0x20)) {
        lVar6 = *(longlong *)pcVar1;
        while( true ) {
          uVar3 = uVar3 + 1;
          uVar8 = (ulonglong)*(byte *)(lVar6 + -1 + uVar3);
          if (0x3a < uVar8) goto LAB_141662453;
          if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) break;
          *(ulonglong *)(pcVar7 + 0x28) = uVar3;
          if (uVar3 == *(ulonglong *)(pcVar7 + 0x20)) goto LAB_1416622f3;
        }
        if (uVar8 == 0x3a) {
          *(ulonglong *)(pcVar7 + 0x28) = uVar3;
          pcStack_88 = (code *)0x8000000000000000;
          uStack_49 = 1;
          pdb_14165c290(&uStack_a0,pcVar7);
          pcStack_b0 = pcStack_98;
          pcVar7 = pcStack_98;
          if (!SBORROW8(0,(longlong)uStack_a0)) {
            lStack_c8 = lStack_90;
            pcStack_58 = uStack_a0;
            goto LAB_141661c86;
          }
        }
        else {
LAB_141662453:
          uStack_80 = (code *)0x6;
          pcStack_88 = (code *)0x8000000000000000;
          uStack_49 = 1;
          pcVar7 = (code *)pdb_142d84ef0(pcVar7,&uStack_80);
        }
      }
      else {
LAB_1416622f3:
        uStack_80 = (code *)0x3;
        pcStack_88 = (code *)0x8000000000000000;
        uStack_49 = 1;
        pcVar7 = (code *)pdb_142d84ef0(pcVar7,&uStack_80);
      }
      pcStack_68 = (code *)0x8000000000000000;
      pcStack_60 = pcVar7;
      goto LAB_14166207f;
    }
    uVar3 = *(ulonglong *)(pcVar7 + 0x28);
    if (*(ulonglong *)(pcVar7 + 0x20) <= uVar3) {
LAB_141661f48:
      uStack_80 = (code *)0x3;
      pcStack_88 = pcStack_58;
      uStack_49 = 1;
      pcVar5 = (code *)pdb_142d84ef0(pcVar7,&uStack_80);
      break;
    }
    lVar6 = *(longlong *)pcVar1;
    while( true ) {
      uVar3 = uVar3 + 1;
      uVar8 = (ulonglong)*(byte *)(lVar6 + -1 + uVar3);
      if (0x3a < uVar8) goto LAB_141662356;
      if ((0x100002600U >> (uVar8 & 0x3f) & 1) == 0) break;
      *(ulonglong *)(pcVar7 + 0x28) = uVar3;
      if (uVar3 == *(ulonglong *)(pcVar7 + 0x20)) goto LAB_141661f48;
    }
    if (uVar8 != 0x3a) {
LAB_141662356:
      uStack_80 = (code *)0x6;
      pcStack_88 = pcStack_58;
      uStack_49 = 1;
      pcVar5 = (code *)pdb_142d84ef0(pcVar7,&uStack_80);
      break;
    }
    *(ulonglong *)(pcVar7 + 0x28) = uVar3;
    pcStack_88 = pcStack_58;
    uStack_49 = 1;
    pcVar5 = (code *)pdb_14164c7b0(pcVar7);
  } while (pcVar5 == (code *)0x0);
  pcVar7 = (code *)((ulonglong)pcStack_58 & 0x7fffffffffffffff);
  pcStack_60 = pcVar5;
joined_r0x000141662287:
  pcStack_68 = (code *)0x8000000000000000;
  if (pcVar7 != (code *)0x0) {
    pcStack_68 = (code *)0x8000000000000000;
    pub_1406abac0((byte *)pcStack_b0,(ulonglong)pcStack_58,1);
  }
LAB_14166207f:
  param_2[0x48] = (code)((char)param_2[0x48] + '\x01');
  pcVar5 = (code *)pdb_140404da0(param_2);
  pcVar7 = pcVar5;
  unaff_R13 = pcStack_c0;
  unaff_R15 = lStack_c8;
  unaff_R12D = uStack_b4;
  if (SBORROW8(0,(longlong)pcStack_68)) {
    pcVar7 = pcStack_60;
    if (pcVar5 != (code *)0x0) {
      lVar6 = *(longlong *)pcVar5;
      pcStack_58 = pcVar5;
      if (lVar6 == 1) {
        pdb_1404b38e0(pcVar5 + 8);
      }
      else {
LAB_1416621f2:
        if ((lVar6 == 0) && (*(ulonglong *)(pcStack_58 + 0x10) != 0)) {
          pub_1406abac0(*(byte **)(pcStack_58 + 8),*(ulonglong *)(pcStack_58 + 0x10),1);
        }
      }
LAB_1416622bd:
      pub_1406abac0((byte *)pcStack_58,0x28,8);
      pcVar7 = pcStack_60;
    }
  }
  else {
joined_r0x000141662019:
    if (pcVar7 == (code *)0x0) {
      param_1[2] = unaff_R15;
      *(undefined4 *)(param_1 + 3) = unaff_R12D;
      *(code **)((longlong)param_1 + 0x1c) = unaff_R13;
      *param_1 = pcStack_68;
      param_1[1] = pcStack_60;
      return param_1;
    }
    if (pcStack_68 != (code *)0x0) {
      pub_1406abac0((byte *)pcStack_60,(ulonglong)pcStack_68,1);
    }
  }
LAB_1416622d5:
  uVar4 = pdb_142d86ed0(pcVar7,param_2);
LAB_1416622dd:
  param_1[1] = uVar4;
  *param_1 = 0x8000000000000000;
  return param_1;
}

