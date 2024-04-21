#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char *s1 = malloc(sizeof(char) * 30);
	char *s2 = malloc(sizeof(char) * 30);

	scanf("%s %s", s1, s2);

  int diff;
	diff = strcmp(s1, s2);
	
	printf("%d\n", diff);
	return 0;

}