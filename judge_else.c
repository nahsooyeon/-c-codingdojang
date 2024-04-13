/* 표준 입력으로 문자가 입력됩니다. 
입력된 문자가 a이면 "a입니다."를 출력하고, 
a가 아니면 "a가 아닙니다."를 출력하는 프로그램을 만드세요(
	scanf 함수 호출 전에 문자열을 출력하면 안 됩니다). */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
	char c1;

	scanf("%c", &c1);

	if (c1 == 'a')
		printf("a입니다.\n");
	else
		printf("a가 아닙니다.\n");
}