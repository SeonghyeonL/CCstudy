
// part 1


// ���� 2-1-1
/*
#include <stdio.h>
int main(void)
{
	printf("�̼���\n�� �� ��\n��  ��  ��\n");
	return 0;
}
*/

// ���� 2-1-2
/*
#include <stdio.h>
int main(void)
{
	printf("�̸�: �̼���\n");
	printf("�ּ�: ��õ������\n");
	printf("��ȭ��ȣ: 010-1111-2222\n");
	return 0;
}
*/

// ���� 2-2-1
/*
#include <stdio.h>
int main(void)
{
	printf("�� �̸��� ȫ�浿�Դϴ�.\n");
	printf("�� ���̴� %d���̰��.\n", 20);
	printf("���� ��� ���� �������� %d-%d�Դϴ�.\n", 123, 456);
	return 0;
}
*/

// ���� 2-2-2
/*
#include <stdio.h>
int main(void)
{
	printf("%dX%d=%d\n", 4, 5, 20);
	printf("%dX%d=%d\n", 7, 9, 63);
	return 0;
}
*/

// ���� 3-1-1
/*
#include <stdio.h>
int main(void)
{
	int a, b;
	printf("�� ���� ���� : ");
	scanf("%d %d", &a, &b);
	printf("%d-%d=%d\n", a, b, a - b);
	printf("%dX%d=%d\n", a, b, a * b);
	return 0;
}
*/

// ���� 3-1-2
/*
#include <stdio.h>
int main(void)
{
	int num1, num2, num3;
	printf("�� ���� ���� : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("%dx%d+%d=%d\n", num1, num2, num3, num1 * num2 + num3);
	return 0;
}
*/

// ���� 3-1-3
/*
#include <stdio.h>
int main(void)
{
	int a, b;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &a);
	b = a * a;
	printf("%d�� ���� : %d\n", a, b);
	return 0;
}
*/

// ���� 3-1-4
/*
#include <stdio.h>
int main(void)
{
	int a, b;
	printf("�� ������ �Է��Ͻÿ� : ");
	scanf("%d %d", &a, &b);
	printf("%d/%d�� ���� %d�̰� �������� %d�Դϴ�\n", a, b, a / b, a % b);
	return 0;
}
*/

// ���� 3-1-5
/*
#include <stdio.h>
int main(void)
{
	int num1, num2, num3, ans;
	printf("�� ������ �Է��Ͻÿ� : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	ans = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("���� ���: %d\n", ans);
	return 0;
}

// ����� ���� �ĵ� ȭ�鿡 ��Ÿ���� �ϰ� ������ num3%num1�� �ش��ϴ� �κ���
// "%d % %d"�� ���� ���ϴ� ���·� ����� ���� ���� - �̸� ��� �ϸ� ������,,,
// % ��� -> %%
*/

// ���� 4-4-1
/*
#include <stdio.h>
int main(void)
{
	int a, b;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &a);
	b = ~a + 1;
	printf("���: %d\n", b);
	return 0;
}
*/

// ���� 4-4-2
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

// ���� 5-1-1
/*
#include <stdio.h>
int main(void)
{
	int x1, y1, x2, y2, ans;
	printf("�� ����� x, y ��ǥ ���� �� �ϴ��� x, y ��ǥ ������ ����\n");
	printf("�� ����� x, y ��ǥ: ");
	scanf("%d %d", &x1, &y1);
	printf("�� ����� x, y ��ǥ: ");
	scanf("%d %d", &x2, &y2);
	ans = (x2 - x1) * (y2 - y1);
	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�.\n", ans);
	return 0;
}
*/

// ���� 5-1-2
/*
#include <stdio.h>
int main(void)
{
	double a, b;
	printf("�� ���� �Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &a, &b);
	// scanf���� f:float lf:double Lf:longdouble
	// printf������ f:float&double Lf:longdouble
	printf("%f+%f=%f\n", a, b, a + b);
	printf("%f-%f=%f\n", a, b, a - b);
	printf("%fx%f=%f\n", a, b, a * b);
	printf("%f/%f=%f\n", a, b, a / b);
	return 0;
}
*/

// ���� 5-1-4
/*
#include <stdio.h>
int main(void)
{
	int a;
	printf("����(0~127)�� �Է��Ͻÿ�: ");
	scanf("%d", &a);
	printf("�ƽ�Ű �ڵ� ����: %c\n", a);
	return 0;
}
*/

// ���� 5-1-5
/*
#include <stdio.h>
int main(void)
{
	char a;
	printf("1���� ���ĺ� �Է�: ");
	scanf("%c", &a);
	printf("�ƽ�Ű �ڵ� ��: %d\n", a);
	return 0;
}
*/

// ���� 7-1-1
/*
#include <stdio.h>
int main(void)
{
	int a;
	printf("1���� ���� ����: ");
	scanf("%d", &a);
	while (a > 0)
	{
		printf("Hello world!\n");
		a = a - 1;
	}
	return 0;
}
*/

// ���� 7-1-2
/*
#include <stdio.h>
int main(void)
{
	int a, b;
	printf("1���� ���� ����: ");
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

// ���� 7-1-3
/*
#include <stdio.h>
int main(void)
{
	int a, b;
	a = 1; b = 0;
	printf("������ �Է��Ͻÿ� (0=����)\n");
	while (a != 0)
	{
		scanf("%d", &a);
		b = b + a;
	}
	printf("�Էµ� ������ ��: %d\n", b);
	return 0;
}
*/

// ���� 7-1-4
/*
#include <stdio.h>
int main(void)
{
	int a, b; b = 9;
	printf("����(1~9): ");
	scanf("%d", &a);
	while (b > 0)
	{
		printf("%d ", a * b);
		b -= 1;
	}
	return 0;
}
*/

// ���� 7-1-5
/*
#include <stdio.h>
int main(void)
{
	int a, b, ord, sum; double av;
	ord = 0; sum = 0;
	printf("�Է��� ������ ����: ");
	scanf("%d", &a);
	while (ord < a)
	{
		printf("%d��° ����: ", ord + 1);
		scanf("%d", &b);
		sum = sum + b;
		ord = ord + 1;
	}
	av = sum / a;
	printf("���: %f\n", av);
	return 0;
}
*/

// ���� 7-2-1
/*
#include <stdio.h>
int main(void)
{
	int i, num, sum; i = 0; sum = 0;
	printf("���� 5���� �� (����: 1 �̻��� ����)\n");
	while (i < 5)
	{
		printf("%d��° ����: ", i + 1);
		scanf("%d", &num);
		while (num < 1)
		{
			printf("���ǿ� �°� �Է��ϼ���: ");
			scanf("%d", &num);
		}
		sum = sum + num;  // sum+=num;
		i++;
	}
	printf("���: %d\n", sum);
	return 0;
}
*/

// ���� 7-2-2
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

// ���� 7-3-1 - ��� 1
/*
#include <stdio.h>
int main(void)
{
	int total = 0, num = 1;

	while (num != 0)
	{
		printf("���� �Է�(0 to quit): ");
		scanf("%d", &num);
		total += num;
	}
	printf("�հ�: %d\n", total);
	return 0;
}
*/

// ���� 7-3-1 - ��� 2
/*
#include <stdio.h>
int main(void)
{
	int total = 0, num = 0;
	printf("���� �Է�(0 to quit): ");
	scanf("%d", &num);
	while (num != 0)
	{
		total += num;
		printf("���� �Է�(0 to quit): ");
		scanf("%d", &num);
	}
	printf("�հ�: %d\n", total);
	return 0;
}
*/

// ���� 7-3-2
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
	printf("���: %d\n", sum);
	return 0;
}
*/

// ���� 7-3-3
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

// ���� 7-4-1
/*
#include <stdio.h>
int main(void)
{
	int n1, n2, i, sum = 0;
	printf("�� ���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &n1, &n2);
	for (i = n1;i <= n2;i++)
	{
		sum += i;
	}
	printf("���: %d\n", sum);
	return 0;
}
*/

// ���� 7-4-2
/*
#include <stdio.h>
int main(void)
{
	int n1, i, ans = 1;
	printf("���丮�� ����� ���� ���� �Է�: ");
	scanf("%d", &n1);
	for (i = 1;i <= n1;i++)
	{
		ans = ans * i;
	}
	printf("���: %d\n", ans);
	return 0;
}
*/

// ���� 8-1-1
/*
#include <stdio.h>
int main(void)
{
	// 1 �̻� 100 �̸� ���� �� 7�� ����� 9�� ����� ���
	// ��, 7�� ����̸鼭 9�� ����� ���� �� ���� ���
	int i;
	printf("1���� 99������ 7 �� 9�� ���\n");
	for (i = 1;i < 100;i++)
	{
		if (i % 7 == 0 || i % 9 == 0)
			printf("%d ", i);
	}
	return 0;
}
*/

// ���� 8-1-2
/*
#include <stdio.h>
int main(void)
{
	// �� ���� ������ �� ��� (���� ����, ū �� - ���� ��)
	int a, b;
	printf("�� ���� ����: ");
	scanf("%d %d", &a, &b);
	if (a >= b)
		printf("%d-%d=%d\n", a, b, a - b);
	else
		printf("%d-%d=%d\n", b, a, b - a);
	return 0;
}
*/

// ���� 8-1-3
/*
#include <stdio.h>
int main(void)
{
	// �л� ��ü ������� (������� ����, ����, ����)
	// ���=����) 90��~ A, 80��~ B, 70��~ C, 50��~ D, ������ F
	int a, b, c; double d; char grad;
	printf("���� ����: ");	scanf("%d", &a);
	printf("���� ����: ");	scanf("%d", &b);
	printf("���� ����: ");	scanf("%d", &c);
	d = (a + b + c) / 3.0; // �Ǽ� ���·� ������ d�� �Ҽ��� �� ����
	if (d >= 90) grad = 65; // A
	else if (d >= 80) grad = 66; // B
	else if (d >= 70) grad = 67; // C
	else if (d >= 50) grad = 68; // D
	else grad = 70; // F
	printf("���: %f --- %c\n", d, grad);
	return 0;
}
*/

// ���� 8-1-4
/*
#include <stdio.h>
int main(void)
{
	// ���� 2 - ���� ������ �̿�
	int a, b, ans;
	printf("�� ���� ����: ");
	scanf("%d %d", &a, &b);
	ans = a >= b ? a - b : b - a;
	printf("��=%d\n", ans);
	return 0;
}
*/

// ���� 8-2-1
/*
#include <stdio.h>
int main(void)
{
	// ������ �� 2��, 4��, 6��, 8�ܸ� nxn���� ���
	// continue�� break ����� ��
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

// ���� 8-2-2
/*
#include <stdio.h>
int main(void)
{
	// AZ+ZA=99 �����ϴ� ��� A�� Z ã��
	// �ݺ����� ��ø �ʿ�
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

// ���� 8-3-1
/*
#include <stdio.h>
int main(void)
{
	int n, m;
	printf("���� ������ �Է�: ");
	scanf("%d", &n);
	m = n / 10;
	switch (m)
	{
	case 0:
		printf("0�̻� 10�̸�\n"); break;
	case 1:
		printf("10�̻� 20�̸�\n"); break;
	case 2:
		printf("20�̻� 30�̸�\n"); break;
	default:
		printf("30�̻�\n");
	}
	return 0;
}
*/

// ���� 9-1-1
/*
#include <stdio.h>
int main(void)
{
	// �� ���� ������ ���ڷ� ����
	// ���� ū �� ��ȯ or ���� ���� �� ��ȯ
	int i, j, k, res1, res2;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d %d", &i, &j, &k);
	res1 = LARGG(i, j, k); res2 = SMALLL(i, j, k);
	printf("���� ū �� %d, ���� ���� �� %d\n", res1, res2);
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

// ���� 9-1-2
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
	// ������ȭ�� / ȭ���漷�� (Fah=1.8*Cel+32)
	int sel; double a, res;
	printf("������ȭ��(1) or ȭ���漷��(2): ");
	scanf("%d", &sel);
	if (sel == 1)
	{
		printf("���� �Է�: ");
		scanf("%lf", &a);
		//res = CelToFah(a);
		printf("���: %f\n", CelToFah(a));
	}
	else if (sel == 2)
	{
		printf("ȭ�� �Է�: ");
		scanf("%lf", &a);
		// res = FahToCel(a);
		printf("���: %f\n", FahToCel(a));
	}
	else printf("�߸��� �Է��Դϴ�\n");
	return 0;
}
*/

// ���� 9-1-3
/*
#include <stdio.h>

// �Էµ� ����ŭ�� �Ǻ���ġ ���� ���
// 0 1 1 2 3 5 8 13 21 34 ...

int ohyy(int i)
{
	int j, num1, num2, num; num1 = 0; num2 = 1;
	if (i == 1) printf("0 ");
	else if (i == 2) printf("0 1 ");
	else if (i <= 0) printf("�߸��� �Է�\n");
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
	printf("����� ���� ����: ");
	scanf("%d", &sel);
	ohyy(sel);
	return 0;
}
*/

// ���� 9-2-1
/*
#include <stdio.h>

// �Է� �� �����Ͽ� �հ� ���
// �������� total �� static ����
// �̶� main �Լ��� ���� �Ұ���!

// int total=0; -> ����

int AddToTotal(int num)
{
	static int total = 0; // �߰�
	total += num;
	return total;
}

int main(void)
{
	int num, i;
	for (i = 0;i < 3;i++)
	{
		printf("�Է�%d: ", i + 1);
		scanf("%d", &num);
		printf("����: %d\n", AddToTotal(num));
	}
	return 0;
}
*/

