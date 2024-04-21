#include <stdio.h>
#include <string.h>

int main()
{
	char s1[10] = "hello";
	char s2[10];

	strcpy(s2, s1);

	printf("%s\n", s2);

	return 0;
}