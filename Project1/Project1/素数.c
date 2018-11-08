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
	printf("请输入一个整数:");
	scanf("%d", &num);
	int res = prime(num);
	if (res == 0)
	{
		printf("这个数不是素数\n");
	}
	else
	{
		printf("这个数是素数\n");
	}
	system("pause");
	return 0;
}


