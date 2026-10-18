// VA 0x1424fd080, PDB extent 603 bytes
// ron::ser::impl$3::serialize_newtype_variant<ref_mut$<alloc::string::String>,u16>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   ron::ser::impl$3::serialize_newtype_variant<ref_mut$<alloc::string::String>,u16>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 603 */

undefined8 *
pdb_1424fd080(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,ushort *param_8)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined **ppuStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  pdb_140127ae0(&ppuStack_90,param_3,param_4);
  if ((char)ppuStack_90 == '2') {
    pdb_1424f3ce0(&ppuStack_90,param_2,param_6,param_7);
    if ((char)ppuStack_90 == '2') {
      plVar1 = (longlong *)param_2[0x18];
      lVar5 = plVar1[2];
      lVar4 = lVar5;
      if (*plVar1 == lVar5) {
        pdb_142d7f1b0(plVar1,lVar5,1,1,1);
        lVar4 = plVar1[2];
      }
      *(undefined1 *)(plVar1[1] + lVar4) = 0x28;
      plVar1[2] = lVar5 + 1;
      lVar5 = *param_2;
      lVar4 = param_2[2];
      bVar2 = 0;
      if (lVar4 != -0x7fffffffffffffff) {
        bVar2 = (byte)(int)param_2[0x15];
      }
      *(byte *)(param_2 + 0x1b) = (byte)(bVar2 | (byte)(int)param_2[0x19]) >> 2 & 1;
      param_2[0x1a] = 0;
      if (lVar5 == 1) {
        if (param_2[1] == 0) {
          *(undefined1 *)param_1 = 0x30;
          return param_1;
        }
        param_2[1] = param_2[1] + -1;
      }
      puStack_48 = (undefined *)(ulonglong)*param_8;
      puStack_40 = &UNK_143513880;
      uStack_38 = 3;
      ppuStack_90 = &puStack_48;
      pcStack_88 = pdb_140f72a40;
      cVar3 = pdb_140f681d0(plVar1,&UNK_1430729e0,&UNK_143513856,&ppuStack_90);
      if (cVar3 != '\0') {
LAB_1424fd1b3:
        *(undefined1 *)param_1 = 0;
        return param_1;
      }
      if ((lVar4 != -0x7fffffffffffffff) && (*(char *)((longlong)param_2 + 0xb7) != '\0')) {
        ppuStack_90 = &puStack_40;
        pcStack_88 = pdb_1402ed400;
        cVar3 = pdb_140f681d0(plVar1,&UNK_1430729e0,&UNK_143513856,&ppuStack_90);
        if (cVar3 != '\0') goto LAB_1424fd1b3;
      }
      if ((char)lVar5 != '\0') {
        lVar5 = -1;
        if (param_2[1] + 1 != 0) {
          lVar5 = param_2[1] + 1;
        }
        param_2[1] = lVar5;
      }
      *(undefined1 *)(param_2 + 0x1b) = 0;
      lVar5 = plVar1[2];
      lVar4 = lVar5;
      if (*plVar1 == lVar5) {
        pdb_142d7f1b0(plVar1,lVar5,1,1,1);
        lVar4 = plVar1[2];
      }
      *(undefined1 *)(plVar1[1] + lVar4) = 0x29;
      plVar1[2] = lVar5 + 1;
      *(undefined1 *)param_1 = 0x32;
      return param_1;
    }
  }
  param_1[8] = uStack_50;
  param_1[6] = uStack_60;
  param_1[7] = uStack_58;
  param_1[4] = uStack_70;
  param_1[5] = uStack_68;
  param_1[2] = uStack_80;
  param_1[3] = uStack_78;
  *param_1 = ppuStack_90;
  param_1[1] = pcStack_88;
  return param_1;
}

