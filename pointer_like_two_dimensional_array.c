/* 포인터에 메모리를 할당하여 세로 크기 3, 가로 크기 4인 2차원 배열처럼 사용 */

#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일


int main()
{
	int **m = malloc(sizeof(int *) * 3);    //// 이중 포인터에 (int 포인터 크기 * 세로 크기)만큼

	/* 가로 공간 메모리 할당 */
	for (int i = 0; i < 3; i++)
	{
		m[i] = malloc(sizeof(int) * 4);    // int 4개를 저장할 수 있는 메모리 할당
	}
	m[0][0] = 1;
	m[2][0] = 5;
	m[2][3] = 2;


/* 가로 공간 메모리 해제 */
  for (int i = 0; i < 3; i++)
  {
	free(m[i]);
	}


	/* 세로 공간 메모리 해제 */
	free(m);
}