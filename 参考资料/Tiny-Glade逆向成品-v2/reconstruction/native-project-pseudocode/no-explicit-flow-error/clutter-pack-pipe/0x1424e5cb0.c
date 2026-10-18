// VA 0x1424e5cb0, PDB extent 271 bytes
// clutter_pack_pipe::impl$54::check_bytes<rancor::Strategy<rkyv::validation::Validator<rkyv::validation::archive::validator::ArchiveValidator,rkyv::validation::shared::validator::SharedValidator>,rancor::Error> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   clutter_pack_pipe::impl$54::check_bytes<rancor::Strategy<rkyv::validation::Validator<rkyv::validation::archive::validator::ArchiveValidator,rkyv::validation::shared::validator::SharedValidator>,rancor::Error>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/clutter-pack-pipe/src/lib.rs
   Extent: 271 */

undefined8 pdb_1424e5cb0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  uint uVar9;
  ulonglong uVar10;
  char unaff_R13B;
  
  cVar4 = pdb_14150fb80();
  if (cVar4 == '\0') {
    iVar1 = *(int *)(param_1 + 0x20);
    lVar7 = param_1 + iVar1 + 0x20;
    uVar9 = *(uint *)(param_1 + 0x24);
    uVar10 = (ulonglong)uVar9;
    lVar3 = uVar10 * 0x44;
    cVar4 = pdb_1417ddc40(param_2 + 0x20,lVar7);
    if (cVar4 == '\0') {
      if (*(longlong *)(param_2 + 0x30) != 0) {
        lVar6 = *(longlong *)(param_2 + 0x30) + -1;
        if (lVar6 == 0) {
          return 1;
        }
        *(longlong *)(param_2 + 0x30) = lVar6;
      }
      uVar2 = *(undefined8 *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x28) = lVar7;
      if (uVar9 != 0) {
        lVar6 = iVar1 + param_1 + -0x24;
        do {
          lVar6 = lVar6 + 0x44;
          cVar4 = pdb_1424e5c10(lVar6,param_2);
          if (cVar4 != '\0') {
            return 1;
          }
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        if ((ulonglong)(lVar7 + lVar3) < *(ulonglong *)(param_2 + 0x28)) {
          return 1;
        }
      }
      *(longlong *)(param_2 + 0x20) = lVar7 + lVar3;
      *(undefined8 *)(param_2 + 0x28) = uVar2;
      lVar3 = *(longlong *)(param_2 + 0x30);
      if (lVar3 != 0) {
        if (lVar3 == -1) {
          return 1;
        }
        *(longlong *)(param_2 + 0x30) = lVar3 + 1;
      }
      puVar8 = (ulonglong *)(param_1 + 0x28);
      if (-0x41 < *(char *)puVar8) {
        if (*(char *)puVar8 == -1) {
          uVar10 = 0;
        }
        else if (*(char *)(param_1 + 0x29) == -1) {
          uVar10 = 1;
        }
        else if (*(char *)(param_1 + 0x2a) == -1) {
          uVar10 = 2;
        }
        else if (*(char *)(param_1 + 0x2b) == -1) {
          uVar10 = 3;
        }
        else if (*(char *)(param_1 + 0x2c) == -1) {
          uVar10 = 4;
        }
        else if (*(char *)(param_1 + 0x2d) == -1) {
          uVar10 = 5;
        }
        else if (*(char *)(param_1 + 0x2e) == -1) {
          uVar10 = 6;
        }
        else {
          uVar10 = (ulonglong)(*(char *)(param_1 + 0x2f) != -1) + 7;
        }
        uVar5 = uVar10 & 8;
        if ((((uVar5 != 0) && ((*puVar8 & 0x8080808080808080) != 0)) ||
            ((uVar9 = (uint)uVar10 & 7, (uVar10 & 7) != 0 &&
             ((*(char *)((longlong)puVar8 + uVar5) < '\0' ||
              ((uVar9 != 1 &&
               ((*(char *)(param_1 + 0x29 + uVar5) < '\0' ||
                ((uVar9 != 2 &&
                 ((*(char *)(param_1 + 0x2a + uVar5) < '\0' ||
                  ((uVar9 != 3 &&
                   ((*(char *)(param_1 + 0x2b + uVar5) < '\0' ||
                    ((uVar9 != 4 &&
                     ((*(char *)(param_1 + 0x2c + uVar5) < '\0' ||
                      ((uVar9 != 5 &&
                       ((*(char *)(param_1 + 0x2d + uVar5) < '\0' ||
                        ((uVar9 != 6 && (*(char *)(param_1 + 0x2e + uVar5) < '\0' || uVar9 != 7)))))
                       ))))))))))))))))))))))) &&
           (pdb_140f69110(&stack0xffffffffffffffe8,puVar8), unaff_R13B != '\0')) {
          return 1;
        }
        return 0;
      }
      uVar9 = *(uint *)puVar8 >> 2 & 0xffffffc0 | *(uint *)puVar8 & 0x3f;
      if ((8 < uVar9) &&
         (cVar4 = pdb_1417dd710(param_2,(char *)((longlong)*(int *)(param_1 + 0x2c) +
                                                (longlong)puVar8),uVar9,&stack0xffffffffffffffd8),
         cVar4 == '\0')) {
        return 0;
      }
      return 1;
    }
  }
  return 1;
}

