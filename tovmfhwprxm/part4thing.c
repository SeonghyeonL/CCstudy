#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// 문제 21-1
/*
int main(void)
{
	int ch1, ch2;
	printf("알파벳 하나 입력: ");
	ch1 = getchar();
	if (ch1 >= 65 && ch1 <= 90) putchar(ch1 + 32);
	else if (ch1 <= 122 && ch1 >= 97) putchar(ch1 - 32);
	else printf("오류입니다.");
	printf("\n");
	return 0;
}
*/

// 문제 21-
int main(void)
{
	char str[7];
	int i;
	for (i = 0;i < 3;i++)
	{
		fgets(str, sizeof(str), stdin);
		printf("Read %d: %s\n", i + 1, str);
	}
	return 0;
}