// VA 0x140908790, PDB extent 247 bytes
// asset::foliage::impl$14::check_bytes<rancor::Strategy<rkyv::validation::Validator<rkyv::validation::archive::validator::ArchiveValidator,rkyv::validation::shared::validator::SharedValidator>,rancor::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/foliage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   asset::foliage::impl$14::check_bytes<rancor::Strategy<rkyv::validation::Validator<rkyv::validation::archive::validator::ArchiveValidator,rkyv::validation::shared::validator::SharedValidator>,rancor::Error>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/foliage.rs
   Extent: 247 */

undefined8 pdb_140908790(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uStack_48;
  longlong lStack_40;
  
  cVar3 = pdb_14150fb80();
  uVar4 = 1;
  if (cVar3 == '\0') {
    iVar1 = *(int *)(param_1 + 0x1c);
    lVar6 = param_1 + iVar1 + 0x1c;
    uVar2 = *(uint *)(param_1 + 0x20);
    uVar8 = (ulonglong)uVar2;
    lVar7 = uVar8 * 0x70;
    uStack_48 = 0x10;
    lStack_40 = lVar7;
    cVar3 = pdb_1417ddc40(param_2 + 0x20,lVar6,&uStack_48);
    uVar4 = 1;
    if (cVar3 == '\0') {
      if (*(longlong *)(param_2 + 0x30) != 0) {
        lVar5 = *(longlong *)(param_2 + 0x30) + -1;
        if (lVar5 == 0) {
          return 1;
        }
        *(longlong *)(param_2 + 0x30) = lVar5;
      }
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x28) = lVar6;
      if (uVar2 != 0) {
        lVar5 = param_1 + iVar1 + -0x54;
        do {
          lVar5 = lVar5 + 0x70;
          cVar3 = pdb_1409056c0(lVar5,param_2);
          if (cVar3 != '\0') {
            return 1;
          }
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
        if ((ulonglong)(lVar6 + lVar7) < *(ulonglong *)(param_2 + 0x28)) {
          return 1;
        }
      }
      *(longlong *)(param_2 + 0x20) = lVar6 + lVar7;
      *(undefined8 *)(param_2 + 0x28) = uVar4;
      lVar6 = *(longlong *)(param_2 + 0x30);
      if (lVar6 != 0) {
        if (lVar6 == -1) {
          return 1;
        }
        *(longlong *)(param_2 + 0x30) = lVar6 + 1;
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}

