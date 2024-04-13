#include <stdio.h>

int main()
{
	char c1 = 'a';
	char c2 = 'b';

	printf("%c, %d\n", c1, c1);    // a, 97: a의 ASCII 코드값은 97
  printf("%c, %d\n", c2, c2);    // b, 98: b의 ASCII 코드값은 98
	return 0;
}