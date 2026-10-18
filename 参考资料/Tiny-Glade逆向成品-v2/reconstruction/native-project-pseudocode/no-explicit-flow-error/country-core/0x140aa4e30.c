// VA 0x140aa4e30, PDB extent 369 bytes
// country_core::startup::load_textures::impl$0::should_load
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_textures.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure: country_core::startup::load_textures::impl$0::should_load
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/startup/load_textures.rs
   Extent: 369 */

bool pdb_140aa4e30(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  longlong lStack_58;
  int iStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  longlong lStack_40;
  
  lStack_40 = 0x140aa4e4f;
  cVar4 = pdb_141b02fc0(param_1,param_2,&UNK_1430469ab,4);
  bVar6 = true;
  if (cVar4 == '\0') {
    lStack_40 = 0x140aa4e72;
    cVar4 = pdb_141b02fc0(param_1,param_2,&UNK_1430469ba,5);
    if (cVar4 == '\0') {
      lStack_40 = 0x140aa4e92;
      cVar4 = pdb_141b03f30(param_1,param_2,&UNK_1430469af,7);
      if (cVar4 == '\0') {
        lStack_40 = 0x140aa4eb2;
        cVar4 = pdb_141b03f30(param_1,param_2,&UNK_1430469bf,0x16);
        if (cVar4 == '\0') {
          lStack_40 = 0x140aa4ed2;
          cVar4 = pdb_141b03f30(param_1,param_2,&UNK_1430469d5,10);
          if (cVar4 == '\0') {
            lStack_40 = 0x140aa4eee;
            cVar4 = pdb_141b03f30(param_1,param_2,&UNK_1430469df,0x10);
            if (cVar4 == '\0') {
              lStack_40 = 0x140aa4f0a;
              cVar4 = pdb_141b03f30(param_1,param_2,&UNK_1430469ef,0xe);
              if (cVar4 == '\0') {
                lStack_40 = 0x140aa4f26;
                cVar4 = pdb_141b03f30(param_1,param_2,&UNK_1430469fd,10);
                if (cVar4 == '\0') {
                  lStack_40 = 0x140aa4f42;
                  cVar4 = pdb_141b03f30(param_1,param_2,&UNK_143046a07,0x1b);
                  if (cVar4 == '\0') {
                    if (DAT_143cb2d0c != '\0') {
LAB_140aa4f59:
                      puStack_78 = &UNK_143046a3c;
                      uStack_70 = 0x1f;
                      uStack_88 = param_1;
                      uStack_80 = param_2;
                      pdb_1411bbe10(&lStack_68,&uStack_88);
                      if (lStack_68 != 3) {
                        do {
                          lVar3 = lStack_58;
                          uVar2 = uStack_60;
                          lVar1 = lStack_68;
                          pdb_1411bbe10(&iStack_50,&puStack_78);
                          if (((CONCAT44(uStack_4c,iStack_50) == 3) ||
                              (lVar1 != CONCAT44(uStack_4c,iStack_50))) ||
                             ((lVar1 == 2 &&
                              ((lVar3 != lStack_40 ||
                               (iVar5 = pub_142e32750(uVar2,uStack_48,lVar3), iVar5 != 0)))))) {
                            return false;
                          }
                          pdb_1411bbe10(&lStack_68,&uStack_88);
                        } while (lStack_68 != 3);
                      }
                      pdb_1411bbe10(&iStack_50,&puStack_78);
                      return iStack_50 == 3;
                    }
                    lStack_40 = 0x140aa4f90;
                    cVar4 = pdb_141b03f30(param_1,param_2,&UNK_143046a22,0x1a);
                    if (cVar4 == '\0') {
                      if (DAT_143cb2d0c == '\x01') goto LAB_140aa4f59;
                      bVar6 = false;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return bVar6;
}

