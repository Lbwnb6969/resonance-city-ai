// VA 0x14164cd30, PDB extent 1614 bytes
// serde_json::de::Deserializer::parse_number<serde_json::read::IoRead<std::io::buffered::bufreader::BufReader<std::fs::File> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x00014164cfe7) */
/* WARNING: Removing unreachable block (ram,0x00014164d216) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::de::Deserializer::parse_number<serde_json::read::IoRead<std::io::buffered::bufreader::BufReader<std::fs::File>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 1614 */

void pdb_14164cd30(undefined8 *param_1,longlong param_2,ulonglong param_3,double param_4)

{
  double dVar1;
  undefined1 uVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_70;
  double dStack_68;
  undefined8 uStack_58;
  double dStack_50;
  undefined8 *puStack_48;
  
  if (*(char *)(param_2 + 0x78) == '\x01') {
    cVar7 = *(char *)(param_2 + 0x79);
joined_r0x00014164cded:
    if (cVar7 == '.') {
      cVar7 = (char)param_3;
      uVar2 = *(undefined1 *)(param_2 + 0x79);
      bVar8 = *(byte *)(param_2 + 0x78);
      *(undefined1 *)(param_2 + 0x78) = 0;
      if ((!SBORROW8(0,*(longlong *)(param_2 + 0x18)) & bVar8) == 1) {
        lVar10 = *(longlong *)(param_2 + 0x28);
        if (lVar10 == *(longlong *)(param_2 + 0x18)) {
          pdb_142dc7d20();
        }
        *(undefined1 *)(*(longlong *)(param_2 + 0x20) + lVar10) = uVar2;
        *(longlong *)(param_2 + 0x28) = lVar10 + 1;
      }
      uVar11 = 0;
      puStack_48 = param_1;
      do {
        if (*(char *)(param_2 + 0x78) != '\x01') {
          lVar10 = *(longlong *)(param_2 + 0x40);
          if (*(longlong *)(param_2 + 0x48) != lVar10) {
            cVar3 = *(char *)(*(longlong *)(param_2 + 0x30) + lVar10);
            *(longlong *)(param_2 + 0x40) = lVar10 + 1;
            lVar5 = (ulonglong)CONCAT61((int6)((ulonglong)uStack_70 >> 0x10),cVar3) << 8;
            lVar10 = *(longlong *)(param_2 + 0x68);
joined_r0x00014164cf78:
            if (cVar3 == '\n') {
              *(longlong *)(param_2 + 0x70) = *(longlong *)(param_2 + 0x70) + lVar10 + 1;
              *(longlong *)(param_2 + 0x60) = *(longlong *)(param_2 + 0x60) + 1;
              *(undefined8 *)(param_2 + 0x68) = 0;
              uStack_70._1_1_ = '\n';
            }
            else {
              *(longlong *)(param_2 + 0x68) = lVar10 + 1;
              uStack_70._1_1_ = (byte)((ulonglong)lVar5 >> 8);
            }
            *(undefined1 *)(param_2 + 0x78) = 1;
            *(byte *)(param_2 + 0x79) = uStack_70._1_1_;
            cVar3 = uStack_70._1_1_;
            goto joined_r0x00014164cfd6;
          }
          pdb_141c47310(&uStack_70,param_2 + 0x30);
          if ((char)uStack_70 == '\x02') goto LAB_14164d045;
          if ((char)uStack_70 == '\0') {
            lVar10 = *(longlong *)(param_2 + 0x68);
            lVar5 = uStack_70;
            cVar3 = uStack_70._1_1_;
            goto joined_r0x00014164cf78;
          }
LAB_14164d2c7:
          dStack_68 = (double)pdb_142db8fb0();
          uStack_58._0_1_ = '\x01';
          param_1 = puStack_48;
          uStack_70._0_1_ = (char)uStack_58;
          goto joined_r0x00014164d11a;
        }
        cVar3 = *(char *)(param_2 + 0x79);
        lVar5 = uStack_70;
joined_r0x00014164cfd6:
        uStack_70 = lVar5;
        bVar8 = cVar3 - 0x30;
        if (9 < bVar8) {
LAB_14164d045:
          param_1 = puStack_48;
          if (uVar11 == 0) {
            if (*(char *)(param_2 + 0x78) == '\0') {
              pdb_140b6dc70(&uStack_70,param_2 + 0x30);
              if ((char)uStack_70 != '\x02') {
                if ((char)uStack_70 == '\0') {
                  *(undefined1 *)(param_2 + 0x78) = 1;
                  *(byte *)(param_2 + 0x79) = uStack_70._1_1_;
                  goto LAB_14164d2f8;
                }
                dStack_68 = (double)pdb_142db8fb0();
                goto LAB_14164d252;
              }
              uVar9 = *(undefined8 *)(param_2 + 0x60);
              uVar12 = *(undefined8 *)(param_2 + 0x68);
              uStack_70 = 5;
            }
            else {
LAB_14164d2f8:
              uVar9 = *(undefined8 *)(param_2 + 0x60);
              uVar12 = *(undefined8 *)(param_2 + 0x68);
              uStack_70 = 0xd;
            }
            dStack_68 = (double)pdb_142db9040(&uStack_70,uVar9,uVar12);
            goto LAB_14164d252;
          }
          if (*(char *)(param_2 + 0x78) == '\x01') {
            bVar8 = *(byte *)(param_2 + 0x79);
joined_r0x00014164d0f4:
            if ((bVar8 | 0x20) == 0x65) {
              pdb_14164dfe0(&uStack_58,param_2,cVar7,param_4,uVar11);
              dStack_68 = dStack_50;
              param_1 = puStack_48;
              uStack_70._0_1_ = (char)uStack_58;
              goto joined_r0x00014164d11a;
            }
          }
          else {
            lVar10 = *(longlong *)(param_2 + 0x40);
            if (*(longlong *)(param_2 + 0x48) != lVar10) {
              cVar3 = *(char *)(*(longlong *)(param_2 + 0x30) + lVar10);
              *(longlong *)(param_2 + 0x40) = lVar10 + 1;
              uStack_70._0_2_ = CONCAT11(cVar3,(char)uStack_70);
              lVar10 = *(longlong *)(param_2 + 0x68) + 1;
              if (cVar3 != '\n') goto LAB_14164d0a9;
LAB_14164d0d2:
              *(longlong *)(param_2 + 0x70) = *(longlong *)(param_2 + 0x70) + lVar10;
              *(longlong *)(param_2 + 0x60) = *(longlong *)(param_2 + 0x60) + 1;
              *(undefined8 *)(param_2 + 0x68) = 0;
              bVar8 = 10;
LAB_14164d0e4:
              *(undefined1 *)(param_2 + 0x78) = 1;
              *(byte *)(param_2 + 0x79) = bVar8;
              goto joined_r0x00014164d0f4;
            }
            pdb_141c47310(&uStack_70,param_2 + 0x30);
            if ((char)uStack_70 != '\x02') {
              if ((char)uStack_70 != '\0') goto LAB_14164d2c7;
              lVar10 = *(longlong *)(param_2 + 0x68) + 1;
              if (uStack_70._1_1_ == '\n') goto LAB_14164d0d2;
LAB_14164d0a9:
              *(longlong *)(param_2 + 0x68) = lVar10;
              bVar8 = uStack_70._1_1_;
              goto LAB_14164d0e4;
            }
          }
          param_1 = puStack_48;
          auVar14._8_4_ = (int)((ulonglong)param_4 >> 0x20);
          auVar14._0_8_ = param_4;
          auVar14._12_4_ = _UNK_142e42374;
          dStack_68 = (auVar14._8_8_ - _UNK_142e42388) +
                      ((double)CONCAT44(_DAT_142e42370,SUB84(param_4,0)) - _DAT_142e42380);
          uVar6 = -uVar11;
          if ((int)-uVar11 < 0) {
            uVar6 = uVar11;
          }
          goto joined_r0x00014164d171;
        }
        if ((0x1999999999999998 < (ulonglong)param_4) &&
           ((param_4 != 2.353437368264535e-185 || (5 < bVar8)))) goto LAB_14164d2a8;
        uVar2 = *(undefined1 *)(param_2 + 0x79);
        bVar4 = *(byte *)(param_2 + 0x78);
        *(undefined1 *)(param_2 + 0x78) = 0;
        if ((!SBORROW8(0,*(longlong *)(param_2 + 0x18)) & bVar4) == 1) {
          lVar10 = *(longlong *)(param_2 + 0x28);
          if (lVar10 == *(longlong *)(param_2 + 0x18)) {
            pdb_142dc7d20(param_2 + 0x18);
          }
          *(undefined1 *)(*(longlong *)(param_2 + 0x20) + lVar10) = uVar2;
          *(longlong *)(param_2 + 0x28) = lVar10 + 1;
        }
        param_4 = (double)((ulonglong)bVar8 + (longlong)param_4 * 10);
        uVar11 = uVar11 - 1;
      } while( true );
    }
  }
  else {
    lVar10 = *(longlong *)(param_2 + 0x40);
    if (*(longlong *)(param_2 + 0x48) != lVar10) {
      cVar7 = *(char *)(*(longlong *)(param_2 + 0x30) + lVar10);
      *(longlong *)(param_2 + 0x40) = lVar10 + 1;
      uStack_70 = (ulonglong)CONCAT61((int6)((ulonglong)uStack_70 >> 0x10),cVar7) << 8;
      lVar10 = *(longlong *)(param_2 + 0x68) + 1;
      if (cVar7 != '\n') goto LAB_14164cda4;
LAB_14164cdd2:
      *(longlong *)(param_2 + 0x70) = *(longlong *)(param_2 + 0x70) + lVar10;
      *(longlong *)(param_2 + 0x60) = *(longlong *)(param_2 + 0x60) + 1;
      *(undefined8 *)(param_2 + 0x68) = 0;
      cVar7 = '\n';
LAB_14164cde4:
      *(undefined1 *)(param_2 + 0x78) = 1;
      *(char *)(param_2 + 0x79) = cVar7;
      goto joined_r0x00014164cded;
    }
    param_3 = param_3 & 0xffffffff;
    pdb_141c47310(&uStack_70,param_2 + 0x30);
    if ((char)uStack_70 != '\x02') {
      if ((char)uStack_70 != '\0') {
        dStack_68 = (double)pdb_142db8fb0(dStack_68);
        goto LAB_14164d252;
      }
      lVar10 = *(longlong *)(param_2 + 0x68) + 1;
      if (uStack_70._1_1_ == '\n') goto LAB_14164cdd2;
LAB_14164cda4:
      *(longlong *)(param_2 + 0x68) = lVar10;
      cVar7 = uStack_70._1_1_;
      goto LAB_14164cde4;
    }
    cVar7 = '\0';
  }
  if ((cVar7 == 'E') || (cVar7 == 'e')) {
    pdb_14164dfe0(&uStack_70,param_2,param_3,param_4,0);
    goto joined_r0x00014164d11a;
  }
  uVar9 = 1;
  if ((char)param_3 != '\0') goto LAB_14164d333;
  if (-(longlong)param_4 < 0) {
    uVar9 = 2;
    param_4 = (double)-(longlong)param_4;
    goto LAB_14164d333;
  }
  auVar13._8_4_ = (int)((ulonglong)param_4 >> 0x20);
  auVar13._0_8_ = param_4;
  auVar13._12_4_ = _UNK_142e42374;
  dStack_68 = (double)((ulonglong)
                       ((auVar13._8_8_ - _UNK_142e42388) +
                       ((double)CONCAT44(_DAT_142e42370,SUB84(param_4,0)) - _DAT_142e42380)) |
                      0x8000000000000000);
  goto LAB_14164d331;
LAB_14164d2a8:
  pdb_142e1db90(&uStack_58,param_2,cVar7,param_4,uVar11);
  dStack_68 = dStack_50;
  param_1 = puStack_48;
  uStack_70._0_1_ = (char)uStack_58;
joined_r0x00014164d11a:
  if ((char)uStack_70 != '\0') {
LAB_14164d252:
    param_1[1] = dStack_68;
    *param_1 = 3;
    return;
  }
  goto LAB_14164d331;
joined_r0x00014164d171:
  if (0x134 < uVar6) {
    if ((dStack_68 == 0.0) && (!NAN(dStack_68))) goto LAB_14164d229;
    if (-1 < (int)uVar11) {
      uStack_70 = 0xe;
      dStack_68 = (double)pdb_142db9040(&uStack_70,*(undefined8 *)(param_2 + 0x60),
                                        *(undefined8 *)(param_2 + 0x68));
      uStack_58._0_1_ = '\x01';
      param_1 = puStack_48;
      uStack_70._0_1_ = (char)uStack_58;
      goto joined_r0x00014164d11a;
    }
    dStack_68 = dStack_68 / _DAT_142f566e0;
    uVar11 = uVar11 + 0x134;
    uVar6 = -uVar11;
    if ((int)-uVar11 < 0) {
      uVar6 = uVar11;
    }
    goto joined_r0x00014164d171;
  }
  dVar1 = *(double *)(_DAT_143ca4b10 + (ulonglong)uVar6 * 8);
  if ((int)uVar11 < 0) {
    dStack_68 = dStack_68 / dVar1;
  }
  else {
    dStack_68 = dStack_68 * dVar1;
    if (ABS(dStack_68) == INFINITY) {
      uStack_70 = 0xe;
      dStack_68 = (double)pdb_142db9040(&uStack_70,*(undefined8 *)(param_2 + 0x60),
                                        *(undefined8 *)(param_2 + 0x68));
      goto LAB_14164d252;
    }
  }
LAB_14164d229:
  if (cVar7 == '\0') {
    dStack_68 = (double)((ulonglong)dStack_68 ^ _DAT_142f566f0);
  }
LAB_14164d331:
  uVar9 = 0;
  param_4 = dStack_68;
LAB_14164d333:
  *param_1 = uVar9;
  param_1[1] = param_4;
  return;
}

