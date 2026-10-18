// VA 0x1400ec6b0, PDB extent 617 bytes
// tiny_glade::panic_reporter::crash_service::request_and_wait
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/crash_service.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Removing unreachable block (ram,0x000140f3c374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: tiny_glade::panic_reporter::crash_service::request_and_wait
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/panic_reporter/crash_service.rs
   Extent: 617 */

void pdb_1400ec6b0(longlong *param_1,undefined8 param_2)

{
  byte *arg0;
  longlong lVar1;
  longlong lVar2;
  byte *arg0_00;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  char cVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 uVar15;
  uint uVar16;
  byte *pbVar17;
  longlong lVar18;
  bool bVar19;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  byte bStack_24;
  
  if (DAT_143cb2b08 != '\0') {
    uVar15 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    LOCK();
    bVar19 = DAT_143cb2b0c == '\0';
    if (bVar19) {
      DAT_143cb2b0c = '\x01';
    }
    UNLOCK();
    if (bVar19) {
      uVar3 = (undefined4)*param_1;
      uVar4 = *(undefined4 *)((longlong)param_1 + 4);
      uVar5 = (undefined4)param_1[1];
      uVar6 = *(undefined4 *)((longlong)param_1 + 0xc);
      uVar7 = (undefined4)param_1[2];
      uVar8 = *(undefined4 *)((longlong)param_1 + 0x14);
      lVar2 = param_1[3];
      lVar1 = param_1[4];
      lVar18 = param_1[5];
      LOCK();
      bVar19 = DAT_143ca3070 == '\0';
      if (bVar19) {
        DAT_143ca3070 = '\x01';
      }
      UNLOCK();
      if (!bVar19) {
        pdb_142dc6be0(&DAT_143ca3070);
      }
      puVar9 = _DAT_143ca8f38;
      if ((*_DAT_143ca8f38 & 0x7fffffffffffffff) == 0) {
        bStack_24 = 0;
        lVar14 = CONCAT44(uRam0000000143ca307c,_DAT_143ca3078);
      }
      else {
        bStack_24 = pdb_142dc79e0();
        bStack_24 = bStack_24 ^ 1;
        lVar14 = CONCAT44(uRam0000000143ca307c,_DAT_143ca3078);
      }
      if (-0x7fffffffffffffff < lVar14) {
        pdb_1404d45b0(&DAT_143ca3078);
      }
      uRam0000000143ca3090 = (undefined4)lVar2;
      uRam0000000143ca3094 = (undefined4)((ulonglong)lVar2 >> 0x20);
      uStack_38 = (undefined4)lVar1;
      uStack_34 = (undefined4)((ulonglong)lVar1 >> 0x20);
      uStack_30 = (undefined4)lVar18;
      uStack_2c = (undefined4)((ulonglong)lVar18 >> 0x20);
      _DAT_143ca3098 = uStack_38;
      uRam0000000143ca309c = uStack_34;
      uRam0000000143ca30a0 = uStack_30;
      uRam0000000143ca30a4 = uStack_2c;
      _DAT_143ca3078 = uVar3;
      uRam0000000143ca307c = uVar4;
      uRam0000000143ca3080 = uVar5;
      uRam0000000143ca3084 = uVar6;
      _DAT_143ca3088 = uVar7;
      uRam0000000143ca308c = uVar8;
      if (((bStack_24 == 0) && ((*puVar9 & 0x7fffffffffffffff) != 0)) &&
         (cVar10 = pdb_142dc79e0(), cVar10 == '\0')) {
        DAT_143ca3071 = 1;
      }
      cVar10 = DAT_143ca3070;
      LOCK();
      DAT_143ca3070 = 0;
      UNLOCK();
      if (cVar10 == '\x02') {
        pdb_142dc6ca0(&DAT_143ca3070);
      }
      DAT_143cb2b0c = '\x02';
      uVar11 = pdb_140f3c9d0();
      uVar12 = pdb_140f5a1d0(uVar11);
      uVar11 = uVar15;
      while( true ) {
        if (DAT_143cb2b0c == '\x03') {
          return;
        }
        uVar16 = (uint)uVar11;
        uVar13 = pdb_140f3c9d0();
        bVar19 = uVar12 < uVar13;
        if (uVar13 == uVar12) {
          bVar19 = (uint)uVar15 < uVar16;
        }
        if (bVar19) break;
        uVar11 = 50000000;
        pdb_140f502d0(0);
      }
      return;
    }
  }
  if (SBORROW8(0,*param_1)) {
    return;
  }
  arg0 = (byte *)param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    lVar18 = 0;
    do {
      lVar14 = lVar18 * 0x40;
      lVar2 = *(longlong *)(arg0 + lVar14 + 0x28);
      if (!SBORROW8(0,lVar2)) {
        arg0_00 = *(byte **)(arg0 + lVar14 + 0x30);
        lVar14 = *(longlong *)(arg0 + lVar14 + 0x38);
        if (lVar14 != 0) {
          pbVar17 = arg0_00 + 0x30;
          do {
            uVar12 = *(ulonglong *)(pbVar17 + -0x20);
            if ((!SBORROW8(0,uVar12)) && (uVar12 != 0)) {
              pub_1406abac0(*(byte **)(pbVar17 + -0x18),uVar12,1);
            }
            uVar12 = *(ulonglong *)(pbVar17 + -8);
            if ((!SBORROW8(0,uVar12)) && (uVar12 != 0)) {
              pub_1406abac0(*(byte **)pbVar17,uVar12,1);
            }
            pbVar17 = pbVar17 + 0x58;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        if (lVar2 != 0) {
          pub_1406abac0(arg0_00,lVar2 * 0x58,8);
        }
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 != lVar1);
  }
  if (*param_1 != 0) {
    pub_1406abac0(arg0,*param_1 << 6,8);
  }
  if (param_1[3] != 0) {
    lVar1 = param_1[4];
    uVar15 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000140f3c38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    HeapFree(uVar15,0,lVar1);
    return;
  }
  return;
}

