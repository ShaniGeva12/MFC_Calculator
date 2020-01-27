#include "StdAfx.h"
#include "Power.h"

Power::Power()
{
}

int Power::DoPow(int num1, int num2)
{

		int i, res = 1;
		int exponent = num2;
		int base = num1;
		Mul mul;
		if (num2 == 0)
			return 1;
		if (num2 == 1)
			return num1;
		if (num1 == 1)
			return num1;
		
		while (exponent != 0) {
			res= mul.DoMul(res, base);
			--exponent;
		}

		return res;
}

Power::~Power()
{
}
