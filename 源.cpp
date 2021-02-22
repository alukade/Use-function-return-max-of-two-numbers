#include<stdio.h>

int max(int, int);

int max(int x, int y)//形参
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a, b, c;//就算是xy，也与上面不冲突，只是这样比较规范

	printf("请输入两个整数：");
	scanf_s("%d%d", &a, &b);

	c=max(a, b);//实参,与上面的形参在格式鱼形式上都是对应的
	printf("他们中较大的值是:%d", c);
	return 0;
}