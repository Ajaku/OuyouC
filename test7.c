#include <stdio.h> //�w�b�h�t�@�C���̓ǂݍ���//

int main(void){
	char a[100], *pa; //�|�C���^�錾//
	int len = 0;

	printf("���������͂��Ă��������B\n");
	scanf("%s", a); //�����Ȃ����Ƃɒ���//

	for (pa = a; *pa; pa++)
		len++;

	printf("������̒�����%d�ł��B", len);
	return 0;

}