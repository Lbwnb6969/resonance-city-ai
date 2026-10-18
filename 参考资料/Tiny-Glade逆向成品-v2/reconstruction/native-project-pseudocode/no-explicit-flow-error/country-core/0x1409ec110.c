// VA 0x1409ec110, PDB extent 645 bytes
// country_core::resources::feedback_report_resources::feedback_report_texture_receive
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/feedback_report_resources.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::feedback_report_resources::feedback_report_texture_receive
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/feedback_report_resources.rs
   Extent: 645 */

void pdb_1409ec110(undefined8 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  
  *(undefined4 *)param_1[2] = *(undefined4 *)((longlong)param_1 + 0x1c);
  plVar3 = (longlong *)*param_1;
  puVar4 = (ulonglong *)*param_2;
  lVar5 = param_2[1];
  uVar6 = *puVar4;
  uVar12 = 0;
  uVar13 = uVar6 - *(ulonglong *)(lVar5 + 0x18);
  if (uVar6 < *(ulonglong *)(lVar5 + 0x18)) {
    uVar13 = uVar12;
  }
  uVar11 = uVar6 - *(ulonglong *)(lVar5 + 0x38);
  if (uVar6 < *(ulonglong *)(lVar5 + 0x38)) {
    uVar11 = uVar12;
  }
  uVar6 = *(ulonglong *)(lVar5 + 0x30);
  uVar14 = uVar6 - uVar11;
  if (uVar6 < uVar11) {
    uVar14 = uVar12;
  }
  uVar7 = *(ulonglong *)(lVar5 + 0x10);
  uVar15 = uVar7 - uVar13;
  if (uVar7 < uVar13) {
    uVar15 = uVar12;
  }
  uVar12 = *(ulonglong *)(lVar5 + 0x40);
  *puVar4 = uVar12 - (uVar15 + uVar14);
  if (uVar7 >= uVar13 && uVar7 - uVar13 != 0 || uVar6 >= uVar11 && uVar6 - uVar11 != 0) {
    *puVar4 = uVar12;
    if (*plVar3 != 0) {
      if ((int)*plVar3 == 1) {
        plVar8 = (longlong *)plVar3[1];
        LOCK();
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          pdb_140c7b370();
        }
      }
      else {
        pdb_14098a200();
      }
    }
    *plVar3 = 0;
    plVar8 = (longlong *)plVar3[2];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        pdb_140c7a980(plVar3 + 2);
      }
    }
    plVar3[2] = 0;
  }
  if ((int)*plVar3 == 1) {
    plVar8 = plVar3 + 1;
    lVar5 = *plVar8;
    pcVar1 = (char *)(lVar5 + 0x10);
    LOCK();
    bVar16 = *(char *)(lVar5 + 0x10) == '\0';
    if (bVar16) {
      *(char *)(lVar5 + 0x10) = '\x01';
    }
    UNLOCK();
    if (!bVar16) {
      pdb_142dbd1a0(pcVar1);
    }
    pdb_140e9a150(pcVar1);
    lVar9 = *(longlong *)(lVar5 + 0x18);
    *(undefined8 *)(lVar5 + 0x18) = 0;
    pdb_140e9a350();
    LOCK();
    cVar2 = *pcVar1;
    if (cVar2 == '\x01') {
      *pcVar1 = '\0';
    }
    UNLOCK();
    if (cVar2 != '\x01') {
      pdb_142dbcef0(pcVar1,0);
    }
    if (lVar9 != 0) {
      if (*plVar3 != 0) {
        if ((int)*plVar3 == 1) {
          plVar10 = (longlong *)*plVar8;
          LOCK();
          *plVar10 = *plVar10 + -1;
          UNLOCK();
          if (*plVar10 == 0) {
            pdb_140c7b370(plVar8);
          }
        }
        else {
          pdb_14098a200(plVar8);
        }
      }
      *plVar3 = 2;
      plVar3[1] = lVar9;
    }
  }
  return;
}

