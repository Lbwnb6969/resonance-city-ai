// VA 0x14033ee50, PDB extent 759 bytes
// tiny_glade::gui::gui_escape_menu::open_community_server
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_escape_menu.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::gui::gui_escape_menu::open_community_server
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_escape_menu.rs
   Extent: 759 */

void pdb_14033ee50(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  code *pcVar30;
  byte *pbVar31;
  undefined8 uStack_58;
  ulonglong *puStack_50;
  undefined8 uStack_48;
  
  pbVar31 = (byte *)pdb_140340f90(&UNK_142f331c8,0xeaded534267b7094);
  bVar1 = pbVar31[7];
  bVar2 = pbVar31[6];
  bVar3 = pbVar31[5];
  bVar4 = pbVar31[4];
  bVar5 = pbVar31[3];
  bVar6 = pbVar31[2];
  bVar7 = *pbVar31;
  bVar8 = pbVar31[1];
  bVar9 = pbVar31[0xf];
  bVar10 = pbVar31[0xe];
  bVar11 = pbVar31[0xd];
  bVar12 = pbVar31[0xc];
  bVar13 = pbVar31[0xb];
  bVar14 = pbVar31[10];
  bVar15 = pbVar31[8];
  bVar16 = pbVar31[9];
  bVar17 = pbVar31[0x17];
  bVar18 = pbVar31[0x16];
  bVar19 = pbVar31[0x15];
  bVar20 = pbVar31[0x14];
  bVar21 = pbVar31[0x13];
  bVar22 = pbVar31[0x12];
  bVar23 = pbVar31[0x10];
  bVar24 = pbVar31[0x11];
  bVar25 = pbVar31[0x1b];
  bVar26 = pbVar31[0x1a];
  bVar27 = pbVar31[0x18];
  bVar28 = pbVar31[0x19];
  bVar29 = pbVar31[0x1c];
  pdb_14007ee60();
  puStack_50 = (ulonglong *)pub_1406abab0(0x1d,1);
  if (puStack_50 != (ulonglong *)0x0) {
    *puStack_50 = ((ulonglong)bVar7 |
                  (ulonglong)bVar8 << 8 |
                  (ulonglong)bVar6 << 0x10 |
                  (ulonglong)bVar5 << 0x18 |
                  (ulonglong)bVar4 << 0x20 |
                  (ulonglong)bVar3 << 0x28 | (ulonglong)bVar2 << 0x30 | (ulonglong)bVar1 << 0x38) ^
                  0x2a97183e8a6aec0b;
    puStack_50[1] =
         ((ulonglong)bVar15 |
         (ulonglong)bVar16 << 8 |
         (ulonglong)bVar14 << 0x10 |
         (ulonglong)bVar13 << 0x18 |
         (ulonglong)bVar12 << 0x20 |
         (ulonglong)bVar11 << 0x28 | (ulonglong)bVar10 << 0x30 | (ulonglong)bVar9 << 0x38) ^
         0xe7fc5716fb872236;
    puStack_50[2] =
         ((ulonglong)bVar23 |
         (ulonglong)bVar24 << 8 |
         (ulonglong)bVar22 << 0x10 |
         (ulonglong)bVar21 << 0x18 |
         (ulonglong)bVar20 << 0x20 |
         (ulonglong)bVar19 << 0x28 | (ulonglong)bVar18 << 0x30 | (ulonglong)bVar17 << 0x38) ^
         0xf226217ceca92b9;
    *(uint *)(puStack_50 + 3) =
         ((uint)bVar27 | (uint)bVar28 << 8 | (uint)bVar26 << 0x10 | (uint)bVar25 << 0x18) ^
         0x2f74d747;
    *(byte *)((longlong)puStack_50 + 0x1c) = bVar29 ^ 0xa9;
    uStack_58 = 0x1d;
    uStack_48 = 0x1d;
    pdb_140559640(param_1,&uStack_58);
    return;
  }
  pdb_142dc7e2a(1,0x1d);
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}

