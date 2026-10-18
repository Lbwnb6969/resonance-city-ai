// VA 0x140c14610, PDB extent 1741 bytes
// zeno::segment::impl$5::next<core::iter::adapters::map::Map<core::iter::adapters::copied::Copied<core::slice::iter::Iter<enum2$<zeno::command::Command> > >,zeno::path_data::apply::closure_env$0<ref$<ref$<slice2$<enum2$<zeno::command::Command> > > >,enum2$<zeno::style::Style>,zeno::raster::Rasterizer<zeno::raster::AdaptiveStorage> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   zeno::segment::impl$5::next<core::iter::adapters::map::Map<core::iter::adapters::copied::Copied<core::slice::iter::Iter<enum2$<zeno::command::Command>
   > >,zeno::path_data::apply::closure_env$0<ref$<ref$<slice2$<enum2$<zeno::command::Command> > >
   >,enum2$<zeno::style::Style>,zeno::raster::Rasterizer<zeno::raster::AdaptiveStorage> > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 1741 */

char * pdb_140c14610(char *param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  float fVar4;
  char cVar5;
  ulonglong uVar6;
  int *piVar7;
  undefined8 uVar8;
  uint uVar9;
  float fVar10;
  char *pcVar11;
  int *piVar12;
  char cVar13;
  float fVar14;
  uint uStack_d8;
  float fStack_d4;
  float fStack_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  
  if (*(char *)(param_2 + 0x23d) == '\0') {
    if (*(char *)(param_2 + 0x23e) == '\x01') {
      do {
        uVar6 = *(ulonglong *)(param_2 + 0x218);
        if (*(ulonglong *)(param_2 + 0x210) <= uVar6) {
          cVar13 = *(char *)(param_2 + 0x23c) + '\x01';
          if (*(char *)(param_2 + 0x23c) == -2) {
            cVar13 = '\0';
          }
          *(char *)(param_2 + 0x23c) = cVar13;
          piVar7 = *(int **)(param_2 + 0x220);
          if (((piVar7 != *(int **)(param_2 + 0x228)) &&
              (*(int **)(param_2 + 0x220) = piVar7 + 7, *piVar7 != 5)) &&
             (pdb_140c114c0(&uStack_d8,piVar7,*(undefined8 *)(param_2 + 0x230)), uStack_d8 != 5)) {
                    /* WARNING: Could not recover jumptable at 0x000140c147d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pcVar11 = (char *)(*(code *)(&UNK_143068b50 +
                                        *(int *)(&UNK_143068b50 + (ulonglong)uStack_d8 * 4)))
                                        (fStack_d4,fStack_d0);
            return pcVar11;
          }
          goto LAB_140c14a46;
        }
        if (0xf < uVar6) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc81f2(uVar6,0x10,&UNK_1430689a8);
        }
        puVar2 = (uint *)(param_2 + uVar6 * 0x20);
        uStack_d8 = *puVar2;
        fStack_d4 = (float)puVar2[1];
        fStack_d0 = (float)puVar2[2];
        uStack_cc = puVar2[3];
        puVar3 = (undefined4 *)(param_2 + 0x10 + uVar6 * 0x20);
        uStack_c8 = *puVar3;
        uStack_c4 = puVar3[1];
        uStack_c0 = puVar3[2];
        uStack_bc = puVar3[3];
        *(ulonglong *)(param_2 + 0x218) = uVar6 + 1;
        pdb_141c70590(param_1,&uStack_d8,*(undefined1 *)(param_2 + 0x23c));
      } while (*param_1 == '\x03');
      *(int *)(param_2 + 0x238) = *(int *)(param_2 + 0x238) + 1;
      *(undefined1 *)(param_2 + 0x23f) = 0;
      *(ulonglong *)(param_2 + 0x208) = CONCAT44(uStack_bc,uStack_c0);
    }
    else {
      cVar5 = *(char *)(param_2 + 0x23c);
      cVar13 = cVar5 + '\x01';
      if (cVar5 == -2) {
        cVar13 = '\0';
      }
      *(char *)(param_2 + 0x23c) = cVar13;
      fVar10 = _DAT_142e37848;
      uVar9 = _DAT_142e377e0;
      piVar7 = *(int **)(param_2 + 0x228);
      piVar12 = *(int **)(param_2 + 0x220);
      if (piVar12 != piVar7) {
        fVar14 = (float)*(undefined8 *)(param_2 + 0x208);
        fVar4 = *(float *)(param_2 + 0x20c);
        uVar8 = *(undefined8 *)(param_2 + 0x230);
        if ((*(byte *)(param_2 + 0x23f) & 1) == 0) {
          do {
            piVar1 = piVar12 + 7;
            *(int **)(param_2 + 0x220) = piVar1;
            if ((*piVar12 == 5) || (pdb_140c114c0(&uStack_d8,piVar12,uVar8), uStack_d8 == 5)) break;
            if (uStack_d8 != 1) {
                    /* WARNING: Could not recover jumptable at 0x000140c14ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              pcVar11 = (char *)(*(code *)(&UNK_143068b28 +
                                          *(int *)(&UNK_143068b28 + (ulonglong)uStack_d8 * 4)))();
              return pcVar11;
            }
            if ((fVar10 <= (float)((uint)(fVar14 - fStack_d4) & uVar9)) ||
               (fVar10 <= (float)((uint)(fVar4 - fStack_d0) & uVar9))) {
              *(int *)(param_2 + 0x238) = *(int *)(param_2 + 0x238) + 1;
              *(ulonglong *)(param_2 + 0x208) = CONCAT44(fStack_d0,fStack_d4);
              *(undefined1 *)(param_2 + 0x23f) = 0;
              *param_1 = '\0';
              param_1[1] = cVar5;
              *(float *)(param_1 + 4) = fVar14;
              *(float *)(param_1 + 8) = fVar4;
              *(ulonglong *)(param_1 + 0xc) = CONCAT44(fStack_d0,fStack_d4);
              return param_1;
            }
            piVar12 = piVar1;
          } while (piVar1 != piVar7);
        }
        else {
          *(int **)(param_2 + 0x220) = piVar12 + 7;
          if ((*piVar12 != 5) && (pdb_140c114c0(&uStack_d8,piVar12,uVar8), uStack_d8 != 5)) {
                    /* WARNING: Could not recover jumptable at 0x000140c1498e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            pcVar11 = (char *)(*(code *)(&UNK_143068b3c +
                                        *(int *)(&UNK_143068b3c + (ulonglong)uStack_d8 * 4)))
                                        (fStack_d4,fStack_d0);
            return pcVar11;
          }
        }
      }
LAB_140c14a46:
      *param_1 = '\x03';
    }
  }
  else {
    *(undefined1 *)(param_2 + 0x23d) = 0;
    *(undefined1 *)(param_2 + 0x23f) = 1;
    param_1[0] = '\x02';
    param_1[1] = '\x01';
  }
  return param_1;
}

