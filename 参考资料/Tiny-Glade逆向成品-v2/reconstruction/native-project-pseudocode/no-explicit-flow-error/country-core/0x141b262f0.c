// VA 0x141b262f0, PDB extent 522 bytes
// country_core::utils::load_json::read_float_element<2>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/load_json.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: country_core::utils::load_json::read_float_element<2>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/load_json.rs
   Extent: 522 */

undefined4 * pdb_141b262f0(undefined4 *param_1,char *param_2)

{
  char *pcVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong auStack_70 [3];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_21;
  undefined8 uStack_20;
  
  uStack_20 = 0xfffffffffffffffe;
  if (*param_2 == '\x04') {
    auStack_70[0] = *(ulonglong *)(param_2 + 0x18);
    if (auStack_70[0] < 2) {
      uStack_58 = &UNK_143391eb0;
      uStack_50 = pdb_140f72a40;
      uStack_48 = auStack_70;
      uStack_40 = pdb_140f72a40;
      pdb_141b24140(&uStack_a8,&uStack_58);
      uVar5 = pdb_142de92b0(&uStack_a8);
    }
    else {
      pcVar1 = *(char **)(param_2 + 0x10);
      if (*pcVar1 == '\x02') {
        if (*(longlong *)(pcVar1 + 8) == 0) {
          dVar2 = ((double)CONCAT44(_UNK_142e42374,
                                    (int)((ulonglong)*(undefined8 *)(pcVar1 + 0x10) >> 0x20)) -
                  _UNK_142e42388) +
                  ((double)CONCAT44(_DAT_142e42370,(int)*(undefined8 *)(pcVar1 + 0x10)) -
                  _DAT_142e42380);
        }
        else if ((int)*(longlong *)(pcVar1 + 8) == 1) {
          dVar2 = (double)*(longlong *)(pcVar1 + 0x10);
        }
        else {
          dVar2 = *(double *)(pcVar1 + 0x10);
        }
        if (pcVar1[0x20] == '\x02') {
          if (*(longlong *)(pcVar1 + 0x28) == 0) {
            dVar3 = ((double)CONCAT44(_UNK_142e42374,
                                      (int)((ulonglong)*(undefined8 *)(pcVar1 + 0x30) >> 0x20)) -
                    _UNK_142e42388) +
                    ((double)CONCAT44(_DAT_142e42370,(int)*(undefined8 *)(pcVar1 + 0x30)) -
                    _DAT_142e42380);
          }
          else if ((int)*(longlong *)(pcVar1 + 0x28) == 1) {
            dVar3 = (double)*(longlong *)(pcVar1 + 0x30);
          }
          else {
            dVar3 = *(double *)(pcVar1 + 0x30);
          }
          param_1[1] = (float)dVar2;
          param_1[2] = (float)dVar3;
          uVar4 = 0;
          goto LAB_141b26443;
        }
      }
      pdb_140f3f5b0(&uStack_58);
      uVar5 = pdb_142dea6e0(&UNK_143391e60,0x14,&uStack_58);
    }
  }
  else {
    uStack_58 = &UNK_143072560;
    uStack_50 = pdb_140f72a40;
    pdb_140f60760(auStack_70,&UNK_143072528,&uStack_58);
    uStack_21 = 1;
    pdb_140f3f5b0(&uStack_58);
    uStack_88 = uStack_38;
    uStack_84 = uStack_34;
    uStack_80 = uStack_30;
    uStack_7c = uStack_2c;
    uStack_98 = (undefined4)uStack_48;
    uStack_94 = uStack_48._4_4_;
    uStack_90 = (undefined4)uStack_40;
    uStack_8c = uStack_40._4_4_;
    uStack_a8 = (undefined4)uStack_58;
    uStack_a4 = uStack_58._4_4_;
    uStack_a0 = (undefined4)uStack_50;
    uStack_9c = uStack_50._4_4_;
    uStack_21 = 0;
    uVar5 = pdb_142de9770(auStack_70,&uStack_a8);
  }
  *(undefined8 *)(param_1 + 2) = uVar5;
  uVar4 = 1;
LAB_141b26443:
  *param_1 = uVar4;
  return param_1;
}

