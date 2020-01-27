#include "StdAfx.h"
#include "Mul.h"

Mul::Mul()
{
}

int Mul::DoMul(int num1, int num2)
{
	int res = 0;
	Plus p;
	for (int i = 0; i < num2 / 2; i++)
	{
		res += p.Do(num1);
	}
	if (num2 % 2 == 1)
		res += num1;
	return res;
}

int Mul::DoMul(int n)
{
	return DoMul(n,n);
}


Mul::~Mul()
{
}
