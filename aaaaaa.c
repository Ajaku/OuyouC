#include <stdio.h>

int main(void)
{
	int x;
	printf("��������͂��Ă���������");
	scanf("%d",&x);

	if(x % 2 == 0)
		printf("%d�͋����ł�\n",x);
	else
		printf("%d�͊�ł�\n",x);

	return 0;
}