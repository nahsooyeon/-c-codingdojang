/* 10 3.200000 t가 출력되게 만드세요. */

#include <stdio.h>

int main()
{
	const long long unsigned int con1 = 10ULL;

	const float con2 = 3.2f;

	const char con3 = 't';
	
	printf("%llu %f %c\n", con1, con2, con3);

    return 0;
}