#include <stdio.h>
int main(void)
{
	int x;
	printf("点数を入力してください：０～１００点\n");
	scanf("%d",&x);

	if(80 <= x && x<= 100
		)
		printf("%d点は優です\n",x);
	else if(70 <= x && x<80)
		printf("%d点は優です\n",x);
	else if(60 <= x && x<70)
		printf("%d点は優です\n",x);
	else if(0 <= x && x<60)
		printf("%d点は不可です\n",x);
	else if(x==810 || x==114514)
		printf("%d点は淫夢です\n",x);
	else
		printf("%d点は入力ミスです\n",x);

	return 0;
}