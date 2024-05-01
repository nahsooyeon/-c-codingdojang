/* sizeof(struct 구조체)
sizeof(구조체별칭)
sizeof(구조체변수)
sizeof 구조체변수

구조체를 정렬할 때 멤버 중에서 가장 큰 자료형 크기의 배수로 정렬한다.
 1바이트 크기의 char flags 뒤에는 4바이트를 맞추기 위해 남는 공간에 3바이트가 더 들어갑니다. 
 
 이렇게 구조체를 정렬할 때 남는 공간을 채우는 것을 패딩(padding)이라고 부릅니다.
 */

#include <stdio.h>

struct PacketHeader {
    char flags;    // 1바이트
    int seq;       // 4바이트
};

int main()
{
    struct PacketHeader header;

    printf("%lu\n", sizeof(header.flags));           /* 1: char는 1바이트 */
    printf("%lu\n", sizeof(header.seq));             /*  4: int는 4바이트 */
    printf("%lu\n", sizeof(header));                 /* 8: 구조체 전체 크기는 8바이트 */
    printf("%d\n", sizeof(struct PacketHeader));    /* 8: 구조체 이름으로 크기 구하기 */

    return 0;
}