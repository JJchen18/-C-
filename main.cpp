//��Ŀ��ֲ���ս��ʬ
#include<graphics.h>
#include<stdlib.h>
#include<MMSystem.h>//�������ֵ�ͷ�ļ�
#pragma comment(lib,"winmm.lib")
int main(void) {
	initgraph(1215, 717);
	loadimage(0, "bp.jpg");
	mciSendString("play siren.mp3 repeat", 0, 0, 0);
	system("pause");
	closegraph();
	return 0;
}