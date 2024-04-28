#include <stdio.h>
#include <string.h>

int main()
{
    char s1[40] = "Alice's Adventures in Wonderland";

		char *tok = strtok(s1, "\n."); // " " 공백 문자를 기준으로 문자열을 자름, 포인터 반환

		while (tok != NULL) // 자른 문자열이 나오지 않을 때까지 반복
		{
				printf("%s\n", tok); // 자른 문자열 출력
				tok = strtok(NULL, " "); // 다음 문자열을 잘라서 포인터를 반환
		}

		return 0;

}