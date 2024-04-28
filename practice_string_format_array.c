/* "9th Symphony" 가 출력되게 만들기 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char s1[20];

	sprintf(s1, "%dth %s", 9, "Symphony");

	printf("%s\n", s1);

	return 0;

}