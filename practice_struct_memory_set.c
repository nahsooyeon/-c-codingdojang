#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Point2D {
	int x;
	int y;
};

int main()
{
	struct Point2D p;
	struct Point2D *ptr = malloc(sizeof(struct Point2D));

	memset(&p, 0, sizeof(struct Point2D));
	memset(ptr, 0, sizeof(struct Point2D));	

	printf("%d %d %d %d\n", p.x, p.y, ptr->x, ptr->y); // 0 0 0 0

	free(ptr);

	return 0;
}