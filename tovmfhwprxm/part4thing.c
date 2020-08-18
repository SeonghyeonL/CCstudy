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

// 문제 21-2-1
/*
// 문자열 입력 -> 숫자의 총합
#include <string.h>
int main(void)
{
	char thgs[40];
	int i, j; int sum = 0;
	fputs("문자열 입력: ", stdout);
	fgets(thgs, sizeof(thgs), stdin);
	for (i = 0;i < strlen(thgs);i++)
	{
		if (thgs[i] > '0' && thgs[i] <= '9')
			sum += (thgs[i]-48) ;
	}
	printf("숫자의 총 합: %d", sum);
	return 0;
}
*/

// 문제 21-2-2
/*
// 문자열 입력(fgets), str1 -> str3, str3+str2
#include <string.h>
int main(void)
{
	char str1[20]; char str2[20]; char str3[40];
	printf("1번 문자열 입력: ");
	fgets(str1, sizeof(str1), stdin);
	printf("2번 문자열 입력: ");
	fgets(str2, sizeof(str2), stdin);
	int len1 = strlen(str1); str1[len1 - 1] = 0;
	int len2 = strlen(str2); str2[len2 - 1] = 0;
	strcpy_s(str3, sizeof(str1), str1);
	strcat_s(str3, sizeof(str2), str2);
	puts(str3);
	return 0;
}
*/

// 문제 21-2-3


