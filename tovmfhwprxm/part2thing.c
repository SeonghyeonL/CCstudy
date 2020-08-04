#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


// PART 2

/*
// 문제 11-1-1
// 길이 5인 int 배열 선언, 5개 정수 입력 받자
// 최댓값, 최솟값, 총 합 출력
int main(void)
{
	int a, b, c, d, e;
	int i, minn, maxx, summ = 0;
	printf("5개의 정수 입력: ");
	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
	int arr[] = { a, b, c, d, e };
	minn = arr[0]; maxx = arr[0];
	for (i = 0;i < 5;i++)
	{
		summ += arr[i];
		if (minn > arr[i])	minn = arr[i];
		if (maxx < arr[i]) maxx = arr[i];
	}
	printf("최댓값:%d\n최솟값:%d\n", maxx, minn);
	printf("총 합: %d\n", summ);
	return 0;
}
*/

/*
// 문제 11-1-2
// char형 1차원 배열, "Good time"
int main(void)
{
	char arr[] = { '"','G','o','o','d',' ','t','i','m','e','"' };
	for (int i = 0;i < sizeof(arr);i++)
		printf("%c ", arr[i]);
	return 0;
}
*/

/*
// 문제 11-2-1
// 하나의 영단어 입력, 길이 출력
// scanf_s 사용 시 문자열은 크기 입력
int main(void)
{
	char voca[100]; int len = 0;
	printf("영단어 하나 입력: ");
	scanf_s("%s", voca, 100);
	while (voca[len] != '\0') len++;
	printf("길이: %d\n", len);
	return 0;
}
*/

/*
// 문제 11-2-2
// 영단어 입력 char형 배열에 저장
// 역순으로 뒤집고 출력
int main(void)
{
	char voca[50]; int len = 0;
	printf("영단어 하나 입력: ");
	scanf_s("%s", voca, 50);
	while (voca[len] != '\0') len++;
	int num = len - 1;
	for (int i = 0;i <= num / 2;i++)
	{
		char save;
		save = voca[i];
		voca[i] = voca[num - i]; voca[num - i] = save;
	}
	printf("결과: %s\n", voca);
	return 0;
}
*/

/*
// 문제 11-2-3
// 영단어 입력 -> 가장 큰 아스키 코드인 문자 찾기
int main(void)
{
	char voca[100]; int len = 0; int max = 0;
	printf("영단어 하나 입력: ");
	scanf_s("%s", voca, 100);
	while (voca[len] != '\0') len++;
	for (int i = 0;i < len;i++)
	{
		if (max < voca[i]) max = voca[i];
	}
	printf("결과: %c\n", max);
	return 0;
}
*/

/*
// 문제 12-1-2
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
// 문제 13-1-1
// 길이 5인 int형 배열 arr 선언 (1,2,3,4,5)
// 첫 번째 요소 가리키는 포인터 변수 ptr
// 모든 배열요소 값 2씩 증가 후 확인
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
// 문제 13-1-2
// ptr 대상 덧셈 연산을 하여 2씩 증가
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
// 문제 13-1-3
// int형 배열 arr 길이 5 (1,2,3,4,5)
// 마지막 가리키는 포인터 변수 ptr
// ptr 저장된 값 감소시키는 형태로 더하기
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
// 문제 13-1-4
// 길이 6 int형 배열 arr (1,2,3,4,5,6)
// 배열에 저장된 순서 뒤바꾸기
// 포인터 변수 두 개 선언 후 활용
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
// 문제 14-1-1
// 변수 num에 저장된 값의 제곱을 계산
// Call-by-value 기반의 SquareByValue 함수
// Call-by-reference 기반의 SquareByReference 함수
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
	printf("변수 num: %d\n", num);
	printf("1번 결과: %d\n", SquareByValue(num));
	SquareByReference(&num);
	printf("2번 결과: %d\n", num);
	return 0;
}
*/

/*
// 문제 14-1-2
// 세 변수의 값 서로 뒤바꾸는 함수
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
	printf("세 정수 입력: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	Swap3(&num1, &num2, &num3);
	printf("결과: %d %d %d", num1, num2, num3);
	return 0;
}
*/
