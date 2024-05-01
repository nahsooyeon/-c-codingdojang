#include <stdio.h>

// 12가 출력되어야함

struct EncryptionHeader {
	char flags; // 1바이트
	// 4바이트
	int seq;
	int length;
	
	
};

int main()
{
	struct EncryptionHeader header;

	printf("%lu\n", sizeof(header)); // 12: 구조체 전체 크기는 12

	return 0;
}