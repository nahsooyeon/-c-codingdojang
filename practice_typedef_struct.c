/* typedef로 좌표 구조체 정의하기 */

#include <stdio.h>

typedef struct {
		int x;
		int y;
} Point2D;

int main()
{

Point2D p1;
p1.x = 10;
p1.y = 20;

printf("%d %d\n", p1.x, p1.y);

return 0;
}