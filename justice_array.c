/* 입력된 크기만큼의 단위행렬을 출력하는 프로그램 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(){
	int size;

	scanf("%d", &size);

	int **matrix = malloc(sizeof(int *) * size);  /* 세로 공간 할당 */


	/* 가로 공간 할당 */
	for (int i = 0; i < size; i++) {
		matrix[i] = malloc(sizeof(int) * size);
	}

	/* 행렬에 할당*/
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j) {
				matrix[i][j] = 1;
			}
			else {
				matrix[i][j] = 0;
			}
		}
	}
	/* 가로줄 위에서부터 하나씩  */
	for (int i=0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	/* 가로 공간 해제 */
	for (int i = 0; i < size; i++) {
		free(matrix[i]);
	}

	/* 세로 공간 해제 */


	free(matrix);

	return 0;

}