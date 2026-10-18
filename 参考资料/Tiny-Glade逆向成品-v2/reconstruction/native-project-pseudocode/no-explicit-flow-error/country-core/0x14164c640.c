// VA 0x14164c640, PDB extent 363 bytes
// serde_json::de::Deserializer::parse_ident<serde_json::read::IoRead<std::io::buffered::bufreader::BufReader<std::fs::File> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_json::de::Deserializer::parse_ident<serde_json::read::IoRead<std::io::buffered::bufreader::BufReader<std::fs::File>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 363 */

undefined8 pdb_14164c640(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  char *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  char cVar8;
  undefined8 uVar9;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  lVar7 = 0;
  do {
    if (param_3 == lVar7) {
      return 0;
    }
    cVar3 = *(char *)(param_1 + 0x78);
    *(undefined1 *)(param_1 + 0x78) = 0;
    cVar8 = *(char *)(param_1 + 0x79);
    if (cVar3 == '\x01') {
LAB_14164c6e2:
      lVar4 = *plVar1;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x48) == lVar4) {
        pdb_141c47310(&uStack_58,param_1 + 0x30);
        if ((char)uStack_58 != '\0') {
          if ((char)uStack_58 != '\x02') {
            uVar6 = pdb_142db8fb0(uStack_50);
            return uVar6;
          }
          uVar6 = *(undefined8 *)(param_1 + 0x60);
          uVar9 = *(undefined8 *)(param_1 + 0x68);
          uStack_58 = 5;
          goto LAB_14164c79f;
        }
        lVar4 = *(longlong *)(param_1 + 0x68);
        lVar5 = uStack_58;
        cVar3 = uStack_58._1_1_;
      }
      else {
        cVar3 = *(char *)(*(longlong *)(param_1 + 0x30) + lVar4);
        *(longlong *)(param_1 + 0x40) = lVar4 + 1;
        lVar5 = (ulonglong)CONCAT61((int6)((ulonglong)uStack_58 >> 0x10),cVar3) << 8;
        lVar4 = *(longlong *)(param_1 + 0x68);
      }
      uStack_58 = lVar5;
      if (cVar3 != '\n') {
        *(longlong *)(param_1 + 0x68) = lVar4 + 1;
        uStack_58._1_1_ = (char)((ulonglong)lVar5 >> 8);
        cVar8 = uStack_58._1_1_;
        goto LAB_14164c6e2;
      }
      *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + lVar4 + 1;
      *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + 1;
      *(undefined8 *)(param_1 + 0x68) = 0;
      cVar8 = '\n';
      lVar4 = *plVar1;
    }
    if (!SBORROW8(0,lVar4)) {
      lVar5 = *(longlong *)(param_1 + 0x28);
      if (lVar5 == lVar4) {
        pdb_142dc7d20(plVar1);
      }
      *(char *)(*(longlong *)(param_1 + 0x20) + lVar5) = cVar8;
      *(longlong *)(param_1 + 0x28) = lVar5 + 1;
    }
    pcVar2 = (char *)(param_2 + lVar7);
    lVar7 = lVar7 + 1;
  } while (cVar8 == *pcVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  uVar9 = *(undefined8 *)(param_1 + 0x68);
  uStack_58 = 9;
LAB_14164c79f:
  uVar6 = pdb_142db9040(&uStack_58,uVar6,uVar9);
  return uVar6;
}

