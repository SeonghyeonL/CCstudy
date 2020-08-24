#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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
/*
typedef struct point
{
	int xpos;
	int ypos;
} Point;

Point SwapPoint(Point *pos1, Point *pos2)
{
	Point poss;
	poss = *pos1; *pos1 = *pos2; *pos2 = poss;
}

int main(void)
{
	Point pos1 = { 2,4 };
	Point pos2 = { 5,7 };
	SwapPoint(&pos1, &pos2);
	printf("[%d %d]\n", pos1.xpos, pos1.ypos);
	printf("[%d %d]\n", pos2.xpos, pos2.ypos);
	return 0;
}
*/

// ���� 23-2
/*
typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct rectangle
{
	Point upp;
	Point downn;
} Rectangle;

int AreaofRec(Rectangle recc)
{
	int rkfh, tpfh, sjfqdl;
	if (recc.downn.xpos >= recc.upp.xpos)
		rkfh = recc.downn.xpos - recc.upp.xpos;
	else rkfh = recc.upp.xpos - recc.downn.xpos;
	tpfh = recc.upp.ypos - recc.downn.ypos;
	sjfqdl = rkfh * tpfh;
	return sjfqdl;
}

void Fourpt(Rectangle recc)
{
	if (recc.downn.xpos >= recc.upp.xpos)
	{
		printf("������:     [%d, %d]    ", recc.upp.xpos, recc.upp.ypos);
		printf("��������:   [%d, %d]\n", recc.downn.xpos, recc.upp.ypos);
		printf("���ʾƷ�:   [%d, %d]    ", recc.upp.xpos, recc.downn.ypos);
		printf("�����ʾƷ�: [%d, %d]\n", recc.downn.xpos, recc.downn.ypos);
	}
	else
	{
		printf("������:     [%d, %d]    ", recc.downn.xpos, recc.upp.ypos);
		printf("��������:   [%d, %d]\n", recc.upp.xpos, recc.upp.ypos);
		printf("���ʾƷ�:   [%d, %d]    ", recc.downn.xpos, recc.downn.ypos);
		printf("�����ʾƷ�: [%d, %d]\n", recc.upp.xpos, recc.downn.ypos);
	}
}

int main(void)
{
	Rectangle rect;
	printf("���� ��: ");
	scanf_s("%d %d", &(rect.upp.xpos), &(rect.upp.ypos));
	printf("�Ʒ��� ��: ");
	scanf_s("%d %d", &(rect.downn.xpos), &(rect.downn.ypos));
	int areaa;
	areaa = AreaofRec(rect);
	printf("����: %d\n", areaa);
	Fourpt(rect);
	return 0;
}
*/

// ���� 24-1-1
/*
int main(void)
{
	FILE* fp;
	fopen_s(&fp, "D:\\1111111\\simple.txt", "wt");
	if (fp == NULL)
	{
		printf("����\n"); return -1;
	}
	fprintf(fp, "#�̸�: ������ \n");
	fprintf(fp, "#�ֹι�ȣ: 900208-1012589 \n");
	fputs("#��ȭ��ȣ: 010-1111-2222 \n", fp);
	fclose(fp);
	return 0;
}
*/

// ���� 24-1-2
/*
// �����͸� �߰�����
int main(void)
{
	FILE* fp;
	fopen_s(&fp, "D:\\1111111\\simple.txt", "at");
	fputs("#��ܸԴ� ����: «��, ������ \n", fp);
	fputs("#���: �౸ \n", fp);
	fclose(fp);
	return 0;
}
*/

// ���� 24-1-3
/*
// ���� 1�� 2���� ������ ���� ��ü ���
int main(void)
{
	char sth[30];
	FILE* fp;
	fopen_s(&fp, "D:\\1111111\\simple.txt", "rt");
	for (int i = 0;i < 6;i++)
	{
		fgets(sth, sizeof(sth), fp);
		printf("%s", sth);
	}
	fclose(fp);
	return 0;
}
*/

// ���� 24-2
/*
int main(void)
{
	FILE* fp;
	fopen_s(&fp, "D:\\1111111\\rPtks.txt", "rt");
	char howlarge[100];
	fgets(howlarge, sizeof(howlarge), fp);
	fputs(howlarge, stdout);
	int sizee, midd;
	midd = ftell(fp);
	fseek(fp, 0, SEEK_END);
	sizee = ftell(fp);
	fseek(fp, midd, SEEK_SET);
	printf("���� ũ��: %d \n", sizee);
	fgets(howlarge, sizeof(howlarge), fp);
	fputs(howlarge, stdout);
	midd = ftell(fp);
	fseek(fp, 0, SEEK_END);
	sizee = ftell(fp);
	fseek(fp, midd, SEEK_SET);
	printf("���� ũ��: %d \n", sizee);  // �� �Һ�
	fgets(howlarge, sizeof(howlarge), fp);
	fputs(howlarge, stdout);
	fgets(howlarge, sizeof(howlarge), fp);
	fputs(howlarge, stdout);
	fclose(fp);
	return 0;
}
*/

// ���� 25-2-1
/*
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int len;
	printf("�Է��� ���ڿ��� �ִ����: ");
	scanf_s("%d", &len);
	getchar();
	char* sen = (char*)malloc(sizeof(char) * len);
	printf("���ڿ�: ");
	fgets(sen, len, stdin);
	int rlfdl = strlen(sen);
	sen[rlfdl - 1] = 0;
	for (int i = 0;i < rlfdl;i++)
	{
		if (sen[rlfdl - i] == ' ')
		{
			printf("%s ", &sen[rlfdl +1 - i]);
			sen[rlfdl -i] = 0;
		}
	}
	printf("%s ", &sen[0]);
	free(sen);
	return 0;
}
*/

// ���� 25-2-2
/*
#include <stdlib.h>
int main(void)
{
	int cnt = 0;
	int fiv = 5;
	int* sum = (int*)malloc(sizeof(int) * fiv);
	while (1)
	{
		printf("���� �Է�: ");
		scanf_s("%d", &sum[cnt]);
		getchar();
		if (sum[cnt] == -1)
			break;
		if (cnt == 4)
		{
			fiv = fiv + 3;
			sum = (int*)realloc(sum, sizeof(int) * fiv);
		}
		cnt++;
	}
	for (int i = 0;i < cnt;i++)
		printf("%d ", sum[i]);
	free(sum);
	return 0;
}
*/

// ���� 26-1-1
/*
//�� ���� ������ �޾Ƽ� ����, ����
#define PLUS(A,B,C) ((A)+(B)+(C))
#define MUL(A,B,C) ((A)*(B)*(C))
int main(void)
{
	int a, b, c;
	printf("�� ���� ����: ");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%d+%d+%d=%d\n", a, b, c, PLUS(a, b, c));
	printf("%d*%d*%d=%d\n", a, b, c, MUL(a, b, c));
	return 0;
}
*/

// ���� 26-1-2
/*
// ������ PI ����, ���� ���� AREA
#define PI 3.14
#define AREA(R) ((R)*(R)*PI)
int main(void)
{
	double a;
	printf("������: ");
	scanf_s("%lf", &a);
	printf("����: %f\n", AREA(a));
	return 0;
}
*/

// ���� 26-1-3
/*
// �� �� �� ū �� ��ȯ MAX
#define MAX(A,B) ((A)>(B)?(A):(B))
int main(void)
{
	double a, b;
	printf("�� �� �Է�: ");
	scanf_s("%lf %lf", &a, &b);
	printf("ū ��: %f", MAX(a, b));
	return 0;
}
*/



