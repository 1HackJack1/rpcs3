#include "stdafx.h"
#include "Emu/System.h"
#include "Emu/ARMv7/PSVFuncList.h"

extern psv_log_base sceAppMgr;

#define REG_FUNC(nid, name) reg_psv_func(nid, &sceAppMgr, #name, name)

psv_log_base sceAppMgr("SceAppMgr", []()
{
	sceAppMgr.on_load = nullptr;
	sceAppMgr.on_unload = nullptr;
	sceAppMgr.on_stop = nullptr;

	//REG_FUNC(0x47E5DD7D, sceAppMgrReceiveEventNum);
	//REG_FUNC(0xCFAD5A3A, sceAppMgrReceiveEvent);
	//REG_FUNC(0xF3D65520, sceAppMgrAcquireBgmPort);
	//REG_FUNC(0x96CBE713, sceAppMgrReleaseBgmPort);
	//REG_FUNC(0x49255C91, sceAppMgrGetRunStatus);
});
