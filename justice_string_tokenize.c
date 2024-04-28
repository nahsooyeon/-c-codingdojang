#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*  길이 60 이하의 인터넷 도메인이 입력됩니다. 점을 기준으로 문자열을 분리하여 각 줄마다 출력하세요. */
int main(){

	char str[60];
	scanf("%s", str);

	char *tok = strtok(str, "."); // "." 점 문자를 기준으로 문자열을 자름, 포인터 반환

	while (tok != NULL) // 자른 문자열이 나오지 않을 때까지 반복
	{
			printf("%s\n", tok); // 자른 문자열 출력
			tok = strtok(NULL, "."); // 다음 문자열을 잘라서 포인터를 반환
	}

	return 0;
	
}