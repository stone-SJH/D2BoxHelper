///////////////////////////////////////////
////                stone              ////
////                v1.0               ////
////                2016/3/11          ////
///////////////////////////////////////////

#pragma once

#include "Box.h"

class CBoxToolDlg : public CDialogEx
{
// 构造
public:
	CBoxToolDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_BoxTool_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedbtnzl();
	BOOL DirectoryExist(CString Path);
};
