/*******************************************************************
|  Copyright(c) 2015-2016 Graceport Technology Development Co.,Ltd
|  All rights reserved.
|
|  版本: 1.0
|  作者: Knight [knight@graceport.cn]
|  日期: 2016年6月6日
|  说明:
|
|  版本: 1.1
|  作者:
|  日期:
|  说明:
******************************************************************/
#ifndef _AV_RTSP_H_
#define _AV_RTSP_H_
#include "Apis/AvWareType.h"
#include "CObject.h"
#include "Rtsp/LibRtspServer.h"
#include "AvPacket/AvPacket.h"


class CAvRtspServerMedia:public CRtspMediaSer
{
public:
	CAvRtspServerMedia();
	~CAvRtspServerMedia();

	bool StartMedia();
	bool StopMedia();


private:
	av_void OnStream(av_uchar Channel, av_uchar Slave, CPacket &packet);
};

class CAvRtspServer:public CRtspServer
{
public:
	PATTERN_SINGLETON_DECLARE(CAvRtspServer)
	CAvRtspServer();
	~CAvRtspServer();
	av_bool Start(int ServicePort = 554);
	av_bool Stop();

private:

};


#define g_AvRtspServer (*CAvRtspServer::instance())




#endif
