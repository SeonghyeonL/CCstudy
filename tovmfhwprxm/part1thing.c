
// part 1


// 문제 2-1-1
/*
#include <stdio.h>
int main(void)
{
	printf("이성현\n이 성 현\n이  성  현\n");
	return 0;
}
*/

// 문제 2-1-2
/*
#include <stdio.h>
int main(void)
{
	printf("이름: 이성현\n");
	printf("주소: 인천광역시\n");
	printf("전화번호: 010-1111-2222\n");
	return 0;
}
*/

// 문제 2-2-1
/*
#include <stdio.h>
int main(void)
{
	printf("제 이름은 홍길동입니다.\n");
	printf("제 나이는 %d살이고요.\n", 20);
	printf("제가 사는 곳의 번지수는 %d-%d입니다.\n", 123, 456);
	return 0;
}
*/

// 문제 2-2-2
/*
#include <stdio.h>
int main(void)
{
	printf("%dX%d=%d\n", 4, 5, 20);
	printf("%dX%d=%d\n", 7, 9, 63);
	return 0;
}
*/

// 문제 3-1-1
/*
#include <stdio.h>
int main(void)
{
	int a, b;
	printf("두 개의 정수 : ");
	scanf("%d %d", &a, &b);
	printf("%d-%d=%d\n", a, b, a - b);
	printf("%dX%d=%d\n", a, b, a * b);
	return 0;
}
*/

// 문제 3-1-2
/*
#include <stdio.h>
int main(void)
{
	int num1, num2, num3;
	printf("세 개의 정수 : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("%dx%d+%d=%d\n", num1, num2, num3, num1 * num2 + num3);
	return 0;
}
*/

// 문제 3-1-3
/*
#include <stdio.h>
int main(void)
{
	int a, b;
	printf("정수를 입력하시오 : ");
	scanf("%d", &a);
	b = a * a;
	printf("%d의 제곱 : %d\n", a, b);
	return 0;
}
*/

// 문제 3-1-4
/*
#include <stdio.h>
int main(void)
{
	int a, b;
	printf("두 정수를 입력하시오 : ");
	scanf("%d %d", &a, &b);
	printf("%d/%d의 몫은 %d이고 나머지는 %d입니다\n", a, b, a / b, a % b);
	return 0;
}
*/

// 문제 3-1-5
/*
#include <stdio.h>
int main(void)
{
	int num1, num2, num3, ans;
	printf("세 정수를 입력하시오 : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	ans = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("연산 결과: %d\n", ans);
	return 0;
}

// 결과에 연산 식도 화면에 나타나게 하고 싶은데 num3%num1에 해당하는 부분을
// "%d % %d"로 쓰면 원하는 형태로 출력이 되지 않음 - 이를 어떻게 하면 좋을까,,,
// % 출력 -> %%
*/

// 문제 4-4-1
/*
#include <stdio.h>
int main(void)
{
	int a, b;
	printf("정수를 입력하시오: ");
	scanf("%d", &a);
	b = ~a + 1;
	printf("결과: %d\n", b);
	return 0;
}
*/

// 문제 4-4-2
/*
#include <stdio.h>
int main(void)
{
	int a, b, ans;
	a = 3;
	b = 3 << 3;
	ans = b >> 2;
	printf("3x8/4=%d\n", ans);
}
*/

// 문제 5-1-1
/*
#include <stdio.h>
int main(void)
{
	int x1, y1, x2, y2, ans;
	printf("좌 상단의 x, y 좌표 값은 우 하단의 x, y 좌표 값보다 작음\n");
	printf("좌 상단의 x, y 좌표: ");
	scanf("%d %d", &x1, &y1);
	printf("우 상단의 x, y 좌표: ");
	scanf("%d %d", &x2, &y2);
	ans = (x2 - x1) * (y2 - y1);
	printf("두 점이 이루는 직사각형의 넓이는 %d입니다.\n", ans);
	return 0;
}
*/

// 문제 5-1-2
/*
#include <stdio.h>
int main(void)
{
	double a, b;
	printf("두 개의 실수를 입력하시오: ");
	scanf("%lf %lf", &a, &b);
	// scanf에서 f:float lf:double Lf:longdouble
	// printf에서는 f:float&double Lf:longdouble
	printf("%f+%f=%f\n", a, b, a + b);
	printf("%f-%f=%f\n", a, b, a - b);
	printf("%fx%f=%f\n", a, b, a * b);
	printf("%f/%f=%f\n", a, b, a / b);
	return 0;
}
*/

// 문제 5-1-4
/*
#include <stdio.h>
int main(void)
{
	int a;
	printf("정수(0~127)를 입력하시오: ");
	scanf("%d", &a);
	printf("아스키 코드 문자: %c\n", a);
	return 0;
}
*/

// 문제 5-1-5
/*
#include <stdio.h>
int main(void)
{
	char a;
	printf("1개의 알파벳 입력: ");
	scanf("%c", &a);
	printf("아스키 코드 값: %d\n", a);
	return 0;
}
*/

// 문제 7-1-1
/*
#include <stdio.h>
int main(void)
{
	int a;
	printf("1개의 양의 정수: ");
	scanf("%d", &a);
	while (a > 0)
	{
		printf("Hello world!\n");
		a = a - 1;
	}
	return 0;
}
*/

// 문제 7-1-2
/*
#include <stdio.h>
int main(void)
{
	int a, b;
	printf("1개의 양의 정수: ");
	scanf("%d", &a);
	b = a + 1;
	while (a > 0)
	{
		printf("%d ", 3 * (b - a));
		a = a - 1;
	}
	return 0;
}
*/

// 문제 7-1-3
/*
#include <stdio.h>
int main(void)
{
	int a, b;
	a = 1; b = 0;
	printf("정수를 입력하시오 (0=종료)\n");
	while (a != 0)
	{
		scanf("%d", &a);
		b = b + a;
	}
	printf("입력된 정수의 합: %d\n", b);
	return 0;
}
*/

// 문제 7-1-4
/*
#include <stdio.h>
int main(void)
{
	int a, b; b = 9;
	printf("숫자(1~9): ");
	scanf("%d", &a);
	while (b > 0)
	{
		printf("%d ", a * b);
		b -= 1;
	}
	return 0;
}
*/

// 문제 7-1-5
/*
#include <stdio.h>
int main(void)
{
	int a, b, ord, sum; double av;
	ord = 0; sum = 0;
	printf("입력할 정수의 개수: ");
	scanf("%d", &a);
	while (ord < a)
	{
		printf("%d번째 정수: ", ord + 1);
		scanf("%d", &b);
		sum = sum + b;
		ord = ord + 1;
	}
	av = sum / a;
	printf("평균: %f\n", av);
	return 0;
}
*/

// 문제 7-2-1
/*
#include <stdio.h>
int main(void)
{
	int i, num, sum; i = 0; sum = 0;
	printf("정수 5개의 합 (조건: 1 이상의 정수)\n");
	while (i < 5)
	{
		printf("%d번째 정수: ", i + 1);
		scanf("%d", &num);
		while (num < 1)
		{
			printf("조건에 맞게 입력하세요: ");
			scanf("%d", &num);
		}
		sum = sum + num;  // sum+=num;
		i++;
	}
	printf("결과: %d\n", sum);
	return 0;
}
*/

// 문제 7-2-2
/*
#include <stdio.h>
int main(void)
{
	int i, j; i = 1; j = 1;
	while (i < 6)
	{
		while (j < i)
		{
			printf("o");
			j++;
		}
		j = 1;
		printf("*\n");
		i++;
	}
	return 0;
}
*/

// 문제 7-3-1 - 방법 1
/*
#include <stdio.h>
int main(void)
{
	int total = 0, num = 1;

	while (num != 0)
	{
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);
		total += num;
	}
	printf("합계: %d\n", total);
	return 0;
}
*/

// 문제 7-3-1 - 방법 2
/*
#include <stdio.h>
int main(void)
{
	int total = 0, num = 0;
	printf("정수 입력(0 to quit): ");
	scanf("%d", &num);
	while (num != 0)
	{
		total += num;
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);
	}
	printf("합계: %d\n", total);
	return 0;
}
*/

// 문제 7-3-2
/*
#include <stdio.h>
int main(void)
{
	int i = 0, sum = 0;
	do
	{
		sum += 2 * i;
		i++;
	} while (i < 51);
	printf("결과: %d\n", sum);
	return 0;
}
*/

// 문제 7-3-3
/*
#include <stdio.h>
int main(void)
{
	int cur = 2, is = 0;

	do
	{
		is = 1;
		do
		{
			printf("%dX%d=%d\n", cur, is, cur * is);
			is++;
		} while (is < 10);
		cur++;
	} while (cur < 10);
	return 0;
}
*/

// 문제 7-4-1
/*
#include <stdio.h>
int main(void)
{
	int n1, n2, i, sum = 0;
	printf("두 개의 정수를 입력하시오: ");
	scanf("%d %d", &n1, &n2);
	for (i = n1;i <= n2;i++)
	{
		sum += i;
	}
	printf("결과: %d\n", sum);
	return 0;
}
*/

// 문제 7-4-2
/*
#include <stdio.h>
int main(void)
{
	int n1, i, ans = 1;
	printf("팩토리얼 계산을 위한 정수 입력: ");
	scanf("%d", &n1);
	for (i = 1;i <= n1;i++)
	{
		ans = ans * i;
	}
	printf("결과: %d\n", ans);
	return 0;
}
*/

// 문제 8-1-1
/*
#include <stdio.h>
int main(void)
{
	// 1 이상 100 미만 정수 중 7의 배수와 9의 배수를 출력
	// 단, 7의 배수이면서 9의 배수인 수는 한 번만 출력
	int i;
	printf("1부터 99까지의 7 및 9의 배수\n");
	for (i = 1;i < 100;i++)
	{
		if (i % 7 == 0 || i % 9 == 0)
			printf("%d ", i);
	}
	return 0;
}
*/

// 문제 8-1-2
/*
#include <stdio.h>
int main(void)
{
	// 두 개의 정수의 차 계산 (순서 무관, 큰 수 - 작은 수)
	int a, b;
	printf("두 개의 정수: ");
	scanf("%d %d", &a, &b);
	if (a >= b)
		printf("%d-%d=%d\n", a, b, a - b);
	else
		printf("%d-%d=%d\n", b, a, b - a);
	return 0;
}
*/

// 문제 8-1-3
/*
#include <stdio.h>
int main(void)
{
	// 학생 전체 평균점수 (순서대로 국어, 영어, 수학)
	// 결과=학점) 90점~ A, 80점~ B, 70점~ C, 50점~ D, 나머지 F
	int a, b, c; double d; char grad;
	printf("국어 점수: ");	scanf("%d", &a);
	printf("영어 점수: ");	scanf("%d", &b);
	printf("수학 점수: ");	scanf("%d", &c);
	d = (a + b + c) / 3.0; // 실수 형태로 나눠야 d가 소수점 값 가짐
	if (d >= 90) grad = 65; // A
	else if (d >= 80) grad = 66; // B
	else if (d >= 70) grad = 67; // C
	else if (d >= 50) grad = 68; // D
	else grad = 70; // F
	printf("결과: %f --- %c\n", d, grad);
	return 0;
}
*/

// 문제 8-1-4
/*
#include <stdio.h>
int main(void)
{
	// 문제 2 - 조건 연산자 이용
	int a, b, ans;
	printf("두 개의 정수: ");
	scanf("%d %d", &a, &b);
	ans = a >= b ? a - b : b - a;
	printf("차=%d\n", ans);
	return 0;
}
*/

// 문제 8-2-1
/*
#include <stdio.h>
int main(void)
{
	// 구구단 중 2단, 4단, 6단, 8단만 nxn까지 출력
	// continue와 break 사용할 것
	int a, b;
	for (a = 1;a < 10;a++)
	{
		if (a % 2 != 0) continue;
		else
		{
			for (b = 1;b < 10;b++)
			{
				if (b > a) break;
				else printf("%dx%d=%d\n", a, b, a * b);
			}
		}
	}
	return 0;
}
*/

// 문제 8-2-2
/*
#include <stdio.h>
int main(void)
{
	// AZ+ZA=99 만족하는 모든 A와 Z 찾기
	// 반복문의 중첩 필요
	int a, z, sum;
	for (a = 0;a < 10;a++)
	{
		for (z = 0;z < 10;z++)
		{
			sum = 11 * (a + z);
			if (sum != 99) continue;
			else printf("%d%d+%d%d=99\n", a, z, z, a);
		}
	}
	return 0;
}
*/

// 문제 8-3-1
/*
#include <stdio.h>
int main(void)
{
	int n, m;
	printf("양의 정수를 입력: ");
	scanf("%d", &n);
	m = n / 10;
	switch (m)
	{
	case 0:
		printf("0이상 10미만\n"); break;
	case 1:
		printf("10이상 20미만\n"); break;
	case 2:
		printf("20이상 30미만\n"); break;
	default:
		printf("30이상\n");
	}
	return 0;
}
*/

// 문제 9-1-1
/*
#include <stdio.h>
int main(void)
{
	// 세 개의 정수를 인자로 받음
	// 가장 큰 수 반환 or 가장 작은 수 반환
	int i, j, k, res1, res2;
	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &i, &j, &k);
	res1 = LARGG(i, j, k); res2 = SMALLL(i, j, k);
	printf("가장 큰 수 %d, 가장 작은 수 %d\n", res1, res2);
	return 0;
}

int LARGG(int i, int j, int k)
{
	if (i >= j && i >= k) return i;
	else if (j >= i && j >= k) return j;
	else if (k >= i && k >= j) return k;
}

int SMALLL(int a, int b, int c)
{
	if (a <= b && a <= c) return a;
	else if (b <= a && b <= c) return b;
	else if (c <= a && c <= b) return c;
}
*/

// 문제 9-1-2
/*
#include <stdio.h>

double CelToFah(double i)
{
	return 1.8 * i + 32;
}

double FahToCel(double i)
{
	return (i - 32) / 1.8;
}

int main(void)
{
	// 섭씨→화씨 / 화씨→섭씨 (Fah=1.8*Cel+32)
	int sel; double a, res;
	printf("섭씨→화씨(1) or 화씨→섭씨(2): ");
	scanf("%d", &sel);
	if (sel == 1)
	{
		printf("섭씨 입력: ");
		scanf("%lf", &a);
		//res = CelToFah(a);
		printf("결과: %f\n", CelToFah(a));
	}
	else if (sel == 2)
	{
		printf("화씨 입력: ");
		scanf("%lf", &a);
		// res = FahToCel(a);
		printf("결과: %f\n", FahToCel(a));
	}
	else printf("잘못된 입력입니다\n");
	return 0;
}
*/

// 문제 9-1-3
/*
#include <stdio.h>

// 입력된 수만큼의 피보나치 수열 출력
// 0 1 1 2 3 5 8 13 21 34 ...

int ohyy(int i)
{
	int j, num1, num2, num; num1 = 0; num2 = 1;
	if (i == 1) printf("0 ");
	else if (i == 2) printf("0 1 ");
	else if (i <= 0) printf("잘못된 입력\n");
	else
	{
		printf("0 1 ");
		for (j = 3;j <= i;j++)
		{
			num = num1 + num2;
			printf("%d ", num);
			num1 = num2; num2 = num;
		}
	}
}

int main(void)
{
	int sel;
	printf("출력할 항의 개수: ");
	scanf("%d", &sel);
	ohyy(sel);
	return 0;
}
*/

// 문제 9-2-1
/*
#include <stdio.h>

// 입력 값 누적하여 합계 출력
// 전역변수 total → static 변수
// 이때 main 함수는 변경 불가능!

// int total=0; -> 제거

int AddToTotal(int num)
{
	static int total = 0; // 추가
	total += num;
	return total;
}

int main(void)
{
	int num, i;
	for (i = 0;i < 3;i++)
	{
		printf("입력%d: ", i + 1);
		scanf("%d", &num);
		printf("누적: %d\n", AddToTotal(num));
	}
	return 0;
}
*/

