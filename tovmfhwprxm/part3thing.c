#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int v[4][2];
	int p, i, j, k;
	for (i = 1;i < 5;i++)
	{
		for (j = 1;j < 3;j++)
		{
			printf("%d類 %d�� 檣掘熱: ", i, j);
			scanf_s("%d", &v[i - 1][j - 1]);
		}
	}
	for (k = 1;k < 5;k++)
	{
		p = 0;
		p += v[k - 1][0] + v[k - 1][1];
		printf("%d類 檣掘熱: %d\n", k, p);
	}
	return 0;
}