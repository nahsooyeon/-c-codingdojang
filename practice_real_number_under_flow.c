#include <stdio.h>
#include <float.h>


/* 0.000000e+00이 출력되게 만드세요. */

int main()
{
	float num1 = FLT_MIN;
	num1 = num1 / 100000000.0f;
	printf("%e\n", num1);

	return 0;
}