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
/*
// "������ 29" - �̸��� ���� ���̿��� ������ ����
// �� ����� ���� �Է� -> �̸��� ���� ���� ������ �Ǵ�
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char per1[20]; char per2[20];
	char dl1[20]; char dl2[20];
	int sk1, sk2;

	printf("����: �̸� ���� (���� �ʼ�)\n");
	printf("1�� ���� �Է�: ");
	fgets(per1, sizeof(per1), stdin);
	per1[strlen(per1) - 1] = 0;
	printf("2�� ���� �Է�: ");
	fgets(per2, sizeof(per2), stdin);
	per2[strlen(per2) - 1] = 0;

	for (int i = 0;i < strlen(per1);i++)
	{
		if (per1[i] == ' ')
		{
			strncpy_s(dl1, sizeof(dl1), per1, i);
			sk1 = atoi(&per1[i + 1]);
		}
	}
	for (int i = 0;i < strlen(per2);i++)
	{
		if (per2[i] == ' ')
		{
			strncpy_s(dl2, sizeof(dl2), per2, i);
			sk2 = atoi(&per2[i + 1]);
		}
	}
	if (!strcmp(dl1, dl2))
	{
		if (sk1 == sk2)
			puts("�̸� ��ġ / ���� ��ġ");
		else
			puts("�̸� ��ġ / ���� ����ġ");
	}
	else
	{
		if (sk1 == sk2)
			puts("�̸� ����ġ / ���� ��ġ");
		else
			puts("�̸� ����ġ / ���� ����ġ");
	}
	return 0;
}
*/

// ���� 22-1
/*
// ������ �̸�, �ֹε�Ϲ�ȣ, �޿�����
struct employee
{
	char name[20];
	char num[20];
	int payy;
};

int main(void)
{
	struct employee emp;

	printf("������ �̸�: "); scanf_s("%s", emp.name, 20);
	printf("�ֹε�Ϲ�ȣ: "); scanf_s("%s", emp.num, 20);
	printf("�޿�����: "); scanf_s("%d", &(emp.payy));

	printf("%s / %s / %d\n", emp.name, emp.num, emp.payy);
	return 0;
}
*/

// ���� 22-2
/*
struct employee
{
	char name[20];
	char num[20];
	int payy;
};

int main(void)
{
	struct employee emp[3];

	for (int i = 0;i < 3;i++)
	{
		printf("%d�� ������ �̸�: ", i+1); scanf_s("%s", emp[i].name, 20);
		printf("%d�� �ֹε�Ϲ�ȣ: ", i+1); scanf_s("%s", emp[i].num, 20);
		printf("%d�� �޿�����: ", i+1); scanf_s("%d", &(emp[i].payy));
	}
	for (int i = 0;i < 3;i++)
	{
		printf("%d: %s / %s / %d\n", 
			i+1, emp[i].name, emp[i].num, emp[i].payy);
	}
	return 0;
}
*/

// ���� 23-1


