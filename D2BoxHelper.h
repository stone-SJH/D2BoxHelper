///////////////////////////////////////////
////                stone              ////
////                v1.0               ////
////                2016/3/11          ////
///////////////////////////////////////////

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


class CBoxToolApp : public CWinApp
{
public:
	CBoxToolApp();

// 重写
public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
};

extern CBoxToolApp theApp;
