#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

// 문제 16-1-1
/*
// 가로 9 세로 3 int형 2차원 배열
// 2단, 3단, 4단 (구구단) 저장 + 출력
int main(void)
{
	int gugu[3][9]; //세로가로
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
		printf("%d단: ", j + 2);
		for (i = 0;i < 9;i++)
		{
			printf("%d ", gugu[j][i]);
		}
		printf("\n");
	}
	return 0;
}
*/

// 문제 16-1-2
/*
// 배열 A, B 선언 (B는 A 이용)
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

// 문제 16-1-3

// 성적 관리 프로그램
int main(void)
{
	int sc[5][5]; int i, j;
	printf("1: 철희, 2: 철수, 3: 영희, 4: 영수 \n"); //세로
	printf("1: 국어, 2: 영어, 3: 수학, 4: 국사 \n"); //가로
	for (i = 0;i < 4;i++)
	{
		sc[i][4] = 0;
		for (j = 0;j < 4;j++)
		{
			printf("%d번 학생의 %d번 점수: ", i+1, j+1);
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