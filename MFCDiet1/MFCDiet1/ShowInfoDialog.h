#pragma once
#include "afxwin.h"
class CMFCDiet1View;

// CShowInfoDialog 대화 상자입니다.
typedef struct Food;
class CShowInfoDialog : public CDialog
{
	DECLARE_DYNAMIC(CShowInfoDialog)

public:
	CShowInfoDialog(CWnd* pParent = NULL);   // 표준 생성자입니다.
	virtual ~CShowInfoDialog();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SHOWINFO };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	CMFCDiet1View* m_pView;
	//afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	//afx_msg void OnBnClickedCancel();
//	virtual void PostNcDestroy();
	//afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedD1Search();
	//char* UTF8toANSI(char* pszCode);
	CString m_D1_EDIT_Name;

	afx_msg void OnEnChangeD1AmountEdit();
	//int m_Info_Amount;
	//double m_Info_Amount;
	int meal;
	//double m_Info_Carbo;
	//double m_Info_Protein;
	//double m_Info_Fat;
	//double m_Info_Cholest;
	//double m_Info_Fiber;
	//double m_Info_Na;
	//double m_Info_Calory;
	CString m_Info_Amount;
	afx_msg void OnBnClickedOk();
	virtual void PostNcDestroy();
	afx_msg void OnBnClickedCancel();
	CString m_Info_Date;
	virtual BOOL OnInitDialog();
	//int m_Info_meal;
	afx_msg void OnBnClickedReset();
	CComboBox m_Info_Combo;
	CString m_Info_Calory;
	CString m_Info_Carbo;
	CString m_Info_Protein;
	CString m_Info_Fat;
	CString m_Info_Cholest;
	CString m_Info_Fiber;
	CString m_Info_Na;
};
