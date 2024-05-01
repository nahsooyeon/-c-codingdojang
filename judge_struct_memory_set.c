#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

int main()
{
	struct Person p1;

	strcpy(p1.name, "홍길동");
	p1.age = 30;

	strcpy(p1.address, "서울시 용산구 한남동");

	memset(&p1, 0, sizeof(struct Person));

	printf("%s %d %s\n", p1.name, p1.age, p1.address);
	
	return 0;
}