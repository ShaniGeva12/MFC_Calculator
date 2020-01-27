#include "StdAfx.h"
#include "Divide.h"

Divide::Divide()
{

}

int Divide::DoDiv(int dividend, int divisor)
{

		Minus minus;
		int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
		dividend = abs(dividend);
		divisor = abs(divisor);
		int count = 0;
		if (divisor == 0)
			return 0;
		while (dividend >= divisor) {
			dividend = minus.Do(dividend, divisor);
			++count;
		}

		return count;
	}

Divide::~Divide()
{
}
