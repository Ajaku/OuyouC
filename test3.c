#include <stdio.h>

int main(void)
{
	int x;
	printf("整数を入力してください＞");
	scanf("%d",&x);

	if(x % 2 == 0)
		printf("%dは偶数です\n",x);
	else
		printf("%dは奇数です\n",x);

	return 0;
}