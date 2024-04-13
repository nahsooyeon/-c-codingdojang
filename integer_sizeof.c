#include <stdio.h>

int main()
{
	    printf("char: %ld, short: %ld, int: %ld, long: %ld, long long: %ld\n",
        sizeof(char),        // 1: sizeof로 char 자료형의 크기를 구함
        sizeof(short),       // 2: sizeof로 short 자료형의 크기를 구함
        sizeof(int),         // 4: sizeof로 int 자료형의 크기를 구함
        sizeof(long),        // 4: sizeof로 long 자료형의 크기를 구함
        sizeof(long long)    // 8: sizeof로 long long 자료형의 크기를 구함
    );


	return 0;
}