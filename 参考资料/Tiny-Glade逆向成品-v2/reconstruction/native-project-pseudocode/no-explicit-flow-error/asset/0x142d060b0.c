// VA 0x142d060b0, PDB extent 497 bytes
// ron::parse::Parser::parse_integer_digits<i16>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: ron::parse::Parser::parse_integer_digits<i16>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/lib.rs
   Extent: 497 */

void pdb_142d060b0(undefined1 *param_1,longlong param_2,byte *param_3,longlong param_4,byte param_5,
                  code *param_6)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  char cVar4;
  int in_EAX;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  short sStack_4e;
  int iStack_4c;
  longlong lStack_48;
  
  sStack_4e = 0;
  pbVar3 = (byte *)0x0;
  pbVar10 = param_3;
  iStack_4c = in_EAX;
  do {
    do {
      pbVar8 = pbVar3;
      if (pbVar10 == param_3 + param_4) {
        *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x20);
        *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + param_4;
        *(short *)(param_1 + 2) = sStack_4e;
        *param_1 = 0x32;
        return;
      }
      bVar1 = *pbVar10;
      uVar5 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        if (bVar1 < 0xe0) {
          pbVar9 = pbVar10 + 2;
          uVar5 = (uVar5 & 0x1f) << 6 | pbVar10[1] & 0x3f;
        }
        else {
          uVar6 = pbVar10[2] & 0x3f | (pbVar10[1] & 0x3f) << 6;
          if (bVar1 < 0xf0) {
            pbVar9 = pbVar10 + 3;
            uVar5 = uVar6 | (uVar5 & 0x1f) << 0xc;
          }
          else {
            pbVar9 = pbVar10 + 4;
            uVar5 = pbVar10[3] & 0x3f | uVar6 << 6 | (uVar5 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar9 = pbVar10 + 1;
      }
      lVar7 = (longlong)pbVar8 - (longlong)pbVar10;
      pbVar3 = pbVar9 + lVar7;
      pbVar10 = pbVar9;
    } while (uVar5 == 0x5f);
    iVar2 = (int)sStack_4e * (int)(short)(ushort)param_5;
    sStack_4e = (short)iVar2;
    if (sStack_4e != iVar2) break;
    if (0x7f < uVar5) {
LAB_142d06262:
      *param_1 = 0x1d;
      param_1[1] = (char)iStack_4c;
      *(undefined **)(param_1 + 8) = &UNK_1436b60c8;
      *(undefined8 *)(param_1 + 0x10) = 0x13;
      return;
    }
    bVar1 = (byte)((uint)iVar2 >> 8);
    uVar6 = (uint)CONCAT71((uint7)bVar1,0xd0);
    if (((9 < uVar5 - 0x30) && (uVar6 = (uint)CONCAT11(bVar1,0xa9), 5 < uVar5 - 0x61)) &&
       (uVar6 = (uint)CONCAT71((uint7)bVar1,0xc9), 5 < uVar5 - 0x41)) goto LAB_142d06262;
    iStack_4c = uVar6 + uVar5;
    if (param_5 <= (byte)iStack_4c) {
      *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x20);
      *(longlong *)(param_2 + 0x18) = (longlong)(pbVar8 + *(longlong *)(param_2 + 0x18));
      *param_1 = 0x1f;
      param_1[1] = param_5;
      *(uint *)(param_1 + 4) = uVar5;
      return;
    }
    lStack_48 = param_2;
    cVar4 = (*param_6)(&sStack_4e);
    param_2 = lStack_48;
  } while (cVar4 == '\0');
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x20);
  *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + param_4;
  *param_1 = 0x1e;
  return;
}

