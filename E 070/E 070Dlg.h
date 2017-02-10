
// E 070Dlg.h : header file
//

#pragma once
#include "afxwin.h"


// CE070Dlg dialog
class CE070Dlg : public CDialogEx
{
// Construction
public:
	CE070Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_E070_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedMesaj();
	afx_msg void OnBnClickedDezactiveaza();
	CButton buton;
	CButton buton1;
};
