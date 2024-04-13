#include <stdio.h>
/* 자료형이 정해져있지 않음 */
/* 자료형이 정해지지 않았으므로 값을 가져오거나 저장할 크기도 정해지지않음. 역참조 불가능 */
/* void 키워드로는 변수를 선언할 수도 없음 */
int main()
{
    int num1 = 10;
    char c1 = 'a';
    int *numPtr1 = &num1;
    char *cPtr1 = &c1;

    void *ptr;        // void 포인터 선언

    // 포인터 자료형이 달라도 컴파일 경고가 발생하지 않음
    ptr = numPtr1;    // void 포인터에 int 포인터 저장
    ptr = cPtr1;      // void 포인터에 char 포인터 저장

    // 포인터 자료형이 달라도 컴파일 경고가 발생하지 않음
    numPtr1 = ptr;    // int 포인터에 void 포인터 저장
    cPtr1 = ptr;      // char 포인터에 void 포인터 저장

    return 0;
}