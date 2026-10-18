// VA 0x14033d700, PDB extent 1715 bytes
// tiny_glade::gui::gui_escape_menu::open_newsletter
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_escape_menu.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: tiny_glade::gui::gui_escape_menu::open_newsletter
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/gui/gui_escape_menu.rs
   Extent: 1715 */

void pdb_14033d700(undefined8 param_1)

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
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  code *pcVar55;
  byte *pbVar56;
  undefined8 uStack_58;
  ulonglong *puStack_50;
  undefined8 uStack_48;
  
  pbVar56 = (byte *)pdb_140340f60(&UNK_142f3aa23,0x9aa81277b5a3a603);
  bVar1 = pbVar56[7];
  bVar2 = pbVar56[6];
  bVar3 = pbVar56[5];
  bVar4 = pbVar56[4];
  bVar5 = pbVar56[3];
  bVar6 = pbVar56[2];
  bVar7 = *pbVar56;
  bVar8 = pbVar56[1];
  bVar9 = pbVar56[0xf];
  bVar10 = pbVar56[0xe];
  bVar11 = pbVar56[0xd];
  bVar12 = pbVar56[0xc];
  bVar13 = pbVar56[0xb];
  bVar14 = pbVar56[10];
  bVar15 = pbVar56[8];
  bVar16 = pbVar56[9];
  bVar17 = pbVar56[0x17];
  bVar18 = pbVar56[0x16];
  bVar19 = pbVar56[0x15];
  bVar20 = pbVar56[0x14];
  bVar21 = pbVar56[0x13];
  bVar22 = pbVar56[0x12];
  bVar23 = pbVar56[0x10];
  bVar24 = pbVar56[0x11];
  bVar25 = pbVar56[0x1f];
  bVar26 = pbVar56[0x1e];
  bVar27 = pbVar56[0x1d];
  bVar28 = pbVar56[0x1c];
  bVar29 = pbVar56[0x1b];
  bVar30 = pbVar56[0x1a];
  bVar31 = pbVar56[0x18];
  bVar32 = pbVar56[0x19];
  bVar33 = pbVar56[0x27];
  bVar34 = pbVar56[0x26];
  bVar35 = pbVar56[0x25];
  bVar36 = pbVar56[0x24];
  bVar37 = pbVar56[0x23];
  bVar38 = pbVar56[0x22];
  bVar39 = pbVar56[0x20];
  bVar40 = pbVar56[0x21];
  bVar41 = pbVar56[0x2f];
  bVar42 = pbVar56[0x2e];
  bVar43 = pbVar56[0x2d];
  bVar44 = pbVar56[0x2c];
  bVar45 = pbVar56[0x2b];
  bVar46 = pbVar56[0x2a];
  bVar47 = pbVar56[0x28];
  bVar48 = pbVar56[0x29];
  bVar49 = pbVar56[0x33];
  bVar50 = pbVar56[0x32];
  bVar51 = pbVar56[0x30];
  bVar52 = pbVar56[0x31];
  bVar53 = pbVar56[0x34];
  bVar54 = pbVar56[0x35];
  pdb_14007ee60();
  puStack_50 = (ulonglong *)pub_1406abab0(0x36,1);
  if (puStack_50 != (ulonglong *)0x0) {
    *puStack_50 = ((ulonglong)bVar7 |
                  (ulonglong)bVar8 << 8 |
                  (ulonglong)bVar6 << 0x10 |
                  (ulonglong)bVar5 << 0x18 |
                  (ulonglong)bVar4 << 0x20 |
                  (ulonglong)bVar3 << 0x28 | (ulonglong)bVar2 << 0x30 | (ulonglong)bVar1 << 0x38) ^
                  0x13c05ae954897e6b;
    puStack_50[1] =
         ((ulonglong)bVar15 |
         (ulonglong)bVar16 << 8 |
         (ulonglong)bVar14 << 0x10 |
         (ulonglong)bVar13 << 0x18 |
         (ulonglong)bVar12 << 0x20 |
         (ulonglong)bVar11 << 0x28 | (ulonglong)bVar10 << 0x30 | (ulonglong)bVar9 << 0x38) ^
         0x9014c2ba0b33a247;
    puStack_50[2] =
         ((ulonglong)bVar23 |
         (ulonglong)bVar24 << 8 |
         (ulonglong)bVar22 << 0x10 |
         (ulonglong)bVar21 << 0x18 |
         (ulonglong)bVar20 << 0x20 |
         (ulonglong)bVar19 << 0x28 | (ulonglong)bVar18 << 0x30 | (ulonglong)bVar17 << 0x38) ^
         0x3b0c171d003355fb;
    puStack_50[3] =
         ((ulonglong)bVar31 |
         (ulonglong)bVar32 << 8 |
         (ulonglong)bVar30 << 0x10 |
         (ulonglong)bVar29 << 0x18 |
         (ulonglong)bVar28 << 0x20 |
         (ulonglong)bVar27 << 0x28 | (ulonglong)bVar26 << 0x30 | (ulonglong)bVar25 << 0x38) ^
         0xe3004e9841296aa;
    puStack_50[4] =
         ((ulonglong)bVar39 |
         (ulonglong)bVar40 << 8 |
         (ulonglong)bVar38 << 0x10 |
         (ulonglong)bVar37 << 0x18 |
         (ulonglong)bVar36 << 0x20 |
         (ulonglong)bVar35 << 0x28 | (ulonglong)bVar34 << 0x30 | (ulonglong)bVar33 << 0x38) ^
         0xc1db5f5edb09545f;
    puStack_50[5] =
         ((ulonglong)bVar47 |
         (ulonglong)bVar48 << 8 |
         (ulonglong)bVar46 << 0x10 |
         (ulonglong)bVar45 << 0x18 |
         (ulonglong)bVar44 << 0x20 |
         (ulonglong)bVar43 << 0x28 | (ulonglong)bVar42 << 0x30 | (ulonglong)bVar41 << 0x38) ^
         0x535cbbfaec298286;
    *(uint *)(puStack_50 + 6) =
         (uint)bVar51 + ((uint)bVar52 << 8 | (uint)bVar50 << 0x10 | (uint)bVar49 << 0x18) ^
         0x4050a48b;
    *(byte *)((longlong)puStack_50 + 0x34) = bVar53 ^ 0x8b;
    *(byte *)((longlong)puStack_50 + 0x35) = bVar54 ^ 0x33;
    uStack_58 = 0x36;
    uStack_48 = 0x36;
    pdb_140559640(param_1,&uStack_58);
    return;
  }
  pdb_142dc7e2a(1,0x36);
  pcVar55 = (code *)swi(3);
  (*pcVar55)();
  return;
}

