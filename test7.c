#include <stdio.h> //ヘッドファイルの読み込み//

int main(void){
	char a[100], *pa; //ポインタ宣言//
	int len = 0;

	printf("文字列を入力してください。\n");
	scanf("%s", a); //＆がないことに注意//

	for (pa = a; *pa; pa++)
		len++;

	printf("文字列の長さは%dです。", len);
	return 0;

}