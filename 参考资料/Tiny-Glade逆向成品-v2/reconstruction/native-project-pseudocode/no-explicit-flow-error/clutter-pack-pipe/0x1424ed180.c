// VA 0x1424ed180, PDB extent 507 bytes
// clutter_pack_pipe::impl$29::check_bytes<rancor::Strategy<rkyv::validation::Validator<rkyv::validation::archive::validator::ArchiveValidator,rkyv::validation::shared::validator::SharedValidator>,rancor::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   clutter_pack_pipe::impl$29::check_bytes<rancor::Strategy<rkyv::validation::Validator<rkyv::validation::archive::validator::ArchiveValidator,rkyv::validation::shared::validator::SharedValidator>,rancor::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 507 */

bool pdb_1424ed180(int *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uStack_38;
  longlong lStack_30;
  
  iVar2 = *param_1;
  uVar3 = param_1[1];
  uStack_38 = 4;
  lVar1 = param_2 + 0x20;
  lStack_30 = (ulonglong)uVar3 * 4;
  cVar4 = pdb_1417ddc40(lVar1,(longlong)iVar2 + (longlong)param_1,&uStack_38);
  if ((cVar4 == '\0') && (*(longlong *)(param_2 + 0x30) != 1)) {
    *(ulonglong *)(param_2 + 0x20) = (longlong)iVar2 + (longlong)param_1 + (ulonglong)uVar3 * 4;
    lVar5 = (longlong)param_1 + (longlong)param_1[2] + 8;
    uVar3 = param_1[3];
    uStack_38 = 4;
    lStack_30 = (ulonglong)uVar3 * 0xc;
    cVar4 = pdb_1417ddc40(lVar1,lVar5,&uStack_38);
    if ((cVar4 == '\0') && (*(longlong *)(param_2 + 0x30) != 1)) {
      *(ulonglong *)(param_2 + 0x20) = lVar5 + (ulonglong)uVar3 * 0xc;
      lVar5 = (longlong)param_1 + (longlong)param_1[4] + 0x10;
      uVar3 = param_1[5];
      uStack_38 = 4;
      lStack_30 = (ulonglong)uVar3 * 0xc;
      cVar4 = pdb_1417ddc40(lVar1,lVar5,&uStack_38);
      if ((cVar4 == '\0') && (*(longlong *)(param_2 + 0x30) != 1)) {
        *(ulonglong *)(param_2 + 0x20) = lVar5 + (ulonglong)uVar3 * 0xc;
        lVar5 = (longlong)param_1 + (longlong)param_1[6] + 0x18;
        uVar3 = param_1[7];
        uStack_38 = 4;
        lStack_30 = (ulonglong)uVar3 * 0xc;
        cVar4 = pdb_1417ddc40(lVar1,lVar5,&uStack_38);
        if ((cVar4 == '\0') && (*(longlong *)(param_2 + 0x30) != 1)) {
          *(ulonglong *)(param_2 + 0x20) = lVar5 + (ulonglong)uVar3 * 0xc;
          lVar5 = (longlong)param_1 + (longlong)param_1[8] + 0x20;
          uVar3 = param_1[9];
          uStack_38 = 4;
          lStack_30 = (ulonglong)uVar3 * 8;
          cVar4 = pdb_1417ddc40(lVar1,lVar5,&uStack_38);
          if ((cVar4 == '\0') && (*(longlong *)(param_2 + 0x30) != 1)) {
            *(ulonglong *)(param_2 + 0x20) = lVar5 + (ulonglong)uVar3 * 8;
            lVar5 = (longlong)param_1 + (longlong)param_1[10] + 0x28;
            uVar3 = param_1[0xb];
            uStack_38 = 4;
            lStack_30 = (ulonglong)uVar3 * 4;
            cVar4 = pdb_1417ddc40(lVar1,lVar5,&uStack_38);
            if ((cVar4 == '\0') && (*(longlong *)(param_2 + 0x30) != 1)) {
              *(ulonglong *)(param_2 + 0x20) = lVar5 + (ulonglong)uVar3 * 4;
              cVar4 = pdb_1417c3af0(param_1 + 0xc,param_2);
              if (cVar4 != '\0') {
                return true;
              }
              return 1 < *(byte *)(param_1 + 0xe);
            }
          }
        }
      }
    }
  }
  return true;
}

