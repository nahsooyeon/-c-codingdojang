#include <stdio.h>

#pragma pack(push, 1)
struct Packet {
    short length;
    int seq; // 4
};
#pragma pack(pop)

int main()
{
    struct Packet pkt;

    printf("%d\n", sizeof(pkt)); // 6

    return 0;
}
