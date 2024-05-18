#include <stdio.h>

int main()
{
	FILE *fp;
	int distance;
	fp = fopen("ftell.txt", "w");
	fputs("EBS Education", fp);
	fclose(fp);

	fp = fopen("ftell.txt", "r");
	fseek(fp, -6, SEEK_END);
	fprintf(stdout, "%c \n", fgetc(fp));
	distance = ftell(fp);
	printf("위치 : %d\n", distance);

	fclose(fp);
	return 0;
}