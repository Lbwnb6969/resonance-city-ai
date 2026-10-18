
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140151610(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = _DAT_143fcd428;
  if ((_DAT_143fcd428 == 0) && (DAT_143fcd3f6 == '\0')) {
    lVar1 = func_0x000142a8c93e(0x150);
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = FUN_140127e80(lVar1);
    }
  }
  _DAT_143fcd428 = lVar2;
  FUN_140159460(_DAT_143fcd428,0x143fcd508,2,&UNK_142c79980,0x117,
                "ComCXmlSerializerWriter::getHeaderSize",
                "Header buffer isn\'t supported for XML serialization");
  return 0;
}

