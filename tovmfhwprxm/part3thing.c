#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// ���� 16-1-1
/*
// ���� 9 ���� 3 int�� 2���� �迭
// 2��, 3��, 4�� (������) ���� + ���
int main(void)
{
	int gugu[3][9]; //���ΰ���
	int i, j;
	for (j = 0;j < 3;j++)
	{
		for (i = 0;i < 9;i++)
		{
			gugu[j][i] = (i + 1) * (j + 2);
		}
	}
	for (j = 0;j < 3;j++)
	{
		printf("%d��: ", j + 2);
		for (i = 0;i < 9;i++)
		{
			printf("%d ", gugu[j][i]);
		}
		printf("\n");
	}
	return 0;
}
*/

// ���� 16-1-2
/*
// �迭 A, B ���� (B�� A �̿�)
// 1 2 3 4		1 5
// 5 6 7 8		2 6
//				3 7
//				4 8
int main(void)
{
	int aa[2][4] = { 1,2,3,4,5,6,7,8 };
	int bb[4][2];
	int i, j;
	for (i = 0;i < 4;i++)
	{
		for (j = 0;j < 2;j++)	bb[i][j] = aa[j][i];
	}
	for (i = 0;i < 2;i++)
		printf("%d %d %d %d\n", aa[i][0], aa[i][1], aa[i][2], aa[i][3]);
	for (i = 0;i < 4;i++)
		printf("%d %d\n", bb[i][0], bb[i][1]);
	return 0;
}
*/

// ���� 16-1-3

// ���� ���� ���α׷�
int main(void)
{
	int sc[5][5]; int i, j;
	printf("1: ö��, 2: ö��, 3: ����, 4: ���� \n"); //����
	printf("1: ����, 2: ����, 3: ����, 4: ���� \n"); //����
	for (i = 0;i < 4;i++)
	{
		sc[i][4] = 0;
		for (j = 0;j < 4;j++)
		{
			printf("%d�� �л��� %d�� ����: ", i+1, j+1);
			scanf_s("%d", &sc[i][j]);
			sc[i][4] += sc[i][j];
		}
	}
	sc[4][0] = sc[0][0] + sc[1][0] + sc[2][0] + sc[3][0];
	sc[4][1] = sc[0][1] + sc[1][1] + sc[2][1] + sc[3][1];
	// ... ummm
	sc[4][4] = sc[0][4] + sc[1][4] + sc[2][4] + sc[3][4];
	return 0;
}