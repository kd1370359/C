#include<stdio.h>
main()
{
	int goukei, ia;//�����^�ϐ�goukei,ia�̐錾
	goukei = 0;//�ϐ�goukei��0�Ƀ��Z�b�g
	printf("��������");//���͂𑣂��\��
	scanf("%d", &ia);//�ϐ�ia�ɃL�[�{�[�h����
	while (ia != -999) {//ia���[�X�X�X�łȂ���΃��[�v
		goukei += ia;//�ϐ�goukei��ia�𑫂����킹��
		printf("��������");//���͂𑣂�
		scanf("%d", &ia);//�ϐ�ia�ɃL�[�{�[�h����
	}//���[�v�̏I��
	printf("���v=%d\n", goukei);//���v�l�̕\��
}