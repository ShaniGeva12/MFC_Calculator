#pragma once


// CalcAboutDialog dialog

class CalcAboutDialog : public CDialogEx
{
	DECLARE_DYNAMIC(CalcAboutDialog)

public:
	CalcAboutDialog(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CalcAboutDialog();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
