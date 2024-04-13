#include <stdio.h>
int main ()
{
	unsigned char num1=200;
	unsigned short num2=60000;
	unsigned int num3=4123456789;
	unsigned long num4=4123456789;
	unsigned long long num5=1234567890123456789;

	printf("%u\n%u\n%u\n%lu\n%llu\n", num1, num2, num3, num4, num5);
}