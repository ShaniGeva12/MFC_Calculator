#pragma once
#include "stdafx.h"
#include "afxdialogex.h"
#include "Operator.h"

class Minus : Operator
{
public:
	Minus();
	Op_Type opty;
	int Do(int n, int n2);

	~Minus();
};



