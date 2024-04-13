/* 표준 입력으로 만 단위의 정수 하나가 입력됩니다.

입력된 정수의 각 자릿수를 역순으로 출력하는 프로그램을 만드세요
(scanf 함수 전에 문자열을 출력하면 안 됩니다). 
예를 들어 43561이라면 1 6 5 3 4를 출력하면 됩니다. 각 자릿수는 공백으로 띄우세요. */

#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);

	int a = num % 10;
	int b = num / 10 % 10;
	int c = num / 100 % 10;
	int d = num / 1000 % 10;
	int e = num / 10000 % 10;

	printf("%d %d %d %d %d\n", a, b, c, d, e);


	return 0;


}