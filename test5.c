#include <stdio.h>
int main(void)
{
	int x;
	printf("�_������͂��Ă��������F�O�`�P�O�O�_\n");
	scanf("%d",&x);

	if(80 <= x && x<= 100
		)
		printf("%d�_�͗D�ł�\n",x);
	else if(70 <= x && x<80)
		printf("%d�_�͗D�ł�\n",x);
	else if(60 <= x && x<70)
		printf("%d�_�͗D�ł�\n",x);
	else if(0 <= x && x<60)
		printf("%d�_�͕s�ł�\n",x);
	else if(x==810 || x==114514)
		printf("%d�_�͈����ł�\n",x);
	else
		printf("%d�_�͓��̓~�X�ł�\n",x);

	return 0;
}