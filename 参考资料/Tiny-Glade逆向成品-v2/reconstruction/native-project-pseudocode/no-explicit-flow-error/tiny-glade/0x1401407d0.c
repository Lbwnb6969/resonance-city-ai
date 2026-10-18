// VA 0x1401407d0, PDB extent 393 bytes
// ron::ser::impl$3::serialize_f32<ref_mut$<alloc::string::String> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure: ron::ser::impl$3::serialize_f32<ref_mut$<alloc::string::String> >
   Source attribution: /home/h3/code/pouncelight/country-slice-private/crates/tiny-glade/src/main.rs
   Extent: 393 */

undefined1 * pdb_1401407d0(undefined1 *param_1,longlong param_2,float param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  float fVar5;
  float fStack_2c;
  float *pfStack_28;
  code *pcStack_20;
  
  fStack_2c = param_3;
  if (NAN(param_3) && (int)param_3 < 0) {
    plVar4 = *(longlong **)(param_2 + 0xc0);
    lVar3 = plVar4[2];
    if (*plVar4 == lVar3) {
      pdb_142d7f1b0(plVar4,lVar3,1,1,1);
      lVar3 = plVar4[2];
    }
    *(undefined1 *)(plVar4[1] + lVar3) = 0x2d;
    plVar4[2] = plVar4[2] + 1;
  }
  else {
    plVar4 = *(longlong **)(param_2 + 0xc0);
  }
  pfStack_28 = &fStack_2c;
  pcStack_20 = pdb_140f70fc0;
  cVar2 = pdb_140f681d0(plVar4,&UNK_142f5fa00,&UNK_142e477c6,&pfStack_28);
  if (cVar2 == '\0') {
    fVar5 = (float)pub_142e32a70(fStack_2c);
    if ((fVar5 == 0.0) && (!NAN(fVar5))) {
      lVar3 = plVar4[2];
      if ((ulonglong)(*plVar4 - lVar3) < 2) {
        pdb_142d7f1b0(plVar4,lVar3,2,1,1);
        lVar3 = plVar4[2];
      }
      *(undefined2 *)(plVar4[1] + lVar3) = 0x302e;
      plVar4[2] = plVar4[2] + 2;
    }
    if ((*(longlong *)(param_2 + 0x10) != -0x7fffffffffffffff) &&
       (*(char *)(param_2 + 0xb7) != '\0')) {
      lVar3 = plVar4[2];
      if ((ulonglong)(*plVar4 - lVar3) < 3) {
        pdb_142d7f1b0(plVar4,lVar3,3,1,1);
        lVar3 = plVar4[2];
      }
      lVar1 = plVar4[1];
      *(undefined1 *)(lVar1 + 2 + lVar3) = 0x32;
      *(undefined2 *)(lVar1 + lVar3) = 0x3366;
      plVar4[2] = plVar4[2] + 3;
    }
    *param_1 = 0x32;
  }
  else {
    *param_1 = 0;
  }
  return param_1;
}

