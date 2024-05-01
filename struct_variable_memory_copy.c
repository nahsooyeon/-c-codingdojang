/* memcpy(목적지포인터, 원본포인터, 크기);
void *memcpy(void *_Dst, void const *_Src, size_t _Size);
목적지 포인터를 반환
 */

#include <stdio.h>
#include <string.h>

struct Point2D {
	int x;
	int y;
};

int main()
{
	struct Point2D p1;
	struct Point2D p2;

	p1.x = 10;
	p1.y = 20;

	memcpy(&p2, &p1, sizeof(p1));

	printf("%d %d\n", p2.x, p2.y); // 10 20

	return 0;
}