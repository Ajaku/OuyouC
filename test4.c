#include <stdio.h>

int main(void)
{
	int x;
	printf("整数を入力してください");
	scanf("%d",&x);
	if (x < 0)
		x = -x;

	printf("絶対値は%dです\n", x);

	}