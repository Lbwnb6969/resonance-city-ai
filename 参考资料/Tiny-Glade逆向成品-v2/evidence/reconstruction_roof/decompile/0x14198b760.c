// Matched PDB: country_core::resources::roofs::roof_shape::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global> >,serde_json::ser::CompactFormatter> > >
// VA 0x14198b760, PDB extent 527 bytes
// Ghidra pseudocode; types and unresolved calls are not original source.

/* Matched PDB:
   country_core::resources::roofs::roof_shape::_::impl$0::serialize<ref_mut$<serde_json::ser::Serializer<ref_mut$<alloc::vec::Vec<u8,alloc::alloc::Global>
   >,serde_json::ser::CompactFormatter> > >
   Extent: 527 bytes. No whole-program auto-analysis. */

undefined8 * pdb_14198b760(char *param_1,longlong *param_2)

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
    puVar5 = &UNK_14335c5bd;
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
      lVar3 = pdb_14054e5c0(param_2,param_2 + 1,&UNK_14335c5d6,8);
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
        puVar4 = (undefined8 *)pdb_141b7dc80(&lStack_30,&UNK_14335c51d,8,param_1 + 4);
        if (puVar4 != (undefined8 *)0x0) {
          return puVar4;
        }
        if ((char)lStack_30 != '\x01') {
          puVar4 = (undefined8 *)pdb_141b7a220(&lStack_30,&UNK_14335c5de,8,param_1 + 1);
          if (puVar4 != (undefined8 *)0x0) {
            return puVar4;
          }
          if ((char)lStack_30 != '\x01') {
            puVar4 = (undefined8 *)pdb_141b82300(&lStack_30,&UNK_14335c5e6,10,param_1 + 8);
            if (puVar4 == (undefined8 *)0x0) {
              pdb_14198fd70(&lStack_30);
              return (undefined8 *)0x0;
            }
            return puVar4;
          }
        }
        pdb_142dc83b0(&UNK_14335ccd7,0x28,&UNK_14335ce98);
        pcVar2 = (code *)swi(3);
        puVar4 = (undefined8 *)(*pcVar2)();
        return puVar4;
      }
      goto LAB_14198b8ca;
    }
    puVar5 = &DAT_14335c5c5;
    uVar6 = 0x11;
  }
  lVar3 = pdb_14054e5c0(param_2,param_2 + 1,puVar5,uVar6);
  if (lVar3 == 0) {
    return (undefined8 *)0x0;
  }
LAB_14198b8ca:
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

