#pragma once
#include "stdafx.h"
#include "afxdialogex.h"

class Operator
{
public:
	enum Op_Type { plus, minus, mul, div, pow, sqrt };
	Operator();
	int Do(int num1, int num2, Op_Type ty);
	int Do(int num1, int num2);
	int Do(int num1, Op_Type);
	~Operator();


private: int num1, num2;

};


