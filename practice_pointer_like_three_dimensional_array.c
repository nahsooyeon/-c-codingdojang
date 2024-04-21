/* 포인터에 할당된 메모리를 높이 2, 세로 크기 3, 가로크기 5인
3차원 배열처럼 사용하기 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	long long ***m = malloc(sizeof(long long **) * 2); // 2차원 배열의 세로 공간 할당

	for (int i = 0; i < 2; i++) {
		m[i] = malloc(sizeof(long long *) * 3); // 2차원 배열의 높이 공간 할당

		/* 가로 공간 할당 */
		for (int row = 0; row < 3; row++) {
			m[i][row] = malloc(sizeof(long long) * 5); // 2차원 배열의 가로 공간 할당
		}
	}

	m[1][2][4] = 100;

	// 2차원 배열의 세로 공간 메모리 해제
	for (int i = 0; i < 2; i++) {
		for (int row = 0; row < 3; row++) {
			free(m[i][row]);
			
			}
	// 2차원 배열의 높이 공간 메모리 해제
	free(m[i]); 
	}

	free(m);

	return 0;

	

}