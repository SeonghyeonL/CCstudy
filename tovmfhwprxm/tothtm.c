// 도전 프로그래밍 1
// 내용 

#include <stdio.h>


// 도전 1
int main(void)
{
	// 10진수 입력 -> 16진수 출력
	int a;
	printf("0 이상의 10진수 입력: ");
	scanf_s("%d", &a);
	printf("16진수: %x", a);
	// %x는 부호 없는 16진수 정수
	// %o는	부호 없는 8진수 정수
	return 0;
}


/*
// 도전 2
// 두 개의 정수를 받아서 구구단 출력

int gugudan(int i)
{
	for (int j = 1;j < 10;j++)
	{
		printf("%dx%d=%d\n", i, j, i * j);
	}
}

int main(void)
{
	int a, b, i;
	printf("두 개의 정수 입력(1~9): ");
	scanf_s("%d %d", &a, &b);
	if (a > 9 || a < 1) printf("잘못된 입력입니다");
	else if (b > 9 || b < 1) printf("잘못된 입력입니다");
	else
	{
		if (a >= b)
		{
			for (i = b; i <= a; i++) gugudan(i);
		}
		else
		{
			for (i = a;i <= b; i++) gugudan(i);
		}
	}
	return 0;
}
*/

/*
// 도전 3
// 정수 두 개 입력, 최대공약수 출력

int main(void)
{
	int a, b, i;
	printf("양의 정수 2개: ");
	scanf_s("%d %d", &a, &b);
	for(i=b; i>0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("최대공약수는 %d\n", i);
			break;
		}
	}
	return 0;
}
*/

/*
// 도전 4
// 5000원 → DVD → 3500원
// 잔돈 안 남기기, 하나 이상씩 반드시
// 크림빵 500, 새우깡 700, 콜라 400

int main(void)
{
	printf("현재 당신이 소유하고 있는 금액: 3500\n");
	int cream, sae, cola, total;
	for (cream = 1;cream<8;cream++)
	{
		for (sae = 1;sae<6;sae++)
		{
			for (cola = 1;cola<9;cola++)
			{
				total = cream * 500 + sae * 700 + cola * 400;
				if (total == 3500)
					printf("크림빵 %d개, 새우깡 %d개, 콜 라 %d개\n", cream, sae, cola);
			}
		}
	}
	printf("어떻게 구입하시겠습니까?\n");
	return 0;
}
*/

/*
// 도전 5
// 10개의 소수를 출력
// 2 3 5 7 11 13 17 19 23 29

int main(void)
{
	int i, j, k;
	for (i = 1;i < 30;i++)
	{
		k = 2;
		for (j = 2;j < i;j++)
		{
			if (i % j == 0) break;
			else k = k + 1;
		}
		if(k==i) printf("%d ", i);
	}
	return 0;
}
*/

/*
// 도전 6
// 초 입력 → 시, 분, 초로 출력

int main(void)
{
	int i, h, m, s;
	printf("초(second) 입력: ");
	scanf_s("%d", &i);
	h = i / 3600;
	m = (i - 3600 * h) / 60;
	s = i - 3600 * h - 60 * m;
	printf("[h:%d, m:%d, s:%d]", h, m, s);
	return 0;
}
*/

/*
// 도전 7
// 숫자 n 입력 → 2^k<=n 만족 최대 k 출력

int tmd(int i)
{
	int j = 1, k;
	if (i == 0) j = 1;
	else if (i > 0)
	{
		for (k = 1;k <= i;k++)
			j = j * 2;
	}
	else if (i < 0)
	{
		for (k = 1;k <= -i;k++)
			j = j / 2;
	}
	return j;
}

int main(void)
{
	int n, k;
	printf("공식: 2^k<=n (n, k는 정수)\n");
	printf("n의 값 입력(n>0): ");
	scanf_s("%d", &n);
	if (n >= 2)
	{
		for (k = 1;;k++)
		{
			if (tmd(k) <= n) continue;
			else break;
		}
		k = k - 1;
	}
	else if (n < 2)
	{
		for (k = 1;;k--)
		{
			if (tmd(k) < n) break;
			else continue;
		}
		k = k + 1;
	}
	printf("공식을 만족하는 k의 최댓값은 %d", k);
	return 0;
}
*/

/*
// 도전 8
// 2의 n승을 구하는 함수

int tmd(int i)
{
	int j = 1, k;
	if (i == 0) j = 1;
	else if (i > 0)
	{
		for (k = 1;k <= i;k++)
			j = j * 2;
	}
	else if (i < 0)
	{
		for (k = -1;k >= i;k--)
			j = j / 2;
	}
	return j;
}

int main(void)
{
	int i, j;
	printf("정수 입력: ");
	scanf_s("%d", &i);
	j = tmd(i);
	printf("2의 %d승은 %d\n", i, j);
	return 0;
}
*/