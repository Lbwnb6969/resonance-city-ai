// VA 0x14165a280, PDB extent 715 bytes
// serde_json::de::impl$7::deserialize_seq<serde_json::read::IoRead<std::io::buffered::bufreader::BufReader<std::fs::File> >,serde_core::de::impls::impl$19::deserialize::VecVisitor<country_core::resources::history::ResolvedHistoryChainSnapshot> >
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* Matched PDB project procedure:
   serde_json::de::impl$7::deserialize_seq<serde_json::read::IoRead<std::io::buffered::bufreader::BufReader<std::fs::File>
   >,serde_core::de::impls::impl$19::deserialize::VecVisitor<country_core::resources::history::ResolvedHistoryChainSnapshot>
   >
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/country-core/src/lib.rs
   Extent: 715 */

longlong * pdb_14165a280(longlong *param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong lStack_90;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong lStack_68;
  longlong alStack_60 [2];
  undefined1 uStack_49;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  do {
    if (*(char *)(param_2 + 0x78) == '\0') {
      lVar3 = *(longlong *)(param_2 + 0x40);
      if (*(longlong *)(param_2 + 0x48) == lVar3) {
        pdb_141c47310(&uStack_78,param_2 + 0x30);
        if ((char)uStack_78 != '\0') {
          if ((char)uStack_78 != '\x02') {
            lVar3 = pdb_142db8fb0(CONCAT44(uStack_6c,uStack_70));
            goto LAB_14165a4a2;
          }
          uVar4 = *(undefined8 *)(param_2 + 0x60);
          uVar5 = *(undefined8 *)(param_2 + 0x68);
          uStack_78 = 5;
          goto LAB_14165a4ca;
        }
        lVar3 = *(longlong *)(param_2 + 0x68) + 1;
        if (uStack_78._1_1_ == '\n') goto LAB_14165a351;
LAB_14165a320:
        *(longlong *)(param_2 + 0x68) = lVar3;
        bVar6 = uStack_78._1_1_;
      }
      else {
        cVar2 = *(char *)(*(longlong *)(param_2 + 0x30) + lVar3);
        *(longlong *)(param_2 + 0x40) = lVar3 + 1;
        uStack_78 = (ulonglong)CONCAT61((int6)((ulonglong)uStack_78 >> 0x10),cVar2) << 8;
        lVar3 = *(longlong *)(param_2 + 0x68) + 1;
        if (cVar2 != '\n') goto LAB_14165a320;
LAB_14165a351:
        *(longlong *)(param_2 + 0x70) = *(longlong *)(param_2 + 0x70) + lVar3;
        *(longlong *)(param_2 + 0x60) = *(longlong *)(param_2 + 0x60) + 1;
        *(undefined8 *)(param_2 + 0x68) = 0;
        bVar6 = 10;
      }
      *(undefined1 *)(param_2 + 0x78) = 1;
      *(byte *)(param_2 + 0x79) = bVar6;
    }
    else {
      bVar6 = *(byte *)(param_2 + 0x79);
    }
    if ((0x20 < bVar6) || ((0x100002600U >> ((ulonglong)bVar6 & 0x3f) & 1) == 0)) break;
    *(undefined1 *)(param_2 + 0x78) = 0;
    if (!SBORROW8(0,*(longlong *)(param_2 + 0x18))) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      if (lVar3 == *(longlong *)(param_2 + 0x18)) {
        pdb_142dc7d20(param_2 + 0x18);
      }
      *(byte *)(*(longlong *)(param_2 + 0x20) + lVar3) = bVar6;
      *(longlong *)(param_2 + 0x28) = lVar3 + 1;
    }
  } while( true );
  if (bVar6 == 0x5b) {
    pcVar1 = (char *)(param_2 + 0x80);
    *pcVar1 = *pcVar1 + -1;
    if (*pcVar1 == '\0') {
      uVar4 = *(undefined8 *)(param_2 + 0x60);
      uVar5 = *(undefined8 *)(param_2 + 0x68);
      uStack_78 = 0x18;
LAB_14165a4ca:
      lVar3 = pdb_142db9040(&uStack_78,uVar4,uVar5);
      goto LAB_14165a4a2;
    }
    *(undefined1 *)(param_2 + 0x78) = 0;
    if (!SBORROW8(0,*(longlong *)(param_2 + 0x18))) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      if (lVar3 == *(longlong *)(param_2 + 0x18)) {
        pdb_142dc7d20(param_2 + 0x18);
      }
      *(undefined1 *)(*(longlong *)(param_2 + 0x20) + lVar3) = 0x5b;
      *(longlong *)(param_2 + 0x28) = lVar3 + 1;
    }
    pdb_141ad5340(&uStack_a0,param_2,1);
    *(char *)(param_2 + 0x80) = *(char *)(param_2 + 0x80) + '\x01';
    alStack_60[0] = pdb_14164f020(param_2);
    uStack_78 = CONCAT44(uStack_9c,uStack_a0);
    uStack_70 = uStack_98;
    uStack_6c = uStack_94;
    lStack_68 = lStack_90;
    if (SBORROW8(0,uStack_78)) {
      lVar3 = CONCAT44(uStack_94,uStack_98);
      if (alStack_60[0] != 0) {
        pdb_1404b4b10(alStack_60);
      }
    }
    else {
      if (alStack_60[0] == 0) {
        *param_1 = uStack_78;
        param_1[1] = CONCAT44(uStack_94,uStack_98);
        param_1[2] = lStack_90;
        return param_1;
      }
      lVar3 = alStack_60[0];
      if (uStack_78 != 0) {
        pub_1406abac0((byte *)CONCAT44(uStack_94,uStack_98),uStack_78 << 4,8);
      }
    }
  }
  else {
    lVar3 = pdb_142de8770(param_2,&uStack_49,&UNK_143323820);
  }
  lVar3 = pdb_142d8f1d0(lVar3,param_2);
LAB_14165a4a2:
  param_1[1] = lVar3;
  *param_1 = -0x8000000000000000;
  return param_1;
}

