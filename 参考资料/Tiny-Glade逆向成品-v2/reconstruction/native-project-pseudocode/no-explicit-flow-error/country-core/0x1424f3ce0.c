// VA 0x1424f3ce0, PDB extent 1051 bytes
// ron::ser::Serializer::write_identifier<ref_mut$<alloc::string::String> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   ron::ser::Serializer::write_identifier<ref_mut$<alloc::string::String> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 1051 */

void pdb_1424f3ce0(undefined8 *param_1,longlong param_2,byte *param_3,ulonglong param_4)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  char cStack_88;
  undefined7 uStack_87;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pdb_140127ae0(&cStack_88,param_3,param_4);
  if (cStack_88 != '2') {
    param_1[8] = uStack_48;
    param_1[6] = uStack_58;
    param_1[7] = uStack_50;
    param_1[4] = uStack_68;
    param_1[5] = uStack_60;
    param_1[2] = uStack_78;
    param_1[3] = uStack_70;
    *param_1 = CONCAT71(uStack_87,cStack_88);
    param_1[1] = uStack_80;
    return;
  }
  if (param_4 != 0) {
    bVar1 = *param_3;
    if ((char)bVar1 < '\0') {
      uVar6 = bVar1 & 0x1f;
      if (bVar1 < 0xe0) {
        pbVar9 = param_3 + 2;
        cVar3 = pdb_140dcb870(uVar6 << 6 | param_3[1] & 0x3f);
      }
      else {
        uVar7 = param_3[2] & 0x3f | (param_3[1] & 0x3f) << 6;
        if (bVar1 < 0xf0) {
          pbVar9 = param_3 + 3;
          cVar3 = pdb_140dcb870(uVar7 | uVar6 << 0xc);
        }
        else {
          if ((param_3[3] & 0x3f | uVar7 << 6 | (bVar1 & 7) << 0x12) == 0x110000)
          goto LAB_1424f3f31;
          pbVar9 = param_3 + 4;
          cVar3 = pdb_140dcb870();
        }
      }
    }
    else {
      pbVar9 = param_3 + 1;
      cVar3 = pdb_140dcb870();
    }
    if (cVar3 != '\0') {
LAB_1424f3e60:
      do {
        if (pbVar9 == param_3 + param_4) {
code_r0x0001424f3fb5:
          switch(param_4) {
          case 3:
            if ((param_3[2] == 0x66 && *(short *)param_3 == 0x6e69) ||
               (param_3[2] == 0x4e && *(short *)param_3 == 0x614e)) goto LAB_1424f3f31;
            break;
          case 4:
            if (((*(int *)param_3 == 0x65757274) || (*(int *)param_3 == 0x656d6f53)) ||
               (*(int *)param_3 == 0x656e6f4e)) goto LAB_1424f3f31;
            break;
          case 5:
            if (param_3[4] == 0x65 && *(int *)param_3 == 0x736c6166) goto LAB_1424f3f31;
            break;
          case 6:
            if ((((*(short *)(param_3 + 4) == 0x3233 && *(int *)param_3 == 0x66666e69) ||
                 (*(short *)(param_3 + 4) == 0x3436 && *(int *)param_3 == 0x66666e69)) ||
                (*(short *)(param_3 + 4) == 0x3233 && *(int *)param_3 == 0x664e614e)) ||
               (*(short *)(param_3 + 4) == 0x3436 && *(int *)param_3 == 0x664e614e))
            goto LAB_1424f3f31;
          }
          plVar2 = *(longlong **)(param_2 + 0xc0);
          lVar5 = plVar2[2];
          uVar4 = *plVar2 - lVar5;
          goto joined_r0x0001424f40ac;
        }
        bVar1 = *pbVar9;
        uVar6 = (uint)bVar1;
        if (-1 < (char)bVar1) {
          pbVar9 = pbVar9 + 1;
LAB_1424f3f20:
          if ((*(byte *)(_DAT_143ca4a68 + (ulonglong)uVar6) & 1) == 0) break;
          goto LAB_1424f3e60;
        }
        uVar7 = bVar1 & 0x1f;
        pbVar8 = pbVar9 + 1;
        if (bVar1 < 0xe0) {
          pbVar9 = pbVar9 + 2;
          uVar6 = uVar7 << 6 | *pbVar8 & 0x3f;
        }
        else {
          uVar6 = pbVar9[2] & 0x3f | (*pbVar8 & 0x3f) << 6;
          if (bVar1 < 0xf0) {
            pbVar9 = pbVar9 + 3;
            uVar6 = uVar6 | uVar7 << 0xc;
          }
          else {
            uVar6 = pbVar9[3] & 0x3f | uVar6 << 6 | (bVar1 & 7) << 0x12;
            if (uVar6 == 0x110000) goto code_r0x0001424f3fb5;
            pbVar9 = pbVar9 + 4;
          }
        }
        if (uVar6 < 0x80) goto LAB_1424f3f20;
        pbVar8 = (byte *)((ulonglong)(uVar6 >> 9) + _DAT_143ca4a60);
        if (0xe01ff < uVar6) {
          pbVar8 = &UNK_143513708;
        }
      } while ((*(byte *)(_DAT_143ca4a70 +
                         (ulonglong)(uVar6 >> 3 & 0x3f) + (ulonglong)*pbVar8 * 0x20) >>
                ((byte)uVar6 & 7) & 1) != 0);
    }
  }
LAB_1424f3f31:
  plVar2 = *(longlong **)(param_2 + 0xc0);
  lVar5 = plVar2[2];
  if ((ulonglong)(*plVar2 - lVar5) < 2) {
    pdb_142d7f1b0(plVar2,lVar5,2,1,1);
    lVar5 = plVar2[2];
  }
  *(undefined2 *)(plVar2[1] + lVar5) = 0x2372;
  lVar5 = plVar2[2] + 2;
  plVar2[2] = lVar5;
  uVar4 = *plVar2 - lVar5;
joined_r0x0001424f40ac:
  if (uVar4 < param_4) {
    pdb_142d7f1b0(plVar2,lVar5,param_4,1,1);
    lVar5 = plVar2[2];
  }
  else if (param_4 == 0) goto LAB_1424f3f8c;
  pub_142e32760(lVar5 + plVar2[1],param_3,param_4);
  lVar5 = plVar2[2];
LAB_1424f3f8c:
  plVar2[2] = lVar5 + param_4;
  *(undefined1 *)param_1 = 0x32;
  return;
}

