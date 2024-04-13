/* 다음 소스 코드를 완성하여
-128 0 -2147483648 0 -9223372036854775808
가 출력되게 만드세요. */

#include <stdio.h>
#include <limits.h>

int main()
{
	 char num1 = CHAR_MIN;
    unsigned short num2 = 0;
    int num3 = INT_MIN;
    unsigned long num4 = 0;
    long long num5 = LLONG_MIN;
 
    printf("%d %u %d %lu %lld\n", num1, num2, num3, num4, num5);
 
    return 0;
}