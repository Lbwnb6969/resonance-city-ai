// VA 0x140471460, PDB extent 2678 bytes
// conservative_line_raster::conservative_plot_line<country_core::utils::dirty_tiles::impl$0::iter_world_space_stroke_cells::closure_env$0<array$<glam::f32::vec2::Vec2,2>,system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::playermade_stairs_assemble::closure_env$15<true> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/conservative-line-raster/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   conservative_line_raster::conservative_plot_line<country_core::utils::dirty_tiles::impl$0::iter_world_space_stroke_cells::closure_env$0<array$<glam::f32::vec2::Vec2,2>,system_decorator::decorator_visual::playermade_stairs::playermade_stairs_assemble_visuals::playermade_stairs_assemble::closure_env$15<true>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/conservative-line-raster/src/lib.rs
   Extent: 2678 */

void pdb_140471460(float param_1,float param_2,float param_3,float param_4,float param_5,
                  undefined8 *param_6)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar11 = param_4 - param_2;
  fVar12 = param_3 - param_1;
  if ((float)((uint)fVar12 & _DAT_142e377e0) <= (float)(_DAT_142e377e0 & (uint)fVar11)) {
    fVar12 = fVar12 / fVar11;
    if (0x7f7fffff < (uint)ABS(fVar12)) {
      fVar12 = 0.0;
    }
    fVar11 = param_4;
    fVar13 = param_1;
    if (param_4 < param_2) {
      fVar11 = param_2;
      param_2 = param_4;
      fVar13 = param_3;
      param_3 = param_1;
    }
    fVar9 = (float)pub_142e32a40(param_2 - param_5);
    uVar5 = (uint)fVar9;
    if (_DAT_142e382cc < fVar9) {
      uVar5 = 0x7fffffff;
    }
    uVar2 = 0;
    if (NAN(fVar9)) {
      uVar5 = uVar2;
    }
    fVar14 = fVar13 - param_5 * fVar12;
    fVar11 = fVar11 + param_5;
    fVar9 = fVar9 + _DAT_142e36f28;
    fVar15 = (_DAT_142e36f28 - (float)(_DAT_142e377e0 & (uint)fVar12)) * param_5;
    fVar10 = fVar11;
    if (fVar9 <= fVar11) {
      fVar10 = fVar9;
    }
    fVar9 = ((float)(~-(uint)NAN(fVar9) & (uint)fVar10 | -(uint)NAN(fVar9) & (uint)fVar11) -
            (param_2 - param_5)) * fVar12 + fVar14;
    uVar3 = 0x7fffffff;
    if (param_3 <= fVar13) {
      pdb_140cb17b0(fVar12,&UNK_142f5b600);
      fVar10 = (float)pub_142e32850(fVar12,_DAT_142e36f28);
      fVar13 = _DAT_142e382cc;
      param_5 = param_5 * fVar10;
      fVar10 = fVar9 - param_5;
      uVar7 = (int)fVar10;
      if (_DAT_142e382cc < fVar10) {
        uVar7 = 0x7fffffff;
      }
      if (NAN(fVar10)) {
        uVar7 = uVar2;
      }
      fVar14 = fVar14 + fVar15;
      uVar2 = (int)fVar14;
      if (_DAT_142e382cc < fVar14) {
        uVar2 = uVar3;
      }
      if (NAN(fVar14)) {
        uVar2 = 0;
      }
      uVar1 = *param_6;
      if ((int)uVar7 < (int)(uVar2 + 1)) {
        do {
          if ((uVar7 | uVar5) < 0x40) {
            pdb_1403b1e80(uVar1,(uVar5 & 0xff) * 0x100 + uVar7);
          }
          uVar7 = uVar7 + 1;
        } while (uVar2 + 1 != uVar7);
      }
      fVar10 = (float)pub_142e32a40(fVar11);
      uVar2 = (uint)fVar10;
      if (_DAT_142e382cc < fVar10) {
        uVar2 = 0x7fffffff;
      }
      uVar3 = 0;
      if (NAN(fVar10)) {
        uVar2 = uVar3;
      }
      uVar7 = uVar5 * 0x100 + 0x100 & 0xffff;
      while( true ) {
        uVar5 = uVar5 + 1;
        if ((char)(((int)uVar2 < (int)uVar5) - ((int)uVar5 < (int)uVar2)) != -1) break;
        fVar14 = (fVar12 + fVar9) - param_5;
        uVar6 = (int)fVar14;
        if (fVar13 < fVar14) {
          uVar6 = 0x7fffffff;
        }
        if (NAN(fVar14)) {
          uVar6 = uVar3;
        }
        fVar14 = fVar9 + param_5;
        uVar8 = (uint)fVar14;
        if (fVar13 < fVar14) {
          uVar8 = 0x7fffffff;
        }
        if (NAN(fVar14)) {
          uVar8 = uVar3;
        }
        if ((int)uVar6 < (int)(uVar8 + 1)) {
          do {
            if ((uVar6 | uVar5) < 0x40) {
              pdb_1403b1e80(uVar1,uVar7 + uVar6);
            }
            uVar6 = uVar6 + 1;
          } while (uVar8 + 1 != uVar6);
        }
        uVar7 = uVar7 + 0x100;
        fVar9 = fVar12 + fVar9;
      }
      if ((int)uVar2 < (int)uVar5 == (int)uVar5 < (int)uVar2) {
        fVar15 = (fVar12 * (fVar11 - fVar10) + fVar9) - fVar15;
        uVar2 = (int)fVar15;
        if (fVar13 < fVar15) {
          uVar2 = 0x7fffffff;
        }
        if (NAN(fVar15)) {
          uVar2 = 0;
        }
        param_5 = param_5 + fVar9;
        uVar3 = (int)param_5;
        if (fVar13 < param_5) {
          uVar3 = 0x7fffffff;
        }
        if (NAN(param_5)) {
          uVar3 = 0;
        }
        if ((int)uVar2 < (int)(uVar3 + 1)) {
          iVar4 = uVar7 + uVar2;
          do {
            if ((uVar2 | uVar5) < 0x40) {
              pdb_1403b1e80(uVar1,iVar4);
            }
            uVar2 = uVar2 + 1;
            iVar4 = iVar4 + 1;
          } while (uVar3 + 1 != uVar2);
        }
      }
    }
    else {
      pdb_140cb1800();
      fVar10 = (float)pub_142e32850(fVar12,_DAT_142e36f28);
      fVar13 = _DAT_142e382cc;
      fVar14 = fVar14 - fVar15;
      uVar7 = (int)fVar14;
      if (_DAT_142e382cc < fVar14) {
        uVar7 = uVar3;
      }
      param_5 = param_5 * fVar10;
      if (NAN(fVar14)) {
        uVar7 = uVar2;
      }
      fVar10 = fVar9 + param_5;
      uVar2 = (int)fVar10;
      if (_DAT_142e382cc < fVar10) {
        uVar2 = uVar3;
      }
      if (NAN(fVar10)) {
        uVar2 = 0;
      }
      uVar1 = *param_6;
      if ((int)uVar7 < (int)(uVar2 + 1)) {
        do {
          if ((uVar7 | uVar5) < 0x40) {
            pdb_1403b1e80(uVar1,(uVar5 & 0xff) * 0x100 + uVar7);
          }
          uVar7 = uVar7 + 1;
        } while (uVar2 + 1 != uVar7);
      }
      fVar10 = (float)pub_142e32a40(fVar11);
      uVar2 = (uint)fVar10;
      if (_DAT_142e382cc < fVar10) {
        uVar2 = 0x7fffffff;
      }
      uVar3 = 0;
      if (NAN(fVar10)) {
        uVar2 = uVar3;
      }
      uVar7 = uVar5 * 0x100 + 0x100 & 0xffff;
      while( true ) {
        uVar5 = uVar5 + 1;
        if ((char)(((int)uVar2 < (int)uVar5) - ((int)uVar5 < (int)uVar2)) != -1) break;
        fVar14 = fVar9 - param_5;
        uVar6 = (int)fVar14;
        if (fVar13 < fVar14) {
          uVar6 = 0x7fffffff;
        }
        if (NAN(fVar14)) {
          uVar6 = uVar3;
        }
        fVar14 = param_5 + fVar12 + fVar9;
        uVar8 = (uint)fVar14;
        if (fVar13 < fVar14) {
          uVar8 = 0x7fffffff;
        }
        if (NAN(fVar14)) {
          uVar8 = uVar3;
        }
        if ((int)uVar6 < (int)(uVar8 + 1)) {
          do {
            if ((uVar6 | uVar5) < 0x40) {
              pdb_1403b1e80(uVar1,uVar7 + uVar6);
            }
            uVar6 = uVar6 + 1;
          } while (uVar8 + 1 != uVar6);
        }
        uVar7 = uVar7 + 0x100;
        fVar9 = fVar12 + fVar9;
      }
      if ((int)uVar2 < (int)uVar5 == (int)uVar5 < (int)uVar2) {
        param_5 = fVar9 - param_5;
        uVar2 = (int)param_5;
        if (fVar13 < param_5) {
          uVar2 = 0x7fffffff;
        }
        if (NAN(param_5)) {
          uVar2 = 0;
        }
        fVar15 = fVar15 + fVar12 * (fVar11 - fVar10) + fVar9;
        uVar3 = (int)fVar15;
        if (fVar13 < fVar15) {
          uVar3 = 0x7fffffff;
        }
        if (NAN(fVar15)) {
          uVar3 = 0;
        }
        if ((int)uVar2 < (int)(uVar3 + 1)) {
          iVar4 = uVar7 + uVar2;
          do {
            if ((uVar2 | uVar5) < 0x40) {
              pdb_1403b1e80(uVar1,iVar4);
            }
            uVar2 = uVar2 + 1;
            iVar4 = iVar4 + 1;
          } while (uVar3 + 1 != uVar2);
        }
      }
    }
  }
  else {
    fVar11 = fVar11 / fVar12;
    if (0x7f7fffff < (uint)ABS(fVar11)) {
      fVar11 = 0.0;
    }
    fVar12 = param_3;
    fVar13 = param_2;
    if (param_3 < param_1) {
      fVar12 = param_1;
      fVar13 = param_4;
      param_1 = param_3;
      param_4 = param_2;
    }
    fVar9 = (float)pub_142e32a40(param_1 - param_5);
    uVar5 = (int)fVar9;
    if (_DAT_142e382cc < fVar9) {
      uVar5 = 0x7fffffff;
    }
    if (NAN(fVar9)) {
      uVar5 = 0;
    }
    fVar14 = fVar13 - param_5 * fVar11;
    fVar12 = fVar12 + param_5;
    fVar9 = fVar9 + _DAT_142e36f28;
    fVar15 = (_DAT_142e36f28 - (float)(_DAT_142e377e0 & (uint)fVar11)) * param_5;
    fVar10 = fVar12;
    if (fVar9 <= fVar12) {
      fVar10 = fVar9;
    }
    fVar9 = ((float)(~-(uint)NAN(fVar9) & (uint)fVar10 | -(uint)NAN(fVar9) & (uint)fVar12) -
            (param_1 - param_5)) * fVar11 + fVar14;
    uVar2 = 0x7fffffff;
    if (param_4 <= fVar13) {
      pdb_140cb17b0(fVar11,&UNK_142f5b600);
      fVar10 = (float)pub_142e32850(fVar11,_DAT_142e36f28);
      fVar13 = _DAT_142e382cc;
      param_5 = param_5 * fVar10;
      fVar10 = fVar9 - param_5;
      uVar3 = (int)fVar10;
      if (_DAT_142e382cc < fVar10) {
        uVar3 = 0x7fffffff;
      }
      if (NAN(fVar10)) {
        uVar3 = 0;
      }
      fVar14 = fVar14 + fVar15;
      uVar7 = (int)fVar14;
      if (_DAT_142e382cc < fVar14) {
        uVar7 = uVar2;
      }
      if (NAN(fVar14)) {
        uVar7 = 0;
      }
      uVar1 = *param_6;
      if ((int)uVar3 < (int)(uVar7 + 1)) {
        iVar4 = uVar3 * 0x100 + uVar5;
        do {
          if ((uVar3 | uVar5) < 0x40) {
            pdb_1403b1e80(uVar1,iVar4);
          }
          uVar3 = uVar3 + 1;
          iVar4 = iVar4 + 0x100;
        } while (uVar7 + 1 != uVar3);
      }
      fVar10 = (float)pub_142e32a40(fVar12);
      uVar2 = (int)fVar10;
      if (_DAT_142e382cc < fVar10) {
        uVar2 = 0x7fffffff;
      }
      uVar3 = uVar5;
      if (NAN(fVar10)) {
        uVar2 = 0;
      }
      while( true ) {
        uVar5 = uVar5 + 1;
        uVar3 = uVar3 + 1;
        if ((char)(((int)uVar2 < (int)uVar3) - ((int)uVar3 < (int)uVar2)) != -1) break;
        fVar16 = fVar11 + fVar9;
        fVar14 = fVar16 - param_5;
        uVar7 = (int)fVar14;
        if (fVar13 < fVar14) {
          uVar7 = 0x7fffffff;
        }
        if (NAN(fVar14)) {
          uVar7 = 0;
        }
        fVar9 = fVar9 + param_5;
        uVar6 = (int)fVar9;
        if (fVar13 < fVar9) {
          uVar6 = 0x7fffffff;
        }
        if (NAN(fVar9)) {
          uVar6 = 0;
        }
        fVar9 = fVar16;
        if ((int)uVar7 < (int)(uVar6 + 1)) {
          iVar4 = uVar7 * 0x100 + uVar5;
          do {
            if ((uVar7 | uVar3) < 0x40) {
              pdb_1403b1e80(uVar1,iVar4);
            }
            uVar7 = uVar7 + 1;
            iVar4 = iVar4 + 0x100;
          } while (uVar6 + 1 != uVar7);
        }
      }
      if ((int)uVar2 < (int)uVar3 == (int)uVar3 < (int)uVar2) {
        fVar15 = (fVar11 * (fVar12 - fVar10) + fVar9) - fVar15;
        uVar2 = (int)fVar15;
        if (fVar13 < fVar15) {
          uVar2 = 0x7fffffff;
        }
        if (NAN(fVar15)) {
          uVar2 = 0;
        }
        param_5 = param_5 + fVar9;
        uVar7 = (int)param_5;
        if (fVar13 < param_5) {
          uVar7 = 0x7fffffff;
        }
        if (NAN(param_5)) {
          uVar7 = 0;
        }
        if ((int)uVar2 < (int)(uVar7 + 1)) {
          iVar4 = uVar5 + uVar2 * 0x100;
          do {
            if ((uVar2 | uVar3) < 0x40) {
              pdb_1403b1e80(uVar1,iVar4);
            }
            uVar2 = uVar2 + 1;
            iVar4 = iVar4 + 0x100;
          } while (uVar7 + 1 != uVar2);
        }
      }
    }
    else {
      pdb_140cb1800();
      fVar10 = (float)pub_142e32850(fVar11,_DAT_142e36f28);
      fVar13 = _DAT_142e382cc;
      fVar14 = fVar14 - fVar15;
      uVar3 = (int)fVar14;
      if (_DAT_142e382cc < fVar14) {
        uVar3 = uVar2;
      }
      param_5 = param_5 * fVar10;
      if (NAN(fVar14)) {
        uVar3 = 0;
      }
      fVar10 = fVar9 + param_5;
      uVar7 = (int)fVar10;
      if (_DAT_142e382cc < fVar10) {
        uVar7 = uVar2;
      }
      if (NAN(fVar10)) {
        uVar7 = 0;
      }
      uVar1 = *param_6;
      if ((int)uVar3 < (int)(uVar7 + 1)) {
        iVar4 = uVar3 * 0x100 + uVar5;
        do {
          if ((uVar3 | uVar5) < 0x40) {
            pdb_1403b1e80(uVar1,iVar4);
          }
          uVar3 = uVar3 + 1;
          iVar4 = iVar4 + 0x100;
        } while (uVar7 + 1 != uVar3);
      }
      fVar10 = (float)pub_142e32a40(fVar12);
      uVar2 = (int)fVar10;
      if (_DAT_142e382cc < fVar10) {
        uVar2 = 0x7fffffff;
      }
      uVar3 = uVar5;
      if (NAN(fVar10)) {
        uVar2 = 0;
      }
      while( true ) {
        uVar5 = uVar5 + 1;
        uVar3 = uVar3 + 1;
        if ((char)(((int)uVar2 < (int)uVar3) - ((int)uVar3 < (int)uVar2)) != -1) break;
        fVar14 = fVar11 + fVar9;
        fVar9 = fVar9 - param_5;
        uVar7 = (int)fVar9;
        if (fVar13 < fVar9) {
          uVar7 = 0x7fffffff;
        }
        if (NAN(fVar9)) {
          uVar7 = 0;
        }
        fVar9 = param_5 + fVar14;
        uVar6 = (int)fVar9;
        if (fVar13 < fVar9) {
          uVar6 = 0x7fffffff;
        }
        if (NAN(fVar9)) {
          uVar6 = 0;
        }
        fVar9 = fVar14;
        if ((int)uVar7 < (int)(uVar6 + 1)) {
          iVar4 = uVar7 * 0x100 + uVar5;
          do {
            if ((uVar7 | uVar3) < 0x40) {
              pdb_1403b1e80(uVar1,iVar4);
            }
            uVar7 = uVar7 + 1;
            iVar4 = iVar4 + 0x100;
          } while (uVar6 + 1 != uVar7);
        }
      }
      if ((int)uVar2 < (int)uVar3 == (int)uVar3 < (int)uVar2) {
        param_5 = fVar9 - param_5;
        uVar2 = (int)param_5;
        if (fVar13 < param_5) {
          uVar2 = 0x7fffffff;
        }
        if (NAN(param_5)) {
          uVar2 = 0;
        }
        fVar15 = fVar15 + fVar11 * (fVar12 - fVar10) + fVar9;
        uVar7 = (int)fVar15;
        if (fVar13 < fVar15) {
          uVar7 = 0x7fffffff;
        }
        if (NAN(fVar15)) {
          uVar7 = 0;
        }
        if ((int)uVar2 < (int)(uVar7 + 1)) {
          iVar4 = uVar5 + uVar2 * 0x100;
          do {
            if ((uVar2 | uVar3) < 0x40) {
              pdb_1403b1e80(uVar1,iVar4);
            }
            uVar2 = uVar2 + 1;
            iVar4 = iVar4 + 0x100;
          } while (uVar7 + 1 != uVar2);
        }
      }
    }
  }
  return;
}

