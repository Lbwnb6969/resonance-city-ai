
void FUN_1401bb540(longlong param_1)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + 0x2c) != '\0') {
    return;
  }
  FUN_1401bb450();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

