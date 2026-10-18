// VA 0x141663970, PDB extent 1709 bytes
// serde_json::de::impl$7::deserialize_struct<serde_json::read::IoRead<std::io::buffered::bufreader::BufReader<std::fs::File> >,country_core::resources::history::_::impl$0::deserialize::__Visitor>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_struct<serde_json::read::IoRead<std::io::buffered::bufreader::BufReader<std::fs::File>
   >,country_core::resources::history::_::impl$0::deserialize::__Visitor>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 1709 */

undefined8 * pdb_141663970(undefined8 *param_1,undefined8 *****param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 ******ppppppuVar4;
  undefined8 ******ppppppuVar5;
  undefined8 uVar6;
  undefined8 ****ppppuVar7;
  undefined8 *puVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  undefined *puVar11;
  undefined8 ******ppppppuVar12;
  uint uVar13;
  undefined8 ****ppppuVar14;
  byte bVar15;
  undefined8 *****pppppuStack_d0;
  undefined8 ****ppppuStack_c8;
  undefined1 uStack_c0;
  longlong lStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  uint uStack_9c;
  undefined8 *puStack_98;
  undefined1 uStack_89;
  undefined8 *****pppppuStack_88;
  undefined8 *****pppppuStack_80;
  uint uStack_78;
  undefined4 uStack_74;
  undefined8 *****pppppuStack_70;
  undefined8 uStack_68;
  undefined8 *****pppppuStack_60;
  longlong lStack_58;
  undefined8 *****pppppuStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pppppuVar10 = param_2 + 3;
  puStack_98 = param_1;
  do {
    if (*(char *)(param_2 + 0xf) == '\0') {
      ppppuVar7 = param_2[8];
      if (param_2[9] == ppppuVar7) {
        pdb_141c47310(&uStack_68,param_2 + 6);
        if ((char)uStack_68 != '\0') {
          if ((char)uStack_68 == '\x02') {
            ppppuVar7 = param_2[0xc];
            ppppuVar14 = param_2[0xd];
            uStack_68 = (undefined8 ******)0x5;
            goto LAB_141663ead;
          }
          uVar6 = pdb_142db8fb0(pppppuStack_60);
          goto LAB_141663e5f;
        }
        ppppuVar7 = (undefined8 ****)((longlong)param_2[0xd] + 1);
        if (uStack_68._1_1_ == '\n') goto LAB_141663a51;
LAB_141663a20:
        param_2[0xd] = ppppuVar7;
        bVar15 = uStack_68._1_1_;
      }
      else {
        cVar1 = *(char *)((longlong)param_2[6] + (longlong)ppppuVar7);
        param_2[8] = (undefined8 ****)((longlong)ppppuVar7 + 1);
        uStack_68 = (undefined8 ******)
                    ((ulonglong)CONCAT61((int6)((ulonglong)uStack_68 >> 0x10),cVar1) << 8);
        ppppuVar7 = (undefined8 ****)((longlong)param_2[0xd] + 1);
        if (cVar1 != '\n') goto LAB_141663a20;
LAB_141663a51:
        param_2[0xe] = (undefined8 ****)((longlong)param_2[0xe] + (longlong)ppppuVar7);
        param_2[0xc] = (undefined8 ****)((longlong)param_2[0xc] + 1);
        param_2[0xd] = (undefined8 ****)0x0;
        bVar15 = 10;
      }
      *(undefined1 *)(param_2 + 0xf) = 1;
      *(byte *)((longlong)param_2 + 0x79) = bVar15;
    }
    else {
      bVar15 = *(byte *)((longlong)param_2 + 0x79);
    }
    if ((0x20 < bVar15) || ((0x100002600U >> ((ulonglong)bVar15 & 0x3f) & 1) == 0)) break;
    *(undefined1 *)(param_2 + 0xf) = 0;
    if (!SBORROW8(0,(longlong)param_2[3])) {
      ppppuVar7 = param_2[5];
      if (ppppuVar7 == param_2[3]) {
        pdb_142dc7d20(pppppuVar10);
      }
      *(byte *)((longlong)param_2[4] + (longlong)ppppuVar7) = bVar15;
      param_2[5] = (undefined8 ****)((longlong)ppppuVar7 + 1);
    }
  } while( true );
  if (bVar15 == 0x5b) {
    pppppuVar9 = param_2 + 0x10;
    *(char *)pppppuVar9 = *(char *)pppppuVar9 + -1;
    if (*(char *)pppppuVar9 != '\0') {
      *(undefined1 *)(param_2 + 0xf) = 0;
      if (!SBORROW8(0,(longlong)param_2[3])) {
        ppppuVar7 = param_2[5];
        if (ppppuVar7 == param_2[3]) {
          pdb_142dc7d20(pppppuVar10);
        }
        *(undefined1 *)((longlong)param_2[4] + (longlong)ppppuVar7) = 0x5b;
        param_2[5] = (undefined8 ****)((longlong)ppppuVar7 + 1);
      }
      pppppuStack_80 = (undefined8 *****)CONCAT71(pppppuStack_80._1_7_,1);
      pppppuStack_88 = param_2;
      pdb_141653390(&uStack_68,&pppppuStack_88);
      if ((char)uStack_68 == '\x01') goto LAB_141663bd7;
      if (uStack_68._1_1_ == '\x01') {
        pdb_141657ac0(&uStack_68,pppppuStack_88);
        if ((int)uStack_68 == 1) {
LAB_141663bd7:
          uVar13 = (uint)pppppuVar10;
          ppppppuVar5 = (undefined8 ******)pppppuStack_60;
          goto LAB_141663bdb;
        }
        uVar13 = uStack_68._4_4_;
        pppppuVar10 = (undefined8 *****)(ulonglong)uStack_68._4_4_;
        ppppppuVar5 = &pppppuStack_88;
        pdb_141653390(&uStack_68);
        if ((char)uStack_68 == '\x01') goto LAB_141663bd7;
        if (uStack_68._1_1_ != '\x01') {
          uVar6 = 1;
          goto LAB_141663e81;
        }
        uVar3 = pdb_14165b690(pppppuStack_88);
        pppppuStack_88 = (undefined8 *****)(ulonglong)(uVar3 & 1);
      }
      else {
        uVar6 = 0;
LAB_141663e81:
        uVar13 = (uint)pppppuVar10;
        ppppppuVar5 = (undefined8 ******)pdb_142d8f0e0(uVar6,&UNK_143322e48,&UNK_143322608);
LAB_141663bdb:
        pppppuStack_88 = (undefined8 ******)0x1;
      }
      *(char *)(param_2 + 0x10) = *(char *)(param_2 + 0x10) + '\x01';
      pppppuStack_80 = ppppppuVar5;
      uStack_78 = uVar13;
      pppppuStack_70 = pppppuStack_88;
      pppppuStack_50 = (undefined8 *****)pdb_14164f020(param_2);
      goto LAB_141663bfe;
    }
LAB_141663f31:
    ppppuVar7 = param_2[0xc];
    ppppuVar14 = param_2[0xd];
    uStack_68 = (undefined8 ******)0x18;
LAB_141663ead:
    uVar6 = pdb_142db9040(&uStack_68,ppppuVar7,ppppuVar14);
  }
  else {
    if (bVar15 == 0x7b) {
      pppppuVar9 = param_2 + 0x10;
      *(char *)pppppuVar9 = *(char *)pppppuVar9 + -1;
      if (*(char *)pppppuVar9 == '\0') goto LAB_141663f31;
      *(undefined1 *)(param_2 + 0xf) = 0;
      if (!SBORROW8(0,(longlong)param_2[3])) {
        ppppuVar7 = param_2[5];
        if (ppppuVar7 == param_2[3]) {
          pdb_142dc7d20(pppppuVar10);
        }
        *(undefined1 *)((longlong)param_2[4] + (longlong)ppppuVar7) = 0x7b;
        param_2[5] = (undefined8 ****)((longlong)ppppuVar7 + 1);
      }
      uStack_c0 = 1;
      puVar8 = &uStack_68;
      ppppuStack_c8 = param_2;
      pdb_1416530d0(puVar8,&ppppuStack_c8);
      ppppppuVar5 = (undefined8 ******)pppppuStack_60;
      if ((char)uStack_68 == '\0') {
        lStack_b8 = 0;
        uStack_b0 = 0;
        uStack_a8 = 0;
        pppppuStack_70 = (undefined8 *****)((ulonglong)pppppuStack_70 & 0xffffffff00000000);
        do {
          pppppuVar10 = (undefined8 *****)ppppuStack_c8;
          if (uStack_68._1_1_ == '\0') {
            ppppppuVar5 = (undefined8 ******)(ulonglong)uStack_9c;
            if ((uStack_b0 & 1) == 0) {
              pppppuStack_88 = (undefined8 *****)&UNK_143322df8;
            }
            else {
              if ((uStack_a8 & 1) != 0) {
                pppppuStack_70 =
                     (undefined8 *****)
                     CONCAT44(pppppuStack_70._4_4_,(int)CONCAT71((int7)((ulonglong)puVar8 >> 8),1));
                pppppuStack_88 = (undefined8 ******)0x0;
                goto LAB_141663b29;
              }
              pppppuStack_88 = (undefined8 *****)&UNK_143322e03;
            }
            puVar11 = &UNK_143044fe5;
LAB_141663eee:
            uStack_68 = &pppppuStack_88;
            pppppuStack_60 = (undefined8 *****)pdb_1402ed400;
            pppppuStack_80 = (undefined8 *****)0xb;
            ppppppuVar5 = (undefined8 ******)pdb_142d872f0(puVar11,&uStack_68);
            ppppppuVar12 = ppppppuVar5;
LAB_141663eff:
            pppppuStack_88 = (undefined8 ******)0x1;
            pppppuStack_70 = (undefined8 *****)((ulonglong)pppppuStack_70 & 0xffffffff00000000);
            pppppuStack_d0 = ppppppuVar12;
            goto LAB_141663b29;
          }
          pppppuVar9 = (undefined8 *****)(ppppuStack_c8 + 3);
          uVar2 = *(undefined1 *)((longlong)ppppuStack_c8 + 0x79);
          bVar15 = *(byte *)(ppppuStack_c8 + 0xf);
          *(undefined1 *)(ppppuStack_c8 + 0xf) = 0;
          if ((!SBORROW8(0,(longlong)ppppuStack_c8[3]) & bVar15) == 1) {
            ppppuVar7 = (undefined8 ****)ppppuStack_c8[5];
            if (ppppuVar7 == (undefined8 ****)ppppuStack_c8[3]) {
              pdb_142dc7d20(pppppuVar9);
            }
            *(undefined1 *)((longlong)pppppuVar10[4] + (longlong)ppppuVar7) = uVar2;
            pppppuVar10[5] = (undefined8 ****)((longlong)ppppuVar7 + 1);
          }
          pppppuVar10[2] = (undefined8 ****)0x0;
          pdb_140c83130(&uStack_68,pppppuVar9,pppppuVar10);
          ppppppuVar5 = (undefined8 ******)pppppuStack_60;
          if ((int)uStack_68 == 2) break;
          if (lStack_58 == 0xb) {
            ppppppuVar12 = (undefined8 ******)
                           (*(ulonglong *)((longlong)pppppuStack_60 + 3) ^
                            CONCAT35(_UNK_14335ca81,_DAT_14335ca7c) |
                           (ulonglong)*pppppuStack_60 ^ CONCAT53(_DAT_14335ca7c,_DAT_14335ca79));
            if (ppppppuVar12 == (undefined8 ******)0x0) {
              if ((int)pppppuStack_70 != 0) {
                pppppuStack_88 = (undefined8 *****)&UNK_143322df8;
LAB_141663f6e:
                puVar11 = &UNK_143045061;
                goto LAB_141663eee;
              }
              ppppppuVar5 = (undefined8 ******)pdb_14164ecc0(pppppuVar10);
              ppppppuVar12 = ppppppuVar5;
              if (ppppppuVar5 == (undefined8 ******)0x0) {
                ppppppuVar5 = (undefined8 ******)pdb_141657ac0(&uStack_68,pppppuVar10);
                ppppppuVar12 = (undefined8 ******)pppppuStack_60;
                if ((char)uStack_68 == '\0') {
                  uStack_9c = uStack_68._4_4_;
                  uStack_b0 = CONCAT71((uint7)(uint3)((ulonglong)uStack_68 >> 0x28),1);
                  pppppuStack_70 = (undefined8 *****)CONCAT44(pppppuStack_70._4_4_,1);
                  goto LAB_141663c91;
                }
              }
              goto LAB_141663eff;
            }
            if (*(longlong *)((longlong)pppppuStack_60 + 3) !=
                CONCAT35(_UNK_14335ca8c,_DAT_14335ca87) ||
                (undefined8 *****)*pppppuStack_60 !=
                (undefined8 *****)CONCAT53(_DAT_14335ca87,_DAT_14335ca84)) goto LAB_141663c80;
            if (lStack_b8 != 0) {
              pppppuStack_88 = (undefined8 *****)&UNK_143322e03;
              goto LAB_141663f6e;
            }
            pppppuVar9 = pppppuVar10;
            ppppppuVar4 = (undefined8 ******)pdb_14164ecc0(pppppuVar10);
            if (ppppppuVar4 == (undefined8 ******)0x0) {
              ppppppuVar5 = (undefined8 ******)pdb_14165b690(pppppuVar10);
            }
            else {
              ppppppuVar5 = (undefined8 ******)0x1;
              pppppuVar10 = pppppuVar9;
              ppppppuVar12 = ppppppuVar4;
            }
            uStack_a8 = CONCAT71((int7)((ulonglong)pppppuVar10 >> 8),1);
            lStack_b8 = 1;
            pppppuStack_d0 = ppppppuVar12;
            if (((ulonglong)ppppppuVar5 & 1) != 0) goto LAB_141663eff;
          }
          else {
LAB_141663c80:
            ppppppuVar5 = (undefined8 ******)pdb_14164af60(pppppuVar10);
            if (ppppppuVar5 != (undefined8 ******)0x0) break;
          }
LAB_141663c91:
          puVar8 = &uStack_68;
          pdb_1416530d0(&uStack_68,&ppppuStack_c8);
          ppppppuVar5 = (undefined8 ******)pppppuStack_60;
        } while ((char)uStack_68 == '\0');
      }
      pppppuStack_88 = (undefined8 ******)0x1;
      pppppuStack_70 = (undefined8 *****)((ulonglong)pppppuStack_70 & 0xffffffff00000000);
      pppppuStack_d0 = ppppppuVar5;
LAB_141663b29:
      *(char *)(param_2 + 0x10) = *(char *)(param_2 + 0x10) + '\x01';
      uStack_78 = (uint)ppppppuVar5;
      pppppuStack_80 = pppppuStack_d0;
      pppppuStack_50 = (undefined8 *****)pdb_14164ee60(param_2);
LAB_141663bfe:
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      lStack_58 = CONCAT44(uStack_74,uStack_78);
      uStack_68 = (undefined8 ******)pppppuStack_88;
      pppppuStack_60 = pppppuStack_80;
      if (((ulonglong)pppppuStack_88 & 1) == 0) {
        ppppppuVar5 = (undefined8 ******)pppppuStack_50;
        if ((undefined8 ******)pppppuStack_50 == (undefined8 ******)0x0) {
          puStack_98[1] = pppppuStack_80;
          *(uint *)(puStack_98 + 2) = uStack_78;
          uVar6 = 0;
          goto LAB_141663c39;
        }
      }
      else if ((undefined8 ******)pppppuStack_50 != (undefined8 ******)0x0) {
        pdb_1404b4b10(&pppppuStack_50);
      }
    }
    else {
      ppppppuVar5 = (undefined8 ******)pdb_142de8770(param_2,&uStack_89,&UNK_143323c60);
    }
    uVar6 = pdb_142d8f1d0(ppppppuVar5,param_2);
  }
LAB_141663e5f:
  puStack_98[1] = uVar6;
  uVar6 = 1;
LAB_141663c39:
  *puStack_98 = uVar6;
  return puStack_98;
}

