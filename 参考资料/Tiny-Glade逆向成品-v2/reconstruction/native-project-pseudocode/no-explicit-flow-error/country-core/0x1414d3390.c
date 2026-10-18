// VA 0x1414d3390, PDB extent 518 bytes
// country_core::utils::load_json::load_json_as_mesh::closure$0<std::path::PathBuf>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/load_json.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   country_core::utils::load_json::load_json_as_mesh::closure$0<std::path::PathBuf>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/utils/load_json.rs
   Extent: 518 */

void pdb_1414d3390(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  code *pcStack_58;
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uStack_88 = param_5;
  uStack_90 = param_4;
  uStack_68 = param_3;
  pdb_140f55d10(&uStack_f0,param_4,param_5);
  pdb_1424e4d90(&puStack_80,&uStack_f0,&uStack_90);
  if (SBORROW8(0,(longlong)puStack_80)) {
    param_1[1] = pcStack_78;
    *param_1 = 0x8000000000000000;
  }
  else {
    pcStack_58 = pcStack_78;
    puStack_60 = puStack_80;
    if (4 < *_DAT_143ca8e90) {
      pcStack_78 = pdb_140117670;
      uStack_f0 = 0;
      puStack_e8 = &UNK_143314237;
      uStack_e0 = 0x1e;
      uStack_d8 = 0;
      puStack_d0 = &UNK_143314188;
      uStack_c8 = 0x2a;
      uStack_c0 = 5;
      puStack_b8 = &UNK_143314237;
      uStack_b0 = 0x1e;
      uStack_a8 = 0x1500000001;
      puStack_a0 = &UNK_143314255;
      ppuStack_98 = &puStack_80;
      puStack_80 = &uStack_90;
      pdb_140f332f0(&uStack_49,&uStack_f0);
    }
    pdb_140f69110(&uStack_f0,param_2,uStack_68);
    if ((int)uStack_f0 == 1) {
                    /* WARNING: Subroutine does not return */
      pdb_142dc8150(&UNK_143314268);
    }
    pdb_140a891f0(param_1,puStack_e8,uStack_e0,param_4,param_5,pcStack_58,uStack_70,param_6);
    if (puStack_60 != (undefined8 *)0x0) {
      pub_1406abac0((byte *)pcStack_58,(ulonglong)puStack_60,1);
    }
  }
  return;
}

