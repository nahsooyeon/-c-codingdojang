/* 문자열 세 개를 입력받고 
각각 출력되게 만들기 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *s1 = malloc(sizeof(char)* 10);
	char *s2 = malloc(sizeof(char)* 10);
	char *s3 = malloc(sizeof(char)* 10);

	printf("문자열을 세 개 입력하세요: ");
	scanf("%s %s %s", s1, s2, s3);

	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", s3);

	free(s1);
	free(s2);
	free(s3);

	return 0;

}