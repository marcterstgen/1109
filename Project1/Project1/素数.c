#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int prime(int n)
{
	int i = 0;
	for (i = 2; i <= n; i++)
	{
		if (n%i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int num = 0;
	printf("������һ������:");
	scanf("%d", &num);
	int res = prime(num);
	if (res == 0)
	{
		printf("�������������\n");
	}
	else
	{
		printf("�����������\n");
	}
	system("pause");
	return 0;
}


