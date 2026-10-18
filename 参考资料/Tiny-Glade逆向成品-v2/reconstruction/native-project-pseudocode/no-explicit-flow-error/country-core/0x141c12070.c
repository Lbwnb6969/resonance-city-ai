// VA 0x141c12070, PDB extent 2255 bytes
// std::sync::mpmc::zero::Channel::send<enum2$<core::result::Result<tuple$<>,anyhow::Error> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   std::sync::mpmc::zero::Channel::send<enum2$<core::result::Result<tuple$<>,anyhow::Error> > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 2255 */

longlong * pdb_141c12070(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  char *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  uint uVar6;
  ulonglong *puVar7;
  char cVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  longlong *plStack_e0;
  longlong *plStack_d8;
  longlong lStack_d0;
  longlong *plStack_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *plStack_a8;
  byte bStack_a0;
  longlong *plStack_98;
  longlong *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  longlong *plStack_68;
  byte bStack_60;
  uint uStack_54;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_118 = 0;
  uStack_110 = 0;
  uStack_128 = 0;
  uStack_120 = 0;
  puStack_108 = (undefined8 *)0x0;
  LOCK();
  bVar16 = (char)*param_1 == '\0';
  if (bVar16) {
    *(char *)param_1 = '\x01';
  }
  UNLOCK();
  uStack_100 = param_3;
  uStack_f8 = param_4;
  plStack_98 = param_2;
  if (!bVar16) {
    uStack_4b = 1;
    pdb_142dc6be0(param_1);
  }
  puVar7 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uStack_54 = 0;
    cVar8 = *(char *)((longlong)param_1 + 1);
  }
  else {
    uStack_4b = 1;
    uStack_54 = pdb_142dc79e0();
    uStack_54 = uStack_54 ^ 1;
    cVar8 = *(char *)((longlong)param_1 + 1);
  }
  if (cVar8 != '\0') {
    uVar6 = (uint)uStack_c0 >> 8;
    uStack_c0 = CONCAT31((int3)uVar6,(char)uStack_54);
    plStack_c8 = param_1;
                    /* WARNING: Subroutine does not return */
    pdb_142dc8170(&UNK_14339d278,0x2b,&plStack_c8,&UNK_14339d258,&UNK_14339d0d8);
  }
  lVar3 = param_1[9];
  plStack_90 = param_1;
  if (lVar3 != 0) {
    uStack_49 = 1;
    uStack_4a = 1;
    lVar9 = pdb_140f3bde0();
    plVar10 = plStack_90;
    lVar11 = plStack_90[8];
    lVar13 = 1;
    lVar15 = 0;
    do {
      lVar4 = *(longlong *)(lVar11 + lVar15);
      if (*(longlong *)(lVar4 + 0x28) != lVar9) {
        LOCK();
        bVar16 = *(longlong *)(lVar4 + 0x18) == 0;
        if (bVar16) {
          *(longlong *)(lVar4 + 0x18) = *(longlong *)(lVar11 + 8 + lVar15);
        }
        UNLOCK();
        if (bVar16) {
          lVar3 = *(longlong *)(lVar11 + 0x10 + lVar15);
          if (lVar3 != 0) {
            *(longlong *)(lVar4 + 0x20) = lVar3;
          }
          lVar3 = *(longlong *)(lVar4 + 0x10);
          LOCK();
          pcVar1 = (char *)(lVar3 + 0x28);
          cVar8 = *pcVar1;
          *pcVar1 = '\x01';
          UNLOCK();
          if (cVar8 == -1) {
            WakeByAddressSingle(lVar3 + 0x28);
          }
          uVar12 = plVar10[9];
          if (lVar13 - 1U < uVar12) {
            lVar3 = plVar10[8];
            plVar14 = *(longlong **)(lVar3 + lVar15);
            puVar2 = (undefined8 *)(lVar3 + 8 + lVar15);
            uStack_88 = (longlong *)*puVar2;
            uStack_80 = (longlong *)puVar2[1];
            pub_142e32770(lVar3 + lVar15,lVar3 + lVar15 + 0x18,(uVar12 - lVar13) * 0x18);
            uVar12 = uVar12 - 1;
            plVar10[9] = uVar12;
            if (plVar14 != (longlong *)0x0) {
              uStack_c0 = (undefined4)uStack_88;
              uStack_bc = uStack_88._4_4_;
              uStack_b8 = (undefined4)uStack_80;
              uStack_b4 = uStack_80._4_4_;
              puStack_108 = uStack_80;
              plStack_c8 = plVar14;
              if (((char)uStack_54 == '\0') && ((*puVar7 & 0x7fffffffffffffff) != 0)) {
                uStack_4c = 1;
                cVar8 = pdb_142dc79e0();
                plVar10 = plStack_90;
                if (cVar8 == '\0') {
                  *(char *)((longlong)plStack_90 + 1) = '\x01';
                }
              }
              LOCK();
              lVar3 = *plVar10;
              *(char *)plVar10 = '\0';
              UNLOCK();
              if ((char)lVar3 == '\x02') {
                uStack_4c = 1;
                pdb_142dc6ca0(plStack_90);
              }
              if (puStack_108 != (undefined8 *)0x0) {
                *puStack_108 = 1;
                puStack_108[1] = plStack_98;
                *(undefined1 *)(puStack_108 + 2) = 1;
                LOCK();
                *plStack_c8 = *plStack_c8 + -1;
                UNLOCK();
                if (*plStack_c8 == 0) {
                  uStack_49 = 0;
                  uStack_4a = 0;
                  pdb_1406b10b0(&plStack_c8);
                }
                return (longlong *)0x2;
              }
              uStack_88 = (longlong *)0x1;
              uStack_80 = plStack_98;
              if (plStack_98 != (longlong *)0x0) {
                uStack_4c = 0;
                pdb_140f36c40(&uStack_80);
              }
              uStack_4c = 0;
                    /* WARNING: Subroutine does not return */
              pdb_142dc8150(&UNK_14339d0f0);
            }
          }
          uStack_49 = 1;
          uStack_4a = 1;
          pdb_142dc7ef8(lVar13 - 1U,uVar12,&UNK_14339cf18);
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
      }
      lVar15 = lVar15 + 0x18;
      lVar13 = lVar13 + 1;
    } while (lVar3 * 0x18 != lVar15);
  }
  plVar10 = plStack_90;
  bStack_60 = (byte)uStack_54;
  if ((char)plStack_90[0xd] == '\0') {
    uStack_88 = plStack_98;
    uStack_80 = &uStack_128;
    uStack_78 = &uStack_100;
    uStack_70 = plStack_90;
    plStack_68 = plStack_90;
    plVar10 = (longlong *)pdb_140f3bdc0();
    if (((char)plVar10[1] == '\x01') ||
       (plVar10 = (longlong *)pdb_142d8ed30(plVar10,0), plVar10 != (longlong *)0x0)) {
      bStack_a0 = bStack_60;
      lVar3 = *plVar10;
      *plVar10 = 0;
      if (lVar3 == 0) {
        plStack_d8 = (longlong *)pdb_142dc6860();
        bStack_a0 = bStack_60;
        bStack_60 = 2;
        if (bStack_a0 == 2) {
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14339d240);
        }
        plStack_a8 = plStack_68;
        uStack_b8 = (undefined4)uStack_78;
        uStack_b4 = uStack_78._4_4_;
        uStack_b0 = (undefined4)uStack_70;
        uStack_ac = uStack_70._4_4_;
        plStack_c8 = uStack_88;
        uStack_c0 = (undefined4)uStack_80;
        uStack_bc = uStack_80._4_4_;
        plVar14 = (longlong *)pdb_141c159e0(&plStack_c8,plStack_d8);
        LOCK();
        *plStack_d8 = *plStack_d8 + -1;
        UNLOCK();
        if (*plStack_d8 == 0) {
          pdb_1406b10b0(&plStack_d8);
        }
      }
      else {
        *(undefined8 *)(lVar3 + 0x18) = 0;
        *(undefined8 *)(lVar3 + 0x20) = 0;
        bStack_60 = 2;
        lStack_f0 = lVar3;
        if (bStack_a0 == 2) {
          uStack_4d = 1;
                    /* WARNING: Subroutine does not return */
          pdb_142dc8150(&UNK_14339d240);
        }
        plStack_a8 = plStack_68;
        uStack_b8 = (undefined4)uStack_78;
        uStack_b4 = uStack_78._4_4_;
        uStack_b0 = (undefined4)uStack_70;
        uStack_ac = uStack_70._4_4_;
        plStack_c8 = uStack_88;
        uStack_c0 = (undefined4)uStack_80;
        uStack_bc = uStack_80._4_4_;
        uStack_4d = 1;
        lVar11 = lVar3;
        plStack_e0 = (longlong *)pdb_141c159e0(&plStack_c8);
        plStack_c8 = (longlong *)*plVar10;
        *plVar10 = lVar3;
        plVar14 = plStack_e0;
        lStack_e8 = lVar11;
        plStack_d8 = plStack_e0;
        lStack_d0 = lVar11;
        if (plStack_c8 != (longlong *)0x0) {
          LOCK();
          *plStack_c8 = *plStack_c8 + -1;
          UNLOCK();
          if (*plStack_c8 == 0) {
            pdb_1406b10b0(&plStack_c8);
            plVar14 = plStack_e0;
          }
        }
      }
    }
    else {
      plVar14 = (longlong *)pdb_142def260(&uStack_88);
    }
    if (bStack_60 != 2) {
      if (uStack_88 != (longlong *)0x0) {
        pdb_140f36c40(&uStack_88);
      }
      plVar10 = plStack_68;
      if (((bStack_60 & 1) == 0) && ((*puVar7 & 0x7fffffffffffffff) != 0)) {
        uStack_49 = 0;
        uStack_4a = 0;
        cVar8 = pdb_142dc79e0();
        if (cVar8 == '\0') {
          *(char *)((longlong)plVar10 + 1) = '\x01';
        }
      }
      LOCK();
      lVar3 = *plVar10;
      *(char *)plVar10 = '\0';
      UNLOCK();
      if ((char)lVar3 == '\x02') {
        uStack_49 = 0;
        uStack_4a = 0;
        pdb_142dc6ca0(plVar10);
      }
    }
  }
  else {
    if ((bStack_60 == 0) && ((*puVar7 & 0x7fffffffffffffff) != 0)) {
      uStack_4b = 0;
      cVar8 = pdb_142dc79e0();
      if (cVar8 == '\0') {
        *(char *)((longlong)plVar10 + 1) = '\x01';
      }
    }
    LOCK();
    lVar3 = *plVar10;
    *(char *)plVar10 = '\0';
    UNLOCK();
    plVar14 = (longlong *)0x1;
    if ((char)lVar3 == '\x02') {
      uStack_4b = 0;
      pdb_142dc6ca0(plVar10);
    }
  }
  return plVar14;
}

