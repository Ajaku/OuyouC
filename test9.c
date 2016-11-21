#include <stdio.h>
int input(void);
int main(void){
	int x, ans;
	x = input();
	ans = x * x;
	printf("“ñæ‚Í%d‚Å‚·\n", ans);
	return 0;
}

int input(void){

	int x;
	printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf("%d", &x);
	return x;
}