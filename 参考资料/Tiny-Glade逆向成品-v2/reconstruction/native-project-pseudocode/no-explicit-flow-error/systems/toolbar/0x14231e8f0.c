// VA 0x14231e8f0, PDB extent 512 bytes
// ron::parse::Parser::parse_integer_digits<i64>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: ron::parse::Parser::parse_integer_digits<i64>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 512 */

void pdb_14231e8f0(undefined1 *param_1,longlong param_2,byte *param_3,longlong param_4,byte param_5,
                  code *param_6)

{
  byte bVar1;
  undefined1 auVar2 [16];
  byte *pbVar3;
  char cVar4;
  int in_EAX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iStack_54;
  longlong lStack_50;
  longlong lStack_48;
  
  lStack_50 = 0;
  pbVar3 = (byte *)0x0;
  pbVar11 = param_3;
  iStack_54 = in_EAX;
  do {
    do {
      pbVar9 = pbVar3;
      if (pbVar11 == param_3 + param_4) {
        *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x20);
        *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + param_4;
        *(longlong *)(param_1 + 8) = lStack_50;
        *param_1 = 0x32;
        return;
      }
      bVar1 = *pbVar11;
      uVar6 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        if (bVar1 < 0xe0) {
          pbVar10 = pbVar11 + 2;
          uVar6 = (uVar6 & 0x1f) << 6 | pbVar11[1] & 0x3f;
        }
        else {
          uVar7 = pbVar11[2] & 0x3f | (pbVar11[1] & 0x3f) << 6;
          if (bVar1 < 0xf0) {
            pbVar10 = pbVar11 + 3;
            uVar6 = uVar7 | (uVar6 & 0x1f) << 0xc;
          }
          else {
            pbVar10 = pbVar11 + 4;
            uVar6 = pbVar11[3] & 0x3f | uVar7 << 6 | (uVar6 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar10 = pbVar11 + 1;
      }
      lVar8 = (longlong)pbVar9 - (longlong)pbVar11;
      pbVar3 = pbVar10 + lVar8;
      pbVar11 = pbVar10;
    } while (uVar6 == 0x5f);
    auVar2 = SEXT816(lStack_50);
    lStack_50 = lStack_50 * (ulonglong)param_5;
    if (SEXT816(lStack_50) != auVar2 * SEXT816((longlong)(ulonglong)param_5)) break;
    if ((0x7f < uVar6) ||
       (((iVar5 = 0xd0, 9 < uVar6 - 0x30 && (iVar5 = 0xa9, 5 < uVar6 - 0x61)) &&
        (iVar5 = 0xc9, 5 < uVar6 - 0x41)))) {
      *param_1 = 0x1d;
      param_1[1] = (char)iStack_54;
      *(undefined **)(param_1 + 8) = &UNK_1434d9659;
      *(undefined8 *)(param_1 + 0x10) = 0x13;
      return;
    }
    iStack_54 = iVar5 + uVar6;
    if (param_5 <= (byte)iStack_54) {
      *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x20);
      *(longlong *)(param_2 + 0x18) = (longlong)(pbVar9 + *(longlong *)(param_2 + 0x18));
      *param_1 = 0x1f;
      param_1[1] = param_5;
      *(uint *)(param_1 + 4) = uVar6;
      return;
    }
    lStack_48 = param_2;
    cVar4 = (*param_6)(&lStack_50);
    param_2 = lStack_48;
  } while (cVar4 == '\0');
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x20);
  *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + param_4;
  *param_1 = 0x1e;
  return;
}

