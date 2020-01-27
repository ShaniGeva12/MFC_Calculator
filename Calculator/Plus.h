#pragma once
#include "stdafx.h"
#include "afxdialogex.h"
#include "Operator.h"

class Plus : Operator
{
public:
	Plus();
	Op_Type opty;
	int Do(int n, int n2);
	int Do(int n);
	~Plus();
};