// VA 0x140ac94e0, PDB extent 879 bytes
// ron::parse::Parser::parse_integer<i8>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: ron::parse::Parser::parse_integer<i8>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 879 */

void pdb_140ac94e0(undefined1 *param_1,longlong param_2,char param_3)

{
  char cVar1;
  char cVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 uVar6;
  byte bVar7;
  ulonglong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  byte bVar14;
  int iVar15;
  
  cVar1 = pdb_140dcdeb0(param_2,&UNK_14304cadb,2);
  bVar14 = 2;
  if (cVar1 == '\0') {
    cVar1 = pdb_140dcdeb0(param_2,&UNK_14304cadd,2);
    bVar14 = 8;
    if (cVar1 == '\0') {
      cVar1 = pdb_140dcdeb0(param_2,&UNK_14304cadf,2);
      bVar14 = 10;
      if (cVar1 != '\0') {
        bVar14 = 0x10;
      }
    }
  }
  uVar3 = pdb_140dd1cf0(param_2,pdb_1406318f0);
  if (uVar3 == 0) {
    *param_1 = 0xe;
    return;
  }
  uVar8 = 0x5f;
  cVar1 = pdb_140dccd90(param_2);
  if (cVar1 != '\0') {
    *param_1 = 0x23;
    return;
  }
  pbVar4 = (byte *)pdb_140dd3680(param_2);
  if (uVar3 < uVar8) {
    if ((char)pbVar4[uVar3] < -0x40) {
LAB_140ac97fc:
      pdb_142dc8070();
      uVar6 = (undefined1)uVar8;
LAB_140ac9813:
      *param_1 = 0x1d;
      param_1[1] = uVar6;
      *(undefined **)(param_1 + 8) = &UNK_14304cac8;
      *(undefined8 *)(param_1 + 0x10) = 0x13;
      return;
    }
  }
  else if (pbVar4 == (byte *)0x0 || uVar3 != uVar8) goto LAB_140ac97fc;
  pbVar9 = pbVar4 + uVar3;
  cVar1 = '\0';
  pbVar5 = (byte *)0x0;
  if (param_3 < '\x01') {
    do {
      do {
        pbVar10 = pbVar5;
        uVar6 = (undefined1)uVar8;
        if (pbVar4 == pbVar9) {
LAB_140ac97c2:
          *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
          *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x18);
          *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x20);
          *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + uVar3;
          param_1[1] = cVar1;
          *param_1 = 0x32;
          return;
        }
        bVar7 = *pbVar4;
        uVar11 = (uint)bVar7;
        if ((char)bVar7 < '\0') {
          uVar12 = bVar7 & 0x1f;
          if (bVar7 < 0xe0) {
            pbVar5 = pbVar4 + 2;
            uVar11 = uVar12 << 6 | pbVar4[1] & 0x3f;
          }
          else {
            uVar11 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
            if (bVar7 < 0xf0) {
              pbVar5 = pbVar4 + 3;
              uVar11 = uVar11 | uVar12 << 0xc;
            }
            else {
              pbVar5 = pbVar4 + 4;
              uVar11 = pbVar4[3] & 0x3f | uVar11 << 6 | (bVar7 & 7) << 0x12;
            }
          }
        }
        else {
          pbVar5 = pbVar4 + 1;
        }
        lVar13 = (longlong)pbVar10 - (longlong)pbVar4;
        pbVar4 = pbVar5;
        pbVar5 = pbVar5 + lVar13;
      } while (uVar11 == 0x5f);
      cVar2 = (char)((short)cVar1 * (short)(char)bVar14);
      if ((short)cVar2 != (short)((short)cVar1 * (short)(char)bVar14)) break;
      if ((0x7f < uVar11) ||
         (((iVar15 = 0xd0, 9 < uVar11 - 0x30 && (iVar15 = 0xa9, 5 < uVar11 - 0x61)) &&
          (iVar15 = 0xc9, 5 < uVar11 - 0x41)))) goto LAB_140ac9813;
      uVar8 = (ulonglong)(uVar11 + iVar15);
      bVar7 = (byte)(uVar11 + iVar15);
      if (bVar14 <= bVar7) {
LAB_140ac982e:
        *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x20);
        *(longlong *)(param_2 + 0x18) = (longlong)(pbVar10 + *(longlong *)(param_2 + 0x18));
        *param_1 = 0x1f;
        param_1[1] = bVar14;
        *(uint *)(param_1 + 4) = uVar11;
        return;
      }
      cVar1 = cVar2 - bVar7;
    } while (!SBORROW1(cVar2,bVar7));
  }
  else {
    do {
      do {
        pbVar10 = pbVar5;
        uVar6 = (undefined1)uVar8;
        if (pbVar4 == pbVar9) goto LAB_140ac97c2;
        bVar7 = *pbVar4;
        uVar11 = (uint)bVar7;
        if ((char)bVar7 < '\0') {
          uVar12 = bVar7 & 0x1f;
          if (bVar7 < 0xe0) {
            pbVar5 = pbVar4 + 2;
            uVar11 = uVar12 << 6 | pbVar4[1] & 0x3f;
          }
          else {
            uVar11 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
            if (bVar7 < 0xf0) {
              pbVar5 = pbVar4 + 3;
              uVar11 = uVar11 | uVar12 << 0xc;
            }
            else {
              pbVar5 = pbVar4 + 4;
              uVar11 = pbVar4[3] & 0x3f | uVar11 << 6 | (bVar7 & 7) << 0x12;
            }
          }
        }
        else {
          pbVar5 = pbVar4 + 1;
        }
        lVar13 = (longlong)pbVar10 - (longlong)pbVar4;
        pbVar4 = pbVar5;
        pbVar5 = pbVar5 + lVar13;
      } while (uVar11 == 0x5f);
      cVar2 = (char)((short)cVar1 * (short)(char)bVar14);
      if ((short)cVar2 != (short)((short)cVar1 * (short)(char)bVar14)) break;
      if ((0x7f < uVar11) ||
         (((iVar15 = 0xd0, 9 < uVar11 - 0x30 && (iVar15 = 0xa9, 5 < uVar11 - 0x61)) &&
          (iVar15 = 0xc9, 5 < uVar11 - 0x41)))) goto LAB_140ac9813;
      uVar8 = (ulonglong)(uVar11 + iVar15);
      bVar7 = (byte)(uVar11 + iVar15);
      if (bVar14 <= bVar7) goto LAB_140ac982e;
      cVar1 = cVar2 + bVar7;
    } while (!SCARRY1(cVar2,bVar7));
  }
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x20);
  *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + uVar3;
  *param_1 = 0x1e;
  return;
}

