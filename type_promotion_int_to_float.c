#include <stdio.h>
 
int main()
{
    int num1 = 22;
    float num2 = 4.2f;
		int num3 = num1 - num2;

    printf("num3: %d\n", num3);
    printf("%f\n", num1 + num2);    // 15.400000: 정수와 실수 덧셈. 정수는 실수로 변환됨
    printf("%f\n", num1 * num2);    // 48.400002: 정수와 실수 곱셈. 정수는 실수로 변환됨
    printf("%f\n", num1 / num2);    // 2.500000: 정수와 실수 나눗셈. 정수는 실수로 변환됨
 
    return 0;
}
