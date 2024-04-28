/*  입력된 숫자의 서수 줄임말(1st, 2nd, 3rd, 4th, 5th, 6th, 7th)과
입력된 문자열이 출력되게 만들기 */

#include <stdio.h>

int main()
{
	int number;
	char name[31], result[40];

	scanf("%d %s", &number, name);

  if (number == 1) {
		sprintf(result, "%dst %s", number, name);
	} else if (number == 2) {
		sprintf(result, "%dnd %s", number, name);
	} else if (number == 3) {
		sprintf(result, "%drd %s", number, name);
	} else {
		sprintf(result, "%dth %s", number, name);
	}

	printf("%s\n", result);

	return 0;
}
