/* 사용자가 입력한 크기만큼 메모리를 할당하여 배열처럼 사용 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int size;

	scanf("%d", &size);

	int *numPtr = malloc(sizeof(int) * size);

	for (int i =0; i < size; i++) {
		numPtr[i] = i;
	}

	for (int i = 0; i < size; i++) {
		printf("%d\n", numPtr[i]);
	}

	free(numPtr);

	return 0;
}