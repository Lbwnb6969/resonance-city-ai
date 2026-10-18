// VA 0x14164d4f0, PDB extent 1044 bytes
// serde_json::de::Deserializer::parse_integer<serde_json::read::IoRead<std::io::buffered::bufreader::BufReader<std::fs::File> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x00014164d812) */
/* WARNING: Removing unreachable block (ram,0x00014164d5ae) */
/* WARNING: Removing unreachable block (ram,0x00014164d6d6) */
/* Matched PDB project procedure:
   serde_json::de::Deserializer::parse_integer<serde_json::read::IoRead<std::io::buffered::bufreader::BufReader<std::fs::File>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 1044 */

void pdb_14164d4f0(undefined8 *param_1,longlong param_2,uint param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  byte bVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  char cVar11;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_48;
  
  plVar1 = (longlong *)(param_2 + 0x18);
  cVar8 = *(char *)(param_2 + 0x78);
  *(undefined1 *)(param_2 + 0x78) = 0;
  cVar11 = *(char *)(param_2 + 0x79);
  if (cVar8 == '\x01') {
LAB_14164d565:
    lVar7 = *plVar1;
joined_r0x00014164d785:
    if (!SBORROW8(0,lVar7)) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      if (lVar4 == lVar7) {
        pdb_142dc7d20(plVar1);
      }
      *(char *)(*(longlong *)(param_2 + 0x20) + lVar4) = cVar11;
      *(longlong *)(param_2 + 0x28) = lVar4 + 1;
    }
    if (cVar11 == '0') {
      if (*(char *)(param_2 + 0x78) == '\x01') {
        cVar8 = *(char *)(param_2 + 0x79);
LAB_14164d81a:
        if ((byte)(cVar8 - 0x30U) < 10) goto LAB_14164d8ee;
      }
      else {
        lVar7 = *(longlong *)(param_2 + 0x40);
        if (*(longlong *)(param_2 + 0x48) != lVar7) {
          cVar8 = *(char *)(*(longlong *)(param_2 + 0x30) + lVar7);
          *(longlong *)(param_2 + 0x40) = lVar7 + 1;
          uStack_60._0_2_ = CONCAT11(cVar8,(char)uStack_60);
          lVar7 = *(longlong *)(param_2 + 0x68) + 1;
          if (cVar8 != '\n') goto LAB_14164d7ca;
LAB_14164d7f3:
          *(longlong *)(param_2 + 0x70) = *(longlong *)(param_2 + 0x70) + lVar7;
          *(longlong *)(param_2 + 0x60) = *(longlong *)(param_2 + 0x60) + 1;
          *(undefined8 *)(param_2 + 0x68) = 0;
          cVar8 = '\n';
LAB_14164d805:
          *(undefined1 *)(param_2 + 0x78) = 1;
          *(char *)(param_2 + 0x79) = cVar8;
          goto LAB_14164d81a;
        }
        pdb_141c47310(&uStack_60,param_2 + 0x30);
        if ((char)uStack_60 != '\x02') {
          if ((char)uStack_60 != '\0') goto LAB_14164d869;
          lVar7 = *(longlong *)(param_2 + 0x68) + 1;
          if (uStack_60._1_1_ == '\n') goto LAB_14164d7f3;
LAB_14164d7ca:
          *(longlong *)(param_2 + 0x68) = lVar7;
          cVar8 = uStack_60._1_1_;
          goto LAB_14164d805;
        }
      }
      uVar10 = 0;
LAB_14164d830:
      pdb_14164cd30(param_1,param_2,param_3,uVar10);
      return;
    }
    if ((byte)(cVar11 - 0x31U) < 9) {
      uVar10 = (ulonglong)(byte)(cVar11 - 0x30);
      puStack_48 = param_1;
      while (*(char *)(param_2 + 0x78) == '\x01') {
        cVar8 = *(char *)(param_2 + 0x79);
joined_r0x00014164d6c6:
        bVar5 = cVar8 - 0x30;
        if (9 < bVar5) goto LAB_14164d731;
        if ((0x1999999999999998 < uVar10) && ((uVar10 != 0x1999999999999999 || (5 < bVar5)))) {
          pdb_142e1d8e0(&uStack_60,param_2,(char)param_3,uVar10);
          if ((int)uStack_60 == 1) {
            puStack_48[1] = uStack_58;
            *puStack_48 = 3;
            return;
          }
          puStack_48[1] = uStack_58;
          *puStack_48 = 0;
          return;
        }
        uVar2 = *(undefined1 *)(param_2 + 0x79);
        bVar3 = *(byte *)(param_2 + 0x78);
        *(undefined1 *)(param_2 + 0x78) = 0;
        if ((!SBORROW8(0,*(longlong *)(param_2 + 0x18)) & bVar3) == 1) {
          lVar7 = *(longlong *)(param_2 + 0x28);
          if (lVar7 == *(longlong *)(param_2 + 0x18)) {
            pdb_142dc7d20(param_2 + 0x18);
          }
          *(undefined1 *)(*(longlong *)(param_2 + 0x20) + lVar7) = uVar2;
          *(longlong *)(param_2 + 0x28) = lVar7 + 1;
        }
        uVar10 = (ulonglong)bVar5 + uVar10 * 10;
      }
      lVar7 = *(longlong *)(param_2 + 0x40);
      if (*(longlong *)(param_2 + 0x48) != lVar7) {
        cVar8 = *(char *)(*(longlong *)(param_2 + 0x30) + lVar7);
        *(longlong *)(param_2 + 0x40) = lVar7 + 1;
        uStack_60 = (ulonglong)CONCAT61((int6)((ulonglong)uStack_60 >> 0x10),cVar8) << 8;
        lVar7 = *(longlong *)(param_2 + 0x68) + 1;
        if (cVar8 != '\n') goto LAB_14164d667;
LAB_14164d6a3:
        *(longlong *)(param_2 + 0x70) = *(longlong *)(param_2 + 0x70) + lVar7;
        *(longlong *)(param_2 + 0x60) = *(longlong *)(param_2 + 0x60) + 1;
        *(undefined8 *)(param_2 + 0x68) = 0;
        cVar8 = '\n';
LAB_14164d6b6:
        *(undefined1 *)(param_2 + 0x78) = 1;
        *(char *)(param_2 + 0x79) = cVar8;
        goto joined_r0x00014164d6c6;
      }
      pdb_141c47310(&uStack_60,param_2 + 0x30);
      if ((char)uStack_60 != '\x02') {
        if ((char)uStack_60 != '\0') {
          uVar6 = pdb_142db8fb0(uStack_58);
          puStack_48[1] = uVar6;
          *puStack_48 = 3;
          return;
        }
        lVar7 = *(longlong *)(param_2 + 0x68) + 1;
        if (uStack_60._1_1_ == '\n') goto LAB_14164d6a3;
LAB_14164d667:
        *(longlong *)(param_2 + 0x68) = lVar7;
        cVar8 = uStack_60._1_1_;
        goto LAB_14164d6b6;
      }
LAB_14164d731:
      param_3 = param_3 & 0xff;
      param_1 = puStack_48;
      goto LAB_14164d830;
    }
LAB_14164d8ee:
    uVar6 = *(undefined8 *)(param_2 + 0x60);
    uVar9 = *(undefined8 *)(param_2 + 0x68);
    uStack_60 = 0xd;
  }
  else {
    lVar7 = *(longlong *)(param_2 + 0x40);
    if (*(longlong *)(param_2 + 0x48) != lVar7) {
      cVar8 = *(char *)(*(longlong *)(param_2 + 0x30) + lVar7);
      *(longlong *)(param_2 + 0x40) = lVar7 + 1;
      uStack_60._0_2_ = CONCAT11(cVar8,(char)uStack_60);
      lVar7 = *(longlong *)(param_2 + 0x68) + 1;
      if (cVar8 != '\n') goto LAB_14164d55b;
LAB_14164d769:
      *(longlong *)(param_2 + 0x70) = *(longlong *)(param_2 + 0x70) + lVar7;
      *(longlong *)(param_2 + 0x60) = *(longlong *)(param_2 + 0x60) + 1;
      *(undefined8 *)(param_2 + 0x68) = 0;
      cVar11 = '\n';
      lVar7 = *plVar1;
      goto joined_r0x00014164d785;
    }
    pdb_141c47310(&uStack_60,param_2 + 0x30);
    if ((char)uStack_60 == '\0') {
      lVar7 = *(longlong *)(param_2 + 0x68) + 1;
      if (uStack_60._1_1_ == '\n') goto LAB_14164d769;
LAB_14164d55b:
      *(longlong *)(param_2 + 0x68) = lVar7;
      cVar11 = uStack_60._1_1_;
      goto LAB_14164d565;
    }
    if ((char)uStack_60 != '\x02') {
LAB_14164d869:
      uVar6 = pdb_142db8fb0(uStack_58);
      goto LAB_14164d873;
    }
    uVar6 = *(undefined8 *)(param_2 + 0x60);
    uVar9 = *(undefined8 *)(param_2 + 0x68);
    uStack_60 = 5;
  }
  uVar6 = pdb_142db9040(&uStack_60,uVar6,uVar9);
LAB_14164d873:
  param_1[1] = uVar6;
  *param_1 = 3;
  return;
}

