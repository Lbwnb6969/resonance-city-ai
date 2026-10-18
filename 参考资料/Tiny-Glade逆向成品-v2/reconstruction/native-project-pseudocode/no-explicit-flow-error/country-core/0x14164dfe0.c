// VA 0x14164dfe0, PDB extent 1359 bytes
// serde_json::de::Deserializer::parse_exponent<serde_json::read::IoRead<std::io::buffered::bufreader::BufReader<std::fs::File> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::de::Deserializer::parse_exponent<serde_json::read::IoRead<std::io::buffered::bufreader::BufReader<std::fs::File>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 1359 */

void pdb_14164dfe0(undefined8 *param_1,longlong param_2,char param_3,longlong param_4,int param_5)

{
  double dVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *puVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 unaff_R13;
  undefined7 uVar12;
  char cVar13;
  uint uVar14;
  bool bVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_54;
  undefined8 *puStack_50;
  longlong lStack_48;
  
  uVar2 = *(undefined1 *)(param_2 + 0x79);
  bVar3 = *(byte *)(param_2 + 0x78);
  *(undefined1 *)(param_2 + 0x78) = 0;
  uVar12 = (undefined7)((ulonglong)unaff_R13 >> 8);
  if ((!SBORROW8(0,*(longlong *)(param_2 + 0x18)) & bVar3) != 1) {
LAB_14164e053:
    lVar9 = *(longlong *)(param_2 + 0x40);
    if (*(longlong *)(param_2 + 0x48) != lVar9) {
      cVar6 = *(char *)(*(longlong *)(param_2 + 0x30) + lVar9);
      *(longlong *)(param_2 + 0x40) = lVar9 + 1;
      uStack_70 = (ulonglong)CONCAT61((int6)((ulonglong)uStack_70 >> 0x10),cVar6) << 8;
      lVar9 = *(longlong *)(param_2 + 0x68) + 1;
      if (cVar6 == '\n') {
LAB_14164e0bb:
        *(longlong *)(param_2 + 0x70) = *(longlong *)(param_2 + 0x70) + lVar9;
        *(longlong *)(param_2 + 0x60) = *(longlong *)(param_2 + 0x60) + 1;
        *(undefined8 *)(param_2 + 0x68) = 0;
        cVar6 = '\n';
      }
      else {
LAB_14164e08d:
        *(longlong *)(param_2 + 0x68) = lVar9;
        cVar6 = uStack_70._1_1_;
      }
      *(undefined1 *)(param_2 + 0x78) = 1;
      *(char *)(param_2 + 0x79) = cVar6;
      uVar11 = (undefined4)CONCAT71(uVar12,1);
      goto joined_r0x00014164e0d9;
    }
    pdb_141c47310(&uStack_70,param_2 + 0x30);
    if ((char)uStack_70 == '\x02') {
      cVar6 = '\0';
      goto LAB_14164e0e6;
    }
    if ((char)uStack_70 == '\0') {
      lVar9 = *(longlong *)(param_2 + 0x68) + 1;
      if (uStack_70._1_1_ == '\n') goto LAB_14164e0bb;
      goto LAB_14164e08d;
    }
LAB_14164e4c8:
    uVar8 = pdb_142db8fb0(uStack_68);
    goto LAB_14164e4d2;
  }
  lVar9 = *(longlong *)(param_2 + 0x28);
  if (lVar9 == *(longlong *)(param_2 + 0x18)) {
    pdb_142dc7d20(param_2 + 0x18);
  }
  *(undefined1 *)(*(longlong *)(param_2 + 0x20) + lVar9) = uVar2;
  *(longlong *)(param_2 + 0x28) = lVar9 + 1;
  if (*(char *)(param_2 + 0x78) != '\x01') goto LAB_14164e053;
  cVar6 = *(char *)(param_2 + 0x79);
  uVar11 = (undefined4)CONCAT71(uVar12,1);
joined_r0x00014164e0d9:
  if (cVar6 == '+') {
LAB_14164e0f1:
    uVar2 = *(undefined1 *)(param_2 + 0x79);
    bVar3 = *(byte *)(param_2 + 0x78);
    *(undefined1 *)(param_2 + 0x78) = 0;
    if ((!SBORROW8(0,*(longlong *)(param_2 + 0x18)) & bVar3) == 1) {
      lVar9 = *(longlong *)(param_2 + 0x28);
      if (lVar9 == *(longlong *)(param_2 + 0x18)) {
        pdb_142dc7d20(param_2 + 0x18);
      }
      *(undefined1 *)(*(longlong *)(param_2 + 0x20) + lVar9) = uVar2;
      *(longlong *)(param_2 + 0x28) = lVar9 + 1;
    }
  }
  else {
LAB_14164e0e6:
    uVar11 = (undefined4)CONCAT71(uVar12,1);
    if (cVar6 == '-') {
      uVar11 = 0;
      goto LAB_14164e0f1;
    }
  }
  cVar6 = *(char *)(param_2 + 0x78);
  *(undefined1 *)(param_2 + 0x78) = 0;
  cVar13 = *(char *)(param_2 + 0x79);
  if (cVar6 == '\x01') {
LAB_14164e1b1:
    if (!SBORROW8(0,*(longlong *)(param_2 + 0x18))) {
      lVar9 = *(longlong *)(param_2 + 0x28);
      if (lVar9 == *(longlong *)(param_2 + 0x18)) {
        pdb_142dc7d20(param_2 + 0x18);
      }
      *(char *)(*(longlong *)(param_2 + 0x20) + lVar9) = cVar13;
      *(longlong *)(param_2 + 0x28) = lVar9 + 1;
    }
    if ((byte)(cVar13 - 0x30U) < 10) {
      uVar14 = (uint)(byte)(cVar13 - 0x30U);
      uStack_54 = uVar11;
      puStack_50 = param_1;
      lStack_48 = param_4;
      while (*(char *)(param_2 + 0x78) == '\x01') {
        cVar6 = *(char *)(param_2 + 0x79);
joined_r0x00014164e2e6:
        bVar3 = cVar6 - 0x30;
        if (9 < bVar3) goto LAB_14164e388;
        uVar2 = *(undefined1 *)(param_2 + 0x79);
        bVar4 = *(byte *)(param_2 + 0x78);
        *(undefined1 *)(param_2 + 0x78) = 0;
        if ((!SBORROW8(0,*(longlong *)(param_2 + 0x18)) & bVar4) == 1) {
          lVar9 = *(longlong *)(param_2 + 0x28);
          if (lVar9 == *(longlong *)(param_2 + 0x18)) {
            pdb_142dc7d20(param_2 + 0x18);
          }
          *(undefined1 *)(*(longlong *)(param_2 + 0x20) + lVar9) = uVar2;
          *(longlong *)(param_2 + 0x28) = lVar9 + 1;
        }
        if ((0xccccccb < (int)uVar14) && ((uVar14 != 0xccccccc || (7 < bVar3)))) {
          pdb_142e1deb0(puStack_50,param_2,param_3,lStack_48 == 0,(char)uStack_54);
          return;
        }
        uVar14 = (uint)bVar3 + uVar14 * 10;
      }
      lVar9 = *(longlong *)(param_2 + 0x40);
      if (*(longlong *)(param_2 + 0x48) != lVar9) {
        cVar6 = *(char *)(*(longlong *)(param_2 + 0x30) + lVar9);
        *(longlong *)(param_2 + 0x40) = lVar9 + 1;
        uStack_70 = (ulonglong)CONCAT61((int6)((ulonglong)uStack_70 >> 0x10),cVar6) << 8;
        lVar9 = *(longlong *)(param_2 + 0x68) + 1;
        if (cVar6 != '\n') goto LAB_14164e287;
LAB_14164e2c3:
        *(longlong *)(param_2 + 0x70) = *(longlong *)(param_2 + 0x70) + lVar9;
        *(longlong *)(param_2 + 0x60) = *(longlong *)(param_2 + 0x60) + 1;
        *(undefined8 *)(param_2 + 0x68) = 0;
        cVar6 = '\n';
LAB_14164e2d6:
        *(undefined1 *)(param_2 + 0x78) = 1;
        *(char *)(param_2 + 0x79) = cVar6;
        goto joined_r0x00014164e2e6;
      }
      pdb_141c47310(&uStack_70,param_2 + 0x30);
      if ((char)uStack_70 != '\x02') {
        if ((char)uStack_70 != '\0') {
          uVar8 = pdb_142db8fb0(uStack_68);
          puStack_50[1] = uVar8;
          *puStack_50 = 1;
          return;
        }
        lVar9 = *(longlong *)(param_2 + 0x68) + 1;
        if (uStack_70._1_1_ == '\n') goto LAB_14164e2c3;
LAB_14164e287:
        *(longlong *)(param_2 + 0x68) = lVar9;
        cVar6 = uStack_70._1_1_;
        goto LAB_14164e2d6;
      }
LAB_14164e388:
      puVar5 = puStack_50;
      if ((char)uStack_54 == '\0') {
        uVar7 = (-1 < (int)(param_5 - uVar14)) + 0x7fffffff;
        bVar15 = SBORROW4(param_5,uVar14);
        uVar14 = -uVar14;
      }
      else {
        uVar7 = ((int)(param_5 + uVar14) >> 0x1f) + 0x80000000;
        bVar15 = SCARRY4(param_5,uVar14);
      }
      uVar14 = param_5 + uVar14;
      if (bVar15) {
        uVar14 = uVar7;
      }
      auVar17._8_4_ = (int)((ulonglong)lStack_48 >> 0x20);
      auVar17._0_8_ = lStack_48;
      auVar17._12_4_ = _UNK_142e42374;
      dVar16 = (auVar17._8_8_ - _UNK_142e42388) +
               ((double)CONCAT44(_DAT_142e42370,(int)lStack_48) - _DAT_142e42380);
      uVar7 = -uVar14;
      if ((int)-uVar14 < 0) {
        uVar7 = uVar14;
      }
      while (0x134 < uVar7) {
        if ((dVar16 == 0.0) && (!NAN(dVar16))) goto joined_r0x00014164e4a2;
        if (-1 < (int)uVar14) goto LAB_14164e4fb;
        dVar16 = dVar16 / _DAT_142f566e0;
        uVar14 = uVar14 + 0x134;
        uVar7 = -uVar14;
        if ((int)-uVar14 < 0) {
          uVar7 = uVar14;
        }
      }
      dVar1 = *(double *)(_DAT_143ca4b10 + (ulonglong)uVar7 * 8);
      if ((int)uVar14 < 0) {
        dVar16 = dVar16 / dVar1;
      }
      else {
        dVar16 = dVar16 * dVar1;
        if (ABS(dVar16) == INFINITY) {
LAB_14164e4fb:
          uStack_70 = 0xe;
          uVar8 = pdb_142db9040(&uStack_70,*(undefined8 *)(param_2 + 0x60),
                                *(undefined8 *)(param_2 + 0x68));
          puVar5[1] = uVar8;
          uVar8 = 1;
          goto LAB_14164e487;
        }
      }
joined_r0x00014164e4a2:
      if (param_3 == '\0') {
        dVar16 = (double)((ulonglong)dVar16 ^ _DAT_142f566f0);
      }
      puStack_50[1] = dVar16;
      uVar8 = 0;
LAB_14164e487:
      *puVar5 = uVar8;
      return;
    }
    uVar8 = *(undefined8 *)(param_2 + 0x60);
    uVar10 = *(undefined8 *)(param_2 + 0x68);
    uStack_70 = 0xd;
  }
  else {
    lVar9 = *(longlong *)(param_2 + 0x40);
    if (*(longlong *)(param_2 + 0x48) != lVar9) {
      cVar6 = *(char *)(*(longlong *)(param_2 + 0x30) + lVar9);
      *(longlong *)(param_2 + 0x40) = lVar9 + 1;
      uStack_70._0_2_ = CONCAT11(cVar6,(char)uStack_70);
      lVar9 = *(longlong *)(param_2 + 0x68) + 1;
      if (cVar6 != '\n') goto LAB_14164e174;
LAB_14164e19e:
      *(longlong *)(param_2 + 0x70) = *(longlong *)(param_2 + 0x70) + lVar9;
      *(longlong *)(param_2 + 0x60) = *(longlong *)(param_2 + 0x60) + 1;
      *(undefined8 *)(param_2 + 0x68) = 0;
      cVar13 = '\n';
      goto LAB_14164e1b1;
    }
    pdb_141c47310(&uStack_70,param_2 + 0x30);
    if ((char)uStack_70 == '\0') {
      lVar9 = *(longlong *)(param_2 + 0x68) + 1;
      if (uStack_70._1_1_ == '\n') goto LAB_14164e19e;
LAB_14164e174:
      *(longlong *)(param_2 + 0x68) = lVar9;
      cVar13 = uStack_70._1_1_;
      goto LAB_14164e1b1;
    }
    if ((char)uStack_70 != '\x02') goto LAB_14164e4c8;
    uVar8 = *(undefined8 *)(param_2 + 0x60);
    uVar10 = *(undefined8 *)(param_2 + 0x68);
    uStack_70 = 5;
  }
  uVar8 = pdb_142db9040(&uStack_70,uVar8,uVar10);
LAB_14164e4d2:
  param_1[1] = uVar8;
  *param_1 = 1;
  return;
}

