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

// ���� 21-2-1
/*
// ���ڿ� �Է� -> ������ ����
#include <string.h>
int main(void)
{
	char thgs[40];
	int i, j; int sum = 0;
	fputs("���ڿ� �Է�: ", stdout);
	fgets(thgs, sizeof(thgs), stdin);
	for (i = 0;i < strlen(thgs);i++)
	{
		if (thgs[i] > '0' && thgs[i] <= '9')
			sum += (thgs[i]-48) ;
	}
	printf("������ �� ��: %d", sum);
	return 0;
}
*/

// ���� 21-2-2
/*
// ���ڿ� �Է�(fgets), str1 -> str3, str3+str2
#include <string.h>
int main(void)
{
	char str1[20]; char str2[20]; char str3[40];
	printf("1�� ���ڿ� �Է�: ");
	fgets(str1, sizeof(str1), stdin);
	printf("2�� ���ڿ� �Է�: ");
	fgets(str2, sizeof(str2), stdin);
	int len1 = strlen(str1); str1[len1 - 1] = 0;
	int len2 = strlen(str2); str2[len2 - 1] = 0;
	strcpy_s(str3, sizeof(str1), str1);
	strcat_s(str3, sizeof(str2), str2);
	puts(str3);
	return 0;
}
*/

// ���� 21-2-3


