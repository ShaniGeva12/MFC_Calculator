#include "StdAfx.h"
#include "Mul.h"

Mul::Mul()
{
}

int Mul::DoMul(int num1, int num2)
{
	int i,res=0;
	Plus p;
	if (num2 == 1)
		return num1;
	if (num1 == 1)
		return num2;
	if(num2==2)
		res += p.Do(num1);
	else
	{
		for (i = 2; i < num2; i++)
		{
			res += p.Do(num1);
		}
	}

	return res;
}

int Mul::DoMul(int n)
{
	return DoMul(n,n);
}


Mul::~Mul()
{
}
