// VA 0x140632a70, PDB extent 513 bytes
// ron::parse::Parser::parse_integer_digits<u64>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: ron::parse::Parser::parse_integer_digits<u64>
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 513 */

void pdb_140632a70(undefined1 *param_1,longlong param_2,byte *param_3,longlong param_4,byte param_5,
                  code *param_6)

{
  byte bVar1;
  undefined1 auVar2 [16];
  char cVar3;
  int in_EAX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  longlong lVar9;
  byte *pbVar10;
  int iStack_54;
  ulonglong uStack_50;
  longlong lStack_48;
  
  uStack_50 = 0;
  pbVar8 = param_3;
  pbVar7 = (byte *)0x0;
  iStack_54 = in_EAX;
  do {
    do {
      pbVar10 = pbVar7;
      if (pbVar8 == param_3 + param_4) {
        *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(param_2 + 0x20);
        *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + param_4;
        *(ulonglong *)(param_1 + 8) = uStack_50;
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
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uStack_50;
    uStack_50 = SUB168(ZEXT116(param_5) * auVar2,0);
    if (SUB168(ZEXT116(param_5) * auVar2,8) != 0) break;
    if ((0x7f < uVar6) ||
       (((iVar4 = 0xd0, 9 < uVar6 - 0x30 && (iVar4 = 0xa9, 5 < uVar6 - 0x61)) &&
        (iVar4 = 0xc9, 5 < uVar6 - 0x41)))) {
      *param_1 = 0x1d;
      param_1[1] = (char)iStack_54;
      *(undefined **)(param_1 + 8) = &UNK_142f89e69;
      *(undefined8 *)(param_1 + 0x10) = 0x13;
      return;
    }
    iStack_54 = uVar6 + iVar4;
    if (param_5 <= (byte)iStack_54) {
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

