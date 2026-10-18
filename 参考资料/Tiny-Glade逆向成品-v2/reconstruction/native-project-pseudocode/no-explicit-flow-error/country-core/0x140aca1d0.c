// VA 0x140aca1d0, PDB extent 492 bytes
// ron::parse::Parser::parse_integer_digits<i32>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: ron::parse::Parser::parse_integer_digits<i32>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 492 */

void pdb_140aca1d0(undefined1 *param_1,longlong param_2,byte *param_3,longlong param_4,byte param_5,
                  code *param_6)

{
  byte bVar1;
  longlong lVar2;
  byte *pbVar3;
  char cVar4;
  int in_EAX;
  int iVar5;
  uint7 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iStack_50;
  int iStack_4c;
  longlong lStack_48;
  
  iStack_50 = 0;
  pbVar3 = (byte *)0x0;
  pbVar12 = param_3;
  iStack_4c = in_EAX;
  do {
    do {
      pbVar10 = pbVar3;
      if (pbVar12 == param_3 + param_4) {
        *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x20);
        *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + param_4;
        *(int *)(param_1 + 4) = iStack_50;
        *param_1 = 0x32;
        return;
      }
      bVar1 = *pbVar12;
      uVar7 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        if (bVar1 < 0xe0) {
          pbVar11 = pbVar12 + 2;
          uVar7 = (uVar7 & 0x1f) << 6 | pbVar12[1] & 0x3f;
        }
        else {
          uVar8 = pbVar12[2] & 0x3f | (pbVar12[1] & 0x3f) << 6;
          if (bVar1 < 0xf0) {
            pbVar11 = pbVar12 + 3;
            uVar7 = uVar8 | (uVar7 & 0x1f) << 0xc;
          }
          else {
            pbVar11 = pbVar12 + 4;
            uVar7 = pbVar12[3] & 0x3f | uVar8 << 6 | (uVar7 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar11 = pbVar12 + 1;
      }
      lVar9 = (longlong)pbVar10 - (longlong)pbVar12;
      pbVar3 = pbVar11 + lVar9;
      pbVar12 = pbVar11;
    } while (uVar7 == 0x5f);
    lVar2 = (longlong)iStack_50 * (longlong)(int)(uint)param_5;
    iStack_50 = (int)lVar2;
    uVar6 = (uint7)((ulonglong)lVar2 >> 8) & 0xffffff;
    if (iStack_50 != lVar2) break;
    if ((0x7f < uVar7) ||
       (((iVar5 = (int)CONCAT71(uVar6,0xd0), 9 < uVar7 - 0x30 &&
         (iVar5 = (int)CONCAT71(uVar6,0xa9), 5 < uVar7 - 0x61)) &&
        (iVar5 = (int)CONCAT71(uVar6,0xc9), 5 < uVar7 - 0x41)))) {
      *param_1 = 0x1d;
      param_1[1] = (char)iStack_4c;
      *(undefined **)(param_1 + 8) = &UNK_14304cac8;
      *(undefined8 *)(param_1 + 0x10) = 0x13;
      return;
    }
    iStack_4c = iVar5 + uVar7;
    if (param_5 <= (byte)iStack_4c) {
      *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x20);
      *(longlong *)(param_2 + 0x18) = (longlong)(pbVar10 + *(longlong *)(param_2 + 0x18));
      *param_1 = 0x1f;
      param_1[1] = param_5;
      *(uint *)(param_1 + 4) = uVar7;
      return;
    }
    lStack_48 = param_2;
    cVar4 = (*param_6)(&iStack_50);
    param_2 = lStack_48;
  } while (cVar4 == '\0');
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x20);
  *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + param_4;
  *param_1 = 0x1e;
  return;
}

