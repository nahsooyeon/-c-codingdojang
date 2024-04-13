/* 표준 입력으로 문자 'f', 'c', 'p' 중 하나가 입력됩니다.
입력된 문자가 'f'라면 "환타", 
'c'라면 "콜라", 
'p'라면 "포카리스웨트"를 출력하고,
아무 문자에도 해당되지 않으면 
"판매하지 않는 메뉴"를 출력하는 프로그램을 만드세요. */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char menu;

	scanf("%c", &menu);

	switch (menu)
	{
	case 'f':
		printf("환타\n");
		break;
	case 'c':
		printf("콜라\n");
		break;
	case 'p':
		printf("포카리스웨트\n");
		break;
	default:
		printf("판매하지 않는 메뉴\n");
		break;
	}
	return 0;
}