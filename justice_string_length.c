#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

	char *s1 = malloc(sizeof(char) * 30);
	scanf("%s", s1);

	printf("%d\n", strlen(s1));

	return 0;
	
}
