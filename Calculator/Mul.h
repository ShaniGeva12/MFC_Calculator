#pragma once
#include "Plus.h"
#include "afxdialogex.h"

class Mul : Plus
{
public:
	Mul();
	int DoMul(int n, int n2);
	int DoMul(int n);

	~Mul();
};
