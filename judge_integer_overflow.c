#include <stdio.h>
int main(){
	/*  0 0 -128이 출력되게 만드세요. */

  unsigned char num1;
	unsigned int num2;
	char num3;


	num1 = 65536;
	num2 = 4294967296;
	num3 = 128;

	printf("%u %u %d\n", num1, num2, num3);

}