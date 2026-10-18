// VA 0x14170c250, PDB extent 311 bytes
// asset::mesh::impl$7::check_bytes<rancor::Strategy<rkyv::validation::Validator<rkyv::validation::archive::validator::ArchiveValidator,rkyv::validation::shared::validator::SharedValidator>,rancor::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/mesh.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   asset::mesh::impl$7::check_bytes<rancor::Strategy<rkyv::validation::Validator<rkyv::validation::archive::validator::ArchiveValidator,rkyv::validation::shared::validator::SharedValidator>,rancor::Error>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/mesh.rs
   Extent: 311 */

undefined8 pdb_14170c250(int *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uStack_48;
  longlong lStack_40;
  
  iVar2 = *param_1;
  uVar3 = param_1[1];
  uStack_48 = 4;
  plVar1 = (longlong *)(param_2 + 0x20);
  lStack_40 = (ulonglong)uVar3 * 4;
  cVar5 = pdb_1417ddc40(plVar1,(longlong)iVar2 + (longlong)param_1,&uStack_48);
  if ((cVar5 == '\0') && (*(longlong *)(param_2 + 0x30) != 1)) {
    *plVar1 = (longlong)iVar2 + (longlong)param_1 + (ulonglong)uVar3 * 4;
    iVar2 = param_1[2];
    lVar8 = (longlong)param_1 + (longlong)iVar2 + 8;
    uVar3 = param_1[3];
    uVar9 = (ulonglong)uVar3;
    lVar4 = uVar9 * 0x14;
    uStack_48 = 4;
    lStack_40 = lVar4;
    cVar5 = pdb_1417ddc40(plVar1,lVar8,&uStack_48);
    uVar6 = 1;
    if (cVar5 == '\0') {
      if (*(longlong *)(param_2 + 0x30) != 0) {
        lVar7 = *(longlong *)(param_2 + 0x30) + -1;
        if (lVar7 == 0) {
          return 1;
        }
        *(longlong *)(param_2 + 0x30) = lVar7;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x28) = lVar8;
      if (uVar3 != 0) {
        lVar7 = (longlong)param_1 + (longlong)iVar2 + -0xc;
        do {
          lVar7 = lVar7 + 0x14;
          cVar5 = pdb_14170c390(lVar7,param_2);
          if (cVar5 != '\0') goto LAB_14170c348;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
        if ((ulonglong)(lVar8 + lVar4) < *(ulonglong *)(param_2 + 0x28)) {
          return 1;
        }
      }
      *(longlong *)(param_2 + 0x20) = lVar8 + lVar4;
      *(undefined8 *)(param_2 + 0x28) = uVar6;
      lVar4 = *(longlong *)(param_2 + 0x30);
      if (lVar4 != 0) {
        if (lVar4 == -1) {
          return 1;
        }
        *(longlong *)(param_2 + 0x30) = lVar4 + 1;
      }
      uVar6 = 0;
    }
  }
  else {
LAB_14170c348:
    uVar6 = 1;
  }
  return uVar6;
}

