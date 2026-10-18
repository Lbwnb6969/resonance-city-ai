// VA 0x1409056c0, PDB extent 389 bytes
// asset::foliage::impl$21::check_bytes<rancor::Strategy<rkyv::validation::Validator<rkyv::validation::archive::validator::ArchiveValidator,rkyv::validation::shared::validator::SharedValidator>,rancor::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/foliage.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   asset::foliage::impl$21::check_bytes<rancor::Strategy<rkyv::validation::Validator<rkyv::validation::archive::validator::ArchiveValidator,rkyv::validation::shared::validator::SharedValidator>,rancor::Error>
   >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/asset/src/foliage.rs
   Extent: 389 */

byte pdb_1409056c0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uStack_38;
  longlong lStack_30;
  
  cVar4 = pdb_14150fb80();
  if (cVar4 == '\0') {
    lVar6 = param_1 + *(int *)(param_1 + 0x24) + 0x24;
    lVar7 = (ulonglong)*(uint *)(param_1 + 0x28) * 4;
    uStack_38 = 4;
    lVar1 = param_2 + 0x20;
    lStack_30 = lVar7;
    cVar4 = pdb_1417ddc40(lVar1,lVar6,&uStack_38);
    if ((cVar4 == '\0') && (*(longlong *)(param_2 + 0x30) != 1)) {
      *(longlong *)(param_2 + 0x20) = lVar6 + lVar7;
      lVar6 = param_1 + *(int *)(param_1 + 0x2c) + 0x2c;
      lVar7 = (ulonglong)*(uint *)(param_1 + 0x30) * 4;
      uStack_38 = 4;
      lStack_30 = lVar7;
      cVar4 = pdb_1417ddc40(lVar1,lVar6,&uStack_38);
      if ((cVar4 == '\0') && (*(longlong *)(param_2 + 0x30) != 1)) {
        *(longlong *)(param_2 + 0x20) = lVar6 + lVar7;
        lVar7 = param_1 + *(int *)(param_1 + 0x34) + 0x34;
        lVar6 = (ulonglong)*(uint *)(param_1 + 0x38) * 0x14;
        uStack_38 = 4;
        lStack_30 = lVar6;
        cVar4 = pdb_1417ddc40(lVar1,lVar7,&uStack_38);
        if ((cVar4 == '\0') && (*(longlong *)(param_2 + 0x30) != 1)) {
          *(longlong *)(param_2 + 0x20) = lVar7 + lVar6;
          lVar6 = param_1 + *(int *)(param_1 + 0x3c) + 0x3c;
          lVar7 = (ulonglong)*(uint *)(param_1 + 0x40) * 8;
          uStack_38 = 4;
          lStack_30 = lVar7;
          cVar4 = pdb_1417ddc40(lVar1,lVar6,&uStack_38);
          if ((cVar4 == '\0') && (*(longlong *)(param_2 + 0x30) != 1)) {
            *(longlong *)(param_2 + 0x20) = lVar6 + lVar7;
            cVar4 = pdb_1417c3bc0(param_1 + 0x50,param_2);
            if (cVar4 == '\0') {
              uVar5 = (longlong)*(int *)(param_1 + 0x5c) + param_1 + 0x5c;
              uVar2 = uVar5 + (ulonglong)*(uint *)(param_1 + 0x60) * 2;
              bVar3 = uVar5 < *(ulonglong *)(param_2 + 0x20);
              bVar8 = *(ulonglong *)(param_2 + 0x28) < uVar2;
              bVar9 = *(longlong *)(param_2 + 0x30) == 1;
              if (!bVar9 && (((uVar5 & 1) == 0 && !bVar3) && (!bVar8 && uVar2 >= uVar5))) {
                *(ulonglong *)(param_2 + 0x20) = uVar2;
              }
              return bVar9 | (byte)uVar5 & 1 | bVar3 | (bVar8 || uVar2 < uVar5);
            }
          }
        }
      }
    }
  }
  return 1;
}

