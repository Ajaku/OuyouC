#include <stdio.h>
int input(void);
int main(void){
	int x, ans;
	x = input();
	ans = x * x;
	printf("����%d�ł�\n", ans);
	return 0;
}

int input(void){

	int x;
	printf("��������͂��Ă�������\n");
	scanf("%d", &x);
	return x;
}