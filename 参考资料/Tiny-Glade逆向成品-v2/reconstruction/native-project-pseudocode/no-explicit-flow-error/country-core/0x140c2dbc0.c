// VA 0x140c2dbc0, PDB extent 2191 bytes
// png::text_metadata::impl$5::encode<ref_mut$<ref_mut$<std::io::cursor::Cursor<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> > > > > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   png::text_metadata::impl$5::encode<ref_mut$<ref_mut$<std::io::cursor::Cursor<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   > > > > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 2191 */

undefined8 * pdb_140c2dbc0(undefined8 *param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  undefined1 (*pauVar3) [16];
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 (*pauVar10) [16];
  undefined1 uVar11;
  undefined1 auVar12 [16];
  ulonglong auStack_128 [3];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  undefined2 uStack_d8;
  undefined6 uStack_d6;
  undefined2 uStack_d0;
  undefined6 uStack_ce;
  ulonglong uStack_c8;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  byte *pbStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined6 uStack_5e;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined6 uStack_56;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  pdb_140db48a0(&uStack_c8,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30));
  if (SBORROW8(0,uStack_c8)) {
    *param_1 = 3;
    *(undefined1 *)(param_1 + 1) = 0xc;
    *(undefined1 *)((longlong)param_1 + 9) = uStack_c0;
    return param_1;
  }
  uStack_57 = (undefined1)uStack_b7;
  uStack_56 = (undefined6)((uint7)uStack_b7 >> 8);
  uStack_5f = (undefined1)uStack_bf;
  uStack_5e = (undefined6)((uint7)uStack_bf >> 8);
  uStack_58 = uStack_b8;
  uStack_68 = uStack_c8;
  uStack_60 = uStack_c0;
  uVar9 = CONCAT62(uStack_56,CONCAT11(uStack_57,uStack_b8));
  uVar11 = 1;
  if (0xffffffffffffffb0 < uVar9 - 0x50) {
    if (uVar9 == uStack_c8) {
      uStack_49 = 1;
      pdb_142dc7d20(&uStack_68);
    }
    *(undefined1 *)(CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60)) + uVar9) = 0;
    uVar5 = uVar9 + 1;
    uStack_58 = (undefined1)uVar5;
    uStack_57 = (undefined1)(uVar5 >> 8);
    uStack_56 = (undefined6)(uVar5 >> 0x10);
    cVar2 = param_2[0x68];
    if (cVar2 == '\0') {
      if (uVar5 == uStack_68) {
        uStack_49 = 1;
        pdb_142dc7d20(&uStack_68);
      }
      uVar11 = 0;
    }
    else {
      uVar11 = 1;
      if (uVar5 == uStack_68) {
        uStack_49 = 1;
        pdb_142dc7d20(&uStack_68);
      }
    }
    *(undefined1 *)(CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60)) + 1 + uVar9) = uVar11;
    uVar5 = uVar9 + 2;
    uStack_58 = (undefined1)uVar5;
    uStack_57 = (undefined1)(uVar5 >> 8);
    uStack_56 = (undefined6)(uVar5 >> 0x10);
    if (uVar5 == uStack_68) {
      uStack_49 = 1;
      pdb_142dc7d20(&uStack_68);
    }
    *(undefined1 *)(CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60)) + 2 + uVar9) = 0;
    lVar8 = uVar9 + 3;
    uStack_58 = (undefined1)lVar8;
    uStack_57 = (undefined1)((ulonglong)lVar8 >> 8);
    uStack_56 = (undefined6)((ulonglong)lVar8 >> 0x10);
    pauVar3 = *(undefined1 (**) [16])(param_2 + 0x40);
    uVar9 = *(ulonglong *)(param_2 + 0x48);
    if (uVar9 < 0x40) {
      uVar5 = uVar9 & 0x38;
      if (((uVar5 == 0) ||
          (((*(ulonglong *)*pauVar3 & 0x8080808080808080) == 0 &&
           ((iVar4 = (int)uVar5, iVar4 == 8 ||
            (((*(ulonglong *)(*pauVar3 + 8) & 0x8080808080808080) == 0 &&
             ((iVar4 == 0x10 ||
              (((*(ulonglong *)pauVar3[1] & 0x8080808080808080) == 0 &&
               ((iVar4 == 0x18 ||
                (((*(ulonglong *)(pauVar3[1] + 8) & 0x8080808080808080) == 0 &&
                 ((iVar4 == 0x20 ||
                  (((*(ulonglong *)pauVar3[2] & 0x8080808080808080) == 0 &&
                   ((iVar4 == 0x28 ||
                    (((*(ulonglong *)(pauVar3[2] + 8) & 0x8080808080808080) == 0 &&
                     ((iVar4 == 0x30 ||
                      (uVar5 == 0x38 && (*(ulonglong *)pauVar3[3] & 0x8080808080808080) == 0))))))))
                  )))))))))))))))))) &&
         ((uVar6 = (uint)uVar9 & 7, (uVar9 & 7) == 0 ||
          ((-1 < (char)(*pauVar3)[uVar5] &&
           ((uVar6 == 1 ||
            ((-1 < (char)(*pauVar3)[uVar5 + 1] &&
             ((uVar6 == 2 ||
              ((-1 < (char)(*pauVar3)[uVar5 + 2] &&
               ((uVar6 == 3 ||
                ((-1 < (char)(*pauVar3)[uVar5 + 3] &&
                 ((uVar6 == 4 ||
                  ((-1 < (char)(*pauVar3)[uVar5 + 4] &&
                   ((uVar6 == 5 ||
                    ((-1 < (char)(*pauVar3)[uVar5 + 5] &&
                     ((uVar6 == 6 || (-1 < (char)(*pauVar3)[uVar5 + 6] && uVar6 == 7))))))))))))))))
              )))))))))))) {
LAB_140c2ddb3:
        if (uStack_68 - lVar8 < uVar9) {
          uStack_49 = 1;
          pdb_142d7f1b0(&uStack_68,lVar8,uVar9,1,1);
          lVar8 = CONCAT62(uStack_56,CONCAT11(uStack_57,uStack_58));
LAB_140c2ddcb:
          pub_142e32760(lVar8 + CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60)),pauVar3,uVar9);
          lVar8 = CONCAT62(uStack_56,CONCAT11(uStack_57,uStack_58));
        }
        else if (uVar9 != 0) goto LAB_140c2ddcb;
        uVar9 = lVar8 + uVar9;
        uStack_58 = (undefined1)uVar9;
        uStack_57 = (undefined1)(uVar9 >> 8);
        uStack_56 = (undefined6)(uVar9 >> 0x10);
        if (uVar9 == uStack_68) {
          uStack_49 = 1;
          pdb_142dc7d20(&uStack_68);
        }
        *(undefined1 *)(CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60)) + uVar9) = 0;
        lVar8 = uVar9 + 1;
        uStack_58 = (undefined1)lVar8;
        uStack_57 = (undefined1)((ulonglong)lVar8 >> 8);
        uStack_56 = (undefined6)((ulonglong)lVar8 >> 0x10);
        uVar7 = *(undefined8 *)(param_2 + 0x58);
        uVar9 = *(ulonglong *)(param_2 + 0x60);
        if (uStack_68 - lVar8 < uVar9) {
          uStack_49 = 1;
          pdb_142d7f1b0(&uStack_68,lVar8,uVar9,1,1);
          lVar8 = CONCAT62(uStack_56,CONCAT11(uStack_57,uStack_58));
LAB_140c2de37:
          pub_142e32760(lVar8 + CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60)),uVar7,uVar9);
          lVar8 = CONCAT62(uStack_56,CONCAT11(uStack_57,uStack_58));
        }
        else if (uVar9 != 0) goto LAB_140c2de37;
        uVar9 = lVar8 + uVar9;
        uStack_58 = (undefined1)uVar9;
        uStack_57 = (undefined1)(uVar9 >> 8);
        uStack_56 = (undefined6)(uVar9 >> 0x10);
        if (uVar9 == uStack_68) {
          uStack_49 = 1;
          pdb_142dc7d20(&uStack_68);
        }
        *(undefined1 *)(CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60)) + uVar9) = 0;
        lVar8 = uVar9 + 1;
        uStack_58 = (undefined1)lVar8;
        uStack_57 = (undefined1)((ulonglong)lVar8 >> 8);
        uStack_56 = (undefined6)((ulonglong)lVar8 >> 0x10);
        if (cVar2 == '\0') {
          if (*param_2 == '\0') {
            uStack_49 = 1;
            pdb_140dbf1e0(&uStack_c8,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18)
                          ,1,0xffffffffffffffff);
            if (SBORROW8(0,uStack_c8)) {
              uVar11 = 2;
              goto LAB_140c2e07e;
            }
            pbStack_78 = (byte *)CONCAT71(uStack_bf,uStack_c0);
            uVar9 = CONCAT71(uStack_b7,uStack_b8);
            lVar8 = CONCAT62(uStack_56,CONCAT11(uStack_57,uStack_58));
            if (uStack_68 - lVar8 < uVar9) {
              uStack_70 = uStack_c8;
              pdb_142d7f1b0(&uStack_68,lVar8,uVar9,1,1);
              lVar8 = CONCAT62(uStack_56,CONCAT11(uStack_57,uStack_58));
              uVar5 = uStack_70;
LAB_140c2e0df:
              pub_142e32760(lVar8 + CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60)),pbStack_78,
                            uVar9);
              lVar8 = CONCAT62(uStack_56,CONCAT11(uStack_57,uStack_58));
            }
            else {
              uVar5 = uStack_c8;
              if (uVar9 != 0) goto LAB_140c2e0df;
            }
            lVar8 = lVar8 + uVar9;
            uStack_58 = (undefined1)lVar8;
            uStack_57 = (undefined1)((ulonglong)lVar8 >> 8);
            uStack_56 = (undefined6)((ulonglong)lVar8 >> 0x10);
            if (uVar5 != 0) {
              pub_1406abac0(pbStack_78,uVar5,1);
            }
            goto LAB_140c2e00f;
          }
          uVar7 = *(undefined8 *)(param_2 + 0x10);
          uVar9 = *(ulonglong *)(param_2 + 0x18);
          if (uStack_68 - lVar8 < uVar9) {
            uStack_49 = 1;
            pdb_142d7f1b0(&uStack_68,lVar8,uVar9,1,1);
            lVar8 = CONCAT62(uStack_56,CONCAT11(uStack_57,uStack_58));
          }
          else if (uVar9 == 0) goto LAB_140c2e005;
          lVar8 = lVar8 + CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60));
LAB_140c2dff6:
          pub_142e32760(lVar8,uVar7,uVar9);
          lVar8 = CONCAT62(uStack_56,CONCAT11(uStack_57,uStack_58));
LAB_140c2e005:
          lVar8 = lVar8 + uVar9;
          uStack_58 = (undefined1)lVar8;
          uStack_57 = (undefined1)((ulonglong)lVar8 >> 8);
          uStack_56 = (undefined6)((ulonglong)lVar8 >> 0x10);
        }
        else {
          uVar7 = *(undefined8 *)(param_2 + 0x10);
          uVar9 = *(ulonglong *)(param_2 + 0x18);
          if (*param_2 == '\0') {
            if (uStack_68 - lVar8 < uVar9) {
              uStack_49 = 1;
              pdb_142d7f1b0(&uStack_68,lVar8,uVar9,1,1);
              lVar8 = CONCAT62(uStack_56,CONCAT11(uStack_57,uStack_58));
LAB_140c2dfec:
              lVar8 = lVar8 + CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60));
              goto LAB_140c2dff6;
            }
            if (uVar9 != 0) goto LAB_140c2dfec;
            goto LAB_140c2e005;
          }
          uStack_b7 = (undefined7)((ulonglong)lVar8 >> 8);
          uStack_c8 = uStack_68;
          uStack_c0 = uStack_60;
          uStack_bf = (undefined7)(CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60)) >> 8);
          uStack_49 = 0;
          uStack_b8 = uStack_58;
          pdb_1402af8b0(auStack_128,&uStack_c8,1);
          uStack_4a = 1;
          uStack_c8 = pdb_141705550(auStack_128,uVar7,uVar9);
          if (uStack_c8 != 0) {
            uStack_4a = 1;
            pdb_1404b38e0(&uStack_c8);
            *param_1 = 3;
            *(undefined2 *)(param_1 + 1) = 0x20c;
            uStack_49 = 0;
            pdb_14099eb80(auStack_128);
            return param_1;
          }
          uStack_88 = uStack_e8;
          uStack_98 = uStack_f8;
          uStack_94 = uStack_f4;
          uStack_90 = uStack_f0;
          uStack_8c = uStack_ec;
          uStack_a8 = uStack_108;
          uStack_a0 = uStack_100;
          uStack_b8 = (undefined1)auStack_128[2];
          uStack_b7 = (undefined7)(auStack_128[2] >> 8);
          uStack_b0 = uStack_110;
          uStack_c8 = auStack_128[0];
          uStack_c0 = (undefined1)auStack_128[1];
          uStack_bf = (undefined7)(auStack_128[1] >> 8);
          uStack_4a = 0;
          pdb_1417080f0(&uStack_e0,&uStack_c8);
          if (SBORROW8(0,uStack_e0)) {
            uStack_4a = 0;
            pdb_1404b38e0(&uStack_c8);
            *param_1 = 3;
            *(undefined2 *)(param_1 + 1) = 0x20c;
            return param_1;
          }
          uStack_5e = uStack_d6;
          uStack_58 = (undefined1)uStack_d0;
          uStack_57 = (undefined1)((ushort)uStack_d0 >> 8);
          uStack_56 = uStack_ce;
          uStack_60 = (undefined1)uStack_d8;
          uStack_5f = (undefined1)((ushort)uStack_d8 >> 8);
          uStack_68 = uStack_e0;
        }
LAB_140c2e00f:
        uStack_49 = 1;
        pdb_141709900(param_1,param_3,0x74585469,CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60)),
                      CONCAT62(uStack_56,CONCAT11(uStack_57,uStack_58)));
        goto LAB_140c2e08c;
      }
    }
    else {
      pauVar10 = pauVar3;
      do {
        auVar12 = pauVar10[3] | pauVar10[2] | pauVar10[1] | *pauVar10;
        if ((((((((((((((((SUB161(auVar12 >> 7,0) & 1) != 0 || (SUB161(auVar12 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar12 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar12 >> 0x1f,0) & 1) != 0) || (SUB161(auVar12 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar12 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar12 >> 0x37,0) & 1) != 0) || (SUB161(auVar12 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar12 >> 0x47,0) & 1) != 0) || (SUB161(auVar12 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar12 >> 0x57,0) & 1) != 0) || (SUB161(auVar12 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar12 >> 0x67,0) & 1) != 0) || (SUB161(auVar12 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar12 >> 0x77,0) & 1) != 0) || auVar12[0xf] < '\0') goto LAB_140c2e07c;
        pauVar10 = pauVar10 + 4;
      } while (pauVar10 != (undefined1 (*) [16])(*pauVar3 + (uVar9 & 0x7fffffffffffffc0)));
      uVar5 = 0;
      do {
        if (((uint)uVar9 & 0x3f) == uVar5) goto LAB_140c2ddb3;
        pcVar1 = *(undefined1 (*) [16])(*pauVar3 + (uVar9 & 0x7fffffffffffffc0)) + uVar5;
        uVar5 = uVar5 + 1;
      } while (-1 < *pcVar1);
    }
LAB_140c2e07c:
    uVar11 = 0;
  }
LAB_140c2e07e:
  *param_1 = 3;
  *(undefined1 *)(param_1 + 1) = 0xc;
  *(undefined1 *)((longlong)param_1 + 9) = uVar11;
LAB_140c2e08c:
  if (uStack_68 != 0) {
    pub_1406abac0((byte *)CONCAT62(uStack_5e,CONCAT11(uStack_5f,uStack_60)),uStack_68,1);
  }
  return param_1;
}

