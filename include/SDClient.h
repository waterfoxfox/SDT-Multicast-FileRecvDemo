//***************************************************************************//
//* ��Ȩ����  www.mediapro.cc
//*
//* ����ժҪ���ͻ��˶�����.
//*	
//* ��ǰ�汾��V1.0		
//* ��    �ߣ�mediapro
//* ������ڣ�2018-6-20
//**************************************************************************//

#if !defined(_SDCLIENT_H)
#define _SDCLIENT_H

#include "SDCommon.h"
#include "SDTerminalMulticastSdk.h"
#include "SDAudioRenderSdk.h"
#include "SDVideoRenderSdk.h"

class CSDClient
{
public:
	CSDClient(MulticastTerminalEncodeParams *ptEncParams, MulticastTerminalLogonParams *ptLogonParams, MulticastTerminalTransParams *ptTransParams, void* pWindowHandle);
	virtual ~CSDClient();

public:
	BOOL Start();
	void Stop();


private:
	// SDK�ص��ӿ�ʵ��
	//������ղ�������YUV����
	static void RemoteVideoYuvData(unsigned char* data, unsigned int unWidth, unsigned int unHeight, unsigned int unPts, void *pObject);

	//������ղ�������PCM����
	static void RemoteAudioPcmData(unsigned char* data, unsigned int unLen, unsigned int unPts, void *pObject);



private:
	MulticastTerminalEncodeParams		m_tEncParams;
	MulticastTerminalLogonParams		m_tLogonParams;
	MulticastTerminalTransParams		m_tTransParams;

	void*					m_pTerminal;
	void*					m_pAudioRender;
	void*					m_pVideoRender;
	BOOL					m_bClosed;

};

#endif // !defined(_SDCLIENT_H)
