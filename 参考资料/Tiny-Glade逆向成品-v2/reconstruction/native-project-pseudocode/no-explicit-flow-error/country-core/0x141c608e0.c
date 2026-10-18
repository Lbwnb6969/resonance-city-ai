// VA 0x141c608e0, PDB extent 474 bytes
// country_core::systems::save::save_thread::UnsavedFileList::contains_file
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_thread.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::systems::save::save_thread::UnsavedFileList::contains_file
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/systems/save/save_thread.rs
   Extent: 474 */

ulonglong pdb_141c608e0(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined7 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  longlong lStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  longlong lStack_88;
  byte bStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_58;
  char cStack_57;
  char *pcStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  LOCK();
  cVar2 = *param_1;
  if (cVar2 == '\0') {
    *param_1 = '\x01';
  }
  UNLOCK();
  if (cVar2 != '\0') {
    pdb_142dbd1a0(param_1,param_2,1000000000);
  }
  pdb_140e9a150(param_1);
  lVar5 = *(longlong *)(param_1 + 0x10);
  lVar6 = *(longlong *)(param_1 + 0x18) << 7;
  pcStack_50 = param_1;
  do {
    uVar4 = (undefined7)((ulonglong)param_1 >> 8);
    param_1 = (char *)CONCAT71(uVar4,lVar6 != 0);
    if (lVar6 == 0) break;
    pdb_140f3ddd0(&uStack_90,*(undefined8 *)(lVar5 + 8),*(undefined8 *)(lVar5 + 0x10));
    pdb_140f3ddd0(&uStack_d0,param_2,param_3);
    if ((((lStack_88 == CONCAT44(uStack_c4,uStack_c8)) && (cStack_58 == (char)uStack_98)) &&
        (cStack_57 == '\x02')) &&
       (((uStack_98._1_1_ == '\x02' && ((byte)uStack_c0 < 3 == bStack_80 < 3)) &&
        (iVar3 = pub_142e32750(uStack_90,CONCAT44(uStack_cc,uStack_d0)), iVar3 == 0)))) {
      param_1 = (char *)CONCAT71(uVar4,1);
      break;
    }
    uStack_e8 = uStack_60;
    uStack_f8 = uStack_70;
    uStack_f0 = uStack_68;
    uStack_100 = uStack_78;
    uStack_118 = uStack_90;
    lStack_110 = lStack_88;
    uStack_128 = uStack_a0;
    uStack_124 = uStack_9c;
    uStack_120 = uStack_98;
    uStack_11c = uStack_94;
    uStack_138 = uStack_b0;
    uStack_134 = uStack_ac;
    uStack_130 = uStack_a8;
    uStack_12c = uStack_a4;
    uStack_148 = uStack_c0;
    uStack_144 = uStack_bc;
    uStack_140 = uStack_b8;
    uStack_13c = uStack_b4;
    uStack_158 = uStack_d0;
    uStack_154 = uStack_cc;
    uStack_150 = uStack_c8;
    uStack_14c = uStack_c4;
    cVar2 = pdb_141b03d50(&uStack_118,&uStack_158);
    lVar5 = lVar5 + 0x80;
    lVar6 = lVar6 + -0x80;
  } while (cVar2 == '\0');
  pcVar1 = pcStack_50;
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
  return (ulonglong)param_1 & 0xffffffff;
}

