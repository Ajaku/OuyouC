#include <stdio.h>
int input(void);
int main(void){
	int x, ans;
	x = input();
	ans = x * x;
	printf("二乗は%dです\n", ans);
	return 0;
}

int input(void){

	int x;
	printf("整数を入力してください\n");
	scanf("%d", &x);
	return x;
}