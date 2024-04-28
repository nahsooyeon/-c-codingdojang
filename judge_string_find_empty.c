#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char str[1000];

	int count = 0;
	scanf("%[^\n]s", str);
	for(int i = 0; i < strlen(str); i++){
		if(str[i] == ' '){
			count++;
		}
	}
	printf("%d\n", count);
	return 0;

}