/* "n Wonderland", "nderland", "nd"이 각 줄마다 출력되게 만들기 */
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[30] = "Alice in Wonderland";
	char *ptr = strchr(s1, 'n'); // 'n'이 처음 나타나는 위치를 찾음
	while (ptr != NULL) // 'n'이 없을 때까지 반복
	{
		printf("%s\n", ptr); // 'n'이 나타나는 위치부터 끝까지 출력
		ptr = strchr(ptr + 1, 'n'); // 다음 'n'을 찾음
	}
}