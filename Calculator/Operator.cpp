#include "StdAfx.h"
#include "Operator.h"

Operator::Operator()
{
}

int Operator::Do(int num1, int num2, Op_Type ty)
{
	return 0;
}

int Operator::Do(int num1, int num2)
{
	return 0;
}

int Operator::Do(int num1, Op_Type)
{
	return 0;
}

Operator::~Operator()
{
}
