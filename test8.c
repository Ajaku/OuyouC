#include <stdio.h> //ヘッダファイルの読み込み//
int main(void){
	char a[100], *pa; //ポインタ宣言//
	char b[100], *pb;

	printf("文字を入力してください。\n");
	scanf("%s", a); //&がないことに注意//

	for (pa = a, pb = b; *pb = *pa; pa++, pb++);

	printf("コピー文字列は%sです。\n", b);
	return 0;
}