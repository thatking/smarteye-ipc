/*******************************************************************
|  Copyright(c) 2015-2016 Graceport Technology Development Co.,Ltd
|  All rights reserved.
|
|  版本: 1.0
|  作者: Knight [knight@graceport.cn]
|  日期: 2016年6月6日
|  说明: 此模块仅用于嵌入式设备，在linux 系统中的/proc/avWare/目录会有整个系统
|		各个模块的运行状态。
|
|  版本: 1.1
|  作者:
|  日期:
|  说明:
******************************************************************/
#ifndef _AV_PROC_H_
#define _AV_PROC_H_
#include "Apis/AvWareType.h"
#include "CAvObject.h"
#include "logAvWareExport.h"

#define logAvWarePath "/dev/logAvWare"

class CAvProc:public CAvObject
{
public:
	SINGLETON_DECLARE(CAvProc);
	av_bool Initialize();
	av_bool avProcSet(IOCTRL_CMD cmd, av_void *data, av_u32 datalen);

private:
	CAvProc();
	~CAvProc();

private:
	av_int m_ProcHandle;

};


#define g_AvProc (*CAvProc::instance())


#endif