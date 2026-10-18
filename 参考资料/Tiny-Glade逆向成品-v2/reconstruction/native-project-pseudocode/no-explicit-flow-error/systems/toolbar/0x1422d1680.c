// VA 0x1422d1680, PDB extent 460 bytes
// toolbar::menu::credits::impl$2::render
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/credits.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: toolbar::menu::credits::impl$2::render
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/systems/toolbar/src/menu/credits.rs
   Extent: 460 */

void pdb_1422d1680(int *param_1,undefined8 *param_2)

{
  int iVar1;
  ulonglong arg1;
  longlong lVar2;
  byte *pbVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_80 [24];
  longlong lStack_68;
  byte *pbStack_60;
  longlong lStack_58;
  longlong lStack_50;
  byte *pbStack_48;
  undefined8 uStack_38;
  
  uStack_38 = 0xfffffffffffffffe;
  if (*param_1 == 1) {
    iVar1 = param_1[1];
    pdb_140cb90e0(&lStack_50);
    pdb_140a1aa60(auStack_80);
    pdb_140cb8ed0(&lStack_68,auStack_80,iVar1);
    pdb_140cb9100(&lStack_50,&lStack_68,1,&UNK_1434d2148);
    if (lStack_58 != 0) {
      pbVar3 = pbStack_60 + 8;
      lVar2 = lStack_58;
      do {
        arg1 = *(ulonglong *)(pbVar3 + -8);
        if ((-1 < (longlong)arg1) && (arg1 != 0)) {
          pub_1406abac0(*(byte **)pbVar3,arg1,1);
        }
        pbVar3 = pbVar3 + 0x20;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    if (lStack_68 != 0) {
      pub_1406abac0(pbStack_60,lStack_68 << 5,8);
    }
    fVar4 = _DAT_142e36f50 * *(float *)((longlong)param_2 + 0x14);
    fVar5 = *(float *)(param_2 + 1) - *(float *)(param_2 + 2) * _DAT_142e36f50;
    fVar6 = *(float *)((longlong)param_2 + 0xc) - fVar4;
    pdb_140cb8180(*param_2,CONCAT44(fVar6,fVar5),
                  CONCAT44((fVar4 + *(float *)((longlong)param_2 + 0xc)) - fVar6,
                           (*(float *)(param_2 + 2) * _DAT_142e36f50 + *(float *)(param_2 + 1)) -
                           fVar5),*(undefined4 *)(param_2 + 3),&lStack_50);
    if (lStack_50 != 0) {
      pub_1406abac0(pbStack_48,lStack_50 << 2,4);
    }
  }
  return;
}

