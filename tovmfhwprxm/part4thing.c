#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// ���� 21-1
/*
int main(void)
{
	int ch1, ch2;
	printf("���ĺ� �ϳ� �Է�: ");
	ch1 = getchar();
	if (ch1 >= 65 && ch1 <= 90) putchar(ch1 + 32);
	else if (ch1 <= 122 && ch1 >= 97) putchar(ch1 - 32);
	else printf("�����Դϴ�.");
	printf("\n");
	return 0;
}
*/

// ���� 21-
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