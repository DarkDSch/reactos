/* Machine generated, don't edit */

#ifdef __cplusplus
#define EXTERN_C extern "C"
#else
#define EXTERN_C
#endif

EXTERN_C static __inline__ __attribute__((regparm(2)))void*ZwRosSystemServiceThunk(long n,void*a){void*ret;__asm__("int $0x2E":"=a"(ret):"a"(n),"d"(a));return ret;}
EXTERN_C void*__stdcall ZwAcceptConnectPort(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;return ZwRosSystemServiceThunk(0,&a0);}
EXTERN_C void*__stdcall ZwAccessCheck(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6,void*a7){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;(void)a7;return ZwRosSystemServiceThunk(1,&a0);}
EXTERN_C void*__stdcall ZwAccessCheckAndAuditAlarm(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6,void*a7,void*a8,void*a9,void*a10){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;(void)a7;(void)a8;(void)a9;(void)a10;return ZwRosSystemServiceThunk(2,&a0);}
EXTERN_C void*__stdcall ZwAddAtom(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(3,&a0);}
EXTERN_C void*__stdcall ZwAddBootEntry(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(4,&a0);}
EXTERN_C void*__stdcall ZwAdjustGroupsToken(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;return ZwRosSystemServiceThunk(5,&a0);}
EXTERN_C void*__stdcall ZwAdjustPrivilegesToken(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;return ZwRosSystemServiceThunk(6,&a0);}
EXTERN_C void*__stdcall ZwAlertResumeThread(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(7,&a0);}
EXTERN_C void*__stdcall ZwAlertThread(void*a0){return ZwRosSystemServiceThunk(8,&a0);}
EXTERN_C void*__stdcall ZwAllocateLocallyUniqueId(void*a0){return ZwRosSystemServiceThunk(9,&a0);}
EXTERN_C void*__stdcall ZwAllocateUuids(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(10,&a0);}
EXTERN_C void*__stdcall ZwAllocateVirtualMemory(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;return ZwRosSystemServiceThunk(11,&a0);}
EXTERN_C void*__stdcall ZwAssignProcessToJobObject(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(12,&a0);}
EXTERN_C void*__stdcall ZwCallbackReturn(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(13,&a0);}
EXTERN_C void*__stdcall ZwCancelIoFile(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(14,&a0);}
EXTERN_C void*__stdcall ZwCancelTimer(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(15,&a0);}
EXTERN_C void*__stdcall ZwClearEvent(void*a0){return ZwRosSystemServiceThunk(16,&a0);}
EXTERN_C void*__stdcall ZwClose(void*a0){return ZwRosSystemServiceThunk(17,&a0);}
EXTERN_C void*__stdcall ZwCloseObjectAuditAlarm(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(18,&a0);}
EXTERN_C void*__stdcall ZwCompleteConnectPort(void*a0){return ZwRosSystemServiceThunk(19,&a0);}
EXTERN_C void*__stdcall ZwConnectPort(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6,void*a7){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;(void)a7;return ZwRosSystemServiceThunk(20,&a0);}
EXTERN_C void*__stdcall ZwContinue(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(21,&a0);}
EXTERN_C void*__stdcall ZwCreateDirectoryObject(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(22,&a0);}
EXTERN_C void*__stdcall ZwCreateEvent(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(23,&a0);}
EXTERN_C void*__stdcall ZwCreateEventPair(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(24,&a0);}
EXTERN_C void*__stdcall ZwCreateFile(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6,void*a7,void*a8,void*a9,void*a10){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;(void)a7;(void)a8;(void)a9;(void)a10;return ZwRosSystemServiceThunk(25,&a0);}
EXTERN_C void*__stdcall ZwCreateIoCompletion(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(26,&a0);}
EXTERN_C void*__stdcall ZwCreateJobObject(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(27,&a0);}
EXTERN_C void*__stdcall ZwCreateKey(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;return ZwRosSystemServiceThunk(28,&a0);}
EXTERN_C void*__stdcall ZwCreateMailslotFile(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6,void*a7){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;(void)a7;return ZwRosSystemServiceThunk(29,&a0);}
EXTERN_C void*__stdcall ZwCreateMutant(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(30,&a0);}
EXTERN_C void*__stdcall ZwCreateNamedPipeFile(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6,void*a7,void*a8,void*a9,void*a10,void*a11,void*a12,void*a13){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;(void)a7;(void)a8;(void)a9;(void)a10;(void)a11;(void)a12;(void)a13;return ZwRosSystemServiceThunk(31,&a0);}
EXTERN_C void*__stdcall ZwCreatePagingFile(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(32,&a0);}
EXTERN_C void*__stdcall ZwCreatePort(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(33,&a0);}
EXTERN_C void*__stdcall ZwCreateProcess(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6,void*a7){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;(void)a7;return ZwRosSystemServiceThunk(34,&a0);}
EXTERN_C void*__stdcall ZwCreateProfile(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6,void*a7,void*a8){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;(void)a7;(void)a8;return ZwRosSystemServiceThunk(35,&a0);}
EXTERN_C void*__stdcall ZwCreateSection(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;return ZwRosSystemServiceThunk(36,&a0);}
EXTERN_C void*__stdcall ZwCreateSemaphore(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(37,&a0);}
EXTERN_C void*__stdcall ZwCreateSymbolicLinkObject(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(38,&a0);}
EXTERN_C void*__stdcall ZwCreateThread(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6,void*a7){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;(void)a7;return ZwRosSystemServiceThunk(39,&a0);}
EXTERN_C void*__stdcall ZwCreateTimer(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(40,&a0);}
EXTERN_C void*__stdcall ZwCreateToken(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6,void*a7,void*a8,void*a9,void*a10,void*a11,void*a12){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;(void)a7;(void)a8;(void)a9;(void)a10;(void)a11;(void)a12;return ZwRosSystemServiceThunk(41,&a0);}
EXTERN_C void*__stdcall ZwCreateWaitablePort(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(42,&a0);}
EXTERN_C void*__stdcall ZwDelayExecution(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(43,&a0);}
EXTERN_C void*__stdcall ZwDeleteAtom(void*a0){return ZwRosSystemServiceThunk(44,&a0);}
EXTERN_C void*__stdcall ZwDeleteBootEntry(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(45,&a0);}
EXTERN_C void*__stdcall ZwDeleteFile(void*a0){return ZwRosSystemServiceThunk(46,&a0);}
EXTERN_C void*__stdcall ZwDeleteKey(void*a0){return ZwRosSystemServiceThunk(47,&a0);}
EXTERN_C void*__stdcall ZwDeleteObjectAuditAlarm(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(48,&a0);}
EXTERN_C void*__stdcall ZwDeleteValueKey(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(49,&a0);}
EXTERN_C void*__stdcall ZwDeviceIoControlFile(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6,void*a7,void*a8,void*a9){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;(void)a7;(void)a8;(void)a9;return ZwRosSystemServiceThunk(50,&a0);}
EXTERN_C void*__stdcall ZwDisplayString(void*a0){return ZwRosSystemServiceThunk(51,&a0);}
EXTERN_C void*__stdcall ZwDuplicateObject(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;return ZwRosSystemServiceThunk(52,&a0);}
EXTERN_C void*__stdcall ZwDuplicateToken(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;return ZwRosSystemServiceThunk(53,&a0);}
EXTERN_C void*__stdcall ZwEnumerateBootEntries(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(54,&a0);}
EXTERN_C void*__stdcall ZwEnumerateKey(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;return ZwRosSystemServiceThunk(55,&a0);}
EXTERN_C void*__stdcall ZwEnumerateValueKey(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;return ZwRosSystemServiceThunk(56,&a0);}
EXTERN_C void*__stdcall ZwExtendSection(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(57,&a0);}
EXTERN_C void*__stdcall ZwFindAtom(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(58,&a0);}
EXTERN_C void*__stdcall ZwFlushBuffersFile(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(59,&a0);}
EXTERN_C void*__stdcall ZwFlushInstructionCache(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(60,&a0);}
EXTERN_C void*__stdcall ZwFlushKey(void*a0){return ZwRosSystemServiceThunk(61,&a0);}
EXTERN_C void*__stdcall ZwFlushVirtualMemory(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(62,&a0);}
EXTERN_C void*__stdcall ZwFlushWriteBuffer(void){return ZwRosSystemServiceThunk(63,0);}
EXTERN_C void*__stdcall ZwFreeVirtualMemory(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(64,&a0);}
EXTERN_C void*__stdcall ZwFsControlFile(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6,void*a7,void*a8,void*a9){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;(void)a7;(void)a8;(void)a9;return ZwRosSystemServiceThunk(65,&a0);}
EXTERN_C void*__stdcall ZwGetContextThread(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(66,&a0);}
EXTERN_C void*__stdcall ZwGetPlugPlayEvent(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(67,&a0);}
EXTERN_C void*__stdcall ZwGetTickCount(void){return ZwRosSystemServiceThunk(68,0);}
EXTERN_C void*__stdcall ZwImpersonateClientOfPort(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(69,&a0);}
EXTERN_C void*__stdcall ZwImpersonateThread(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(70,&a0);}
EXTERN_C void*__stdcall ZwInitializeRegistry(void*a0){return ZwRosSystemServiceThunk(71,&a0);}
EXTERN_C void*__stdcall ZwInitiatePowerAction(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(72,&a0);}
EXTERN_C void*__stdcall ZwIsProcessInJob(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(73,&a0);}
EXTERN_C void*__stdcall ZwListenPort(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(74,&a0);}
EXTERN_C void*__stdcall ZwLoadDriver(void*a0){return ZwRosSystemServiceThunk(75,&a0);}
EXTERN_C void*__stdcall ZwLoadKey(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(76,&a0);}
EXTERN_C void*__stdcall ZwLoadKey2(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(77,&a0);}
EXTERN_C void*__stdcall ZwLockFile(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6,void*a7,void*a8,void*a9){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;(void)a7;(void)a8;(void)a9;return ZwRosSystemServiceThunk(78,&a0);}
EXTERN_C void*__stdcall ZwLockVirtualMemory(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(79,&a0);}
EXTERN_C void*__stdcall ZwMakePermanentObject(void*a0){return ZwRosSystemServiceThunk(80,&a0);}
EXTERN_C void*__stdcall ZwMakeTemporaryObject(void*a0){return ZwRosSystemServiceThunk(81,&a0);}
EXTERN_C void*__stdcall ZwMapViewOfSection(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6,void*a7,void*a8,void*a9){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;(void)a7;(void)a8;(void)a9;return ZwRosSystemServiceThunk(82,&a0);}
EXTERN_C void*__stdcall ZwNotifyChangeDirectoryFile(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6,void*a7,void*a8){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;(void)a7;(void)a8;return ZwRosSystemServiceThunk(83,&a0);}
EXTERN_C void*__stdcall ZwNotifyChangeKey(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6,void*a7,void*a8,void*a9){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;(void)a7;(void)a8;(void)a9;return ZwRosSystemServiceThunk(84,&a0);}
EXTERN_C void*__stdcall ZwOpenDirectoryObject(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(85,&a0);}
EXTERN_C void*__stdcall ZwOpenEvent(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(86,&a0);}
EXTERN_C void*__stdcall ZwOpenEventPair(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(87,&a0);}
EXTERN_C void*__stdcall ZwOpenFile(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;return ZwRosSystemServiceThunk(88,&a0);}
EXTERN_C void*__stdcall ZwOpenIoCompletion(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(89,&a0);}
EXTERN_C void*__stdcall ZwOpenJobObject(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(90,&a0);}
EXTERN_C void*__stdcall ZwOpenKey(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(91,&a0);}
EXTERN_C void*__stdcall ZwOpenMutant(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(92,&a0);}
EXTERN_C void*__stdcall ZwOpenObjectAuditAlarm(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6,void*a7,void*a8,void*a9,void*a10,void*a11){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;(void)a7;(void)a8;(void)a9;(void)a10;(void)a11;return ZwRosSystemServiceThunk(93,&a0);}
EXTERN_C void*__stdcall ZwOpenProcess(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(94,&a0);}
EXTERN_C void*__stdcall ZwOpenProcessToken(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(95,&a0);}
EXTERN_C void*__stdcall ZwOpenProcessTokenEx(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(96,&a0);}
EXTERN_C void*__stdcall ZwOpenSection(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(97,&a0);}
EXTERN_C void*__stdcall ZwOpenSemaphore(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(98,&a0);}
EXTERN_C void*__stdcall ZwOpenSymbolicLinkObject(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(99,&a0);}
EXTERN_C void*__stdcall ZwOpenThread(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(100,&a0);}
EXTERN_C void*__stdcall ZwOpenThreadToken(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(101,&a0);}
EXTERN_C void*__stdcall ZwOpenThreadTokenEx(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(102,&a0);}
EXTERN_C void*__stdcall ZwOpenTimer(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(103,&a0);}
EXTERN_C void*__stdcall ZwPlugPlayControl(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(104,&a0);}
EXTERN_C void*__stdcall ZwPowerInformation(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(105,&a0);}
EXTERN_C void*__stdcall ZwPrivilegeCheck(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(106,&a0);}
EXTERN_C void*__stdcall ZwPrivilegedServiceAuditAlarm(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(107,&a0);}
EXTERN_C void*__stdcall ZwPrivilegeObjectAuditAlarm(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;return ZwRosSystemServiceThunk(108,&a0);}
EXTERN_C void*__stdcall ZwProtectVirtualMemory(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(109,&a0);}
EXTERN_C void*__stdcall ZwPulseEvent(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(110,&a0);}
EXTERN_C void*__stdcall ZwQueryInformationAtom(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(111,&a0);}
EXTERN_C void*__stdcall ZwQueryAttributesFile(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(112,&a0);}
EXTERN_C void*__stdcall ZwQueryBootEntryOrder(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(113,&a0);}
EXTERN_C void*__stdcall ZwQueryBootOptions(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(114,&a0);}
EXTERN_C void*__stdcall ZwQueryDefaultLocale(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(115,&a0);}
EXTERN_C void*__stdcall ZwQueryDefaultUILanguage(void*a0){return ZwRosSystemServiceThunk(116,&a0);}
EXTERN_C void*__stdcall ZwQueryDirectoryFile(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6,void*a7,void*a8,void*a9,void*a10){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;(void)a7;(void)a8;(void)a9;(void)a10;return ZwRosSystemServiceThunk(117,&a0);}
EXTERN_C void*__stdcall ZwQueryDirectoryObject(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;return ZwRosSystemServiceThunk(118,&a0);}
EXTERN_C void*__stdcall ZwQueryEaFile(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6,void*a7,void*a8){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;(void)a7;(void)a8;return ZwRosSystemServiceThunk(119,&a0);}
EXTERN_C void*__stdcall ZwQueryEvent(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(120,&a0);}
EXTERN_C void*__stdcall ZwQueryFullAttributesFile(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(121,&a0);}
EXTERN_C void*__stdcall ZwQueryInformationFile(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(122,&a0);}
EXTERN_C void*__stdcall ZwQueryInformationJobObject(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(123,&a0);}
EXTERN_C void*__stdcall ZwQueryInformationPort(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(124,&a0);}
EXTERN_C void*__stdcall ZwQueryInformationProcess(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(125,&a0);}
EXTERN_C void*__stdcall ZwQueryInformationThread(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(126,&a0);}
EXTERN_C void*__stdcall ZwQueryInformationToken(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(127,&a0);}
EXTERN_C void*__stdcall ZwQueryInstallUILanguage(void*a0){return ZwRosSystemServiceThunk(128,&a0);}
EXTERN_C void*__stdcall ZwQueryIntervalProfile(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(129,&a0);}
EXTERN_C void*__stdcall ZwQueryIoCompletion(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(130,&a0);}
EXTERN_C void*__stdcall ZwQueryKey(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(131,&a0);}
EXTERN_C void*__stdcall ZwQueryMultipleValueKey(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;return ZwRosSystemServiceThunk(132,&a0);}
EXTERN_C void*__stdcall ZwQueryMutant(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(133,&a0);}
EXTERN_C void*__stdcall ZwQueryObject(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(134,&a0);}
EXTERN_C void*__stdcall ZwQueryOleDirectoryFile(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6,void*a7,void*a8,void*a9,void*a10){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;(void)a7;(void)a8;(void)a9;(void)a10;return ZwRosSystemServiceThunk(135,&a0);}
EXTERN_C void*__stdcall ZwQueryPerformanceCounter(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(136,&a0);}
EXTERN_C void*__stdcall ZwQueryQuotaInformationFile(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6,void*a7,void*a8){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;(void)a7;(void)a8;return ZwRosSystemServiceThunk(137,&a0);}
EXTERN_C void*__stdcall ZwQuerySection(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(138,&a0);}
EXTERN_C void*__stdcall ZwQuerySecurityObject(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(139,&a0);}
EXTERN_C void*__stdcall ZwQuerySemaphore(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(140,&a0);}
EXTERN_C void*__stdcall ZwQuerySymbolicLinkObject(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(141,&a0);}
EXTERN_C void*__stdcall ZwQuerySystemEnvironmentValue(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(142,&a0);}
EXTERN_C void*__stdcall ZwQuerySystemInformation(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(143,&a0);}
EXTERN_C void*__stdcall ZwQuerySystemTime(void*a0){return ZwRosSystemServiceThunk(144,&a0);}
EXTERN_C void*__stdcall ZwQueryTimer(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(145,&a0);}
EXTERN_C void*__stdcall ZwQueryTimerResolution(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(146,&a0);}
EXTERN_C void*__stdcall ZwQueryValueKey(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;return ZwRosSystemServiceThunk(147,&a0);}
EXTERN_C void*__stdcall ZwQueryVirtualMemory(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;return ZwRosSystemServiceThunk(148,&a0);}
EXTERN_C void*__stdcall ZwQueryVolumeInformationFile(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(149,&a0);}
EXTERN_C void*__stdcall ZwQueueApcThread(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(150,&a0);}
EXTERN_C void*__stdcall ZwRaiseException(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(151,&a0);}
EXTERN_C void*__stdcall ZwRaiseHardError(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;return ZwRosSystemServiceThunk(152,&a0);}
EXTERN_C void*__stdcall ZwReadFile(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6,void*a7,void*a8){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;(void)a7;(void)a8;return ZwRosSystemServiceThunk(153,&a0);}
EXTERN_C void*__stdcall ZwReadFileScatter(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6,void*a7,void*a8){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;(void)a7;(void)a8;return ZwRosSystemServiceThunk(154,&a0);}
EXTERN_C void*__stdcall ZwReadRequestData(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;return ZwRosSystemServiceThunk(155,&a0);}
EXTERN_C void*__stdcall ZwReadVirtualMemory(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(156,&a0);}
EXTERN_C void*__stdcall ZwRegisterThreadTerminatePort(void*a0){return ZwRosSystemServiceThunk(157,&a0);}
EXTERN_C void*__stdcall ZwReleaseMutant(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(158,&a0);}
EXTERN_C void*__stdcall ZwReleaseSemaphore(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(159,&a0);}
EXTERN_C void*__stdcall ZwRemoveIoCompletion(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(160,&a0);}
EXTERN_C void*__stdcall ZwReplaceKey(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(161,&a0);}
EXTERN_C void*__stdcall ZwReplyPort(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(162,&a0);}
EXTERN_C void*__stdcall ZwReplyWaitReceivePort(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(163,&a0);}
EXTERN_C void*__stdcall ZwReplyWaitReplyPort(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(164,&a0);}
EXTERN_C void*__stdcall ZwRequestPort(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(165,&a0);}
EXTERN_C void*__stdcall ZwRequestWaitReplyPort(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(166,&a0);}
EXTERN_C void*__stdcall ZwResetEvent(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(167,&a0);}
EXTERN_C void*__stdcall ZwRestoreKey(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(168,&a0);}
EXTERN_C void*__stdcall ZwResumeThread(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(169,&a0);}
EXTERN_C void*__stdcall ZwSaveKey(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(170,&a0);}
EXTERN_C void*__stdcall ZwSaveKeyEx(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(171,&a0);}
EXTERN_C void*__stdcall ZwSetBootEntryOrder(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(172,&a0);}
EXTERN_C void*__stdcall ZwSetBootOptions(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(173,&a0);}
EXTERN_C void*__stdcall ZwSetIoCompletion(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(174,&a0);}
EXTERN_C void*__stdcall ZwSetContextThread(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(175,&a0);}
EXTERN_C void*__stdcall ZwSetDefaultHardErrorPort(void*a0){return ZwRosSystemServiceThunk(176,&a0);}
EXTERN_C void*__stdcall ZwSetDefaultLocale(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(177,&a0);}
EXTERN_C void*__stdcall ZwSetDefaultUILanguage(void*a0){return ZwRosSystemServiceThunk(178,&a0);}
EXTERN_C void*__stdcall ZwSetEaFile(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(179,&a0);}
EXTERN_C void*__stdcall ZwSetEvent(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(180,&a0);}
EXTERN_C void*__stdcall ZwSetHighEventPair(void*a0){return ZwRosSystemServiceThunk(181,&a0);}
EXTERN_C void*__stdcall ZwSetHighWaitLowEventPair(void*a0){return ZwRosSystemServiceThunk(182,&a0);}
EXTERN_C void*__stdcall ZwSetHighWaitLowThread(void){return ZwRosSystemServiceThunk(183,0);}
EXTERN_C void*__stdcall ZwSetInformationFile(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(184,&a0);}
EXTERN_C void*__stdcall ZwSetInformationKey(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(185,&a0);}
EXTERN_C void*__stdcall ZwSetInformationJobObject(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(186,&a0);}
EXTERN_C void*__stdcall ZwSetInformationObject(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(187,&a0);}
EXTERN_C void*__stdcall ZwSetInformationProcess(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(188,&a0);}
EXTERN_C void*__stdcall ZwSetInformationThread(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(189,&a0);}
EXTERN_C void*__stdcall ZwSetInformationToken(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(190,&a0);}
EXTERN_C void*__stdcall ZwSetIntervalProfile(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(191,&a0);}
EXTERN_C void*__stdcall ZwSetLdtEntries(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;return ZwRosSystemServiceThunk(192,&a0);}
EXTERN_C void*__stdcall ZwSetLowEventPair(void*a0){return ZwRosSystemServiceThunk(193,&a0);}
EXTERN_C void*__stdcall ZwSetLowWaitHighEventPair(void*a0){return ZwRosSystemServiceThunk(194,&a0);}
EXTERN_C void*__stdcall ZwSetLowWaitHighThread(void){return ZwRosSystemServiceThunk(195,0);}
EXTERN_C void*__stdcall ZwSetQuotaInformationFile(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(196,&a0);}
EXTERN_C void*__stdcall ZwSetSecurityObject(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(197,&a0);}
EXTERN_C void*__stdcall ZwSetSystemEnvironmentValue(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(198,&a0);}
EXTERN_C void*__stdcall ZwSetSystemInformation(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(199,&a0);}
EXTERN_C void*__stdcall ZwSetSystemPowerState(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(200,&a0);}
EXTERN_C void*__stdcall ZwSetSystemTime(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(201,&a0);}
EXTERN_C void*__stdcall ZwSetTimer(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;return ZwRosSystemServiceThunk(202,&a0);}
EXTERN_C void*__stdcall ZwSetTimerResolution(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(203,&a0);}
EXTERN_C void*__stdcall ZwSetUuidSeed(void*a0){return ZwRosSystemServiceThunk(204,&a0);}
EXTERN_C void*__stdcall ZwSetValueKey(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;return ZwRosSystemServiceThunk(205,&a0);}
EXTERN_C void*__stdcall ZwSetVolumeInformationFile(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(206,&a0);}
EXTERN_C void*__stdcall ZwShutdownSystem(void*a0){return ZwRosSystemServiceThunk(207,&a0);}
EXTERN_C void*__stdcall ZwSignalAndWaitForSingleObject(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(208,&a0);}
EXTERN_C void*__stdcall ZwStartProfile(void*a0){return ZwRosSystemServiceThunk(209,&a0);}
EXTERN_C void*__stdcall ZwStopProfile(void*a0){return ZwRosSystemServiceThunk(210,&a0);}
EXTERN_C void*__stdcall ZwSuspendThread(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(211,&a0);}
EXTERN_C void*__stdcall ZwSystemDebugControl(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;return ZwRosSystemServiceThunk(212,&a0);}
EXTERN_C void*__stdcall ZwTerminateJobObject(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(213,&a0);}
EXTERN_C void*__stdcall ZwTerminateProcess(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(214,&a0);}
EXTERN_C void*__stdcall ZwTerminateThread(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(215,&a0);}
EXTERN_C void*__stdcall ZwTestAlert(void){return ZwRosSystemServiceThunk(216,0);}
EXTERN_C void*__stdcall ZwTraceEvent(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(217,&a0);}
EXTERN_C void*__stdcall ZwTranslateFilePath(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(218,&a0);}
EXTERN_C void*__stdcall ZwUnloadDriver(void*a0){return ZwRosSystemServiceThunk(219,&a0);}
EXTERN_C void*__stdcall ZwUnloadKey(void*a0){return ZwRosSystemServiceThunk(220,&a0);}
EXTERN_C void*__stdcall ZwUnlockFile(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(221,&a0);}
EXTERN_C void*__stdcall ZwUnlockVirtualMemory(void*a0,void*a1,void*a2,void*a3){(void)a1;(void)a2;(void)a3;return ZwRosSystemServiceThunk(222,&a0);}
EXTERN_C void*__stdcall ZwUnmapViewOfSection(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(223,&a0);}
EXTERN_C void*__stdcall ZwVdmControl(void*a0,void*a1){(void)a1;return ZwRosSystemServiceThunk(224,&a0);}
EXTERN_C void*__stdcall ZwWaitForMultipleObjects(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(225,&a0);}
EXTERN_C void*__stdcall ZwWaitForSingleObject(void*a0,void*a1,void*a2){(void)a1;(void)a2;return ZwRosSystemServiceThunk(226,&a0);}
EXTERN_C void*__stdcall ZwWaitHighEventPair(void*a0){return ZwRosSystemServiceThunk(227,&a0);}
EXTERN_C void*__stdcall ZwWaitLowEventPair(void*a0){return ZwRosSystemServiceThunk(228,&a0);}
EXTERN_C void*__stdcall ZwWriteFile(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6,void*a7,void*a8){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;(void)a7;(void)a8;return ZwRosSystemServiceThunk(229,&a0);}
EXTERN_C void*__stdcall ZwWriteFileGather(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5,void*a6,void*a7,void*a8){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;(void)a6;(void)a7;(void)a8;return ZwRosSystemServiceThunk(230,&a0);}
EXTERN_C void*__stdcall ZwWriteRequestData(void*a0,void*a1,void*a2,void*a3,void*a4,void*a5){(void)a1;(void)a2;(void)a3;(void)a4;(void)a5;return ZwRosSystemServiceThunk(231,&a0);}
EXTERN_C void*__stdcall ZwWriteVirtualMemory(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(232,&a0);}
EXTERN_C void*__stdcall ZwW32Call(void*a0,void*a1,void*a2,void*a3,void*a4){(void)a1;(void)a2;(void)a3;(void)a4;return ZwRosSystemServiceThunk(233,&a0);}
EXTERN_C void*__stdcall ZwYieldExecution(void){return ZwRosSystemServiceThunk(234,0);}
