// VA 0x14231ecd0, PDB extent 494 bytes
// ron::parse::Parser::parse_integer_digits<u16>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: ron::parse::Parser::parse_integer_digits<u16>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 494 */

void pdb_14231ecd0(undefined1 *param_1,longlong param_2,byte *param_3,longlong param_4,byte param_5,
                  code *param_6)

{
  byte bVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  longlong lVar9;
  byte *pbVar10;
  ushort uStack_4e;
  int iStack_4c;
  longlong lStack_48;
  uint7 uVar4;
  
  uStack_4e = 0;
  pbVar8 = param_3;
  pbVar7 = (byte *)0x0;
  iStack_4c = in_EAX;
  do {
    do {
      pbVar10 = pbVar7;
      if (pbVar8 == param_3 + param_4) {
        *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x20);
        *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + param_4;
        *(ushort *)(param_1 + 2) = uStack_4e;
        *param_1 = 0x32;
        return;
      }
      bVar1 = *pbVar8;
      uVar6 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar5 = bVar1 & 0x1f;
        if (bVar1 < 0xe0) {
          pbVar7 = pbVar8 + 2;
          uVar6 = uVar5 << 6 | pbVar8[1] & 0x3f;
        }
        else {
          uVar6 = pbVar8[2] & 0x3f | (pbVar8[1] & 0x3f) << 6;
          if (bVar1 < 0xf0) {
            pbVar7 = pbVar8 + 3;
            uVar6 = uVar6 | uVar5 << 0xc;
          }
          else {
            pbVar7 = pbVar8 + 4;
            uVar6 = pbVar8[3] & 0x3f | uVar6 << 6 | (bVar1 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar7 = pbVar8 + 1;
      }
      lVar9 = (longlong)pbVar10 - (longlong)pbVar8;
      pbVar8 = pbVar7;
      pbVar7 = pbVar7 + lVar9;
    } while (uVar6 == 0x5f);
    iVar3 = (uint)param_5 * (uint)uStack_4e;
    uStack_4e = (ushort)iVar3;
    if ((short)((uint)iVar3 >> 0x10) != 0) break;
    if (0x7f < uVar6) {
LAB_14231ee7e:
      *param_1 = 0x1d;
      param_1[1] = (char)iStack_4c;
      *(undefined **)(param_1 + 8) = &UNK_1434d9659;
      *(undefined8 *)(param_1 + 0x10) = 0x13;
      return;
    }
    uVar4 = (uint7)(byte)((uint)iVar3 >> 8);
    iVar3 = (int)CONCAT71(uVar4,0xd0);
    if (((9 < uVar6 - 0x30) && (iVar3 = (int)CONCAT71(uVar4,0xa9), 5 < uVar6 - 0x61)) &&
       (iVar3 = (int)CONCAT71(uVar4,0xc9), 5 < uVar6 - 0x41)) goto LAB_14231ee7e;
    iStack_4c = uVar6 + iVar3;
    if (param_5 <= (byte)iStack_4c) {
      *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x20);
      *(longlong *)(param_2 + 0x18) = (longlong)(pbVar10 + *(longlong *)(param_2 + 0x18));
      *param_1 = 0x1f;
      param_1[1] = param_5;
      *(uint *)(param_1 + 4) = uVar6;
      return;
    }
    lStack_48 = param_2;
    cVar2 = (*param_6)(&uStack_4e);
    param_2 = lStack_48;
  } while (cVar2 == '\0');
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x20);
  *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + param_4;
  *param_1 = 0x1e;
  return;
}

