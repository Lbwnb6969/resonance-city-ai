// VA 0x1424e8c70, PDB extent 8128 bytes
// turbosloth::asset::impl$24::run::async_block$0<clutter_pack_pipe::ClutterGlbImport,anyhow::Error,clutter_pack_pipe::ImportClutterGlb>
// PDB source attribution: /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
// Ghidra pseudocode; missing Rust signatures/types. Not standalone source or behavior verification.

/* WARNING: Instruction at (ram,0x0001424ec75e) overlaps instruction at (ram,0x0001424ec75a)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Matched PDB project procedure:
   turbosloth::asset::impl$24::run::async_block$0<clutter_pack_pipe::ClutterGlbImport,anyhow::Error,clutter_pack_pipe::ImportClutterGlb>
   Source attribution:
   /home/h3/code/pouncelight/country-slice-private/crates/turbosloth/src/asset.rs
   Extent: 8128 */

byte * pdb_1424e8c70(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *arg0;
  undefined8 uVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  char cVar20;
  undefined1 uVar21;
  byte bVar22;
  undefined4 uVar23;
  uint uVar24;
  byte *pbVar25;
  char *pcVar26;
  undefined *puVar27;
  longlong lVar28;
  byte bVar29;
  byte bVar30;
  ulonglong *puVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  ulonglong *in_RDX;
  undefined8 uVar34;
  ulonglong uVar35;
  undefined8 *puVar36;
  ulonglong *unaff_RBX;
  undefined8 *puVar37;
  undefined8 *puVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  undefined1 *puVar41;
  undefined1 *puVar42;
  undefined1 *puVar43;
  undefined1 *puVar44;
  ulonglong *puVar45;
  undefined8 *puVar46;
  undefined1 *puVar47;
  undefined8 *puVar48;
  undefined1 *puVar49;
  undefined1 *puVar50;
  undefined8 *puVar51;
  undefined8 *puVar52;
  undefined8 *puVar53;
  undefined1 *puVar54;
  undefined8 *puVar55;
  undefined1 *puVar56;
  undefined8 *puVar57;
  undefined8 *puVar58;
  char *in_R8;
  char *pcVar59;
  ulonglong uVar60;
  undefined8 uVar61;
  char *in_R10;
  ulonglong uVar62;
  undefined *unaff_R12;
  ulonglong *unaff_R13;
  longlong lVar63;
  ulonglong *unaff_R14;
  ulonglong *puVar64;
  longlong lVar65;
  ulonglong uVar66;
  ulonglong *unaff_R15;
  byte *pbVar67;
  bool bVar68;
  bool bVar69;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar70;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 in_XMM2_Dc;
  undefined4 in_XMM2_Dd;
  undefined1 auStack_6d8 [128];
  undefined8 auStack_658 [193];
  ulonglong *puStack_50;
  undefined8 uStack_48;
  
  uVar72 = (undefined4)((ulonglong)param_3 >> 0x20);
  uVar71 = (undefined4)param_3;
  uVar70 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar23 = (undefined4)param_2;
  puVar36 = (undefined8 *)auStack_6d8;
  puVar58 = auStack_658;
  uStack_48 = 0xfffffffffffffffe;
  puVar31 = (ulonglong *)&UNK_143512a6c;
  bVar68 = 0xfffffffebcaed593 <
           (ulonglong)(longlong)*(int *)(&UNK_143512a6c + (ulonglong)(byte)in_RDX[0x48] * 4);
  pbVar25 = &UNK_143512a6c + *(int *)(&UNK_143512a6c + (ulonglong)(byte)in_RDX[0x48] * 4);
  bVar69 = pbVar25 == (byte *)0x0;
  puStack_50 = in_RDX;
  puVar55 = (undefined8 *)auStack_6d8;
  puVar37 = (undefined8 *)auStack_6d8;
  puVar57 = (undefined8 *)auStack_6d8;
  puVar54 = auStack_6d8;
  puVar15 = auStack_6d8;
  puVar56 = auStack_6d8;
  puVar50 = auStack_6d8;
  puVar51 = (undefined8 *)auStack_6d8;
  puVar49 = auStack_6d8;
  puVar16 = auStack_6d8;
  puVar17 = auStack_6d8;
  puVar40 = auStack_6d8;
  puVar47 = auStack_6d8;
  puVar18 = auStack_6d8;
  puVar45 = (ulonglong *)auStack_6d8;
  puVar19 = auStack_6d8;
  puVar39 = auStack_6d8;
  puVar42 = auStack_6d8;
  puVar44 = auStack_6d8;
  puVar41 = auStack_6d8;
  puVar43 = auStack_6d8;
  puVar53 = (undefined8 *)auStack_6d8;
  puVar48 = (undefined8 *)auStack_6d8;
  puVar46 = (undefined8 *)auStack_6d8;
  puVar38 = (undefined8 *)auStack_6d8;
  pcVar26 = in_R8;
  pcVar59 = in_R8;
  puVar64 = unaff_R15;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((byte)in_RDX[0x48]) {
  case 0:
code_r0x0001424e8cba:
    puVar55 = puVar57;
    uVar66 = *in_RDX;
    uVar35 = in_RDX[1];
    uVar1 = in_RDX[3];
    puVar58[0x76] = in_RDX[2];
    puVar58[0x77] = uVar1;
    puVar58[0x74] = uVar66;
    puVar58[0x75] = uVar35;
    uVar66 = in_RDX[4];
    uVar8 = *(undefined4 *)((longlong)in_RDX + 0x24);
    uVar35 = in_RDX[5];
    uVar9 = *(undefined4 *)((longlong)in_RDX + 0x2c);
    uVar23 = (undefined4)in_RDX[6];
    uVar70 = *(undefined4 *)((longlong)in_RDX + 0x34);
    in_XMM1_Dc = (undefined4)in_RDX[7];
    in_XMM1_Dd = *(undefined4 *)((longlong)in_RDX + 0x3c);
    *(undefined4 *)(puVar58 + 0x7a) = uVar23;
    *(undefined4 *)((longlong)puVar58 + 0x3d4) = uVar70;
    *(undefined4 *)(puVar58 + 0x7b) = in_XMM1_Dc;
    *(undefined4 *)((longlong)puVar58 + 0x3dc) = in_XMM1_Dd;
    *(int *)(puVar58 + 0x78) = (int)uVar66;
    *(undefined4 *)((longlong)puVar58 + 0x3c4) = uVar8;
    *(int *)(puVar58 + 0x79) = (int)uVar35;
    *(undefined4 *)((longlong)puVar58 + 0x3cc) = uVar9;
    puVar55[-1] = 0x1424e8cff;
    pdb_140ceedc0(puVar58 + 0x34,puVar58 + 0x74,puVar58 + 0x78);
    unaff_RBX = puVar58 + -0xc;
    puVar55[-1] = 0x1424e8d19;
    pub_142e32760(unaff_RBX,puVar58 + 0x34,0x200);
    in_RDX = (ulonglong *)puVar58[0xc1];
    unaff_R15 = in_RDX + 8;
    in_R8 = (char *)0x200;
    puVar55[-1] = 0x1424e8d35;
    uVar32 = pub_142e32760(unaff_R15,unaff_RBX);
    puVar31 = (ulonglong *)&UNK_143512a7c;
    iVar3 = *(int *)(&UNK_143512a7c + (ulonglong)(byte)in_RDX[0x35] * 4);
    pbVar25 = (byte *)(&UNK_143512a7c + iVar3);
    cVar20 = (char)pbVar25;
    puVar46 = puVar55;
    puVar37 = puVar55;
    unaff_R14 = in_RDX;
    pcVar59 = in_R8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((byte)in_RDX[0x35]) {
    case 0:
      ((byte *)((longlong)in_RDX + 0x1a9))[0] = 0;
      ((byte *)((longlong)in_RDX + 0x1a9))[1] = 0;
      in_RDX[0x10] = *unaff_R15;
      in_RDX[0x11] = in_RDX[9];
      in_RDX[0x12] = in_RDX[10];
      in_RDX[0x13] = in_RDX[0xb];
      *(int *)(in_RDX + 0x14) = (int)in_RDX[0xc];
      *(undefined4 *)((longlong)in_RDX + 0xa4) = *(undefined4 *)((longlong)in_RDX + 100);
      *(int *)(in_RDX + 0x15) = (int)in_RDX[0xd];
      *(undefined4 *)((longlong)in_RDX + 0xac) = *(undefined4 *)((longlong)in_RDX + 0x6c);
      in_RDX[0x16] = in_RDX[0xe];
      in_RDX[0x17] = in_RDX[0xf];
      unaff_R14 = in_RDX + 0x36;
      in_RDX[0x36] = (ulonglong)(in_RDX + 0x14);
      in_RDX[0x37] = (ulonglong)(in_RDX + 0x10);
      puVar38 = puVar55;
      goto code_r0x0001424e8dc4;
    case 1:
      puVar58[0xbd] = unaff_R15;
      goto code_r0x0001424e995c;
    case 2:
      puVar58[0xbd] = unaff_R15;
      puVar31 = (ulonglong *)&UNK_1435128e8;
      goto code_r0x0001424e994a;
    case 3:
      pcVar26 = (char *)(ulonglong)(byte)in_RDX[0x40];
      break;
    case 4:
      puVar58[0xbd] = unaff_R15;
      param_4 = (undefined8 *)in_RDX[0x37];
      goto code_r0x0001424e8dec;
    case 5:
      puVar58[0xbd] = unaff_R15;
      pcVar59 = (char *)in_RDX[0x3a];
      goto code_r0x0001424e8e21;
    case 6:
      *(char *)((longlong)puVar58 + 0x50d44a9a2) = *(char *)((longlong)puVar58 + 0x50d44a9a2) + '|';
      pcVar26 = (char *)CONCAT71((int7)((ulonglong)pbVar25 >> 8),1);
      *pcVar26 = *pcVar26 + '\x01';
      break;
    case 7:
      goto code_r0x0001424e9976;
    case 8:
      *(int *)(puVar58 + 0xbd) = (int)pcVar26;
code_r0x0001424e995c:
                    /* WARNING: Subroutine does not return */
      puVar55[-1] = 0x1424e9968;
      pdb_142dc8570(&UNK_1435128e8);
    case 9:
      goto code_r0x0001424e9233;
    case 10:
      goto code_r0x0001424e8e52;
    case 0xb:
      cRam000000065095d3f1 = cRam000000065095d3f1 + '|';
                    /* WARNING: Subroutine does not return */
      *puVar55 = 0x1424e99d6;
      pdb_142dc8590();
    case 0xc:
      goto code_r0x0001424e9aab;
    case 0xd:
      *pbVar25 = *pbVar25 + cVar20;
      *(char *)((longlong)puVar58 + 0x50d44a992) = *(char *)((longlong)puVar58 + 0x50d44a992) + '|';
      *(int *)pbVar25 = *(int *)pbVar25 + (int)pbVar25;
      *pcVar26 = *pcVar26 + '|';
      *(int *)pbVar25 = *(int *)pbVar25 + (int)pbVar25;
      *(char *)((longlong)puVar58 + 0x50d44a972) = *(char *)((longlong)puVar58 + 0x50d44a972) + '|';
      (&UNK_143512a09)[iVar3] = (&UNK_143512a09)[iVar3] + '|';
      goto code_r0x0001424e9262;
    case 0xe:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 0xf:
      pbVar25 = (byte *)(ulonglong)*(uint *)(puVar58 + 0xc0);
      puVar48 = puVar55;
      goto code_r0x0001424e9a1c;
    case 0x10:
      *pbVar25 = *pbVar25 + cVar20;
      puVar53 = puVar55;
      goto code_r0x0001424e99d5;
    case 0x11:
      bVar69 = (char)(cVar20 + UNK_143512a7c) == '\0';
      goto code_r0x0001424e95a5;
    case 0x12:
      puVar55[-1] = unaff_R13;
      puVar55[-2] = unaff_R12;
      puVar55[-3] = param_1;
      puVar55[-4] = pcVar26;
      puVar55[-5] = unaff_RBX;
      puVar57 = puVar55 + -100;
      puVar37 = puVar55 + -100;
      puVar51 = puVar55 + -100;
      puVar53 = puVar55 + -100;
      puVar36 = puVar55 + -100;
      puVar58 = puVar55 + -0x54;
      puVar55[-6] = 0xfffffffffffffffe;
      param_1 = (byte *)&UNK_143512a7c;
      uVar66 = in_RDX[0x26];
      iVar3 = *(int *)(&UNK_143512ac4 + (ulonglong)(byte)uVar66 * 4);
      puVar27 = &UNK_143512ac4 + iVar3;
      bVar68 = puVar27 == (undefined *)0x0;
      puVar55[-7] = in_RDX;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((byte)uVar66) {
      case 0:
        uVar66 = *in_RDX;
        uVar35 = in_RDX[1];
        uVar1 = in_RDX[2];
        uVar60 = in_RDX[3];
        uVar71 = (undefined4)in_RDX[4];
        uVar72 = *(undefined4 *)((longlong)in_RDX + 0x24);
        in_XMM2_Dc = (undefined4)in_RDX[5];
        in_XMM2_Dd = *(undefined4 *)((longlong)in_RDX + 0x2c);
        *(undefined4 *)(puVar55 + -0x18) = uVar71;
        *(undefined4 *)((longlong)puVar55 + -0xbc) = uVar72;
        *(undefined4 *)(puVar55 + -0x17) = in_XMM2_Dc;
        *(undefined4 *)((longlong)puVar55 + -0xb4) = in_XMM2_Dd;
        puVar55[-0x1a] = uVar1;
        puVar55[-0x19] = uVar60;
        puVar55[-0x1c] = uVar66;
        puVar55[-0x1b] = uVar35;
        uVar66 = in_RDX[6];
        uVar8 = *(undefined4 *)((longlong)in_RDX + 0x34);
        uVar35 = in_RDX[7];
        uVar9 = *(undefined4 *)((longlong)in_RDX + 0x3c);
        uVar23 = (undefined4)in_RDX[8];
        uVar70 = *(undefined4 *)((longlong)in_RDX + 0x44);
        in_XMM1_Dc = (undefined4)in_RDX[9];
        in_XMM1_Dd = *(undefined4 *)((longlong)in_RDX + 0x4c);
        *(undefined4 *)(puVar55 + -0x22) = uVar23;
        *(undefined4 *)((longlong)puVar55 + -0x10c) = uVar70;
        *(undefined4 *)(puVar55 + -0x21) = in_XMM1_Dc;
        *(undefined4 *)((longlong)puVar55 + -0x104) = in_XMM1_Dd;
        *(int *)(puVar55 + -0x24) = (int)uVar66;
        *(undefined4 *)((longlong)puVar55 + -0x11c) = uVar8;
        *(int *)(puVar55 + -0x23) = (int)uVar35;
        *(undefined4 *)((longlong)puVar55 + -0x114) = uVar9;
        puVar55[-0x65] = 0x1424eacd2;
        pdb_140ceed80(puVar55 + -0x44,puVar55 + -0x1c,puVar55 + -0x24);
code_r0x0001424eacc8:
        pcVar26 = in_R8 + 1;
        unaff_RBX = puVar58 + -0xc;
        puVar55 = puVar36;
code_r0x0001424eacd7:
        in_RDX = puVar58 + 0x10;
        puVar37 = puVar55;
code_r0x0001424eace4:
        in_R8 = pcVar26;
        *(undefined8 *)((longlong)puVar37 + -8) = 0x1424eacec;
        pub_142e32760(unaff_RBX,in_RDX);
        unaff_R14 = (ulonglong *)puVar58[0x4d];
        unaff_R15 = unaff_R14 + 10;
        pcVar59 = (char *)0xe0;
        *(undefined8 *)((longlong)puVar37 + -8) = 0x1424ead08;
        in_RDX = unaff_RBX;
        pub_142e32760(unaff_R15);
        puVar31 = (ulonglong *)&UNK_143512ad4;
        puVar27 = &UNK_143512ad4 + *(int *)(&UNK_143512ad4 + (ulonglong)(byte)unaff_R14[0x25] * 4);
        puVar53 = puVar37;
        puVar51 = puVar37;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((byte)unaff_R14[0x25]) {
        case 0:
          *(byte *)((longlong)unaff_R14 + 299) = 0;
          ((byte *)((longlong)unaff_R14 + 0x129))[0] = 1;
          ((byte *)((longlong)unaff_R14 + 0x129))[1] = 0;
          uVar66 = *unaff_R15;
          uVar35 = unaff_R14[0xb];
          uVar1 = unaff_R14[0xc];
          uVar60 = unaff_R14[0xd];
          puVar58[0x41] = unaff_R15;
          uVar71 = (undefined4)unaff_R14[0xe];
          uVar72 = *(undefined4 *)((longlong)unaff_R14 + 0x74);
          in_XMM2_Dc = (undefined4)unaff_R14[0xf];
          in_XMM2_Dd = *(undefined4 *)((longlong)unaff_R14 + 0x7c);
          unaff_R14[0x14] = uVar66;
          unaff_R14[0x15] = uVar35;
          unaff_R14[0x16] = uVar1;
          unaff_R14[0x17] = uVar60;
          goto code_r0x0001424ead73;
        case 1:
          puVar58[0x41] = unaff_R15;
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((longlong)puVar37 + -8) = 0x1424eb8d3;
          pdb_142dc8570(&UNK_1435128d0);
        case 2:
          goto code_r0x0001424eb8aa;
        case 3:
          puVar58[0x41] = unaff_R15;
          pbVar25 = (byte *)unaff_R14[0x1e];
          in_RDX = (ulonglong *)unaff_R14[0x1f];
          break;
        case 4:
code_r0x0001424ec133:
          uVar66 = (ulonglong)*(int *)((longlong)puVar31 + (longlong)puVar27 * 4);
          bVar68 = CARRY8(uVar66,(ulonglong)puVar31);
          pbVar25 = (byte *)(uVar66 + (longlong)puVar31);
          bVar69 = pbVar25 == (byte *)0x0;
          puVar58[0x3a] = in_RDX;
          puVar36 = puVar37;
          do {
            puVar55 = puVar36;
            puVar37 = puVar36;
            puVar57 = puVar36;
            puVar54 = (undefined1 *)puVar36;
            puVar15 = (undefined1 *)puVar36;
            puVar56 = (undefined1 *)puVar36;
            puVar50 = (undefined1 *)puVar36;
            puVar51 = puVar36;
            puVar49 = (undefined1 *)puVar36;
            puVar16 = (undefined1 *)puVar36;
            puVar17 = (undefined1 *)puVar36;
            puVar40 = (undefined1 *)puVar36;
            puVar47 = (undefined1 *)puVar36;
            puVar18 = (undefined1 *)puVar36;
            puVar45 = puVar36;
            puVar19 = (undefined1 *)puVar36;
            puVar39 = (undefined1 *)puVar36;
            puVar42 = (undefined1 *)puVar36;
            puVar44 = (undefined1 *)puVar36;
            puVar41 = (undefined1 *)puVar36;
            puVar43 = (undefined1 *)puVar36;
            puVar53 = puVar36;
            puVar48 = puVar36;
            puVar46 = puVar36;
            puVar38 = puVar36;
            pcVar26 = in_R8;
            puVar64 = unaff_R15;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
            switch(pbVar25) {
            case (byte *)0x1424e8cba:
              goto code_r0x0001424e8cba;
            case (byte *)0x1424e8d50:
              goto code_r0x0001424e8d50;
            case (byte *)0x1424e8d5b:
              goto code_r0x0001424e8d5b;
            case (byte *)0x1424e8dc4:
              goto code_r0x0001424e8dc4;
            case (byte *)0x1424e8e03:
              goto code_r0x0001424e8e03;
            case (byte *)0x1424e8e1d:
              goto code_r0x0001424e8e1d;
            case (byte *)0x1424e8e2a:
              goto code_r0x0001424e8e2a;
            case (byte *)0x1424e8e4b:
              goto code_r0x0001424e8e4b;
            case (byte *)0x1424e9223:
              goto code_r0x0001424e9223;
            case (byte *)0x1424e9238:
              goto code_r0x0001424e9238;
            case (byte *)0x1424e9262:
              goto code_r0x0001424e9262;
            case (byte *)0x1424e95a5:
              goto code_r0x0001424e95a5;
            case (byte *)0x1424e9923:
              goto code_r0x0001424e9923;
            case (byte *)0x1424e992c:
              goto code_r0x0001424e992c;
            case (byte *)0x1424e992f:
              goto code_r0x0001424e992f;
            case (byte *)0x1424e9945:
              goto code_r0x0001424e9945;
            case (byte *)0x1424e9946:
              goto code_r0x0001424e9946;
            case (byte *)0x1424e9966:
              goto code_r0x0001424e9966;
            case (byte *)0x1424e9976:
              goto code_r0x0001424e9976;
            case (byte *)0x1424e99a4:
              goto code_r0x0001424e99a4;
            case (byte *)0x1424e99d5:
              goto code_r0x0001424e99d5;
            case (byte *)0x1424e9a1c:
              goto code_r0x0001424e9a1c;
            case (byte *)0x1424eac25:
              goto code_r0x0001424eac25;
            case (byte *)0x1424eacc8:
              goto code_r0x0001424eacc8;
            case (byte *)0x1424eacd4:
              goto code_r0x0001424eacd4;
            case (byte *)0x1424ead6c:
              goto code_r0x0001424ead6c;
            case (byte *)0x1424eb839:
              goto code_r0x0001424eb839;
            case (byte *)0x1424eb842:
              goto code_r0x0001424eb842;
            case (byte *)0x1424eb845:
              goto code_r0x0001424eb845;
            case (byte *)0x1424eb858:
              goto code_r0x0001424eb858;
            case (byte *)0x1424ec0cb:
              goto code_r0x0001424ec0cb;
            case (byte *)0x1424ec13f:
code_r0x0001424ec13f:
              bVar68 = CARRY1(*pbVar25,(byte)pbVar25);
              *pbVar25 = *pbVar25 + (byte)pbVar25;
              bVar69 = *pbVar25 == 0;
              puVar36 = (undefined8 *)puVar54;
              break;
            case (byte *)0x1424ec752:
              goto code_r0x0001424ec752;
            case (byte *)0x1424ec75e:
              goto code_r0x0001424ec75e;
            }
          } while( true );
        case 5:
          pcVar26 = (char *)((longlong)
                             *(int *)(&UNK_143512ad4 + (ulonglong)(byte)unaff_R14[0x25] * 4) +
                            0xd09935e3);
          *pcVar26 = *pcVar26 + (char)in_RDX;
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((longlong)puVar37 + -8) = 0x1424ec7d6;
          pdb_142dc8590();
        case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 7:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto code_r0x0001424eade9;
      case 1:
                    /* WARNING: Subroutine does not return */
        puVar55[-0x65] = 0x1424eb8a9;
        pdb_142dc8570(&UNK_143512858);
      case 2:
                    /* WARNING: Subroutine does not return */
        puVar55[-0x65] = 0x1424eb89d;
        pdb_142dc8590(&UNK_143512858);
      case 3:
        puVar27 = (undefined *)(ulonglong)(byte)in_RDX[0x25];
      case 4:
                    /* WARNING: Could not recover jumptable at 0x0001424ead3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pbVar25 = (byte *)(*(code *)(&UNK_143512ad4 +
                                    *(int *)(&UNK_143512ad4 + (longlong)puVar27 * 4)))();
        return pbVar25;
      case 5:
        (&UNK_143512a51)[iVar3] = (&UNK_143512a51)[iVar3] + -0x3c;
code_r0x0001424eb8aa:
        puVar58[0x41] = unaff_R15;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)puVar53 + -8) = 0x1424eb8bd;
        pdb_142dc8590(&UNK_1435128d0);
      case 6:
        pcVar7 = (code *)swi(3);
        pbVar25 = (byte *)(*pcVar7)();
        return pbVar25;
      case 7:
        break;
      case 8:
        param_1 = (byte *)((ulonglong)in_RDX & 0xffffffff);
        puVar27 = (undefined *)(ulonglong)(byte)in_RDX[0xe];
        puVar31 = (ulonglong *)&UNK_143512ae4;
        goto code_r0x0001424ec133;
      case 9:
                    /* WARNING: Does not return */
        pcVar7 = (code *)invalidInstructionException();
        (*pcVar7)();
      case 10:
code_r0x0001424ec7aa:
        if (bVar68) {
                    /* WARNING: Subroutine does not return */
          *(undefined8 *)((longlong)puVar57 + -8) = 0x1424ec7b8;
          pdb_142dc8570(&UNK_143512a18);
        }
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)puVar57 + -8) = 0x1424ec7c7;
        pdb_142dc8590(&UNK_143512a18);
      case 0xb:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x0001424eadc3;
    case 0x13:
      goto code_r0x0001424eb858;
    case 0x14:
      in_RDX = (ulonglong *)(ulonglong)((int)puVar58 + 0x1c0);
      puVar31 = unaff_RBX;
      goto code_r0x0001424eb852;
    case 0x15:
      goto code_r0x0001424eacd7;
    case 0x16:
      goto code_r0x0001424eace4;
    case 0x17:
      puVar52 = puVar55 + -1;
      puVar55 = puVar55 + -1;
      *puVar52 = 0x48000002;
      *(int *)(&UNK_143512b6c + iVar3) = (int)in_RDX;
      goto code_r0x0001424eb858;
    case 0x18:
      goto code_r0x0001424eb852;
    case 0x19:
      puVar51 = puVar55;
      in_R8 = pcVar26;
      goto code_r0x0001424ead73;
    case 0x1a:
      return pbVar25;
    case 0x1b:
      *(int *)(&UNK_143512a94 + iVar3) = (int)param_1;
      goto code_r0x0001424ec771;
    case 0x1c:
      *(undefined4 *)(&UNK_143512a84 + iVar3) = 1;
      goto code_r0x0001424ec769;
    case 0x1d:
      uVar23 = *(undefined4 *)((longlong)param_4 + 0x14);
      uVar70 = *(undefined4 *)(param_4 + 3);
      uVar71 = *(undefined4 *)((longlong)param_4 + 0x1c);
      *(undefined4 *)(puVar58 + 0x10) = *(undefined4 *)(param_4 + 2);
      *(undefined4 *)((longlong)puVar58 + 0x84) = uVar23;
      *(undefined4 *)(puVar58 + 0x11) = uVar70;
      *(undefined4 *)((longlong)puVar58 + 0x8c) = uVar71;
      puVar58[0xe] = uVar32;
      *(undefined4 *)(puVar58 + 0xf) = extraout_XMM0_Dc;
      *(undefined4 *)((longlong)puVar58 + 0x7c) = extraout_XMM0_Dd;
      puVar55[-1] = 0x1424ec16f;
      pdb_140ceedf0(puVar58 + 0x2a);
      uVar23 = *(undefined4 *)(puVar58 + 0x2a);
      uVar70 = *(undefined4 *)((longlong)puVar58 + 0x154);
      uVar71 = *(undefined4 *)(puVar58 + 0x2b);
      uVar72 = *(undefined4 *)((longlong)puVar58 + 0x15c);
      uVar32 = puVar58[0x2c];
      uVar61 = puVar58[0x2d];
      uVar8 = *(undefined4 *)(puVar58 + 0x2e);
      uVar9 = *(undefined4 *)((longlong)puVar58 + 0x174);
      uVar10 = *(undefined4 *)(puVar58 + 0x2f);
      uVar11 = *(undefined4 *)((longlong)puVar58 + 0x17c);
      uVar12 = *(undefined4 *)((longlong)puVar58 + 0x184);
      uVar13 = *(undefined4 *)(puVar58 + 0x31);
      uVar14 = *(undefined4 *)((longlong)puVar58 + 0x18c);
      *(undefined4 *)(puVar58 + -6) = uVar23;
      *(undefined4 *)((longlong)puVar58 + -0x2c) = uVar70;
      *(undefined4 *)(puVar58 + -5) = uVar71;
      *(undefined4 *)((longlong)puVar58 + -0x24) = uVar72;
      puVar58[-4] = uVar32;
      puVar58[-3] = uVar61;
      *(undefined4 *)(puVar58 + -2) = uVar8;
      *(undefined4 *)((longlong)puVar58 + -0xc) = uVar9;
      *(undefined4 *)(puVar58 + -1) = uVar10;
      *(undefined4 *)((longlong)puVar58 + -4) = uVar11;
      *(undefined4 *)puVar58 = *(undefined4 *)(puVar58 + 0x30);
      *(undefined4 *)((longlong)puVar58 + 4) = uVar12;
      *(undefined4 *)(puVar58 + 1) = uVar13;
      *(undefined4 *)((longlong)puVar58 + 0xc) = uVar14;
      lVar28 = puVar58[0x3a];
      *(undefined4 *)(lVar28 + 0x60) = *(undefined4 *)(puVar58 + 0x30);
      *(undefined4 *)(lVar28 + 100) = uVar12;
      *(undefined4 *)(lVar28 + 0x68) = uVar13;
      *(undefined4 *)(lVar28 + 0x6c) = uVar14;
      *(undefined4 *)(lVar28 + 0x50) = uVar8;
      *(undefined4 *)(lVar28 + 0x54) = uVar9;
      *(undefined4 *)(lVar28 + 0x58) = uVar10;
      *(undefined4 *)(lVar28 + 0x5c) = uVar11;
      *(undefined8 *)(lVar28 + 0x40) = uVar32;
      *(undefined8 *)(lVar28 + 0x48) = uVar61;
      *(undefined4 *)(lVar28 + 0x30) = uVar23;
      *(undefined4 *)(lVar28 + 0x34) = uVar70;
      *(undefined4 *)(lVar28 + 0x38) = uVar71;
      *(undefined4 *)(lVar28 + 0x3c) = uVar72;
      cVar20 = *(char *)(lVar28 + 0x60);
      puVar58[0x36] = (undefined4 *)(lVar28 + 0x30);
      if (cVar20 != '\0') {
        bVar68 = cVar20 == '\x01';
        puVar57 = puVar55;
        goto code_r0x0001424ec7aa;
      }
      puVar37 = *(undefined8 **)(lVar28 + 0x50);
      uVar32 = *(undefined8 *)(lVar28 + 0x58);
      uVar23 = *(undefined4 *)(lVar28 + 0x30);
      uVar70 = *(undefined4 *)(lVar28 + 0x34);
      uVar71 = *(undefined4 *)(lVar28 + 0x38);
      uVar72 = *(undefined4 *)(lVar28 + 0x3c);
      uVar8 = *(undefined4 *)(lVar28 + 0x44);
      uVar9 = *(undefined4 *)(lVar28 + 0x48);
      uVar10 = *(undefined4 *)(lVar28 + 0x4c);
      *(undefined4 *)(puVar58 + 0xc) = *(undefined4 *)(lVar28 + 0x40);
      *(undefined4 *)((longlong)puVar58 + 100) = uVar8;
      *(undefined4 *)(puVar58 + 0xd) = uVar9;
      *(undefined4 *)((longlong)puVar58 + 0x6c) = uVar10;
      *(undefined4 *)(puVar58 + 10) = uVar23;
      *(undefined4 *)((longlong)puVar58 + 0x54) = uVar70;
      *(undefined4 *)(puVar58 + 0xb) = uVar71;
      *(undefined4 *)((longlong)puVar58 + 0x5c) = uVar72;
      puVar55[-1] = 0x1424ec1ef;
      lVar28 = pdb_1417107c0(puVar58 + 10,puVar37,uVar32);
      if (lVar28 == 1) {
        puVar55[-1] = 0x1424ec1fe;
        unaff_R14 = (ulonglong *)pdb_142deaf00(puVar37);
        puVar36 = puVar37;
code_r0x0001424ec4b3:
        puVar55[-1] = 0x1424ec4bc;
        pdb_14098a860(puVar58 + 10);
        *(undefined1 *)(puVar58[0x3a] + 0x60) = 1;
      }
      else {
        puVar58[0x39] = puVar37;
        puVar36 = (undefined8 *)puVar37[3];
        uVar32 = puVar37[4];
        puVar55[-1] = 0x1424ec225;
        pdb_140dace30(puVar58 + 0x1d,puVar36,uVar32);
        if (puVar58[0x1d] != -0x7ffffffffffffff6) {
          *(undefined4 *)(puVar58 + 0x14) = *(undefined4 *)(puVar58 + 0x23);
          *(undefined4 *)((longlong)puVar58 + 0xa4) = *(undefined4 *)((longlong)puVar58 + 0x11c);
          *(undefined4 *)(puVar58 + 0x15) = *(undefined4 *)(puVar58 + 0x24);
          *(undefined4 *)((longlong)puVar58 + 0xac) = *(undefined4 *)((longlong)puVar58 + 0x124);
          *(undefined4 *)(puVar58 + 0x12) = *(undefined4 *)(puVar58 + 0x21);
          *(undefined4 *)((longlong)puVar58 + 0x94) = *(undefined4 *)((longlong)puVar58 + 0x10c);
          *(undefined4 *)(puVar58 + 0x13) = *(undefined4 *)(puVar58 + 0x22);
          *(undefined4 *)((longlong)puVar58 + 0x9c) = *(undefined4 *)((longlong)puVar58 + 0x114);
          *(undefined4 *)(puVar58 + 0x10) = *(undefined4 *)(puVar58 + 0x1f);
          *(undefined4 *)((longlong)puVar58 + 0x84) = *(undefined4 *)((longlong)puVar58 + 0xfc);
          *(undefined4 *)(puVar58 + 0x11) = *(undefined4 *)(puVar58 + 0x20);
          *(undefined4 *)((longlong)puVar58 + 0x8c) = *(undefined4 *)((longlong)puVar58 + 0x104);
          *(undefined4 *)(puVar58 + 0xe) = *(undefined4 *)(puVar58 + 0x1d);
          *(undefined4 *)((longlong)puVar58 + 0x74) = *(undefined4 *)((longlong)puVar58 + 0xec);
          *(undefined4 *)(puVar58 + 0xf) = *(undefined4 *)(puVar58 + 0x1e);
          *(undefined4 *)((longlong)puVar58 + 0x7c) = *(undefined4 *)((longlong)puVar58 + 0xf4);
          *(undefined1 *)((longlong)puVar58 + 0x1df) = 1;
          puVar55[-1] = 0x1424ec3b6;
          pdb_140f3f5b0(puVar58 + 0x2a);
          puVar58[6] = puVar58[0x2e];
          puVar58[7] = puVar58[0x2f];
          puVar58[4] = puVar58[0x2c];
          puVar58[5] = puVar58[0x2d];
          puVar58[2] = puVar58[0x2a];
          puVar58[3] = puVar58[0x2b];
          *(undefined4 *)(puVar58 + 0x32) = *(undefined4 *)(puVar58 + 0x23);
          *(undefined4 *)((longlong)puVar58 + 0x194) = *(undefined4 *)((longlong)puVar58 + 0x11c);
          *(undefined4 *)(puVar58 + 0x33) = *(undefined4 *)(puVar58 + 0x24);
          *(undefined4 *)((longlong)puVar58 + 0x19c) = *(undefined4 *)((longlong)puVar58 + 0x124);
          *(undefined4 *)(puVar58 + 0x30) = *(undefined4 *)(puVar58 + 0x21);
          *(undefined4 *)((longlong)puVar58 + 0x184) = *(undefined4 *)((longlong)puVar58 + 0x10c);
          *(undefined4 *)(puVar58 + 0x31) = *(undefined4 *)(puVar58 + 0x22);
          *(undefined4 *)((longlong)puVar58 + 0x18c) = *(undefined4 *)((longlong)puVar58 + 0x114);
          *(undefined4 *)(puVar58 + 0x2e) = *(undefined4 *)(puVar58 + 0x1f);
          *(undefined4 *)((longlong)puVar58 + 0x174) = *(undefined4 *)((longlong)puVar58 + 0xfc);
          *(undefined4 *)(puVar58 + 0x2f) = *(undefined4 *)(puVar58 + 0x20);
          *(undefined4 *)((longlong)puVar58 + 0x17c) = *(undefined4 *)((longlong)puVar58 + 0x104);
          *(undefined4 *)(puVar58 + 0x2c) = *(undefined4 *)(puVar58 + 0x1d);
          *(undefined4 *)((longlong)puVar58 + 0x164) = *(undefined4 *)((longlong)puVar58 + 0xec);
          *(undefined4 *)(puVar58 + 0x2d) = *(undefined4 *)(puVar58 + 0x1e);
          *(undefined4 *)((longlong)puVar58 + 0x16c) = *(undefined4 *)((longlong)puVar58 + 0xf4);
          puVar58[0x2a] = &UNK_143512999;
          puVar58[0x2b] = 0x24;
          *(undefined1 *)((longlong)puVar58 + 0x1df) = 0;
          puVar36 = puVar58 + 2;
          puVar55[-1] = 0x1424ec440;
          unaff_R14 = (ulonglong *)pdb_142dea520(puVar58 + 0x2a);
code_r0x0001424ec499:
          plVar6 = (longlong *)puVar58[0x39];
          LOCK();
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            puVar55[-1] = 0x1424ec4b2;
            pdb_140cd0de0(puVar58 + 0x39);
          }
          goto code_r0x0001424ec4b3;
        }
        unaff_R14 = (ulonglong *)puVar58[0x1f];
        puVar58[0x1a] = puVar58[0x20];
        puVar58[0x1b] = puVar58[0x21];
        puVar58[0x1c] = puVar58[0x22];
        if (puVar58[0x1e] == 10) goto code_r0x0001424ec499;
        puVar58[0x29] = puVar58[0x1c];
        *(undefined4 *)(puVar58 + 0x27) = *(undefined4 *)(puVar58 + 0x1a);
        *(undefined4 *)((longlong)puVar58 + 0x13c) = *(undefined4 *)((longlong)puVar58 + 0xd4);
        *(undefined4 *)(puVar58 + 0x28) = *(undefined4 *)(puVar58 + 0x1b);
        *(undefined4 *)((longlong)puVar58 + 0x144) = *(undefined4 *)((longlong)puVar58 + 0xdc);
        puVar58[0x25] = puVar58[0x1e];
        puVar58[0x26] = unaff_R14;
        puVar55[-1] = 0x1424ec2ae;
        pdb_140daccf0(puVar58 + 0x16,puVar58 + 0x25);
        puVar55[-1] = 0x1424ec2be;
        pdb_1424e6e70(puVar58 + 0x25);
        lVar28 = puVar58[0x17];
        uVar66 = puVar58[0x18] & 0x7ffffffffffffffc;
        puVar58[0x38] = lVar28;
        puVar58[0x2a] = lVar28;
        puVar58[0x2b] = uVar66;
        puVar58[0x2c] = lVar28 + uVar66;
        puVar58[0x2d] = (ulonglong)((uint)puVar58[0x18] & 3);
        puVar58[0x2e] = 4;
        puVar55[-1] = 0x1424ec321;
        pdb_1415f27b0(puVar58 + 0x1a,puVar58 + 0x2a);
        uVar24 = *(uint *)(puVar58 + 0x19);
        uVar4 = *(uint *)((longlong)puVar58 + 0xcc);
        uVar66 = puVar58[0x1a];
        pbVar25 = (byte *)puVar58[0x1b];
        uVar35 = (ulonglong)uVar4 * (ulonglong)uVar24;
        if ((ulonglong)puVar58[0x1c] <= uVar35 && uVar35 - puVar58[0x1c] != 0) {
          if (uVar66 != 0) {
            puVar55[-1] = 0x1424ec369;
            pub_1406abac0(pbVar25,uVar66,1);
          }
code_r0x0001424ec452:
          puVar55[-1] = 0x1424ec45e;
          pdb_140f3f5b0(puVar58 + 0x2a);
          puVar55[-1] = 0x1424ec477;
          unaff_R14 = (ulonglong *)pdb_142dea6e0(&UNK_1435129bd,0x2b,puVar58 + 0x2a);
code_r0x0001424ec47b:
          puVar36 = (undefined8 *)puVar58[0x16];
          if (puVar36 != (undefined8 *)0x0) {
            pbVar25 = (byte *)puVar58[0x38];
            puVar55[-1] = 0x1424ec499;
            pub_1406abac0(pbVar25,(ulonglong)puVar36,1);
          }
          goto code_r0x0001424ec499;
        }
        if (SBORROW8(0,uVar66)) goto code_r0x0001424ec452;
        puVar58[0x37] = uVar66;
        puVar58[0x25] = 0;
        puVar58[0x26] = 1;
        puVar58[0x27] = 0;
        puVar58[8] = puVar58 + 0x25;
        puVar58[9] = 0;
        puVar58[0x35] = pbVar25;
        puVar55[-1] = 0x1424ec540;
        uVar32 = pdb_1406d0830();
        *(uint *)(puVar55 + 5) = uVar4;
        *(uint *)(puVar55 + 4) = uVar24;
        *(undefined1 *)(puVar55 + 8) = 0;
        *(undefined1 *)(puVar55 + 6) = 0xd;
        puVar55[-1] = 0x1424ec56b;
        pdb_140ade920(puVar58 + 0x1d,puVar58 + 8,uVar32,uVar35);
        if (puVar58[0x1d] != -0x7ffffffffffffff6) {
          *(undefined4 *)(puVar58 + 0x14) = *(undefined4 *)(puVar58 + 0x23);
          *(undefined4 *)((longlong)puVar58 + 0xa4) = *(undefined4 *)((longlong)puVar58 + 0x11c);
          *(undefined4 *)(puVar58 + 0x15) = *(undefined4 *)(puVar58 + 0x24);
          *(undefined4 *)((longlong)puVar58 + 0xac) = *(undefined4 *)((longlong)puVar58 + 0x124);
          *(undefined4 *)(puVar58 + 0x12) = *(undefined4 *)(puVar58 + 0x21);
          *(undefined4 *)((longlong)puVar58 + 0x94) = *(undefined4 *)((longlong)puVar58 + 0x10c);
          *(undefined4 *)(puVar58 + 0x13) = *(undefined4 *)(puVar58 + 0x22);
          *(undefined4 *)((longlong)puVar58 + 0x9c) = *(undefined4 *)((longlong)puVar58 + 0x114);
          *(undefined4 *)(puVar58 + 0x10) = *(undefined4 *)(puVar58 + 0x1f);
          *(undefined4 *)((longlong)puVar58 + 0x84) = *(undefined4 *)((longlong)puVar58 + 0xfc);
          *(undefined4 *)(puVar58 + 0x11) = *(undefined4 *)(puVar58 + 0x20);
          *(undefined4 *)((longlong)puVar58 + 0x8c) = *(undefined4 *)((longlong)puVar58 + 0x104);
          *(undefined4 *)(puVar58 + 0xe) = *(undefined4 *)(puVar58 + 0x1d);
          *(undefined4 *)((longlong)puVar58 + 0x74) = *(undefined4 *)((longlong)puVar58 + 0xec);
          *(undefined4 *)(puVar58 + 0xf) = *(undefined4 *)(puVar58 + 0x1e);
          *(undefined4 *)((longlong)puVar58 + 0x7c) = *(undefined4 *)((longlong)puVar58 + 0xf4);
          *(undefined1 *)((longlong)puVar58 + 0x1de) = 1;
          puVar55[-1] = 0x1424ec66e;
          pdb_140f3f5b0(puVar58 + 0x2a);
          puVar58[6] = puVar58[0x2e];
          puVar58[7] = puVar58[0x2f];
          puVar58[4] = puVar58[0x2c];
          puVar58[5] = puVar58[0x2d];
          puVar58[2] = puVar58[0x2a];
          puVar58[3] = puVar58[0x2b];
          *(undefined4 *)(puVar58 + 0x32) = *(undefined4 *)(puVar58 + 0x23);
          *(undefined4 *)((longlong)puVar58 + 0x194) = *(undefined4 *)((longlong)puVar58 + 0x11c);
          *(undefined4 *)(puVar58 + 0x33) = *(undefined4 *)(puVar58 + 0x24);
          *(undefined4 *)((longlong)puVar58 + 0x19c) = *(undefined4 *)((longlong)puVar58 + 0x124);
          *(undefined4 *)(puVar58 + 0x30) = *(undefined4 *)(puVar58 + 0x21);
          *(undefined4 *)((longlong)puVar58 + 0x184) = *(undefined4 *)((longlong)puVar58 + 0x10c);
          *(undefined4 *)(puVar58 + 0x31) = *(undefined4 *)(puVar58 + 0x22);
          *(undefined4 *)((longlong)puVar58 + 0x18c) = *(undefined4 *)((longlong)puVar58 + 0x114);
          *(undefined4 *)(puVar58 + 0x2e) = *(undefined4 *)(puVar58 + 0x1f);
          *(undefined4 *)((longlong)puVar58 + 0x174) = *(undefined4 *)((longlong)puVar58 + 0xfc);
          *(undefined4 *)(puVar58 + 0x2f) = *(undefined4 *)(puVar58 + 0x20);
          *(undefined4 *)((longlong)puVar58 + 0x17c) = *(undefined4 *)((longlong)puVar58 + 0x104);
          *(undefined4 *)(puVar58 + 0x2c) = *(undefined4 *)(puVar58 + 0x1d);
          *(undefined4 *)((longlong)puVar58 + 0x164) = *(undefined4 *)((longlong)puVar58 + 0xec);
          *(undefined4 *)(puVar58 + 0x2d) = *(undefined4 *)(puVar58 + 0x1e);
          *(undefined4 *)((longlong)puVar58 + 0x16c) = *(undefined4 *)((longlong)puVar58 + 0xf4);
          puVar58[0x2a] = &UNK_1435129e8;
          puVar58[0x2b] = 0x2d;
          *(undefined1 *)((longlong)puVar58 + 0x1de) = 0;
          puVar55[-1] = 0x1424ec6f8;
          unaff_R14 = (ulonglong *)pdb_142dea520(puVar58 + 0x2a,puVar58 + 2);
          uVar66 = puVar58[0x25];
          if (uVar66 != 0) {
            pbVar25 = (byte *)puVar58[0x26];
            puVar55[-1] = 0x1424ec71a;
            pub_1406abac0(pbVar25,uVar66,1);
          }
          uVar66 = puVar58[0x37];
          if (uVar66 != 0) {
            pbVar25 = (byte *)puVar58[0x35];
            puVar55[-1] = 0x1424ec73c;
            pub_1406abac0(pbVar25,uVar66,1);
          }
          goto code_r0x0001424ec47b;
        }
        unaff_R15 = (ulonglong *)puVar58[0x25];
        unaff_R14 = (ulonglong *)puVar58[0x26];
        pcVar26 = (char *)puVar58[0x27];
        uVar66 = puVar58[0x37];
        if (uVar66 != 0) {
          pbVar25 = (byte *)puVar58[0x35];
          puVar55[-1] = 0x1424ec5ac;
          pub_1406abac0(pbVar25,uVar66,1);
        }
        puVar36 = (undefined8 *)puVar58[0x16];
        if (puVar36 != (undefined8 *)0x0) {
          pbVar25 = (byte *)puVar58[0x38];
          puVar55[-1] = 0x1424ec5ca;
          pub_1406abac0(pbVar25,(ulonglong)puVar36,1);
        }
        plVar6 = (longlong *)puVar58[0x39];
        LOCK();
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          puVar55[-1] = 0x1424ec5e3;
          pdb_140cd0de0(puVar58 + 0x39);
        }
        puVar55[-1] = 0x1424ec5ed;
        pdb_14098a860(puVar58 + 10);
        unaff_RBX = (ulonglong *)puVar58[0x3a];
        *(byte *)(unaff_RBX + 0xc) = 1;
        if (!SBORROW8(0,(longlong)unaff_R15)) {
          if (unaff_R15 == (ulonglong *)0x8000000000000001) {
            param_1[0] = 2;
            param_1[1] = 0;
            param_1[2] = 0;
            param_1[3] = 0;
            param_1[4] = 0;
            param_1[5] = 0;
            param_1[6] = 0;
            param_1[7] = 0;
            bVar22 = 3;
            goto code_r0x0001424ec4ea;
          }
          puVar55[-1] = 0x1424ec746;
          pdb_14007ee60();
          puVar55[-1] = 0x1424ec755;
          pbVar25 = pub_1406abab0(0x30,8);
          goto code_r0x0001424ec755;
        }
      }
      puVar55[-1] = 0x1424ec4d0;
      pbVar25 = (byte *)pdb_142dc6590(unaff_R14);
      uVar32 = 1;
      unaff_RBX = (ulonglong *)puVar58[0x3a];
      goto code_r0x0001424ec4dd;
    }
    puVar31 = (ulonglong *)&UNK_143512a94;
    lVar28 = (longlong)*(int *)(&UNK_143512a94 + (longlong)pcVar26 * 4);
    goto code_r0x0001424e8e4d;
  case 1:
    goto code_r0x0001424e992f;
  case 2:
code_r0x0001424e9923:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar41 + -8) = 0x1424e992f;
    pdb_142dc8590(&UNK_143512858);
  case 3:
code_r0x0001424e8d50:
    pbVar25 = (byte *)(ulonglong)(byte)in_RDX[0x35];
  case 4:
code_r0x0001424e8d5b:
                    /* WARNING: Could not recover jumptable at 0x0001424e8d69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pbVar25 = (byte *)(*(code *)(&UNK_143512a7c + *(int *)(&UNK_143512a7c + (longlong)pbVar25 * 4)))
                                ();
    return pbVar25;
  case 5:
code_r0x0001424e9945:
    puVar55 = (undefined8 *)puVar44;
code_r0x0001424e994a:
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e994f;
    pdb_142dc8590(puVar31);
  case 6:
code_r0x0001424e992c:
    in((short)in_RDX);
    puVar43 = puVar42;
    goto code_r0x0001424e992f;
  case 7:
code_r0x0001424e8e1d:
    *(byte *)puVar31 = (byte)*puVar31 << 1 | (char)(byte)*puVar31 < '\0';
    *pbVar25 = *pbVar25 + (char)pbVar25;
    puVar55 = (undefined8 *)puVar39;
    pcVar26 = in_R8;
code_r0x0001424e8e21:
    puVar37 = (undefined8 *)in_RDX[0x3b];
    goto code_r0x0001424e9d0a;
  case 8:
code_r0x0001424e8dc4:
    unaff_R13 = in_RDX + 0x40;
    *(byte *)(in_RDX + 0x40) = 0;
    puVar55 = puVar38;
code_r0x0001424e8e52:
    in_RDX[0x38] = in_RDX[0x36];
    in_RDX[0x39] = in_RDX[0x37];
    puVar64 = in_RDX + 0x3f;
    *(byte *)(in_RDX + 0x3f) = 0;
    puVar58[0xbd] = unaff_R15;
    in_RDX[0x3c] = in_RDX[0x38];
    in_RDX[0x3d] = in_RDX[0x39];
    pbVar25 = (byte *)((longlong)in_RDX + 0x1f1);
    *(byte *)((longlong)in_RDX + 0x1f1) = 0;
    *(byte *)(in_RDX + 0x3e) = 0;
    uVar66 = in_RDX[0x3c];
    uVar35 = in_RDX[0x3d];
    puVar58[0xb8] = pbVar25;
    puVar58[0xc0] = in_RDX + 0x3a;
    puVar58[0xb7] = in_RDX + 0x3a;
    puVar58[0xb6] = unaff_R13;
    puVar58[0xb5] = unaff_R14;
    puVar58[0xbf] = in_RDX + 0x38;
    puVar58[0xb4] = in_RDX + 0x38;
    puVar58[0xb3] = puVar64;
    *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e8f14;
    pdb_140b78570(puVar58 + 0x34,uVar35);
    lVar28 = puVar58[0x34];
    if (SBORROW8(0,lVar28)) {
      puVar58[0x78] = 1;
      puVar58[0x79] = 1;
      puVar58[0x7a] = puVar58[0x35];
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e8f51;
      pdb_14007ee60();
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e8f60;
      unaff_RBX = (ulonglong *)pub_1406abab0(0x18,8);
      lVar28 = puVar58[0xc1];
      if (unaff_RBX == (ulonglong *)0x0) {
        puVar58[0xbb] = pbVar25;
        puVar58[0xba] = puVar64;
        puVar58[0xb9] = unaff_R14;
        puVar58[0xbc] = unaff_R13;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9908;
        pdb_142dc7e11(8,0x18);
      }
      unaff_RBX[2] = puVar58[0x7a];
      uVar66 = puVar58[0x79];
      *unaff_RBX = puVar58[0x78];
      unaff_RBX[1] = uVar66;
      *(undefined2 *)(lVar28 + 0x1f0) = 0x100;
      *(undefined1 *)(lVar28 + 0x1f8) = 1;
      unaff_R15 = (ulonglong *)&UNK_1435125b0;
      puVar64 = (ulonglong *)0x22;
      unaff_R12 = &UNK_143512668;
      goto code_r0x0001424e8fac;
    }
    uVar32 = puVar58[0x35];
    uVar23 = *(undefined4 *)(puVar58 + 0x36);
    uVar70 = *(undefined4 *)((longlong)puVar58 + 0x1b4);
    uVar71 = *(undefined4 *)(puVar58 + 0x37);
    uVar72 = *(undefined4 *)((longlong)puVar58 + 0x1bc);
    *(undefined1 *)(puVar58[0xc1] + 0x1f0) = 0;
    puVar58[0x34] = lVar28;
    puVar58[0x35] = uVar32;
    *(undefined4 *)(puVar58 + 0x36) = uVar23;
    *(undefined4 *)((longlong)puVar58 + 0x1b4) = uVar70;
    *(undefined4 *)(puVar58 + 0x37) = uVar71;
    *(undefined4 *)((longlong)puVar58 + 0x1bc) = uVar72;
    puVar58[0xbb] = pbVar25;
    puVar58[0xa2] = pbVar25;
    puVar58[0xa1] = puVar58[0xc0];
    puVar58[0xa0] = unaff_R13;
    puVar58[0x9f] = unaff_R14;
    puVar58[0x9e] = puVar58[0xbf];
    puVar58[0x9d] = puVar64;
    puVar58[0x97] = lVar28;
    puVar58[0x9c] = lVar28;
    puVar58[0x98] = uVar32;
    puVar58[0x9b] = uVar32;
    puVar37 = puVar58 + 0x34;
    *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e907d;
    uVar32 = pdb_141710e30(uVar66);
    puVar58[0xba] = puVar64;
    puVar58[0xb9] = unaff_R14;
    puVar58[0xbc] = unaff_R13;
    lVar28 = puVar58[0xc1];
    *(undefined8 *)(lVar28 + 0x1d0) = uVar32;
    *(undefined8 **)(lVar28 + 0x1d8) = puVar37;
    pcVar7 = (code *)puVar37[3];
    *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e90be;
    (*pcVar7)(puVar58 + 0x34,uVar32,pcVar26);
    uVar66 = puVar58[0x34];
    if (uVar66 != 2) {
      unaff_R12 = (undefined *)puVar58[0x35];
      unaff_R14 = (ulonglong *)puVar58[0x36];
      unaff_RBX = (ulonglong *)puVar58[0x37];
      puVar64 = (ulonglong *)puVar58[0x38];
      puVar58[0xad] = *(undefined8 *)(puVar58[0xc1] + 0x1d0);
      puVar37 = *(undefined8 **)(puVar58[0xc1] + 0x1d8);
      puVar58[0xae] = puVar37;
      pcVar7 = (code *)*puVar37;
      if (pcVar7 != (code *)0x0) {
        uVar32 = puVar58[0xad];
        *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e91f1;
        (*pcVar7)(uVar32);
      }
      pbVar25 = (byte *)puVar58[0xad];
      in_RDX = *(ulonglong **)(puVar58[0xae] + 8);
      if (in_RDX != (ulonglong *)0x0) {
        uVar35 = *(ulonglong *)(puVar58[0xae] + 0x10);
        *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9212;
        pub_1406abac0(pbVar25,(ulonglong)in_RDX,uVar35);
      }
      *(undefined2 *)(puVar58[0xc1] + 0x1f0) = 0x100;
      bVar68 = (uVar66 & 1) == 0;
      goto code_r0x0001424e9226;
    }
    *(undefined1 *)puVar58[0xbb] = 3;
    *(undefined1 *)puVar58[0xba] = 3;
    *(undefined1 *)puVar58[0xbc] = 3;
    uVar21 = 3;
code_r0x0001424e9bc1:
    lVar28 = puVar58[0xc1];
    *(undefined1 *)(lVar28 + 0x1a8) = uVar21;
code_r0x0001424e9bcf:
    param_1[0] = 2;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    uVar21 = 3;
    goto code_r0x0001424e9bd8;
  case 9:
code_r0x0001424e8e03:
    puVar55 = (undefined8 *)puVar19;
    pcVar26 = in_R8;
code_r0x0001424e8dec:
    pcVar7 = (code *)param_4[3];
    *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e8dfa;
    (*pcVar7)(puVar58 + 0x34);
    lVar28 = puVar58[0x34];
    if (lVar28 == 2) {
      uVar21 = 4;
      goto code_r0x0001424e9bc1;
    }
    uVar32 = puVar58[0x35];
    uVar61 = puVar58[0x36];
    puVar64 = (ulonglong *)puVar58[0x37];
    uVar34 = puVar58[0x38];
    puVar58[0xc0] = *(undefined8 *)(puVar58[0xc1] + 0x1b0);
    puVar37 = *(undefined8 **)(puVar58[0xc1] + 0x1b8);
    puVar58[0xbf] = puVar37;
    pcVar7 = (code *)*puVar37;
    if (pcVar7 != (code *)0x0) {
      uVar33 = puVar58[0xc0];
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9145;
      (*pcVar7)(uVar33);
    }
    pbVar25 = (byte *)puVar58[0xc0];
    uVar66 = *(ulonglong *)(puVar58[0xbf] + 8);
    if (uVar66 != 0) {
      uVar35 = *(ulonglong *)(puVar58[0xbf] + 0x10);
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9166;
      pub_1406abac0(pbVar25,uVar66,uVar35);
    }
    if ((int)lVar28 == 1) {
      puVar58[0x34] = uVar32;
      puVar58[0x35] = uVar61;
      puVar58[0x36] = puVar64;
      puVar58[0x37] = uVar34;
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9198;
      uVar32 = pdb_142deada0(puVar58 + 0x34);
code_r0x0001424e9bf6:
      lVar28 = puVar58[0xc1];
      if (*(char *)(lVar28 + 0x1a9) != '\0') {
        pbVar25 = *(byte **)(lVar28 + 0x198);
        lVar65 = *(longlong *)(lVar28 + 0x1a0);
        if (lVar65 != 0) {
          pbVar67 = pbVar25 + 8;
          do {
            uVar66 = *(ulonglong *)(pbVar67 + -8);
            if (uVar66 != 0) {
              arg0 = *(byte **)pbVar67;
              *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9c50;
              pub_1406abac0(arg0,uVar66,1);
            }
            pbVar67 = pbVar67 + 0x20;
            lVar65 = lVar65 + -1;
          } while (lVar65 != 0);
        }
        puVar64 = (ulonglong *)0x0;
        lVar65 = *(longlong *)(lVar28 + 400);
        if (lVar65 != 0) {
          *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9c75;
          pub_1406abac0(pbVar25,lVar65 << 5,8);
        }
      }
      goto code_r0x0001424e9aad;
    }
    lVar28 = puVar58[0xc1];
    *(undefined8 *)(lVar28 + 0x1e0) = uVar61;
    *(ulonglong **)(lVar28 + 0x1e8) = puVar64;
    *(undefined8 *)(lVar28 + 0x1f0) = uVar34;
    lVar65 = *(longlong *)(lVar28 + 0x1a0);
    if (lVar65 == 0) {
      pbVar25 = (byte *)0x10;
      lVar63 = 0;
    }
    else {
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e92f2;
      pdb_14007ee60();
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e92ff;
      pbVar25 = pub_1406abab0(lVar65 << 4,0x10);
      if (pbVar25 == (byte *)0x0) {
        *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9a17;
        pdb_142dc7e2a(0x10,lVar65 << 4);
        goto code_r0x0001424e9aab;
      }
      lVar63 = *(longlong *)(lVar28 + 0x1a0);
    }
    *(longlong *)(lVar28 + 0x1b0) = lVar65;
    *(byte **)(lVar28 + 0x1b8) = pbVar25;
    *(undefined8 *)(lVar28 + 0x1c0) = 0;
    *(undefined1 *)(lVar28 + 0x1a9) = 0;
    puVar37 = *(undefined8 **)(lVar28 + 0x198);
    puVar36 = puVar37 + lVar63 * 4;
    *(undefined8 **)(lVar28 + 0x200) = puVar37;
    *(undefined8 **)(lVar28 + 0x208) = puVar37;
    *(undefined8 *)(lVar28 + 0x210) = *(undefined8 *)(lVar28 + 400);
    *(undefined8 **)(lVar28 + 0x218) = puVar36;
code_r0x0001424e9c7a:
    if (puVar37 != puVar36) {
      *(undefined8 **)(lVar28 + 0x208) = puVar37 + 4;
      uVar32 = *puVar37;
      uVar61 = puVar37[1];
      uVar34 = puVar37[3];
      *(undefined8 *)(lVar28 + 0x230) = puVar37[2];
      *(undefined8 *)(lVar28 + 0x238) = uVar34;
      *(undefined8 *)(lVar28 + 0x220) = uVar32;
      *(undefined8 *)(lVar28 + 0x228) = uVar61;
      puVar57 = puVar37 + 4;
      if (SBORROW8(0,*(longlong *)(lVar28 + 0x220))) goto code_r0x0001424e9e3d;
      uVar23 = *(undefined4 *)puVar37;
      uVar70 = *(undefined4 *)((longlong)puVar37 + 4);
      uVar71 = *(undefined4 *)(puVar37 + 1);
      uVar72 = *(undefined4 *)((longlong)puVar37 + 0xc);
      uVar8 = *(undefined4 *)((longlong)puVar37 + 0x14);
      uVar9 = *(undefined4 *)(puVar37 + 3);
      uVar10 = *(undefined4 *)((longlong)puVar37 + 0x1c);
      *(undefined4 *)(puVar58 + 0x76) = *(undefined4 *)(puVar37 + 2);
      *(undefined4 *)((longlong)puVar58 + 0x3b4) = uVar8;
      *(undefined4 *)(puVar58 + 0x77) = uVar9;
      *(undefined4 *)((longlong)puVar58 + 0x3bc) = uVar10;
      *(undefined4 *)(puVar58 + 0x74) = uVar23;
      *(undefined4 *)((longlong)puVar58 + 0x3a4) = uVar70;
      *(undefined4 *)(puVar58 + 0x75) = uVar71;
      *(undefined4 *)((longlong)puVar58 + 0x3ac) = uVar72;
      *(longlong *)(lVar28 + 0x1c8) = lVar28 + 0x1b0;
      puVar37 = puVar58 + 0x74;
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9cee;
      pcVar59 = (char *)pdb_14170d0a0(lVar28 + 0xa0);
      lVar28 = puVar58[0xc1];
      *(char **)(lVar28 + 0x1d0) = pcVar59;
      *(undefined8 **)(lVar28 + 0x1d8) = puVar37;
code_r0x0001424e9d0a:
      pcVar7 = (code *)puVar37[3];
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9d1a;
      (*pcVar7)(puVar58 + 0x34,pcVar59,pcVar26);
      lVar28 = puVar58[0x34];
      if (lVar28 != 2) {
        uVar32 = puVar58[0x35];
        uVar61 = puVar58[0x36];
        uVar34 = puVar58[0x37];
        uVar33 = puVar58[0x38];
        puVar58[0xc0] = *(undefined8 *)(puVar58[0xc1] + 0x1d0);
        puVar37 = *(undefined8 **)(puVar58[0xc1] + 0x1d8);
        puVar58[0xbf] = puVar37;
        pcVar7 = (code *)*puVar37;
        if (pcVar7 != (code *)0x0) {
          uVar5 = puVar58[0xc0];
          *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9d7c;
          (*pcVar7)(uVar5);
        }
        pbVar25 = (byte *)puVar58[0xc0];
        uVar66 = *(ulonglong *)(puVar58[0xbf] + 8);
        if (uVar66 != 0) {
          uVar35 = *(ulonglong *)(puVar58[0xbf] + 0x10);
          *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9d9d;
          pub_1406abac0(pbVar25,uVar66,uVar35);
        }
        if ((int)lVar28 != 1) goto code_r0x0001424e9da7;
        puVar58[0x34] = uVar32;
        puVar58[0x35] = uVar61;
        puVar58[0x36] = uVar34;
        puVar58[0x37] = uVar33;
        *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9fa0;
        uVar32 = pdb_142deada0(puVar58 + 0x34);
        lVar28 = puVar58[0xc1];
        uVar66 = *(longlong *)(lVar28 + 0x218) - *(longlong *)(lVar28 + 0x208);
        if (uVar66 != 0) {
          uVar66 = uVar66 >> 5;
          puVar37 = (undefined8 *)(*(longlong *)(lVar28 + 0x208) + 8);
          do {
            uVar35 = puVar37[-1];
            if (uVar35 != 0) {
              pbVar25 = (byte *)*puVar37;
              *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9ff0;
              pub_1406abac0(pbVar25,uVar35,1);
            }
            puVar37 = puVar37 + 4;
            uVar66 = uVar66 - 1;
          } while (uVar66 != 0);
        }
        puVar64 = (ulonglong *)0x0;
        lVar65 = *(longlong *)(lVar28 + 0x210);
        if (lVar65 != 0) {
          pbVar25 = *(byte **)(lVar28 + 0x200);
          *(undefined8 *)((longlong)puVar55 + -8) = 0x1424ea014;
          pub_1406abac0(pbVar25,lVar65 << 5,8);
        }
        lVar65 = *(longlong *)(lVar28 + 0x1b0);
        if (lVar65 != 0) {
          pbVar25 = *(byte **)(lVar28 + 0x1b8);
          *(undefined8 *)((longlong)puVar55 + -8) = 0x1424ea036;
          pub_1406abac0(pbVar25,lVar65 << 4,0x10);
        }
        plVar6 = *(longlong **)(lVar28 + 0x1f0);
        LOCK();
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          *(undefined8 *)((longlong)puVar55 + -8) = 0x1424ea053;
          pdb_140c7a060(lVar28 + 0x1f0);
        }
        goto code_r0x0001424e9bf6;
      }
      uVar21 = 5;
      goto code_r0x0001424e9bc1;
    }
    *(undefined8 *)(lVar28 + 0x220) = 0x8000000000000000;
    puVar57 = puVar37;
code_r0x0001424e9e3d:
    if ((longlong)puVar36 - (longlong)puVar57 != 0) {
      uVar66 = (ulonglong)((longlong)puVar36 - (longlong)puVar57) >> 5;
      puVar57 = puVar57 + 1;
      do {
        uVar35 = puVar57[-1];
        if (uVar35 != 0) {
          pbVar25 = (byte *)*puVar57;
          *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9e70;
          pub_1406abac0(pbVar25,uVar35,1);
        }
        puVar57 = puVar57 + 4;
        uVar66 = uVar66 - 1;
      } while (uVar66 != 0);
    }
    lVar65 = *(longlong *)(lVar28 + 0x210);
    if (lVar65 != 0) {
      pbVar25 = *(byte **)(lVar28 + 0x200);
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9e96;
      pub_1406abac0(pbVar25,lVar65 << 5,8);
    }
    uVar32 = *(undefined8 *)(lVar28 + 0x1e0);
    lVar63 = *(longlong *)(lVar28 + 0x1b0);
    uVar61 = *(undefined8 *)(lVar28 + 0x1b8);
    lVar65 = *(longlong *)(lVar28 + 0x1c0);
    puVar64 = *(ulonglong **)(lVar28 + 0x1e8);
    plVar6 = *(longlong **)(lVar28 + 0x1f0);
    LOCK();
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      lVar28 = puVar58[0xc1];
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9edf;
      pdb_140c7a060(lVar28 + 0x1f0);
    }
    lVar28 = puVar58[0xc1];
    *(undefined2 *)(lVar28 + 0x1a9) = 0;
    plVar6 = *(longlong **)(lVar28 + 0xc0);
    LOCK();
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      lVar28 = puVar58[0xc1];
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9f10;
      pdb_141746810(lVar28 + 0xc0);
    }
    puVar58[0xc0] = uVar61;
    lVar28 = puVar58[0xc1];
    *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9f2b;
    pdb_14098a860(lVar28 + 0xa0);
    lVar28 = puVar58[0xc1];
    puVar27 = *(undefined **)(lVar28 + 0x80);
    if (puVar27 != (undefined *)0x0) {
      pbVar25 = *(byte **)(lVar28 + 0x88);
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9f51;
      pub_1406abac0(pbVar25,(ulonglong)puVar27,1);
    }
    *(undefined1 *)(lVar28 + 0x1a8) = 1;
    if (lVar63 == -0x7fffffffffffffff) goto code_r0x0001424e9bcf;
    goto code_r0x0001424e9b1e;
  case 10:
code_r0x0001424e8e2a:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb:
code_r0x0001424e9966:
    goto code_r0x0001424e9aab;
  case 0xc:
code_r0x0001424e9946:
    *in_RDX = *puVar45;
    in((short)in_RDX);
    goto code_r0x0001424e9aab;
  case 0xd:
code_r0x0001424e9223:
    puVar55 = (undefined8 *)puVar18;
    bVar68 = true;
    pcVar26 = in_R8;
code_r0x0001424e9226:
    if (!bVar68) {
      pbVar25 = (byte *)puVar58[0xba];
      unaff_R15 = puVar64;
code_r0x0001424e9233:
      puVar64 = unaff_R14;
      *pbVar25 = 1;
      bVar69 = unaff_R12 == (undefined *)0x0;
      unaff_R13 = (ulonglong *)puVar58[0xbc];
      goto code_r0x0001424e9240;
    }
    *(undefined1 *)puVar58[0xba] = 1;
code_r0x0001424e9322:
    puVar58[0xaf] = puVar64;
    if (puVar64[5] == 0) {
      puVar58[0x78] = puVar64 + 2;
      puVar58[0x79] = pdb_140001020;
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e951c;
      pdb_140f60760(puVar58 + 0x34,&UNK_143512620,puVar58 + 0x78);
      *(undefined4 *)(puVar58 + 0x78) = *(undefined4 *)(puVar58 + 0x34);
      *(undefined4 *)((longlong)puVar58 + 0x3c4) = *(undefined4 *)((longlong)puVar58 + 0x1a4);
      *(undefined4 *)(puVar58 + 0x79) = *(undefined4 *)(puVar58 + 0x35);
      *(undefined4 *)((longlong)puVar58 + 0x3cc) = *(undefined4 *)((longlong)puVar58 + 0x1ac);
      puVar58[0x7a] = puVar58[0x36];
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9547;
      uVar32 = pdb_140dbd3e0(0,puVar58 + 0x78);
      puVar58[0x34] = 1;
      puVar58[0x35] = 1;
      puVar58[0x36] = uVar32;
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e956a;
      pdb_14007ee60();
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9579;
      unaff_RBX = (ulonglong *)pub_1406abab0(0x18,8);
      if (unaff_RBX == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e991d;
        pdb_142dc7e11(8,0x18);
      }
      unaff_RBX[2] = puVar58[0x36];
      uVar23 = *(undefined4 *)((longlong)puVar58 + 0x1a4);
      uVar70 = *(undefined4 *)(puVar58 + 0x35);
      uVar71 = *(undefined4 *)((longlong)puVar58 + 0x1ac);
      *(undefined4 *)unaff_RBX = *(undefined4 *)(puVar58 + 0x34);
      *(undefined4 *)((longlong)unaff_RBX + 4) = uVar23;
      *(undefined4 *)(unaff_RBX + 1) = uVar70;
      *(undefined4 *)((longlong)unaff_RBX + 0xc) = uVar71;
      plVar6 = (longlong *)puVar58[0xaf];
      LOCK();
      *plVar6 = *plVar6 + -1;
      bVar69 = *plVar6 == 0;
      UNLOCK();
      puVar37 = puVar55;
      goto code_r0x0001424e95a5;
    }
    lVar28 = puVar58[0xc1];
    *(undefined1 *)(lVar28 + 0x200) = 1;
    *(ulonglong **)(lVar28 + 0xc0) = puVar64;
    puVar64 = _DAT_143ca8e90;
    if (2 < *_DAT_143ca8e90) {
      uVar32 = *(undefined8 *)(lVar28 + 0x88);
      uVar61 = *(undefined8 *)(lVar28 + 0x90);
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9380;
      pdb_141b1e240(puVar58 + 0x78,uVar32,uVar61,3);
      puVar58[0xaf] = puVar58 + 0x78;
      puVar58[0xb0] = pdb_140f58250;
      puVar58[0x34] = 0;
      puVar58[0x35] = &UNK_143512919;
      puVar58[0x36] = 0x11;
      puVar58[0x37] = 0;
      puVar58[0x38] = &UNK_143512518;
      puVar58[0x39] = 0x23;
      puVar58[0x3a] = 3;
      puVar58[0x3b] = &UNK_143512919;
      puVar58[0x3c] = 0x11;
      puVar58[0x3d] = 0x16000000001;
      puVar58[0x3e] = &UNK_143512900;
      puVar58[0x3f] = puVar58 + 0xaf;
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e943b;
      pdb_140f332f0((longlong)puVar58 + 0x5f7,puVar58 + 0x34);
      in_RDX = (ulonglong *)puVar58[0x78];
      if (in_RDX != (ulonglong *)0x0) {
        pbVar25 = (byte *)puVar58[0x79];
        *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e945a;
        pub_1406abac0(pbVar25,(ulonglong)in_RDX,1);
      }
      lVar28 = puVar58[0xc1];
    }
    *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e946d;
    uVar32 = pdb_141748780(lVar28 + 0xc0);
    *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9480;
    pdb_140ce9c70(puVar58 + 0x34,uVar32,in_RDX);
    lVar28 = puVar58[0x34];
    uVar32 = puVar58[0x35];
    if (!SBORROW8(0,lVar28)) {
      puVar37 = puVar58 + 0x78;
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9638;
      pub_142e32760(puVar37,puVar58 + 0x36,0xd0);
      lVar65 = puVar58[0xc1];
      *(undefined2 *)(lVar65 + 0x1a9) = 0x101;
      *(longlong *)(lVar65 + 200) = lVar28;
      *(undefined8 *)(lVar65 + 0xd0) = uVar32;
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e966c;
      pub_142e32760(lVar65 + 0xd8,puVar37,0xd0);
      if (2 < *puVar64) {
        uVar32 = *(undefined8 *)(lVar65 + 0x88);
        uVar61 = *(undefined8 *)(lVar65 + 0x90);
        *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e969c;
        pdb_141b1e240(puVar58 + 0xaf,uVar32,uVar61,3);
        lVar28 = puVar58[0xc1];
        puVar58[0x96] = *(ulonglong *)(lVar28 + 0xd8) / 3;
        puVar58[0x95] = *(undefined8 *)(lVar28 + 0xf0);
        puVar58[0x94] = *(undefined8 *)(lVar28 + 0x168);
        puVar58[0x93] = *(undefined8 *)(lVar28 + 0x1a0);
        puVar58[0x78] = puVar58 + 0xaf;
        puVar58[0x79] = pdb_140f58250;
        puVar58[0x7a] = puVar58 + 0x96;
        puVar58[0x7b] = pdb_140f72a40;
        puVar58[0x7c] = puVar58 + 0x95;
        puVar58[0x7d] = pdb_140f72a40;
        puVar58[0x7e] = puVar58 + 0x94;
        puVar58[0x7f] = pdb_140f72a40;
        puVar58[0x80] = puVar58 + 0x93;
        puVar58[0x81] = pdb_140f72a40;
        puVar58[0x34] = 0;
        puVar58[0x35] = &UNK_143512919;
        puVar58[0x36] = 0x11;
        puVar58[0x37] = 0;
        puVar58[0x38] = &UNK_143512518;
        puVar58[0x39] = 0x23;
        puVar58[0x3a] = 3;
        puVar58[0x3b] = &UNK_143512919;
        puVar58[0x3c] = 0x11;
        puVar58[0x3d] = 0x16300000001;
        puVar58[0x3e] = &UNK_143512943;
        puVar58[0x3f] = puVar37;
        *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e97f7;
        pdb_140f332f0((longlong)puVar58 + 0x5f7,puVar58 + 0x34);
        uVar66 = puVar58[0xaf];
        if (uVar66 != 0) {
          pbVar25 = (byte *)puVar58[0xb0];
          *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9816;
          pub_1406abac0(pbVar25,uVar66,1);
        }
        lVar65 = puVar58[0xc1];
      }
      *(undefined1 *)(lVar65 + 0x1aa) = 0;
      param_4 = puVar58 + 0x34;
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9848;
      pub_142e32760(param_4,lVar65 + 200,200);
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9854;
      uVar32 = pdb_14170d4d0(lVar65 + 0xa0);
      lVar28 = puVar58[0xc1];
      *(undefined8 *)(lVar28 + 0x1b0) = uVar32;
      *(undefined8 **)(lVar28 + 0x1b8) = param_4;
      goto code_r0x0001424e8dec;
    }
    puVar58[0xaf] = &UNK_14351292a;
    puVar58[0xb0] = 0x19;
    puVar58[0xb1] = uVar32;
    puVar58[0x78] = 3;
    *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e94d9;
    uVar32 = pdb_142dea2a0(puVar58 + 0xaf,puVar58 + 0x78);
    lVar28 = puVar58[0xc1];
code_r0x0001424e9aad:
    *(undefined2 *)(lVar28 + 0x1a9) = 0;
    plVar6 = *(longlong **)(lVar28 + 0xc0);
    LOCK();
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9ad3;
      pdb_141746810(lVar28 + 0xc0);
    }
    goto code_r0x0001424e9ad4;
  case 0xe:
code_r0x0001424e8e4b:
    lVar28 = CONCAT71((int7)((ulonglong)pbVar25 >> 8),(char)pbVar25 + -0x7f);
code_r0x0001424e8e4d:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
    switch((byte *)(lVar28 + (longlong)puVar31)) {
    case (byte *)0x2859fb6a7:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fb7b1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fb83d:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fb848:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fb8f0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fb90a:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fb917:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fb938:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fbd10:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fbd25:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fbd4f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fbf92:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fc391:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fc3c2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fc410:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fc419:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fc41c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fc432:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fc433:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fc453:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fc463:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fc509:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fd6b5:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fd6c1:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fd712:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fd859:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fe326:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fe32f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fe332:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fe345:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859feab8:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859fec2c:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859ff23f:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case (byte *)0x2859ff24b:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  case 0xf:
code_r0x0001424e99a4:
    *(undefined8 **)(puVar47 + -8) = puVar58;
code_r0x0001424e9aab:
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  case 0x10:
code_r0x0001424e9976:
    *(int *)(puVar58 + 0xac) = (int)param_1;
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)puVar46 + -8) = 0x1424e9988;
    pdb_142dc8590(&UNK_143512608);
  case 0x11:
code_r0x0001424e9238:
    in(0x4c);
    puVar58 = (undefined8 *)(ulonglong)*(uint *)(puVar58 + 0xbc);
    puVar55 = (undefined8 *)puVar40;
    pcVar26 = in_R8;
    puVar64 = unaff_R14;
code_r0x0001424e9240:
    if (bVar69) goto code_r0x0001424e9322;
    goto code_r0x0001424e8fac;
  case 0x12:
code_r0x0001424e9262:
                    /* WARNING: Could not emulate address calculation at 0x0001424e9267 */
                    /* WARNING: Treating indirect jump as call */
    pbVar25 = (byte *)(*(code *)((longlong)
                                 *(int *)((longlong)puVar31 +
                                         (ulonglong)((uint)pbVar25 | 0x102983d) * 4) +
                                (longlong)puVar31))();
    return pbVar25;
  case 0x13:
code_r0x0001424e9a1c:
    pbVar25[-0x75] = pbVar25[-0x75] + (char)puVar31;
    uVar24 = (int)pbVar25 + 0x89480000;
    *(char *)(ulonglong)uVar24 = *(char *)(ulonglong)uVar24 + (char)uVar24;
    puVar58[0xa7] = puVar58[0xc0];
    puVar58[0xa6] = unaff_R13;
    puVar58[0xa5] = unaff_R14;
    puVar58[0xa4] = pcVar59;
    puVar58[0xa3] = unaff_R12;
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)puVar48 + -8) = 0x1424e9a61;
    pdb_142dc8590(&UNK_143512578);
  case 0x14:
code_r0x0001424e99d5:
    pbVar25[0xcfe9] = pbVar25[0xcfe9] + (char)in_RDX;
    pcVar26 = (char *)((longlong)puVar31 * 5 + -0x43);
    *pcVar26 = *pcVar26 + (char)puVar31;
    *(undefined8 *)((longlong)puVar53 + -8) = 0x1424e99e4;
    uVar23 = func_0x00018e4e99e9();
    *(undefined4 *)(puVar58 + 0xab) = uVar23;
    puVar58[0xaa] = unaff_R14;
    puVar58[0xa9] = unaff_R13;
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)((longlong)puVar53 + -8) = 0x1424e9a04;
    pdb_142dc8570(&UNK_143512560);
  case 0x15:
code_r0x0001424e95a5:
    puVar55 = puVar37;
    unaff_R15 = (ulonglong *)&UNK_1435125b0;
    puVar64 = (ulonglong *)0x22;
    unaff_R12 = &UNK_143512668;
    unaff_R13 = (ulonglong *)puVar58[0xbc];
    if (bVar69) {
      puVar58[0x9a] = puVar58[0xb9];
      puVar58[0x99] = unaff_R13;
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e95e7;
      pdb_141746810(puVar58 + 0xaf);
    }
code_r0x0001424e8fac:
    *(byte *)unaff_R13 = 1;
    puVar58[0x34] = unaff_R12;
    puVar58[0x35] = puVar64;
    puVar58[0x36] = unaff_RBX;
    puVar58[0x37] = unaff_R15;
    *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e8fd9;
    uVar32 = pdb_142deada0(puVar58 + 0x34);
code_r0x0001424e9ad4:
    lVar28 = puVar58[0xc1];
    *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9ae7;
    pdb_14098a860(lVar28 + 0xa0);
    lVar65 = puVar58[0xc1];
    puVar27 = *(undefined **)(lVar65 + 0x80);
    if (puVar27 != (undefined *)0x0) {
      pbVar25 = *(byte **)(lVar65 + 0x88);
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9b0d;
      pub_1406abac0(pbVar25,(ulonglong)puVar27,1);
    }
    *(undefined1 *)(lVar65 + 0x1a8) = 1;
    lVar63 = -0x8000000000000000;
code_r0x0001424e9b1e:
    uVar61 = puVar58[0xbd];
    *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9b2a;
    pdb_1424e6840(uVar61);
    uVar61 = puVar58[0xc0];
    if (SBORROW8(0,lVar63)) {
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9b42;
      pbVar25 = (byte *)pdb_142dc6590(uVar32);
      uVar32 = 1;
    }
    else {
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9b4f;
      pdb_14007ee60();
      *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9b5e;
      pbVar25 = pub_1406abab0(0x40,0x10);
      if (pbVar25 == (byte *)0x0) {
        puVar58[0xbf] = lVar63;
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9bbb;
        pdb_142dc7e11(0x10,0x40);
      }
      pbVar25[0] = 1;
      pbVar25[1] = 0;
      pbVar25[2] = 0;
      pbVar25[3] = 0;
      pbVar25[4] = 0;
      pbVar25[5] = 0;
      pbVar25[6] = 0;
      pbVar25[7] = 0;
      pbVar25[8] = 1;
      pbVar25[9] = 0;
      pbVar25[10] = 0;
      pbVar25[0xb] = 0;
      pbVar25[0xc] = 0;
      pbVar25[0xd] = 0;
      pbVar25[0xe] = 0;
      pbVar25[0xf] = 0;
      *(undefined8 *)(pbVar25 + 0x10) = uVar32;
      *(ulonglong **)(pbVar25 + 0x18) = puVar64;
      *(longlong *)(pbVar25 + 0x20) = lVar63;
      *(undefined8 *)(pbVar25 + 0x28) = uVar61;
      *(longlong *)(pbVar25 + 0x30) = lVar65;
      puVar27 = &UNK_143512890;
      uVar32 = 0;
    }
    lVar28 = puVar58[0xc1];
    *(undefined8 *)param_1 = uVar32;
    *(byte **)(param_1 + 8) = pbVar25;
    *(undefined **)(param_1 + 0x10) = puVar27;
    uVar21 = 1;
code_r0x0001424e9bd8:
    *(undefined1 *)(lVar28 + 0x240) = uVar21;
    return param_1;
  case 0x16:
code_r0x0001424eac25:
    return pbVar25;
  case 0x17:
code_r0x0001424eb845:
    puVar55 = (undefined8 *)puVar17;
    *(int *)pbVar25 = *(int *)pbVar25 + (int)pbVar25;
    bVar29 = (byte)puVar31;
    pbVar25[-0x73] = pbVar25[-0x73] + bVar29;
    uVar66 = (ulonglong)puVar58 & 0xffffffff;
    puVar58 = (undefined8 *)((ulonglong)pbVar25 & 0xffffffff);
    *(byte *)puVar31 = (byte)*puVar31;
    pbVar25 = (byte *)(uVar66 - 0x77);
    bVar22 = *pbVar25;
    *pbVar25 = *pbVar25 + bVar29;
    *in_R10 = (*in_R10 - (char)puVar55) - CARRY1(bVar22,bVar29);
    pcVar7 = *(code **)(uVar66 + 0x4cd18949);
    *(undefined8 *)((longlong)puVar55 + -8) = 0x1424eb85c;
    pbVar25 = (byte *)(*pcVar7)();
    *(int *)(puVar58 + 0x4b) = (int)puVar55;
    pcVar26 = in_R8;
    break;
  case 0x18:
code_r0x0001424eb839:
    puVar51 = (undefined8 *)puVar16;
    pbVar25[-0x77] = pbVar25[-0x77] + (char)puVar31;
    pcVar26 = (char *)((ulonglong)puVar58 & 0xffffffff);
    puVar58 = (undefined8 *)((ulonglong)pbVar25 & 0xffffffff);
    *(byte *)in_RDX = (byte)*in_RDX + (char)pcVar26;
    *pcVar26 = *pcVar26 + (char)pcVar26;
    goto code_r0x0001424eb802;
  case 0x19:
    goto code_r0x0001424eacc8;
  case 0x1a:
    goto code_r0x0001424eacd4;
  case 0x1c:
code_r0x0001424eb842:
    *(int *)(puVar58 + 0x3f) = (int)puVar51;
code_r0x0001424eb802:
    uVar32 = puVar58[0x32];
    *(undefined1 *)(puVar58[0x4d] + 0x12a) = 0;
    puVar58[0x38] = in_RDX;
    puVar58[0x39] = unaff_R12;
    puVar58[0x3a] = uVar32;
    *(undefined1 *)(puVar58 + 0x3b) = 0;
    puVar58[0x49] = in_RDX;
    puVar58[0x40] = in_RDX;
    puVar58[0x3f] = unaff_R12;
    in_RDX = puVar58 + 0x38;
    puVar31 = unaff_RBX;
    puVar55 = puVar51;
    pcVar26 = in_R8;
code_r0x0001424eb852:
    *(undefined8 *)((longlong)puVar55 + -8) = 0x1424eb857;
    pbVar25 = (byte *)pdb_14170d0a0(puVar31);
    break;
  case 0x1d:
code_r0x0001424ead6c:
    *(undefined4 *)(param_1 + 0xb0) = uVar23;
    *(undefined4 *)(param_1 + 0xb4) = uVar70;
    *(undefined4 *)(param_1 + 0xb8) = in_XMM1_Dc;
    *(undefined4 *)(param_1 + 0xbc) = in_XMM1_Dd;
    puVar51 = (undefined8 *)puVar50;
code_r0x0001424ead73:
    *(undefined4 *)(unaff_R14 + 0x18) = uVar71;
    *(undefined4 *)((longlong)unaff_R14 + 0xc4) = uVar72;
    *(undefined4 *)(unaff_R14 + 0x19) = in_XMM2_Dc;
    *(undefined4 *)((longlong)unaff_R14 + 0xcc) = in_XMM2_Dd;
    unaff_RBX = unaff_R14 + 0x1a;
    *(int *)(unaff_R14 + 0x1a) = (int)unaff_R14[0x10];
    *(undefined4 *)((longlong)unaff_R14 + 0xd4) = *(undefined4 *)((longlong)unaff_R14 + 0x84);
    *(int *)(unaff_R14 + 0x1b) = (int)unaff_R14[0x11];
    *(undefined4 *)((longlong)unaff_R14 + 0xdc) = *(undefined4 *)((longlong)unaff_R14 + 0x8c);
    *(int *)(unaff_R14 + 0x1c) = (int)unaff_R14[0x12];
    *(undefined4 *)((longlong)unaff_R14 + 0xe4) = *(undefined4 *)((longlong)unaff_R14 + 0x94);
    *(int *)(unaff_R14 + 0x1d) = (int)unaff_R14[0x13];
    *(undefined4 *)((longlong)unaff_R14 + 0xec) = *(undefined4 *)((longlong)unaff_R14 + 0x9c);
    in_RDX = (ulonglong *)unaff_R14[0x14];
    uVar66 = unaff_R14[0x15];
    *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eadb8;
    lVar28 = pdb_141710600(unaff_RBX,in_RDX,uVar66);
    if (lVar28 != 1) {
      lVar28 = puVar58[0x4d];
      *(ulonglong **)(lVar28 + 0x100) = in_RDX;
      *(undefined1 *)(lVar28 + 0x129) = 0;
      uVar32 = *(undefined8 *)(lVar28 + 0xb0);
      lVar65 = *(longlong *)(lVar28 + 0xb8);
      lVar28 = *(longlong *)(lVar28 + 0xc0);
      puVar58[0x2c] = 0;
      puVar58[0x38] = lVar65;
      puVar58[0x39] = lVar65;
      puVar58[0x3a] = uVar32;
      puVar58[0x3b] = lVar28 * 0x10 + lVar65;
      puVar58[0x3c] = unaff_RBX;
      puVar58[0x3d] = puVar58 + 0x2c;
      *(undefined1 *)((longlong)puVar58 + 0x267) = 1;
      in_RDX = puVar58 + 0x38;
      *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eafa6;
      pdb_1415e33c0(puVar58 + 0x30);
      lVar28 = puVar58[0x2c];
      if (lVar28 == 0) {
        lVar28 = puVar58[0x31];
        if (SBORROW8(0,puVar58[0x30])) goto code_r0x0001424eb09e;
        uVar32 = puVar58[0x32];
        lVar65 = puVar58[0x4d];
        *(undefined8 *)(lVar65 + 0x108) = puVar58[0x30];
        *(longlong *)(lVar65 + 0x110) = lVar28;
        *(undefined8 *)(lVar65 + 0x118) = uVar32;
        *(longlong *)(lVar65 + 0x120) = lVar65 + 0x108;
        lVar28 = *(longlong *)(*(longlong *)(lVar65 + 0x100) + 0xa8);
        lVar63 = *(longlong *)(*(longlong *)(lVar65 + 0x100) + 0xb0);
        puVar58[0x38] = lVar28;
        puVar58[0x39] = lVar63 * 0x3c + lVar28;
        puVar58[0x3a] = lVar65 + 0x120;
        *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb22e;
        pdb_141603de0(puVar58 + 0x2c,puVar58 + 0x38);
        lVar28 = puVar58[0x4d];
        *(undefined1 *)(lVar28 + 299) = 1;
        uVar66 = *(ulonglong *)(*(longlong *)(lVar28 + 0x100) + 0x38);
        uVar35 = uVar66 * 0xc;
        if (0xaaaaaaaaaaaaaaa < uVar66) {
          uVar32 = 0;
code_r0x0001424eb269:
          *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb274;
          pdb_142dc7e2a(uVar32,uVar35);
          goto code_r0x0001424eb8d4;
        }
        uVar61 = *(undefined8 *)(*(longlong *)(lVar28 + 0x100) + 0x30);
        if (uVar35 == 0) {
          puVar58[0x4a] = 4;
          puVar58[0x48] = 0;
        }
        else {
          *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb288;
          pdb_14007ee60();
          uVar32 = 4;
          *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb29b;
          pbVar25 = pub_1406abab0(uVar35,4);
          puVar58[0x4a] = pbVar25;
          if (pbVar25 == (byte *)0x0) goto code_r0x0001424eb269;
          puVar58[0x48] = uVar66;
          lVar28 = puVar58[0x4d];
        }
        if (uVar66 != 0) {
          uVar32 = puVar58[0x4a];
          *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb2e5;
          pub_142e32760(uVar32,uVar61,uVar35);
        }
        uVar35 = *(ulonglong *)(*(longlong *)(lVar28 + 0x100) + 0x68);
        uVar1 = uVar35 * 0xc;
        if (0xaaaaaaaaaaaaaaa < uVar35) {
          uVar32 = 0;
code_r0x0001424eb30f:
          *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb31a;
          pdb_142dc7e2a(uVar32,uVar1);
          goto code_r0x0001424eb8d4;
        }
        uVar61 = *(undefined8 *)(*(longlong *)(lVar28 + 0x100) + 0x60);
        puVar58[0x35] = uVar35;
        if (uVar1 == 0) {
          puVar58[0x4b] = 4;
          puVar58[0x49] = 0;
        }
        else {
          *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb335;
          pdb_14007ee60();
          uVar32 = 4;
          *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb348;
          pbVar25 = pub_1406abab0(uVar1,4);
          puVar58[0x4b] = pbVar25;
          if (pbVar25 == (byte *)0x0) goto code_r0x0001424eb30f;
          uVar35 = puVar58[0x35];
          puVar58[0x49] = uVar35;
          lVar28 = puVar58[0x4d];
        }
        if (uVar35 != 0) {
          uVar32 = puVar58[0x4b];
          *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb399;
          pub_142e32760(uVar32,uVar61,uVar1);
        }
        uVar35 = *(ulonglong *)(*(longlong *)(lVar28 + 0x100) + 0x50);
        uVar1 = uVar35 * 0xc;
        if (0xaaaaaaaaaaaaaaa < uVar35) {
          uVar32 = 0;
code_r0x0001424eb3c3:
          *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb3ce;
          pdb_142dc7e2a(uVar32,uVar1);
          goto code_r0x0001424eb8d4;
        }
        uVar32 = *(undefined8 *)(*(longlong *)(lVar28 + 0x100) + 0x48);
        if (uVar1 == 0) {
          puVar58[0x45] = 4;
          puVar58[0x42] = 0;
        }
        else {
          puVar58[0x46] = uVar32;
          *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb3e9;
          pdb_14007ee60();
          uVar32 = 4;
          *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb3fc;
          pbVar25 = pub_1406abab0(uVar1,4);
          puVar58[0x45] = pbVar25;
          if (pbVar25 == (byte *)0x0) goto code_r0x0001424eb3c3;
          puVar58[0x42] = uVar35;
          lVar28 = puVar58[0x4d];
          uVar32 = puVar58[0x46];
        }
        if (uVar35 != 0) {
          uVar61 = puVar58[0x45];
          *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb44a;
          pub_142e32760(uVar61,uVar32,uVar1);
        }
        uVar60 = *(ulonglong *)(*(longlong *)(lVar28 + 0x100) + 0x80);
        uVar1 = uVar60 * 8;
        if (0x7ffffffffffffffc < uVar1 || uVar60 >> 0x3d != 0) {
          uVar32 = 0;
code_r0x0001424eb482:
          *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb48d;
          pdb_142dc7e2a(uVar32,uVar1);
          goto code_r0x0001424eb8d4;
        }
        uVar32 = *(undefined8 *)(*(longlong *)(lVar28 + 0x100) + 0x78);
        puVar58[0x46] = uVar60;
        if (uVar1 == 0) {
          puVar58[0x43] = 4;
          puVar58[0x36] = 0;
        }
        else {
          puVar58[0x47] = uVar32;
          *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb4af;
          pdb_14007ee60();
          uVar32 = 4;
          *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb4c2;
          pbVar25 = pub_1406abab0(uVar1,4);
          puVar58[0x43] = pbVar25;
          if (pbVar25 == (byte *)0x0) goto code_r0x0001424eb482;
          uVar60 = puVar58[0x46];
          puVar58[0x36] = uVar60;
          lVar28 = puVar58[0x4d];
          uVar32 = puVar58[0x47];
        }
        if (uVar60 != 0) {
          uVar61 = puVar58[0x43];
          *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb517;
          pub_142e32760(uVar61,uVar32,uVar1);
        }
        uVar60 = *(ulonglong *)(*(longlong *)(lVar28 + 0x100) + 0x98);
        uVar1 = uVar60 * 4;
        if (0x7ffffffffffffffc < uVar1 || uVar60 >> 0x3e != 0) {
          uVar32 = 0;
code_r0x0001424eb54f:
          *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb55a;
          pdb_142dc7e2a(uVar32,uVar1);
          goto code_r0x0001424eb8d4;
        }
        uVar32 = *(undefined8 *)(*(longlong *)(lVar28 + 0x100) + 0x90);
        puVar58[0x47] = uVar60;
        if (uVar1 == 0) {
          puVar58[0x37] = 4;
          puVar58[0x2f] = 0;
        }
        else {
          puVar58[0x44] = uVar32;
          *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb57f;
          pdb_14007ee60();
          uVar32 = 4;
          *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb592;
          pbVar25 = pub_1406abab0(uVar1,4);
          puVar58[0x37] = pbVar25;
          if (pbVar25 == (byte *)0x0) goto code_r0x0001424eb54f;
          uVar60 = puVar58[0x47];
          puVar58[0x2f] = uVar60;
          lVar28 = puVar58[0x4d];
          uVar32 = puVar58[0x44];
        }
        uVar61 = 0;
        if (uVar60 != 0) {
          uVar61 = puVar58[0x37];
          *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb5e7;
          pub_142e32760(uVar61,uVar32,uVar1);
          uVar61 = puVar58[0x47];
        }
        uVar60 = *(ulonglong *)(*(longlong *)(lVar28 + 0x100) + 0x20);
        uVar1 = uVar60 * 4;
        uVar32 = puVar58[0x46];
        if (0x7ffffffffffffffc < uVar1 || uVar60 >> 0x3e != 0) {
          uVar32 = 0;
code_r0x0001424eb629:
          *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb631;
          pdb_142dc7e2a(uVar32,uVar1);
code_r0x0001424eb8d4:
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
        uVar34 = *(undefined8 *)(*(longlong *)(lVar28 + 0x100) + 0x18);
        if (uVar1 == 0) {
          pbVar25 = (byte *)0x4;
          uVar62 = 0;
          uVar33 = puVar58[0x35];
        }
        else {
          puVar58[0x44] = uVar34;
          *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb64c;
          pdb_14007ee60();
          *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb659;
          pbVar25 = pub_1406abab0(uVar1,4);
          uVar32 = 4;
          if (pbVar25 == (byte *)0x0) goto code_r0x0001424eb629;
          uVar33 = puVar58[0x35];
          uVar32 = puVar58[0x46];
          uVar61 = puVar58[0x47];
          uVar34 = puVar58[0x44];
          uVar62 = uVar60;
        }
        if (uVar60 != 0) {
          puVar58[0x44] = uVar62;
          *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb6b1;
          pub_142e32760(pbVar25,uVar34,uVar1);
          uVar62 = puVar58[0x44];
          uVar61 = puVar58[0x47];
          uVar32 = puVar58[0x46];
          uVar33 = puVar58[0x35];
        }
        puVar58[0x10] = puVar58[0x48];
        puVar58[0x11] = puVar58[0x4a];
        puVar58[0x12] = uVar66;
        puVar58[0x13] = puVar58[0x49];
        puVar58[0x14] = puVar58[0x4b];
        puVar58[0x15] = uVar33;
        puVar58[0x16] = puVar58[0x42];
        puVar58[0x17] = puVar58[0x45];
        puVar58[0x18] = uVar35;
        puVar58[0x19] = puVar58[0x36];
        puVar58[0x1a] = puVar58[0x43];
        puVar58[0x1b] = uVar32;
        puVar58[0x1c] = puVar58[0x2f];
        puVar58[0x1d] = puVar58[0x37];
        puVar58[0x1e] = uVar61;
        *(undefined1 *)(puVar58 + 0x22) = 1;
        puVar58[0x1f] = uVar62;
        puVar58[0x20] = pbVar25;
        puVar58[0x21] = uVar60;
        lVar28 = puVar58[0x4d];
        *(undefined1 *)(lVar28 + 299) = 0;
        puVar58[0x3a] = puVar58[0x2e];
        *(undefined4 *)(puVar58 + 0x38) = *(undefined4 *)(puVar58 + 0x2c);
        *(undefined4 *)((longlong)puVar58 + 0x1c4) = *(undefined4 *)((longlong)puVar58 + 0x164);
        *(undefined4 *)(puVar58 + 0x39) = *(undefined4 *)(puVar58 + 0x2d);
        *(undefined4 *)((longlong)puVar58 + 0x1cc) = *(undefined4 *)((longlong)puVar58 + 0x16c);
        uVar21 = *(undefined1 *)(lVar28 + 200);
        *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb7e7;
        pdb_140cf7870(puVar58 + 0x30,puVar58 + 0x10,puVar58 + 0x38,uVar21);
        in_RDX = (ulonglong *)puVar58[0x30];
        unaff_R12 = (undefined *)puVar58[0x31];
        if (!SBORROW8(0,(longlong)in_RDX)) goto code_r0x0001424eb802;
        goto code_r0x0001424eaee4;
      }
      *(undefined1 *)((longlong)puVar58 + 0x267) = 0;
      *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eafca;
      pdb_140966f40(puVar58 + 0x30);
code_r0x0001424eb09e:
      *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb0a6;
      unaff_R12 = (undefined *)pdb_142deaf00(lVar28);
      lVar28 = puVar58[0x4d];
      plVar6 = *(longlong **)(lVar28 + 0x100);
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 != 0) goto code_r0x0001424eb0cb;
      goto code_r0x0001424eb0be;
    }
code_r0x0001424eadc3:
    *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eadcb;
    unaff_R12 = (undefined *)pdb_142deaf00(in_RDX);
    goto code_r0x0001424eb0cb;
  case 0x1e:
code_r0x0001424ec0cb:
    return pbVar25;
  case 0x1f:
code_r0x0001424ec75e:
    bVar22 = (byte)pbVar25;
    *pbVar25 = *pbVar25 + bVar22;
    bVar30 = (byte)puVar31;
    pbVar25[-0x39] = pbVar25[-0x39] + bVar30;
    *(byte *)puVar31 = (byte)*puVar31 | bVar22;
    *pbVar25 = *pbVar25 + bVar22;
    pbVar67 = (byte *)((longlong)puVar31 * 5 + 0x78);
    bVar22 = *pbVar67;
    *pbVar67 = *pbVar67 + bVar30;
    pbVar67 = (byte *)((longlong)puVar31 * 5 + 0x70);
    bVar29 = *pbVar67;
    bVar2 = *pbVar67;
    *pbVar67 = bVar2 + bVar30 + CARRY1(bVar22,bVar30);
    pbVar67 = pbVar25 + -0x77;
    *pbVar67 = (*pbVar67 - bVar30) -
               (CARRY1(bVar29,bVar30) || CARRY1(bVar2 + bVar30,CARRY1(bVar22,bVar30)));
    if ((char)*pbVar67 < '\0') {
code_r0x0001424ec795:
                    /* WARNING: Subroutine does not return */
      *(undefined8 *)(puVar56 + -8) = 0x1424ec7a4;
      pdb_142dc7e11(8,0x30);
    }
    goto code_r0x0001424ec775;
  case 0x20:
code_r0x0001424ec752:
    puVar55 = (undefined8 *)puVar15;
    pcVar26 = (char *)(ulonglong)(((int)in_R8 - (int)param_1) - (uint)bVar68);
code_r0x0001424ec755:
    if (pbVar25 == (byte *)0x0) {
      puVar58[0x36] = unaff_R15;
      puVar58[0x38] = unaff_R14;
      puVar56 = (undefined1 *)puVar55;
      goto code_r0x0001424ec795;
    }
    pbVar25[0] = 1;
    pbVar25[1] = 0;
    pbVar25[2] = 0;
    pbVar25[3] = 0;
    pbVar25[4] = 0;
    pbVar25[5] = 0;
    pbVar25[6] = 0;
    pbVar25[7] = 0;
    pbVar25[8] = 1;
    pbVar25[9] = 0;
    pbVar25[10] = 0;
    pbVar25[0xb] = 0;
    pbVar25[0xc] = 0;
    pbVar25[0xd] = 0;
    pbVar25[0xe] = 0;
    pbVar25[0xf] = 0;
    in_RDX = unaff_R14;
code_r0x0001424ec769:
    *(ulonglong **)(pbVar25 + 0x10) = unaff_R15;
    *(ulonglong **)(pbVar25 + 0x18) = in_RDX;
code_r0x0001424ec771:
    *(char **)(pbVar25 + 0x20) = pcVar26;
code_r0x0001424ec775:
    pbVar25[0x28] = 0;
    puVar36 = (undefined8 *)&UNK_143512870;
    uVar32 = 0;
code_r0x0001424ec4dd:
    *(undefined8 *)param_1 = uVar32;
    *(byte **)(param_1 + 8) = pbVar25;
    *(undefined8 **)(param_1 + 0x10) = puVar36;
    bVar22 = 1;
code_r0x0001424ec4ea:
    *(byte *)(unaff_RBX + 0xe) = bVar22;
    return param_1;
  case 0x21:
    goto code_r0x0001424ec13f;
  }
code_r0x0001424eb858:
  puVar58[0x4b] = unaff_R12;
  lVar28 = puVar58[0x4d];
  *(byte **)(lVar28 + 0xf0) = pbVar25;
  *(ulonglong **)(lVar28 + 0xf8) = in_RDX;
  puVar51 = puVar55;
  in_R8 = pcVar26;
code_r0x0001424eade9:
  pcVar7 = (code *)in_RDX[3];
  *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eadf7;
  (*pcVar7)(puVar58 + 0x38,pbVar25,in_R8);
  lVar28 = puVar58[0x38];
  if (lVar28 == 2) {
    lVar28 = puVar58[0x4d];
    *(undefined1 *)(lVar28 + 0x128) = 3;
    param_1[0] = 2;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    uVar21 = 3;
  }
  else {
    unaff_R12 = (undefined *)puVar58[0x39];
    in_R8 = (char *)puVar58[0x3a];
    unaff_RBX = (ulonglong *)puVar58[0x3b];
    plVar6 = (longlong *)puVar58[0x3c];
    puVar58[0x4a] = *(undefined8 *)(puVar58[0x4d] + 0xf0);
    puVar55 = *(undefined8 **)(puVar58[0x4d] + 0xf8);
    puVar58[0x48] = puVar55;
    pcVar7 = (code *)*puVar55;
    if (pcVar7 != (code *)0x0) {
      uVar32 = puVar58[0x4a];
      *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eae71;
      (*pcVar7)(uVar32);
    }
    pbVar25 = (byte *)puVar58[0x4a];
    in_RDX = *(ulonglong **)(puVar58[0x48] + 8);
    if (in_RDX != (ulonglong *)0x0) {
      uVar66 = *(ulonglong *)(puVar58[0x48] + 0x10);
      *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eae92;
      pub_1406abac0(pbVar25,(ulonglong)in_RDX,uVar66);
    }
    if ((int)lVar28 == 1) {
      puVar58[0x38] = unaff_R12;
      puVar58[0x39] = in_R8;
      puVar58[0x3a] = unaff_RBX;
      puVar58[0x3b] = plVar6;
      puVar58[0x40] = puVar58[0x49];
      puVar58[0x3f] = puVar58[0x4b];
      *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eaee0;
      unaff_R12 = (undefined *)pdb_142deada0(puVar58 + 0x38);
code_r0x0001424eaee4:
      lVar28 = puVar58[0x4d];
      *(undefined2 *)(lVar28 + 0x12a) = 0;
      *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eaf00;
      pdb_140966f40(lVar28 + 0x108);
      lVar28 = puVar58[0x4d];
      plVar6 = *(longlong **)(lVar28 + 0x100);
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
code_r0x0001424eb0be:
        *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb0ca;
        pdb_140c7a060(lVar28 + 0x100);
      }
code_r0x0001424eb0cb:
      lVar28 = puVar58[0x4d];
      *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb0de;
      pdb_14098a860(lVar28 + 0xd0);
      lVar28 = puVar58[0x4d];
      if (*(char *)(lVar28 + 0x129) != '\0') {
        in_RDX = (ulonglong *)0x0;
        if (*(longlong *)(lVar28 + 0xb0) != 0) {
          pbVar25 = *(byte **)(lVar28 + 0xb8);
          in_RDX = (ulonglong *)(*(longlong *)(lVar28 + 0xb0) << 4);
          *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb112;
          pub_1406abac0(pbVar25,(ulonglong)in_RDX,0x10);
        }
      }
      *(undefined1 *)(lVar28 + 0x129) = 0;
      bVar68 = true;
    }
    else {
      puVar58[0x30] = in_R8;
      puVar58[0x31] = unaff_RBX;
      puVar58[0x32] = plVar6;
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        in_RDX = (ulonglong *)puVar58[0x49];
        puVar58[0x40] = in_RDX;
        puVar58[0x3f] = puVar58[0x4b];
        *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb013;
        pdb_140cd0de0(puVar58 + 0x32);
      }
      lVar28 = puVar58[0x4d];
      *(undefined2 *)(lVar28 + 0x12a) = 0;
      *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb030;
      pdb_140966f40(lVar28 + 0x108);
      plVar6 = *(longlong **)(puVar58[0x4d] + 0x100);
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        lVar28 = puVar58[0x4d];
        *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb058;
        pdb_140c7a060(lVar28 + 0x100);
      }
      lVar28 = puVar58[0x4d];
      *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb06c;
      pdb_14098a860(lVar28 + 0xd0);
      lVar28 = puVar58[0x4d];
      *(undefined1 *)(lVar28 + 0x129) = 0;
      bVar68 = false;
    }
    *(undefined1 *)(lVar28 + 0x128) = 1;
    uVar32 = puVar58[0x41];
    *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb131;
    pdb_1424e6650(uVar32);
    if (bVar68) {
      *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb13f;
      pbVar25 = (byte *)pdb_142dc6590(unaff_R12);
      uVar32 = 1;
    }
    else {
      *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb14c;
      pdb_14007ee60();
      *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb15b;
      pbVar25 = pub_1406abab0(0x20,0x10);
      if (pbVar25 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)((longlong)puVar51 + -8) = 0x1424eb88e;
        pdb_142dc7e11(0x10,0x20);
      }
      pbVar25[0] = 1;
      pbVar25[1] = 0;
      pbVar25[2] = 0;
      pbVar25[3] = 0;
      pbVar25[4] = 0;
      pbVar25[5] = 0;
      pbVar25[6] = 0;
      pbVar25[7] = 0;
      pbVar25[8] = 1;
      pbVar25[9] = 0;
      pbVar25[10] = 0;
      pbVar25[0xb] = 0;
      pbVar25[0xc] = 0;
      pbVar25[0xd] = 0;
      pbVar25[0xe] = 0;
      pbVar25[0xf] = 0;
      *(char **)(pbVar25 + 0x10) = in_R8;
      *(ulonglong **)(pbVar25 + 0x18) = unaff_RBX;
      in_RDX = (ulonglong *)&UNK_1435128b0;
      uVar32 = 0;
    }
    *(undefined8 *)param_1 = uVar32;
    *(byte **)(param_1 + 8) = pbVar25;
    *(ulonglong **)(param_1 + 0x10) = in_RDX;
    uVar21 = 1;
    lVar28 = puVar58[0x4d];
  }
  *(undefined1 *)(lVar28 + 0x130) = uVar21;
  return param_1;
code_r0x0001424eacd4:
  unaff_RBX = (ulonglong *)(ulonglong)((int)puVar58 - 0x60);
  puVar55 = (undefined8 *)puVar49;
  pcVar26 = in_R8;
  goto code_r0x0001424eacd7;
code_r0x0001424e9da7:
  puVar58[0x78] = uVar61;
  puVar58[0x79] = uVar34;
  puVar58[0x7a] = uVar33;
  plVar6 = *(longlong **)(puVar58[0xc1] + 0x1c8);
  lVar28 = plVar6[2];
  if (lVar28 == *plVar6) {
    *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9ddb;
    pdb_142d91ef0(plVar6);
  }
  lVar65 = plVar6[1];
  *(undefined8 *)(lVar65 + 8 + lVar28 * 0x10) = uVar34;
  *(undefined8 *)(lVar65 + lVar28 * 0x10) = uVar61;
  plVar6[2] = lVar28 + 1;
  plVar6 = (longlong *)puVar58[0x7a];
  LOCK();
  *plVar6 = *plVar6 + -1;
  UNLOCK();
  if (*plVar6 == 0) {
    *(undefined8 *)((longlong)puVar55 + -8) = 0x1424e9e10;
    pdb_140cd0de0(puVar58 + 0x7a);
  }
  lVar28 = puVar58[0xc1];
  puVar37 = *(undefined8 **)(lVar28 + 0x208);
  puVar36 = *(undefined8 **)(lVar28 + 0x218);
  goto code_r0x0001424e9c7a;
code_r0x0001424e992f:
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar43 + -8) = 0x1424e993b;
  pdb_142dc8570(&UNK_143512858);
}

