#include <stdio.h>
/*  구조체에서 멤버의 위치(offset)를 구할 때는 offsetof 매크로를 사용 */
#include <stddef.h>   // offsetof 매크로가 정의된 헤더 파일

struct PacketHeader {
    char flags;    // 1바이트
    int seq;       // 4바이트
};

int main()
{
    printf("%d\n", offsetof(struct PacketHeader, flags));    // 0
    printf("%d\n", offsetof(struct PacketHeader, seq));      // 4

    return 0;
}