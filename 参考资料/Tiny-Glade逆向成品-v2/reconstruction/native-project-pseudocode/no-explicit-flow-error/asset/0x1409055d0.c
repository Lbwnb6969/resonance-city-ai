// VA 0x1409055d0, PDB extent 231 bytes
// asset::foliage::impl$7::check_bytes<rancor::Strategy<rkyv::validation::Validator<rkyv::validation::archive::validator::ArchiveValidator,rkyv::validation::shared::validator::SharedValidator>,rancor::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/foliage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   asset::foliage::impl$7::check_bytes<rancor::Strategy<rkyv::validation::Validator<rkyv::validation::archive::validator::ArchiveValidator,rkyv::validation::shared::validator::SharedValidator>,rancor::Error>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/foliage.rs
   Extent: 231 */

undefined8 pdb_1409055d0(int *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uStack_48;
  longlong lStack_40;
  
  iVar2 = *param_1;
  lVar1 = (longlong)param_1 + (longlong)iVar2;
  uVar3 = param_1[1];
  uVar8 = (ulonglong)uVar3;
  lVar4 = uVar8 * 0x24;
  uStack_48 = 4;
  lStack_40 = lVar4;
  cVar5 = pdb_1417ddc40(param_2 + 0x20,lVar1,&uStack_48);
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
    *(longlong *)(param_2 + 0x28) = lVar1;
    if (uVar3 != 0) {
      lVar7 = (longlong)param_1 + (longlong)iVar2 + -0x24;
      do {
        lVar7 = lVar7 + 0x24;
        cVar5 = pdb_140908790(lVar7,param_2);
        if (cVar5 != '\0') {
          return 1;
        }
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      if ((ulonglong)(lVar1 + lVar4) < *(ulonglong *)(param_2 + 0x28)) {
        return 1;
      }
    }
    *(longlong *)(param_2 + 0x20) = lVar1 + lVar4;
    *(undefined8 *)(param_2 + 0x28) = uVar6;
    lVar1 = *(longlong *)(param_2 + 0x30);
    if (lVar1 != 0) {
      if (lVar1 == -1) {
        return 1;
      }
      *(longlong *)(param_2 + 0x30) = lVar1 + 1;
    }
    uVar6 = 0;
  }
  return uVar6;
}

