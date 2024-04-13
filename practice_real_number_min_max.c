#include <stdio.h>
#include <float.h>		// 실수 자료형의 양수 최솟값, 최댓값이 정의된 헤더 파일

int main()
{
		float num1 = FLT_MIN;
		double num2 = DBL_MIN;
		long double num3 = LDBL_MAX;

    printf("%.2f\n", num1); //340282346638528859811704183484516925440.00

    printf("%e\n", num2); //2.225074e-308
    printf("%Le\n", num3); //1.797693e+308


    return 0;

}
