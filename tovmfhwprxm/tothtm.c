// ���� ���α׷��� 1
// ���� 

#include <stdio.h>


// ���� 1
int main(void)
{
	// 10���� �Է� -> 16���� ���
	int a;
	printf("0 �̻��� 10���� �Է�: ");
	scanf_s("%d", &a);
	printf("16����: %x", a);
	// %x�� ��ȣ ���� 16���� ����
	// %o��	��ȣ ���� 8���� ����
	return 0;
}


/*
// ���� 2
// �� ���� ������ �޾Ƽ� ������ ���

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
	printf("�� ���� ���� �Է�(1~9): ");
	scanf_s("%d %d", &a, &b);
	if (a > 9 || a < 1) printf("�߸��� �Է��Դϴ�");
	else if (b > 9 || b < 1) printf("�߸��� �Է��Դϴ�");
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
// ���� 3
// ���� �� �� �Է�, �ִ����� ���

int main(void)
{
	int a, b, i;
	printf("���� ���� 2��: ");
	scanf_s("%d %d", &a, &b);
	for(i=b; i>0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("�ִ������� %d\n", i);
			break;
		}
	}
	return 0;
}
*/

/*
// ���� 4
// 5000�� �� DVD �� 3500��
// �ܵ� �� �����, �ϳ� �̻� �ݵ��
// ũ���� 500, ����� 700, �ݶ� 400

int main(void)
{
	printf("���� ����� �����ϰ� �ִ� �ݾ�: 3500\n");
	int cream, sae, cola, total;
	for (cream = 1;cream<8;cream++)
	{
		for (sae = 1;sae<6;sae++)
		{
			for (cola = 1;cola<9;cola++)
			{
				total = cream * 500 + sae * 700 + cola * 400;
				if (total == 3500)
					printf("ũ���� %d��, ����� %d��, �� �� %d��\n", cream, sae, cola);
			}
		}
	}
	printf("��� �����Ͻðڽ��ϱ�?\n");
	return 0;
}
*/

/*
// ���� 5
// 10���� �Ҽ��� ���
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
// ���� 6
// �� �Է� �� ��, ��, �ʷ� ���

int main(void)
{
	int i, h, m, s;
	printf("��(second) �Է�: ");
	scanf_s("%d", &i);
	h = i / 3600;
	m = (i - 3600 * h) / 60;
	s = i - 3600 * h - 60 * m;
	printf("[h:%d, m:%d, s:%d]", h, m, s);
	return 0;
}
*/

/*
// ���� 7
// ���� n �Է� �� 2^k<=n ���� �ִ� k ���

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
	printf("����: 2^k<=n (n, k�� ����)\n");
	printf("n�� �� �Է�(n>0): ");
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
	printf("������ �����ϴ� k�� �ִ��� %d", k);
	return 0;
}
*/

/*
// ���� 8
// 2�� n���� ���ϴ� �Լ�

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
	printf("���� �Է�: ");
	scanf_s("%d", &i);
	j = tmd(i);
	printf("2�� %d���� %d\n", i, j);
	return 0;
}
*/