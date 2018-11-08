#include <stdio.h>
#include <stdlib.h>
void init(int a[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		a[i] = i;
		printf("%d ", a[i]);
	}
}
void empty(int a[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		a[i] = 0;
		printf("%d ", a[i]);
	}
}
void reverse(int a[], int sz)
{
	int i = 0;
	int left = 0;
	int right = sz - 1;
	for (i = 0; i < sz; i++)
	{
		while (left < right)
		{
			int tmp = a[left];
			a[left] = a[right];
			a[right] = tmp;
			left++;
			right--;
		}
		printf("%d ", a[i]);
	}
}
int main()
{
	int a[3];
	int sz = sizeof(a) / sizeof(a[0]);
	printf("请对数组进行初始化：\n");
	init(a, sz);
	printf("\n");
	printf("请对数组进行逆置：\n");
	reverse(a, sz);
	printf("\n");
	printf("请清空数组：\n");
	empty(a, sz);
	printf("\n");
	system("pause");
	return 0;
}
