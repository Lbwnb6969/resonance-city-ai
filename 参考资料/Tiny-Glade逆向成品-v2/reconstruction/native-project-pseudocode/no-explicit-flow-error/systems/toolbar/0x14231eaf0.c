// VA 0x14231eaf0, PDB extent 479 bytes
// ron::parse::Parser::parse_integer_digits<u8>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: ron::parse::Parser::parse_integer_digits<u8>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 479 */

void pdb_14231eaf0(undefined1 *param_1,longlong param_2,byte *param_3,longlong param_4,byte param_5,
                  code *param_6)

{
  byte bVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  longlong lVar8;
  byte *pbVar9;
  byte bStack_4d;
  int iStack_4c;
  longlong lStack_48;
  
  bStack_4d = 0;
  pbVar7 = param_3;
  pbVar6 = (byte *)0x0;
  iStack_4c = in_EAX;
  do {
    do {
      pbVar9 = pbVar6;
      if (pbVar7 == param_3 + param_4) {
        *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x20);
        *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + param_4;
        param_1[1] = bStack_4d;
        *param_1 = 0x32;
        return;
      }
      bVar1 = *pbVar7;
      uVar5 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar4 = bVar1 & 0x1f;
        if (bVar1 < 0xe0) {
          pbVar6 = pbVar7 + 2;
          uVar5 = uVar4 << 6 | pbVar7[1] & 0x3f;
        }
        else {
          uVar5 = pbVar7[2] & 0x3f | (pbVar7[1] & 0x3f) << 6;
          if (bVar1 < 0xf0) {
            pbVar6 = pbVar7 + 3;
            uVar5 = uVar5 | uVar4 << 0xc;
          }
          else {
            pbVar6 = pbVar7 + 4;
            uVar5 = pbVar7[3] & 0x3f | uVar5 << 6 | (bVar1 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar6 = pbVar7 + 1;
      }
      lVar8 = (longlong)pbVar9 - (longlong)pbVar7;
      pbVar7 = pbVar6;
      pbVar6 = pbVar6 + lVar8;
    } while (uVar5 == 0x5f);
    if ((char)((ushort)((ushort)param_5 * (ushort)bStack_4d) >> 8) != '\0') break;
    bStack_4d = (byte)((ushort)param_5 * (ushort)bStack_4d);
    if ((0x7f < uVar5) ||
       (((iVar3 = 0xd0, 9 < uVar5 - 0x30 && (iVar3 = 0xa9, 5 < uVar5 - 0x61)) &&
        (iVar3 = 0xc9, 5 < uVar5 - 0x41)))) {
      *param_1 = 0x1d;
      param_1[1] = (char)iStack_4c;
      *(undefined **)(param_1 + 8) = &UNK_1434d9659;
      *(undefined8 *)(param_1 + 0x10) = 0x13;
      return;
    }
    iStack_4c = uVar5 + iVar3;
    if (param_5 <= (byte)iStack_4c) {
      *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x20);
      *(longlong *)(param_2 + 0x18) = (longlong)(pbVar9 + *(longlong *)(param_2 + 0x18));
      *param_1 = 0x1f;
      param_1[1] = param_5;
      *(uint *)(param_1 + 4) = uVar5;
      return;
    }
    lStack_48 = param_2;
    cVar2 = (*param_6)(&bStack_4d);
    param_2 = lStack_48;
  } while (cVar2 == '\0');
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x20);
  *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + param_4;
  *param_1 = 0x1e;
  return;
}

