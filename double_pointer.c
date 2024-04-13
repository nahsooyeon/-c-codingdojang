/* 포인터를 선언할 때 *를 두 번 사용하면 포인터의 포인터(이중 포인터)를 선언합니다. */

#include <stdio.h>

int main()
{
    int *numPtr1;     // 단일 포인터 선언
    int **numPtr2;    // 이중 포인터 선언
    int num1 = 10;

    numPtr1 = &num1;    // num1의 메모리 주소 저장 

    numPtr2 = &numPtr1; // numPtr1의 메모리 주소 저장

    printf("%d\n", **numPtr2);    // 10: 포인터를 두 번 역참조하여 num1의 메모리 주소에 접근

    return 0;
}