// VA 0x1414877d0, PDB extent 2794 bytes
// system_wall_constructor::construct_wooden_walls::construct_wall_boards::plan_horizontal_wall_boards
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   system_wall_constructor::construct_wooden_walls::construct_wall_boards::plan_horizontal_wall_boards
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/wall-constructor/src/construct_wooden_walls/construct_wall_boards.rs
   Extent: 2794 */

void pdb_1414877d0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,ulonglong *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  byte *arg0;
  ulonglong uVar7;
  longlong lVar8;
  code *pcVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  ulonglong *puVar13;
  undefined1 *puVar14;
  bool bVar15;
  bool bVar16;
  byte *arg0_00;
  byte *pbVar17;
  byte *pbVar18;
  undefined1 *puVar19;
  byte *pbVar20;
  undefined1 *puVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 uStack_12d;
  undefined3 uStack_12c;
  undefined1 *puStack_128;
  byte *pbStack_120;
  undefined1 *puStack_118;
  ulonglong *puStack_108;
  undefined1 *puStack_100;
  byte *pbStack_f8;
  undefined1 *puStack_f0;
  undefined1 uStack_e1;
  byte *pbStack_e0;
  undefined1 uStack_d1;
  undefined8 uStack_d0;
  
  uStack_d0 = 0xfffffffffffffffe;
  uStack_d1 = 1;
  puStack_108 = param_4;
  pdb_141484310(&puStack_128,param_2,param_3,param_5,param_6,param_7);
  pbStack_e0 = pbStack_120;
  pdb_141484710(pbStack_120,puStack_118,puStack_108,1);
  if (puStack_128 != (undefined1 *)0x0) {
    pub_1406abac0(pbStack_e0,(longlong)puStack_128 << 4,4);
  }
  uVar6 = *puStack_108;
  arg0 = (byte *)puStack_108[1];
  puVar21 = (undefined1 *)puStack_108[2];
  *puStack_108 = 0;
  puStack_108[1] = 8;
  puStack_108[2] = 0;
  pbStack_e0 = puVar21;
  if (puVar21 == (undefined1 *)0x0) {
    pbStack_f8 = (byte *)0x8;
    arg0_00 = (byte *)0x1;
LAB_141487919:
    fVar12 = _DAT_142e37870;
    fVar11 = _DAT_142e37848;
    uVar10 = _DAT_142e377e0;
    puStack_f0 = (undefined1 *)0x0;
    puVar21 = (undefined1 *)0x0;
    puStack_100 = pbStack_e0;
    do {
      puVar14 = puStack_f0;
      pbVar20 = pbStack_f8;
      pbVar18 = arg0 + (longlong)puVar21 * 0x28 + -7;
      do {
        puVar19 = puVar21;
        pbVar17 = pbVar18;
        if (pbStack_e0 <= puVar19) {
          puStack_128 = &uStack_e1;
          if ((undefined1 *)0x1 < puStack_f0) {
            if (puStack_f0 < (undefined1 *)0x15) {
              pbVar17 = pbStack_f8 + (longlong)puStack_f0 * 0x28;
              pbVar18 = pbStack_f8 + 0x28;
              do {
                pdb_14145b0e0(pbVar20,pbVar18);
                pbVar18 = pbVar18 + 0x28;
              } while (pbVar18 != pbVar17);
            }
            else {
              pdb_141465400(pbStack_f8,puStack_f0,&puStack_128);
            }
          }
          puVar13 = puStack_108;
          puStack_118 = puStack_f0;
          puStack_128 = puStack_100;
          pbStack_120 = pbStack_f8;
          if (*puStack_108 != 0) {
            pub_1406abac0((byte *)puStack_108[1],*puStack_108 * 0x28,8);
          }
          puVar13[2] = (ulonglong)puStack_118;
          *puVar13 = (ulonglong)puStack_128;
          puVar13[1] = (ulonglong)pbStack_120;
          if (pbStack_e0 != (undefined1 *)0x0) {
            pub_1406abac0(arg0_00,(ulonglong)pbStack_e0,1);
          }
          if (uVar6 != 0) {
            pub_1406abac0(arg0,uVar6 * 0x28,8);
          }
          puStack_118 = (undefined1 *)puStack_108[2];
          puStack_128 = (undefined1 *)*puStack_108;
          pbStack_120 = (byte *)puStack_108[1];
          uStack_d1 = 0;
          pdb_141453410(&puStack_100,&puStack_128);
          pdb_141488be0(&puStack_100);
          param_1[2] = (ulonglong)puStack_f0;
          *param_1 = (ulonglong)puStack_100;
          param_1[1] = (ulonglong)pbStack_f8;
          return;
        }
        puVar21 = puVar19 + 1;
        pbVar18 = pbVar17 + 0x28;
      } while (arg0_00[(longlong)puVar19] != 0);
      arg0_00[(longlong)puVar19] = 1;
      uVar7 = *(ulonglong *)(pbVar17 + 7);
      lVar8 = *(longlong *)(pbVar17 + 0xf);
      fVar1 = *(float *)(pbVar17 + 0x17);
      fVar25 = *(float *)(pbVar17 + 0x1b);
      fVar2 = *(float *)(pbVar17 + 0x1f);
      fVar24 = *(float *)(pbVar17 + 0x23);
      bVar4 = pbVar17[0x27];
      uStack_12c = (undefined3)((uint)*(undefined4 *)(pbVar17 + 0x2b) >> 8);
      uVar5 = *(undefined4 *)(pbVar17 + 0x28);
      bVar16 = false;
      pbVar20 = (undefined1 *)0x0;
      if ((uVar7 & 1) == 0) {
LAB_1414879ef:
        do {
          pbVar18 = arg0 + (longlong)pbVar20 * 0x28 + 0x20;
          puVar19 = pbVar20;
          do {
            if (pbStack_e0 <= puVar19) {
LAB_141487d6b:
              if (pbVar20 <= pbStack_e0) {
                pbVar20 = pbStack_e0;
              }
                    /* WARNING: Subroutine does not return */
              pdb_142dc81f2(pbVar20,pbStack_e0,&UNK_14330d258);
            }
            if (((((arg0_00[(longlong)puVar19] == 0) && ((pbVar18[-0x20] & 1) == 0)) &&
                 (*pbVar18 == bVar4)) &&
                (((float)((uint)(fVar1 - *(float *)(pbVar18 + -0x10)) & uVar10) <= fVar11 &&
                 ((float)((uint)(fVar2 - *(float *)(pbVar18 + -8)) & uVar10) <= fVar11)))) &&
               ((fVar3 = *(float *)(pbVar18 + -4), fVar25 <= fVar3 + fVar12 &&
                (fVar22 = *(float *)(pbVar18 + -0xc), fVar22 <= fVar24 + fVar12)))) {
              fVar23 = fVar22;
              if (fVar25 <= fVar22) {
                fVar23 = fVar25;
              }
              fVar25 = (float)(~-(uint)NAN(fVar25) & (uint)fVar23 |
                              -(uint)NAN(fVar25) & (uint)fVar22);
              fVar22 = fVar3;
              if (fVar3 <= fVar24) {
                fVar22 = fVar24;
              }
              fVar24 = (float)(~-(uint)NAN(fVar24) & (uint)fVar22 | -(uint)NAN(fVar24) & (uint)fVar3
                              );
              arg0_00[(longlong)puVar19] = 1;
              pbVar20 = puVar19 + 1;
              bVar16 = true;
              bVar15 = bVar16;
              if (pbVar20 < pbStack_e0) goto LAB_1414879ef;
              break;
            }
            puVar19 = puVar19 + 1;
            pbVar18 = pbVar18 + 0x28;
            bVar15 = bVar16;
          } while (puVar19 < pbStack_e0);
          pbVar20 = (undefined1 *)0x0;
          bVar16 = false;
        } while (bVar15);
      }
      else {
LAB_141487aef:
        do {
          bVar15 = bVar16;
          pbVar18 = arg0 + (longlong)pbVar20 * 0x28 + 0x20;
          puVar19 = pbVar20;
          do {
            if (pbStack_e0 <= puVar19) goto LAB_141487d6b;
            if ((((arg0_00[(longlong)puVar19] == 0) && (*(longlong *)(pbVar18 + -0x20) == 1)) &&
                (*(longlong *)(pbVar18 + -0x18) == lVar8)) &&
               (((*pbVar18 == bVar4 &&
                 ((float)((uint)(fVar1 - *(float *)(pbVar18 + -0x10)) & uVar10) <= fVar11)) &&
                (((float)((uint)(fVar2 - *(float *)(pbVar18 + -8)) & uVar10) <= fVar11 &&
                 ((fVar3 = *(float *)(pbVar18 + -4), fVar25 <= fVar3 + fVar12 &&
                  (fVar22 = *(float *)(pbVar18 + -0xc), fVar22 <= fVar24 + fVar12)))))))) {
              fVar23 = fVar22;
              if (fVar25 <= fVar22) {
                fVar23 = fVar25;
              }
              fVar25 = (float)(~-(uint)NAN(fVar25) & (uint)fVar23 |
                              -(uint)NAN(fVar25) & (uint)fVar22);
              fVar22 = fVar3;
              if (fVar3 <= fVar24) {
                fVar22 = fVar24;
              }
              fVar24 = (float)(~-(uint)NAN(fVar24) & (uint)fVar22 | -(uint)NAN(fVar24) & (uint)fVar3
                              );
              arg0_00[(longlong)puVar19] = 1;
              pbVar20 = puVar19 + 1;
              bVar15 = true;
              bVar16 = bVar15;
              if (pbVar20 < pbStack_e0) goto LAB_141487aef;
              break;
            }
            puVar19 = puVar19 + 1;
            pbVar18 = pbVar18 + 0x28;
          } while (puVar19 < pbStack_e0);
          pbVar20 = (undefined1 *)0x0;
          bVar16 = false;
        } while (bVar15);
      }
      if (puStack_f0 == puStack_100) {
        pdb_142d7ede0(&puStack_100);
      }
      *(ulonglong *)(pbStack_f8 + (longlong)puVar14 * 0x28) = uVar7;
      *(longlong *)(pbStack_f8 + (longlong)puVar14 * 0x28 + 8) = lVar8;
      *(float *)(pbStack_f8 + (longlong)puVar14 * 0x28 + 0x10) = fVar1;
      *(float *)(pbStack_f8 + (longlong)puVar14 * 0x28 + 0x14) = fVar25;
      *(float *)(pbStack_f8 + (longlong)puVar14 * 0x28 + 0x18) = fVar2;
      *(float *)(pbStack_f8 + (longlong)puVar14 * 0x28 + 0x1c) = fVar24;
      pbStack_f8[(longlong)puVar14 * 0x28 + 0x20] = bVar4;
      uStack_12d = (undefined1)((uint)uVar5 >> 0x18);
      *(undefined4 *)(pbStack_f8 + (longlong)puVar14 * 0x28 + 0x21) = uVar5;
      *(uint *)(pbStack_f8 + (longlong)puVar14 * 0x28 + 0x24) = CONCAT31(uStack_12c,uStack_12d);
      puStack_f0 = puVar14 + 1;
    } while( true );
  }
  pdb_14007ee60();
  arg0_00 = pub_1406abae0((ulonglong)puVar21,1);
  if (arg0_00 == (byte *)0x0) {
    pdb_142dc7e2a(1,puVar21);
  }
  else {
    pdb_14007ee60();
    pbStack_f8 = pub_1406abab0((longlong)puVar21 * 0x28,8);
    if (pbStack_f8 != (byte *)0x0) goto LAB_141487919;
    pdb_142dc7e2a(8,(longlong)puVar21 * 0x28);
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)invalidInstructionException();
  (*pcVar9)();
}

