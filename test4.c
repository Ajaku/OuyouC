#include <stdio.h>

int main(void)
{
	int x;
	printf("��������͂��Ă�������");
	scanf("%d",&x);
	if (x < 0)
		x = -x;

	printf("��Βl��%d�ł�\n", x);

	}