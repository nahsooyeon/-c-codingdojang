
#include <stdio.h>
#include <float.h>

int main()
{
	/* -inf 출력되게 만들기 */
		float num1  = -FLT_MAX;
	    num1 = num1 * 1000.0f;
 
    printf("%f\n", num1);
 
    return 0;
}