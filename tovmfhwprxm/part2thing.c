#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


// PART 2

/*
// ���� 11-1-1
// ���� 5�� int �迭 ����, 5�� ���� �Է� ����
// �ִ�, �ּڰ�, �� �� ���
int main(void)
{
	int a, b, c, d, e;
	int i, minn, maxx, summ = 0;
	printf("5���� ���� �Է�: ");
	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
	int arr[] = { a, b, c, d, e };
	minn = arr[0]; maxx = arr[0];
	for (i = 0;i < 5;i++)
	{
		summ += arr[i];
		if (minn > arr[i])	minn = arr[i];
		if (maxx < arr[i]) maxx = arr[i];
	}
	printf("�ִ�:%d\n�ּڰ�:%d\n", maxx, minn);
	printf("�� ��: %d\n", summ);
	return 0;
}
*/

/*
// ���� 11-1-2
// char�� 1���� �迭, "Good time"
int main(void)
{
	char arr[] = { '"','G','o','o','d',' ','t','i','m','e','"' };
	for (int i = 0;i < sizeof(arr);i++)
		printf("%c ", arr[i]);
	return 0;
}
*/

/*
// ���� 11-2-1
// �ϳ��� ���ܾ� �Է�, ���� ���
// scanf_s ��� �� ���ڿ��� ũ�� �Է�
int main(void)
{
	char voca[100]; int len = 0;
	printf("���ܾ� �ϳ� �Է�: ");
	scanf_s("%s", voca, 100);
	while (voca[len] != '\0') len++;
	printf("����: %d\n", len);
	return 0;
}
*/

/*
// ���� 11-2-2
// ���ܾ� �Է� char�� �迭�� ����
// �������� ������ ���
int main(void)
{
	char voca[50]; int len = 0;
	printf("���ܾ� �ϳ� �Է�: ");
	scanf_s("%s", voca, 50);
	while (voca[len] != '\0') len++;
	int num = len - 1;
	for (int i = 0;i <= num / 2;i++)
	{
		char save;
		save = voca[i];
		voca[i] = voca[num - i]; voca[num - i] = save;
	}
	printf("���: %s\n", voca);
	return 0;
}
*/

/*
// ���� 11-2-3
// ���ܾ� �Է� -> ���� ū �ƽ�Ű �ڵ��� ���� ã��
int main(void)
{
	char voca[100]; int len = 0; int max = 0;
	printf("���ܾ� �ϳ� �Է�: ");
	scanf_s("%s", voca, 100);
	while (voca[len] != '\0') len++;
	for (int i = 0;i < len;i++)
	{
		if (max < voca[i]) max = voca[i];
	}
	printf("���: %c\n", max);
	return 0;
}
*/

/*
// ���� 12-1-2
int main(void)
{
	int num1=10, num2=20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	printf("%d %d \n", *ptr1, *ptr2);
	*ptr1 = *ptr1 + 10;
	*ptr2 = *ptr2 - 10;
	printf("%d %d \n", *ptr1, *ptr2);
	int* ptr;
	ptr = ptr1; ptr1 = ptr2; ptr2 = ptr;
	printf("%d %d \n", *ptr1, *ptr2);
	return 0;
}
*/

/*
// ���� 13-1-1
// ���� 5�� int�� �迭 arr ���� (1,2,3,4,5)
// ù ��° ��� ����Ű�� ������ ���� ptr
// ��� �迭��� �� 2�� ���� �� Ȯ��
int main(void)
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int* ptr = arr;
	for (int i = 0;i < 5;i++)
	{
		*ptr += 2;
		printf("%d ", arr[i]);
		ptr++;
	}
	return 0;
}
*/

/*
// ���� 13-1-2
// ptr ��� ���� ������ �Ͽ� 2�� ����
int main(void)
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int* ptr = arr;
	for (int i = 0;i < 5;i++)
	{
		*(ptr+i) += 2;
		printf("%d ", arr[i]);
	}
	return 0;
}
*/

/*
// ���� 13-1-3
// int�� �迭 arr ���� 5 (1,2,3,4,5)
// ������ ����Ű�� ������ ���� ptr
// ptr ����� �� ���ҽ�Ű�� ���·� ���ϱ�
int main(void)
{
	int arr[] = { 1,2,3,4,5 };
	int* ptr = &arr[4];
	int sum=0;
	for (int i = 5;i > 0;i--)
	{
		sum += *ptr;
		ptr--;
	}
	printf("%d ", sum);
	return 0;
}
*/

/*
// ���� 13-1-4
// ���� 6 int�� �迭 arr (1,2,3,4,5,6)
// �迭�� ����� ���� �ڹٲٱ�
// ������ ���� �� �� ���� �� Ȱ��
int main(void)
{
	int arr[] = { 1,2,3,4,5,6 };
	int* ptr1 = &arr[0];
	int* ptr2 = &arr[5];
	int k;
	for (int i = 0;i < 3;i++)
	{
		k = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = k;
		ptr1++; ptr2--;
	}
	for (int j = 0;j < 6;j++)
		printf("%d ", arr[j]);
	return 0;
}
*/

/*
// ���� 14-1-1
// ���� num�� ����� ���� ������ ���
// Call-by-value ����� SquareByValue �Լ�
// Call-by-reference ����� SquareByReference �Լ�
int SquareByValue(int i)
{
	return i * i;
}
int SquareByReference(int* num)
{
	*num = *num * *num;
}
int main(void)
{
	int num = 4;
	printf("���� num: %d\n", num);
	printf("1�� ���: %d\n", SquareByValue(num));
	SquareByReference(&num);
	printf("2�� ���: %d\n", num);
	return 0;
}
*/

/*
// ���� 14-1-2
// �� ������ �� ���� �ڹٲٴ� �Լ�
// Swap3(&num1, &num2, &num3) -> num3, num1, num2
int Swap3(int* num1, int* num2, int* num3)
{
	int el;
	el = *num1; *num1 = *num3;
	*num3 = *num2; *num2 = el;
}
int main(void)
{
	int* num1; int* num2; int* num3;
	printf("�� ���� �Է�: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	Swap3(&num1, &num2, &num3);
	printf("���: %d %d %d", num1, num2, num3);
	return 0;
}
*/
