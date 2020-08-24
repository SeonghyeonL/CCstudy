#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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
/*
// "이정선 29" - 이름과 나이 사이에만 공백이 삽입
// 두 사람의 정보 입력 -> 이름과 나이 각각 같은지 판단
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char per1[20]; char per2[20];
	char dl1[20]; char dl2[20];
	int sk1, sk2;

	printf("형식: 이름 나이 (공백 필수)\n");
	printf("1번 정보 입력: ");
	fgets(per1, sizeof(per1), stdin);
	per1[strlen(per1) - 1] = 0;
	printf("2번 정보 입력: ");
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
			puts("이름 일치 / 나이 일치");
		else
			puts("이름 일치 / 나이 불일치");
	}
	else
	{
		if (sk1 == sk2)
			puts("이름 불일치 / 나이 일치");
		else
			puts("이름 불일치 / 나이 불일치");
	}
	return 0;
}
*/

// 문제 22-1
/*
// 종업원 이름, 주민등록번호, 급여정보
struct employee
{
	char name[20];
	char num[20];
	int payy;
};

int main(void)
{
	struct employee emp;

	printf("종업원 이름: "); scanf_s("%s", emp.name, 20);
	printf("주민등록번호: "); scanf_s("%s", emp.num, 20);
	printf("급여정보: "); scanf_s("%d", &(emp.payy));

	printf("%s / %s / %d\n", emp.name, emp.num, emp.payy);
	return 0;
}
*/

// 문제 22-2
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
		printf("%d번 종업원 이름: ", i+1); scanf_s("%s", emp[i].name, 20);
		printf("%d번 주민등록번호: ", i+1); scanf_s("%s", emp[i].num, 20);
		printf("%d번 급여정보: ", i+1); scanf_s("%d", &(emp[i].payy));
	}
	for (int i = 0;i < 3;i++)
	{
		printf("%d: %s / %s / %d\n", 
			i+1, emp[i].name, emp[i].num, emp[i].payy);
	}
	return 0;
}
*/

// 문제 23-1
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

// 문제 23-2
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
		printf("왼쪽위:     [%d, %d]    ", recc.upp.xpos, recc.upp.ypos);
		printf("오른쪽위:   [%d, %d]\n", recc.downn.xpos, recc.upp.ypos);
		printf("왼쪽아래:   [%d, %d]    ", recc.upp.xpos, recc.downn.ypos);
		printf("오른쪽아래: [%d, %d]\n", recc.downn.xpos, recc.downn.ypos);
	}
	else
	{
		printf("왼쪽위:     [%d, %d]    ", recc.downn.xpos, recc.upp.ypos);
		printf("오른쪽위:   [%d, %d]\n", recc.upp.xpos, recc.upp.ypos);
		printf("왼쪽아래:   [%d, %d]    ", recc.downn.xpos, recc.downn.ypos);
		printf("오른쪽아래: [%d, %d]\n", recc.upp.xpos, recc.downn.ypos);
	}
}

int main(void)
{
	Rectangle rect;
	printf("위쪽 점: ");
	scanf_s("%d %d", &(rect.upp.xpos), &(rect.upp.ypos));
	printf("아래쪽 점: ");
	scanf_s("%d %d", &(rect.downn.xpos), &(rect.downn.ypos));
	int areaa;
	areaa = AreaofRec(rect);
	printf("넓이: %d\n", areaa);
	Fourpt(rect);
	return 0;
}
*/

// 문제 24-1-1
/*
int main(void)
{
	FILE* fp;
	fopen_s(&fp, "D:\\1111111\\simple.txt", "wt");
	if (fp == NULL)
	{
		printf("실패\n"); return -1;
	}
	fprintf(fp, "#이름: 윤성우 \n");
	fprintf(fp, "#주민번호: 900208-1012589 \n");
	fputs("#전화번호: 010-1111-2222 \n", fp);
	fclose(fp);
	return 0;
}
*/

// 문제 24-1-2
/*
// 데이터를 추가하자
int main(void)
{
	FILE* fp;
	fopen_s(&fp, "D:\\1111111\\simple.txt", "at");
	fputs("#즐겨먹는 음식: 짬뽕, 탕수육 \n", fp);
	fputs("#취미: 축구 \n", fp);
	fclose(fp);
	return 0;
}
*/

// 문제 24-1-3
/*
// 문제 1과 2에서 생성한 정보 전체 출력
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

// 문제 24-2
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
	printf("파일 크기: %d \n", sizee);
	fgets(howlarge, sizeof(howlarge), fp);
	fputs(howlarge, stdout);
	midd = ftell(fp);
	fseek(fp, 0, SEEK_END);
	sizee = ftell(fp);
	fseek(fp, midd, SEEK_SET);
	printf("파일 크기: %d \n", sizee);  // 값 불변
	fgets(howlarge, sizeof(howlarge), fp);
	fputs(howlarge, stdout);
	fgets(howlarge, sizeof(howlarge), fp);
	fputs(howlarge, stdout);
	fclose(fp);
	return 0;
}
*/

// 문제 25-2-1
/*
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int len;
	printf("입력할 문자열의 최대길이: ");
	scanf_s("%d", &len);
	getchar();
	char* sen = (char*)malloc(sizeof(char) * len);
	printf("문자열: ");
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

// 문제 25-2-2
/*
#include <stdlib.h>
int main(void)
{
	int cnt = 0;
	int fiv = 5;
	int* sum = (int*)malloc(sizeof(int) * fiv);
	while (1)
	{
		printf("정수 입력: ");
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

// 문제 26-1-1
/*
//세 개의 정수를 받아서 덧셈, 곱셈
#define PLUS(A,B,C) ((A)+(B)+(C))
#define MUL(A,B,C) ((A)*(B)*(C))
int main(void)
{
	int a, b, c;
	printf("세 개의 정수: ");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("%d+%d+%d=%d\n", a, b, c, PLUS(a, b, c));
	printf("%d*%d*%d=%d\n", a, b, c, MUL(a, b, c));
	return 0;
}
*/

// 문제 26-1-2
/*
// 원주율 PI 정의, 원의 넓이 AREA
#define PI 3.14
#define AREA(R) ((R)*(R)*PI)
int main(void)
{
	double a;
	printf("반지름: ");
	scanf_s("%lf", &a);
	printf("넓이: %f\n", AREA(a));
	return 0;
}
*/

// 문제 26-1-3
/*
// 두 값 비교 큰 값 반환 MAX
#define MAX(A,B) ((A)>(B)?(A):(B))
int main(void)
{
	double a, b;
	printf("두 값 입력: ");
	scanf_s("%lf %lf", &a, &b);
	printf("큰 값: %f", MAX(a, b));
	return 0;
}
*/



