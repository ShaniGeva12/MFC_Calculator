// CalcAboutDialog.cpp : implementation file
//

#include "stdafx.h"
#include "Calculator.h"
#include "CalcAboutDialog.h"
#include "afxdialogex.h"


// CalcAboutDialog dialog

IMPLEMENT_DYNAMIC(CalcAboutDialog, CDialogEx)

CalcAboutDialog::CalcAboutDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ABOUTBOX, pParent)
{

}

CalcAboutDialog::~CalcAboutDialog()
{
}

void CalcAboutDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CalcAboutDialog, CDialogEx)
END_MESSAGE_MAP()


// CalcAboutDialog message handlers
