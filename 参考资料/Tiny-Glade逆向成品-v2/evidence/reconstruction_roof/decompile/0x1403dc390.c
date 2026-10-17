// Matched PDB: country_core::resources::roofs::roof_shape::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// VA 0x1403dc390, PDB extent 527 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   country_core::resources::roofs::roof_shape::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Extent: 527 bytes. No whole-program auto-analysis. */

undefined8 * pdb_1403dc390(char *param_1,longlong *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  longlong lStack_30;
  longlong *plStack_28;
  
  if (*param_1 == '\0') {
    puVar5 = &UNK_142f50429;
    uVar6 = 8;
  }
  else {
    if (*param_1 != '\x01') {
      plVar1 = (longlong *)*param_2;
      lVar3 = plVar1[2];
      if (*plVar1 == lVar3) {
        pdb_142d7f1b0(plVar1,lVar3,1,1,1);
        lVar3 = plVar1[2];
      }
      *(undefined1 *)(plVar1[1] + lVar3) = 0x7b;
      plVar1[2] = lVar3 + 1;
      lVar3 = pdb_14054e5c0(param_2,param_2 + 1,&UNK_142f50442,8);
      if (lVar3 == 0) {
        lVar3 = plVar1[2];
        if (*plVar1 == lVar3) {
          pdb_142d7f1b0(plVar1,lVar3,1,1,1);
          lVar3 = plVar1[2];
        }
        *(undefined1 *)(plVar1[1] + lVar3) = 0x3a;
        lVar3 = lVar3 + 1;
        plVar1[2] = lVar3;
        if (*plVar1 == lVar3) {
          pdb_142d7f1b0(plVar1,lVar3,1,1,1);
          lVar3 = plVar1[2];
        }
        *(undefined1 *)(plVar1[1] + lVar3) = 0x7b;
        plVar1[2] = lVar3 + 1;
        lStack_30 = CONCAT62(lStack_30._2_6_,0x100);
        plStack_28 = param_2;
        puVar4 = (undefined8 *)pdb_14054a9f0(&lStack_30,&UNK_142f5044a,8,param_1 + 4);
        if (puVar4 != (undefined8 *)0x0) {
          return puVar4;
        }
        if ((char)lStack_30 != '\x01') {
          puVar4 = (undefined8 *)pdb_140547290(&lStack_30,&UNK_142f50452,8,param_1 + 1);
          if (puVar4 != (undefined8 *)0x0) {
            return puVar4;
          }
          if ((char)lStack_30 != '\x01') {
            puVar4 = (undefined8 *)pdb_140540d50(&lStack_30,&UNK_142f5045a,10,param_1 + 8);
            if (puVar4 == (undefined8 *)0x0) {
              pdb_1403ddd10(&lStack_30);
              return (undefined8 *)0x0;
            }
            return puVar4;
          }
        }
        pdb_142dc83b0(&UNK_142f50691,0x28,&UNK_142f507e8);
        pcVar2 = (code *)swi(3);
        puVar4 = (undefined8 *)(*pcVar2)();
        return puVar4;
      }
      goto LAB_1403dc4fa;
    }
    puVar5 = &DAT_142f50431;
    uVar6 = 0x11;
  }
  lVar3 = pdb_14054e5c0(param_2,param_2 + 1,puVar5,uVar6);
  if (lVar3 == 0) {
    return (undefined8 *)0x0;
  }
LAB_1403dc4fa:
  uVar6 = 1;
  lStack_30 = lVar3;
  pdb_14007ee60();
  puVar4 = (undefined8 *)func_0x0001406abab0(0x28,8);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[4] = 0;
    puVar4[2] = plStack_28;
    puVar4[3] = 0;
    *puVar4 = uVar6;
    puVar4[1] = lStack_30;
    return puVar4;
  }
  pdb_142dc7e11(8,0x28);
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}

