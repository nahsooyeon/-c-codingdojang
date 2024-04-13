

#include <stdio.h>
/* Hello, world! 8 4.900000e-302가 출력되게 만듦 */
int main()
{
    printf("H%cllo, %s %d %Le\n", 'e', "world", 8, 4.9e-302L);

    return 0;
}