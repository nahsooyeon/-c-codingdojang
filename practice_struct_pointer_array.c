/* 3천명의 인적정보를 0으로 만들기 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

int main()
{
	struct Person *p[3000];
	for (int i = 0; i < sizeof(p) / sizeof(struct Person *); i++) 
	{
		p[i] = malloc(sizeof(struct Person));
		memset(p[i], 0, sizeof(struct Person));

	}
	printf("%d\n", p[2000]->age);

    for (int i = 0; i < sizeof(p) / sizeof(struct Person *); i++)
    {
        free(p[i]);
    }

    return 0;
}