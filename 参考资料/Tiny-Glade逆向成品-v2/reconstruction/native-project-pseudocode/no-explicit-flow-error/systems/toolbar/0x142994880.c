// VA 0x142994880, PDB extent 1623 bytes
// std::sync::mpmc::zero::Channel::send<tuple$<> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: std::sync::mpmc::zero::Channel::send<tuple$<> >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/lib.rs
   Extent: 1623 */

undefined1 pdb_142994880(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  ulonglong *puVar8;
  undefined1 uVar9;
  char cVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  longlong lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  longlong lStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  longlong *plStack_c0;
  longlong *plStack_b8;
  undefined8 *puStack_b0;
  longlong *plStack_a8;
  longlong *plStack_a0;
  byte bStack_98;
  longlong *plStack_88;
  longlong *plStack_80;
  longlong *plStack_78;
  longlong *plStack_70;
  undefined1 uStack_68;
  longlong *plStack_60;
  longlong *plStack_58;
  uint uStack_50;
  undefined1 uStack_4a;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_e8 = 0;
  uStack_e0 = 0;
  lStack_f8 = 0;
  uStack_f0 = 0;
  lStack_d8 = 0;
  LOCK();
  bVar16 = (char)*param_1 == '\0';
  if (bVar16) {
    *(char *)param_1 = '\x01';
  }
  UNLOCK();
  uStack_d0 = param_2;
  uStack_c8 = param_3;
  if (!bVar16) {
    pdb_142dc6be0();
  }
  puVar8 = _DAT_143ca8f38;
  if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
    uStack_50 = 0;
    cVar10 = *(char *)((longlong)param_1 + 1);
  }
  else {
    uStack_50 = pdb_142dc79e0();
    uStack_50 = uStack_50 ^ 1;
    cVar10 = *(char *)((longlong)param_1 + 1);
  }
  if (cVar10 == '\0') {
    lVar3 = param_1[9];
    plStack_58 = param_1;
    if (lVar3 != 0) {
      uStack_49 = 1;
      lVar11 = pdb_140f3bde0();
      plVar12 = plStack_58;
      lVar4 = plStack_58[8];
      lVar14 = 1;
      lVar15 = 0;
      do {
        lVar5 = *(longlong *)(lVar4 + lVar15);
        if (*(longlong *)(lVar5 + 0x28) != lVar11) {
          LOCK();
          bVar16 = *(longlong *)(lVar5 + 0x18) == 0;
          if (bVar16) {
            *(longlong *)(lVar5 + 0x18) = *(longlong *)(lVar4 + 8 + lVar15);
          }
          UNLOCK();
          if (bVar16) {
            lVar3 = *(longlong *)(lVar4 + 0x10 + lVar15);
            if (lVar3 != 0) {
              *(longlong *)(lVar5 + 0x20) = lVar3;
            }
            lVar3 = *(longlong *)(lVar5 + 0x10);
            LOCK();
            pcVar1 = (char *)(lVar3 + 0x28);
            cVar10 = *pcVar1;
            *pcVar1 = '\x01';
            UNLOCK();
            if (cVar10 == -1) {
              WakeByAddressSingle(lVar3 + 0x28);
            }
            uVar13 = plVar12[9];
            if (lVar14 - 1U < uVar13) {
              lVar3 = plVar12[8];
              plVar6 = *(longlong **)(lVar3 + lVar15);
              puVar2 = (undefined8 *)(lVar3 + 8 + lVar15);
              plStack_b8 = (longlong *)*puVar2;
              puStack_b0 = (undefined8 *)puVar2[1];
              pub_142e32770(lVar3 + lVar15,lVar3 + lVar15 + 0x18,(uVar13 - lVar14) * 0x18);
              uVar13 = uVar13 - 1;
              plVar12[9] = uVar13;
              if (plVar6 != (longlong *)0x0) {
                plStack_80 = plStack_b8;
                lStack_d8 = (longlong)puStack_b0;
                plStack_78 = puStack_b0;
                plStack_88 = plVar6;
                if ((((byte)uStack_50 == '\0') && ((*puVar8 & 0x7fffffffffffffff) != 0)) &&
                   (cVar10 = pdb_142dc79e0(), plVar12 = plStack_58, cVar10 == '\0')) {
                  *(char *)((longlong)plStack_58 + 1) = '\x01';
                }
                LOCK();
                lVar3 = *plVar12;
                *(char *)plVar12 = '\0';
                UNLOCK();
                if ((char)lVar3 == '\x02') {
                  pdb_142dc6ca0(plStack_58);
                }
                if (lStack_d8 != 0) {
                  *(undefined1 *)(lStack_d8 + 2) = 1;
                  *(undefined1 *)(lStack_d8 + 1) = 1;
                  LOCK();
                  *plStack_88 = *plStack_88 + -1;
                  UNLOCK();
                  if (*plStack_88 == 0) {
                    uStack_49 = 0;
                    pdb_1406b10b0(&plStack_88);
                  }
                  return 2;
                }
                    /* WARNING: Subroutine does not return */
                pdb_142dc8150(&UNK_1436099f0);
              }
            }
            uStack_49 = 1;
            pdb_142dc7ef8(lVar14 - 1U,uVar13,&UNK_143609818);
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          }
        }
        lVar15 = lVar15 + 0x18;
        lVar14 = lVar14 + 1;
      } while (lVar3 * 0x18 != lVar15);
    }
    plVar12 = plStack_58;
    if ((char)plStack_58[0xd] == '\0') {
      plStack_b8 = &lStack_f8;
      puStack_b0 = &uStack_d0;
      plStack_a8 = plStack_58;
      plStack_a0 = plStack_58;
      bStack_98 = (byte)uStack_50;
      plVar12 = (longlong *)pdb_140f3bdc0();
      if (((char)plVar12[1] == '\x01') ||
         (plVar12 = (longlong *)pdb_142dcf2e0(plVar12,0), plVar12 != (longlong *)0x0)) {
        plVar6 = (longlong *)*plVar12;
        *plVar12 = 0;
        if (plVar6 == (longlong *)0x0) {
          plStack_c0 = (longlong *)pdb_142dc6860();
          bStack_98 = 2;
          plStack_78 = plStack_58;
          plStack_70 = plStack_58;
          uStack_68 = (undefined1)uStack_50;
          plStack_88 = &lStack_f8;
          plStack_80 = &uStack_d0;
          plStack_60 = plStack_c0;
          uVar9 = pdb_142996430(&plStack_88);
          LOCK();
          *plStack_c0 = *plStack_c0 + -1;
          UNLOCK();
          if (*plStack_c0 == 0) {
            pdb_1406b10b0(&plStack_60);
          }
        }
        else {
          plVar6[3] = 0;
          plVar6[4] = 0;
          bStack_98 = 2;
          plStack_88 = plStack_b8;
          plStack_80 = puStack_b0;
          plStack_78 = plStack_a8;
          plStack_70 = plStack_a0;
          uStack_68 = (undefined1)uStack_50;
          uStack_4a = 1;
          plStack_60 = plVar6;
          uVar9 = pdb_142996430(&plStack_88,plVar6);
          plStack_88 = (longlong *)*plVar12;
          *plVar12 = (longlong)plVar6;
          if (plStack_88 != (longlong *)0x0) {
            LOCK();
            *plStack_88 = *plStack_88 + -1;
            UNLOCK();
            if (*plStack_88 == 0) {
              uStack_4a = 0;
              pdb_1406b10b0(&plStack_88);
            }
          }
        }
      }
      else {
        uVar9 = pdb_142e2dc60(&plStack_b8);
        plVar12 = plStack_a0;
        if (bStack_98 != 2) {
          if (((bStack_98 & 1) == 0) && ((*puVar8 & 0x7fffffffffffffff) != 0)) {
            uStack_49 = 0;
            cVar10 = pdb_142dc79e0();
            if (cVar10 == '\0') {
              *(char *)((longlong)plVar12 + 1) = '\x01';
            }
          }
          LOCK();
          lVar3 = *plVar12;
          *(char *)plVar12 = '\0';
          UNLOCK();
          if ((char)lVar3 == '\x02') {
            uStack_49 = 0;
            pdb_142dc6ca0(plVar12);
          }
        }
      }
    }
    else {
      if ((((byte)uStack_50 == 0) && ((*puVar8 & 0x7fffffffffffffff) != 0)) &&
         (cVar10 = pdb_142dc79e0(), cVar10 == '\0')) {
        *(char *)((longlong)plVar12 + 1) = '\x01';
      }
      LOCK();
      lVar3 = *plVar12;
      *(char *)plVar12 = '\0';
      UNLOCK();
      uVar9 = 1;
      if ((char)lVar3 == '\x02') {
        pdb_142dc6ca0(plVar12);
        uVar9 = 1;
      }
    }
    return uVar9;
  }
  uVar13 = (ulonglong)plStack_80 >> 8;
  plStack_80 = (longlong *)CONCAT71((int7)uVar13,(char)uStack_50);
  plStack_88 = param_1;
                    /* WARNING: Subroutine does not return */
  pdb_142dc8170(&UNK_143609b60,0x2b,&plStack_88,&UNK_143609b40,&UNK_1436099d8);
}

