
//5個の整数を配列に入力し、その最大値を見つけて表示せよ

/*
#include <stdio.h>

int main(void){

	int a[5];
	int max=0, i;

	printf("整数を5つ入力してください\n");

	for(i=0; i<5; i++){
		scanf("%d",&a[i]);

		if(max<a[i]){
			max = a[i];
		}
	}

	printf("最大値は%dです\n", max);

	return 0;
}
*/

/*	100文字(ヌル字を含む)格納できる文字配列に
	文字列を入力し、その文字数(ヌル字を含まない)を
	計算せよ。ポインタは使用すること*/

/*
#include <stdio.h>

int main(void){

	char a[100], *pa;
	int len=0;

	printf("100文字以下の文字列を入力してください\n");
	scanf("%s",a);

	for (pa=a; *pa; pa++){
		len++;
	}

	printf("文字数の長さは%dです。\n", len);

	return 0;
}
*/

/*	長方形の2辺の長さ(整数)を入力し、その面積を計算せよ。
	面積は関数にすること。*/

/*
#include <stdio.h>

int main(void){

	int w, h, s;

	printf("幅を入力してください。\n");
	scanf("%d", &w);
	printf("高さを入力してください。\n");
	scanf("%d", &h);

	s = Area(w,h);

	printf("面積の値は%dです\n", s);

	return 0;

}

int Area(int w, int h){
	int a;

	a = w * h;

	return a;
}
*/

/*	学生の名前(文字列)、番号(整数)、評価(整数1~5)
	を表す構造体を作り、そのデータを入力し表示せよ。*/

#include <stdio.h>

struct Student{
	char name[100];
	int no;
	int grade[10];
};

int main(void){

	struct Student st;
	printf("名前\n");
	scanf("%s", st.name);
	printf("番号\n");
	scanf("%d", &st.no);
	printf("評価\n");
	scanf("%d",&st.grade);
	printf("名前：%s\n番号：%d\n評価：%d\n",st.name, st.no, st.grade);

	return 0;
}

