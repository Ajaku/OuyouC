
//5�̐�����z��ɓ��͂��A���̍ő�l�������ĕ\������

/*
#include <stdio.h>

int main(void){

	int a[5];
	int max=0, i;

	printf("������5���͂��Ă�������\n");

	for(i=0; i<5; i++){
		scanf("%d",&a[i]);

		if(max<a[i]){
			max = a[i];
		}
	}

	printf("�ő�l��%d�ł�\n", max);

	return 0;
}
*/

/*	100����(�k�������܂�)�i�[�ł��镶���z���
	���������͂��A���̕�����(�k�������܂܂Ȃ�)��
	�v�Z����B�|�C���^�͎g�p���邱��*/

/*
#include <stdio.h>

int main(void){

	char a[100], *pa;
	int len=0;

	printf("100�����ȉ��̕��������͂��Ă�������\n");
	scanf("%s",a);

	for (pa=a; *pa; pa++){
		len++;
	}

	printf("�������̒�����%d�ł��B\n", len);

	return 0;
}
*/

/*	�����`��2�ӂ̒���(����)����͂��A���̖ʐς��v�Z����B
	�ʐς͊֐��ɂ��邱�ƁB*/

/*
#include <stdio.h>

int main(void){

	int w, h, s;

	printf("������͂��Ă��������B\n");
	scanf("%d", &w);
	printf("��������͂��Ă��������B\n");
	scanf("%d", &h);

	s = Area(w,h);

	printf("�ʐς̒l��%d�ł�\n", s);

	return 0;

}

int Area(int w, int h){
	int a;

	a = w * h;

	return a;
}
*/

/*	�w���̖��O(������)�A�ԍ�(����)�A�]��(����1~5)
	��\���\���̂����A���̃f�[�^����͂��\������B*/

#include <stdio.h>

struct Student{
	char name[100];
	int no;
	int grade[10];
};

int main(void){

	struct Student st;
	printf("���O\n");
	scanf("%s", st.name);
	printf("�ԍ�\n");
	scanf("%d", &st.no);
	printf("�]��\n");
	scanf("%d",&st.grade);
	printf("���O�F%s\n�ԍ��F%d\n�]���F%d\n",st.name, st.no, st.grade);

	return 0;
}

