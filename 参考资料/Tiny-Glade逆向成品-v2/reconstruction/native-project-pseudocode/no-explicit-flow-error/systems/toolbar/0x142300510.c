// VA 0x142300510, PDB extent 706 bytes
// toolbar::menu::report_bug::impl$6::on_input
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: toolbar::menu::report_bug::impl$6::on_input
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/report_bug.rs
   Extent: 706 */

void pdb_142300510(longlong param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 auStack_40 [8];
  
  if (1 < *(uint *)(param_1 + 0x268)) {
    uVar5 = *(uint *)(param_2 + 0x58);
    iVar4 = 1;
    if (0xc2 < uVar5) {
      iVar4 = uVar5 - 0xc3;
    }
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        if (param_2[100] == '\0') {
          switch(uVar5) {
          case 0x35:
            auStack_40[0] = 0x19;
            break;
          default:
            if (*param_2 == '\x1b') {
              return;
            }
            pbVar3 = (byte *)pdb_140f334c0(param_2);
            pbVar6 = (byte *)(param_2 + (longlong)pbVar3);
            do {
              if (pbVar3 == pbVar6) {
                return;
              }
              bVar2 = *pbVar3;
              uStack_5c = (uint)bVar2;
              if ((char)bVar2 < '\0') {
                uVar5 = bVar2 & 0x1f;
                pbVar1 = pbVar3 + 1;
                if (bVar2 < 0xe0) {
                  pbVar3 = pbVar3 + 2;
                  uStack_5c = uVar5 << 6 | *pbVar1 & 0x3f;
                }
                else {
                  uStack_5c = pbVar3[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
                  if (bVar2 < 0xf0) {
                    pbVar3 = pbVar3 + 3;
                    uStack_5c = uStack_5c | uVar5 << 0xc;
                  }
                  else {
                    uStack_5c = pbVar3[3] & 0x3f | uStack_5c << 6 | (bVar2 & 7) << 0x12;
                    if (uStack_5c == 0x110000) {
                      return;
                    }
                    pbVar3 = pbVar3 + 4;
                  }
                }
              }
              else {
                pbVar3 = pbVar3 + 1;
              }
              if (((uStack_5c != 0x110000) && (0x1f < uStack_5c)) && (uStack_5c - 0xa0 < 0xffffffdf)
                 ) {
                uStack_60 = 0x17;
                pdb_140cb5d90(param_1,&uStack_60);
              }
            } while( true );
          case 0x3a:
            auStack_40[0] = 0x18;
            break;
          case 0x49:
            auStack_40[0] = 0x1a;
            break;
          case 0x4a:
            auStack_40[0] = 0x14;
            if ((param_2[0x68] & 4U) == 0) {
              auStack_40[0] = 9;
            }
            break;
          case 0x4c:
            auStack_40[0] = 0x13;
            if ((param_2[0x68] & 4U) == 0) {
              auStack_40[0] = 7;
            }
            break;
          case 0x50:
            auStack_40[0] = 6;
            break;
          case 0x51:
            auStack_40[0] = 0x11;
            if ((param_2[0x68] & 4U) == 0) {
              auStack_40[0] = 3;
            }
            break;
          case 0x52:
            auStack_40[0] = 0x12;
            if ((param_2[0x68] & 4U) == 0) {
              auStack_40[0] = 4;
            }
            break;
          case 0x53:
            auStack_40[0] = 5;
          }
          pdb_140cb5d90(param_1,auStack_40);
        }
      }
      else {
        pbVar3 = *(byte **)(param_2 + 8);
        pbVar6 = pbVar3 + *(longlong *)(param_2 + 0x10);
        while (pbVar3 != pbVar6) {
          bVar2 = *pbVar3;
          uStack_5c = (uint)bVar2;
          if ((char)bVar2 < '\0') {
            uVar5 = bVar2 & 0x1f;
            pbVar1 = pbVar3 + 1;
            if (bVar2 < 0xe0) {
              pbVar3 = pbVar3 + 2;
              uStack_5c = uVar5 << 6 | *pbVar1 & 0x3f;
            }
            else {
              uStack_5c = pbVar3[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
              if (bVar2 < 0xf0) {
                pbVar3 = pbVar3 + 3;
                uStack_5c = uStack_5c | uVar5 << 0xc;
              }
              else {
                uStack_5c = pbVar3[3] & 0x3f | uStack_5c << 6 | (bVar2 & 7) << 0x12;
                if (uStack_5c == 0x110000) {
                  return;
                }
                pbVar3 = pbVar3 + 4;
              }
            }
          }
          else {
            pbVar3 = pbVar3 + 1;
          }
          if (((uStack_5c != 0x110000) && (0x1f < uStack_5c)) && (uStack_5c - 0xa0 < 0xffffffdf)) {
            uStack_60 = 0x17;
            pdb_140cb5d90(param_1,&uStack_60);
          }
        }
      }
    }
  }
  return;
}

