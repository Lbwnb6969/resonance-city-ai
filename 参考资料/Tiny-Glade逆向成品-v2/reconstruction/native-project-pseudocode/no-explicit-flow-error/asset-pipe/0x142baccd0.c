// VA 0x142baccd0, PDB extent 730 bytes
// ddsfile::format::pixel_format::PixelFormat::read<ref_mut$<ref_mut$<ref_mut$<std::io::cursor::Cursor<ref$<slice2$<u8> > > > > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   ddsfile::format::pixel_format::PixelFormat::read<ref_mut$<ref_mut$<ref_mut$<std::io::cursor::Cursor<ref$<slice2$<u8>
   > > > > > >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset-pipe/src/lib.rs
   Extent: 730 */

uint * pdb_142baccd0(uint *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  code *pcVar13;
  undefined8 uVar14;
  byte *pbVar15;
  uint *puVar16;
  ulonglong uVar17;
  uint uVar18;
  
  plVar9 = (longlong *)*param_2;
  plVar10 = (longlong *)*plVar9;
  uVar11 = plVar10[1];
  uVar12 = plVar10[2];
  uVar17 = uVar12;
  if (uVar11 < uVar12) {
    uVar17 = uVar11;
  }
  if (uVar11 - uVar17 < 4) {
    plVar10[2] = uVar11;
  }
  else {
    iVar1 = *(int *)(*plVar10 + uVar17);
    plVar10[2] = uVar12 + 4;
    if (iVar1 != 0x20) {
      pdb_14007ee60();
      pbVar15 = pub_1406abab0(0x18,1);
      uVar14 = _UNK_1436a7450;
      if (pbVar15 != (byte *)0x0) {
        *(undefined8 *)pbVar15 = _DAT_1436a7448;
        *(undefined8 *)(pbVar15 + 8) = uVar14;
        pbVar15[0x10] = 0x75;
        pbVar15[0x11] = 99;
        pbVar15[0x12] = 0x74;
        pbVar15[0x13] = 0x20;
        pbVar15[0x14] = 0x73;
        pbVar15[0x15] = 0x69;
        pbVar15[0x16] = 0x7a;
        pbVar15[0x17] = 0x65;
        param_1[2] = 4;
        param_1[3] = 0;
        param_1[4] = 0x18;
        param_1[5] = 0;
        *(byte **)(param_1 + 6) = pbVar15;
        param_1[8] = 0x18;
        param_1[9] = 0;
        *param_1 = 2;
        return param_1;
      }
      pdb_142dc7e2a(1,0x18);
      pcVar13 = (code *)swi(3);
      puVar16 = (uint *)(*pcVar13)();
      return puVar16;
    }
    plVar10 = (longlong *)*plVar9;
    uVar11 = plVar10[1];
    uVar12 = plVar10[2];
    uVar17 = uVar12;
    if (uVar11 < uVar12) {
      uVar17 = uVar11;
    }
    if (uVar11 - uVar17 < 4) {
      plVar10[2] = uVar11;
    }
    else {
      uVar2 = *(uint *)(*plVar10 + uVar17);
      plVar10[2] = uVar12 + 4;
      plVar10 = (longlong *)*plVar9;
      uVar11 = plVar10[1];
      uVar12 = plVar10[2];
      uVar17 = uVar12;
      if (uVar11 < uVar12) {
        uVar17 = uVar11;
      }
      if (uVar11 - uVar17 < 4) {
        plVar10[2] = uVar11;
      }
      else {
        uVar3 = *(uint *)(*plVar10 + uVar17);
        plVar10[2] = uVar12 + 4;
        plVar10 = (longlong *)*plVar9;
        uVar11 = plVar10[1];
        uVar12 = plVar10[2];
        uVar17 = uVar12;
        if (uVar11 < uVar12) {
          uVar17 = uVar11;
        }
        if (uVar11 - uVar17 < 4) {
          plVar10[2] = uVar11;
        }
        else {
          uVar4 = *(uint *)(*plVar10 + uVar17);
          plVar10[2] = uVar12 + 4;
          plVar10 = (longlong *)*plVar9;
          uVar11 = plVar10[1];
          uVar12 = plVar10[2];
          uVar17 = uVar12;
          if (uVar11 < uVar12) {
            uVar17 = uVar11;
          }
          if (uVar11 - uVar17 < 4) {
            plVar10[2] = uVar11;
          }
          else {
            uVar5 = *(uint *)(*plVar10 + uVar17);
            plVar10[2] = uVar12 + 4;
            plVar10 = (longlong *)*plVar9;
            uVar11 = plVar10[1];
            uVar12 = plVar10[2];
            uVar17 = uVar12;
            if (uVar11 < uVar12) {
              uVar17 = uVar11;
            }
            if (uVar11 - uVar17 < 4) {
              plVar10[2] = uVar11;
            }
            else {
              uVar6 = *(uint *)(*plVar10 + uVar17);
              plVar10[2] = uVar12 + 4;
              plVar10 = (longlong *)*plVar9;
              uVar11 = plVar10[1];
              uVar12 = plVar10[2];
              uVar17 = uVar12;
              if (uVar11 < uVar12) {
                uVar17 = uVar11;
              }
              if (uVar11 - uVar17 < 4) {
                plVar10[2] = uVar11;
              }
              else {
                uVar7 = *(uint *)(*plVar10 + uVar17);
                plVar10[2] = uVar12 + 4;
                plVar9 = (longlong *)*plVar9;
                uVar11 = plVar9[1];
                uVar12 = plVar9[2];
                uVar17 = uVar12;
                if (uVar11 < uVar12) {
                  uVar17 = uVar11;
                }
                if (3 < uVar11 - uVar17) {
                  uVar8 = *(uint *)(*plVar9 + uVar17);
                  plVar9[2] = uVar12 + 4;
                  uVar18 = uVar2 >> 6 & 1;
                  *param_1 = uVar2 >> 2 & 1;
                  param_1[1] = uVar3;
                  param_1[2] = (uint)((uVar2 & 0x20040) != 0);
                  param_1[3] = uVar4;
                  param_1[4] = uVar18;
                  param_1[5] = uVar5;
                  param_1[6] = uVar18;
                  param_1[7] = uVar6;
                  param_1[8] = uVar18;
                  param_1[9] = uVar7;
                  param_1[10] = (uint)((uVar2 & 3) != 0);
                  param_1[0xb] = uVar8;
                  param_1[0xc] = 0x20;
                  param_1[0xd] = uVar2 & 0x20247;
                  return param_1;
                }
                plVar9[2] = uVar11;
              }
            }
          }
        }
      }
    }
  }
  param_1[2] = 1;
  param_1[3] = 0;
  *(undefined **)(param_1 + 4) = &UNK_1436250a0;
  *param_1 = 2;
  return param_1;
}

