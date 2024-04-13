/* 표준 입력으로 두 정수가 입력됩니다(입력 값의 범위는 0~255). 플래그에 다음과 같은 연산을 하여 결과가 출력되게 만드세요. 정답에는 밑줄 친 부분에 들어갈 코드만 작성해야 합니다. */

/* 
1. num1의 비트를 왼쪽으로 3번 이동한 값으로 flag의 비트 켜기
2. num2의 비트를 오른쪽으로 2번 이동한 값으로 flag의 비트 끄기
3. flag의 첫 번째 비트 토글하기
 */

#define __USE_MINGW_ANSI_STDIO 1 // Dev-C++(MinGW)에서 %hhu를 사용하기 위한 설정
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	unsigned char flag = 16; // 16: 0001 0000
	unsigned char num1, num2; // 1 64

	scanf("%hhu %hhu", &num1, &num2);

	flag |= num1 << 3; // 1<<3 => 0000 1000 to flag => 0001 1000
	flag &= ~(num2 >> 2); // 64 >> 2 => 0000 0001 to ~flag => 1111 1110
	flag ^= 1 << 7;

	

	printf("%u\n", flag); // 136
	return 0;
}