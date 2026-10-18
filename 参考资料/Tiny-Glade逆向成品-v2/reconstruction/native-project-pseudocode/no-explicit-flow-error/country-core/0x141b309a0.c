// VA 0x141b309a0, PDB extent 492 bytes
// country_core::resources::critters::sheep::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::StrRead> > >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters/sheep.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   country_core::resources::critters::sheep::_::impl$0::deserialize<ref_mut$<serde_json::de::Deserializer<serde_json::read::StrRead>
   > >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/resources/critters/sheep.rs
   Extent: 492 */

char * pdb_141b309a0(char *param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar5 = *(ulonglong *)(param_2 + 0x28);
  if (uVar5 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar5 = uVar5 + 1;
      bVar2 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar5);
      uVar6 = (ulonglong)bVar2;
      if (0x22 < uVar6) {
LAB_141b30a3d:
        if (bVar2 != 0x7b) {
          uStack_30 = 10;
          goto LAB_141b309fa;
        }
        pcVar1 = (char *)(param_2 + 0x48);
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          uStack_30 = 0x18;
          goto LAB_141b309fa;
        }
        *(ulonglong *)(param_2 + 0x28) = uVar5;
        pdb_141653900(&uStack_30);
        if ((char)uStack_30 == '\0') {
          pdb_141655040(param_1,uStack_28,&UNK_143393650,1);
          *(char *)(param_2 + 0x48) = *(char *)(param_2 + 0x48) + '\x01';
          cVar3 = *param_1;
        }
        else if ((char)uStack_30 == '\x02') {
          *(undefined8 *)(param_1 + 8) = uStack_28;
          param_1[0] = '\x01';
          param_1[1] = '\0';
          param_1[2] = '\0';
          param_1[3] = '\0';
          *(char *)(param_2 + 0x48) = *(char *)(param_2 + 0x48) + '\x01';
          cVar3 = *param_1;
        }
        else {
          pdb_1416564f0(param_1,uStack_28,&UNK_143393660,3);
          *(char *)(param_2 + 0x48) = *(char *)(param_2 + 0x48) + '\x01';
          cVar3 = *param_1;
        }
        if (cVar3 != '\0') {
          return param_1;
        }
        uVar5 = *(ulonglong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 0x20) <= uVar5) goto LAB_141b30b10;
        goto LAB_141b30aea;
      }
      if ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0) {
        if (uVar6 != 0x22) goto LAB_141b30a3d;
        pdb_141657550(&uStack_30);
        if ((char)uStack_30 != '\x02') {
          uStack_30 = CONCAT71(uStack_30._1_7_,0xd);
          uStack_28 = pdb_142db90e0(&uStack_30,&UNK_143323610,&UNK_143322608);
        }
        goto LAB_141b30a2f;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar5;
    } while (uVar5 != *(ulonglong *)(param_2 + 0x20));
  }
  uStack_30 = 5;
LAB_141b309fa:
  uStack_28 = pdb_142d84ef0(param_2,&uStack_30);
  goto LAB_141b30a2f;
  while (*(ulonglong *)(param_2 + 0x28) = uVar5, uVar5 != *(ulonglong *)(param_2 + 0x20)) {
LAB_141b30aea:
    uVar5 = uVar5 + 1;
    bVar2 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar5);
    if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
      if (bVar2 != 0x7d) {
        uStack_30 = 10;
        goto LAB_141b30b19;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar5;
      uVar4 = 0;
      goto LAB_141b30b34;
    }
  }
LAB_141b30b10:
  uStack_30 = 3;
LAB_141b30b19:
  uStack_28 = pdb_142d855a0(param_2,&uStack_30);
LAB_141b30a2f:
  *(undefined8 *)(param_1 + 8) = uStack_28;
  uVar4 = 1;
LAB_141b30b34:
  *(undefined4 *)param_1 = uVar4;
  return param_1;
}

