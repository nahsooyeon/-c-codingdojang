/* 사용자가 입력한 만큼 메모리를 할당하여 포인터를 2차원 배열처럼 사용 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/* 
이차원 배열을 이중 포인터로 할당하는 주된 이유는
배열의 크기를 실행 시간에 결정하고 싶을 때 유용하기 때문
이 방법은 특히 배열의 크기가 컴파일 시간에 미리 정의되지 않고, 
사용자 입력이나 다른 조건에 따라 결정되어야 할 때 적합
 */

int main()
{
	int row, col;
	scanf("%d %d", &row, &col);

	int **m = malloc(sizeof(int *) * row); // 배열의 세로 공간 할당

	for (int i = 0; i < row; i++) {
		m[i] = malloc(sizeof(int) * col); // 배열의 가로 할당
	}

	for (int i = 0; i < row; i++) {
		for (int j=0; j < col; j++) {
			m[i][j] = i + j; /* 2차원  배열 각 요소에 값 할당 */
		}
	}

	for (int i = 0; i < row; i++) {
		free(m[i]); /* 가로 공간 메모리 해제 */
	}

	free(m); /* 세로 공간 메모리 해제 */

	return 0;
}