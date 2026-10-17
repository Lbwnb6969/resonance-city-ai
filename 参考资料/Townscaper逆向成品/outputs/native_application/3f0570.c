// RVA 0x3f0570 | Placemaker.VoxelBounceEffect$$AppendBuffer
// PDB: VoxelBounceEffect_AppendBuffer_m6F0D7456AE638669EA4C81FEB8728C147F7FCB16
// Body: [[103f0570, 103f06bf]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10664490 RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA
// 10675240 Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111
// 10a39ea0 Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E
// 10a3a160 CommandBuffer_ClearRenderTarget_mD911CD9DACD86BB1A9734235E6D55AF9BE844CA0
// 10a3a220 CommandBuffer_DrawMesh_m7FF820326506DF47814927FB3CF2FA6A350F3ACC
// 10a3a820 CommandBuffer_SetRenderTarget_mCDFEB57580AF2EC11E02BA87EFB6CF18AD3AC840
// 10a45eb0 Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596
// 10a46da0 Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE
// 10a47b00 Mesh_SetColors_m3A1D5B4986EC06E3930617D45A88BA768072FA2F
// 10a482b0 Mesh_SetTriangles_mF74536E3A39AECF33809A7D23AFF54A1CFC37129
// 10a48620 Mesh_SetVertices_m08C90A1665735C09E15E17DE1A8CD9F196762BCD

void __cdecl
VoxelBounceEffect_AppendBuffer_m6F0D7456AE638669EA4C81FEB8728C147F7FCB16
          (VoxelBounceEffect_t9A0497D3BDA6C41FE20D42092A7FC74B8253BE98 *param_1,
          CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *param_2,MethodInfo *param_3)

{
  undefined4 uVar1;
  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *pMVar2;
  RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 RVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 *pRVar9;
  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *pCVar10;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *pMVar11;
  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 local_60;
  undefined1 local_20 [28];

  if (0 < param_1->___count_8) {
    param_1->___count_8 = 0;
    if (param_1->___voxelBounceMesh_14 == (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0)
    goto LAB_103f06bb;
    Mesh_Clear_m7500ECE6209E14CC750CB16B48301B8D2A57ACCE
              (param_1->___voxelBounceMesh_14,(MethodInfo *)0x0);
    if (param_1->___voxelBounceMesh_14 == (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0)
    goto LAB_103f06bb;
    Mesh_SetVertices_m08C90A1665735C09E15E17DE1A8CD9F196762BCD
              (param_1->___voxelBounceMesh_14,param_1->___verts_11,(MethodInfo *)0x0);
    if (param_1->___voxelBounceMesh_14 == (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0)
    goto LAB_103f06bb;
    Mesh_SetColors_m3A1D5B4986EC06E3930617D45A88BA768072FA2F
              (param_1->___voxelBounceMesh_14,param_1->___colors_12,(MethodInfo *)0x0);
    if (param_1->___voxelBounceMesh_14 == (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)0x0)
    goto LAB_103f06bb;
    Mesh_SetTriangles_mF74536E3A39AECF33809A7D23AFF54A1CFC37129
              (param_1->___voxelBounceMesh_14,param_1->___tris_13,0,(MethodInfo *)0x0);
  }
  pRVar9 = RenderTargetIdentifier_op_Implicit_mFF9B98B136B3AB4E9413777F931392D02AA7A8FA
                     ((RenderTargetIdentifier_t70F41F3016FFCC4AAF4D7C57F280818114534C13 *)local_20,
                      (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)param_1->___tex_7,
                      (MethodInfo *)0x0);
  if (param_2 != (CommandBuffer_t25CD231BD3E822660339DB7D0E8F8ED6B7DBEA29 *)0x0) {
    uVar1 = pRVar9->___m_CubeFace_5;
    uVar4 = pRVar9->___m_Type_0;
    uVar5 = pRVar9->___m_NameID_1;
    uVar6 = pRVar9->___m_InstanceID_2;
    uVar7 = pRVar9->___m_BufferPointer_3;
    uVar8 = pRVar9->___m_MipLevel_4;
    RVar3.___m_MipLevel_4 = uVar8;
    RVar3.___m_BufferPointer_3 = uVar7;
    RVar3.___m_InstanceID_2 = uVar6;
    RVar3.___m_NameID_1 = uVar5;
    RVar3.___m_Type_0 = uVar4;
    RVar3.___m_CubeFace_5 = uVar1;
    RVar3.___m_DepthSlice_6 = pRVar9->___m_DepthSlice_6;
    CommandBuffer_SetRenderTarget_mCDFEB57580AF2EC11E02BA87EFB6CF18AD3AC840
              (param_2,RVar3,(MethodInfo *)0x0);
    pCVar10 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E
                        ((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(local_20 + 0xc),
                         (MethodInfo *)0x0);
    pCVar10 = (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)
              Vector4_op_Multiply_m4B615DCAD6D77FE276AC56F17EA3ED0DCD942111
                        ((Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 *)(local_20 + 0xc),
                         (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7)*pCVar10,0.5,
                         (MethodInfo *)0x0);
    CommandBuffer_ClearRenderTarget_mD911CD9DACD86BB1A9734235E6D55AF9BE844CA0
              (param_2,true,true,*pCVar10,(MethodInfo *)0x0);
    pMVar2 = param_1->___voxelBounceMesh_14;
    pMVar11 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596
                        (&local_60,(MethodInfo *)0x0);
    CommandBuffer_DrawMesh_m7FF820326506DF47814927FB3CF2FA6A350F3ACC
              (param_2,pMVar2,*pMVar11,param_1->___material_6,(MethodInfo *)0x0);
    return;
  }
LAB_103f06bb:
                    /* WARNING: Subroutine does not return */
  il2cpp_codegen_raise_null_reference_exception();
}
