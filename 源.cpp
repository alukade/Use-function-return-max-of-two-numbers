#include<stdio.h>

int max(int, int);

int max(int x, int y)//�β�
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a, b, c;//������xy��Ҳ�����治��ͻ��ֻ�������ȽϹ淶

	printf("����������������");
	scanf_s("%d%d", &a, &b);

	c=max(a, b);//ʵ��,��������β��ڸ�ʽ����ʽ�϶��Ƕ�Ӧ��
	printf("�����нϴ��ֵ��:%d", c);
	return 0;
}