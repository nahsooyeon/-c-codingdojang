/* memset(구조체포인터, 설정할값, sizeof(struct 구조체)); */
#include <stdio.h>
#include <string.h>


struct Point2D {
	int x;
	int y;
};
int main()
{
	struct Point2D p1;
	memset(&p1, 0, sizeof(struct Point2D));

	printf("%d %d\n", p1.x, p1.y); // 0 0

	return 0;
}