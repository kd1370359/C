#include<stdio.h>
main()
{
	int maxscore,score = 0;
	char ch, maxname[20],name[20];
	FILE* fp;
	//score.txt����̓ǂݍ���
	//1.�t�@�C���̃I�[�v��
	fp = fopen("score.txt", "r");
	//2.maxname,maxscore�̓ǂݍ���
	fscanf(fp, "%s%d", maxname, &maxscore);
	//3.�t�@�C���̃N���[�Y
	fclose(fp);
	//4.��ʏ�ɍō����_�҂̏���\��
	printf("�ō����_ ���O:%s �X�R�A:%d", maxname, maxscore);
	printf("�v���C���[�̖��O:");
	scanf("%s", name);
	while (1) {
		printf("���݂̃X�R�A:%d('e'�ŏI��)\n",score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		score++;
	}
	if (score > maxscore) {
		//�t�@�C����������
		//1.�t�@�C���̃I�[�v��
		fp = fopen("score.txt", "w");
		//2.�t�@�C���ւ�name��score�̏�������
		fprintf(fp, "%s\n%d\n", name, score);
		//3.�t�@�C���̃N���[�Y
		fclose(fp);
		printf("�n�C�X�R�A�X�V\n");
	}
}