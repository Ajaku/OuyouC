#include <stdio.h> //�w�b�_�t�@�C���̓ǂݍ���//
int main(void){
	char a[100], *pa; //�|�C���^�錾//
	char b[100], *pb;

	printf("��������͂��Ă��������B\n");
	scanf("%s", a); //&���Ȃ����Ƃɒ���//

	for (pa = a, pb = b; *pb = *pa; pa++, pb++);

	printf("�R�s�[�������%s�ł��B\n", b);
	return 0;
}