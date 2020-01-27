
// CalculatorDlg.h : header file
//

#pragma once


// CCalculatorDlg dialog
class CCalculatorDlg : public CDialogEx
{
// Construction
public:
	CCalculatorDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_CALCULATOR_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
private:
	int m_left;
	int m_op;
	int ans;

protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	int m_num;


	afx_msg void OnBnClickedequal();
	void DataUpdate(int num);
	afx_msg void OnBnClicked0();
	void OnBnClicked1();
	void OnBnClicked2();
	void OnBnClicked3();
	void OnBnClicked4();
	afx_msg void OnBnClicked5();
	afx_msg void OnBnClicked6();
	afx_msg void OnBnClicked7();
	afx_msg void OnBnClicked8();
	afx_msg void OnBnClicked9();
	

	afx_msg void OnBnClickedclear();
	void OnBnClickedANS();

	afx_msg void OnBnClickedplus();
	afx_msg void OnBnClickedminus();
	afx_msg void OnBnClickedmul();
	afx_msg void OnBnClickeddiv();
	afx_msg void OnBnClickedpow();

	afx_msg void OnBnClickeddel();
	afx_msg void OnBnClickeddel2();
	afx_msg void OnBnClickedquit();
	afx_msg void OnBnClickedabout();
};
