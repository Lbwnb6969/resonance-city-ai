// VA 0x1406326a0, PDB extent 490 bytes
// ron::parse::Parser::parse_integer_digits<u32>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: ron::parse::Parser::parse_integer_digits<u32>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 490 */

void pdb_1406326a0(undefined1 *param_1,longlong param_2,byte *param_3,longlong param_4,byte param_5,
                  code *param_6)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  uint7 uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  longlong lVar10;
  byte *pbVar11;
  uint uStack_50;
  int iStack_4c;
  longlong lStack_48;
  
  uStack_50 = 0;
  pbVar9 = param_3;
  pbVar8 = (byte *)0x0;
  iStack_4c = in_EAX;
  do {
    do {
      pbVar11 = pbVar8;
      if (pbVar9 == param_3 + param_4) {
        *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x20);
        *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + param_4;
        *(uint *)(param_1 + 4) = uStack_50;
        *param_1 = 0x32;
        return;
      }
      bVar1 = *pbVar9;
      uVar7 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar6 = bVar1 & 0x1f;
        if (bVar1 < 0xe0) {
          pbVar8 = pbVar9 + 2;
          uVar7 = uVar6 << 6 | pbVar9[1] & 0x3f;
        }
        else {
          uVar7 = pbVar9[2] & 0x3f | (pbVar9[1] & 0x3f) << 6;
          if (bVar1 < 0xf0) {
            pbVar8 = pbVar9 + 3;
            uVar7 = uVar7 | uVar6 << 0xc;
          }
          else {
            pbVar8 = pbVar9 + 4;
            uVar7 = pbVar9[3] & 0x3f | uVar7 << 6 | (bVar1 & 7) << 0x12;
          }
        }
      }
      else {
        pbVar8 = pbVar9 + 1;
      }
      lVar10 = (longlong)pbVar11 - (longlong)pbVar9;
      pbVar9 = pbVar8;
      pbVar8 = pbVar8 + lVar10;
    } while (uVar7 == 0x5f);
    lVar2 = (ulonglong)param_5 * (ulonglong)uStack_50;
    uStack_50 = (uint)lVar2;
    uVar5 = (uint7)((ulonglong)lVar2 >> 8) & 0xffffff;
    if ((int)((ulonglong)lVar2 >> 0x20) != 0) break;
    if ((0x7f < uVar7) ||
       (((iVar4 = (int)CONCAT71(uVar5,0xd0), 9 < uVar7 - 0x30 &&
         (iVar4 = (int)CONCAT71(uVar5,0xa9), 5 < uVar7 - 0x61)) &&
        (iVar4 = (int)CONCAT71(uVar5,0xc9), 5 < uVar7 - 0x41)))) {
      *param_1 = 0x1d;
      param_1[1] = (char)iStack_4c;
      *(undefined **)(param_1 + 8) = &UNK_142f89e69;
      *(undefined8 *)(param_1 + 0x10) = 0x13;
      return;
    }
    iStack_4c = uVar7 + iVar4;
    if (param_5 <= (byte)iStack_4c) {
      *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x20);
      *(longlong *)(param_2 + 0x18) = (longlong)(pbVar11 + *(longlong *)(param_2 + 0x18));
      *param_1 = 0x1f;
      param_1[1] = param_5;
      *(uint *)(param_1 + 4) = uVar7;
      return;
    }
    lStack_48 = param_2;
    cVar3 = (*param_6)(&uStack_50);
    param_2 = lStack_48;
  } while (cVar3 == '\0');
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x20);
  *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + param_4;
  *param_1 = 0x1e;
  return;
}

