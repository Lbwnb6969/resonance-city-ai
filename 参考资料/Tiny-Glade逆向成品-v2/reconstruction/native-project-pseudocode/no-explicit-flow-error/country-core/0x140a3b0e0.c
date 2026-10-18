// VA 0x140a3b0e0, PDB extent 1331 bytes
// country_core::systems::temp_eraser::update_temp_eraser
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/temp_eraser.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::systems::temp_eraser::update_temp_eraser
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/temp_eraser.rs
   Extent: 1331 */

void pdb_140a3b0e0(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined *puStack_80;
  ulonglong uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  lVar3 = *param_1;
  puStack_80 = &UNK_14303b918;
  pcStack_58 = pdb_1403d7730;
  ppuStack_60 = &puStack_80;
  pdb_140f60760(&uStack_78,&UNK_14303b978,&ppuStack_60);
  ppuStack_50 = ppuStack_70;
  ppuStack_60 = ppuStack_70;
  pcStack_58 = (code *)uStack_68;
  lVar5 = pdb_140bbbcb0(&ppuStack_60);
  if (uStack_78 != 0) {
    pub_1406abac0((byte *)ppuStack_50,uStack_78,1);
  }
  if (((*(char *)(lVar3 + 0x18) == '\x02') && (*(longlong *)(lVar3 + 0x38) == lVar5)) &&
     (*(char *)(lVar3 + 0x19) != '\x02')) {
    return;
  }
  puStack_80 = &UNK_14303b928;
  pcStack_58 = pdb_1403d7730;
  ppuStack_60 = &puStack_80;
  pdb_140f60760(&uStack_78,&UNK_14303b978,&ppuStack_60);
  ppuStack_50 = ppuStack_70;
  ppuStack_60 = ppuStack_70;
  pcStack_58 = (code *)uStack_68;
  lVar5 = pdb_140bbbcb0(&ppuStack_60);
  if (uStack_78 != 0) {
    pub_1406abac0((byte *)ppuStack_50,uStack_78,1);
  }
  if (((*(char *)(lVar3 + 0x18) == '\x02') && (*(longlong *)(lVar3 + 0x38) == lVar5)) &&
     (*(char *)(lVar3 + 0x19) != '\x02')) {
    return;
  }
  puStack_80 = &UNK_14303b938;
  pcStack_58 = pdb_1403d7730;
  ppuStack_60 = &puStack_80;
  pdb_140f60760(&uStack_78,&UNK_14303b978,&ppuStack_60);
  ppuStack_50 = ppuStack_70;
  ppuStack_60 = ppuStack_70;
  pcStack_58 = (code *)uStack_68;
  lVar5 = pdb_140bbbcb0(&ppuStack_60);
  if (uStack_78 != 0) {
    pub_1406abac0((byte *)ppuStack_50,uStack_78,1);
  }
  if (((*(char *)(lVar3 + 0x18) == '\x02') && (*(longlong *)(lVar3 + 0x38) == lVar5)) &&
     (*(char *)(lVar3 + 0x19) != '\x02')) {
    return;
  }
  puStack_80 = &UNK_14303b948;
  pcStack_58 = pdb_1403d7730;
  ppuStack_60 = &puStack_80;
  pdb_140f60760(&uStack_78,&UNK_14303b978,&ppuStack_60);
  ppuStack_50 = ppuStack_70;
  ppuStack_60 = ppuStack_70;
  pcStack_58 = (code *)uStack_68;
  lVar5 = pdb_140bbbcb0(&ppuStack_60);
  if (uStack_78 != 0) {
    pub_1406abac0((byte *)ppuStack_50,uStack_78,1);
  }
  if (((*(char *)(lVar3 + 0x18) == '\x02') && (*(longlong *)(lVar3 + 0x38) == lVar5)) &&
     (*(char *)(lVar3 + 0x19) != '\x02')) {
    return;
  }
  puStack_80 = &UNK_14303b958;
  pcStack_58 = pdb_1403d7730;
  ppuStack_60 = &puStack_80;
  pdb_140f60760(&uStack_78,&UNK_14303b978,&ppuStack_60);
  ppuStack_50 = ppuStack_70;
  ppuStack_60 = ppuStack_70;
  pcStack_58 = (code *)uStack_68;
  lVar5 = pdb_140bbbcb0(&ppuStack_60);
  if (uStack_78 != 0) {
    pub_1406abac0((byte *)ppuStack_50,uStack_78,1);
  }
  if (((*(char *)(lVar3 + 0x18) == '\x02') && (*(longlong *)(lVar3 + 0x38) == lVar5)) &&
     (*(char *)(lVar3 + 0x19) != '\x02')) {
    return;
  }
  puStack_80 = &UNK_14303b968;
  pcStack_58 = pdb_1403d7730;
  ppuStack_60 = &puStack_80;
  pdb_140f60760(&uStack_78,&UNK_14303b978,&ppuStack_60);
  ppuStack_50 = ppuStack_70;
  ppuStack_60 = ppuStack_70;
  pcStack_58 = (code *)uStack_68;
  lVar5 = pdb_140bbbcb0(&ppuStack_60);
  if (uStack_78 != 0) {
    pub_1406abac0((byte *)ppuStack_50,uStack_78,1);
  }
  if (*(char *)(lVar3 + 0x18) == '\x02') {
    if ((*(longlong *)(lVar3 + 0x38) == lVar5) && (*(char *)(lVar3 + 0x19) != '\x02')) {
      return;
    }
    cVar1 = *(char *)*param_3;
    if (cVar1 == '\f') {
      return;
    }
    cVar2 = *(char *)*param_2;
  }
  else {
    cVar1 = *(char *)*param_3;
    cVar2 = *(char *)*param_2;
  }
  if ((cVar2 == '\x01') && ((byte)(cVar1 - 2U) < 0xd)) {
    uVar4 = (&UNK_14303c42b)[(byte)(cVar1 - 2U)];
  }
  else {
    uVar4 = 0;
  }
  *(undefined4 *)param_4[2] = *(undefined4 *)((longlong)param_4 + 0x1c);
  *(undefined1 *)*param_4 = uVar4;
  return;
}

