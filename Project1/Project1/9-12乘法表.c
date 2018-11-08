#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mul(int n){
	int i, j;
	for(i = 1; i<=n; i++){
		for (j = 1; j <= n; j++){
		printf("%d*%d=%d ", i, j, i*j);
		}
		printf("\n");

	}

}
int main(){
	int n = 0;
	printf("请输入口诀表的行数：");
	scanf("%d", &n);
	mul(n);
    system("pause");
	return 0;

}
