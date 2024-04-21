/* 자료형 *포인터이름 = malloc(sizeof(자료형) * 크기); */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *numPtr = malloc(sizeof(int)* 10);

	numPtr[0] = 10;
	numPtr[9] = 20;

	printf("%d\n", numPtr[0]);
	printf("%d\n", numPtr[9]);

	free(numPtr); // 동적 메모리 해제 (반환

	return 0;
}