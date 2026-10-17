// RVA 0x110c930 | FuryStudios.FurySDK.Internal.DotNetStorageRequest$$OnUpdate
// PDB: DotNetStorageRequest_OnUpdate_m66680045442A62E8D5AB9953E7395C11F816F102
// Body: [[1110c930, 1110c9cf]]
// Direct callees:
// 1018eae0 il2cpp_codegen_raise_null_reference_exception
// 10b06160 Task_get_Exception_m53945993385D4031240B0DB2C0585ABBFB8CFA81
// 10b063f0 Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E
// 10b06490 Task_get_IsFaulted_mDA5DABB816C7B86B0B8AA733FBDD07802483B855
// 1110b350 AsyncRequest_Fail_m1EFE7CEE7A95111F75012791117896366D729469

void __cdecl
DotNetStorageRequest_OnUpdate_m66680045442A62E8D5AB9953E7395C11F816F102
          (DotNetStorageRequest_t5568E0D5FA3C2037D59677C45C9BDDCB8DF2E550 *param_1,
          MethodInfo *param_2)

{
  FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *pFVar1;
  bool bVar2;
  AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 *pAVar3;

  if ((param_1->___task_10 != (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)0x0) &&
     (bVar2 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E
                        (param_1->___task_10,(MethodInfo *)0x0), bVar2)) {
    if (param_1->___task_10 != (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)0x0) {
      bVar2 = Task_get_IsFaulted_mDA5DABB816C7B86B0B8AA733FBDD07802483B855
                        (param_1->___task_10,(MethodInfo *)0x0);
      if (bVar2) {
        if (param_1->___task_10 != (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)0x0) {
          pAVar3 = Task_get_Exception_m53945993385D4031240B0DB2C0585ABBFB8CFA81
                             (param_1->___task_10,(MethodInfo *)0x0);
          AsyncRequest_Fail_m1EFE7CEE7A95111F75012791117896366D729469
                    ((AsyncRequest_t7DD8DD6332BB3330D713B40AF56C505FBBA73F12 *)param_1,
                     (Exception_t *)pAVar3,(MethodInfo *)0x0);
          pFVar1 = param_1->___stream_9;
          if (pFVar1 != (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)0x0) {
            (**(code **)(pFVar1->_padding_ + 0x13c))
                      (pFVar1,*(undefined4 *)(pFVar1->_padding_ + 0x140));
            return;
          }
        }
      }
      else {
        pFVar1 = param_1->___stream_9;
        if (pFVar1 != (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)0x0) {
          (**(code **)(pFVar1->_padding_ + 0x13c))
                    (pFVar1,*(undefined4 *)(pFVar1->_padding_ + 0x140));
          (**(code **)(param_1->_padding_ + 0x154))
                    (param_1,*(undefined4 *)(param_1->_padding_ + 0x158));
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_codegen_raise_null_reference_exception();
  }
  return;
}
