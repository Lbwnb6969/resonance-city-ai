// VA 0x1417de160, PDB extent 3355 bytes
// conservative_line_raster::conservative_plot_line<country_core::utils::dirty_tiles::impl$0::iter_world_space_stroke_cells::closure_env$0<core::iter::adapters::map::Map<core::slice::iter::Iter<glam::f32::vec3::Vec3>,country_core::systems::history::replay_raster::replay_raster::closure_env$2<country_core::resources::world_raster_defs::PathRasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::history::replay_path::replay_path::closure_env$1<country_core::systems::history::replay_path::DirtPathFilter> > >,country_core::utils::dirty_tiles::impl$0::rasterize_world_space_stroke::closure_env$0<core::iter::adapters::map::Map<core::slice::iter::Iter<glam::f32::vec3::Vec3>,country_core::systems::history::replay_raster::replay_raster::closure_env$2<country_core::resources::world_raster_defs::PathRasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::history::replay_path::replay_path::closure_env$1<country_core::systems::history::replay_path::DirtPathFilter> > > > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/conservative-line-raster/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   conservative_line_raster::conservative_plot_line<country_core::utils::dirty_tiles::impl$0::iter_world_space_stroke_cells::closure_env$0<core::iter::adapters::map::Map<core::slice::iter::Iter<glam::f32::vec3::Vec3>,country_core::systems::history::replay_raster::replay_raster::closure_env$2<country_core::resources::world_raster_defs::PathRasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::history::replay_path::replay_path::closure_env$1<country_core::systems::history::replay_path::DirtPathFilter>
   > 
   >,country_core::utils::dirty_tiles::impl$0::rasterize_world_space_stroke::closure_env$0<core::iter::adapters::map::Map<core::slice::iter::Iter<glam::f32::vec3::Vec3>,country_core::systems::history::replay_raster::replay_raster::closure_env$2<country_core::resources::world_raster_defs::PathRasterStagingSsbo,country_core::resources::world_raster::WorldRaster<512>,country_core::systems::history::replay_path::replay_path::closure_env$1<country_core::systems::history::replay_path::DirtPathFilter>
   > > > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/conservative-line-raster/src/lib.rs
   Extent: 3355 */

void pdb_1417de160(float param_1,float param_2,float param_3,float param_4,float param_5,
                  longlong *param_6)

{
  ulonglong *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar15 = param_4 - param_2;
  fVar14 = param_3 - param_1;
  if ((float)((uint)fVar14 & _DAT_142e377e0) <= (float)(_DAT_142e377e0 & (uint)fVar15)) {
    fVar14 = fVar14 / fVar15;
    if (0x7f7fffff < (uint)ABS(fVar14)) {
      fVar14 = 0.0;
    }
    fVar15 = param_4;
    fVar16 = param_1;
    if (param_4 < param_2) {
      fVar15 = param_2;
      param_2 = param_4;
      fVar16 = param_3;
      param_3 = param_1;
    }
    fVar11 = (float)pub_142e32a40(param_2 - param_5);
    uVar9 = (int)fVar11;
    if (_DAT_142e382cc < fVar11) {
      uVar9 = 0x7fffffff;
    }
    uVar10 = (ulonglong)uVar9;
    if (NAN(fVar11)) {
      uVar10 = 0;
    }
    fVar17 = fVar16 - param_5 * fVar14;
    fVar15 = fVar15 + param_5;
    fVar11 = fVar11 + _DAT_142e36f28;
    fVar18 = (_DAT_142e36f28 - (float)(_DAT_142e377e0 & (uint)fVar14)) * param_5;
    fVar12 = fVar15;
    if (fVar11 <= fVar15) {
      fVar12 = fVar11;
    }
    fVar11 = ((float)(~-(uint)NAN(fVar11) & (uint)fVar12 | -(uint)NAN(fVar11) & (uint)fVar15) -
             (param_2 - param_5)) * fVar14 + fVar17;
    uVar9 = 0x7fffffff;
    uVar3 = (uint)uVar10;
    if (param_3 <= fVar16) {
      pdb_140cb17b0(fVar14,&UNK_14333bb38);
      fVar12 = (float)pub_142e32850(fVar14,_DAT_142e36f28);
      fVar16 = _DAT_142e382cc;
      param_5 = param_5 * fVar12;
      fVar12 = fVar11 - param_5;
      uVar6 = (int)fVar12;
      if (_DAT_142e382cc < fVar12) {
        uVar6 = 0x7fffffff;
      }
      if (NAN(fVar12)) {
        uVar6 = 0;
      }
      fVar17 = fVar17 + fVar18;
      uVar5 = (int)fVar17;
      if (_DAT_142e382cc < fVar17) {
        uVar5 = uVar9;
      }
      if (NAN(fVar17)) {
        uVar5 = 0;
      }
      lVar2 = *param_6;
      if ((int)uVar6 < (int)(uVar5 + 1)) {
        uVar9 = uVar6;
        if (((uVar5 + uVar6 & 1) == 0) && (uVar9 = uVar6 + 1, (uVar6 | uVar3) < 0x40)) {
          puVar1 = (ulonglong *)(lVar2 + uVar10 * 8);
          *puVar1 = *puVar1 | 1L << ((byte)uVar6 & 0x3f);
        }
        while (uVar5 != uVar6) {
          if ((uVar9 | uVar3) < 0x40) {
            puVar1 = (ulonglong *)(lVar2 + uVar10 * 8);
            *puVar1 = *puVar1 | 1L << ((byte)uVar9 & 0x3f);
          }
          uVar6 = uVar9 + 1;
          if ((uVar6 | uVar3) < 0x40) {
            puVar1 = (ulonglong *)(lVar2 + uVar10 * 8);
            *puVar1 = *puVar1 | 1L << ((byte)uVar6 & 0x3f);
          }
          uVar9 = uVar9 + 2;
        }
      }
      fVar12 = (float)pub_142e32a40(fVar15);
      uVar9 = (uint)fVar12;
      if (_DAT_142e382cc < fVar12) {
        uVar9 = 0x7fffffff;
      }
      if (NAN(fVar12)) {
        uVar9 = 0;
      }
      while( true ) {
        uVar3 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar3;
        if ((char)(((int)uVar9 < (int)uVar3) - ((int)uVar3 < (int)uVar9)) != -1) break;
        fVar17 = fVar14 + fVar11;
        fVar13 = fVar17 - param_5;
        uVar6 = (int)fVar13;
        if (fVar16 < fVar13) {
          uVar6 = 0x7fffffff;
        }
        if (NAN(fVar13)) {
          uVar6 = 0;
        }
        fVar11 = fVar11 + param_5;
        uVar5 = (int)fVar11;
        if (fVar16 < fVar11) {
          uVar5 = 0x7fffffff;
        }
        if (NAN(fVar11)) {
          uVar5 = 0;
        }
        fVar11 = fVar17;
        if ((int)uVar6 < (int)(uVar5 + 1)) {
          uVar7 = (ulonglong)uVar3;
          uVar4 = uVar6;
          if (((uVar5 + uVar6 & 1) == 0) && (uVar4 = uVar6 + 1, (uVar6 | uVar3) < 0x40)) {
            puVar1 = (ulonglong *)(lVar2 + uVar7 * 8);
            *puVar1 = *puVar1 | 1L << ((byte)uVar6 & 0x3f);
          }
          while (uVar5 != uVar6) {
            if ((uVar4 | uVar3) < 0x40) {
              puVar1 = (ulonglong *)(lVar2 + uVar7 * 8);
              *puVar1 = *puVar1 | 1L << ((byte)uVar4 & 0x3f);
            }
            uVar6 = uVar4 + 1;
            if ((uVar6 | uVar3) < 0x40) {
              puVar1 = (ulonglong *)(lVar2 + uVar7 * 8);
              *puVar1 = *puVar1 | 1L << ((byte)uVar6 & 0x3f);
            }
            uVar4 = uVar4 + 2;
          }
        }
      }
      if ((int)uVar9 < (int)uVar3 == (int)uVar3 < (int)uVar9) {
        fVar18 = (fVar14 * (fVar15 - fVar12) + fVar11) - fVar18;
        uVar9 = (int)fVar18;
        if (fVar16 < fVar18) {
          uVar9 = 0x7fffffff;
        }
        if (NAN(fVar18)) {
          uVar9 = 0;
        }
        param_5 = param_5 + fVar11;
        uVar6 = (int)param_5;
        if (fVar16 < param_5) {
          uVar6 = 0x7fffffff;
        }
        if (NAN(param_5)) {
          uVar6 = 0;
        }
        if ((int)uVar9 < (int)(uVar6 + 1)) {
          uVar10 = (ulonglong)uVar3;
          uVar5 = uVar9;
          if (((uVar6 + uVar9 & 1) == 0) && (uVar5 = uVar9 + 1, (uVar9 | uVar3) < 0x40)) {
            puVar1 = (ulonglong *)(lVar2 + uVar10 * 8);
            *puVar1 = *puVar1 | 1L << ((byte)uVar9 & 0x3f);
          }
          while (uVar6 != uVar9) {
            if ((uVar5 | uVar3) < 0x40) {
              puVar1 = (ulonglong *)(lVar2 + uVar10 * 8);
              *puVar1 = *puVar1 | 1L << ((byte)uVar5 & 0x3f);
            }
            uVar9 = uVar5 + 1;
            if ((uVar9 | uVar3) < 0x40) {
              puVar1 = (ulonglong *)(lVar2 + uVar10 * 8);
              *puVar1 = *puVar1 | 1L << ((byte)uVar9 & 0x3f);
            }
            uVar5 = uVar5 + 2;
          }
        }
      }
    }
    else {
      pdb_140cb1800();
      fVar12 = (float)pub_142e32850(fVar14,_DAT_142e36f28);
      fVar16 = _DAT_142e382cc;
      fVar17 = fVar17 - fVar18;
      uVar6 = (int)fVar17;
      if (_DAT_142e382cc < fVar17) {
        uVar6 = uVar9;
      }
      param_5 = param_5 * fVar12;
      if (NAN(fVar17)) {
        uVar6 = 0;
      }
      fVar12 = fVar11 + param_5;
      uVar5 = (int)fVar12;
      if (_DAT_142e382cc < fVar12) {
        uVar5 = uVar9;
      }
      if (NAN(fVar12)) {
        uVar5 = 0;
      }
      lVar2 = *param_6;
      if ((int)uVar6 < (int)(uVar5 + 1)) {
        uVar9 = uVar6;
        if (((uVar5 + uVar6 & 1) == 0) && (uVar9 = uVar6 + 1, (uVar6 | uVar3) < 0x40)) {
          puVar1 = (ulonglong *)(lVar2 + uVar10 * 8);
          *puVar1 = *puVar1 | 1L << ((byte)uVar6 & 0x3f);
        }
        while (uVar5 != uVar6) {
          if ((uVar9 | uVar3) < 0x40) {
            puVar1 = (ulonglong *)(lVar2 + uVar10 * 8);
            *puVar1 = *puVar1 | 1L << ((byte)uVar9 & 0x3f);
          }
          uVar6 = uVar9 + 1;
          if ((uVar6 | uVar3) < 0x40) {
            puVar1 = (ulonglong *)(lVar2 + uVar10 * 8);
            *puVar1 = *puVar1 | 1L << ((byte)uVar6 & 0x3f);
          }
          uVar9 = uVar9 + 2;
        }
      }
      fVar12 = (float)pub_142e32a40(fVar15);
      uVar9 = (uint)fVar12;
      if (_DAT_142e382cc < fVar12) {
        uVar9 = 0x7fffffff;
      }
      if (NAN(fVar12)) {
        uVar9 = 0;
      }
      while( true ) {
        uVar3 = (int)uVar10 + 1;
        uVar10 = (ulonglong)uVar3;
        if ((char)(((int)uVar9 < (int)uVar3) - ((int)uVar3 < (int)uVar9)) != -1) break;
        fVar17 = fVar14 + fVar11;
        fVar11 = fVar11 - param_5;
        uVar6 = (int)fVar11;
        if (fVar16 < fVar11) {
          uVar6 = 0x7fffffff;
        }
        if (NAN(fVar11)) {
          uVar6 = 0;
        }
        fVar11 = param_5 + fVar17;
        uVar5 = (int)fVar11;
        if (fVar16 < fVar11) {
          uVar5 = 0x7fffffff;
        }
        if (NAN(fVar11)) {
          uVar5 = 0;
        }
        fVar11 = fVar17;
        if ((int)uVar6 < (int)(uVar5 + 1)) {
          uVar7 = (ulonglong)uVar3;
          uVar4 = uVar6;
          if (((uVar5 + uVar6 & 1) == 0) && (uVar4 = uVar6 + 1, (uVar6 | uVar3) < 0x40)) {
            puVar1 = (ulonglong *)(lVar2 + uVar7 * 8);
            *puVar1 = *puVar1 | 1L << ((byte)uVar6 & 0x3f);
          }
          while (uVar5 != uVar6) {
            if ((uVar4 | uVar3) < 0x40) {
              puVar1 = (ulonglong *)(lVar2 + uVar7 * 8);
              *puVar1 = *puVar1 | 1L << ((byte)uVar4 & 0x3f);
            }
            uVar6 = uVar4 + 1;
            if ((uVar6 | uVar3) < 0x40) {
              puVar1 = (ulonglong *)(lVar2 + uVar7 * 8);
              *puVar1 = *puVar1 | 1L << ((byte)uVar6 & 0x3f);
            }
            uVar4 = uVar4 + 2;
          }
        }
      }
      if ((int)uVar9 < (int)uVar3 == (int)uVar3 < (int)uVar9) {
        param_5 = fVar11 - param_5;
        uVar9 = (int)param_5;
        if (fVar16 < param_5) {
          uVar9 = 0x7fffffff;
        }
        if (NAN(param_5)) {
          uVar9 = 0;
        }
        fVar18 = fVar18 + fVar14 * (fVar15 - fVar12) + fVar11;
        uVar6 = (int)fVar18;
        if (fVar16 < fVar18) {
          uVar6 = 0x7fffffff;
        }
        if (NAN(fVar18)) {
          uVar6 = 0;
        }
        if ((int)uVar9 < (int)(uVar6 + 1)) {
          uVar10 = (ulonglong)uVar3;
          uVar5 = uVar9;
          if (((uVar6 + uVar9 & 1) == 0) && (uVar5 = uVar9 + 1, (uVar9 | uVar3) < 0x40)) {
            puVar1 = (ulonglong *)(lVar2 + uVar10 * 8);
            *puVar1 = *puVar1 | 1L << ((byte)uVar9 & 0x3f);
          }
          while (uVar6 != uVar9) {
            if ((uVar5 | uVar3) < 0x40) {
              puVar1 = (ulonglong *)(lVar2 + uVar10 * 8);
              *puVar1 = *puVar1 | 1L << ((byte)uVar5 & 0x3f);
            }
            uVar9 = uVar5 + 1;
            if ((uVar9 | uVar3) < 0x40) {
              puVar1 = (ulonglong *)(lVar2 + uVar10 * 8);
              *puVar1 = *puVar1 | 1L << ((byte)uVar9 & 0x3f);
            }
            uVar5 = uVar5 + 2;
          }
        }
      }
    }
  }
  else {
    fVar15 = fVar15 / fVar14;
    if (0x7f7fffff < (uint)ABS(fVar15)) {
      fVar15 = 0.0;
    }
    fVar14 = param_3;
    fVar16 = param_2;
    if (param_3 < param_1) {
      fVar14 = param_1;
      fVar16 = param_4;
      param_1 = param_3;
      param_4 = param_2;
    }
    fVar11 = (float)pub_142e32a40(param_1 - param_5);
    uVar9 = (int)fVar11;
    if (_DAT_142e382cc < fVar11) {
      uVar9 = 0x7fffffff;
    }
    if (NAN(fVar11)) {
      uVar9 = 0;
    }
    fVar17 = fVar16 - param_5 * fVar15;
    fVar14 = fVar14 + param_5;
    fVar11 = fVar11 + _DAT_142e36f28;
    fVar18 = (_DAT_142e36f28 - (float)(_DAT_142e377e0 & (uint)fVar15)) * param_5;
    fVar12 = fVar14;
    if (fVar11 <= fVar14) {
      fVar12 = fVar11;
    }
    fVar11 = ((float)(~-(uint)NAN(fVar11) & (uint)fVar12 | -(uint)NAN(fVar11) & (uint)fVar14) -
             (param_1 - param_5)) * fVar15 + fVar17;
    uVar3 = 0x7fffffff;
    if (param_4 <= fVar16) {
      pdb_140cb17b0(fVar15,&UNK_14333bb38);
      fVar12 = (float)pub_142e32850(fVar15,_DAT_142e36f28);
      fVar16 = _DAT_142e382cc;
      param_5 = param_5 * fVar12;
      fVar12 = fVar11 - param_5;
      uVar6 = (int)fVar12;
      if (_DAT_142e382cc < fVar12) {
        uVar6 = 0x7fffffff;
      }
      uVar10 = (ulonglong)uVar6;
      if (NAN(fVar12)) {
        uVar10 = 0;
      }
      fVar17 = fVar17 + fVar18;
      uVar6 = (int)fVar17;
      if (_DAT_142e382cc < fVar17) {
        uVar6 = uVar3;
      }
      if (NAN(fVar17)) {
        uVar6 = 0;
      }
      lVar2 = *param_6;
      uVar3 = (uint)uVar10;
      if ((int)uVar3 < (int)(uVar6 + 1)) {
        uVar8 = 1L << ((byte)uVar9 & 0x3f);
        uVar7 = uVar10;
        if (((uVar6 + uVar3 & 1) == 0) && (uVar7 = (ulonglong)(uVar3 + 1), (uVar3 | uVar9) < 0x40))
        {
          puVar1 = (ulonglong *)(lVar2 + uVar10 * 8);
          *puVar1 = *puVar1 | uVar8;
        }
        while (uVar6 != uVar3) {
          uVar5 = (uint)uVar7;
          if ((uVar5 | uVar9) < 0x40) {
            puVar1 = (ulonglong *)(lVar2 + uVar7 * 8);
            *puVar1 = *puVar1 | uVar8;
          }
          uVar3 = uVar5 + 1;
          if ((uVar3 | uVar9) < 0x40) {
            puVar1 = (ulonglong *)(lVar2 + (ulonglong)uVar3 * 8);
            *puVar1 = *puVar1 | uVar8;
          }
          uVar7 = (ulonglong)(uVar5 + 2);
        }
      }
      fVar12 = (float)pub_142e32a40(fVar14);
      uVar3 = (uint)fVar12;
      if (_DAT_142e382cc < fVar12) {
        uVar3 = 0x7fffffff;
      }
      if (NAN(fVar12)) {
        uVar3 = 0;
      }
      while( true ) {
        uVar9 = uVar9 + 1;
        if ((char)(((int)uVar3 < (int)uVar9) - ((int)uVar9 < (int)uVar3)) != -1) break;
        fVar17 = fVar15 + fVar11;
        fVar13 = fVar17 - param_5;
        uVar6 = (int)fVar13;
        if (fVar16 < fVar13) {
          uVar6 = 0x7fffffff;
        }
        uVar10 = (ulonglong)uVar6;
        if (NAN(fVar13)) {
          uVar10 = 0;
        }
        fVar11 = fVar11 + param_5;
        uVar6 = (int)fVar11;
        if (fVar16 < fVar11) {
          uVar6 = 0x7fffffff;
        }
        if (NAN(fVar11)) {
          uVar6 = 0;
        }
        uVar5 = (uint)uVar10;
        fVar11 = fVar17;
        if ((int)uVar5 < (int)(uVar6 + 1)) {
          uVar8 = 1L << ((byte)uVar9 & 0x3f);
          uVar7 = uVar10;
          if (((uVar6 + uVar5 & 1) == 0) && (uVar7 = (ulonglong)(uVar5 + 1), (uVar5 | uVar9) < 0x40)
             ) {
            puVar1 = (ulonglong *)(lVar2 + uVar10 * 8);
            *puVar1 = *puVar1 | uVar8;
          }
          while (uVar6 != uVar5) {
            uVar4 = (uint)uVar7;
            if ((uVar4 | uVar9) < 0x40) {
              puVar1 = (ulonglong *)(lVar2 + uVar7 * 8);
              *puVar1 = *puVar1 | uVar8;
            }
            uVar5 = uVar4 + 1;
            if ((uVar5 | uVar9) < 0x40) {
              puVar1 = (ulonglong *)(lVar2 + (ulonglong)uVar5 * 8);
              *puVar1 = *puVar1 | uVar8;
            }
            uVar7 = (ulonglong)(uVar4 + 2);
          }
        }
      }
      if ((int)uVar3 < (int)uVar9 == (int)uVar9 < (int)uVar3) {
        fVar18 = (fVar15 * (fVar14 - fVar12) + fVar11) - fVar18;
        uVar3 = (int)fVar18;
        if (fVar16 < fVar18) {
          uVar3 = 0x7fffffff;
        }
        uVar10 = (ulonglong)uVar3;
        if (NAN(fVar18)) {
          uVar10 = 0;
        }
        param_5 = param_5 + fVar11;
        uVar3 = (int)param_5;
        if (fVar16 < param_5) {
          uVar3 = 0x7fffffff;
        }
        if (NAN(param_5)) {
          uVar3 = 0;
        }
        uVar6 = (uint)uVar10;
        if ((int)uVar6 < (int)(uVar3 + 1)) {
          uVar8 = 1L << ((byte)uVar9 & 0x3f);
          uVar7 = uVar10;
          if (((uVar3 + uVar6 & 1) == 0) && (uVar7 = (ulonglong)(uVar6 + 1), (uVar6 | uVar9) < 0x40)
             ) {
            puVar1 = (ulonglong *)(lVar2 + uVar10 * 8);
            *puVar1 = *puVar1 | uVar8;
          }
          while (uVar3 != uVar6) {
            uVar5 = (uint)uVar7;
            if ((uVar5 | uVar9) < 0x40) {
              puVar1 = (ulonglong *)(lVar2 + uVar7 * 8);
              *puVar1 = *puVar1 | uVar8;
            }
            uVar6 = uVar5 + 1;
            if ((uVar6 | uVar9) < 0x40) {
              puVar1 = (ulonglong *)(lVar2 + (ulonglong)uVar6 * 8);
              *puVar1 = *puVar1 | uVar8;
            }
            uVar7 = (ulonglong)(uVar5 + 2);
          }
        }
      }
    }
    else {
      pdb_140cb1800();
      fVar12 = (float)pub_142e32850(fVar15,_DAT_142e36f28);
      fVar16 = _DAT_142e382cc;
      fVar17 = fVar17 - fVar18;
      uVar6 = (int)fVar17;
      if (_DAT_142e382cc < fVar17) {
        uVar6 = uVar3;
      }
      uVar10 = (ulonglong)uVar6;
      param_5 = param_5 * fVar12;
      if (NAN(fVar17)) {
        uVar10 = 0;
      }
      fVar12 = fVar11 + param_5;
      uVar6 = (int)fVar12;
      if (_DAT_142e382cc < fVar12) {
        uVar6 = uVar3;
      }
      if (NAN(fVar12)) {
        uVar6 = 0;
      }
      lVar2 = *param_6;
      uVar3 = (uint)uVar10;
      if ((int)uVar3 < (int)(uVar6 + 1)) {
        uVar8 = 1L << ((byte)uVar9 & 0x3f);
        uVar7 = uVar10;
        if (((uVar6 + uVar3 & 1) == 0) && (uVar7 = (ulonglong)(uVar3 + 1), (uVar3 | uVar9) < 0x40))
        {
          puVar1 = (ulonglong *)(lVar2 + uVar10 * 8);
          *puVar1 = *puVar1 | uVar8;
        }
        while (uVar6 != uVar3) {
          uVar5 = (uint)uVar7;
          if ((uVar5 | uVar9) < 0x40) {
            puVar1 = (ulonglong *)(lVar2 + uVar7 * 8);
            *puVar1 = *puVar1 | uVar8;
          }
          uVar3 = uVar5 + 1;
          if ((uVar3 | uVar9) < 0x40) {
            puVar1 = (ulonglong *)(lVar2 + (ulonglong)uVar3 * 8);
            *puVar1 = *puVar1 | uVar8;
          }
          uVar7 = (ulonglong)(uVar5 + 2);
        }
      }
      fVar12 = (float)pub_142e32a40(fVar14);
      uVar3 = (uint)fVar12;
      if (_DAT_142e382cc < fVar12) {
        uVar3 = 0x7fffffff;
      }
      if (NAN(fVar12)) {
        uVar3 = 0;
      }
      while( true ) {
        uVar9 = uVar9 + 1;
        if ((char)(((int)uVar3 < (int)uVar9) - ((int)uVar9 < (int)uVar3)) != -1) break;
        fVar17 = fVar15 + fVar11;
        fVar11 = fVar11 - param_5;
        uVar6 = (int)fVar11;
        if (fVar16 < fVar11) {
          uVar6 = 0x7fffffff;
        }
        uVar10 = (ulonglong)uVar6;
        if (NAN(fVar11)) {
          uVar10 = 0;
        }
        fVar11 = param_5 + fVar17;
        uVar6 = (int)fVar11;
        if (fVar16 < fVar11) {
          uVar6 = 0x7fffffff;
        }
        if (NAN(fVar11)) {
          uVar6 = 0;
        }
        uVar5 = (uint)uVar10;
        fVar11 = fVar17;
        if ((int)uVar5 < (int)(uVar6 + 1)) {
          uVar8 = 1L << ((byte)uVar9 & 0x3f);
          uVar7 = uVar10;
          if (((uVar6 + uVar5 & 1) == 0) && (uVar7 = (ulonglong)(uVar5 + 1), (uVar5 | uVar9) < 0x40)
             ) {
            puVar1 = (ulonglong *)(lVar2 + uVar10 * 8);
            *puVar1 = *puVar1 | uVar8;
          }
          while (uVar6 != uVar5) {
            uVar4 = (uint)uVar7;
            if ((uVar4 | uVar9) < 0x40) {
              puVar1 = (ulonglong *)(lVar2 + uVar7 * 8);
              *puVar1 = *puVar1 | uVar8;
            }
            uVar5 = uVar4 + 1;
            if ((uVar5 | uVar9) < 0x40) {
              puVar1 = (ulonglong *)(lVar2 + (ulonglong)uVar5 * 8);
              *puVar1 = *puVar1 | uVar8;
            }
            uVar7 = (ulonglong)(uVar4 + 2);
          }
        }
      }
      if ((int)uVar3 < (int)uVar9 == (int)uVar9 < (int)uVar3) {
        param_5 = fVar11 - param_5;
        uVar3 = (int)param_5;
        if (fVar16 < param_5) {
          uVar3 = 0x7fffffff;
        }
        uVar10 = (ulonglong)uVar3;
        if (NAN(param_5)) {
          uVar10 = 0;
        }
        fVar18 = fVar18 + fVar15 * (fVar14 - fVar12) + fVar11;
        uVar3 = (int)fVar18;
        if (fVar16 < fVar18) {
          uVar3 = 0x7fffffff;
        }
        if (NAN(fVar18)) {
          uVar3 = 0;
        }
        uVar6 = (uint)uVar10;
        if ((int)uVar6 < (int)(uVar3 + 1)) {
          uVar8 = 1L << ((byte)uVar9 & 0x3f);
          uVar7 = uVar10;
          if (((uVar3 + uVar6 & 1) == 0) && (uVar7 = (ulonglong)(uVar6 + 1), (uVar6 | uVar9) < 0x40)
             ) {
            puVar1 = (ulonglong *)(lVar2 + uVar10 * 8);
            *puVar1 = *puVar1 | uVar8;
          }
          while (uVar3 != uVar6) {
            uVar5 = (uint)uVar7;
            if ((uVar5 | uVar9) < 0x40) {
              puVar1 = (ulonglong *)(lVar2 + uVar7 * 8);
              *puVar1 = *puVar1 | uVar8;
            }
            uVar6 = uVar5 + 1;
            if ((uVar6 | uVar9) < 0x40) {
              puVar1 = (ulonglong *)(lVar2 + (ulonglong)uVar6 * 8);
              *puVar1 = *puVar1 | uVar8;
            }
            uVar7 = (ulonglong)(uVar5 + 2);
          }
        }
      }
    }
  }
  return;
}

