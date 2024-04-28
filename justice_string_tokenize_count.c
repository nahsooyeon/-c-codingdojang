
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	/* 입력된 문자열에서 "the"의 개수를 출력하는 프로그램,
	"them", "there", "their" 등은 포함하지 않아야 합니다.
	the. 은 포함되어야한다.
	
	
  the grown-ups' response, this time, was to advise me to lay aside my drawings of boa constrictors, whether from the inside or the outside, and devote myself instead to geography, history, arithmetic, and grammar. That is why, at the age of six, I gave up what might have been a magnificent career as a painter. I had been disheartened by the failure of my Drawing Number One and my Drawing Number Two. Grown-ups never understand anything by themselves, and it is tiresome for children to be always and forever explaining things to the. 을 입력햇을 때 6이 출력되어야함
	 */

	char str[1001];

	int count = 0;

	scanf("%[^\n]s", str);

	char *tok = strtok(str, " .,"); // " " 공백 문자를 기준으로 문자열을 자름, 포인터 반환

	while (tok != NULL)
	{
		if (strcmp(tok, "the") == 0)
		{
			count++;
		}
		tok = strtok(NULL, " .,"); // 다음 문자열을 잘라서 포인터를 반환
	}

	

	printf("%d\n", count);
	return 0;
}