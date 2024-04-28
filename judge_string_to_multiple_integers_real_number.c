/*  16진 정수, 10진 정수, 실수로 된 문자열이 숫자로 출력되게 만드세요. */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    char s1[31];
    int num1;
    int num2;
    float num3;
    char *end;

		/* 문자열을 정수로 변환하려면 strtol, 문자열을 실수로 변환하려면 strtof 함수를 사용 */

		scanf("%[^\n]s", s1);
		num1 = strtol(s1, &end, 16);
		num2 = strtol(end, &end, 10);
		num3 = atof(end);

		printf("%x\n", num1);
		printf("%d\n", num2);
		printf("%f\n", num3);

		return 0;
}