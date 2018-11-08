#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int leapyear(int year)
{
	if((year%4==0&&year/100!=0)||(year%400 == 0))
		return 1;
else
return 0;
}
int main(){
	int a = 0;
	int b = 0;
	printf("请输入年份：");
	scanf("%d", &a);
	b=leapyear(a);
	if(b==1)
		printf("是闰年\n");
else
printf("不是闰年\n");
system("pause");
return 0;
}
