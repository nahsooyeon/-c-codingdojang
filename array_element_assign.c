#include <stdio.h>

int main()
{
    int numArr[10];     // 크기가 10인 배열 선언
    numArr[0] = 11;     // 인덱스가 0인 배열의 요소에 값 할당
    numArr[1] = 22;     // 인덱스가 1인 배열의 요소에 값 할당
    numArr[2] = 33;     // 인덱스가 2인 배열의 요소에 값 할당
    numArr[3] = 44;     // 인덱스가 3인 배열의 요소에 값 할당
    numArr[4] = 55;     // 인덱스가 4인 배열의 요소에 값 할당
    numArr[5] = 66;     // 인덱스가 5인 배열의 요소에 값 할당
    numArr[6] = 77;     // 인덱스가 6인 배열의 요소에 값 할당
    numArr[7] = 88;     // 인덱스가 7인 배열의 요소에 값 할당
    numArr[8] = 99;     // 인덱스가 8인 배열의 요소에 값 할당
    numArr[9] = 110;    // 인덱스가 9인 배열의 요소에 값 할당

    printf("%d\n", numArr[0]);    // 11: 배열의 첫 번째(인덱스 0) 요소 출력
    printf("%d\n", numArr[5]);    // 66: 배열의 여섯 번째(인덱스 5) 요소 출력
    printf("%d\n", numArr[9]);    // 110: 배열의 열 번째(인덱스 9) 요소 출력
    printf("%lu", sizeof(numArr)/sizeof(int));

    return 0;
}
