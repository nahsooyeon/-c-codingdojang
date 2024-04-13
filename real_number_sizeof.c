#include <stdio.h>

int main()
{
    float num1 = 0.0f;
    double num2 = 0.0;
    long double num3 = 0.0l;

    printf("float: %d, double: %d, long double: %d\n",
        sizeof(num1),     // 4byte: sizeof로 float 변수의 자료형 크기를 구함
        sizeof(num2),     // 8byte: sizeof로 double 변수의 자료형 크기를 구함
        sizeof(num3)      // 8byte: sizeof로 long double 변수의 자료형 크기를 구함 (16byte인 경우도 있음)
    );

    return 0;
}
