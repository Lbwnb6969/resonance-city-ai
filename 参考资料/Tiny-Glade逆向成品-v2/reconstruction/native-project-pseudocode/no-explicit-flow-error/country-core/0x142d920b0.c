// VA 0x142d920b0, PDB extent 989 bytes
// serde_json::read::parse_unicode_escape<serde_json::read::IoRead<std::io::buffered::bufreader::BufReader<std::fs::File> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   serde_json::read::parse_unicode_escape<serde_json::read::IoRead<std::io::buffered::bufreader::BufReader<std::fs::File>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 989 */

undefined8 pdb_142d920b0(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  byte bVar7;
  longlong lVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  pdb_140c82ff0(&uStack_38,param_1);
  if ((short)uStack_38 == 1) {
    return uStack_30;
  }
  uVar1 = uStack_38._2_2_;
  if ((uStack_38._2_2_ & 0xfc00) == 0xdc00) {
LAB_142d9239a:
    lVar8 = param_1[9];
    lVar12 = param_1[10];
    uStack_38 = 0x14;
LAB_142d923de:
    uVar6 = pdb_142db9040(&uStack_38,lVar8,lVar12);
    return uVar6;
  }
  if (0xfbff < (ushort)(uStack_38._2_2_ + 0x2400)) {
    if ((char)param_1[0xc] != '\x01') {
      lVar8 = param_1[5];
      if (param_1[6] != lVar8) {
        cVar3 = *(char *)(param_1[3] + lVar8);
        param_1[5] = lVar8 + 1;
        uStack_38._0_2_ = CONCAT11(cVar3,(char)uStack_38);
        lVar8 = param_1[10] + 1;
        if (cVar3 != '\n') goto LAB_142d921b2;
LAB_142d921db:
        param_1[0xb] = param_1[0xb] + lVar8;
        param_1[9] = param_1[9] + 1;
        param_1[10] = 0;
        cVar3 = '\n';
LAB_142d921ed:
        *(undefined1 *)(param_1 + 0xc) = 1;
        *(char *)((longlong)param_1 + 0x61) = cVar3;
        goto LAB_142d921f4;
      }
      pdb_141c47310(&uStack_38,param_1 + 3);
      if ((char)uStack_38 == '\0') {
        lVar8 = param_1[10] + 1;
        if (uStack_38._1_1_ == '\n') goto LAB_142d921db;
LAB_142d921b2:
        param_1[10] = lVar8;
        cVar3 = uStack_38._1_1_;
        goto LAB_142d921ed;
      }
LAB_142d923c8:
      if ((char)uStack_38 != '\x02') {
        uVar6 = pdb_142db8fb0(uStack_30);
        return uVar6;
      }
      lVar8 = param_1[9];
      lVar12 = param_1[10];
      uStack_38 = 4;
      goto LAB_142d923de;
    }
    cVar3 = *(char *)((longlong)param_1 + 0x61);
LAB_142d921f4:
    if (cVar3 == '\\') {
      *(undefined1 *)(param_1 + 0xc) = 0;
      if (SBORROW8(0,*param_1)) {
LAB_142d92238:
        lVar8 = param_1[5];
        if (param_1[6] == lVar8) {
          pdb_141c47310(&uStack_38,param_1 + 3);
          if ((char)uStack_38 != '\0') goto LAB_142d923c8;
          lVar8 = param_1[10] + 1;
          if (uStack_38._1_1_ == '\n') goto LAB_142d92296;
LAB_142d9226d:
          param_1[10] = lVar8;
          cVar3 = uStack_38._1_1_;
        }
        else {
          cVar3 = *(char *)(param_1[3] + lVar8);
          param_1[5] = lVar8 + 1;
          uStack_38._0_2_ = CONCAT11(cVar3,(char)uStack_38);
          lVar8 = param_1[10] + 1;
          if (cVar3 != '\n') goto LAB_142d9226d;
LAB_142d92296:
          param_1[0xb] = param_1[0xb] + lVar8;
          param_1[9] = param_1[9] + 1;
          param_1[10] = 0;
          cVar3 = '\n';
        }
        *(undefined1 *)(param_1 + 0xc) = 1;
        *(char *)((longlong)param_1 + 0x61) = cVar3;
      }
      else {
        lVar8 = param_1[2];
        if (lVar8 == *param_1) {
          pdb_142dc7d20(param_1);
        }
        *(undefined1 *)(param_1[1] + lVar8) = 0x5c;
        param_1[2] = lVar8 + 1;
        if ((char)param_1[0xc] != '\x01') goto LAB_142d92238;
        cVar3 = *(char *)((longlong)param_1 + 0x61);
      }
      if (cVar3 == 'u') {
        *(undefined1 *)(param_1 + 0xc) = 0;
        if (!SBORROW8(0,*param_1)) {
          lVar8 = param_1[2];
          if (lVar8 == *param_1) {
            pdb_142dc7d20(param_1);
          }
          *(undefined1 *)(param_1[1] + lVar8) = 0x75;
          param_1[2] = lVar8 + 1;
        }
        pdb_140c82ff0(&uStack_38,param_1);
        if ((char)uStack_38 != '\0') {
          return uStack_30;
        }
        uVar2 = uStack_38._2_2_;
        if (0xfbff < (ushort)(uStack_38._2_2_ + 0x2000)) {
          uVar11 = (uint)(ushort)(uVar1 + 0x2800) * 0x400;
          uVar4 = uStack_38._2_2_ + 0x2400 & 0xffff;
          uVar10 = uVar11 + uVar4 + 0x10000;
          lVar8 = param_2[2];
          if ((ulonglong)(*param_2 - lVar8) < 4) {
            pdb_142d7f1b0(param_2,lVar8,4,1,1);
            lVar8 = param_2[2];
          }
          *(uint *)(param_2[1] + lVar8) =
               ((uint)uVar2 << 0x18 |
               ((uVar11 | uVar4) & 0x3fc0) << 10 | uVar10 >> 4 & 0xff00 | uVar10 >> 0x12) &
               (uint)DAT_143074630 | (uint)DAT_143074640;
          lVar8 = lVar8 + 4;
          goto LAB_142d92457;
        }
        goto LAB_142d9239a;
      }
    }
    pdb_140c830e0(param_1);
    lVar8 = param_1[9];
    lVar12 = param_1[10];
    uStack_38 = 0x17;
    goto LAB_142d923de;
  }
  bVar9 = (byte)((ulonglong)uStack_38 >> 0x10);
  if (uStack_38._2_2_ < 0x80) {
    lVar8 = param_2[2];
    if (lVar8 == *param_2) {
      pdb_142dc7d20(param_2);
    }
    *(byte *)(param_2[1] + lVar8) = bVar9;
    param_2[2] = lVar8 + 1;
    return 0;
  }
  lVar8 = param_2[2];
  if ((ulonglong)(*param_2 - lVar8) < 4) {
    pdb_142d7f1b0(param_2,lVar8,4,1,1);
    lVar8 = param_2[2];
    pbVar5 = (byte *)(param_2[1] + lVar8);
    if (uStack_38._2_2_ < 0x800) goto LAB_142d9216a;
LAB_142d9242a:
    bVar7 = (byte)((ulonglong)uStack_38 >> 0x18) >> 4 | 0xe0;
    pbVar5[1] = (byte)(uStack_38._2_2_ >> 6) & 0x3f | 0x80;
    lVar12 = 3;
  }
  else {
    pbVar5 = (byte *)(param_2[1] + lVar8);
    if (0x7ff < uStack_38._2_2_) goto LAB_142d9242a;
LAB_142d9216a:
    bVar7 = (byte)(uStack_38._2_2_ >> 6) | 0xc0;
    lVar12 = 2;
  }
  *pbVar5 = bVar7;
  pbVar5[lVar12 + -1] = bVar9 & 0x3f | 0x80;
  lVar8 = lVar8 + lVar12;
LAB_142d92457:
  param_2[2] = lVar8;
  return 0;
}

