
// CalculatorDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Calculator.h"
#include "CalculatorDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif
int op_type;
Operator op;

// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();
	

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

	protected:
		
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
	ON_BN_CLICKED(IDOK, &CAboutDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CCalculatorDlg dialog




CCalculatorDlg::CCalculatorDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CCalculatorDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_num = 0;
	m_left = 0;
	m_op = 0;
}

void CCalculatorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_num);
}

BEGIN_MESSAGE_MAP(CCalculatorDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_WM_MOUSEMOVE()
	ON_BN_CLICKED(btn_equal, &CCalculatorDlg::OnBnClickedequal)
	ON_BN_CLICKED(btn_5, &CCalculatorDlg::OnBnClicked5)
	ON_BN_CLICKED(btn_6, &CCalculatorDlg::OnBnClicked6)
	ON_BN_CLICKED(btn_7, &CCalculatorDlg::OnBnClicked7)
	ON_BN_CLICKED(btn_8, &CCalculatorDlg::OnBnClicked8)
	ON_BN_CLICKED(btn_9, &CCalculatorDlg::OnBnClicked9)
	ON_BN_CLICKED(btn_1, &CCalculatorDlg::OnBnClicked1)
	ON_BN_CLICKED(btn_2, &CCalculatorDlg::OnBnClicked2)
	ON_BN_CLICKED(btn_3, &CCalculatorDlg::OnBnClicked3)
	ON_BN_CLICKED(btn_4, &CCalculatorDlg::OnBnClicked4)
	ON_BN_CLICKED(btn_0, &CCalculatorDlg::OnBnClicked0)
	ON_BN_CLICKED(btn_clear, &CCalculatorDlg::OnBnClickedclear)
	ON_BN_CLICKED(btn_plus, &CCalculatorDlg::OnBnClickedplus)
	ON_BN_CLICKED(btn_minus, &CCalculatorDlg::OnBnClickedminus)
	ON_BN_CLICKED(btn_mul, &CCalculatorDlg::OnBnClickedmul)
	ON_BN_CLICKED(btn_div, &CCalculatorDlg::OnBnClickeddiv)
	ON_BN_CLICKED(btn_pow, &CCalculatorDlg::OnBnClickedpow)
	ON_BN_CLICKED(btn_del2, &CCalculatorDlg::OnBnClickeddel2)
	ON_BN_CLICKED(btn_del, &CCalculatorDlg::OnBnClickeddel)
	ON_BN_CLICKED(btn_quit, &CCalculatorDlg::OnBnClickedquit)
	ON_BN_CLICKED(btn_about, &CCalculatorDlg::OnBnClickedabout)
END_MESSAGE_MAP()


// CCalculatorDlg message handlers

BOOL CCalculatorDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CCalculatorDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCalculatorDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CCalculatorDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CCalculatorDlg::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	//CString s;
	//s.Format(L"position x=%d y=%d", point.x, point.y);
	//CEdit *edit = (CEdit*)GetDlgItem(IDC_EDIT1);
	//edit->SetWindowText(s);
	CDialogEx::OnMouseMove(nFlags, point);
}


void CCalculatorDlg::OnBnClicked1()
{
	DataUpdate(1);
}


void CCalculatorDlg::OnBnClicked2()
{
	DataUpdate(2);
}


void CCalculatorDlg::OnBnClicked3()
{
	DataUpdate(3);
}


void CCalculatorDlg::OnBnClicked4()
{
	DataUpdate(4);
}


void CCalculatorDlg::OnBnClickedequal()
{
	Plus p;
	Minus m;
	Mul mul;
	Divide div;
	Power pow;
	UpdateData(true);

	switch (op_type)
	{
	case (op.plus):
		ans = p.Do(m_left, m_num);
		m_left = m_num;
		m_num = ans;
		m_op = 1;
		break;

	case (op.minus):
		ans = m.Do(m_left, m_num);
		m_left = m_num;
		m_num = ans;
		m_op = 1;
		break;

	case (op.mul):
		ans = mul.DoMul(m_left, m_num);
		m_left = m_num;
		m_num = ans;
		m_op = 1;
		break;

	case (op.div):
		ans = div.DoDiv(m_left, m_num);
		m_left = m_num;
		m_num = ans;
		m_op = 1;
		break;

	case (op.pow):
		ans = pow.DoPow(m_left, m_num);
		m_left = m_num;
		m_num = ans;
		m_op = 1;
		break;

	default:
		break;
	}

	//--------------
	//--------------
	/*
	m_left = m_num;
	m_num = 0;
	m_op = 1;
	*/
	UpdateData(false);
}

void CCalculatorDlg::DataUpdate(int num)
{
	UpdateData(true);
	m_num = m_num * 10 + num;
	UpdateData(false);

}

void CCalculatorDlg::OnBnClicked5()
{
	DataUpdate(5);
}


void CCalculatorDlg::OnBnClicked6()
{
	DataUpdate(6);
}


void CCalculatorDlg::OnBnClicked7()
{
	DataUpdate(7);
}


void CCalculatorDlg::OnBnClicked8()
{
	DataUpdate(8);
}


void CCalculatorDlg::OnBnClicked9()
{
	DataUpdate(9);
}


void CCalculatorDlg::OnBnClicked0()
{
	DataUpdate(0);
}


void CCalculatorDlg::OnBnClickedclear()
{
	//UpdateData(true);
	m_num = 0;
	UpdateData(false);
}
void CCalculatorDlg::OnBnClickedANS()
{



}

void CCalculatorDlg::OnBnClickedplus()
{
	// TODO: Add your control notification handler code here
		// TODO: Add your control notification handler code here
	UpdateData(true);

	m_left = m_num;
	m_num = 0;
	m_op = 1;

	//-------
	op_type = op.plus;

	/*if (m_op == 1)
		m_num += m_left;*/

	UpdateData(false);
}


void CCalculatorDlg::OnBnClickedminus()
{
	UpdateData(true);

	m_left = m_num;
	m_num = 0;
	m_op = 1;
	op_type = op.minus;

	UpdateData(false);

}


void CCalculatorDlg::OnBnClickedmul()
{
	UpdateData(true);

	m_left = m_num;
	m_num = 0;
	m_op = 1;
	op_type = op.mul;

	UpdateData(false);
}


void CCalculatorDlg::OnBnClickeddiv()
{
	UpdateData(true);

	m_left = m_num;
	m_num = 0;
	m_op = 1;
	op_type = op.div;

	UpdateData(false);
}


void CCalculatorDlg::OnBnClickedpow()
{
	UpdateData(true);

	m_left = m_num;
	m_num = 0;
	m_op = 1;
	op_type = op.pow;

	UpdateData(false);
}


void CCalculatorDlg::OnBnClickeddel2()
{
	DataUpdate(ans);
}


void CCalculatorDlg::OnBnClickeddel()
{
	UpdateData(true);
	m_num = m_num / 10;
	UpdateData(false);
}


void CCalculatorDlg::OnBnClickedquit()
{
	EndDialog(-1);
}


void CAboutDlg::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnOK();
	EndDialog(-1);
}


void CCalculatorDlg::OnBnClickedabout()
{
	CAboutDlg dlg;
	dlg.DoModal();
}