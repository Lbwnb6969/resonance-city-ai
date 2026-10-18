// VA 0x141653390, PDB extent 652 bytes
// serde_json::de::impl$9::next_element_seed::has_next_element<serde_json::read::IoRead<std::io::buffered::bufreader::BufReader<std::fs::File> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_json::de::impl$9::next_element_seed::has_next_element<serde_json::read::IoRead<std::io::buffered::bufreader::BufReader<std::fs::File>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 652 */

void pdb_141653390(undefined1 *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar3 = *param_2;
  lVar1 = lVar3 + 0x18;
  do {
    if (*(char *)(lVar3 + 0x78) == '\0') {
      lVar6 = *(longlong *)(lVar3 + 0x40);
      if (*(longlong *)(lVar3 + 0x48) == lVar6) {
        pdb_141c47310(&uStack_58,lVar3 + 0x30);
        if ((char)uStack_58 != '\0') {
          if ((char)uStack_58 != '\x02') goto LAB_1416535e3;
          uVar5 = *(undefined8 *)(lVar3 + 0x60);
          uVar8 = *(undefined8 *)(lVar3 + 0x68);
          uStack_58 = 2;
          goto LAB_14165358f;
        }
        lVar6 = *(longlong *)(lVar3 + 0x68) + 1;
        if (uStack_58._1_1_ == '\n') goto LAB_141653476;
LAB_141653435:
        *(longlong *)(lVar3 + 0x68) = lVar6;
        bVar7 = uStack_58._1_1_;
      }
      else {
        cVar2 = *(char *)(*(longlong *)(lVar3 + 0x30) + lVar6);
        *(longlong *)(lVar3 + 0x40) = lVar6 + 1;
        uStack_58 = (ulonglong)CONCAT61((int6)((ulonglong)uStack_58 >> 0x10),cVar2) << 8;
        lVar6 = *(longlong *)(lVar3 + 0x68) + 1;
        if (cVar2 != '\n') goto LAB_141653435;
LAB_141653476:
        *(longlong *)(lVar3 + 0x70) = *(longlong *)(lVar3 + 0x70) + lVar6;
        *(longlong *)(lVar3 + 0x60) = *(longlong *)(lVar3 + 0x60) + 1;
        *(undefined8 *)(lVar3 + 0x68) = 0;
        bVar7 = 10;
      }
      *(undefined1 *)(lVar3 + 0x78) = 1;
      *(byte *)(lVar3 + 0x79) = bVar7;
    }
    else {
      bVar7 = *(byte *)(lVar3 + 0x79);
    }
    if ((0x20 < bVar7) || ((0x100002600U >> ((ulonglong)bVar7 & 0x3f) & 1) == 0)) break;
    *(undefined1 *)(lVar3 + 0x78) = 0;
    if (!SBORROW8(0,*(longlong *)(lVar3 + 0x18))) {
      lVar6 = *(longlong *)(lVar3 + 0x28);
      if (lVar6 == *(longlong *)(lVar3 + 0x18)) {
        pdb_142dc7d20(lVar1);
      }
      *(byte *)(*(longlong *)(lVar3 + 0x20) + lVar6) = bVar7;
      *(longlong *)(lVar3 + 0x28) = lVar6 + 1;
    }
  } while( true );
  if (bVar7 == 0x5d) {
    param_1[1] = 0;
  }
  else {
    if ((char)param_2[1] == '\0') {
      if (bVar7 == 0x2c) {
        pdb_140c830e0(lVar1);
        if (*(char *)(lVar3 + 0x78) == '\0') goto LAB_141653530;
        while (bVar7 = *(byte *)(lVar3 + 0x79), bVar7 < 0x21) {
          while( true ) {
            if ((0x100002600U >> ((ulonglong)bVar7 & 0x3f) & 1) == 0) goto LAB_1416535a6;
            pdb_140c830e0(lVar1);
            if (*(char *)(lVar3 + 0x78) != '\0') break;
LAB_141653530:
            pdb_140b6dc70(&uStack_58,lVar3 + 0x30);
            if ((char)uStack_58 == '\x02') {
              uVar5 = *(undefined8 *)(lVar3 + 0x60);
              uVar8 = *(undefined8 *)(lVar3 + 0x68);
              uStack_58 = 5;
              goto LAB_14165358f;
            }
            if ((char)uStack_58 != '\0') goto LAB_1416535e3;
            *(undefined1 *)(lVar3 + 0x78) = 1;
            *(byte *)(lVar3 + 0x79) = uStack_58._1_1_;
            bVar7 = uStack_58._1_1_;
            if (0x20 < uStack_58._1_1_) goto LAB_1416535a6;
          }
        }
LAB_1416535a6:
        if (bVar7 != 0x5d) goto LAB_1416535ab;
        uVar5 = *(undefined8 *)(lVar3 + 0x60);
        uVar8 = *(undefined8 *)(lVar3 + 0x68);
        uStack_58 = 0x15;
      }
      else {
        uVar5 = *(undefined8 *)(lVar3 + 0x60);
        uVar8 = *(undefined8 *)(lVar3 + 0x68);
        uStack_58 = 7;
      }
LAB_14165358f:
      uVar5 = pdb_142db9040(&uStack_58,uVar5,uVar8);
      goto LAB_141653599;
    }
    *(undefined1 *)(param_2 + 1) = 0;
LAB_1416535ab:
    param_1[1] = 1;
  }
  uVar4 = 0;
  goto LAB_1416535b6;
LAB_1416535e3:
  uVar5 = pdb_142db8fb0(uStack_50);
LAB_141653599:
  *(undefined8 *)(param_1 + 8) = uVar5;
  uVar4 = 1;
LAB_1416535b6:
  *param_1 = uVar4;
  return;
}

