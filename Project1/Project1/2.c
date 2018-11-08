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
	printf("���������г�ʼ����\n");
	init(a, sz);
	printf("\n");
	printf("�������������ã�\n");
	reverse(a, sz);
	printf("\n");
	printf("��������飺\n");
	empty(a, sz);
	printf("\n");
	system("pause");
	return 0;
}
