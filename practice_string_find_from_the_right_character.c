/* 소스 코드를 완성하여 "ince"가 출력 */

#include <stdio.h>
#include <string.h>

int main()
{
	 char s1[30] = "The Little Prince";

	char *ptr = strrchr(s1, 'i');
	printf("%s\n", ptr);


	 return 0;
}