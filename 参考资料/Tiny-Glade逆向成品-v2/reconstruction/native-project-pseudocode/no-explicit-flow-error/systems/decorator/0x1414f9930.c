// VA 0x1414f9930, PDB extent 593 bytes
// core::iter::adapters::chain::impl$1::try_fold<core::iter::adapters::chain::Chain<core::iter::adapters::map::Map<std::collections::hash::map::Iter<country_core::resources::walls::WallId,country_core::resources::walls::decorator_storage::Decorators>,country_core::resources::walls::decorator_storage::impl$17::iter::closure_env$0>,core::iter::adapters::map::Map<core::option::Iter<country_core::resources::walls::decorator_storage::Decorators>,country_core::resources::walls::decorator_storage::impl$17::iter::closure_env$1> >,core::iter::adapters::map::Map<core::option::Iter<country_core::resources::walls::decorator_storage::Decorators>,country_core::resources::walls::decorator_storage::impl$17::iter::closure_env$2>,tuple$<>,core::iter::traits::iterator::Iterator::find_map::check::closure_env$0<tuple$<enum2$<country_core::resources::walls::decorator_storage::DecoratorStorageAddr>,ref$<country_core::resources::walls::decorator_storage::Decorators> >,tuple$<enum2$<country_core::resources::walls::decorator_storage::DecoratorStorageAddr>,ref$<country_core::resources::walls::decorator::DecoratorInfo> >,system_decorator::derive_decorator_subtype::derive_decorator_subtypes::closure_env$0>,enum2$<core::ops::control_flow::ControlFlow<tuple$<enum2$<country_core::resources::walls::decorator_storage::DecoratorStorageAddr>,ref$<country_core::resources::walls::decorator::DecoratorInfo> >,tuple$<> > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   core::iter::adapters::chain::impl$1::try_fold<core::iter::adapters::chain::Chain<core::iter::adapters::map::Map<std::collections::hash::map::Iter<country_core::resources::walls::WallId,country_core::resources::walls::decorator_storage::Decorators>,country_core::resources::walls::decorator_storage::impl$17::iter::closure_env$0>,core::iter::adapters::map::Map<core::option::Iter<country_core::resources::walls::decorator_storage::Decorators>,country_core::resources::walls::decorator_storage::impl$17::iter::closure_env$1>
   >,core::iter::adapters::map::Map<core::option::Iter<country_core::resources::walls::decorator_storage::Decorators>,country_core::resources::walls::decorator_storage::impl$17::iter::closure_env$2>,tuple$<>,core::iter::traits::iterator::Iterator::find_map::check::closure_env$0<tuple$<enum2$<country_core::resources::walls::decorator_storage::DecoratorStorageAddr>,ref$<country_core::resources::walls::decorator_storage::Decorators>
   >,tuple$<enum2$<country_core::resources::walls::decorator_storage::DecoratorStorageAddr>,ref$<country_core::resources::walls::decorator::DecoratorInfo>
   >,system_decorator::derive_decorator_subtype::derive_decorator_subtypes::closure_env$0>,enum2$<core::ops::control_flow::ControlFlow<tuple$<enum2$<country_core::resources::walls::decorator_storage::DecoratorStorageAddr>,ref$<country_core::resources::walls::decorator::DecoratorInfo>
   >,tuple$<> > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/decorator/src/lib.rs
   Extent: 593 */

longlong * pdb_1414f9930(longlong *param_1,char *param_2,int *param_3)

{
  char *pcVar1;
  int *piVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ushort uVar9;
  longlong lVar10;
  longlong lVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int *piStack_48;
  int **ppiStack_40;
  longlong lStack_38;
  ulonglong uStack_30;
  longlong lStack_28;
  
  uVar6 = *(ulonglong *)(param_2 + 0x10);
  piStack_48 = param_3;
  if (uVar6 != 2) {
    ppiStack_40 = &piStack_48;
    if (*(longlong *)(param_2 + 0x20) != 0) {
      pdb_1414e3530(&lStack_38,param_2 + 0x20,&ppiStack_40);
      if (lStack_38 != 3) {
LAB_1414f9b69:
        *param_1 = lStack_38;
        param_1[1] = uStack_30;
        param_1[2] = lStack_28;
        return param_1;
      }
      param_2[0x20] = '\0';
      param_2[0x21] = '\0';
      param_2[0x22] = '\0';
      param_2[0x23] = '\0';
      param_2[0x24] = '\0';
      param_2[0x25] = '\0';
      param_2[0x26] = '\0';
      param_2[0x27] = '\0';
      uVar6 = *(ulonglong *)(param_2 + 0x10);
    }
    if ((uVar6 & 1) != 0) {
      lVar7 = *(longlong *)(param_2 + 0x18);
      param_2[0x18] = '\0';
      param_2[0x19] = '\0';
      param_2[0x1a] = '\0';
      param_2[0x1b] = '\0';
      param_2[0x1c] = '\0';
      param_2[0x1d] = '\0';
      param_2[0x1e] = '\0';
      param_2[0x1f] = '\0';
      if (lVar7 != 0) {
        if (*(longlong *)(lVar7 + 0x48) != 0) {
          piVar2 = *ppiStack_40;
          uVar6 = pdb_1400aede0(lVar7 + 0x50,piVar2);
          lVar3 = *(longlong *)(lVar7 + 0x30);
          uStack_30 = *(ulonglong *)(lVar7 + 0x38);
          bVar12 = (byte)(uVar6 >> 0x39);
          auVar13 = ZEXT216(CONCAT11(bVar12,bVar12));
          auVar13 = pshuflw(auVar13,auVar13,0);
          lVar7 = 0;
          while( true ) {
            uVar6 = uVar6 & uStack_30;
            pcVar1 = (char *)(lVar3 + uVar6);
            auVar16[0] = -(*pcVar1 == auVar13[0]);
            auVar16[1] = -(pcVar1[1] == auVar13[1]);
            auVar16[2] = -(pcVar1[2] == auVar13[2]);
            auVar16[3] = -(pcVar1[3] == auVar13[3]);
            auVar16[4] = -(pcVar1[4] == auVar13[4]);
            auVar16[5] = -(pcVar1[5] == auVar13[5]);
            auVar16[6] = -(pcVar1[6] == auVar13[6]);
            auVar16[7] = -(pcVar1[7] == auVar13[7]);
            auVar16[8] = -(pcVar1[8] == auVar13[0]);
            auVar16[9] = -(pcVar1[9] == auVar13[1]);
            auVar16[10] = -(pcVar1[10] == auVar13[2]);
            auVar16[0xb] = -(pcVar1[0xb] == auVar13[3]);
            auVar16[0xc] = -(pcVar1[0xc] == auVar13[4]);
            auVar16[0xd] = -(pcVar1[0xd] == auVar13[5]);
            auVar16[0xe] = -(pcVar1[0xe] == auVar13[6]);
            auVar16[0xf] = -(pcVar1[0xf] == auVar13[7]);
            uVar9 = (ushort)(SUB161(auVar16 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar16[0xf] >> 7) << 0xf;
            uVar8 = (uint)uVar9;
            if (uVar9 != 0) {
              do {
                uVar4 = 0;
                for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                  uVar4 = uVar4 + 1;
                }
                lVar10 = (uVar4 + uVar6 & uStack_30) * -0x68;
                if (*piVar2 == *(int *)(lVar3 + -0x68 + lVar10)) {
                  lStack_28 = lVar3 + lVar10 + -0x60;
                  lStack_38 = 1;
                  goto LAB_1414f9b69;
                }
                uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
                uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
              } while (uVar9 != 0);
            }
            auVar14[0] = -(*pcVar1 == -1);
            auVar14[1] = -(pcVar1[1] == -1);
            auVar14[2] = -(pcVar1[2] == -1);
            auVar14[3] = -(pcVar1[3] == -1);
            auVar14[4] = -(pcVar1[4] == -1);
            auVar14[5] = -(pcVar1[5] == -1);
            auVar14[6] = -(pcVar1[6] == -1);
            auVar14[7] = -(pcVar1[7] == -1);
            auVar14[8] = -(pcVar1[8] == -1);
            auVar14[9] = -(pcVar1[9] == -1);
            auVar14[10] = -(pcVar1[10] == -1);
            auVar14[0xb] = -(pcVar1[0xb] == -1);
            auVar14[0xc] = -(pcVar1[0xc] == -1);
            auVar14[0xd] = -(pcVar1[0xd] == -1);
            auVar14[0xe] = -(pcVar1[0xe] == -1);
            auVar14[0xf] = -(pcVar1[0xf] == -1);
            if ((((((((((((((((SUB161(auVar14 >> 7,0) & 1) != 0 ||
                             (SUB161(auVar14 >> 0xf,0) & 1) != 0) ||
                            (SUB161(auVar14 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar14 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar14 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar14 >> 0x2f,0) & 1) != 0) ||
                        (SUB161(auVar14 >> 0x37,0) & 1) != 0) ||
                       (SUB161(auVar14 >> 0x3f,0) & 1) != 0) || (SUB161(auVar14 >> 0x47,0) & 1) != 0
                      ) || (SUB161(auVar14 >> 0x4f,0) & 1) != 0) ||
                    (SUB161(auVar14 >> 0x57,0) & 1) != 0) || (SUB161(auVar14 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar14 >> 0x67,0) & 1) != 0) || (SUB161(auVar14 >> 0x6f,0) & 1) != 0)
                || (SUB161(auVar14 >> 0x77,0) & 1) != 0) || auVar14[0xf] < '\0') break;
            uVar6 = uVar6 + lVar7 + 0x10;
            lVar7 = lVar7 + 0x10;
          }
        }
        param_2[0x18] = '\0';
        param_2[0x19] = '\0';
        param_2[0x1a] = '\0';
        param_2[0x1b] = '\0';
        param_2[0x1c] = '\0';
        param_2[0x1d] = '\0';
        param_2[0x1e] = '\0';
        param_2[0x1f] = '\0';
      }
    }
    param_2[0x10] = '\x02';
    param_2[0x11] = '\0';
    param_2[0x12] = '\0';
    param_2[0x13] = '\0';
    param_2[0x14] = '\0';
    param_2[0x15] = '\0';
    param_2[0x16] = '\0';
    param_2[0x17] = '\0';
  }
  piVar2 = piStack_48;
  if (*param_2 != '\0') {
    lVar7 = *(longlong *)(param_2 + 8);
    param_2[8] = '\0';
    param_2[9] = '\0';
    param_2[10] = '\0';
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    if (lVar7 != 0) {
      if (*(longlong *)(lVar7 + 0x48) != 0) {
        uVar6 = pdb_1400aede0(lVar7 + 0x50,piStack_48);
        lVar3 = *(longlong *)(lVar7 + 0x30);
        bVar12 = (byte)(uVar6 >> 0x39);
        auVar13 = ZEXT216(CONCAT11(bVar12,bVar12));
        auVar13 = pshuflw(auVar13,auVar13,0);
        lVar10 = 0;
        while( true ) {
          uVar6 = uVar6 & *(ulonglong *)(lVar7 + 0x38);
          pcVar1 = (char *)(lVar3 + uVar6);
          auVar17[0] = -(*pcVar1 == auVar13[0]);
          auVar17[1] = -(pcVar1[1] == auVar13[1]);
          auVar17[2] = -(pcVar1[2] == auVar13[2]);
          auVar17[3] = -(pcVar1[3] == auVar13[3]);
          auVar17[4] = -(pcVar1[4] == auVar13[4]);
          auVar17[5] = -(pcVar1[5] == auVar13[5]);
          auVar17[6] = -(pcVar1[6] == auVar13[6]);
          auVar17[7] = -(pcVar1[7] == auVar13[7]);
          auVar17[8] = -(pcVar1[8] == auVar13[0]);
          auVar17[9] = -(pcVar1[9] == auVar13[1]);
          auVar17[10] = -(pcVar1[10] == auVar13[2]);
          auVar17[0xb] = -(pcVar1[0xb] == auVar13[3]);
          auVar17[0xc] = -(pcVar1[0xc] == auVar13[4]);
          auVar17[0xd] = -(pcVar1[0xd] == auVar13[5]);
          auVar17[0xe] = -(pcVar1[0xe] == auVar13[6]);
          auVar17[0xf] = -(pcVar1[0xf] == auVar13[7]);
          uVar9 = (ushort)(SUB161(auVar17 >> 7,0) & 1) | (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar17[0xf] >> 7) << 0xf;
          uVar8 = (uint)uVar9;
          while (uVar9 != 0) {
            uVar4 = 0;
            for (uVar5 = uVar8; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            lVar11 = (uVar4 + uVar6 & *(ulonglong *)(lVar7 + 0x38)) * -0x68;
            if (*piVar2 == *(int *)(lVar3 + -0x68 + lVar11)) {
              param_1[2] = lVar3 + lVar11 + -0x60;
              *param_1 = 2;
              return param_1;
            }
            uVar9 = (ushort)(uVar8 - 1) & (ushort)uVar8;
            uVar8 = CONCAT22((short)(uVar8 - 1 >> 0x10),uVar9);
          }
          auVar15[0] = -(*pcVar1 == -1);
          auVar15[1] = -(pcVar1[1] == -1);
          auVar15[2] = -(pcVar1[2] == -1);
          auVar15[3] = -(pcVar1[3] == -1);
          auVar15[4] = -(pcVar1[4] == -1);
          auVar15[5] = -(pcVar1[5] == -1);
          auVar15[6] = -(pcVar1[6] == -1);
          auVar15[7] = -(pcVar1[7] == -1);
          auVar15[8] = -(pcVar1[8] == -1);
          auVar15[9] = -(pcVar1[9] == -1);
          auVar15[10] = -(pcVar1[10] == -1);
          auVar15[0xb] = -(pcVar1[0xb] == -1);
          auVar15[0xc] = -(pcVar1[0xc] == -1);
          auVar15[0xd] = -(pcVar1[0xd] == -1);
          auVar15[0xe] = -(pcVar1[0xe] == -1);
          auVar15[0xf] = -(pcVar1[0xf] == -1);
          if ((((((((((((((((SUB161(auVar15 >> 7,0) & 1) != 0 || (SUB161(auVar15 >> 0xf,0) & 1) != 0
                           ) || (SUB161(auVar15 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar15 >> 0x1f,0) & 1) != 0) ||
                        (SUB161(auVar15 >> 0x27,0) & 1) != 0) ||
                       (SUB161(auVar15 >> 0x2f,0) & 1) != 0) || (SUB161(auVar15 >> 0x37,0) & 1) != 0
                      ) || (SUB161(auVar15 >> 0x3f,0) & 1) != 0) ||
                    (SUB161(auVar15 >> 0x47,0) & 1) != 0) || (SUB161(auVar15 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar15 >> 0x57,0) & 1) != 0) || (SUB161(auVar15 >> 0x5f,0) & 1) != 0)
                || (SUB161(auVar15 >> 0x67,0) & 1) != 0) || (SUB161(auVar15 >> 0x6f,0) & 1) != 0) ||
              (SUB161(auVar15 >> 0x77,0) & 1) != 0) || auVar15[0xf] < '\0') break;
          uVar6 = uVar6 + lVar10 + 0x10;
          lVar10 = lVar10 + 0x10;
        }
      }
      param_2[8] = '\0';
      param_2[9] = '\0';
      param_2[10] = '\0';
      param_2[0xb] = '\0';
      param_2[0xc] = '\0';
      param_2[0xd] = '\0';
      param_2[0xe] = '\0';
      param_2[0xf] = '\0';
    }
  }
  *param_1 = 3;
  return param_1;
}

