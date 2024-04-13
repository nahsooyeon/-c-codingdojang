#include <stdio.h>
 
int main()
{
// num1의 크기는 4, (float)
// num2의 크기는 8, (long double)
float num1 = 1.8f;
double num2 = 2.9;
long double num3 =3.7l;
printf("%f %f %Lf\n", num1, num2, num3); // 1.800000 2.900000 3.700000
printf("%d %d\n", sizeof(num1), sizeof(num2)); // 4 8
}