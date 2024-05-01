/* 3이 출력되게 수정 */

#include <stdio.h>

struct Packet {
	char data;
	char data2;
	char data3;
};

int main()
{
	struct Packet pkt;

	printf("%d\n", sizeof(pkt)); // 3
	return 0;
}